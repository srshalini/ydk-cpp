#ifndef _CISCO_IOS_XR_L2VPN_OPER_1_
#define _CISCO_IOS_XR_L2VPN_OPER_1_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>

#include "Cisco_IOS_XR_l2vpn_oper_0.hpp"

namespace cisco_ios_xr {
namespace Cisco_IOS_XR_l2vpn_oper {


class L2vpnForwarding::Nodes::Node::L2fibDhcpBindingCount : public ydk::Entity
{
    public:
        L2fibDhcpBindingCount();
        ~L2fibDhcpBindingCount();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf bindings; //type: uint32

}; // L2vpnForwarding::Nodes::Node::L2fibDhcpBindingCount


class L2vpnForwarding::Nodes::Node::L2fibBridgeDomains : public ydk::Entity
{
    public:
        L2fibBridgeDomains();
        ~L2fibBridgeDomains();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class L2fibBridgeDomain; //type: L2vpnForwarding::Nodes::Node::L2fibBridgeDomains::L2fibBridgeDomain

        ydk::YList l2fib_bridge_domain;
        
}; // L2vpnForwarding::Nodes::Node::L2fibBridgeDomains


class L2vpnForwarding::Nodes::Node::L2fibBridgeDomains::L2fibBridgeDomain : public ydk::Entity
{
    public:
        L2fibBridgeDomain();
        ~L2fibBridgeDomain();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf bd_group_name; //type: string
        ydk::YLeaf bd_name; //type: string
        ydk::YLeaf bridge_id; //type: uint32
        ydk::YLeaf bridge_port_count; //type: uint32
        ydk::YLeaf number_of_hwmac; //type: uint32
        ydk::YLeaf number_of_swmac; //type: uint32
        ydk::YLeaf bridge_name; //type: string
        ydk::YLeaf shg_count; //type: uint32
        ydk::YLeaf bridge_type; //type: MgmtL2fibBridge
        ydk::YLeaf learn_key; //type: uint8
        class Base; //type: L2vpnForwarding::Nodes::Node::L2fibBridgeDomains::L2fibBridgeDomain::Base
        class Oper; //type: L2vpnForwarding::Nodes::Node::L2fibBridgeDomains::L2fibBridgeDomain::Oper
        class BdPbbUnion; //type: L2vpnForwarding::Nodes::Node::L2fibBridgeDomains::L2fibBridgeDomain::BdPbbUnion
        class BviInfo; //type: L2vpnForwarding::Nodes::Node::L2fibBridgeDomains::L2fibBridgeDomain::BviInfo
        class P2mppwInfo; //type: L2vpnForwarding::Nodes::Node::L2fibBridgeDomains::L2fibBridgeDomain::P2mppwInfo

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2vpnForwarding::Nodes::Node::L2fibBridgeDomains::L2fibBridgeDomain::Base> base;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2vpnForwarding::Nodes::Node::L2fibBridgeDomains::L2fibBridgeDomain::Oper> oper;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2vpnForwarding::Nodes::Node::L2fibBridgeDomains::L2fibBridgeDomain::BdPbbUnion> bd_pbb_union;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2vpnForwarding::Nodes::Node::L2fibBridgeDomains::L2fibBridgeDomain::BviInfo> bvi_info;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2vpnForwarding::Nodes::Node::L2fibBridgeDomains::L2fibBridgeDomain::P2mppwInfo> p2mppw_info;
        
}; // L2vpnForwarding::Nodes::Node::L2fibBridgeDomains::L2fibBridgeDomain


class L2vpnForwarding::Nodes::Node::L2fibBridgeDomains::L2fibBridgeDomain::Base : public ydk::Entity
{
    public:
        Base();
        ~Base();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;


}; // L2vpnForwarding::Nodes::Node::L2fibBridgeDomains::L2fibBridgeDomain::Base


class L2vpnForwarding::Nodes::Node::L2fibBridgeDomains::L2fibBridgeDomain::Oper : public ydk::Entity
{
    public:
        Oper();
        ~Oper();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf unicast_storm_control_pps; //type: uint64
        ydk::YLeaf unicast_storm_control_kb_ps; //type: uint64
        ydk::YLeaf broadcast_storm_control_pps; //type: uint64
        ydk::YLeaf broadcast_storm_control_kb_ps; //type: uint64
        ydk::YLeaf multicast_storm_control_pps; //type: uint64
        ydk::YLeaf multicast_storm_control_kb_ps; //type: uint64
        class OperationalInformation; //type: L2vpnForwarding::Nodes::Node::L2fibBridgeDomains::L2fibBridgeDomain::Oper::OperationalInformation

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2vpnForwarding::Nodes::Node::L2fibBridgeDomains::L2fibBridgeDomain::Oper::OperationalInformation> operational_information;
        
}; // L2vpnForwarding::Nodes::Node::L2fibBridgeDomains::L2fibBridgeDomain::Oper


class L2vpnForwarding::Nodes::Node::L2fibBridgeDomains::L2fibBridgeDomain::Oper::OperationalInformation : public ydk::Entity
{
    public:
        OperationalInformation();
        ~OperationalInformation();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf mtu; //type: uint32
        ydk::YLeaf mac_aging_time; //type: uint32
        ydk::YLeaf mac_limit; //type: uint32
        ydk::YLeaf number_of_macs; //type: uint32
        ydk::YLeaf admin_disabled; //type: boolean
        ydk::YLeaf flooding_disabled; //type: boolean
        ydk::YLeaf flood_unknown_unicast_enabled; //type: boolean
        ydk::YLeaf mac_limit_action; //type: MgmtL2fibMacLimitAction
        ydk::YLeaf mac_limit_threshold; //type: uint32
        ydk::YLeaf mac_learning_disabled; //type: boolean
        ydk::YLeaf mac_port_down_flush_disabled; //type: boolean
        ydk::YLeaf mac_limit_notification_type; //type: MgmtL2fibMacLimitNotify
        ydk::YLeaf is_mac_secure_enabled; //type: boolean
        ydk::YLeaf is_mac_secure_logging_enabled; //type: boolean
        ydk::YLeaf mac_secure_action; //type: MgmtL2fibMacSecAction
        ydk::YLeaf is_mac_secure_accept_shutdown; //type: boolean
        ydk::YLeaf is_mac_secure_threshold_enabled; //type: boolean
        ydk::YLeaf mac_aging_type; //type: boolean
        ydk::YLeaf storm_control_unicast_enabled; //type: boolean
        ydk::YLeaf storm_control_broadcast_enabled; //type: boolean
        ydk::YLeaf storm_control_multicast_enabled; //type: boolean
        ydk::YLeaf storm_control_unicast_rate_unit; //type: L2fibStormControlRateUnit
        ydk::YLeaf storm_control_broadcast_rate_unit; //type: L2fibStormControlRateUnit
        ydk::YLeaf storm_control_multicast_rate_unit; //type: L2fibStormControlRateUnit
        ydk::YLeaf dhcp_enabled; //type: boolean
        ydk::YLeaf dhcp_trusted; //type: boolean
        ydk::YLeaf is_dai_enabled; //type: boolean
        ydk::YLeaf is_dai_addr_validation_ipv4_enabled; //type: boolean
        ydk::YLeaf is_dai_addr_validation_source_mac_enabled; //type: boolean
        ydk::YLeaf is_dai_addr_validation_destination_mac_enabled; //type: boolean
        ydk::YLeaf is_dai_logging_enabled; //type: boolean
        ydk::YLeaf is_ipsg_enabled; //type: boolean
        ydk::YLeaf is_ipsg_logging_enabled; //type: boolean
        ydk::YLeaf is_vpls_flood_optimization_enabled; //type: boolean
        ydk::YLeaf igmp_snoop_enabled; //type: boolean
        ydk::YLeaf igmp_snoop_profile_enabled; //type: boolean
        ydk::YLeaf igmp_flood_forward_enabled; //type: boolean
        ydk::YLeaf igmp_mroute_port_enabled; //type: boolean
        ydk::YLeaf igmp_route_guard_enabled; //type: boolean
        ydk::YLeaf mld_snoop_enabled; //type: boolean
        ydk::YLeaf mld_snoop_profile_enabled; //type: boolean
        ydk::YLeaf mld_flood_forward_enabled; //type: boolean
        ydk::YLeaf mld_mroute_port_enabled; //type: boolean
        ydk::YLeaf mld_route_guard_enabled; //type: boolean
        ydk::YLeaf stp_participating; //type: boolean
        ydk::YLeaf bvi_configured; //type: boolean
        ydk::YLeaf is_bvi_up; //type: boolean
        ydk::YLeaf is_vni_enabled; //type: boolean
        ydk::YLeaf is_evpn_enabled; //type: boolean
        ydk::YLeaf unknown_unicast_flooding_disabled; //type: boolean
        ydk::YLeaf is_pbbevpn_enabled; //type: boolean
        ydk::YLeaf is_swmac_learning; //type: boolean
        ydk::YLeaf is_evpn_flow_label; //type: boolean
        ydk::YLeaf is_evpn_cw_disable; //type: boolean
        ydk::YLeaf msti; //type: uint32
        ydk::YLeaf is_p2mp_pw_enabled; //type: boolean
        ydk::YLeaf is_igmp_snoop_enabled; //type: boolean
        ydk::YLeaf nv_satellite_offload_ipv4_multicast_disabled; //type: boolean
        class Feature; //type: L2vpnForwarding::Nodes::Node::L2fibBridgeDomains::L2fibBridgeDomain::Oper::OperationalInformation::Feature

        ydk::YList feature;
        
}; // L2vpnForwarding::Nodes::Node::L2fibBridgeDomains::L2fibBridgeDomain::Oper::OperationalInformation


class L2vpnForwarding::Nodes::Node::L2fibBridgeDomains::L2fibBridgeDomain::Oper::OperationalInformation::Feature : public ydk::Entity
{
    public:
        Feature();
        ~Feature();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf feature_type; //type: L2fibFeature
        class Dhcp; //type: L2vpnForwarding::Nodes::Node::L2fibBridgeDomains::L2fibBridgeDomain::Oper::OperationalInformation::Feature::Dhcp
        class Igmp; //type: L2vpnForwarding::Nodes::Node::L2fibBridgeDomains::L2fibBridgeDomain::Oper::OperationalInformation::Feature::Igmp
        class Mld; //type: L2vpnForwarding::Nodes::Node::L2fibBridgeDomains::L2fibBridgeDomain::Oper::OperationalInformation::Feature::Mld

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2vpnForwarding::Nodes::Node::L2fibBridgeDomains::L2fibBridgeDomain::Oper::OperationalInformation::Feature::Dhcp> dhcp;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2vpnForwarding::Nodes::Node::L2fibBridgeDomains::L2fibBridgeDomain::Oper::OperationalInformation::Feature::Igmp> igmp;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2vpnForwarding::Nodes::Node::L2fibBridgeDomains::L2fibBridgeDomain::Oper::OperationalInformation::Feature::Mld> mld;
        
}; // L2vpnForwarding::Nodes::Node::L2fibBridgeDomains::L2fibBridgeDomain::Oper::OperationalInformation::Feature


class L2vpnForwarding::Nodes::Node::L2fibBridgeDomains::L2fibBridgeDomain::Oper::OperationalInformation::Feature::Dhcp : public ydk::Entity
{
    public:
        Dhcp();
        ~Dhcp();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf profile_name; //type: string

}; // L2vpnForwarding::Nodes::Node::L2fibBridgeDomains::L2fibBridgeDomain::Oper::OperationalInformation::Feature::Dhcp


class L2vpnForwarding::Nodes::Node::L2fibBridgeDomains::L2fibBridgeDomain::Oper::OperationalInformation::Feature::Igmp : public ydk::Entity
{
    public:
        Igmp();
        ~Igmp();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf profile_name; //type: string

}; // L2vpnForwarding::Nodes::Node::L2fibBridgeDomains::L2fibBridgeDomain::Oper::OperationalInformation::Feature::Igmp


class L2vpnForwarding::Nodes::Node::L2fibBridgeDomains::L2fibBridgeDomain::Oper::OperationalInformation::Feature::Mld : public ydk::Entity
{
    public:
        Mld();
        ~Mld();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf profile_name; //type: string

}; // L2vpnForwarding::Nodes::Node::L2fibBridgeDomains::L2fibBridgeDomain::Oper::OperationalInformation::Feature::Mld


class L2vpnForwarding::Nodes::Node::L2fibBridgeDomains::L2fibBridgeDomain::BdPbbUnion : public ydk::Entity
{
    public:
        BdPbbUnion();
        ~BdPbbUnion();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf pbb_type; //type: MgmtL2fibBridge
        class Edge; //type: L2vpnForwarding::Nodes::Node::L2fibBridgeDomains::L2fibBridgeDomain::BdPbbUnion::Edge
        class Core; //type: L2vpnForwarding::Nodes::Node::L2fibBridgeDomains::L2fibBridgeDomain::BdPbbUnion::Core

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2vpnForwarding::Nodes::Node::L2fibBridgeDomains::L2fibBridgeDomain::BdPbbUnion::Edge> edge;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2vpnForwarding::Nodes::Node::L2fibBridgeDomains::L2fibBridgeDomain::BdPbbUnion::Core> core;
        
}; // L2vpnForwarding::Nodes::Node::L2fibBridgeDomains::L2fibBridgeDomain::BdPbbUnion


class L2vpnForwarding::Nodes::Node::L2fibBridgeDomains::L2fibBridgeDomain::BdPbbUnion::Edge : public ydk::Entity
{
    public:
        Edge();
        ~Edge();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf i_sid; //type: uint32
        ydk::YLeaf core_bd_name; //type: string
        ydk::YLeaf mirp_lite_rx; //type: uint64
        ydk::YLeaf mirp_lite_tx; //type: uint64

}; // L2vpnForwarding::Nodes::Node::L2fibBridgeDomains::L2fibBridgeDomain::BdPbbUnion::Edge


class L2vpnForwarding::Nodes::Node::L2fibBridgeDomains::L2fibBridgeDomain::BdPbbUnion::Core : public ydk::Entity
{
    public:
        Core();
        ~Core();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf nber_edge_bd; //type: uint32

}; // L2vpnForwarding::Nodes::Node::L2fibBridgeDomains::L2fibBridgeDomain::BdPbbUnion::Core


class L2vpnForwarding::Nodes::Node::L2fibBridgeDomains::L2fibBridgeDomain::BviInfo : public ydk::Entity
{
    public:
        BviInfo();
        ~BviInfo();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf bvi_ifh; //type: string
        ydk::YLeaf bvi_xid; //type: uint32
        ydk::YLeaf bvi_name; //type: string
        ydk::YLeaf bvi_shg_id; //type: uint32
        ydk::YLeaf irb_plat_data_len; //type: uint32
        ydk::YLeaf irb_plat_data; //type: string

}; // L2vpnForwarding::Nodes::Node::L2fibBridgeDomains::L2fibBridgeDomain::BviInfo


class L2vpnForwarding::Nodes::Node::L2fibBridgeDomains::L2fibBridgeDomain::P2mppwInfo : public ydk::Entity
{
    public:
        P2mppwInfo();
        ~P2mppwInfo();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf ptree_type; //type: L2vpnPtree
        ydk::YLeaf lsm_id; //type: uint32
        ydk::YLeaf p2mp_te_interface; //type: string
        ydk::YLeaf parent_nh_valid; //type: boolean
        ydk::YLeaf parent_nh_bound; //type: boolean
        ydk::YLeaf local_label; //type: uint32
        class ParentNextHop; //type: L2vpnForwarding::Nodes::Node::L2fibBridgeDomains::L2fibBridgeDomain::P2mppwInfo::ParentNextHop

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2vpnForwarding::Nodes::Node::L2fibBridgeDomains::L2fibBridgeDomain::P2mppwInfo::ParentNextHop> parent_next_hop;
        
}; // L2vpnForwarding::Nodes::Node::L2fibBridgeDomains::L2fibBridgeDomain::P2mppwInfo


class L2vpnForwarding::Nodes::Node::L2fibBridgeDomains::L2fibBridgeDomain::P2mppwInfo::ParentNextHop : public ydk::Entity
{
    public:
        ParentNextHop();
        ~ParentNextHop();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf next_hop_address; //type: string
        ydk::YLeaf next_hop_address_v6; //type: string
        ydk::YLeaf next_hop_internal_label; //type: uint32
        ydk::YLeaf ecd_plaformt_data_valid; //type: boolean
        ydk::YLeaf ecd_platform_data_length; //type: uint32
        ydk::YLeaf children_count; //type: uint32
        class Base; //type: L2vpnForwarding::Nodes::Node::L2fibBridgeDomains::L2fibBridgeDomain::P2mppwInfo::ParentNextHop::Base

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2vpnForwarding::Nodes::Node::L2fibBridgeDomains::L2fibBridgeDomain::P2mppwInfo::ParentNextHop::Base> base;
        
}; // L2vpnForwarding::Nodes::Node::L2fibBridgeDomains::L2fibBridgeDomain::P2mppwInfo::ParentNextHop


class L2vpnForwarding::Nodes::Node::L2fibBridgeDomains::L2fibBridgeDomain::P2mppwInfo::ParentNextHop::Base : public ydk::Entity
{
    public:
        Base();
        ~Base();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;


}; // L2vpnForwarding::Nodes::Node::L2fibBridgeDomains::L2fibBridgeDomain::P2mppwInfo::ParentNextHop::Base


class L2vpnForwarding::Nodes::Node::L2fibMstpSummaries : public ydk::Entity
{
    public:
        L2fibMstpSummaries();
        ~L2fibMstpSummaries();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class L2fibMstpSummary; //type: L2vpnForwarding::Nodes::Node::L2fibMstpSummaries::L2fibMstpSummary

        ydk::YList l2fib_mstp_summary;
        
}; // L2vpnForwarding::Nodes::Node::L2fibMstpSummaries


class L2vpnForwarding::Nodes::Node::L2fibMstpSummaries::L2fibMstpSummary : public ydk::Entity
{
    public:
        L2fibMstpSummary();
        ~L2fibMstpSummary();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf parent_interface; //type: string
        ydk::YLeaf main_interface_type; //type: EvpnMainInterface
        ydk::YLeaf msti; //type: uint32
        ydk::YLeaf parent_interface_xr; //type: string
        ydk::YLeaf msti_xr; //type: uint32
        ydk::YLeaf state; //type: uint32
        ydk::YLeaf bridge_port_count; //type: uint32
        class Base; //type: L2vpnForwarding::Nodes::Node::L2fibMstpSummaries::L2fibMstpSummary::Base

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2vpnForwarding::Nodes::Node::L2fibMstpSummaries::L2fibMstpSummary::Base> base;
        
}; // L2vpnForwarding::Nodes::Node::L2fibMstpSummaries::L2fibMstpSummary


class L2vpnForwarding::Nodes::Node::L2fibMstpSummaries::L2fibMstpSummary::Base : public ydk::Entity
{
    public:
        Base();
        ~Base();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;


}; // L2vpnForwarding::Nodes::Node::L2fibMstpSummaries::L2fibMstpSummary::Base


class L2vpnForwarding::Nodes::Node::L2fibResourceAvailability : public ydk::Entity
{
    public:
        L2fibResourceAvailability();
        ~L2fibResourceAvailability();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf overall_out_of_resource_mode; //type: uint32
        ydk::YLeaf hardware_resource_mode_information; //type: string
        ydk::YLeafList hardware_resource_mode; //type: list of  uint32
        class ShmResource; //type: L2vpnForwarding::Nodes::Node::L2fibResourceAvailability::ShmResource

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2vpnForwarding::Nodes::Node::L2fibResourceAvailability::ShmResource> shm_resource;
        
}; // L2vpnForwarding::Nodes::Node::L2fibResourceAvailability


class L2vpnForwarding::Nodes::Node::L2fibResourceAvailability::ShmResource : public ydk::Entity
{
    public:
        ShmResource();
        ~ShmResource();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf oout_of_resource_mode; //type: uint32
        ydk::YLeaf maximum_available; //type: uint64
        ydk::YLeaf average_available; //type: uint64
        ydk::YLeaf average_utility; //type: uint64

}; // L2vpnForwarding::Nodes::Node::L2fibResourceAvailability::ShmResource


class L2vpnForwarding::Nodes::Node::L2fibmacHardwareEgresses : public ydk::Entity
{
    public:
        L2fibmacHardwareEgresses();
        ~L2fibmacHardwareEgresses();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class L2fibmacHardwareEgress; //type: L2vpnForwarding::Nodes::Node::L2fibmacHardwareEgresses::L2fibmacHardwareEgress

        ydk::YList l2fibmac_hardware_egress;
        
}; // L2vpnForwarding::Nodes::Node::L2fibmacHardwareEgresses


class L2vpnForwarding::Nodes::Node::L2fibmacHardwareEgresses::L2fibmacHardwareEgress : public ydk::Entity
{
    public:
        L2fibmacHardwareEgress();
        ~L2fibmacHardwareEgress();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf address; //type: string
        ydk::YLeaf group_name; //type: string
        ydk::YLeaf name; //type: string
        ydk::YLeaf platform_is_hw_learn; //type: uint8
        ydk::YLeaf node_id; //type: string
        ydk::YLeaf bridge_domain_name; //type: string
        ydk::YLeaf bridge_id; //type: uint32
        ydk::YLeaf bmac_configured; //type: boolean
        ydk::YLeaf vni_l3_flag; //type: boolean
        ydk::YLeaf pbb_bmac; //type: string
        ydk::YLeaf l3_encapsulationvlan_id; //type: uint16
        ydk::YLeaf next_hop_valid; //type: boolean
        ydk::YLeaf peer_vtep_ip; //type: string
        ydk::YLeaf flag_extension; //type: uint16
        ydk::YLeaf vni; //type: uint32
        class Base; //type: L2vpnForwarding::Nodes::Node::L2fibmacHardwareEgresses::L2fibmacHardwareEgress::Base
        class Segment; //type: L2vpnForwarding::Nodes::Node::L2fibmacHardwareEgresses::L2fibmacHardwareEgress::Segment
        class EvpnCtx; //type: L2vpnForwarding::Nodes::Node::L2fibmacHardwareEgresses::L2fibmacHardwareEgress::EvpnCtx
        class NextHop; //type: L2vpnForwarding::Nodes::Node::L2fibmacHardwareEgresses::L2fibmacHardwareEgress::NextHop

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2vpnForwarding::Nodes::Node::L2fibmacHardwareEgresses::L2fibmacHardwareEgress::Base> base;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2vpnForwarding::Nodes::Node::L2fibmacHardwareEgresses::L2fibmacHardwareEgress::Segment> segment;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2vpnForwarding::Nodes::Node::L2fibmacHardwareEgresses::L2fibmacHardwareEgress::EvpnCtx> evpn_ctx;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2vpnForwarding::Nodes::Node::L2fibmacHardwareEgresses::L2fibmacHardwareEgress::NextHop> next_hop;
        
}; // L2vpnForwarding::Nodes::Node::L2fibmacHardwareEgresses::L2fibmacHardwareEgress


class L2vpnForwarding::Nodes::Node::L2fibmacHardwareEgresses::L2fibmacHardwareEgress::Base : public ydk::Entity
{
    public:
        Base();
        ~Base();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;


}; // L2vpnForwarding::Nodes::Node::L2fibmacHardwareEgresses::L2fibmacHardwareEgress::Base


class L2vpnForwarding::Nodes::Node::L2fibmacHardwareEgresses::L2fibmacHardwareEgress::Segment : public ydk::Entity
{
    public:
        Segment();
        ~Segment();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf data_type; //type: MgmtL2fibData
        class Ac; //type: L2vpnForwarding::Nodes::Node::L2fibmacHardwareEgresses::L2fibmacHardwareEgress::Segment::Ac
        class Pbb; //type: L2vpnForwarding::Nodes::Node::L2fibmacHardwareEgresses::L2fibmacHardwareEgress::Segment::Pbb
        class Vni; //type: L2vpnForwarding::Nodes::Node::L2fibmacHardwareEgresses::L2fibmacHardwareEgress::Segment::Vni
        class Evpn; //type: L2vpnForwarding::Nodes::Node::L2fibmacHardwareEgresses::L2fibmacHardwareEgress::Segment::Evpn
        class Pw; //type: L2vpnForwarding::Nodes::Node::L2fibmacHardwareEgresses::L2fibmacHardwareEgress::Segment::Pw

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2vpnForwarding::Nodes::Node::L2fibmacHardwareEgresses::L2fibmacHardwareEgress::Segment::Ac> ac;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2vpnForwarding::Nodes::Node::L2fibmacHardwareEgresses::L2fibmacHardwareEgress::Segment::Pbb> pbb;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2vpnForwarding::Nodes::Node::L2fibmacHardwareEgresses::L2fibmacHardwareEgress::Segment::Vni> vni;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2vpnForwarding::Nodes::Node::L2fibmacHardwareEgresses::L2fibmacHardwareEgress::Segment::Evpn> evpn;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2vpnForwarding::Nodes::Node::L2fibmacHardwareEgresses::L2fibmacHardwareEgress::Segment::Pw> pw;
        
}; // L2vpnForwarding::Nodes::Node::L2fibmacHardwareEgresses::L2fibmacHardwareEgress::Segment


class L2vpnForwarding::Nodes::Node::L2fibmacHardwareEgresses::L2fibmacHardwareEgress::Segment::Ac : public ydk::Entity
{
    public:
        Ac();
        ~Ac();

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
        ydk::YLeaf vsp_vlan; //type: uint16

}; // L2vpnForwarding::Nodes::Node::L2fibmacHardwareEgresses::L2fibmacHardwareEgress::Segment::Ac


class L2vpnForwarding::Nodes::Node::L2fibmacHardwareEgresses::L2fibmacHardwareEgress::Segment::Pbb : public ydk::Entity
{
    public:
        Pbb();
        ~Pbb();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf xcid; //type: uint32

}; // L2vpnForwarding::Nodes::Node::L2fibmacHardwareEgresses::L2fibmacHardwareEgress::Segment::Pbb


class L2vpnForwarding::Nodes::Node::L2fibmacHardwareEgresses::L2fibmacHardwareEgress::Segment::Vni : public ydk::Entity
{
    public:
        Vni();
        ~Vni();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf xcid; //type: uint32
        ydk::YLeaf parent_if; //type: string

}; // L2vpnForwarding::Nodes::Node::L2fibmacHardwareEgresses::L2fibmacHardwareEgress::Segment::Vni


class L2vpnForwarding::Nodes::Node::L2fibmacHardwareEgresses::L2fibmacHardwareEgress::Segment::Evpn : public ydk::Entity
{
    public:
        Evpn();
        ~Evpn();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf xcid; //type: uint32

}; // L2vpnForwarding::Nodes::Node::L2fibmacHardwareEgresses::L2fibmacHardwareEgress::Segment::Evpn


class L2vpnForwarding::Nodes::Node::L2fibmacHardwareEgresses::L2fibmacHardwareEgress::Segment::Pw : public ydk::Entity
{
    public:
        Pw();
        ~Pw();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf pw_id; //type: uint64
        ydk::YLeaf next_hop_address; //type: string
        ydk::YLeaf pseudo_wire_id_type; //type: L2fibPwId

}; // L2vpnForwarding::Nodes::Node::L2fibmacHardwareEgresses::L2fibmacHardwareEgress::Segment::Pw


class L2vpnForwarding::Nodes::Node::L2fibmacHardwareEgresses::L2fibmacHardwareEgress::EvpnCtx : public ydk::Entity
{
    public:
        EvpnCtx();
        ~EvpnCtx();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf data_type; //type: MgmtL2fibBridgeMacEvpnCtx
        ydk::YLeaf esi_id; //type: uint16
        ydk::YLeaf local_label; //type: uint32
        ydk::YLeaf bp_ifh; //type: string
        class McastOle; //type: L2vpnForwarding::Nodes::Node::L2fibmacHardwareEgresses::L2fibmacHardwareEgress::EvpnCtx::McastOle

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2vpnForwarding::Nodes::Node::L2fibmacHardwareEgresses::L2fibmacHardwareEgress::EvpnCtx::McastOle> mcast_ole;
        
}; // L2vpnForwarding::Nodes::Node::L2fibmacHardwareEgresses::L2fibmacHardwareEgress::EvpnCtx


class L2vpnForwarding::Nodes::Node::L2fibmacHardwareEgresses::L2fibmacHardwareEgress::EvpnCtx::McastOle : public ydk::Entity
{
    public:
        McastOle();
        ~McastOle();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf tunnel_endpoint_id; //type: uint32
        ydk::YLeaf next_hop_ipv6_addr; //type: string
        ydk::YLeaf mcast_label; //type: uint32
        ydk::YLeaf mcast_encapsulation; //type: uint32

}; // L2vpnForwarding::Nodes::Node::L2fibmacHardwareEgresses::L2fibmacHardwareEgress::EvpnCtx::McastOle


class L2vpnForwarding::Nodes::Node::L2fibmacHardwareEgresses::L2fibmacHardwareEgress::NextHop : public ydk::Entity
{
    public:
        NextHop();
        ~NextHop();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf next_hop_address; //type: string
        ydk::YLeaf next_hop_address_v6; //type: string
        ydk::YLeaf next_hop_internal_label; //type: uint32
        ydk::YLeaf ecd_plaformt_data_valid; //type: boolean
        ydk::YLeaf ecd_platform_data_length; //type: uint32
        ydk::YLeaf children_count; //type: uint32
        class Base; //type: L2vpnForwarding::Nodes::Node::L2fibmacHardwareEgresses::L2fibmacHardwareEgress::NextHop::Base

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2vpnForwarding::Nodes::Node::L2fibmacHardwareEgresses::L2fibmacHardwareEgress::NextHop::Base> base;
        
}; // L2vpnForwarding::Nodes::Node::L2fibmacHardwareEgresses::L2fibmacHardwareEgress::NextHop


class L2vpnForwarding::Nodes::Node::L2fibmacHardwareEgresses::L2fibmacHardwareEgress::NextHop::Base : public ydk::Entity
{
    public:
        Base();
        ~Base();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;


}; // L2vpnForwarding::Nodes::Node::L2fibmacHardwareEgresses::L2fibmacHardwareEgress::NextHop::Base


class L2vpnForwarding::Nodes::Node::L2fibxConL2tpv2s : public ydk::Entity
{
    public:
        L2fibxConL2tpv2s();
        ~L2fibxConL2tpv2s();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class L2fibxConL2tpv2; //type: L2vpnForwarding::Nodes::Node::L2fibxConL2tpv2s::L2fibxConL2tpv2

        ydk::YList l2fibx_con_l2tpv2;
        
}; // L2vpnForwarding::Nodes::Node::L2fibxConL2tpv2s


class L2vpnForwarding::Nodes::Node::L2fibxConL2tpv2s::L2fibxConL2tpv2 : public ydk::Entity
{
    public:
        L2fibxConL2tpv2();
        ~L2fibxConL2tpv2();

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
        ydk::YLeaf vsp_vlan_id; //type: uint32
        ydk::YLeaf xcon_name; //type: string
        ydk::YLeaf bound; //type: boolean
        ydk::YLeaf switching_type; //type: MgmtL2fibSwitching
        class Base; //type: L2vpnForwarding::Nodes::Node::L2fibxConL2tpv2s::L2fibxConL2tpv2::Base
        class Segment1; //type: L2vpnForwarding::Nodes::Node::L2fibxConL2tpv2s::L2fibxConL2tpv2::Segment1
        class Segment2; //type: L2vpnForwarding::Nodes::Node::L2fibxConL2tpv2s::L2fibxConL2tpv2::Segment2

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2vpnForwarding::Nodes::Node::L2fibxConL2tpv2s::L2fibxConL2tpv2::Base> base;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2vpnForwarding::Nodes::Node::L2fibxConL2tpv2s::L2fibxConL2tpv2::Segment1> segment1;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2vpnForwarding::Nodes::Node::L2fibxConL2tpv2s::L2fibxConL2tpv2::Segment2> segment2;
        
}; // L2vpnForwarding::Nodes::Node::L2fibxConL2tpv2s::L2fibxConL2tpv2


class L2vpnForwarding::Nodes::Node::L2fibxConL2tpv2s::L2fibxConL2tpv2::Base : public ydk::Entity
{
    public:
        Base();
        ~Base();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;


}; // L2vpnForwarding::Nodes::Node::L2fibxConL2tpv2s::L2fibxConL2tpv2::Base


class L2vpnForwarding::Nodes::Node::L2fibxConL2tpv2s::L2fibxConL2tpv2::Segment1 : public ydk::Entity
{
    public:
        Segment1();
        ~Segment1();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf data_type; //type: MgmtL2fibData
        class Ac; //type: L2vpnForwarding::Nodes::Node::L2fibxConL2tpv2s::L2fibxConL2tpv2::Segment1::Ac
        class Pbb; //type: L2vpnForwarding::Nodes::Node::L2fibxConL2tpv2s::L2fibxConL2tpv2::Segment1::Pbb
        class Vni; //type: L2vpnForwarding::Nodes::Node::L2fibxConL2tpv2s::L2fibxConL2tpv2::Segment1::Vni
        class Evpn; //type: L2vpnForwarding::Nodes::Node::L2fibxConL2tpv2s::L2fibxConL2tpv2::Segment1::Evpn
        class MonitorSession; //type: L2vpnForwarding::Nodes::Node::L2fibxConL2tpv2s::L2fibxConL2tpv2::Segment1::MonitorSession
        class Pw; //type: L2vpnForwarding::Nodes::Node::L2fibxConL2tpv2s::L2fibxConL2tpv2::Segment1::Pw

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2vpnForwarding::Nodes::Node::L2fibxConL2tpv2s::L2fibxConL2tpv2::Segment1::Ac> ac;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2vpnForwarding::Nodes::Node::L2fibxConL2tpv2s::L2fibxConL2tpv2::Segment1::Pbb> pbb;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2vpnForwarding::Nodes::Node::L2fibxConL2tpv2s::L2fibxConL2tpv2::Segment1::Vni> vni;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2vpnForwarding::Nodes::Node::L2fibxConL2tpv2s::L2fibxConL2tpv2::Segment1::Evpn> evpn;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2vpnForwarding::Nodes::Node::L2fibxConL2tpv2s::L2fibxConL2tpv2::Segment1::MonitorSession> monitor_session;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2vpnForwarding::Nodes::Node::L2fibxConL2tpv2s::L2fibxConL2tpv2::Segment1::Pw> pw;
        
}; // L2vpnForwarding::Nodes::Node::L2fibxConL2tpv2s::L2fibxConL2tpv2::Segment1


class L2vpnForwarding::Nodes::Node::L2fibxConL2tpv2s::L2fibxConL2tpv2::Segment1::Ac : public ydk::Entity
{
    public:
        Ac();
        ~Ac();

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
        ydk::YLeaf sub_interface_handle; //type: string
        ydk::YLeaf attachment_circuit_id; //type: uint32
        ydk::YLeaf attachment_circuit_mtu; //type: uint16
        ydk::YLeaf actype; //type: uint8
        ydk::YLeaf inter_working_mode; //type: uint8
        ydk::YLeaf adjacency_valid; //type: boolean
        ydk::YLeaf adjacency_address; //type: string
        ydk::YLeaf bound; //type: boolean
        ydk::YLeaf ip_inter_working_mac; //type: string
        ydk::YLeaf redundancy_group_id; //type: uint32
        ydk::YLeaf redundancy_object_id; //type: uint64
        ydk::YLeaf evpn_internal_label; //type: uint32
        ydk::YLeaf fxc_next_hop_valid; //type: boolean
        ydk::YLeaf vlan_id_count; //type: uint8
        ydk::YLeaf first_vlan_id; //type: uint16
        ydk::YLeaf second_vlan_id; //type: uint16
        class Base; //type: L2vpnForwarding::Nodes::Node::L2fibxConL2tpv2s::L2fibxConL2tpv2::Segment1::Ac::Base
        class FxcNextHop; //type: L2vpnForwarding::Nodes::Node::L2fibxConL2tpv2s::L2fibxConL2tpv2::Segment1::Ac::FxcNextHop

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2vpnForwarding::Nodes::Node::L2fibxConL2tpv2s::L2fibxConL2tpv2::Segment1::Ac::Base> base;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2vpnForwarding::Nodes::Node::L2fibxConL2tpv2s::L2fibxConL2tpv2::Segment1::Ac::FxcNextHop> fxc_next_hop;
        
}; // L2vpnForwarding::Nodes::Node::L2fibxConL2tpv2s::L2fibxConL2tpv2::Segment1::Ac


class L2vpnForwarding::Nodes::Node::L2fibxConL2tpv2s::L2fibxConL2tpv2::Segment1::Ac::Base : public ydk::Entity
{
    public:
        Base();
        ~Base();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;


}; // L2vpnForwarding::Nodes::Node::L2fibxConL2tpv2s::L2fibxConL2tpv2::Segment1::Ac::Base


class L2vpnForwarding::Nodes::Node::L2fibxConL2tpv2s::L2fibxConL2tpv2::Segment1::Ac::FxcNextHop : public ydk::Entity
{
    public:
        FxcNextHop();
        ~FxcNextHop();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf next_hop_address; //type: string
        ydk::YLeaf next_hop_address_v6; //type: string
        ydk::YLeaf next_hop_internal_label; //type: uint32
        ydk::YLeaf ecd_plaformt_data_valid; //type: boolean
        ydk::YLeaf ecd_platform_data_length; //type: uint32
        ydk::YLeaf children_count; //type: uint32
        class Base; //type: L2vpnForwarding::Nodes::Node::L2fibxConL2tpv2s::L2fibxConL2tpv2::Segment1::Ac::FxcNextHop::Base

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2vpnForwarding::Nodes::Node::L2fibxConL2tpv2s::L2fibxConL2tpv2::Segment1::Ac::FxcNextHop::Base> base;
        
}; // L2vpnForwarding::Nodes::Node::L2fibxConL2tpv2s::L2fibxConL2tpv2::Segment1::Ac::FxcNextHop


class L2vpnForwarding::Nodes::Node::L2fibxConL2tpv2s::L2fibxConL2tpv2::Segment1::Ac::FxcNextHop::Base : public ydk::Entity
{
    public:
        Base();
        ~Base();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;


}; // L2vpnForwarding::Nodes::Node::L2fibxConL2tpv2s::L2fibxConL2tpv2::Segment1::Ac::FxcNextHop::Base


class L2vpnForwarding::Nodes::Node::L2fibxConL2tpv2s::L2fibxConL2tpv2::Segment1::Pbb : public ydk::Entity
{
    public:
        Pbb();
        ~Pbb();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf bound; //type: boolean
        ydk::YLeaf forward_class; //type: uint8
        ydk::YLeaf core_pbb_evpn_enabled; //type: boolean
        class Base; //type: L2vpnForwarding::Nodes::Node::L2fibxConL2tpv2s::L2fibxConL2tpv2::Segment1::Pbb::Base
        class PbbUnion; //type: L2vpnForwarding::Nodes::Node::L2fibxConL2tpv2s::L2fibxConL2tpv2::Segment1::Pbb::PbbUnion

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2vpnForwarding::Nodes::Node::L2fibxConL2tpv2s::L2fibxConL2tpv2::Segment1::Pbb::Base> base;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2vpnForwarding::Nodes::Node::L2fibxConL2tpv2s::L2fibxConL2tpv2::Segment1::Pbb::PbbUnion> pbb_union;
        
}; // L2vpnForwarding::Nodes::Node::L2fibxConL2tpv2s::L2fibxConL2tpv2::Segment1::Pbb


class L2vpnForwarding::Nodes::Node::L2fibxConL2tpv2s::L2fibxConL2tpv2::Segment1::Pbb::Base : public ydk::Entity
{
    public:
        Base();
        ~Base();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;


}; // L2vpnForwarding::Nodes::Node::L2fibxConL2tpv2s::L2fibxConL2tpv2::Segment1::Pbb::Base


class L2vpnForwarding::Nodes::Node::L2fibxConL2tpv2s::L2fibxConL2tpv2::Segment1::Pbb::PbbUnion : public ydk::Entity
{
    public:
        PbbUnion();
        ~PbbUnion();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf pbb_type; //type: MgmtL2fibBridge
        class Edge; //type: L2vpnForwarding::Nodes::Node::L2fibxConL2tpv2s::L2fibxConL2tpv2::Segment1::Pbb::PbbUnion::Edge
        class Core; //type: L2vpnForwarding::Nodes::Node::L2fibxConL2tpv2s::L2fibxConL2tpv2::Segment1::Pbb::PbbUnion::Core

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2vpnForwarding::Nodes::Node::L2fibxConL2tpv2s::L2fibxConL2tpv2::Segment1::Pbb::PbbUnion::Edge> edge;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2vpnForwarding::Nodes::Node::L2fibxConL2tpv2s::L2fibxConL2tpv2::Segment1::Pbb::PbbUnion::Core> core;
        
}; // L2vpnForwarding::Nodes::Node::L2fibxConL2tpv2s::L2fibxConL2tpv2::Segment1::Pbb::PbbUnion


class L2vpnForwarding::Nodes::Node::L2fibxConL2tpv2s::L2fibxConL2tpv2::Segment1::Pbb::PbbUnion::Edge : public ydk::Entity
{
    public:
        Edge();
        ~Edge();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf mac_configured; //type: boolean
        ydk::YLeaf mac; //type: string

}; // L2vpnForwarding::Nodes::Node::L2fibxConL2tpv2s::L2fibxConL2tpv2::Segment1::Pbb::PbbUnion::Edge


class L2vpnForwarding::Nodes::Node::L2fibxConL2tpv2s::L2fibxConL2tpv2::Segment1::Pbb::PbbUnion::Core : public ydk::Entity
{
    public:
        Core();
        ~Core();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf vlan_id; //type: uint32

}; // L2vpnForwarding::Nodes::Node::L2fibxConL2tpv2s::L2fibxConL2tpv2::Segment1::Pbb::PbbUnion::Core


class L2vpnForwarding::Nodes::Node::L2fibxConL2tpv2s::L2fibxConL2tpv2::Segment1::Vni : public ydk::Entity
{
    public:
        Vni();
        ~Vni();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf srcip; //type: string
        ydk::YLeaf mcastip; //type: string
        ydk::YLeaf bound; //type: boolean
        ydk::YLeaf parent_if; //type: string
        ydk::YLeaf encap; //type: uint32
        ydk::YLeaf udp_port; //type: uint32
        ydk::YLeaf source_vtep_if; //type: string
        ydk::YLeaf any_cast_ip; //type: string
        ydk::YLeaf anycast_mcast_ip; //type: string
        ydk::YLeaf ingress_replication; //type: boolean
        ydk::YLeaf vx_lan_mode; //type: uint32
        class Base; //type: L2vpnForwarding::Nodes::Node::L2fibxConL2tpv2s::L2fibxConL2tpv2::Segment1::Vni::Base

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2vpnForwarding::Nodes::Node::L2fibxConL2tpv2s::L2fibxConL2tpv2::Segment1::Vni::Base> base;
        
}; // L2vpnForwarding::Nodes::Node::L2fibxConL2tpv2s::L2fibxConL2tpv2::Segment1::Vni


class L2vpnForwarding::Nodes::Node::L2fibxConL2tpv2s::L2fibxConL2tpv2::Segment1::Vni::Base : public ydk::Entity
{
    public:
        Base();
        ~Base();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;


}; // L2vpnForwarding::Nodes::Node::L2fibxConL2tpv2s::L2fibxConL2tpv2::Segment1::Vni::Base


class L2vpnForwarding::Nodes::Node::L2fibxConL2tpv2s::L2fibxConL2tpv2::Segment1::Evpn : public ydk::Entity
{
    public:
        Evpn();
        ~Evpn();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf bound; //type: boolean
        ydk::YLeaf evi; //type: uint32
        ydk::YLeaf forward_class; //type: uint8
        class Base; //type: L2vpnForwarding::Nodes::Node::L2fibxConL2tpv2s::L2fibxConL2tpv2::Segment1::Evpn::Base

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2vpnForwarding::Nodes::Node::L2fibxConL2tpv2s::L2fibxConL2tpv2::Segment1::Evpn::Base> base;
        
}; // L2vpnForwarding::Nodes::Node::L2fibxConL2tpv2s::L2fibxConL2tpv2::Segment1::Evpn


class L2vpnForwarding::Nodes::Node::L2fibxConL2tpv2s::L2fibxConL2tpv2::Segment1::Evpn::Base : public ydk::Entity
{
    public:
        Base();
        ~Base();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;


}; // L2vpnForwarding::Nodes::Node::L2fibxConL2tpv2s::L2fibxConL2tpv2::Segment1::Evpn::Base


class L2vpnForwarding::Nodes::Node::L2fibxConL2tpv2s::L2fibxConL2tpv2::Segment1::MonitorSession : public ydk::Entity
{
    public:
        MonitorSession();
        ~MonitorSession();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf xcid; //type: uint32
        ydk::YLeaf session_name; //type: string
        ydk::YLeaf hardware_information; //type: string
        ydk::YLeaf bound; //type: boolean
        class Base; //type: L2vpnForwarding::Nodes::Node::L2fibxConL2tpv2s::L2fibxConL2tpv2::Segment1::MonitorSession::Base

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2vpnForwarding::Nodes::Node::L2fibxConL2tpv2s::L2fibxConL2tpv2::Segment1::MonitorSession::Base> base;
        
}; // L2vpnForwarding::Nodes::Node::L2fibxConL2tpv2s::L2fibxConL2tpv2::Segment1::MonitorSession


class L2vpnForwarding::Nodes::Node::L2fibxConL2tpv2s::L2fibxConL2tpv2::Segment1::MonitorSession::Base : public ydk::Entity
{
    public:
        Base();
        ~Base();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;


}; // L2vpnForwarding::Nodes::Node::L2fibxConL2tpv2s::L2fibxConL2tpv2::Segment1::MonitorSession::Base


class L2vpnForwarding::Nodes::Node::L2fibxConL2tpv2s::L2fibxConL2tpv2::Segment1::Pw : public ydk::Entity
{
    public:
        Pw();
        ~Pw();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf pw_id; //type: uint64
        ydk::YLeaf signal_capability_flags; //type: uint32
        ydk::YLeaf context; //type: uint16
        ydk::YLeaf sequence_resync_threshold; //type: uint16
        ydk::YLeaf bound; //type: boolean
        ydk::YLeaf next_hop_valid; //type: boolean
        ydk::YLeaf backup_configured; //type: boolean
        ydk::YLeaf redundancy_role; //type: L2fibPwRedundancyRole
        ydk::YLeaf active; //type: boolean
        ydk::YLeaf pseudo_wire_id_type; //type: L2fibPwId
        ydk::YLeaf pw_load_balance_type; //type: L2fibLoadBal
        ydk::YLeaf pw_flow_label_tx; //type: boolean
        ydk::YLeaf grouping_supported; //type: boolean
        ydk::YLeaf group_id; //type: uint32
        ydk::YLeaf group_state; //type: L2fibGroupState
        ydk::YLeaf global_id; //type: uint32
        ydk::YLeaf ac_id; //type: uint32
        ydk::YLeaf forward_class; //type: uint8
        ydk::YLeaf next_hop_address; //type: string
        class Base; //type: L2vpnForwarding::Nodes::Node::L2fibxConL2tpv2s::L2fibxConL2tpv2::Segment1::Pw::Base
        class NextHop; //type: L2vpnForwarding::Nodes::Node::L2fibxConL2tpv2s::L2fibxConL2tpv2::Segment1::Pw::NextHop
        class PseudoWireUnion; //type: L2vpnForwarding::Nodes::Node::L2fibxConL2tpv2s::L2fibxConL2tpv2::Segment1::Pw::PseudoWireUnion
        class BackupPseudoWire; //type: L2vpnForwarding::Nodes::Node::L2fibxConL2tpv2s::L2fibxConL2tpv2::Segment1::Pw::BackupPseudoWire

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2vpnForwarding::Nodes::Node::L2fibxConL2tpv2s::L2fibxConL2tpv2::Segment1::Pw::Base> base;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2vpnForwarding::Nodes::Node::L2fibxConL2tpv2s::L2fibxConL2tpv2::Segment1::Pw::NextHop> next_hop;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2vpnForwarding::Nodes::Node::L2fibxConL2tpv2s::L2fibxConL2tpv2::Segment1::Pw::PseudoWireUnion> pseudo_wire_union;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2vpnForwarding::Nodes::Node::L2fibxConL2tpv2s::L2fibxConL2tpv2::Segment1::Pw::BackupPseudoWire> backup_pseudo_wire;
        
}; // L2vpnForwarding::Nodes::Node::L2fibxConL2tpv2s::L2fibxConL2tpv2::Segment1::Pw


class L2vpnForwarding::Nodes::Node::L2fibxConL2tpv2s::L2fibxConL2tpv2::Segment1::Pw::Base : public ydk::Entity
{
    public:
        Base();
        ~Base();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;


}; // L2vpnForwarding::Nodes::Node::L2fibxConL2tpv2s::L2fibxConL2tpv2::Segment1::Pw::Base


class L2vpnForwarding::Nodes::Node::L2fibxConL2tpv2s::L2fibxConL2tpv2::Segment1::Pw::NextHop : public ydk::Entity
{
    public:
        NextHop();
        ~NextHop();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf next_hop_address; //type: string
        ydk::YLeaf next_hop_address_v6; //type: string
        ydk::YLeaf next_hop_internal_label; //type: uint32
        ydk::YLeaf ecd_plaformt_data_valid; //type: boolean
        ydk::YLeaf ecd_platform_data_length; //type: uint32
        ydk::YLeaf children_count; //type: uint32
        class Base; //type: L2vpnForwarding::Nodes::Node::L2fibxConL2tpv2s::L2fibxConL2tpv2::Segment1::Pw::NextHop::Base

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2vpnForwarding::Nodes::Node::L2fibxConL2tpv2s::L2fibxConL2tpv2::Segment1::Pw::NextHop::Base> base;
        
}; // L2vpnForwarding::Nodes::Node::L2fibxConL2tpv2s::L2fibxConL2tpv2::Segment1::Pw::NextHop


class L2vpnForwarding::Nodes::Node::L2fibxConL2tpv2s::L2fibxConL2tpv2::Segment1::Pw::NextHop::Base : public ydk::Entity
{
    public:
        Base();
        ~Base();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;


}; // L2vpnForwarding::Nodes::Node::L2fibxConL2tpv2s::L2fibxConL2tpv2::Segment1::Pw::NextHop::Base


class L2vpnForwarding::Nodes::Node::L2fibxConL2tpv2s::L2fibxConL2tpv2::Segment1::Pw::PseudoWireUnion : public ydk::Entity
{
    public:
        PseudoWireUnion();
        ~PseudoWireUnion();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf data_type; //type: MgmtL2fibData
        class Mpls; //type: L2vpnForwarding::Nodes::Node::L2fibxConL2tpv2s::L2fibxConL2tpv2::Segment1::Pw::PseudoWireUnion::Mpls
        class L2tp; //type: L2vpnForwarding::Nodes::Node::L2fibxConL2tpv2s::L2fibxConL2tpv2::Segment1::Pw::PseudoWireUnion::L2tp
        class L2tpv2; //type: L2vpnForwarding::Nodes::Node::L2fibxConL2tpv2s::L2fibxConL2tpv2::Segment1::Pw::PseudoWireUnion::L2tpv2
        class L2tpIpv6Ts; //type: L2vpnForwarding::Nodes::Node::L2fibxConL2tpv2s::L2fibxConL2tpv2::Segment1::Pw::PseudoWireUnion::L2tpIpv6Ts

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2vpnForwarding::Nodes::Node::L2fibxConL2tpv2s::L2fibxConL2tpv2::Segment1::Pw::PseudoWireUnion::Mpls> mpls;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2vpnForwarding::Nodes::Node::L2fibxConL2tpv2s::L2fibxConL2tpv2::Segment1::Pw::PseudoWireUnion::L2tp> l2tp;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2vpnForwarding::Nodes::Node::L2fibxConL2tpv2s::L2fibxConL2tpv2::Segment1::Pw::PseudoWireUnion::L2tpv2> l2tpv2;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2vpnForwarding::Nodes::Node::L2fibxConL2tpv2s::L2fibxConL2tpv2::Segment1::Pw::PseudoWireUnion::L2tpIpv6Ts> l2tp_ipv6_ts;
        
}; // L2vpnForwarding::Nodes::Node::L2fibxConL2tpv2s::L2fibxConL2tpv2::Segment1::Pw::PseudoWireUnion


class L2vpnForwarding::Nodes::Node::L2fibxConL2tpv2s::L2fibxConL2tpv2::Segment1::Pw::PseudoWireUnion::Mpls : public ydk::Entity
{
    public:
        Mpls();
        ~Mpls();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf pw_label; //type: uint32
        ydk::YLeaf pw_local_label; //type: uint32
        ydk::YLeaf pw_tunnel_interface; //type: uint32
        ydk::YLeaf pw_xcid; //type: uint32

}; // L2vpnForwarding::Nodes::Node::L2fibxConL2tpv2s::L2fibxConL2tpv2::Segment1::Pw::PseudoWireUnion::Mpls


class L2vpnForwarding::Nodes::Node::L2fibxConL2tpv2s::L2fibxConL2tpv2::Segment1::Pw::PseudoWireUnion::L2tp : public ydk::Entity
{
    public:
        L2tp();
        ~L2tp();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf tos_val; //type: uint8
        ydk::YLeaf ttl; //type: uint8
        ydk::YLeaf path_mtu; //type: uint16
        ydk::YLeaf sequence_number_sent; //type: uint32
        ydk::YLeaf sequence_number_expected; //type: uint32
        class Local; //type: L2vpnForwarding::Nodes::Node::L2fibxConL2tpv2s::L2fibxConL2tpv2::Segment1::Pw::PseudoWireUnion::L2tp::Local
        class Remote; //type: L2vpnForwarding::Nodes::Node::L2fibxConL2tpv2s::L2fibxConL2tpv2::Segment1::Pw::PseudoWireUnion::L2tp::Remote

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2vpnForwarding::Nodes::Node::L2fibxConL2tpv2s::L2fibxConL2tpv2::Segment1::Pw::PseudoWireUnion::L2tp::Local> local;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2vpnForwarding::Nodes::Node::L2fibxConL2tpv2s::L2fibxConL2tpv2::Segment1::Pw::PseudoWireUnion::L2tp::Remote> remote;
        
}; // L2vpnForwarding::Nodes::Node::L2fibxConL2tpv2s::L2fibxConL2tpv2::Segment1::Pw::PseudoWireUnion::L2tp


class L2vpnForwarding::Nodes::Node::L2fibxConL2tpv2s::L2fibxConL2tpv2::Segment1::Pw::PseudoWireUnion::L2tp::Local : public ydk::Entity
{
    public:
        Local();
        ~Local();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf session_id; //type: uint32
        ydk::YLeaf cookie_size; //type: uint8
        ydk::YLeaf cookie_low_value; //type: uint32
        ydk::YLeaf cookie_high_value; //type: uint32

}; // L2vpnForwarding::Nodes::Node::L2fibxConL2tpv2s::L2fibxConL2tpv2::Segment1::Pw::PseudoWireUnion::L2tp::Local


class L2vpnForwarding::Nodes::Node::L2fibxConL2tpv2s::L2fibxConL2tpv2::Segment1::Pw::PseudoWireUnion::L2tp::Remote : public ydk::Entity
{
    public:
        Remote();
        ~Remote();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf session_id; //type: uint32
        ydk::YLeaf cookie_size; //type: uint8
        ydk::YLeaf cookie_low_value; //type: uint32
        ydk::YLeaf cookie_high_value; //type: uint32

}; // L2vpnForwarding::Nodes::Node::L2fibxConL2tpv2s::L2fibxConL2tpv2::Segment1::Pw::PseudoWireUnion::L2tp::Remote


class L2vpnForwarding::Nodes::Node::L2fibxConL2tpv2s::L2fibxConL2tpv2::Segment1::Pw::PseudoWireUnion::L2tpv2 : public ydk::Entity
{
    public:
        L2tpv2();
        ~L2tpv2();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf pw_flags; //type: uint8
        ydk::YLeaf tos_val; //type: uint8
        ydk::YLeaf ttl; //type: uint8
        ydk::YLeaf path_mtu; //type: uint16
        ydk::YLeaf protocol; //type: uint16
        ydk::YLeaf rem_udp_port; //type: uint16
        ydk::YLeaf xconnect_id; //type: uint32
        ydk::YLeaf next_hop_address; //type: string
        ydk::YLeaf source_address; //type: string
        class Local; //type: L2vpnForwarding::Nodes::Node::L2fibxConL2tpv2s::L2fibxConL2tpv2::Segment1::Pw::PseudoWireUnion::L2tpv2::Local
        class Remote; //type: L2vpnForwarding::Nodes::Node::L2fibxConL2tpv2s::L2fibxConL2tpv2::Segment1::Pw::PseudoWireUnion::L2tpv2::Remote

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2vpnForwarding::Nodes::Node::L2fibxConL2tpv2s::L2fibxConL2tpv2::Segment1::Pw::PseudoWireUnion::L2tpv2::Local> local;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2vpnForwarding::Nodes::Node::L2fibxConL2tpv2s::L2fibxConL2tpv2::Segment1::Pw::PseudoWireUnion::L2tpv2::Remote> remote;
        
}; // L2vpnForwarding::Nodes::Node::L2fibxConL2tpv2s::L2fibxConL2tpv2::Segment1::Pw::PseudoWireUnion::L2tpv2


class L2vpnForwarding::Nodes::Node::L2fibxConL2tpv2s::L2fibxConL2tpv2::Segment1::Pw::PseudoWireUnion::L2tpv2::Local : public ydk::Entity
{
    public:
        Local();
        ~Local();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf session_id; //type: uint32
        ydk::YLeaf tunnel_id; //type: uint32

}; // L2vpnForwarding::Nodes::Node::L2fibxConL2tpv2s::L2fibxConL2tpv2::Segment1::Pw::PseudoWireUnion::L2tpv2::Local


class L2vpnForwarding::Nodes::Node::L2fibxConL2tpv2s::L2fibxConL2tpv2::Segment1::Pw::PseudoWireUnion::L2tpv2::Remote : public ydk::Entity
{
    public:
        Remote();
        ~Remote();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf session_id; //type: uint32
        ydk::YLeaf tunnel_id; //type: uint32

}; // L2vpnForwarding::Nodes::Node::L2fibxConL2tpv2s::L2fibxConL2tpv2::Segment1::Pw::PseudoWireUnion::L2tpv2::Remote


class L2vpnForwarding::Nodes::Node::L2fibxConL2tpv2s::L2fibxConL2tpv2::Segment1::Pw::PseudoWireUnion::L2tpIpv6Ts : public ydk::Entity
{
    public:
        L2tpIpv6Ts();
        ~L2tpIpv6Ts();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf tos_val; //type: uint8
        ydk::YLeaf ttl; //type: uint8
        ydk::YLeaf path_mtu; //type: uint16
        ydk::YLeaf sequence_number_sent; //type: uint32
        ydk::YLeaf sequence_number_expected; //type: uint32
        ydk::YLeaf local_address; //type: string
        ydk::YLeaf remote_address; //type: string
        class Local; //type: L2vpnForwarding::Nodes::Node::L2fibxConL2tpv2s::L2fibxConL2tpv2::Segment1::Pw::PseudoWireUnion::L2tpIpv6Ts::Local
        class Remote; //type: L2vpnForwarding::Nodes::Node::L2fibxConL2tpv2s::L2fibxConL2tpv2::Segment1::Pw::PseudoWireUnion::L2tpIpv6Ts::Remote

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2vpnForwarding::Nodes::Node::L2fibxConL2tpv2s::L2fibxConL2tpv2::Segment1::Pw::PseudoWireUnion::L2tpIpv6Ts::Local> local;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2vpnForwarding::Nodes::Node::L2fibxConL2tpv2s::L2fibxConL2tpv2::Segment1::Pw::PseudoWireUnion::L2tpIpv6Ts::Remote> remote;
        
}; // L2vpnForwarding::Nodes::Node::L2fibxConL2tpv2s::L2fibxConL2tpv2::Segment1::Pw::PseudoWireUnion::L2tpIpv6Ts


class L2vpnForwarding::Nodes::Node::L2fibxConL2tpv2s::L2fibxConL2tpv2::Segment1::Pw::PseudoWireUnion::L2tpIpv6Ts::Local : public ydk::Entity
{
    public:
        Local();
        ~Local();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf cookie_size; //type: uint8
        ydk::YLeaf cookie_low_value; //type: uint32
        ydk::YLeaf cookie_high_value; //type: uint32
        ydk::YLeaf secondary_cookie_size; //type: uint8
        ydk::YLeaf secondary_cookie_low_value; //type: uint32
        ydk::YLeaf secondary_cookie_high_value; //type: uint32
        ydk::YLeaf session_id; //type: uint32

}; // L2vpnForwarding::Nodes::Node::L2fibxConL2tpv2s::L2fibxConL2tpv2::Segment1::Pw::PseudoWireUnion::L2tpIpv6Ts::Local


class L2vpnForwarding::Nodes::Node::L2fibxConL2tpv2s::L2fibxConL2tpv2::Segment1::Pw::PseudoWireUnion::L2tpIpv6Ts::Remote : public ydk::Entity
{
    public:
        Remote();
        ~Remote();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf session_id; //type: uint32
        ydk::YLeaf cookie_size; //type: uint8
        ydk::YLeaf cookie_low_value; //type: uint32
        ydk::YLeaf cookie_high_value; //type: uint32

}; // L2vpnForwarding::Nodes::Node::L2fibxConL2tpv2s::L2fibxConL2tpv2::Segment1::Pw::PseudoWireUnion::L2tpIpv6Ts::Remote


class L2vpnForwarding::Nodes::Node::L2fibxConL2tpv2s::L2fibxConL2tpv2::Segment1::Pw::BackupPseudoWire : public ydk::Entity
{
    public:
        BackupPseudoWire();
        ~BackupPseudoWire();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf backup_next_hop; //type: string
        ydk::YLeaf backup_pseudo_wire_id_type; //type: L2fibPwId
        ydk::YLeaf backup_pseudo_wire_id; //type: uint32
        ydk::YLeaf redundancy_role; //type: L2fibPwRedundancyRole
        ydk::YLeaf active; //type: boolean
        ydk::YLeaf bound; //type: boolean
        ydk::YLeaf pw_flow_label_tx; //type: boolean
        ydk::YLeaf grouping_supported; //type: boolean
        ydk::YLeaf group_id; //type: uint32
        ydk::YLeaf group_state; //type: L2fibGroupState
        class Atom; //type: L2vpnForwarding::Nodes::Node::L2fibxConL2tpv2s::L2fibxConL2tpv2::Segment1::Pw::BackupPseudoWire::Atom

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2vpnForwarding::Nodes::Node::L2fibxConL2tpv2s::L2fibxConL2tpv2::Segment1::Pw::BackupPseudoWire::Atom> atom;
        
}; // L2vpnForwarding::Nodes::Node::L2fibxConL2tpv2s::L2fibxConL2tpv2::Segment1::Pw::BackupPseudoWire


class L2vpnForwarding::Nodes::Node::L2fibxConL2tpv2s::L2fibxConL2tpv2::Segment1::Pw::BackupPseudoWire::Atom : public ydk::Entity
{
    public:
        Atom();
        ~Atom();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf pw_label; //type: uint32
        ydk::YLeaf pw_local_label; //type: uint32
        ydk::YLeaf pw_tunnel_interface; //type: uint32
        ydk::YLeaf pw_xcid; //type: uint32

}; // L2vpnForwarding::Nodes::Node::L2fibxConL2tpv2s::L2fibxConL2tpv2::Segment1::Pw::BackupPseudoWire::Atom


class L2vpnForwarding::Nodes::Node::L2fibxConL2tpv2s::L2fibxConL2tpv2::Segment2 : public ydk::Entity
{
    public:
        Segment2();
        ~Segment2();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf data_type; //type: MgmtL2fibData
        class Ac; //type: L2vpnForwarding::Nodes::Node::L2fibxConL2tpv2s::L2fibxConL2tpv2::Segment2::Ac
        class Bp; //type: L2vpnForwarding::Nodes::Node::L2fibxConL2tpv2s::L2fibxConL2tpv2::Segment2::Bp
        class Fxs; //type: L2vpnForwarding::Nodes::Node::L2fibxConL2tpv2s::L2fibxConL2tpv2::Segment2::Fxs
        class Pw; //type: L2vpnForwarding::Nodes::Node::L2fibxConL2tpv2s::L2fibxConL2tpv2::Segment2::Pw

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2vpnForwarding::Nodes::Node::L2fibxConL2tpv2s::L2fibxConL2tpv2::Segment2::Ac> ac;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2vpnForwarding::Nodes::Node::L2fibxConL2tpv2s::L2fibxConL2tpv2::Segment2::Bp> bp;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2vpnForwarding::Nodes::Node::L2fibxConL2tpv2s::L2fibxConL2tpv2::Segment2::Fxs> fxs;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2vpnForwarding::Nodes::Node::L2fibxConL2tpv2s::L2fibxConL2tpv2::Segment2::Pw> pw;
        
}; // L2vpnForwarding::Nodes::Node::L2fibxConL2tpv2s::L2fibxConL2tpv2::Segment2


class L2vpnForwarding::Nodes::Node::L2fibxConL2tpv2s::L2fibxConL2tpv2::Segment2::Ac : public ydk::Entity
{
    public:
        Ac();
        ~Ac();

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
        ydk::YLeaf sub_interface_handle; //type: string
        ydk::YLeaf attachment_circuit_id; //type: uint32
        ydk::YLeaf attachment_circuit_mtu; //type: uint16
        ydk::YLeaf actype; //type: uint8
        ydk::YLeaf inter_working_mode; //type: uint8
        ydk::YLeaf adjacency_valid; //type: boolean
        ydk::YLeaf adjacency_address; //type: string
        ydk::YLeaf bound; //type: boolean
        ydk::YLeaf ip_inter_working_mac; //type: string
        ydk::YLeaf redundancy_group_id; //type: uint32
        ydk::YLeaf redundancy_object_id; //type: uint64
        ydk::YLeaf evpn_internal_label; //type: uint32
        ydk::YLeaf fxc_next_hop_valid; //type: boolean
        ydk::YLeaf vlan_id_count; //type: uint8
        ydk::YLeaf first_vlan_id; //type: uint16
        ydk::YLeaf second_vlan_id; //type: uint16
        class Base; //type: L2vpnForwarding::Nodes::Node::L2fibxConL2tpv2s::L2fibxConL2tpv2::Segment2::Ac::Base
        class FxcNextHop; //type: L2vpnForwarding::Nodes::Node::L2fibxConL2tpv2s::L2fibxConL2tpv2::Segment2::Ac::FxcNextHop

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2vpnForwarding::Nodes::Node::L2fibxConL2tpv2s::L2fibxConL2tpv2::Segment2::Ac::Base> base;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2vpnForwarding::Nodes::Node::L2fibxConL2tpv2s::L2fibxConL2tpv2::Segment2::Ac::FxcNextHop> fxc_next_hop;
        
}; // L2vpnForwarding::Nodes::Node::L2fibxConL2tpv2s::L2fibxConL2tpv2::Segment2::Ac


class L2vpnForwarding::Nodes::Node::L2fibxConL2tpv2s::L2fibxConL2tpv2::Segment2::Ac::Base : public ydk::Entity
{
    public:
        Base();
        ~Base();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;


}; // L2vpnForwarding::Nodes::Node::L2fibxConL2tpv2s::L2fibxConL2tpv2::Segment2::Ac::Base


class L2vpnForwarding::Nodes::Node::L2fibxConL2tpv2s::L2fibxConL2tpv2::Segment2::Ac::FxcNextHop : public ydk::Entity
{
    public:
        FxcNextHop();
        ~FxcNextHop();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf next_hop_address; //type: string
        ydk::YLeaf next_hop_address_v6; //type: string
        ydk::YLeaf next_hop_internal_label; //type: uint32
        ydk::YLeaf ecd_plaformt_data_valid; //type: boolean
        ydk::YLeaf ecd_platform_data_length; //type: uint32
        ydk::YLeaf children_count; //type: uint32
        class Base; //type: L2vpnForwarding::Nodes::Node::L2fibxConL2tpv2s::L2fibxConL2tpv2::Segment2::Ac::FxcNextHop::Base

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2vpnForwarding::Nodes::Node::L2fibxConL2tpv2s::L2fibxConL2tpv2::Segment2::Ac::FxcNextHop::Base> base;
        
}; // L2vpnForwarding::Nodes::Node::L2fibxConL2tpv2s::L2fibxConL2tpv2::Segment2::Ac::FxcNextHop


class L2vpnForwarding::Nodes::Node::L2fibxConL2tpv2s::L2fibxConL2tpv2::Segment2::Ac::FxcNextHop::Base : public ydk::Entity
{
    public:
        Base();
        ~Base();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;


}; // L2vpnForwarding::Nodes::Node::L2fibxConL2tpv2s::L2fibxConL2tpv2::Segment2::Ac::FxcNextHop::Base


class L2vpnForwarding::Nodes::Node::L2fibxConL2tpv2s::L2fibxConL2tpv2::Segment2::Bp : public ydk::Entity
{
    public:
        Bp();
        ~Bp();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf bridge_id; //type: uint32
        ydk::YLeaf shg_id; //type: uint32
        ydk::YLeaf msti_pointer; //type: uint32
        ydk::YLeaf segment_type; //type: uint8
        ydk::YLeaf mvrp_sequence_number; //type: uint16
        ydk::YLeaf learn_key; //type: uint8
        class Base; //type: L2vpnForwarding::Nodes::Node::L2fibxConL2tpv2s::L2fibxConL2tpv2::Segment2::Bp::Base
        class Oper; //type: L2vpnForwarding::Nodes::Node::L2fibxConL2tpv2s::L2fibxConL2tpv2::Segment2::Bp::Oper
        class P2mp; //type: L2vpnForwarding::Nodes::Node::L2fibxConL2tpv2s::L2fibxConL2tpv2::Segment2::Bp::P2mp

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2vpnForwarding::Nodes::Node::L2fibxConL2tpv2s::L2fibxConL2tpv2::Segment2::Bp::Base> base;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2vpnForwarding::Nodes::Node::L2fibxConL2tpv2s::L2fibxConL2tpv2::Segment2::Bp::Oper> oper;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2vpnForwarding::Nodes::Node::L2fibxConL2tpv2s::L2fibxConL2tpv2::Segment2::Bp::P2mp> p2mp;
        
}; // L2vpnForwarding::Nodes::Node::L2fibxConL2tpv2s::L2fibxConL2tpv2::Segment2::Bp


class L2vpnForwarding::Nodes::Node::L2fibxConL2tpv2s::L2fibxConL2tpv2::Segment2::Bp::Base : public ydk::Entity
{
    public:
        Base();
        ~Base();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;


}; // L2vpnForwarding::Nodes::Node::L2fibxConL2tpv2s::L2fibxConL2tpv2::Segment2::Bp::Base


class L2vpnForwarding::Nodes::Node::L2fibxConL2tpv2s::L2fibxConL2tpv2::Segment2::Bp::Oper : public ydk::Entity
{
    public:
        Oper();
        ~Oper();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf unicast_storm_control_pps; //type: uint64
        ydk::YLeaf unicast_storm_control_kb_ps; //type: uint64
        ydk::YLeaf broadcast_storm_control_pps; //type: uint64
        ydk::YLeaf broadcast_storm_control_kb_ps; //type: uint64
        ydk::YLeaf multicast_storm_control_pps; //type: uint64
        ydk::YLeaf multicast_storm_control_kb_ps; //type: uint64
        class OperationalInformation; //type: L2vpnForwarding::Nodes::Node::L2fibxConL2tpv2s::L2fibxConL2tpv2::Segment2::Bp::Oper::OperationalInformation

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2vpnForwarding::Nodes::Node::L2fibxConL2tpv2s::L2fibxConL2tpv2::Segment2::Bp::Oper::OperationalInformation> operational_information;
        
}; // L2vpnForwarding::Nodes::Node::L2fibxConL2tpv2s::L2fibxConL2tpv2::Segment2::Bp::Oper


class L2vpnForwarding::Nodes::Node::L2fibxConL2tpv2s::L2fibxConL2tpv2::Segment2::Bp::Oper::OperationalInformation : public ydk::Entity
{
    public:
        OperationalInformation();
        ~OperationalInformation();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf mtu; //type: uint32
        ydk::YLeaf mac_aging_time; //type: uint32
        ydk::YLeaf mac_limit; //type: uint32
        ydk::YLeaf number_of_macs; //type: uint32
        ydk::YLeaf admin_disabled; //type: boolean
        ydk::YLeaf flooding_disabled; //type: boolean
        ydk::YLeaf flood_unknown_unicast_enabled; //type: boolean
        ydk::YLeaf mac_limit_action; //type: MgmtL2fibMacLimitAction
        ydk::YLeaf mac_limit_threshold; //type: uint32
        ydk::YLeaf mac_learning_disabled; //type: boolean
        ydk::YLeaf mac_port_down_flush_disabled; //type: boolean
        ydk::YLeaf mac_limit_notification_type; //type: MgmtL2fibMacLimitNotify
        ydk::YLeaf is_mac_secure_enabled; //type: boolean
        ydk::YLeaf is_mac_secure_logging_enabled; //type: boolean
        ydk::YLeaf mac_secure_action; //type: MgmtL2fibMacSecAction
        ydk::YLeaf is_mac_secure_accept_shutdown; //type: boolean
        ydk::YLeaf is_mac_secure_threshold_enabled; //type: boolean
        ydk::YLeaf mac_aging_type; //type: boolean
        ydk::YLeaf storm_control_unicast_enabled; //type: boolean
        ydk::YLeaf storm_control_broadcast_enabled; //type: boolean
        ydk::YLeaf storm_control_multicast_enabled; //type: boolean
        ydk::YLeaf storm_control_unicast_rate_unit; //type: L2fibStormControlRateUnit
        ydk::YLeaf storm_control_broadcast_rate_unit; //type: L2fibStormControlRateUnit
        ydk::YLeaf storm_control_multicast_rate_unit; //type: L2fibStormControlRateUnit
        ydk::YLeaf dhcp_enabled; //type: boolean
        ydk::YLeaf dhcp_trusted; //type: boolean
        ydk::YLeaf is_dai_enabled; //type: boolean
        ydk::YLeaf is_dai_addr_validation_ipv4_enabled; //type: boolean
        ydk::YLeaf is_dai_addr_validation_source_mac_enabled; //type: boolean
        ydk::YLeaf is_dai_addr_validation_destination_mac_enabled; //type: boolean
        ydk::YLeaf is_dai_logging_enabled; //type: boolean
        ydk::YLeaf is_ipsg_enabled; //type: boolean
        ydk::YLeaf is_ipsg_logging_enabled; //type: boolean
        ydk::YLeaf is_vpls_flood_optimization_enabled; //type: boolean
        ydk::YLeaf igmp_snoop_enabled; //type: boolean
        ydk::YLeaf igmp_snoop_profile_enabled; //type: boolean
        ydk::YLeaf igmp_flood_forward_enabled; //type: boolean
        ydk::YLeaf igmp_mroute_port_enabled; //type: boolean
        ydk::YLeaf igmp_route_guard_enabled; //type: boolean
        ydk::YLeaf mld_snoop_enabled; //type: boolean
        ydk::YLeaf mld_snoop_profile_enabled; //type: boolean
        ydk::YLeaf mld_flood_forward_enabled; //type: boolean
        ydk::YLeaf mld_mroute_port_enabled; //type: boolean
        ydk::YLeaf mld_route_guard_enabled; //type: boolean
        ydk::YLeaf stp_participating; //type: boolean
        ydk::YLeaf bvi_configured; //type: boolean
        ydk::YLeaf is_bvi_up; //type: boolean
        ydk::YLeaf is_vni_enabled; //type: boolean
        ydk::YLeaf is_evpn_enabled; //type: boolean
        ydk::YLeaf unknown_unicast_flooding_disabled; //type: boolean
        ydk::YLeaf is_pbbevpn_enabled; //type: boolean
        ydk::YLeaf is_swmac_learning; //type: boolean
        ydk::YLeaf is_evpn_flow_label; //type: boolean
        ydk::YLeaf is_evpn_cw_disable; //type: boolean
        ydk::YLeaf msti; //type: uint32
        ydk::YLeaf is_p2mp_pw_enabled; //type: boolean
        ydk::YLeaf is_igmp_snoop_enabled; //type: boolean
        ydk::YLeaf nv_satellite_offload_ipv4_multicast_disabled; //type: boolean
        class Feature; //type: L2vpnForwarding::Nodes::Node::L2fibxConL2tpv2s::L2fibxConL2tpv2::Segment2::Bp::Oper::OperationalInformation::Feature

        ydk::YList feature;
        
}; // L2vpnForwarding::Nodes::Node::L2fibxConL2tpv2s::L2fibxConL2tpv2::Segment2::Bp::Oper::OperationalInformation


class L2vpnForwarding::Nodes::Node::L2fibxConL2tpv2s::L2fibxConL2tpv2::Segment2::Bp::Oper::OperationalInformation::Feature : public ydk::Entity
{
    public:
        Feature();
        ~Feature();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf feature_type; //type: L2fibFeature
        class Dhcp; //type: L2vpnForwarding::Nodes::Node::L2fibxConL2tpv2s::L2fibxConL2tpv2::Segment2::Bp::Oper::OperationalInformation::Feature::Dhcp
        class Igmp; //type: L2vpnForwarding::Nodes::Node::L2fibxConL2tpv2s::L2fibxConL2tpv2::Segment2::Bp::Oper::OperationalInformation::Feature::Igmp
        class Mld; //type: L2vpnForwarding::Nodes::Node::L2fibxConL2tpv2s::L2fibxConL2tpv2::Segment2::Bp::Oper::OperationalInformation::Feature::Mld

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2vpnForwarding::Nodes::Node::L2fibxConL2tpv2s::L2fibxConL2tpv2::Segment2::Bp::Oper::OperationalInformation::Feature::Dhcp> dhcp;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2vpnForwarding::Nodes::Node::L2fibxConL2tpv2s::L2fibxConL2tpv2::Segment2::Bp::Oper::OperationalInformation::Feature::Igmp> igmp;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2vpnForwarding::Nodes::Node::L2fibxConL2tpv2s::L2fibxConL2tpv2::Segment2::Bp::Oper::OperationalInformation::Feature::Mld> mld;
        
}; // L2vpnForwarding::Nodes::Node::L2fibxConL2tpv2s::L2fibxConL2tpv2::Segment2::Bp::Oper::OperationalInformation::Feature


class L2vpnForwarding::Nodes::Node::L2fibxConL2tpv2s::L2fibxConL2tpv2::Segment2::Bp::Oper::OperationalInformation::Feature::Dhcp : public ydk::Entity
{
    public:
        Dhcp();
        ~Dhcp();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf profile_name; //type: string

}; // L2vpnForwarding::Nodes::Node::L2fibxConL2tpv2s::L2fibxConL2tpv2::Segment2::Bp::Oper::OperationalInformation::Feature::Dhcp


class L2vpnForwarding::Nodes::Node::L2fibxConL2tpv2s::L2fibxConL2tpv2::Segment2::Bp::Oper::OperationalInformation::Feature::Igmp : public ydk::Entity
{
    public:
        Igmp();
        ~Igmp();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf profile_name; //type: string

}; // L2vpnForwarding::Nodes::Node::L2fibxConL2tpv2s::L2fibxConL2tpv2::Segment2::Bp::Oper::OperationalInformation::Feature::Igmp


class L2vpnForwarding::Nodes::Node::L2fibxConL2tpv2s::L2fibxConL2tpv2::Segment2::Bp::Oper::OperationalInformation::Feature::Mld : public ydk::Entity
{
    public:
        Mld();
        ~Mld();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf profile_name; //type: string

}; // L2vpnForwarding::Nodes::Node::L2fibxConL2tpv2s::L2fibxConL2tpv2::Segment2::Bp::Oper::OperationalInformation::Feature::Mld


class L2vpnForwarding::Nodes::Node::L2fibxConL2tpv2s::L2fibxConL2tpv2::Segment2::Bp::P2mp : public ydk::Entity
{
    public:
        P2mp();
        ~P2mp();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf ptree_type; //type: L2vpnPtree
        ydk::YLeaf lsm_id; //type: uint32
        ydk::YLeaf tunnel_id; //type: uint16
        ydk::YLeaf p2mp_id; //type: uint16
        ydk::YLeaf extended_tunnel_id; //type: string
        ydk::YLeaf ptree_owner_lmrib; //type: boolean

}; // L2vpnForwarding::Nodes::Node::L2fibxConL2tpv2s::L2fibxConL2tpv2::Segment2::Bp::P2mp


class L2vpnForwarding::Nodes::Node::L2fibxConL2tpv2s::L2fibxConL2tpv2::Segment2::Fxs : public ydk::Entity
{
    public:
        Fxs();
        ~Fxs();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf fxs_id; //type: uint32
        ydk::YLeaf segment_type; //type: uint8
        class Base; //type: L2vpnForwarding::Nodes::Node::L2fibxConL2tpv2s::L2fibxConL2tpv2::Segment2::Fxs::Base

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2vpnForwarding::Nodes::Node::L2fibxConL2tpv2s::L2fibxConL2tpv2::Segment2::Fxs::Base> base;
        
}; // L2vpnForwarding::Nodes::Node::L2fibxConL2tpv2s::L2fibxConL2tpv2::Segment2::Fxs


class L2vpnForwarding::Nodes::Node::L2fibxConL2tpv2s::L2fibxConL2tpv2::Segment2::Fxs::Base : public ydk::Entity
{
    public:
        Base();
        ~Base();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;


}; // L2vpnForwarding::Nodes::Node::L2fibxConL2tpv2s::L2fibxConL2tpv2::Segment2::Fxs::Base


class L2vpnForwarding::Nodes::Node::L2fibxConL2tpv2s::L2fibxConL2tpv2::Segment2::Pw : public ydk::Entity
{
    public:
        Pw();
        ~Pw();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf pw_id; //type: uint64
        ydk::YLeaf signal_capability_flags; //type: uint32
        ydk::YLeaf context; //type: uint16
        ydk::YLeaf sequence_resync_threshold; //type: uint16
        ydk::YLeaf bound; //type: boolean
        ydk::YLeaf next_hop_valid; //type: boolean
        ydk::YLeaf backup_configured; //type: boolean
        ydk::YLeaf redundancy_role; //type: L2fibPwRedundancyRole
        ydk::YLeaf active; //type: boolean
        ydk::YLeaf pseudo_wire_id_type; //type: L2fibPwId
        ydk::YLeaf pw_load_balance_type; //type: L2fibLoadBal
        ydk::YLeaf pw_flow_label_tx; //type: boolean
        ydk::YLeaf grouping_supported; //type: boolean
        ydk::YLeaf group_id; //type: uint32
        ydk::YLeaf group_state; //type: L2fibGroupState
        ydk::YLeaf global_id; //type: uint32
        ydk::YLeaf ac_id; //type: uint32
        ydk::YLeaf forward_class; //type: uint8
        ydk::YLeaf next_hop_address; //type: string
        class Base; //type: L2vpnForwarding::Nodes::Node::L2fibxConL2tpv2s::L2fibxConL2tpv2::Segment2::Pw::Base
        class NextHop; //type: L2vpnForwarding::Nodes::Node::L2fibxConL2tpv2s::L2fibxConL2tpv2::Segment2::Pw::NextHop
        class PseudoWireUnion; //type: L2vpnForwarding::Nodes::Node::L2fibxConL2tpv2s::L2fibxConL2tpv2::Segment2::Pw::PseudoWireUnion
        class BackupPseudoWire; //type: L2vpnForwarding::Nodes::Node::L2fibxConL2tpv2s::L2fibxConL2tpv2::Segment2::Pw::BackupPseudoWire

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2vpnForwarding::Nodes::Node::L2fibxConL2tpv2s::L2fibxConL2tpv2::Segment2::Pw::Base> base;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2vpnForwarding::Nodes::Node::L2fibxConL2tpv2s::L2fibxConL2tpv2::Segment2::Pw::NextHop> next_hop;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2vpnForwarding::Nodes::Node::L2fibxConL2tpv2s::L2fibxConL2tpv2::Segment2::Pw::PseudoWireUnion> pseudo_wire_union;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2vpnForwarding::Nodes::Node::L2fibxConL2tpv2s::L2fibxConL2tpv2::Segment2::Pw::BackupPseudoWire> backup_pseudo_wire;
        
}; // L2vpnForwarding::Nodes::Node::L2fibxConL2tpv2s::L2fibxConL2tpv2::Segment2::Pw


class L2vpnForwarding::Nodes::Node::L2fibxConL2tpv2s::L2fibxConL2tpv2::Segment2::Pw::Base : public ydk::Entity
{
    public:
        Base();
        ~Base();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;


}; // L2vpnForwarding::Nodes::Node::L2fibxConL2tpv2s::L2fibxConL2tpv2::Segment2::Pw::Base


class L2vpnForwarding::Nodes::Node::L2fibxConL2tpv2s::L2fibxConL2tpv2::Segment2::Pw::NextHop : public ydk::Entity
{
    public:
        NextHop();
        ~NextHop();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf next_hop_address; //type: string
        ydk::YLeaf next_hop_address_v6; //type: string
        ydk::YLeaf next_hop_internal_label; //type: uint32
        ydk::YLeaf ecd_plaformt_data_valid; //type: boolean
        ydk::YLeaf ecd_platform_data_length; //type: uint32
        ydk::YLeaf children_count; //type: uint32
        class Base; //type: L2vpnForwarding::Nodes::Node::L2fibxConL2tpv2s::L2fibxConL2tpv2::Segment2::Pw::NextHop::Base

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2vpnForwarding::Nodes::Node::L2fibxConL2tpv2s::L2fibxConL2tpv2::Segment2::Pw::NextHop::Base> base;
        
}; // L2vpnForwarding::Nodes::Node::L2fibxConL2tpv2s::L2fibxConL2tpv2::Segment2::Pw::NextHop


class L2vpnForwarding::Nodes::Node::L2fibxConL2tpv2s::L2fibxConL2tpv2::Segment2::Pw::NextHop::Base : public ydk::Entity
{
    public:
        Base();
        ~Base();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;


}; // L2vpnForwarding::Nodes::Node::L2fibxConL2tpv2s::L2fibxConL2tpv2::Segment2::Pw::NextHop::Base


class L2vpnForwarding::Nodes::Node::L2fibxConL2tpv2s::L2fibxConL2tpv2::Segment2::Pw::PseudoWireUnion : public ydk::Entity
{
    public:
        PseudoWireUnion();
        ~PseudoWireUnion();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf data_type; //type: MgmtL2fibData
        class Mpls; //type: L2vpnForwarding::Nodes::Node::L2fibxConL2tpv2s::L2fibxConL2tpv2::Segment2::Pw::PseudoWireUnion::Mpls
        class L2tp; //type: L2vpnForwarding::Nodes::Node::L2fibxConL2tpv2s::L2fibxConL2tpv2::Segment2::Pw::PseudoWireUnion::L2tp
        class L2tpv2; //type: L2vpnForwarding::Nodes::Node::L2fibxConL2tpv2s::L2fibxConL2tpv2::Segment2::Pw::PseudoWireUnion::L2tpv2
        class L2tpIpv6Ts; //type: L2vpnForwarding::Nodes::Node::L2fibxConL2tpv2s::L2fibxConL2tpv2::Segment2::Pw::PseudoWireUnion::L2tpIpv6Ts

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2vpnForwarding::Nodes::Node::L2fibxConL2tpv2s::L2fibxConL2tpv2::Segment2::Pw::PseudoWireUnion::Mpls> mpls;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2vpnForwarding::Nodes::Node::L2fibxConL2tpv2s::L2fibxConL2tpv2::Segment2::Pw::PseudoWireUnion::L2tp> l2tp;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2vpnForwarding::Nodes::Node::L2fibxConL2tpv2s::L2fibxConL2tpv2::Segment2::Pw::PseudoWireUnion::L2tpv2> l2tpv2;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2vpnForwarding::Nodes::Node::L2fibxConL2tpv2s::L2fibxConL2tpv2::Segment2::Pw::PseudoWireUnion::L2tpIpv6Ts> l2tp_ipv6_ts;
        
}; // L2vpnForwarding::Nodes::Node::L2fibxConL2tpv2s::L2fibxConL2tpv2::Segment2::Pw::PseudoWireUnion


class L2vpnForwarding::Nodes::Node::L2fibxConL2tpv2s::L2fibxConL2tpv2::Segment2::Pw::PseudoWireUnion::Mpls : public ydk::Entity
{
    public:
        Mpls();
        ~Mpls();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf pw_label; //type: uint32
        ydk::YLeaf pw_local_label; //type: uint32
        ydk::YLeaf pw_tunnel_interface; //type: uint32
        ydk::YLeaf pw_xcid; //type: uint32

}; // L2vpnForwarding::Nodes::Node::L2fibxConL2tpv2s::L2fibxConL2tpv2::Segment2::Pw::PseudoWireUnion::Mpls


class L2vpnForwarding::Nodes::Node::L2fibxConL2tpv2s::L2fibxConL2tpv2::Segment2::Pw::PseudoWireUnion::L2tp : public ydk::Entity
{
    public:
        L2tp();
        ~L2tp();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf tos_val; //type: uint8
        ydk::YLeaf ttl; //type: uint8
        ydk::YLeaf path_mtu; //type: uint16
        ydk::YLeaf sequence_number_sent; //type: uint32
        ydk::YLeaf sequence_number_expected; //type: uint32
        class Local; //type: L2vpnForwarding::Nodes::Node::L2fibxConL2tpv2s::L2fibxConL2tpv2::Segment2::Pw::PseudoWireUnion::L2tp::Local
        class Remote; //type: L2vpnForwarding::Nodes::Node::L2fibxConL2tpv2s::L2fibxConL2tpv2::Segment2::Pw::PseudoWireUnion::L2tp::Remote

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2vpnForwarding::Nodes::Node::L2fibxConL2tpv2s::L2fibxConL2tpv2::Segment2::Pw::PseudoWireUnion::L2tp::Local> local;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2vpnForwarding::Nodes::Node::L2fibxConL2tpv2s::L2fibxConL2tpv2::Segment2::Pw::PseudoWireUnion::L2tp::Remote> remote;
        
}; // L2vpnForwarding::Nodes::Node::L2fibxConL2tpv2s::L2fibxConL2tpv2::Segment2::Pw::PseudoWireUnion::L2tp


class L2vpnForwarding::Nodes::Node::L2fibxConL2tpv2s::L2fibxConL2tpv2::Segment2::Pw::PseudoWireUnion::L2tp::Local : public ydk::Entity
{
    public:
        Local();
        ~Local();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf session_id; //type: uint32
        ydk::YLeaf cookie_size; //type: uint8
        ydk::YLeaf cookie_low_value; //type: uint32
        ydk::YLeaf cookie_high_value; //type: uint32

}; // L2vpnForwarding::Nodes::Node::L2fibxConL2tpv2s::L2fibxConL2tpv2::Segment2::Pw::PseudoWireUnion::L2tp::Local


class L2vpnForwarding::Nodes::Node::L2fibxConL2tpv2s::L2fibxConL2tpv2::Segment2::Pw::PseudoWireUnion::L2tp::Remote : public ydk::Entity
{
    public:
        Remote();
        ~Remote();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf session_id; //type: uint32
        ydk::YLeaf cookie_size; //type: uint8
        ydk::YLeaf cookie_low_value; //type: uint32
        ydk::YLeaf cookie_high_value; //type: uint32

}; // L2vpnForwarding::Nodes::Node::L2fibxConL2tpv2s::L2fibxConL2tpv2::Segment2::Pw::PseudoWireUnion::L2tp::Remote


class L2vpnForwarding::Nodes::Node::L2fibxConL2tpv2s::L2fibxConL2tpv2::Segment2::Pw::PseudoWireUnion::L2tpv2 : public ydk::Entity
{
    public:
        L2tpv2();
        ~L2tpv2();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf pw_flags; //type: uint8
        ydk::YLeaf tos_val; //type: uint8
        ydk::YLeaf ttl; //type: uint8
        ydk::YLeaf path_mtu; //type: uint16
        ydk::YLeaf protocol; //type: uint16
        ydk::YLeaf rem_udp_port; //type: uint16
        ydk::YLeaf xconnect_id; //type: uint32
        ydk::YLeaf next_hop_address; //type: string
        ydk::YLeaf source_address; //type: string
        class Local; //type: L2vpnForwarding::Nodes::Node::L2fibxConL2tpv2s::L2fibxConL2tpv2::Segment2::Pw::PseudoWireUnion::L2tpv2::Local
        class Remote; //type: L2vpnForwarding::Nodes::Node::L2fibxConL2tpv2s::L2fibxConL2tpv2::Segment2::Pw::PseudoWireUnion::L2tpv2::Remote

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2vpnForwarding::Nodes::Node::L2fibxConL2tpv2s::L2fibxConL2tpv2::Segment2::Pw::PseudoWireUnion::L2tpv2::Local> local;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2vpnForwarding::Nodes::Node::L2fibxConL2tpv2s::L2fibxConL2tpv2::Segment2::Pw::PseudoWireUnion::L2tpv2::Remote> remote;
        
}; // L2vpnForwarding::Nodes::Node::L2fibxConL2tpv2s::L2fibxConL2tpv2::Segment2::Pw::PseudoWireUnion::L2tpv2


class L2vpnForwarding::Nodes::Node::L2fibxConL2tpv2s::L2fibxConL2tpv2::Segment2::Pw::PseudoWireUnion::L2tpv2::Local : public ydk::Entity
{
    public:
        Local();
        ~Local();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf session_id; //type: uint32
        ydk::YLeaf tunnel_id; //type: uint32

}; // L2vpnForwarding::Nodes::Node::L2fibxConL2tpv2s::L2fibxConL2tpv2::Segment2::Pw::PseudoWireUnion::L2tpv2::Local


class L2vpnForwarding::Nodes::Node::L2fibxConL2tpv2s::L2fibxConL2tpv2::Segment2::Pw::PseudoWireUnion::L2tpv2::Remote : public ydk::Entity
{
    public:
        Remote();
        ~Remote();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf session_id; //type: uint32
        ydk::YLeaf tunnel_id; //type: uint32

}; // L2vpnForwarding::Nodes::Node::L2fibxConL2tpv2s::L2fibxConL2tpv2::Segment2::Pw::PseudoWireUnion::L2tpv2::Remote


class L2vpnForwarding::Nodes::Node::L2fibxConL2tpv2s::L2fibxConL2tpv2::Segment2::Pw::PseudoWireUnion::L2tpIpv6Ts : public ydk::Entity
{
    public:
        L2tpIpv6Ts();
        ~L2tpIpv6Ts();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf tos_val; //type: uint8
        ydk::YLeaf ttl; //type: uint8
        ydk::YLeaf path_mtu; //type: uint16
        ydk::YLeaf sequence_number_sent; //type: uint32
        ydk::YLeaf sequence_number_expected; //type: uint32
        ydk::YLeaf local_address; //type: string
        ydk::YLeaf remote_address; //type: string
        class Local; //type: L2vpnForwarding::Nodes::Node::L2fibxConL2tpv2s::L2fibxConL2tpv2::Segment2::Pw::PseudoWireUnion::L2tpIpv6Ts::Local
        class Remote; //type: L2vpnForwarding::Nodes::Node::L2fibxConL2tpv2s::L2fibxConL2tpv2::Segment2::Pw::PseudoWireUnion::L2tpIpv6Ts::Remote

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2vpnForwarding::Nodes::Node::L2fibxConL2tpv2s::L2fibxConL2tpv2::Segment2::Pw::PseudoWireUnion::L2tpIpv6Ts::Local> local;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2vpnForwarding::Nodes::Node::L2fibxConL2tpv2s::L2fibxConL2tpv2::Segment2::Pw::PseudoWireUnion::L2tpIpv6Ts::Remote> remote;
        
}; // L2vpnForwarding::Nodes::Node::L2fibxConL2tpv2s::L2fibxConL2tpv2::Segment2::Pw::PseudoWireUnion::L2tpIpv6Ts


class L2vpnForwarding::Nodes::Node::L2fibxConL2tpv2s::L2fibxConL2tpv2::Segment2::Pw::PseudoWireUnion::L2tpIpv6Ts::Local : public ydk::Entity
{
    public:
        Local();
        ~Local();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf cookie_size; //type: uint8
        ydk::YLeaf cookie_low_value; //type: uint32
        ydk::YLeaf cookie_high_value; //type: uint32
        ydk::YLeaf secondary_cookie_size; //type: uint8
        ydk::YLeaf secondary_cookie_low_value; //type: uint32
        ydk::YLeaf secondary_cookie_high_value; //type: uint32
        ydk::YLeaf session_id; //type: uint32

}; // L2vpnForwarding::Nodes::Node::L2fibxConL2tpv2s::L2fibxConL2tpv2::Segment2::Pw::PseudoWireUnion::L2tpIpv6Ts::Local


class L2vpnForwarding::Nodes::Node::L2fibxConL2tpv2s::L2fibxConL2tpv2::Segment2::Pw::PseudoWireUnion::L2tpIpv6Ts::Remote : public ydk::Entity
{
    public:
        Remote();
        ~Remote();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf session_id; //type: uint32
        ydk::YLeaf cookie_size; //type: uint8
        ydk::YLeaf cookie_low_value; //type: uint32
        ydk::YLeaf cookie_high_value; //type: uint32

}; // L2vpnForwarding::Nodes::Node::L2fibxConL2tpv2s::L2fibxConL2tpv2::Segment2::Pw::PseudoWireUnion::L2tpIpv6Ts::Remote


class L2vpnForwarding::Nodes::Node::L2fibxConL2tpv2s::L2fibxConL2tpv2::Segment2::Pw::BackupPseudoWire : public ydk::Entity
{
    public:
        BackupPseudoWire();
        ~BackupPseudoWire();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf backup_next_hop; //type: string
        ydk::YLeaf backup_pseudo_wire_id_type; //type: L2fibPwId
        ydk::YLeaf backup_pseudo_wire_id; //type: uint32
        ydk::YLeaf redundancy_role; //type: L2fibPwRedundancyRole
        ydk::YLeaf active; //type: boolean
        ydk::YLeaf bound; //type: boolean
        ydk::YLeaf pw_flow_label_tx; //type: boolean
        ydk::YLeaf grouping_supported; //type: boolean
        ydk::YLeaf group_id; //type: uint32
        ydk::YLeaf group_state; //type: L2fibGroupState
        class Atom; //type: L2vpnForwarding::Nodes::Node::L2fibxConL2tpv2s::L2fibxConL2tpv2::Segment2::Pw::BackupPseudoWire::Atom

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2vpnForwarding::Nodes::Node::L2fibxConL2tpv2s::L2fibxConL2tpv2::Segment2::Pw::BackupPseudoWire::Atom> atom;
        
}; // L2vpnForwarding::Nodes::Node::L2fibxConL2tpv2s::L2fibxConL2tpv2::Segment2::Pw::BackupPseudoWire


class L2vpnForwarding::Nodes::Node::L2fibxConL2tpv2s::L2fibxConL2tpv2::Segment2::Pw::BackupPseudoWire::Atom : public ydk::Entity
{
    public:
        Atom();
        ~Atom();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf pw_label; //type: uint32
        ydk::YLeaf pw_local_label; //type: uint32
        ydk::YLeaf pw_tunnel_interface; //type: uint32
        ydk::YLeaf pw_xcid; //type: uint32

}; // L2vpnForwarding::Nodes::Node::L2fibxConL2tpv2s::L2fibxConL2tpv2::Segment2::Pw::BackupPseudoWire::Atom


class L2vpnForwarding::Nodes::Node::L2fibMrouteIpv6s : public ydk::Entity
{
    public:
        L2fibMrouteIpv6s();
        ~L2fibMrouteIpv6s();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class L2fibMrouteIpv6; //type: L2vpnForwarding::Nodes::Node::L2fibMrouteIpv6s::L2fibMrouteIpv6

        ydk::YList l2fib_mroute_ipv6;
        
}; // L2vpnForwarding::Nodes::Node::L2fibMrouteIpv6s


class L2vpnForwarding::Nodes::Node::L2fibMrouteIpv6s::L2fibMrouteIpv6 : public ydk::Entity
{
    public:
        L2fibMrouteIpv6();
        ~L2fibMrouteIpv6();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf source; //type: string
        ydk::YLeaf group; //type: string
        ydk::YLeaf bd_group_name; //type: string
        ydk::YLeaf bd_name; //type: string
        ydk::YLeaf bridge_id; //type: uint32
        ydk::YLeaf xid_count; //type: uint16
        ydk::YLeaf platform_data_length; //type: uint8
        ydk::YLeaf platform_data; //type: string
        ydk::YLeaf hardware_information; //type: string
        ydk::YLeaf bridge_domain_name; //type: string
        class MulticastBaseInformation; //type: L2vpnForwarding::Nodes::Node::L2fibMrouteIpv6s::L2fibMrouteIpv6::MulticastBaseInformation
        class SourcePrefix; //type: L2vpnForwarding::Nodes::Node::L2fibMrouteIpv6s::L2fibMrouteIpv6::SourcePrefix
        class DestinationPrefix; //type: L2vpnForwarding::Nodes::Node::L2fibMrouteIpv6s::L2fibMrouteIpv6::DestinationPrefix
        class ForwardStats; //type: L2vpnForwarding::Nodes::Node::L2fibMrouteIpv6s::L2fibMrouteIpv6::ForwardStats
        class IrbInfo; //type: L2vpnForwarding::Nodes::Node::L2fibMrouteIpv6s::L2fibMrouteIpv6::IrbInfo

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2vpnForwarding::Nodes::Node::L2fibMrouteIpv6s::L2fibMrouteIpv6::MulticastBaseInformation> multicast_base_information;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2vpnForwarding::Nodes::Node::L2fibMrouteIpv6s::L2fibMrouteIpv6::SourcePrefix> source_prefix;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2vpnForwarding::Nodes::Node::L2fibMrouteIpv6s::L2fibMrouteIpv6::DestinationPrefix> destination_prefix;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2vpnForwarding::Nodes::Node::L2fibMrouteIpv6s::L2fibMrouteIpv6::ForwardStats> forward_stats;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2vpnForwarding::Nodes::Node::L2fibMrouteIpv6s::L2fibMrouteIpv6::IrbInfo> irb_info;
        
}; // L2vpnForwarding::Nodes::Node::L2fibMrouteIpv6s::L2fibMrouteIpv6


class L2vpnForwarding::Nodes::Node::L2fibMrouteIpv6s::L2fibMrouteIpv6::MulticastBaseInformation : public ydk::Entity
{
    public:
        MulticastBaseInformation();
        ~MulticastBaseInformation();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;


}; // L2vpnForwarding::Nodes::Node::L2fibMrouteIpv6s::L2fibMrouteIpv6::MulticastBaseInformation


class L2vpnForwarding::Nodes::Node::L2fibMrouteIpv6s::L2fibMrouteIpv6::SourcePrefix : public ydk::Entity
{
    public:
        SourcePrefix();
        ~SourcePrefix();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf proto; //type: uint8
        ydk::YLeaf prefix_length; //type: uint16
        ydk::YLeaf prefix; //type: string

}; // L2vpnForwarding::Nodes::Node::L2fibMrouteIpv6s::L2fibMrouteIpv6::SourcePrefix


class L2vpnForwarding::Nodes::Node::L2fibMrouteIpv6s::L2fibMrouteIpv6::DestinationPrefix : public ydk::Entity
{
    public:
        DestinationPrefix();
        ~DestinationPrefix();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf proto; //type: uint8
        ydk::YLeaf prefix_length; //type: uint16
        ydk::YLeaf prefix; //type: string

}; // L2vpnForwarding::Nodes::Node::L2fibMrouteIpv6s::L2fibMrouteIpv6::DestinationPrefix


class L2vpnForwarding::Nodes::Node::L2fibMrouteIpv6s::L2fibMrouteIpv6::ForwardStats : public ydk::Entity
{
    public:
        ForwardStats();
        ~ForwardStats();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class ForwardStat; //type: L2vpnForwarding::Nodes::Node::L2fibMrouteIpv6s::L2fibMrouteIpv6::ForwardStats::ForwardStat

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2vpnForwarding::Nodes::Node::L2fibMrouteIpv6s::L2fibMrouteIpv6::ForwardStats::ForwardStat> forward_stat;
        
}; // L2vpnForwarding::Nodes::Node::L2fibMrouteIpv6s::L2fibMrouteIpv6::ForwardStats


class L2vpnForwarding::Nodes::Node::L2fibMrouteIpv6s::L2fibMrouteIpv6::ForwardStats::ForwardStat : public ydk::Entity
{
    public:
        ForwardStat();
        ~ForwardStat();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf data_type; //type: MgmtL2fibStatsData
        class Mulicast; //type: L2vpnForwarding::Nodes::Node::L2fibMrouteIpv6s::L2fibMrouteIpv6::ForwardStats::ForwardStat::Mulicast

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2vpnForwarding::Nodes::Node::L2fibMrouteIpv6s::L2fibMrouteIpv6::ForwardStats::ForwardStat::Mulicast> mulicast;
        
}; // L2vpnForwarding::Nodes::Node::L2fibMrouteIpv6s::L2fibMrouteIpv6::ForwardStats::ForwardStat


class L2vpnForwarding::Nodes::Node::L2fibMrouteIpv6s::L2fibMrouteIpv6::ForwardStats::ForwardStat::Mulicast : public ydk::Entity
{
    public:
        Mulicast();
        ~Mulicast();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class MulticastForwardStat; //type: L2vpnForwarding::Nodes::Node::L2fibMrouteIpv6s::L2fibMrouteIpv6::ForwardStats::ForwardStat::Mulicast::MulticastForwardStat
        class ReceivedStat; //type: L2vpnForwarding::Nodes::Node::L2fibMrouteIpv6s::L2fibMrouteIpv6::ForwardStats::ForwardStat::Mulicast::ReceivedStat
        class Punt; //type: L2vpnForwarding::Nodes::Node::L2fibMrouteIpv6s::L2fibMrouteIpv6::ForwardStats::ForwardStat::Mulicast::Punt
        class Drop; //type: L2vpnForwarding::Nodes::Node::L2fibMrouteIpv6s::L2fibMrouteIpv6::ForwardStats::ForwardStat::Mulicast::Drop
        class MulticastCoreForwardStat; //type: L2vpnForwarding::Nodes::Node::L2fibMrouteIpv6s::L2fibMrouteIpv6::ForwardStats::ForwardStat::Mulicast::MulticastCoreForwardStat
        class CoreReceivedStat; //type: L2vpnForwarding::Nodes::Node::L2fibMrouteIpv6s::L2fibMrouteIpv6::ForwardStats::ForwardStat::Mulicast::CoreReceivedStat

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2vpnForwarding::Nodes::Node::L2fibMrouteIpv6s::L2fibMrouteIpv6::ForwardStats::ForwardStat::Mulicast::MulticastForwardStat> multicast_forward_stat;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2vpnForwarding::Nodes::Node::L2fibMrouteIpv6s::L2fibMrouteIpv6::ForwardStats::ForwardStat::Mulicast::ReceivedStat> received_stat;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2vpnForwarding::Nodes::Node::L2fibMrouteIpv6s::L2fibMrouteIpv6::ForwardStats::ForwardStat::Mulicast::Punt> punt;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2vpnForwarding::Nodes::Node::L2fibMrouteIpv6s::L2fibMrouteIpv6::ForwardStats::ForwardStat::Mulicast::Drop> drop;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2vpnForwarding::Nodes::Node::L2fibMrouteIpv6s::L2fibMrouteIpv6::ForwardStats::ForwardStat::Mulicast::MulticastCoreForwardStat> multicast_core_forward_stat;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2vpnForwarding::Nodes::Node::L2fibMrouteIpv6s::L2fibMrouteIpv6::ForwardStats::ForwardStat::Mulicast::CoreReceivedStat> core_received_stat;
        
}; // L2vpnForwarding::Nodes::Node::L2fibMrouteIpv6s::L2fibMrouteIpv6::ForwardStats::ForwardStat::Mulicast


class L2vpnForwarding::Nodes::Node::L2fibMrouteIpv6s::L2fibMrouteIpv6::ForwardStats::ForwardStat::Mulicast::MulticastForwardStat : public ydk::Entity
{
    public:
        MulticastForwardStat();
        ~MulticastForwardStat();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf packets; //type: uint64
        ydk::YLeaf bytes; //type: uint64

}; // L2vpnForwarding::Nodes::Node::L2fibMrouteIpv6s::L2fibMrouteIpv6::ForwardStats::ForwardStat::Mulicast::MulticastForwardStat


class L2vpnForwarding::Nodes::Node::L2fibMrouteIpv6s::L2fibMrouteIpv6::ForwardStats::ForwardStat::Mulicast::ReceivedStat : public ydk::Entity
{
    public:
        ReceivedStat();
        ~ReceivedStat();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf packets; //type: uint64
        ydk::YLeaf bytes; //type: uint64

}; // L2vpnForwarding::Nodes::Node::L2fibMrouteIpv6s::L2fibMrouteIpv6::ForwardStats::ForwardStat::Mulicast::ReceivedStat


class L2vpnForwarding::Nodes::Node::L2fibMrouteIpv6s::L2fibMrouteIpv6::ForwardStats::ForwardStat::Mulicast::Punt : public ydk::Entity
{
    public:
        Punt();
        ~Punt();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf packets; //type: uint64
        ydk::YLeaf bytes; //type: uint64

}; // L2vpnForwarding::Nodes::Node::L2fibMrouteIpv6s::L2fibMrouteIpv6::ForwardStats::ForwardStat::Mulicast::Punt


class L2vpnForwarding::Nodes::Node::L2fibMrouteIpv6s::L2fibMrouteIpv6::ForwardStats::ForwardStat::Mulicast::Drop : public ydk::Entity
{
    public:
        Drop();
        ~Drop();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf packets; //type: uint64
        ydk::YLeaf bytes; //type: uint64

}; // L2vpnForwarding::Nodes::Node::L2fibMrouteIpv6s::L2fibMrouteIpv6::ForwardStats::ForwardStat::Mulicast::Drop


class L2vpnForwarding::Nodes::Node::L2fibMrouteIpv6s::L2fibMrouteIpv6::ForwardStats::ForwardStat::Mulicast::MulticastCoreForwardStat : public ydk::Entity
{
    public:
        MulticastCoreForwardStat();
        ~MulticastCoreForwardStat();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf packets; //type: uint64
        ydk::YLeaf bytes; //type: uint64

}; // L2vpnForwarding::Nodes::Node::L2fibMrouteIpv6s::L2fibMrouteIpv6::ForwardStats::ForwardStat::Mulicast::MulticastCoreForwardStat


class L2vpnForwarding::Nodes::Node::L2fibMrouteIpv6s::L2fibMrouteIpv6::ForwardStats::ForwardStat::Mulicast::CoreReceivedStat : public ydk::Entity
{
    public:
        CoreReceivedStat();
        ~CoreReceivedStat();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf packets; //type: uint64
        ydk::YLeaf bytes; //type: uint64

}; // L2vpnForwarding::Nodes::Node::L2fibMrouteIpv6s::L2fibMrouteIpv6::ForwardStats::ForwardStat::Mulicast::CoreReceivedStat


class L2vpnForwarding::Nodes::Node::L2fibMrouteIpv6s::L2fibMrouteIpv6::IrbInfo : public ydk::Entity
{
    public:
        IrbInfo();
        ~IrbInfo();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf mxid_ac_interface_handle; //type: string
        ydk::YLeaf mxid_pw_id; //type: uint32
        ydk::YLeaf mxid_next_hop_address; //type: string
        ydk::YLeaf irb_plat_data_len; //type: uint16
        ydk::YLeafList irb_plat_data; //type: list of  uint32

}; // L2vpnForwarding::Nodes::Node::L2fibMrouteIpv6s::L2fibMrouteIpv6::IrbInfo


class L2vpnForwarding::Nodes::Node::L2fibMonSessXCons : public ydk::Entity
{
    public:
        L2fibMonSessXCons();
        ~L2fibMonSessXCons();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class L2fibMonSessXCon; //type: L2vpnForwarding::Nodes::Node::L2fibMonSessXCons::L2fibMonSessXCon

        ydk::YList l2fib_mon_sess_x_con;
        
}; // L2vpnForwarding::Nodes::Node::L2fibMonSessXCons


class L2vpnForwarding::Nodes::Node::L2fibMonSessXCons::L2fibMonSessXCon : public ydk::Entity
{
    public:
        L2fibMonSessXCon();
        ~L2fibMonSessXCon();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf monitor_session_name; //type: string
        ydk::YLeaf xcon_name; //type: string
        ydk::YLeaf bound; //type: boolean
        ydk::YLeaf switching_type; //type: MgmtL2fibSwitching
        class Base; //type: L2vpnForwarding::Nodes::Node::L2fibMonSessXCons::L2fibMonSessXCon::Base
        class Segment1; //type: L2vpnForwarding::Nodes::Node::L2fibMonSessXCons::L2fibMonSessXCon::Segment1
        class Segment2; //type: L2vpnForwarding::Nodes::Node::L2fibMonSessXCons::L2fibMonSessXCon::Segment2

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2vpnForwarding::Nodes::Node::L2fibMonSessXCons::L2fibMonSessXCon::Base> base;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2vpnForwarding::Nodes::Node::L2fibMonSessXCons::L2fibMonSessXCon::Segment1> segment1;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2vpnForwarding::Nodes::Node::L2fibMonSessXCons::L2fibMonSessXCon::Segment2> segment2;
        
}; // L2vpnForwarding::Nodes::Node::L2fibMonSessXCons::L2fibMonSessXCon


class L2vpnForwarding::Nodes::Node::L2fibMonSessXCons::L2fibMonSessXCon::Base : public ydk::Entity
{
    public:
        Base();
        ~Base();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;


}; // L2vpnForwarding::Nodes::Node::L2fibMonSessXCons::L2fibMonSessXCon::Base


class L2vpnForwarding::Nodes::Node::L2fibMonSessXCons::L2fibMonSessXCon::Segment1 : public ydk::Entity
{
    public:
        Segment1();
        ~Segment1();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf data_type; //type: MgmtL2fibData
        class Ac; //type: L2vpnForwarding::Nodes::Node::L2fibMonSessXCons::L2fibMonSessXCon::Segment1::Ac
        class Pbb; //type: L2vpnForwarding::Nodes::Node::L2fibMonSessXCons::L2fibMonSessXCon::Segment1::Pbb
        class Vni; //type: L2vpnForwarding::Nodes::Node::L2fibMonSessXCons::L2fibMonSessXCon::Segment1::Vni
        class Evpn; //type: L2vpnForwarding::Nodes::Node::L2fibMonSessXCons::L2fibMonSessXCon::Segment1::Evpn
        class MonitorSession; //type: L2vpnForwarding::Nodes::Node::L2fibMonSessXCons::L2fibMonSessXCon::Segment1::MonitorSession
        class Pw; //type: L2vpnForwarding::Nodes::Node::L2fibMonSessXCons::L2fibMonSessXCon::Segment1::Pw

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2vpnForwarding::Nodes::Node::L2fibMonSessXCons::L2fibMonSessXCon::Segment1::Ac> ac;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2vpnForwarding::Nodes::Node::L2fibMonSessXCons::L2fibMonSessXCon::Segment1::Pbb> pbb;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2vpnForwarding::Nodes::Node::L2fibMonSessXCons::L2fibMonSessXCon::Segment1::Vni> vni;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2vpnForwarding::Nodes::Node::L2fibMonSessXCons::L2fibMonSessXCon::Segment1::Evpn> evpn;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2vpnForwarding::Nodes::Node::L2fibMonSessXCons::L2fibMonSessXCon::Segment1::MonitorSession> monitor_session;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2vpnForwarding::Nodes::Node::L2fibMonSessXCons::L2fibMonSessXCon::Segment1::Pw> pw;
        
}; // L2vpnForwarding::Nodes::Node::L2fibMonSessXCons::L2fibMonSessXCon::Segment1


class L2vpnForwarding::Nodes::Node::L2fibMonSessXCons::L2fibMonSessXCon::Segment1::Ac : public ydk::Entity
{
    public:
        Ac();
        ~Ac();

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
        ydk::YLeaf sub_interface_handle; //type: string
        ydk::YLeaf attachment_circuit_id; //type: uint32
        ydk::YLeaf attachment_circuit_mtu; //type: uint16
        ydk::YLeaf actype; //type: uint8
        ydk::YLeaf inter_working_mode; //type: uint8
        ydk::YLeaf adjacency_valid; //type: boolean
        ydk::YLeaf adjacency_address; //type: string
        ydk::YLeaf bound; //type: boolean
        ydk::YLeaf ip_inter_working_mac; //type: string
        ydk::YLeaf redundancy_group_id; //type: uint32
        ydk::YLeaf redundancy_object_id; //type: uint64
        ydk::YLeaf evpn_internal_label; //type: uint32
        ydk::YLeaf fxc_next_hop_valid; //type: boolean
        ydk::YLeaf vlan_id_count; //type: uint8
        ydk::YLeaf first_vlan_id; //type: uint16
        ydk::YLeaf second_vlan_id; //type: uint16
        class Base; //type: L2vpnForwarding::Nodes::Node::L2fibMonSessXCons::L2fibMonSessXCon::Segment1::Ac::Base
        class FxcNextHop; //type: L2vpnForwarding::Nodes::Node::L2fibMonSessXCons::L2fibMonSessXCon::Segment1::Ac::FxcNextHop

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2vpnForwarding::Nodes::Node::L2fibMonSessXCons::L2fibMonSessXCon::Segment1::Ac::Base> base;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2vpnForwarding::Nodes::Node::L2fibMonSessXCons::L2fibMonSessXCon::Segment1::Ac::FxcNextHop> fxc_next_hop;
        
}; // L2vpnForwarding::Nodes::Node::L2fibMonSessXCons::L2fibMonSessXCon::Segment1::Ac


class L2vpnForwarding::Nodes::Node::L2fibMonSessXCons::L2fibMonSessXCon::Segment1::Ac::Base : public ydk::Entity
{
    public:
        Base();
        ~Base();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;


}; // L2vpnForwarding::Nodes::Node::L2fibMonSessXCons::L2fibMonSessXCon::Segment1::Ac::Base


class L2vpnForwarding::Nodes::Node::L2fibMonSessXCons::L2fibMonSessXCon::Segment1::Ac::FxcNextHop : public ydk::Entity
{
    public:
        FxcNextHop();
        ~FxcNextHop();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf next_hop_address; //type: string
        ydk::YLeaf next_hop_address_v6; //type: string
        ydk::YLeaf next_hop_internal_label; //type: uint32
        ydk::YLeaf ecd_plaformt_data_valid; //type: boolean
        ydk::YLeaf ecd_platform_data_length; //type: uint32
        ydk::YLeaf children_count; //type: uint32
        class Base; //type: L2vpnForwarding::Nodes::Node::L2fibMonSessXCons::L2fibMonSessXCon::Segment1::Ac::FxcNextHop::Base

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2vpnForwarding::Nodes::Node::L2fibMonSessXCons::L2fibMonSessXCon::Segment1::Ac::FxcNextHop::Base> base;
        
}; // L2vpnForwarding::Nodes::Node::L2fibMonSessXCons::L2fibMonSessXCon::Segment1::Ac::FxcNextHop


class L2vpnForwarding::Nodes::Node::L2fibMonSessXCons::L2fibMonSessXCon::Segment1::Ac::FxcNextHop::Base : public ydk::Entity
{
    public:
        Base();
        ~Base();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;


}; // L2vpnForwarding::Nodes::Node::L2fibMonSessXCons::L2fibMonSessXCon::Segment1::Ac::FxcNextHop::Base


class L2vpnForwarding::Nodes::Node::L2fibMonSessXCons::L2fibMonSessXCon::Segment1::Pbb : public ydk::Entity
{
    public:
        Pbb();
        ~Pbb();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf bound; //type: boolean
        ydk::YLeaf forward_class; //type: uint8
        ydk::YLeaf core_pbb_evpn_enabled; //type: boolean
        class Base; //type: L2vpnForwarding::Nodes::Node::L2fibMonSessXCons::L2fibMonSessXCon::Segment1::Pbb::Base
        class PbbUnion; //type: L2vpnForwarding::Nodes::Node::L2fibMonSessXCons::L2fibMonSessXCon::Segment1::Pbb::PbbUnion

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2vpnForwarding::Nodes::Node::L2fibMonSessXCons::L2fibMonSessXCon::Segment1::Pbb::Base> base;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2vpnForwarding::Nodes::Node::L2fibMonSessXCons::L2fibMonSessXCon::Segment1::Pbb::PbbUnion> pbb_union;
        
}; // L2vpnForwarding::Nodes::Node::L2fibMonSessXCons::L2fibMonSessXCon::Segment1::Pbb


class L2vpnForwarding::Nodes::Node::L2fibMonSessXCons::L2fibMonSessXCon::Segment1::Pbb::Base : public ydk::Entity
{
    public:
        Base();
        ~Base();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;


}; // L2vpnForwarding::Nodes::Node::L2fibMonSessXCons::L2fibMonSessXCon::Segment1::Pbb::Base


class L2vpnForwarding::Nodes::Node::L2fibMonSessXCons::L2fibMonSessXCon::Segment1::Pbb::PbbUnion : public ydk::Entity
{
    public:
        PbbUnion();
        ~PbbUnion();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf pbb_type; //type: MgmtL2fibBridge
        class Edge; //type: L2vpnForwarding::Nodes::Node::L2fibMonSessXCons::L2fibMonSessXCon::Segment1::Pbb::PbbUnion::Edge
        class Core; //type: L2vpnForwarding::Nodes::Node::L2fibMonSessXCons::L2fibMonSessXCon::Segment1::Pbb::PbbUnion::Core

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2vpnForwarding::Nodes::Node::L2fibMonSessXCons::L2fibMonSessXCon::Segment1::Pbb::PbbUnion::Edge> edge;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2vpnForwarding::Nodes::Node::L2fibMonSessXCons::L2fibMonSessXCon::Segment1::Pbb::PbbUnion::Core> core;
        
}; // L2vpnForwarding::Nodes::Node::L2fibMonSessXCons::L2fibMonSessXCon::Segment1::Pbb::PbbUnion


class L2vpnForwarding::Nodes::Node::L2fibMonSessXCons::L2fibMonSessXCon::Segment1::Pbb::PbbUnion::Edge : public ydk::Entity
{
    public:
        Edge();
        ~Edge();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf mac_configured; //type: boolean
        ydk::YLeaf mac; //type: string

}; // L2vpnForwarding::Nodes::Node::L2fibMonSessXCons::L2fibMonSessXCon::Segment1::Pbb::PbbUnion::Edge


class L2vpnForwarding::Nodes::Node::L2fibMonSessXCons::L2fibMonSessXCon::Segment1::Pbb::PbbUnion::Core : public ydk::Entity
{
    public:
        Core();
        ~Core();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf vlan_id; //type: uint32

}; // L2vpnForwarding::Nodes::Node::L2fibMonSessXCons::L2fibMonSessXCon::Segment1::Pbb::PbbUnion::Core


class L2vpnForwarding::Nodes::Node::L2fibMonSessXCons::L2fibMonSessXCon::Segment1::Vni : public ydk::Entity
{
    public:
        Vni();
        ~Vni();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf srcip; //type: string
        ydk::YLeaf mcastip; //type: string
        ydk::YLeaf bound; //type: boolean
        ydk::YLeaf parent_if; //type: string
        ydk::YLeaf encap; //type: uint32
        ydk::YLeaf udp_port; //type: uint32
        ydk::YLeaf source_vtep_if; //type: string
        ydk::YLeaf any_cast_ip; //type: string
        ydk::YLeaf anycast_mcast_ip; //type: string
        ydk::YLeaf ingress_replication; //type: boolean
        ydk::YLeaf vx_lan_mode; //type: uint32
        class Base; //type: L2vpnForwarding::Nodes::Node::L2fibMonSessXCons::L2fibMonSessXCon::Segment1::Vni::Base

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2vpnForwarding::Nodes::Node::L2fibMonSessXCons::L2fibMonSessXCon::Segment1::Vni::Base> base;
        
}; // L2vpnForwarding::Nodes::Node::L2fibMonSessXCons::L2fibMonSessXCon::Segment1::Vni


class L2vpnForwarding::Nodes::Node::L2fibMonSessXCons::L2fibMonSessXCon::Segment1::Vni::Base : public ydk::Entity
{
    public:
        Base();
        ~Base();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;


}; // L2vpnForwarding::Nodes::Node::L2fibMonSessXCons::L2fibMonSessXCon::Segment1::Vni::Base


class L2vpnForwarding::Nodes::Node::L2fibMonSessXCons::L2fibMonSessXCon::Segment1::Evpn : public ydk::Entity
{
    public:
        Evpn();
        ~Evpn();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf bound; //type: boolean
        ydk::YLeaf evi; //type: uint32
        ydk::YLeaf forward_class; //type: uint8
        class Base; //type: L2vpnForwarding::Nodes::Node::L2fibMonSessXCons::L2fibMonSessXCon::Segment1::Evpn::Base

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2vpnForwarding::Nodes::Node::L2fibMonSessXCons::L2fibMonSessXCon::Segment1::Evpn::Base> base;
        
}; // L2vpnForwarding::Nodes::Node::L2fibMonSessXCons::L2fibMonSessXCon::Segment1::Evpn


class L2vpnForwarding::Nodes::Node::L2fibMonSessXCons::L2fibMonSessXCon::Segment1::Evpn::Base : public ydk::Entity
{
    public:
        Base();
        ~Base();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;


}; // L2vpnForwarding::Nodes::Node::L2fibMonSessXCons::L2fibMonSessXCon::Segment1::Evpn::Base


class L2vpnForwarding::Nodes::Node::L2fibMonSessXCons::L2fibMonSessXCon::Segment1::MonitorSession : public ydk::Entity
{
    public:
        MonitorSession();
        ~MonitorSession();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf xcid; //type: uint32
        ydk::YLeaf session_name; //type: string
        ydk::YLeaf hardware_information; //type: string
        ydk::YLeaf bound; //type: boolean
        class Base; //type: L2vpnForwarding::Nodes::Node::L2fibMonSessXCons::L2fibMonSessXCon::Segment1::MonitorSession::Base

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2vpnForwarding::Nodes::Node::L2fibMonSessXCons::L2fibMonSessXCon::Segment1::MonitorSession::Base> base;
        
}; // L2vpnForwarding::Nodes::Node::L2fibMonSessXCons::L2fibMonSessXCon::Segment1::MonitorSession


class L2vpnForwarding::Nodes::Node::L2fibMonSessXCons::L2fibMonSessXCon::Segment1::MonitorSession::Base : public ydk::Entity
{
    public:
        Base();
        ~Base();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;


}; // L2vpnForwarding::Nodes::Node::L2fibMonSessXCons::L2fibMonSessXCon::Segment1::MonitorSession::Base


class L2vpnForwarding::Nodes::Node::L2fibMonSessXCons::L2fibMonSessXCon::Segment1::Pw : public ydk::Entity
{
    public:
        Pw();
        ~Pw();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf pw_id; //type: uint64
        ydk::YLeaf signal_capability_flags; //type: uint32
        ydk::YLeaf context; //type: uint16
        ydk::YLeaf sequence_resync_threshold; //type: uint16
        ydk::YLeaf bound; //type: boolean
        ydk::YLeaf next_hop_valid; //type: boolean
        ydk::YLeaf backup_configured; //type: boolean
        ydk::YLeaf redundancy_role; //type: L2fibPwRedundancyRole
        ydk::YLeaf active; //type: boolean
        ydk::YLeaf pseudo_wire_id_type; //type: L2fibPwId
        ydk::YLeaf pw_load_balance_type; //type: L2fibLoadBal
        ydk::YLeaf pw_flow_label_tx; //type: boolean
        ydk::YLeaf grouping_supported; //type: boolean
        ydk::YLeaf group_id; //type: uint32
        ydk::YLeaf group_state; //type: L2fibGroupState
        ydk::YLeaf global_id; //type: uint32
        ydk::YLeaf ac_id; //type: uint32
        ydk::YLeaf forward_class; //type: uint8
        ydk::YLeaf next_hop_address; //type: string
        class Base; //type: L2vpnForwarding::Nodes::Node::L2fibMonSessXCons::L2fibMonSessXCon::Segment1::Pw::Base
        class NextHop; //type: L2vpnForwarding::Nodes::Node::L2fibMonSessXCons::L2fibMonSessXCon::Segment1::Pw::NextHop
        class PseudoWireUnion; //type: L2vpnForwarding::Nodes::Node::L2fibMonSessXCons::L2fibMonSessXCon::Segment1::Pw::PseudoWireUnion
        class BackupPseudoWire; //type: L2vpnForwarding::Nodes::Node::L2fibMonSessXCons::L2fibMonSessXCon::Segment1::Pw::BackupPseudoWire

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2vpnForwarding::Nodes::Node::L2fibMonSessXCons::L2fibMonSessXCon::Segment1::Pw::Base> base;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2vpnForwarding::Nodes::Node::L2fibMonSessXCons::L2fibMonSessXCon::Segment1::Pw::NextHop> next_hop;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2vpnForwarding::Nodes::Node::L2fibMonSessXCons::L2fibMonSessXCon::Segment1::Pw::PseudoWireUnion> pseudo_wire_union;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2vpnForwarding::Nodes::Node::L2fibMonSessXCons::L2fibMonSessXCon::Segment1::Pw::BackupPseudoWire> backup_pseudo_wire;
        
}; // L2vpnForwarding::Nodes::Node::L2fibMonSessXCons::L2fibMonSessXCon::Segment1::Pw


class L2vpnForwarding::Nodes::Node::L2fibMonSessXCons::L2fibMonSessXCon::Segment1::Pw::Base : public ydk::Entity
{
    public:
        Base();
        ~Base();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;


}; // L2vpnForwarding::Nodes::Node::L2fibMonSessXCons::L2fibMonSessXCon::Segment1::Pw::Base


class L2vpnForwarding::Nodes::Node::L2fibMonSessXCons::L2fibMonSessXCon::Segment1::Pw::NextHop : public ydk::Entity
{
    public:
        NextHop();
        ~NextHop();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf next_hop_address; //type: string
        ydk::YLeaf next_hop_address_v6; //type: string
        ydk::YLeaf next_hop_internal_label; //type: uint32
        ydk::YLeaf ecd_plaformt_data_valid; //type: boolean
        ydk::YLeaf ecd_platform_data_length; //type: uint32
        ydk::YLeaf children_count; //type: uint32
        class Base; //type: L2vpnForwarding::Nodes::Node::L2fibMonSessXCons::L2fibMonSessXCon::Segment1::Pw::NextHop::Base

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2vpnForwarding::Nodes::Node::L2fibMonSessXCons::L2fibMonSessXCon::Segment1::Pw::NextHop::Base> base;
        
}; // L2vpnForwarding::Nodes::Node::L2fibMonSessXCons::L2fibMonSessXCon::Segment1::Pw::NextHop


class L2vpnForwarding::Nodes::Node::L2fibMonSessXCons::L2fibMonSessXCon::Segment1::Pw::NextHop::Base : public ydk::Entity
{
    public:
        Base();
        ~Base();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;


}; // L2vpnForwarding::Nodes::Node::L2fibMonSessXCons::L2fibMonSessXCon::Segment1::Pw::NextHop::Base


class L2vpnForwarding::Nodes::Node::L2fibMonSessXCons::L2fibMonSessXCon::Segment1::Pw::PseudoWireUnion : public ydk::Entity
{
    public:
        PseudoWireUnion();
        ~PseudoWireUnion();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf data_type; //type: MgmtL2fibData
        class Mpls; //type: L2vpnForwarding::Nodes::Node::L2fibMonSessXCons::L2fibMonSessXCon::Segment1::Pw::PseudoWireUnion::Mpls
        class L2tp; //type: L2vpnForwarding::Nodes::Node::L2fibMonSessXCons::L2fibMonSessXCon::Segment1::Pw::PseudoWireUnion::L2tp
        class L2tpv2; //type: L2vpnForwarding::Nodes::Node::L2fibMonSessXCons::L2fibMonSessXCon::Segment1::Pw::PseudoWireUnion::L2tpv2
        class L2tpIpv6Ts; //type: L2vpnForwarding::Nodes::Node::L2fibMonSessXCons::L2fibMonSessXCon::Segment1::Pw::PseudoWireUnion::L2tpIpv6Ts

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2vpnForwarding::Nodes::Node::L2fibMonSessXCons::L2fibMonSessXCon::Segment1::Pw::PseudoWireUnion::Mpls> mpls;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2vpnForwarding::Nodes::Node::L2fibMonSessXCons::L2fibMonSessXCon::Segment1::Pw::PseudoWireUnion::L2tp> l2tp;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2vpnForwarding::Nodes::Node::L2fibMonSessXCons::L2fibMonSessXCon::Segment1::Pw::PseudoWireUnion::L2tpv2> l2tpv2;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2vpnForwarding::Nodes::Node::L2fibMonSessXCons::L2fibMonSessXCon::Segment1::Pw::PseudoWireUnion::L2tpIpv6Ts> l2tp_ipv6_ts;
        
}; // L2vpnForwarding::Nodes::Node::L2fibMonSessXCons::L2fibMonSessXCon::Segment1::Pw::PseudoWireUnion


class L2vpnForwarding::Nodes::Node::L2fibMonSessXCons::L2fibMonSessXCon::Segment1::Pw::PseudoWireUnion::Mpls : public ydk::Entity
{
    public:
        Mpls();
        ~Mpls();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf pw_label; //type: uint32
        ydk::YLeaf pw_local_label; //type: uint32
        ydk::YLeaf pw_tunnel_interface; //type: uint32
        ydk::YLeaf pw_xcid; //type: uint32

}; // L2vpnForwarding::Nodes::Node::L2fibMonSessXCons::L2fibMonSessXCon::Segment1::Pw::PseudoWireUnion::Mpls


class L2vpnForwarding::Nodes::Node::L2fibMonSessXCons::L2fibMonSessXCon::Segment1::Pw::PseudoWireUnion::L2tp : public ydk::Entity
{
    public:
        L2tp();
        ~L2tp();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf tos_val; //type: uint8
        ydk::YLeaf ttl; //type: uint8
        ydk::YLeaf path_mtu; //type: uint16
        ydk::YLeaf sequence_number_sent; //type: uint32
        ydk::YLeaf sequence_number_expected; //type: uint32
        class Local; //type: L2vpnForwarding::Nodes::Node::L2fibMonSessXCons::L2fibMonSessXCon::Segment1::Pw::PseudoWireUnion::L2tp::Local
        class Remote; //type: L2vpnForwarding::Nodes::Node::L2fibMonSessXCons::L2fibMonSessXCon::Segment1::Pw::PseudoWireUnion::L2tp::Remote

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2vpnForwarding::Nodes::Node::L2fibMonSessXCons::L2fibMonSessXCon::Segment1::Pw::PseudoWireUnion::L2tp::Local> local;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2vpnForwarding::Nodes::Node::L2fibMonSessXCons::L2fibMonSessXCon::Segment1::Pw::PseudoWireUnion::L2tp::Remote> remote;
        
}; // L2vpnForwarding::Nodes::Node::L2fibMonSessXCons::L2fibMonSessXCon::Segment1::Pw::PseudoWireUnion::L2tp


class L2vpnForwarding::Nodes::Node::L2fibMonSessXCons::L2fibMonSessXCon::Segment1::Pw::PseudoWireUnion::L2tp::Local : public ydk::Entity
{
    public:
        Local();
        ~Local();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf session_id; //type: uint32
        ydk::YLeaf cookie_size; //type: uint8
        ydk::YLeaf cookie_low_value; //type: uint32
        ydk::YLeaf cookie_high_value; //type: uint32

}; // L2vpnForwarding::Nodes::Node::L2fibMonSessXCons::L2fibMonSessXCon::Segment1::Pw::PseudoWireUnion::L2tp::Local


class L2vpnForwarding::Nodes::Node::L2fibMonSessXCons::L2fibMonSessXCon::Segment1::Pw::PseudoWireUnion::L2tp::Remote : public ydk::Entity
{
    public:
        Remote();
        ~Remote();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf session_id; //type: uint32
        ydk::YLeaf cookie_size; //type: uint8
        ydk::YLeaf cookie_low_value; //type: uint32
        ydk::YLeaf cookie_high_value; //type: uint32

}; // L2vpnForwarding::Nodes::Node::L2fibMonSessXCons::L2fibMonSessXCon::Segment1::Pw::PseudoWireUnion::L2tp::Remote


class L2vpnForwarding::Nodes::Node::L2fibMonSessXCons::L2fibMonSessXCon::Segment1::Pw::PseudoWireUnion::L2tpv2 : public ydk::Entity
{
    public:
        L2tpv2();
        ~L2tpv2();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf pw_flags; //type: uint8
        ydk::YLeaf tos_val; //type: uint8
        ydk::YLeaf ttl; //type: uint8
        ydk::YLeaf path_mtu; //type: uint16
        ydk::YLeaf protocol; //type: uint16
        ydk::YLeaf rem_udp_port; //type: uint16
        ydk::YLeaf xconnect_id; //type: uint32
        ydk::YLeaf next_hop_address; //type: string
        ydk::YLeaf source_address; //type: string
        class Local; //type: L2vpnForwarding::Nodes::Node::L2fibMonSessXCons::L2fibMonSessXCon::Segment1::Pw::PseudoWireUnion::L2tpv2::Local
        class Remote; //type: L2vpnForwarding::Nodes::Node::L2fibMonSessXCons::L2fibMonSessXCon::Segment1::Pw::PseudoWireUnion::L2tpv2::Remote

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2vpnForwarding::Nodes::Node::L2fibMonSessXCons::L2fibMonSessXCon::Segment1::Pw::PseudoWireUnion::L2tpv2::Local> local;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2vpnForwarding::Nodes::Node::L2fibMonSessXCons::L2fibMonSessXCon::Segment1::Pw::PseudoWireUnion::L2tpv2::Remote> remote;
        
}; // L2vpnForwarding::Nodes::Node::L2fibMonSessXCons::L2fibMonSessXCon::Segment1::Pw::PseudoWireUnion::L2tpv2


class L2vpnForwarding::Nodes::Node::L2fibMonSessXCons::L2fibMonSessXCon::Segment1::Pw::PseudoWireUnion::L2tpv2::Local : public ydk::Entity
{
    public:
        Local();
        ~Local();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf session_id; //type: uint32
        ydk::YLeaf tunnel_id; //type: uint32

}; // L2vpnForwarding::Nodes::Node::L2fibMonSessXCons::L2fibMonSessXCon::Segment1::Pw::PseudoWireUnion::L2tpv2::Local


class L2vpnForwarding::Nodes::Node::L2fibMonSessXCons::L2fibMonSessXCon::Segment1::Pw::PseudoWireUnion::L2tpv2::Remote : public ydk::Entity
{
    public:
        Remote();
        ~Remote();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf session_id; //type: uint32
        ydk::YLeaf tunnel_id; //type: uint32

}; // L2vpnForwarding::Nodes::Node::L2fibMonSessXCons::L2fibMonSessXCon::Segment1::Pw::PseudoWireUnion::L2tpv2::Remote


}
}

#endif /* _CISCO_IOS_XR_L2VPN_OPER_1_ */


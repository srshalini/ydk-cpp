#ifndef _CISCO_IOS_XR_IPV4_BGP_OPER_0_
#define _CISCO_IOS_XR_IPV4_BGP_OPER_0_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>


namespace cisco_ios_xr {
namespace Cisco_IOS_XR_ipv4_bgp_oper {

class Bgp : public ydk::Entity
{
    public:
        Bgp();
        ~Bgp();

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

        class ConfigInstances; //type: Bgp::ConfigInstances
        class Instances; //type: Bgp::Instances
        class BpmInstancesTable; //type: Bgp::BpmInstancesTable

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_oper::Bgp::ConfigInstances> config_instances;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances> instances;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_oper::Bgp::BpmInstancesTable> bpm_instances_table;
        
}; // Bgp


class Bgp::ConfigInstances : public ydk::Entity
{
    public:
        ConfigInstances();
        ~ConfigInstances();

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

        class ConfigInstance; //type: Bgp::ConfigInstances::ConfigInstance

        ydk::YList config_instance;
        
}; // Bgp::ConfigInstances


class Bgp::ConfigInstances::ConfigInstance : public ydk::Entity
{
    public:
        ConfigInstance();
        ~ConfigInstance();

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

        ydk::YLeaf instance_name; //type: string
        class ConfigInstanceDefaultVrf; //type: Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf
        class ConfigVrfs; //type: Bgp::ConfigInstances::ConfigInstance::ConfigVrfs

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_oper::Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf> config_instance_default_vrf;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_oper::Bgp::ConfigInstances::ConfigInstance::ConfigVrfs> config_vrfs;
        
}; // Bgp::ConfigInstances::ConfigInstance


class Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf : public ydk::Entity
{
    public:
        ConfigInstanceDefaultVrf();
        ~ConfigInstanceDefaultVrf();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class EntityConfigurations; //type: Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations
        class ConfigurationUsers; //type: Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::ConfigurationUsers
        class ConfigurationInheritances; //type: Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::ConfigurationInheritances

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_oper::Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations> entity_configurations;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_oper::Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::ConfigurationUsers> configuration_users;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_oper::Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::ConfigurationInheritances> configuration_inheritances;
        
}; // Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf


class Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations : public ydk::Entity
{
    public:
        EntityConfigurations();
        ~EntityConfigurations();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class EntityConfiguration; //type: Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration

        ydk::YList entity_configuration;
        
}; // Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations


class Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration : public ydk::Entity
{
    public:
        EntityConfiguration();
        ~EntityConfiguration();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf entity_type; //type: BgpEntity
        ydk::YLeaf neighbor_address; //type: string
        ydk::YLeaf entity_name; //type: string
        ydk::YLeaf length; //type: uint32
        ydk::YLeaf group_name; //type: string
        ydk::YLeaf configuration_type; //type: BgpEntities
        ydk::YLeaf address_family_identifier; //type: uint8
        class NeighborAddressXr; //type: Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::NeighborAddressXr
        class AfIndependentConfig; //type: Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig
        class AfDependentConfig; //type: Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_oper::Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::NeighborAddressXr> neighbor_address_xr;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_oper::Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig> af_independent_config;
        ydk::YList af_dependent_config;
        
}; // Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration


class Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::NeighborAddressXr : public ydk::Entity
{
    public:
        NeighborAddressXr();
        ~NeighborAddressXr();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf afi; //type: BgpAfi
        ydk::YLeaf ipv4_address; //type: string
        ydk::YLeaf ipv4_mcast_address; //type: string
        ydk::YLeaf ipv4_label_address; //type: string
        ydk::YLeaf ipv4_tunnel_address; //type: string
        ydk::YLeaf ipv4_mdt_address; //type: string
        ydk::YLeaf ipv4vpn_address; //type: string
        ydk::YLeaf ipv4vpna_mcastddress; //type: string
        ydk::YLeaf ipv6_address; //type: string
        ydk::YLeaf ipv6_mcast_address; //type: string
        ydk::YLeaf ipv6_label_address; //type: string
        ydk::YLeaf ipv6vpn_address; //type: string
        ydk::YLeaf ipv6vpn_mcast_address; //type: string
        ydk::YLeaf rt_constraint_address; //type: string
        ydk::YLeaf ipv6mvpn_address; //type: string
        ydk::YLeaf ipv4mvpn_address; //type: string
        ydk::YLeaf l2vpn_evpn_address; //type: string
        ydk::YLeaf ls_ls_address; //type: string
        ydk::YLeaf ipv4_flowspec_address; //type: string
        ydk::YLeaf ipv6_flowspec_address; //type: string
        ydk::YLeaf ipv4vpn_flowspec_address; //type: string
        ydk::YLeaf ipv6vpn_flowspec_address; //type: string
        class L2vpnVplsAddress; //type: Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::NeighborAddressXr::L2vpnVplsAddress
        class L2vpnMspwAddress; //type: Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::NeighborAddressXr::L2vpnMspwAddress
        class Ipv4SrPolicyAddress; //type: Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::NeighborAddressXr::Ipv4SrPolicyAddress
        class Ipv6SrPolicyAddress; //type: Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::NeighborAddressXr::Ipv6SrPolicyAddress

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_oper::Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::NeighborAddressXr::L2vpnVplsAddress> l2vpn_vpls_address;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_oper::Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::NeighborAddressXr::L2vpnMspwAddress> l2vpn_mspw_address;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_oper::Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::NeighborAddressXr::Ipv4SrPolicyAddress> ipv4_sr_policy_address;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_oper::Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::NeighborAddressXr::Ipv6SrPolicyAddress> ipv6_sr_policy_address;
        
}; // Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::NeighborAddressXr


class Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::NeighborAddressXr::L2vpnVplsAddress : public ydk::Entity
{
    public:
        L2vpnVplsAddress();
        ~L2vpnVplsAddress();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf l2vpn_address; //type: string

}; // Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::NeighborAddressXr::L2vpnVplsAddress


class Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::NeighborAddressXr::L2vpnMspwAddress : public ydk::Entity
{
    public:
        L2vpnMspwAddress();
        ~L2vpnMspwAddress();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf l2vpn_address; //type: string

}; // Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::NeighborAddressXr::L2vpnMspwAddress


class Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::NeighborAddressXr::Ipv4SrPolicyAddress : public ydk::Entity
{
    public:
        Ipv4SrPolicyAddress();
        ~Ipv4SrPolicyAddress();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf ipv4_srpolicy_address; //type: string

}; // Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::NeighborAddressXr::Ipv4SrPolicyAddress


class Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::NeighborAddressXr::Ipv6SrPolicyAddress : public ydk::Entity
{
    public:
        Ipv6SrPolicyAddress();
        ~Ipv6SrPolicyAddress();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf ipv6_srpolicy_address; //type: string

}; // Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::NeighborAddressXr::Ipv6SrPolicyAddress


class Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig : public ydk::Entity
{
    public:
        AfIndependentConfig();
        ~AfIndependentConfig();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf remote_as_number_xx; //type: uint32
        ydk::YLeaf remote_as_number_yy; //type: uint32
        ydk::YLeaf configured_speaker_id; //type: uint32
        ydk::YLeaf tcp_mss; //type: uint32
        ydk::YLeaf min_advertisement_interval; //type: uint32
        ydk::YLeaf min_advertisement_interval_msecs; //type: uint32
        ydk::YLeaf description; //type: string
        ydk::YLeaf ebgp_hop_count; //type: uint32
        ydk::YLeaf bmp_servers; //type: uint32
        ydk::YLeaf is_ebgp_multihop_bgp_mpls_forwarding_disabled; //type: boolean
        ydk::YLeaf keychain; //type: string
        ydk::YLeaf local_as_number_xx; //type: uint32
        ydk::YLeaf local_as_number_yy; //type: uint32
        ydk::YLeaf local_as_no_prepend; //type: boolean
        ydk::YLeaf password; //type: string
        ydk::YLeaf socket_buffer_receive_size; //type: uint32
        ydk::YLeaf bgp_buffer_receive_size; //type: uint32
        ydk::YLeaf socket_buffer_send_size; //type: uint32
        ydk::YLeaf bgp_buffer_send_size; //type: uint32
        ydk::YLeaf adminstrative_shutdown; //type: boolean
        ydk::YLeaf keepalive_interval; //type: uint32
        ydk::YLeaf hold_time_value; //type: uint32
        ydk::YLeaf min_acc_hold_time_value; //type: uint32
        ydk::YLeaf msg_log_in_buf_count; //type: uint32
        ydk::YLeaf msg_log_out_buf_count; //type: uint32
        ydk::YLeaf route_updates_source; //type: string
        ydk::YLeaf dmz_link_bandwidth; //type: uint32
        ydk::YLeaf ebgp_recv_dmz; //type: uint32
        ydk::YLeaf ebgp_send_dmz_mode; //type: BgpEbgpSendDmzEnableMode
        ydk::YLeaf ttl_security; //type: uint32
        ydk::YLeaf suppress4_byte_as; //type: uint32
        ydk::YLeaf capability_negotiation_suppressed; //type: uint32
        ydk::YLeaf session_open_mode; //type: BgpTcpMode
        ydk::YLeaf bfd; //type: uint32
        ydk::YLeaf bfd_mininterval; //type: uint32
        ydk::YLeaf bfd_multiplier; //type: uint32
        ydk::YLeaf tos_type_info; //type: uint8
        ydk::YLeaf tos_value_info; //type: uint8
        ydk::YLeaf nsr_disabled; //type: uint32
        ydk::YLeaf graceful_restart_disabled; //type: uint32
        ydk::YLeaf nbr_restart_time; //type: uint32
        ydk::YLeaf nbr_stale_path_time; //type: uint32
        ydk::YLeaf nbr_enforce_first_as_status; //type: boolean
        ydk::YLeaf nbr_cluster_id_type_info; //type: uint8
        ydk::YLeaf nbr_cluster_id_info; //type: uint32
        ydk::YLeaf ignore_connected_check; //type: boolean
        ydk::YLeaf internal_vpn_client; //type: boolean
        ydk::YLeaf addpath_send_capability; //type: uint32
        ydk::YLeaf update_error_handling_no_reset; //type: uint32
        ydk::YLeaf addpath_receive_capability; //type: uint32
        ydk::YLeaf egress_peer_engineering; //type: uint32
        ydk::YLeaf prefix_validation_disable; //type: uint32
        ydk::YLeaf bestpath_use_origin_as_validity; //type: uint32
        ydk::YLeaf prefix_validation_allow_invalid; //type: uint32
        ydk::YLeaf prefix_validation_signal_ibgp; //type: uint32
        ydk::YLeaf neighbor_update_filter_exists; //type: boolean
        ydk::YLeaf neighbor_update_filter_message_buffer_count; //type: uint32
        ydk::YLeaf neighbor_update_filter_message_buffer_is_non_circular; //type: boolean
        ydk::YLeaf neighbor_update_filter_logging_disable; //type: boolean
        ydk::YLeaf neighbor_update_filter_attribute_filter_group_name; //type: string
        ydk::YLeaf graceful_shutdown_exists; //type: uint32
        ydk::YLeaf graceful_shutdown_loc_pref; //type: uint32
        ydk::YLeaf graceful_shutdown_as_prepends; //type: uint32
        ydk::YLeaf graceful_shutdown_activate; //type: uint32
        ydk::YLeaf neighbor_remote_as_list_group_name; //type: string
        ydk::YLeaf max_peers; //type: uint32
        ydk::YLeaf idle_watch_time; //type: uint32
        ydk::YLeaf ao_keychain; //type: string
        ydk::YLeaf ao_include_tcp_options; //type: uint32
        ydk::YLeaf ao_accept_mismatch_connection; //type: uint32
        ydk::YLeaf local_as_replace_as; //type: boolean
        ydk::YLeaf local_as_dual_as; //type: boolean
        class LocalIpAddress; //type: Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::LocalIpAddress
        class RemoteAsInfo; //type: Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::RemoteAsInfo
        class SpeakerIdInfo; //type: Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::SpeakerIdInfo
        class MinAdvertisementInfo; //type: Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::MinAdvertisementInfo
        class DescriptionInfo; //type: Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::DescriptionInfo
        class EbgpHopCountInfo; //type: Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::EbgpHopCountInfo
        class TcpmssInfo; //type: Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::TcpmssInfo
        class BmpServersInfo; //type: Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::BmpServersInfo
        class KeychainInfo; //type: Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::KeychainInfo
        class LocalAsInfo; //type: Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::LocalAsInfo
        class PasswordInfo; //type: Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::PasswordInfo
        class ReceiveBufferInfo; //type: Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::ReceiveBufferInfo
        class SendBufferInfo; //type: Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::SendBufferInfo
        class ShutdownInfo; //type: Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::ShutdownInfo
        class TimersInfo; //type: Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::TimersInfo
        class LocalAddressInfo; //type: Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::LocalAddressInfo
        class MsgLogInInfo; //type: Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::MsgLogInInfo
        class MsgLogOutInfo; //type: Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::MsgLogOutInfo
        class UpdateSourceInfo; //type: Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::UpdateSourceInfo
        class DmzLinkBandwidthInfo; //type: Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::DmzLinkBandwidthInfo
        class EbgpRecvDmzInfo; //type: Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::EbgpRecvDmzInfo
        class EbgpSendDmzInfo; //type: Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::EbgpSendDmzInfo
        class TtlSecurityInfo; //type: Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::TtlSecurityInfo
        class Suppress4BbyteAsInfo; //type: Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::Suppress4BbyteAsInfo
        class SessionOpenModeInfo; //type: Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::SessionOpenModeInfo
        class BfdInfo; //type: Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::BfdInfo
        class BfdMinintervalInfo; //type: Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::BfdMinintervalInfo
        class BfdMultiplierInfo; //type: Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::BfdMultiplierInfo
        class TosInfo; //type: Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::TosInfo
        class NsrDisabledInfo; //type: Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::NsrDisabledInfo
        class GracefulRestartDisabledInfo; //type: Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::GracefulRestartDisabledInfo
        class NbrRestartTimeInfo; //type: Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::NbrRestartTimeInfo
        class NbrStalePathTimeInfo; //type: Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::NbrStalePathTimeInfo
        class NbrEnforceFirstAsInfo; //type: Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::NbrEnforceFirstAsInfo
        class ClusterIdInfo; //type: Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::ClusterIdInfo
        class IgnoreConnectedInfo; //type: Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::IgnoreConnectedInfo
        class InternalVpnClientInfo; //type: Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::InternalVpnClientInfo
        class AddpathSendCapabilityInfo; //type: Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::AddpathSendCapabilityInfo
        class AddpathReceiveCapabilityInfo; //type: Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::AddpathReceiveCapabilityInfo
        class EgressPeerEngineeringInfo; //type: Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::EgressPeerEngineeringInfo
        class UpdateErrorHandlingNoResetInfo; //type: Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::UpdateErrorHandlingNoResetInfo
        class PrefixValidationDisableInfo; //type: Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::PrefixValidationDisableInfo
        class PrefixValidationUseValiditInfo; //type: Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::PrefixValidationUseValiditInfo
        class PrefixValidationAllowInvalidInfo; //type: Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::PrefixValidationAllowInvalidInfo
        class PrefixValidationSignalIbgpInfo; //type: Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::PrefixValidationSignalIbgpInfo
        class NeighborUpdateFilterExistsInfo; //type: Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::NeighborUpdateFilterExistsInfo
        class NeighborUpdateFilterMessageBufferCountInfo; //type: Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::NeighborUpdateFilterMessageBufferCountInfo
        class NeighborUpdateFilterSyslogDisableInfo; //type: Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::NeighborUpdateFilterSyslogDisableInfo
        class NeighborUpdateFilterAttributeInfo; //type: Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::NeighborUpdateFilterAttributeInfo
        class GracefulShutdownInfo; //type: Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::GracefulShutdownInfo
        class GracefulShutdownLocPrefInfo; //type: Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::GracefulShutdownLocPrefInfo
        class GracefulShutdownAsPrependsInfo; //type: Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::GracefulShutdownAsPrependsInfo
        class GracefulShutdownActivateInfo; //type: Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::GracefulShutdownActivateInfo
        class CapabilityNegotiationSuppressedInfo; //type: Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::CapabilityNegotiationSuppressedInfo
        class NeighborRemoteAsListInfo; //type: Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::NeighborRemoteAsListInfo
        class MaxPeersInfo; //type: Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::MaxPeersInfo
        class IdleWatchTimeInfo; //type: Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::IdleWatchTimeInfo
        class AoKeychainInfo; //type: Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::AoKeychainInfo

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_oper::Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::LocalIpAddress> local_ip_address;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_oper::Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::RemoteAsInfo> remote_as_info;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_oper::Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::SpeakerIdInfo> speaker_id_info;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_oper::Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::MinAdvertisementInfo> min_advertisement_info;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_oper::Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::DescriptionInfo> description_info;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_oper::Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::EbgpHopCountInfo> ebgp_hop_count_info;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_oper::Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::TcpmssInfo> tcpmss_info;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_oper::Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::BmpServersInfo> bmp_servers_info;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_oper::Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::KeychainInfo> keychain_info;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_oper::Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::LocalAsInfo> local_as_info;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_oper::Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::PasswordInfo> password_info;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_oper::Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::ReceiveBufferInfo> receive_buffer_info;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_oper::Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::SendBufferInfo> send_buffer_info;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_oper::Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::ShutdownInfo> shutdown_info;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_oper::Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::TimersInfo> timers_info;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_oper::Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::LocalAddressInfo> local_address_info;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_oper::Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::MsgLogInInfo> msg_log_in_info;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_oper::Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::MsgLogOutInfo> msg_log_out_info;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_oper::Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::UpdateSourceInfo> update_source_info;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_oper::Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::DmzLinkBandwidthInfo> dmz_link_bandwidth_info;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_oper::Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::EbgpRecvDmzInfo> ebgp_recv_dmz_info;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_oper::Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::EbgpSendDmzInfo> ebgp_send_dmz_info;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_oper::Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::TtlSecurityInfo> ttl_security_info;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_oper::Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::Suppress4BbyteAsInfo> suppress4_bbyte_as_info;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_oper::Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::SessionOpenModeInfo> session_open_mode_info;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_oper::Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::BfdInfo> bfd_info;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_oper::Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::BfdMinintervalInfo> bfd_mininterval_info;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_oper::Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::BfdMultiplierInfo> bfd_multiplier_info;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_oper::Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::TosInfo> tos_info;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_oper::Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::NsrDisabledInfo> nsr_disabled_info;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_oper::Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::GracefulRestartDisabledInfo> graceful_restart_disabled_info;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_oper::Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::NbrRestartTimeInfo> nbr_restart_time_info;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_oper::Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::NbrStalePathTimeInfo> nbr_stale_path_time_info;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_oper::Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::NbrEnforceFirstAsInfo> nbr_enforce_first_as_info;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_oper::Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::ClusterIdInfo> cluster_id_info;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_oper::Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::IgnoreConnectedInfo> ignore_connected_info;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_oper::Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::InternalVpnClientInfo> internal_vpn_client_info;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_oper::Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::AddpathSendCapabilityInfo> addpath_send_capability_info;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_oper::Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::AddpathReceiveCapabilityInfo> addpath_receive_capability_info;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_oper::Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::EgressPeerEngineeringInfo> egress_peer_engineering_info;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_oper::Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::UpdateErrorHandlingNoResetInfo> update_error_handling_no_reset_info;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_oper::Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::PrefixValidationDisableInfo> prefix_validation_disable_info;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_oper::Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::PrefixValidationUseValiditInfo> prefix_validation_use_validit_info;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_oper::Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::PrefixValidationAllowInvalidInfo> prefix_validation_allow_invalid_info;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_oper::Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::PrefixValidationSignalIbgpInfo> prefix_validation_signal_ibgp_info;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_oper::Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::NeighborUpdateFilterExistsInfo> neighbor_update_filter_exists_info;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_oper::Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::NeighborUpdateFilterMessageBufferCountInfo> neighbor_update_filter_message_buffer_count_info;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_oper::Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::NeighborUpdateFilterSyslogDisableInfo> neighbor_update_filter_syslog_disable_info;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_oper::Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::NeighborUpdateFilterAttributeInfo> neighbor_update_filter_attribute_info;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_oper::Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::GracefulShutdownInfo> graceful_shutdown_info;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_oper::Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::GracefulShutdownLocPrefInfo> graceful_shutdown_loc_pref_info;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_oper::Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::GracefulShutdownAsPrependsInfo> graceful_shutdown_as_prepends_info;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_oper::Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::GracefulShutdownActivateInfo> graceful_shutdown_activate_info;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_oper::Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::CapabilityNegotiationSuppressedInfo> capability_negotiation_suppressed_info;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_oper::Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::NeighborRemoteAsListInfo> neighbor_remote_as_list_info;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_oper::Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::MaxPeersInfo> max_peers_info;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_oper::Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::IdleWatchTimeInfo> idle_watch_time_info;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_oper::Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::AoKeychainInfo> ao_keychain_info;
        
}; // Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig


class Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::LocalIpAddress : public ydk::Entity
{
    public:
        LocalIpAddress();
        ~LocalIpAddress();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf afi; //type: BgpAfi
        ydk::YLeaf ipv4_address; //type: string
        ydk::YLeaf ipv4_mcast_address; //type: string
        ydk::YLeaf ipv4_label_address; //type: string
        ydk::YLeaf ipv4_tunnel_address; //type: string
        ydk::YLeaf ipv4_mdt_address; //type: string
        ydk::YLeaf ipv4vpn_address; //type: string
        ydk::YLeaf ipv4vpna_mcastddress; //type: string
        ydk::YLeaf ipv6_address; //type: string
        ydk::YLeaf ipv6_mcast_address; //type: string
        ydk::YLeaf ipv6_label_address; //type: string
        ydk::YLeaf ipv6vpn_address; //type: string
        ydk::YLeaf ipv6vpn_mcast_address; //type: string
        ydk::YLeaf rt_constraint_address; //type: string
        ydk::YLeaf ipv6mvpn_address; //type: string
        ydk::YLeaf ipv4mvpn_address; //type: string
        ydk::YLeaf l2vpn_evpn_address; //type: string
        ydk::YLeaf ls_ls_address; //type: string
        ydk::YLeaf ipv4_flowspec_address; //type: string
        ydk::YLeaf ipv6_flowspec_address; //type: string
        ydk::YLeaf ipv4vpn_flowspec_address; //type: string
        ydk::YLeaf ipv6vpn_flowspec_address; //type: string
        class L2vpnVplsAddress; //type: Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::LocalIpAddress::L2vpnVplsAddress
        class L2vpnMspwAddress; //type: Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::LocalIpAddress::L2vpnMspwAddress
        class Ipv4SrPolicyAddress; //type: Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::LocalIpAddress::Ipv4SrPolicyAddress
        class Ipv6SrPolicyAddress; //type: Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::LocalIpAddress::Ipv6SrPolicyAddress

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_oper::Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::LocalIpAddress::L2vpnVplsAddress> l2vpn_vpls_address;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_oper::Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::LocalIpAddress::L2vpnMspwAddress> l2vpn_mspw_address;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_oper::Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::LocalIpAddress::Ipv4SrPolicyAddress> ipv4_sr_policy_address;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_oper::Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::LocalIpAddress::Ipv6SrPolicyAddress> ipv6_sr_policy_address;
        
}; // Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::LocalIpAddress


class Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::LocalIpAddress::L2vpnVplsAddress : public ydk::Entity
{
    public:
        L2vpnVplsAddress();
        ~L2vpnVplsAddress();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf l2vpn_address; //type: string

}; // Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::LocalIpAddress::L2vpnVplsAddress


class Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::LocalIpAddress::L2vpnMspwAddress : public ydk::Entity
{
    public:
        L2vpnMspwAddress();
        ~L2vpnMspwAddress();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf l2vpn_address; //type: string

}; // Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::LocalIpAddress::L2vpnMspwAddress


class Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::LocalIpAddress::Ipv4SrPolicyAddress : public ydk::Entity
{
    public:
        Ipv4SrPolicyAddress();
        ~Ipv4SrPolicyAddress();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf ipv4_srpolicy_address; //type: string

}; // Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::LocalIpAddress::Ipv4SrPolicyAddress


class Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::LocalIpAddress::Ipv6SrPolicyAddress : public ydk::Entity
{
    public:
        Ipv6SrPolicyAddress();
        ~Ipv6SrPolicyAddress();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf ipv6_srpolicy_address; //type: string

}; // Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::LocalIpAddress::Ipv6SrPolicyAddress


class Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::RemoteAsInfo : public ydk::Entity
{
    public:
        RemoteAsInfo();
        ~RemoteAsInfo();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf is_item_configured; //type: boolean
        class InheritanceChain; //type: Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::RemoteAsInfo::InheritanceChain

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_oper::Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::RemoteAsInfo::InheritanceChain> inheritance_chain;
        
}; // Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::RemoteAsInfo


class Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::RemoteAsInfo::InheritanceChain : public ydk::Entity
{
    public:
        InheritanceChain();
        ~InheritanceChain();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class BgpConfigEntid; //type: Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::RemoteAsInfo::InheritanceChain::BgpConfigEntid

        ydk::YList bgp_config_entid;
        
}; // Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::RemoteAsInfo::InheritanceChain


class Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::RemoteAsInfo::InheritanceChain::BgpConfigEntid : public ydk::Entity
{
    public:
        BgpConfigEntid();
        ~BgpConfigEntid();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf address_family_identifier; //type: uint8
        ydk::YLeaf configuration_type; //type: BgpEntities
        ydk::YLeaf group_name; //type: string
        class NeighborAddress; //type: Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::RemoteAsInfo::InheritanceChain::BgpConfigEntid::NeighborAddress

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_oper::Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::RemoteAsInfo::InheritanceChain::BgpConfigEntid::NeighborAddress> neighbor_address;
        
}; // Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::RemoteAsInfo::InheritanceChain::BgpConfigEntid


class Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::RemoteAsInfo::InheritanceChain::BgpConfigEntid::NeighborAddress : public ydk::Entity
{
    public:
        NeighborAddress();
        ~NeighborAddress();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf afi; //type: BgpAfi
        ydk::YLeaf ipv4_address; //type: string
        ydk::YLeaf ipv4_mcast_address; //type: string
        ydk::YLeaf ipv4_label_address; //type: string
        ydk::YLeaf ipv4_tunnel_address; //type: string
        ydk::YLeaf ipv4_mdt_address; //type: string
        ydk::YLeaf ipv4vpn_address; //type: string
        ydk::YLeaf ipv4vpna_mcastddress; //type: string
        ydk::YLeaf ipv6_address; //type: string
        ydk::YLeaf ipv6_mcast_address; //type: string
        ydk::YLeaf ipv6_label_address; //type: string
        ydk::YLeaf ipv6vpn_address; //type: string
        ydk::YLeaf ipv6vpn_mcast_address; //type: string
        ydk::YLeaf rt_constraint_address; //type: string
        ydk::YLeaf ipv6mvpn_address; //type: string
        ydk::YLeaf ipv4mvpn_address; //type: string
        ydk::YLeaf l2vpn_evpn_address; //type: string
        ydk::YLeaf ls_ls_address; //type: string
        ydk::YLeaf ipv4_flowspec_address; //type: string
        ydk::YLeaf ipv6_flowspec_address; //type: string
        ydk::YLeaf ipv4vpn_flowspec_address; //type: string
        ydk::YLeaf ipv6vpn_flowspec_address; //type: string
        class L2vpnVplsAddress; //type: Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::RemoteAsInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2vpnVplsAddress
        class L2vpnMspwAddress; //type: Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::RemoteAsInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2vpnMspwAddress
        class Ipv4SrPolicyAddress; //type: Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::RemoteAsInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv4SrPolicyAddress
        class Ipv6SrPolicyAddress; //type: Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::RemoteAsInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv6SrPolicyAddress

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_oper::Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::RemoteAsInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2vpnVplsAddress> l2vpn_vpls_address;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_oper::Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::RemoteAsInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2vpnMspwAddress> l2vpn_mspw_address;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_oper::Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::RemoteAsInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv4SrPolicyAddress> ipv4_sr_policy_address;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_oper::Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::RemoteAsInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv6SrPolicyAddress> ipv6_sr_policy_address;
        
}; // Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::RemoteAsInfo::InheritanceChain::BgpConfigEntid::NeighborAddress


class Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::RemoteAsInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2vpnVplsAddress : public ydk::Entity
{
    public:
        L2vpnVplsAddress();
        ~L2vpnVplsAddress();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf l2vpn_address; //type: string

}; // Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::RemoteAsInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2vpnVplsAddress


class Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::RemoteAsInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2vpnMspwAddress : public ydk::Entity
{
    public:
        L2vpnMspwAddress();
        ~L2vpnMspwAddress();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf l2vpn_address; //type: string

}; // Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::RemoteAsInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2vpnMspwAddress


class Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::RemoteAsInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv4SrPolicyAddress : public ydk::Entity
{
    public:
        Ipv4SrPolicyAddress();
        ~Ipv4SrPolicyAddress();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf ipv4_srpolicy_address; //type: string

}; // Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::RemoteAsInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv4SrPolicyAddress


class Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::RemoteAsInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv6SrPolicyAddress : public ydk::Entity
{
    public:
        Ipv6SrPolicyAddress();
        ~Ipv6SrPolicyAddress();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf ipv6_srpolicy_address; //type: string

}; // Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::RemoteAsInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv6SrPolicyAddress


class Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::SpeakerIdInfo : public ydk::Entity
{
    public:
        SpeakerIdInfo();
        ~SpeakerIdInfo();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf is_item_configured; //type: boolean
        class InheritanceChain; //type: Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::SpeakerIdInfo::InheritanceChain

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_oper::Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::SpeakerIdInfo::InheritanceChain> inheritance_chain;
        
}; // Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::SpeakerIdInfo


class Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::SpeakerIdInfo::InheritanceChain : public ydk::Entity
{
    public:
        InheritanceChain();
        ~InheritanceChain();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class BgpConfigEntid; //type: Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::SpeakerIdInfo::InheritanceChain::BgpConfigEntid

        ydk::YList bgp_config_entid;
        
}; // Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::SpeakerIdInfo::InheritanceChain


class Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::SpeakerIdInfo::InheritanceChain::BgpConfigEntid : public ydk::Entity
{
    public:
        BgpConfigEntid();
        ~BgpConfigEntid();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf address_family_identifier; //type: uint8
        ydk::YLeaf configuration_type; //type: BgpEntities
        ydk::YLeaf group_name; //type: string
        class NeighborAddress; //type: Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::SpeakerIdInfo::InheritanceChain::BgpConfigEntid::NeighborAddress

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_oper::Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::SpeakerIdInfo::InheritanceChain::BgpConfigEntid::NeighborAddress> neighbor_address;
        
}; // Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::SpeakerIdInfo::InheritanceChain::BgpConfigEntid


class Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::SpeakerIdInfo::InheritanceChain::BgpConfigEntid::NeighborAddress : public ydk::Entity
{
    public:
        NeighborAddress();
        ~NeighborAddress();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf afi; //type: BgpAfi
        ydk::YLeaf ipv4_address; //type: string
        ydk::YLeaf ipv4_mcast_address; //type: string
        ydk::YLeaf ipv4_label_address; //type: string
        ydk::YLeaf ipv4_tunnel_address; //type: string
        ydk::YLeaf ipv4_mdt_address; //type: string
        ydk::YLeaf ipv4vpn_address; //type: string
        ydk::YLeaf ipv4vpna_mcastddress; //type: string
        ydk::YLeaf ipv6_address; //type: string
        ydk::YLeaf ipv6_mcast_address; //type: string
        ydk::YLeaf ipv6_label_address; //type: string
        ydk::YLeaf ipv6vpn_address; //type: string
        ydk::YLeaf ipv6vpn_mcast_address; //type: string
        ydk::YLeaf rt_constraint_address; //type: string
        ydk::YLeaf ipv6mvpn_address; //type: string
        ydk::YLeaf ipv4mvpn_address; //type: string
        ydk::YLeaf l2vpn_evpn_address; //type: string
        ydk::YLeaf ls_ls_address; //type: string
        ydk::YLeaf ipv4_flowspec_address; //type: string
        ydk::YLeaf ipv6_flowspec_address; //type: string
        ydk::YLeaf ipv4vpn_flowspec_address; //type: string
        ydk::YLeaf ipv6vpn_flowspec_address; //type: string
        class L2vpnVplsAddress; //type: Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::SpeakerIdInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2vpnVplsAddress
        class L2vpnMspwAddress; //type: Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::SpeakerIdInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2vpnMspwAddress
        class Ipv4SrPolicyAddress; //type: Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::SpeakerIdInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv4SrPolicyAddress
        class Ipv6SrPolicyAddress; //type: Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::SpeakerIdInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv6SrPolicyAddress

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_oper::Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::SpeakerIdInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2vpnVplsAddress> l2vpn_vpls_address;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_oper::Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::SpeakerIdInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2vpnMspwAddress> l2vpn_mspw_address;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_oper::Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::SpeakerIdInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv4SrPolicyAddress> ipv4_sr_policy_address;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_oper::Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::SpeakerIdInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv6SrPolicyAddress> ipv6_sr_policy_address;
        
}; // Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::SpeakerIdInfo::InheritanceChain::BgpConfigEntid::NeighborAddress


class Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::SpeakerIdInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2vpnVplsAddress : public ydk::Entity
{
    public:
        L2vpnVplsAddress();
        ~L2vpnVplsAddress();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf l2vpn_address; //type: string

}; // Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::SpeakerIdInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2vpnVplsAddress


class Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::SpeakerIdInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2vpnMspwAddress : public ydk::Entity
{
    public:
        L2vpnMspwAddress();
        ~L2vpnMspwAddress();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf l2vpn_address; //type: string

}; // Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::SpeakerIdInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2vpnMspwAddress


class Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::SpeakerIdInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv4SrPolicyAddress : public ydk::Entity
{
    public:
        Ipv4SrPolicyAddress();
        ~Ipv4SrPolicyAddress();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf ipv4_srpolicy_address; //type: string

}; // Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::SpeakerIdInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv4SrPolicyAddress


class Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::SpeakerIdInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv6SrPolicyAddress : public ydk::Entity
{
    public:
        Ipv6SrPolicyAddress();
        ~Ipv6SrPolicyAddress();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf ipv6_srpolicy_address; //type: string

}; // Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::SpeakerIdInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv6SrPolicyAddress


class Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::MinAdvertisementInfo : public ydk::Entity
{
    public:
        MinAdvertisementInfo();
        ~MinAdvertisementInfo();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf is_item_configured; //type: boolean
        class InheritanceChain; //type: Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::MinAdvertisementInfo::InheritanceChain

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_oper::Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::MinAdvertisementInfo::InheritanceChain> inheritance_chain;
        
}; // Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::MinAdvertisementInfo


class Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::MinAdvertisementInfo::InheritanceChain : public ydk::Entity
{
    public:
        InheritanceChain();
        ~InheritanceChain();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class BgpConfigEntid; //type: Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::MinAdvertisementInfo::InheritanceChain::BgpConfigEntid

        ydk::YList bgp_config_entid;
        
}; // Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::MinAdvertisementInfo::InheritanceChain


class Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::MinAdvertisementInfo::InheritanceChain::BgpConfigEntid : public ydk::Entity
{
    public:
        BgpConfigEntid();
        ~BgpConfigEntid();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf address_family_identifier; //type: uint8
        ydk::YLeaf configuration_type; //type: BgpEntities
        ydk::YLeaf group_name; //type: string
        class NeighborAddress; //type: Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::MinAdvertisementInfo::InheritanceChain::BgpConfigEntid::NeighborAddress

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_oper::Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::MinAdvertisementInfo::InheritanceChain::BgpConfigEntid::NeighborAddress> neighbor_address;
        
}; // Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::MinAdvertisementInfo::InheritanceChain::BgpConfigEntid


class Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::MinAdvertisementInfo::InheritanceChain::BgpConfigEntid::NeighborAddress : public ydk::Entity
{
    public:
        NeighborAddress();
        ~NeighborAddress();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf afi; //type: BgpAfi
        ydk::YLeaf ipv4_address; //type: string
        ydk::YLeaf ipv4_mcast_address; //type: string
        ydk::YLeaf ipv4_label_address; //type: string
        ydk::YLeaf ipv4_tunnel_address; //type: string
        ydk::YLeaf ipv4_mdt_address; //type: string
        ydk::YLeaf ipv4vpn_address; //type: string
        ydk::YLeaf ipv4vpna_mcastddress; //type: string
        ydk::YLeaf ipv6_address; //type: string
        ydk::YLeaf ipv6_mcast_address; //type: string
        ydk::YLeaf ipv6_label_address; //type: string
        ydk::YLeaf ipv6vpn_address; //type: string
        ydk::YLeaf ipv6vpn_mcast_address; //type: string
        ydk::YLeaf rt_constraint_address; //type: string
        ydk::YLeaf ipv6mvpn_address; //type: string
        ydk::YLeaf ipv4mvpn_address; //type: string
        ydk::YLeaf l2vpn_evpn_address; //type: string
        ydk::YLeaf ls_ls_address; //type: string
        ydk::YLeaf ipv4_flowspec_address; //type: string
        ydk::YLeaf ipv6_flowspec_address; //type: string
        ydk::YLeaf ipv4vpn_flowspec_address; //type: string
        ydk::YLeaf ipv6vpn_flowspec_address; //type: string
        class L2vpnVplsAddress; //type: Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::MinAdvertisementInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2vpnVplsAddress
        class L2vpnMspwAddress; //type: Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::MinAdvertisementInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2vpnMspwAddress
        class Ipv4SrPolicyAddress; //type: Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::MinAdvertisementInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv4SrPolicyAddress
        class Ipv6SrPolicyAddress; //type: Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::MinAdvertisementInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv6SrPolicyAddress

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_oper::Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::MinAdvertisementInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2vpnVplsAddress> l2vpn_vpls_address;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_oper::Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::MinAdvertisementInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2vpnMspwAddress> l2vpn_mspw_address;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_oper::Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::MinAdvertisementInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv4SrPolicyAddress> ipv4_sr_policy_address;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_oper::Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::MinAdvertisementInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv6SrPolicyAddress> ipv6_sr_policy_address;
        
}; // Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::MinAdvertisementInfo::InheritanceChain::BgpConfigEntid::NeighborAddress


class Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::MinAdvertisementInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2vpnVplsAddress : public ydk::Entity
{
    public:
        L2vpnVplsAddress();
        ~L2vpnVplsAddress();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf l2vpn_address; //type: string

}; // Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::MinAdvertisementInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2vpnVplsAddress


class Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::MinAdvertisementInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2vpnMspwAddress : public ydk::Entity
{
    public:
        L2vpnMspwAddress();
        ~L2vpnMspwAddress();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf l2vpn_address; //type: string

}; // Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::MinAdvertisementInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2vpnMspwAddress


class Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::MinAdvertisementInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv4SrPolicyAddress : public ydk::Entity
{
    public:
        Ipv4SrPolicyAddress();
        ~Ipv4SrPolicyAddress();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf ipv4_srpolicy_address; //type: string

}; // Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::MinAdvertisementInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv4SrPolicyAddress


class Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::MinAdvertisementInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv6SrPolicyAddress : public ydk::Entity
{
    public:
        Ipv6SrPolicyAddress();
        ~Ipv6SrPolicyAddress();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf ipv6_srpolicy_address; //type: string

}; // Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::MinAdvertisementInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv6SrPolicyAddress


class Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::DescriptionInfo : public ydk::Entity
{
    public:
        DescriptionInfo();
        ~DescriptionInfo();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf is_item_configured; //type: boolean
        class InheritanceChain; //type: Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::DescriptionInfo::InheritanceChain

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_oper::Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::DescriptionInfo::InheritanceChain> inheritance_chain;
        
}; // Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::DescriptionInfo


class Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::DescriptionInfo::InheritanceChain : public ydk::Entity
{
    public:
        InheritanceChain();
        ~InheritanceChain();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class BgpConfigEntid; //type: Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::DescriptionInfo::InheritanceChain::BgpConfigEntid

        ydk::YList bgp_config_entid;
        
}; // Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::DescriptionInfo::InheritanceChain


class Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::DescriptionInfo::InheritanceChain::BgpConfigEntid : public ydk::Entity
{
    public:
        BgpConfigEntid();
        ~BgpConfigEntid();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf address_family_identifier; //type: uint8
        ydk::YLeaf configuration_type; //type: BgpEntities
        ydk::YLeaf group_name; //type: string
        class NeighborAddress; //type: Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::DescriptionInfo::InheritanceChain::BgpConfigEntid::NeighborAddress

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_oper::Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::DescriptionInfo::InheritanceChain::BgpConfigEntid::NeighborAddress> neighbor_address;
        
}; // Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::DescriptionInfo::InheritanceChain::BgpConfigEntid


class Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::DescriptionInfo::InheritanceChain::BgpConfigEntid::NeighborAddress : public ydk::Entity
{
    public:
        NeighborAddress();
        ~NeighborAddress();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf afi; //type: BgpAfi
        ydk::YLeaf ipv4_address; //type: string
        ydk::YLeaf ipv4_mcast_address; //type: string
        ydk::YLeaf ipv4_label_address; //type: string
        ydk::YLeaf ipv4_tunnel_address; //type: string
        ydk::YLeaf ipv4_mdt_address; //type: string
        ydk::YLeaf ipv4vpn_address; //type: string
        ydk::YLeaf ipv4vpna_mcastddress; //type: string
        ydk::YLeaf ipv6_address; //type: string
        ydk::YLeaf ipv6_mcast_address; //type: string
        ydk::YLeaf ipv6_label_address; //type: string
        ydk::YLeaf ipv6vpn_address; //type: string
        ydk::YLeaf ipv6vpn_mcast_address; //type: string
        ydk::YLeaf rt_constraint_address; //type: string
        ydk::YLeaf ipv6mvpn_address; //type: string
        ydk::YLeaf ipv4mvpn_address; //type: string
        ydk::YLeaf l2vpn_evpn_address; //type: string
        ydk::YLeaf ls_ls_address; //type: string
        ydk::YLeaf ipv4_flowspec_address; //type: string
        ydk::YLeaf ipv6_flowspec_address; //type: string
        ydk::YLeaf ipv4vpn_flowspec_address; //type: string
        ydk::YLeaf ipv6vpn_flowspec_address; //type: string
        class L2vpnVplsAddress; //type: Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::DescriptionInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2vpnVplsAddress
        class L2vpnMspwAddress; //type: Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::DescriptionInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2vpnMspwAddress
        class Ipv4SrPolicyAddress; //type: Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::DescriptionInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv4SrPolicyAddress
        class Ipv6SrPolicyAddress; //type: Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::DescriptionInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv6SrPolicyAddress

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_oper::Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::DescriptionInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2vpnVplsAddress> l2vpn_vpls_address;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_oper::Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::DescriptionInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2vpnMspwAddress> l2vpn_mspw_address;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_oper::Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::DescriptionInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv4SrPolicyAddress> ipv4_sr_policy_address;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_oper::Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::DescriptionInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv6SrPolicyAddress> ipv6_sr_policy_address;
        
}; // Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::DescriptionInfo::InheritanceChain::BgpConfigEntid::NeighborAddress


class Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::DescriptionInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2vpnVplsAddress : public ydk::Entity
{
    public:
        L2vpnVplsAddress();
        ~L2vpnVplsAddress();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf l2vpn_address; //type: string

}; // Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::DescriptionInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2vpnVplsAddress


class Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::DescriptionInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2vpnMspwAddress : public ydk::Entity
{
    public:
        L2vpnMspwAddress();
        ~L2vpnMspwAddress();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf l2vpn_address; //type: string

}; // Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::DescriptionInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2vpnMspwAddress


class Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::DescriptionInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv4SrPolicyAddress : public ydk::Entity
{
    public:
        Ipv4SrPolicyAddress();
        ~Ipv4SrPolicyAddress();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf ipv4_srpolicy_address; //type: string

}; // Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::DescriptionInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv4SrPolicyAddress


class Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::DescriptionInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv6SrPolicyAddress : public ydk::Entity
{
    public:
        Ipv6SrPolicyAddress();
        ~Ipv6SrPolicyAddress();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf ipv6_srpolicy_address; //type: string

}; // Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::DescriptionInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv6SrPolicyAddress


class Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::EbgpHopCountInfo : public ydk::Entity
{
    public:
        EbgpHopCountInfo();
        ~EbgpHopCountInfo();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf is_item_configured; //type: boolean
        class InheritanceChain; //type: Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::EbgpHopCountInfo::InheritanceChain

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_oper::Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::EbgpHopCountInfo::InheritanceChain> inheritance_chain;
        
}; // Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::EbgpHopCountInfo


class Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::EbgpHopCountInfo::InheritanceChain : public ydk::Entity
{
    public:
        InheritanceChain();
        ~InheritanceChain();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class BgpConfigEntid; //type: Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::EbgpHopCountInfo::InheritanceChain::BgpConfigEntid

        ydk::YList bgp_config_entid;
        
}; // Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::EbgpHopCountInfo::InheritanceChain


class Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::EbgpHopCountInfo::InheritanceChain::BgpConfigEntid : public ydk::Entity
{
    public:
        BgpConfigEntid();
        ~BgpConfigEntid();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf address_family_identifier; //type: uint8
        ydk::YLeaf configuration_type; //type: BgpEntities
        ydk::YLeaf group_name; //type: string
        class NeighborAddress; //type: Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::EbgpHopCountInfo::InheritanceChain::BgpConfigEntid::NeighborAddress

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_oper::Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::EbgpHopCountInfo::InheritanceChain::BgpConfigEntid::NeighborAddress> neighbor_address;
        
}; // Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::EbgpHopCountInfo::InheritanceChain::BgpConfigEntid


class Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::EbgpHopCountInfo::InheritanceChain::BgpConfigEntid::NeighborAddress : public ydk::Entity
{
    public:
        NeighborAddress();
        ~NeighborAddress();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf afi; //type: BgpAfi
        ydk::YLeaf ipv4_address; //type: string
        ydk::YLeaf ipv4_mcast_address; //type: string
        ydk::YLeaf ipv4_label_address; //type: string
        ydk::YLeaf ipv4_tunnel_address; //type: string
        ydk::YLeaf ipv4_mdt_address; //type: string
        ydk::YLeaf ipv4vpn_address; //type: string
        ydk::YLeaf ipv4vpna_mcastddress; //type: string
        ydk::YLeaf ipv6_address; //type: string
        ydk::YLeaf ipv6_mcast_address; //type: string
        ydk::YLeaf ipv6_label_address; //type: string
        ydk::YLeaf ipv6vpn_address; //type: string
        ydk::YLeaf ipv6vpn_mcast_address; //type: string
        ydk::YLeaf rt_constraint_address; //type: string
        ydk::YLeaf ipv6mvpn_address; //type: string
        ydk::YLeaf ipv4mvpn_address; //type: string
        ydk::YLeaf l2vpn_evpn_address; //type: string
        ydk::YLeaf ls_ls_address; //type: string
        ydk::YLeaf ipv4_flowspec_address; //type: string
        ydk::YLeaf ipv6_flowspec_address; //type: string
        ydk::YLeaf ipv4vpn_flowspec_address; //type: string
        ydk::YLeaf ipv6vpn_flowspec_address; //type: string
        class L2vpnVplsAddress; //type: Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::EbgpHopCountInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2vpnVplsAddress
        class L2vpnMspwAddress; //type: Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::EbgpHopCountInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2vpnMspwAddress
        class Ipv4SrPolicyAddress; //type: Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::EbgpHopCountInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv4SrPolicyAddress
        class Ipv6SrPolicyAddress; //type: Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::EbgpHopCountInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv6SrPolicyAddress

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_oper::Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::EbgpHopCountInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2vpnVplsAddress> l2vpn_vpls_address;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_oper::Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::EbgpHopCountInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2vpnMspwAddress> l2vpn_mspw_address;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_oper::Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::EbgpHopCountInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv4SrPolicyAddress> ipv4_sr_policy_address;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_oper::Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::EbgpHopCountInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv6SrPolicyAddress> ipv6_sr_policy_address;
        
}; // Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::EbgpHopCountInfo::InheritanceChain::BgpConfigEntid::NeighborAddress


class Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::EbgpHopCountInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2vpnVplsAddress : public ydk::Entity
{
    public:
        L2vpnVplsAddress();
        ~L2vpnVplsAddress();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf l2vpn_address; //type: string

}; // Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::EbgpHopCountInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2vpnVplsAddress


class Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::EbgpHopCountInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2vpnMspwAddress : public ydk::Entity
{
    public:
        L2vpnMspwAddress();
        ~L2vpnMspwAddress();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf l2vpn_address; //type: string

}; // Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::EbgpHopCountInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2vpnMspwAddress


class Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::EbgpHopCountInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv4SrPolicyAddress : public ydk::Entity
{
    public:
        Ipv4SrPolicyAddress();
        ~Ipv4SrPolicyAddress();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf ipv4_srpolicy_address; //type: string

}; // Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::EbgpHopCountInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv4SrPolicyAddress


class Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::EbgpHopCountInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv6SrPolicyAddress : public ydk::Entity
{
    public:
        Ipv6SrPolicyAddress();
        ~Ipv6SrPolicyAddress();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf ipv6_srpolicy_address; //type: string

}; // Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::EbgpHopCountInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv6SrPolicyAddress


class Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::TcpmssInfo : public ydk::Entity
{
    public:
        TcpmssInfo();
        ~TcpmssInfo();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf is_item_configured; //type: boolean
        class InheritanceChain; //type: Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::TcpmssInfo::InheritanceChain

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_oper::Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::TcpmssInfo::InheritanceChain> inheritance_chain;
        
}; // Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::TcpmssInfo


class Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::TcpmssInfo::InheritanceChain : public ydk::Entity
{
    public:
        InheritanceChain();
        ~InheritanceChain();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class BgpConfigEntid; //type: Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::TcpmssInfo::InheritanceChain::BgpConfigEntid

        ydk::YList bgp_config_entid;
        
}; // Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::TcpmssInfo::InheritanceChain


class Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::TcpmssInfo::InheritanceChain::BgpConfigEntid : public ydk::Entity
{
    public:
        BgpConfigEntid();
        ~BgpConfigEntid();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf address_family_identifier; //type: uint8
        ydk::YLeaf configuration_type; //type: BgpEntities
        ydk::YLeaf group_name; //type: string
        class NeighborAddress; //type: Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::TcpmssInfo::InheritanceChain::BgpConfigEntid::NeighborAddress

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_oper::Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::TcpmssInfo::InheritanceChain::BgpConfigEntid::NeighborAddress> neighbor_address;
        
}; // Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::TcpmssInfo::InheritanceChain::BgpConfigEntid


class Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::TcpmssInfo::InheritanceChain::BgpConfigEntid::NeighborAddress : public ydk::Entity
{
    public:
        NeighborAddress();
        ~NeighborAddress();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf afi; //type: BgpAfi
        ydk::YLeaf ipv4_address; //type: string
        ydk::YLeaf ipv4_mcast_address; //type: string
        ydk::YLeaf ipv4_label_address; //type: string
        ydk::YLeaf ipv4_tunnel_address; //type: string
        ydk::YLeaf ipv4_mdt_address; //type: string
        ydk::YLeaf ipv4vpn_address; //type: string
        ydk::YLeaf ipv4vpna_mcastddress; //type: string
        ydk::YLeaf ipv6_address; //type: string
        ydk::YLeaf ipv6_mcast_address; //type: string
        ydk::YLeaf ipv6_label_address; //type: string
        ydk::YLeaf ipv6vpn_address; //type: string
        ydk::YLeaf ipv6vpn_mcast_address; //type: string
        ydk::YLeaf rt_constraint_address; //type: string
        ydk::YLeaf ipv6mvpn_address; //type: string
        ydk::YLeaf ipv4mvpn_address; //type: string
        ydk::YLeaf l2vpn_evpn_address; //type: string
        ydk::YLeaf ls_ls_address; //type: string
        ydk::YLeaf ipv4_flowspec_address; //type: string
        ydk::YLeaf ipv6_flowspec_address; //type: string
        ydk::YLeaf ipv4vpn_flowspec_address; //type: string
        ydk::YLeaf ipv6vpn_flowspec_address; //type: string
        class L2vpnVplsAddress; //type: Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::TcpmssInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2vpnVplsAddress
        class L2vpnMspwAddress; //type: Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::TcpmssInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2vpnMspwAddress
        class Ipv4SrPolicyAddress; //type: Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::TcpmssInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv4SrPolicyAddress
        class Ipv6SrPolicyAddress; //type: Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::TcpmssInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv6SrPolicyAddress

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_oper::Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::TcpmssInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2vpnVplsAddress> l2vpn_vpls_address;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_oper::Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::TcpmssInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2vpnMspwAddress> l2vpn_mspw_address;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_oper::Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::TcpmssInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv4SrPolicyAddress> ipv4_sr_policy_address;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_oper::Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::TcpmssInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv6SrPolicyAddress> ipv6_sr_policy_address;
        
}; // Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::TcpmssInfo::InheritanceChain::BgpConfigEntid::NeighborAddress


class Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::TcpmssInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2vpnVplsAddress : public ydk::Entity
{
    public:
        L2vpnVplsAddress();
        ~L2vpnVplsAddress();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf l2vpn_address; //type: string

}; // Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::TcpmssInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2vpnVplsAddress


class Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::TcpmssInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2vpnMspwAddress : public ydk::Entity
{
    public:
        L2vpnMspwAddress();
        ~L2vpnMspwAddress();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf l2vpn_address; //type: string

}; // Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::TcpmssInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2vpnMspwAddress


class Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::TcpmssInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv4SrPolicyAddress : public ydk::Entity
{
    public:
        Ipv4SrPolicyAddress();
        ~Ipv4SrPolicyAddress();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf ipv4_srpolicy_address; //type: string

}; // Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::TcpmssInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv4SrPolicyAddress


class Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::TcpmssInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv6SrPolicyAddress : public ydk::Entity
{
    public:
        Ipv6SrPolicyAddress();
        ~Ipv6SrPolicyAddress();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf ipv6_srpolicy_address; //type: string

}; // Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::TcpmssInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv6SrPolicyAddress


class Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::BmpServersInfo : public ydk::Entity
{
    public:
        BmpServersInfo();
        ~BmpServersInfo();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf is_item_configured; //type: boolean
        class InheritanceChain; //type: Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::BmpServersInfo::InheritanceChain

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_oper::Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::BmpServersInfo::InheritanceChain> inheritance_chain;
        
}; // Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::BmpServersInfo


class Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::BmpServersInfo::InheritanceChain : public ydk::Entity
{
    public:
        InheritanceChain();
        ~InheritanceChain();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class BgpConfigEntid; //type: Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::BmpServersInfo::InheritanceChain::BgpConfigEntid

        ydk::YList bgp_config_entid;
        
}; // Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::BmpServersInfo::InheritanceChain


class Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::BmpServersInfo::InheritanceChain::BgpConfigEntid : public ydk::Entity
{
    public:
        BgpConfigEntid();
        ~BgpConfigEntid();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf address_family_identifier; //type: uint8
        ydk::YLeaf configuration_type; //type: BgpEntities
        ydk::YLeaf group_name; //type: string
        class NeighborAddress; //type: Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::BmpServersInfo::InheritanceChain::BgpConfigEntid::NeighborAddress

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_oper::Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::BmpServersInfo::InheritanceChain::BgpConfigEntid::NeighborAddress> neighbor_address;
        
}; // Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::BmpServersInfo::InheritanceChain::BgpConfigEntid


class Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::BmpServersInfo::InheritanceChain::BgpConfigEntid::NeighborAddress : public ydk::Entity
{
    public:
        NeighborAddress();
        ~NeighborAddress();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf afi; //type: BgpAfi
        ydk::YLeaf ipv4_address; //type: string
        ydk::YLeaf ipv4_mcast_address; //type: string
        ydk::YLeaf ipv4_label_address; //type: string
        ydk::YLeaf ipv4_tunnel_address; //type: string
        ydk::YLeaf ipv4_mdt_address; //type: string
        ydk::YLeaf ipv4vpn_address; //type: string
        ydk::YLeaf ipv4vpna_mcastddress; //type: string
        ydk::YLeaf ipv6_address; //type: string
        ydk::YLeaf ipv6_mcast_address; //type: string
        ydk::YLeaf ipv6_label_address; //type: string
        ydk::YLeaf ipv6vpn_address; //type: string
        ydk::YLeaf ipv6vpn_mcast_address; //type: string
        ydk::YLeaf rt_constraint_address; //type: string
        ydk::YLeaf ipv6mvpn_address; //type: string
        ydk::YLeaf ipv4mvpn_address; //type: string
        ydk::YLeaf l2vpn_evpn_address; //type: string
        ydk::YLeaf ls_ls_address; //type: string
        ydk::YLeaf ipv4_flowspec_address; //type: string
        ydk::YLeaf ipv6_flowspec_address; //type: string
        ydk::YLeaf ipv4vpn_flowspec_address; //type: string
        ydk::YLeaf ipv6vpn_flowspec_address; //type: string
        class L2vpnVplsAddress; //type: Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::BmpServersInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2vpnVplsAddress
        class L2vpnMspwAddress; //type: Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::BmpServersInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2vpnMspwAddress
        class Ipv4SrPolicyAddress; //type: Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::BmpServersInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv4SrPolicyAddress
        class Ipv6SrPolicyAddress; //type: Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::BmpServersInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv6SrPolicyAddress

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_oper::Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::BmpServersInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2vpnVplsAddress> l2vpn_vpls_address;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_oper::Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::BmpServersInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2vpnMspwAddress> l2vpn_mspw_address;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_oper::Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::BmpServersInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv4SrPolicyAddress> ipv4_sr_policy_address;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_oper::Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::BmpServersInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv6SrPolicyAddress> ipv6_sr_policy_address;
        
}; // Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::BmpServersInfo::InheritanceChain::BgpConfigEntid::NeighborAddress


class Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::BmpServersInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2vpnVplsAddress : public ydk::Entity
{
    public:
        L2vpnVplsAddress();
        ~L2vpnVplsAddress();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf l2vpn_address; //type: string

}; // Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::BmpServersInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2vpnVplsAddress


class Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::BmpServersInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2vpnMspwAddress : public ydk::Entity
{
    public:
        L2vpnMspwAddress();
        ~L2vpnMspwAddress();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf l2vpn_address; //type: string

}; // Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::BmpServersInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2vpnMspwAddress


class Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::BmpServersInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv4SrPolicyAddress : public ydk::Entity
{
    public:
        Ipv4SrPolicyAddress();
        ~Ipv4SrPolicyAddress();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf ipv4_srpolicy_address; //type: string

}; // Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::BmpServersInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv4SrPolicyAddress


class Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::BmpServersInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv6SrPolicyAddress : public ydk::Entity
{
    public:
        Ipv6SrPolicyAddress();
        ~Ipv6SrPolicyAddress();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf ipv6_srpolicy_address; //type: string

}; // Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::BmpServersInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv6SrPolicyAddress


class Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::KeychainInfo : public ydk::Entity
{
    public:
        KeychainInfo();
        ~KeychainInfo();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf is_item_configured; //type: boolean
        class InheritanceChain; //type: Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::KeychainInfo::InheritanceChain

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_oper::Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::KeychainInfo::InheritanceChain> inheritance_chain;
        
}; // Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::KeychainInfo


class Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::KeychainInfo::InheritanceChain : public ydk::Entity
{
    public:
        InheritanceChain();
        ~InheritanceChain();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class BgpConfigEntid; //type: Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::KeychainInfo::InheritanceChain::BgpConfigEntid

        ydk::YList bgp_config_entid;
        
}; // Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::KeychainInfo::InheritanceChain


class Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::KeychainInfo::InheritanceChain::BgpConfigEntid : public ydk::Entity
{
    public:
        BgpConfigEntid();
        ~BgpConfigEntid();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf address_family_identifier; //type: uint8
        ydk::YLeaf configuration_type; //type: BgpEntities
        ydk::YLeaf group_name; //type: string
        class NeighborAddress; //type: Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::KeychainInfo::InheritanceChain::BgpConfigEntid::NeighborAddress

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_oper::Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::KeychainInfo::InheritanceChain::BgpConfigEntid::NeighborAddress> neighbor_address;
        
}; // Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::KeychainInfo::InheritanceChain::BgpConfigEntid


class Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::KeychainInfo::InheritanceChain::BgpConfigEntid::NeighborAddress : public ydk::Entity
{
    public:
        NeighborAddress();
        ~NeighborAddress();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf afi; //type: BgpAfi
        ydk::YLeaf ipv4_address; //type: string
        ydk::YLeaf ipv4_mcast_address; //type: string
        ydk::YLeaf ipv4_label_address; //type: string
        ydk::YLeaf ipv4_tunnel_address; //type: string
        ydk::YLeaf ipv4_mdt_address; //type: string
        ydk::YLeaf ipv4vpn_address; //type: string
        ydk::YLeaf ipv4vpna_mcastddress; //type: string
        ydk::YLeaf ipv6_address; //type: string
        ydk::YLeaf ipv6_mcast_address; //type: string
        ydk::YLeaf ipv6_label_address; //type: string
        ydk::YLeaf ipv6vpn_address; //type: string
        ydk::YLeaf ipv6vpn_mcast_address; //type: string
        ydk::YLeaf rt_constraint_address; //type: string
        ydk::YLeaf ipv6mvpn_address; //type: string
        ydk::YLeaf ipv4mvpn_address; //type: string
        ydk::YLeaf l2vpn_evpn_address; //type: string
        ydk::YLeaf ls_ls_address; //type: string
        ydk::YLeaf ipv4_flowspec_address; //type: string
        ydk::YLeaf ipv6_flowspec_address; //type: string
        ydk::YLeaf ipv4vpn_flowspec_address; //type: string
        ydk::YLeaf ipv6vpn_flowspec_address; //type: string
        class L2vpnVplsAddress; //type: Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::KeychainInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2vpnVplsAddress
        class L2vpnMspwAddress; //type: Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::KeychainInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2vpnMspwAddress
        class Ipv4SrPolicyAddress; //type: Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::KeychainInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv4SrPolicyAddress
        class Ipv6SrPolicyAddress; //type: Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::KeychainInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv6SrPolicyAddress

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_oper::Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::KeychainInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2vpnVplsAddress> l2vpn_vpls_address;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_oper::Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::KeychainInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2vpnMspwAddress> l2vpn_mspw_address;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_oper::Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::KeychainInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv4SrPolicyAddress> ipv4_sr_policy_address;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_oper::Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::KeychainInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv6SrPolicyAddress> ipv6_sr_policy_address;
        
}; // Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::KeychainInfo::InheritanceChain::BgpConfigEntid::NeighborAddress


class Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::KeychainInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2vpnVplsAddress : public ydk::Entity
{
    public:
        L2vpnVplsAddress();
        ~L2vpnVplsAddress();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf l2vpn_address; //type: string

}; // Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::KeychainInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2vpnVplsAddress


class Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::KeychainInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2vpnMspwAddress : public ydk::Entity
{
    public:
        L2vpnMspwAddress();
        ~L2vpnMspwAddress();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf l2vpn_address; //type: string

}; // Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::KeychainInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2vpnMspwAddress


class Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::KeychainInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv4SrPolicyAddress : public ydk::Entity
{
    public:
        Ipv4SrPolicyAddress();
        ~Ipv4SrPolicyAddress();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf ipv4_srpolicy_address; //type: string

}; // Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::KeychainInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv4SrPolicyAddress


class Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::KeychainInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv6SrPolicyAddress : public ydk::Entity
{
    public:
        Ipv6SrPolicyAddress();
        ~Ipv6SrPolicyAddress();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf ipv6_srpolicy_address; //type: string

}; // Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::KeychainInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv6SrPolicyAddress


class Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::LocalAsInfo : public ydk::Entity
{
    public:
        LocalAsInfo();
        ~LocalAsInfo();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf is_item_configured; //type: boolean
        class InheritanceChain; //type: Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::LocalAsInfo::InheritanceChain

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_oper::Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::LocalAsInfo::InheritanceChain> inheritance_chain;
        
}; // Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::LocalAsInfo


class Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::LocalAsInfo::InheritanceChain : public ydk::Entity
{
    public:
        InheritanceChain();
        ~InheritanceChain();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class BgpConfigEntid; //type: Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::LocalAsInfo::InheritanceChain::BgpConfigEntid

        ydk::YList bgp_config_entid;
        
}; // Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::LocalAsInfo::InheritanceChain


class Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::LocalAsInfo::InheritanceChain::BgpConfigEntid : public ydk::Entity
{
    public:
        BgpConfigEntid();
        ~BgpConfigEntid();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf address_family_identifier; //type: uint8
        ydk::YLeaf configuration_type; //type: BgpEntities
        ydk::YLeaf group_name; //type: string
        class NeighborAddress; //type: Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::LocalAsInfo::InheritanceChain::BgpConfigEntid::NeighborAddress

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_oper::Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::LocalAsInfo::InheritanceChain::BgpConfigEntid::NeighborAddress> neighbor_address;
        
}; // Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::LocalAsInfo::InheritanceChain::BgpConfigEntid


class Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::LocalAsInfo::InheritanceChain::BgpConfigEntid::NeighborAddress : public ydk::Entity
{
    public:
        NeighborAddress();
        ~NeighborAddress();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf afi; //type: BgpAfi
        ydk::YLeaf ipv4_address; //type: string
        ydk::YLeaf ipv4_mcast_address; //type: string
        ydk::YLeaf ipv4_label_address; //type: string
        ydk::YLeaf ipv4_tunnel_address; //type: string
        ydk::YLeaf ipv4_mdt_address; //type: string
        ydk::YLeaf ipv4vpn_address; //type: string
        ydk::YLeaf ipv4vpna_mcastddress; //type: string
        ydk::YLeaf ipv6_address; //type: string
        ydk::YLeaf ipv6_mcast_address; //type: string
        ydk::YLeaf ipv6_label_address; //type: string
        ydk::YLeaf ipv6vpn_address; //type: string
        ydk::YLeaf ipv6vpn_mcast_address; //type: string
        ydk::YLeaf rt_constraint_address; //type: string
        ydk::YLeaf ipv6mvpn_address; //type: string
        ydk::YLeaf ipv4mvpn_address; //type: string
        ydk::YLeaf l2vpn_evpn_address; //type: string
        ydk::YLeaf ls_ls_address; //type: string
        ydk::YLeaf ipv4_flowspec_address; //type: string
        ydk::YLeaf ipv6_flowspec_address; //type: string
        ydk::YLeaf ipv4vpn_flowspec_address; //type: string
        ydk::YLeaf ipv6vpn_flowspec_address; //type: string
        class L2vpnVplsAddress; //type: Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::LocalAsInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2vpnVplsAddress
        class L2vpnMspwAddress; //type: Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::LocalAsInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2vpnMspwAddress
        class Ipv4SrPolicyAddress; //type: Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::LocalAsInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv4SrPolicyAddress
        class Ipv6SrPolicyAddress; //type: Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::LocalAsInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv6SrPolicyAddress

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_oper::Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::LocalAsInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2vpnVplsAddress> l2vpn_vpls_address;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_oper::Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::LocalAsInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2vpnMspwAddress> l2vpn_mspw_address;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_oper::Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::LocalAsInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv4SrPolicyAddress> ipv4_sr_policy_address;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_oper::Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::LocalAsInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv6SrPolicyAddress> ipv6_sr_policy_address;
        
}; // Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::LocalAsInfo::InheritanceChain::BgpConfigEntid::NeighborAddress


class Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::LocalAsInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2vpnVplsAddress : public ydk::Entity
{
    public:
        L2vpnVplsAddress();
        ~L2vpnVplsAddress();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf l2vpn_address; //type: string

}; // Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::LocalAsInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2vpnVplsAddress


class Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::LocalAsInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2vpnMspwAddress : public ydk::Entity
{
    public:
        L2vpnMspwAddress();
        ~L2vpnMspwAddress();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf l2vpn_address; //type: string

}; // Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::LocalAsInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2vpnMspwAddress


class Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::LocalAsInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv4SrPolicyAddress : public ydk::Entity
{
    public:
        Ipv4SrPolicyAddress();
        ~Ipv4SrPolicyAddress();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf ipv4_srpolicy_address; //type: string

}; // Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::LocalAsInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv4SrPolicyAddress


class Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::LocalAsInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv6SrPolicyAddress : public ydk::Entity
{
    public:
        Ipv6SrPolicyAddress();
        ~Ipv6SrPolicyAddress();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf ipv6_srpolicy_address; //type: string

}; // Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::LocalAsInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv6SrPolicyAddress


class Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::PasswordInfo : public ydk::Entity
{
    public:
        PasswordInfo();
        ~PasswordInfo();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf is_item_configured; //type: boolean
        class InheritanceChain; //type: Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::PasswordInfo::InheritanceChain

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_oper::Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::PasswordInfo::InheritanceChain> inheritance_chain;
        
}; // Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::PasswordInfo


class Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::PasswordInfo::InheritanceChain : public ydk::Entity
{
    public:
        InheritanceChain();
        ~InheritanceChain();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class BgpConfigEntid; //type: Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::PasswordInfo::InheritanceChain::BgpConfigEntid

        ydk::YList bgp_config_entid;
        
}; // Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::PasswordInfo::InheritanceChain


class Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::PasswordInfo::InheritanceChain::BgpConfigEntid : public ydk::Entity
{
    public:
        BgpConfigEntid();
        ~BgpConfigEntid();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf address_family_identifier; //type: uint8
        ydk::YLeaf configuration_type; //type: BgpEntities
        ydk::YLeaf group_name; //type: string
        class NeighborAddress; //type: Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::PasswordInfo::InheritanceChain::BgpConfigEntid::NeighborAddress

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_oper::Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::PasswordInfo::InheritanceChain::BgpConfigEntid::NeighborAddress> neighbor_address;
        
}; // Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::PasswordInfo::InheritanceChain::BgpConfigEntid


class Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::PasswordInfo::InheritanceChain::BgpConfigEntid::NeighborAddress : public ydk::Entity
{
    public:
        NeighborAddress();
        ~NeighborAddress();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf afi; //type: BgpAfi
        ydk::YLeaf ipv4_address; //type: string
        ydk::YLeaf ipv4_mcast_address; //type: string
        ydk::YLeaf ipv4_label_address; //type: string
        ydk::YLeaf ipv4_tunnel_address; //type: string
        ydk::YLeaf ipv4_mdt_address; //type: string
        ydk::YLeaf ipv4vpn_address; //type: string
        ydk::YLeaf ipv4vpna_mcastddress; //type: string
        ydk::YLeaf ipv6_address; //type: string
        ydk::YLeaf ipv6_mcast_address; //type: string
        ydk::YLeaf ipv6_label_address; //type: string
        ydk::YLeaf ipv6vpn_address; //type: string
        ydk::YLeaf ipv6vpn_mcast_address; //type: string
        ydk::YLeaf rt_constraint_address; //type: string
        ydk::YLeaf ipv6mvpn_address; //type: string
        ydk::YLeaf ipv4mvpn_address; //type: string
        ydk::YLeaf l2vpn_evpn_address; //type: string
        ydk::YLeaf ls_ls_address; //type: string
        ydk::YLeaf ipv4_flowspec_address; //type: string
        ydk::YLeaf ipv6_flowspec_address; //type: string
        ydk::YLeaf ipv4vpn_flowspec_address; //type: string
        ydk::YLeaf ipv6vpn_flowspec_address; //type: string
        class L2vpnVplsAddress; //type: Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::PasswordInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2vpnVplsAddress
        class L2vpnMspwAddress; //type: Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::PasswordInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2vpnMspwAddress
        class Ipv4SrPolicyAddress; //type: Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::PasswordInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv4SrPolicyAddress
        class Ipv6SrPolicyAddress; //type: Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::PasswordInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv6SrPolicyAddress

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_oper::Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::PasswordInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2vpnVplsAddress> l2vpn_vpls_address;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_oper::Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::PasswordInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2vpnMspwAddress> l2vpn_mspw_address;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_oper::Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::PasswordInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv4SrPolicyAddress> ipv4_sr_policy_address;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_oper::Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::PasswordInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv6SrPolicyAddress> ipv6_sr_policy_address;
        
}; // Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::PasswordInfo::InheritanceChain::BgpConfigEntid::NeighborAddress


class Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::PasswordInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2vpnVplsAddress : public ydk::Entity
{
    public:
        L2vpnVplsAddress();
        ~L2vpnVplsAddress();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf l2vpn_address; //type: string

}; // Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::PasswordInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2vpnVplsAddress


class Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::PasswordInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2vpnMspwAddress : public ydk::Entity
{
    public:
        L2vpnMspwAddress();
        ~L2vpnMspwAddress();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf l2vpn_address; //type: string

}; // Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::PasswordInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2vpnMspwAddress


class Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::PasswordInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv4SrPolicyAddress : public ydk::Entity
{
    public:
        Ipv4SrPolicyAddress();
        ~Ipv4SrPolicyAddress();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf ipv4_srpolicy_address; //type: string

}; // Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::PasswordInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv4SrPolicyAddress


class Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::PasswordInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv6SrPolicyAddress : public ydk::Entity
{
    public:
        Ipv6SrPolicyAddress();
        ~Ipv6SrPolicyAddress();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf ipv6_srpolicy_address; //type: string

}; // Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::PasswordInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv6SrPolicyAddress


class Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::ReceiveBufferInfo : public ydk::Entity
{
    public:
        ReceiveBufferInfo();
        ~ReceiveBufferInfo();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf is_item_configured; //type: boolean
        class InheritanceChain; //type: Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::ReceiveBufferInfo::InheritanceChain

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_oper::Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::ReceiveBufferInfo::InheritanceChain> inheritance_chain;
        
}; // Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::ReceiveBufferInfo


class Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::ReceiveBufferInfo::InheritanceChain : public ydk::Entity
{
    public:
        InheritanceChain();
        ~InheritanceChain();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class BgpConfigEntid; //type: Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::ReceiveBufferInfo::InheritanceChain::BgpConfigEntid

        ydk::YList bgp_config_entid;
        
}; // Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::ReceiveBufferInfo::InheritanceChain


class Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::ReceiveBufferInfo::InheritanceChain::BgpConfigEntid : public ydk::Entity
{
    public:
        BgpConfigEntid();
        ~BgpConfigEntid();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf address_family_identifier; //type: uint8
        ydk::YLeaf configuration_type; //type: BgpEntities
        ydk::YLeaf group_name; //type: string
        class NeighborAddress; //type: Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::ReceiveBufferInfo::InheritanceChain::BgpConfigEntid::NeighborAddress

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_oper::Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::ReceiveBufferInfo::InheritanceChain::BgpConfigEntid::NeighborAddress> neighbor_address;
        
}; // Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::ReceiveBufferInfo::InheritanceChain::BgpConfigEntid


class Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::ReceiveBufferInfo::InheritanceChain::BgpConfigEntid::NeighborAddress : public ydk::Entity
{
    public:
        NeighborAddress();
        ~NeighborAddress();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf afi; //type: BgpAfi
        ydk::YLeaf ipv4_address; //type: string
        ydk::YLeaf ipv4_mcast_address; //type: string
        ydk::YLeaf ipv4_label_address; //type: string
        ydk::YLeaf ipv4_tunnel_address; //type: string
        ydk::YLeaf ipv4_mdt_address; //type: string
        ydk::YLeaf ipv4vpn_address; //type: string
        ydk::YLeaf ipv4vpna_mcastddress; //type: string
        ydk::YLeaf ipv6_address; //type: string
        ydk::YLeaf ipv6_mcast_address; //type: string
        ydk::YLeaf ipv6_label_address; //type: string
        ydk::YLeaf ipv6vpn_address; //type: string
        ydk::YLeaf ipv6vpn_mcast_address; //type: string
        ydk::YLeaf rt_constraint_address; //type: string
        ydk::YLeaf ipv6mvpn_address; //type: string
        ydk::YLeaf ipv4mvpn_address; //type: string
        ydk::YLeaf l2vpn_evpn_address; //type: string
        ydk::YLeaf ls_ls_address; //type: string
        ydk::YLeaf ipv4_flowspec_address; //type: string
        ydk::YLeaf ipv6_flowspec_address; //type: string
        ydk::YLeaf ipv4vpn_flowspec_address; //type: string
        ydk::YLeaf ipv6vpn_flowspec_address; //type: string
        class L2vpnVplsAddress; //type: Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::ReceiveBufferInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2vpnVplsAddress
        class L2vpnMspwAddress; //type: Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::ReceiveBufferInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2vpnMspwAddress
        class Ipv4SrPolicyAddress; //type: Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::ReceiveBufferInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv4SrPolicyAddress
        class Ipv6SrPolicyAddress; //type: Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::ReceiveBufferInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv6SrPolicyAddress

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_oper::Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::ReceiveBufferInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2vpnVplsAddress> l2vpn_vpls_address;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_oper::Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::ReceiveBufferInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2vpnMspwAddress> l2vpn_mspw_address;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_oper::Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::ReceiveBufferInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv4SrPolicyAddress> ipv4_sr_policy_address;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_oper::Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::ReceiveBufferInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv6SrPolicyAddress> ipv6_sr_policy_address;
        
}; // Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::ReceiveBufferInfo::InheritanceChain::BgpConfigEntid::NeighborAddress


class Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::ReceiveBufferInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2vpnVplsAddress : public ydk::Entity
{
    public:
        L2vpnVplsAddress();
        ~L2vpnVplsAddress();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf l2vpn_address; //type: string

}; // Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::ReceiveBufferInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2vpnVplsAddress


class Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::ReceiveBufferInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2vpnMspwAddress : public ydk::Entity
{
    public:
        L2vpnMspwAddress();
        ~L2vpnMspwAddress();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf l2vpn_address; //type: string

}; // Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::ReceiveBufferInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2vpnMspwAddress


class Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::ReceiveBufferInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv4SrPolicyAddress : public ydk::Entity
{
    public:
        Ipv4SrPolicyAddress();
        ~Ipv4SrPolicyAddress();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf ipv4_srpolicy_address; //type: string

}; // Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::ReceiveBufferInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv4SrPolicyAddress


class Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::ReceiveBufferInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv6SrPolicyAddress : public ydk::Entity
{
    public:
        Ipv6SrPolicyAddress();
        ~Ipv6SrPolicyAddress();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf ipv6_srpolicy_address; //type: string

}; // Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::ReceiveBufferInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv6SrPolicyAddress


class Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::SendBufferInfo : public ydk::Entity
{
    public:
        SendBufferInfo();
        ~SendBufferInfo();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf is_item_configured; //type: boolean
        class InheritanceChain; //type: Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::SendBufferInfo::InheritanceChain

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_oper::Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::SendBufferInfo::InheritanceChain> inheritance_chain;
        
}; // Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::SendBufferInfo


class Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::SendBufferInfo::InheritanceChain : public ydk::Entity
{
    public:
        InheritanceChain();
        ~InheritanceChain();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class BgpConfigEntid; //type: Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::SendBufferInfo::InheritanceChain::BgpConfigEntid

        ydk::YList bgp_config_entid;
        
}; // Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::SendBufferInfo::InheritanceChain


class Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::SendBufferInfo::InheritanceChain::BgpConfigEntid : public ydk::Entity
{
    public:
        BgpConfigEntid();
        ~BgpConfigEntid();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf address_family_identifier; //type: uint8
        ydk::YLeaf configuration_type; //type: BgpEntities
        ydk::YLeaf group_name; //type: string
        class NeighborAddress; //type: Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::SendBufferInfo::InheritanceChain::BgpConfigEntid::NeighborAddress

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_oper::Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::SendBufferInfo::InheritanceChain::BgpConfigEntid::NeighborAddress> neighbor_address;
        
}; // Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::SendBufferInfo::InheritanceChain::BgpConfigEntid


class Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::SendBufferInfo::InheritanceChain::BgpConfigEntid::NeighborAddress : public ydk::Entity
{
    public:
        NeighborAddress();
        ~NeighborAddress();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf afi; //type: BgpAfi
        ydk::YLeaf ipv4_address; //type: string
        ydk::YLeaf ipv4_mcast_address; //type: string
        ydk::YLeaf ipv4_label_address; //type: string
        ydk::YLeaf ipv4_tunnel_address; //type: string
        ydk::YLeaf ipv4_mdt_address; //type: string
        ydk::YLeaf ipv4vpn_address; //type: string
        ydk::YLeaf ipv4vpna_mcastddress; //type: string
        ydk::YLeaf ipv6_address; //type: string
        ydk::YLeaf ipv6_mcast_address; //type: string
        ydk::YLeaf ipv6_label_address; //type: string
        ydk::YLeaf ipv6vpn_address; //type: string
        ydk::YLeaf ipv6vpn_mcast_address; //type: string
        ydk::YLeaf rt_constraint_address; //type: string
        ydk::YLeaf ipv6mvpn_address; //type: string
        ydk::YLeaf ipv4mvpn_address; //type: string
        ydk::YLeaf l2vpn_evpn_address; //type: string
        ydk::YLeaf ls_ls_address; //type: string
        ydk::YLeaf ipv4_flowspec_address; //type: string
        ydk::YLeaf ipv6_flowspec_address; //type: string
        ydk::YLeaf ipv4vpn_flowspec_address; //type: string
        ydk::YLeaf ipv6vpn_flowspec_address; //type: string
        class L2vpnVplsAddress; //type: Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::SendBufferInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2vpnVplsAddress
        class L2vpnMspwAddress; //type: Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::SendBufferInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2vpnMspwAddress
        class Ipv4SrPolicyAddress; //type: Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::SendBufferInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv4SrPolicyAddress
        class Ipv6SrPolicyAddress; //type: Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::SendBufferInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv6SrPolicyAddress

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_oper::Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::SendBufferInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2vpnVplsAddress> l2vpn_vpls_address;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_oper::Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::SendBufferInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2vpnMspwAddress> l2vpn_mspw_address;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_oper::Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::SendBufferInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv4SrPolicyAddress> ipv4_sr_policy_address;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_oper::Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::SendBufferInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv6SrPolicyAddress> ipv6_sr_policy_address;
        
}; // Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::SendBufferInfo::InheritanceChain::BgpConfigEntid::NeighborAddress


class Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::SendBufferInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2vpnVplsAddress : public ydk::Entity
{
    public:
        L2vpnVplsAddress();
        ~L2vpnVplsAddress();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf l2vpn_address; //type: string

}; // Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::SendBufferInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2vpnVplsAddress


class Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::SendBufferInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2vpnMspwAddress : public ydk::Entity
{
    public:
        L2vpnMspwAddress();
        ~L2vpnMspwAddress();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf l2vpn_address; //type: string

}; // Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::SendBufferInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2vpnMspwAddress


class Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::SendBufferInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv4SrPolicyAddress : public ydk::Entity
{
    public:
        Ipv4SrPolicyAddress();
        ~Ipv4SrPolicyAddress();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf ipv4_srpolicy_address; //type: string

}; // Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::SendBufferInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv4SrPolicyAddress


class Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::SendBufferInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv6SrPolicyAddress : public ydk::Entity
{
    public:
        Ipv6SrPolicyAddress();
        ~Ipv6SrPolicyAddress();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf ipv6_srpolicy_address; //type: string

}; // Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::SendBufferInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv6SrPolicyAddress


class Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::ShutdownInfo : public ydk::Entity
{
    public:
        ShutdownInfo();
        ~ShutdownInfo();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf is_item_configured; //type: boolean
        class InheritanceChain; //type: Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::ShutdownInfo::InheritanceChain

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_oper::Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::ShutdownInfo::InheritanceChain> inheritance_chain;
        
}; // Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::ShutdownInfo


class Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::ShutdownInfo::InheritanceChain : public ydk::Entity
{
    public:
        InheritanceChain();
        ~InheritanceChain();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class BgpConfigEntid; //type: Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::ShutdownInfo::InheritanceChain::BgpConfigEntid

        ydk::YList bgp_config_entid;
        
}; // Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::ShutdownInfo::InheritanceChain


class Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::ShutdownInfo::InheritanceChain::BgpConfigEntid : public ydk::Entity
{
    public:
        BgpConfigEntid();
        ~BgpConfigEntid();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf address_family_identifier; //type: uint8
        ydk::YLeaf configuration_type; //type: BgpEntities
        ydk::YLeaf group_name; //type: string
        class NeighborAddress; //type: Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::ShutdownInfo::InheritanceChain::BgpConfigEntid::NeighborAddress

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_oper::Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::ShutdownInfo::InheritanceChain::BgpConfigEntid::NeighborAddress> neighbor_address;
        
}; // Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::ShutdownInfo::InheritanceChain::BgpConfigEntid


class Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::ShutdownInfo::InheritanceChain::BgpConfigEntid::NeighborAddress : public ydk::Entity
{
    public:
        NeighborAddress();
        ~NeighborAddress();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf afi; //type: BgpAfi
        ydk::YLeaf ipv4_address; //type: string
        ydk::YLeaf ipv4_mcast_address; //type: string
        ydk::YLeaf ipv4_label_address; //type: string
        ydk::YLeaf ipv4_tunnel_address; //type: string
        ydk::YLeaf ipv4_mdt_address; //type: string
        ydk::YLeaf ipv4vpn_address; //type: string
        ydk::YLeaf ipv4vpna_mcastddress; //type: string
        ydk::YLeaf ipv6_address; //type: string
        ydk::YLeaf ipv6_mcast_address; //type: string
        ydk::YLeaf ipv6_label_address; //type: string
        ydk::YLeaf ipv6vpn_address; //type: string
        ydk::YLeaf ipv6vpn_mcast_address; //type: string
        ydk::YLeaf rt_constraint_address; //type: string
        ydk::YLeaf ipv6mvpn_address; //type: string
        ydk::YLeaf ipv4mvpn_address; //type: string
        ydk::YLeaf l2vpn_evpn_address; //type: string
        ydk::YLeaf ls_ls_address; //type: string
        ydk::YLeaf ipv4_flowspec_address; //type: string
        ydk::YLeaf ipv6_flowspec_address; //type: string
        ydk::YLeaf ipv4vpn_flowspec_address; //type: string
        ydk::YLeaf ipv6vpn_flowspec_address; //type: string
        class L2vpnVplsAddress; //type: Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::ShutdownInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2vpnVplsAddress
        class L2vpnMspwAddress; //type: Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::ShutdownInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2vpnMspwAddress
        class Ipv4SrPolicyAddress; //type: Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::ShutdownInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv4SrPolicyAddress
        class Ipv6SrPolicyAddress; //type: Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::ShutdownInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv6SrPolicyAddress

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_oper::Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::ShutdownInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2vpnVplsAddress> l2vpn_vpls_address;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_oper::Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::ShutdownInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2vpnMspwAddress> l2vpn_mspw_address;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_oper::Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::ShutdownInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv4SrPolicyAddress> ipv4_sr_policy_address;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_oper::Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::ShutdownInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv6SrPolicyAddress> ipv6_sr_policy_address;
        
}; // Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::ShutdownInfo::InheritanceChain::BgpConfigEntid::NeighborAddress


class Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::ShutdownInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2vpnVplsAddress : public ydk::Entity
{
    public:
        L2vpnVplsAddress();
        ~L2vpnVplsAddress();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf l2vpn_address; //type: string

}; // Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::ShutdownInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2vpnVplsAddress


class Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::ShutdownInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2vpnMspwAddress : public ydk::Entity
{
    public:
        L2vpnMspwAddress();
        ~L2vpnMspwAddress();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf l2vpn_address; //type: string

}; // Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::ShutdownInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2vpnMspwAddress


class Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::ShutdownInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv4SrPolicyAddress : public ydk::Entity
{
    public:
        Ipv4SrPolicyAddress();
        ~Ipv4SrPolicyAddress();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf ipv4_srpolicy_address; //type: string

}; // Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::ShutdownInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv4SrPolicyAddress


class Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::ShutdownInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv6SrPolicyAddress : public ydk::Entity
{
    public:
        Ipv6SrPolicyAddress();
        ~Ipv6SrPolicyAddress();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf ipv6_srpolicy_address; //type: string

}; // Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::ShutdownInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv6SrPolicyAddress


class Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::TimersInfo : public ydk::Entity
{
    public:
        TimersInfo();
        ~TimersInfo();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf is_item_configured; //type: boolean
        class InheritanceChain; //type: Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::TimersInfo::InheritanceChain

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_oper::Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::TimersInfo::InheritanceChain> inheritance_chain;
        
}; // Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::TimersInfo


class Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::TimersInfo::InheritanceChain : public ydk::Entity
{
    public:
        InheritanceChain();
        ~InheritanceChain();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class BgpConfigEntid; //type: Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::TimersInfo::InheritanceChain::BgpConfigEntid

        ydk::YList bgp_config_entid;
        
}; // Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::TimersInfo::InheritanceChain


class Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::TimersInfo::InheritanceChain::BgpConfigEntid : public ydk::Entity
{
    public:
        BgpConfigEntid();
        ~BgpConfigEntid();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf address_family_identifier; //type: uint8
        ydk::YLeaf configuration_type; //type: BgpEntities
        ydk::YLeaf group_name; //type: string
        class NeighborAddress; //type: Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::TimersInfo::InheritanceChain::BgpConfigEntid::NeighborAddress

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_oper::Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::TimersInfo::InheritanceChain::BgpConfigEntid::NeighborAddress> neighbor_address;
        
}; // Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::TimersInfo::InheritanceChain::BgpConfigEntid


class Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::TimersInfo::InheritanceChain::BgpConfigEntid::NeighborAddress : public ydk::Entity
{
    public:
        NeighborAddress();
        ~NeighborAddress();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf afi; //type: BgpAfi
        ydk::YLeaf ipv4_address; //type: string
        ydk::YLeaf ipv4_mcast_address; //type: string
        ydk::YLeaf ipv4_label_address; //type: string
        ydk::YLeaf ipv4_tunnel_address; //type: string
        ydk::YLeaf ipv4_mdt_address; //type: string
        ydk::YLeaf ipv4vpn_address; //type: string
        ydk::YLeaf ipv4vpna_mcastddress; //type: string
        ydk::YLeaf ipv6_address; //type: string
        ydk::YLeaf ipv6_mcast_address; //type: string
        ydk::YLeaf ipv6_label_address; //type: string
        ydk::YLeaf ipv6vpn_address; //type: string
        ydk::YLeaf ipv6vpn_mcast_address; //type: string
        ydk::YLeaf rt_constraint_address; //type: string
        ydk::YLeaf ipv6mvpn_address; //type: string
        ydk::YLeaf ipv4mvpn_address; //type: string
        ydk::YLeaf l2vpn_evpn_address; //type: string
        ydk::YLeaf ls_ls_address; //type: string
        ydk::YLeaf ipv4_flowspec_address; //type: string
        ydk::YLeaf ipv6_flowspec_address; //type: string
        ydk::YLeaf ipv4vpn_flowspec_address; //type: string
        ydk::YLeaf ipv6vpn_flowspec_address; //type: string
        class L2vpnVplsAddress; //type: Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::TimersInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2vpnVplsAddress
        class L2vpnMspwAddress; //type: Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::TimersInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2vpnMspwAddress
        class Ipv4SrPolicyAddress; //type: Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::TimersInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv4SrPolicyAddress
        class Ipv6SrPolicyAddress; //type: Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::TimersInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv6SrPolicyAddress

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_oper::Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::TimersInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2vpnVplsAddress> l2vpn_vpls_address;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_oper::Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::TimersInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2vpnMspwAddress> l2vpn_mspw_address;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_oper::Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::TimersInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv4SrPolicyAddress> ipv4_sr_policy_address;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_oper::Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::TimersInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv6SrPolicyAddress> ipv6_sr_policy_address;
        
}; // Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::TimersInfo::InheritanceChain::BgpConfigEntid::NeighborAddress


class Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::TimersInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2vpnVplsAddress : public ydk::Entity
{
    public:
        L2vpnVplsAddress();
        ~L2vpnVplsAddress();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf l2vpn_address; //type: string

}; // Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::TimersInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2vpnVplsAddress


class Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::TimersInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2vpnMspwAddress : public ydk::Entity
{
    public:
        L2vpnMspwAddress();
        ~L2vpnMspwAddress();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf l2vpn_address; //type: string

}; // Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::TimersInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2vpnMspwAddress


class Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::TimersInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv4SrPolicyAddress : public ydk::Entity
{
    public:
        Ipv4SrPolicyAddress();
        ~Ipv4SrPolicyAddress();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf ipv4_srpolicy_address; //type: string

}; // Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::TimersInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv4SrPolicyAddress


class Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::TimersInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv6SrPolicyAddress : public ydk::Entity
{
    public:
        Ipv6SrPolicyAddress();
        ~Ipv6SrPolicyAddress();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf ipv6_srpolicy_address; //type: string

}; // Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::TimersInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv6SrPolicyAddress


class Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::LocalAddressInfo : public ydk::Entity
{
    public:
        LocalAddressInfo();
        ~LocalAddressInfo();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf is_item_configured; //type: boolean
        class InheritanceChain; //type: Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::LocalAddressInfo::InheritanceChain

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_oper::Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::LocalAddressInfo::InheritanceChain> inheritance_chain;
        
}; // Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::LocalAddressInfo


class Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::LocalAddressInfo::InheritanceChain : public ydk::Entity
{
    public:
        InheritanceChain();
        ~InheritanceChain();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class BgpConfigEntid; //type: Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::LocalAddressInfo::InheritanceChain::BgpConfigEntid

        ydk::YList bgp_config_entid;
        
}; // Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::LocalAddressInfo::InheritanceChain


class Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::LocalAddressInfo::InheritanceChain::BgpConfigEntid : public ydk::Entity
{
    public:
        BgpConfigEntid();
        ~BgpConfigEntid();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf address_family_identifier; //type: uint8
        ydk::YLeaf configuration_type; //type: BgpEntities
        ydk::YLeaf group_name; //type: string
        class NeighborAddress; //type: Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::LocalAddressInfo::InheritanceChain::BgpConfigEntid::NeighborAddress

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_oper::Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::LocalAddressInfo::InheritanceChain::BgpConfigEntid::NeighborAddress> neighbor_address;
        
}; // Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::LocalAddressInfo::InheritanceChain::BgpConfigEntid


class Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::LocalAddressInfo::InheritanceChain::BgpConfigEntid::NeighborAddress : public ydk::Entity
{
    public:
        NeighborAddress();
        ~NeighborAddress();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf afi; //type: BgpAfi
        ydk::YLeaf ipv4_address; //type: string
        ydk::YLeaf ipv4_mcast_address; //type: string
        ydk::YLeaf ipv4_label_address; //type: string
        ydk::YLeaf ipv4_tunnel_address; //type: string
        ydk::YLeaf ipv4_mdt_address; //type: string
        ydk::YLeaf ipv4vpn_address; //type: string
        ydk::YLeaf ipv4vpna_mcastddress; //type: string
        ydk::YLeaf ipv6_address; //type: string
        ydk::YLeaf ipv6_mcast_address; //type: string
        ydk::YLeaf ipv6_label_address; //type: string
        ydk::YLeaf ipv6vpn_address; //type: string
        ydk::YLeaf ipv6vpn_mcast_address; //type: string
        ydk::YLeaf rt_constraint_address; //type: string
        ydk::YLeaf ipv6mvpn_address; //type: string
        ydk::YLeaf ipv4mvpn_address; //type: string
        ydk::YLeaf l2vpn_evpn_address; //type: string
        ydk::YLeaf ls_ls_address; //type: string
        ydk::YLeaf ipv4_flowspec_address; //type: string
        ydk::YLeaf ipv6_flowspec_address; //type: string
        ydk::YLeaf ipv4vpn_flowspec_address; //type: string
        ydk::YLeaf ipv6vpn_flowspec_address; //type: string
        class L2vpnVplsAddress; //type: Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::LocalAddressInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2vpnVplsAddress
        class L2vpnMspwAddress; //type: Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::LocalAddressInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2vpnMspwAddress
        class Ipv4SrPolicyAddress; //type: Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::LocalAddressInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv4SrPolicyAddress
        class Ipv6SrPolicyAddress; //type: Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::LocalAddressInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv6SrPolicyAddress

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_oper::Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::LocalAddressInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2vpnVplsAddress> l2vpn_vpls_address;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_oper::Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::LocalAddressInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2vpnMspwAddress> l2vpn_mspw_address;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_oper::Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::LocalAddressInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv4SrPolicyAddress> ipv4_sr_policy_address;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_oper::Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::LocalAddressInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv6SrPolicyAddress> ipv6_sr_policy_address;
        
}; // Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::LocalAddressInfo::InheritanceChain::BgpConfigEntid::NeighborAddress


class Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::LocalAddressInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2vpnVplsAddress : public ydk::Entity
{
    public:
        L2vpnVplsAddress();
        ~L2vpnVplsAddress();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf l2vpn_address; //type: string

}; // Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::LocalAddressInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2vpnVplsAddress


class Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::LocalAddressInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2vpnMspwAddress : public ydk::Entity
{
    public:
        L2vpnMspwAddress();
        ~L2vpnMspwAddress();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf l2vpn_address; //type: string

}; // Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::LocalAddressInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2vpnMspwAddress


class Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::LocalAddressInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv4SrPolicyAddress : public ydk::Entity
{
    public:
        Ipv4SrPolicyAddress();
        ~Ipv4SrPolicyAddress();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf ipv4_srpolicy_address; //type: string

}; // Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::LocalAddressInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv4SrPolicyAddress


class Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::LocalAddressInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv6SrPolicyAddress : public ydk::Entity
{
    public:
        Ipv6SrPolicyAddress();
        ~Ipv6SrPolicyAddress();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf ipv6_srpolicy_address; //type: string

}; // Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::LocalAddressInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv6SrPolicyAddress


class Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::MsgLogInInfo : public ydk::Entity
{
    public:
        MsgLogInInfo();
        ~MsgLogInInfo();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf is_item_configured; //type: boolean
        class InheritanceChain; //type: Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::MsgLogInInfo::InheritanceChain

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_oper::Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::MsgLogInInfo::InheritanceChain> inheritance_chain;
        
}; // Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::MsgLogInInfo


class Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::MsgLogInInfo::InheritanceChain : public ydk::Entity
{
    public:
        InheritanceChain();
        ~InheritanceChain();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class BgpConfigEntid; //type: Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::MsgLogInInfo::InheritanceChain::BgpConfigEntid

        ydk::YList bgp_config_entid;
        
}; // Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::MsgLogInInfo::InheritanceChain


class Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::MsgLogInInfo::InheritanceChain::BgpConfigEntid : public ydk::Entity
{
    public:
        BgpConfigEntid();
        ~BgpConfigEntid();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf address_family_identifier; //type: uint8
        ydk::YLeaf configuration_type; //type: BgpEntities
        ydk::YLeaf group_name; //type: string
        class NeighborAddress; //type: Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::MsgLogInInfo::InheritanceChain::BgpConfigEntid::NeighborAddress

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_oper::Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::MsgLogInInfo::InheritanceChain::BgpConfigEntid::NeighborAddress> neighbor_address;
        
}; // Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::MsgLogInInfo::InheritanceChain::BgpConfigEntid


class Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::MsgLogInInfo::InheritanceChain::BgpConfigEntid::NeighborAddress : public ydk::Entity
{
    public:
        NeighborAddress();
        ~NeighborAddress();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf afi; //type: BgpAfi
        ydk::YLeaf ipv4_address; //type: string
        ydk::YLeaf ipv4_mcast_address; //type: string
        ydk::YLeaf ipv4_label_address; //type: string
        ydk::YLeaf ipv4_tunnel_address; //type: string
        ydk::YLeaf ipv4_mdt_address; //type: string
        ydk::YLeaf ipv4vpn_address; //type: string
        ydk::YLeaf ipv4vpna_mcastddress; //type: string
        ydk::YLeaf ipv6_address; //type: string
        ydk::YLeaf ipv6_mcast_address; //type: string
        ydk::YLeaf ipv6_label_address; //type: string
        ydk::YLeaf ipv6vpn_address; //type: string
        ydk::YLeaf ipv6vpn_mcast_address; //type: string
        ydk::YLeaf rt_constraint_address; //type: string
        ydk::YLeaf ipv6mvpn_address; //type: string
        ydk::YLeaf ipv4mvpn_address; //type: string
        ydk::YLeaf l2vpn_evpn_address; //type: string
        ydk::YLeaf ls_ls_address; //type: string
        ydk::YLeaf ipv4_flowspec_address; //type: string
        ydk::YLeaf ipv6_flowspec_address; //type: string
        ydk::YLeaf ipv4vpn_flowspec_address; //type: string
        ydk::YLeaf ipv6vpn_flowspec_address; //type: string
        class L2vpnVplsAddress; //type: Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::MsgLogInInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2vpnVplsAddress
        class L2vpnMspwAddress; //type: Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::MsgLogInInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2vpnMspwAddress
        class Ipv4SrPolicyAddress; //type: Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::MsgLogInInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv4SrPolicyAddress
        class Ipv6SrPolicyAddress; //type: Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::MsgLogInInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv6SrPolicyAddress

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_oper::Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::MsgLogInInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2vpnVplsAddress> l2vpn_vpls_address;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_oper::Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::MsgLogInInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2vpnMspwAddress> l2vpn_mspw_address;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_oper::Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::MsgLogInInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv4SrPolicyAddress> ipv4_sr_policy_address;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_oper::Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::MsgLogInInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv6SrPolicyAddress> ipv6_sr_policy_address;
        
}; // Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::MsgLogInInfo::InheritanceChain::BgpConfigEntid::NeighborAddress


class Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::MsgLogInInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2vpnVplsAddress : public ydk::Entity
{
    public:
        L2vpnVplsAddress();
        ~L2vpnVplsAddress();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf l2vpn_address; //type: string

}; // Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::MsgLogInInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2vpnVplsAddress


class Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::MsgLogInInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2vpnMspwAddress : public ydk::Entity
{
    public:
        L2vpnMspwAddress();
        ~L2vpnMspwAddress();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf l2vpn_address; //type: string

}; // Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::MsgLogInInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2vpnMspwAddress


class Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::MsgLogInInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv4SrPolicyAddress : public ydk::Entity
{
    public:
        Ipv4SrPolicyAddress();
        ~Ipv4SrPolicyAddress();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf ipv4_srpolicy_address; //type: string

}; // Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::MsgLogInInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv4SrPolicyAddress


class Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::MsgLogInInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv6SrPolicyAddress : public ydk::Entity
{
    public:
        Ipv6SrPolicyAddress();
        ~Ipv6SrPolicyAddress();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf ipv6_srpolicy_address; //type: string

}; // Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::MsgLogInInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv6SrPolicyAddress


class Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::MsgLogOutInfo : public ydk::Entity
{
    public:
        MsgLogOutInfo();
        ~MsgLogOutInfo();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf is_item_configured; //type: boolean
        class InheritanceChain; //type: Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::MsgLogOutInfo::InheritanceChain

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_oper::Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::MsgLogOutInfo::InheritanceChain> inheritance_chain;
        
}; // Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::MsgLogOutInfo


class Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::MsgLogOutInfo::InheritanceChain : public ydk::Entity
{
    public:
        InheritanceChain();
        ~InheritanceChain();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class BgpConfigEntid; //type: Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::MsgLogOutInfo::InheritanceChain::BgpConfigEntid

        ydk::YList bgp_config_entid;
        
}; // Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::MsgLogOutInfo::InheritanceChain


class Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::MsgLogOutInfo::InheritanceChain::BgpConfigEntid : public ydk::Entity
{
    public:
        BgpConfigEntid();
        ~BgpConfigEntid();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf address_family_identifier; //type: uint8
        ydk::YLeaf configuration_type; //type: BgpEntities
        ydk::YLeaf group_name; //type: string
        class NeighborAddress; //type: Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::MsgLogOutInfo::InheritanceChain::BgpConfigEntid::NeighborAddress

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_oper::Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::MsgLogOutInfo::InheritanceChain::BgpConfigEntid::NeighborAddress> neighbor_address;
        
}; // Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::MsgLogOutInfo::InheritanceChain::BgpConfigEntid


class Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::MsgLogOutInfo::InheritanceChain::BgpConfigEntid::NeighborAddress : public ydk::Entity
{
    public:
        NeighborAddress();
        ~NeighborAddress();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf afi; //type: BgpAfi
        ydk::YLeaf ipv4_address; //type: string
        ydk::YLeaf ipv4_mcast_address; //type: string
        ydk::YLeaf ipv4_label_address; //type: string
        ydk::YLeaf ipv4_tunnel_address; //type: string
        ydk::YLeaf ipv4_mdt_address; //type: string
        ydk::YLeaf ipv4vpn_address; //type: string
        ydk::YLeaf ipv4vpna_mcastddress; //type: string
        ydk::YLeaf ipv6_address; //type: string
        ydk::YLeaf ipv6_mcast_address; //type: string
        ydk::YLeaf ipv6_label_address; //type: string
        ydk::YLeaf ipv6vpn_address; //type: string
        ydk::YLeaf ipv6vpn_mcast_address; //type: string
        ydk::YLeaf rt_constraint_address; //type: string
        ydk::YLeaf ipv6mvpn_address; //type: string
        ydk::YLeaf ipv4mvpn_address; //type: string
        ydk::YLeaf l2vpn_evpn_address; //type: string
        ydk::YLeaf ls_ls_address; //type: string
        ydk::YLeaf ipv4_flowspec_address; //type: string
        ydk::YLeaf ipv6_flowspec_address; //type: string
        ydk::YLeaf ipv4vpn_flowspec_address; //type: string
        ydk::YLeaf ipv6vpn_flowspec_address; //type: string
        class L2vpnVplsAddress; //type: Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::MsgLogOutInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2vpnVplsAddress
        class L2vpnMspwAddress; //type: Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::MsgLogOutInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2vpnMspwAddress
        class Ipv4SrPolicyAddress; //type: Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::MsgLogOutInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv4SrPolicyAddress
        class Ipv6SrPolicyAddress; //type: Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::MsgLogOutInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv6SrPolicyAddress

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_oper::Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::MsgLogOutInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2vpnVplsAddress> l2vpn_vpls_address;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_oper::Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::MsgLogOutInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2vpnMspwAddress> l2vpn_mspw_address;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_oper::Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::MsgLogOutInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv4SrPolicyAddress> ipv4_sr_policy_address;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_oper::Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::MsgLogOutInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv6SrPolicyAddress> ipv6_sr_policy_address;
        
}; // Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::MsgLogOutInfo::InheritanceChain::BgpConfigEntid::NeighborAddress


class Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::MsgLogOutInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2vpnVplsAddress : public ydk::Entity
{
    public:
        L2vpnVplsAddress();
        ~L2vpnVplsAddress();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf l2vpn_address; //type: string

}; // Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::MsgLogOutInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2vpnVplsAddress

class BgpSrpolicyReqState : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf request_pending;
        static const ydk::Enum::YLeaf requested;
        static const ydk::Enum::YLeaf notified_up;
        static const ydk::Enum::YLeaf notified_down;
        static const ydk::Enum::YLeaf marked_stale;
        static const ydk::Enum::YLeaf marked_disable;

        static int get_enum_value(const std::string & name) {
            if (name == "request-pending") return 0;
            if (name == "requested") return 1;
            if (name == "notified-up") return 2;
            if (name == "notified-down") return 4;
            if (name == "marked-stale") return 8;
            if (name == "marked-disable") return 16;
            return -1;
        }
};

class BgpBfdState : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf bgp_bfd_state_not_configured;
        static const ydk::Enum::YLeaf bgp_bfd_state_admin_down;
        static const ydk::Enum::YLeaf bgp_bfd_state_not_supported;
        static const ydk::Enum::YLeaf bgp_bfd_state_not_created;
        static const ydk::Enum::YLeaf bgp_bfd_state_created;
        static const ydk::Enum::YLeaf bgp_bfd_state_up;
        static const ydk::Enum::YLeaf bgp_bfd_state_down;
        static const ydk::Enum::YLeaf bgp_bfd_state_nbr_not_configured;
        static const ydk::Enum::YLeaf bgp_bfd_state_none;

        static int get_enum_value(const std::string & name) {
            if (name == "bgp-bfd-state-not-configured") return 0;
            if (name == "bgp-bfd-state-admin-down") return 1;
            if (name == "bgp-bfd-state-not-supported") return 2;
            if (name == "bgp-bfd-state-not-created") return 3;
            if (name == "bgp-bfd-state-created") return 4;
            if (name == "bgp-bfd-state-up") return 5;
            if (name == "bgp-bfd-state-down") return 6;
            if (name == "bgp-bfd-state-nbr-not-configured") return 7;
            if (name == "bgp-bfd-state-none") return 8;
            return -1;
        }
};

class BgpEntities : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf af_group;
        static const ydk::Enum::YLeaf session_group;
        static const ydk::Enum::YLeaf neighbor_group;
        static const ydk::Enum::YLeaf neighbor;

        static int get_enum_value(const std::string & name) {
            if (name == "af-group") return 0;
            if (name == "session-group") return 1;
            if (name == "neighbor-group") return 2;
            if (name == "neighbor") return 3;
            return -1;
        }
};

class BgpNhValidate : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf bgp_nh_validate_sync;
        static const ydk::Enum::YLeaf bgp_nh_validate_async;
        static const ydk::Enum::YLeaf bgp_nh_validate_none;

        static int get_enum_value(const std::string & name) {
            if (name == "bgp-nh-validate-sync") return 0;
            if (name == "bgp-nh-validate-async") return 1;
            if (name == "bgp-nh-validate-none") return 2;
            return -1;
        }
};

class BgpDsConnState : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf none;
        static const ydk::Enum::YLeaf connect_init;
        static const ydk::Enum::YLeaf connect_fail;
        static const ydk::Enum::YLeaf connect_estb;
        static const ydk::Enum::YLeaf disconnect_init;
        static const ydk::Enum::YLeaf disconnect_fail;
        static const ydk::Enum::YLeaf disconnect_done;

        static int get_enum_value(const std::string & name) {
            if (name == "none") return 0;
            if (name == "connect-init") return 1;
            if (name == "connect-fail") return 2;
            if (name == "connect-estb") return 3;
            if (name == "disconnect-init") return 4;
            if (name == "disconnect-fail") return 5;
            if (name == "disconnect-done") return 6;
            return -1;
        }
};

class BgpRpkiState : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf idle;
        static const ydk::Enum::YLeaf attempt_connect;
        static const ydk::Enum::YLeaf connected;

        static int get_enum_value(const std::string & name) {
            if (name == "idle") return 0;
            if (name == "attempt-connect") return 1;
            if (name == "connected") return 2;
            return -1;
        }
};

class BgpPeerResetReasonIndex : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf bgp_read_remote_closed;
        static const ydk::Enum::YLeaf bgp_read_failed;
        static const ydk::Enum::YLeaf bgp_write_failed;
        static const ydk::Enum::YLeaf bgp_sock_disconnected;
        static const ydk::Enum::YLeaf bgp_sock_select_failed;
        static const ydk::Enum::YLeaf bgp_peer_reset_reason_none;

        static int get_enum_value(const std::string & name) {
            if (name == "bgp-read-remote-closed") return 1;
            if (name == "bgp-read-failed") return 2;
            if (name == "bgp-write-failed") return 3;
            if (name == "bgp-sock-disconnected") return 4;
            if (name == "bgp-sock-select-failed") return 5;
            if (name == "bgp-peer-reset-reason-none") return 6;
            return -1;
        }
};

class BgpScopedSyncState : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf bgp_scope_sync_state_none;
        static const ydk::Enum::YLeaf bgp_scope_sync_state_not_nsr_ready;
        static const ydk::Enum::YLeaf bgp_scope_sync_state_timer_start;
        static const ydk::Enum::YLeaf bgp_scope_sync_state_add_list;
        static const ydk::Enum::YLeaf bgp_scope_sync_state_batch_acitve;

        static int get_enum_value(const std::string & name) {
            if (name == "bgp-scope-sync-state-none") return 0;
            if (name == "bgp-scope-sync-state-not-nsr-ready") return 1;
            if (name == "bgp-scope-sync-state-timer-start") return 2;
            if (name == "bgp-scope-sync-state-add-list") return 3;
            if (name == "bgp-scope-sync-state-batch-acitve") return 4;
            return -1;
        }
};

class BgpEbgpSendDmzEnableMode : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf bgp_ebgp_send_dmz_disable;
        static const ydk::Enum::YLeaf bgp_ebgp_send_dmz_dflt;
        static const ydk::Enum::YLeaf bgp_ebgp_send_dmz_cumulative;

        static int get_enum_value(const std::string & name) {
            if (name == "bgp-ebgp-send-dmz-disable") return 0;
            if (name == "bgp-ebgp-send-dmz-dflt") return 1;
            if (name == "bgp-ebgp-send-dmz-cumulative") return 2;
            return -1;
        }
};

class BgpBagUpdErrAction : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf bgp_bag_upd_err_action_none;
        static const ydk::Enum::YLeaf bgp_bag_upd_err_action_discard_msg;
        static const ydk::Enum::YLeaf bgp_bag_upd_err_action_reset;
        static const ydk::Enum::YLeaf bgp_bag_upd_err_action_wdr_or_reset;
        static const ydk::Enum::YLeaf bgp_bag_upd_err_action_wdr;
        static const ydk::Enum::YLeaf bgp_bag_upd_err_action_discard_attr;
        static const ydk::Enum::YLeaf bgp_bag_upd_err_action_local_repair;
        static const ydk::Enum::YLeaf bgp_bag_upd_err_action_max;

        static int get_enum_value(const std::string & name) {
            if (name == "bgp-bag-upd-err-action-none") return 0;
            if (name == "bgp-bag-upd-err-action-discard-msg") return 1;
            if (name == "bgp-bag-upd-err-action-reset") return 2;
            if (name == "bgp-bag-upd-err-action-wdr-or-reset") return 3;
            if (name == "bgp-bag-upd-err-action-wdr") return 4;
            if (name == "bgp-bag-upd-err-action-discard-attr") return 5;
            if (name == "bgp-bag-upd-err-action-local-repair") return 6;
            if (name == "bgp-bag-upd-err-action-max") return 7;
            return -1;
        }
};

class BgpRpkiPstate : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf not_started;
        static const ydk::Enum::YLeaf reset;
        static const ydk::Enum::YLeaf refresh;
        static const ydk::Enum::YLeaf reset_query_sent;
        static const ydk::Enum::YLeaf serial_query_sent;
        static const ydk::Enum::YLeaf data_start;
        static const ydk::Enum::YLeaf data_end;

        static int get_enum_value(const std::string & name) {
            if (name == "not-started") return 0;
            if (name == "reset") return 1;
            if (name == "refresh") return 2;
            if (name == "reset-query-sent") return 3;
            if (name == "serial-query-sent") return 4;
            if (name == "data-start") return 5;
            if (name == "data-end") return 6;
            return -1;
        }
};

class BgpRoute1 : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf bgp_route_type_used;
        static const ydk::Enum::YLeaf bgp_route_type_rcvd_only;
        static const ydk::Enum::YLeaf bgp_route_type_safi_label_ed_ucast_used;
        static const ydk::Enum::YLeaf bgp_route_type_safi_label_ed_ucast_rcvd_only;
        static const ydk::Enum::YLeaf bgp_route_type_rib;
        static const ydk::Enum::YLeaf bgp_route_type_aggregate;
        static const ydk::Enum::YLeaf bgp_route_type_max;

        static int get_enum_value(const std::string & name) {
            if (name == "bgp-route-type-used") return 0;
            if (name == "bgp-route-type-rcvd-only") return 1;
            if (name == "bgp-route-type-safi-label-ed-ucast-used") return 2;
            if (name == "bgp-route-type-safi-label-ed-ucast-rcvd-only") return 3;
            if (name == "bgp-route-type-rib") return 4;
            if (name == "bgp-route-type-aggregate") return 5;
            if (name == "bgp-route-type-max") return 6;
            return -1;
        }
};

class BgpBagUpdFilterAction : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf none;
        static const ydk::Enum::YLeaf withdraw;
        static const ydk::Enum::YLeaf attribute_discard;

        static int get_enum_value(const std::string & name) {
            if (name == "none") return 0;
            if (name == "withdraw") return 1;
            if (name == "attribute-discard") return 2;
            return -1;
        }
};

class BgpRpkiEdmAf : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf ipv4;
        static const ydk::Enum::YLeaf ipv6;

        static int get_enum_value(const std::string & name) {
            if (name == "ipv4") return 2;
            if (name == "ipv6") return 10;
            return -1;
        }
};

class BgpBpStage : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf bgp_bp_comp_not_compared;
        static const ydk::Enum::YLeaf bgp_bp_comp_imulti_path;
        static const ydk::Enum::YLeaf bgp_bp_comp_emulti_path;
        static const ydk::Enum::YLeaf bgp_bp_comp_eimulti_path;
        static const ydk::Enum::YLeaf bgp_bp_invalid_path;
        static const ydk::Enum::YLeaf bgp_bp_comp_pre_cost_comm;
        static const ydk::Enum::YLeaf bgp_bp_comp_weight;
        static const ydk::Enum::YLeaf bgp_bp_comp_locpref;
        static const ydk::Enum::YLeaf bgp_bp_comp_rpki;
        static const ydk::Enum::YLeaf bgp_bp_comp_aigp;
        static const ydk::Enum::YLeaf bgp_bp_comp_local;
        static const ydk::Enum::YLeaf bgp_bp_comp_local_rib;
        static const ydk::Enum::YLeaf bgp_bp_comp_as_path_len;
        static const ydk::Enum::YLeaf bgp_bp_comp_origin;
        static const ydk::Enum::YLeaf bgp_bp_comp_med;
        static const ydk::Enum::YLeaf bgp_bp_comp_ebgp;
        static const ydk::Enum::YLeaf bgp_bp_comp_ao;
        static const ydk::Enum::YLeaf bgp_bp_comp_igp_metric;
        static const ydk::Enum::YLeaf bgp_bp_comp_igp_cost_comm;
        static const ydk::Enum::YLeaf bgp_bp_comp_rtr_id;
        static const ydk::Enum::YLeaf bgp_bp_comp_clstr_len;
        static const ydk::Enum::YLeaf bgp_bp_comp_nbr_addr;
        static const ydk::Enum::YLeaf bgp_bp_comp_suppressed;
        static const ydk::Enum::YLeaf bgp_bp_comp_mismatch;
        static const ydk::Enum::YLeaf bgp_bp_comp_persistence;

        static int get_enum_value(const std::string & name) {
            if (name == "bgp-bp-comp-not-compared") return 0;
            if (name == "bgp-bp-comp-imulti-path") return 1;
            if (name == "bgp-bp-comp-emulti-path") return 2;
            if (name == "bgp-bp-comp-eimulti-path") return 3;
            if (name == "bgp-bp-invalid-path") return 4;
            if (name == "bgp-bp-comp-pre-cost-comm") return 5;
            if (name == "bgp-bp-comp-weight") return 6;
            if (name == "bgp-bp-comp-locpref") return 7;
            if (name == "bgp-bp-comp-rpki") return 8;
            if (name == "bgp-bp-comp-aigp") return 9;
            if (name == "bgp-bp-comp-local") return 10;
            if (name == "bgp-bp-comp-local-rib") return 11;
            if (name == "bgp-bp-comp-as-path-len") return 12;
            if (name == "bgp-bp-comp-origin") return 13;
            if (name == "bgp-bp-comp-med") return 14;
            if (name == "bgp-bp-comp-ebgp") return 15;
            if (name == "bgp-bp-comp-ao") return 16;
            if (name == "bgp-bp-comp-igp-metric") return 17;
            if (name == "bgp-bp-comp-igp-cost-comm") return 18;
            if (name == "bgp-bp-comp-rtr-id") return 19;
            if (name == "bgp-bp-comp-clstr-len") return 20;
            if (name == "bgp-bp-comp-nbr-addr") return 21;
            if (name == "bgp-bp-comp-suppressed") return 22;
            if (name == "bgp-bp-comp-mismatch") return 23;
            if (name == "bgp-bp-comp-persistence") return 24;
            return -1;
        }
};

class BgpNhEvent : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf bgp_nh_event_crit_not_f;
        static const ydk::Enum::YLeaf bgp_nh_event_non_crit_not_f;
        static const ydk::Enum::YLeaf bgp_nh_event_registration;

        static int get_enum_value(const std::string & name) {
            if (name == "bgp-nh-event-crit-not-f") return 0;
            if (name == "bgp-nh-event-non-crit-not-f") return 1;
            if (name == "bgp-nh-event-registration") return 2;
            return -1;
        }
};

class BgpNhUpdate : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf bgp_nh_update_none;
        static const ydk::Enum::YLeaf bgp_nh_update_crit_not_f;
        static const ydk::Enum::YLeaf bgp_nh_update_crit_sync;
        static const ydk::Enum::YLeaf bgp_nh_update_crit_rib_conv;
        static const ydk::Enum::YLeaf bgp_nh_update_crit_table_down;
        static const ydk::Enum::YLeaf bgp_nh_update_non_crit_not_f;
        static const ydk::Enum::YLeaf bgp_nh_update_non_crit_sync;
        static const ydk::Enum::YLeaf bgp_nh_update_non_crit_rib_conv;
        static const ydk::Enum::YLeaf bgp_nh_update_non_crit_table_down;

        static int get_enum_value(const std::string & name) {
            if (name == "bgp-nh-update-none") return 0;
            if (name == "bgp-nh-update-crit-not-f") return 1;
            if (name == "bgp-nh-update-crit-sync") return 2;
            if (name == "bgp-nh-update-crit-rib-conv") return 3;
            if (name == "bgp-nh-update-crit-table-down") return 4;
            if (name == "bgp-nh-update-non-crit-not-f") return 5;
            if (name == "bgp-nh-update-non-crit-sync") return 6;
            if (name == "bgp-nh-update-non-crit-rib-conv") return 7;
            if (name == "bgp-nh-update-non-crit-table-down") return 8;
            return -1;
        }
};

class BgpRpkiPerror : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf none;
        static const ydk::Enum::YLeaf message_version;
        static const ydk::Enum::YLeaf message_type;
        static const ydk::Enum::YLeaf message_length;
        static const ydk::Enum::YLeaf nonce_mismatch;
        static const ydk::Enum::YLeaf bad_prefix;
        static const ydk::Enum::YLeaf fsm;
        static const ydk::Enum::YLeaf no_response;
        static const ydk::Enum::YLeaf error_report;

        static int get_enum_value(const std::string & name) {
            if (name == "none") return 0;
            if (name == "message-version") return 1;
            if (name == "message-type") return 2;
            if (name == "message-length") return 3;
            if (name == "nonce-mismatch") return 4;
            if (name == "bad-prefix") return 5;
            if (name == "fsm") return 6;
            if (name == "no-response") return 7;
            if (name == "error-report") return 8;
            return -1;
        }
};

class BgpBfdEnableMode : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf bgp_bfd_enable_mode_disable;
        static const ydk::Enum::YLeaf bgp_bfd_enable_mode_def;
        static const ydk::Enum::YLeaf bgp_bfd_enable_mode_strict;

        static int get_enum_value(const std::string & name) {
            if (name == "bgp-bfd-enable-mode-disable") return 0;
            if (name == "bgp-bfd-enable-mode-def") return 1;
            if (name == "bgp-bfd-enable-mode-strict") return 2;
            return -1;
        }
};

class BgpRnhAddrLen : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf none;
        static const ydk::Enum::YLeaf v4;
        static const ydk::Enum::YLeaf mac;
        static const ydk::Enum::YLeaf v6;

        static int get_enum_value(const std::string & name) {
            if (name == "none") return 0;
            if (name == "v4") return 4;
            if (name == "mac") return 6;
            if (name == "v6") return 16;
            return -1;
        }
};

class BgpTcpMode : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf bgp_tcp_mode_type_either;
        static const ydk::Enum::YLeaf bgp_tcp_mode_type_active_only;
        static const ydk::Enum::YLeaf bgp_tcp_mode_type_passive_only;

        static int get_enum_value(const std::string & name) {
            if (name == "bgp-tcp-mode-type-either") return 0;
            if (name == "bgp-tcp-mode-type-active-only") return 1;
            if (name == "bgp-tcp-mode-type-passive-only") return 2;
            return -1;
        }
};

class BgpBmpState : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf none;
        static const ydk::Enum::YLeaf connecting;
        static const ydk::Enum::YLeaf established;
        static const ydk::Enum::YLeaf closing;

        static int get_enum_value(const std::string & name) {
            if (name == "none") return 0;
            if (name == "connecting") return 1;
            if (name == "established") return 2;
            if (name == "closing") return 3;
            return -1;
        }
};

class BgpIsmConnState : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf none;
        static const ydk::Enum::YLeaf connect_done;

        static int get_enum_value(const std::string & name) {
            if (name == "none") return 0;
            if (name == "connect-done") return 1;
            return -1;
        }
};

class BgpOpenCheckErr : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf none;
        static const ydk::Enum::YLeaf neighbor_down;
        static const ydk::Enum::YLeaf no_update_group_set;
        static const ydk::Enum::YLeaf no_af_config;
        static const ydk::Enum::YLeaf update_group_pending;
        static const ydk::Enum::YLeaf low_memory;
        static const ydk::Enum::YLeaf neighbor_shutdown;
        static const ydk::Enum::YLeaf ebgp_neighbor_remote;
        static const ydk::Enum::YLeaf update_source_interface_null;
        static const ydk::Enum::YLeaf no_ipv6_address;
        static const ydk::Enum::YLeaf first_hop_interface_null;
        static const ydk::Enum::YLeaf no_ipv6ll_address;
        static const ydk::Enum::YLeaf no_update_source_config;
        static const ydk::Enum::YLeaf no_router_id;
        static const ydk::Enum::YLeaf update_source_interface_get_failed;
        static const ydk::Enum::YLeaf update_source_interface_state_get_failed;
        static const ydk::Enum::YLeaf update_source_interface_down;
        static const ydk::Enum::YLeaf update_source_interface_ll_get_failed;
        static const ydk::Enum::YLeaf update_source_interface_address_get_failed;
        static const ydk::Enum::YLeaf source_address_af_invalid;
        static const ydk::Enum::YLeaf no_update_source_ll_peering;
        static const ydk::Enum::YLeaf local_address_get_failed;
        static const ydk::Enum::YLeaf no_best_local_address;
        static const ydk::Enum::YLeaf neighbor_address_equals_local_address;
        static const ydk::Enum::YLeaf neighbor_closing;
        static const ydk::Enum::YLeaf neighbor_pending_reset;
        static const ydk::Enum::YLeaf out_interface_set_failed;
        static const ydk::Enum::YLeaf local_address_mismatch;
        static const ydk::Enum::YLeaf neighbor_active_only;
        static const ydk::Enum::YLeaf socket_init_failed;
        static const ydk::Enum::YLeaf socket_operation_failed;
        static const ydk::Enum::YLeaf local_neighbor;
        static const ydk::Enum::YLeaf multi_hop_neighbor;

        static int get_enum_value(const std::string & name) {
            if (name == "none") return 0;
            if (name == "neighbor-down") return 1;
            if (name == "no-update-group-set") return 2;
            if (name == "no-af-config") return 3;
            if (name == "update-group-pending") return 4;
            if (name == "low-memory") return 5;
            if (name == "neighbor-shutdown") return 6;
            if (name == "ebgp-neighbor-remote") return 7;
            if (name == "update-source-interface-null") return 8;
            if (name == "no-ipv6-address") return 9;
            if (name == "first-hop-interface-null") return 10;
            if (name == "no-ipv6ll-address") return 11;
            if (name == "no-update-source-config") return 12;
            if (name == "no-router-id") return 13;
            if (name == "update-source-interface-get-failed") return 14;
            if (name == "update-source-interface-state-get-failed") return 15;
            if (name == "update-source-interface-down") return 16;
            if (name == "update-source-interface-ll-get-failed") return 17;
            if (name == "update-source-interface-address-get-failed") return 18;
            if (name == "source-address-af-invalid") return 19;
            if (name == "no-update-source-ll-peering") return 20;
            if (name == "local-address-get-failed") return 21;
            if (name == "no-best-local-address") return 22;
            if (name == "neighbor-address-equals-local-address") return 23;
            if (name == "neighbor-closing") return 24;
            if (name == "neighbor-pending-reset") return 25;
            if (name == "out-interface-set-failed") return 26;
            if (name == "local-address-mismatch") return 27;
            if (name == "neighbor-active-only") return 28;
            if (name == "socket-init-failed") return 29;
            if (name == "socket-operation-failed") return 30;
            if (name == "local-neighbor") return 31;
            if (name == "multi-hop-neighbor") return 32;
            return -1;
        }
};

class BgpRoute : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf used;
        static const ydk::Enum::YLeaf received_only;
        static const ydk::Enum::YLeaf safi_labeled_unicast_used;
        static const ydk::Enum::YLeaf safi_labeled_unicast_received_only;
        static const ydk::Enum::YLeaf rib;
        static const ydk::Enum::YLeaf aggregate;

        static int get_enum_value(const std::string & name) {
            if (name == "used") return 0;
            if (name == "received-only") return 1;
            if (name == "safi-labeled-unicast-used") return 2;
            if (name == "safi-labeled-unicast-received-only") return 3;
            if (name == "rib") return 4;
            if (name == "aggregate") return 5;
            return -1;
        }
};

class BgpConnState : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf bgp_st_dont_care;
        static const ydk::Enum::YLeaf bgp_st_idle;
        static const ydk::Enum::YLeaf bgp_st_connect;
        static const ydk::Enum::YLeaf bgp_st_active;
        static const ydk::Enum::YLeaf bgp_st_open_sent;
        static const ydk::Enum::YLeaf bgp_st_open_confirm;
        static const ydk::Enum::YLeaf bgp_st_estab;
        static const ydk::Enum::YLeaf bgp_st_closing;
        static const ydk::Enum::YLeaf bgp_st_closing_sync;

        static int get_enum_value(const std::string & name) {
            if (name == "bgp-st-dont-care") return 0;
            if (name == "bgp-st-idle") return 1;
            if (name == "bgp-st-connect") return 2;
            if (name == "bgp-st-active") return 3;
            if (name == "bgp-st-open-sent") return 4;
            if (name == "bgp-st-open-confirm") return 5;
            if (name == "bgp-st-estab") return 6;
            if (name == "bgp-st-closing") return 7;
            if (name == "bgp-st-closing-sync") return 8;
            return -1;
        }
};

class SrSid : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf label;
        static const ydk::Enum::YLeaf ipv4;
        static const ydk::Enum::YLeaf ipv6;

        static int get_enum_value(const std::string & name) {
            if (name == "label") return 1;
            if (name == "ipv4") return 2;
            if (name == "ipv6") return 3;
            return -1;
        }
};

class BgpEntity : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf af_group;
        static const ydk::Enum::YLeaf session_group;
        static const ydk::Enum::YLeaf neighbor_group;
        static const ydk::Enum::YLeaf neighbor;

        static int get_enum_value(const std::string & name) {
            if (name == "af-group") return 0;
            if (name == "session-group") return 1;
            if (name == "neighbor-group") return 2;
            if (name == "neighbor") return 3;
            return -1;
        }
};

class BgpTunnel : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf tunnel_none;
        static const ydk::Enum::YLeaf attrset;
        static const ydk::Enum::YLeaf sr_policy;
        static const ydk::Enum::YLeaf odn_policy;

        static int get_enum_value(const std::string & name) {
            if (name == "tunnel-none") return 0;
            if (name == "attrset") return 1;
            if (name == "sr-policy") return 2;
            if (name == "odn-policy") return 4;
            return -1;
        }
};

class BgpRpkiCreason : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf no_close_reason;
        static const ydk::Enum::YLeaf read_error;
        static const ydk::Enum::YLeaf write_error;
        static const ydk::Enum::YLeaf proto_error;
        static const ydk::Enum::YLeaf config_shutdown;
        static const ydk::Enum::YLeaf config_removed;
        static const ydk::Enum::YLeaf config_changed;
        static const ydk::Enum::YLeaf nsr_disabled;
        static const ydk::Enum::YLeaf user_clear;
        static const ydk::Enum::YLeaf ssh_died;
        static const ydk::Enum::YLeaf tcp_died;

        static int get_enum_value(const std::string & name) {
            if (name == "no-close-reason") return 0;
            if (name == "read-error") return 1;
            if (name == "write-error") return 2;
            if (name == "proto-error") return 3;
            if (name == "config-shutdown") return 4;
            if (name == "config-removed") return 5;
            if (name == "config-changed") return 6;
            if (name == "nsr-disabled") return 7;
            if (name == "user-clear") return 8;
            if (name == "ssh-died") return 9;
            if (name == "tcp-died") return 10;
            return -1;
        }
};

class BgpV4V6Len : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf gwnone;
        static const ydk::Enum::YLeaf gwipv4;
        static const ydk::Enum::YLeaf gwipv6;

        static int get_enum_value(const std::string & name) {
            if (name == "gwnone") return 0;
            if (name == "gwipv4") return 4;
            if (name == "gwipv6") return 16;
            return -1;
        }
};

class BgpSyncNbrNsrState : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf bgp_nbr_nsr_st_none;
        static const ydk::Enum::YLeaf bgp_nbr_nsr_st_oper_down;
        static const ydk::Enum::YLeaf bgp_nbr_nsr_st_tcp_init_sync;
        static const ydk::Enum::YLeaf bgp_nbr_nsr_st_tcp_phase_two;
        static const ydk::Enum::YLeaf bgp_nbr_nsr_st_bgp_init_sync;
        static const ydk::Enum::YLeaf bgp_nbr_nsr_st_nsr_ready;

        static int get_enum_value(const std::string & name) {
            if (name == "bgp-nbr-nsr-st-none") return 0;
            if (name == "bgp-nbr-nsr-st-oper-down") return 1;
            if (name == "bgp-nbr-nsr-st-tcp-init-sync") return 2;
            if (name == "bgp-nbr-nsr-st-tcp-phase-two") return 3;
            if (name == "bgp-nbr-nsr-st-bgp-init-sync") return 4;
            if (name == "bgp-nbr-nsr-st-nsr-ready") return 5;
            return -1;
        }
};

class BgpPrefixSid : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf prefix_sid_label_index;
        static const ydk::Enum::YLeaf prefix_sid_ipv6_sid;
        static const ydk::Enum::YLeaf prefix_sid_origin_at_or_srgb;
        static const ydk::Enum::YLeaf prefix_sid_srv6;

        static int get_enum_value(const std::string & name) {
            if (name == "prefix-sid-label-index") return 1;
            if (name == "prefix-sid-ipv6-sid") return 2;
            if (name == "prefix-sid-origin-at-or-srgb") return 3;
            if (name == "prefix-sid-srv6") return 4;
            return -1;
        }
};

class BgpAfi : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf ipv4;
        static const ydk::Enum::YLeaf ipv4_multicast;
        static const ydk::Enum::YLeaf ipv4_labeled;
        static const ydk::Enum::YLeaf ipv4_tunnel;
        static const ydk::Enum::YLeaf vpnv4;
        static const ydk::Enum::YLeaf ipv6;
        static const ydk::Enum::YLeaf ipv6_multicast;
        static const ydk::Enum::YLeaf ipv6_labeled;
        static const ydk::Enum::YLeaf vpnv6;
        static const ydk::Enum::YLeaf ipv4_mdt;
        static const ydk::Enum::YLeaf l2vpn_vpls;
        static const ydk::Enum::YLeaf rt_constraint;
        static const ydk::Enum::YLeaf ipv4_mvpn;
        static const ydk::Enum::YLeaf ipv6_mvpn;
        static const ydk::Enum::YLeaf l2vpn_evpn;
        static const ydk::Enum::YLeaf ls_ls;
        static const ydk::Enum::YLeaf vpnv4_multicast;
        static const ydk::Enum::YLeaf vpnv6_multicast;
        static const ydk::Enum::YLeaf ipv4_flowspec;
        static const ydk::Enum::YLeaf ipv6_flowspec;
        static const ydk::Enum::YLeaf vpnv4_flowspec;
        static const ydk::Enum::YLeaf vpnv6_flowspec;
        static const ydk::Enum::YLeaf l2vpn_mspw;
        static const ydk::Enum::YLeaf ipv4_sr_policy;
        static const ydk::Enum::YLeaf ipv6_sr_policy;
        static const ydk::Enum::YLeaf no_address_family;
        static const ydk::Enum::YLeaf all_address_families;

        static int get_enum_value(const std::string & name) {
            if (name == "ipv4") return 0;
            if (name == "ipv4-multicast") return 1;
            if (name == "ipv4-labeled") return 2;
            if (name == "ipv4-tunnel") return 3;
            if (name == "vpnv4") return 4;
            if (name == "ipv6") return 5;
            if (name == "ipv6-multicast") return 6;
            if (name == "ipv6-labeled") return 7;
            if (name == "vpnv6") return 8;
            if (name == "ipv4-mdt") return 9;
            if (name == "l2vpn-vpls") return 10;
            if (name == "rt-constraint") return 11;
            if (name == "ipv4-mvpn") return 12;
            if (name == "ipv6-mvpn") return 13;
            if (name == "l2vpn-evpn") return 14;
            if (name == "ls-ls") return 15;
            if (name == "vpnv4-multicast") return 16;
            if (name == "vpnv6-multicast") return 17;
            if (name == "ipv4-flowspec") return 18;
            if (name == "ipv6-flowspec") return 19;
            if (name == "vpnv4-flowspec") return 20;
            if (name == "vpnv6-flowspec") return 21;
            if (name == "l2vpn-mspw") return 22;
            if (name == "ipv4-sr-policy") return 23;
            if (name == "ipv6-sr-policy") return 24;
            if (name == "no-address-family") return 25;
            if (name == "all-address-families") return 26;
            return -1;
        }
};

class BgpBindingSid : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf none;
        static const ydk::Enum::YLeaf label;
        static const ydk::Enum::YLeaf v6;

        static int get_enum_value(const std::string & name) {
            if (name == "none") return 0;
            if (name == "label") return 1;
            if (name == "v6") return 2;
            return -1;
        }
};

class BgpRpkiAf : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf ipv4;
        static const ydk::Enum::YLeaf ipv6;

        static int get_enum_value(const std::string & name) {
            if (name == "ipv4") return 2;
            if (name == "ipv6") return 26;
            return -1;
        }
};

class BgpResetReasonIndex : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf bgp_none;
        static const ydk::Enum::YLeaf bgp_init;
        static const ydk::Enum::YLeaf bgp_no_memory;
        static const ydk::Enum::YLeaf not_received;
        static const ydk::Enum::YLeaf not_sent;
        static const ydk::Enum::YLeaf conn_collision;
        static const ydk::Enum::YLeaf peer_closed;
        static const ydk::Enum::YLeaf max_prefix_exceeded;
        static const ydk::Enum::YLeaf interface_flap;
        static const ydk::Enum::YLeaf neighbor_deleted;
        static const ydk::Enum::YLeaf admin_shutdown;
        static const ydk::Enum::YLeaf af_activated;
        static const ydk::Enum::YLeaf af_deactivated;
        static const ydk::Enum::YLeaf protocol_error;
        static const ydk::Enum::YLeaf listen_closed;
        static const ydk::Enum::YLeaf rib_failed;
        static const ydk::Enum::YLeaf user_clear;
        static const ydk::Enum::YLeaf user_clear_gr;
        static const ydk::Enum::YLeaf router_id_changed;
        static const ydk::Enum::YLeaf remote_as_changed;
        static const ydk::Enum::YLeaf orf_changed;
        static const ydk::Enum::YLeaf rr_client_changed;
        static const ydk::Enum::YLeaf legacy_pe_rt_changed;
        static const ydk::Enum::YLeaf softre_config_changed;
        static const ydk::Enum::YLeaf local_as_changed;
        static const ydk::Enum::YLeaf low_memory;
        static const ydk::Enum::YLeaf bfd_down;
        static const ydk::Enum::YLeaf allow_as_in_changed;
        static const ydk::Enum::YLeaf recv_dmz_cfg;
        static const ydk::Enum::YLeaf cap_4byteas_changed;
        static const ydk::Enum::YLeaf tcp_oper_down;
        static const ydk::Enum::YLeaf scoped_sync_retry;
        static const ydk::Enum::YLeaf cluster_id_changed;
        static const ydk::Enum::YLeaf rr_disable_changed;
        static const ydk::Enum::YLeaf aigp_changed;
        static const ydk::Enum::YLeaf signalling_changed;
        static const ydk::Enum::YLeaf open_check_s_failed;
        static const ydk::Enum::YLeaf ao_changed;
        static const ydk::Enum::YLeaf llgr_staletime_changed;
        static const ydk::Enum::YLeaf llgr_capable_changed;
        static const ydk::Enum::YLeaf nbr_local_addr_changed;
        static const ydk::Enum::YLeaf internal_vpn_client_changed;
        static const ydk::Enum::YLeaf cap_suppress_all_changed;
        static const ydk::Enum::YLeaf next_hop_changed;

        static int get_enum_value(const std::string & name) {
            if (name == "bgp-none") return 0;
            if (name == "bgp-init") return 1;
            if (name == "bgp-no-memory") return 2;
            if (name == "not-received") return 3;
            if (name == "not-sent") return 4;
            if (name == "conn-collision") return 5;
            if (name == "peer-closed") return 6;
            if (name == "max-prefix-exceeded") return 7;
            if (name == "interface-flap") return 8;
            if (name == "neighbor-deleted") return 9;
            if (name == "admin-shutdown") return 10;
            if (name == "af-activated") return 11;
            if (name == "af-deactivated") return 12;
            if (name == "protocol-error") return 13;
            if (name == "listen-closed") return 14;
            if (name == "rib-failed") return 15;
            if (name == "user-clear") return 16;
            if (name == "user-clear-gr") return 17;
            if (name == "router-id-changed") return 18;
            if (name == "remote-as-changed") return 19;
            if (name == "orf-changed") return 20;
            if (name == "rr-client-changed") return 21;
            if (name == "legacy-pe-rt-changed") return 22;
            if (name == "softre-config-changed") return 23;
            if (name == "local-as-changed") return 24;
            if (name == "low-memory") return 25;
            if (name == "bfd-down") return 26;
            if (name == "allow-as-in-changed") return 27;
            if (name == "recv-dmz-cfg") return 28;
            if (name == "cap-4byteas-changed") return 29;
            if (name == "tcp-oper-down") return 30;
            if (name == "scoped-sync-retry") return 31;
            if (name == "cluster-id-changed") return 32;
            if (name == "rr-disable-changed") return 33;
            if (name == "aigp-changed") return 34;
            if (name == "signalling-changed") return 35;
            if (name == "open-check-s-failed") return 36;
            if (name == "ao-changed") return 37;
            if (name == "llgr-staletime-changed") return 38;
            if (name == "llgr-capable-changed") return 39;
            if (name == "nbr-local-addr-changed") return 40;
            if (name == "internal-vpn-client-changed") return 41;
            if (name == "cap-suppress-all-changed") return 42;
            if (name == "next-hop-changed") return 43;
            return -1;
        }
};

class BgpRtrState : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf bgp_router_read_only;
        static const ydk::Enum::YLeaf bgp_router_do_best_path;
        static const ydk::Enum::YLeaf bgp_router_do_tunnel_update;
        static const ydk::Enum::YLeaf bgp_router_do_import;
        static const ydk::Enum::YLeaf bgp_router_do_label_alloc;
        static const ydk::Enum::YLeaf bgp_router_do_ribupd;
        static const ydk::Enum::YLeaf bgp_router_read_write;
        static const ydk::Enum::YLeaf bgp_router_mode_count;

        static int get_enum_value(const std::string & name) {
            if (name == "bgp-router-read-only") return 0;
            if (name == "bgp-router-do-best-path") return 1;
            if (name == "bgp-router-do-tunnel-update") return 2;
            if (name == "bgp-router-do-import") return 3;
            if (name == "bgp-router-do-label-alloc") return 4;
            if (name == "bgp-router-do-ribupd") return 5;
            if (name == "bgp-router-read-write") return 6;
            if (name == "bgp-router-mode-count") return 7;
            return -1;
        }
};

class BgpLabelRpfInstall : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf bgp_label_rpf_install_rib;
        static const ydk::Enum::YLeaf bgp_label_rpf_install_lsd;

        static int get_enum_value(const std::string & name) {
            if (name == "bgp-label-rpf-install-rib") return 0;
            if (name == "bgp-label-rpf-install-lsd") return 1;
            return -1;
        }
};

class BgpBmpUpdMode : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf bgp_bmp_upd_n_either;
        static const ydk::Enum::YLeaf bgp_bmp_upd_route_mon;
        static const ydk::Enum::YLeaf bgp_bmp_upd_route_mirr;

        static int get_enum_value(const std::string & name) {
            if (name == "bgp-bmp-upd-n-either") return 0;
            if (name == "bgp-bmp-upd-route-mon") return 1;
            if (name == "bgp-bmp-upd-route-mirr") return 2;
            return -1;
        }
};


}
}

#endif /* _CISCO_IOS_XR_IPV4_BGP_OPER_0_ */


#ifndef _CISCO_IOS_XR_IP_RIB_IPV4_OPER_3_
#define _CISCO_IOS_XR_IP_RIB_IPV4_OPER_3_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>

#include "Cisco_IOS_XR_ip_rib_ipv4_oper_1.hpp"
#include "Cisco_IOS_XR_ip_rib_ipv4_oper_2.hpp"

namespace cisco_ios_xr {
namespace Cisco_IOS_XR_ip_rib_ipv4_oper {


class Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Local::Smiap::ProtocolRoutes::ProtocolRoute::RoutePath : public ydk::Entity
{
    public:
        RoutePath();
        ~RoutePath();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Ipv4RibEdmPath; //type: Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Local::Smiap::ProtocolRoutes::ProtocolRoute::RoutePath::Ipv4RibEdmPath

        ydk::YList ipv4_rib_edm_path;
        
}; // Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Local::Smiap::ProtocolRoutes::ProtocolRoute::RoutePath


class Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Local::Smiap::ProtocolRoutes::ProtocolRoute::RoutePath::Ipv4RibEdmPath : public ydk::Entity
{
    public:
        Ipv4RibEdmPath();
        ~Ipv4RibEdmPath();

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
        ydk::YLeaf information_source; //type: string
        ydk::YLeaf v6_nexthop; //type: string
        ydk::YLeaf v6_information_source; //type: string
        ydk::YLeaf interface_name; //type: string
        ydk::YLeaf metric; //type: uint32
        ydk::YLeaf load_metric; //type: uint32
        ydk::YLeaf flags64; //type: uint64
        ydk::YLeaf flags; //type: uint16
        ydk::YLeaf private_flags; //type: uint16
        ydk::YLeaf looped; //type: boolean
        ydk::YLeaf next_hop_table_id; //type: uint32
        ydk::YLeaf next_hop_vrf_name; //type: string
        ydk::YLeaf next_hop_table_name; //type: string
        ydk::YLeaf next_hop_afi; //type: uint32
        ydk::YLeaf next_hop_safi; //type: uint32
        ydk::YLeaf route_label; //type: uint32
        ydk::YLeaf tunnel_id; //type: uint32
        ydk::YLeaf pathid; //type: uint32
        ydk::YLeaf backup_pathid; //type: uint32
        ydk::YLeaf ref_cnt_of_backup; //type: uint32
        ydk::YLeaf number_of_extended_communities; //type: uint32
        ydk::YLeaf mvpn_present; //type: boolean
        ydk::YLeaf path_rt_present; //type: boolean
        ydk::YLeaf vrf_import_rt_present; //type: boolean
        ydk::YLeaf source_asrt_present; //type: boolean
        ydk::YLeaf source_rd_present; //type: boolean
        ydk::YLeaf segmented_nexthop_present; //type: boolean
        ydk::YLeaf number_of_nnh; //type: uint32
        ydk::YLeaf next_hop_id; //type: uint32
        ydk::YLeaf next_hop_id_refcount; //type: uint32
        ydk::YLeaf ospf_area_id; //type: string
        ydk::YLeaf has_labelstk; //type: boolean
        ydk::YLeaf num_labels; //type: uint8
        ydk::YLeaf binding_label; //type: uint32
        ydk::YLeaf nhid_feid; //type: uint64
        ydk::YLeaf mpls_feid; //type: uint64
        ydk::YLeaf has_vxlan_network_id; //type: boolean
        ydk::YLeaf vxlan_network_id; //type: uint32
        ydk::YLeaf has_xcid; //type: boolean
        ydk::YLeaf xcid; //type: uint32
        ydk::YLeaf has_span_diag_interface; //type: boolean
        ydk::YLeaf span_diag_interface; //type: string
        ydk::YLeaf has_subscriber_parent_interface; //type: boolean
        ydk::YLeaf subscriber_parent_interface; //type: string
        ydk::YLeaf interface_index_present; //type: boolean
        ydk::YLeaf interface_index_attribute; //type: uint32
        class RemoteBackupAddr; //type: Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Local::Smiap::ProtocolRoutes::ProtocolRoute::RoutePath::Ipv4RibEdmPath::RemoteBackupAddr
        class Labelstk; //type: Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Local::Smiap::ProtocolRoutes::ProtocolRoute::RoutePath::Ipv4RibEdmPath::Labelstk
        class NextNextHop; //type: Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Local::Smiap::ProtocolRoutes::ProtocolRoute::RoutePath::Ipv4RibEdmPath::NextNextHop

        ydk::YList remote_backup_addr;
        ydk::YList labelstk;
        ydk::YList next_next_hop;
        
}; // Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Local::Smiap::ProtocolRoutes::ProtocolRoute::RoutePath::Ipv4RibEdmPath


class Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Local::Smiap::ProtocolRoutes::ProtocolRoute::RoutePath::Ipv4RibEdmPath::RemoteBackupAddr : public ydk::Entity
{
    public:
        RemoteBackupAddr();
        ~RemoteBackupAddr();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf entry; //type: string

}; // Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Local::Smiap::ProtocolRoutes::ProtocolRoute::RoutePath::Ipv4RibEdmPath::RemoteBackupAddr


class Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Local::Smiap::ProtocolRoutes::ProtocolRoute::RoutePath::Ipv4RibEdmPath::Labelstk : public ydk::Entity
{
    public:
        Labelstk();
        ~Labelstk();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf entry; //type: uint32

}; // Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Local::Smiap::ProtocolRoutes::ProtocolRoute::RoutePath::Ipv4RibEdmPath::Labelstk


class Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Local::Smiap::ProtocolRoutes::ProtocolRoute::RoutePath::Ipv4RibEdmPath::NextNextHop : public ydk::Entity
{
    public:
        NextNextHop();
        ~NextNextHop();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf type; //type: RibEdmNnh
        ydk::YLeaf unknownval; //type: uint32
        ydk::YLeaf address; //type: string
        ydk::YLeaf interface_index; //type: uint32

}; // Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Local::Smiap::ProtocolRoutes::ProtocolRoute::RoutePath::Ipv4RibEdmPath::NextNextHop


class Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Local::Smiap::Information : public ydk::Entity
{
    public:
        Information();
        ~Information();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf protocol_names; //type: string
        ydk::YLeaf instance; //type: string
        ydk::YLeaf version; //type: uint32
        ydk::YLeaf redistribution_client_count; //type: uint32
        ydk::YLeaf protocol_clients_count; //type: uint32
        ydk::YLeaf routes_counts; //type: uint32
        ydk::YLeaf active_routes_count; //type: uint32
        ydk::YLeaf deleted_routes_count; //type: uint32
        ydk::YLeaf paths_count; //type: uint32
        ydk::YLeaf protocol_route_memory; //type: uint32
        ydk::YLeaf backup_routes_count; //type: uint32

}; // Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Local::Smiap::Information


class Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Local::Lspv : public ydk::Entity
{
    public:
        Lspv();
        ~Lspv();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class ProtocolRoutes; //type: Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Local::Lspv::ProtocolRoutes
        class Information; //type: Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Local::Lspv::Information

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_rib_ipv4_oper::Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Local::Lspv::ProtocolRoutes> protocol_routes;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_rib_ipv4_oper::Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Local::Lspv::Information> information;
        
}; // Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Local::Lspv


class Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Local::Lspv::ProtocolRoutes : public ydk::Entity
{
    public:
        ProtocolRoutes();
        ~ProtocolRoutes();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class ProtocolRoute; //type: Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Local::Lspv::ProtocolRoutes::ProtocolRoute

        ydk::YList protocol_route;
        
}; // Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Local::Lspv::ProtocolRoutes


class Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Local::Lspv::ProtocolRoutes::ProtocolRoute : public ydk::Entity
{
    public:
        ProtocolRoute();
        ~ProtocolRoute();

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
        ydk::YLeaf prefix_length; //type: uint8
        ydk::YLeaf prefix; //type: string
        ydk::YLeaf prefix_length_xr; //type: uint8
        ydk::YLeaf route_version; //type: uint32
        ydk::YLeaf protocol_id; //type: uint32
        ydk::YLeaf protocol_name; //type: string
        ydk::YLeaf instance; //type: string
        ydk::YLeaf client_id; //type: uint32
        ydk::YLeaf route_type; //type: uint16
        ydk::YLeaf priority; //type: uint8
        ydk::YLeaf svd_type; //type: uint8
        ydk::YLeaf flags; //type: uint32
        ydk::YLeaf extended_flags; //type: uint64
        ydk::YLeaf tag; //type: uint32
        ydk::YLeaf distance; //type: uint32
        ydk::YLeaf diversion_distance; //type: uint32
        ydk::YLeaf metric; //type: uint32
        ydk::YLeaf paths_count; //type: uint32
        ydk::YLeaf attribute_identity; //type: uint32
        ydk::YLeaf traffic_index; //type: uint8
        ydk::YLeaf route_precedence; //type: uint8
        ydk::YLeaf qos_group; //type: uint8
        ydk::YLeaf flow_tag; //type: uint8
        ydk::YLeaf fwd_class; //type: uint8
        ydk::YLeaf pic_count; //type: uint8
        ydk::YLeaf active; //type: boolean
        ydk::YLeaf diversion; //type: boolean
        ydk::YLeaf diversion_proto_name; //type: string
        ydk::YLeaf route_age; //type: uint32
        ydk::YLeaf route_label; //type: uint32
        ydk::YLeaf version; //type: uint32
        ydk::YLeaf tbl_version; //type: uint64
        ydk::YLeaf route_modify_time; //type: uint64
        class RoutePath; //type: Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Local::Lspv::ProtocolRoutes::ProtocolRoute::RoutePath

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_rib_ipv4_oper::Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Local::Lspv::ProtocolRoutes::ProtocolRoute::RoutePath> route_path;
        
}; // Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Local::Lspv::ProtocolRoutes::ProtocolRoute


class Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Local::Lspv::ProtocolRoutes::ProtocolRoute::RoutePath : public ydk::Entity
{
    public:
        RoutePath();
        ~RoutePath();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Ipv4RibEdmPath; //type: Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Local::Lspv::ProtocolRoutes::ProtocolRoute::RoutePath::Ipv4RibEdmPath

        ydk::YList ipv4_rib_edm_path;
        
}; // Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Local::Lspv::ProtocolRoutes::ProtocolRoute::RoutePath


class Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Local::Lspv::ProtocolRoutes::ProtocolRoute::RoutePath::Ipv4RibEdmPath : public ydk::Entity
{
    public:
        Ipv4RibEdmPath();
        ~Ipv4RibEdmPath();

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
        ydk::YLeaf information_source; //type: string
        ydk::YLeaf v6_nexthop; //type: string
        ydk::YLeaf v6_information_source; //type: string
        ydk::YLeaf interface_name; //type: string
        ydk::YLeaf metric; //type: uint32
        ydk::YLeaf load_metric; //type: uint32
        ydk::YLeaf flags64; //type: uint64
        ydk::YLeaf flags; //type: uint16
        ydk::YLeaf private_flags; //type: uint16
        ydk::YLeaf looped; //type: boolean
        ydk::YLeaf next_hop_table_id; //type: uint32
        ydk::YLeaf next_hop_vrf_name; //type: string
        ydk::YLeaf next_hop_table_name; //type: string
        ydk::YLeaf next_hop_afi; //type: uint32
        ydk::YLeaf next_hop_safi; //type: uint32
        ydk::YLeaf route_label; //type: uint32
        ydk::YLeaf tunnel_id; //type: uint32
        ydk::YLeaf pathid; //type: uint32
        ydk::YLeaf backup_pathid; //type: uint32
        ydk::YLeaf ref_cnt_of_backup; //type: uint32
        ydk::YLeaf number_of_extended_communities; //type: uint32
        ydk::YLeaf mvpn_present; //type: boolean
        ydk::YLeaf path_rt_present; //type: boolean
        ydk::YLeaf vrf_import_rt_present; //type: boolean
        ydk::YLeaf source_asrt_present; //type: boolean
        ydk::YLeaf source_rd_present; //type: boolean
        ydk::YLeaf segmented_nexthop_present; //type: boolean
        ydk::YLeaf number_of_nnh; //type: uint32
        ydk::YLeaf next_hop_id; //type: uint32
        ydk::YLeaf next_hop_id_refcount; //type: uint32
        ydk::YLeaf ospf_area_id; //type: string
        ydk::YLeaf has_labelstk; //type: boolean
        ydk::YLeaf num_labels; //type: uint8
        ydk::YLeaf binding_label; //type: uint32
        ydk::YLeaf nhid_feid; //type: uint64
        ydk::YLeaf mpls_feid; //type: uint64
        ydk::YLeaf has_vxlan_network_id; //type: boolean
        ydk::YLeaf vxlan_network_id; //type: uint32
        ydk::YLeaf has_xcid; //type: boolean
        ydk::YLeaf xcid; //type: uint32
        ydk::YLeaf has_span_diag_interface; //type: boolean
        ydk::YLeaf span_diag_interface; //type: string
        ydk::YLeaf has_subscriber_parent_interface; //type: boolean
        ydk::YLeaf subscriber_parent_interface; //type: string
        ydk::YLeaf interface_index_present; //type: boolean
        ydk::YLeaf interface_index_attribute; //type: uint32
        class RemoteBackupAddr; //type: Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Local::Lspv::ProtocolRoutes::ProtocolRoute::RoutePath::Ipv4RibEdmPath::RemoteBackupAddr
        class Labelstk; //type: Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Local::Lspv::ProtocolRoutes::ProtocolRoute::RoutePath::Ipv4RibEdmPath::Labelstk
        class NextNextHop; //type: Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Local::Lspv::ProtocolRoutes::ProtocolRoute::RoutePath::Ipv4RibEdmPath::NextNextHop

        ydk::YList remote_backup_addr;
        ydk::YList labelstk;
        ydk::YList next_next_hop;
        
}; // Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Local::Lspv::ProtocolRoutes::ProtocolRoute::RoutePath::Ipv4RibEdmPath


class Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Local::Lspv::ProtocolRoutes::ProtocolRoute::RoutePath::Ipv4RibEdmPath::RemoteBackupAddr : public ydk::Entity
{
    public:
        RemoteBackupAddr();
        ~RemoteBackupAddr();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf entry; //type: string

}; // Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Local::Lspv::ProtocolRoutes::ProtocolRoute::RoutePath::Ipv4RibEdmPath::RemoteBackupAddr


class Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Local::Lspv::ProtocolRoutes::ProtocolRoute::RoutePath::Ipv4RibEdmPath::Labelstk : public ydk::Entity
{
    public:
        Labelstk();
        ~Labelstk();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf entry; //type: uint32

}; // Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Local::Lspv::ProtocolRoutes::ProtocolRoute::RoutePath::Ipv4RibEdmPath::Labelstk


class Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Local::Lspv::ProtocolRoutes::ProtocolRoute::RoutePath::Ipv4RibEdmPath::NextNextHop : public ydk::Entity
{
    public:
        NextNextHop();
        ~NextNextHop();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf type; //type: RibEdmNnh
        ydk::YLeaf unknownval; //type: uint32
        ydk::YLeaf address; //type: string
        ydk::YLeaf interface_index; //type: uint32

}; // Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Local::Lspv::ProtocolRoutes::ProtocolRoute::RoutePath::Ipv4RibEdmPath::NextNextHop


class Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Local::Lspv::Information : public ydk::Entity
{
    public:
        Information();
        ~Information();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf protocol_names; //type: string
        ydk::YLeaf instance; //type: string
        ydk::YLeaf version; //type: uint32
        ydk::YLeaf redistribution_client_count; //type: uint32
        ydk::YLeaf protocol_clients_count; //type: uint32
        ydk::YLeaf routes_counts; //type: uint32
        ydk::YLeaf active_routes_count; //type: uint32
        ydk::YLeaf deleted_routes_count; //type: uint32
        ydk::YLeaf paths_count; //type: uint32
        ydk::YLeaf protocol_route_memory; //type: uint32
        ydk::YLeaf backup_routes_count; //type: uint32

}; // Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Local::Lspv::Information


class Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Local::NonAs : public ydk::Entity
{
    public:
        NonAs();
        ~NonAs();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class ProtocolRoutes; //type: Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Local::NonAs::ProtocolRoutes
        class Information; //type: Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Local::NonAs::Information

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_rib_ipv4_oper::Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Local::NonAs::ProtocolRoutes> protocol_routes;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_rib_ipv4_oper::Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Local::NonAs::Information> information;
        
}; // Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Local::NonAs


class Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Local::NonAs::ProtocolRoutes : public ydk::Entity
{
    public:
        ProtocolRoutes();
        ~ProtocolRoutes();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class ProtocolRoute; //type: Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Local::NonAs::ProtocolRoutes::ProtocolRoute

        ydk::YList protocol_route;
        
}; // Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Local::NonAs::ProtocolRoutes


class Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Local::NonAs::ProtocolRoutes::ProtocolRoute : public ydk::Entity
{
    public:
        ProtocolRoute();
        ~ProtocolRoute();

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
        ydk::YLeaf prefix_length; //type: uint8
        ydk::YLeaf prefix; //type: string
        ydk::YLeaf prefix_length_xr; //type: uint8
        ydk::YLeaf route_version; //type: uint32
        ydk::YLeaf protocol_id; //type: uint32
        ydk::YLeaf protocol_name; //type: string
        ydk::YLeaf instance; //type: string
        ydk::YLeaf client_id; //type: uint32
        ydk::YLeaf route_type; //type: uint16
        ydk::YLeaf priority; //type: uint8
        ydk::YLeaf svd_type; //type: uint8
        ydk::YLeaf flags; //type: uint32
        ydk::YLeaf extended_flags; //type: uint64
        ydk::YLeaf tag; //type: uint32
        ydk::YLeaf distance; //type: uint32
        ydk::YLeaf diversion_distance; //type: uint32
        ydk::YLeaf metric; //type: uint32
        ydk::YLeaf paths_count; //type: uint32
        ydk::YLeaf attribute_identity; //type: uint32
        ydk::YLeaf traffic_index; //type: uint8
        ydk::YLeaf route_precedence; //type: uint8
        ydk::YLeaf qos_group; //type: uint8
        ydk::YLeaf flow_tag; //type: uint8
        ydk::YLeaf fwd_class; //type: uint8
        ydk::YLeaf pic_count; //type: uint8
        ydk::YLeaf active; //type: boolean
        ydk::YLeaf diversion; //type: boolean
        ydk::YLeaf diversion_proto_name; //type: string
        ydk::YLeaf route_age; //type: uint32
        ydk::YLeaf route_label; //type: uint32
        ydk::YLeaf version; //type: uint32
        ydk::YLeaf tbl_version; //type: uint64
        ydk::YLeaf route_modify_time; //type: uint64
        class RoutePath; //type: Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Local::NonAs::ProtocolRoutes::ProtocolRoute::RoutePath

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_rib_ipv4_oper::Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Local::NonAs::ProtocolRoutes::ProtocolRoute::RoutePath> route_path;
        
}; // Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Local::NonAs::ProtocolRoutes::ProtocolRoute


class Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Local::NonAs::ProtocolRoutes::ProtocolRoute::RoutePath : public ydk::Entity
{
    public:
        RoutePath();
        ~RoutePath();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Ipv4RibEdmPath; //type: Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Local::NonAs::ProtocolRoutes::ProtocolRoute::RoutePath::Ipv4RibEdmPath

        ydk::YList ipv4_rib_edm_path;
        
}; // Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Local::NonAs::ProtocolRoutes::ProtocolRoute::RoutePath


class Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Local::NonAs::ProtocolRoutes::ProtocolRoute::RoutePath::Ipv4RibEdmPath : public ydk::Entity
{
    public:
        Ipv4RibEdmPath();
        ~Ipv4RibEdmPath();

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
        ydk::YLeaf information_source; //type: string
        ydk::YLeaf v6_nexthop; //type: string
        ydk::YLeaf v6_information_source; //type: string
        ydk::YLeaf interface_name; //type: string
        ydk::YLeaf metric; //type: uint32
        ydk::YLeaf load_metric; //type: uint32
        ydk::YLeaf flags64; //type: uint64
        ydk::YLeaf flags; //type: uint16
        ydk::YLeaf private_flags; //type: uint16
        ydk::YLeaf looped; //type: boolean
        ydk::YLeaf next_hop_table_id; //type: uint32
        ydk::YLeaf next_hop_vrf_name; //type: string
        ydk::YLeaf next_hop_table_name; //type: string
        ydk::YLeaf next_hop_afi; //type: uint32
        ydk::YLeaf next_hop_safi; //type: uint32
        ydk::YLeaf route_label; //type: uint32
        ydk::YLeaf tunnel_id; //type: uint32
        ydk::YLeaf pathid; //type: uint32
        ydk::YLeaf backup_pathid; //type: uint32
        ydk::YLeaf ref_cnt_of_backup; //type: uint32
        ydk::YLeaf number_of_extended_communities; //type: uint32
        ydk::YLeaf mvpn_present; //type: boolean
        ydk::YLeaf path_rt_present; //type: boolean
        ydk::YLeaf vrf_import_rt_present; //type: boolean
        ydk::YLeaf source_asrt_present; //type: boolean
        ydk::YLeaf source_rd_present; //type: boolean
        ydk::YLeaf segmented_nexthop_present; //type: boolean
        ydk::YLeaf number_of_nnh; //type: uint32
        ydk::YLeaf next_hop_id; //type: uint32
        ydk::YLeaf next_hop_id_refcount; //type: uint32
        ydk::YLeaf ospf_area_id; //type: string
        ydk::YLeaf has_labelstk; //type: boolean
        ydk::YLeaf num_labels; //type: uint8
        ydk::YLeaf binding_label; //type: uint32
        ydk::YLeaf nhid_feid; //type: uint64
        ydk::YLeaf mpls_feid; //type: uint64
        ydk::YLeaf has_vxlan_network_id; //type: boolean
        ydk::YLeaf vxlan_network_id; //type: uint32
        ydk::YLeaf has_xcid; //type: boolean
        ydk::YLeaf xcid; //type: uint32
        ydk::YLeaf has_span_diag_interface; //type: boolean
        ydk::YLeaf span_diag_interface; //type: string
        ydk::YLeaf has_subscriber_parent_interface; //type: boolean
        ydk::YLeaf subscriber_parent_interface; //type: string
        ydk::YLeaf interface_index_present; //type: boolean
        ydk::YLeaf interface_index_attribute; //type: uint32
        class RemoteBackupAddr; //type: Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Local::NonAs::ProtocolRoutes::ProtocolRoute::RoutePath::Ipv4RibEdmPath::RemoteBackupAddr
        class Labelstk; //type: Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Local::NonAs::ProtocolRoutes::ProtocolRoute::RoutePath::Ipv4RibEdmPath::Labelstk
        class NextNextHop; //type: Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Local::NonAs::ProtocolRoutes::ProtocolRoute::RoutePath::Ipv4RibEdmPath::NextNextHop

        ydk::YList remote_backup_addr;
        ydk::YList labelstk;
        ydk::YList next_next_hop;
        
}; // Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Local::NonAs::ProtocolRoutes::ProtocolRoute::RoutePath::Ipv4RibEdmPath


class Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Local::NonAs::ProtocolRoutes::ProtocolRoute::RoutePath::Ipv4RibEdmPath::RemoteBackupAddr : public ydk::Entity
{
    public:
        RemoteBackupAddr();
        ~RemoteBackupAddr();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf entry; //type: string

}; // Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Local::NonAs::ProtocolRoutes::ProtocolRoute::RoutePath::Ipv4RibEdmPath::RemoteBackupAddr


class Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Local::NonAs::ProtocolRoutes::ProtocolRoute::RoutePath::Ipv4RibEdmPath::Labelstk : public ydk::Entity
{
    public:
        Labelstk();
        ~Labelstk();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf entry; //type: uint32

}; // Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Local::NonAs::ProtocolRoutes::ProtocolRoute::RoutePath::Ipv4RibEdmPath::Labelstk


class Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Local::NonAs::ProtocolRoutes::ProtocolRoute::RoutePath::Ipv4RibEdmPath::NextNextHop : public ydk::Entity
{
    public:
        NextNextHop();
        ~NextNextHop();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf type; //type: RibEdmNnh
        ydk::YLeaf unknownval; //type: uint32
        ydk::YLeaf address; //type: string
        ydk::YLeaf interface_index; //type: uint32

}; // Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Local::NonAs::ProtocolRoutes::ProtocolRoute::RoutePath::Ipv4RibEdmPath::NextNextHop


class Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Local::NonAs::Information : public ydk::Entity
{
    public:
        Information();
        ~Information();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf protocol_names; //type: string
        ydk::YLeaf instance; //type: string
        ydk::YLeaf version; //type: uint32
        ydk::YLeaf redistribution_client_count; //type: uint32
        ydk::YLeaf protocol_clients_count; //type: uint32
        ydk::YLeaf routes_counts; //type: uint32
        ydk::YLeaf active_routes_count; //type: uint32
        ydk::YLeaf deleted_routes_count; //type: uint32
        ydk::YLeaf paths_count; //type: uint32
        ydk::YLeaf protocol_route_memory; //type: uint32
        ydk::YLeaf backup_routes_count; //type: uint32

}; // Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Local::NonAs::Information


class Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Bgp : public ydk::Entity
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

        class As; //type: Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Bgp::As

        ydk::YList as;
        
}; // Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Bgp


class Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Bgp::As : public ydk::Entity
{
    public:
        As();
        ~As();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf as; //type: string
        class ProtocolRoutes; //type: Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Bgp::As::ProtocolRoutes
        class Information; //type: Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Bgp::As::Information

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_rib_ipv4_oper::Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Bgp::As::ProtocolRoutes> protocol_routes;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_rib_ipv4_oper::Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Bgp::As::Information> information;
        
}; // Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Bgp::As


class Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Bgp::As::ProtocolRoutes : public ydk::Entity
{
    public:
        ProtocolRoutes();
        ~ProtocolRoutes();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class ProtocolRoute; //type: Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Bgp::As::ProtocolRoutes::ProtocolRoute

        ydk::YList protocol_route;
        
}; // Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Bgp::As::ProtocolRoutes


class Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Bgp::As::ProtocolRoutes::ProtocolRoute : public ydk::Entity
{
    public:
        ProtocolRoute();
        ~ProtocolRoute();

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
        ydk::YLeaf prefix_length; //type: uint8
        ydk::YLeaf prefix; //type: string
        ydk::YLeaf prefix_length_xr; //type: uint8
        ydk::YLeaf route_version; //type: uint32
        ydk::YLeaf protocol_id; //type: uint32
        ydk::YLeaf protocol_name; //type: string
        ydk::YLeaf instance; //type: string
        ydk::YLeaf client_id; //type: uint32
        ydk::YLeaf route_type; //type: uint16
        ydk::YLeaf priority; //type: uint8
        ydk::YLeaf svd_type; //type: uint8
        ydk::YLeaf flags; //type: uint32
        ydk::YLeaf extended_flags; //type: uint64
        ydk::YLeaf tag; //type: uint32
        ydk::YLeaf distance; //type: uint32
        ydk::YLeaf diversion_distance; //type: uint32
        ydk::YLeaf metric; //type: uint32
        ydk::YLeaf paths_count; //type: uint32
        ydk::YLeaf attribute_identity; //type: uint32
        ydk::YLeaf traffic_index; //type: uint8
        ydk::YLeaf route_precedence; //type: uint8
        ydk::YLeaf qos_group; //type: uint8
        ydk::YLeaf flow_tag; //type: uint8
        ydk::YLeaf fwd_class; //type: uint8
        ydk::YLeaf pic_count; //type: uint8
        ydk::YLeaf active; //type: boolean
        ydk::YLeaf diversion; //type: boolean
        ydk::YLeaf diversion_proto_name; //type: string
        ydk::YLeaf route_age; //type: uint32
        ydk::YLeaf route_label; //type: uint32
        ydk::YLeaf version; //type: uint32
        ydk::YLeaf tbl_version; //type: uint64
        ydk::YLeaf route_modify_time; //type: uint64
        class RoutePath; //type: Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Bgp::As::ProtocolRoutes::ProtocolRoute::RoutePath

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_rib_ipv4_oper::Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Bgp::As::ProtocolRoutes::ProtocolRoute::RoutePath> route_path;
        
}; // Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Bgp::As::ProtocolRoutes::ProtocolRoute


class Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Bgp::As::ProtocolRoutes::ProtocolRoute::RoutePath : public ydk::Entity
{
    public:
        RoutePath();
        ~RoutePath();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Ipv4RibEdmPath; //type: Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Bgp::As::ProtocolRoutes::ProtocolRoute::RoutePath::Ipv4RibEdmPath

        ydk::YList ipv4_rib_edm_path;
        
}; // Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Bgp::As::ProtocolRoutes::ProtocolRoute::RoutePath


class Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Bgp::As::ProtocolRoutes::ProtocolRoute::RoutePath::Ipv4RibEdmPath : public ydk::Entity
{
    public:
        Ipv4RibEdmPath();
        ~Ipv4RibEdmPath();

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
        ydk::YLeaf information_source; //type: string
        ydk::YLeaf v6_nexthop; //type: string
        ydk::YLeaf v6_information_source; //type: string
        ydk::YLeaf interface_name; //type: string
        ydk::YLeaf metric; //type: uint32
        ydk::YLeaf load_metric; //type: uint32
        ydk::YLeaf flags64; //type: uint64
        ydk::YLeaf flags; //type: uint16
        ydk::YLeaf private_flags; //type: uint16
        ydk::YLeaf looped; //type: boolean
        ydk::YLeaf next_hop_table_id; //type: uint32
        ydk::YLeaf next_hop_vrf_name; //type: string
        ydk::YLeaf next_hop_table_name; //type: string
        ydk::YLeaf next_hop_afi; //type: uint32
        ydk::YLeaf next_hop_safi; //type: uint32
        ydk::YLeaf route_label; //type: uint32
        ydk::YLeaf tunnel_id; //type: uint32
        ydk::YLeaf pathid; //type: uint32
        ydk::YLeaf backup_pathid; //type: uint32
        ydk::YLeaf ref_cnt_of_backup; //type: uint32
        ydk::YLeaf number_of_extended_communities; //type: uint32
        ydk::YLeaf mvpn_present; //type: boolean
        ydk::YLeaf path_rt_present; //type: boolean
        ydk::YLeaf vrf_import_rt_present; //type: boolean
        ydk::YLeaf source_asrt_present; //type: boolean
        ydk::YLeaf source_rd_present; //type: boolean
        ydk::YLeaf segmented_nexthop_present; //type: boolean
        ydk::YLeaf number_of_nnh; //type: uint32
        ydk::YLeaf next_hop_id; //type: uint32
        ydk::YLeaf next_hop_id_refcount; //type: uint32
        ydk::YLeaf ospf_area_id; //type: string
        ydk::YLeaf has_labelstk; //type: boolean
        ydk::YLeaf num_labels; //type: uint8
        ydk::YLeaf binding_label; //type: uint32
        ydk::YLeaf nhid_feid; //type: uint64
        ydk::YLeaf mpls_feid; //type: uint64
        ydk::YLeaf has_vxlan_network_id; //type: boolean
        ydk::YLeaf vxlan_network_id; //type: uint32
        ydk::YLeaf has_xcid; //type: boolean
        ydk::YLeaf xcid; //type: uint32
        ydk::YLeaf has_span_diag_interface; //type: boolean
        ydk::YLeaf span_diag_interface; //type: string
        ydk::YLeaf has_subscriber_parent_interface; //type: boolean
        ydk::YLeaf subscriber_parent_interface; //type: string
        ydk::YLeaf interface_index_present; //type: boolean
        ydk::YLeaf interface_index_attribute; //type: uint32
        class RemoteBackupAddr; //type: Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Bgp::As::ProtocolRoutes::ProtocolRoute::RoutePath::Ipv4RibEdmPath::RemoteBackupAddr
        class Labelstk; //type: Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Bgp::As::ProtocolRoutes::ProtocolRoute::RoutePath::Ipv4RibEdmPath::Labelstk
        class NextNextHop; //type: Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Bgp::As::ProtocolRoutes::ProtocolRoute::RoutePath::Ipv4RibEdmPath::NextNextHop

        ydk::YList remote_backup_addr;
        ydk::YList labelstk;
        ydk::YList next_next_hop;
        
}; // Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Bgp::As::ProtocolRoutes::ProtocolRoute::RoutePath::Ipv4RibEdmPath


class Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Bgp::As::ProtocolRoutes::ProtocolRoute::RoutePath::Ipv4RibEdmPath::RemoteBackupAddr : public ydk::Entity
{
    public:
        RemoteBackupAddr();
        ~RemoteBackupAddr();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf entry; //type: string

}; // Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Bgp::As::ProtocolRoutes::ProtocolRoute::RoutePath::Ipv4RibEdmPath::RemoteBackupAddr


class Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Bgp::As::ProtocolRoutes::ProtocolRoute::RoutePath::Ipv4RibEdmPath::Labelstk : public ydk::Entity
{
    public:
        Labelstk();
        ~Labelstk();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf entry; //type: uint32

}; // Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Bgp::As::ProtocolRoutes::ProtocolRoute::RoutePath::Ipv4RibEdmPath::Labelstk


class Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Bgp::As::ProtocolRoutes::ProtocolRoute::RoutePath::Ipv4RibEdmPath::NextNextHop : public ydk::Entity
{
    public:
        NextNextHop();
        ~NextNextHop();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf type; //type: RibEdmNnh
        ydk::YLeaf unknownval; //type: uint32
        ydk::YLeaf address; //type: string
        ydk::YLeaf interface_index; //type: uint32

}; // Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Bgp::As::ProtocolRoutes::ProtocolRoute::RoutePath::Ipv4RibEdmPath::NextNextHop


class Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Bgp::As::Information : public ydk::Entity
{
    public:
        Information();
        ~Information();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf protocol_names; //type: string
        ydk::YLeaf instance; //type: string
        ydk::YLeaf version; //type: uint32
        ydk::YLeaf redistribution_client_count; //type: uint32
        ydk::YLeaf protocol_clients_count; //type: uint32
        ydk::YLeaf routes_counts; //type: uint32
        ydk::YLeaf active_routes_count; //type: uint32
        ydk::YLeaf deleted_routes_count; //type: uint32
        ydk::YLeaf paths_count; //type: uint32
        ydk::YLeaf protocol_route_memory; //type: uint32
        ydk::YLeaf backup_routes_count; //type: uint32

}; // Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Bgp::As::Information


class Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Isis : public ydk::Entity
{
    public:
        Isis();
        ~Isis();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class As; //type: Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Isis::As

        ydk::YList as;
        
}; // Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Isis


class Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Isis::As : public ydk::Entity
{
    public:
        As();
        ~As();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf as; //type: string
        class ProtocolRoutes; //type: Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Isis::As::ProtocolRoutes
        class Information; //type: Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Isis::As::Information

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_rib_ipv4_oper::Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Isis::As::ProtocolRoutes> protocol_routes;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_rib_ipv4_oper::Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Isis::As::Information> information;
        
}; // Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Isis::As


class Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Isis::As::ProtocolRoutes : public ydk::Entity
{
    public:
        ProtocolRoutes();
        ~ProtocolRoutes();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class ProtocolRoute; //type: Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Isis::As::ProtocolRoutes::ProtocolRoute

        ydk::YList protocol_route;
        
}; // Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Isis::As::ProtocolRoutes


class Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Isis::As::ProtocolRoutes::ProtocolRoute : public ydk::Entity
{
    public:
        ProtocolRoute();
        ~ProtocolRoute();

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
        ydk::YLeaf prefix_length; //type: uint8
        ydk::YLeaf prefix; //type: string
        ydk::YLeaf prefix_length_xr; //type: uint8
        ydk::YLeaf route_version; //type: uint32
        ydk::YLeaf protocol_id; //type: uint32
        ydk::YLeaf protocol_name; //type: string
        ydk::YLeaf instance; //type: string
        ydk::YLeaf client_id; //type: uint32
        ydk::YLeaf route_type; //type: uint16
        ydk::YLeaf priority; //type: uint8
        ydk::YLeaf svd_type; //type: uint8
        ydk::YLeaf flags; //type: uint32
        ydk::YLeaf extended_flags; //type: uint64
        ydk::YLeaf tag; //type: uint32
        ydk::YLeaf distance; //type: uint32
        ydk::YLeaf diversion_distance; //type: uint32
        ydk::YLeaf metric; //type: uint32
        ydk::YLeaf paths_count; //type: uint32
        ydk::YLeaf attribute_identity; //type: uint32
        ydk::YLeaf traffic_index; //type: uint8
        ydk::YLeaf route_precedence; //type: uint8
        ydk::YLeaf qos_group; //type: uint8
        ydk::YLeaf flow_tag; //type: uint8
        ydk::YLeaf fwd_class; //type: uint8
        ydk::YLeaf pic_count; //type: uint8
        ydk::YLeaf active; //type: boolean
        ydk::YLeaf diversion; //type: boolean
        ydk::YLeaf diversion_proto_name; //type: string
        ydk::YLeaf route_age; //type: uint32
        ydk::YLeaf route_label; //type: uint32
        ydk::YLeaf version; //type: uint32
        ydk::YLeaf tbl_version; //type: uint64
        ydk::YLeaf route_modify_time; //type: uint64
        class RoutePath; //type: Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Isis::As::ProtocolRoutes::ProtocolRoute::RoutePath

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_rib_ipv4_oper::Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Isis::As::ProtocolRoutes::ProtocolRoute::RoutePath> route_path;
        
}; // Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Isis::As::ProtocolRoutes::ProtocolRoute


class Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Isis::As::ProtocolRoutes::ProtocolRoute::RoutePath : public ydk::Entity
{
    public:
        RoutePath();
        ~RoutePath();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Ipv4RibEdmPath; //type: Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Isis::As::ProtocolRoutes::ProtocolRoute::RoutePath::Ipv4RibEdmPath

        ydk::YList ipv4_rib_edm_path;
        
}; // Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Isis::As::ProtocolRoutes::ProtocolRoute::RoutePath


class Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Isis::As::ProtocolRoutes::ProtocolRoute::RoutePath::Ipv4RibEdmPath : public ydk::Entity
{
    public:
        Ipv4RibEdmPath();
        ~Ipv4RibEdmPath();

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
        ydk::YLeaf information_source; //type: string
        ydk::YLeaf v6_nexthop; //type: string
        ydk::YLeaf v6_information_source; //type: string
        ydk::YLeaf interface_name; //type: string
        ydk::YLeaf metric; //type: uint32
        ydk::YLeaf load_metric; //type: uint32
        ydk::YLeaf flags64; //type: uint64
        ydk::YLeaf flags; //type: uint16
        ydk::YLeaf private_flags; //type: uint16
        ydk::YLeaf looped; //type: boolean
        ydk::YLeaf next_hop_table_id; //type: uint32
        ydk::YLeaf next_hop_vrf_name; //type: string
        ydk::YLeaf next_hop_table_name; //type: string
        ydk::YLeaf next_hop_afi; //type: uint32
        ydk::YLeaf next_hop_safi; //type: uint32
        ydk::YLeaf route_label; //type: uint32
        ydk::YLeaf tunnel_id; //type: uint32
        ydk::YLeaf pathid; //type: uint32
        ydk::YLeaf backup_pathid; //type: uint32
        ydk::YLeaf ref_cnt_of_backup; //type: uint32
        ydk::YLeaf number_of_extended_communities; //type: uint32
        ydk::YLeaf mvpn_present; //type: boolean
        ydk::YLeaf path_rt_present; //type: boolean
        ydk::YLeaf vrf_import_rt_present; //type: boolean
        ydk::YLeaf source_asrt_present; //type: boolean
        ydk::YLeaf source_rd_present; //type: boolean
        ydk::YLeaf segmented_nexthop_present; //type: boolean
        ydk::YLeaf number_of_nnh; //type: uint32
        ydk::YLeaf next_hop_id; //type: uint32
        ydk::YLeaf next_hop_id_refcount; //type: uint32
        ydk::YLeaf ospf_area_id; //type: string
        ydk::YLeaf has_labelstk; //type: boolean
        ydk::YLeaf num_labels; //type: uint8
        ydk::YLeaf binding_label; //type: uint32
        ydk::YLeaf nhid_feid; //type: uint64
        ydk::YLeaf mpls_feid; //type: uint64
        ydk::YLeaf has_vxlan_network_id; //type: boolean
        ydk::YLeaf vxlan_network_id; //type: uint32
        ydk::YLeaf has_xcid; //type: boolean
        ydk::YLeaf xcid; //type: uint32
        ydk::YLeaf has_span_diag_interface; //type: boolean
        ydk::YLeaf span_diag_interface; //type: string
        ydk::YLeaf has_subscriber_parent_interface; //type: boolean
        ydk::YLeaf subscriber_parent_interface; //type: string
        ydk::YLeaf interface_index_present; //type: boolean
        ydk::YLeaf interface_index_attribute; //type: uint32
        class RemoteBackupAddr; //type: Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Isis::As::ProtocolRoutes::ProtocolRoute::RoutePath::Ipv4RibEdmPath::RemoteBackupAddr
        class Labelstk; //type: Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Isis::As::ProtocolRoutes::ProtocolRoute::RoutePath::Ipv4RibEdmPath::Labelstk
        class NextNextHop; //type: Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Isis::As::ProtocolRoutes::ProtocolRoute::RoutePath::Ipv4RibEdmPath::NextNextHop

        ydk::YList remote_backup_addr;
        ydk::YList labelstk;
        ydk::YList next_next_hop;
        
}; // Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Isis::As::ProtocolRoutes::ProtocolRoute::RoutePath::Ipv4RibEdmPath


class Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Isis::As::ProtocolRoutes::ProtocolRoute::RoutePath::Ipv4RibEdmPath::RemoteBackupAddr : public ydk::Entity
{
    public:
        RemoteBackupAddr();
        ~RemoteBackupAddr();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf entry; //type: string

}; // Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Isis::As::ProtocolRoutes::ProtocolRoute::RoutePath::Ipv4RibEdmPath::RemoteBackupAddr


class Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Isis::As::ProtocolRoutes::ProtocolRoute::RoutePath::Ipv4RibEdmPath::Labelstk : public ydk::Entity
{
    public:
        Labelstk();
        ~Labelstk();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf entry; //type: uint32

}; // Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Isis::As::ProtocolRoutes::ProtocolRoute::RoutePath::Ipv4RibEdmPath::Labelstk


class Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Isis::As::ProtocolRoutes::ProtocolRoute::RoutePath::Ipv4RibEdmPath::NextNextHop : public ydk::Entity
{
    public:
        NextNextHop();
        ~NextNextHop();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf type; //type: RibEdmNnh
        ydk::YLeaf unknownval; //type: uint32
        ydk::YLeaf address; //type: string
        ydk::YLeaf interface_index; //type: uint32

}; // Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Isis::As::ProtocolRoutes::ProtocolRoute::RoutePath::Ipv4RibEdmPath::NextNextHop


class Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Isis::As::Information : public ydk::Entity
{
    public:
        Information();
        ~Information();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf protocol_names; //type: string
        ydk::YLeaf instance; //type: string
        ydk::YLeaf version; //type: uint32
        ydk::YLeaf redistribution_client_count; //type: uint32
        ydk::YLeaf protocol_clients_count; //type: uint32
        ydk::YLeaf routes_counts; //type: uint32
        ydk::YLeaf active_routes_count; //type: uint32
        ydk::YLeaf deleted_routes_count; //type: uint32
        ydk::YLeaf paths_count; //type: uint32
        ydk::YLeaf protocol_route_memory; //type: uint32
        ydk::YLeaf backup_routes_count; //type: uint32

}; // Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Isis::As::Information


class Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::QRoutes : public ydk::Entity
{
    public:
        QRoutes();
        ~QRoutes();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class QRoute; //type: Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::QRoutes::QRoute

        ydk::YList q_route;
        
}; // Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::QRoutes


class Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::QRoutes::QRoute : public ydk::Entity
{
    public:
        QRoute();
        ~QRoute();

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
        ydk::YLeaf prefix_length; //type: uint8
        ydk::YLeaf prefix; //type: string
        ydk::YLeaf prefix_length_xr; //type: uint8
        ydk::YLeaf route_version; //type: uint32
        ydk::YLeaf protocol_id; //type: uint32
        ydk::YLeaf protocol_name; //type: string
        ydk::YLeaf instance; //type: string
        ydk::YLeaf client_id; //type: uint32
        ydk::YLeaf route_type; //type: uint16
        ydk::YLeaf priority; //type: uint8
        ydk::YLeaf svd_type; //type: uint8
        ydk::YLeaf flags; //type: uint32
        ydk::YLeaf extended_flags; //type: uint64
        ydk::YLeaf tag; //type: uint32
        ydk::YLeaf distance; //type: uint32
        ydk::YLeaf diversion_distance; //type: uint32
        ydk::YLeaf metric; //type: uint32
        ydk::YLeaf paths_count; //type: uint32
        ydk::YLeaf attribute_identity; //type: uint32
        ydk::YLeaf traffic_index; //type: uint8
        ydk::YLeaf route_precedence; //type: uint8
        ydk::YLeaf qos_group; //type: uint8
        ydk::YLeaf flow_tag; //type: uint8
        ydk::YLeaf fwd_class; //type: uint8
        ydk::YLeaf pic_count; //type: uint8
        ydk::YLeaf active; //type: boolean
        ydk::YLeaf diversion; //type: boolean
        ydk::YLeaf diversion_proto_name; //type: string
        ydk::YLeaf route_age; //type: uint32
        ydk::YLeaf route_label; //type: uint32
        ydk::YLeaf version; //type: uint32
        ydk::YLeaf tbl_version; //type: uint64
        ydk::YLeaf route_modify_time; //type: uint64
        class RoutePath; //type: Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::QRoutes::QRoute::RoutePath

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_rib_ipv4_oper::Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::QRoutes::QRoute::RoutePath> route_path;
        
}; // Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::QRoutes::QRoute


class Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::QRoutes::QRoute::RoutePath : public ydk::Entity
{
    public:
        RoutePath();
        ~RoutePath();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Ipv4RibEdmPath; //type: Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::QRoutes::QRoute::RoutePath::Ipv4RibEdmPath

        ydk::YList ipv4_rib_edm_path;
        
}; // Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::QRoutes::QRoute::RoutePath


class Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::QRoutes::QRoute::RoutePath::Ipv4RibEdmPath : public ydk::Entity
{
    public:
        Ipv4RibEdmPath();
        ~Ipv4RibEdmPath();

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
        ydk::YLeaf information_source; //type: string
        ydk::YLeaf v6_nexthop; //type: string
        ydk::YLeaf v6_information_source; //type: string
        ydk::YLeaf interface_name; //type: string
        ydk::YLeaf metric; //type: uint32
        ydk::YLeaf load_metric; //type: uint32
        ydk::YLeaf flags64; //type: uint64
        ydk::YLeaf flags; //type: uint16
        ydk::YLeaf private_flags; //type: uint16
        ydk::YLeaf looped; //type: boolean
        ydk::YLeaf next_hop_table_id; //type: uint32
        ydk::YLeaf next_hop_vrf_name; //type: string
        ydk::YLeaf next_hop_table_name; //type: string
        ydk::YLeaf next_hop_afi; //type: uint32
        ydk::YLeaf next_hop_safi; //type: uint32
        ydk::YLeaf route_label; //type: uint32
        ydk::YLeaf tunnel_id; //type: uint32
        ydk::YLeaf pathid; //type: uint32
        ydk::YLeaf backup_pathid; //type: uint32
        ydk::YLeaf ref_cnt_of_backup; //type: uint32
        ydk::YLeaf number_of_extended_communities; //type: uint32
        ydk::YLeaf mvpn_present; //type: boolean
        ydk::YLeaf path_rt_present; //type: boolean
        ydk::YLeaf vrf_import_rt_present; //type: boolean
        ydk::YLeaf source_asrt_present; //type: boolean
        ydk::YLeaf source_rd_present; //type: boolean
        ydk::YLeaf segmented_nexthop_present; //type: boolean
        ydk::YLeaf number_of_nnh; //type: uint32
        ydk::YLeaf next_hop_id; //type: uint32
        ydk::YLeaf next_hop_id_refcount; //type: uint32
        ydk::YLeaf ospf_area_id; //type: string
        ydk::YLeaf has_labelstk; //type: boolean
        ydk::YLeaf num_labels; //type: uint8
        ydk::YLeaf binding_label; //type: uint32
        ydk::YLeaf nhid_feid; //type: uint64
        ydk::YLeaf mpls_feid; //type: uint64
        ydk::YLeaf has_vxlan_network_id; //type: boolean
        ydk::YLeaf vxlan_network_id; //type: uint32
        ydk::YLeaf has_xcid; //type: boolean
        ydk::YLeaf xcid; //type: uint32
        ydk::YLeaf has_span_diag_interface; //type: boolean
        ydk::YLeaf span_diag_interface; //type: string
        ydk::YLeaf has_subscriber_parent_interface; //type: boolean
        ydk::YLeaf subscriber_parent_interface; //type: string
        ydk::YLeaf interface_index_present; //type: boolean
        ydk::YLeaf interface_index_attribute; //type: uint32
        class RemoteBackupAddr; //type: Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::QRoutes::QRoute::RoutePath::Ipv4RibEdmPath::RemoteBackupAddr
        class Labelstk; //type: Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::QRoutes::QRoute::RoutePath::Ipv4RibEdmPath::Labelstk
        class NextNextHop; //type: Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::QRoutes::QRoute::RoutePath::Ipv4RibEdmPath::NextNextHop

        ydk::YList remote_backup_addr;
        ydk::YList labelstk;
        ydk::YList next_next_hop;
        
}; // Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::QRoutes::QRoute::RoutePath::Ipv4RibEdmPath


class Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::QRoutes::QRoute::RoutePath::Ipv4RibEdmPath::RemoteBackupAddr : public ydk::Entity
{
    public:
        RemoteBackupAddr();
        ~RemoteBackupAddr();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf entry; //type: string

}; // Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::QRoutes::QRoute::RoutePath::Ipv4RibEdmPath::RemoteBackupAddr


class Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::QRoutes::QRoute::RoutePath::Ipv4RibEdmPath::Labelstk : public ydk::Entity
{
    public:
        Labelstk();
        ~Labelstk();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf entry; //type: uint32

}; // Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::QRoutes::QRoute::RoutePath::Ipv4RibEdmPath::Labelstk


class Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::QRoutes::QRoute::RoutePath::Ipv4RibEdmPath::NextNextHop : public ydk::Entity
{
    public:
        NextNextHop();
        ~NextNextHop();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf type; //type: RibEdmNnh
        ydk::YLeaf unknownval; //type: uint32
        ydk::YLeaf address; //type: string
        ydk::YLeaf interface_index; //type: uint32

}; // Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::QRoutes::QRoute::RoutePath::Ipv4RibEdmPath::NextNextHop


class Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::BackupRoutes : public ydk::Entity
{
    public:
        BackupRoutes();
        ~BackupRoutes();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class BackupRoute; //type: Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::BackupRoutes::BackupRoute

        ydk::YList backup_route;
        
}; // Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::BackupRoutes


class Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::BackupRoutes::BackupRoute : public ydk::Entity
{
    public:
        BackupRoute();
        ~BackupRoute();

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
        ydk::YLeaf prefix_length; //type: uint8
        ydk::YLeaf protoid; //type: uint32
        ydk::YLeaf prefix; //type: string
        ydk::YLeaf prefix_length_xr; //type: uint8
        ydk::YLeaf route_version; //type: uint32
        ydk::YLeaf protocol_id; //type: uint32
        ydk::YLeaf protocol_name; //type: string
        ydk::YLeaf instance; //type: string
        ydk::YLeaf client_id; //type: uint32
        ydk::YLeaf route_type; //type: uint16
        ydk::YLeaf priority; //type: uint8
        ydk::YLeaf svd_type; //type: uint8
        ydk::YLeaf flags; //type: uint32
        ydk::YLeaf extended_flags; //type: uint64
        ydk::YLeaf tag; //type: uint32
        ydk::YLeaf distance; //type: uint32
        ydk::YLeaf diversion_distance; //type: uint32
        ydk::YLeaf metric; //type: uint32
        ydk::YLeaf paths_count; //type: uint32
        ydk::YLeaf attribute_identity; //type: uint32
        ydk::YLeaf traffic_index; //type: uint8
        ydk::YLeaf route_precedence; //type: uint8
        ydk::YLeaf qos_group; //type: uint8
        ydk::YLeaf flow_tag; //type: uint8
        ydk::YLeaf fwd_class; //type: uint8
        ydk::YLeaf pic_count; //type: uint8
        ydk::YLeaf active; //type: boolean
        ydk::YLeaf diversion; //type: boolean
        ydk::YLeaf diversion_proto_name; //type: string
        ydk::YLeaf route_age; //type: uint32
        ydk::YLeaf route_label; //type: uint32
        ydk::YLeaf version; //type: uint32
        ydk::YLeaf tbl_version; //type: uint64
        ydk::YLeaf route_modify_time; //type: uint64
        class RoutePath; //type: Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::BackupRoutes::BackupRoute::RoutePath

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_rib_ipv4_oper::Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::BackupRoutes::BackupRoute::RoutePath> route_path;
        
}; // Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::BackupRoutes::BackupRoute


class Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::BackupRoutes::BackupRoute::RoutePath : public ydk::Entity
{
    public:
        RoutePath();
        ~RoutePath();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Ipv4RibEdmPath; //type: Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::BackupRoutes::BackupRoute::RoutePath::Ipv4RibEdmPath

        ydk::YList ipv4_rib_edm_path;
        
}; // Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::BackupRoutes::BackupRoute::RoutePath


class Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::BackupRoutes::BackupRoute::RoutePath::Ipv4RibEdmPath : public ydk::Entity
{
    public:
        Ipv4RibEdmPath();
        ~Ipv4RibEdmPath();

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
        ydk::YLeaf information_source; //type: string
        ydk::YLeaf v6_nexthop; //type: string
        ydk::YLeaf v6_information_source; //type: string
        ydk::YLeaf interface_name; //type: string
        ydk::YLeaf metric; //type: uint32
        ydk::YLeaf load_metric; //type: uint32
        ydk::YLeaf flags64; //type: uint64
        ydk::YLeaf flags; //type: uint16
        ydk::YLeaf private_flags; //type: uint16
        ydk::YLeaf looped; //type: boolean
        ydk::YLeaf next_hop_table_id; //type: uint32
        ydk::YLeaf next_hop_vrf_name; //type: string
        ydk::YLeaf next_hop_table_name; //type: string
        ydk::YLeaf next_hop_afi; //type: uint32
        ydk::YLeaf next_hop_safi; //type: uint32
        ydk::YLeaf route_label; //type: uint32
        ydk::YLeaf tunnel_id; //type: uint32
        ydk::YLeaf pathid; //type: uint32
        ydk::YLeaf backup_pathid; //type: uint32
        ydk::YLeaf ref_cnt_of_backup; //type: uint32
        ydk::YLeaf number_of_extended_communities; //type: uint32
        ydk::YLeaf mvpn_present; //type: boolean
        ydk::YLeaf path_rt_present; //type: boolean
        ydk::YLeaf vrf_import_rt_present; //type: boolean
        ydk::YLeaf source_asrt_present; //type: boolean
        ydk::YLeaf source_rd_present; //type: boolean
        ydk::YLeaf segmented_nexthop_present; //type: boolean
        ydk::YLeaf number_of_nnh; //type: uint32
        ydk::YLeaf next_hop_id; //type: uint32
        ydk::YLeaf next_hop_id_refcount; //type: uint32
        ydk::YLeaf ospf_area_id; //type: string
        ydk::YLeaf has_labelstk; //type: boolean
        ydk::YLeaf num_labels; //type: uint8
        ydk::YLeaf binding_label; //type: uint32
        ydk::YLeaf nhid_feid; //type: uint64
        ydk::YLeaf mpls_feid; //type: uint64
        ydk::YLeaf has_vxlan_network_id; //type: boolean
        ydk::YLeaf vxlan_network_id; //type: uint32
        ydk::YLeaf has_xcid; //type: boolean
        ydk::YLeaf xcid; //type: uint32
        ydk::YLeaf has_span_diag_interface; //type: boolean
        ydk::YLeaf span_diag_interface; //type: string
        ydk::YLeaf has_subscriber_parent_interface; //type: boolean
        ydk::YLeaf subscriber_parent_interface; //type: string
        ydk::YLeaf interface_index_present; //type: boolean
        ydk::YLeaf interface_index_attribute; //type: uint32
        class RemoteBackupAddr; //type: Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::BackupRoutes::BackupRoute::RoutePath::Ipv4RibEdmPath::RemoteBackupAddr
        class Labelstk; //type: Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::BackupRoutes::BackupRoute::RoutePath::Ipv4RibEdmPath::Labelstk
        class NextNextHop; //type: Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::BackupRoutes::BackupRoute::RoutePath::Ipv4RibEdmPath::NextNextHop

        ydk::YList remote_backup_addr;
        ydk::YList labelstk;
        ydk::YList next_next_hop;
        
}; // Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::BackupRoutes::BackupRoute::RoutePath::Ipv4RibEdmPath


class Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::BackupRoutes::BackupRoute::RoutePath::Ipv4RibEdmPath::RemoteBackupAddr : public ydk::Entity
{
    public:
        RemoteBackupAddr();
        ~RemoteBackupAddr();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf entry; //type: string

}; // Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::BackupRoutes::BackupRoute::RoutePath::Ipv4RibEdmPath::RemoteBackupAddr


class Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::BackupRoutes::BackupRoute::RoutePath::Ipv4RibEdmPath::Labelstk : public ydk::Entity
{
    public:
        Labelstk();
        ~Labelstk();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf entry; //type: uint32

}; // Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::BackupRoutes::BackupRoute::RoutePath::Ipv4RibEdmPath::Labelstk


class Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::BackupRoutes::BackupRoute::RoutePath::Ipv4RibEdmPath::NextNextHop : public ydk::Entity
{
    public:
        NextNextHop();
        ~NextNextHop();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf type; //type: RibEdmNnh
        ydk::YLeaf unknownval; //type: uint32
        ydk::YLeaf address; //type: string
        ydk::YLeaf interface_index; //type: uint32

}; // Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::BackupRoutes::BackupRoute::RoutePath::Ipv4RibEdmPath::NextNextHop


class Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Adverts : public ydk::Entity
{
    public:
        Adverts();
        ~Adverts();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Advert; //type: Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Adverts::Advert

        ydk::YList advert;
        
}; // Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Adverts


class Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Adverts::Advert : public ydk::Entity
{
    public:
        Advert();
        ~Advert();

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
        ydk::YLeaf prefix_length; //type: uint8
        class Ipv4RibEdmAdvert; //type: Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Adverts::Advert::Ipv4RibEdmAdvert

        ydk::YList ipv4_rib_edm_advert;
        
}; // Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Adverts::Advert


class Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Adverts::Advert::Ipv4RibEdmAdvert : public ydk::Entity
{
    public:
        Ipv4RibEdmAdvert();
        ~Ipv4RibEdmAdvert();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf protocol_id; //type: uint32
        ydk::YLeaf client_id; //type: uint32
        ydk::YLeaf number_of_extended_communities; //type: uint32
        ydk::YLeaf extended_communities; //type: string
        ydk::YLeaf protocol_opaque_flags; //type: uint8
        ydk::YLeaf protocol_opaque; //type: uint32
        ydk::YLeaf code; //type: int8
        ydk::YLeaf instance_name; //type: string

}; // Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Adverts::Advert::Ipv4RibEdmAdvert


class Rib::RibTableIds : public ydk::Entity
{
    public:
        RibTableIds();
        ~RibTableIds();

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

        class RibTableId; //type: Rib::RibTableIds::RibTableId

        ydk::YList rib_table_id;
        
}; // Rib::RibTableIds


class Rib::RibTableIds::RibTableId : public ydk::Entity
{
    public:
        RibTableId();
        ~RibTableId();

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

        ydk::YLeaf tableid; //type: string
        class SummaryProtos; //type: Rib::RibTableIds::RibTableId::SummaryProtos
        class RibTableItfHndls; //type: Rib::RibTableIds::RibTableId::RibTableItfHndls
        class Information; //type: Rib::RibTableIds::RibTableId::Information

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_rib_ipv4_oper::Rib::RibTableIds::RibTableId::SummaryProtos> summary_protos;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_rib_ipv4_oper::Rib::RibTableIds::RibTableId::RibTableItfHndls> rib_table_itf_hndls;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_rib_ipv4_oper::Rib::RibTableIds::RibTableId::Information> information;
        
}; // Rib::RibTableIds::RibTableId


class Rib::RibTableIds::RibTableId::SummaryProtos : public ydk::Entity
{
    public:
        SummaryProtos();
        ~SummaryProtos();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class SummaryProto; //type: Rib::RibTableIds::RibTableId::SummaryProtos::SummaryProto

        ydk::YList summary_proto;
        
}; // Rib::RibTableIds::RibTableId::SummaryProtos


class Rib::RibTableIds::RibTableId::SummaryProtos::SummaryProto : public ydk::Entity
{
    public:
        SummaryProto();
        ~SummaryProto();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf protoid; //type: uint32
        ydk::YLeaf name; //type: string
        ydk::YLeaf instance; //type: string
        class ProtoRouteCount; //type: Rib::RibTableIds::RibTableId::SummaryProtos::SummaryProto::ProtoRouteCount
        class RtypeNone; //type: Rib::RibTableIds::RibTableId::SummaryProtos::SummaryProto::RtypeNone
        class RtypeOther; //type: Rib::RibTableIds::RibTableId::SummaryProtos::SummaryProto::RtypeOther
        class RtypeOspfIntra; //type: Rib::RibTableIds::RibTableId::SummaryProtos::SummaryProto::RtypeOspfIntra
        class RtypeOspfInter; //type: Rib::RibTableIds::RibTableId::SummaryProtos::SummaryProto::RtypeOspfInter
        class RtypeOspfExtern1; //type: Rib::RibTableIds::RibTableId::SummaryProtos::SummaryProto::RtypeOspfExtern1
        class RtypeOspfExtern2; //type: Rib::RibTableIds::RibTableId::SummaryProtos::SummaryProto::RtypeOspfExtern2
        class RtypeIsisSum; //type: Rib::RibTableIds::RibTableId::SummaryProtos::SummaryProto::RtypeIsisSum
        class RtypeIsisL1; //type: Rib::RibTableIds::RibTableId::SummaryProtos::SummaryProto::RtypeIsisL1
        class RtypeIsisL2; //type: Rib::RibTableIds::RibTableId::SummaryProtos::SummaryProto::RtypeIsisL2
        class RtypeIsisL1Ia; //type: Rib::RibTableIds::RibTableId::SummaryProtos::SummaryProto::RtypeIsisL1Ia
        class RtypeBgpInt; //type: Rib::RibTableIds::RibTableId::SummaryProtos::SummaryProto::RtypeBgpInt
        class RtypeBgpExt; //type: Rib::RibTableIds::RibTableId::SummaryProtos::SummaryProto::RtypeBgpExt
        class RtypeBgpLoc; //type: Rib::RibTableIds::RibTableId::SummaryProtos::SummaryProto::RtypeBgpLoc
        class RtypeOspfNssa1; //type: Rib::RibTableIds::RibTableId::SummaryProtos::SummaryProto::RtypeOspfNssa1
        class RtypeOspfNssa2; //type: Rib::RibTableIds::RibTableId::SummaryProtos::SummaryProto::RtypeOspfNssa2
        class RtypeIgrp2Int; //type: Rib::RibTableIds::RibTableId::SummaryProtos::SummaryProto::RtypeIgrp2Int
        class RtypeIgrp2Ext; //type: Rib::RibTableIds::RibTableId::SummaryProtos::SummaryProto::RtypeIgrp2Ext

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_rib_ipv4_oper::Rib::RibTableIds::RibTableId::SummaryProtos::SummaryProto::ProtoRouteCount> proto_route_count;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_rib_ipv4_oper::Rib::RibTableIds::RibTableId::SummaryProtos::SummaryProto::RtypeNone> rtype_none;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_rib_ipv4_oper::Rib::RibTableIds::RibTableId::SummaryProtos::SummaryProto::RtypeOther> rtype_other;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_rib_ipv4_oper::Rib::RibTableIds::RibTableId::SummaryProtos::SummaryProto::RtypeOspfIntra> rtype_ospf_intra;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_rib_ipv4_oper::Rib::RibTableIds::RibTableId::SummaryProtos::SummaryProto::RtypeOspfInter> rtype_ospf_inter;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_rib_ipv4_oper::Rib::RibTableIds::RibTableId::SummaryProtos::SummaryProto::RtypeOspfExtern1> rtype_ospf_extern1;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_rib_ipv4_oper::Rib::RibTableIds::RibTableId::SummaryProtos::SummaryProto::RtypeOspfExtern2> rtype_ospf_extern2;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_rib_ipv4_oper::Rib::RibTableIds::RibTableId::SummaryProtos::SummaryProto::RtypeIsisSum> rtype_isis_sum;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_rib_ipv4_oper::Rib::RibTableIds::RibTableId::SummaryProtos::SummaryProto::RtypeIsisL1> rtype_isis_l1;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_rib_ipv4_oper::Rib::RibTableIds::RibTableId::SummaryProtos::SummaryProto::RtypeIsisL2> rtype_isis_l2;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_rib_ipv4_oper::Rib::RibTableIds::RibTableId::SummaryProtos::SummaryProto::RtypeIsisL1Ia> rtype_isis_l1_ia;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_rib_ipv4_oper::Rib::RibTableIds::RibTableId::SummaryProtos::SummaryProto::RtypeBgpInt> rtype_bgp_int;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_rib_ipv4_oper::Rib::RibTableIds::RibTableId::SummaryProtos::SummaryProto::RtypeBgpExt> rtype_bgp_ext;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_rib_ipv4_oper::Rib::RibTableIds::RibTableId::SummaryProtos::SummaryProto::RtypeBgpLoc> rtype_bgp_loc;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_rib_ipv4_oper::Rib::RibTableIds::RibTableId::SummaryProtos::SummaryProto::RtypeOspfNssa1> rtype_ospf_nssa1;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_rib_ipv4_oper::Rib::RibTableIds::RibTableId::SummaryProtos::SummaryProto::RtypeOspfNssa2> rtype_ospf_nssa2;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_rib_ipv4_oper::Rib::RibTableIds::RibTableId::SummaryProtos::SummaryProto::RtypeIgrp2Int> rtype_igrp2_int;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_rib_ipv4_oper::Rib::RibTableIds::RibTableId::SummaryProtos::SummaryProto::RtypeIgrp2Ext> rtype_igrp2_ext;
        
}; // Rib::RibTableIds::RibTableId::SummaryProtos::SummaryProto


class Rib::RibTableIds::RibTableId::SummaryProtos::SummaryProto::ProtoRouteCount : public ydk::Entity
{
    public:
        ProtoRouteCount();
        ~ProtoRouteCount();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf active_routes_count; //type: uint32
        ydk::YLeaf num_backup_routes; //type: uint32
        ydk::YLeaf num_active_paths; //type: uint32
        ydk::YLeaf num_backup_paths; //type: uint32

}; // Rib::RibTableIds::RibTableId::SummaryProtos::SummaryProto::ProtoRouteCount


class Rib::RibTableIds::RibTableId::SummaryProtos::SummaryProto::RtypeNone : public ydk::Entity
{
    public:
        RtypeNone();
        ~RtypeNone();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf active_routes_count; //type: uint32
        ydk::YLeaf num_backup_routes; //type: uint32
        ydk::YLeaf num_active_paths; //type: uint32
        ydk::YLeaf num_backup_paths; //type: uint32

}; // Rib::RibTableIds::RibTableId::SummaryProtos::SummaryProto::RtypeNone


class Rib::RibTableIds::RibTableId::SummaryProtos::SummaryProto::RtypeOther : public ydk::Entity
{
    public:
        RtypeOther();
        ~RtypeOther();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf active_routes_count; //type: uint32
        ydk::YLeaf num_backup_routes; //type: uint32
        ydk::YLeaf num_active_paths; //type: uint32
        ydk::YLeaf num_backup_paths; //type: uint32

}; // Rib::RibTableIds::RibTableId::SummaryProtos::SummaryProto::RtypeOther


class Rib::RibTableIds::RibTableId::SummaryProtos::SummaryProto::RtypeOspfIntra : public ydk::Entity
{
    public:
        RtypeOspfIntra();
        ~RtypeOspfIntra();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf active_routes_count; //type: uint32
        ydk::YLeaf num_backup_routes; //type: uint32
        ydk::YLeaf num_active_paths; //type: uint32
        ydk::YLeaf num_backup_paths; //type: uint32

}; // Rib::RibTableIds::RibTableId::SummaryProtos::SummaryProto::RtypeOspfIntra


class Rib::RibTableIds::RibTableId::SummaryProtos::SummaryProto::RtypeOspfInter : public ydk::Entity
{
    public:
        RtypeOspfInter();
        ~RtypeOspfInter();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf active_routes_count; //type: uint32
        ydk::YLeaf num_backup_routes; //type: uint32
        ydk::YLeaf num_active_paths; //type: uint32
        ydk::YLeaf num_backup_paths; //type: uint32

}; // Rib::RibTableIds::RibTableId::SummaryProtos::SummaryProto::RtypeOspfInter


class Rib::RibTableIds::RibTableId::SummaryProtos::SummaryProto::RtypeOspfExtern1 : public ydk::Entity
{
    public:
        RtypeOspfExtern1();
        ~RtypeOspfExtern1();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf active_routes_count; //type: uint32
        ydk::YLeaf num_backup_routes; //type: uint32
        ydk::YLeaf num_active_paths; //type: uint32
        ydk::YLeaf num_backup_paths; //type: uint32

}; // Rib::RibTableIds::RibTableId::SummaryProtos::SummaryProto::RtypeOspfExtern1


class Rib::RibTableIds::RibTableId::SummaryProtos::SummaryProto::RtypeOspfExtern2 : public ydk::Entity
{
    public:
        RtypeOspfExtern2();
        ~RtypeOspfExtern2();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf active_routes_count; //type: uint32
        ydk::YLeaf num_backup_routes; //type: uint32
        ydk::YLeaf num_active_paths; //type: uint32
        ydk::YLeaf num_backup_paths; //type: uint32

}; // Rib::RibTableIds::RibTableId::SummaryProtos::SummaryProto::RtypeOspfExtern2


class Rib::RibTableIds::RibTableId::SummaryProtos::SummaryProto::RtypeIsisSum : public ydk::Entity
{
    public:
        RtypeIsisSum();
        ~RtypeIsisSum();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf active_routes_count; //type: uint32
        ydk::YLeaf num_backup_routes; //type: uint32
        ydk::YLeaf num_active_paths; //type: uint32
        ydk::YLeaf num_backup_paths; //type: uint32

}; // Rib::RibTableIds::RibTableId::SummaryProtos::SummaryProto::RtypeIsisSum


class Rib::RibTableIds::RibTableId::SummaryProtos::SummaryProto::RtypeIsisL1 : public ydk::Entity
{
    public:
        RtypeIsisL1();
        ~RtypeIsisL1();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf active_routes_count; //type: uint32
        ydk::YLeaf num_backup_routes; //type: uint32
        ydk::YLeaf num_active_paths; //type: uint32
        ydk::YLeaf num_backup_paths; //type: uint32

}; // Rib::RibTableIds::RibTableId::SummaryProtos::SummaryProto::RtypeIsisL1


class Rib::RibTableIds::RibTableId::SummaryProtos::SummaryProto::RtypeIsisL2 : public ydk::Entity
{
    public:
        RtypeIsisL2();
        ~RtypeIsisL2();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf active_routes_count; //type: uint32
        ydk::YLeaf num_backup_routes; //type: uint32
        ydk::YLeaf num_active_paths; //type: uint32
        ydk::YLeaf num_backup_paths; //type: uint32

}; // Rib::RibTableIds::RibTableId::SummaryProtos::SummaryProto::RtypeIsisL2


class Rib::RibTableIds::RibTableId::SummaryProtos::SummaryProto::RtypeIsisL1Ia : public ydk::Entity
{
    public:
        RtypeIsisL1Ia();
        ~RtypeIsisL1Ia();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf active_routes_count; //type: uint32
        ydk::YLeaf num_backup_routes; //type: uint32
        ydk::YLeaf num_active_paths; //type: uint32
        ydk::YLeaf num_backup_paths; //type: uint32

}; // Rib::RibTableIds::RibTableId::SummaryProtos::SummaryProto::RtypeIsisL1Ia


class Rib::RibTableIds::RibTableId::SummaryProtos::SummaryProto::RtypeBgpInt : public ydk::Entity
{
    public:
        RtypeBgpInt();
        ~RtypeBgpInt();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf active_routes_count; //type: uint32
        ydk::YLeaf num_backup_routes; //type: uint32
        ydk::YLeaf num_active_paths; //type: uint32
        ydk::YLeaf num_backup_paths; //type: uint32

}; // Rib::RibTableIds::RibTableId::SummaryProtos::SummaryProto::RtypeBgpInt


class Rib::RibTableIds::RibTableId::SummaryProtos::SummaryProto::RtypeBgpExt : public ydk::Entity
{
    public:
        RtypeBgpExt();
        ~RtypeBgpExt();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf active_routes_count; //type: uint32
        ydk::YLeaf num_backup_routes; //type: uint32
        ydk::YLeaf num_active_paths; //type: uint32
        ydk::YLeaf num_backup_paths; //type: uint32

}; // Rib::RibTableIds::RibTableId::SummaryProtos::SummaryProto::RtypeBgpExt


class Rib::RibTableIds::RibTableId::SummaryProtos::SummaryProto::RtypeBgpLoc : public ydk::Entity
{
    public:
        RtypeBgpLoc();
        ~RtypeBgpLoc();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf active_routes_count; //type: uint32
        ydk::YLeaf num_backup_routes; //type: uint32
        ydk::YLeaf num_active_paths; //type: uint32
        ydk::YLeaf num_backup_paths; //type: uint32

}; // Rib::RibTableIds::RibTableId::SummaryProtos::SummaryProto::RtypeBgpLoc


class Rib::RibTableIds::RibTableId::SummaryProtos::SummaryProto::RtypeOspfNssa1 : public ydk::Entity
{
    public:
        RtypeOspfNssa1();
        ~RtypeOspfNssa1();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf active_routes_count; //type: uint32
        ydk::YLeaf num_backup_routes; //type: uint32
        ydk::YLeaf num_active_paths; //type: uint32
        ydk::YLeaf num_backup_paths; //type: uint32

}; // Rib::RibTableIds::RibTableId::SummaryProtos::SummaryProto::RtypeOspfNssa1


class Rib::RibTableIds::RibTableId::SummaryProtos::SummaryProto::RtypeOspfNssa2 : public ydk::Entity
{
    public:
        RtypeOspfNssa2();
        ~RtypeOspfNssa2();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf active_routes_count; //type: uint32
        ydk::YLeaf num_backup_routes; //type: uint32
        ydk::YLeaf num_active_paths; //type: uint32
        ydk::YLeaf num_backup_paths; //type: uint32

}; // Rib::RibTableIds::RibTableId::SummaryProtos::SummaryProto::RtypeOspfNssa2


class Rib::RibTableIds::RibTableId::SummaryProtos::SummaryProto::RtypeIgrp2Int : public ydk::Entity
{
    public:
        RtypeIgrp2Int();
        ~RtypeIgrp2Int();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf active_routes_count; //type: uint32
        ydk::YLeaf num_backup_routes; //type: uint32
        ydk::YLeaf num_active_paths; //type: uint32
        ydk::YLeaf num_backup_paths; //type: uint32

}; // Rib::RibTableIds::RibTableId::SummaryProtos::SummaryProto::RtypeIgrp2Int


class Rib::RibTableIds::RibTableId::SummaryProtos::SummaryProto::RtypeIgrp2Ext : public ydk::Entity
{
    public:
        RtypeIgrp2Ext();
        ~RtypeIgrp2Ext();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf active_routes_count; //type: uint32
        ydk::YLeaf num_backup_routes; //type: uint32
        ydk::YLeaf num_active_paths; //type: uint32
        ydk::YLeaf num_backup_paths; //type: uint32

}; // Rib::RibTableIds::RibTableId::SummaryProtos::SummaryProto::RtypeIgrp2Ext


class Rib::RibTableIds::RibTableId::RibTableItfHndls : public ydk::Entity
{
    public:
        RibTableItfHndls();
        ~RibTableItfHndls();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class RibTableItfHndl; //type: Rib::RibTableIds::RibTableId::RibTableItfHndls::RibTableItfHndl

        ydk::YList rib_table_itf_hndl;
        
}; // Rib::RibTableIds::RibTableId::RibTableItfHndls


class Rib::RibTableIds::RibTableId::RibTableItfHndls::RibTableItfHndl : public ydk::Entity
{
    public:
        RibTableItfHndl();
        ~RibTableItfHndl();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf handle; //type: uint32
        class ItfRoute; //type: Rib::RibTableIds::RibTableId::RibTableItfHndls::RibTableItfHndl::ItfRoute

        ydk::YList itf_route;
        
}; // Rib::RibTableIds::RibTableId::RibTableItfHndls::RibTableItfHndl


class Rib::RibTableIds::RibTableId::RibTableItfHndls::RibTableItfHndl::ItfRoute : public ydk::Entity
{
    public:
        ItfRoute();
        ~ItfRoute();

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
        ydk::YLeaf prefix; //type: string
        ydk::YLeaf prefix_length_xr; //type: uint8
        ydk::YLeaf route_version; //type: uint32
        ydk::YLeaf protocol_id; //type: uint32
        ydk::YLeaf protocol_name; //type: string
        ydk::YLeaf instance; //type: string
        ydk::YLeaf client_id; //type: uint32
        ydk::YLeaf route_type; //type: uint16
        ydk::YLeaf priority; //type: uint8
        ydk::YLeaf svd_type; //type: uint8
        ydk::YLeaf flags; //type: uint32
        ydk::YLeaf extended_flags; //type: uint64
        ydk::YLeaf tag; //type: uint32
        ydk::YLeaf distance; //type: uint32
        ydk::YLeaf diversion_distance; //type: uint32
        ydk::YLeaf metric; //type: uint32
        ydk::YLeaf paths_count; //type: uint32
        ydk::YLeaf attribute_identity; //type: uint32
        ydk::YLeaf traffic_index; //type: uint8
        ydk::YLeaf route_precedence; //type: uint8
        ydk::YLeaf qos_group; //type: uint8
        ydk::YLeaf flow_tag; //type: uint8
        ydk::YLeaf fwd_class; //type: uint8
        ydk::YLeaf pic_count; //type: uint8
        ydk::YLeaf active; //type: boolean
        ydk::YLeaf diversion; //type: boolean
        ydk::YLeaf diversion_proto_name; //type: string
        ydk::YLeaf route_age; //type: uint32
        ydk::YLeaf route_label; //type: uint32
        ydk::YLeaf version; //type: uint32
        ydk::YLeaf tbl_version; //type: uint64
        ydk::YLeaf route_modify_time; //type: uint64
        class RoutePath; //type: Rib::RibTableIds::RibTableId::RibTableItfHndls::RibTableItfHndl::ItfRoute::RoutePath

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_rib_ipv4_oper::Rib::RibTableIds::RibTableId::RibTableItfHndls::RibTableItfHndl::ItfRoute::RoutePath> route_path;
        
}; // Rib::RibTableIds::RibTableId::RibTableItfHndls::RibTableItfHndl::ItfRoute


class Rib::RibTableIds::RibTableId::RibTableItfHndls::RibTableItfHndl::ItfRoute::RoutePath : public ydk::Entity
{
    public:
        RoutePath();
        ~RoutePath();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Ipv4RibEdmPath; //type: Rib::RibTableIds::RibTableId::RibTableItfHndls::RibTableItfHndl::ItfRoute::RoutePath::Ipv4RibEdmPath

        ydk::YList ipv4_rib_edm_path;
        
}; // Rib::RibTableIds::RibTableId::RibTableItfHndls::RibTableItfHndl::ItfRoute::RoutePath


class Rib::RibTableIds::RibTableId::RibTableItfHndls::RibTableItfHndl::ItfRoute::RoutePath::Ipv4RibEdmPath : public ydk::Entity
{
    public:
        Ipv4RibEdmPath();
        ~Ipv4RibEdmPath();

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
        ydk::YLeaf information_source; //type: string
        ydk::YLeaf v6_nexthop; //type: string
        ydk::YLeaf v6_information_source; //type: string
        ydk::YLeaf interface_name; //type: string
        ydk::YLeaf metric; //type: uint32
        ydk::YLeaf load_metric; //type: uint32
        ydk::YLeaf flags64; //type: uint64
        ydk::YLeaf flags; //type: uint16
        ydk::YLeaf private_flags; //type: uint16
        ydk::YLeaf looped; //type: boolean
        ydk::YLeaf next_hop_table_id; //type: uint32
        ydk::YLeaf next_hop_vrf_name; //type: string
        ydk::YLeaf next_hop_table_name; //type: string
        ydk::YLeaf next_hop_afi; //type: uint32
        ydk::YLeaf next_hop_safi; //type: uint32
        ydk::YLeaf route_label; //type: uint32
        ydk::YLeaf tunnel_id; //type: uint32
        ydk::YLeaf pathid; //type: uint32
        ydk::YLeaf backup_pathid; //type: uint32
        ydk::YLeaf ref_cnt_of_backup; //type: uint32
        ydk::YLeaf number_of_extended_communities; //type: uint32
        ydk::YLeaf mvpn_present; //type: boolean
        ydk::YLeaf path_rt_present; //type: boolean
        ydk::YLeaf vrf_import_rt_present; //type: boolean
        ydk::YLeaf source_asrt_present; //type: boolean
        ydk::YLeaf source_rd_present; //type: boolean
        ydk::YLeaf segmented_nexthop_present; //type: boolean
        ydk::YLeaf number_of_nnh; //type: uint32
        ydk::YLeaf next_hop_id; //type: uint32
        ydk::YLeaf next_hop_id_refcount; //type: uint32
        ydk::YLeaf ospf_area_id; //type: string
        ydk::YLeaf has_labelstk; //type: boolean
        ydk::YLeaf num_labels; //type: uint8
        ydk::YLeaf binding_label; //type: uint32
        ydk::YLeaf nhid_feid; //type: uint64
        ydk::YLeaf mpls_feid; //type: uint64
        ydk::YLeaf has_vxlan_network_id; //type: boolean
        ydk::YLeaf vxlan_network_id; //type: uint32
        ydk::YLeaf has_xcid; //type: boolean
        ydk::YLeaf xcid; //type: uint32
        ydk::YLeaf has_span_diag_interface; //type: boolean
        ydk::YLeaf span_diag_interface; //type: string
        ydk::YLeaf has_subscriber_parent_interface; //type: boolean
        ydk::YLeaf subscriber_parent_interface; //type: string
        ydk::YLeaf interface_index_present; //type: boolean
        ydk::YLeaf interface_index_attribute; //type: uint32
        class RemoteBackupAddr; //type: Rib::RibTableIds::RibTableId::RibTableItfHndls::RibTableItfHndl::ItfRoute::RoutePath::Ipv4RibEdmPath::RemoteBackupAddr
        class Labelstk; //type: Rib::RibTableIds::RibTableId::RibTableItfHndls::RibTableItfHndl::ItfRoute::RoutePath::Ipv4RibEdmPath::Labelstk
        class NextNextHop; //type: Rib::RibTableIds::RibTableId::RibTableItfHndls::RibTableItfHndl::ItfRoute::RoutePath::Ipv4RibEdmPath::NextNextHop

        ydk::YList remote_backup_addr;
        ydk::YList labelstk;
        ydk::YList next_next_hop;
        
}; // Rib::RibTableIds::RibTableId::RibTableItfHndls::RibTableItfHndl::ItfRoute::RoutePath::Ipv4RibEdmPath


class Rib::RibTableIds::RibTableId::RibTableItfHndls::RibTableItfHndl::ItfRoute::RoutePath::Ipv4RibEdmPath::RemoteBackupAddr : public ydk::Entity
{
    public:
        RemoteBackupAddr();
        ~RemoteBackupAddr();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf entry; //type: string

}; // Rib::RibTableIds::RibTableId::RibTableItfHndls::RibTableItfHndl::ItfRoute::RoutePath::Ipv4RibEdmPath::RemoteBackupAddr


class Rib::RibTableIds::RibTableId::RibTableItfHndls::RibTableItfHndl::ItfRoute::RoutePath::Ipv4RibEdmPath::Labelstk : public ydk::Entity
{
    public:
        Labelstk();
        ~Labelstk();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf entry; //type: uint32

}; // Rib::RibTableIds::RibTableId::RibTableItfHndls::RibTableItfHndl::ItfRoute::RoutePath::Ipv4RibEdmPath::Labelstk


class Rib::RibTableIds::RibTableId::RibTableItfHndls::RibTableItfHndl::ItfRoute::RoutePath::Ipv4RibEdmPath::NextNextHop : public ydk::Entity
{
    public:
        NextNextHop();
        ~NextNextHop();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf type; //type: RibEdmNnh
        ydk::YLeaf unknownval; //type: uint32
        ydk::YLeaf address; //type: string
        ydk::YLeaf interface_index; //type: uint32

}; // Rib::RibTableIds::RibTableId::RibTableItfHndls::RibTableItfHndl::ItfRoute::RoutePath::Ipv4RibEdmPath::NextNextHop


class Rib::RibTableIds::RibTableId::Information : public ydk::Entity
{
    public:
        Information();
        ~Information();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf tableid; //type: uint32
        ydk::YLeaf afi; //type: uint32
        ydk::YLeaf safi; //type: uint32
        ydk::YLeaf vrf_name; //type: string
        ydk::YLeaf table_name; //type: string
        ydk::YLeaf version; //type: uint64
        ydk::YLeaf conf_prefix_limit; //type: uint32
        ydk::YLeaf current_prefix_count; //type: uint32
        ydk::YLeaf num_svdlcl_prefix; //type: uint32
        ydk::YLeaf num_svdrem_prefix; //type: uint32
        ydk::YLeaf table_version; //type: uint64
        ydk::YLeaf prefix_limit_notified; //type: boolean
        ydk::YLeaf fwd_referenced; //type: boolean
        ydk::YLeaf deleted; //type: boolean
        ydk::YLeaf initial_converge; //type: boolean

}; // Rib::RibTableIds::RibTableId::Information


}
}

#endif /* _CISCO_IOS_XR_IP_RIB_IPV4_OPER_3_ */


#ifndef _CISCO_IOS_XR_IPV4_OSPF_CFG_
#define _CISCO_IOS_XR_IPV4_OSPF_CFG_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>

namespace cisco_ios_xr {
namespace Cisco_IOS_XR_ipv4_ospf_cfg {

class Ospf : public ydk::Entity
{
    public:
        Ospf();
        ~Ospf();

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

        class Processes; //type: Ospf::Processes
        class Global; //type: Ospf::Global

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_ospf_cfg::Ospf::Processes> processes;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_ospf_cfg::Ospf::Global> global;
        
}; // Ospf


class Ospf::Processes : public ydk::Entity
{
    public:
        Processes();
        ~Processes();

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

        class Process; //type: Ospf::Processes::Process

        ydk::YList process;
        
}; // Ospf::Processes


class Ospf::Processes::Process : public ydk::Entity
{
    public:
        Process();
        ~Process();

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

        ydk::YLeaf process_name; //type: string
        ydk::YLeaf start; //type: empty
        ydk::YLeaf nsr; //type: Nsr
        ydk::YLeaf protocol_shutdown; //type: OspfShutdown
        ydk::YLeaf running; //type: empty
        class Snmp; //type: Ospf::Processes::Process::Snmp
        class Distribute; //type: Ospf::Processes::Process::Distribute
        class Vrfs; //type: Ospf::Processes::Process::Vrfs
        class TraceBufs; //type: Ospf::Processes::Process::TraceBufs
        class GracefulShutdownTimers; //type: Ospf::Processes::Process::GracefulShutdownTimers
        class DefaultVrf; //type: Ospf::Processes::Process::DefaultVrf

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_ospf_cfg::Ospf::Processes::Process::Snmp> snmp;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_ospf_cfg::Ospf::Processes::Process::Distribute> distribute; // presence node
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_ospf_cfg::Ospf::Processes::Process::Vrfs> vrfs;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_ospf_cfg::Ospf::Processes::Process::TraceBufs> trace_bufs;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_ospf_cfg::Ospf::Processes::Process::GracefulShutdownTimers> graceful_shutdown_timers;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_ospf_cfg::Ospf::Processes::Process::DefaultVrf> default_vrf;
        
}; // Ospf::Processes::Process


class Ospf::Processes::Process::Snmp : public ydk::Entity
{
    public:
        Snmp();
        ~Snmp();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class TrapRateLimit; //type: Ospf::Processes::Process::Snmp::TrapRateLimit

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_ospf_cfg::Ospf::Processes::Process::Snmp::TrapRateLimit> trap_rate_limit; // presence node
        
}; // Ospf::Processes::Process::Snmp


class Ospf::Processes::Process::Snmp::TrapRateLimit : public ydk::Entity
{
    public:
        TrapRateLimit();
        ~TrapRateLimit();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf window_size; //type: uint32
        ydk::YLeaf max_window_traps; //type: uint32

}; // Ospf::Processes::Process::Snmp::TrapRateLimit


class Ospf::Processes::Process::Distribute : public ydk::Entity
{
    public:
        Distribute();
        ~Distribute();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf throttle; //type: uint32
        ydk::YLeaf instance_id; //type: uint32

}; // Ospf::Processes::Process::Distribute


class Ospf::Processes::Process::Vrfs : public ydk::Entity
{
    public:
        Vrfs();
        ~Vrfs();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Vrf; //type: Ospf::Processes::Process::Vrfs::Vrf

        ydk::YList vrf;
        
}; // Ospf::Processes::Process::Vrfs


class Ospf::Processes::Process::Vrfs::Vrf : public ydk::Entity
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
        ydk::YLeaf vrf_start; //type: empty
        ydk::YLeaf snmp_trap_enabled; //type: boolean
        ydk::YLeaf domain_tag; //type: uint32
        ydk::YLeaf vrf_lite; //type: empty
        ydk::YLeaf disable_dn_bit_check; //type: empty
        ydk::YLeaf ignore_mospf; //type: empty
        ydk::YLeaf router_id; //type: string
        ydk::YLeaf type7; //type: empty
        ydk::YLeaf snmp_context; //type: string
        ydk::YLeaf maximum_interfaces; //type: uint32
        ydk::YLeaf no_opaque; //type: empty
        ydk::YLeaf spf_prefix_priority; //type: string
        ydk::YLeaf maximum_paths; //type: uint32
        ydk::YLeaf adjacency_changes; //type: OspfLogAdj
        ydk::YLeaf default_metric; //type: uint32
        class DomainId; //type: Ospf::Processes::Process::Vrfs::Vrf::DomainId
        class Microloop; //type: Ospf::Processes::Process::Vrfs::Vrf::Microloop
        class MaximumRedistributePrefix; //type: Ospf::Processes::Process::Vrfs::Vrf::MaximumRedistributePrefix
        class DefaultInformation; //type: Ospf::Processes::Process::Vrfs::Vrf::DefaultInformation
        class Af; //type: Ospf::Processes::Process::Vrfs::Vrf::Af
        class Queue; //type: Ospf::Processes::Process::Vrfs::Vrf::Queue
        class MaxMetric; //type: Ospf::Processes::Process::Vrfs::Vrf::MaxMetric
        class Nsf; //type: Ospf::Processes::Process::Vrfs::Vrf::Nsf
        class ProcessScope; //type: Ospf::Processes::Process::Vrfs::Vrf::ProcessScope
        class Redistribution; //type: Ospf::Processes::Process::Vrfs::Vrf::Redistribution
        class AdjacencyStagger; //type: Ospf::Processes::Process::Vrfs::Vrf::AdjacencyStagger
        class MaxLsa; //type: Ospf::Processes::Process::Vrfs::Vrf::MaxLsa
        class AutoCost; //type: Ospf::Processes::Process::Vrfs::Vrf::AutoCost
        class Ucmp; //type: Ospf::Processes::Process::Vrfs::Vrf::Ucmp
        class FastReroute; //type: Ospf::Processes::Process::Vrfs::Vrf::FastReroute
        class SummaryPrefixes; //type: Ospf::Processes::Process::Vrfs::Vrf::SummaryPrefixes
        class OutgoingRouteUpdates; //type: Ospf::Processes::Process::Vrfs::Vrf::OutgoingRouteUpdates
        class Distance; //type: Ospf::Processes::Process::Vrfs::Vrf::Distance
        class AreaAddresses; //type: Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses
        class Timers; //type: Ospf::Processes::Process::Vrfs::Vrf::Timers

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_ospf_cfg::Ospf::Processes::Process::Vrfs::Vrf::DomainId> domain_id;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_ospf_cfg::Ospf::Processes::Process::Vrfs::Vrf::Microloop> microloop;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_ospf_cfg::Ospf::Processes::Process::Vrfs::Vrf::MaximumRedistributePrefix> maximum_redistribute_prefix;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_ospf_cfg::Ospf::Processes::Process::Vrfs::Vrf::DefaultInformation> default_information;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_ospf_cfg::Ospf::Processes::Process::Vrfs::Vrf::Af> af; // presence node
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_ospf_cfg::Ospf::Processes::Process::Vrfs::Vrf::Queue> queue;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_ospf_cfg::Ospf::Processes::Process::Vrfs::Vrf::MaxMetric> max_metric;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_ospf_cfg::Ospf::Processes::Process::Vrfs::Vrf::Nsf> nsf;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_ospf_cfg::Ospf::Processes::Process::Vrfs::Vrf::ProcessScope> process_scope;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_ospf_cfg::Ospf::Processes::Process::Vrfs::Vrf::Redistribution> redistribution;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_ospf_cfg::Ospf::Processes::Process::Vrfs::Vrf::AdjacencyStagger> adjacency_stagger;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_ospf_cfg::Ospf::Processes::Process::Vrfs::Vrf::MaxLsa> max_lsa; // presence node
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_ospf_cfg::Ospf::Processes::Process::Vrfs::Vrf::AutoCost> auto_cost;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_ospf_cfg::Ospf::Processes::Process::Vrfs::Vrf::Ucmp> ucmp;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_ospf_cfg::Ospf::Processes::Process::Vrfs::Vrf::FastReroute> fast_reroute;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_ospf_cfg::Ospf::Processes::Process::Vrfs::Vrf::SummaryPrefixes> summary_prefixes;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_ospf_cfg::Ospf::Processes::Process::Vrfs::Vrf::OutgoingRouteUpdates> outgoing_route_updates;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_ospf_cfg::Ospf::Processes::Process::Vrfs::Vrf::Distance> distance;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_ospf_cfg::Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses> area_addresses;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_ospf_cfg::Ospf::Processes::Process::Vrfs::Vrf::Timers> timers;
        
}; // Ospf::Processes::Process::Vrfs::Vrf


class Ospf::Processes::Process::Vrfs::Vrf::DomainId : public ydk::Entity
{
    public:
        DomainId();
        ~DomainId();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class PrimaryDomainId; //type: Ospf::Processes::Process::Vrfs::Vrf::DomainId::PrimaryDomainId
        class SecondaryDomainIds; //type: Ospf::Processes::Process::Vrfs::Vrf::DomainId::SecondaryDomainIds

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_ospf_cfg::Ospf::Processes::Process::Vrfs::Vrf::DomainId::PrimaryDomainId> primary_domain_id;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_ospf_cfg::Ospf::Processes::Process::Vrfs::Vrf::DomainId::SecondaryDomainIds> secondary_domain_ids;
        
}; // Ospf::Processes::Process::Vrfs::Vrf::DomainId


class Ospf::Processes::Process::Vrfs::Vrf::DomainId::PrimaryDomainId : public ydk::Entity
{
    public:
        PrimaryDomainId();
        ~PrimaryDomainId();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf domain_id_type; //type: OspfDomainId
        ydk::YLeaf domain_id_name; //type: string

}; // Ospf::Processes::Process::Vrfs::Vrf::DomainId::PrimaryDomainId


class Ospf::Processes::Process::Vrfs::Vrf::DomainId::SecondaryDomainIds : public ydk::Entity
{
    public:
        SecondaryDomainIds();
        ~SecondaryDomainIds();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class SecondaryDomainId; //type: Ospf::Processes::Process::Vrfs::Vrf::DomainId::SecondaryDomainIds::SecondaryDomainId

        ydk::YList secondary_domain_id;
        
}; // Ospf::Processes::Process::Vrfs::Vrf::DomainId::SecondaryDomainIds


class Ospf::Processes::Process::Vrfs::Vrf::DomainId::SecondaryDomainIds::SecondaryDomainId : public ydk::Entity
{
    public:
        SecondaryDomainId();
        ~SecondaryDomainId();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf domain_id_type; //type: OspfDomainId
        ydk::YLeaf domain_id_name; //type: string

}; // Ospf::Processes::Process::Vrfs::Vrf::DomainId::SecondaryDomainIds::SecondaryDomainId


class Ospf::Processes::Process::Vrfs::Vrf::Microloop : public ydk::Entity
{
    public:
        Microloop();
        ~Microloop();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Avoidance; //type: Ospf::Processes::Process::Vrfs::Vrf::Microloop::Avoidance

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_ospf_cfg::Ospf::Processes::Process::Vrfs::Vrf::Microloop::Avoidance> avoidance;
        
}; // Ospf::Processes::Process::Vrfs::Vrf::Microloop


class Ospf::Processes::Process::Vrfs::Vrf::Microloop::Avoidance : public ydk::Entity
{
    public:
        Avoidance();
        ~Avoidance();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf enable; //type: OspfUloopAvoidance
        ydk::YLeaf rib_update_delay; //type: uint32

}; // Ospf::Processes::Process::Vrfs::Vrf::Microloop::Avoidance


class Ospf::Processes::Process::Vrfs::Vrf::MaximumRedistributePrefix : public ydk::Entity
{
    public:
        MaximumRedistributePrefix();
        ~MaximumRedistributePrefix();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf number_of_prefixes; //type: uint32
        ydk::YLeaf threshold; //type: uint32
        ydk::YLeaf warning_only; //type: boolean

}; // Ospf::Processes::Process::Vrfs::Vrf::MaximumRedistributePrefix


class Ospf::Processes::Process::Vrfs::Vrf::DefaultInformation : public ydk::Entity
{
    public:
        DefaultInformation();
        ~DefaultInformation();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf always_advertise; //type: boolean
        ydk::YLeaf metric; //type: uint32
        ydk::YLeaf metric_type; //type: OspfLinkStateMetric
        ydk::YLeaf route_policy_name; //type: string

}; // Ospf::Processes::Process::Vrfs::Vrf::DefaultInformation


class Ospf::Processes::Process::Vrfs::Vrf::Af : public ydk::Entity
{
    public:
        Af();
        ~Af();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf af_name; //type: OspfAddressFamily
        ydk::YLeaf saf_name; //type: OspfSubAddressFamily

}; // Ospf::Processes::Process::Vrfs::Vrf::Af


class Ospf::Processes::Process::Vrfs::Vrf::Queue : public ydk::Entity
{
    public:
        Queue();
        ~Queue();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf dispatch_rate_limited_flush; //type: uint32
        ydk::YLeaf limit_high; //type: uint32
        ydk::YLeaf dispatch_spf_lsa_limit; //type: uint32
        ydk::YLeaf limit_low; //type: uint32
        ydk::YLeaf dispatch_rate_limited; //type: uint32
        ydk::YLeaf limit_medium; //type: uint32
        ydk::YLeaf dispatch_incoming; //type: uint32

}; // Ospf::Processes::Process::Vrfs::Vrf::Queue


class Ospf::Processes::Process::Vrfs::Vrf::MaxMetric : public ydk::Entity
{
    public:
        MaxMetric();
        ~MaxMetric();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf max_metric_no_abr_off; //type: empty
        class MaxMetricOnProcRestart; //type: Ospf::Processes::Process::Vrfs::Vrf::MaxMetric::MaxMetricOnProcRestart
        class MaxMetricOnStartup; //type: Ospf::Processes::Process::Vrfs::Vrf::MaxMetric::MaxMetricOnStartup
        class MaxMetricOnProcMigration; //type: Ospf::Processes::Process::Vrfs::Vrf::MaxMetric::MaxMetricOnProcMigration
        class MaxMetricAlways; //type: Ospf::Processes::Process::Vrfs::Vrf::MaxMetric::MaxMetricAlways
        class MaxMetricOnSwitchover; //type: Ospf::Processes::Process::Vrfs::Vrf::MaxMetric::MaxMetricOnSwitchover

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_ospf_cfg::Ospf::Processes::Process::Vrfs::Vrf::MaxMetric::MaxMetricOnProcRestart> max_metric_on_proc_restart;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_ospf_cfg::Ospf::Processes::Process::Vrfs::Vrf::MaxMetric::MaxMetricOnStartup> max_metric_on_startup;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_ospf_cfg::Ospf::Processes::Process::Vrfs::Vrf::MaxMetric::MaxMetricOnProcMigration> max_metric_on_proc_migration;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_ospf_cfg::Ospf::Processes::Process::Vrfs::Vrf::MaxMetric::MaxMetricAlways> max_metric_always;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_ospf_cfg::Ospf::Processes::Process::Vrfs::Vrf::MaxMetric::MaxMetricOnSwitchover> max_metric_on_switchover;
        
}; // Ospf::Processes::Process::Vrfs::Vrf::MaxMetric


class Ospf::Processes::Process::Vrfs::Vrf::MaxMetric::MaxMetricOnProcRestart : public ydk::Entity
{
    public:
        MaxMetricOnProcRestart();
        ~MaxMetricOnProcRestart();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf wait_for_bgp; //type: boolean
        ydk::YLeaf startup_max; //type: uint32
        ydk::YLeaf include_stub; //type: boolean
        ydk::YLeaf summary_lsa; //type: boolean
        ydk::YLeaf summary_lsa_maximum_metric; //type: uint32
        ydk::YLeaf external_lsa; //type: boolean
        ydk::YLeaf external_lsa_maximum_metric; //type: uint32

}; // Ospf::Processes::Process::Vrfs::Vrf::MaxMetric::MaxMetricOnProcRestart


class Ospf::Processes::Process::Vrfs::Vrf::MaxMetric::MaxMetricOnStartup : public ydk::Entity
{
    public:
        MaxMetricOnStartup();
        ~MaxMetricOnStartup();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf wait_for_bgp; //type: boolean
        ydk::YLeaf startup_max; //type: uint32
        ydk::YLeaf include_stub; //type: boolean
        ydk::YLeaf summary_lsa; //type: boolean
        ydk::YLeaf summary_lsa_maximum_metric; //type: uint32
        ydk::YLeaf external_lsa; //type: boolean
        ydk::YLeaf external_lsa_maximum_metric; //type: uint32

}; // Ospf::Processes::Process::Vrfs::Vrf::MaxMetric::MaxMetricOnStartup


class Ospf::Processes::Process::Vrfs::Vrf::MaxMetric::MaxMetricOnProcMigration : public ydk::Entity
{
    public:
        MaxMetricOnProcMigration();
        ~MaxMetricOnProcMigration();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf wait_for_bgp; //type: boolean
        ydk::YLeaf startup_max; //type: uint32
        ydk::YLeaf include_stub; //type: boolean
        ydk::YLeaf summary_lsa; //type: boolean
        ydk::YLeaf summary_lsa_maximum_metric; //type: uint32
        ydk::YLeaf external_lsa; //type: boolean
        ydk::YLeaf external_lsa_maximum_metric; //type: uint32

}; // Ospf::Processes::Process::Vrfs::Vrf::MaxMetric::MaxMetricOnProcMigration


class Ospf::Processes::Process::Vrfs::Vrf::MaxMetric::MaxMetricAlways : public ydk::Entity
{
    public:
        MaxMetricAlways();
        ~MaxMetricAlways();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf include_stub; //type: boolean
        ydk::YLeaf summary_lsa; //type: boolean
        ydk::YLeaf summary_lsa_maximum_metric; //type: uint32
        ydk::YLeaf external_lsa; //type: boolean
        ydk::YLeaf external_lsa_maximum_metric; //type: uint32

}; // Ospf::Processes::Process::Vrfs::Vrf::MaxMetric::MaxMetricAlways


class Ospf::Processes::Process::Vrfs::Vrf::MaxMetric::MaxMetricOnSwitchover : public ydk::Entity
{
    public:
        MaxMetricOnSwitchover();
        ~MaxMetricOnSwitchover();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf wait_for_bgp; //type: boolean
        ydk::YLeaf startup_max; //type: uint32
        ydk::YLeaf include_stub; //type: boolean
        ydk::YLeaf summary_lsa; //type: boolean
        ydk::YLeaf summary_lsa_maximum_metric; //type: uint32
        ydk::YLeaf external_lsa; //type: boolean
        ydk::YLeaf external_lsa_maximum_metric; //type: uint32

}; // Ospf::Processes::Process::Vrfs::Vrf::MaxMetric::MaxMetricOnSwitchover


class Ospf::Processes::Process::Vrfs::Vrf::Nsf : public ydk::Entity
{
    public:
        Nsf();
        ~Nsf();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf lifetime; //type: uint32
        ydk::YLeaf ietf; //type: OspfIetfNsf
        ydk::YLeaf ietf_support_role; //type: OspfIetfNsfSupport
        ydk::YLeaf cisco; //type: OspfCiscoNsf
        ydk::YLeaf interval; //type: uint32
        ydk::YLeaf flush_delay_time; //type: uint32
        ydk::YLeaf ietf_strict_lsa_checking; //type: empty

}; // Ospf::Processes::Process::Vrfs::Vrf::Nsf


class Ospf::Processes::Process::Vrfs::Vrf::ProcessScope : public ydk::Entity
{
    public:
        ProcessScope();
        ~ProcessScope();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf cost; //type: uint32
        ydk::YLeaf external_out; //type: boolean
        ydk::YLeaf prefix_suppression_primary; //type: boolean
        ydk::YLeaf mtu_ignore; //type: boolean
        ydk::YLeaf ldp_sync_igp_shortcuts; //type: boolean
        ydk::YLeaf ldp_auto_config; //type: empty
        ydk::YLeaf summary_in; //type: boolean
        ydk::YLeaf network_type; //type: OspfNetwork
        ydk::YLeaf hello_interval; //type: uint32
        ydk::YLeaf loopback_stub_network; //type: boolean
        ydk::YLeaf prefix_suppression_secondary; //type: boolean
        ydk::YLeaf demand_circuit; //type: boolean
        ydk::YLeaf segment_routing; //type: OspfSegmentRouting
        ydk::YLeaf passive; //type: boolean
        ydk::YLeaf transmit_delay; //type: uint32
        ydk::YLeaf packet_size; //type: uint32
        ydk::YLeaf ldp_sync; //type: boolean
        ydk::YLeaf database_filter; //type: boolean
        ydk::YLeaf link_down_fast_detect; //type: boolean
        ydk::YLeaf segment_routing_forwarding; //type: OspfSegmentRoutingForwarding
        ydk::YLeaf retransmit_interval; //type: uint32
        ydk::YLeaf priority; //type: uint32
        ydk::YLeaf flood_reduction; //type: boolean
        class Srgb; //type: Ospf::Processes::Process::Vrfs::Vrf::ProcessScope::Srgb
        class FastReroute; //type: Ospf::Processes::Process::Vrfs::Vrf::ProcessScope::FastReroute
        class DistributeList; //type: Ospf::Processes::Process::Vrfs::Vrf::ProcessScope::DistributeList
        class Bfd; //type: Ospf::Processes::Process::Vrfs::Vrf::ProcessScope::Bfd
        class Authentication; //type: Ospf::Processes::Process::Vrfs::Vrf::ProcessScope::Authentication
        class Security; //type: Ospf::Processes::Process::Vrfs::Vrf::ProcessScope::Security
        class DeadIntervalMinimal; //type: Ospf::Processes::Process::Vrfs::Vrf::ProcessScope::DeadIntervalMinimal
        class CostFallback; //type: Ospf::Processes::Process::Vrfs::Vrf::ProcessScope::CostFallback

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_ospf_cfg::Ospf::Processes::Process::Vrfs::Vrf::ProcessScope::Srgb> srgb; // presence node
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_ospf_cfg::Ospf::Processes::Process::Vrfs::Vrf::ProcessScope::FastReroute> fast_reroute;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_ospf_cfg::Ospf::Processes::Process::Vrfs::Vrf::ProcessScope::DistributeList> distribute_list; // presence node
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_ospf_cfg::Ospf::Processes::Process::Vrfs::Vrf::ProcessScope::Bfd> bfd;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_ospf_cfg::Ospf::Processes::Process::Vrfs::Vrf::ProcessScope::Authentication> authentication;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_ospf_cfg::Ospf::Processes::Process::Vrfs::Vrf::ProcessScope::Security> security;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_ospf_cfg::Ospf::Processes::Process::Vrfs::Vrf::ProcessScope::DeadIntervalMinimal> dead_interval_minimal;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_ospf_cfg::Ospf::Processes::Process::Vrfs::Vrf::ProcessScope::CostFallback> cost_fallback;
        
}; // Ospf::Processes::Process::Vrfs::Vrf::ProcessScope


class Ospf::Processes::Process::Vrfs::Vrf::ProcessScope::Srgb : public ydk::Entity
{
    public:
        Srgb();
        ~Srgb();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf lower_bound; //type: uint32
        ydk::YLeaf upper_bound; //type: uint32

}; // Ospf::Processes::Process::Vrfs::Vrf::ProcessScope::Srgb


class Ospf::Processes::Process::Vrfs::Vrf::ProcessScope::FastReroute : public ydk::Entity
{
    public:
        FastReroute();
        ~FastReroute();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf fast_reroute_enable; //type: OspfProcFastReroute
        class PerLink; //type: Ospf::Processes::Process::Vrfs::Vrf::ProcessScope::FastReroute::PerLink
        class PerPrefix; //type: Ospf::Processes::Process::Vrfs::Vrf::ProcessScope::FastReroute::PerPrefix

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_ospf_cfg::Ospf::Processes::Process::Vrfs::Vrf::ProcessScope::FastReroute::PerLink> per_link;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_ospf_cfg::Ospf::Processes::Process::Vrfs::Vrf::ProcessScope::FastReroute::PerPrefix> per_prefix;
        
}; // Ospf::Processes::Process::Vrfs::Vrf::ProcessScope::FastReroute


class Ospf::Processes::Process::Vrfs::Vrf::ProcessScope::FastReroute::PerLink : public ydk::Entity
{
    public:
        PerLink();
        ~PerLink();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf fast_reroute_use_candidate_only; //type: boolean
        class CandidateInterfaces; //type: Ospf::Processes::Process::Vrfs::Vrf::ProcessScope::FastReroute::PerLink::CandidateInterfaces
        class ExcludeInterfaces; //type: Ospf::Processes::Process::Vrfs::Vrf::ProcessScope::FastReroute::PerLink::ExcludeInterfaces

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_ospf_cfg::Ospf::Processes::Process::Vrfs::Vrf::ProcessScope::FastReroute::PerLink::CandidateInterfaces> candidate_interfaces;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_ospf_cfg::Ospf::Processes::Process::Vrfs::Vrf::ProcessScope::FastReroute::PerLink::ExcludeInterfaces> exclude_interfaces;
        
}; // Ospf::Processes::Process::Vrfs::Vrf::ProcessScope::FastReroute::PerLink


class Ospf::Processes::Process::Vrfs::Vrf::ProcessScope::FastReroute::PerLink::CandidateInterfaces : public ydk::Entity
{
    public:
        CandidateInterfaces();
        ~CandidateInterfaces();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class CandidateInterface; //type: Ospf::Processes::Process::Vrfs::Vrf::ProcessScope::FastReroute::PerLink::CandidateInterfaces::CandidateInterface

        ydk::YList candidate_interface;
        
}; // Ospf::Processes::Process::Vrfs::Vrf::ProcessScope::FastReroute::PerLink::CandidateInterfaces


class Ospf::Processes::Process::Vrfs::Vrf::ProcessScope::FastReroute::PerLink::CandidateInterfaces::CandidateInterface : public ydk::Entity
{
    public:
        CandidateInterface();
        ~CandidateInterface();

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

}; // Ospf::Processes::Process::Vrfs::Vrf::ProcessScope::FastReroute::PerLink::CandidateInterfaces::CandidateInterface


class Ospf::Processes::Process::Vrfs::Vrf::ProcessScope::FastReroute::PerLink::ExcludeInterfaces : public ydk::Entity
{
    public:
        ExcludeInterfaces();
        ~ExcludeInterfaces();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class ExcludeInterface; //type: Ospf::Processes::Process::Vrfs::Vrf::ProcessScope::FastReroute::PerLink::ExcludeInterfaces::ExcludeInterface

        ydk::YList exclude_interface;
        
}; // Ospf::Processes::Process::Vrfs::Vrf::ProcessScope::FastReroute::PerLink::ExcludeInterfaces


class Ospf::Processes::Process::Vrfs::Vrf::ProcessScope::FastReroute::PerLink::ExcludeInterfaces::ExcludeInterface : public ydk::Entity
{
    public:
        ExcludeInterface();
        ~ExcludeInterface();

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

}; // Ospf::Processes::Process::Vrfs::Vrf::ProcessScope::FastReroute::PerLink::ExcludeInterfaces::ExcludeInterface


class Ospf::Processes::Process::Vrfs::Vrf::ProcessScope::FastReroute::PerPrefix : public ydk::Entity
{
    public:
        PerPrefix();
        ~PerPrefix();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf topology_independent_lfa; //type: boolean
        ydk::YLeaf fast_reroute_use_candidate_only; //type: boolean
        class RemoteLfa; //type: Ospf::Processes::Process::Vrfs::Vrf::ProcessScope::FastReroute::PerPrefix::RemoteLfa
        class CandidateInterfaces; //type: Ospf::Processes::Process::Vrfs::Vrf::ProcessScope::FastReroute::PerPrefix::CandidateInterfaces
        class ExcludeInterfaces; //type: Ospf::Processes::Process::Vrfs::Vrf::ProcessScope::FastReroute::PerPrefix::ExcludeInterfaces

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_ospf_cfg::Ospf::Processes::Process::Vrfs::Vrf::ProcessScope::FastReroute::PerPrefix::RemoteLfa> remote_lfa;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_ospf_cfg::Ospf::Processes::Process::Vrfs::Vrf::ProcessScope::FastReroute::PerPrefix::CandidateInterfaces> candidate_interfaces;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_ospf_cfg::Ospf::Processes::Process::Vrfs::Vrf::ProcessScope::FastReroute::PerPrefix::ExcludeInterfaces> exclude_interfaces;
        
}; // Ospf::Processes::Process::Vrfs::Vrf::ProcessScope::FastReroute::PerPrefix


class Ospf::Processes::Process::Vrfs::Vrf::ProcessScope::FastReroute::PerPrefix::RemoteLfa : public ydk::Entity
{
    public:
        RemoteLfa();
        ~RemoteLfa();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf tunnel; //type: OspfProcFrrRlfaTunnel
        ydk::YLeaf maximum_cost; //type: uint32

}; // Ospf::Processes::Process::Vrfs::Vrf::ProcessScope::FastReroute::PerPrefix::RemoteLfa


class Ospf::Processes::Process::Vrfs::Vrf::ProcessScope::FastReroute::PerPrefix::CandidateInterfaces : public ydk::Entity
{
    public:
        CandidateInterfaces();
        ~CandidateInterfaces();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class CandidateInterface; //type: Ospf::Processes::Process::Vrfs::Vrf::ProcessScope::FastReroute::PerPrefix::CandidateInterfaces::CandidateInterface

        ydk::YList candidate_interface;
        
}; // Ospf::Processes::Process::Vrfs::Vrf::ProcessScope::FastReroute::PerPrefix::CandidateInterfaces


class Ospf::Processes::Process::Vrfs::Vrf::ProcessScope::FastReroute::PerPrefix::CandidateInterfaces::CandidateInterface : public ydk::Entity
{
    public:
        CandidateInterface();
        ~CandidateInterface();

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

}; // Ospf::Processes::Process::Vrfs::Vrf::ProcessScope::FastReroute::PerPrefix::CandidateInterfaces::CandidateInterface


class Ospf::Processes::Process::Vrfs::Vrf::ProcessScope::FastReroute::PerPrefix::ExcludeInterfaces : public ydk::Entity
{
    public:
        ExcludeInterfaces();
        ~ExcludeInterfaces();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class ExcludeInterface; //type: Ospf::Processes::Process::Vrfs::Vrf::ProcessScope::FastReroute::PerPrefix::ExcludeInterfaces::ExcludeInterface

        ydk::YList exclude_interface;
        
}; // Ospf::Processes::Process::Vrfs::Vrf::ProcessScope::FastReroute::PerPrefix::ExcludeInterfaces


class Ospf::Processes::Process::Vrfs::Vrf::ProcessScope::FastReroute::PerPrefix::ExcludeInterfaces::ExcludeInterface : public ydk::Entity
{
    public:
        ExcludeInterface();
        ~ExcludeInterface();

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

}; // Ospf::Processes::Process::Vrfs::Vrf::ProcessScope::FastReroute::PerPrefix::ExcludeInterfaces::ExcludeInterface


class Ospf::Processes::Process::Vrfs::Vrf::ProcessScope::DistributeList : public ydk::Entity
{
    public:
        DistributeList();
        ~DistributeList();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf access_list_name; //type: string
        ydk::YLeaf route_policy_name; //type: string

}; // Ospf::Processes::Process::Vrfs::Vrf::ProcessScope::DistributeList


class Ospf::Processes::Process::Vrfs::Vrf::ProcessScope::Bfd : public ydk::Entity
{
    public:
        Bfd();
        ~Bfd();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf interval; //type: uint32
        ydk::YLeaf detection_multiplier; //type: uint32
        ydk::YLeaf fast_detect_mode; //type: BfdEnableMode

}; // Ospf::Processes::Process::Vrfs::Vrf::ProcessScope::Bfd


class Ospf::Processes::Process::Vrfs::Vrf::ProcessScope::Authentication : public ydk::Entity
{
    public:
        Authentication();
        ~Authentication();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf key; //type: string
        class Type; //type: Ospf::Processes::Process::Vrfs::Vrf::ProcessScope::Authentication::Type
        class MessageDigestKeys; //type: Ospf::Processes::Process::Vrfs::Vrf::ProcessScope::Authentication::MessageDigestKeys

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_ospf_cfg::Ospf::Processes::Process::Vrfs::Vrf::ProcessScope::Authentication::Type> type;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_ospf_cfg::Ospf::Processes::Process::Vrfs::Vrf::ProcessScope::Authentication::MessageDigestKeys> message_digest_keys;
        
}; // Ospf::Processes::Process::Vrfs::Vrf::ProcessScope::Authentication


class Ospf::Processes::Process::Vrfs::Vrf::ProcessScope::Authentication::Type : public ydk::Entity
{
    public:
        Type();
        ~Type();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf authen_type; //type: OspfAuthentication
        ydk::YLeaf keychain_authen_type; //type: OspfKeychainAuth
        ydk::YLeaf keychain_name; //type: string

}; // Ospf::Processes::Process::Vrfs::Vrf::ProcessScope::Authentication::Type


class Ospf::Processes::Process::Vrfs::Vrf::ProcessScope::Authentication::MessageDigestKeys : public ydk::Entity
{
    public:
        MessageDigestKeys();
        ~MessageDigestKeys();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class MessageDigestKey; //type: Ospf::Processes::Process::Vrfs::Vrf::ProcessScope::Authentication::MessageDigestKeys::MessageDigestKey

        ydk::YList message_digest_key;
        
}; // Ospf::Processes::Process::Vrfs::Vrf::ProcessScope::Authentication::MessageDigestKeys


class Ospf::Processes::Process::Vrfs::Vrf::ProcessScope::Authentication::MessageDigestKeys::MessageDigestKey : public ydk::Entity
{
    public:
        MessageDigestKey();
        ~MessageDigestKey();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf key_id; //type: uint32
        ydk::YLeaf password; //type: string

}; // Ospf::Processes::Process::Vrfs::Vrf::ProcessScope::Authentication::MessageDigestKeys::MessageDigestKey


class Ospf::Processes::Process::Vrfs::Vrf::ProcessScope::Security : public ydk::Entity
{
    public:
        Security();
        ~Security();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Ttl; //type: Ospf::Processes::Process::Vrfs::Vrf::ProcessScope::Security::Ttl

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_ospf_cfg::Ospf::Processes::Process::Vrfs::Vrf::ProcessScope::Security::Ttl> ttl;
        
}; // Ospf::Processes::Process::Vrfs::Vrf::ProcessScope::Security


class Ospf::Processes::Process::Vrfs::Vrf::ProcessScope::Security::Ttl : public ydk::Entity
{
    public:
        Ttl();
        ~Ttl();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf enable; //type: boolean
        ydk::YLeaf hop_count; //type: uint32

}; // Ospf::Processes::Process::Vrfs::Vrf::ProcessScope::Security::Ttl


class Ospf::Processes::Process::Vrfs::Vrf::ProcessScope::DeadIntervalMinimal : public ydk::Entity
{
    public:
        DeadIntervalMinimal();
        ~DeadIntervalMinimal();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf interval; //type: uint32
        ydk::YLeaf multiplier; //type: uint32

}; // Ospf::Processes::Process::Vrfs::Vrf::ProcessScope::DeadIntervalMinimal


class Ospf::Processes::Process::Vrfs::Vrf::ProcessScope::CostFallback : public ydk::Entity
{
    public:
        CostFallback();
        ~CostFallback();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf cost; //type: uint32
        ydk::YLeaf threshold; //type: uint32

}; // Ospf::Processes::Process::Vrfs::Vrf::ProcessScope::CostFallback


class Ospf::Processes::Process::Vrfs::Vrf::Redistribution : public ydk::Entity
{
    public:
        Redistribution();
        ~Redistribution();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Redistributes; //type: Ospf::Processes::Process::Vrfs::Vrf::Redistribution::Redistributes

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_ospf_cfg::Ospf::Processes::Process::Vrfs::Vrf::Redistribution::Redistributes> redistributes;
        
}; // Ospf::Processes::Process::Vrfs::Vrf::Redistribution


class Ospf::Processes::Process::Vrfs::Vrf::Redistribution::Redistributes : public ydk::Entity
{
    public:
        Redistributes();
        ~Redistributes();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Redistribute; //type: Ospf::Processes::Process::Vrfs::Vrf::Redistribution::Redistributes::Redistribute

        ydk::YList redistribute;
        
}; // Ospf::Processes::Process::Vrfs::Vrf::Redistribution::Redistributes


class Ospf::Processes::Process::Vrfs::Vrf::Redistribution::Redistributes::Redistribute : public ydk::Entity
{
    public:
        Redistribute();
        ~Redistribute();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf protocol_name; //type: OspfRedistProtocol
        class ConnectedOrStaticOrDagrOrSubscriberOrMobileOrRip; //type: Ospf::Processes::Process::Vrfs::Vrf::Redistribution::Redistributes::Redistribute::ConnectedOrStaticOrDagrOrSubscriberOrMobileOrRip
        class ApplicationOrIsisOrOspf; //type: Ospf::Processes::Process::Vrfs::Vrf::Redistribution::Redistributes::Redistribute::ApplicationOrIsisOrOspf
        class Bgp; //type: Ospf::Processes::Process::Vrfs::Vrf::Redistribution::Redistributes::Redistribute::Bgp
        class Eigrp; //type: Ospf::Processes::Process::Vrfs::Vrf::Redistribution::Redistributes::Redistribute::Eigrp

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_ospf_cfg::Ospf::Processes::Process::Vrfs::Vrf::Redistribution::Redistributes::Redistribute::ConnectedOrStaticOrDagrOrSubscriberOrMobileOrRip> connected_or_static_or_dagr_or_subscriber_or_mobile_or_rip; // presence node
        ydk::YList application_or_isis_or_ospf;
        ydk::YList bgp;
        ydk::YList eigrp;
        
}; // Ospf::Processes::Process::Vrfs::Vrf::Redistribution::Redistributes::Redistribute


class Ospf::Processes::Process::Vrfs::Vrf::Redistribution::Redistributes::Redistribute::ConnectedOrStaticOrDagrOrSubscriberOrMobileOrRip : public ydk::Entity
{
    public:
        ConnectedOrStaticOrDagrOrSubscriberOrMobileOrRip();
        ~ConnectedOrStaticOrDagrOrSubscriberOrMobileOrRip();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf classful; //type: boolean
        ydk::YLeaf default_redistributed_route_metric; //type: uint32
        ydk::YLeaf tag; //type: uint32
        ydk::YLeaf metric_type; //type: OspfLinkStateMetric
        ydk::YLeaf eigrp_route_type; //type: OspfEigrpRoute
        ydk::YLeaf isis_levels; //type: OspfRouteLevel
        ydk::YLeaf ospf_internal; //type: boolean
        ydk::YLeaf ospf_external; //type: OspfRouteLevel
        ydk::YLeaf ospf_nssa_level; //type: OspfRouteLevel
        ydk::YLeaf route_policy_name; //type: string
        ydk::YLeaf bgp_preserve_med; //type: boolean
        ydk::YLeaf bgp_preserve_default_info; //type: boolean
        ydk::YLeaf ospf_redist_lsa_type; //type: OspfRedistLsa
        ydk::YLeaf ospfnssa_only; //type: boolean
        ydk::YLeaf ospf_use_rib_metric; //type: boolean

}; // Ospf::Processes::Process::Vrfs::Vrf::Redistribution::Redistributes::Redistribute::ConnectedOrStaticOrDagrOrSubscriberOrMobileOrRip


class Ospf::Processes::Process::Vrfs::Vrf::Redistribution::Redistributes::Redistribute::ApplicationOrIsisOrOspf : public ydk::Entity
{
    public:
        ApplicationOrIsisOrOspf();
        ~ApplicationOrIsisOrOspf();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf instance_name; //type: string
        ydk::YLeaf classful; //type: boolean
        ydk::YLeaf default_redistributed_route_metric; //type: uint32
        ydk::YLeaf tag; //type: uint32
        ydk::YLeaf metric_type; //type: OspfLinkStateMetric
        ydk::YLeaf eigrp_route_type; //type: OspfEigrpRoute
        ydk::YLeaf isis_levels; //type: OspfRouteLevel
        ydk::YLeaf ospf_internal; //type: boolean
        ydk::YLeaf ospf_external; //type: OspfRouteLevel
        ydk::YLeaf ospf_nssa_level; //type: OspfRouteLevel
        ydk::YLeaf route_policy_name; //type: string
        ydk::YLeaf bgp_preserve_med; //type: boolean
        ydk::YLeaf bgp_preserve_default_info; //type: boolean
        ydk::YLeaf ospf_redist_lsa_type; //type: OspfRedistLsa
        ydk::YLeaf ospfnssa_only; //type: boolean
        ydk::YLeaf ospf_use_rib_metric; //type: boolean

}; // Ospf::Processes::Process::Vrfs::Vrf::Redistribution::Redistributes::Redistribute::ApplicationOrIsisOrOspf


class Ospf::Processes::Process::Vrfs::Vrf::Redistribution::Redistributes::Redistribute::Bgp : public ydk::Entity
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

        ydk::YLeaf instance_name; //type: string
        ydk::YLeaf as_xx; //type: uint32
        ydk::YLeaf as_yy; //type: uint32
        ydk::YLeaf classful; //type: boolean
        ydk::YLeaf default_redistributed_route_metric; //type: uint32
        ydk::YLeaf tag; //type: uint32
        ydk::YLeaf metric_type; //type: OspfLinkStateMetric
        ydk::YLeaf eigrp_route_type; //type: OspfEigrpRoute
        ydk::YLeaf isis_levels; //type: OspfRouteLevel
        ydk::YLeaf ospf_internal; //type: boolean
        ydk::YLeaf ospf_external; //type: OspfRouteLevel
        ydk::YLeaf ospf_nssa_level; //type: OspfRouteLevel
        ydk::YLeaf route_policy_name; //type: string
        ydk::YLeaf bgp_preserve_med; //type: boolean
        ydk::YLeaf bgp_preserve_default_info; //type: boolean
        ydk::YLeaf ospf_redist_lsa_type; //type: OspfRedistLsa
        ydk::YLeaf ospfnssa_only; //type: boolean
        ydk::YLeaf ospf_use_rib_metric; //type: boolean

}; // Ospf::Processes::Process::Vrfs::Vrf::Redistribution::Redistributes::Redistribute::Bgp


class Ospf::Processes::Process::Vrfs::Vrf::Redistribution::Redistributes::Redistribute::Eigrp : public ydk::Entity
{
    public:
        Eigrp();
        ~Eigrp();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf instance_name; //type: string
        ydk::YLeaf as_xx; //type: uint32
        ydk::YLeaf classful; //type: boolean
        ydk::YLeaf default_redistributed_route_metric; //type: uint32
        ydk::YLeaf tag; //type: uint32
        ydk::YLeaf metric_type; //type: OspfLinkStateMetric
        ydk::YLeaf eigrp_route_type; //type: OspfEigrpRoute
        ydk::YLeaf isis_levels; //type: OspfRouteLevel
        ydk::YLeaf ospf_internal; //type: boolean
        ydk::YLeaf ospf_external; //type: OspfRouteLevel
        ydk::YLeaf ospf_nssa_level; //type: OspfRouteLevel
        ydk::YLeaf route_policy_name; //type: string
        ydk::YLeaf bgp_preserve_med; //type: boolean
        ydk::YLeaf bgp_preserve_default_info; //type: boolean
        ydk::YLeaf ospf_redist_lsa_type; //type: OspfRedistLsa
        ydk::YLeaf ospfnssa_only; //type: boolean
        ydk::YLeaf ospf_use_rib_metric; //type: boolean

}; // Ospf::Processes::Process::Vrfs::Vrf::Redistribution::Redistributes::Redistribute::Eigrp


class Ospf::Processes::Process::Vrfs::Vrf::AdjacencyStagger : public ydk::Entity
{
    public:
        AdjacencyStagger();
        ~AdjacencyStagger();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf disable; //type: empty
        ydk::YLeaf initial_nbr; //type: uint32
        ydk::YLeaf max_nbr; //type: uint32

}; // Ospf::Processes::Process::Vrfs::Vrf::AdjacencyStagger


class Ospf::Processes::Process::Vrfs::Vrf::MaxLsa : public ydk::Entity
{
    public:
        MaxLsa();
        ~MaxLsa();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf max_lsa_limit; //type: uint32
        ydk::YLeaf max_lsa_threshold; //type: uint32
        ydk::YLeaf max_lsa_warning_only; //type: boolean
        ydk::YLeaf max_lsa_ignore_time; //type: uint32
        ydk::YLeaf max_lsa_ignore_count; //type: uint32
        ydk::YLeaf max_lsa_reset_time; //type: uint32

}; // Ospf::Processes::Process::Vrfs::Vrf::MaxLsa


class Ospf::Processes::Process::Vrfs::Vrf::AutoCost : public ydk::Entity
{
    public:
        AutoCost();
        ~AutoCost();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf disable; //type: boolean
        ydk::YLeaf bandwidth; //type: uint32

}; // Ospf::Processes::Process::Vrfs::Vrf::AutoCost


class Ospf::Processes::Process::Vrfs::Vrf::Ucmp : public ydk::Entity
{
    public:
        Ucmp();
        ~Ucmp();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf delay_interval; //type: uint32
        class Enable; //type: Ospf::Processes::Process::Vrfs::Vrf::Ucmp::Enable
        class ExcludeInterfaces; //type: Ospf::Processes::Process::Vrfs::Vrf::Ucmp::ExcludeInterfaces

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_ospf_cfg::Ospf::Processes::Process::Vrfs::Vrf::Ucmp::Enable> enable;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_ospf_cfg::Ospf::Processes::Process::Vrfs::Vrf::Ucmp::ExcludeInterfaces> exclude_interfaces;
        
}; // Ospf::Processes::Process::Vrfs::Vrf::Ucmp


class Ospf::Processes::Process::Vrfs::Vrf::Ucmp::Enable : public ydk::Entity
{
    public:
        Enable();
        ~Enable();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf variance; //type: uint32
        ydk::YLeaf prefix_list_name; //type: string

}; // Ospf::Processes::Process::Vrfs::Vrf::Ucmp::Enable


class Ospf::Processes::Process::Vrfs::Vrf::Ucmp::ExcludeInterfaces : public ydk::Entity
{
    public:
        ExcludeInterfaces();
        ~ExcludeInterfaces();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class ExcludeInterface; //type: Ospf::Processes::Process::Vrfs::Vrf::Ucmp::ExcludeInterfaces::ExcludeInterface

        ydk::YList exclude_interface;
        
}; // Ospf::Processes::Process::Vrfs::Vrf::Ucmp::ExcludeInterfaces


class Ospf::Processes::Process::Vrfs::Vrf::Ucmp::ExcludeInterfaces::ExcludeInterface : public ydk::Entity
{
    public:
        ExcludeInterface();
        ~ExcludeInterface();

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

}; // Ospf::Processes::Process::Vrfs::Vrf::Ucmp::ExcludeInterfaces::ExcludeInterface


class Ospf::Processes::Process::Vrfs::Vrf::FastReroute : public ydk::Entity
{
    public:
        FastReroute();
        ~FastReroute();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class PerLink; //type: Ospf::Processes::Process::Vrfs::Vrf::FastReroute::PerLink
        class PerPrefix; //type: Ospf::Processes::Process::Vrfs::Vrf::FastReroute::PerPrefix

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_ospf_cfg::Ospf::Processes::Process::Vrfs::Vrf::FastReroute::PerLink> per_link;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_ospf_cfg::Ospf::Processes::Process::Vrfs::Vrf::FastReroute::PerPrefix> per_prefix;
        
}; // Ospf::Processes::Process::Vrfs::Vrf::FastReroute


class Ospf::Processes::Process::Vrfs::Vrf::FastReroute::PerLink : public ydk::Entity
{
    public:
        PerLink();
        ~PerLink();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf priority; //type: OspfFastReroutePriority

}; // Ospf::Processes::Process::Vrfs::Vrf::FastReroute::PerLink


class Ospf::Processes::Process::Vrfs::Vrf::FastReroute::PerPrefix : public ydk::Entity
{
    public:
        PerPrefix();
        ~PerPrefix();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf load_sharing_disable; //type: empty
        ydk::YLeaf priority; //type: OspfFastReroutePriority
        class Tiebreakers; //type: Ospf::Processes::Process::Vrfs::Vrf::FastReroute::PerPrefix::Tiebreakers

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_ospf_cfg::Ospf::Processes::Process::Vrfs::Vrf::FastReroute::PerPrefix::Tiebreakers> tiebreakers;
        
}; // Ospf::Processes::Process::Vrfs::Vrf::FastReroute::PerPrefix


class Ospf::Processes::Process::Vrfs::Vrf::FastReroute::PerPrefix::Tiebreakers : public ydk::Entity
{
    public:
        Tiebreakers();
        ~Tiebreakers();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Tiebreaker; //type: Ospf::Processes::Process::Vrfs::Vrf::FastReroute::PerPrefix::Tiebreakers::Tiebreaker

        ydk::YList tiebreaker;
        
}; // Ospf::Processes::Process::Vrfs::Vrf::FastReroute::PerPrefix::Tiebreakers


class Ospf::Processes::Process::Vrfs::Vrf::FastReroute::PerPrefix::Tiebreakers::Tiebreaker : public ydk::Entity
{
    public:
        Tiebreaker();
        ~Tiebreaker();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf tiebreaker_type; //type: OspfFastRerouteTiebreakers
        ydk::YLeaf tiebreaker_index; //type: uint32

}; // Ospf::Processes::Process::Vrfs::Vrf::FastReroute::PerPrefix::Tiebreakers::Tiebreaker


class Ospf::Processes::Process::Vrfs::Vrf::SummaryPrefixes : public ydk::Entity
{
    public:
        SummaryPrefixes();
        ~SummaryPrefixes();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class SummaryPrefixData; //type: Ospf::Processes::Process::Vrfs::Vrf::SummaryPrefixes::SummaryPrefixData
        class PrefixAndNetmask; //type: Ospf::Processes::Process::Vrfs::Vrf::SummaryPrefixes::PrefixAndNetmask
        class Prefix; //type: Ospf::Processes::Process::Vrfs::Vrf::SummaryPrefixes::Prefix
        class Netmask; //type: Ospf::Processes::Process::Vrfs::Vrf::SummaryPrefixes::Netmask

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_ospf_cfg::Ospf::Processes::Process::Vrfs::Vrf::SummaryPrefixes::SummaryPrefixData> summary_prefix_data;
        ydk::YList prefix_and_netmask;
        ydk::YList prefix;
        ydk::YList netmask;
        
}; // Ospf::Processes::Process::Vrfs::Vrf::SummaryPrefixes


class Ospf::Processes::Process::Vrfs::Vrf::SummaryPrefixes::SummaryPrefixData : public ydk::Entity
{
    public:
        SummaryPrefixData();
        ~SummaryPrefixData();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf not_advertise; //type: boolean
        ydk::YLeaf tag; //type: uint32

}; // Ospf::Processes::Process::Vrfs::Vrf::SummaryPrefixes::SummaryPrefixData


class Ospf::Processes::Process::Vrfs::Vrf::SummaryPrefixes::PrefixAndNetmask : public ydk::Entity
{
    public:
        PrefixAndNetmask();
        ~PrefixAndNetmask();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf prefix; //type: string
        ydk::YLeaf netmask; //type: string
        ydk::YLeaf not_advertise; //type: boolean
        ydk::YLeaf tag; //type: uint32

}; // Ospf::Processes::Process::Vrfs::Vrf::SummaryPrefixes::PrefixAndNetmask


class Ospf::Processes::Process::Vrfs::Vrf::SummaryPrefixes::Prefix : public ydk::Entity
{
    public:
        Prefix();
        ~Prefix();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf prefix; //type: string
        ydk::YLeaf not_advertise; //type: boolean
        ydk::YLeaf tag; //type: uint32

}; // Ospf::Processes::Process::Vrfs::Vrf::SummaryPrefixes::Prefix


class Ospf::Processes::Process::Vrfs::Vrf::SummaryPrefixes::Netmask : public ydk::Entity
{
    public:
        Netmask();
        ~Netmask();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf netmask; //type: string
        ydk::YLeaf not_advertise; //type: boolean
        ydk::YLeaf tag; //type: uint32

}; // Ospf::Processes::Process::Vrfs::Vrf::SummaryPrefixes::Netmask


class Ospf::Processes::Process::Vrfs::Vrf::OutgoingRouteUpdates : public ydk::Entity
{
    public:
        OutgoingRouteUpdates();
        ~OutgoingRouteUpdates();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class OutgoingRouteUpdate; //type: Ospf::Processes::Process::Vrfs::Vrf::OutgoingRouteUpdates::OutgoingRouteUpdate

        ydk::YList outgoing_route_update;
        
}; // Ospf::Processes::Process::Vrfs::Vrf::OutgoingRouteUpdates


class Ospf::Processes::Process::Vrfs::Vrf::OutgoingRouteUpdates::OutgoingRouteUpdate : public ydk::Entity
{
    public:
        OutgoingRouteUpdate();
        ~OutgoingRouteUpdate();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf protocol_name; //type: OspfDistListProtocol
        ydk::YLeaf access_list_name; //type: string
        ydk::YLeaf as_xx; //type: uint32
        ydk::YLeaf as_yy; //type: uint32
        ydk::YLeaf ospf_process_name; //type: string

}; // Ospf::Processes::Process::Vrfs::Vrf::OutgoingRouteUpdates::OutgoingRouteUpdate


class Ospf::Processes::Process::Vrfs::Vrf::Distance : public ydk::Entity
{
    public:
        Distance();
        ~Distance();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf admin_distance; //type: uint32
        class OspfDistance; //type: Ospf::Processes::Process::Vrfs::Vrf::Distance::OspfDistance
        class IpDistances; //type: Ospf::Processes::Process::Vrfs::Vrf::Distance::IpDistances

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_ospf_cfg::Ospf::Processes::Process::Vrfs::Vrf::Distance::OspfDistance> ospf_distance;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_ospf_cfg::Ospf::Processes::Process::Vrfs::Vrf::Distance::IpDistances> ip_distances;
        
}; // Ospf::Processes::Process::Vrfs::Vrf::Distance


class Ospf::Processes::Process::Vrfs::Vrf::Distance::OspfDistance : public ydk::Entity
{
    public:
        OspfDistance();
        ~OspfDistance();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf intra_area; //type: uint32
        ydk::YLeaf inter_area; //type: uint32
        ydk::YLeaf external_routes; //type: uint32

}; // Ospf::Processes::Process::Vrfs::Vrf::Distance::OspfDistance


class Ospf::Processes::Process::Vrfs::Vrf::Distance::IpDistances : public ydk::Entity
{
    public:
        IpDistances();
        ~IpDistances();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class IpDistance; //type: Ospf::Processes::Process::Vrfs::Vrf::Distance::IpDistances::IpDistance

        ydk::YList ip_distance;
        
}; // Ospf::Processes::Process::Vrfs::Vrf::Distance::IpDistances


class Ospf::Processes::Process::Vrfs::Vrf::Distance::IpDistances::IpDistance : public ydk::Entity
{
    public:
        IpDistance();
        ~IpDistance();

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
        ydk::YLeaf wildcard; //type: string
        ydk::YLeaf distance; //type: uint32
        ydk::YLeaf access_list_name; //type: string

}; // Ospf::Processes::Process::Vrfs::Vrf::Distance::IpDistances::IpDistance


class Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses : public ydk::Entity
{
    public:
        AreaAddresses();
        ~AreaAddresses();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class AreaAddress; //type: Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress
        class AreaAreaId; //type: Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId

        ydk::YList area_address;
        ydk::YList area_area_id;
        
}; // Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses


class Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress : public ydk::Entity
{
    public:
        AreaAddress();
        ~AreaAddress();

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
        ydk::YLeaf route_policy_in; //type: string
        ydk::YLeaf default_cost; //type: uint32
        ydk::YLeaf route_policy_out; //type: string
        ydk::YLeaf stub; //type: boolean
        ydk::YLeaf type7_translate_always; //type: boolean
        ydk::YLeaf mpls_traffic_eng; //type: empty
        ydk::YLeaf external_out; //type: boolean
        ydk::YLeaf summary_in; //type: boolean
        ydk::YLeaf segment_routing; //type: OspfSegmentRouting
        ydk::YLeaf running; //type: empty
        class VirtualLinkScopes; //type: Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::VirtualLinkScopes
        class ShamLinkScopes; //type: Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::ShamLinkScopes
        class AreaScope; //type: Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::AreaScope
        class NameScopes; //type: Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::NameScopes
        class MultiAreaInterfaceScopes; //type: Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::MultiAreaInterfaceScopes
        class AreaRanges; //type: Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::AreaRanges
        class Nssa; //type: Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::Nssa

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_ospf_cfg::Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::VirtualLinkScopes> virtual_link_scopes;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_ospf_cfg::Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::ShamLinkScopes> sham_link_scopes;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_ospf_cfg::Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::AreaScope> area_scope;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_ospf_cfg::Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::NameScopes> name_scopes;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_ospf_cfg::Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::MultiAreaInterfaceScopes> multi_area_interface_scopes;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_ospf_cfg::Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::AreaRanges> area_ranges;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_ospf_cfg::Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::Nssa> nssa;
        
}; // Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress


class Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::VirtualLinkScopes : public ydk::Entity
{
    public:
        VirtualLinkScopes();
        ~VirtualLinkScopes();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class VirtualLinkScope; //type: Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::VirtualLinkScopes::VirtualLinkScope

        ydk::YList virtual_link_scope;
        
}; // Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::VirtualLinkScopes


class Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::VirtualLinkScopes::VirtualLinkScope : public ydk::Entity
{
    public:
        VirtualLinkScope();
        ~VirtualLinkScope();

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
        ydk::YLeaf hello_interval; //type: uint32
        ydk::YLeaf transmit_delay; //type: uint32
        ydk::YLeaf retransmit_interval; //type: uint32
        ydk::YLeaf running; //type: empty
        class Authentication; //type: Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::VirtualLinkScopes::VirtualLinkScope::Authentication
        class DeadIntervalMinimal; //type: Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::VirtualLinkScopes::VirtualLinkScope::DeadIntervalMinimal

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_ospf_cfg::Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::VirtualLinkScopes::VirtualLinkScope::Authentication> authentication;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_ospf_cfg::Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::VirtualLinkScopes::VirtualLinkScope::DeadIntervalMinimal> dead_interval_minimal;
        
}; // Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::VirtualLinkScopes::VirtualLinkScope


class Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::VirtualLinkScopes::VirtualLinkScope::Authentication : public ydk::Entity
{
    public:
        Authentication();
        ~Authentication();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf key; //type: string
        class Type; //type: Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::VirtualLinkScopes::VirtualLinkScope::Authentication::Type
        class MessageDigestKeys; //type: Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::VirtualLinkScopes::VirtualLinkScope::Authentication::MessageDigestKeys

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_ospf_cfg::Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::VirtualLinkScopes::VirtualLinkScope::Authentication::Type> type;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_ospf_cfg::Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::VirtualLinkScopes::VirtualLinkScope::Authentication::MessageDigestKeys> message_digest_keys;
        
}; // Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::VirtualLinkScopes::VirtualLinkScope::Authentication


class Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::VirtualLinkScopes::VirtualLinkScope::Authentication::Type : public ydk::Entity
{
    public:
        Type();
        ~Type();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf authen_type; //type: OspfAuthentication
        ydk::YLeaf keychain_authen_type; //type: OspfKeychainAuth
        ydk::YLeaf keychain_name; //type: string

}; // Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::VirtualLinkScopes::VirtualLinkScope::Authentication::Type


class Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::VirtualLinkScopes::VirtualLinkScope::Authentication::MessageDigestKeys : public ydk::Entity
{
    public:
        MessageDigestKeys();
        ~MessageDigestKeys();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class MessageDigestKey; //type: Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::VirtualLinkScopes::VirtualLinkScope::Authentication::MessageDigestKeys::MessageDigestKey

        ydk::YList message_digest_key;
        
}; // Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::VirtualLinkScopes::VirtualLinkScope::Authentication::MessageDigestKeys


class Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::VirtualLinkScopes::VirtualLinkScope::Authentication::MessageDigestKeys::MessageDigestKey : public ydk::Entity
{
    public:
        MessageDigestKey();
        ~MessageDigestKey();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf key_id; //type: uint32
        ydk::YLeaf password; //type: string

}; // Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::VirtualLinkScopes::VirtualLinkScope::Authentication::MessageDigestKeys::MessageDigestKey


class Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::VirtualLinkScopes::VirtualLinkScope::DeadIntervalMinimal : public ydk::Entity
{
    public:
        DeadIntervalMinimal();
        ~DeadIntervalMinimal();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf interval; //type: uint32
        ydk::YLeaf multiplier; //type: uint32

}; // Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::VirtualLinkScopes::VirtualLinkScope::DeadIntervalMinimal


class Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::ShamLinkScopes : public ydk::Entity
{
    public:
        ShamLinkScopes();
        ~ShamLinkScopes();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class ShamLinkScope; //type: Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::ShamLinkScopes::ShamLinkScope

        ydk::YList sham_link_scope;
        
}; // Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::ShamLinkScopes


class Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::ShamLinkScopes::ShamLinkScope : public ydk::Entity
{
    public:
        ShamLinkScope();
        ~ShamLinkScope();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf source_address; //type: string
        ydk::YLeaf destination_address; //type: string
        ydk::YLeaf source; //type: string
        ydk::YLeaf cost; //type: uint32
        ydk::YLeaf hello_interval; //type: uint32
        ydk::YLeaf transmit_delay; //type: uint32
        ydk::YLeaf retransmit_interval; //type: uint32
        ydk::YLeaf running; //type: empty
        class Authentication; //type: Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::ShamLinkScopes::ShamLinkScope::Authentication
        class DeadIntervalMinimal; //type: Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::ShamLinkScopes::ShamLinkScope::DeadIntervalMinimal

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_ospf_cfg::Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::ShamLinkScopes::ShamLinkScope::Authentication> authentication;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_ospf_cfg::Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::ShamLinkScopes::ShamLinkScope::DeadIntervalMinimal> dead_interval_minimal;
        
}; // Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::ShamLinkScopes::ShamLinkScope


class Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::ShamLinkScopes::ShamLinkScope::Authentication : public ydk::Entity
{
    public:
        Authentication();
        ~Authentication();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf key; //type: string
        class Type; //type: Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::ShamLinkScopes::ShamLinkScope::Authentication::Type
        class MessageDigestKeys; //type: Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::ShamLinkScopes::ShamLinkScope::Authentication::MessageDigestKeys

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_ospf_cfg::Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::ShamLinkScopes::ShamLinkScope::Authentication::Type> type;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_ospf_cfg::Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::ShamLinkScopes::ShamLinkScope::Authentication::MessageDigestKeys> message_digest_keys;
        
}; // Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::ShamLinkScopes::ShamLinkScope::Authentication


class Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::ShamLinkScopes::ShamLinkScope::Authentication::Type : public ydk::Entity
{
    public:
        Type();
        ~Type();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf authen_type; //type: OspfAuthentication
        ydk::YLeaf keychain_authen_type; //type: OspfKeychainAuth
        ydk::YLeaf keychain_name; //type: string

}; // Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::ShamLinkScopes::ShamLinkScope::Authentication::Type


class Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::ShamLinkScopes::ShamLinkScope::Authentication::MessageDigestKeys : public ydk::Entity
{
    public:
        MessageDigestKeys();
        ~MessageDigestKeys();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class MessageDigestKey; //type: Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::ShamLinkScopes::ShamLinkScope::Authentication::MessageDigestKeys::MessageDigestKey

        ydk::YList message_digest_key;
        
}; // Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::ShamLinkScopes::ShamLinkScope::Authentication::MessageDigestKeys


class Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::ShamLinkScopes::ShamLinkScope::Authentication::MessageDigestKeys::MessageDigestKey : public ydk::Entity
{
    public:
        MessageDigestKey();
        ~MessageDigestKey();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf key_id; //type: uint32
        ydk::YLeaf password; //type: string

}; // Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::ShamLinkScopes::ShamLinkScope::Authentication::MessageDigestKeys::MessageDigestKey


class Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::ShamLinkScopes::ShamLinkScope::DeadIntervalMinimal : public ydk::Entity
{
    public:
        DeadIntervalMinimal();
        ~DeadIntervalMinimal();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf interval; //type: uint32
        ydk::YLeaf multiplier; //type: uint32

}; // Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::ShamLinkScopes::ShamLinkScope::DeadIntervalMinimal


class Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::AreaScope : public ydk::Entity
{
    public:
        AreaScope();
        ~AreaScope();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf cost; //type: uint32
        ydk::YLeaf prefix_suppression_primary; //type: boolean
        ydk::YLeaf mtu_ignore; //type: boolean
        ydk::YLeaf ldp_sync_igp_shortcuts; //type: boolean
        ydk::YLeaf ldp_auto_config; //type: empty
        ydk::YLeaf network_type; //type: OspfNetwork
        ydk::YLeaf hello_interval; //type: uint32
        ydk::YLeaf loopback_stub_network; //type: boolean
        ydk::YLeaf prefix_suppression_secondary; //type: boolean
        ydk::YLeaf demand_circuit; //type: boolean
        ydk::YLeaf passive; //type: boolean
        ydk::YLeaf transmit_delay; //type: uint32
        ydk::YLeaf packet_size; //type: uint32
        ydk::YLeaf ldp_sync; //type: boolean
        ydk::YLeaf database_filter; //type: boolean
        ydk::YLeaf link_down_fast_detect; //type: boolean
        ydk::YLeaf segment_routing_forwarding; //type: OspfSegmentRoutingForwarding
        ydk::YLeaf retransmit_interval; //type: uint32
        ydk::YLeaf priority; //type: uint32
        ydk::YLeaf flood_reduction; //type: boolean
        class DistributeList; //type: Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::AreaScope::DistributeList
        class Bfd; //type: Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::AreaScope::Bfd
        class Authentication; //type: Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::AreaScope::Authentication
        class Security; //type: Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::AreaScope::Security
        class DeadIntervalMinimal; //type: Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::AreaScope::DeadIntervalMinimal
        class FastReroute; //type: Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::AreaScope::FastReroute
        class CostFallback; //type: Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::AreaScope::CostFallback

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_ospf_cfg::Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::AreaScope::DistributeList> distribute_list; // presence node
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_ospf_cfg::Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::AreaScope::Bfd> bfd;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_ospf_cfg::Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::AreaScope::Authentication> authentication;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_ospf_cfg::Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::AreaScope::Security> security;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_ospf_cfg::Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::AreaScope::DeadIntervalMinimal> dead_interval_minimal;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_ospf_cfg::Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::AreaScope::FastReroute> fast_reroute;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_ospf_cfg::Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::AreaScope::CostFallback> cost_fallback;
        
}; // Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::AreaScope


class Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::AreaScope::DistributeList : public ydk::Entity
{
    public:
        DistributeList();
        ~DistributeList();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf access_list_name; //type: string
        ydk::YLeaf route_policy_name; //type: string

}; // Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::AreaScope::DistributeList


class Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::AreaScope::Bfd : public ydk::Entity
{
    public:
        Bfd();
        ~Bfd();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf interval; //type: uint32
        ydk::YLeaf detection_multiplier; //type: uint32
        ydk::YLeaf fast_detect_mode; //type: BfdEnableMode

}; // Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::AreaScope::Bfd


class Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::AreaScope::Authentication : public ydk::Entity
{
    public:
        Authentication();
        ~Authentication();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf key; //type: string
        class Type; //type: Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::AreaScope::Authentication::Type
        class MessageDigestKeys; //type: Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::AreaScope::Authentication::MessageDigestKeys

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_ospf_cfg::Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::AreaScope::Authentication::Type> type;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_ospf_cfg::Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::AreaScope::Authentication::MessageDigestKeys> message_digest_keys;
        
}; // Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::AreaScope::Authentication


class Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::AreaScope::Authentication::Type : public ydk::Entity
{
    public:
        Type();
        ~Type();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf authen_type; //type: OspfAuthentication
        ydk::YLeaf keychain_authen_type; //type: OspfKeychainAuth
        ydk::YLeaf keychain_name; //type: string

}; // Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::AreaScope::Authentication::Type


class Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::AreaScope::Authentication::MessageDigestKeys : public ydk::Entity
{
    public:
        MessageDigestKeys();
        ~MessageDigestKeys();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class MessageDigestKey; //type: Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::AreaScope::Authentication::MessageDigestKeys::MessageDigestKey

        ydk::YList message_digest_key;
        
}; // Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::AreaScope::Authentication::MessageDigestKeys


class Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::AreaScope::Authentication::MessageDigestKeys::MessageDigestKey : public ydk::Entity
{
    public:
        MessageDigestKey();
        ~MessageDigestKey();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf key_id; //type: uint32
        ydk::YLeaf password; //type: string

}; // Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::AreaScope::Authentication::MessageDigestKeys::MessageDigestKey


class Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::AreaScope::Security : public ydk::Entity
{
    public:
        Security();
        ~Security();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Ttl; //type: Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::AreaScope::Security::Ttl

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_ospf_cfg::Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::AreaScope::Security::Ttl> ttl;
        
}; // Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::AreaScope::Security


class Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::AreaScope::Security::Ttl : public ydk::Entity
{
    public:
        Ttl();
        ~Ttl();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf enable; //type: boolean
        ydk::YLeaf hop_count; //type: uint32

}; // Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::AreaScope::Security::Ttl


class Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::AreaScope::DeadIntervalMinimal : public ydk::Entity
{
    public:
        DeadIntervalMinimal();
        ~DeadIntervalMinimal();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf interval; //type: uint32
        ydk::YLeaf multiplier; //type: uint32

}; // Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::AreaScope::DeadIntervalMinimal


class Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::AreaScope::FastReroute : public ydk::Entity
{
    public:
        FastReroute();
        ~FastReroute();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf fast_reroute_enable; //type: OspfFastReroute
        class PerLink; //type: Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::AreaScope::FastReroute::PerLink
        class PerPrefix; //type: Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::AreaScope::FastReroute::PerPrefix

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_ospf_cfg::Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::AreaScope::FastReroute::PerLink> per_link;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_ospf_cfg::Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::AreaScope::FastReroute::PerPrefix> per_prefix;
        
}; // Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::AreaScope::FastReroute


class Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::AreaScope::FastReroute::PerLink : public ydk::Entity
{
    public:
        PerLink();
        ~PerLink();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf fast_reroute_use_candidate_only; //type: boolean
        class CandidateInterfaces; //type: Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::AreaScope::FastReroute::PerLink::CandidateInterfaces
        class ExcludeInterfaces; //type: Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::AreaScope::FastReroute::PerLink::ExcludeInterfaces

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_ospf_cfg::Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::AreaScope::FastReroute::PerLink::CandidateInterfaces> candidate_interfaces;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_ospf_cfg::Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::AreaScope::FastReroute::PerLink::ExcludeInterfaces> exclude_interfaces;
        
}; // Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::AreaScope::FastReroute::PerLink


class Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::AreaScope::FastReroute::PerLink::CandidateInterfaces : public ydk::Entity
{
    public:
        CandidateInterfaces();
        ~CandidateInterfaces();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class CandidateInterface; //type: Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::AreaScope::FastReroute::PerLink::CandidateInterfaces::CandidateInterface

        ydk::YList candidate_interface;
        
}; // Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::AreaScope::FastReroute::PerLink::CandidateInterfaces


class Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::AreaScope::FastReroute::PerLink::CandidateInterfaces::CandidateInterface : public ydk::Entity
{
    public:
        CandidateInterface();
        ~CandidateInterface();

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

}; // Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::AreaScope::FastReroute::PerLink::CandidateInterfaces::CandidateInterface


class Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::AreaScope::FastReroute::PerLink::ExcludeInterfaces : public ydk::Entity
{
    public:
        ExcludeInterfaces();
        ~ExcludeInterfaces();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class ExcludeInterface; //type: Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::AreaScope::FastReroute::PerLink::ExcludeInterfaces::ExcludeInterface

        ydk::YList exclude_interface;
        
}; // Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::AreaScope::FastReroute::PerLink::ExcludeInterfaces


class Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::AreaScope::FastReroute::PerLink::ExcludeInterfaces::ExcludeInterface : public ydk::Entity
{
    public:
        ExcludeInterface();
        ~ExcludeInterface();

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

}; // Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::AreaScope::FastReroute::PerLink::ExcludeInterfaces::ExcludeInterface


class Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::AreaScope::FastReroute::PerPrefix : public ydk::Entity
{
    public:
        PerPrefix();
        ~PerPrefix();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf topology_independent_lfa; //type: boolean
        ydk::YLeaf fast_reroute_use_candidate_only; //type: boolean
        class RemoteLfa; //type: Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::AreaScope::FastReroute::PerPrefix::RemoteLfa
        class Tiebreakers; //type: Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::AreaScope::FastReroute::PerPrefix::Tiebreakers
        class CandidateInterfaces; //type: Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::AreaScope::FastReroute::PerPrefix::CandidateInterfaces
        class ExcludeInterfaces; //type: Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::AreaScope::FastReroute::PerPrefix::ExcludeInterfaces

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_ospf_cfg::Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::AreaScope::FastReroute::PerPrefix::RemoteLfa> remote_lfa;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_ospf_cfg::Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::AreaScope::FastReroute::PerPrefix::Tiebreakers> tiebreakers;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_ospf_cfg::Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::AreaScope::FastReroute::PerPrefix::CandidateInterfaces> candidate_interfaces;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_ospf_cfg::Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::AreaScope::FastReroute::PerPrefix::ExcludeInterfaces> exclude_interfaces;
        
}; // Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::AreaScope::FastReroute::PerPrefix


class Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::AreaScope::FastReroute::PerPrefix::RemoteLfa : public ydk::Entity
{
    public:
        RemoteLfa();
        ~RemoteLfa();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf tunnel; //type: OspfFrrRlfaTunnel
        ydk::YLeaf maximum_cost; //type: uint32

}; // Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::AreaScope::FastReroute::PerPrefix::RemoteLfa


class Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::AreaScope::FastReroute::PerPrefix::Tiebreakers : public ydk::Entity
{
    public:
        Tiebreakers();
        ~Tiebreakers();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Tiebreaker; //type: Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::AreaScope::FastReroute::PerPrefix::Tiebreakers::Tiebreaker

        ydk::YList tiebreaker;
        
}; // Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::AreaScope::FastReroute::PerPrefix::Tiebreakers


class Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::AreaScope::FastReroute::PerPrefix::Tiebreakers::Tiebreaker : public ydk::Entity
{
    public:
        Tiebreaker();
        ~Tiebreaker();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf tiebreaker_type; //type: OspfFastRerouteTiebreakersIntf
        ydk::YLeaf tiebreaker_index; //type: uint32

}; // Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::AreaScope::FastReroute::PerPrefix::Tiebreakers::Tiebreaker


class Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::AreaScope::FastReroute::PerPrefix::CandidateInterfaces : public ydk::Entity
{
    public:
        CandidateInterfaces();
        ~CandidateInterfaces();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class CandidateInterface; //type: Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::AreaScope::FastReroute::PerPrefix::CandidateInterfaces::CandidateInterface

        ydk::YList candidate_interface;
        
}; // Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::AreaScope::FastReroute::PerPrefix::CandidateInterfaces


class Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::AreaScope::FastReroute::PerPrefix::CandidateInterfaces::CandidateInterface : public ydk::Entity
{
    public:
        CandidateInterface();
        ~CandidateInterface();

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

}; // Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::AreaScope::FastReroute::PerPrefix::CandidateInterfaces::CandidateInterface


class Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::AreaScope::FastReroute::PerPrefix::ExcludeInterfaces : public ydk::Entity
{
    public:
        ExcludeInterfaces();
        ~ExcludeInterfaces();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class ExcludeInterface; //type: Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::AreaScope::FastReroute::PerPrefix::ExcludeInterfaces::ExcludeInterface

        ydk::YList exclude_interface;
        
}; // Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::AreaScope::FastReroute::PerPrefix::ExcludeInterfaces


class Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::AreaScope::FastReroute::PerPrefix::ExcludeInterfaces::ExcludeInterface : public ydk::Entity
{
    public:
        ExcludeInterface();
        ~ExcludeInterface();

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

}; // Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::AreaScope::FastReroute::PerPrefix::ExcludeInterfaces::ExcludeInterface


class Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::AreaScope::CostFallback : public ydk::Entity
{
    public:
        CostFallback();
        ~CostFallback();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf cost; //type: uint32
        ydk::YLeaf threshold; //type: uint32

}; // Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::AreaScope::CostFallback


class Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::NameScopes : public ydk::Entity
{
    public:
        NameScopes();
        ~NameScopes();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class NameScope; //type: Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::NameScopes::NameScope

        ydk::YList name_scope;
        
}; // Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::NameScopes


class Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::NameScopes::NameScope : public ydk::Entity
{
    public:
        NameScope();
        ~NameScope();

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
        ydk::YLeaf cost; //type: uint32
        ydk::YLeaf prefix_suppression_primary; //type: boolean
        ydk::YLeaf mtu_ignore; //type: boolean
        ydk::YLeaf ldp_sync_igp_shortcuts; //type: boolean
        ydk::YLeaf ldp_auto_config; //type: empty
        ydk::YLeaf network_type; //type: OspfNetwork
        ydk::YLeaf hello_interval; //type: uint32
        ydk::YLeaf loopback_stub_network; //type: boolean
        ydk::YLeaf prefix_suppression_secondary; //type: boolean
        ydk::YLeaf demand_circuit; //type: boolean
        ydk::YLeaf passive; //type: boolean
        ydk::YLeaf transmit_delay; //type: uint32
        ydk::YLeaf packet_size; //type: uint32
        ydk::YLeaf ldp_sync; //type: boolean
        ydk::YLeaf database_filter; //type: boolean
        ydk::YLeaf link_down_fast_detect; //type: boolean
        ydk::YLeaf segment_routing_forwarding; //type: OspfSegmentRoutingForwarding
        ydk::YLeaf retransmit_interval; //type: uint32
        ydk::YLeaf priority; //type: uint32
        ydk::YLeaf flood_reduction; //type: boolean
        ydk::YLeaf running; //type: empty
        class PrefixSid; //type: Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::NameScopes::NameScope::PrefixSid
        class PrefixSidStrict; //type: Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::NameScopes::NameScope::PrefixSidStrict
        class DistributeList; //type: Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::NameScopes::NameScope::DistributeList
        class Bfd; //type: Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::NameScopes::NameScope::Bfd
        class Authentication; //type: Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::NameScopes::NameScope::Authentication
        class Security; //type: Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::NameScopes::NameScope::Security
        class Neighbors; //type: Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::NameScopes::NameScope::Neighbors
        class DeadIntervalMinimal; //type: Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::NameScopes::NameScope::DeadIntervalMinimal
        class FastReroute; //type: Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::NameScopes::NameScope::FastReroute
        class CostFallback; //type: Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::NameScopes::NameScope::CostFallback

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_ospf_cfg::Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::NameScopes::NameScope::PrefixSid> prefix_sid; // presence node
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_ospf_cfg::Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::NameScopes::NameScope::PrefixSidStrict> prefix_sid_strict; // presence node
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_ospf_cfg::Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::NameScopes::NameScope::DistributeList> distribute_list; // presence node
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_ospf_cfg::Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::NameScopes::NameScope::Bfd> bfd;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_ospf_cfg::Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::NameScopes::NameScope::Authentication> authentication;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_ospf_cfg::Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::NameScopes::NameScope::Security> security;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_ospf_cfg::Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::NameScopes::NameScope::Neighbors> neighbors;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_ospf_cfg::Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::NameScopes::NameScope::DeadIntervalMinimal> dead_interval_minimal;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_ospf_cfg::Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::NameScopes::NameScope::FastReroute> fast_reroute;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_ospf_cfg::Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::NameScopes::NameScope::CostFallback> cost_fallback;
        
}; // Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::NameScopes::NameScope


class Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::NameScopes::NameScope::PrefixSid : public ydk::Entity
{
    public:
        PrefixSid();
        ~PrefixSid();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf sid_value; //type: uint32
        ydk::YLeaf explicit_null; //type: boolean
        ydk::YLeaf type; //type: OspfSid
        ydk::YLeaf n_flag_clear; //type: boolean

}; // Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::NameScopes::NameScope::PrefixSid


class Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::NameScopes::NameScope::PrefixSidStrict : public ydk::Entity
{
    public:
        PrefixSidStrict();
        ~PrefixSidStrict();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf sid_value; //type: uint32
        ydk::YLeaf explicit_null; //type: boolean
        ydk::YLeaf type; //type: OspfSid
        ydk::YLeaf n_flag_clear; //type: boolean

}; // Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::NameScopes::NameScope::PrefixSidStrict


class Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::NameScopes::NameScope::DistributeList : public ydk::Entity
{
    public:
        DistributeList();
        ~DistributeList();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf access_list_name; //type: string
        ydk::YLeaf route_policy_name; //type: string

}; // Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::NameScopes::NameScope::DistributeList


class Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::NameScopes::NameScope::Bfd : public ydk::Entity
{
    public:
        Bfd();
        ~Bfd();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf interval; //type: uint32
        ydk::YLeaf detection_multiplier; //type: uint32
        ydk::YLeaf fast_detect_mode; //type: BfdEnableMode

}; // Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::NameScopes::NameScope::Bfd


class Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::NameScopes::NameScope::Authentication : public ydk::Entity
{
    public:
        Authentication();
        ~Authentication();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf key; //type: string
        class Type; //type: Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::NameScopes::NameScope::Authentication::Type
        class MessageDigestKeys; //type: Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::NameScopes::NameScope::Authentication::MessageDigestKeys

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_ospf_cfg::Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::NameScopes::NameScope::Authentication::Type> type;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_ospf_cfg::Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::NameScopes::NameScope::Authentication::MessageDigestKeys> message_digest_keys;
        
}; // Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::NameScopes::NameScope::Authentication


class Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::NameScopes::NameScope::Authentication::Type : public ydk::Entity
{
    public:
        Type();
        ~Type();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf authen_type; //type: OspfAuthentication
        ydk::YLeaf keychain_authen_type; //type: OspfKeychainAuth
        ydk::YLeaf keychain_name; //type: string

}; // Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::NameScopes::NameScope::Authentication::Type


class Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::NameScopes::NameScope::Authentication::MessageDigestKeys : public ydk::Entity
{
    public:
        MessageDigestKeys();
        ~MessageDigestKeys();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class MessageDigestKey; //type: Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::NameScopes::NameScope::Authentication::MessageDigestKeys::MessageDigestKey

        ydk::YList message_digest_key;
        
}; // Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::NameScopes::NameScope::Authentication::MessageDigestKeys


class Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::NameScopes::NameScope::Authentication::MessageDigestKeys::MessageDigestKey : public ydk::Entity
{
    public:
        MessageDigestKey();
        ~MessageDigestKey();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf key_id; //type: uint32
        ydk::YLeaf password; //type: string

}; // Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::NameScopes::NameScope::Authentication::MessageDigestKeys::MessageDigestKey


class Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::NameScopes::NameScope::Security : public ydk::Entity
{
    public:
        Security();
        ~Security();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Ttl; //type: Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::NameScopes::NameScope::Security::Ttl

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_ospf_cfg::Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::NameScopes::NameScope::Security::Ttl> ttl;
        
}; // Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::NameScopes::NameScope::Security


class Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::NameScopes::NameScope::Security::Ttl : public ydk::Entity
{
    public:
        Ttl();
        ~Ttl();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf enable; //type: boolean
        ydk::YLeaf hop_count; //type: uint32

}; // Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::NameScopes::NameScope::Security::Ttl


class Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::NameScopes::NameScope::Neighbors : public ydk::Entity
{
    public:
        Neighbors();
        ~Neighbors();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Neighbor; //type: Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::NameScopes::NameScope::Neighbors::Neighbor

        ydk::YList neighbor;
        
}; // Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::NameScopes::NameScope::Neighbors


class Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::NameScopes::NameScope::Neighbors::Neighbor : public ydk::Entity
{
    public:
        Neighbor();
        ~Neighbor();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf neighbor_address; //type: string
        ydk::YLeaf priority; //type: uint32
        ydk::YLeaf poll_interval; //type: uint32
        ydk::YLeaf cost; //type: uint32
        ydk::YLeaf database_filter; //type: boolean

}; // Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::NameScopes::NameScope::Neighbors::Neighbor


class Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::NameScopes::NameScope::DeadIntervalMinimal : public ydk::Entity
{
    public:
        DeadIntervalMinimal();
        ~DeadIntervalMinimal();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf interval; //type: uint32
        ydk::YLeaf multiplier; //type: uint32

}; // Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::NameScopes::NameScope::DeadIntervalMinimal


class Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::NameScopes::NameScope::FastReroute : public ydk::Entity
{
    public:
        FastReroute();
        ~FastReroute();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf fast_reroute_enable; //type: OspfFastReroute
        class PerLink; //type: Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::NameScopes::NameScope::FastReroute::PerLink
        class PerPrefix; //type: Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::NameScopes::NameScope::FastReroute::PerPrefix

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_ospf_cfg::Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::NameScopes::NameScope::FastReroute::PerLink> per_link;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_ospf_cfg::Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::NameScopes::NameScope::FastReroute::PerPrefix> per_prefix;
        
}; // Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::NameScopes::NameScope::FastReroute


class Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::NameScopes::NameScope::FastReroute::PerLink : public ydk::Entity
{
    public:
        PerLink();
        ~PerLink();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf fast_reroute_use_candidate_only; //type: boolean
        class CandidateInterfaces; //type: Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::NameScopes::NameScope::FastReroute::PerLink::CandidateInterfaces
        class ExcludeInterfaces; //type: Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::NameScopes::NameScope::FastReroute::PerLink::ExcludeInterfaces

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_ospf_cfg::Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::NameScopes::NameScope::FastReroute::PerLink::CandidateInterfaces> candidate_interfaces;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_ospf_cfg::Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::NameScopes::NameScope::FastReroute::PerLink::ExcludeInterfaces> exclude_interfaces;
        
}; // Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::NameScopes::NameScope::FastReroute::PerLink


class Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::NameScopes::NameScope::FastReroute::PerLink::CandidateInterfaces : public ydk::Entity
{
    public:
        CandidateInterfaces();
        ~CandidateInterfaces();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class CandidateInterface; //type: Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::NameScopes::NameScope::FastReroute::PerLink::CandidateInterfaces::CandidateInterface

        ydk::YList candidate_interface;
        
}; // Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::NameScopes::NameScope::FastReroute::PerLink::CandidateInterfaces


class Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::NameScopes::NameScope::FastReroute::PerLink::CandidateInterfaces::CandidateInterface : public ydk::Entity
{
    public:
        CandidateInterface();
        ~CandidateInterface();

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

}; // Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::NameScopes::NameScope::FastReroute::PerLink::CandidateInterfaces::CandidateInterface


class Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::NameScopes::NameScope::FastReroute::PerLink::ExcludeInterfaces : public ydk::Entity
{
    public:
        ExcludeInterfaces();
        ~ExcludeInterfaces();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class ExcludeInterface; //type: Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::NameScopes::NameScope::FastReroute::PerLink::ExcludeInterfaces::ExcludeInterface

        ydk::YList exclude_interface;
        
}; // Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::NameScopes::NameScope::FastReroute::PerLink::ExcludeInterfaces


class Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::NameScopes::NameScope::FastReroute::PerLink::ExcludeInterfaces::ExcludeInterface : public ydk::Entity
{
    public:
        ExcludeInterface();
        ~ExcludeInterface();

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

}; // Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::NameScopes::NameScope::FastReroute::PerLink::ExcludeInterfaces::ExcludeInterface


class Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::NameScopes::NameScope::FastReroute::PerPrefix : public ydk::Entity
{
    public:
        PerPrefix();
        ~PerPrefix();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf topology_independent_lfa; //type: boolean
        ydk::YLeaf fast_reroute_use_candidate_only; //type: boolean
        class RemoteLfa; //type: Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::NameScopes::NameScope::FastReroute::PerPrefix::RemoteLfa
        class Tiebreakers; //type: Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::NameScopes::NameScope::FastReroute::PerPrefix::Tiebreakers
        class CandidateInterfaces; //type: Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::NameScopes::NameScope::FastReroute::PerPrefix::CandidateInterfaces
        class ExcludeInterfaces; //type: Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::NameScopes::NameScope::FastReroute::PerPrefix::ExcludeInterfaces

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_ospf_cfg::Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::NameScopes::NameScope::FastReroute::PerPrefix::RemoteLfa> remote_lfa;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_ospf_cfg::Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::NameScopes::NameScope::FastReroute::PerPrefix::Tiebreakers> tiebreakers;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_ospf_cfg::Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::NameScopes::NameScope::FastReroute::PerPrefix::CandidateInterfaces> candidate_interfaces;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_ospf_cfg::Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::NameScopes::NameScope::FastReroute::PerPrefix::ExcludeInterfaces> exclude_interfaces;
        
}; // Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::NameScopes::NameScope::FastReroute::PerPrefix


class Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::NameScopes::NameScope::FastReroute::PerPrefix::RemoteLfa : public ydk::Entity
{
    public:
        RemoteLfa();
        ~RemoteLfa();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf tunnel; //type: OspfFrrRlfaTunnel
        ydk::YLeaf maximum_cost; //type: uint32

}; // Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::NameScopes::NameScope::FastReroute::PerPrefix::RemoteLfa


class Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::NameScopes::NameScope::FastReroute::PerPrefix::Tiebreakers : public ydk::Entity
{
    public:
        Tiebreakers();
        ~Tiebreakers();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Tiebreaker; //type: Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::NameScopes::NameScope::FastReroute::PerPrefix::Tiebreakers::Tiebreaker

        ydk::YList tiebreaker;
        
}; // Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::NameScopes::NameScope::FastReroute::PerPrefix::Tiebreakers


class Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::NameScopes::NameScope::FastReroute::PerPrefix::Tiebreakers::Tiebreaker : public ydk::Entity
{
    public:
        Tiebreaker();
        ~Tiebreaker();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf tiebreaker_type; //type: OspfFastRerouteTiebreakersIntf
        ydk::YLeaf tiebreaker_index; //type: uint32

}; // Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::NameScopes::NameScope::FastReroute::PerPrefix::Tiebreakers::Tiebreaker


class Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::NameScopes::NameScope::FastReroute::PerPrefix::CandidateInterfaces : public ydk::Entity
{
    public:
        CandidateInterfaces();
        ~CandidateInterfaces();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class CandidateInterface; //type: Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::NameScopes::NameScope::FastReroute::PerPrefix::CandidateInterfaces::CandidateInterface

        ydk::YList candidate_interface;
        
}; // Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::NameScopes::NameScope::FastReroute::PerPrefix::CandidateInterfaces


class Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::NameScopes::NameScope::FastReroute::PerPrefix::CandidateInterfaces::CandidateInterface : public ydk::Entity
{
    public:
        CandidateInterface();
        ~CandidateInterface();

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

}; // Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::NameScopes::NameScope::FastReroute::PerPrefix::CandidateInterfaces::CandidateInterface


class Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::NameScopes::NameScope::FastReroute::PerPrefix::ExcludeInterfaces : public ydk::Entity
{
    public:
        ExcludeInterfaces();
        ~ExcludeInterfaces();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class ExcludeInterface; //type: Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::NameScopes::NameScope::FastReroute::PerPrefix::ExcludeInterfaces::ExcludeInterface

        ydk::YList exclude_interface;
        
}; // Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::NameScopes::NameScope::FastReroute::PerPrefix::ExcludeInterfaces


class Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::NameScopes::NameScope::FastReroute::PerPrefix::ExcludeInterfaces::ExcludeInterface : public ydk::Entity
{
    public:
        ExcludeInterface();
        ~ExcludeInterface();

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

}; // Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::NameScopes::NameScope::FastReroute::PerPrefix::ExcludeInterfaces::ExcludeInterface


class Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::NameScopes::NameScope::CostFallback : public ydk::Entity
{
    public:
        CostFallback();
        ~CostFallback();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf cost; //type: uint32
        ydk::YLeaf threshold; //type: uint32

}; // Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::NameScopes::NameScope::CostFallback


class Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::MultiAreaInterfaceScopes : public ydk::Entity
{
    public:
        MultiAreaInterfaceScopes();
        ~MultiAreaInterfaceScopes();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class MultiAreaInterfaceScope; //type: Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::MultiAreaInterfaceScopes::MultiAreaInterfaceScope

        ydk::YList multi_area_interface_scope;
        
}; // Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::MultiAreaInterfaceScopes


class Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::MultiAreaInterfaceScopes::MultiAreaInterfaceScope : public ydk::Entity
{
    public:
        MultiAreaInterfaceScope();
        ~MultiAreaInterfaceScope();

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
        ydk::YLeaf cost; //type: uint32
        ydk::YLeaf mtu_ignore; //type: boolean
        ydk::YLeaf hello_interval; //type: uint32
        ydk::YLeaf passive; //type: boolean
        ydk::YLeaf transmit_delay; //type: uint32
        ydk::YLeaf packet_size; //type: uint32
        ydk::YLeaf database_filter; //type: boolean
        ydk::YLeaf retransmit_interval; //type: uint32
        ydk::YLeaf running; //type: empty
        class DistributeList; //type: Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::DistributeList
        class Authentication; //type: Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::Authentication
        class Neighbors; //type: Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::Neighbors
        class DeadIntervalMinimal; //type: Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::DeadIntervalMinimal
        class FastReroute; //type: Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::FastReroute
        class CostFallback; //type: Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::CostFallback

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_ospf_cfg::Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::DistributeList> distribute_list; // presence node
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_ospf_cfg::Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::Authentication> authentication;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_ospf_cfg::Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::Neighbors> neighbors;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_ospf_cfg::Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::DeadIntervalMinimal> dead_interval_minimal;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_ospf_cfg::Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::FastReroute> fast_reroute;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_ospf_cfg::Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::CostFallback> cost_fallback;
        
}; // Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::MultiAreaInterfaceScopes::MultiAreaInterfaceScope


class Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::DistributeList : public ydk::Entity
{
    public:
        DistributeList();
        ~DistributeList();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf access_list_name; //type: string
        ydk::YLeaf route_policy_name; //type: string

}; // Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::DistributeList


class Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::Authentication : public ydk::Entity
{
    public:
        Authentication();
        ~Authentication();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf key; //type: string
        class Type; //type: Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::Authentication::Type
        class MessageDigestKeys; //type: Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::Authentication::MessageDigestKeys

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_ospf_cfg::Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::Authentication::Type> type;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_ospf_cfg::Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::Authentication::MessageDigestKeys> message_digest_keys;
        
}; // Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::Authentication


class Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::Authentication::Type : public ydk::Entity
{
    public:
        Type();
        ~Type();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf authen_type; //type: OspfAuthentication
        ydk::YLeaf keychain_authen_type; //type: OspfKeychainAuth
        ydk::YLeaf keychain_name; //type: string

}; // Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::Authentication::Type


class Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::Authentication::MessageDigestKeys : public ydk::Entity
{
    public:
        MessageDigestKeys();
        ~MessageDigestKeys();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class MessageDigestKey; //type: Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::Authentication::MessageDigestKeys::MessageDigestKey

        ydk::YList message_digest_key;
        
}; // Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::Authentication::MessageDigestKeys


class Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::Authentication::MessageDigestKeys::MessageDigestKey : public ydk::Entity
{
    public:
        MessageDigestKey();
        ~MessageDigestKey();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf key_id; //type: uint32
        ydk::YLeaf password; //type: string

}; // Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::Authentication::MessageDigestKeys::MessageDigestKey


class Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::Neighbors : public ydk::Entity
{
    public:
        Neighbors();
        ~Neighbors();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Neighbor; //type: Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::Neighbors::Neighbor

        ydk::YList neighbor;
        
}; // Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::Neighbors


class Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::Neighbors::Neighbor : public ydk::Entity
{
    public:
        Neighbor();
        ~Neighbor();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf neighbor_address; //type: string
        ydk::YLeaf priority; //type: uint32
        ydk::YLeaf poll_interval; //type: uint32
        ydk::YLeaf cost; //type: uint32
        ydk::YLeaf database_filter; //type: boolean

}; // Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::Neighbors::Neighbor


class Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::DeadIntervalMinimal : public ydk::Entity
{
    public:
        DeadIntervalMinimal();
        ~DeadIntervalMinimal();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf interval; //type: uint32
        ydk::YLeaf multiplier; //type: uint32

}; // Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::DeadIntervalMinimal


class Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::FastReroute : public ydk::Entity
{
    public:
        FastReroute();
        ~FastReroute();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf fast_reroute_enable; //type: OspfFastReroute
        class PerLink; //type: Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::FastReroute::PerLink
        class PerPrefix; //type: Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::FastReroute::PerPrefix

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_ospf_cfg::Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::FastReroute::PerLink> per_link;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_ospf_cfg::Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::FastReroute::PerPrefix> per_prefix;
        
}; // Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::FastReroute


class Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::FastReroute::PerLink : public ydk::Entity
{
    public:
        PerLink();
        ~PerLink();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf fast_reroute_use_candidate_only; //type: boolean
        class CandidateInterfaces; //type: Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::FastReroute::PerLink::CandidateInterfaces
        class ExcludeInterfaces; //type: Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::FastReroute::PerLink::ExcludeInterfaces

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_ospf_cfg::Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::FastReroute::PerLink::CandidateInterfaces> candidate_interfaces;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_ospf_cfg::Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::FastReroute::PerLink::ExcludeInterfaces> exclude_interfaces;
        
}; // Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::FastReroute::PerLink


class Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::FastReroute::PerLink::CandidateInterfaces : public ydk::Entity
{
    public:
        CandidateInterfaces();
        ~CandidateInterfaces();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class CandidateInterface; //type: Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::FastReroute::PerLink::CandidateInterfaces::CandidateInterface

        ydk::YList candidate_interface;
        
}; // Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::FastReroute::PerLink::CandidateInterfaces


class Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::FastReroute::PerLink::CandidateInterfaces::CandidateInterface : public ydk::Entity
{
    public:
        CandidateInterface();
        ~CandidateInterface();

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

}; // Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::FastReroute::PerLink::CandidateInterfaces::CandidateInterface


class Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::FastReroute::PerLink::ExcludeInterfaces : public ydk::Entity
{
    public:
        ExcludeInterfaces();
        ~ExcludeInterfaces();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class ExcludeInterface; //type: Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::FastReroute::PerLink::ExcludeInterfaces::ExcludeInterface

        ydk::YList exclude_interface;
        
}; // Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::FastReroute::PerLink::ExcludeInterfaces


class Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::FastReroute::PerLink::ExcludeInterfaces::ExcludeInterface : public ydk::Entity
{
    public:
        ExcludeInterface();
        ~ExcludeInterface();

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

}; // Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::FastReroute::PerLink::ExcludeInterfaces::ExcludeInterface


class Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::FastReroute::PerPrefix : public ydk::Entity
{
    public:
        PerPrefix();
        ~PerPrefix();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf topology_independent_lfa; //type: boolean
        ydk::YLeaf fast_reroute_use_candidate_only; //type: boolean
        class RemoteLfa; //type: Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::FastReroute::PerPrefix::RemoteLfa
        class Tiebreakers; //type: Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::FastReroute::PerPrefix::Tiebreakers
        class CandidateInterfaces; //type: Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::FastReroute::PerPrefix::CandidateInterfaces
        class ExcludeInterfaces; //type: Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::FastReroute::PerPrefix::ExcludeInterfaces

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_ospf_cfg::Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::FastReroute::PerPrefix::RemoteLfa> remote_lfa;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_ospf_cfg::Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::FastReroute::PerPrefix::Tiebreakers> tiebreakers;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_ospf_cfg::Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::FastReroute::PerPrefix::CandidateInterfaces> candidate_interfaces;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_ospf_cfg::Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::FastReroute::PerPrefix::ExcludeInterfaces> exclude_interfaces;
        
}; // Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::FastReroute::PerPrefix


class Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::FastReroute::PerPrefix::RemoteLfa : public ydk::Entity
{
    public:
        RemoteLfa();
        ~RemoteLfa();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf tunnel; //type: OspfFrrRlfaTunnel
        ydk::YLeaf maximum_cost; //type: uint32

}; // Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::FastReroute::PerPrefix::RemoteLfa


class Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::FastReroute::PerPrefix::Tiebreakers : public ydk::Entity
{
    public:
        Tiebreakers();
        ~Tiebreakers();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Tiebreaker; //type: Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::FastReroute::PerPrefix::Tiebreakers::Tiebreaker

        ydk::YList tiebreaker;
        
}; // Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::FastReroute::PerPrefix::Tiebreakers


class Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::FastReroute::PerPrefix::Tiebreakers::Tiebreaker : public ydk::Entity
{
    public:
        Tiebreaker();
        ~Tiebreaker();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf tiebreaker_type; //type: OspfFastRerouteTiebreakersIntf
        ydk::YLeaf tiebreaker_index; //type: uint32

}; // Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::FastReroute::PerPrefix::Tiebreakers::Tiebreaker


class Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::FastReroute::PerPrefix::CandidateInterfaces : public ydk::Entity
{
    public:
        CandidateInterfaces();
        ~CandidateInterfaces();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class CandidateInterface; //type: Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::FastReroute::PerPrefix::CandidateInterfaces::CandidateInterface

        ydk::YList candidate_interface;
        
}; // Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::FastReroute::PerPrefix::CandidateInterfaces


class Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::FastReroute::PerPrefix::CandidateInterfaces::CandidateInterface : public ydk::Entity
{
    public:
        CandidateInterface();
        ~CandidateInterface();

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

}; // Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::FastReroute::PerPrefix::CandidateInterfaces::CandidateInterface


class Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::FastReroute::PerPrefix::ExcludeInterfaces : public ydk::Entity
{
    public:
        ExcludeInterfaces();
        ~ExcludeInterfaces();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class ExcludeInterface; //type: Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::FastReroute::PerPrefix::ExcludeInterfaces::ExcludeInterface

        ydk::YList exclude_interface;
        
}; // Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::FastReroute::PerPrefix::ExcludeInterfaces


class Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::FastReroute::PerPrefix::ExcludeInterfaces::ExcludeInterface : public ydk::Entity
{
    public:
        ExcludeInterface();
        ~ExcludeInterface();

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

}; // Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::FastReroute::PerPrefix::ExcludeInterfaces::ExcludeInterface


class Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::CostFallback : public ydk::Entity
{
    public:
        CostFallback();
        ~CostFallback();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf cost; //type: uint32
        ydk::YLeaf threshold; //type: uint32

}; // Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::CostFallback


class Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::AreaRanges : public ydk::Entity
{
    public:
        AreaRanges();
        ~AreaRanges();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class AreaRange; //type: Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::AreaRanges::AreaRange

        ydk::YList area_range;
        
}; // Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::AreaRanges


class Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::AreaRanges::AreaRange : public ydk::Entity
{
    public:
        AreaRange();
        ~AreaRange();

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
        ydk::YLeaf netmask; //type: string
        ydk::YLeaf not_advertise; //type: boolean

}; // Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::AreaRanges::AreaRange


class Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::Nssa : public ydk::Entity
{
    public:
        Nssa();
        ~Nssa();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf no_redistribution; //type: boolean
        ydk::YLeaf default_info_originate; //type: boolean
        ydk::YLeaf no_summary; //type: boolean
        ydk::YLeaf nssa_def_metric; //type: uint32
        ydk::YLeaf metric_type; //type: OspfLinkStateMetric

}; // Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::Nssa


class Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId : public ydk::Entity
{
    public:
        AreaAreaId();
        ~AreaAreaId();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf area_id; //type: uint32
        ydk::YLeaf route_policy_in; //type: string
        ydk::YLeaf default_cost; //type: uint32
        ydk::YLeaf route_policy_out; //type: string
        ydk::YLeaf stub; //type: boolean
        ydk::YLeaf type7_translate_always; //type: boolean
        ydk::YLeaf mpls_traffic_eng; //type: empty
        ydk::YLeaf external_out; //type: boolean
        ydk::YLeaf summary_in; //type: boolean
        ydk::YLeaf segment_routing; //type: OspfSegmentRouting
        ydk::YLeaf running; //type: empty
        class VirtualLinkScopes; //type: Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::VirtualLinkScopes
        class ShamLinkScopes; //type: Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::ShamLinkScopes
        class AreaScope; //type: Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::AreaScope
        class NameScopes; //type: Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::NameScopes
        class MultiAreaInterfaceScopes; //type: Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::MultiAreaInterfaceScopes
        class AreaRanges; //type: Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::AreaRanges
        class Nssa; //type: Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::Nssa

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_ospf_cfg::Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::VirtualLinkScopes> virtual_link_scopes;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_ospf_cfg::Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::ShamLinkScopes> sham_link_scopes;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_ospf_cfg::Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::AreaScope> area_scope;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_ospf_cfg::Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::NameScopes> name_scopes;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_ospf_cfg::Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::MultiAreaInterfaceScopes> multi_area_interface_scopes;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_ospf_cfg::Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::AreaRanges> area_ranges;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_ospf_cfg::Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::Nssa> nssa;
        
}; // Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId


class Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::VirtualLinkScopes : public ydk::Entity
{
    public:
        VirtualLinkScopes();
        ~VirtualLinkScopes();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class VirtualLinkScope; //type: Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::VirtualLinkScopes::VirtualLinkScope

        ydk::YList virtual_link_scope;
        
}; // Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::VirtualLinkScopes


class Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::VirtualLinkScopes::VirtualLinkScope : public ydk::Entity
{
    public:
        VirtualLinkScope();
        ~VirtualLinkScope();

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
        ydk::YLeaf hello_interval; //type: uint32
        ydk::YLeaf transmit_delay; //type: uint32
        ydk::YLeaf retransmit_interval; //type: uint32
        ydk::YLeaf running; //type: empty
        class Authentication; //type: Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::VirtualLinkScopes::VirtualLinkScope::Authentication
        class DeadIntervalMinimal; //type: Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::VirtualLinkScopes::VirtualLinkScope::DeadIntervalMinimal

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_ospf_cfg::Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::VirtualLinkScopes::VirtualLinkScope::Authentication> authentication;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_ospf_cfg::Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::VirtualLinkScopes::VirtualLinkScope::DeadIntervalMinimal> dead_interval_minimal;
        
}; // Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::VirtualLinkScopes::VirtualLinkScope


class Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::VirtualLinkScopes::VirtualLinkScope::Authentication : public ydk::Entity
{
    public:
        Authentication();
        ~Authentication();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf key; //type: string
        class Type; //type: Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::VirtualLinkScopes::VirtualLinkScope::Authentication::Type
        class MessageDigestKeys; //type: Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::VirtualLinkScopes::VirtualLinkScope::Authentication::MessageDigestKeys

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_ospf_cfg::Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::VirtualLinkScopes::VirtualLinkScope::Authentication::Type> type;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_ospf_cfg::Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::VirtualLinkScopes::VirtualLinkScope::Authentication::MessageDigestKeys> message_digest_keys;
        
}; // Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::VirtualLinkScopes::VirtualLinkScope::Authentication


class Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::VirtualLinkScopes::VirtualLinkScope::Authentication::Type : public ydk::Entity
{
    public:
        Type();
        ~Type();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf authen_type; //type: OspfAuthentication
        ydk::YLeaf keychain_authen_type; //type: OspfKeychainAuth
        ydk::YLeaf keychain_name; //type: string

}; // Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::VirtualLinkScopes::VirtualLinkScope::Authentication::Type


class Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::VirtualLinkScopes::VirtualLinkScope::Authentication::MessageDigestKeys : public ydk::Entity
{
    public:
        MessageDigestKeys();
        ~MessageDigestKeys();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class MessageDigestKey; //type: Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::VirtualLinkScopes::VirtualLinkScope::Authentication::MessageDigestKeys::MessageDigestKey

        ydk::YList message_digest_key;
        
}; // Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::VirtualLinkScopes::VirtualLinkScope::Authentication::MessageDigestKeys


class Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::VirtualLinkScopes::VirtualLinkScope::Authentication::MessageDigestKeys::MessageDigestKey : public ydk::Entity
{
    public:
        MessageDigestKey();
        ~MessageDigestKey();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf key_id; //type: uint32
        ydk::YLeaf password; //type: string

}; // Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::VirtualLinkScopes::VirtualLinkScope::Authentication::MessageDigestKeys::MessageDigestKey


class Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::VirtualLinkScopes::VirtualLinkScope::DeadIntervalMinimal : public ydk::Entity
{
    public:
        DeadIntervalMinimal();
        ~DeadIntervalMinimal();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf interval; //type: uint32
        ydk::YLeaf multiplier; //type: uint32

}; // Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::VirtualLinkScopes::VirtualLinkScope::DeadIntervalMinimal


class Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::ShamLinkScopes : public ydk::Entity
{
    public:
        ShamLinkScopes();
        ~ShamLinkScopes();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class ShamLinkScope; //type: Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::ShamLinkScopes::ShamLinkScope

        ydk::YList sham_link_scope;
        
}; // Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::ShamLinkScopes


class Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::ShamLinkScopes::ShamLinkScope : public ydk::Entity
{
    public:
        ShamLinkScope();
        ~ShamLinkScope();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf source_address; //type: string
        ydk::YLeaf destination_address; //type: string
        ydk::YLeaf source; //type: string
        ydk::YLeaf cost; //type: uint32
        ydk::YLeaf hello_interval; //type: uint32
        ydk::YLeaf transmit_delay; //type: uint32
        ydk::YLeaf retransmit_interval; //type: uint32
        ydk::YLeaf running; //type: empty
        class Authentication; //type: Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::ShamLinkScopes::ShamLinkScope::Authentication
        class DeadIntervalMinimal; //type: Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::ShamLinkScopes::ShamLinkScope::DeadIntervalMinimal

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_ospf_cfg::Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::ShamLinkScopes::ShamLinkScope::Authentication> authentication;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_ospf_cfg::Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::ShamLinkScopes::ShamLinkScope::DeadIntervalMinimal> dead_interval_minimal;
        
}; // Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::ShamLinkScopes::ShamLinkScope


class Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::ShamLinkScopes::ShamLinkScope::Authentication : public ydk::Entity
{
    public:
        Authentication();
        ~Authentication();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf key; //type: string
        class Type; //type: Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::ShamLinkScopes::ShamLinkScope::Authentication::Type
        class MessageDigestKeys; //type: Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::ShamLinkScopes::ShamLinkScope::Authentication::MessageDigestKeys

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_ospf_cfg::Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::ShamLinkScopes::ShamLinkScope::Authentication::Type> type;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_ospf_cfg::Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::ShamLinkScopes::ShamLinkScope::Authentication::MessageDigestKeys> message_digest_keys;
        
}; // Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::ShamLinkScopes::ShamLinkScope::Authentication


class Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::ShamLinkScopes::ShamLinkScope::Authentication::Type : public ydk::Entity
{
    public:
        Type();
        ~Type();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf authen_type; //type: OspfAuthentication
        ydk::YLeaf keychain_authen_type; //type: OspfKeychainAuth
        ydk::YLeaf keychain_name; //type: string

}; // Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::ShamLinkScopes::ShamLinkScope::Authentication::Type


class Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::ShamLinkScopes::ShamLinkScope::Authentication::MessageDigestKeys : public ydk::Entity
{
    public:
        MessageDigestKeys();
        ~MessageDigestKeys();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class MessageDigestKey; //type: Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::ShamLinkScopes::ShamLinkScope::Authentication::MessageDigestKeys::MessageDigestKey

        ydk::YList message_digest_key;
        
}; // Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::ShamLinkScopes::ShamLinkScope::Authentication::MessageDigestKeys


class Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::ShamLinkScopes::ShamLinkScope::Authentication::MessageDigestKeys::MessageDigestKey : public ydk::Entity
{
    public:
        MessageDigestKey();
        ~MessageDigestKey();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf key_id; //type: uint32
        ydk::YLeaf password; //type: string

}; // Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::ShamLinkScopes::ShamLinkScope::Authentication::MessageDigestKeys::MessageDigestKey


class Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::ShamLinkScopes::ShamLinkScope::DeadIntervalMinimal : public ydk::Entity
{
    public:
        DeadIntervalMinimal();
        ~DeadIntervalMinimal();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf interval; //type: uint32
        ydk::YLeaf multiplier; //type: uint32

}; // Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::ShamLinkScopes::ShamLinkScope::DeadIntervalMinimal


class Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::AreaScope : public ydk::Entity
{
    public:
        AreaScope();
        ~AreaScope();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf cost; //type: uint32
        ydk::YLeaf prefix_suppression_primary; //type: boolean
        ydk::YLeaf mtu_ignore; //type: boolean
        ydk::YLeaf ldp_sync_igp_shortcuts; //type: boolean
        ydk::YLeaf ldp_auto_config; //type: empty
        ydk::YLeaf network_type; //type: OspfNetwork
        ydk::YLeaf hello_interval; //type: uint32
        ydk::YLeaf loopback_stub_network; //type: boolean
        ydk::YLeaf prefix_suppression_secondary; //type: boolean
        ydk::YLeaf demand_circuit; //type: boolean
        ydk::YLeaf passive; //type: boolean
        ydk::YLeaf transmit_delay; //type: uint32
        ydk::YLeaf packet_size; //type: uint32
        ydk::YLeaf ldp_sync; //type: boolean
        ydk::YLeaf database_filter; //type: boolean
        ydk::YLeaf link_down_fast_detect; //type: boolean
        ydk::YLeaf segment_routing_forwarding; //type: OspfSegmentRoutingForwarding
        ydk::YLeaf retransmit_interval; //type: uint32
        ydk::YLeaf priority; //type: uint32
        ydk::YLeaf flood_reduction; //type: boolean
        class DistributeList; //type: Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::AreaScope::DistributeList
        class Bfd; //type: Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::AreaScope::Bfd
        class Authentication; //type: Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::AreaScope::Authentication
        class Security; //type: Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::AreaScope::Security
        class DeadIntervalMinimal; //type: Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::AreaScope::DeadIntervalMinimal
        class FastReroute; //type: Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::AreaScope::FastReroute
        class CostFallback; //type: Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::AreaScope::CostFallback

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_ospf_cfg::Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::AreaScope::DistributeList> distribute_list; // presence node
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_ospf_cfg::Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::AreaScope::Bfd> bfd;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_ospf_cfg::Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::AreaScope::Authentication> authentication;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_ospf_cfg::Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::AreaScope::Security> security;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_ospf_cfg::Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::AreaScope::DeadIntervalMinimal> dead_interval_minimal;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_ospf_cfg::Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::AreaScope::FastReroute> fast_reroute;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_ospf_cfg::Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::AreaScope::CostFallback> cost_fallback;
        
}; // Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::AreaScope


class Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::AreaScope::DistributeList : public ydk::Entity
{
    public:
        DistributeList();
        ~DistributeList();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf access_list_name; //type: string
        ydk::YLeaf route_policy_name; //type: string

}; // Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::AreaScope::DistributeList


class Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::AreaScope::Bfd : public ydk::Entity
{
    public:
        Bfd();
        ~Bfd();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf interval; //type: uint32
        ydk::YLeaf detection_multiplier; //type: uint32
        ydk::YLeaf fast_detect_mode; //type: BfdEnableMode

}; // Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::AreaScope::Bfd


class Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::AreaScope::Authentication : public ydk::Entity
{
    public:
        Authentication();
        ~Authentication();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf key; //type: string
        class Type; //type: Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::AreaScope::Authentication::Type
        class MessageDigestKeys; //type: Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::AreaScope::Authentication::MessageDigestKeys

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_ospf_cfg::Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::AreaScope::Authentication::Type> type;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_ospf_cfg::Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::AreaScope::Authentication::MessageDigestKeys> message_digest_keys;
        
}; // Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::AreaScope::Authentication


class Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::AreaScope::Authentication::Type : public ydk::Entity
{
    public:
        Type();
        ~Type();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf authen_type; //type: OspfAuthentication
        ydk::YLeaf keychain_authen_type; //type: OspfKeychainAuth
        ydk::YLeaf keychain_name; //type: string

}; // Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::AreaScope::Authentication::Type


class Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::AreaScope::Authentication::MessageDigestKeys : public ydk::Entity
{
    public:
        MessageDigestKeys();
        ~MessageDigestKeys();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class MessageDigestKey; //type: Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::AreaScope::Authentication::MessageDigestKeys::MessageDigestKey

        ydk::YList message_digest_key;
        
}; // Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::AreaScope::Authentication::MessageDigestKeys


class Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::AreaScope::Authentication::MessageDigestKeys::MessageDigestKey : public ydk::Entity
{
    public:
        MessageDigestKey();
        ~MessageDigestKey();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf key_id; //type: uint32
        ydk::YLeaf password; //type: string

}; // Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::AreaScope::Authentication::MessageDigestKeys::MessageDigestKey


class Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::AreaScope::Security : public ydk::Entity
{
    public:
        Security();
        ~Security();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Ttl; //type: Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::AreaScope::Security::Ttl

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_ospf_cfg::Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::AreaScope::Security::Ttl> ttl;
        
}; // Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::AreaScope::Security


class Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::AreaScope::Security::Ttl : public ydk::Entity
{
    public:
        Ttl();
        ~Ttl();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf enable; //type: boolean
        ydk::YLeaf hop_count; //type: uint32

}; // Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::AreaScope::Security::Ttl


class Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::AreaScope::DeadIntervalMinimal : public ydk::Entity
{
    public:
        DeadIntervalMinimal();
        ~DeadIntervalMinimal();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf interval; //type: uint32
        ydk::YLeaf multiplier; //type: uint32

}; // Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::AreaScope::DeadIntervalMinimal


class Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::AreaScope::FastReroute : public ydk::Entity
{
    public:
        FastReroute();
        ~FastReroute();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf fast_reroute_enable; //type: OspfFastReroute
        class PerLink; //type: Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::AreaScope::FastReroute::PerLink
        class PerPrefix; //type: Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::AreaScope::FastReroute::PerPrefix

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_ospf_cfg::Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::AreaScope::FastReroute::PerLink> per_link;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_ospf_cfg::Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::AreaScope::FastReroute::PerPrefix> per_prefix;
        
}; // Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::AreaScope::FastReroute


class Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::AreaScope::FastReroute::PerLink : public ydk::Entity
{
    public:
        PerLink();
        ~PerLink();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf fast_reroute_use_candidate_only; //type: boolean
        class CandidateInterfaces; //type: Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::AreaScope::FastReroute::PerLink::CandidateInterfaces
        class ExcludeInterfaces; //type: Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::AreaScope::FastReroute::PerLink::ExcludeInterfaces

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_ospf_cfg::Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::AreaScope::FastReroute::PerLink::CandidateInterfaces> candidate_interfaces;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_ospf_cfg::Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::AreaScope::FastReroute::PerLink::ExcludeInterfaces> exclude_interfaces;
        
}; // Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::AreaScope::FastReroute::PerLink


class Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::AreaScope::FastReroute::PerLink::CandidateInterfaces : public ydk::Entity
{
    public:
        CandidateInterfaces();
        ~CandidateInterfaces();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class CandidateInterface; //type: Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::AreaScope::FastReroute::PerLink::CandidateInterfaces::CandidateInterface

        ydk::YList candidate_interface;
        
}; // Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::AreaScope::FastReroute::PerLink::CandidateInterfaces


class Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::AreaScope::FastReroute::PerLink::CandidateInterfaces::CandidateInterface : public ydk::Entity
{
    public:
        CandidateInterface();
        ~CandidateInterface();

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

}; // Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::AreaScope::FastReroute::PerLink::CandidateInterfaces::CandidateInterface


class Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::AreaScope::FastReroute::PerLink::ExcludeInterfaces : public ydk::Entity
{
    public:
        ExcludeInterfaces();
        ~ExcludeInterfaces();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class ExcludeInterface; //type: Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::AreaScope::FastReroute::PerLink::ExcludeInterfaces::ExcludeInterface

        ydk::YList exclude_interface;
        
}; // Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::AreaScope::FastReroute::PerLink::ExcludeInterfaces


class Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::AreaScope::FastReroute::PerLink::ExcludeInterfaces::ExcludeInterface : public ydk::Entity
{
    public:
        ExcludeInterface();
        ~ExcludeInterface();

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

}; // Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::AreaScope::FastReroute::PerLink::ExcludeInterfaces::ExcludeInterface


class Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::AreaScope::FastReroute::PerPrefix : public ydk::Entity
{
    public:
        PerPrefix();
        ~PerPrefix();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf topology_independent_lfa; //type: boolean
        ydk::YLeaf fast_reroute_use_candidate_only; //type: boolean
        class RemoteLfa; //type: Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::AreaScope::FastReroute::PerPrefix::RemoteLfa
        class Tiebreakers; //type: Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::AreaScope::FastReroute::PerPrefix::Tiebreakers
        class CandidateInterfaces; //type: Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::AreaScope::FastReroute::PerPrefix::CandidateInterfaces
        class ExcludeInterfaces; //type: Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::AreaScope::FastReroute::PerPrefix::ExcludeInterfaces

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_ospf_cfg::Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::AreaScope::FastReroute::PerPrefix::RemoteLfa> remote_lfa;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_ospf_cfg::Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::AreaScope::FastReroute::PerPrefix::Tiebreakers> tiebreakers;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_ospf_cfg::Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::AreaScope::FastReroute::PerPrefix::CandidateInterfaces> candidate_interfaces;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_ospf_cfg::Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::AreaScope::FastReroute::PerPrefix::ExcludeInterfaces> exclude_interfaces;
        
}; // Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::AreaScope::FastReroute::PerPrefix


class Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::AreaScope::FastReroute::PerPrefix::RemoteLfa : public ydk::Entity
{
    public:
        RemoteLfa();
        ~RemoteLfa();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf tunnel; //type: OspfFrrRlfaTunnel
        ydk::YLeaf maximum_cost; //type: uint32

}; // Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::AreaScope::FastReroute::PerPrefix::RemoteLfa


class Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::AreaScope::FastReroute::PerPrefix::Tiebreakers : public ydk::Entity
{
    public:
        Tiebreakers();
        ~Tiebreakers();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Tiebreaker; //type: Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::AreaScope::FastReroute::PerPrefix::Tiebreakers::Tiebreaker

        ydk::YList tiebreaker;
        
}; // Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::AreaScope::FastReroute::PerPrefix::Tiebreakers


class Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::AreaScope::FastReroute::PerPrefix::Tiebreakers::Tiebreaker : public ydk::Entity
{
    public:
        Tiebreaker();
        ~Tiebreaker();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf tiebreaker_type; //type: OspfFastRerouteTiebreakersIntf
        ydk::YLeaf tiebreaker_index; //type: uint32

}; // Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::AreaScope::FastReroute::PerPrefix::Tiebreakers::Tiebreaker


class Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::AreaScope::FastReroute::PerPrefix::CandidateInterfaces : public ydk::Entity
{
    public:
        CandidateInterfaces();
        ~CandidateInterfaces();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class CandidateInterface; //type: Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::AreaScope::FastReroute::PerPrefix::CandidateInterfaces::CandidateInterface

        ydk::YList candidate_interface;
        
}; // Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::AreaScope::FastReroute::PerPrefix::CandidateInterfaces


class Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::AreaScope::FastReroute::PerPrefix::CandidateInterfaces::CandidateInterface : public ydk::Entity
{
    public:
        CandidateInterface();
        ~CandidateInterface();

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

}; // Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::AreaScope::FastReroute::PerPrefix::CandidateInterfaces::CandidateInterface


class Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::AreaScope::FastReroute::PerPrefix::ExcludeInterfaces : public ydk::Entity
{
    public:
        ExcludeInterfaces();
        ~ExcludeInterfaces();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class ExcludeInterface; //type: Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::AreaScope::FastReroute::PerPrefix::ExcludeInterfaces::ExcludeInterface

        ydk::YList exclude_interface;
        
}; // Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::AreaScope::FastReroute::PerPrefix::ExcludeInterfaces


class Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::AreaScope::FastReroute::PerPrefix::ExcludeInterfaces::ExcludeInterface : public ydk::Entity
{
    public:
        ExcludeInterface();
        ~ExcludeInterface();

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

}; // Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::AreaScope::FastReroute::PerPrefix::ExcludeInterfaces::ExcludeInterface


class Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::AreaScope::CostFallback : public ydk::Entity
{
    public:
        CostFallback();
        ~CostFallback();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf cost; //type: uint32
        ydk::YLeaf threshold; //type: uint32

}; // Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::AreaScope::CostFallback


class Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::NameScopes : public ydk::Entity
{
    public:
        NameScopes();
        ~NameScopes();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class NameScope; //type: Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::NameScopes::NameScope

        ydk::YList name_scope;
        
}; // Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::NameScopes


class Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::NameScopes::NameScope : public ydk::Entity
{
    public:
        NameScope();
        ~NameScope();

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
        ydk::YLeaf cost; //type: uint32
        ydk::YLeaf prefix_suppression_primary; //type: boolean
        ydk::YLeaf mtu_ignore; //type: boolean
        ydk::YLeaf ldp_sync_igp_shortcuts; //type: boolean
        ydk::YLeaf ldp_auto_config; //type: empty
        ydk::YLeaf network_type; //type: OspfNetwork
        ydk::YLeaf hello_interval; //type: uint32
        ydk::YLeaf loopback_stub_network; //type: boolean
        ydk::YLeaf prefix_suppression_secondary; //type: boolean
        ydk::YLeaf demand_circuit; //type: boolean
        ydk::YLeaf passive; //type: boolean
        ydk::YLeaf transmit_delay; //type: uint32
        ydk::YLeaf packet_size; //type: uint32
        ydk::YLeaf ldp_sync; //type: boolean
        ydk::YLeaf database_filter; //type: boolean
        ydk::YLeaf link_down_fast_detect; //type: boolean
        ydk::YLeaf segment_routing_forwarding; //type: OspfSegmentRoutingForwarding
        ydk::YLeaf retransmit_interval; //type: uint32
        ydk::YLeaf priority; //type: uint32
        ydk::YLeaf flood_reduction; //type: boolean
        ydk::YLeaf running; //type: empty
        class PrefixSid; //type: Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::NameScopes::NameScope::PrefixSid
        class PrefixSidStrict; //type: Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::NameScopes::NameScope::PrefixSidStrict
        class DistributeList; //type: Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::NameScopes::NameScope::DistributeList
        class Bfd; //type: Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::NameScopes::NameScope::Bfd
        class Authentication; //type: Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::NameScopes::NameScope::Authentication
        class Security; //type: Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::NameScopes::NameScope::Security
        class Neighbors; //type: Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::NameScopes::NameScope::Neighbors
        class DeadIntervalMinimal; //type: Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::NameScopes::NameScope::DeadIntervalMinimal
        class FastReroute; //type: Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::NameScopes::NameScope::FastReroute
        class CostFallback; //type: Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::NameScopes::NameScope::CostFallback

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_ospf_cfg::Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::NameScopes::NameScope::PrefixSid> prefix_sid; // presence node
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_ospf_cfg::Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::NameScopes::NameScope::PrefixSidStrict> prefix_sid_strict; // presence node
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_ospf_cfg::Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::NameScopes::NameScope::DistributeList> distribute_list; // presence node
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_ospf_cfg::Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::NameScopes::NameScope::Bfd> bfd;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_ospf_cfg::Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::NameScopes::NameScope::Authentication> authentication;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_ospf_cfg::Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::NameScopes::NameScope::Security> security;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_ospf_cfg::Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::NameScopes::NameScope::Neighbors> neighbors;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_ospf_cfg::Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::NameScopes::NameScope::DeadIntervalMinimal> dead_interval_minimal;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_ospf_cfg::Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::NameScopes::NameScope::FastReroute> fast_reroute;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_ospf_cfg::Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::NameScopes::NameScope::CostFallback> cost_fallback;
        
}; // Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::NameScopes::NameScope


class Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::NameScopes::NameScope::PrefixSid : public ydk::Entity
{
    public:
        PrefixSid();
        ~PrefixSid();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf sid_value; //type: uint32
        ydk::YLeaf explicit_null; //type: boolean
        ydk::YLeaf type; //type: OspfSid
        ydk::YLeaf n_flag_clear; //type: boolean

}; // Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::NameScopes::NameScope::PrefixSid


class Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::NameScopes::NameScope::PrefixSidStrict : public ydk::Entity
{
    public:
        PrefixSidStrict();
        ~PrefixSidStrict();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf sid_value; //type: uint32
        ydk::YLeaf explicit_null; //type: boolean
        ydk::YLeaf type; //type: OspfSid
        ydk::YLeaf n_flag_clear; //type: boolean

}; // Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::NameScopes::NameScope::PrefixSidStrict


class Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::NameScopes::NameScope::DistributeList : public ydk::Entity
{
    public:
        DistributeList();
        ~DistributeList();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf access_list_name; //type: string
        ydk::YLeaf route_policy_name; //type: string

}; // Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::NameScopes::NameScope::DistributeList


class Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::NameScopes::NameScope::Bfd : public ydk::Entity
{
    public:
        Bfd();
        ~Bfd();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf interval; //type: uint32
        ydk::YLeaf detection_multiplier; //type: uint32
        ydk::YLeaf fast_detect_mode; //type: BfdEnableMode

}; // Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::NameScopes::NameScope::Bfd


class Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::NameScopes::NameScope::Authentication : public ydk::Entity
{
    public:
        Authentication();
        ~Authentication();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf key; //type: string
        class Type; //type: Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::NameScopes::NameScope::Authentication::Type
        class MessageDigestKeys; //type: Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::NameScopes::NameScope::Authentication::MessageDigestKeys

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_ospf_cfg::Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::NameScopes::NameScope::Authentication::Type> type;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_ospf_cfg::Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::NameScopes::NameScope::Authentication::MessageDigestKeys> message_digest_keys;
        
}; // Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::NameScopes::NameScope::Authentication


class Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::NameScopes::NameScope::Authentication::Type : public ydk::Entity
{
    public:
        Type();
        ~Type();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf authen_type; //type: OspfAuthentication
        ydk::YLeaf keychain_authen_type; //type: OspfKeychainAuth
        ydk::YLeaf keychain_name; //type: string

}; // Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::NameScopes::NameScope::Authentication::Type


class Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::NameScopes::NameScope::Authentication::MessageDigestKeys : public ydk::Entity
{
    public:
        MessageDigestKeys();
        ~MessageDigestKeys();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class MessageDigestKey; //type: Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::NameScopes::NameScope::Authentication::MessageDigestKeys::MessageDigestKey

        ydk::YList message_digest_key;
        
}; // Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::NameScopes::NameScope::Authentication::MessageDigestKeys


class Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::NameScopes::NameScope::Authentication::MessageDigestKeys::MessageDigestKey : public ydk::Entity
{
    public:
        MessageDigestKey();
        ~MessageDigestKey();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf key_id; //type: uint32
        ydk::YLeaf password; //type: string

}; // Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::NameScopes::NameScope::Authentication::MessageDigestKeys::MessageDigestKey


class Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::NameScopes::NameScope::Security : public ydk::Entity
{
    public:
        Security();
        ~Security();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Ttl; //type: Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::NameScopes::NameScope::Security::Ttl

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_ospf_cfg::Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::NameScopes::NameScope::Security::Ttl> ttl;
        
}; // Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::NameScopes::NameScope::Security


class Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::NameScopes::NameScope::Security::Ttl : public ydk::Entity
{
    public:
        Ttl();
        ~Ttl();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf enable; //type: boolean
        ydk::YLeaf hop_count; //type: uint32

}; // Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::NameScopes::NameScope::Security::Ttl


class Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::NameScopes::NameScope::Neighbors : public ydk::Entity
{
    public:
        Neighbors();
        ~Neighbors();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Neighbor; //type: Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::NameScopes::NameScope::Neighbors::Neighbor

        ydk::YList neighbor;
        
}; // Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::NameScopes::NameScope::Neighbors


class Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::NameScopes::NameScope::Neighbors::Neighbor : public ydk::Entity
{
    public:
        Neighbor();
        ~Neighbor();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf neighbor_address; //type: string
        ydk::YLeaf priority; //type: uint32
        ydk::YLeaf poll_interval; //type: uint32
        ydk::YLeaf cost; //type: uint32
        ydk::YLeaf database_filter; //type: boolean

}; // Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::NameScopes::NameScope::Neighbors::Neighbor


class Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::NameScopes::NameScope::DeadIntervalMinimal : public ydk::Entity
{
    public:
        DeadIntervalMinimal();
        ~DeadIntervalMinimal();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf interval; //type: uint32
        ydk::YLeaf multiplier; //type: uint32

}; // Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::NameScopes::NameScope::DeadIntervalMinimal


class Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::NameScopes::NameScope::FastReroute : public ydk::Entity
{
    public:
        FastReroute();
        ~FastReroute();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf fast_reroute_enable; //type: OspfFastReroute
        class PerLink; //type: Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::NameScopes::NameScope::FastReroute::PerLink
        class PerPrefix; //type: Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::NameScopes::NameScope::FastReroute::PerPrefix

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_ospf_cfg::Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::NameScopes::NameScope::FastReroute::PerLink> per_link;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_ospf_cfg::Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::NameScopes::NameScope::FastReroute::PerPrefix> per_prefix;
        
}; // Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::NameScopes::NameScope::FastReroute


class Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::NameScopes::NameScope::FastReroute::PerLink : public ydk::Entity
{
    public:
        PerLink();
        ~PerLink();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf fast_reroute_use_candidate_only; //type: boolean
        class CandidateInterfaces; //type: Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::NameScopes::NameScope::FastReroute::PerLink::CandidateInterfaces
        class ExcludeInterfaces; //type: Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::NameScopes::NameScope::FastReroute::PerLink::ExcludeInterfaces

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_ospf_cfg::Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::NameScopes::NameScope::FastReroute::PerLink::CandidateInterfaces> candidate_interfaces;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_ospf_cfg::Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::NameScopes::NameScope::FastReroute::PerLink::ExcludeInterfaces> exclude_interfaces;
        
}; // Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::NameScopes::NameScope::FastReroute::PerLink


class Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::NameScopes::NameScope::FastReroute::PerLink::CandidateInterfaces : public ydk::Entity
{
    public:
        CandidateInterfaces();
        ~CandidateInterfaces();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class CandidateInterface; //type: Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::NameScopes::NameScope::FastReroute::PerLink::CandidateInterfaces::CandidateInterface

        ydk::YList candidate_interface;
        
}; // Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::NameScopes::NameScope::FastReroute::PerLink::CandidateInterfaces


class Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::NameScopes::NameScope::FastReroute::PerLink::CandidateInterfaces::CandidateInterface : public ydk::Entity
{
    public:
        CandidateInterface();
        ~CandidateInterface();

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

}; // Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::NameScopes::NameScope::FastReroute::PerLink::CandidateInterfaces::CandidateInterface


class Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::NameScopes::NameScope::FastReroute::PerLink::ExcludeInterfaces : public ydk::Entity
{
    public:
        ExcludeInterfaces();
        ~ExcludeInterfaces();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class ExcludeInterface; //type: Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::NameScopes::NameScope::FastReroute::PerLink::ExcludeInterfaces::ExcludeInterface

        ydk::YList exclude_interface;
        
}; // Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::NameScopes::NameScope::FastReroute::PerLink::ExcludeInterfaces


class Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::NameScopes::NameScope::FastReroute::PerLink::ExcludeInterfaces::ExcludeInterface : public ydk::Entity
{
    public:
        ExcludeInterface();
        ~ExcludeInterface();

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

}; // Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::NameScopes::NameScope::FastReroute::PerLink::ExcludeInterfaces::ExcludeInterface


class Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::NameScopes::NameScope::FastReroute::PerPrefix : public ydk::Entity
{
    public:
        PerPrefix();
        ~PerPrefix();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf topology_independent_lfa; //type: boolean
        ydk::YLeaf fast_reroute_use_candidate_only; //type: boolean
        class RemoteLfa; //type: Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::NameScopes::NameScope::FastReroute::PerPrefix::RemoteLfa
        class Tiebreakers; //type: Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::NameScopes::NameScope::FastReroute::PerPrefix::Tiebreakers
        class CandidateInterfaces; //type: Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::NameScopes::NameScope::FastReroute::PerPrefix::CandidateInterfaces
        class ExcludeInterfaces; //type: Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::NameScopes::NameScope::FastReroute::PerPrefix::ExcludeInterfaces

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_ospf_cfg::Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::NameScopes::NameScope::FastReroute::PerPrefix::RemoteLfa> remote_lfa;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_ospf_cfg::Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::NameScopes::NameScope::FastReroute::PerPrefix::Tiebreakers> tiebreakers;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_ospf_cfg::Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::NameScopes::NameScope::FastReroute::PerPrefix::CandidateInterfaces> candidate_interfaces;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_ospf_cfg::Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::NameScopes::NameScope::FastReroute::PerPrefix::ExcludeInterfaces> exclude_interfaces;
        
}; // Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::NameScopes::NameScope::FastReroute::PerPrefix


class Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::NameScopes::NameScope::FastReroute::PerPrefix::RemoteLfa : public ydk::Entity
{
    public:
        RemoteLfa();
        ~RemoteLfa();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf tunnel; //type: OspfFrrRlfaTunnel
        ydk::YLeaf maximum_cost; //type: uint32

}; // Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::NameScopes::NameScope::FastReroute::PerPrefix::RemoteLfa


class Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::NameScopes::NameScope::FastReroute::PerPrefix::Tiebreakers : public ydk::Entity
{
    public:
        Tiebreakers();
        ~Tiebreakers();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Tiebreaker; //type: Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::NameScopes::NameScope::FastReroute::PerPrefix::Tiebreakers::Tiebreaker

        ydk::YList tiebreaker;
        
}; // Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::NameScopes::NameScope::FastReroute::PerPrefix::Tiebreakers


class Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::NameScopes::NameScope::FastReroute::PerPrefix::Tiebreakers::Tiebreaker : public ydk::Entity
{
    public:
        Tiebreaker();
        ~Tiebreaker();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf tiebreaker_type; //type: OspfFastRerouteTiebreakersIntf
        ydk::YLeaf tiebreaker_index; //type: uint32

}; // Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::NameScopes::NameScope::FastReroute::PerPrefix::Tiebreakers::Tiebreaker


class Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::NameScopes::NameScope::FastReroute::PerPrefix::CandidateInterfaces : public ydk::Entity
{
    public:
        CandidateInterfaces();
        ~CandidateInterfaces();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class CandidateInterface; //type: Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::NameScopes::NameScope::FastReroute::PerPrefix::CandidateInterfaces::CandidateInterface

        ydk::YList candidate_interface;
        
}; // Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::NameScopes::NameScope::FastReroute::PerPrefix::CandidateInterfaces


class Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::NameScopes::NameScope::FastReroute::PerPrefix::CandidateInterfaces::CandidateInterface : public ydk::Entity
{
    public:
        CandidateInterface();
        ~CandidateInterface();

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

}; // Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::NameScopes::NameScope::FastReroute::PerPrefix::CandidateInterfaces::CandidateInterface


class Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::NameScopes::NameScope::FastReroute::PerPrefix::ExcludeInterfaces : public ydk::Entity
{
    public:
        ExcludeInterfaces();
        ~ExcludeInterfaces();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class ExcludeInterface; //type: Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::NameScopes::NameScope::FastReroute::PerPrefix::ExcludeInterfaces::ExcludeInterface

        ydk::YList exclude_interface;
        
}; // Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::NameScopes::NameScope::FastReroute::PerPrefix::ExcludeInterfaces


class Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::NameScopes::NameScope::FastReroute::PerPrefix::ExcludeInterfaces::ExcludeInterface : public ydk::Entity
{
    public:
        ExcludeInterface();
        ~ExcludeInterface();

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

}; // Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::NameScopes::NameScope::FastReroute::PerPrefix::ExcludeInterfaces::ExcludeInterface


class Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::NameScopes::NameScope::CostFallback : public ydk::Entity
{
    public:
        CostFallback();
        ~CostFallback();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf cost; //type: uint32
        ydk::YLeaf threshold; //type: uint32

}; // Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::NameScopes::NameScope::CostFallback


class Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::MultiAreaInterfaceScopes : public ydk::Entity
{
    public:
        MultiAreaInterfaceScopes();
        ~MultiAreaInterfaceScopes();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class MultiAreaInterfaceScope; //type: Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::MultiAreaInterfaceScopes::MultiAreaInterfaceScope

        ydk::YList multi_area_interface_scope;
        
}; // Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::MultiAreaInterfaceScopes


class Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::MultiAreaInterfaceScopes::MultiAreaInterfaceScope : public ydk::Entity
{
    public:
        MultiAreaInterfaceScope();
        ~MultiAreaInterfaceScope();

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
        ydk::YLeaf cost; //type: uint32
        ydk::YLeaf mtu_ignore; //type: boolean
        ydk::YLeaf hello_interval; //type: uint32
        ydk::YLeaf passive; //type: boolean
        ydk::YLeaf transmit_delay; //type: uint32
        ydk::YLeaf packet_size; //type: uint32
        ydk::YLeaf database_filter; //type: boolean
        ydk::YLeaf retransmit_interval; //type: uint32
        ydk::YLeaf running; //type: empty
        class DistributeList; //type: Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::DistributeList
        class Authentication; //type: Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::Authentication
        class Neighbors; //type: Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::Neighbors
        class DeadIntervalMinimal; //type: Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::DeadIntervalMinimal
        class FastReroute; //type: Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::FastReroute
        class CostFallback; //type: Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::CostFallback

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_ospf_cfg::Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::DistributeList> distribute_list; // presence node
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_ospf_cfg::Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::Authentication> authentication;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_ospf_cfg::Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::Neighbors> neighbors;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_ospf_cfg::Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::DeadIntervalMinimal> dead_interval_minimal;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_ospf_cfg::Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::FastReroute> fast_reroute;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_ospf_cfg::Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::CostFallback> cost_fallback;
        
}; // Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::MultiAreaInterfaceScopes::MultiAreaInterfaceScope


class Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::DistributeList : public ydk::Entity
{
    public:
        DistributeList();
        ~DistributeList();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf access_list_name; //type: string
        ydk::YLeaf route_policy_name; //type: string

}; // Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::DistributeList


class Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::Authentication : public ydk::Entity
{
    public:
        Authentication();
        ~Authentication();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf key; //type: string
        class Type; //type: Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::Authentication::Type
        class MessageDigestKeys; //type: Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::Authentication::MessageDigestKeys

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_ospf_cfg::Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::Authentication::Type> type;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_ospf_cfg::Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::Authentication::MessageDigestKeys> message_digest_keys;
        
}; // Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::Authentication


class Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::Authentication::Type : public ydk::Entity
{
    public:
        Type();
        ~Type();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf authen_type; //type: OspfAuthentication
        ydk::YLeaf keychain_authen_type; //type: OspfKeychainAuth
        ydk::YLeaf keychain_name; //type: string

}; // Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::Authentication::Type


class Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::Authentication::MessageDigestKeys : public ydk::Entity
{
    public:
        MessageDigestKeys();
        ~MessageDigestKeys();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class MessageDigestKey; //type: Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::Authentication::MessageDigestKeys::MessageDigestKey

        ydk::YList message_digest_key;
        
}; // Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::Authentication::MessageDigestKeys


class Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::Authentication::MessageDigestKeys::MessageDigestKey : public ydk::Entity
{
    public:
        MessageDigestKey();
        ~MessageDigestKey();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf key_id; //type: uint32
        ydk::YLeaf password; //type: string

}; // Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::Authentication::MessageDigestKeys::MessageDigestKey


class Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::Neighbors : public ydk::Entity
{
    public:
        Neighbors();
        ~Neighbors();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Neighbor; //type: Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::Neighbors::Neighbor

        ydk::YList neighbor;
        
}; // Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::Neighbors


class Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::Neighbors::Neighbor : public ydk::Entity
{
    public:
        Neighbor();
        ~Neighbor();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf neighbor_address; //type: string
        ydk::YLeaf priority; //type: uint32
        ydk::YLeaf poll_interval; //type: uint32
        ydk::YLeaf cost; //type: uint32
        ydk::YLeaf database_filter; //type: boolean

}; // Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::Neighbors::Neighbor


class Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::DeadIntervalMinimal : public ydk::Entity
{
    public:
        DeadIntervalMinimal();
        ~DeadIntervalMinimal();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf interval; //type: uint32
        ydk::YLeaf multiplier; //type: uint32

}; // Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::DeadIntervalMinimal


class Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::FastReroute : public ydk::Entity
{
    public:
        FastReroute();
        ~FastReroute();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf fast_reroute_enable; //type: OspfFastReroute
        class PerLink; //type: Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::FastReroute::PerLink
        class PerPrefix; //type: Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::FastReroute::PerPrefix

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_ospf_cfg::Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::FastReroute::PerLink> per_link;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_ospf_cfg::Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::FastReroute::PerPrefix> per_prefix;
        
}; // Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::FastReroute


class Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::FastReroute::PerLink : public ydk::Entity
{
    public:
        PerLink();
        ~PerLink();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf fast_reroute_use_candidate_only; //type: boolean
        class CandidateInterfaces; //type: Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::FastReroute::PerLink::CandidateInterfaces
        class ExcludeInterfaces; //type: Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::FastReroute::PerLink::ExcludeInterfaces

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_ospf_cfg::Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::FastReroute::PerLink::CandidateInterfaces> candidate_interfaces;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_ospf_cfg::Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::FastReroute::PerLink::ExcludeInterfaces> exclude_interfaces;
        
}; // Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::FastReroute::PerLink


class Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::FastReroute::PerLink::CandidateInterfaces : public ydk::Entity
{
    public:
        CandidateInterfaces();
        ~CandidateInterfaces();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class CandidateInterface; //type: Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::FastReroute::PerLink::CandidateInterfaces::CandidateInterface

        ydk::YList candidate_interface;
        
}; // Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::FastReroute::PerLink::CandidateInterfaces


class Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::FastReroute::PerLink::CandidateInterfaces::CandidateInterface : public ydk::Entity
{
    public:
        CandidateInterface();
        ~CandidateInterface();

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

}; // Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::FastReroute::PerLink::CandidateInterfaces::CandidateInterface


class Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::FastReroute::PerLink::ExcludeInterfaces : public ydk::Entity
{
    public:
        ExcludeInterfaces();
        ~ExcludeInterfaces();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class ExcludeInterface; //type: Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::FastReroute::PerLink::ExcludeInterfaces::ExcludeInterface

        ydk::YList exclude_interface;
        
}; // Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::FastReroute::PerLink::ExcludeInterfaces


class Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::FastReroute::PerLink::ExcludeInterfaces::ExcludeInterface : public ydk::Entity
{
    public:
        ExcludeInterface();
        ~ExcludeInterface();

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

}; // Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::FastReroute::PerLink::ExcludeInterfaces::ExcludeInterface


class Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::FastReroute::PerPrefix : public ydk::Entity
{
    public:
        PerPrefix();
        ~PerPrefix();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf topology_independent_lfa; //type: boolean
        ydk::YLeaf fast_reroute_use_candidate_only; //type: boolean
        class RemoteLfa; //type: Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::FastReroute::PerPrefix::RemoteLfa
        class Tiebreakers; //type: Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::FastReroute::PerPrefix::Tiebreakers
        class CandidateInterfaces; //type: Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::FastReroute::PerPrefix::CandidateInterfaces
        class ExcludeInterfaces; //type: Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::FastReroute::PerPrefix::ExcludeInterfaces

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_ospf_cfg::Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::FastReroute::PerPrefix::RemoteLfa> remote_lfa;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_ospf_cfg::Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::FastReroute::PerPrefix::Tiebreakers> tiebreakers;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_ospf_cfg::Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::FastReroute::PerPrefix::CandidateInterfaces> candidate_interfaces;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_ospf_cfg::Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::FastReroute::PerPrefix::ExcludeInterfaces> exclude_interfaces;
        
}; // Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::FastReroute::PerPrefix


class Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::FastReroute::PerPrefix::RemoteLfa : public ydk::Entity
{
    public:
        RemoteLfa();
        ~RemoteLfa();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf tunnel; //type: OspfFrrRlfaTunnel
        ydk::YLeaf maximum_cost; //type: uint32

}; // Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::FastReroute::PerPrefix::RemoteLfa


class Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::FastReroute::PerPrefix::Tiebreakers : public ydk::Entity
{
    public:
        Tiebreakers();
        ~Tiebreakers();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Tiebreaker; //type: Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::FastReroute::PerPrefix::Tiebreakers::Tiebreaker

        ydk::YList tiebreaker;
        
}; // Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::FastReroute::PerPrefix::Tiebreakers


class Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::FastReroute::PerPrefix::Tiebreakers::Tiebreaker : public ydk::Entity
{
    public:
        Tiebreaker();
        ~Tiebreaker();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf tiebreaker_type; //type: OspfFastRerouteTiebreakersIntf
        ydk::YLeaf tiebreaker_index; //type: uint32

}; // Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::FastReroute::PerPrefix::Tiebreakers::Tiebreaker


class Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::FastReroute::PerPrefix::CandidateInterfaces : public ydk::Entity
{
    public:
        CandidateInterfaces();
        ~CandidateInterfaces();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class CandidateInterface; //type: Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::FastReroute::PerPrefix::CandidateInterfaces::CandidateInterface

        ydk::YList candidate_interface;
        
}; // Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::FastReroute::PerPrefix::CandidateInterfaces


class Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::FastReroute::PerPrefix::CandidateInterfaces::CandidateInterface : public ydk::Entity
{
    public:
        CandidateInterface();
        ~CandidateInterface();

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

}; // Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::FastReroute::PerPrefix::CandidateInterfaces::CandidateInterface


class Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::FastReroute::PerPrefix::ExcludeInterfaces : public ydk::Entity
{
    public:
        ExcludeInterfaces();
        ~ExcludeInterfaces();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class ExcludeInterface; //type: Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::FastReroute::PerPrefix::ExcludeInterfaces::ExcludeInterface

        ydk::YList exclude_interface;
        
}; // Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::FastReroute::PerPrefix::ExcludeInterfaces


class Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::FastReroute::PerPrefix::ExcludeInterfaces::ExcludeInterface : public ydk::Entity
{
    public:
        ExcludeInterface();
        ~ExcludeInterface();

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

}; // Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::FastReroute::PerPrefix::ExcludeInterfaces::ExcludeInterface


class Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::CostFallback : public ydk::Entity
{
    public:
        CostFallback();
        ~CostFallback();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf cost; //type: uint32
        ydk::YLeaf threshold; //type: uint32

}; // Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::CostFallback


class Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::AreaRanges : public ydk::Entity
{
    public:
        AreaRanges();
        ~AreaRanges();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class AreaRange; //type: Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::AreaRanges::AreaRange

        ydk::YList area_range;
        
}; // Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::AreaRanges


class Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::AreaRanges::AreaRange : public ydk::Entity
{
    public:
        AreaRange();
        ~AreaRange();

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
        ydk::YLeaf netmask; //type: string
        ydk::YLeaf not_advertise; //type: boolean

}; // Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::AreaRanges::AreaRange


class Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::Nssa : public ydk::Entity
{
    public:
        Nssa();
        ~Nssa();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf no_redistribution; //type: boolean
        ydk::YLeaf default_info_originate; //type: boolean
        ydk::YLeaf no_summary; //type: boolean
        ydk::YLeaf nssa_def_metric; //type: uint32
        ydk::YLeaf metric_type; //type: OspfLinkStateMetric

}; // Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::Nssa


class Ospf::Processes::Process::Vrfs::Vrf::Timers : public ydk::Entity
{
    public:
        Timers();
        ~Timers();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf lsa_pacing_flood; //type: uint32
        ydk::YLeaf fast_reroute_timer; //type: uint32
        ydk::YLeaf lsa_refresh; //type: uint32
        ydk::YLeaf lsa_group_pacing; //type: uint32
        ydk::YLeaf lsa_min_arrival; //type: uint32
        class SpfTimer; //type: Ospf::Processes::Process::Vrfs::Vrf::Timers::SpfTimer
        class LsaGenerationTimer; //type: Ospf::Processes::Process::Vrfs::Vrf::Timers::LsaGenerationTimer

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_ospf_cfg::Ospf::Processes::Process::Vrfs::Vrf::Timers::SpfTimer> spf_timer;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_ospf_cfg::Ospf::Processes::Process::Vrfs::Vrf::Timers::LsaGenerationTimer> lsa_generation_timer;
        
}; // Ospf::Processes::Process::Vrfs::Vrf::Timers


class Ospf::Processes::Process::Vrfs::Vrf::Timers::SpfTimer : public ydk::Entity
{
    public:
        SpfTimer();
        ~SpfTimer();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf initial_delay; //type: uint32
        ydk::YLeaf backoff_increment; //type: uint32
        ydk::YLeaf max_delay; //type: uint32

}; // Ospf::Processes::Process::Vrfs::Vrf::Timers::SpfTimer


class Ospf::Processes::Process::Vrfs::Vrf::Timers::LsaGenerationTimer : public ydk::Entity
{
    public:
        LsaGenerationTimer();
        ~LsaGenerationTimer();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf initial_delay; //type: uint32
        ydk::YLeaf backoff_increment; //type: uint32
        ydk::YLeaf max_delay; //type: uint32

}; // Ospf::Processes::Process::Vrfs::Vrf::Timers::LsaGenerationTimer


class Ospf::Processes::Process::TraceBufs : public ydk::Entity
{
    public:
        TraceBufs();
        ~TraceBufs();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class TraceBuf; //type: Ospf::Processes::Process::TraceBufs::TraceBuf

        ydk::YList trace_buf;
        
}; // Ospf::Processes::Process::TraceBufs


class Ospf::Processes::Process::TraceBufs::TraceBuf : public ydk::Entity
{
    public:
        TraceBuf();
        ~TraceBuf();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf trace_buf_name; //type: string
        ydk::YLeaf bufsize; //type: OspfTraceBufSize

}; // Ospf::Processes::Process::TraceBufs::TraceBuf


class Ospf::Processes::Process::GracefulShutdownTimers : public ydk::Entity
{
    public:
        GracefulShutdownTimers();
        ~GracefulShutdownTimers();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf graceful_shutdown_retain_routes; //type: uint32
        ydk::YLeaf graceful_shutdown_initial_delay; //type: uint32

}; // Ospf::Processes::Process::GracefulShutdownTimers


class Ospf::Processes::Process::DefaultVrf : public ydk::Entity
{
    public:
        DefaultVrf();
        ~DefaultVrf();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf ignore_mospf; //type: empty
        ydk::YLeaf router_id; //type: string
        ydk::YLeaf type7; //type: empty
        ydk::YLeaf snmp_context; //type: string
        ydk::YLeaf maximum_interfaces; //type: uint32
        ydk::YLeaf no_opaque; //type: empty
        ydk::YLeaf spf_prefix_priority; //type: string
        ydk::YLeaf maximum_paths; //type: uint32
        ydk::YLeaf adjacency_changes; //type: OspfLogAdj
        ydk::YLeaf default_metric; //type: uint32
        class MonitorConvergence; //type: Ospf::Processes::Process::DefaultVrf::MonitorConvergence
        class SegmentRouting; //type: Ospf::Processes::Process::DefaultVrf::SegmentRouting
        class Mpls; //type: Ospf::Processes::Process::DefaultVrf::Mpls
        class Microloop; //type: Ospf::Processes::Process::DefaultVrf::Microloop
        class MaximumRedistributePrefix; //type: Ospf::Processes::Process::DefaultVrf::MaximumRedistributePrefix
        class DefaultInformation; //type: Ospf::Processes::Process::DefaultVrf::DefaultInformation
        class Af; //type: Ospf::Processes::Process::DefaultVrf::Af
        class Queue; //type: Ospf::Processes::Process::DefaultVrf::Queue
        class MaxMetric; //type: Ospf::Processes::Process::DefaultVrf::MaxMetric
        class Nsf; //type: Ospf::Processes::Process::DefaultVrf::Nsf
        class ProcessScope; //type: Ospf::Processes::Process::DefaultVrf::ProcessScope
        class Redistribution; //type: Ospf::Processes::Process::DefaultVrf::Redistribution
        class AdjacencyStagger; //type: Ospf::Processes::Process::DefaultVrf::AdjacencyStagger
        class MaxLsa; //type: Ospf::Processes::Process::DefaultVrf::MaxLsa
        class AutoCost; //type: Ospf::Processes::Process::DefaultVrf::AutoCost
        class Ucmp; //type: Ospf::Processes::Process::DefaultVrf::Ucmp
        class FastReroute; //type: Ospf::Processes::Process::DefaultVrf::FastReroute
        class SummaryPrefixes; //type: Ospf::Processes::Process::DefaultVrf::SummaryPrefixes
        class OutgoingRouteUpdates; //type: Ospf::Processes::Process::DefaultVrf::OutgoingRouteUpdates
        class Distance; //type: Ospf::Processes::Process::DefaultVrf::Distance
        class AreaAddresses; //type: Ospf::Processes::Process::DefaultVrf::AreaAddresses
        class Timers; //type: Ospf::Processes::Process::DefaultVrf::Timers

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_ospf_cfg::Ospf::Processes::Process::DefaultVrf::MonitorConvergence> monitor_convergence;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_ospf_cfg::Ospf::Processes::Process::DefaultVrf::SegmentRouting> segment_routing;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_ospf_cfg::Ospf::Processes::Process::DefaultVrf::Mpls> mpls;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_ospf_cfg::Ospf::Processes::Process::DefaultVrf::Microloop> microloop;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_ospf_cfg::Ospf::Processes::Process::DefaultVrf::MaximumRedistributePrefix> maximum_redistribute_prefix;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_ospf_cfg::Ospf::Processes::Process::DefaultVrf::DefaultInformation> default_information;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_ospf_cfg::Ospf::Processes::Process::DefaultVrf::Af> af; // presence node
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_ospf_cfg::Ospf::Processes::Process::DefaultVrf::Queue> queue;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_ospf_cfg::Ospf::Processes::Process::DefaultVrf::MaxMetric> max_metric;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_ospf_cfg::Ospf::Processes::Process::DefaultVrf::Nsf> nsf;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_ospf_cfg::Ospf::Processes::Process::DefaultVrf::ProcessScope> process_scope;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_ospf_cfg::Ospf::Processes::Process::DefaultVrf::Redistribution> redistribution;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_ospf_cfg::Ospf::Processes::Process::DefaultVrf::AdjacencyStagger> adjacency_stagger;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_ospf_cfg::Ospf::Processes::Process::DefaultVrf::MaxLsa> max_lsa; // presence node
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_ospf_cfg::Ospf::Processes::Process::DefaultVrf::AutoCost> auto_cost;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_ospf_cfg::Ospf::Processes::Process::DefaultVrf::Ucmp> ucmp;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_ospf_cfg::Ospf::Processes::Process::DefaultVrf::FastReroute> fast_reroute;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_ospf_cfg::Ospf::Processes::Process::DefaultVrf::SummaryPrefixes> summary_prefixes;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_ospf_cfg::Ospf::Processes::Process::DefaultVrf::OutgoingRouteUpdates> outgoing_route_updates;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_ospf_cfg::Ospf::Processes::Process::DefaultVrf::Distance> distance;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_ospf_cfg::Ospf::Processes::Process::DefaultVrf::AreaAddresses> area_addresses;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_ospf_cfg::Ospf::Processes::Process::DefaultVrf::Timers> timers;
        
}; // Ospf::Processes::Process::DefaultVrf


class Ospf::Processes::Process::DefaultVrf::MonitorConvergence : public ydk::Entity
{
    public:
        MonitorConvergence();
        ~MonitorConvergence();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf enable; //type: empty
        ydk::YLeaf prefix_list; //type: string
        ydk::YLeaf track_ip_frr; //type: empty
        ydk::YLeaf track_external_routes; //type: empty
        ydk::YLeaf track_summary_routes; //type: empty

}; // Ospf::Processes::Process::DefaultVrf::MonitorConvergence


class Ospf::Processes::Process::DefaultVrf::SegmentRouting : public ydk::Entity
{
    public:
        SegmentRouting();
        ~SegmentRouting();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf prefix_sid_map_receive_disable; //type: empty
        ydk::YLeaf prefix_sid_map_advertise_local; //type: empty
        ydk::YLeaf strict_spf_disable; //type: empty
        class SrPrefer; //type: Ospf::Processes::Process::DefaultVrf::SegmentRouting::SrPrefer

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_ospf_cfg::Ospf::Processes::Process::DefaultVrf::SegmentRouting::SrPrefer> sr_prefer;
        
}; // Ospf::Processes::Process::DefaultVrf::SegmentRouting


class Ospf::Processes::Process::DefaultVrf::SegmentRouting::SrPrefer : public ydk::Entity
{
    public:
        SrPrefer();
        ~SrPrefer();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf enable; //type: boolean
        ydk::YLeaf prefix_list_name; //type: string

}; // Ospf::Processes::Process::DefaultVrf::SegmentRouting::SrPrefer


class Ospf::Processes::Process::DefaultVrf::Mpls : public ydk::Entity
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

        ydk::YLeaf igp_intact; //type: empty
        ydk::YLeaf ldp_sync_update; //type: empty
        ydk::YLeaf multicast_intact; //type: empty
        ydk::YLeaf autoroute_exclude; //type: string
        class MplsRouterId; //type: Ospf::Processes::Process::DefaultVrf::Mpls::MplsRouterId

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_ospf_cfg::Ospf::Processes::Process::DefaultVrf::Mpls::MplsRouterId> mpls_router_id;
        
}; // Ospf::Processes::Process::DefaultVrf::Mpls


class Ospf::Processes::Process::DefaultVrf::Mpls::MplsRouterId : public ydk::Entity
{
    public:
        MplsRouterId();
        ~MplsRouterId();

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
        ydk::YLeaf interface_name; //type: string

}; // Ospf::Processes::Process::DefaultVrf::Mpls::MplsRouterId


class Ospf::Processes::Process::DefaultVrf::Microloop : public ydk::Entity
{
    public:
        Microloop();
        ~Microloop();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Avoidance; //type: Ospf::Processes::Process::DefaultVrf::Microloop::Avoidance

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_ospf_cfg::Ospf::Processes::Process::DefaultVrf::Microloop::Avoidance> avoidance;
        
}; // Ospf::Processes::Process::DefaultVrf::Microloop


class Ospf::Processes::Process::DefaultVrf::Microloop::Avoidance : public ydk::Entity
{
    public:
        Avoidance();
        ~Avoidance();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf enable; //type: OspfUloopAvoidance
        ydk::YLeaf rib_update_delay; //type: uint32

}; // Ospf::Processes::Process::DefaultVrf::Microloop::Avoidance


class Ospf::Processes::Process::DefaultVrf::MaximumRedistributePrefix : public ydk::Entity
{
    public:
        MaximumRedistributePrefix();
        ~MaximumRedistributePrefix();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf number_of_prefixes; //type: uint32
        ydk::YLeaf threshold; //type: uint32
        ydk::YLeaf warning_only; //type: boolean

}; // Ospf::Processes::Process::DefaultVrf::MaximumRedistributePrefix


class Ospf::Processes::Process::DefaultVrf::DefaultInformation : public ydk::Entity
{
    public:
        DefaultInformation();
        ~DefaultInformation();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf always_advertise; //type: boolean
        ydk::YLeaf metric; //type: uint32
        ydk::YLeaf metric_type; //type: OspfLinkStateMetric
        ydk::YLeaf route_policy_name; //type: string

}; // Ospf::Processes::Process::DefaultVrf::DefaultInformation


class Ospf::Processes::Process::DefaultVrf::Af : public ydk::Entity
{
    public:
        Af();
        ~Af();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf af_name; //type: OspfAddressFamily
        ydk::YLeaf saf_name; //type: OspfSubAddressFamily

}; // Ospf::Processes::Process::DefaultVrf::Af


class Ospf::Processes::Process::DefaultVrf::Queue : public ydk::Entity
{
    public:
        Queue();
        ~Queue();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf dispatch_rate_limited_flush; //type: uint32
        ydk::YLeaf limit_high; //type: uint32
        ydk::YLeaf dispatch_spf_lsa_limit; //type: uint32
        ydk::YLeaf limit_low; //type: uint32
        ydk::YLeaf dispatch_rate_limited; //type: uint32
        ydk::YLeaf limit_medium; //type: uint32
        ydk::YLeaf dispatch_incoming; //type: uint32

}; // Ospf::Processes::Process::DefaultVrf::Queue


class Ospf::Processes::Process::DefaultVrf::MaxMetric : public ydk::Entity
{
    public:
        MaxMetric();
        ~MaxMetric();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf max_metric_no_abr_off; //type: empty
        class MaxMetricOnProcRestart; //type: Ospf::Processes::Process::DefaultVrf::MaxMetric::MaxMetricOnProcRestart
        class MaxMetricOnStartup; //type: Ospf::Processes::Process::DefaultVrf::MaxMetric::MaxMetricOnStartup
        class MaxMetricOnProcMigration; //type: Ospf::Processes::Process::DefaultVrf::MaxMetric::MaxMetricOnProcMigration
        class MaxMetricAlways; //type: Ospf::Processes::Process::DefaultVrf::MaxMetric::MaxMetricAlways
        class MaxMetricOnSwitchover; //type: Ospf::Processes::Process::DefaultVrf::MaxMetric::MaxMetricOnSwitchover

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_ospf_cfg::Ospf::Processes::Process::DefaultVrf::MaxMetric::MaxMetricOnProcRestart> max_metric_on_proc_restart;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_ospf_cfg::Ospf::Processes::Process::DefaultVrf::MaxMetric::MaxMetricOnStartup> max_metric_on_startup;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_ospf_cfg::Ospf::Processes::Process::DefaultVrf::MaxMetric::MaxMetricOnProcMigration> max_metric_on_proc_migration;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_ospf_cfg::Ospf::Processes::Process::DefaultVrf::MaxMetric::MaxMetricAlways> max_metric_always;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_ospf_cfg::Ospf::Processes::Process::DefaultVrf::MaxMetric::MaxMetricOnSwitchover> max_metric_on_switchover;
        
}; // Ospf::Processes::Process::DefaultVrf::MaxMetric


class Ospf::Processes::Process::DefaultVrf::MaxMetric::MaxMetricOnProcRestart : public ydk::Entity
{
    public:
        MaxMetricOnProcRestart();
        ~MaxMetricOnProcRestart();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf wait_for_bgp; //type: boolean
        ydk::YLeaf startup_max; //type: uint32
        ydk::YLeaf include_stub; //type: boolean
        ydk::YLeaf summary_lsa; //type: boolean
        ydk::YLeaf summary_lsa_maximum_metric; //type: uint32
        ydk::YLeaf external_lsa; //type: boolean
        ydk::YLeaf external_lsa_maximum_metric; //type: uint32

}; // Ospf::Processes::Process::DefaultVrf::MaxMetric::MaxMetricOnProcRestart


class Ospf::Processes::Process::DefaultVrf::MaxMetric::MaxMetricOnStartup : public ydk::Entity
{
    public:
        MaxMetricOnStartup();
        ~MaxMetricOnStartup();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf wait_for_bgp; //type: boolean
        ydk::YLeaf startup_max; //type: uint32
        ydk::YLeaf include_stub; //type: boolean
        ydk::YLeaf summary_lsa; //type: boolean
        ydk::YLeaf summary_lsa_maximum_metric; //type: uint32
        ydk::YLeaf external_lsa; //type: boolean
        ydk::YLeaf external_lsa_maximum_metric; //type: uint32

}; // Ospf::Processes::Process::DefaultVrf::MaxMetric::MaxMetricOnStartup


class Ospf::Processes::Process::DefaultVrf::MaxMetric::MaxMetricOnProcMigration : public ydk::Entity
{
    public:
        MaxMetricOnProcMigration();
        ~MaxMetricOnProcMigration();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf wait_for_bgp; //type: boolean
        ydk::YLeaf startup_max; //type: uint32
        ydk::YLeaf include_stub; //type: boolean
        ydk::YLeaf summary_lsa; //type: boolean
        ydk::YLeaf summary_lsa_maximum_metric; //type: uint32
        ydk::YLeaf external_lsa; //type: boolean
        ydk::YLeaf external_lsa_maximum_metric; //type: uint32

}; // Ospf::Processes::Process::DefaultVrf::MaxMetric::MaxMetricOnProcMigration


class Ospf::Processes::Process::DefaultVrf::MaxMetric::MaxMetricAlways : public ydk::Entity
{
    public:
        MaxMetricAlways();
        ~MaxMetricAlways();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf include_stub; //type: boolean
        ydk::YLeaf summary_lsa; //type: boolean
        ydk::YLeaf summary_lsa_maximum_metric; //type: uint32
        ydk::YLeaf external_lsa; //type: boolean
        ydk::YLeaf external_lsa_maximum_metric; //type: uint32

}; // Ospf::Processes::Process::DefaultVrf::MaxMetric::MaxMetricAlways


class Ospf::Processes::Process::DefaultVrf::MaxMetric::MaxMetricOnSwitchover : public ydk::Entity
{
    public:
        MaxMetricOnSwitchover();
        ~MaxMetricOnSwitchover();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf wait_for_bgp; //type: boolean
        ydk::YLeaf startup_max; //type: uint32
        ydk::YLeaf include_stub; //type: boolean
        ydk::YLeaf summary_lsa; //type: boolean
        ydk::YLeaf summary_lsa_maximum_metric; //type: uint32
        ydk::YLeaf external_lsa; //type: boolean
        ydk::YLeaf external_lsa_maximum_metric; //type: uint32

}; // Ospf::Processes::Process::DefaultVrf::MaxMetric::MaxMetricOnSwitchover


class Ospf::Processes::Process::DefaultVrf::Nsf : public ydk::Entity
{
    public:
        Nsf();
        ~Nsf();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf lifetime; //type: uint32
        ydk::YLeaf ietf; //type: OspfIetfNsf
        ydk::YLeaf ietf_support_role; //type: OspfIetfNsfSupport
        ydk::YLeaf cisco; //type: OspfCiscoNsf
        ydk::YLeaf interval; //type: uint32
        ydk::YLeaf flush_delay_time; //type: uint32
        ydk::YLeaf ietf_strict_lsa_checking; //type: empty

}; // Ospf::Processes::Process::DefaultVrf::Nsf


class Ospf::Processes::Process::DefaultVrf::ProcessScope : public ydk::Entity
{
    public:
        ProcessScope();
        ~ProcessScope();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf cost; //type: uint32
        ydk::YLeaf external_out; //type: boolean
        ydk::YLeaf prefix_suppression_primary; //type: boolean
        ydk::YLeaf mtu_ignore; //type: boolean
        ydk::YLeaf ldp_sync_igp_shortcuts; //type: boolean
        ydk::YLeaf ldp_auto_config; //type: empty
        ydk::YLeaf summary_in; //type: boolean
        ydk::YLeaf network_type; //type: OspfNetwork
        ydk::YLeaf hello_interval; //type: uint32
        ydk::YLeaf loopback_stub_network; //type: boolean
        ydk::YLeaf prefix_suppression_secondary; //type: boolean
        ydk::YLeaf demand_circuit; //type: boolean
        ydk::YLeaf segment_routing; //type: OspfSegmentRouting
        ydk::YLeaf passive; //type: boolean
        ydk::YLeaf transmit_delay; //type: uint32
        ydk::YLeaf packet_size; //type: uint32
        ydk::YLeaf ldp_sync; //type: boolean
        ydk::YLeaf database_filter; //type: boolean
        ydk::YLeaf link_down_fast_detect; //type: boolean
        ydk::YLeaf segment_routing_forwarding; //type: OspfSegmentRoutingForwarding
        ydk::YLeaf retransmit_interval; //type: uint32
        ydk::YLeaf priority; //type: uint32
        ydk::YLeaf flood_reduction; //type: boolean
        class Srgb; //type: Ospf::Processes::Process::DefaultVrf::ProcessScope::Srgb
        class FastReroute; //type: Ospf::Processes::Process::DefaultVrf::ProcessScope::FastReroute
        class DistributeList; //type: Ospf::Processes::Process::DefaultVrf::ProcessScope::DistributeList
        class Bfd; //type: Ospf::Processes::Process::DefaultVrf::ProcessScope::Bfd
        class Authentication; //type: Ospf::Processes::Process::DefaultVrf::ProcessScope::Authentication
        class Security; //type: Ospf::Processes::Process::DefaultVrf::ProcessScope::Security
        class DeadIntervalMinimal; //type: Ospf::Processes::Process::DefaultVrf::ProcessScope::DeadIntervalMinimal
        class CostFallback; //type: Ospf::Processes::Process::DefaultVrf::ProcessScope::CostFallback

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_ospf_cfg::Ospf::Processes::Process::DefaultVrf::ProcessScope::Srgb> srgb; // presence node
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_ospf_cfg::Ospf::Processes::Process::DefaultVrf::ProcessScope::FastReroute> fast_reroute;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_ospf_cfg::Ospf::Processes::Process::DefaultVrf::ProcessScope::DistributeList> distribute_list; // presence node
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_ospf_cfg::Ospf::Processes::Process::DefaultVrf::ProcessScope::Bfd> bfd;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_ospf_cfg::Ospf::Processes::Process::DefaultVrf::ProcessScope::Authentication> authentication;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_ospf_cfg::Ospf::Processes::Process::DefaultVrf::ProcessScope::Security> security;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_ospf_cfg::Ospf::Processes::Process::DefaultVrf::ProcessScope::DeadIntervalMinimal> dead_interval_minimal;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_ospf_cfg::Ospf::Processes::Process::DefaultVrf::ProcessScope::CostFallback> cost_fallback;
        
}; // Ospf::Processes::Process::DefaultVrf::ProcessScope


class Ospf::Processes::Process::DefaultVrf::ProcessScope::Srgb : public ydk::Entity
{
    public:
        Srgb();
        ~Srgb();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf lower_bound; //type: uint32
        ydk::YLeaf upper_bound; //type: uint32

}; // Ospf::Processes::Process::DefaultVrf::ProcessScope::Srgb


class Ospf::Processes::Process::DefaultVrf::ProcessScope::FastReroute : public ydk::Entity
{
    public:
        FastReroute();
        ~FastReroute();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf fast_reroute_enable; //type: OspfProcFastReroute
        class PerLink; //type: Ospf::Processes::Process::DefaultVrf::ProcessScope::FastReroute::PerLink
        class PerPrefix; //type: Ospf::Processes::Process::DefaultVrf::ProcessScope::FastReroute::PerPrefix

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_ospf_cfg::Ospf::Processes::Process::DefaultVrf::ProcessScope::FastReroute::PerLink> per_link;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_ospf_cfg::Ospf::Processes::Process::DefaultVrf::ProcessScope::FastReroute::PerPrefix> per_prefix;
        
}; // Ospf::Processes::Process::DefaultVrf::ProcessScope::FastReroute


class Ospf::Processes::Process::DefaultVrf::ProcessScope::FastReroute::PerLink : public ydk::Entity
{
    public:
        PerLink();
        ~PerLink();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf fast_reroute_use_candidate_only; //type: boolean
        class CandidateInterfaces; //type: Ospf::Processes::Process::DefaultVrf::ProcessScope::FastReroute::PerLink::CandidateInterfaces
        class ExcludeInterfaces; //type: Ospf::Processes::Process::DefaultVrf::ProcessScope::FastReroute::PerLink::ExcludeInterfaces

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_ospf_cfg::Ospf::Processes::Process::DefaultVrf::ProcessScope::FastReroute::PerLink::CandidateInterfaces> candidate_interfaces;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_ospf_cfg::Ospf::Processes::Process::DefaultVrf::ProcessScope::FastReroute::PerLink::ExcludeInterfaces> exclude_interfaces;
        
}; // Ospf::Processes::Process::DefaultVrf::ProcessScope::FastReroute::PerLink


class Ospf::Processes::Process::DefaultVrf::ProcessScope::FastReroute::PerLink::CandidateInterfaces : public ydk::Entity
{
    public:
        CandidateInterfaces();
        ~CandidateInterfaces();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class CandidateInterface; //type: Ospf::Processes::Process::DefaultVrf::ProcessScope::FastReroute::PerLink::CandidateInterfaces::CandidateInterface

        ydk::YList candidate_interface;
        
}; // Ospf::Processes::Process::DefaultVrf::ProcessScope::FastReroute::PerLink::CandidateInterfaces


class Ospf::Processes::Process::DefaultVrf::ProcessScope::FastReroute::PerLink::CandidateInterfaces::CandidateInterface : public ydk::Entity
{
    public:
        CandidateInterface();
        ~CandidateInterface();

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

}; // Ospf::Processes::Process::DefaultVrf::ProcessScope::FastReroute::PerLink::CandidateInterfaces::CandidateInterface


class Ospf::Processes::Process::DefaultVrf::ProcessScope::FastReroute::PerLink::ExcludeInterfaces : public ydk::Entity
{
    public:
        ExcludeInterfaces();
        ~ExcludeInterfaces();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class ExcludeInterface; //type: Ospf::Processes::Process::DefaultVrf::ProcessScope::FastReroute::PerLink::ExcludeInterfaces::ExcludeInterface

        ydk::YList exclude_interface;
        
}; // Ospf::Processes::Process::DefaultVrf::ProcessScope::FastReroute::PerLink::ExcludeInterfaces


class Ospf::Processes::Process::DefaultVrf::ProcessScope::FastReroute::PerLink::ExcludeInterfaces::ExcludeInterface : public ydk::Entity
{
    public:
        ExcludeInterface();
        ~ExcludeInterface();

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

}; // Ospf::Processes::Process::DefaultVrf::ProcessScope::FastReroute::PerLink::ExcludeInterfaces::ExcludeInterface


class Ospf::Processes::Process::DefaultVrf::ProcessScope::FastReroute::PerPrefix : public ydk::Entity
{
    public:
        PerPrefix();
        ~PerPrefix();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf topology_independent_lfa; //type: boolean
        ydk::YLeaf fast_reroute_use_candidate_only; //type: boolean
        class RemoteLfa; //type: Ospf::Processes::Process::DefaultVrf::ProcessScope::FastReroute::PerPrefix::RemoteLfa
        class CandidateInterfaces; //type: Ospf::Processes::Process::DefaultVrf::ProcessScope::FastReroute::PerPrefix::CandidateInterfaces
        class ExcludeInterfaces; //type: Ospf::Processes::Process::DefaultVrf::ProcessScope::FastReroute::PerPrefix::ExcludeInterfaces

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_ospf_cfg::Ospf::Processes::Process::DefaultVrf::ProcessScope::FastReroute::PerPrefix::RemoteLfa> remote_lfa;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_ospf_cfg::Ospf::Processes::Process::DefaultVrf::ProcessScope::FastReroute::PerPrefix::CandidateInterfaces> candidate_interfaces;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_ospf_cfg::Ospf::Processes::Process::DefaultVrf::ProcessScope::FastReroute::PerPrefix::ExcludeInterfaces> exclude_interfaces;
        
}; // Ospf::Processes::Process::DefaultVrf::ProcessScope::FastReroute::PerPrefix


class Ospf::Processes::Process::DefaultVrf::ProcessScope::FastReroute::PerPrefix::RemoteLfa : public ydk::Entity
{
    public:
        RemoteLfa();
        ~RemoteLfa();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf tunnel; //type: OspfProcFrrRlfaTunnel
        ydk::YLeaf maximum_cost; //type: uint32

}; // Ospf::Processes::Process::DefaultVrf::ProcessScope::FastReroute::PerPrefix::RemoteLfa


class Ospf::Processes::Process::DefaultVrf::ProcessScope::FastReroute::PerPrefix::CandidateInterfaces : public ydk::Entity
{
    public:
        CandidateInterfaces();
        ~CandidateInterfaces();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class CandidateInterface; //type: Ospf::Processes::Process::DefaultVrf::ProcessScope::FastReroute::PerPrefix::CandidateInterfaces::CandidateInterface

        ydk::YList candidate_interface;
        
}; // Ospf::Processes::Process::DefaultVrf::ProcessScope::FastReroute::PerPrefix::CandidateInterfaces


class Ospf::Processes::Process::DefaultVrf::ProcessScope::FastReroute::PerPrefix::CandidateInterfaces::CandidateInterface : public ydk::Entity
{
    public:
        CandidateInterface();
        ~CandidateInterface();

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

}; // Ospf::Processes::Process::DefaultVrf::ProcessScope::FastReroute::PerPrefix::CandidateInterfaces::CandidateInterface


class Ospf::Processes::Process::DefaultVrf::ProcessScope::FastReroute::PerPrefix::ExcludeInterfaces : public ydk::Entity
{
    public:
        ExcludeInterfaces();
        ~ExcludeInterfaces();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class ExcludeInterface; //type: Ospf::Processes::Process::DefaultVrf::ProcessScope::FastReroute::PerPrefix::ExcludeInterfaces::ExcludeInterface

        ydk::YList exclude_interface;
        
}; // Ospf::Processes::Process::DefaultVrf::ProcessScope::FastReroute::PerPrefix::ExcludeInterfaces


class Ospf::Processes::Process::DefaultVrf::ProcessScope::FastReroute::PerPrefix::ExcludeInterfaces::ExcludeInterface : public ydk::Entity
{
    public:
        ExcludeInterface();
        ~ExcludeInterface();

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

}; // Ospf::Processes::Process::DefaultVrf::ProcessScope::FastReroute::PerPrefix::ExcludeInterfaces::ExcludeInterface


class Ospf::Processes::Process::DefaultVrf::ProcessScope::DistributeList : public ydk::Entity
{
    public:
        DistributeList();
        ~DistributeList();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf access_list_name; //type: string
        ydk::YLeaf route_policy_name; //type: string

}; // Ospf::Processes::Process::DefaultVrf::ProcessScope::DistributeList


class Ospf::Processes::Process::DefaultVrf::ProcessScope::Bfd : public ydk::Entity
{
    public:
        Bfd();
        ~Bfd();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf interval; //type: uint32
        ydk::YLeaf detection_multiplier; //type: uint32
        ydk::YLeaf fast_detect_mode; //type: BfdEnableMode

}; // Ospf::Processes::Process::DefaultVrf::ProcessScope::Bfd


class Ospf::Processes::Process::DefaultVrf::ProcessScope::Authentication : public ydk::Entity
{
    public:
        Authentication();
        ~Authentication();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf key; //type: string
        class Type; //type: Ospf::Processes::Process::DefaultVrf::ProcessScope::Authentication::Type
        class MessageDigestKeys; //type: Ospf::Processes::Process::DefaultVrf::ProcessScope::Authentication::MessageDigestKeys

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_ospf_cfg::Ospf::Processes::Process::DefaultVrf::ProcessScope::Authentication::Type> type;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_ospf_cfg::Ospf::Processes::Process::DefaultVrf::ProcessScope::Authentication::MessageDigestKeys> message_digest_keys;
        
}; // Ospf::Processes::Process::DefaultVrf::ProcessScope::Authentication


class Ospf::Processes::Process::DefaultVrf::ProcessScope::Authentication::Type : public ydk::Entity
{
    public:
        Type();
        ~Type();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf authen_type; //type: OspfAuthentication
        ydk::YLeaf keychain_authen_type; //type: OspfKeychainAuth
        ydk::YLeaf keychain_name; //type: string

}; // Ospf::Processes::Process::DefaultVrf::ProcessScope::Authentication::Type


class Ospf::Processes::Process::DefaultVrf::ProcessScope::Authentication::MessageDigestKeys : public ydk::Entity
{
    public:
        MessageDigestKeys();
        ~MessageDigestKeys();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class MessageDigestKey; //type: Ospf::Processes::Process::DefaultVrf::ProcessScope::Authentication::MessageDigestKeys::MessageDigestKey

        ydk::YList message_digest_key;
        
}; // Ospf::Processes::Process::DefaultVrf::ProcessScope::Authentication::MessageDigestKeys


class Ospf::Processes::Process::DefaultVrf::ProcessScope::Authentication::MessageDigestKeys::MessageDigestKey : public ydk::Entity
{
    public:
        MessageDigestKey();
        ~MessageDigestKey();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf key_id; //type: uint32
        ydk::YLeaf password; //type: string

}; // Ospf::Processes::Process::DefaultVrf::ProcessScope::Authentication::MessageDigestKeys::MessageDigestKey


class Ospf::Processes::Process::DefaultVrf::ProcessScope::Security : public ydk::Entity
{
    public:
        Security();
        ~Security();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Ttl; //type: Ospf::Processes::Process::DefaultVrf::ProcessScope::Security::Ttl

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_ospf_cfg::Ospf::Processes::Process::DefaultVrf::ProcessScope::Security::Ttl> ttl;
        
}; // Ospf::Processes::Process::DefaultVrf::ProcessScope::Security


class Ospf::Processes::Process::DefaultVrf::ProcessScope::Security::Ttl : public ydk::Entity
{
    public:
        Ttl();
        ~Ttl();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf enable; //type: boolean
        ydk::YLeaf hop_count; //type: uint32

}; // Ospf::Processes::Process::DefaultVrf::ProcessScope::Security::Ttl


class Ospf::Processes::Process::DefaultVrf::ProcessScope::DeadIntervalMinimal : public ydk::Entity
{
    public:
        DeadIntervalMinimal();
        ~DeadIntervalMinimal();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf interval; //type: uint32
        ydk::YLeaf multiplier; //type: uint32

}; // Ospf::Processes::Process::DefaultVrf::ProcessScope::DeadIntervalMinimal


class Ospf::Processes::Process::DefaultVrf::ProcessScope::CostFallback : public ydk::Entity
{
    public:
        CostFallback();
        ~CostFallback();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf cost; //type: uint32
        ydk::YLeaf threshold; //type: uint32

}; // Ospf::Processes::Process::DefaultVrf::ProcessScope::CostFallback


class Ospf::Processes::Process::DefaultVrf::Redistribution : public ydk::Entity
{
    public:
        Redistribution();
        ~Redistribution();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Redistributes; //type: Ospf::Processes::Process::DefaultVrf::Redistribution::Redistributes

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_ospf_cfg::Ospf::Processes::Process::DefaultVrf::Redistribution::Redistributes> redistributes;
        
}; // Ospf::Processes::Process::DefaultVrf::Redistribution


class Ospf::Processes::Process::DefaultVrf::Redistribution::Redistributes : public ydk::Entity
{
    public:
        Redistributes();
        ~Redistributes();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Redistribute; //type: Ospf::Processes::Process::DefaultVrf::Redistribution::Redistributes::Redistribute

        ydk::YList redistribute;
        
}; // Ospf::Processes::Process::DefaultVrf::Redistribution::Redistributes


class Ospf::Processes::Process::DefaultVrf::Redistribution::Redistributes::Redistribute : public ydk::Entity
{
    public:
        Redistribute();
        ~Redistribute();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf protocol_name; //type: OspfRedistProtocol
        class ConnectedOrStaticOrDagrOrSubscriberOrMobileOrRip; //type: Ospf::Processes::Process::DefaultVrf::Redistribution::Redistributes::Redistribute::ConnectedOrStaticOrDagrOrSubscriberOrMobileOrRip
        class ApplicationOrIsisOrOspf; //type: Ospf::Processes::Process::DefaultVrf::Redistribution::Redistributes::Redistribute::ApplicationOrIsisOrOspf
        class Bgp; //type: Ospf::Processes::Process::DefaultVrf::Redistribution::Redistributes::Redistribute::Bgp
        class Eigrp; //type: Ospf::Processes::Process::DefaultVrf::Redistribution::Redistributes::Redistribute::Eigrp

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_ospf_cfg::Ospf::Processes::Process::DefaultVrf::Redistribution::Redistributes::Redistribute::ConnectedOrStaticOrDagrOrSubscriberOrMobileOrRip> connected_or_static_or_dagr_or_subscriber_or_mobile_or_rip; // presence node
        ydk::YList application_or_isis_or_ospf;
        ydk::YList bgp;
        ydk::YList eigrp;
        
}; // Ospf::Processes::Process::DefaultVrf::Redistribution::Redistributes::Redistribute


class Ospf::Processes::Process::DefaultVrf::Redistribution::Redistributes::Redistribute::ConnectedOrStaticOrDagrOrSubscriberOrMobileOrRip : public ydk::Entity
{
    public:
        ConnectedOrStaticOrDagrOrSubscriberOrMobileOrRip();
        ~ConnectedOrStaticOrDagrOrSubscriberOrMobileOrRip();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf classful; //type: boolean
        ydk::YLeaf default_redistributed_route_metric; //type: uint32
        ydk::YLeaf tag; //type: uint32
        ydk::YLeaf metric_type; //type: OspfLinkStateMetric
        ydk::YLeaf eigrp_route_type; //type: OspfEigrpRoute
        ydk::YLeaf isis_levels; //type: OspfRouteLevel
        ydk::YLeaf ospf_internal; //type: boolean
        ydk::YLeaf ospf_external; //type: OspfRouteLevel
        ydk::YLeaf ospf_nssa_level; //type: OspfRouteLevel
        ydk::YLeaf route_policy_name; //type: string
        ydk::YLeaf bgp_preserve_med; //type: boolean
        ydk::YLeaf bgp_preserve_default_info; //type: boolean
        ydk::YLeaf ospf_redist_lsa_type; //type: OspfRedistLsa
        ydk::YLeaf ospfnssa_only; //type: boolean
        ydk::YLeaf ospf_use_rib_metric; //type: boolean

}; // Ospf::Processes::Process::DefaultVrf::Redistribution::Redistributes::Redistribute::ConnectedOrStaticOrDagrOrSubscriberOrMobileOrRip


class Ospf::Processes::Process::DefaultVrf::Redistribution::Redistributes::Redistribute::ApplicationOrIsisOrOspf : public ydk::Entity
{
    public:
        ApplicationOrIsisOrOspf();
        ~ApplicationOrIsisOrOspf();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf instance_name; //type: string
        ydk::YLeaf classful; //type: boolean
        ydk::YLeaf default_redistributed_route_metric; //type: uint32
        ydk::YLeaf tag; //type: uint32
        ydk::YLeaf metric_type; //type: OspfLinkStateMetric
        ydk::YLeaf eigrp_route_type; //type: OspfEigrpRoute
        ydk::YLeaf isis_levels; //type: OspfRouteLevel
        ydk::YLeaf ospf_internal; //type: boolean
        ydk::YLeaf ospf_external; //type: OspfRouteLevel
        ydk::YLeaf ospf_nssa_level; //type: OspfRouteLevel
        ydk::YLeaf route_policy_name; //type: string
        ydk::YLeaf bgp_preserve_med; //type: boolean
        ydk::YLeaf bgp_preserve_default_info; //type: boolean
        ydk::YLeaf ospf_redist_lsa_type; //type: OspfRedistLsa
        ydk::YLeaf ospfnssa_only; //type: boolean
        ydk::YLeaf ospf_use_rib_metric; //type: boolean

}; // Ospf::Processes::Process::DefaultVrf::Redistribution::Redistributes::Redistribute::ApplicationOrIsisOrOspf


class Ospf::Processes::Process::DefaultVrf::Redistribution::Redistributes::Redistribute::Bgp : public ydk::Entity
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

        ydk::YLeaf instance_name; //type: string
        ydk::YLeaf as_xx; //type: uint32
        ydk::YLeaf as_yy; //type: uint32
        ydk::YLeaf classful; //type: boolean
        ydk::YLeaf default_redistributed_route_metric; //type: uint32
        ydk::YLeaf tag; //type: uint32
        ydk::YLeaf metric_type; //type: OspfLinkStateMetric
        ydk::YLeaf eigrp_route_type; //type: OspfEigrpRoute
        ydk::YLeaf isis_levels; //type: OspfRouteLevel
        ydk::YLeaf ospf_internal; //type: boolean
        ydk::YLeaf ospf_external; //type: OspfRouteLevel
        ydk::YLeaf ospf_nssa_level; //type: OspfRouteLevel
        ydk::YLeaf route_policy_name; //type: string
        ydk::YLeaf bgp_preserve_med; //type: boolean
        ydk::YLeaf bgp_preserve_default_info; //type: boolean
        ydk::YLeaf ospf_redist_lsa_type; //type: OspfRedistLsa
        ydk::YLeaf ospfnssa_only; //type: boolean
        ydk::YLeaf ospf_use_rib_metric; //type: boolean

}; // Ospf::Processes::Process::DefaultVrf::Redistribution::Redistributes::Redistribute::Bgp


class Ospf::Processes::Process::DefaultVrf::Redistribution::Redistributes::Redistribute::Eigrp : public ydk::Entity
{
    public:
        Eigrp();
        ~Eigrp();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf instance_name; //type: string
        ydk::YLeaf as_xx; //type: uint32
        ydk::YLeaf classful; //type: boolean
        ydk::YLeaf default_redistributed_route_metric; //type: uint32
        ydk::YLeaf tag; //type: uint32
        ydk::YLeaf metric_type; //type: OspfLinkStateMetric
        ydk::YLeaf eigrp_route_type; //type: OspfEigrpRoute
        ydk::YLeaf isis_levels; //type: OspfRouteLevel
        ydk::YLeaf ospf_internal; //type: boolean
        ydk::YLeaf ospf_external; //type: OspfRouteLevel
        ydk::YLeaf ospf_nssa_level; //type: OspfRouteLevel
        ydk::YLeaf route_policy_name; //type: string
        ydk::YLeaf bgp_preserve_med; //type: boolean
        ydk::YLeaf bgp_preserve_default_info; //type: boolean
        ydk::YLeaf ospf_redist_lsa_type; //type: OspfRedistLsa
        ydk::YLeaf ospfnssa_only; //type: boolean
        ydk::YLeaf ospf_use_rib_metric; //type: boolean

}; // Ospf::Processes::Process::DefaultVrf::Redistribution::Redistributes::Redistribute::Eigrp


class Ospf::Processes::Process::DefaultVrf::AdjacencyStagger : public ydk::Entity
{
    public:
        AdjacencyStagger();
        ~AdjacencyStagger();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf disable; //type: empty
        ydk::YLeaf initial_nbr; //type: uint32
        ydk::YLeaf max_nbr; //type: uint32

}; // Ospf::Processes::Process::DefaultVrf::AdjacencyStagger


class Ospf::Processes::Process::DefaultVrf::MaxLsa : public ydk::Entity
{
    public:
        MaxLsa();
        ~MaxLsa();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf max_lsa_limit; //type: uint32
        ydk::YLeaf max_lsa_threshold; //type: uint32
        ydk::YLeaf max_lsa_warning_only; //type: boolean
        ydk::YLeaf max_lsa_ignore_time; //type: uint32
        ydk::YLeaf max_lsa_ignore_count; //type: uint32
        ydk::YLeaf max_lsa_reset_time; //type: uint32

}; // Ospf::Processes::Process::DefaultVrf::MaxLsa


class Ospf::Processes::Process::DefaultVrf::AutoCost : public ydk::Entity
{
    public:
        AutoCost();
        ~AutoCost();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf disable; //type: boolean
        ydk::YLeaf bandwidth; //type: uint32

}; // Ospf::Processes::Process::DefaultVrf::AutoCost


class Ospf::Processes::Process::DefaultVrf::Ucmp : public ydk::Entity
{
    public:
        Ucmp();
        ~Ucmp();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf delay_interval; //type: uint32
        class Enable; //type: Ospf::Processes::Process::DefaultVrf::Ucmp::Enable
        class ExcludeInterfaces; //type: Ospf::Processes::Process::DefaultVrf::Ucmp::ExcludeInterfaces

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_ospf_cfg::Ospf::Processes::Process::DefaultVrf::Ucmp::Enable> enable;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_ospf_cfg::Ospf::Processes::Process::DefaultVrf::Ucmp::ExcludeInterfaces> exclude_interfaces;
        
}; // Ospf::Processes::Process::DefaultVrf::Ucmp


class Ospf::Processes::Process::DefaultVrf::Ucmp::Enable : public ydk::Entity
{
    public:
        Enable();
        ~Enable();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf variance; //type: uint32
        ydk::YLeaf prefix_list_name; //type: string

}; // Ospf::Processes::Process::DefaultVrf::Ucmp::Enable


class Ospf::Processes::Process::DefaultVrf::Ucmp::ExcludeInterfaces : public ydk::Entity
{
    public:
        ExcludeInterfaces();
        ~ExcludeInterfaces();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class ExcludeInterface; //type: Ospf::Processes::Process::DefaultVrf::Ucmp::ExcludeInterfaces::ExcludeInterface

        ydk::YList exclude_interface;
        
}; // Ospf::Processes::Process::DefaultVrf::Ucmp::ExcludeInterfaces


class Ospf::Processes::Process::DefaultVrf::Ucmp::ExcludeInterfaces::ExcludeInterface : public ydk::Entity
{
    public:
        ExcludeInterface();
        ~ExcludeInterface();

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

}; // Ospf::Processes::Process::DefaultVrf::Ucmp::ExcludeInterfaces::ExcludeInterface


class Ospf::Processes::Process::DefaultVrf::FastReroute : public ydk::Entity
{
    public:
        FastReroute();
        ~FastReroute();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class PerLink; //type: Ospf::Processes::Process::DefaultVrf::FastReroute::PerLink
        class PerPrefix; //type: Ospf::Processes::Process::DefaultVrf::FastReroute::PerPrefix

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_ospf_cfg::Ospf::Processes::Process::DefaultVrf::FastReroute::PerLink> per_link;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_ospf_cfg::Ospf::Processes::Process::DefaultVrf::FastReroute::PerPrefix> per_prefix;
        
}; // Ospf::Processes::Process::DefaultVrf::FastReroute


class Ospf::Processes::Process::DefaultVrf::FastReroute::PerLink : public ydk::Entity
{
    public:
        PerLink();
        ~PerLink();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf priority; //type: OspfFastReroutePriority

}; // Ospf::Processes::Process::DefaultVrf::FastReroute::PerLink


class Ospf::Processes::Process::DefaultVrf::FastReroute::PerPrefix : public ydk::Entity
{
    public:
        PerPrefix();
        ~PerPrefix();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf load_sharing_disable; //type: empty
        ydk::YLeaf priority; //type: OspfFastReroutePriority
        class Tiebreakers; //type: Ospf::Processes::Process::DefaultVrf::FastReroute::PerPrefix::Tiebreakers

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_ospf_cfg::Ospf::Processes::Process::DefaultVrf::FastReroute::PerPrefix::Tiebreakers> tiebreakers;
        
}; // Ospf::Processes::Process::DefaultVrf::FastReroute::PerPrefix


class Ospf::Processes::Process::DefaultVrf::FastReroute::PerPrefix::Tiebreakers : public ydk::Entity
{
    public:
        Tiebreakers();
        ~Tiebreakers();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Tiebreaker; //type: Ospf::Processes::Process::DefaultVrf::FastReroute::PerPrefix::Tiebreakers::Tiebreaker

        ydk::YList tiebreaker;
        
}; // Ospf::Processes::Process::DefaultVrf::FastReroute::PerPrefix::Tiebreakers


class Ospf::Processes::Process::DefaultVrf::FastReroute::PerPrefix::Tiebreakers::Tiebreaker : public ydk::Entity
{
    public:
        Tiebreaker();
        ~Tiebreaker();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf tiebreaker_type; //type: OspfFastRerouteTiebreakers
        ydk::YLeaf tiebreaker_index; //type: uint32

}; // Ospf::Processes::Process::DefaultVrf::FastReroute::PerPrefix::Tiebreakers::Tiebreaker


class Ospf::Processes::Process::DefaultVrf::SummaryPrefixes : public ydk::Entity
{
    public:
        SummaryPrefixes();
        ~SummaryPrefixes();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class SummaryPrefixData; //type: Ospf::Processes::Process::DefaultVrf::SummaryPrefixes::SummaryPrefixData
        class PrefixAndNetmask; //type: Ospf::Processes::Process::DefaultVrf::SummaryPrefixes::PrefixAndNetmask
        class Prefix; //type: Ospf::Processes::Process::DefaultVrf::SummaryPrefixes::Prefix
        class Netmask; //type: Ospf::Processes::Process::DefaultVrf::SummaryPrefixes::Netmask

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_ospf_cfg::Ospf::Processes::Process::DefaultVrf::SummaryPrefixes::SummaryPrefixData> summary_prefix_data;
        ydk::YList prefix_and_netmask;
        ydk::YList prefix;
        ydk::YList netmask;
        
}; // Ospf::Processes::Process::DefaultVrf::SummaryPrefixes


class Ospf::Processes::Process::DefaultVrf::SummaryPrefixes::SummaryPrefixData : public ydk::Entity
{
    public:
        SummaryPrefixData();
        ~SummaryPrefixData();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf not_advertise; //type: boolean
        ydk::YLeaf tag; //type: uint32

}; // Ospf::Processes::Process::DefaultVrf::SummaryPrefixes::SummaryPrefixData


class Ospf::Processes::Process::DefaultVrf::SummaryPrefixes::PrefixAndNetmask : public ydk::Entity
{
    public:
        PrefixAndNetmask();
        ~PrefixAndNetmask();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf prefix; //type: string
        ydk::YLeaf netmask; //type: string
        ydk::YLeaf not_advertise; //type: boolean
        ydk::YLeaf tag; //type: uint32

}; // Ospf::Processes::Process::DefaultVrf::SummaryPrefixes::PrefixAndNetmask


class Ospf::Processes::Process::DefaultVrf::SummaryPrefixes::Prefix : public ydk::Entity
{
    public:
        Prefix();
        ~Prefix();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf prefix; //type: string
        ydk::YLeaf not_advertise; //type: boolean
        ydk::YLeaf tag; //type: uint32

}; // Ospf::Processes::Process::DefaultVrf::SummaryPrefixes::Prefix


class Ospf::Processes::Process::DefaultVrf::SummaryPrefixes::Netmask : public ydk::Entity
{
    public:
        Netmask();
        ~Netmask();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf netmask; //type: string
        ydk::YLeaf not_advertise; //type: boolean
        ydk::YLeaf tag; //type: uint32

}; // Ospf::Processes::Process::DefaultVrf::SummaryPrefixes::Netmask


class Ospf::Processes::Process::DefaultVrf::OutgoingRouteUpdates : public ydk::Entity
{
    public:
        OutgoingRouteUpdates();
        ~OutgoingRouteUpdates();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class OutgoingRouteUpdate; //type: Ospf::Processes::Process::DefaultVrf::OutgoingRouteUpdates::OutgoingRouteUpdate

        ydk::YList outgoing_route_update;
        
}; // Ospf::Processes::Process::DefaultVrf::OutgoingRouteUpdates


class Ospf::Processes::Process::DefaultVrf::OutgoingRouteUpdates::OutgoingRouteUpdate : public ydk::Entity
{
    public:
        OutgoingRouteUpdate();
        ~OutgoingRouteUpdate();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf protocol_name; //type: OspfDistListProtocol
        ydk::YLeaf access_list_name; //type: string
        ydk::YLeaf as_xx; //type: uint32
        ydk::YLeaf as_yy; //type: uint32
        ydk::YLeaf ospf_process_name; //type: string

}; // Ospf::Processes::Process::DefaultVrf::OutgoingRouteUpdates::OutgoingRouteUpdate


class Ospf::Processes::Process::DefaultVrf::Distance : public ydk::Entity
{
    public:
        Distance();
        ~Distance();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf admin_distance; //type: uint32
        class OspfDistance; //type: Ospf::Processes::Process::DefaultVrf::Distance::OspfDistance
        class IpDistances; //type: Ospf::Processes::Process::DefaultVrf::Distance::IpDistances

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_ospf_cfg::Ospf::Processes::Process::DefaultVrf::Distance::OspfDistance> ospf_distance;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_ospf_cfg::Ospf::Processes::Process::DefaultVrf::Distance::IpDistances> ip_distances;
        
}; // Ospf::Processes::Process::DefaultVrf::Distance


class Ospf::Processes::Process::DefaultVrf::Distance::OspfDistance : public ydk::Entity
{
    public:
        OspfDistance();
        ~OspfDistance();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf intra_area; //type: uint32
        ydk::YLeaf inter_area; //type: uint32
        ydk::YLeaf external_routes; //type: uint32

}; // Ospf::Processes::Process::DefaultVrf::Distance::OspfDistance


class Ospf::Processes::Process::DefaultVrf::Distance::IpDistances : public ydk::Entity
{
    public:
        IpDistances();
        ~IpDistances();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class IpDistance; //type: Ospf::Processes::Process::DefaultVrf::Distance::IpDistances::IpDistance

        ydk::YList ip_distance;
        
}; // Ospf::Processes::Process::DefaultVrf::Distance::IpDistances


class Ospf::Processes::Process::DefaultVrf::Distance::IpDistances::IpDistance : public ydk::Entity
{
    public:
        IpDistance();
        ~IpDistance();

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
        ydk::YLeaf wildcard; //type: string
        ydk::YLeaf distance; //type: uint32
        ydk::YLeaf access_list_name; //type: string

}; // Ospf::Processes::Process::DefaultVrf::Distance::IpDistances::IpDistance


class Ospf::Processes::Process::DefaultVrf::AreaAddresses : public ydk::Entity
{
    public:
        AreaAddresses();
        ~AreaAddresses();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class AreaAddress; //type: Ospf::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress
        class AreaAreaId; //type: Ospf::Processes::Process::DefaultVrf::AreaAddresses::AreaAreaId

        ydk::YList area_address;
        ydk::YList area_area_id;
        
}; // Ospf::Processes::Process::DefaultVrf::AreaAddresses


class Ospf::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress : public ydk::Entity
{
    public:
        AreaAddress();
        ~AreaAddress();

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
        ydk::YLeaf route_policy_in; //type: string
        ydk::YLeaf default_cost; //type: uint32
        ydk::YLeaf route_policy_out; //type: string
        ydk::YLeaf stub; //type: boolean
        ydk::YLeaf type7_translate_always; //type: boolean
        ydk::YLeaf mpls_traffic_eng; //type: empty
        ydk::YLeaf external_out; //type: boolean
        ydk::YLeaf summary_in; //type: boolean
        ydk::YLeaf segment_routing; //type: OspfSegmentRouting
        ydk::YLeaf running; //type: empty
        class VirtualLinkScopes; //type: Ospf::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::VirtualLinkScopes
        class ShamLinkScopes; //type: Ospf::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::ShamLinkScopes
        class AreaScope; //type: Ospf::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::AreaScope
        class NameScopes; //type: Ospf::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::NameScopes
        class MultiAreaInterfaceScopes; //type: Ospf::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::MultiAreaInterfaceScopes
        class AreaRanges; //type: Ospf::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::AreaRanges
        class Nssa; //type: Ospf::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::Nssa

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_ospf_cfg::Ospf::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::VirtualLinkScopes> virtual_link_scopes;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_ospf_cfg::Ospf::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::ShamLinkScopes> sham_link_scopes;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_ospf_cfg::Ospf::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::AreaScope> area_scope;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_ospf_cfg::Ospf::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::NameScopes> name_scopes;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_ospf_cfg::Ospf::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::MultiAreaInterfaceScopes> multi_area_interface_scopes;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_ospf_cfg::Ospf::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::AreaRanges> area_ranges;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_ospf_cfg::Ospf::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::Nssa> nssa;
        
}; // Ospf::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress


class Ospf::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::VirtualLinkScopes : public ydk::Entity
{
    public:
        VirtualLinkScopes();
        ~VirtualLinkScopes();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class VirtualLinkScope; //type: Ospf::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::VirtualLinkScopes::VirtualLinkScope

        ydk::YList virtual_link_scope;
        
}; // Ospf::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::VirtualLinkScopes


class Ospf::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::VirtualLinkScopes::VirtualLinkScope : public ydk::Entity
{
    public:
        VirtualLinkScope();
        ~VirtualLinkScope();

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
        ydk::YLeaf hello_interval; //type: uint32
        ydk::YLeaf transmit_delay; //type: uint32
        ydk::YLeaf retransmit_interval; //type: uint32
        ydk::YLeaf running; //type: empty
        class Authentication; //type: Ospf::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::VirtualLinkScopes::VirtualLinkScope::Authentication
        class DeadIntervalMinimal; //type: Ospf::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::VirtualLinkScopes::VirtualLinkScope::DeadIntervalMinimal

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_ospf_cfg::Ospf::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::VirtualLinkScopes::VirtualLinkScope::Authentication> authentication;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_ospf_cfg::Ospf::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::VirtualLinkScopes::VirtualLinkScope::DeadIntervalMinimal> dead_interval_minimal;
        
}; // Ospf::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::VirtualLinkScopes::VirtualLinkScope


class Ospf::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::VirtualLinkScopes::VirtualLinkScope::Authentication : public ydk::Entity
{
    public:
        Authentication();
        ~Authentication();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf key; //type: string
        class Type; //type: Ospf::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::VirtualLinkScopes::VirtualLinkScope::Authentication::Type
        class MessageDigestKeys; //type: Ospf::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::VirtualLinkScopes::VirtualLinkScope::Authentication::MessageDigestKeys

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_ospf_cfg::Ospf::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::VirtualLinkScopes::VirtualLinkScope::Authentication::Type> type;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_ospf_cfg::Ospf::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::VirtualLinkScopes::VirtualLinkScope::Authentication::MessageDigestKeys> message_digest_keys;
        
}; // Ospf::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::VirtualLinkScopes::VirtualLinkScope::Authentication


class Ospf::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::VirtualLinkScopes::VirtualLinkScope::Authentication::Type : public ydk::Entity
{
    public:
        Type();
        ~Type();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf authen_type; //type: OspfAuthentication
        ydk::YLeaf keychain_authen_type; //type: OspfKeychainAuth
        ydk::YLeaf keychain_name; //type: string

}; // Ospf::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::VirtualLinkScopes::VirtualLinkScope::Authentication::Type


class Ospf::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::VirtualLinkScopes::VirtualLinkScope::Authentication::MessageDigestKeys : public ydk::Entity
{
    public:
        MessageDigestKeys();
        ~MessageDigestKeys();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class MessageDigestKey; //type: Ospf::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::VirtualLinkScopes::VirtualLinkScope::Authentication::MessageDigestKeys::MessageDigestKey

        ydk::YList message_digest_key;
        
}; // Ospf::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::VirtualLinkScopes::VirtualLinkScope::Authentication::MessageDigestKeys


class Ospf::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::VirtualLinkScopes::VirtualLinkScope::Authentication::MessageDigestKeys::MessageDigestKey : public ydk::Entity
{
    public:
        MessageDigestKey();
        ~MessageDigestKey();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf key_id; //type: uint32
        ydk::YLeaf password; //type: string

}; // Ospf::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::VirtualLinkScopes::VirtualLinkScope::Authentication::MessageDigestKeys::MessageDigestKey


class Ospf::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::VirtualLinkScopes::VirtualLinkScope::DeadIntervalMinimal : public ydk::Entity
{
    public:
        DeadIntervalMinimal();
        ~DeadIntervalMinimal();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf interval; //type: uint32
        ydk::YLeaf multiplier; //type: uint32

}; // Ospf::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::VirtualLinkScopes::VirtualLinkScope::DeadIntervalMinimal


class Ospf::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::ShamLinkScopes : public ydk::Entity
{
    public:
        ShamLinkScopes();
        ~ShamLinkScopes();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class ShamLinkScope; //type: Ospf::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::ShamLinkScopes::ShamLinkScope

        ydk::YList sham_link_scope;
        
}; // Ospf::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::ShamLinkScopes


class Ospf::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::ShamLinkScopes::ShamLinkScope : public ydk::Entity
{
    public:
        ShamLinkScope();
        ~ShamLinkScope();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf source_address; //type: string
        ydk::YLeaf destination_address; //type: string
        ydk::YLeaf source; //type: string
        ydk::YLeaf cost; //type: uint32
        ydk::YLeaf hello_interval; //type: uint32
        ydk::YLeaf transmit_delay; //type: uint32
        ydk::YLeaf retransmit_interval; //type: uint32
        ydk::YLeaf running; //type: empty
        class Authentication; //type: Ospf::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::ShamLinkScopes::ShamLinkScope::Authentication
        class DeadIntervalMinimal; //type: Ospf::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::ShamLinkScopes::ShamLinkScope::DeadIntervalMinimal

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_ospf_cfg::Ospf::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::ShamLinkScopes::ShamLinkScope::Authentication> authentication;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_ospf_cfg::Ospf::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::ShamLinkScopes::ShamLinkScope::DeadIntervalMinimal> dead_interval_minimal;
        
}; // Ospf::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::ShamLinkScopes::ShamLinkScope


class Ospf::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::ShamLinkScopes::ShamLinkScope::Authentication : public ydk::Entity
{
    public:
        Authentication();
        ~Authentication();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf key; //type: string
        class Type; //type: Ospf::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::ShamLinkScopes::ShamLinkScope::Authentication::Type
        class MessageDigestKeys; //type: Ospf::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::ShamLinkScopes::ShamLinkScope::Authentication::MessageDigestKeys

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_ospf_cfg::Ospf::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::ShamLinkScopes::ShamLinkScope::Authentication::Type> type;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_ospf_cfg::Ospf::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::ShamLinkScopes::ShamLinkScope::Authentication::MessageDigestKeys> message_digest_keys;
        
}; // Ospf::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::ShamLinkScopes::ShamLinkScope::Authentication


class Ospf::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::ShamLinkScopes::ShamLinkScope::Authentication::Type : public ydk::Entity
{
    public:
        Type();
        ~Type();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf authen_type; //type: OspfAuthentication
        ydk::YLeaf keychain_authen_type; //type: OspfKeychainAuth
        ydk::YLeaf keychain_name; //type: string

}; // Ospf::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::ShamLinkScopes::ShamLinkScope::Authentication::Type


class Ospf::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::ShamLinkScopes::ShamLinkScope::Authentication::MessageDigestKeys : public ydk::Entity
{
    public:
        MessageDigestKeys();
        ~MessageDigestKeys();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class MessageDigestKey; //type: Ospf::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::ShamLinkScopes::ShamLinkScope::Authentication::MessageDigestKeys::MessageDigestKey

        ydk::YList message_digest_key;
        
}; // Ospf::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::ShamLinkScopes::ShamLinkScope::Authentication::MessageDigestKeys


class Ospf::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::ShamLinkScopes::ShamLinkScope::Authentication::MessageDigestKeys::MessageDigestKey : public ydk::Entity
{
    public:
        MessageDigestKey();
        ~MessageDigestKey();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf key_id; //type: uint32
        ydk::YLeaf password; //type: string

}; // Ospf::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::ShamLinkScopes::ShamLinkScope::Authentication::MessageDigestKeys::MessageDigestKey


class Ospf::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::ShamLinkScopes::ShamLinkScope::DeadIntervalMinimal : public ydk::Entity
{
    public:
        DeadIntervalMinimal();
        ~DeadIntervalMinimal();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf interval; //type: uint32
        ydk::YLeaf multiplier; //type: uint32

}; // Ospf::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::ShamLinkScopes::ShamLinkScope::DeadIntervalMinimal


class Ospf::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::AreaScope : public ydk::Entity
{
    public:
        AreaScope();
        ~AreaScope();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf cost; //type: uint32
        ydk::YLeaf prefix_suppression_primary; //type: boolean
        ydk::YLeaf mtu_ignore; //type: boolean
        ydk::YLeaf ldp_sync_igp_shortcuts; //type: boolean
        ydk::YLeaf ldp_auto_config; //type: empty
        ydk::YLeaf network_type; //type: OspfNetwork
        ydk::YLeaf hello_interval; //type: uint32
        ydk::YLeaf loopback_stub_network; //type: boolean
        ydk::YLeaf prefix_suppression_secondary; //type: boolean
        ydk::YLeaf demand_circuit; //type: boolean
        ydk::YLeaf passive; //type: boolean
        ydk::YLeaf transmit_delay; //type: uint32
        ydk::YLeaf packet_size; //type: uint32
        ydk::YLeaf ldp_sync; //type: boolean
        ydk::YLeaf database_filter; //type: boolean
        ydk::YLeaf link_down_fast_detect; //type: boolean
        ydk::YLeaf segment_routing_forwarding; //type: OspfSegmentRoutingForwarding
        ydk::YLeaf retransmit_interval; //type: uint32
        ydk::YLeaf priority; //type: uint32
        ydk::YLeaf flood_reduction; //type: boolean
        class DistributeList; //type: Ospf::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::AreaScope::DistributeList
        class Bfd; //type: Ospf::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::AreaScope::Bfd
        class Authentication; //type: Ospf::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::AreaScope::Authentication
        class Security; //type: Ospf::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::AreaScope::Security
        class DeadIntervalMinimal; //type: Ospf::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::AreaScope::DeadIntervalMinimal
        class FastReroute; //type: Ospf::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::AreaScope::FastReroute
        class CostFallback; //type: Ospf::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::AreaScope::CostFallback

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_ospf_cfg::Ospf::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::AreaScope::DistributeList> distribute_list; // presence node
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_ospf_cfg::Ospf::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::AreaScope::Bfd> bfd;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_ospf_cfg::Ospf::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::AreaScope::Authentication> authentication;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_ospf_cfg::Ospf::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::AreaScope::Security> security;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_ospf_cfg::Ospf::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::AreaScope::DeadIntervalMinimal> dead_interval_minimal;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_ospf_cfg::Ospf::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::AreaScope::FastReroute> fast_reroute;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_ospf_cfg::Ospf::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::AreaScope::CostFallback> cost_fallback;
        
}; // Ospf::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::AreaScope


class Ospf::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::AreaScope::DistributeList : public ydk::Entity
{
    public:
        DistributeList();
        ~DistributeList();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf access_list_name; //type: string
        ydk::YLeaf route_policy_name; //type: string

}; // Ospf::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::AreaScope::DistributeList


class Ospf::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::AreaScope::Bfd : public ydk::Entity
{
    public:
        Bfd();
        ~Bfd();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf interval; //type: uint32
        ydk::YLeaf detection_multiplier; //type: uint32
        ydk::YLeaf fast_detect_mode; //type: BfdEnableMode

}; // Ospf::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::AreaScope::Bfd


class Ospf::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::AreaScope::Authentication : public ydk::Entity
{
    public:
        Authentication();
        ~Authentication();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf key; //type: string
        class Type; //type: Ospf::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::AreaScope::Authentication::Type
        class MessageDigestKeys; //type: Ospf::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::AreaScope::Authentication::MessageDigestKeys

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_ospf_cfg::Ospf::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::AreaScope::Authentication::Type> type;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_ospf_cfg::Ospf::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::AreaScope::Authentication::MessageDigestKeys> message_digest_keys;
        
}; // Ospf::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::AreaScope::Authentication


class Ospf::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::AreaScope::Authentication::Type : public ydk::Entity
{
    public:
        Type();
        ~Type();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf authen_type; //type: OspfAuthentication
        ydk::YLeaf keychain_authen_type; //type: OspfKeychainAuth
        ydk::YLeaf keychain_name; //type: string

}; // Ospf::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::AreaScope::Authentication::Type


class Ospf::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::AreaScope::Authentication::MessageDigestKeys : public ydk::Entity
{
    public:
        MessageDigestKeys();
        ~MessageDigestKeys();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class MessageDigestKey; //type: Ospf::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::AreaScope::Authentication::MessageDigestKeys::MessageDigestKey

        ydk::YList message_digest_key;
        
}; // Ospf::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::AreaScope::Authentication::MessageDigestKeys


class Ospf::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::AreaScope::Authentication::MessageDigestKeys::MessageDigestKey : public ydk::Entity
{
    public:
        MessageDigestKey();
        ~MessageDigestKey();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf key_id; //type: uint32
        ydk::YLeaf password; //type: string

}; // Ospf::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::AreaScope::Authentication::MessageDigestKeys::MessageDigestKey


class Ospf::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::AreaScope::Security : public ydk::Entity
{
    public:
        Security();
        ~Security();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Ttl; //type: Ospf::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::AreaScope::Security::Ttl

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_ospf_cfg::Ospf::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::AreaScope::Security::Ttl> ttl;
        
}; // Ospf::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::AreaScope::Security


class Ospf::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::AreaScope::Security::Ttl : public ydk::Entity
{
    public:
        Ttl();
        ~Ttl();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf enable; //type: boolean
        ydk::YLeaf hop_count; //type: uint32

}; // Ospf::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::AreaScope::Security::Ttl


class Ospf::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::AreaScope::DeadIntervalMinimal : public ydk::Entity
{
    public:
        DeadIntervalMinimal();
        ~DeadIntervalMinimal();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf interval; //type: uint32
        ydk::YLeaf multiplier; //type: uint32

}; // Ospf::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::AreaScope::DeadIntervalMinimal


class Ospf::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::AreaScope::FastReroute : public ydk::Entity
{
    public:
        FastReroute();
        ~FastReroute();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf fast_reroute_enable; //type: OspfFastReroute
        class PerLink; //type: Ospf::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::AreaScope::FastReroute::PerLink
        class PerPrefix; //type: Ospf::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::AreaScope::FastReroute::PerPrefix

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_ospf_cfg::Ospf::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::AreaScope::FastReroute::PerLink> per_link;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_ospf_cfg::Ospf::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::AreaScope::FastReroute::PerPrefix> per_prefix;
        
}; // Ospf::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::AreaScope::FastReroute


class Ospf::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::AreaScope::FastReroute::PerLink : public ydk::Entity
{
    public:
        PerLink();
        ~PerLink();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf fast_reroute_use_candidate_only; //type: boolean
        class CandidateInterfaces; //type: Ospf::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::AreaScope::FastReroute::PerLink::CandidateInterfaces
        class ExcludeInterfaces; //type: Ospf::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::AreaScope::FastReroute::PerLink::ExcludeInterfaces

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_ospf_cfg::Ospf::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::AreaScope::FastReroute::PerLink::CandidateInterfaces> candidate_interfaces;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_ospf_cfg::Ospf::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::AreaScope::FastReroute::PerLink::ExcludeInterfaces> exclude_interfaces;
        
}; // Ospf::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::AreaScope::FastReroute::PerLink


class Ospf::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::AreaScope::FastReroute::PerLink::CandidateInterfaces : public ydk::Entity
{
    public:
        CandidateInterfaces();
        ~CandidateInterfaces();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class CandidateInterface; //type: Ospf::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::AreaScope::FastReroute::PerLink::CandidateInterfaces::CandidateInterface

        ydk::YList candidate_interface;
        
}; // Ospf::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::AreaScope::FastReroute::PerLink::CandidateInterfaces


class Ospf::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::AreaScope::FastReroute::PerLink::CandidateInterfaces::CandidateInterface : public ydk::Entity
{
    public:
        CandidateInterface();
        ~CandidateInterface();

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

}; // Ospf::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::AreaScope::FastReroute::PerLink::CandidateInterfaces::CandidateInterface


class Ospf::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::AreaScope::FastReroute::PerLink::ExcludeInterfaces : public ydk::Entity
{
    public:
        ExcludeInterfaces();
        ~ExcludeInterfaces();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class ExcludeInterface; //type: Ospf::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::AreaScope::FastReroute::PerLink::ExcludeInterfaces::ExcludeInterface

        ydk::YList exclude_interface;
        
}; // Ospf::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::AreaScope::FastReroute::PerLink::ExcludeInterfaces


class Ospf::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::AreaScope::FastReroute::PerLink::ExcludeInterfaces::ExcludeInterface : public ydk::Entity
{
    public:
        ExcludeInterface();
        ~ExcludeInterface();

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

}; // Ospf::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::AreaScope::FastReroute::PerLink::ExcludeInterfaces::ExcludeInterface


class Ospf::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::AreaScope::FastReroute::PerPrefix : public ydk::Entity
{
    public:
        PerPrefix();
        ~PerPrefix();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf topology_independent_lfa; //type: boolean
        ydk::YLeaf fast_reroute_use_candidate_only; //type: boolean
        class RemoteLfa; //type: Ospf::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::AreaScope::FastReroute::PerPrefix::RemoteLfa
        class Tiebreakers; //type: Ospf::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::AreaScope::FastReroute::PerPrefix::Tiebreakers
        class CandidateInterfaces; //type: Ospf::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::AreaScope::FastReroute::PerPrefix::CandidateInterfaces
        class ExcludeInterfaces; //type: Ospf::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::AreaScope::FastReroute::PerPrefix::ExcludeInterfaces

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_ospf_cfg::Ospf::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::AreaScope::FastReroute::PerPrefix::RemoteLfa> remote_lfa;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_ospf_cfg::Ospf::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::AreaScope::FastReroute::PerPrefix::Tiebreakers> tiebreakers;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_ospf_cfg::Ospf::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::AreaScope::FastReroute::PerPrefix::CandidateInterfaces> candidate_interfaces;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_ospf_cfg::Ospf::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::AreaScope::FastReroute::PerPrefix::ExcludeInterfaces> exclude_interfaces;
        
}; // Ospf::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::AreaScope::FastReroute::PerPrefix


class Ospf::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::AreaScope::FastReroute::PerPrefix::RemoteLfa : public ydk::Entity
{
    public:
        RemoteLfa();
        ~RemoteLfa();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf tunnel; //type: OspfFrrRlfaTunnel
        ydk::YLeaf maximum_cost; //type: uint32

}; // Ospf::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::AreaScope::FastReroute::PerPrefix::RemoteLfa


class Ospf::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::AreaScope::FastReroute::PerPrefix::Tiebreakers : public ydk::Entity
{
    public:
        Tiebreakers();
        ~Tiebreakers();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Tiebreaker; //type: Ospf::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::AreaScope::FastReroute::PerPrefix::Tiebreakers::Tiebreaker

        ydk::YList tiebreaker;
        
}; // Ospf::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::AreaScope::FastReroute::PerPrefix::Tiebreakers


class Ospf::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::AreaScope::FastReroute::PerPrefix::Tiebreakers::Tiebreaker : public ydk::Entity
{
    public:
        Tiebreaker();
        ~Tiebreaker();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf tiebreaker_type; //type: OspfFastRerouteTiebreakersIntf
        ydk::YLeaf tiebreaker_index; //type: uint32

}; // Ospf::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::AreaScope::FastReroute::PerPrefix::Tiebreakers::Tiebreaker


class Ospf::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::AreaScope::FastReroute::PerPrefix::CandidateInterfaces : public ydk::Entity
{
    public:
        CandidateInterfaces();
        ~CandidateInterfaces();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class CandidateInterface; //type: Ospf::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::AreaScope::FastReroute::PerPrefix::CandidateInterfaces::CandidateInterface

        ydk::YList candidate_interface;
        
}; // Ospf::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::AreaScope::FastReroute::PerPrefix::CandidateInterfaces


class Ospf::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::AreaScope::FastReroute::PerPrefix::CandidateInterfaces::CandidateInterface : public ydk::Entity
{
    public:
        CandidateInterface();
        ~CandidateInterface();

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

}; // Ospf::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::AreaScope::FastReroute::PerPrefix::CandidateInterfaces::CandidateInterface


class Ospf::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::AreaScope::FastReroute::PerPrefix::ExcludeInterfaces : public ydk::Entity
{
    public:
        ExcludeInterfaces();
        ~ExcludeInterfaces();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class ExcludeInterface; //type: Ospf::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::AreaScope::FastReroute::PerPrefix::ExcludeInterfaces::ExcludeInterface

        ydk::YList exclude_interface;
        
}; // Ospf::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::AreaScope::FastReroute::PerPrefix::ExcludeInterfaces


class Ospf::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::AreaScope::FastReroute::PerPrefix::ExcludeInterfaces::ExcludeInterface : public ydk::Entity
{
    public:
        ExcludeInterface();
        ~ExcludeInterface();

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

}; // Ospf::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::AreaScope::FastReroute::PerPrefix::ExcludeInterfaces::ExcludeInterface


class Ospf::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::AreaScope::CostFallback : public ydk::Entity
{
    public:
        CostFallback();
        ~CostFallback();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf cost; //type: uint32
        ydk::YLeaf threshold; //type: uint32

}; // Ospf::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::AreaScope::CostFallback


class Ospf::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::NameScopes : public ydk::Entity
{
    public:
        NameScopes();
        ~NameScopes();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class NameScope; //type: Ospf::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::NameScopes::NameScope

        ydk::YList name_scope;
        
}; // Ospf::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::NameScopes


class Ospf::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::NameScopes::NameScope : public ydk::Entity
{
    public:
        NameScope();
        ~NameScope();

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
        ydk::YLeaf cost; //type: uint32
        ydk::YLeaf prefix_suppression_primary; //type: boolean
        ydk::YLeaf mtu_ignore; //type: boolean
        ydk::YLeaf ldp_sync_igp_shortcuts; //type: boolean
        ydk::YLeaf ldp_auto_config; //type: empty
        ydk::YLeaf network_type; //type: OspfNetwork
        ydk::YLeaf hello_interval; //type: uint32
        ydk::YLeaf loopback_stub_network; //type: boolean
        ydk::YLeaf prefix_suppression_secondary; //type: boolean
        ydk::YLeaf demand_circuit; //type: boolean
        ydk::YLeaf passive; //type: boolean
        ydk::YLeaf transmit_delay; //type: uint32
        ydk::YLeaf packet_size; //type: uint32
        ydk::YLeaf ldp_sync; //type: boolean
        ydk::YLeaf database_filter; //type: boolean
        ydk::YLeaf link_down_fast_detect; //type: boolean
        ydk::YLeaf segment_routing_forwarding; //type: OspfSegmentRoutingForwarding
        ydk::YLeaf retransmit_interval; //type: uint32
        ydk::YLeaf priority; //type: uint32
        ydk::YLeaf flood_reduction; //type: boolean
        ydk::YLeaf running; //type: empty
        class PrefixSid; //type: Ospf::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::NameScopes::NameScope::PrefixSid
        class PrefixSidStrict; //type: Ospf::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::NameScopes::NameScope::PrefixSidStrict
        class DistributeList; //type: Ospf::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::NameScopes::NameScope::DistributeList
        class Bfd; //type: Ospf::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::NameScopes::NameScope::Bfd
        class Authentication; //type: Ospf::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::NameScopes::NameScope::Authentication
        class Security; //type: Ospf::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::NameScopes::NameScope::Security
        class Neighbors; //type: Ospf::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::NameScopes::NameScope::Neighbors
        class DeadIntervalMinimal; //type: Ospf::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::NameScopes::NameScope::DeadIntervalMinimal
        class FastReroute; //type: Ospf::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::NameScopes::NameScope::FastReroute
        class CostFallback; //type: Ospf::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::NameScopes::NameScope::CostFallback

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_ospf_cfg::Ospf::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::NameScopes::NameScope::PrefixSid> prefix_sid; // presence node
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_ospf_cfg::Ospf::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::NameScopes::NameScope::PrefixSidStrict> prefix_sid_strict; // presence node
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_ospf_cfg::Ospf::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::NameScopes::NameScope::DistributeList> distribute_list; // presence node
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_ospf_cfg::Ospf::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::NameScopes::NameScope::Bfd> bfd;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_ospf_cfg::Ospf::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::NameScopes::NameScope::Authentication> authentication;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_ospf_cfg::Ospf::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::NameScopes::NameScope::Security> security;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_ospf_cfg::Ospf::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::NameScopes::NameScope::Neighbors> neighbors;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_ospf_cfg::Ospf::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::NameScopes::NameScope::DeadIntervalMinimal> dead_interval_minimal;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_ospf_cfg::Ospf::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::NameScopes::NameScope::FastReroute> fast_reroute;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_ospf_cfg::Ospf::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::NameScopes::NameScope::CostFallback> cost_fallback;
        
}; // Ospf::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::NameScopes::NameScope


class Ospf::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::NameScopes::NameScope::PrefixSid : public ydk::Entity
{
    public:
        PrefixSid();
        ~PrefixSid();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf sid_value; //type: uint32
        ydk::YLeaf explicit_null; //type: boolean
        ydk::YLeaf type; //type: OspfSid
        ydk::YLeaf n_flag_clear; //type: boolean

}; // Ospf::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::NameScopes::NameScope::PrefixSid


class Ospf::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::NameScopes::NameScope::PrefixSidStrict : public ydk::Entity
{
    public:
        PrefixSidStrict();
        ~PrefixSidStrict();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf sid_value; //type: uint32
        ydk::YLeaf explicit_null; //type: boolean
        ydk::YLeaf type; //type: OspfSid
        ydk::YLeaf n_flag_clear; //type: boolean

}; // Ospf::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::NameScopes::NameScope::PrefixSidStrict


class Ospf::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::NameScopes::NameScope::DistributeList : public ydk::Entity
{
    public:
        DistributeList();
        ~DistributeList();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf access_list_name; //type: string
        ydk::YLeaf route_policy_name; //type: string

}; // Ospf::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::NameScopes::NameScope::DistributeList


class Ospf::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::NameScopes::NameScope::Bfd : public ydk::Entity
{
    public:
        Bfd();
        ~Bfd();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf interval; //type: uint32
        ydk::YLeaf detection_multiplier; //type: uint32
        ydk::YLeaf fast_detect_mode; //type: BfdEnableMode

}; // Ospf::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::NameScopes::NameScope::Bfd


class Ospf::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::NameScopes::NameScope::Authentication : public ydk::Entity
{
    public:
        Authentication();
        ~Authentication();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf key; //type: string
        class Type; //type: Ospf::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::NameScopes::NameScope::Authentication::Type
        class MessageDigestKeys; //type: Ospf::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::NameScopes::NameScope::Authentication::MessageDigestKeys

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_ospf_cfg::Ospf::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::NameScopes::NameScope::Authentication::Type> type;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_ospf_cfg::Ospf::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::NameScopes::NameScope::Authentication::MessageDigestKeys> message_digest_keys;
        
}; // Ospf::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::NameScopes::NameScope::Authentication


class Ospf::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::NameScopes::NameScope::Authentication::Type : public ydk::Entity
{
    public:
        Type();
        ~Type();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf authen_type; //type: OspfAuthentication
        ydk::YLeaf keychain_authen_type; //type: OspfKeychainAuth
        ydk::YLeaf keychain_name; //type: string

}; // Ospf::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::NameScopes::NameScope::Authentication::Type


class Ospf::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::NameScopes::NameScope::Authentication::MessageDigestKeys : public ydk::Entity
{
    public:
        MessageDigestKeys();
        ~MessageDigestKeys();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class MessageDigestKey; //type: Ospf::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::NameScopes::NameScope::Authentication::MessageDigestKeys::MessageDigestKey

        ydk::YList message_digest_key;
        
}; // Ospf::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::NameScopes::NameScope::Authentication::MessageDigestKeys


class Ospf::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::NameScopes::NameScope::Authentication::MessageDigestKeys::MessageDigestKey : public ydk::Entity
{
    public:
        MessageDigestKey();
        ~MessageDigestKey();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf key_id; //type: uint32
        ydk::YLeaf password; //type: string

}; // Ospf::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::NameScopes::NameScope::Authentication::MessageDigestKeys::MessageDigestKey


class Ospf::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::NameScopes::NameScope::Security : public ydk::Entity
{
    public:
        Security();
        ~Security();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Ttl; //type: Ospf::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::NameScopes::NameScope::Security::Ttl

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_ospf_cfg::Ospf::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::NameScopes::NameScope::Security::Ttl> ttl;
        
}; // Ospf::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::NameScopes::NameScope::Security


class Ospf::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::NameScopes::NameScope::Security::Ttl : public ydk::Entity
{
    public:
        Ttl();
        ~Ttl();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf enable; //type: boolean
        ydk::YLeaf hop_count; //type: uint32

}; // Ospf::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::NameScopes::NameScope::Security::Ttl


class Ospf::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::NameScopes::NameScope::Neighbors : public ydk::Entity
{
    public:
        Neighbors();
        ~Neighbors();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Neighbor; //type: Ospf::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::NameScopes::NameScope::Neighbors::Neighbor

        ydk::YList neighbor;
        
}; // Ospf::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::NameScopes::NameScope::Neighbors


class Ospf::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::NameScopes::NameScope::Neighbors::Neighbor : public ydk::Entity
{
    public:
        Neighbor();
        ~Neighbor();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf neighbor_address; //type: string
        ydk::YLeaf priority; //type: uint32
        ydk::YLeaf poll_interval; //type: uint32
        ydk::YLeaf cost; //type: uint32
        ydk::YLeaf database_filter; //type: boolean

}; // Ospf::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::NameScopes::NameScope::Neighbors::Neighbor


class Ospf::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::NameScopes::NameScope::DeadIntervalMinimal : public ydk::Entity
{
    public:
        DeadIntervalMinimal();
        ~DeadIntervalMinimal();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf interval; //type: uint32
        ydk::YLeaf multiplier; //type: uint32

}; // Ospf::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::NameScopes::NameScope::DeadIntervalMinimal


class Ospf::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::NameScopes::NameScope::FastReroute : public ydk::Entity
{
    public:
        FastReroute();
        ~FastReroute();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf fast_reroute_enable; //type: OspfFastReroute
        class PerLink; //type: Ospf::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::NameScopes::NameScope::FastReroute::PerLink
        class PerPrefix; //type: Ospf::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::NameScopes::NameScope::FastReroute::PerPrefix

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_ospf_cfg::Ospf::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::NameScopes::NameScope::FastReroute::PerLink> per_link;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_ospf_cfg::Ospf::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::NameScopes::NameScope::FastReroute::PerPrefix> per_prefix;
        
}; // Ospf::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::NameScopes::NameScope::FastReroute


class Ospf::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::NameScopes::NameScope::FastReroute::PerLink : public ydk::Entity
{
    public:
        PerLink();
        ~PerLink();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf fast_reroute_use_candidate_only; //type: boolean
        class CandidateInterfaces; //type: Ospf::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::NameScopes::NameScope::FastReroute::PerLink::CandidateInterfaces
        class ExcludeInterfaces; //type: Ospf::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::NameScopes::NameScope::FastReroute::PerLink::ExcludeInterfaces

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_ospf_cfg::Ospf::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::NameScopes::NameScope::FastReroute::PerLink::CandidateInterfaces> candidate_interfaces;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_ospf_cfg::Ospf::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::NameScopes::NameScope::FastReroute::PerLink::ExcludeInterfaces> exclude_interfaces;
        
}; // Ospf::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::NameScopes::NameScope::FastReroute::PerLink


class Ospf::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::NameScopes::NameScope::FastReroute::PerLink::CandidateInterfaces : public ydk::Entity
{
    public:
        CandidateInterfaces();
        ~CandidateInterfaces();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class CandidateInterface; //type: Ospf::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::NameScopes::NameScope::FastReroute::PerLink::CandidateInterfaces::CandidateInterface

        ydk::YList candidate_interface;
        
}; // Ospf::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::NameScopes::NameScope::FastReroute::PerLink::CandidateInterfaces


class Ospf::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::NameScopes::NameScope::FastReroute::PerLink::CandidateInterfaces::CandidateInterface : public ydk::Entity
{
    public:
        CandidateInterface();
        ~CandidateInterface();

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

}; // Ospf::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::NameScopes::NameScope::FastReroute::PerLink::CandidateInterfaces::CandidateInterface


class Ospf::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::NameScopes::NameScope::FastReroute::PerLink::ExcludeInterfaces : public ydk::Entity
{
    public:
        ExcludeInterfaces();
        ~ExcludeInterfaces();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class ExcludeInterface; //type: Ospf::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::NameScopes::NameScope::FastReroute::PerLink::ExcludeInterfaces::ExcludeInterface

        ydk::YList exclude_interface;
        
}; // Ospf::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::NameScopes::NameScope::FastReroute::PerLink::ExcludeInterfaces


class Ospf::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::NameScopes::NameScope::FastReroute::PerLink::ExcludeInterfaces::ExcludeInterface : public ydk::Entity
{
    public:
        ExcludeInterface();
        ~ExcludeInterface();

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

}; // Ospf::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::NameScopes::NameScope::FastReroute::PerLink::ExcludeInterfaces::ExcludeInterface


class Ospf::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::NameScopes::NameScope::FastReroute::PerPrefix : public ydk::Entity
{
    public:
        PerPrefix();
        ~PerPrefix();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf topology_independent_lfa; //type: boolean
        ydk::YLeaf fast_reroute_use_candidate_only; //type: boolean
        class RemoteLfa; //type: Ospf::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::NameScopes::NameScope::FastReroute::PerPrefix::RemoteLfa
        class Tiebreakers; //type: Ospf::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::NameScopes::NameScope::FastReroute::PerPrefix::Tiebreakers
        class CandidateInterfaces; //type: Ospf::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::NameScopes::NameScope::FastReroute::PerPrefix::CandidateInterfaces
        class ExcludeInterfaces; //type: Ospf::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::NameScopes::NameScope::FastReroute::PerPrefix::ExcludeInterfaces

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_ospf_cfg::Ospf::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::NameScopes::NameScope::FastReroute::PerPrefix::RemoteLfa> remote_lfa;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_ospf_cfg::Ospf::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::NameScopes::NameScope::FastReroute::PerPrefix::Tiebreakers> tiebreakers;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_ospf_cfg::Ospf::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::NameScopes::NameScope::FastReroute::PerPrefix::CandidateInterfaces> candidate_interfaces;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_ospf_cfg::Ospf::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::NameScopes::NameScope::FastReroute::PerPrefix::ExcludeInterfaces> exclude_interfaces;
        
}; // Ospf::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::NameScopes::NameScope::FastReroute::PerPrefix


class Ospf::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::NameScopes::NameScope::FastReroute::PerPrefix::RemoteLfa : public ydk::Entity
{
    public:
        RemoteLfa();
        ~RemoteLfa();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf tunnel; //type: OspfFrrRlfaTunnel
        ydk::YLeaf maximum_cost; //type: uint32

}; // Ospf::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::NameScopes::NameScope::FastReroute::PerPrefix::RemoteLfa


class Ospf::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::NameScopes::NameScope::FastReroute::PerPrefix::Tiebreakers : public ydk::Entity
{
    public:
        Tiebreakers();
        ~Tiebreakers();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Tiebreaker; //type: Ospf::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::NameScopes::NameScope::FastReroute::PerPrefix::Tiebreakers::Tiebreaker

        ydk::YList tiebreaker;
        
}; // Ospf::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::NameScopes::NameScope::FastReroute::PerPrefix::Tiebreakers


class Ospf::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::NameScopes::NameScope::FastReroute::PerPrefix::Tiebreakers::Tiebreaker : public ydk::Entity
{
    public:
        Tiebreaker();
        ~Tiebreaker();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf tiebreaker_type; //type: OspfFastRerouteTiebreakersIntf
        ydk::YLeaf tiebreaker_index; //type: uint32

}; // Ospf::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::NameScopes::NameScope::FastReroute::PerPrefix::Tiebreakers::Tiebreaker


class Ospf::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::NameScopes::NameScope::FastReroute::PerPrefix::CandidateInterfaces : public ydk::Entity
{
    public:
        CandidateInterfaces();
        ~CandidateInterfaces();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class CandidateInterface; //type: Ospf::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::NameScopes::NameScope::FastReroute::PerPrefix::CandidateInterfaces::CandidateInterface

        ydk::YList candidate_interface;
        
}; // Ospf::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::NameScopes::NameScope::FastReroute::PerPrefix::CandidateInterfaces


class Ospf::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::NameScopes::NameScope::FastReroute::PerPrefix::CandidateInterfaces::CandidateInterface : public ydk::Entity
{
    public:
        CandidateInterface();
        ~CandidateInterface();

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

}; // Ospf::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::NameScopes::NameScope::FastReroute::PerPrefix::CandidateInterfaces::CandidateInterface


class Ospf::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::NameScopes::NameScope::FastReroute::PerPrefix::ExcludeInterfaces : public ydk::Entity
{
    public:
        ExcludeInterfaces();
        ~ExcludeInterfaces();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class ExcludeInterface; //type: Ospf::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::NameScopes::NameScope::FastReroute::PerPrefix::ExcludeInterfaces::ExcludeInterface

        ydk::YList exclude_interface;
        
}; // Ospf::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::NameScopes::NameScope::FastReroute::PerPrefix::ExcludeInterfaces


class Ospf::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::NameScopes::NameScope::FastReroute::PerPrefix::ExcludeInterfaces::ExcludeInterface : public ydk::Entity
{
    public:
        ExcludeInterface();
        ~ExcludeInterface();

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

}; // Ospf::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::NameScopes::NameScope::FastReroute::PerPrefix::ExcludeInterfaces::ExcludeInterface


class Ospf::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::NameScopes::NameScope::CostFallback : public ydk::Entity
{
    public:
        CostFallback();
        ~CostFallback();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf cost; //type: uint32
        ydk::YLeaf threshold; //type: uint32

}; // Ospf::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::NameScopes::NameScope::CostFallback


class Ospf::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::MultiAreaInterfaceScopes : public ydk::Entity
{
    public:
        MultiAreaInterfaceScopes();
        ~MultiAreaInterfaceScopes();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class MultiAreaInterfaceScope; //type: Ospf::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::MultiAreaInterfaceScopes::MultiAreaInterfaceScope

        ydk::YList multi_area_interface_scope;
        
}; // Ospf::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::MultiAreaInterfaceScopes


class Ospf::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::MultiAreaInterfaceScopes::MultiAreaInterfaceScope : public ydk::Entity
{
    public:
        MultiAreaInterfaceScope();
        ~MultiAreaInterfaceScope();

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
        ydk::YLeaf cost; //type: uint32
        ydk::YLeaf mtu_ignore; //type: boolean
        ydk::YLeaf hello_interval; //type: uint32
        ydk::YLeaf passive; //type: boolean
        ydk::YLeaf transmit_delay; //type: uint32
        ydk::YLeaf packet_size; //type: uint32
        ydk::YLeaf database_filter; //type: boolean
        ydk::YLeaf retransmit_interval; //type: uint32
        ydk::YLeaf running; //type: empty
        class DistributeList; //type: Ospf::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::DistributeList
        class Authentication; //type: Ospf::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::Authentication
        class Neighbors; //type: Ospf::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::Neighbors
        class DeadIntervalMinimal; //type: Ospf::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::DeadIntervalMinimal
        class FastReroute; //type: Ospf::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::FastReroute
        class CostFallback; //type: Ospf::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::CostFallback

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_ospf_cfg::Ospf::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::DistributeList> distribute_list; // presence node
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_ospf_cfg::Ospf::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::Authentication> authentication;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_ospf_cfg::Ospf::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::Neighbors> neighbors;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_ospf_cfg::Ospf::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::DeadIntervalMinimal> dead_interval_minimal;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_ospf_cfg::Ospf::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::FastReroute> fast_reroute;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_ospf_cfg::Ospf::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::CostFallback> cost_fallback;
        
}; // Ospf::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::MultiAreaInterfaceScopes::MultiAreaInterfaceScope


class Ospf::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::DistributeList : public ydk::Entity
{
    public:
        DistributeList();
        ~DistributeList();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf access_list_name; //type: string
        ydk::YLeaf route_policy_name; //type: string

}; // Ospf::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::DistributeList


class Ospf::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::Authentication : public ydk::Entity
{
    public:
        Authentication();
        ~Authentication();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf key; //type: string
        class Type; //type: Ospf::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::Authentication::Type
        class MessageDigestKeys; //type: Ospf::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::Authentication::MessageDigestKeys

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_ospf_cfg::Ospf::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::Authentication::Type> type;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_ospf_cfg::Ospf::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::Authentication::MessageDigestKeys> message_digest_keys;
        
}; // Ospf::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::Authentication


class Ospf::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::Authentication::Type : public ydk::Entity
{
    public:
        Type();
        ~Type();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf authen_type; //type: OspfAuthentication
        ydk::YLeaf keychain_authen_type; //type: OspfKeychainAuth
        ydk::YLeaf keychain_name; //type: string

}; // Ospf::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::Authentication::Type


class Ospf::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::Authentication::MessageDigestKeys : public ydk::Entity
{
    public:
        MessageDigestKeys();
        ~MessageDigestKeys();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class MessageDigestKey; //type: Ospf::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::Authentication::MessageDigestKeys::MessageDigestKey

        ydk::YList message_digest_key;
        
}; // Ospf::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::Authentication::MessageDigestKeys


class Ospf::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::Authentication::MessageDigestKeys::MessageDigestKey : public ydk::Entity
{
    public:
        MessageDigestKey();
        ~MessageDigestKey();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf key_id; //type: uint32
        ydk::YLeaf password; //type: string

}; // Ospf::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::Authentication::MessageDigestKeys::MessageDigestKey


class Ospf::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::Neighbors : public ydk::Entity
{
    public:
        Neighbors();
        ~Neighbors();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Neighbor; //type: Ospf::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::Neighbors::Neighbor

        ydk::YList neighbor;
        
}; // Ospf::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::Neighbors


class Ospf::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::Neighbors::Neighbor : public ydk::Entity
{
    public:
        Neighbor();
        ~Neighbor();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf neighbor_address; //type: string
        ydk::YLeaf priority; //type: uint32
        ydk::YLeaf poll_interval; //type: uint32
        ydk::YLeaf cost; //type: uint32
        ydk::YLeaf database_filter; //type: boolean

}; // Ospf::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::Neighbors::Neighbor


class Ospf::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::DeadIntervalMinimal : public ydk::Entity
{
    public:
        DeadIntervalMinimal();
        ~DeadIntervalMinimal();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf interval; //type: uint32
        ydk::YLeaf multiplier; //type: uint32

}; // Ospf::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::DeadIntervalMinimal


class Ospf::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::FastReroute : public ydk::Entity
{
    public:
        FastReroute();
        ~FastReroute();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf fast_reroute_enable; //type: OspfFastReroute
        class PerLink; //type: Ospf::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::FastReroute::PerLink
        class PerPrefix; //type: Ospf::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::FastReroute::PerPrefix

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_ospf_cfg::Ospf::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::FastReroute::PerLink> per_link;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_ospf_cfg::Ospf::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::FastReroute::PerPrefix> per_prefix;
        
}; // Ospf::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::FastReroute


class Ospf::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::FastReroute::PerLink : public ydk::Entity
{
    public:
        PerLink();
        ~PerLink();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf fast_reroute_use_candidate_only; //type: boolean
        class CandidateInterfaces; //type: Ospf::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::FastReroute::PerLink::CandidateInterfaces
        class ExcludeInterfaces; //type: Ospf::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::FastReroute::PerLink::ExcludeInterfaces

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_ospf_cfg::Ospf::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::FastReroute::PerLink::CandidateInterfaces> candidate_interfaces;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_ospf_cfg::Ospf::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::FastReroute::PerLink::ExcludeInterfaces> exclude_interfaces;
        
}; // Ospf::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::FastReroute::PerLink


class Ospf::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::FastReroute::PerLink::CandidateInterfaces : public ydk::Entity
{
    public:
        CandidateInterfaces();
        ~CandidateInterfaces();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class CandidateInterface; //type: Ospf::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::FastReroute::PerLink::CandidateInterfaces::CandidateInterface

        ydk::YList candidate_interface;
        
}; // Ospf::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::FastReroute::PerLink::CandidateInterfaces


class Ospf::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::FastReroute::PerLink::CandidateInterfaces::CandidateInterface : public ydk::Entity
{
    public:
        CandidateInterface();
        ~CandidateInterface();

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

}; // Ospf::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::FastReroute::PerLink::CandidateInterfaces::CandidateInterface


class Ospf::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::FastReroute::PerLink::ExcludeInterfaces : public ydk::Entity
{
    public:
        ExcludeInterfaces();
        ~ExcludeInterfaces();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class ExcludeInterface; //type: Ospf::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::FastReroute::PerLink::ExcludeInterfaces::ExcludeInterface

        ydk::YList exclude_interface;
        
}; // Ospf::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::FastReroute::PerLink::ExcludeInterfaces


class Ospf::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::FastReroute::PerLink::ExcludeInterfaces::ExcludeInterface : public ydk::Entity
{
    public:
        ExcludeInterface();
        ~ExcludeInterface();

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

}; // Ospf::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::FastReroute::PerLink::ExcludeInterfaces::ExcludeInterface


class Ospf::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::FastReroute::PerPrefix : public ydk::Entity
{
    public:
        PerPrefix();
        ~PerPrefix();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf topology_independent_lfa; //type: boolean
        ydk::YLeaf fast_reroute_use_candidate_only; //type: boolean
        class RemoteLfa; //type: Ospf::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::FastReroute::PerPrefix::RemoteLfa
        class Tiebreakers; //type: Ospf::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::FastReroute::PerPrefix::Tiebreakers
        class CandidateInterfaces; //type: Ospf::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::FastReroute::PerPrefix::CandidateInterfaces
        class ExcludeInterfaces; //type: Ospf::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::FastReroute::PerPrefix::ExcludeInterfaces

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_ospf_cfg::Ospf::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::FastReroute::PerPrefix::RemoteLfa> remote_lfa;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_ospf_cfg::Ospf::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::FastReroute::PerPrefix::Tiebreakers> tiebreakers;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_ospf_cfg::Ospf::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::FastReroute::PerPrefix::CandidateInterfaces> candidate_interfaces;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_ospf_cfg::Ospf::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::FastReroute::PerPrefix::ExcludeInterfaces> exclude_interfaces;
        
}; // Ospf::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::FastReroute::PerPrefix


class Ospf::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::FastReroute::PerPrefix::RemoteLfa : public ydk::Entity
{
    public:
        RemoteLfa();
        ~RemoteLfa();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf tunnel; //type: OspfFrrRlfaTunnel
        ydk::YLeaf maximum_cost; //type: uint32

}; // Ospf::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::FastReroute::PerPrefix::RemoteLfa


class Ospf::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::FastReroute::PerPrefix::Tiebreakers : public ydk::Entity
{
    public:
        Tiebreakers();
        ~Tiebreakers();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Tiebreaker; //type: Ospf::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::FastReroute::PerPrefix::Tiebreakers::Tiebreaker

        ydk::YList tiebreaker;
        
}; // Ospf::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::FastReroute::PerPrefix::Tiebreakers


class Ospf::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::FastReroute::PerPrefix::Tiebreakers::Tiebreaker : public ydk::Entity
{
    public:
        Tiebreaker();
        ~Tiebreaker();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf tiebreaker_type; //type: OspfFastRerouteTiebreakersIntf
        ydk::YLeaf tiebreaker_index; //type: uint32

}; // Ospf::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::FastReroute::PerPrefix::Tiebreakers::Tiebreaker


class Ospf::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::FastReroute::PerPrefix::CandidateInterfaces : public ydk::Entity
{
    public:
        CandidateInterfaces();
        ~CandidateInterfaces();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class CandidateInterface; //type: Ospf::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::FastReroute::PerPrefix::CandidateInterfaces::CandidateInterface

        ydk::YList candidate_interface;
        
}; // Ospf::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::FastReroute::PerPrefix::CandidateInterfaces


class Ospf::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::FastReroute::PerPrefix::CandidateInterfaces::CandidateInterface : public ydk::Entity
{
    public:
        CandidateInterface();
        ~CandidateInterface();

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

}; // Ospf::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::FastReroute::PerPrefix::CandidateInterfaces::CandidateInterface


class Ospf::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::FastReroute::PerPrefix::ExcludeInterfaces : public ydk::Entity
{
    public:
        ExcludeInterfaces();
        ~ExcludeInterfaces();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class ExcludeInterface; //type: Ospf::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::FastReroute::PerPrefix::ExcludeInterfaces::ExcludeInterface

        ydk::YList exclude_interface;
        
}; // Ospf::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::FastReroute::PerPrefix::ExcludeInterfaces


class Ospf::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::FastReroute::PerPrefix::ExcludeInterfaces::ExcludeInterface : public ydk::Entity
{
    public:
        ExcludeInterface();
        ~ExcludeInterface();

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

}; // Ospf::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::FastReroute::PerPrefix::ExcludeInterfaces::ExcludeInterface


class Ospf::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::CostFallback : public ydk::Entity
{
    public:
        CostFallback();
        ~CostFallback();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf cost; //type: uint32
        ydk::YLeaf threshold; //type: uint32

}; // Ospf::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::CostFallback


class Ospf::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::AreaRanges : public ydk::Entity
{
    public:
        AreaRanges();
        ~AreaRanges();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class AreaRange; //type: Ospf::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::AreaRanges::AreaRange

        ydk::YList area_range;
        
}; // Ospf::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::AreaRanges


class Ospf::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::AreaRanges::AreaRange : public ydk::Entity
{
    public:
        AreaRange();
        ~AreaRange();

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
        ydk::YLeaf netmask; //type: string
        ydk::YLeaf not_advertise; //type: boolean

}; // Ospf::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::AreaRanges::AreaRange


class Ospf::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::Nssa : public ydk::Entity
{
    public:
        Nssa();
        ~Nssa();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf no_redistribution; //type: boolean
        ydk::YLeaf default_info_originate; //type: boolean
        ydk::YLeaf no_summary; //type: boolean
        ydk::YLeaf nssa_def_metric; //type: uint32
        ydk::YLeaf metric_type; //type: OspfLinkStateMetric

}; // Ospf::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::Nssa


class Ospf::Processes::Process::DefaultVrf::AreaAddresses::AreaAreaId : public ydk::Entity
{
    public:
        AreaAreaId();
        ~AreaAreaId();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf area_id; //type: uint32
        ydk::YLeaf route_policy_in; //type: string
        ydk::YLeaf default_cost; //type: uint32
        ydk::YLeaf route_policy_out; //type: string
        ydk::YLeaf stub; //type: boolean
        ydk::YLeaf type7_translate_always; //type: boolean
        ydk::YLeaf mpls_traffic_eng; //type: empty
        ydk::YLeaf external_out; //type: boolean
        ydk::YLeaf summary_in; //type: boolean
        ydk::YLeaf segment_routing; //type: OspfSegmentRouting
        ydk::YLeaf running; //type: empty
        class VirtualLinkScopes; //type: Ospf::Processes::Process::DefaultVrf::AreaAddresses::AreaAreaId::VirtualLinkScopes
        class ShamLinkScopes; //type: Ospf::Processes::Process::DefaultVrf::AreaAddresses::AreaAreaId::ShamLinkScopes
        class AreaScope; //type: Ospf::Processes::Process::DefaultVrf::AreaAddresses::AreaAreaId::AreaScope
        class NameScopes; //type: Ospf::Processes::Process::DefaultVrf::AreaAddresses::AreaAreaId::NameScopes
        class MultiAreaInterfaceScopes; //type: Ospf::Processes::Process::DefaultVrf::AreaAddresses::AreaAreaId::MultiAreaInterfaceScopes
        class AreaRanges; //type: Ospf::Processes::Process::DefaultVrf::AreaAddresses::AreaAreaId::AreaRanges
        class Nssa; //type: Ospf::Processes::Process::DefaultVrf::AreaAddresses::AreaAreaId::Nssa

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_ospf_cfg::Ospf::Processes::Process::DefaultVrf::AreaAddresses::AreaAreaId::VirtualLinkScopes> virtual_link_scopes;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_ospf_cfg::Ospf::Processes::Process::DefaultVrf::AreaAddresses::AreaAreaId::ShamLinkScopes> sham_link_scopes;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_ospf_cfg::Ospf::Processes::Process::DefaultVrf::AreaAddresses::AreaAreaId::AreaScope> area_scope;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_ospf_cfg::Ospf::Processes::Process::DefaultVrf::AreaAddresses::AreaAreaId::NameScopes> name_scopes;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_ospf_cfg::Ospf::Processes::Process::DefaultVrf::AreaAddresses::AreaAreaId::MultiAreaInterfaceScopes> multi_area_interface_scopes;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_ospf_cfg::Ospf::Processes::Process::DefaultVrf::AreaAddresses::AreaAreaId::AreaRanges> area_ranges;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_ospf_cfg::Ospf::Processes::Process::DefaultVrf::AreaAddresses::AreaAreaId::Nssa> nssa;
        
}; // Ospf::Processes::Process::DefaultVrf::AreaAddresses::AreaAreaId


class Ospf::Processes::Process::DefaultVrf::AreaAddresses::AreaAreaId::VirtualLinkScopes : public ydk::Entity
{
    public:
        VirtualLinkScopes();
        ~VirtualLinkScopes();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class VirtualLinkScope; //type: Ospf::Processes::Process::DefaultVrf::AreaAddresses::AreaAreaId::VirtualLinkScopes::VirtualLinkScope

        ydk::YList virtual_link_scope;
        
}; // Ospf::Processes::Process::DefaultVrf::AreaAddresses::AreaAreaId::VirtualLinkScopes


class Ospf::Processes::Process::DefaultVrf::AreaAddresses::AreaAreaId::VirtualLinkScopes::VirtualLinkScope : public ydk::Entity
{
    public:
        VirtualLinkScope();
        ~VirtualLinkScope();

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
        ydk::YLeaf hello_interval; //type: uint32
        ydk::YLeaf transmit_delay; //type: uint32
        ydk::YLeaf retransmit_interval; //type: uint32
        ydk::YLeaf running; //type: empty
        class Authentication; //type: Ospf::Processes::Process::DefaultVrf::AreaAddresses::AreaAreaId::VirtualLinkScopes::VirtualLinkScope::Authentication
        class DeadIntervalMinimal; //type: Ospf::Processes::Process::DefaultVrf::AreaAddresses::AreaAreaId::VirtualLinkScopes::VirtualLinkScope::DeadIntervalMinimal

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_ospf_cfg::Ospf::Processes::Process::DefaultVrf::AreaAddresses::AreaAreaId::VirtualLinkScopes::VirtualLinkScope::Authentication> authentication;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_ospf_cfg::Ospf::Processes::Process::DefaultVrf::AreaAddresses::AreaAreaId::VirtualLinkScopes::VirtualLinkScope::DeadIntervalMinimal> dead_interval_minimal;
        
}; // Ospf::Processes::Process::DefaultVrf::AreaAddresses::AreaAreaId::VirtualLinkScopes::VirtualLinkScope


class Ospf::Processes::Process::DefaultVrf::AreaAddresses::AreaAreaId::VirtualLinkScopes::VirtualLinkScope::Authentication : public ydk::Entity
{
    public:
        Authentication();
        ~Authentication();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf key; //type: string
        class Type; //type: Ospf::Processes::Process::DefaultVrf::AreaAddresses::AreaAreaId::VirtualLinkScopes::VirtualLinkScope::Authentication::Type
        class MessageDigestKeys; //type: Ospf::Processes::Process::DefaultVrf::AreaAddresses::AreaAreaId::VirtualLinkScopes::VirtualLinkScope::Authentication::MessageDigestKeys

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_ospf_cfg::Ospf::Processes::Process::DefaultVrf::AreaAddresses::AreaAreaId::VirtualLinkScopes::VirtualLinkScope::Authentication::Type> type;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_ospf_cfg::Ospf::Processes::Process::DefaultVrf::AreaAddresses::AreaAreaId::VirtualLinkScopes::VirtualLinkScope::Authentication::MessageDigestKeys> message_digest_keys;
        
}; // Ospf::Processes::Process::DefaultVrf::AreaAddresses::AreaAreaId::VirtualLinkScopes::VirtualLinkScope::Authentication


class Ospf::Processes::Process::DefaultVrf::AreaAddresses::AreaAreaId::VirtualLinkScopes::VirtualLinkScope::Authentication::Type : public ydk::Entity
{
    public:
        Type();
        ~Type();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf authen_type; //type: OspfAuthentication
        ydk::YLeaf keychain_authen_type; //type: OspfKeychainAuth
        ydk::YLeaf keychain_name; //type: string

}; // Ospf::Processes::Process::DefaultVrf::AreaAddresses::AreaAreaId::VirtualLinkScopes::VirtualLinkScope::Authentication::Type


class Ospf::Processes::Process::DefaultVrf::AreaAddresses::AreaAreaId::VirtualLinkScopes::VirtualLinkScope::Authentication::MessageDigestKeys : public ydk::Entity
{
    public:
        MessageDigestKeys();
        ~MessageDigestKeys();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class MessageDigestKey; //type: Ospf::Processes::Process::DefaultVrf::AreaAddresses::AreaAreaId::VirtualLinkScopes::VirtualLinkScope::Authentication::MessageDigestKeys::MessageDigestKey

        ydk::YList message_digest_key;
        
}; // Ospf::Processes::Process::DefaultVrf::AreaAddresses::AreaAreaId::VirtualLinkScopes::VirtualLinkScope::Authentication::MessageDigestKeys


class Ospf::Processes::Process::DefaultVrf::AreaAddresses::AreaAreaId::VirtualLinkScopes::VirtualLinkScope::Authentication::MessageDigestKeys::MessageDigestKey : public ydk::Entity
{
    public:
        MessageDigestKey();
        ~MessageDigestKey();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf key_id; //type: uint32
        ydk::YLeaf password; //type: string

}; // Ospf::Processes::Process::DefaultVrf::AreaAddresses::AreaAreaId::VirtualLinkScopes::VirtualLinkScope::Authentication::MessageDigestKeys::MessageDigestKey


class Ospf::Processes::Process::DefaultVrf::AreaAddresses::AreaAreaId::VirtualLinkScopes::VirtualLinkScope::DeadIntervalMinimal : public ydk::Entity
{
    public:
        DeadIntervalMinimal();
        ~DeadIntervalMinimal();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf interval; //type: uint32
        ydk::YLeaf multiplier; //type: uint32

}; // Ospf::Processes::Process::DefaultVrf::AreaAddresses::AreaAreaId::VirtualLinkScopes::VirtualLinkScope::DeadIntervalMinimal


class Ospf::Processes::Process::DefaultVrf::AreaAddresses::AreaAreaId::ShamLinkScopes : public ydk::Entity
{
    public:
        ShamLinkScopes();
        ~ShamLinkScopes();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class ShamLinkScope; //type: Ospf::Processes::Process::DefaultVrf::AreaAddresses::AreaAreaId::ShamLinkScopes::ShamLinkScope

        ydk::YList sham_link_scope;
        
}; // Ospf::Processes::Process::DefaultVrf::AreaAddresses::AreaAreaId::ShamLinkScopes


class Ospf::Processes::Process::DefaultVrf::AreaAddresses::AreaAreaId::ShamLinkScopes::ShamLinkScope : public ydk::Entity
{
    public:
        ShamLinkScope();
        ~ShamLinkScope();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf source_address; //type: string
        ydk::YLeaf destination_address; //type: string
        ydk::YLeaf source; //type: string
        ydk::YLeaf cost; //type: uint32
        ydk::YLeaf hello_interval; //type: uint32
        ydk::YLeaf transmit_delay; //type: uint32
        ydk::YLeaf retransmit_interval; //type: uint32
        ydk::YLeaf running; //type: empty
        class Authentication; //type: Ospf::Processes::Process::DefaultVrf::AreaAddresses::AreaAreaId::ShamLinkScopes::ShamLinkScope::Authentication
        class DeadIntervalMinimal; //type: Ospf::Processes::Process::DefaultVrf::AreaAddresses::AreaAreaId::ShamLinkScopes::ShamLinkScope::DeadIntervalMinimal

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_ospf_cfg::Ospf::Processes::Process::DefaultVrf::AreaAddresses::AreaAreaId::ShamLinkScopes::ShamLinkScope::Authentication> authentication;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_ospf_cfg::Ospf::Processes::Process::DefaultVrf::AreaAddresses::AreaAreaId::ShamLinkScopes::ShamLinkScope::DeadIntervalMinimal> dead_interval_minimal;
        
}; // Ospf::Processes::Process::DefaultVrf::AreaAddresses::AreaAreaId::ShamLinkScopes::ShamLinkScope


class Ospf::Processes::Process::DefaultVrf::AreaAddresses::AreaAreaId::ShamLinkScopes::ShamLinkScope::Authentication : public ydk::Entity
{
    public:
        Authentication();
        ~Authentication();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf key; //type: string
        class Type; //type: Ospf::Processes::Process::DefaultVrf::AreaAddresses::AreaAreaId::ShamLinkScopes::ShamLinkScope::Authentication::Type
        class MessageDigestKeys; //type: Ospf::Processes::Process::DefaultVrf::AreaAddresses::AreaAreaId::ShamLinkScopes::ShamLinkScope::Authentication::MessageDigestKeys

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_ospf_cfg::Ospf::Processes::Process::DefaultVrf::AreaAddresses::AreaAreaId::ShamLinkScopes::ShamLinkScope::Authentication::Type> type;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_ospf_cfg::Ospf::Processes::Process::DefaultVrf::AreaAddresses::AreaAreaId::ShamLinkScopes::ShamLinkScope::Authentication::MessageDigestKeys> message_digest_keys;
        
}; // Ospf::Processes::Process::DefaultVrf::AreaAddresses::AreaAreaId::ShamLinkScopes::ShamLinkScope::Authentication


class Ospf::Processes::Process::DefaultVrf::AreaAddresses::AreaAreaId::ShamLinkScopes::ShamLinkScope::Authentication::Type : public ydk::Entity
{
    public:
        Type();
        ~Type();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf authen_type; //type: OspfAuthentication
        ydk::YLeaf keychain_authen_type; //type: OspfKeychainAuth
        ydk::YLeaf keychain_name; //type: string

}; // Ospf::Processes::Process::DefaultVrf::AreaAddresses::AreaAreaId::ShamLinkScopes::ShamLinkScope::Authentication::Type


class Ospf::Processes::Process::DefaultVrf::AreaAddresses::AreaAreaId::ShamLinkScopes::ShamLinkScope::Authentication::MessageDigestKeys : public ydk::Entity
{
    public:
        MessageDigestKeys();
        ~MessageDigestKeys();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class MessageDigestKey; //type: Ospf::Processes::Process::DefaultVrf::AreaAddresses::AreaAreaId::ShamLinkScopes::ShamLinkScope::Authentication::MessageDigestKeys::MessageDigestKey

        ydk::YList message_digest_key;
        
}; // Ospf::Processes::Process::DefaultVrf::AreaAddresses::AreaAreaId::ShamLinkScopes::ShamLinkScope::Authentication::MessageDigestKeys


class Ospf::Processes::Process::DefaultVrf::AreaAddresses::AreaAreaId::ShamLinkScopes::ShamLinkScope::Authentication::MessageDigestKeys::MessageDigestKey : public ydk::Entity
{
    public:
        MessageDigestKey();
        ~MessageDigestKey();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf key_id; //type: uint32
        ydk::YLeaf password; //type: string

}; // Ospf::Processes::Process::DefaultVrf::AreaAddresses::AreaAreaId::ShamLinkScopes::ShamLinkScope::Authentication::MessageDigestKeys::MessageDigestKey


class Ospf::Processes::Process::DefaultVrf::AreaAddresses::AreaAreaId::ShamLinkScopes::ShamLinkScope::DeadIntervalMinimal : public ydk::Entity
{
    public:
        DeadIntervalMinimal();
        ~DeadIntervalMinimal();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf interval; //type: uint32
        ydk::YLeaf multiplier; //type: uint32

}; // Ospf::Processes::Process::DefaultVrf::AreaAddresses::AreaAreaId::ShamLinkScopes::ShamLinkScope::DeadIntervalMinimal


class Ospf::Processes::Process::DefaultVrf::AreaAddresses::AreaAreaId::AreaScope : public ydk::Entity
{
    public:
        AreaScope();
        ~AreaScope();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf cost; //type: uint32
        ydk::YLeaf prefix_suppression_primary; //type: boolean
        ydk::YLeaf mtu_ignore; //type: boolean
        ydk::YLeaf ldp_sync_igp_shortcuts; //type: boolean
        ydk::YLeaf ldp_auto_config; //type: empty
        ydk::YLeaf network_type; //type: OspfNetwork
        ydk::YLeaf hello_interval; //type: uint32
        ydk::YLeaf loopback_stub_network; //type: boolean
        ydk::YLeaf prefix_suppression_secondary; //type: boolean
        ydk::YLeaf demand_circuit; //type: boolean
        ydk::YLeaf passive; //type: boolean
        ydk::YLeaf transmit_delay; //type: uint32
        ydk::YLeaf packet_size; //type: uint32
        ydk::YLeaf ldp_sync; //type: boolean
        ydk::YLeaf database_filter; //type: boolean
        ydk::YLeaf link_down_fast_detect; //type: boolean
        ydk::YLeaf segment_routing_forwarding; //type: OspfSegmentRoutingForwarding
        ydk::YLeaf retransmit_interval; //type: uint32
        ydk::YLeaf priority; //type: uint32
        ydk::YLeaf flood_reduction; //type: boolean
        class DistributeList; //type: Ospf::Processes::Process::DefaultVrf::AreaAddresses::AreaAreaId::AreaScope::DistributeList
        class Bfd; //type: Ospf::Processes::Process::DefaultVrf::AreaAddresses::AreaAreaId::AreaScope::Bfd
        class Authentication; //type: Ospf::Processes::Process::DefaultVrf::AreaAddresses::AreaAreaId::AreaScope::Authentication
        class Security; //type: Ospf::Processes::Process::DefaultVrf::AreaAddresses::AreaAreaId::AreaScope::Security
        class DeadIntervalMinimal; //type: Ospf::Processes::Process::DefaultVrf::AreaAddresses::AreaAreaId::AreaScope::DeadIntervalMinimal
        class FastReroute; //type: Ospf::Processes::Process::DefaultVrf::AreaAddresses::AreaAreaId::AreaScope::FastReroute
        class CostFallback; //type: Ospf::Processes::Process::DefaultVrf::AreaAddresses::AreaAreaId::AreaScope::CostFallback

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_ospf_cfg::Ospf::Processes::Process::DefaultVrf::AreaAddresses::AreaAreaId::AreaScope::DistributeList> distribute_list; // presence node
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_ospf_cfg::Ospf::Processes::Process::DefaultVrf::AreaAddresses::AreaAreaId::AreaScope::Bfd> bfd;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_ospf_cfg::Ospf::Processes::Process::DefaultVrf::AreaAddresses::AreaAreaId::AreaScope::Authentication> authentication;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_ospf_cfg::Ospf::Processes::Process::DefaultVrf::AreaAddresses::AreaAreaId::AreaScope::Security> security;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_ospf_cfg::Ospf::Processes::Process::DefaultVrf::AreaAddresses::AreaAreaId::AreaScope::DeadIntervalMinimal> dead_interval_minimal;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_ospf_cfg::Ospf::Processes::Process::DefaultVrf::AreaAddresses::AreaAreaId::AreaScope::FastReroute> fast_reroute;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_ospf_cfg::Ospf::Processes::Process::DefaultVrf::AreaAddresses::AreaAreaId::AreaScope::CostFallback> cost_fallback;
        
}; // Ospf::Processes::Process::DefaultVrf::AreaAddresses::AreaAreaId::AreaScope


class Ospf::Processes::Process::DefaultVrf::AreaAddresses::AreaAreaId::AreaScope::DistributeList : public ydk::Entity
{
    public:
        DistributeList();
        ~DistributeList();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf access_list_name; //type: string
        ydk::YLeaf route_policy_name; //type: string

}; // Ospf::Processes::Process::DefaultVrf::AreaAddresses::AreaAreaId::AreaScope::DistributeList


class Ospf::Processes::Process::DefaultVrf::AreaAddresses::AreaAreaId::AreaScope::Bfd : public ydk::Entity
{
    public:
        Bfd();
        ~Bfd();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf interval; //type: uint32
        ydk::YLeaf detection_multiplier; //type: uint32
        ydk::YLeaf fast_detect_mode; //type: BfdEnableMode

}; // Ospf::Processes::Process::DefaultVrf::AreaAddresses::AreaAreaId::AreaScope::Bfd


class Ospf::Processes::Process::DefaultVrf::AreaAddresses::AreaAreaId::AreaScope::Authentication : public ydk::Entity
{
    public:
        Authentication();
        ~Authentication();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf key; //type: string
        class Type; //type: Ospf::Processes::Process::DefaultVrf::AreaAddresses::AreaAreaId::AreaScope::Authentication::Type
        class MessageDigestKeys; //type: Ospf::Processes::Process::DefaultVrf::AreaAddresses::AreaAreaId::AreaScope::Authentication::MessageDigestKeys

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_ospf_cfg::Ospf::Processes::Process::DefaultVrf::AreaAddresses::AreaAreaId::AreaScope::Authentication::Type> type;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_ospf_cfg::Ospf::Processes::Process::DefaultVrf::AreaAddresses::AreaAreaId::AreaScope::Authentication::MessageDigestKeys> message_digest_keys;
        
}; // Ospf::Processes::Process::DefaultVrf::AreaAddresses::AreaAreaId::AreaScope::Authentication


class Ospf::Processes::Process::DefaultVrf::AreaAddresses::AreaAreaId::AreaScope::Authentication::Type : public ydk::Entity
{
    public:
        Type();
        ~Type();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf authen_type; //type: OspfAuthentication
        ydk::YLeaf keychain_authen_type; //type: OspfKeychainAuth
        ydk::YLeaf keychain_name; //type: string

}; // Ospf::Processes::Process::DefaultVrf::AreaAddresses::AreaAreaId::AreaScope::Authentication::Type


class Ospf::Processes::Process::DefaultVrf::AreaAddresses::AreaAreaId::AreaScope::Authentication::MessageDigestKeys : public ydk::Entity
{
    public:
        MessageDigestKeys();
        ~MessageDigestKeys();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class MessageDigestKey; //type: Ospf::Processes::Process::DefaultVrf::AreaAddresses::AreaAreaId::AreaScope::Authentication::MessageDigestKeys::MessageDigestKey

        ydk::YList message_digest_key;
        
}; // Ospf::Processes::Process::DefaultVrf::AreaAddresses::AreaAreaId::AreaScope::Authentication::MessageDigestKeys


class Ospf::Processes::Process::DefaultVrf::AreaAddresses::AreaAreaId::AreaScope::Authentication::MessageDigestKeys::MessageDigestKey : public ydk::Entity
{
    public:
        MessageDigestKey();
        ~MessageDigestKey();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf key_id; //type: uint32
        ydk::YLeaf password; //type: string

}; // Ospf::Processes::Process::DefaultVrf::AreaAddresses::AreaAreaId::AreaScope::Authentication::MessageDigestKeys::MessageDigestKey


class Ospf::Processes::Process::DefaultVrf::AreaAddresses::AreaAreaId::AreaScope::Security : public ydk::Entity
{
    public:
        Security();
        ~Security();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Ttl; //type: Ospf::Processes::Process::DefaultVrf::AreaAddresses::AreaAreaId::AreaScope::Security::Ttl

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_ospf_cfg::Ospf::Processes::Process::DefaultVrf::AreaAddresses::AreaAreaId::AreaScope::Security::Ttl> ttl;
        
}; // Ospf::Processes::Process::DefaultVrf::AreaAddresses::AreaAreaId::AreaScope::Security


class Ospf::Processes::Process::DefaultVrf::AreaAddresses::AreaAreaId::AreaScope::Security::Ttl : public ydk::Entity
{
    public:
        Ttl();
        ~Ttl();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf enable; //type: boolean
        ydk::YLeaf hop_count; //type: uint32

}; // Ospf::Processes::Process::DefaultVrf::AreaAddresses::AreaAreaId::AreaScope::Security::Ttl


class Ospf::Processes::Process::DefaultVrf::AreaAddresses::AreaAreaId::AreaScope::DeadIntervalMinimal : public ydk::Entity
{
    public:
        DeadIntervalMinimal();
        ~DeadIntervalMinimal();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf interval; //type: uint32
        ydk::YLeaf multiplier; //type: uint32

}; // Ospf::Processes::Process::DefaultVrf::AreaAddresses::AreaAreaId::AreaScope::DeadIntervalMinimal


class Ospf::Processes::Process::DefaultVrf::AreaAddresses::AreaAreaId::AreaScope::FastReroute : public ydk::Entity
{
    public:
        FastReroute();
        ~FastReroute();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf fast_reroute_enable; //type: OspfFastReroute
        class PerLink; //type: Ospf::Processes::Process::DefaultVrf::AreaAddresses::AreaAreaId::AreaScope::FastReroute::PerLink
        class PerPrefix; //type: Ospf::Processes::Process::DefaultVrf::AreaAddresses::AreaAreaId::AreaScope::FastReroute::PerPrefix

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_ospf_cfg::Ospf::Processes::Process::DefaultVrf::AreaAddresses::AreaAreaId::AreaScope::FastReroute::PerLink> per_link;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_ospf_cfg::Ospf::Processes::Process::DefaultVrf::AreaAddresses::AreaAreaId::AreaScope::FastReroute::PerPrefix> per_prefix;
        
}; // Ospf::Processes::Process::DefaultVrf::AreaAddresses::AreaAreaId::AreaScope::FastReroute


class Ospf::Processes::Process::DefaultVrf::AreaAddresses::AreaAreaId::AreaScope::FastReroute::PerLink : public ydk::Entity
{
    public:
        PerLink();
        ~PerLink();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf fast_reroute_use_candidate_only; //type: boolean
        class CandidateInterfaces; //type: Ospf::Processes::Process::DefaultVrf::AreaAddresses::AreaAreaId::AreaScope::FastReroute::PerLink::CandidateInterfaces
        class ExcludeInterfaces; //type: Ospf::Processes::Process::DefaultVrf::AreaAddresses::AreaAreaId::AreaScope::FastReroute::PerLink::ExcludeInterfaces

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_ospf_cfg::Ospf::Processes::Process::DefaultVrf::AreaAddresses::AreaAreaId::AreaScope::FastReroute::PerLink::CandidateInterfaces> candidate_interfaces;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_ospf_cfg::Ospf::Processes::Process::DefaultVrf::AreaAddresses::AreaAreaId::AreaScope::FastReroute::PerLink::ExcludeInterfaces> exclude_interfaces;
        
}; // Ospf::Processes::Process::DefaultVrf::AreaAddresses::AreaAreaId::AreaScope::FastReroute::PerLink


class Ospf::Processes::Process::DefaultVrf::AreaAddresses::AreaAreaId::AreaScope::FastReroute::PerLink::CandidateInterfaces : public ydk::Entity
{
    public:
        CandidateInterfaces();
        ~CandidateInterfaces();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class CandidateInterface; //type: Ospf::Processes::Process::DefaultVrf::AreaAddresses::AreaAreaId::AreaScope::FastReroute::PerLink::CandidateInterfaces::CandidateInterface

        ydk::YList candidate_interface;
        
}; // Ospf::Processes::Process::DefaultVrf::AreaAddresses::AreaAreaId::AreaScope::FastReroute::PerLink::CandidateInterfaces


class Ospf::Processes::Process::DefaultVrf::AreaAddresses::AreaAreaId::AreaScope::FastReroute::PerLink::CandidateInterfaces::CandidateInterface : public ydk::Entity
{
    public:
        CandidateInterface();
        ~CandidateInterface();

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

}; // Ospf::Processes::Process::DefaultVrf::AreaAddresses::AreaAreaId::AreaScope::FastReroute::PerLink::CandidateInterfaces::CandidateInterface


class Ospf::Processes::Process::DefaultVrf::AreaAddresses::AreaAreaId::AreaScope::FastReroute::PerLink::ExcludeInterfaces : public ydk::Entity
{
    public:
        ExcludeInterfaces();
        ~ExcludeInterfaces();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class ExcludeInterface; //type: Ospf::Processes::Process::DefaultVrf::AreaAddresses::AreaAreaId::AreaScope::FastReroute::PerLink::ExcludeInterfaces::ExcludeInterface

        ydk::YList exclude_interface;
        
}; // Ospf::Processes::Process::DefaultVrf::AreaAddresses::AreaAreaId::AreaScope::FastReroute::PerLink::ExcludeInterfaces


class Ospf::Processes::Process::DefaultVrf::AreaAddresses::AreaAreaId::AreaScope::FastReroute::PerLink::ExcludeInterfaces::ExcludeInterface : public ydk::Entity
{
    public:
        ExcludeInterface();
        ~ExcludeInterface();

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

}; // Ospf::Processes::Process::DefaultVrf::AreaAddresses::AreaAreaId::AreaScope::FastReroute::PerLink::ExcludeInterfaces::ExcludeInterface


class Ospf::Processes::Process::DefaultVrf::AreaAddresses::AreaAreaId::AreaScope::FastReroute::PerPrefix : public ydk::Entity
{
    public:
        PerPrefix();
        ~PerPrefix();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf topology_independent_lfa; //type: boolean
        ydk::YLeaf fast_reroute_use_candidate_only; //type: boolean
        class RemoteLfa; //type: Ospf::Processes::Process::DefaultVrf::AreaAddresses::AreaAreaId::AreaScope::FastReroute::PerPrefix::RemoteLfa
        class Tiebreakers; //type: Ospf::Processes::Process::DefaultVrf::AreaAddresses::AreaAreaId::AreaScope::FastReroute::PerPrefix::Tiebreakers
        class CandidateInterfaces; //type: Ospf::Processes::Process::DefaultVrf::AreaAddresses::AreaAreaId::AreaScope::FastReroute::PerPrefix::CandidateInterfaces
        class ExcludeInterfaces; //type: Ospf::Processes::Process::DefaultVrf::AreaAddresses::AreaAreaId::AreaScope::FastReroute::PerPrefix::ExcludeInterfaces

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_ospf_cfg::Ospf::Processes::Process::DefaultVrf::AreaAddresses::AreaAreaId::AreaScope::FastReroute::PerPrefix::RemoteLfa> remote_lfa;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_ospf_cfg::Ospf::Processes::Process::DefaultVrf::AreaAddresses::AreaAreaId::AreaScope::FastReroute::PerPrefix::Tiebreakers> tiebreakers;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_ospf_cfg::Ospf::Processes::Process::DefaultVrf::AreaAddresses::AreaAreaId::AreaScope::FastReroute::PerPrefix::CandidateInterfaces> candidate_interfaces;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_ospf_cfg::Ospf::Processes::Process::DefaultVrf::AreaAddresses::AreaAreaId::AreaScope::FastReroute::PerPrefix::ExcludeInterfaces> exclude_interfaces;
        
}; // Ospf::Processes::Process::DefaultVrf::AreaAddresses::AreaAreaId::AreaScope::FastReroute::PerPrefix


class Ospf::Processes::Process::DefaultVrf::AreaAddresses::AreaAreaId::AreaScope::FastReroute::PerPrefix::RemoteLfa : public ydk::Entity
{
    public:
        RemoteLfa();
        ~RemoteLfa();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf tunnel; //type: OspfFrrRlfaTunnel
        ydk::YLeaf maximum_cost; //type: uint32

}; // Ospf::Processes::Process::DefaultVrf::AreaAddresses::AreaAreaId::AreaScope::FastReroute::PerPrefix::RemoteLfa


class Ospf::Processes::Process::DefaultVrf::AreaAddresses::AreaAreaId::AreaScope::FastReroute::PerPrefix::Tiebreakers : public ydk::Entity
{
    public:
        Tiebreakers();
        ~Tiebreakers();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Tiebreaker; //type: Ospf::Processes::Process::DefaultVrf::AreaAddresses::AreaAreaId::AreaScope::FastReroute::PerPrefix::Tiebreakers::Tiebreaker

        ydk::YList tiebreaker;
        
}; // Ospf::Processes::Process::DefaultVrf::AreaAddresses::AreaAreaId::AreaScope::FastReroute::PerPrefix::Tiebreakers


class Ospf::Processes::Process::DefaultVrf::AreaAddresses::AreaAreaId::AreaScope::FastReroute::PerPrefix::Tiebreakers::Tiebreaker : public ydk::Entity
{
    public:
        Tiebreaker();
        ~Tiebreaker();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf tiebreaker_type; //type: OspfFastRerouteTiebreakersIntf
        ydk::YLeaf tiebreaker_index; //type: uint32

}; // Ospf::Processes::Process::DefaultVrf::AreaAddresses::AreaAreaId::AreaScope::FastReroute::PerPrefix::Tiebreakers::Tiebreaker


class Ospf::Processes::Process::DefaultVrf::AreaAddresses::AreaAreaId::AreaScope::FastReroute::PerPrefix::CandidateInterfaces : public ydk::Entity
{
    public:
        CandidateInterfaces();
        ~CandidateInterfaces();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class CandidateInterface; //type: Ospf::Processes::Process::DefaultVrf::AreaAddresses::AreaAreaId::AreaScope::FastReroute::PerPrefix::CandidateInterfaces::CandidateInterface

        ydk::YList candidate_interface;
        
}; // Ospf::Processes::Process::DefaultVrf::AreaAddresses::AreaAreaId::AreaScope::FastReroute::PerPrefix::CandidateInterfaces


class Ospf::Processes::Process::DefaultVrf::AreaAddresses::AreaAreaId::AreaScope::FastReroute::PerPrefix::CandidateInterfaces::CandidateInterface : public ydk::Entity
{
    public:
        CandidateInterface();
        ~CandidateInterface();

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

}; // Ospf::Processes::Process::DefaultVrf::AreaAddresses::AreaAreaId::AreaScope::FastReroute::PerPrefix::CandidateInterfaces::CandidateInterface


class Ospf::Processes::Process::DefaultVrf::AreaAddresses::AreaAreaId::AreaScope::FastReroute::PerPrefix::ExcludeInterfaces : public ydk::Entity
{
    public:
        ExcludeInterfaces();
        ~ExcludeInterfaces();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class ExcludeInterface; //type: Ospf::Processes::Process::DefaultVrf::AreaAddresses::AreaAreaId::AreaScope::FastReroute::PerPrefix::ExcludeInterfaces::ExcludeInterface

        ydk::YList exclude_interface;
        
}; // Ospf::Processes::Process::DefaultVrf::AreaAddresses::AreaAreaId::AreaScope::FastReroute::PerPrefix::ExcludeInterfaces


class Ospf::Processes::Process::DefaultVrf::AreaAddresses::AreaAreaId::AreaScope::FastReroute::PerPrefix::ExcludeInterfaces::ExcludeInterface : public ydk::Entity
{
    public:
        ExcludeInterface();
        ~ExcludeInterface();

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

}; // Ospf::Processes::Process::DefaultVrf::AreaAddresses::AreaAreaId::AreaScope::FastReroute::PerPrefix::ExcludeInterfaces::ExcludeInterface


class Ospf::Processes::Process::DefaultVrf::AreaAddresses::AreaAreaId::AreaScope::CostFallback : public ydk::Entity
{
    public:
        CostFallback();
        ~CostFallback();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf cost; //type: uint32
        ydk::YLeaf threshold; //type: uint32

}; // Ospf::Processes::Process::DefaultVrf::AreaAddresses::AreaAreaId::AreaScope::CostFallback


class Ospf::Processes::Process::DefaultVrf::AreaAddresses::AreaAreaId::NameScopes : public ydk::Entity
{
    public:
        NameScopes();
        ~NameScopes();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class NameScope; //type: Ospf::Processes::Process::DefaultVrf::AreaAddresses::AreaAreaId::NameScopes::NameScope

        ydk::YList name_scope;
        
}; // Ospf::Processes::Process::DefaultVrf::AreaAddresses::AreaAreaId::NameScopes


class Ospf::Processes::Process::DefaultVrf::AreaAddresses::AreaAreaId::NameScopes::NameScope : public ydk::Entity
{
    public:
        NameScope();
        ~NameScope();

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
        ydk::YLeaf cost; //type: uint32
        ydk::YLeaf prefix_suppression_primary; //type: boolean
        ydk::YLeaf mtu_ignore; //type: boolean
        ydk::YLeaf ldp_sync_igp_shortcuts; //type: boolean
        ydk::YLeaf ldp_auto_config; //type: empty
        ydk::YLeaf network_type; //type: OspfNetwork
        ydk::YLeaf hello_interval; //type: uint32
        ydk::YLeaf loopback_stub_network; //type: boolean
        ydk::YLeaf prefix_suppression_secondary; //type: boolean
        ydk::YLeaf demand_circuit; //type: boolean
        ydk::YLeaf passive; //type: boolean
        ydk::YLeaf transmit_delay; //type: uint32
        ydk::YLeaf packet_size; //type: uint32
        ydk::YLeaf ldp_sync; //type: boolean
        ydk::YLeaf database_filter; //type: boolean
        ydk::YLeaf link_down_fast_detect; //type: boolean
        ydk::YLeaf segment_routing_forwarding; //type: OspfSegmentRoutingForwarding
        ydk::YLeaf retransmit_interval; //type: uint32
        ydk::YLeaf priority; //type: uint32
        ydk::YLeaf flood_reduction; //type: boolean
        ydk::YLeaf running; //type: empty
        class PrefixSid; //type: Ospf::Processes::Process::DefaultVrf::AreaAddresses::AreaAreaId::NameScopes::NameScope::PrefixSid
        class PrefixSidStrict; //type: Ospf::Processes::Process::DefaultVrf::AreaAddresses::AreaAreaId::NameScopes::NameScope::PrefixSidStrict
        class DistributeList; //type: Ospf::Processes::Process::DefaultVrf::AreaAddresses::AreaAreaId::NameScopes::NameScope::DistributeList
        class Bfd; //type: Ospf::Processes::Process::DefaultVrf::AreaAddresses::AreaAreaId::NameScopes::NameScope::Bfd
        class Authentication; //type: Ospf::Processes::Process::DefaultVrf::AreaAddresses::AreaAreaId::NameScopes::NameScope::Authentication
        class Security; //type: Ospf::Processes::Process::DefaultVrf::AreaAddresses::AreaAreaId::NameScopes::NameScope::Security
        class Neighbors; //type: Ospf::Processes::Process::DefaultVrf::AreaAddresses::AreaAreaId::NameScopes::NameScope::Neighbors
        class DeadIntervalMinimal; //type: Ospf::Processes::Process::DefaultVrf::AreaAddresses::AreaAreaId::NameScopes::NameScope::DeadIntervalMinimal
        class FastReroute; //type: Ospf::Processes::Process::DefaultVrf::AreaAddresses::AreaAreaId::NameScopes::NameScope::FastReroute
        class CostFallback; //type: Ospf::Processes::Process::DefaultVrf::AreaAddresses::AreaAreaId::NameScopes::NameScope::CostFallback

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_ospf_cfg::Ospf::Processes::Process::DefaultVrf::AreaAddresses::AreaAreaId::NameScopes::NameScope::PrefixSid> prefix_sid; // presence node
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_ospf_cfg::Ospf::Processes::Process::DefaultVrf::AreaAddresses::AreaAreaId::NameScopes::NameScope::PrefixSidStrict> prefix_sid_strict; // presence node
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_ospf_cfg::Ospf::Processes::Process::DefaultVrf::AreaAddresses::AreaAreaId::NameScopes::NameScope::DistributeList> distribute_list; // presence node
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_ospf_cfg::Ospf::Processes::Process::DefaultVrf::AreaAddresses::AreaAreaId::NameScopes::NameScope::Bfd> bfd;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_ospf_cfg::Ospf::Processes::Process::DefaultVrf::AreaAddresses::AreaAreaId::NameScopes::NameScope::Authentication> authentication;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_ospf_cfg::Ospf::Processes::Process::DefaultVrf::AreaAddresses::AreaAreaId::NameScopes::NameScope::Security> security;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_ospf_cfg::Ospf::Processes::Process::DefaultVrf::AreaAddresses::AreaAreaId::NameScopes::NameScope::Neighbors> neighbors;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_ospf_cfg::Ospf::Processes::Process::DefaultVrf::AreaAddresses::AreaAreaId::NameScopes::NameScope::DeadIntervalMinimal> dead_interval_minimal;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_ospf_cfg::Ospf::Processes::Process::DefaultVrf::AreaAddresses::AreaAreaId::NameScopes::NameScope::FastReroute> fast_reroute;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_ospf_cfg::Ospf::Processes::Process::DefaultVrf::AreaAddresses::AreaAreaId::NameScopes::NameScope::CostFallback> cost_fallback;
        
}; // Ospf::Processes::Process::DefaultVrf::AreaAddresses::AreaAreaId::NameScopes::NameScope


class Ospf::Processes::Process::DefaultVrf::AreaAddresses::AreaAreaId::NameScopes::NameScope::PrefixSid : public ydk::Entity
{
    public:
        PrefixSid();
        ~PrefixSid();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf sid_value; //type: uint32
        ydk::YLeaf explicit_null; //type: boolean
        ydk::YLeaf type; //type: OspfSid
        ydk::YLeaf n_flag_clear; //type: boolean

}; // Ospf::Processes::Process::DefaultVrf::AreaAddresses::AreaAreaId::NameScopes::NameScope::PrefixSid


class Ospf::Processes::Process::DefaultVrf::AreaAddresses::AreaAreaId::NameScopes::NameScope::PrefixSidStrict : public ydk::Entity
{
    public:
        PrefixSidStrict();
        ~PrefixSidStrict();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf sid_value; //type: uint32
        ydk::YLeaf explicit_null; //type: boolean
        ydk::YLeaf type; //type: OspfSid
        ydk::YLeaf n_flag_clear; //type: boolean

}; // Ospf::Processes::Process::DefaultVrf::AreaAddresses::AreaAreaId::NameScopes::NameScope::PrefixSidStrict


class Ospf::Processes::Process::DefaultVrf::AreaAddresses::AreaAreaId::NameScopes::NameScope::DistributeList : public ydk::Entity
{
    public:
        DistributeList();
        ~DistributeList();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf access_list_name; //type: string
        ydk::YLeaf route_policy_name; //type: string

}; // Ospf::Processes::Process::DefaultVrf::AreaAddresses::AreaAreaId::NameScopes::NameScope::DistributeList


class Ospf::Processes::Process::DefaultVrf::AreaAddresses::AreaAreaId::NameScopes::NameScope::Bfd : public ydk::Entity
{
    public:
        Bfd();
        ~Bfd();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf interval; //type: uint32
        ydk::YLeaf detection_multiplier; //type: uint32
        ydk::YLeaf fast_detect_mode; //type: BfdEnableMode

}; // Ospf::Processes::Process::DefaultVrf::AreaAddresses::AreaAreaId::NameScopes::NameScope::Bfd


class Ospf::Processes::Process::DefaultVrf::AreaAddresses::AreaAreaId::NameScopes::NameScope::Authentication : public ydk::Entity
{
    public:
        Authentication();
        ~Authentication();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf key; //type: string
        class Type; //type: Ospf::Processes::Process::DefaultVrf::AreaAddresses::AreaAreaId::NameScopes::NameScope::Authentication::Type
        class MessageDigestKeys; //type: Ospf::Processes::Process::DefaultVrf::AreaAddresses::AreaAreaId::NameScopes::NameScope::Authentication::MessageDigestKeys

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_ospf_cfg::Ospf::Processes::Process::DefaultVrf::AreaAddresses::AreaAreaId::NameScopes::NameScope::Authentication::Type> type;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_ospf_cfg::Ospf::Processes::Process::DefaultVrf::AreaAddresses::AreaAreaId::NameScopes::NameScope::Authentication::MessageDigestKeys> message_digest_keys;
        
}; // Ospf::Processes::Process::DefaultVrf::AreaAddresses::AreaAreaId::NameScopes::NameScope::Authentication


class Ospf::Processes::Process::DefaultVrf::AreaAddresses::AreaAreaId::NameScopes::NameScope::Authentication::Type : public ydk::Entity
{
    public:
        Type();
        ~Type();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf authen_type; //type: OspfAuthentication
        ydk::YLeaf keychain_authen_type; //type: OspfKeychainAuth
        ydk::YLeaf keychain_name; //type: string

}; // Ospf::Processes::Process::DefaultVrf::AreaAddresses::AreaAreaId::NameScopes::NameScope::Authentication::Type


class Ospf::Processes::Process::DefaultVrf::AreaAddresses::AreaAreaId::NameScopes::NameScope::Authentication::MessageDigestKeys : public ydk::Entity
{
    public:
        MessageDigestKeys();
        ~MessageDigestKeys();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class MessageDigestKey; //type: Ospf::Processes::Process::DefaultVrf::AreaAddresses::AreaAreaId::NameScopes::NameScope::Authentication::MessageDigestKeys::MessageDigestKey

        ydk::YList message_digest_key;
        
}; // Ospf::Processes::Process::DefaultVrf::AreaAddresses::AreaAreaId::NameScopes::NameScope::Authentication::MessageDigestKeys


class Ospf::Processes::Process::DefaultVrf::AreaAddresses::AreaAreaId::NameScopes::NameScope::Authentication::MessageDigestKeys::MessageDigestKey : public ydk::Entity
{
    public:
        MessageDigestKey();
        ~MessageDigestKey();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf key_id; //type: uint32
        ydk::YLeaf password; //type: string

}; // Ospf::Processes::Process::DefaultVrf::AreaAddresses::AreaAreaId::NameScopes::NameScope::Authentication::MessageDigestKeys::MessageDigestKey


class Ospf::Processes::Process::DefaultVrf::AreaAddresses::AreaAreaId::NameScopes::NameScope::Security : public ydk::Entity
{
    public:
        Security();
        ~Security();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Ttl; //type: Ospf::Processes::Process::DefaultVrf::AreaAddresses::AreaAreaId::NameScopes::NameScope::Security::Ttl

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_ospf_cfg::Ospf::Processes::Process::DefaultVrf::AreaAddresses::AreaAreaId::NameScopes::NameScope::Security::Ttl> ttl;
        
}; // Ospf::Processes::Process::DefaultVrf::AreaAddresses::AreaAreaId::NameScopes::NameScope::Security


class Ospf::Processes::Process::DefaultVrf::AreaAddresses::AreaAreaId::NameScopes::NameScope::Security::Ttl : public ydk::Entity
{
    public:
        Ttl();
        ~Ttl();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf enable; //type: boolean
        ydk::YLeaf hop_count; //type: uint32

}; // Ospf::Processes::Process::DefaultVrf::AreaAddresses::AreaAreaId::NameScopes::NameScope::Security::Ttl


class Ospf::Processes::Process::DefaultVrf::AreaAddresses::AreaAreaId::NameScopes::NameScope::Neighbors : public ydk::Entity
{
    public:
        Neighbors();
        ~Neighbors();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Neighbor; //type: Ospf::Processes::Process::DefaultVrf::AreaAddresses::AreaAreaId::NameScopes::NameScope::Neighbors::Neighbor

        ydk::YList neighbor;
        
}; // Ospf::Processes::Process::DefaultVrf::AreaAddresses::AreaAreaId::NameScopes::NameScope::Neighbors


class Ospf::Processes::Process::DefaultVrf::AreaAddresses::AreaAreaId::NameScopes::NameScope::Neighbors::Neighbor : public ydk::Entity
{
    public:
        Neighbor();
        ~Neighbor();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf neighbor_address; //type: string
        ydk::YLeaf priority; //type: uint32
        ydk::YLeaf poll_interval; //type: uint32
        ydk::YLeaf cost; //type: uint32
        ydk::YLeaf database_filter; //type: boolean

}; // Ospf::Processes::Process::DefaultVrf::AreaAddresses::AreaAreaId::NameScopes::NameScope::Neighbors::Neighbor


class Ospf::Processes::Process::DefaultVrf::AreaAddresses::AreaAreaId::NameScopes::NameScope::DeadIntervalMinimal : public ydk::Entity
{
    public:
        DeadIntervalMinimal();
        ~DeadIntervalMinimal();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf interval; //type: uint32
        ydk::YLeaf multiplier; //type: uint32

}; // Ospf::Processes::Process::DefaultVrf::AreaAddresses::AreaAreaId::NameScopes::NameScope::DeadIntervalMinimal


class Ospf::Processes::Process::DefaultVrf::AreaAddresses::AreaAreaId::NameScopes::NameScope::FastReroute : public ydk::Entity
{
    public:
        FastReroute();
        ~FastReroute();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf fast_reroute_enable; //type: OspfFastReroute
        class PerLink; //type: Ospf::Processes::Process::DefaultVrf::AreaAddresses::AreaAreaId::NameScopes::NameScope::FastReroute::PerLink
        class PerPrefix; //type: Ospf::Processes::Process::DefaultVrf::AreaAddresses::AreaAreaId::NameScopes::NameScope::FastReroute::PerPrefix

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_ospf_cfg::Ospf::Processes::Process::DefaultVrf::AreaAddresses::AreaAreaId::NameScopes::NameScope::FastReroute::PerLink> per_link;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_ospf_cfg::Ospf::Processes::Process::DefaultVrf::AreaAddresses::AreaAreaId::NameScopes::NameScope::FastReroute::PerPrefix> per_prefix;
        
}; // Ospf::Processes::Process::DefaultVrf::AreaAddresses::AreaAreaId::NameScopes::NameScope::FastReroute


class Ospf::Processes::Process::DefaultVrf::AreaAddresses::AreaAreaId::NameScopes::NameScope::FastReroute::PerLink : public ydk::Entity
{
    public:
        PerLink();
        ~PerLink();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf fast_reroute_use_candidate_only; //type: boolean
        class CandidateInterfaces; //type: Ospf::Processes::Process::DefaultVrf::AreaAddresses::AreaAreaId::NameScopes::NameScope::FastReroute::PerLink::CandidateInterfaces
        class ExcludeInterfaces; //type: Ospf::Processes::Process::DefaultVrf::AreaAddresses::AreaAreaId::NameScopes::NameScope::FastReroute::PerLink::ExcludeInterfaces

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_ospf_cfg::Ospf::Processes::Process::DefaultVrf::AreaAddresses::AreaAreaId::NameScopes::NameScope::FastReroute::PerLink::CandidateInterfaces> candidate_interfaces;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_ospf_cfg::Ospf::Processes::Process::DefaultVrf::AreaAddresses::AreaAreaId::NameScopes::NameScope::FastReroute::PerLink::ExcludeInterfaces> exclude_interfaces;
        
}; // Ospf::Processes::Process::DefaultVrf::AreaAddresses::AreaAreaId::NameScopes::NameScope::FastReroute::PerLink


class Ospf::Processes::Process::DefaultVrf::AreaAddresses::AreaAreaId::NameScopes::NameScope::FastReroute::PerLink::CandidateInterfaces : public ydk::Entity
{
    public:
        CandidateInterfaces();
        ~CandidateInterfaces();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class CandidateInterface; //type: Ospf::Processes::Process::DefaultVrf::AreaAddresses::AreaAreaId::NameScopes::NameScope::FastReroute::PerLink::CandidateInterfaces::CandidateInterface

        ydk::YList candidate_interface;
        
}; // Ospf::Processes::Process::DefaultVrf::AreaAddresses::AreaAreaId::NameScopes::NameScope::FastReroute::PerLink::CandidateInterfaces


class Ospf::Processes::Process::DefaultVrf::AreaAddresses::AreaAreaId::NameScopes::NameScope::FastReroute::PerLink::CandidateInterfaces::CandidateInterface : public ydk::Entity
{
    public:
        CandidateInterface();
        ~CandidateInterface();

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

}; // Ospf::Processes::Process::DefaultVrf::AreaAddresses::AreaAreaId::NameScopes::NameScope::FastReroute::PerLink::CandidateInterfaces::CandidateInterface


class Ospf::Processes::Process::DefaultVrf::AreaAddresses::AreaAreaId::NameScopes::NameScope::FastReroute::PerLink::ExcludeInterfaces : public ydk::Entity
{
    public:
        ExcludeInterfaces();
        ~ExcludeInterfaces();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class ExcludeInterface; //type: Ospf::Processes::Process::DefaultVrf::AreaAddresses::AreaAreaId::NameScopes::NameScope::FastReroute::PerLink::ExcludeInterfaces::ExcludeInterface

        ydk::YList exclude_interface;
        
}; // Ospf::Processes::Process::DefaultVrf::AreaAddresses::AreaAreaId::NameScopes::NameScope::FastReroute::PerLink::ExcludeInterfaces


class Ospf::Processes::Process::DefaultVrf::AreaAddresses::AreaAreaId::NameScopes::NameScope::FastReroute::PerLink::ExcludeInterfaces::ExcludeInterface : public ydk::Entity
{
    public:
        ExcludeInterface();
        ~ExcludeInterface();

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

}; // Ospf::Processes::Process::DefaultVrf::AreaAddresses::AreaAreaId::NameScopes::NameScope::FastReroute::PerLink::ExcludeInterfaces::ExcludeInterface


class Ospf::Processes::Process::DefaultVrf::AreaAddresses::AreaAreaId::NameScopes::NameScope::FastReroute::PerPrefix : public ydk::Entity
{
    public:
        PerPrefix();
        ~PerPrefix();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf topology_independent_lfa; //type: boolean
        ydk::YLeaf fast_reroute_use_candidate_only; //type: boolean
        class RemoteLfa; //type: Ospf::Processes::Process::DefaultVrf::AreaAddresses::AreaAreaId::NameScopes::NameScope::FastReroute::PerPrefix::RemoteLfa
        class Tiebreakers; //type: Ospf::Processes::Process::DefaultVrf::AreaAddresses::AreaAreaId::NameScopes::NameScope::FastReroute::PerPrefix::Tiebreakers
        class CandidateInterfaces; //type: Ospf::Processes::Process::DefaultVrf::AreaAddresses::AreaAreaId::NameScopes::NameScope::FastReroute::PerPrefix::CandidateInterfaces
        class ExcludeInterfaces; //type: Ospf::Processes::Process::DefaultVrf::AreaAddresses::AreaAreaId::NameScopes::NameScope::FastReroute::PerPrefix::ExcludeInterfaces

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_ospf_cfg::Ospf::Processes::Process::DefaultVrf::AreaAddresses::AreaAreaId::NameScopes::NameScope::FastReroute::PerPrefix::RemoteLfa> remote_lfa;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_ospf_cfg::Ospf::Processes::Process::DefaultVrf::AreaAddresses::AreaAreaId::NameScopes::NameScope::FastReroute::PerPrefix::Tiebreakers> tiebreakers;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_ospf_cfg::Ospf::Processes::Process::DefaultVrf::AreaAddresses::AreaAreaId::NameScopes::NameScope::FastReroute::PerPrefix::CandidateInterfaces> candidate_interfaces;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_ospf_cfg::Ospf::Processes::Process::DefaultVrf::AreaAddresses::AreaAreaId::NameScopes::NameScope::FastReroute::PerPrefix::ExcludeInterfaces> exclude_interfaces;
        
}; // Ospf::Processes::Process::DefaultVrf::AreaAddresses::AreaAreaId::NameScopes::NameScope::FastReroute::PerPrefix


class Ospf::Processes::Process::DefaultVrf::AreaAddresses::AreaAreaId::NameScopes::NameScope::FastReroute::PerPrefix::RemoteLfa : public ydk::Entity
{
    public:
        RemoteLfa();
        ~RemoteLfa();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf tunnel; //type: OspfFrrRlfaTunnel
        ydk::YLeaf maximum_cost; //type: uint32

}; // Ospf::Processes::Process::DefaultVrf::AreaAddresses::AreaAreaId::NameScopes::NameScope::FastReroute::PerPrefix::RemoteLfa


class Ospf::Processes::Process::DefaultVrf::AreaAddresses::AreaAreaId::NameScopes::NameScope::FastReroute::PerPrefix::Tiebreakers : public ydk::Entity
{
    public:
        Tiebreakers();
        ~Tiebreakers();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Tiebreaker; //type: Ospf::Processes::Process::DefaultVrf::AreaAddresses::AreaAreaId::NameScopes::NameScope::FastReroute::PerPrefix::Tiebreakers::Tiebreaker

        ydk::YList tiebreaker;
        
}; // Ospf::Processes::Process::DefaultVrf::AreaAddresses::AreaAreaId::NameScopes::NameScope::FastReroute::PerPrefix::Tiebreakers


class Ospf::Processes::Process::DefaultVrf::AreaAddresses::AreaAreaId::NameScopes::NameScope::FastReroute::PerPrefix::Tiebreakers::Tiebreaker : public ydk::Entity
{
    public:
        Tiebreaker();
        ~Tiebreaker();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf tiebreaker_type; //type: OspfFastRerouteTiebreakersIntf
        ydk::YLeaf tiebreaker_index; //type: uint32

}; // Ospf::Processes::Process::DefaultVrf::AreaAddresses::AreaAreaId::NameScopes::NameScope::FastReroute::PerPrefix::Tiebreakers::Tiebreaker


class Ospf::Processes::Process::DefaultVrf::AreaAddresses::AreaAreaId::NameScopes::NameScope::FastReroute::PerPrefix::CandidateInterfaces : public ydk::Entity
{
    public:
        CandidateInterfaces();
        ~CandidateInterfaces();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class CandidateInterface; //type: Ospf::Processes::Process::DefaultVrf::AreaAddresses::AreaAreaId::NameScopes::NameScope::FastReroute::PerPrefix::CandidateInterfaces::CandidateInterface

        ydk::YList candidate_interface;
        
}; // Ospf::Processes::Process::DefaultVrf::AreaAddresses::AreaAreaId::NameScopes::NameScope::FastReroute::PerPrefix::CandidateInterfaces


class Ospf::Processes::Process::DefaultVrf::AreaAddresses::AreaAreaId::NameScopes::NameScope::FastReroute::PerPrefix::CandidateInterfaces::CandidateInterface : public ydk::Entity
{
    public:
        CandidateInterface();
        ~CandidateInterface();

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

}; // Ospf::Processes::Process::DefaultVrf::AreaAddresses::AreaAreaId::NameScopes::NameScope::FastReroute::PerPrefix::CandidateInterfaces::CandidateInterface


class Ospf::Processes::Process::DefaultVrf::AreaAddresses::AreaAreaId::NameScopes::NameScope::FastReroute::PerPrefix::ExcludeInterfaces : public ydk::Entity
{
    public:
        ExcludeInterfaces();
        ~ExcludeInterfaces();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class ExcludeInterface; //type: Ospf::Processes::Process::DefaultVrf::AreaAddresses::AreaAreaId::NameScopes::NameScope::FastReroute::PerPrefix::ExcludeInterfaces::ExcludeInterface

        ydk::YList exclude_interface;
        
}; // Ospf::Processes::Process::DefaultVrf::AreaAddresses::AreaAreaId::NameScopes::NameScope::FastReroute::PerPrefix::ExcludeInterfaces


class Ospf::Processes::Process::DefaultVrf::AreaAddresses::AreaAreaId::NameScopes::NameScope::FastReroute::PerPrefix::ExcludeInterfaces::ExcludeInterface : public ydk::Entity
{
    public:
        ExcludeInterface();
        ~ExcludeInterface();

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

}; // Ospf::Processes::Process::DefaultVrf::AreaAddresses::AreaAreaId::NameScopes::NameScope::FastReroute::PerPrefix::ExcludeInterfaces::ExcludeInterface


class Ospf::Processes::Process::DefaultVrf::AreaAddresses::AreaAreaId::NameScopes::NameScope::CostFallback : public ydk::Entity
{
    public:
        CostFallback();
        ~CostFallback();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf cost; //type: uint32
        ydk::YLeaf threshold; //type: uint32

}; // Ospf::Processes::Process::DefaultVrf::AreaAddresses::AreaAreaId::NameScopes::NameScope::CostFallback


class Ospf::Processes::Process::DefaultVrf::AreaAddresses::AreaAreaId::MultiAreaInterfaceScopes : public ydk::Entity
{
    public:
        MultiAreaInterfaceScopes();
        ~MultiAreaInterfaceScopes();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class MultiAreaInterfaceScope; //type: Ospf::Processes::Process::DefaultVrf::AreaAddresses::AreaAreaId::MultiAreaInterfaceScopes::MultiAreaInterfaceScope

        ydk::YList multi_area_interface_scope;
        
}; // Ospf::Processes::Process::DefaultVrf::AreaAddresses::AreaAreaId::MultiAreaInterfaceScopes


class Ospf::Processes::Process::DefaultVrf::AreaAddresses::AreaAreaId::MultiAreaInterfaceScopes::MultiAreaInterfaceScope : public ydk::Entity
{
    public:
        MultiAreaInterfaceScope();
        ~MultiAreaInterfaceScope();

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
        ydk::YLeaf cost; //type: uint32
        ydk::YLeaf mtu_ignore; //type: boolean
        ydk::YLeaf hello_interval; //type: uint32
        ydk::YLeaf passive; //type: boolean
        ydk::YLeaf transmit_delay; //type: uint32
        ydk::YLeaf packet_size; //type: uint32
        ydk::YLeaf database_filter; //type: boolean
        ydk::YLeaf retransmit_interval; //type: uint32
        ydk::YLeaf running; //type: empty
        class DistributeList; //type: Ospf::Processes::Process::DefaultVrf::AreaAddresses::AreaAreaId::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::DistributeList
        class Authentication; //type: Ospf::Processes::Process::DefaultVrf::AreaAddresses::AreaAreaId::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::Authentication
        class Neighbors; //type: Ospf::Processes::Process::DefaultVrf::AreaAddresses::AreaAreaId::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::Neighbors
        class DeadIntervalMinimal; //type: Ospf::Processes::Process::DefaultVrf::AreaAddresses::AreaAreaId::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::DeadIntervalMinimal
        class FastReroute; //type: Ospf::Processes::Process::DefaultVrf::AreaAddresses::AreaAreaId::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::FastReroute
        class CostFallback; //type: Ospf::Processes::Process::DefaultVrf::AreaAddresses::AreaAreaId::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::CostFallback

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_ospf_cfg::Ospf::Processes::Process::DefaultVrf::AreaAddresses::AreaAreaId::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::DistributeList> distribute_list; // presence node
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_ospf_cfg::Ospf::Processes::Process::DefaultVrf::AreaAddresses::AreaAreaId::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::Authentication> authentication;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_ospf_cfg::Ospf::Processes::Process::DefaultVrf::AreaAddresses::AreaAreaId::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::Neighbors> neighbors;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_ospf_cfg::Ospf::Processes::Process::DefaultVrf::AreaAddresses::AreaAreaId::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::DeadIntervalMinimal> dead_interval_minimal;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_ospf_cfg::Ospf::Processes::Process::DefaultVrf::AreaAddresses::AreaAreaId::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::FastReroute> fast_reroute;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_ospf_cfg::Ospf::Processes::Process::DefaultVrf::AreaAddresses::AreaAreaId::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::CostFallback> cost_fallback;
        
}; // Ospf::Processes::Process::DefaultVrf::AreaAddresses::AreaAreaId::MultiAreaInterfaceScopes::MultiAreaInterfaceScope


class Ospf::Processes::Process::DefaultVrf::AreaAddresses::AreaAreaId::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::DistributeList : public ydk::Entity
{
    public:
        DistributeList();
        ~DistributeList();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf access_list_name; //type: string
        ydk::YLeaf route_policy_name; //type: string

}; // Ospf::Processes::Process::DefaultVrf::AreaAddresses::AreaAreaId::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::DistributeList


class Ospf::Processes::Process::DefaultVrf::AreaAddresses::AreaAreaId::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::Authentication : public ydk::Entity
{
    public:
        Authentication();
        ~Authentication();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf key; //type: string
        class Type; //type: Ospf::Processes::Process::DefaultVrf::AreaAddresses::AreaAreaId::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::Authentication::Type
        class MessageDigestKeys; //type: Ospf::Processes::Process::DefaultVrf::AreaAddresses::AreaAreaId::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::Authentication::MessageDigestKeys

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_ospf_cfg::Ospf::Processes::Process::DefaultVrf::AreaAddresses::AreaAreaId::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::Authentication::Type> type;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_ospf_cfg::Ospf::Processes::Process::DefaultVrf::AreaAddresses::AreaAreaId::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::Authentication::MessageDigestKeys> message_digest_keys;
        
}; // Ospf::Processes::Process::DefaultVrf::AreaAddresses::AreaAreaId::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::Authentication


class Ospf::Processes::Process::DefaultVrf::AreaAddresses::AreaAreaId::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::Authentication::Type : public ydk::Entity
{
    public:
        Type();
        ~Type();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf authen_type; //type: OspfAuthentication
        ydk::YLeaf keychain_authen_type; //type: OspfKeychainAuth
        ydk::YLeaf keychain_name; //type: string

}; // Ospf::Processes::Process::DefaultVrf::AreaAddresses::AreaAreaId::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::Authentication::Type


class Ospf::Processes::Process::DefaultVrf::AreaAddresses::AreaAreaId::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::Authentication::MessageDigestKeys : public ydk::Entity
{
    public:
        MessageDigestKeys();
        ~MessageDigestKeys();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class MessageDigestKey; //type: Ospf::Processes::Process::DefaultVrf::AreaAddresses::AreaAreaId::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::Authentication::MessageDigestKeys::MessageDigestKey

        ydk::YList message_digest_key;
        
}; // Ospf::Processes::Process::DefaultVrf::AreaAddresses::AreaAreaId::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::Authentication::MessageDigestKeys


class Ospf::Processes::Process::DefaultVrf::AreaAddresses::AreaAreaId::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::Authentication::MessageDigestKeys::MessageDigestKey : public ydk::Entity
{
    public:
        MessageDigestKey();
        ~MessageDigestKey();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf key_id; //type: uint32
        ydk::YLeaf password; //type: string

}; // Ospf::Processes::Process::DefaultVrf::AreaAddresses::AreaAreaId::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::Authentication::MessageDigestKeys::MessageDigestKey


class Ospf::Processes::Process::DefaultVrf::AreaAddresses::AreaAreaId::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::Neighbors : public ydk::Entity
{
    public:
        Neighbors();
        ~Neighbors();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Neighbor; //type: Ospf::Processes::Process::DefaultVrf::AreaAddresses::AreaAreaId::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::Neighbors::Neighbor

        ydk::YList neighbor;
        
}; // Ospf::Processes::Process::DefaultVrf::AreaAddresses::AreaAreaId::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::Neighbors


class Ospf::Processes::Process::DefaultVrf::AreaAddresses::AreaAreaId::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::Neighbors::Neighbor : public ydk::Entity
{
    public:
        Neighbor();
        ~Neighbor();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf neighbor_address; //type: string
        ydk::YLeaf priority; //type: uint32
        ydk::YLeaf poll_interval; //type: uint32
        ydk::YLeaf cost; //type: uint32
        ydk::YLeaf database_filter; //type: boolean

}; // Ospf::Processes::Process::DefaultVrf::AreaAddresses::AreaAreaId::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::Neighbors::Neighbor


class Ospf::Processes::Process::DefaultVrf::AreaAddresses::AreaAreaId::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::DeadIntervalMinimal : public ydk::Entity
{
    public:
        DeadIntervalMinimal();
        ~DeadIntervalMinimal();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf interval; //type: uint32
        ydk::YLeaf multiplier; //type: uint32

}; // Ospf::Processes::Process::DefaultVrf::AreaAddresses::AreaAreaId::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::DeadIntervalMinimal


class Ospf::Processes::Process::DefaultVrf::AreaAddresses::AreaAreaId::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::FastReroute : public ydk::Entity
{
    public:
        FastReroute();
        ~FastReroute();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf fast_reroute_enable; //type: OspfFastReroute
        class PerLink; //type: Ospf::Processes::Process::DefaultVrf::AreaAddresses::AreaAreaId::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::FastReroute::PerLink
        class PerPrefix; //type: Ospf::Processes::Process::DefaultVrf::AreaAddresses::AreaAreaId::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::FastReroute::PerPrefix

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_ospf_cfg::Ospf::Processes::Process::DefaultVrf::AreaAddresses::AreaAreaId::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::FastReroute::PerLink> per_link;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_ospf_cfg::Ospf::Processes::Process::DefaultVrf::AreaAddresses::AreaAreaId::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::FastReroute::PerPrefix> per_prefix;
        
}; // Ospf::Processes::Process::DefaultVrf::AreaAddresses::AreaAreaId::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::FastReroute


class Ospf::Processes::Process::DefaultVrf::AreaAddresses::AreaAreaId::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::FastReroute::PerLink : public ydk::Entity
{
    public:
        PerLink();
        ~PerLink();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf fast_reroute_use_candidate_only; //type: boolean
        class CandidateInterfaces; //type: Ospf::Processes::Process::DefaultVrf::AreaAddresses::AreaAreaId::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::FastReroute::PerLink::CandidateInterfaces
        class ExcludeInterfaces; //type: Ospf::Processes::Process::DefaultVrf::AreaAddresses::AreaAreaId::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::FastReroute::PerLink::ExcludeInterfaces

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_ospf_cfg::Ospf::Processes::Process::DefaultVrf::AreaAddresses::AreaAreaId::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::FastReroute::PerLink::CandidateInterfaces> candidate_interfaces;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_ospf_cfg::Ospf::Processes::Process::DefaultVrf::AreaAddresses::AreaAreaId::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::FastReroute::PerLink::ExcludeInterfaces> exclude_interfaces;
        
}; // Ospf::Processes::Process::DefaultVrf::AreaAddresses::AreaAreaId::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::FastReroute::PerLink


class Ospf::Processes::Process::DefaultVrf::AreaAddresses::AreaAreaId::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::FastReroute::PerLink::CandidateInterfaces : public ydk::Entity
{
    public:
        CandidateInterfaces();
        ~CandidateInterfaces();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class CandidateInterface; //type: Ospf::Processes::Process::DefaultVrf::AreaAddresses::AreaAreaId::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::FastReroute::PerLink::CandidateInterfaces::CandidateInterface

        ydk::YList candidate_interface;
        
}; // Ospf::Processes::Process::DefaultVrf::AreaAddresses::AreaAreaId::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::FastReroute::PerLink::CandidateInterfaces


class Ospf::Processes::Process::DefaultVrf::AreaAddresses::AreaAreaId::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::FastReroute::PerLink::CandidateInterfaces::CandidateInterface : public ydk::Entity
{
    public:
        CandidateInterface();
        ~CandidateInterface();

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

}; // Ospf::Processes::Process::DefaultVrf::AreaAddresses::AreaAreaId::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::FastReroute::PerLink::CandidateInterfaces::CandidateInterface


class Ospf::Processes::Process::DefaultVrf::AreaAddresses::AreaAreaId::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::FastReroute::PerLink::ExcludeInterfaces : public ydk::Entity
{
    public:
        ExcludeInterfaces();
        ~ExcludeInterfaces();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class ExcludeInterface; //type: Ospf::Processes::Process::DefaultVrf::AreaAddresses::AreaAreaId::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::FastReroute::PerLink::ExcludeInterfaces::ExcludeInterface

        ydk::YList exclude_interface;
        
}; // Ospf::Processes::Process::DefaultVrf::AreaAddresses::AreaAreaId::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::FastReroute::PerLink::ExcludeInterfaces


class Ospf::Processes::Process::DefaultVrf::AreaAddresses::AreaAreaId::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::FastReroute::PerLink::ExcludeInterfaces::ExcludeInterface : public ydk::Entity
{
    public:
        ExcludeInterface();
        ~ExcludeInterface();

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

}; // Ospf::Processes::Process::DefaultVrf::AreaAddresses::AreaAreaId::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::FastReroute::PerLink::ExcludeInterfaces::ExcludeInterface


class Ospf::Processes::Process::DefaultVrf::AreaAddresses::AreaAreaId::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::FastReroute::PerPrefix : public ydk::Entity
{
    public:
        PerPrefix();
        ~PerPrefix();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf topology_independent_lfa; //type: boolean
        ydk::YLeaf fast_reroute_use_candidate_only; //type: boolean
        class RemoteLfa; //type: Ospf::Processes::Process::DefaultVrf::AreaAddresses::AreaAreaId::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::FastReroute::PerPrefix::RemoteLfa
        class Tiebreakers; //type: Ospf::Processes::Process::DefaultVrf::AreaAddresses::AreaAreaId::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::FastReroute::PerPrefix::Tiebreakers
        class CandidateInterfaces; //type: Ospf::Processes::Process::DefaultVrf::AreaAddresses::AreaAreaId::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::FastReroute::PerPrefix::CandidateInterfaces
        class ExcludeInterfaces; //type: Ospf::Processes::Process::DefaultVrf::AreaAddresses::AreaAreaId::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::FastReroute::PerPrefix::ExcludeInterfaces

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_ospf_cfg::Ospf::Processes::Process::DefaultVrf::AreaAddresses::AreaAreaId::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::FastReroute::PerPrefix::RemoteLfa> remote_lfa;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_ospf_cfg::Ospf::Processes::Process::DefaultVrf::AreaAddresses::AreaAreaId::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::FastReroute::PerPrefix::Tiebreakers> tiebreakers;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_ospf_cfg::Ospf::Processes::Process::DefaultVrf::AreaAddresses::AreaAreaId::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::FastReroute::PerPrefix::CandidateInterfaces> candidate_interfaces;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_ospf_cfg::Ospf::Processes::Process::DefaultVrf::AreaAddresses::AreaAreaId::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::FastReroute::PerPrefix::ExcludeInterfaces> exclude_interfaces;
        
}; // Ospf::Processes::Process::DefaultVrf::AreaAddresses::AreaAreaId::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::FastReroute::PerPrefix


class Ospf::Processes::Process::DefaultVrf::AreaAddresses::AreaAreaId::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::FastReroute::PerPrefix::RemoteLfa : public ydk::Entity
{
    public:
        RemoteLfa();
        ~RemoteLfa();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf tunnel; //type: OspfFrrRlfaTunnel
        ydk::YLeaf maximum_cost; //type: uint32

}; // Ospf::Processes::Process::DefaultVrf::AreaAddresses::AreaAreaId::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::FastReroute::PerPrefix::RemoteLfa


class Ospf::Processes::Process::DefaultVrf::AreaAddresses::AreaAreaId::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::FastReroute::PerPrefix::Tiebreakers : public ydk::Entity
{
    public:
        Tiebreakers();
        ~Tiebreakers();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Tiebreaker; //type: Ospf::Processes::Process::DefaultVrf::AreaAddresses::AreaAreaId::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::FastReroute::PerPrefix::Tiebreakers::Tiebreaker

        ydk::YList tiebreaker;
        
}; // Ospf::Processes::Process::DefaultVrf::AreaAddresses::AreaAreaId::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::FastReroute::PerPrefix::Tiebreakers


class Ospf::Processes::Process::DefaultVrf::AreaAddresses::AreaAreaId::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::FastReroute::PerPrefix::Tiebreakers::Tiebreaker : public ydk::Entity
{
    public:
        Tiebreaker();
        ~Tiebreaker();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf tiebreaker_type; //type: OspfFastRerouteTiebreakersIntf
        ydk::YLeaf tiebreaker_index; //type: uint32

}; // Ospf::Processes::Process::DefaultVrf::AreaAddresses::AreaAreaId::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::FastReroute::PerPrefix::Tiebreakers::Tiebreaker


class Ospf::Processes::Process::DefaultVrf::AreaAddresses::AreaAreaId::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::FastReroute::PerPrefix::CandidateInterfaces : public ydk::Entity
{
    public:
        CandidateInterfaces();
        ~CandidateInterfaces();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class CandidateInterface; //type: Ospf::Processes::Process::DefaultVrf::AreaAddresses::AreaAreaId::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::FastReroute::PerPrefix::CandidateInterfaces::CandidateInterface

        ydk::YList candidate_interface;
        
}; // Ospf::Processes::Process::DefaultVrf::AreaAddresses::AreaAreaId::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::FastReroute::PerPrefix::CandidateInterfaces


class Ospf::Processes::Process::DefaultVrf::AreaAddresses::AreaAreaId::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::FastReroute::PerPrefix::CandidateInterfaces::CandidateInterface : public ydk::Entity
{
    public:
        CandidateInterface();
        ~CandidateInterface();

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

}; // Ospf::Processes::Process::DefaultVrf::AreaAddresses::AreaAreaId::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::FastReroute::PerPrefix::CandidateInterfaces::CandidateInterface


class Ospf::Processes::Process::DefaultVrf::AreaAddresses::AreaAreaId::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::FastReroute::PerPrefix::ExcludeInterfaces : public ydk::Entity
{
    public:
        ExcludeInterfaces();
        ~ExcludeInterfaces();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class ExcludeInterface; //type: Ospf::Processes::Process::DefaultVrf::AreaAddresses::AreaAreaId::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::FastReroute::PerPrefix::ExcludeInterfaces::ExcludeInterface

        ydk::YList exclude_interface;
        
}; // Ospf::Processes::Process::DefaultVrf::AreaAddresses::AreaAreaId::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::FastReroute::PerPrefix::ExcludeInterfaces


class Ospf::Processes::Process::DefaultVrf::AreaAddresses::AreaAreaId::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::FastReroute::PerPrefix::ExcludeInterfaces::ExcludeInterface : public ydk::Entity
{
    public:
        ExcludeInterface();
        ~ExcludeInterface();

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

}; // Ospf::Processes::Process::DefaultVrf::AreaAddresses::AreaAreaId::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::FastReroute::PerPrefix::ExcludeInterfaces::ExcludeInterface


class Ospf::Processes::Process::DefaultVrf::AreaAddresses::AreaAreaId::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::CostFallback : public ydk::Entity
{
    public:
        CostFallback();
        ~CostFallback();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf cost; //type: uint32
        ydk::YLeaf threshold; //type: uint32

}; // Ospf::Processes::Process::DefaultVrf::AreaAddresses::AreaAreaId::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::CostFallback


class Ospf::Processes::Process::DefaultVrf::AreaAddresses::AreaAreaId::AreaRanges : public ydk::Entity
{
    public:
        AreaRanges();
        ~AreaRanges();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class AreaRange; //type: Ospf::Processes::Process::DefaultVrf::AreaAddresses::AreaAreaId::AreaRanges::AreaRange

        ydk::YList area_range;
        
}; // Ospf::Processes::Process::DefaultVrf::AreaAddresses::AreaAreaId::AreaRanges


class Ospf::Processes::Process::DefaultVrf::AreaAddresses::AreaAreaId::AreaRanges::AreaRange : public ydk::Entity
{
    public:
        AreaRange();
        ~AreaRange();

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
        ydk::YLeaf netmask; //type: string
        ydk::YLeaf not_advertise; //type: boolean

}; // Ospf::Processes::Process::DefaultVrf::AreaAddresses::AreaAreaId::AreaRanges::AreaRange


class Ospf::Processes::Process::DefaultVrf::AreaAddresses::AreaAreaId::Nssa : public ydk::Entity
{
    public:
        Nssa();
        ~Nssa();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf no_redistribution; //type: boolean
        ydk::YLeaf default_info_originate; //type: boolean
        ydk::YLeaf no_summary; //type: boolean
        ydk::YLeaf nssa_def_metric; //type: uint32
        ydk::YLeaf metric_type; //type: OspfLinkStateMetric

}; // Ospf::Processes::Process::DefaultVrf::AreaAddresses::AreaAreaId::Nssa


class Ospf::Processes::Process::DefaultVrf::Timers : public ydk::Entity
{
    public:
        Timers();
        ~Timers();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf lsa_pacing_flood; //type: uint32
        ydk::YLeaf fast_reroute_timer; //type: uint32
        ydk::YLeaf lsa_refresh; //type: uint32
        ydk::YLeaf lsa_group_pacing; //type: uint32
        ydk::YLeaf lsa_min_arrival; //type: uint32
        class SpfTimer; //type: Ospf::Processes::Process::DefaultVrf::Timers::SpfTimer
        class LsaGenerationTimer; //type: Ospf::Processes::Process::DefaultVrf::Timers::LsaGenerationTimer

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_ospf_cfg::Ospf::Processes::Process::DefaultVrf::Timers::SpfTimer> spf_timer;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_ospf_cfg::Ospf::Processes::Process::DefaultVrf::Timers::LsaGenerationTimer> lsa_generation_timer;
        
}; // Ospf::Processes::Process::DefaultVrf::Timers


class Ospf::Processes::Process::DefaultVrf::Timers::SpfTimer : public ydk::Entity
{
    public:
        SpfTimer();
        ~SpfTimer();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf initial_delay; //type: uint32
        ydk::YLeaf backoff_increment; //type: uint32
        ydk::YLeaf max_delay; //type: uint32

}; // Ospf::Processes::Process::DefaultVrf::Timers::SpfTimer


class Ospf::Processes::Process::DefaultVrf::Timers::LsaGenerationTimer : public ydk::Entity
{
    public:
        LsaGenerationTimer();
        ~LsaGenerationTimer();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf initial_delay; //type: uint32
        ydk::YLeaf backoff_increment; //type: uint32
        ydk::YLeaf max_delay; //type: uint32

}; // Ospf::Processes::Process::DefaultVrf::Timers::LsaGenerationTimer


class Ospf::Global : public ydk::Entity
{
    public:
        Global();
        ~Global();

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

        ydk::YLeaf dns_name_lookup; //type: empty

}; // Ospf::Global

class OspfFastRerouteTiebreakers : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf downstream;
        static const ydk::Enum::YLeaf line_card_disjoint;
        static const ydk::Enum::YLeaf lowest_metric;
        static const ydk::Enum::YLeaf node_protect;
        static const ydk::Enum::YLeaf primary_path;
        static const ydk::Enum::YLeaf secondary_path;
        static const ydk::Enum::YLeaf srlg_disjoint;
        static const ydk::Enum::YLeaf interface_disjoint;

        static int get_enum_value(const std::string & name) {
            if (name == "downstream") return 0;
            if (name == "line-card-disjoint") return 1;
            if (name == "lowest-metric") return 2;
            if (name == "node-protect") return 3;
            if (name == "primary-path") return 4;
            if (name == "secondary-path") return 5;
            if (name == "srlg-disjoint") return 6;
            if (name == "interface-disjoint") return 7;
            return -1;
        }
};

class OspfFastReroute : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf none;
        static const ydk::Enum::YLeaf per_link;
        static const ydk::Enum::YLeaf per_prefix;

        static int get_enum_value(const std::string & name) {
            if (name == "none") return 0;
            if (name == "per-link") return 1;
            if (name == "per-prefix") return 2;
            return -1;
        }
};

class OspfTraceBufSize : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf size0;
        static const ydk::Enum::YLeaf size256;
        static const ydk::Enum::YLeaf size512;
        static const ydk::Enum::YLeaf size1024;
        static const ydk::Enum::YLeaf size2048;
        static const ydk::Enum::YLeaf size4096;
        static const ydk::Enum::YLeaf size8192;
        static const ydk::Enum::YLeaf size16384;
        static const ydk::Enum::YLeaf size32768;
        static const ydk::Enum::YLeaf size65536;

        static int get_enum_value(const std::string & name) {
            if (name == "size0") return 0;
            if (name == "size256") return 256;
            if (name == "size512") return 512;
            if (name == "size1024") return 1024;
            if (name == "size2048") return 2048;
            if (name == "size4096") return 4096;
            if (name == "size8192") return 8192;
            if (name == "size16384") return 16384;
            if (name == "size32768") return 32768;
            if (name == "size65536") return 65536;
            return -1;
        }
};

class OspfRedistLsa : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf summary;
        static const ydk::Enum::YLeaf external;

        static int get_enum_value(const std::string & name) {
            if (name == "summary") return 3;
            if (name == "external") return 5;
            return -1;
        }
};

class OspfIetfNsf : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf all;

        static int get_enum_value(const std::string & name) {
            if (name == "all") return 3;
            return -1;
        }
};

class BfdEnableMode : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf disable;
        static const ydk::Enum::YLeaf default_;
        static const ydk::Enum::YLeaf strict;

        static int get_enum_value(const std::string & name) {
            if (name == "disable") return 0;
            if (name == "default") return 1;
            if (name == "strict") return 2;
            return -1;
        }
};

class OspfFastReroutePriority : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf critical;
        static const ydk::Enum::YLeaf high;
        static const ydk::Enum::YLeaf medium;
        static const ydk::Enum::YLeaf low;

        static int get_enum_value(const std::string & name) {
            if (name == "critical") return 0;
            if (name == "high") return 2;
            if (name == "medium") return 4;
            if (name == "low") return 6;
            return -1;
        }
};

class OspfCiscoNsf : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf always;
        static const ydk::Enum::YLeaf require_nsf_neighbors;

        static int get_enum_value(const std::string & name) {
            if (name == "always") return 1;
            if (name == "require-nsf-neighbors") return 2;
            return -1;
        }
};

class OspfRedistProtocol : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf all;
        static const ydk::Enum::YLeaf connected;
        static const ydk::Enum::YLeaf static_;
        static const ydk::Enum::YLeaf bgp;
        static const ydk::Enum::YLeaf rip;
        static const ydk::Enum::YLeaf isis;
        static const ydk::Enum::YLeaf ospf;
        static const ydk::Enum::YLeaf eigrp;
        static const ydk::Enum::YLeaf dagr;
        static const ydk::Enum::YLeaf subscriber;
        static const ydk::Enum::YLeaf application;
        static const ydk::Enum::YLeaf mobile;

        static int get_enum_value(const std::string & name) {
            if (name == "all") return 0;
            if (name == "connected") return 1;
            if (name == "static") return 3;
            if (name == "bgp") return 4;
            if (name == "rip") return 5;
            if (name == "isis") return 6;
            if (name == "ospf") return 7;
            if (name == "eigrp") return 8;
            if (name == "dagr") return 9;
            if (name == "subscriber") return 10;
            if (name == "application") return 11;
            if (name == "mobile") return 12;
            return -1;
        }
};

class OspfSegmentRouting : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf disable;
        static const ydk::Enum::YLeaf mpls;

        static int get_enum_value(const std::string & name) {
            if (name == "disable") return 0;
            if (name == "mpls") return 1;
            return -1;
        }
};

class OspfUloopAvoidance : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf protected_;
        static const ydk::Enum::YLeaf all;
        static const ydk::Enum::YLeaf segment_routing;

        static int get_enum_value(const std::string & name) {
            if (name == "protected") return 1;
            if (name == "all") return 2;
            if (name == "segment-routing") return 3;
            return -1;
        }
};

class OspfSegmentRoutingForwarding : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf disable;
        static const ydk::Enum::YLeaf mpls;

        static int get_enum_value(const std::string & name) {
            if (name == "disable") return 0;
            if (name == "mpls") return 1;
            return -1;
        }
};

class OspfAddressFamily : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf ipv4;

        static int get_enum_value(const std::string & name) {
            if (name == "ipv4") return 1;
            return -1;
        }
};

class OspfProcFastReroute : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf none;
        static const ydk::Enum::YLeaf per_link;
        static const ydk::Enum::YLeaf per_prefix;

        static int get_enum_value(const std::string & name) {
            if (name == "none") return 0;
            if (name == "per-link") return 1;
            if (name == "per-prefix") return 2;
            return -1;
        }
};

class OspfProcFrrRlfaTunnel : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf none;
        static const ydk::Enum::YLeaf mpls_ldp;

        static int get_enum_value(const std::string & name) {
            if (name == "none") return 0;
            if (name == "mpls-ldp") return 1;
            return -1;
        }
};

class OspfIetfNsfSupport : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf never;

        static int get_enum_value(const std::string & name) {
            if (name == "never") return 0;
            return -1;
        }
};

class OspfLinkStateMetric : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf type1;
        static const ydk::Enum::YLeaf type2;

        static int get_enum_value(const std::string & name) {
            if (name == "type1") return 1;
            if (name == "type2") return 2;
            return -1;
        }
};

class OspfAuthentication : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf none;
        static const ydk::Enum::YLeaf plain;
        static const ydk::Enum::YLeaf md5;
        static const ydk::Enum::YLeaf keychain;

        static int get_enum_value(const std::string & name) {
            if (name == "none") return 0;
            if (name == "plain") return 1;
            if (name == "md5") return 2;
            if (name == "keychain") return 3;
            return -1;
        }
};

class OspfLogAdj : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf brief;
        static const ydk::Enum::YLeaf detail;
        static const ydk::Enum::YLeaf suppress;

        static int get_enum_value(const std::string & name) {
            if (name == "brief") return 0;
            if (name == "detail") return 1;
            if (name == "suppress") return 2;
            return -1;
        }
};

class OspfSubAddressFamily : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf unicast;

        static int get_enum_value(const std::string & name) {
            if (name == "unicast") return 1;
            return -1;
        }
};

class OspfDomainId : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf type0005;
        static const ydk::Enum::YLeaf type0105;
        static const ydk::Enum::YLeaf type0205;
        static const ydk::Enum::YLeaf type8005;

        static int get_enum_value(const std::string & name) {
            if (name == "type0005") return 5;
            if (name == "type0105") return 261;
            if (name == "type0205") return 517;
            if (name == "type8005") return 32773;
            return -1;
        }
};

class OspfEigrpRoute : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf internal;
        static const ydk::Enum::YLeaf external;

        static int get_enum_value(const std::string & name) {
            if (name == "internal") return 0;
            if (name == "external") return 1;
            return -1;
        }
};

class OspfSid : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf index_;
        static const ydk::Enum::YLeaf absolute;

        static int get_enum_value(const std::string & name) {
            if (name == "index") return 0;
            if (name == "absolute") return 1;
            return -1;
        }
};

class Nsr : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf true_;
        static const ydk::Enum::YLeaf false_;

        static int get_enum_value(const std::string & name) {
            if (name == "true") return 1;
            if (name == "false") return 2;
            return -1;
        }
};

class OspfFastRerouteTiebreakersIntf : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf downstream;
        static const ydk::Enum::YLeaf line_card_disjoint;
        static const ydk::Enum::YLeaf lowest_metric;
        static const ydk::Enum::YLeaf node_protect;
        static const ydk::Enum::YLeaf primary_path;
        static const ydk::Enum::YLeaf secondary_path;
        static const ydk::Enum::YLeaf srlg_disjoint;
        static const ydk::Enum::YLeaf interface_disjoint;

        static int get_enum_value(const std::string & name) {
            if (name == "downstream") return 0;
            if (name == "line-card-disjoint") return 1;
            if (name == "lowest-metric") return 2;
            if (name == "node-protect") return 3;
            if (name == "primary-path") return 4;
            if (name == "secondary-path") return 5;
            if (name == "srlg-disjoint") return 6;
            if (name == "interface-disjoint") return 7;
            return -1;
        }
};

class OspfDistListProtocol : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf all;
        static const ydk::Enum::YLeaf connected;
        static const ydk::Enum::YLeaf static_;
        static const ydk::Enum::YLeaf bgp;
        static const ydk::Enum::YLeaf ospf;
        static const ydk::Enum::YLeaf dagr;

        static int get_enum_value(const std::string & name) {
            if (name == "all") return 0;
            if (name == "connected") return 1;
            if (name == "static") return 3;
            if (name == "bgp") return 4;
            if (name == "ospf") return 7;
            if (name == "dagr") return 9;
            return -1;
        }
};

class OspfRouteLevel : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf type1;
        static const ydk::Enum::YLeaf type2;
        static const ydk::Enum::YLeaf type1_and2;

        static int get_enum_value(const std::string & name) {
            if (name == "type1") return 1;
            if (name == "type2") return 2;
            if (name == "type1-and2") return 3;
            return -1;
        }
};

class OspfNetwork : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf broadcast;
        static const ydk::Enum::YLeaf non_broadcast;
        static const ydk::Enum::YLeaf point_to_point;
        static const ydk::Enum::YLeaf point_to_multipoint;
        static const ydk::Enum::YLeaf non_broadcast_point_to_multipoint;

        static int get_enum_value(const std::string & name) {
            if (name == "broadcast") return 1;
            if (name == "non-broadcast") return 2;
            if (name == "point-to-point") return 3;
            if (name == "point-to-multipoint") return 4;
            if (name == "non-broadcast-point-to-multipoint") return 5;
            return -1;
        }
};

class OspfFrrRlfaTunnel : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf none;
        static const ydk::Enum::YLeaf mpls_ldp;

        static int get_enum_value(const std::string & name) {
            if (name == "none") return 0;
            if (name == "mpls-ldp") return 1;
            return -1;
        }
};

class OspfShutdown : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf full;
        static const ydk::Enum::YLeaf hostmode;
        static const ydk::Enum::YLeaf onreload;

        static int get_enum_value(const std::string & name) {
            if (name == "full") return 1;
            if (name == "hostmode") return 2;
            if (name == "onreload") return 3;
            return -1;
        }
};

class OspfKeychainAuth : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf none;
        static const ydk::Enum::YLeaf keychain;

        static int get_enum_value(const std::string & name) {
            if (name == "none") return 0;
            if (name == "keychain") return 3;
            return -1;
        }
};


}
}

#endif /* _CISCO_IOS_XR_IPV4_OSPF_CFG_ */


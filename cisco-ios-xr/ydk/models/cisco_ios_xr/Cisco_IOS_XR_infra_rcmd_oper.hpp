#ifndef _CISCO_IOS_XR_INFRA_RCMD_OPER_
#define _CISCO_IOS_XR_INFRA_RCMD_OPER_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>

namespace cisco_ios_xr {
namespace Cisco_IOS_XR_infra_rcmd_oper {

class Rcmd : public ydk::Entity
{
    public:
        Rcmd();
        ~Rcmd();

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

        class Ospf; //type: Rcmd::Ospf
        class Server; //type: Rcmd::Server
        class Node; //type: Rcmd::Node
        class Isis; //type: Rcmd::Isis
        class Memory; //type: Rcmd::Memory
        class Ldp; //type: Rcmd::Ldp
        class Intf; //type: Rcmd::Intf
        class Process; //type: Rcmd::Process

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_infra_rcmd_oper::Rcmd::Ospf> ospf;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_infra_rcmd_oper::Rcmd::Server> server;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_infra_rcmd_oper::Rcmd::Node> node;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_infra_rcmd_oper::Rcmd::Isis> isis;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_infra_rcmd_oper::Rcmd::Memory> memory;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_infra_rcmd_oper::Rcmd::Ldp> ldp;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_infra_rcmd_oper::Rcmd::Intf> intf;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_infra_rcmd_oper::Rcmd::Process> process;
        
}; // Rcmd


class Rcmd::Ospf : public ydk::Entity
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
        std::string get_absolute_path() const override;

        class Instances; //type: Rcmd::Ospf::Instances

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_infra_rcmd_oper::Rcmd::Ospf::Instances> instances;
        
}; // Rcmd::Ospf


class Rcmd::Ospf::Instances : public ydk::Entity
{
    public:
        Instances();
        ~Instances();

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

        class Instance; //type: Rcmd::Ospf::Instances::Instance

        ydk::YList instance;
        
}; // Rcmd::Ospf::Instances


class Rcmd::Ospf::Instances::Instance : public ydk::Entity
{
    public:
        Instance();
        ~Instance();

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
        class IpfrrEventSummaries; //type: Rcmd::Ospf::Instances::Instance::IpfrrEventSummaries
        class PrefixEventStatistics; //type: Rcmd::Ospf::Instances::Instance::PrefixEventStatistics
        class SpfRunSummaries; //type: Rcmd::Ospf::Instances::Instance::SpfRunSummaries
        class IpfrrEventOfflines; //type: Rcmd::Ospf::Instances::Instance::IpfrrEventOfflines
        class SpfRunOfflines; //type: Rcmd::Ospf::Instances::Instance::SpfRunOfflines
        class SummaryExternalEventSummaries; //type: Rcmd::Ospf::Instances::Instance::SummaryExternalEventSummaries
        class PrefixEventSummaries; //type: Rcmd::Ospf::Instances::Instance::PrefixEventSummaries
        class SummaryExternalEventOfflines; //type: Rcmd::Ospf::Instances::Instance::SummaryExternalEventOfflines
        class PrefixEventOfflines; //type: Rcmd::Ospf::Instances::Instance::PrefixEventOfflines
        class SummaryExternalEventStatistics; //type: Rcmd::Ospf::Instances::Instance::SummaryExternalEventStatistics

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_infra_rcmd_oper::Rcmd::Ospf::Instances::Instance::IpfrrEventSummaries> ipfrr_event_summaries;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_infra_rcmd_oper::Rcmd::Ospf::Instances::Instance::PrefixEventStatistics> prefix_event_statistics;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_infra_rcmd_oper::Rcmd::Ospf::Instances::Instance::SpfRunSummaries> spf_run_summaries;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_infra_rcmd_oper::Rcmd::Ospf::Instances::Instance::IpfrrEventOfflines> ipfrr_event_offlines;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_infra_rcmd_oper::Rcmd::Ospf::Instances::Instance::SpfRunOfflines> spf_run_offlines;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_infra_rcmd_oper::Rcmd::Ospf::Instances::Instance::SummaryExternalEventSummaries> summary_external_event_summaries;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_infra_rcmd_oper::Rcmd::Ospf::Instances::Instance::PrefixEventSummaries> prefix_event_summaries;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_infra_rcmd_oper::Rcmd::Ospf::Instances::Instance::SummaryExternalEventOfflines> summary_external_event_offlines;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_infra_rcmd_oper::Rcmd::Ospf::Instances::Instance::PrefixEventOfflines> prefix_event_offlines;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_infra_rcmd_oper::Rcmd::Ospf::Instances::Instance::SummaryExternalEventStatistics> summary_external_event_statistics;
        
}; // Rcmd::Ospf::Instances::Instance


class Rcmd::Ospf::Instances::Instance::IpfrrEventSummaries : public ydk::Entity
{
    public:
        IpfrrEventSummaries();
        ~IpfrrEventSummaries();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class IpfrrEventSummary; //type: Rcmd::Ospf::Instances::Instance::IpfrrEventSummaries::IpfrrEventSummary

        ydk::YList ipfrr_event_summary;
        
}; // Rcmd::Ospf::Instances::Instance::IpfrrEventSummaries


class Rcmd::Ospf::Instances::Instance::IpfrrEventSummaries::IpfrrEventSummary : public ydk::Entity
{
    public:
        IpfrrEventSummary();
        ~IpfrrEventSummary();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf event_id; //type: uint32
        ydk::YLeaf event_id_xr; //type: uint32
        ydk::YLeaf trigger_time; //type: string
        ydk::YLeaf trigger_spf_run; //type: uint32
        ydk::YLeaf wait_time; //type: uint32
        ydk::YLeaf start_time_offset; //type: string
        ydk::YLeaf duration; //type: string
        ydk::YLeaf completed_spf_run; //type: uint32
        ydk::YLeaf total_routes; //type: uint32
        ydk::YLeaf fully_protected_routes; //type: uint32
        ydk::YLeaf partially_protected_routes; //type: uint32
        ydk::YLeaf coverage; //type: string
        class IpfrrStatistic; //type: Rcmd::Ospf::Instances::Instance::IpfrrEventSummaries::IpfrrEventSummary::IpfrrStatistic
        class RemoteNode; //type: Rcmd::Ospf::Instances::Instance::IpfrrEventSummaries::IpfrrEventSummary::RemoteNode

        ydk::YList ipfrr_statistic;
        ydk::YList remote_node;
        
}; // Rcmd::Ospf::Instances::Instance::IpfrrEventSummaries::IpfrrEventSummary


class Rcmd::Ospf::Instances::Instance::IpfrrEventSummaries::IpfrrEventSummary::IpfrrStatistic : public ydk::Entity
{
    public:
        IpfrrStatistic();
        ~IpfrrStatistic();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf priority; //type: RcmdPriorityLevel
        ydk::YLeaf total_routes; //type: uint32
        ydk::YLeaf fully_protected_routes; //type: uint32
        ydk::YLeaf partially_protected_routes; //type: uint32
        ydk::YLeaf coverage; //type: string
        ydk::YLeaf local_lfa_coverage; //type: string
        ydk::YLeaf remote_lfa_coverage; //type: string
        ydk::YLeaf below_threshold; //type: boolean

}; // Rcmd::Ospf::Instances::Instance::IpfrrEventSummaries::IpfrrEventSummary::IpfrrStatistic


class Rcmd::Ospf::Instances::Instance::IpfrrEventSummaries::IpfrrEventSummary::RemoteNode : public ydk::Entity
{
    public:
        RemoteNode();
        ~RemoteNode();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf remote_node_id; //type: string
        ydk::YLeaf interface_name; //type: string
        ydk::YLeaf neighbour_address; //type: string
        ydk::YLeaf path_count; //type: uint32
        ydk::YLeaf in_use_time; //type: string
        class PrimaryPath; //type: Rcmd::Ospf::Instances::Instance::IpfrrEventSummaries::IpfrrEventSummary::RemoteNode::PrimaryPath

        ydk::YList primary_path;
        
}; // Rcmd::Ospf::Instances::Instance::IpfrrEventSummaries::IpfrrEventSummary::RemoteNode


class Rcmd::Ospf::Instances::Instance::IpfrrEventSummaries::IpfrrEventSummary::RemoteNode::PrimaryPath : public ydk::Entity
{
    public:
        PrimaryPath();
        ~PrimaryPath();

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
        ydk::YLeaf neighbour_address; //type: string

}; // Rcmd::Ospf::Instances::Instance::IpfrrEventSummaries::IpfrrEventSummary::RemoteNode::PrimaryPath


class Rcmd::Ospf::Instances::Instance::PrefixEventStatistics : public ydk::Entity
{
    public:
        PrefixEventStatistics();
        ~PrefixEventStatistics();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class PrefixEventStatistic; //type: Rcmd::Ospf::Instances::Instance::PrefixEventStatistics::PrefixEventStatistic

        ydk::YList prefix_event_statistic;
        
}; // Rcmd::Ospf::Instances::Instance::PrefixEventStatistics


class Rcmd::Ospf::Instances::Instance::PrefixEventStatistics::PrefixEventStatistic : public ydk::Entity
{
    public:
        PrefixEventStatistic();
        ~PrefixEventStatistic();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf prefix_info; //type: string
        ydk::YLeaf prefix; //type: string
        ydk::YLeaf prefix_lenth; //type: uint32
        ydk::YLeaf last_event_time; //type: string
        ydk::YLeaf last_priority; //type: RcmdPriorityLevel
        ydk::YLeaf last_route_type; //type: RcmdShowRoute
        ydk::YLeaf last_change_type; //type: RcmdChange
        ydk::YLeaf last_cost; //type: uint32
        ydk::YLeaf critical_priority; //type: uint32
        ydk::YLeaf high_priority; //type: uint32
        ydk::YLeaf medium_priority; //type: uint32
        ydk::YLeaf low_priority; //type: uint32
        ydk::YLeaf add_count; //type: uint32
        ydk::YLeaf modify_count; //type: uint32
        ydk::YLeaf delete_count; //type: uint32
        ydk::YLeaf threshold_exceed_count; //type: uint32

}; // Rcmd::Ospf::Instances::Instance::PrefixEventStatistics::PrefixEventStatistic


class Rcmd::Ospf::Instances::Instance::SpfRunSummaries : public ydk::Entity
{
    public:
        SpfRunSummaries();
        ~SpfRunSummaries();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class SpfRunSummary; //type: Rcmd::Ospf::Instances::Instance::SpfRunSummaries::SpfRunSummary

        ydk::YList spf_run_summary;
        
}; // Rcmd::Ospf::Instances::Instance::SpfRunSummaries


class Rcmd::Ospf::Instances::Instance::SpfRunSummaries::SpfRunSummary : public ydk::Entity
{
    public:
        SpfRunSummary();
        ~SpfRunSummary();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf spf_run_number; //type: uint32
        class SpfSummary; //type: Rcmd::Ospf::Instances::Instance::SpfRunSummaries::SpfRunSummary::SpfSummary
        class DijkstraRun; //type: Rcmd::Ospf::Instances::Instance::SpfRunSummaries::SpfRunSummary::DijkstraRun
        class InterAreaAndExternal; //type: Rcmd::Ospf::Instances::Instance::SpfRunSummaries::SpfRunSummary::InterAreaAndExternal

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_infra_rcmd_oper::Rcmd::Ospf::Instances::Instance::SpfRunSummaries::SpfRunSummary::SpfSummary> spf_summary;
        ydk::YList dijkstra_run;
        ydk::YList inter_area_and_external;
        
}; // Rcmd::Ospf::Instances::Instance::SpfRunSummaries::SpfRunSummary


class Rcmd::Ospf::Instances::Instance::SpfRunSummaries::SpfRunSummary::SpfSummary : public ydk::Entity
{
    public:
        SpfSummary();
        ~SpfSummary();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf state; //type: RcmdSpfState
        ydk::YLeaf is_data_complete; //type: boolean
        ydk::YLeaf threshold_exceeded; //type: boolean
        ydk::YLeaf trigger_time; //type: string
        ydk::YLeaf start_time; //type: string
        ydk::YLeaf duration; //type: string
        ydk::YLeaf total_dijkstra_runs; //type: uint16
        ydk::YLeaf total_inter_area_and_external_batches; //type: uint16
        ydk::YLeaf total_type12lsa_changes; //type: uint16
        ydk::YLeaf total_type357lsa_changes; //type: uint16
        class PrioritySummary; //type: Rcmd::Ospf::Instances::Instance::SpfRunSummaries::SpfRunSummary::SpfSummary::PrioritySummary

        ydk::YList priority_summary;
        
}; // Rcmd::Ospf::Instances::Instance::SpfRunSummaries::SpfRunSummary::SpfSummary


class Rcmd::Ospf::Instances::Instance::SpfRunSummaries::SpfRunSummary::SpfSummary::PrioritySummary : public ydk::Entity
{
    public:
        PrioritySummary();
        ~PrioritySummary();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf level; //type: RcmdPriorityLevel
        ydk::YLeaf threshold_exceeded; //type: boolean
        class RouteStatistics; //type: Rcmd::Ospf::Instances::Instance::SpfRunSummaries::SpfRunSummary::SpfSummary::PrioritySummary::RouteStatistics
        class IpConvergenceTime; //type: Rcmd::Ospf::Instances::Instance::SpfRunSummaries::SpfRunSummary::SpfSummary::PrioritySummary::IpConvergenceTime
        class MplsConvergenceTime; //type: Rcmd::Ospf::Instances::Instance::SpfRunSummaries::SpfRunSummary::SpfSummary::PrioritySummary::MplsConvergenceTime
        class FrrStatistic; //type: Rcmd::Ospf::Instances::Instance::SpfRunSummaries::SpfRunSummary::SpfSummary::PrioritySummary::FrrStatistic

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_infra_rcmd_oper::Rcmd::Ospf::Instances::Instance::SpfRunSummaries::SpfRunSummary::SpfSummary::PrioritySummary::RouteStatistics> route_statistics;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_infra_rcmd_oper::Rcmd::Ospf::Instances::Instance::SpfRunSummaries::SpfRunSummary::SpfSummary::PrioritySummary::IpConvergenceTime> ip_convergence_time;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_infra_rcmd_oper::Rcmd::Ospf::Instances::Instance::SpfRunSummaries::SpfRunSummary::SpfSummary::PrioritySummary::MplsConvergenceTime> mpls_convergence_time;
        ydk::YList frr_statistic;
        
}; // Rcmd::Ospf::Instances::Instance::SpfRunSummaries::SpfRunSummary::SpfSummary::PrioritySummary


class Rcmd::Ospf::Instances::Instance::SpfRunSummaries::SpfRunSummary::SpfSummary::PrioritySummary::RouteStatistics : public ydk::Entity
{
    public:
        RouteStatistics();
        ~RouteStatistics();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf adds; //type: uint32
        ydk::YLeaf deletes; //type: uint32
        ydk::YLeaf modifies; //type: uint32
        ydk::YLeaf reachables; //type: uint32
        ydk::YLeaf unreachables; //type: uint32
        ydk::YLeaf touches; //type: uint32

}; // Rcmd::Ospf::Instances::Instance::SpfRunSummaries::SpfRunSummary::SpfSummary::PrioritySummary::RouteStatistics


class Rcmd::Ospf::Instances::Instance::SpfRunSummaries::SpfRunSummary::SpfSummary::PrioritySummary::IpConvergenceTime : public ydk::Entity
{
    public:
        IpConvergenceTime();
        ~IpConvergenceTime();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf minimum_time; //type: string
        ydk::YLeaf maximum_time; //type: string
        ydk::YLeaf slowest_node_name; //type: string
        ydk::YLeaf fastest_node_name; //type: string

}; // Rcmd::Ospf::Instances::Instance::SpfRunSummaries::SpfRunSummary::SpfSummary::PrioritySummary::IpConvergenceTime


class Rcmd::Ospf::Instances::Instance::SpfRunSummaries::SpfRunSummary::SpfSummary::PrioritySummary::MplsConvergenceTime : public ydk::Entity
{
    public:
        MplsConvergenceTime();
        ~MplsConvergenceTime();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf minimum_time; //type: string
        ydk::YLeaf maximum_time; //type: string
        ydk::YLeaf slowest_node_name; //type: string
        ydk::YLeaf fastest_node_name; //type: string

}; // Rcmd::Ospf::Instances::Instance::SpfRunSummaries::SpfRunSummary::SpfSummary::PrioritySummary::MplsConvergenceTime


class Rcmd::Ospf::Instances::Instance::SpfRunSummaries::SpfRunSummary::SpfSummary::PrioritySummary::FrrStatistic : public ydk::Entity
{
    public:
        FrrStatistic();
        ~FrrStatistic();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf total_routes; //type: uint32
        ydk::YLeaf fully_protected_routes; //type: uint32
        ydk::YLeaf partially_protected_routes; //type: uint32
        ydk::YLeaf coverage; //type: string

}; // Rcmd::Ospf::Instances::Instance::SpfRunSummaries::SpfRunSummary::SpfSummary::PrioritySummary::FrrStatistic


class Rcmd::Ospf::Instances::Instance::SpfRunSummaries::SpfRunSummary::DijkstraRun : public ydk::Entity
{
    public:
        DijkstraRun();
        ~DijkstraRun();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf dijkstra_run_number; //type: uint32
        ydk::YLeaf area_id; //type: string
        ydk::YLeaf threshold_exceeded; //type: boolean
        ydk::YLeaf trigger_time; //type: string
        ydk::YLeaf start_time; //type: string
        ydk::YLeaf wait_time; //type: uint32
        ydk::YLeaf duration; //type: string
        class TriggerLsa; //type: Rcmd::Ospf::Instances::Instance::SpfRunSummaries::SpfRunSummary::DijkstraRun::TriggerLsa
        class Priority; //type: Rcmd::Ospf::Instances::Instance::SpfRunSummaries::SpfRunSummary::DijkstraRun::Priority
        class LsaProcessed; //type: Rcmd::Ospf::Instances::Instance::SpfRunSummaries::SpfRunSummary::DijkstraRun::LsaProcessed

        ydk::YList trigger_lsa;
        ydk::YList priority;
        ydk::YList lsa_processed;
        
}; // Rcmd::Ospf::Instances::Instance::SpfRunSummaries::SpfRunSummary::DijkstraRun


class Rcmd::Ospf::Instances::Instance::SpfRunSummaries::SpfRunSummary::DijkstraRun::TriggerLsa : public ydk::Entity
{
    public:
        TriggerLsa();
        ~TriggerLsa();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf lsa_id; //type: string
        ydk::YLeaf sequence_number; //type: string
        ydk::YLeaf lsa_type; //type: RcmdLsa
        ydk::YLeaf origin_router_id; //type: string
        ydk::YLeaf change_type; //type: RcmdLsChange
        ydk::YLeaf reception_time; //type: string

}; // Rcmd::Ospf::Instances::Instance::SpfRunSummaries::SpfRunSummary::DijkstraRun::TriggerLsa


class Rcmd::Ospf::Instances::Instance::SpfRunSummaries::SpfRunSummary::DijkstraRun::Priority : public ydk::Entity
{
    public:
        Priority();
        ~Priority();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class PrioritySummary; //type: Rcmd::Ospf::Instances::Instance::SpfRunSummaries::SpfRunSummary::DijkstraRun::Priority::PrioritySummary
        class ConvergenceTimeline; //type: Rcmd::Ospf::Instances::Instance::SpfRunSummaries::SpfRunSummary::DijkstraRun::Priority::ConvergenceTimeline
        class LeafNetworksAdded; //type: Rcmd::Ospf::Instances::Instance::SpfRunSummaries::SpfRunSummary::DijkstraRun::Priority::LeafNetworksAdded
        class LeafNetworksDeleted; //type: Rcmd::Ospf::Instances::Instance::SpfRunSummaries::SpfRunSummary::DijkstraRun::Priority::LeafNetworksDeleted

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_infra_rcmd_oper::Rcmd::Ospf::Instances::Instance::SpfRunSummaries::SpfRunSummary::DijkstraRun::Priority::PrioritySummary> priority_summary;
        ydk::YList convergence_timeline;
        ydk::YList leaf_networks_added;
        ydk::YList leaf_networks_deleted;
        
}; // Rcmd::Ospf::Instances::Instance::SpfRunSummaries::SpfRunSummary::DijkstraRun::Priority


class Rcmd::Ospf::Instances::Instance::SpfRunSummaries::SpfRunSummary::DijkstraRun::Priority::PrioritySummary : public ydk::Entity
{
    public:
        PrioritySummary();
        ~PrioritySummary();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf level; //type: RcmdPriorityLevel
        ydk::YLeaf threshold_exceeded; //type: boolean
        class RouteStatistics; //type: Rcmd::Ospf::Instances::Instance::SpfRunSummaries::SpfRunSummary::DijkstraRun::Priority::PrioritySummary::RouteStatistics
        class IpConvergenceTime; //type: Rcmd::Ospf::Instances::Instance::SpfRunSummaries::SpfRunSummary::DijkstraRun::Priority::PrioritySummary::IpConvergenceTime
        class MplsConvergenceTime; //type: Rcmd::Ospf::Instances::Instance::SpfRunSummaries::SpfRunSummary::DijkstraRun::Priority::PrioritySummary::MplsConvergenceTime
        class FrrStatistic; //type: Rcmd::Ospf::Instances::Instance::SpfRunSummaries::SpfRunSummary::DijkstraRun::Priority::PrioritySummary::FrrStatistic

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_infra_rcmd_oper::Rcmd::Ospf::Instances::Instance::SpfRunSummaries::SpfRunSummary::DijkstraRun::Priority::PrioritySummary::RouteStatistics> route_statistics;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_infra_rcmd_oper::Rcmd::Ospf::Instances::Instance::SpfRunSummaries::SpfRunSummary::DijkstraRun::Priority::PrioritySummary::IpConvergenceTime> ip_convergence_time;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_infra_rcmd_oper::Rcmd::Ospf::Instances::Instance::SpfRunSummaries::SpfRunSummary::DijkstraRun::Priority::PrioritySummary::MplsConvergenceTime> mpls_convergence_time;
        ydk::YList frr_statistic;
        
}; // Rcmd::Ospf::Instances::Instance::SpfRunSummaries::SpfRunSummary::DijkstraRun::Priority::PrioritySummary


class Rcmd::Ospf::Instances::Instance::SpfRunSummaries::SpfRunSummary::DijkstraRun::Priority::PrioritySummary::RouteStatistics : public ydk::Entity
{
    public:
        RouteStatistics();
        ~RouteStatistics();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf adds; //type: uint32
        ydk::YLeaf deletes; //type: uint32
        ydk::YLeaf modifies; //type: uint32
        ydk::YLeaf reachables; //type: uint32
        ydk::YLeaf unreachables; //type: uint32
        ydk::YLeaf touches; //type: uint32

}; // Rcmd::Ospf::Instances::Instance::SpfRunSummaries::SpfRunSummary::DijkstraRun::Priority::PrioritySummary::RouteStatistics


class Rcmd::Ospf::Instances::Instance::SpfRunSummaries::SpfRunSummary::DijkstraRun::Priority::PrioritySummary::IpConvergenceTime : public ydk::Entity
{
    public:
        IpConvergenceTime();
        ~IpConvergenceTime();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf minimum_time; //type: string
        ydk::YLeaf maximum_time; //type: string
        ydk::YLeaf slowest_node_name; //type: string
        ydk::YLeaf fastest_node_name; //type: string

}; // Rcmd::Ospf::Instances::Instance::SpfRunSummaries::SpfRunSummary::DijkstraRun::Priority::PrioritySummary::IpConvergenceTime


class Rcmd::Ospf::Instances::Instance::SpfRunSummaries::SpfRunSummary::DijkstraRun::Priority::PrioritySummary::MplsConvergenceTime : public ydk::Entity
{
    public:
        MplsConvergenceTime();
        ~MplsConvergenceTime();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf minimum_time; //type: string
        ydk::YLeaf maximum_time; //type: string
        ydk::YLeaf slowest_node_name; //type: string
        ydk::YLeaf fastest_node_name; //type: string

}; // Rcmd::Ospf::Instances::Instance::SpfRunSummaries::SpfRunSummary::DijkstraRun::Priority::PrioritySummary::MplsConvergenceTime


class Rcmd::Ospf::Instances::Instance::SpfRunSummaries::SpfRunSummary::DijkstraRun::Priority::PrioritySummary::FrrStatistic : public ydk::Entity
{
    public:
        FrrStatistic();
        ~FrrStatistic();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf total_routes; //type: uint32
        ydk::YLeaf fully_protected_routes; //type: uint32
        ydk::YLeaf partially_protected_routes; //type: uint32
        ydk::YLeaf coverage; //type: string

}; // Rcmd::Ospf::Instances::Instance::SpfRunSummaries::SpfRunSummary::DijkstraRun::Priority::PrioritySummary::FrrStatistic


class Rcmd::Ospf::Instances::Instance::SpfRunSummaries::SpfRunSummary::DijkstraRun::Priority::ConvergenceTimeline : public ydk::Entity
{
    public:
        ConvergenceTimeline();
        ~ConvergenceTimeline();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class RouteOrigin; //type: Rcmd::Ospf::Instances::Instance::SpfRunSummaries::SpfRunSummary::DijkstraRun::Priority::ConvergenceTimeline::RouteOrigin
        class RiBv4Enter; //type: Rcmd::Ospf::Instances::Instance::SpfRunSummaries::SpfRunSummary::DijkstraRun::Priority::ConvergenceTimeline::RiBv4Enter
        class RiBv4Exit; //type: Rcmd::Ospf::Instances::Instance::SpfRunSummaries::SpfRunSummary::DijkstraRun::Priority::ConvergenceTimeline::RiBv4Exit
        class RiBv4Redistribute; //type: Rcmd::Ospf::Instances::Instance::SpfRunSummaries::SpfRunSummary::DijkstraRun::Priority::ConvergenceTimeline::RiBv4Redistribute
        class LdpEnter; //type: Rcmd::Ospf::Instances::Instance::SpfRunSummaries::SpfRunSummary::DijkstraRun::Priority::ConvergenceTimeline::LdpEnter
        class LdpExit; //type: Rcmd::Ospf::Instances::Instance::SpfRunSummaries::SpfRunSummary::DijkstraRun::Priority::ConvergenceTimeline::LdpExit
        class LsdEnter; //type: Rcmd::Ospf::Instances::Instance::SpfRunSummaries::SpfRunSummary::DijkstraRun::Priority::ConvergenceTimeline::LsdEnter
        class LsdExit; //type: Rcmd::Ospf::Instances::Instance::SpfRunSummaries::SpfRunSummary::DijkstraRun::Priority::ConvergenceTimeline::LsdExit
        class LcIp; //type: Rcmd::Ospf::Instances::Instance::SpfRunSummaries::SpfRunSummary::DijkstraRun::Priority::ConvergenceTimeline::LcIp
        class LcMpls; //type: Rcmd::Ospf::Instances::Instance::SpfRunSummaries::SpfRunSummary::DijkstraRun::Priority::ConvergenceTimeline::LcMpls

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_infra_rcmd_oper::Rcmd::Ospf::Instances::Instance::SpfRunSummaries::SpfRunSummary::DijkstraRun::Priority::ConvergenceTimeline::RouteOrigin> route_origin;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_infra_rcmd_oper::Rcmd::Ospf::Instances::Instance::SpfRunSummaries::SpfRunSummary::DijkstraRun::Priority::ConvergenceTimeline::RiBv4Enter> ri_bv4_enter;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_infra_rcmd_oper::Rcmd::Ospf::Instances::Instance::SpfRunSummaries::SpfRunSummary::DijkstraRun::Priority::ConvergenceTimeline::RiBv4Exit> ri_bv4_exit;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_infra_rcmd_oper::Rcmd::Ospf::Instances::Instance::SpfRunSummaries::SpfRunSummary::DijkstraRun::Priority::ConvergenceTimeline::RiBv4Redistribute> ri_bv4_redistribute;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_infra_rcmd_oper::Rcmd::Ospf::Instances::Instance::SpfRunSummaries::SpfRunSummary::DijkstraRun::Priority::ConvergenceTimeline::LdpEnter> ldp_enter;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_infra_rcmd_oper::Rcmd::Ospf::Instances::Instance::SpfRunSummaries::SpfRunSummary::DijkstraRun::Priority::ConvergenceTimeline::LdpExit> ldp_exit;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_infra_rcmd_oper::Rcmd::Ospf::Instances::Instance::SpfRunSummaries::SpfRunSummary::DijkstraRun::Priority::ConvergenceTimeline::LsdEnter> lsd_enter;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_infra_rcmd_oper::Rcmd::Ospf::Instances::Instance::SpfRunSummaries::SpfRunSummary::DijkstraRun::Priority::ConvergenceTimeline::LsdExit> lsd_exit;
        ydk::YList lc_ip;
        ydk::YList lc_mpls;
        
}; // Rcmd::Ospf::Instances::Instance::SpfRunSummaries::SpfRunSummary::DijkstraRun::Priority::ConvergenceTimeline


class Rcmd::Ospf::Instances::Instance::SpfRunSummaries::SpfRunSummary::DijkstraRun::Priority::ConvergenceTimeline::RouteOrigin : public ydk::Entity
{
    public:
        RouteOrigin();
        ~RouteOrigin();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf start_time; //type: string
        ydk::YLeaf end_time; //type: string
        ydk::YLeaf duration; //type: string

}; // Rcmd::Ospf::Instances::Instance::SpfRunSummaries::SpfRunSummary::DijkstraRun::Priority::ConvergenceTimeline::RouteOrigin


class Rcmd::Ospf::Instances::Instance::SpfRunSummaries::SpfRunSummary::DijkstraRun::Priority::ConvergenceTimeline::RiBv4Enter : public ydk::Entity
{
    public:
        RiBv4Enter();
        ~RiBv4Enter();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf start_time; //type: string
        ydk::YLeaf end_time; //type: string
        ydk::YLeaf duration; //type: string

}; // Rcmd::Ospf::Instances::Instance::SpfRunSummaries::SpfRunSummary::DijkstraRun::Priority::ConvergenceTimeline::RiBv4Enter


class Rcmd::Ospf::Instances::Instance::SpfRunSummaries::SpfRunSummary::DijkstraRun::Priority::ConvergenceTimeline::RiBv4Exit : public ydk::Entity
{
    public:
        RiBv4Exit();
        ~RiBv4Exit();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf start_time; //type: string
        ydk::YLeaf end_time; //type: string
        ydk::YLeaf duration; //type: string

}; // Rcmd::Ospf::Instances::Instance::SpfRunSummaries::SpfRunSummary::DijkstraRun::Priority::ConvergenceTimeline::RiBv4Exit


class Rcmd::Ospf::Instances::Instance::SpfRunSummaries::SpfRunSummary::DijkstraRun::Priority::ConvergenceTimeline::RiBv4Redistribute : public ydk::Entity
{
    public:
        RiBv4Redistribute();
        ~RiBv4Redistribute();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf start_time; //type: string
        ydk::YLeaf end_time; //type: string
        ydk::YLeaf duration; //type: string

}; // Rcmd::Ospf::Instances::Instance::SpfRunSummaries::SpfRunSummary::DijkstraRun::Priority::ConvergenceTimeline::RiBv4Redistribute


class Rcmd::Ospf::Instances::Instance::SpfRunSummaries::SpfRunSummary::DijkstraRun::Priority::ConvergenceTimeline::LdpEnter : public ydk::Entity
{
    public:
        LdpEnter();
        ~LdpEnter();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf start_time; //type: string
        ydk::YLeaf end_time; //type: string
        ydk::YLeaf duration; //type: string

}; // Rcmd::Ospf::Instances::Instance::SpfRunSummaries::SpfRunSummary::DijkstraRun::Priority::ConvergenceTimeline::LdpEnter


class Rcmd::Ospf::Instances::Instance::SpfRunSummaries::SpfRunSummary::DijkstraRun::Priority::ConvergenceTimeline::LdpExit : public ydk::Entity
{
    public:
        LdpExit();
        ~LdpExit();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf start_time; //type: string
        ydk::YLeaf end_time; //type: string
        ydk::YLeaf duration; //type: string

}; // Rcmd::Ospf::Instances::Instance::SpfRunSummaries::SpfRunSummary::DijkstraRun::Priority::ConvergenceTimeline::LdpExit


class Rcmd::Ospf::Instances::Instance::SpfRunSummaries::SpfRunSummary::DijkstraRun::Priority::ConvergenceTimeline::LsdEnter : public ydk::Entity
{
    public:
        LsdEnter();
        ~LsdEnter();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf start_time; //type: string
        ydk::YLeaf end_time; //type: string
        ydk::YLeaf duration; //type: string

}; // Rcmd::Ospf::Instances::Instance::SpfRunSummaries::SpfRunSummary::DijkstraRun::Priority::ConvergenceTimeline::LsdEnter


class Rcmd::Ospf::Instances::Instance::SpfRunSummaries::SpfRunSummary::DijkstraRun::Priority::ConvergenceTimeline::LsdExit : public ydk::Entity
{
    public:
        LsdExit();
        ~LsdExit();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf start_time; //type: string
        ydk::YLeaf end_time; //type: string
        ydk::YLeaf duration; //type: string

}; // Rcmd::Ospf::Instances::Instance::SpfRunSummaries::SpfRunSummary::DijkstraRun::Priority::ConvergenceTimeline::LsdExit


class Rcmd::Ospf::Instances::Instance::SpfRunSummaries::SpfRunSummary::DijkstraRun::Priority::ConvergenceTimeline::LcIp : public ydk::Entity
{
    public:
        LcIp();
        ~LcIp();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf node_name; //type: string
        ydk::YLeaf speed; //type: RcmdLinecardSpeed
        class FibComplete; //type: Rcmd::Ospf::Instances::Instance::SpfRunSummaries::SpfRunSummary::DijkstraRun::Priority::ConvergenceTimeline::LcIp::FibComplete

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_infra_rcmd_oper::Rcmd::Ospf::Instances::Instance::SpfRunSummaries::SpfRunSummary::DijkstraRun::Priority::ConvergenceTimeline::LcIp::FibComplete> fib_complete;
        
}; // Rcmd::Ospf::Instances::Instance::SpfRunSummaries::SpfRunSummary::DijkstraRun::Priority::ConvergenceTimeline::LcIp


class Rcmd::Ospf::Instances::Instance::SpfRunSummaries::SpfRunSummary::DijkstraRun::Priority::ConvergenceTimeline::LcIp::FibComplete : public ydk::Entity
{
    public:
        FibComplete();
        ~FibComplete();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf start_time; //type: string
        ydk::YLeaf end_time; //type: string
        ydk::YLeaf duration; //type: string

}; // Rcmd::Ospf::Instances::Instance::SpfRunSummaries::SpfRunSummary::DijkstraRun::Priority::ConvergenceTimeline::LcIp::FibComplete


class Rcmd::Ospf::Instances::Instance::SpfRunSummaries::SpfRunSummary::DijkstraRun::Priority::ConvergenceTimeline::LcMpls : public ydk::Entity
{
    public:
        LcMpls();
        ~LcMpls();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf node_name; //type: string
        ydk::YLeaf speed; //type: RcmdLinecardSpeed
        class FibComplete; //type: Rcmd::Ospf::Instances::Instance::SpfRunSummaries::SpfRunSummary::DijkstraRun::Priority::ConvergenceTimeline::LcMpls::FibComplete

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_infra_rcmd_oper::Rcmd::Ospf::Instances::Instance::SpfRunSummaries::SpfRunSummary::DijkstraRun::Priority::ConvergenceTimeline::LcMpls::FibComplete> fib_complete;
        
}; // Rcmd::Ospf::Instances::Instance::SpfRunSummaries::SpfRunSummary::DijkstraRun::Priority::ConvergenceTimeline::LcMpls


class Rcmd::Ospf::Instances::Instance::SpfRunSummaries::SpfRunSummary::DijkstraRun::Priority::ConvergenceTimeline::LcMpls::FibComplete : public ydk::Entity
{
    public:
        FibComplete();
        ~FibComplete();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf start_time; //type: string
        ydk::YLeaf end_time; //type: string
        ydk::YLeaf duration; //type: string

}; // Rcmd::Ospf::Instances::Instance::SpfRunSummaries::SpfRunSummary::DijkstraRun::Priority::ConvergenceTimeline::LcMpls::FibComplete


class Rcmd::Ospf::Instances::Instance::SpfRunSummaries::SpfRunSummary::DijkstraRun::Priority::LeafNetworksAdded : public ydk::Entity
{
    public:
        LeafNetworksAdded();
        ~LeafNetworksAdded();

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
        ydk::YLeaf net_mask; //type: uint8

}; // Rcmd::Ospf::Instances::Instance::SpfRunSummaries::SpfRunSummary::DijkstraRun::Priority::LeafNetworksAdded


class Rcmd::Ospf::Instances::Instance::SpfRunSummaries::SpfRunSummary::DijkstraRun::Priority::LeafNetworksDeleted : public ydk::Entity
{
    public:
        LeafNetworksDeleted();
        ~LeafNetworksDeleted();

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
        ydk::YLeaf net_mask; //type: uint8

}; // Rcmd::Ospf::Instances::Instance::SpfRunSummaries::SpfRunSummary::DijkstraRun::Priority::LeafNetworksDeleted


class Rcmd::Ospf::Instances::Instance::SpfRunSummaries::SpfRunSummary::DijkstraRun::LsaProcessed : public ydk::Entity
{
    public:
        LsaProcessed();
        ~LsaProcessed();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf lsa_id; //type: string
        ydk::YLeaf sequence_number; //type: string
        ydk::YLeaf lsa_type; //type: RcmdLsa
        ydk::YLeaf origin_router_id; //type: string
        ydk::YLeaf change_type; //type: RcmdLsChange
        ydk::YLeaf reception_time; //type: string

}; // Rcmd::Ospf::Instances::Instance::SpfRunSummaries::SpfRunSummary::DijkstraRun::LsaProcessed


class Rcmd::Ospf::Instances::Instance::SpfRunSummaries::SpfRunSummary::InterAreaAndExternal : public ydk::Entity
{
    public:
        InterAreaAndExternal();
        ~InterAreaAndExternal();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Priority; //type: Rcmd::Ospf::Instances::Instance::SpfRunSummaries::SpfRunSummary::InterAreaAndExternal::Priority

        ydk::YList priority;
        
}; // Rcmd::Ospf::Instances::Instance::SpfRunSummaries::SpfRunSummary::InterAreaAndExternal


class Rcmd::Ospf::Instances::Instance::SpfRunSummaries::SpfRunSummary::InterAreaAndExternal::Priority : public ydk::Entity
{
    public:
        Priority();
        ~Priority();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class PrioritySummary; //type: Rcmd::Ospf::Instances::Instance::SpfRunSummaries::SpfRunSummary::InterAreaAndExternal::Priority::PrioritySummary
        class ConvergenceTimeline; //type: Rcmd::Ospf::Instances::Instance::SpfRunSummaries::SpfRunSummary::InterAreaAndExternal::Priority::ConvergenceTimeline
        class LeafNetworksAdded; //type: Rcmd::Ospf::Instances::Instance::SpfRunSummaries::SpfRunSummary::InterAreaAndExternal::Priority::LeafNetworksAdded
        class LeafNetworksDeleted; //type: Rcmd::Ospf::Instances::Instance::SpfRunSummaries::SpfRunSummary::InterAreaAndExternal::Priority::LeafNetworksDeleted

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_infra_rcmd_oper::Rcmd::Ospf::Instances::Instance::SpfRunSummaries::SpfRunSummary::InterAreaAndExternal::Priority::PrioritySummary> priority_summary;
        ydk::YList convergence_timeline;
        ydk::YList leaf_networks_added;
        ydk::YList leaf_networks_deleted;
        
}; // Rcmd::Ospf::Instances::Instance::SpfRunSummaries::SpfRunSummary::InterAreaAndExternal::Priority


class Rcmd::Ospf::Instances::Instance::SpfRunSummaries::SpfRunSummary::InterAreaAndExternal::Priority::PrioritySummary : public ydk::Entity
{
    public:
        PrioritySummary();
        ~PrioritySummary();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf level; //type: RcmdPriorityLevel
        ydk::YLeaf threshold_exceeded; //type: boolean
        ydk::YLeaf type3ls_as; //type: uint32
        ydk::YLeaf type4ls_as; //type: uint32
        ydk::YLeaf type57ls_as; //type: uint32
        class RouteStatistics; //type: Rcmd::Ospf::Instances::Instance::SpfRunSummaries::SpfRunSummary::InterAreaAndExternal::Priority::PrioritySummary::RouteStatistics
        class IpConvergenceTime; //type: Rcmd::Ospf::Instances::Instance::SpfRunSummaries::SpfRunSummary::InterAreaAndExternal::Priority::PrioritySummary::IpConvergenceTime
        class MplsConvergenceTime; //type: Rcmd::Ospf::Instances::Instance::SpfRunSummaries::SpfRunSummary::InterAreaAndExternal::Priority::PrioritySummary::MplsConvergenceTime

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_infra_rcmd_oper::Rcmd::Ospf::Instances::Instance::SpfRunSummaries::SpfRunSummary::InterAreaAndExternal::Priority::PrioritySummary::RouteStatistics> route_statistics;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_infra_rcmd_oper::Rcmd::Ospf::Instances::Instance::SpfRunSummaries::SpfRunSummary::InterAreaAndExternal::Priority::PrioritySummary::IpConvergenceTime> ip_convergence_time;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_infra_rcmd_oper::Rcmd::Ospf::Instances::Instance::SpfRunSummaries::SpfRunSummary::InterAreaAndExternal::Priority::PrioritySummary::MplsConvergenceTime> mpls_convergence_time;
        
}; // Rcmd::Ospf::Instances::Instance::SpfRunSummaries::SpfRunSummary::InterAreaAndExternal::Priority::PrioritySummary


class Rcmd::Ospf::Instances::Instance::SpfRunSummaries::SpfRunSummary::InterAreaAndExternal::Priority::PrioritySummary::RouteStatistics : public ydk::Entity
{
    public:
        RouteStatistics();
        ~RouteStatistics();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf adds; //type: uint32
        ydk::YLeaf deletes; //type: uint32
        ydk::YLeaf modifies; //type: uint32
        ydk::YLeaf reachables; //type: uint32
        ydk::YLeaf unreachables; //type: uint32
        ydk::YLeaf touches; //type: uint32

}; // Rcmd::Ospf::Instances::Instance::SpfRunSummaries::SpfRunSummary::InterAreaAndExternal::Priority::PrioritySummary::RouteStatistics


class Rcmd::Ospf::Instances::Instance::SpfRunSummaries::SpfRunSummary::InterAreaAndExternal::Priority::PrioritySummary::IpConvergenceTime : public ydk::Entity
{
    public:
        IpConvergenceTime();
        ~IpConvergenceTime();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf minimum_time; //type: string
        ydk::YLeaf maximum_time; //type: string
        ydk::YLeaf slowest_node_name; //type: string
        ydk::YLeaf fastest_node_name; //type: string

}; // Rcmd::Ospf::Instances::Instance::SpfRunSummaries::SpfRunSummary::InterAreaAndExternal::Priority::PrioritySummary::IpConvergenceTime


class Rcmd::Ospf::Instances::Instance::SpfRunSummaries::SpfRunSummary::InterAreaAndExternal::Priority::PrioritySummary::MplsConvergenceTime : public ydk::Entity
{
    public:
        MplsConvergenceTime();
        ~MplsConvergenceTime();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf minimum_time; //type: string
        ydk::YLeaf maximum_time; //type: string
        ydk::YLeaf slowest_node_name; //type: string
        ydk::YLeaf fastest_node_name; //type: string

}; // Rcmd::Ospf::Instances::Instance::SpfRunSummaries::SpfRunSummary::InterAreaAndExternal::Priority::PrioritySummary::MplsConvergenceTime


class Rcmd::Ospf::Instances::Instance::SpfRunSummaries::SpfRunSummary::InterAreaAndExternal::Priority::ConvergenceTimeline : public ydk::Entity
{
    public:
        ConvergenceTimeline();
        ~ConvergenceTimeline();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class RouteOrigin; //type: Rcmd::Ospf::Instances::Instance::SpfRunSummaries::SpfRunSummary::InterAreaAndExternal::Priority::ConvergenceTimeline::RouteOrigin
        class RiBv4Enter; //type: Rcmd::Ospf::Instances::Instance::SpfRunSummaries::SpfRunSummary::InterAreaAndExternal::Priority::ConvergenceTimeline::RiBv4Enter
        class RiBv4Exit; //type: Rcmd::Ospf::Instances::Instance::SpfRunSummaries::SpfRunSummary::InterAreaAndExternal::Priority::ConvergenceTimeline::RiBv4Exit
        class RiBv4Redistribute; //type: Rcmd::Ospf::Instances::Instance::SpfRunSummaries::SpfRunSummary::InterAreaAndExternal::Priority::ConvergenceTimeline::RiBv4Redistribute
        class LdpEnter; //type: Rcmd::Ospf::Instances::Instance::SpfRunSummaries::SpfRunSummary::InterAreaAndExternal::Priority::ConvergenceTimeline::LdpEnter
        class LdpExit; //type: Rcmd::Ospf::Instances::Instance::SpfRunSummaries::SpfRunSummary::InterAreaAndExternal::Priority::ConvergenceTimeline::LdpExit
        class LsdEnter; //type: Rcmd::Ospf::Instances::Instance::SpfRunSummaries::SpfRunSummary::InterAreaAndExternal::Priority::ConvergenceTimeline::LsdEnter
        class LsdExit; //type: Rcmd::Ospf::Instances::Instance::SpfRunSummaries::SpfRunSummary::InterAreaAndExternal::Priority::ConvergenceTimeline::LsdExit
        class LcIp; //type: Rcmd::Ospf::Instances::Instance::SpfRunSummaries::SpfRunSummary::InterAreaAndExternal::Priority::ConvergenceTimeline::LcIp
        class LcMpls; //type: Rcmd::Ospf::Instances::Instance::SpfRunSummaries::SpfRunSummary::InterAreaAndExternal::Priority::ConvergenceTimeline::LcMpls

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_infra_rcmd_oper::Rcmd::Ospf::Instances::Instance::SpfRunSummaries::SpfRunSummary::InterAreaAndExternal::Priority::ConvergenceTimeline::RouteOrigin> route_origin;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_infra_rcmd_oper::Rcmd::Ospf::Instances::Instance::SpfRunSummaries::SpfRunSummary::InterAreaAndExternal::Priority::ConvergenceTimeline::RiBv4Enter> ri_bv4_enter;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_infra_rcmd_oper::Rcmd::Ospf::Instances::Instance::SpfRunSummaries::SpfRunSummary::InterAreaAndExternal::Priority::ConvergenceTimeline::RiBv4Exit> ri_bv4_exit;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_infra_rcmd_oper::Rcmd::Ospf::Instances::Instance::SpfRunSummaries::SpfRunSummary::InterAreaAndExternal::Priority::ConvergenceTimeline::RiBv4Redistribute> ri_bv4_redistribute;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_infra_rcmd_oper::Rcmd::Ospf::Instances::Instance::SpfRunSummaries::SpfRunSummary::InterAreaAndExternal::Priority::ConvergenceTimeline::LdpEnter> ldp_enter;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_infra_rcmd_oper::Rcmd::Ospf::Instances::Instance::SpfRunSummaries::SpfRunSummary::InterAreaAndExternal::Priority::ConvergenceTimeline::LdpExit> ldp_exit;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_infra_rcmd_oper::Rcmd::Ospf::Instances::Instance::SpfRunSummaries::SpfRunSummary::InterAreaAndExternal::Priority::ConvergenceTimeline::LsdEnter> lsd_enter;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_infra_rcmd_oper::Rcmd::Ospf::Instances::Instance::SpfRunSummaries::SpfRunSummary::InterAreaAndExternal::Priority::ConvergenceTimeline::LsdExit> lsd_exit;
        ydk::YList lc_ip;
        ydk::YList lc_mpls;
        
}; // Rcmd::Ospf::Instances::Instance::SpfRunSummaries::SpfRunSummary::InterAreaAndExternal::Priority::ConvergenceTimeline


class Rcmd::Ospf::Instances::Instance::SpfRunSummaries::SpfRunSummary::InterAreaAndExternal::Priority::ConvergenceTimeline::RouteOrigin : public ydk::Entity
{
    public:
        RouteOrigin();
        ~RouteOrigin();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf start_time; //type: string
        ydk::YLeaf end_time; //type: string
        ydk::YLeaf duration; //type: string

}; // Rcmd::Ospf::Instances::Instance::SpfRunSummaries::SpfRunSummary::InterAreaAndExternal::Priority::ConvergenceTimeline::RouteOrigin


class Rcmd::Ospf::Instances::Instance::SpfRunSummaries::SpfRunSummary::InterAreaAndExternal::Priority::ConvergenceTimeline::RiBv4Enter : public ydk::Entity
{
    public:
        RiBv4Enter();
        ~RiBv4Enter();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf start_time; //type: string
        ydk::YLeaf end_time; //type: string
        ydk::YLeaf duration; //type: string

}; // Rcmd::Ospf::Instances::Instance::SpfRunSummaries::SpfRunSummary::InterAreaAndExternal::Priority::ConvergenceTimeline::RiBv4Enter


class Rcmd::Ospf::Instances::Instance::SpfRunSummaries::SpfRunSummary::InterAreaAndExternal::Priority::ConvergenceTimeline::RiBv4Exit : public ydk::Entity
{
    public:
        RiBv4Exit();
        ~RiBv4Exit();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf start_time; //type: string
        ydk::YLeaf end_time; //type: string
        ydk::YLeaf duration; //type: string

}; // Rcmd::Ospf::Instances::Instance::SpfRunSummaries::SpfRunSummary::InterAreaAndExternal::Priority::ConvergenceTimeline::RiBv4Exit


class Rcmd::Ospf::Instances::Instance::SpfRunSummaries::SpfRunSummary::InterAreaAndExternal::Priority::ConvergenceTimeline::RiBv4Redistribute : public ydk::Entity
{
    public:
        RiBv4Redistribute();
        ~RiBv4Redistribute();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf start_time; //type: string
        ydk::YLeaf end_time; //type: string
        ydk::YLeaf duration; //type: string

}; // Rcmd::Ospf::Instances::Instance::SpfRunSummaries::SpfRunSummary::InterAreaAndExternal::Priority::ConvergenceTimeline::RiBv4Redistribute


class Rcmd::Ospf::Instances::Instance::SpfRunSummaries::SpfRunSummary::InterAreaAndExternal::Priority::ConvergenceTimeline::LdpEnter : public ydk::Entity
{
    public:
        LdpEnter();
        ~LdpEnter();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf start_time; //type: string
        ydk::YLeaf end_time; //type: string
        ydk::YLeaf duration; //type: string

}; // Rcmd::Ospf::Instances::Instance::SpfRunSummaries::SpfRunSummary::InterAreaAndExternal::Priority::ConvergenceTimeline::LdpEnter


class Rcmd::Ospf::Instances::Instance::SpfRunSummaries::SpfRunSummary::InterAreaAndExternal::Priority::ConvergenceTimeline::LdpExit : public ydk::Entity
{
    public:
        LdpExit();
        ~LdpExit();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf start_time; //type: string
        ydk::YLeaf end_time; //type: string
        ydk::YLeaf duration; //type: string

}; // Rcmd::Ospf::Instances::Instance::SpfRunSummaries::SpfRunSummary::InterAreaAndExternal::Priority::ConvergenceTimeline::LdpExit


class Rcmd::Ospf::Instances::Instance::SpfRunSummaries::SpfRunSummary::InterAreaAndExternal::Priority::ConvergenceTimeline::LsdEnter : public ydk::Entity
{
    public:
        LsdEnter();
        ~LsdEnter();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf start_time; //type: string
        ydk::YLeaf end_time; //type: string
        ydk::YLeaf duration; //type: string

}; // Rcmd::Ospf::Instances::Instance::SpfRunSummaries::SpfRunSummary::InterAreaAndExternal::Priority::ConvergenceTimeline::LsdEnter


class Rcmd::Ospf::Instances::Instance::SpfRunSummaries::SpfRunSummary::InterAreaAndExternal::Priority::ConvergenceTimeline::LsdExit : public ydk::Entity
{
    public:
        LsdExit();
        ~LsdExit();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf start_time; //type: string
        ydk::YLeaf end_time; //type: string
        ydk::YLeaf duration; //type: string

}; // Rcmd::Ospf::Instances::Instance::SpfRunSummaries::SpfRunSummary::InterAreaAndExternal::Priority::ConvergenceTimeline::LsdExit


class Rcmd::Ospf::Instances::Instance::SpfRunSummaries::SpfRunSummary::InterAreaAndExternal::Priority::ConvergenceTimeline::LcIp : public ydk::Entity
{
    public:
        LcIp();
        ~LcIp();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf node_name; //type: string
        ydk::YLeaf speed; //type: RcmdLinecardSpeed
        class FibComplete; //type: Rcmd::Ospf::Instances::Instance::SpfRunSummaries::SpfRunSummary::InterAreaAndExternal::Priority::ConvergenceTimeline::LcIp::FibComplete

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_infra_rcmd_oper::Rcmd::Ospf::Instances::Instance::SpfRunSummaries::SpfRunSummary::InterAreaAndExternal::Priority::ConvergenceTimeline::LcIp::FibComplete> fib_complete;
        
}; // Rcmd::Ospf::Instances::Instance::SpfRunSummaries::SpfRunSummary::InterAreaAndExternal::Priority::ConvergenceTimeline::LcIp


class Rcmd::Ospf::Instances::Instance::SpfRunSummaries::SpfRunSummary::InterAreaAndExternal::Priority::ConvergenceTimeline::LcIp::FibComplete : public ydk::Entity
{
    public:
        FibComplete();
        ~FibComplete();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf start_time; //type: string
        ydk::YLeaf end_time; //type: string
        ydk::YLeaf duration; //type: string

}; // Rcmd::Ospf::Instances::Instance::SpfRunSummaries::SpfRunSummary::InterAreaAndExternal::Priority::ConvergenceTimeline::LcIp::FibComplete


class Rcmd::Ospf::Instances::Instance::SpfRunSummaries::SpfRunSummary::InterAreaAndExternal::Priority::ConvergenceTimeline::LcMpls : public ydk::Entity
{
    public:
        LcMpls();
        ~LcMpls();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf node_name; //type: string
        ydk::YLeaf speed; //type: RcmdLinecardSpeed
        class FibComplete; //type: Rcmd::Ospf::Instances::Instance::SpfRunSummaries::SpfRunSummary::InterAreaAndExternal::Priority::ConvergenceTimeline::LcMpls::FibComplete

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_infra_rcmd_oper::Rcmd::Ospf::Instances::Instance::SpfRunSummaries::SpfRunSummary::InterAreaAndExternal::Priority::ConvergenceTimeline::LcMpls::FibComplete> fib_complete;
        
}; // Rcmd::Ospf::Instances::Instance::SpfRunSummaries::SpfRunSummary::InterAreaAndExternal::Priority::ConvergenceTimeline::LcMpls


class Rcmd::Ospf::Instances::Instance::SpfRunSummaries::SpfRunSummary::InterAreaAndExternal::Priority::ConvergenceTimeline::LcMpls::FibComplete : public ydk::Entity
{
    public:
        FibComplete();
        ~FibComplete();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf start_time; //type: string
        ydk::YLeaf end_time; //type: string
        ydk::YLeaf duration; //type: string

}; // Rcmd::Ospf::Instances::Instance::SpfRunSummaries::SpfRunSummary::InterAreaAndExternal::Priority::ConvergenceTimeline::LcMpls::FibComplete


class Rcmd::Ospf::Instances::Instance::SpfRunSummaries::SpfRunSummary::InterAreaAndExternal::Priority::LeafNetworksAdded : public ydk::Entity
{
    public:
        LeafNetworksAdded();
        ~LeafNetworksAdded();

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
        ydk::YLeaf net_mask; //type: uint8

}; // Rcmd::Ospf::Instances::Instance::SpfRunSummaries::SpfRunSummary::InterAreaAndExternal::Priority::LeafNetworksAdded


class Rcmd::Ospf::Instances::Instance::SpfRunSummaries::SpfRunSummary::InterAreaAndExternal::Priority::LeafNetworksDeleted : public ydk::Entity
{
    public:
        LeafNetworksDeleted();
        ~LeafNetworksDeleted();

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
        ydk::YLeaf net_mask; //type: uint8

}; // Rcmd::Ospf::Instances::Instance::SpfRunSummaries::SpfRunSummary::InterAreaAndExternal::Priority::LeafNetworksDeleted


class Rcmd::Ospf::Instances::Instance::IpfrrEventOfflines : public ydk::Entity
{
    public:
        IpfrrEventOfflines();
        ~IpfrrEventOfflines();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class IpfrrEventOffline; //type: Rcmd::Ospf::Instances::Instance::IpfrrEventOfflines::IpfrrEventOffline

        ydk::YList ipfrr_event_offline;
        
}; // Rcmd::Ospf::Instances::Instance::IpfrrEventOfflines


class Rcmd::Ospf::Instances::Instance::IpfrrEventOfflines::IpfrrEventOffline : public ydk::Entity
{
    public:
        IpfrrEventOffline();
        ~IpfrrEventOffline();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf event_id; //type: uint32
        ydk::YLeaf event_id_xr; //type: uint32
        ydk::YLeaf trigger_time; //type: string
        ydk::YLeaf trigger_spf_run; //type: uint32
        ydk::YLeaf wait_time; //type: uint32
        ydk::YLeaf start_time_offset; //type: string
        ydk::YLeaf duration; //type: string
        ydk::YLeaf completed_spf_run; //type: uint32
        ydk::YLeaf total_routes; //type: uint32
        ydk::YLeaf fully_protected_routes; //type: uint32
        ydk::YLeaf partially_protected_routes; //type: uint32
        ydk::YLeaf coverage; //type: string
        class IpfrrStatistic; //type: Rcmd::Ospf::Instances::Instance::IpfrrEventOfflines::IpfrrEventOffline::IpfrrStatistic
        class RemoteNode; //type: Rcmd::Ospf::Instances::Instance::IpfrrEventOfflines::IpfrrEventOffline::RemoteNode

        ydk::YList ipfrr_statistic;
        ydk::YList remote_node;
        
}; // Rcmd::Ospf::Instances::Instance::IpfrrEventOfflines::IpfrrEventOffline


class Rcmd::Ospf::Instances::Instance::IpfrrEventOfflines::IpfrrEventOffline::IpfrrStatistic : public ydk::Entity
{
    public:
        IpfrrStatistic();
        ~IpfrrStatistic();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf priority; //type: RcmdPriorityLevel
        ydk::YLeaf total_routes; //type: uint32
        ydk::YLeaf fully_protected_routes; //type: uint32
        ydk::YLeaf partially_protected_routes; //type: uint32
        ydk::YLeaf coverage; //type: string
        ydk::YLeaf local_lfa_coverage; //type: string
        ydk::YLeaf remote_lfa_coverage; //type: string
        ydk::YLeaf below_threshold; //type: boolean

}; // Rcmd::Ospf::Instances::Instance::IpfrrEventOfflines::IpfrrEventOffline::IpfrrStatistic


class Rcmd::Ospf::Instances::Instance::IpfrrEventOfflines::IpfrrEventOffline::RemoteNode : public ydk::Entity
{
    public:
        RemoteNode();
        ~RemoteNode();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf remote_node_id; //type: string
        ydk::YLeaf interface_name; //type: string
        ydk::YLeaf neighbour_address; //type: string
        ydk::YLeaf path_count; //type: uint32
        ydk::YLeaf in_use_time; //type: string
        class PrimaryPath; //type: Rcmd::Ospf::Instances::Instance::IpfrrEventOfflines::IpfrrEventOffline::RemoteNode::PrimaryPath

        ydk::YList primary_path;
        
}; // Rcmd::Ospf::Instances::Instance::IpfrrEventOfflines::IpfrrEventOffline::RemoteNode


class Rcmd::Ospf::Instances::Instance::IpfrrEventOfflines::IpfrrEventOffline::RemoteNode::PrimaryPath : public ydk::Entity
{
    public:
        PrimaryPath();
        ~PrimaryPath();

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
        ydk::YLeaf neighbour_address; //type: string

}; // Rcmd::Ospf::Instances::Instance::IpfrrEventOfflines::IpfrrEventOffline::RemoteNode::PrimaryPath


class Rcmd::Ospf::Instances::Instance::SpfRunOfflines : public ydk::Entity
{
    public:
        SpfRunOfflines();
        ~SpfRunOfflines();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class SpfRunOffline; //type: Rcmd::Ospf::Instances::Instance::SpfRunOfflines::SpfRunOffline

        ydk::YList spf_run_offline;
        
}; // Rcmd::Ospf::Instances::Instance::SpfRunOfflines


class Rcmd::Ospf::Instances::Instance::SpfRunOfflines::SpfRunOffline : public ydk::Entity
{
    public:
        SpfRunOffline();
        ~SpfRunOffline();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf spf_run_number; //type: uint32
        class SpfSummary; //type: Rcmd::Ospf::Instances::Instance::SpfRunOfflines::SpfRunOffline::SpfSummary
        class DijkstraRun; //type: Rcmd::Ospf::Instances::Instance::SpfRunOfflines::SpfRunOffline::DijkstraRun
        class InterAreaAndExternal; //type: Rcmd::Ospf::Instances::Instance::SpfRunOfflines::SpfRunOffline::InterAreaAndExternal

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_infra_rcmd_oper::Rcmd::Ospf::Instances::Instance::SpfRunOfflines::SpfRunOffline::SpfSummary> spf_summary;
        ydk::YList dijkstra_run;
        ydk::YList inter_area_and_external;
        
}; // Rcmd::Ospf::Instances::Instance::SpfRunOfflines::SpfRunOffline


class Rcmd::Ospf::Instances::Instance::SpfRunOfflines::SpfRunOffline::SpfSummary : public ydk::Entity
{
    public:
        SpfSummary();
        ~SpfSummary();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf state; //type: RcmdSpfState
        ydk::YLeaf is_data_complete; //type: boolean
        ydk::YLeaf threshold_exceeded; //type: boolean
        ydk::YLeaf trigger_time; //type: string
        ydk::YLeaf start_time; //type: string
        ydk::YLeaf duration; //type: string
        ydk::YLeaf total_dijkstra_runs; //type: uint16
        ydk::YLeaf total_inter_area_and_external_batches; //type: uint16
        ydk::YLeaf total_type12lsa_changes; //type: uint16
        ydk::YLeaf total_type357lsa_changes; //type: uint16
        class PrioritySummary; //type: Rcmd::Ospf::Instances::Instance::SpfRunOfflines::SpfRunOffline::SpfSummary::PrioritySummary

        ydk::YList priority_summary;
        
}; // Rcmd::Ospf::Instances::Instance::SpfRunOfflines::SpfRunOffline::SpfSummary


class Rcmd::Ospf::Instances::Instance::SpfRunOfflines::SpfRunOffline::SpfSummary::PrioritySummary : public ydk::Entity
{
    public:
        PrioritySummary();
        ~PrioritySummary();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf level; //type: RcmdPriorityLevel
        ydk::YLeaf threshold_exceeded; //type: boolean
        class RouteStatistics; //type: Rcmd::Ospf::Instances::Instance::SpfRunOfflines::SpfRunOffline::SpfSummary::PrioritySummary::RouteStatistics
        class IpConvergenceTime; //type: Rcmd::Ospf::Instances::Instance::SpfRunOfflines::SpfRunOffline::SpfSummary::PrioritySummary::IpConvergenceTime
        class MplsConvergenceTime; //type: Rcmd::Ospf::Instances::Instance::SpfRunOfflines::SpfRunOffline::SpfSummary::PrioritySummary::MplsConvergenceTime
        class FrrStatistic; //type: Rcmd::Ospf::Instances::Instance::SpfRunOfflines::SpfRunOffline::SpfSummary::PrioritySummary::FrrStatistic

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_infra_rcmd_oper::Rcmd::Ospf::Instances::Instance::SpfRunOfflines::SpfRunOffline::SpfSummary::PrioritySummary::RouteStatistics> route_statistics;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_infra_rcmd_oper::Rcmd::Ospf::Instances::Instance::SpfRunOfflines::SpfRunOffline::SpfSummary::PrioritySummary::IpConvergenceTime> ip_convergence_time;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_infra_rcmd_oper::Rcmd::Ospf::Instances::Instance::SpfRunOfflines::SpfRunOffline::SpfSummary::PrioritySummary::MplsConvergenceTime> mpls_convergence_time;
        ydk::YList frr_statistic;
        
}; // Rcmd::Ospf::Instances::Instance::SpfRunOfflines::SpfRunOffline::SpfSummary::PrioritySummary


class Rcmd::Ospf::Instances::Instance::SpfRunOfflines::SpfRunOffline::SpfSummary::PrioritySummary::RouteStatistics : public ydk::Entity
{
    public:
        RouteStatistics();
        ~RouteStatistics();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf adds; //type: uint32
        ydk::YLeaf deletes; //type: uint32
        ydk::YLeaf modifies; //type: uint32
        ydk::YLeaf reachables; //type: uint32
        ydk::YLeaf unreachables; //type: uint32
        ydk::YLeaf touches; //type: uint32

}; // Rcmd::Ospf::Instances::Instance::SpfRunOfflines::SpfRunOffline::SpfSummary::PrioritySummary::RouteStatistics


class Rcmd::Ospf::Instances::Instance::SpfRunOfflines::SpfRunOffline::SpfSummary::PrioritySummary::IpConvergenceTime : public ydk::Entity
{
    public:
        IpConvergenceTime();
        ~IpConvergenceTime();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf minimum_time; //type: string
        ydk::YLeaf maximum_time; //type: string
        ydk::YLeaf slowest_node_name; //type: string
        ydk::YLeaf fastest_node_name; //type: string

}; // Rcmd::Ospf::Instances::Instance::SpfRunOfflines::SpfRunOffline::SpfSummary::PrioritySummary::IpConvergenceTime


class Rcmd::Ospf::Instances::Instance::SpfRunOfflines::SpfRunOffline::SpfSummary::PrioritySummary::MplsConvergenceTime : public ydk::Entity
{
    public:
        MplsConvergenceTime();
        ~MplsConvergenceTime();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf minimum_time; //type: string
        ydk::YLeaf maximum_time; //type: string
        ydk::YLeaf slowest_node_name; //type: string
        ydk::YLeaf fastest_node_name; //type: string

}; // Rcmd::Ospf::Instances::Instance::SpfRunOfflines::SpfRunOffline::SpfSummary::PrioritySummary::MplsConvergenceTime


class Rcmd::Ospf::Instances::Instance::SpfRunOfflines::SpfRunOffline::SpfSummary::PrioritySummary::FrrStatistic : public ydk::Entity
{
    public:
        FrrStatistic();
        ~FrrStatistic();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf total_routes; //type: uint32
        ydk::YLeaf fully_protected_routes; //type: uint32
        ydk::YLeaf partially_protected_routes; //type: uint32
        ydk::YLeaf coverage; //type: string

}; // Rcmd::Ospf::Instances::Instance::SpfRunOfflines::SpfRunOffline::SpfSummary::PrioritySummary::FrrStatistic


class Rcmd::Ospf::Instances::Instance::SpfRunOfflines::SpfRunOffline::DijkstraRun : public ydk::Entity
{
    public:
        DijkstraRun();
        ~DijkstraRun();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf dijkstra_run_number; //type: uint32
        ydk::YLeaf area_id; //type: string
        ydk::YLeaf threshold_exceeded; //type: boolean
        ydk::YLeaf trigger_time; //type: string
        ydk::YLeaf start_time; //type: string
        ydk::YLeaf wait_time; //type: uint32
        ydk::YLeaf duration; //type: string
        class TriggerLsa; //type: Rcmd::Ospf::Instances::Instance::SpfRunOfflines::SpfRunOffline::DijkstraRun::TriggerLsa
        class Priority; //type: Rcmd::Ospf::Instances::Instance::SpfRunOfflines::SpfRunOffline::DijkstraRun::Priority
        class LsaProcessed; //type: Rcmd::Ospf::Instances::Instance::SpfRunOfflines::SpfRunOffline::DijkstraRun::LsaProcessed

        ydk::YList trigger_lsa;
        ydk::YList priority;
        ydk::YList lsa_processed;
        
}; // Rcmd::Ospf::Instances::Instance::SpfRunOfflines::SpfRunOffline::DijkstraRun


class Rcmd::Ospf::Instances::Instance::SpfRunOfflines::SpfRunOffline::DijkstraRun::TriggerLsa : public ydk::Entity
{
    public:
        TriggerLsa();
        ~TriggerLsa();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf lsa_id; //type: string
        ydk::YLeaf sequence_number; //type: string
        ydk::YLeaf lsa_type; //type: RcmdLsa
        ydk::YLeaf origin_router_id; //type: string
        ydk::YLeaf change_type; //type: RcmdLsChange
        ydk::YLeaf reception_time; //type: string

}; // Rcmd::Ospf::Instances::Instance::SpfRunOfflines::SpfRunOffline::DijkstraRun::TriggerLsa


class Rcmd::Ospf::Instances::Instance::SpfRunOfflines::SpfRunOffline::DijkstraRun::Priority : public ydk::Entity
{
    public:
        Priority();
        ~Priority();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class PrioritySummary; //type: Rcmd::Ospf::Instances::Instance::SpfRunOfflines::SpfRunOffline::DijkstraRun::Priority::PrioritySummary
        class ConvergenceTimeline; //type: Rcmd::Ospf::Instances::Instance::SpfRunOfflines::SpfRunOffline::DijkstraRun::Priority::ConvergenceTimeline
        class LeafNetworksAdded; //type: Rcmd::Ospf::Instances::Instance::SpfRunOfflines::SpfRunOffline::DijkstraRun::Priority::LeafNetworksAdded
        class LeafNetworksDeleted; //type: Rcmd::Ospf::Instances::Instance::SpfRunOfflines::SpfRunOffline::DijkstraRun::Priority::LeafNetworksDeleted

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_infra_rcmd_oper::Rcmd::Ospf::Instances::Instance::SpfRunOfflines::SpfRunOffline::DijkstraRun::Priority::PrioritySummary> priority_summary;
        ydk::YList convergence_timeline;
        ydk::YList leaf_networks_added;
        ydk::YList leaf_networks_deleted;
        
}; // Rcmd::Ospf::Instances::Instance::SpfRunOfflines::SpfRunOffline::DijkstraRun::Priority


class Rcmd::Ospf::Instances::Instance::SpfRunOfflines::SpfRunOffline::DijkstraRun::Priority::PrioritySummary : public ydk::Entity
{
    public:
        PrioritySummary();
        ~PrioritySummary();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf level; //type: RcmdPriorityLevel
        ydk::YLeaf threshold_exceeded; //type: boolean
        class RouteStatistics; //type: Rcmd::Ospf::Instances::Instance::SpfRunOfflines::SpfRunOffline::DijkstraRun::Priority::PrioritySummary::RouteStatistics
        class IpConvergenceTime; //type: Rcmd::Ospf::Instances::Instance::SpfRunOfflines::SpfRunOffline::DijkstraRun::Priority::PrioritySummary::IpConvergenceTime
        class MplsConvergenceTime; //type: Rcmd::Ospf::Instances::Instance::SpfRunOfflines::SpfRunOffline::DijkstraRun::Priority::PrioritySummary::MplsConvergenceTime
        class FrrStatistic; //type: Rcmd::Ospf::Instances::Instance::SpfRunOfflines::SpfRunOffline::DijkstraRun::Priority::PrioritySummary::FrrStatistic

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_infra_rcmd_oper::Rcmd::Ospf::Instances::Instance::SpfRunOfflines::SpfRunOffline::DijkstraRun::Priority::PrioritySummary::RouteStatistics> route_statistics;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_infra_rcmd_oper::Rcmd::Ospf::Instances::Instance::SpfRunOfflines::SpfRunOffline::DijkstraRun::Priority::PrioritySummary::IpConvergenceTime> ip_convergence_time;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_infra_rcmd_oper::Rcmd::Ospf::Instances::Instance::SpfRunOfflines::SpfRunOffline::DijkstraRun::Priority::PrioritySummary::MplsConvergenceTime> mpls_convergence_time;
        ydk::YList frr_statistic;
        
}; // Rcmd::Ospf::Instances::Instance::SpfRunOfflines::SpfRunOffline::DijkstraRun::Priority::PrioritySummary


class Rcmd::Ospf::Instances::Instance::SpfRunOfflines::SpfRunOffline::DijkstraRun::Priority::PrioritySummary::RouteStatistics : public ydk::Entity
{
    public:
        RouteStatistics();
        ~RouteStatistics();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf adds; //type: uint32
        ydk::YLeaf deletes; //type: uint32
        ydk::YLeaf modifies; //type: uint32
        ydk::YLeaf reachables; //type: uint32
        ydk::YLeaf unreachables; //type: uint32
        ydk::YLeaf touches; //type: uint32

}; // Rcmd::Ospf::Instances::Instance::SpfRunOfflines::SpfRunOffline::DijkstraRun::Priority::PrioritySummary::RouteStatistics


class Rcmd::Ospf::Instances::Instance::SpfRunOfflines::SpfRunOffline::DijkstraRun::Priority::PrioritySummary::IpConvergenceTime : public ydk::Entity
{
    public:
        IpConvergenceTime();
        ~IpConvergenceTime();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf minimum_time; //type: string
        ydk::YLeaf maximum_time; //type: string
        ydk::YLeaf slowest_node_name; //type: string
        ydk::YLeaf fastest_node_name; //type: string

}; // Rcmd::Ospf::Instances::Instance::SpfRunOfflines::SpfRunOffline::DijkstraRun::Priority::PrioritySummary::IpConvergenceTime


class Rcmd::Ospf::Instances::Instance::SpfRunOfflines::SpfRunOffline::DijkstraRun::Priority::PrioritySummary::MplsConvergenceTime : public ydk::Entity
{
    public:
        MplsConvergenceTime();
        ~MplsConvergenceTime();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf minimum_time; //type: string
        ydk::YLeaf maximum_time; //type: string
        ydk::YLeaf slowest_node_name; //type: string
        ydk::YLeaf fastest_node_name; //type: string

}; // Rcmd::Ospf::Instances::Instance::SpfRunOfflines::SpfRunOffline::DijkstraRun::Priority::PrioritySummary::MplsConvergenceTime


class Rcmd::Ospf::Instances::Instance::SpfRunOfflines::SpfRunOffline::DijkstraRun::Priority::PrioritySummary::FrrStatistic : public ydk::Entity
{
    public:
        FrrStatistic();
        ~FrrStatistic();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf total_routes; //type: uint32
        ydk::YLeaf fully_protected_routes; //type: uint32
        ydk::YLeaf partially_protected_routes; //type: uint32
        ydk::YLeaf coverage; //type: string

}; // Rcmd::Ospf::Instances::Instance::SpfRunOfflines::SpfRunOffline::DijkstraRun::Priority::PrioritySummary::FrrStatistic


class Rcmd::Ospf::Instances::Instance::SpfRunOfflines::SpfRunOffline::DijkstraRun::Priority::ConvergenceTimeline : public ydk::Entity
{
    public:
        ConvergenceTimeline();
        ~ConvergenceTimeline();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class RouteOrigin; //type: Rcmd::Ospf::Instances::Instance::SpfRunOfflines::SpfRunOffline::DijkstraRun::Priority::ConvergenceTimeline::RouteOrigin
        class RiBv4Enter; //type: Rcmd::Ospf::Instances::Instance::SpfRunOfflines::SpfRunOffline::DijkstraRun::Priority::ConvergenceTimeline::RiBv4Enter
        class RiBv4Exit; //type: Rcmd::Ospf::Instances::Instance::SpfRunOfflines::SpfRunOffline::DijkstraRun::Priority::ConvergenceTimeline::RiBv4Exit
        class RiBv4Redistribute; //type: Rcmd::Ospf::Instances::Instance::SpfRunOfflines::SpfRunOffline::DijkstraRun::Priority::ConvergenceTimeline::RiBv4Redistribute
        class LdpEnter; //type: Rcmd::Ospf::Instances::Instance::SpfRunOfflines::SpfRunOffline::DijkstraRun::Priority::ConvergenceTimeline::LdpEnter
        class LdpExit; //type: Rcmd::Ospf::Instances::Instance::SpfRunOfflines::SpfRunOffline::DijkstraRun::Priority::ConvergenceTimeline::LdpExit
        class LsdEnter; //type: Rcmd::Ospf::Instances::Instance::SpfRunOfflines::SpfRunOffline::DijkstraRun::Priority::ConvergenceTimeline::LsdEnter
        class LsdExit; //type: Rcmd::Ospf::Instances::Instance::SpfRunOfflines::SpfRunOffline::DijkstraRun::Priority::ConvergenceTimeline::LsdExit
        class LcIp; //type: Rcmd::Ospf::Instances::Instance::SpfRunOfflines::SpfRunOffline::DijkstraRun::Priority::ConvergenceTimeline::LcIp
        class LcMpls; //type: Rcmd::Ospf::Instances::Instance::SpfRunOfflines::SpfRunOffline::DijkstraRun::Priority::ConvergenceTimeline::LcMpls

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_infra_rcmd_oper::Rcmd::Ospf::Instances::Instance::SpfRunOfflines::SpfRunOffline::DijkstraRun::Priority::ConvergenceTimeline::RouteOrigin> route_origin;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_infra_rcmd_oper::Rcmd::Ospf::Instances::Instance::SpfRunOfflines::SpfRunOffline::DijkstraRun::Priority::ConvergenceTimeline::RiBv4Enter> ri_bv4_enter;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_infra_rcmd_oper::Rcmd::Ospf::Instances::Instance::SpfRunOfflines::SpfRunOffline::DijkstraRun::Priority::ConvergenceTimeline::RiBv4Exit> ri_bv4_exit;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_infra_rcmd_oper::Rcmd::Ospf::Instances::Instance::SpfRunOfflines::SpfRunOffline::DijkstraRun::Priority::ConvergenceTimeline::RiBv4Redistribute> ri_bv4_redistribute;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_infra_rcmd_oper::Rcmd::Ospf::Instances::Instance::SpfRunOfflines::SpfRunOffline::DijkstraRun::Priority::ConvergenceTimeline::LdpEnter> ldp_enter;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_infra_rcmd_oper::Rcmd::Ospf::Instances::Instance::SpfRunOfflines::SpfRunOffline::DijkstraRun::Priority::ConvergenceTimeline::LdpExit> ldp_exit;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_infra_rcmd_oper::Rcmd::Ospf::Instances::Instance::SpfRunOfflines::SpfRunOffline::DijkstraRun::Priority::ConvergenceTimeline::LsdEnter> lsd_enter;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_infra_rcmd_oper::Rcmd::Ospf::Instances::Instance::SpfRunOfflines::SpfRunOffline::DijkstraRun::Priority::ConvergenceTimeline::LsdExit> lsd_exit;
        ydk::YList lc_ip;
        ydk::YList lc_mpls;
        
}; // Rcmd::Ospf::Instances::Instance::SpfRunOfflines::SpfRunOffline::DijkstraRun::Priority::ConvergenceTimeline


class Rcmd::Ospf::Instances::Instance::SpfRunOfflines::SpfRunOffline::DijkstraRun::Priority::ConvergenceTimeline::RouteOrigin : public ydk::Entity
{
    public:
        RouteOrigin();
        ~RouteOrigin();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf start_time; //type: string
        ydk::YLeaf end_time; //type: string
        ydk::YLeaf duration; //type: string

}; // Rcmd::Ospf::Instances::Instance::SpfRunOfflines::SpfRunOffline::DijkstraRun::Priority::ConvergenceTimeline::RouteOrigin


class Rcmd::Ospf::Instances::Instance::SpfRunOfflines::SpfRunOffline::DijkstraRun::Priority::ConvergenceTimeline::RiBv4Enter : public ydk::Entity
{
    public:
        RiBv4Enter();
        ~RiBv4Enter();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf start_time; //type: string
        ydk::YLeaf end_time; //type: string
        ydk::YLeaf duration; //type: string

}; // Rcmd::Ospf::Instances::Instance::SpfRunOfflines::SpfRunOffline::DijkstraRun::Priority::ConvergenceTimeline::RiBv4Enter


class Rcmd::Ospf::Instances::Instance::SpfRunOfflines::SpfRunOffline::DijkstraRun::Priority::ConvergenceTimeline::RiBv4Exit : public ydk::Entity
{
    public:
        RiBv4Exit();
        ~RiBv4Exit();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf start_time; //type: string
        ydk::YLeaf end_time; //type: string
        ydk::YLeaf duration; //type: string

}; // Rcmd::Ospf::Instances::Instance::SpfRunOfflines::SpfRunOffline::DijkstraRun::Priority::ConvergenceTimeline::RiBv4Exit


class Rcmd::Ospf::Instances::Instance::SpfRunOfflines::SpfRunOffline::DijkstraRun::Priority::ConvergenceTimeline::RiBv4Redistribute : public ydk::Entity
{
    public:
        RiBv4Redistribute();
        ~RiBv4Redistribute();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf start_time; //type: string
        ydk::YLeaf end_time; //type: string
        ydk::YLeaf duration; //type: string

}; // Rcmd::Ospf::Instances::Instance::SpfRunOfflines::SpfRunOffline::DijkstraRun::Priority::ConvergenceTimeline::RiBv4Redistribute


class Rcmd::Ospf::Instances::Instance::SpfRunOfflines::SpfRunOffline::DijkstraRun::Priority::ConvergenceTimeline::LdpEnter : public ydk::Entity
{
    public:
        LdpEnter();
        ~LdpEnter();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf start_time; //type: string
        ydk::YLeaf end_time; //type: string
        ydk::YLeaf duration; //type: string

}; // Rcmd::Ospf::Instances::Instance::SpfRunOfflines::SpfRunOffline::DijkstraRun::Priority::ConvergenceTimeline::LdpEnter


class Rcmd::Ospf::Instances::Instance::SpfRunOfflines::SpfRunOffline::DijkstraRun::Priority::ConvergenceTimeline::LdpExit : public ydk::Entity
{
    public:
        LdpExit();
        ~LdpExit();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf start_time; //type: string
        ydk::YLeaf end_time; //type: string
        ydk::YLeaf duration; //type: string

}; // Rcmd::Ospf::Instances::Instance::SpfRunOfflines::SpfRunOffline::DijkstraRun::Priority::ConvergenceTimeline::LdpExit


class Rcmd::Ospf::Instances::Instance::SpfRunOfflines::SpfRunOffline::DijkstraRun::Priority::ConvergenceTimeline::LsdEnter : public ydk::Entity
{
    public:
        LsdEnter();
        ~LsdEnter();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf start_time; //type: string
        ydk::YLeaf end_time; //type: string
        ydk::YLeaf duration; //type: string

}; // Rcmd::Ospf::Instances::Instance::SpfRunOfflines::SpfRunOffline::DijkstraRun::Priority::ConvergenceTimeline::LsdEnter


class Rcmd::Ospf::Instances::Instance::SpfRunOfflines::SpfRunOffline::DijkstraRun::Priority::ConvergenceTimeline::LsdExit : public ydk::Entity
{
    public:
        LsdExit();
        ~LsdExit();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf start_time; //type: string
        ydk::YLeaf end_time; //type: string
        ydk::YLeaf duration; //type: string

}; // Rcmd::Ospf::Instances::Instance::SpfRunOfflines::SpfRunOffline::DijkstraRun::Priority::ConvergenceTimeline::LsdExit


class Rcmd::Ospf::Instances::Instance::SpfRunOfflines::SpfRunOffline::DijkstraRun::Priority::ConvergenceTimeline::LcIp : public ydk::Entity
{
    public:
        LcIp();
        ~LcIp();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf node_name; //type: string
        ydk::YLeaf speed; //type: RcmdLinecardSpeed
        class FibComplete; //type: Rcmd::Ospf::Instances::Instance::SpfRunOfflines::SpfRunOffline::DijkstraRun::Priority::ConvergenceTimeline::LcIp::FibComplete

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_infra_rcmd_oper::Rcmd::Ospf::Instances::Instance::SpfRunOfflines::SpfRunOffline::DijkstraRun::Priority::ConvergenceTimeline::LcIp::FibComplete> fib_complete;
        
}; // Rcmd::Ospf::Instances::Instance::SpfRunOfflines::SpfRunOffline::DijkstraRun::Priority::ConvergenceTimeline::LcIp


class Rcmd::Ospf::Instances::Instance::SpfRunOfflines::SpfRunOffline::DijkstraRun::Priority::ConvergenceTimeline::LcIp::FibComplete : public ydk::Entity
{
    public:
        FibComplete();
        ~FibComplete();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf start_time; //type: string
        ydk::YLeaf end_time; //type: string
        ydk::YLeaf duration; //type: string

}; // Rcmd::Ospf::Instances::Instance::SpfRunOfflines::SpfRunOffline::DijkstraRun::Priority::ConvergenceTimeline::LcIp::FibComplete


class Rcmd::Ospf::Instances::Instance::SpfRunOfflines::SpfRunOffline::DijkstraRun::Priority::ConvergenceTimeline::LcMpls : public ydk::Entity
{
    public:
        LcMpls();
        ~LcMpls();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf node_name; //type: string
        ydk::YLeaf speed; //type: RcmdLinecardSpeed
        class FibComplete; //type: Rcmd::Ospf::Instances::Instance::SpfRunOfflines::SpfRunOffline::DijkstraRun::Priority::ConvergenceTimeline::LcMpls::FibComplete

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_infra_rcmd_oper::Rcmd::Ospf::Instances::Instance::SpfRunOfflines::SpfRunOffline::DijkstraRun::Priority::ConvergenceTimeline::LcMpls::FibComplete> fib_complete;
        
}; // Rcmd::Ospf::Instances::Instance::SpfRunOfflines::SpfRunOffline::DijkstraRun::Priority::ConvergenceTimeline::LcMpls


class Rcmd::Ospf::Instances::Instance::SpfRunOfflines::SpfRunOffline::DijkstraRun::Priority::ConvergenceTimeline::LcMpls::FibComplete : public ydk::Entity
{
    public:
        FibComplete();
        ~FibComplete();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf start_time; //type: string
        ydk::YLeaf end_time; //type: string
        ydk::YLeaf duration; //type: string

}; // Rcmd::Ospf::Instances::Instance::SpfRunOfflines::SpfRunOffline::DijkstraRun::Priority::ConvergenceTimeline::LcMpls::FibComplete


class Rcmd::Ospf::Instances::Instance::SpfRunOfflines::SpfRunOffline::DijkstraRun::Priority::LeafNetworksAdded : public ydk::Entity
{
    public:
        LeafNetworksAdded();
        ~LeafNetworksAdded();

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
        ydk::YLeaf net_mask; //type: uint8

}; // Rcmd::Ospf::Instances::Instance::SpfRunOfflines::SpfRunOffline::DijkstraRun::Priority::LeafNetworksAdded


class Rcmd::Ospf::Instances::Instance::SpfRunOfflines::SpfRunOffline::DijkstraRun::Priority::LeafNetworksDeleted : public ydk::Entity
{
    public:
        LeafNetworksDeleted();
        ~LeafNetworksDeleted();

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
        ydk::YLeaf net_mask; //type: uint8

}; // Rcmd::Ospf::Instances::Instance::SpfRunOfflines::SpfRunOffline::DijkstraRun::Priority::LeafNetworksDeleted


class Rcmd::Ospf::Instances::Instance::SpfRunOfflines::SpfRunOffline::DijkstraRun::LsaProcessed : public ydk::Entity
{
    public:
        LsaProcessed();
        ~LsaProcessed();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf lsa_id; //type: string
        ydk::YLeaf sequence_number; //type: string
        ydk::YLeaf lsa_type; //type: RcmdLsa
        ydk::YLeaf origin_router_id; //type: string
        ydk::YLeaf change_type; //type: RcmdLsChange
        ydk::YLeaf reception_time; //type: string

}; // Rcmd::Ospf::Instances::Instance::SpfRunOfflines::SpfRunOffline::DijkstraRun::LsaProcessed


class Rcmd::Ospf::Instances::Instance::SpfRunOfflines::SpfRunOffline::InterAreaAndExternal : public ydk::Entity
{
    public:
        InterAreaAndExternal();
        ~InterAreaAndExternal();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Priority; //type: Rcmd::Ospf::Instances::Instance::SpfRunOfflines::SpfRunOffline::InterAreaAndExternal::Priority

        ydk::YList priority;
        
}; // Rcmd::Ospf::Instances::Instance::SpfRunOfflines::SpfRunOffline::InterAreaAndExternal


class Rcmd::Ospf::Instances::Instance::SpfRunOfflines::SpfRunOffline::InterAreaAndExternal::Priority : public ydk::Entity
{
    public:
        Priority();
        ~Priority();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class PrioritySummary; //type: Rcmd::Ospf::Instances::Instance::SpfRunOfflines::SpfRunOffline::InterAreaAndExternal::Priority::PrioritySummary
        class ConvergenceTimeline; //type: Rcmd::Ospf::Instances::Instance::SpfRunOfflines::SpfRunOffline::InterAreaAndExternal::Priority::ConvergenceTimeline
        class LeafNetworksAdded; //type: Rcmd::Ospf::Instances::Instance::SpfRunOfflines::SpfRunOffline::InterAreaAndExternal::Priority::LeafNetworksAdded
        class LeafNetworksDeleted; //type: Rcmd::Ospf::Instances::Instance::SpfRunOfflines::SpfRunOffline::InterAreaAndExternal::Priority::LeafNetworksDeleted

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_infra_rcmd_oper::Rcmd::Ospf::Instances::Instance::SpfRunOfflines::SpfRunOffline::InterAreaAndExternal::Priority::PrioritySummary> priority_summary;
        ydk::YList convergence_timeline;
        ydk::YList leaf_networks_added;
        ydk::YList leaf_networks_deleted;
        
}; // Rcmd::Ospf::Instances::Instance::SpfRunOfflines::SpfRunOffline::InterAreaAndExternal::Priority


class Rcmd::Ospf::Instances::Instance::SpfRunOfflines::SpfRunOffline::InterAreaAndExternal::Priority::PrioritySummary : public ydk::Entity
{
    public:
        PrioritySummary();
        ~PrioritySummary();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf level; //type: RcmdPriorityLevel
        ydk::YLeaf threshold_exceeded; //type: boolean
        ydk::YLeaf type3ls_as; //type: uint32
        ydk::YLeaf type4ls_as; //type: uint32
        ydk::YLeaf type57ls_as; //type: uint32
        class RouteStatistics; //type: Rcmd::Ospf::Instances::Instance::SpfRunOfflines::SpfRunOffline::InterAreaAndExternal::Priority::PrioritySummary::RouteStatistics
        class IpConvergenceTime; //type: Rcmd::Ospf::Instances::Instance::SpfRunOfflines::SpfRunOffline::InterAreaAndExternal::Priority::PrioritySummary::IpConvergenceTime
        class MplsConvergenceTime; //type: Rcmd::Ospf::Instances::Instance::SpfRunOfflines::SpfRunOffline::InterAreaAndExternal::Priority::PrioritySummary::MplsConvergenceTime

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_infra_rcmd_oper::Rcmd::Ospf::Instances::Instance::SpfRunOfflines::SpfRunOffline::InterAreaAndExternal::Priority::PrioritySummary::RouteStatistics> route_statistics;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_infra_rcmd_oper::Rcmd::Ospf::Instances::Instance::SpfRunOfflines::SpfRunOffline::InterAreaAndExternal::Priority::PrioritySummary::IpConvergenceTime> ip_convergence_time;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_infra_rcmd_oper::Rcmd::Ospf::Instances::Instance::SpfRunOfflines::SpfRunOffline::InterAreaAndExternal::Priority::PrioritySummary::MplsConvergenceTime> mpls_convergence_time;
        
}; // Rcmd::Ospf::Instances::Instance::SpfRunOfflines::SpfRunOffline::InterAreaAndExternal::Priority::PrioritySummary


class Rcmd::Ospf::Instances::Instance::SpfRunOfflines::SpfRunOffline::InterAreaAndExternal::Priority::PrioritySummary::RouteStatistics : public ydk::Entity
{
    public:
        RouteStatistics();
        ~RouteStatistics();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf adds; //type: uint32
        ydk::YLeaf deletes; //type: uint32
        ydk::YLeaf modifies; //type: uint32
        ydk::YLeaf reachables; //type: uint32
        ydk::YLeaf unreachables; //type: uint32
        ydk::YLeaf touches; //type: uint32

}; // Rcmd::Ospf::Instances::Instance::SpfRunOfflines::SpfRunOffline::InterAreaAndExternal::Priority::PrioritySummary::RouteStatistics


class Rcmd::Ospf::Instances::Instance::SpfRunOfflines::SpfRunOffline::InterAreaAndExternal::Priority::PrioritySummary::IpConvergenceTime : public ydk::Entity
{
    public:
        IpConvergenceTime();
        ~IpConvergenceTime();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf minimum_time; //type: string
        ydk::YLeaf maximum_time; //type: string
        ydk::YLeaf slowest_node_name; //type: string
        ydk::YLeaf fastest_node_name; //type: string

}; // Rcmd::Ospf::Instances::Instance::SpfRunOfflines::SpfRunOffline::InterAreaAndExternal::Priority::PrioritySummary::IpConvergenceTime


class Rcmd::Ospf::Instances::Instance::SpfRunOfflines::SpfRunOffline::InterAreaAndExternal::Priority::PrioritySummary::MplsConvergenceTime : public ydk::Entity
{
    public:
        MplsConvergenceTime();
        ~MplsConvergenceTime();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf minimum_time; //type: string
        ydk::YLeaf maximum_time; //type: string
        ydk::YLeaf slowest_node_name; //type: string
        ydk::YLeaf fastest_node_name; //type: string

}; // Rcmd::Ospf::Instances::Instance::SpfRunOfflines::SpfRunOffline::InterAreaAndExternal::Priority::PrioritySummary::MplsConvergenceTime


class Rcmd::Ospf::Instances::Instance::SpfRunOfflines::SpfRunOffline::InterAreaAndExternal::Priority::ConvergenceTimeline : public ydk::Entity
{
    public:
        ConvergenceTimeline();
        ~ConvergenceTimeline();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class RouteOrigin; //type: Rcmd::Ospf::Instances::Instance::SpfRunOfflines::SpfRunOffline::InterAreaAndExternal::Priority::ConvergenceTimeline::RouteOrigin
        class RiBv4Enter; //type: Rcmd::Ospf::Instances::Instance::SpfRunOfflines::SpfRunOffline::InterAreaAndExternal::Priority::ConvergenceTimeline::RiBv4Enter
        class RiBv4Exit; //type: Rcmd::Ospf::Instances::Instance::SpfRunOfflines::SpfRunOffline::InterAreaAndExternal::Priority::ConvergenceTimeline::RiBv4Exit
        class RiBv4Redistribute; //type: Rcmd::Ospf::Instances::Instance::SpfRunOfflines::SpfRunOffline::InterAreaAndExternal::Priority::ConvergenceTimeline::RiBv4Redistribute
        class LdpEnter; //type: Rcmd::Ospf::Instances::Instance::SpfRunOfflines::SpfRunOffline::InterAreaAndExternal::Priority::ConvergenceTimeline::LdpEnter
        class LdpExit; //type: Rcmd::Ospf::Instances::Instance::SpfRunOfflines::SpfRunOffline::InterAreaAndExternal::Priority::ConvergenceTimeline::LdpExit
        class LsdEnter; //type: Rcmd::Ospf::Instances::Instance::SpfRunOfflines::SpfRunOffline::InterAreaAndExternal::Priority::ConvergenceTimeline::LsdEnter
        class LsdExit; //type: Rcmd::Ospf::Instances::Instance::SpfRunOfflines::SpfRunOffline::InterAreaAndExternal::Priority::ConvergenceTimeline::LsdExit
        class LcIp; //type: Rcmd::Ospf::Instances::Instance::SpfRunOfflines::SpfRunOffline::InterAreaAndExternal::Priority::ConvergenceTimeline::LcIp
        class LcMpls; //type: Rcmd::Ospf::Instances::Instance::SpfRunOfflines::SpfRunOffline::InterAreaAndExternal::Priority::ConvergenceTimeline::LcMpls

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_infra_rcmd_oper::Rcmd::Ospf::Instances::Instance::SpfRunOfflines::SpfRunOffline::InterAreaAndExternal::Priority::ConvergenceTimeline::RouteOrigin> route_origin;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_infra_rcmd_oper::Rcmd::Ospf::Instances::Instance::SpfRunOfflines::SpfRunOffline::InterAreaAndExternal::Priority::ConvergenceTimeline::RiBv4Enter> ri_bv4_enter;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_infra_rcmd_oper::Rcmd::Ospf::Instances::Instance::SpfRunOfflines::SpfRunOffline::InterAreaAndExternal::Priority::ConvergenceTimeline::RiBv4Exit> ri_bv4_exit;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_infra_rcmd_oper::Rcmd::Ospf::Instances::Instance::SpfRunOfflines::SpfRunOffline::InterAreaAndExternal::Priority::ConvergenceTimeline::RiBv4Redistribute> ri_bv4_redistribute;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_infra_rcmd_oper::Rcmd::Ospf::Instances::Instance::SpfRunOfflines::SpfRunOffline::InterAreaAndExternal::Priority::ConvergenceTimeline::LdpEnter> ldp_enter;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_infra_rcmd_oper::Rcmd::Ospf::Instances::Instance::SpfRunOfflines::SpfRunOffline::InterAreaAndExternal::Priority::ConvergenceTimeline::LdpExit> ldp_exit;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_infra_rcmd_oper::Rcmd::Ospf::Instances::Instance::SpfRunOfflines::SpfRunOffline::InterAreaAndExternal::Priority::ConvergenceTimeline::LsdEnter> lsd_enter;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_infra_rcmd_oper::Rcmd::Ospf::Instances::Instance::SpfRunOfflines::SpfRunOffline::InterAreaAndExternal::Priority::ConvergenceTimeline::LsdExit> lsd_exit;
        ydk::YList lc_ip;
        ydk::YList lc_mpls;
        
}; // Rcmd::Ospf::Instances::Instance::SpfRunOfflines::SpfRunOffline::InterAreaAndExternal::Priority::ConvergenceTimeline


class Rcmd::Ospf::Instances::Instance::SpfRunOfflines::SpfRunOffline::InterAreaAndExternal::Priority::ConvergenceTimeline::RouteOrigin : public ydk::Entity
{
    public:
        RouteOrigin();
        ~RouteOrigin();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf start_time; //type: string
        ydk::YLeaf end_time; //type: string
        ydk::YLeaf duration; //type: string

}; // Rcmd::Ospf::Instances::Instance::SpfRunOfflines::SpfRunOffline::InterAreaAndExternal::Priority::ConvergenceTimeline::RouteOrigin


class Rcmd::Ospf::Instances::Instance::SpfRunOfflines::SpfRunOffline::InterAreaAndExternal::Priority::ConvergenceTimeline::RiBv4Enter : public ydk::Entity
{
    public:
        RiBv4Enter();
        ~RiBv4Enter();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf start_time; //type: string
        ydk::YLeaf end_time; //type: string
        ydk::YLeaf duration; //type: string

}; // Rcmd::Ospf::Instances::Instance::SpfRunOfflines::SpfRunOffline::InterAreaAndExternal::Priority::ConvergenceTimeline::RiBv4Enter


class Rcmd::Ospf::Instances::Instance::SpfRunOfflines::SpfRunOffline::InterAreaAndExternal::Priority::ConvergenceTimeline::RiBv4Exit : public ydk::Entity
{
    public:
        RiBv4Exit();
        ~RiBv4Exit();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf start_time; //type: string
        ydk::YLeaf end_time; //type: string
        ydk::YLeaf duration; //type: string

}; // Rcmd::Ospf::Instances::Instance::SpfRunOfflines::SpfRunOffline::InterAreaAndExternal::Priority::ConvergenceTimeline::RiBv4Exit


class Rcmd::Ospf::Instances::Instance::SpfRunOfflines::SpfRunOffline::InterAreaAndExternal::Priority::ConvergenceTimeline::RiBv4Redistribute : public ydk::Entity
{
    public:
        RiBv4Redistribute();
        ~RiBv4Redistribute();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf start_time; //type: string
        ydk::YLeaf end_time; //type: string
        ydk::YLeaf duration; //type: string

}; // Rcmd::Ospf::Instances::Instance::SpfRunOfflines::SpfRunOffline::InterAreaAndExternal::Priority::ConvergenceTimeline::RiBv4Redistribute


class Rcmd::Ospf::Instances::Instance::SpfRunOfflines::SpfRunOffline::InterAreaAndExternal::Priority::ConvergenceTimeline::LdpEnter : public ydk::Entity
{
    public:
        LdpEnter();
        ~LdpEnter();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf start_time; //type: string
        ydk::YLeaf end_time; //type: string
        ydk::YLeaf duration; //type: string

}; // Rcmd::Ospf::Instances::Instance::SpfRunOfflines::SpfRunOffline::InterAreaAndExternal::Priority::ConvergenceTimeline::LdpEnter


class Rcmd::Ospf::Instances::Instance::SpfRunOfflines::SpfRunOffline::InterAreaAndExternal::Priority::ConvergenceTimeline::LdpExit : public ydk::Entity
{
    public:
        LdpExit();
        ~LdpExit();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf start_time; //type: string
        ydk::YLeaf end_time; //type: string
        ydk::YLeaf duration; //type: string

}; // Rcmd::Ospf::Instances::Instance::SpfRunOfflines::SpfRunOffline::InterAreaAndExternal::Priority::ConvergenceTimeline::LdpExit


class Rcmd::Ospf::Instances::Instance::SpfRunOfflines::SpfRunOffline::InterAreaAndExternal::Priority::ConvergenceTimeline::LsdEnter : public ydk::Entity
{
    public:
        LsdEnter();
        ~LsdEnter();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf start_time; //type: string
        ydk::YLeaf end_time; //type: string
        ydk::YLeaf duration; //type: string

}; // Rcmd::Ospf::Instances::Instance::SpfRunOfflines::SpfRunOffline::InterAreaAndExternal::Priority::ConvergenceTimeline::LsdEnter


class Rcmd::Ospf::Instances::Instance::SpfRunOfflines::SpfRunOffline::InterAreaAndExternal::Priority::ConvergenceTimeline::LsdExit : public ydk::Entity
{
    public:
        LsdExit();
        ~LsdExit();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf start_time; //type: string
        ydk::YLeaf end_time; //type: string
        ydk::YLeaf duration; //type: string

}; // Rcmd::Ospf::Instances::Instance::SpfRunOfflines::SpfRunOffline::InterAreaAndExternal::Priority::ConvergenceTimeline::LsdExit


class Rcmd::Ospf::Instances::Instance::SpfRunOfflines::SpfRunOffline::InterAreaAndExternal::Priority::ConvergenceTimeline::LcIp : public ydk::Entity
{
    public:
        LcIp();
        ~LcIp();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf node_name; //type: string
        ydk::YLeaf speed; //type: RcmdLinecardSpeed
        class FibComplete; //type: Rcmd::Ospf::Instances::Instance::SpfRunOfflines::SpfRunOffline::InterAreaAndExternal::Priority::ConvergenceTimeline::LcIp::FibComplete

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_infra_rcmd_oper::Rcmd::Ospf::Instances::Instance::SpfRunOfflines::SpfRunOffline::InterAreaAndExternal::Priority::ConvergenceTimeline::LcIp::FibComplete> fib_complete;
        
}; // Rcmd::Ospf::Instances::Instance::SpfRunOfflines::SpfRunOffline::InterAreaAndExternal::Priority::ConvergenceTimeline::LcIp


class Rcmd::Ospf::Instances::Instance::SpfRunOfflines::SpfRunOffline::InterAreaAndExternal::Priority::ConvergenceTimeline::LcIp::FibComplete : public ydk::Entity
{
    public:
        FibComplete();
        ~FibComplete();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf start_time; //type: string
        ydk::YLeaf end_time; //type: string
        ydk::YLeaf duration; //type: string

}; // Rcmd::Ospf::Instances::Instance::SpfRunOfflines::SpfRunOffline::InterAreaAndExternal::Priority::ConvergenceTimeline::LcIp::FibComplete


class Rcmd::Ospf::Instances::Instance::SpfRunOfflines::SpfRunOffline::InterAreaAndExternal::Priority::ConvergenceTimeline::LcMpls : public ydk::Entity
{
    public:
        LcMpls();
        ~LcMpls();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf node_name; //type: string
        ydk::YLeaf speed; //type: RcmdLinecardSpeed
        class FibComplete; //type: Rcmd::Ospf::Instances::Instance::SpfRunOfflines::SpfRunOffline::InterAreaAndExternal::Priority::ConvergenceTimeline::LcMpls::FibComplete

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_infra_rcmd_oper::Rcmd::Ospf::Instances::Instance::SpfRunOfflines::SpfRunOffline::InterAreaAndExternal::Priority::ConvergenceTimeline::LcMpls::FibComplete> fib_complete;
        
}; // Rcmd::Ospf::Instances::Instance::SpfRunOfflines::SpfRunOffline::InterAreaAndExternal::Priority::ConvergenceTimeline::LcMpls


class Rcmd::Ospf::Instances::Instance::SpfRunOfflines::SpfRunOffline::InterAreaAndExternal::Priority::ConvergenceTimeline::LcMpls::FibComplete : public ydk::Entity
{
    public:
        FibComplete();
        ~FibComplete();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf start_time; //type: string
        ydk::YLeaf end_time; //type: string
        ydk::YLeaf duration; //type: string

}; // Rcmd::Ospf::Instances::Instance::SpfRunOfflines::SpfRunOffline::InterAreaAndExternal::Priority::ConvergenceTimeline::LcMpls::FibComplete


class Rcmd::Ospf::Instances::Instance::SpfRunOfflines::SpfRunOffline::InterAreaAndExternal::Priority::LeafNetworksAdded : public ydk::Entity
{
    public:
        LeafNetworksAdded();
        ~LeafNetworksAdded();

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
        ydk::YLeaf net_mask; //type: uint8

}; // Rcmd::Ospf::Instances::Instance::SpfRunOfflines::SpfRunOffline::InterAreaAndExternal::Priority::LeafNetworksAdded


class Rcmd::Ospf::Instances::Instance::SpfRunOfflines::SpfRunOffline::InterAreaAndExternal::Priority::LeafNetworksDeleted : public ydk::Entity
{
    public:
        LeafNetworksDeleted();
        ~LeafNetworksDeleted();

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
        ydk::YLeaf net_mask; //type: uint8

}; // Rcmd::Ospf::Instances::Instance::SpfRunOfflines::SpfRunOffline::InterAreaAndExternal::Priority::LeafNetworksDeleted


class Rcmd::Ospf::Instances::Instance::SummaryExternalEventSummaries : public ydk::Entity
{
    public:
        SummaryExternalEventSummaries();
        ~SummaryExternalEventSummaries();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class SummaryExternalEventSummary; //type: Rcmd::Ospf::Instances::Instance::SummaryExternalEventSummaries::SummaryExternalEventSummary

        ydk::YList summary_external_event_summary;
        
}; // Rcmd::Ospf::Instances::Instance::SummaryExternalEventSummaries


class Rcmd::Ospf::Instances::Instance::SummaryExternalEventSummaries::SummaryExternalEventSummary : public ydk::Entity
{
    public:
        SummaryExternalEventSummary();
        ~SummaryExternalEventSummary();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf event_id; //type: uint32
        ydk::YLeaf prefix; //type: string
        ydk::YLeaf prefix_lenth; //type: uint32
        ydk::YLeaf spf_run_no; //type: uint32
        ydk::YLeaf ipfrr_event_id; //type: uint32
        ydk::YLeaf threshold_exceeded; //type: boolean
        ydk::YLeaf priority; //type: RcmdPriorityLevel
        ydk::YLeaf change_type; //type: RcmdChange
        ydk::YLeaf route_type; //type: RcmdShowRoute
        ydk::YLeaf route_path_change_type; //type: RcmdShowRoutePathChange
        ydk::YLeaf cost; //type: uint32
        ydk::YLeaf trigger_time; //type: string
        class IpConvergenceTime; //type: Rcmd::Ospf::Instances::Instance::SummaryExternalEventSummaries::SummaryExternalEventSummary::IpConvergenceTime
        class MplsConvergenceTime; //type: Rcmd::Ospf::Instances::Instance::SummaryExternalEventSummaries::SummaryExternalEventSummary::MplsConvergenceTime
        class Path; //type: Rcmd::Ospf::Instances::Instance::SummaryExternalEventSummaries::SummaryExternalEventSummary::Path
        class TriggerLsa; //type: Rcmd::Ospf::Instances::Instance::SummaryExternalEventSummaries::SummaryExternalEventSummary::TriggerLsa
        class TimeLine; //type: Rcmd::Ospf::Instances::Instance::SummaryExternalEventSummaries::SummaryExternalEventSummary::TimeLine
        class LsaProcessed; //type: Rcmd::Ospf::Instances::Instance::SummaryExternalEventSummaries::SummaryExternalEventSummary::LsaProcessed

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_infra_rcmd_oper::Rcmd::Ospf::Instances::Instance::SummaryExternalEventSummaries::SummaryExternalEventSummary::IpConvergenceTime> ip_convergence_time;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_infra_rcmd_oper::Rcmd::Ospf::Instances::Instance::SummaryExternalEventSummaries::SummaryExternalEventSummary::MplsConvergenceTime> mpls_convergence_time;
        ydk::YList path;
        ydk::YList trigger_lsa;
        ydk::YList time_line;
        ydk::YList lsa_processed;
        
}; // Rcmd::Ospf::Instances::Instance::SummaryExternalEventSummaries::SummaryExternalEventSummary


class Rcmd::Ospf::Instances::Instance::SummaryExternalEventSummaries::SummaryExternalEventSummary::IpConvergenceTime : public ydk::Entity
{
    public:
        IpConvergenceTime();
        ~IpConvergenceTime();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf minimum_time; //type: string
        ydk::YLeaf maximum_time; //type: string
        ydk::YLeaf slowest_node_name; //type: string
        ydk::YLeaf fastest_node_name; //type: string

}; // Rcmd::Ospf::Instances::Instance::SummaryExternalEventSummaries::SummaryExternalEventSummary::IpConvergenceTime


class Rcmd::Ospf::Instances::Instance::SummaryExternalEventSummaries::SummaryExternalEventSummary::MplsConvergenceTime : public ydk::Entity
{
    public:
        MplsConvergenceTime();
        ~MplsConvergenceTime();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf minimum_time; //type: string
        ydk::YLeaf maximum_time; //type: string
        ydk::YLeaf slowest_node_name; //type: string
        ydk::YLeaf fastest_node_name; //type: string

}; // Rcmd::Ospf::Instances::Instance::SummaryExternalEventSummaries::SummaryExternalEventSummary::MplsConvergenceTime


class Rcmd::Ospf::Instances::Instance::SummaryExternalEventSummaries::SummaryExternalEventSummary::Path : public ydk::Entity
{
    public:
        Path();
        ~Path();

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
        ydk::YLeaf neighbour_address; //type: string
        ydk::YLeaf change_type; //type: RcmdChange
        ydk::YLeaf path_metric; //type: uint32
        class LfaPath; //type: Rcmd::Ospf::Instances::Instance::SummaryExternalEventSummaries::SummaryExternalEventSummary::Path::LfaPath

        ydk::YList lfa_path;
        
}; // Rcmd::Ospf::Instances::Instance::SummaryExternalEventSummaries::SummaryExternalEventSummary::Path


class Rcmd::Ospf::Instances::Instance::SummaryExternalEventSummaries::SummaryExternalEventSummary::Path::LfaPath : public ydk::Entity
{
    public:
        LfaPath();
        ~LfaPath();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf lfa_type; //type: RcmdShowIpfrrLfa
        ydk::YLeaf interface_name; //type: string
        ydk::YLeaf neighbour_address; //type: string
        ydk::YLeaf change_type; //type: RcmdChange
        ydk::YLeaf path_metric; //type: uint32
        ydk::YLeaf remote_node_id; //type: string

}; // Rcmd::Ospf::Instances::Instance::SummaryExternalEventSummaries::SummaryExternalEventSummary::Path::LfaPath


class Rcmd::Ospf::Instances::Instance::SummaryExternalEventSummaries::SummaryExternalEventSummary::TriggerLsa : public ydk::Entity
{
    public:
        TriggerLsa();
        ~TriggerLsa();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf lsa_id; //type: string
        ydk::YLeaf sequence_number; //type: string
        ydk::YLeaf lsa_type; //type: RcmdLsa
        ydk::YLeaf origin_router_id; //type: string
        ydk::YLeaf change_type; //type: RcmdLsChange
        ydk::YLeaf reception_time; //type: string

}; // Rcmd::Ospf::Instances::Instance::SummaryExternalEventSummaries::SummaryExternalEventSummary::TriggerLsa


class Rcmd::Ospf::Instances::Instance::SummaryExternalEventSummaries::SummaryExternalEventSummary::TimeLine : public ydk::Entity
{
    public:
        TimeLine();
        ~TimeLine();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf route_origin; //type: string
        ydk::YLeaf ri_bv4_enter; //type: string
        ydk::YLeaf ri_bv4_exit; //type: string
        ydk::YLeaf ri_bv4_redistribute; //type: string
        ydk::YLeaf ldp_enter; //type: string
        ydk::YLeaf ldp_exit; //type: string
        ydk::YLeaf lsd_enter; //type: string
        ydk::YLeaf lsd_exit; //type: string
        class LcIp; //type: Rcmd::Ospf::Instances::Instance::SummaryExternalEventSummaries::SummaryExternalEventSummary::TimeLine::LcIp
        class LcMpls; //type: Rcmd::Ospf::Instances::Instance::SummaryExternalEventSummaries::SummaryExternalEventSummary::TimeLine::LcMpls

        ydk::YList lc_ip;
        ydk::YList lc_mpls;
        
}; // Rcmd::Ospf::Instances::Instance::SummaryExternalEventSummaries::SummaryExternalEventSummary::TimeLine


class Rcmd::Ospf::Instances::Instance::SummaryExternalEventSummaries::SummaryExternalEventSummary::TimeLine::LcIp : public ydk::Entity
{
    public:
        LcIp();
        ~LcIp();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf node_name; //type: string
        ydk::YLeaf speed; //type: RcmdLinecardSpeed
        ydk::YLeaf fib_complete; //type: string

}; // Rcmd::Ospf::Instances::Instance::SummaryExternalEventSummaries::SummaryExternalEventSummary::TimeLine::LcIp


class Rcmd::Ospf::Instances::Instance::SummaryExternalEventSummaries::SummaryExternalEventSummary::TimeLine::LcMpls : public ydk::Entity
{
    public:
        LcMpls();
        ~LcMpls();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf node_name; //type: string
        ydk::YLeaf speed; //type: RcmdLinecardSpeed
        ydk::YLeaf fib_complete; //type: string

}; // Rcmd::Ospf::Instances::Instance::SummaryExternalEventSummaries::SummaryExternalEventSummary::TimeLine::LcMpls


class Rcmd::Ospf::Instances::Instance::SummaryExternalEventSummaries::SummaryExternalEventSummary::LsaProcessed : public ydk::Entity
{
    public:
        LsaProcessed();
        ~LsaProcessed();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf lsa_id; //type: string
        ydk::YLeaf sequence_number; //type: string
        ydk::YLeaf lsa_type; //type: RcmdLsa
        ydk::YLeaf origin_router_id; //type: string
        ydk::YLeaf change_type; //type: RcmdLsChange
        ydk::YLeaf reception_time; //type: string

}; // Rcmd::Ospf::Instances::Instance::SummaryExternalEventSummaries::SummaryExternalEventSummary::LsaProcessed


class Rcmd::Ospf::Instances::Instance::PrefixEventSummaries : public ydk::Entity
{
    public:
        PrefixEventSummaries();
        ~PrefixEventSummaries();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class PrefixEventSummary; //type: Rcmd::Ospf::Instances::Instance::PrefixEventSummaries::PrefixEventSummary

        ydk::YList prefix_event_summary;
        
}; // Rcmd::Ospf::Instances::Instance::PrefixEventSummaries


class Rcmd::Ospf::Instances::Instance::PrefixEventSummaries::PrefixEventSummary : public ydk::Entity
{
    public:
        PrefixEventSummary();
        ~PrefixEventSummary();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf event_id; //type: uint32
        ydk::YLeaf prefix; //type: string
        ydk::YLeaf prefix_lenth; //type: uint32
        ydk::YLeaf spf_run_no; //type: uint32
        ydk::YLeaf ipfrr_event_id; //type: uint32
        ydk::YLeaf threshold_exceeded; //type: boolean
        ydk::YLeaf priority; //type: RcmdPriorityLevel
        ydk::YLeaf change_type; //type: RcmdChange
        ydk::YLeaf route_type; //type: RcmdShowRoute
        ydk::YLeaf route_path_change_type; //type: RcmdShowRoutePathChange
        ydk::YLeaf cost; //type: uint32
        ydk::YLeaf trigger_time; //type: string
        class IpConvergenceTime; //type: Rcmd::Ospf::Instances::Instance::PrefixEventSummaries::PrefixEventSummary::IpConvergenceTime
        class MplsConvergenceTime; //type: Rcmd::Ospf::Instances::Instance::PrefixEventSummaries::PrefixEventSummary::MplsConvergenceTime
        class Path; //type: Rcmd::Ospf::Instances::Instance::PrefixEventSummaries::PrefixEventSummary::Path
        class TriggerLsa; //type: Rcmd::Ospf::Instances::Instance::PrefixEventSummaries::PrefixEventSummary::TriggerLsa
        class TimeLine; //type: Rcmd::Ospf::Instances::Instance::PrefixEventSummaries::PrefixEventSummary::TimeLine
        class LsaProcessed; //type: Rcmd::Ospf::Instances::Instance::PrefixEventSummaries::PrefixEventSummary::LsaProcessed

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_infra_rcmd_oper::Rcmd::Ospf::Instances::Instance::PrefixEventSummaries::PrefixEventSummary::IpConvergenceTime> ip_convergence_time;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_infra_rcmd_oper::Rcmd::Ospf::Instances::Instance::PrefixEventSummaries::PrefixEventSummary::MplsConvergenceTime> mpls_convergence_time;
        ydk::YList path;
        ydk::YList trigger_lsa;
        ydk::YList time_line;
        ydk::YList lsa_processed;
        
}; // Rcmd::Ospf::Instances::Instance::PrefixEventSummaries::PrefixEventSummary


class Rcmd::Ospf::Instances::Instance::PrefixEventSummaries::PrefixEventSummary::IpConvergenceTime : public ydk::Entity
{
    public:
        IpConvergenceTime();
        ~IpConvergenceTime();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf minimum_time; //type: string
        ydk::YLeaf maximum_time; //type: string
        ydk::YLeaf slowest_node_name; //type: string
        ydk::YLeaf fastest_node_name; //type: string

}; // Rcmd::Ospf::Instances::Instance::PrefixEventSummaries::PrefixEventSummary::IpConvergenceTime


class Rcmd::Ospf::Instances::Instance::PrefixEventSummaries::PrefixEventSummary::MplsConvergenceTime : public ydk::Entity
{
    public:
        MplsConvergenceTime();
        ~MplsConvergenceTime();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf minimum_time; //type: string
        ydk::YLeaf maximum_time; //type: string
        ydk::YLeaf slowest_node_name; //type: string
        ydk::YLeaf fastest_node_name; //type: string

}; // Rcmd::Ospf::Instances::Instance::PrefixEventSummaries::PrefixEventSummary::MplsConvergenceTime


class Rcmd::Ospf::Instances::Instance::PrefixEventSummaries::PrefixEventSummary::Path : public ydk::Entity
{
    public:
        Path();
        ~Path();

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
        ydk::YLeaf neighbour_address; //type: string
        ydk::YLeaf change_type; //type: RcmdChange
        ydk::YLeaf path_metric; //type: uint32
        class LfaPath; //type: Rcmd::Ospf::Instances::Instance::PrefixEventSummaries::PrefixEventSummary::Path::LfaPath

        ydk::YList lfa_path;
        
}; // Rcmd::Ospf::Instances::Instance::PrefixEventSummaries::PrefixEventSummary::Path


class Rcmd::Ospf::Instances::Instance::PrefixEventSummaries::PrefixEventSummary::Path::LfaPath : public ydk::Entity
{
    public:
        LfaPath();
        ~LfaPath();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf lfa_type; //type: RcmdShowIpfrrLfa
        ydk::YLeaf interface_name; //type: string
        ydk::YLeaf neighbour_address; //type: string
        ydk::YLeaf change_type; //type: RcmdChange
        ydk::YLeaf path_metric; //type: uint32
        ydk::YLeaf remote_node_id; //type: string

}; // Rcmd::Ospf::Instances::Instance::PrefixEventSummaries::PrefixEventSummary::Path::LfaPath


class Rcmd::Ospf::Instances::Instance::PrefixEventSummaries::PrefixEventSummary::TriggerLsa : public ydk::Entity
{
    public:
        TriggerLsa();
        ~TriggerLsa();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf lsa_id; //type: string
        ydk::YLeaf sequence_number; //type: string
        ydk::YLeaf lsa_type; //type: RcmdLsa
        ydk::YLeaf origin_router_id; //type: string
        ydk::YLeaf change_type; //type: RcmdLsChange
        ydk::YLeaf reception_time; //type: string

}; // Rcmd::Ospf::Instances::Instance::PrefixEventSummaries::PrefixEventSummary::TriggerLsa


class Rcmd::Ospf::Instances::Instance::PrefixEventSummaries::PrefixEventSummary::TimeLine : public ydk::Entity
{
    public:
        TimeLine();
        ~TimeLine();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf route_origin; //type: string
        ydk::YLeaf ri_bv4_enter; //type: string
        ydk::YLeaf ri_bv4_exit; //type: string
        ydk::YLeaf ri_bv4_redistribute; //type: string
        ydk::YLeaf ldp_enter; //type: string
        ydk::YLeaf ldp_exit; //type: string
        ydk::YLeaf lsd_enter; //type: string
        ydk::YLeaf lsd_exit; //type: string
        class LcIp; //type: Rcmd::Ospf::Instances::Instance::PrefixEventSummaries::PrefixEventSummary::TimeLine::LcIp
        class LcMpls; //type: Rcmd::Ospf::Instances::Instance::PrefixEventSummaries::PrefixEventSummary::TimeLine::LcMpls

        ydk::YList lc_ip;
        ydk::YList lc_mpls;
        
}; // Rcmd::Ospf::Instances::Instance::PrefixEventSummaries::PrefixEventSummary::TimeLine


class Rcmd::Ospf::Instances::Instance::PrefixEventSummaries::PrefixEventSummary::TimeLine::LcIp : public ydk::Entity
{
    public:
        LcIp();
        ~LcIp();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf node_name; //type: string
        ydk::YLeaf speed; //type: RcmdLinecardSpeed
        ydk::YLeaf fib_complete; //type: string

}; // Rcmd::Ospf::Instances::Instance::PrefixEventSummaries::PrefixEventSummary::TimeLine::LcIp


class Rcmd::Ospf::Instances::Instance::PrefixEventSummaries::PrefixEventSummary::TimeLine::LcMpls : public ydk::Entity
{
    public:
        LcMpls();
        ~LcMpls();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf node_name; //type: string
        ydk::YLeaf speed; //type: RcmdLinecardSpeed
        ydk::YLeaf fib_complete; //type: string

}; // Rcmd::Ospf::Instances::Instance::PrefixEventSummaries::PrefixEventSummary::TimeLine::LcMpls


class Rcmd::Ospf::Instances::Instance::PrefixEventSummaries::PrefixEventSummary::LsaProcessed : public ydk::Entity
{
    public:
        LsaProcessed();
        ~LsaProcessed();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf lsa_id; //type: string
        ydk::YLeaf sequence_number; //type: string
        ydk::YLeaf lsa_type; //type: RcmdLsa
        ydk::YLeaf origin_router_id; //type: string
        ydk::YLeaf change_type; //type: RcmdLsChange
        ydk::YLeaf reception_time; //type: string

}; // Rcmd::Ospf::Instances::Instance::PrefixEventSummaries::PrefixEventSummary::LsaProcessed


class Rcmd::Ospf::Instances::Instance::SummaryExternalEventOfflines : public ydk::Entity
{
    public:
        SummaryExternalEventOfflines();
        ~SummaryExternalEventOfflines();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class SummaryExternalEventOffline; //type: Rcmd::Ospf::Instances::Instance::SummaryExternalEventOfflines::SummaryExternalEventOffline

        ydk::YList summary_external_event_offline;
        
}; // Rcmd::Ospf::Instances::Instance::SummaryExternalEventOfflines


class Rcmd::Ospf::Instances::Instance::SummaryExternalEventOfflines::SummaryExternalEventOffline : public ydk::Entity
{
    public:
        SummaryExternalEventOffline();
        ~SummaryExternalEventOffline();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf event_id; //type: uint32
        ydk::YLeaf prefix; //type: string
        ydk::YLeaf prefix_lenth; //type: uint32
        ydk::YLeaf spf_run_no; //type: uint32
        ydk::YLeaf ipfrr_event_id; //type: uint32
        ydk::YLeaf threshold_exceeded; //type: boolean
        ydk::YLeaf priority; //type: RcmdPriorityLevel
        ydk::YLeaf change_type; //type: RcmdChange
        ydk::YLeaf route_type; //type: RcmdShowRoute
        ydk::YLeaf route_path_change_type; //type: RcmdShowRoutePathChange
        ydk::YLeaf cost; //type: uint32
        ydk::YLeaf trigger_time; //type: string
        class IpConvergenceTime; //type: Rcmd::Ospf::Instances::Instance::SummaryExternalEventOfflines::SummaryExternalEventOffline::IpConvergenceTime
        class MplsConvergenceTime; //type: Rcmd::Ospf::Instances::Instance::SummaryExternalEventOfflines::SummaryExternalEventOffline::MplsConvergenceTime
        class Path; //type: Rcmd::Ospf::Instances::Instance::SummaryExternalEventOfflines::SummaryExternalEventOffline::Path
        class TriggerLsa; //type: Rcmd::Ospf::Instances::Instance::SummaryExternalEventOfflines::SummaryExternalEventOffline::TriggerLsa
        class TimeLine; //type: Rcmd::Ospf::Instances::Instance::SummaryExternalEventOfflines::SummaryExternalEventOffline::TimeLine
        class LsaProcessed; //type: Rcmd::Ospf::Instances::Instance::SummaryExternalEventOfflines::SummaryExternalEventOffline::LsaProcessed

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_infra_rcmd_oper::Rcmd::Ospf::Instances::Instance::SummaryExternalEventOfflines::SummaryExternalEventOffline::IpConvergenceTime> ip_convergence_time;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_infra_rcmd_oper::Rcmd::Ospf::Instances::Instance::SummaryExternalEventOfflines::SummaryExternalEventOffline::MplsConvergenceTime> mpls_convergence_time;
        ydk::YList path;
        ydk::YList trigger_lsa;
        ydk::YList time_line;
        ydk::YList lsa_processed;
        
}; // Rcmd::Ospf::Instances::Instance::SummaryExternalEventOfflines::SummaryExternalEventOffline


class Rcmd::Ospf::Instances::Instance::SummaryExternalEventOfflines::SummaryExternalEventOffline::IpConvergenceTime : public ydk::Entity
{
    public:
        IpConvergenceTime();
        ~IpConvergenceTime();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf minimum_time; //type: string
        ydk::YLeaf maximum_time; //type: string
        ydk::YLeaf slowest_node_name; //type: string
        ydk::YLeaf fastest_node_name; //type: string

}; // Rcmd::Ospf::Instances::Instance::SummaryExternalEventOfflines::SummaryExternalEventOffline::IpConvergenceTime


class Rcmd::Ospf::Instances::Instance::SummaryExternalEventOfflines::SummaryExternalEventOffline::MplsConvergenceTime : public ydk::Entity
{
    public:
        MplsConvergenceTime();
        ~MplsConvergenceTime();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf minimum_time; //type: string
        ydk::YLeaf maximum_time; //type: string
        ydk::YLeaf slowest_node_name; //type: string
        ydk::YLeaf fastest_node_name; //type: string

}; // Rcmd::Ospf::Instances::Instance::SummaryExternalEventOfflines::SummaryExternalEventOffline::MplsConvergenceTime


class Rcmd::Ospf::Instances::Instance::SummaryExternalEventOfflines::SummaryExternalEventOffline::Path : public ydk::Entity
{
    public:
        Path();
        ~Path();

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
        ydk::YLeaf neighbour_address; //type: string
        ydk::YLeaf change_type; //type: RcmdChange
        ydk::YLeaf path_metric; //type: uint32
        class LfaPath; //type: Rcmd::Ospf::Instances::Instance::SummaryExternalEventOfflines::SummaryExternalEventOffline::Path::LfaPath

        ydk::YList lfa_path;
        
}; // Rcmd::Ospf::Instances::Instance::SummaryExternalEventOfflines::SummaryExternalEventOffline::Path


class Rcmd::Ospf::Instances::Instance::SummaryExternalEventOfflines::SummaryExternalEventOffline::Path::LfaPath : public ydk::Entity
{
    public:
        LfaPath();
        ~LfaPath();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf lfa_type; //type: RcmdShowIpfrrLfa
        ydk::YLeaf interface_name; //type: string
        ydk::YLeaf neighbour_address; //type: string
        ydk::YLeaf change_type; //type: RcmdChange
        ydk::YLeaf path_metric; //type: uint32
        ydk::YLeaf remote_node_id; //type: string

}; // Rcmd::Ospf::Instances::Instance::SummaryExternalEventOfflines::SummaryExternalEventOffline::Path::LfaPath


class Rcmd::Ospf::Instances::Instance::SummaryExternalEventOfflines::SummaryExternalEventOffline::TriggerLsa : public ydk::Entity
{
    public:
        TriggerLsa();
        ~TriggerLsa();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf lsa_id; //type: string
        ydk::YLeaf sequence_number; //type: string
        ydk::YLeaf lsa_type; //type: RcmdLsa
        ydk::YLeaf origin_router_id; //type: string
        ydk::YLeaf change_type; //type: RcmdLsChange
        ydk::YLeaf reception_time; //type: string

}; // Rcmd::Ospf::Instances::Instance::SummaryExternalEventOfflines::SummaryExternalEventOffline::TriggerLsa


class Rcmd::Ospf::Instances::Instance::SummaryExternalEventOfflines::SummaryExternalEventOffline::TimeLine : public ydk::Entity
{
    public:
        TimeLine();
        ~TimeLine();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf route_origin; //type: string
        ydk::YLeaf ri_bv4_enter; //type: string
        ydk::YLeaf ri_bv4_exit; //type: string
        ydk::YLeaf ri_bv4_redistribute; //type: string
        ydk::YLeaf ldp_enter; //type: string
        ydk::YLeaf ldp_exit; //type: string
        ydk::YLeaf lsd_enter; //type: string
        ydk::YLeaf lsd_exit; //type: string
        class LcIp; //type: Rcmd::Ospf::Instances::Instance::SummaryExternalEventOfflines::SummaryExternalEventOffline::TimeLine::LcIp
        class LcMpls; //type: Rcmd::Ospf::Instances::Instance::SummaryExternalEventOfflines::SummaryExternalEventOffline::TimeLine::LcMpls

        ydk::YList lc_ip;
        ydk::YList lc_mpls;
        
}; // Rcmd::Ospf::Instances::Instance::SummaryExternalEventOfflines::SummaryExternalEventOffline::TimeLine


class Rcmd::Ospf::Instances::Instance::SummaryExternalEventOfflines::SummaryExternalEventOffline::TimeLine::LcIp : public ydk::Entity
{
    public:
        LcIp();
        ~LcIp();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf node_name; //type: string
        ydk::YLeaf speed; //type: RcmdLinecardSpeed
        ydk::YLeaf fib_complete; //type: string

}; // Rcmd::Ospf::Instances::Instance::SummaryExternalEventOfflines::SummaryExternalEventOffline::TimeLine::LcIp


class Rcmd::Ospf::Instances::Instance::SummaryExternalEventOfflines::SummaryExternalEventOffline::TimeLine::LcMpls : public ydk::Entity
{
    public:
        LcMpls();
        ~LcMpls();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf node_name; //type: string
        ydk::YLeaf speed; //type: RcmdLinecardSpeed
        ydk::YLeaf fib_complete; //type: string

}; // Rcmd::Ospf::Instances::Instance::SummaryExternalEventOfflines::SummaryExternalEventOffline::TimeLine::LcMpls


class Rcmd::Ospf::Instances::Instance::SummaryExternalEventOfflines::SummaryExternalEventOffline::LsaProcessed : public ydk::Entity
{
    public:
        LsaProcessed();
        ~LsaProcessed();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf lsa_id; //type: string
        ydk::YLeaf sequence_number; //type: string
        ydk::YLeaf lsa_type; //type: RcmdLsa
        ydk::YLeaf origin_router_id; //type: string
        ydk::YLeaf change_type; //type: RcmdLsChange
        ydk::YLeaf reception_time; //type: string

}; // Rcmd::Ospf::Instances::Instance::SummaryExternalEventOfflines::SummaryExternalEventOffline::LsaProcessed


class Rcmd::Ospf::Instances::Instance::PrefixEventOfflines : public ydk::Entity
{
    public:
        PrefixEventOfflines();
        ~PrefixEventOfflines();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class PrefixEventOffline; //type: Rcmd::Ospf::Instances::Instance::PrefixEventOfflines::PrefixEventOffline

        ydk::YList prefix_event_offline;
        
}; // Rcmd::Ospf::Instances::Instance::PrefixEventOfflines


class Rcmd::Ospf::Instances::Instance::PrefixEventOfflines::PrefixEventOffline : public ydk::Entity
{
    public:
        PrefixEventOffline();
        ~PrefixEventOffline();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf event_id; //type: uint32
        ydk::YLeaf prefix; //type: string
        ydk::YLeaf prefix_lenth; //type: uint32
        ydk::YLeaf spf_run_no; //type: uint32
        ydk::YLeaf ipfrr_event_id; //type: uint32
        ydk::YLeaf threshold_exceeded; //type: boolean
        ydk::YLeaf priority; //type: RcmdPriorityLevel
        ydk::YLeaf change_type; //type: RcmdChange
        ydk::YLeaf route_type; //type: RcmdShowRoute
        ydk::YLeaf route_path_change_type; //type: RcmdShowRoutePathChange
        ydk::YLeaf cost; //type: uint32
        ydk::YLeaf trigger_time; //type: string
        class IpConvergenceTime; //type: Rcmd::Ospf::Instances::Instance::PrefixEventOfflines::PrefixEventOffline::IpConvergenceTime
        class MplsConvergenceTime; //type: Rcmd::Ospf::Instances::Instance::PrefixEventOfflines::PrefixEventOffline::MplsConvergenceTime
        class Path; //type: Rcmd::Ospf::Instances::Instance::PrefixEventOfflines::PrefixEventOffline::Path
        class TriggerLsa; //type: Rcmd::Ospf::Instances::Instance::PrefixEventOfflines::PrefixEventOffline::TriggerLsa
        class TimeLine; //type: Rcmd::Ospf::Instances::Instance::PrefixEventOfflines::PrefixEventOffline::TimeLine
        class LsaProcessed; //type: Rcmd::Ospf::Instances::Instance::PrefixEventOfflines::PrefixEventOffline::LsaProcessed

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_infra_rcmd_oper::Rcmd::Ospf::Instances::Instance::PrefixEventOfflines::PrefixEventOffline::IpConvergenceTime> ip_convergence_time;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_infra_rcmd_oper::Rcmd::Ospf::Instances::Instance::PrefixEventOfflines::PrefixEventOffline::MplsConvergenceTime> mpls_convergence_time;
        ydk::YList path;
        ydk::YList trigger_lsa;
        ydk::YList time_line;
        ydk::YList lsa_processed;
        
}; // Rcmd::Ospf::Instances::Instance::PrefixEventOfflines::PrefixEventOffline


class Rcmd::Ospf::Instances::Instance::PrefixEventOfflines::PrefixEventOffline::IpConvergenceTime : public ydk::Entity
{
    public:
        IpConvergenceTime();
        ~IpConvergenceTime();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf minimum_time; //type: string
        ydk::YLeaf maximum_time; //type: string
        ydk::YLeaf slowest_node_name; //type: string
        ydk::YLeaf fastest_node_name; //type: string

}; // Rcmd::Ospf::Instances::Instance::PrefixEventOfflines::PrefixEventOffline::IpConvergenceTime


class Rcmd::Ospf::Instances::Instance::PrefixEventOfflines::PrefixEventOffline::MplsConvergenceTime : public ydk::Entity
{
    public:
        MplsConvergenceTime();
        ~MplsConvergenceTime();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf minimum_time; //type: string
        ydk::YLeaf maximum_time; //type: string
        ydk::YLeaf slowest_node_name; //type: string
        ydk::YLeaf fastest_node_name; //type: string

}; // Rcmd::Ospf::Instances::Instance::PrefixEventOfflines::PrefixEventOffline::MplsConvergenceTime


class Rcmd::Ospf::Instances::Instance::PrefixEventOfflines::PrefixEventOffline::Path : public ydk::Entity
{
    public:
        Path();
        ~Path();

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
        ydk::YLeaf neighbour_address; //type: string
        ydk::YLeaf change_type; //type: RcmdChange
        ydk::YLeaf path_metric; //type: uint32
        class LfaPath; //type: Rcmd::Ospf::Instances::Instance::PrefixEventOfflines::PrefixEventOffline::Path::LfaPath

        ydk::YList lfa_path;
        
}; // Rcmd::Ospf::Instances::Instance::PrefixEventOfflines::PrefixEventOffline::Path


class Rcmd::Ospf::Instances::Instance::PrefixEventOfflines::PrefixEventOffline::Path::LfaPath : public ydk::Entity
{
    public:
        LfaPath();
        ~LfaPath();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf lfa_type; //type: RcmdShowIpfrrLfa
        ydk::YLeaf interface_name; //type: string
        ydk::YLeaf neighbour_address; //type: string
        ydk::YLeaf change_type; //type: RcmdChange
        ydk::YLeaf path_metric; //type: uint32
        ydk::YLeaf remote_node_id; //type: string

}; // Rcmd::Ospf::Instances::Instance::PrefixEventOfflines::PrefixEventOffline::Path::LfaPath


class Rcmd::Ospf::Instances::Instance::PrefixEventOfflines::PrefixEventOffline::TriggerLsa : public ydk::Entity
{
    public:
        TriggerLsa();
        ~TriggerLsa();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf lsa_id; //type: string
        ydk::YLeaf sequence_number; //type: string
        ydk::YLeaf lsa_type; //type: RcmdLsa
        ydk::YLeaf origin_router_id; //type: string
        ydk::YLeaf change_type; //type: RcmdLsChange
        ydk::YLeaf reception_time; //type: string

}; // Rcmd::Ospf::Instances::Instance::PrefixEventOfflines::PrefixEventOffline::TriggerLsa


class Rcmd::Ospf::Instances::Instance::PrefixEventOfflines::PrefixEventOffline::TimeLine : public ydk::Entity
{
    public:
        TimeLine();
        ~TimeLine();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf route_origin; //type: string
        ydk::YLeaf ri_bv4_enter; //type: string
        ydk::YLeaf ri_bv4_exit; //type: string
        ydk::YLeaf ri_bv4_redistribute; //type: string
        ydk::YLeaf ldp_enter; //type: string
        ydk::YLeaf ldp_exit; //type: string
        ydk::YLeaf lsd_enter; //type: string
        ydk::YLeaf lsd_exit; //type: string
        class LcIp; //type: Rcmd::Ospf::Instances::Instance::PrefixEventOfflines::PrefixEventOffline::TimeLine::LcIp
        class LcMpls; //type: Rcmd::Ospf::Instances::Instance::PrefixEventOfflines::PrefixEventOffline::TimeLine::LcMpls

        ydk::YList lc_ip;
        ydk::YList lc_mpls;
        
}; // Rcmd::Ospf::Instances::Instance::PrefixEventOfflines::PrefixEventOffline::TimeLine


class Rcmd::Ospf::Instances::Instance::PrefixEventOfflines::PrefixEventOffline::TimeLine::LcIp : public ydk::Entity
{
    public:
        LcIp();
        ~LcIp();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf node_name; //type: string
        ydk::YLeaf speed; //type: RcmdLinecardSpeed
        ydk::YLeaf fib_complete; //type: string

}; // Rcmd::Ospf::Instances::Instance::PrefixEventOfflines::PrefixEventOffline::TimeLine::LcIp


class Rcmd::Ospf::Instances::Instance::PrefixEventOfflines::PrefixEventOffline::TimeLine::LcMpls : public ydk::Entity
{
    public:
        LcMpls();
        ~LcMpls();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf node_name; //type: string
        ydk::YLeaf speed; //type: RcmdLinecardSpeed
        ydk::YLeaf fib_complete; //type: string

}; // Rcmd::Ospf::Instances::Instance::PrefixEventOfflines::PrefixEventOffline::TimeLine::LcMpls


class Rcmd::Ospf::Instances::Instance::PrefixEventOfflines::PrefixEventOffline::LsaProcessed : public ydk::Entity
{
    public:
        LsaProcessed();
        ~LsaProcessed();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf lsa_id; //type: string
        ydk::YLeaf sequence_number; //type: string
        ydk::YLeaf lsa_type; //type: RcmdLsa
        ydk::YLeaf origin_router_id; //type: string
        ydk::YLeaf change_type; //type: RcmdLsChange
        ydk::YLeaf reception_time; //type: string

}; // Rcmd::Ospf::Instances::Instance::PrefixEventOfflines::PrefixEventOffline::LsaProcessed


class Rcmd::Ospf::Instances::Instance::SummaryExternalEventStatistics : public ydk::Entity
{
    public:
        SummaryExternalEventStatistics();
        ~SummaryExternalEventStatistics();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf inter_area_routes; //type: uint32
        ydk::YLeaf inter_area_added; //type: uint32
        ydk::YLeaf inter_area_modified; //type: uint32
        ydk::YLeaf inter_area_deleted; //type: uint32
        ydk::YLeaf inter_area_critical; //type: uint32
        ydk::YLeaf inter_area_high; //type: uint32
        ydk::YLeaf inter_area_medium; //type: uint32
        ydk::YLeaf inter_area_low; //type: uint32
        ydk::YLeaf external_routes; //type: uint32
        ydk::YLeaf external_added; //type: uint32
        ydk::YLeaf external_modified; //type: uint32
        ydk::YLeaf external_deleted; //type: uint32
        ydk::YLeaf external_critical; //type: uint32
        ydk::YLeaf external_high; //type: uint32
        ydk::YLeaf external_medium; //type: uint32
        ydk::YLeaf external_low; //type: uint32

}; // Rcmd::Ospf::Instances::Instance::SummaryExternalEventStatistics


class Rcmd::Server : public ydk::Entity
{
    public:
        Server();
        ~Server();

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

        class Normal; //type: Rcmd::Server::Normal
        class Detail; //type: Rcmd::Server::Detail

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_infra_rcmd_oper::Rcmd::Server::Normal> normal;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_infra_rcmd_oper::Rcmd::Server::Detail> detail;
        
}; // Rcmd::Server


class Rcmd::Server::Normal : public ydk::Entity
{
    public:
        Normal();
        ~Normal();

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

        ydk::YLeaf host_name; //type: string
        ydk::YLeaf status; //type: RcmdBagEnableDisable
        ydk::YLeaf max_events; //type: uint32
        ydk::YLeaf event_buffer_size; //type: uint32
        ydk::YLeaf monitoring_interval; //type: uint32
        ydk::YLeaf next_interval; //type: uint32
        ydk::YLeaf max_interface_count; //type: uint32
        ydk::YLeaf interface_count; //type: uint32
        ydk::YLeaf node_rp_count; //type: uint32
        ydk::YLeaf node_lc_count; //type: uint32
        ydk::YLeaf diag_node_count; //type: uint32
        ydk::YLeaf disabled_node_count; //type: uint32
        ydk::YLeaf in_active_node_count; //type: uint32
        ydk::YLeaf last_process_start_time; //type: string
        ydk::YLeaf last_process_duration; //type: string
        ydk::YLeaf last_process_state; //type: RcmdShowPrcsState
        ydk::YLeaf process_count; //type: uint32
        ydk::YLeaf spf_process_count; //type: uint32
        ydk::YLeaf reports_archive_path; //type: string
        ydk::YLeaf reports_archive_node; //type: string
        ydk::YLeaf last_archival_status; //type: string
        ydk::YLeaf last_archival_error; //type: string
        ydk::YLeaf last_archival_error_time; //type: string
        ydk::YLeaf archive_count; //type: uint32
        ydk::YLeaf diagnostics_archive_path; //type: string
        ydk::YLeaf diagnostics_archive_node; //type: string
        class ProtocolConfig; //type: Rcmd::Server::Normal::ProtocolConfig
        class ServerDetail; //type: Rcmd::Server::Normal::ServerDetail

        ydk::YList protocol_config;
        ydk::YList server_detail;
        
}; // Rcmd::Server::Normal


class Rcmd::Server::Normal::ProtocolConfig : public ydk::Entity
{
    public:
        ProtocolConfig();
        ~ProtocolConfig();

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

        ydk::YLeaf protocol_name; //type: string
        class Priority; //type: Rcmd::Server::Normal::ProtocolConfig::Priority

        ydk::YList priority;
        
}; // Rcmd::Server::Normal::ProtocolConfig


class Rcmd::Server::Normal::ProtocolConfig::Priority : public ydk::Entity
{
    public:
        Priority();
        ~Priority();

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

        ydk::YLeaf priority_name; //type: RcmdPriorityLevel
        ydk::YLeaf threshold; //type: uint32
        ydk::YLeaf disable; //type: RcmdBoolYesNo

}; // Rcmd::Server::Normal::ProtocolConfig::Priority


class Rcmd::Server::Normal::ServerDetail : public ydk::Entity
{
    public:
        ServerDetail();
        ~ServerDetail();

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

        ydk::YLeaf overload_suspend; //type: uint32
        ydk::YLeaf memory_suspend; //type: uint32
        class TraceInformation; //type: Rcmd::Server::Normal::ServerDetail::TraceInformation

        ydk::YList trace_information;
        
}; // Rcmd::Server::Normal::ServerDetail


class Rcmd::Server::Normal::ServerDetail::TraceInformation : public ydk::Entity
{
    public:
        TraceInformation();
        ~TraceInformation();

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

        ydk::YLeaf trace_name; //type: string
        ydk::YLeaf total_stats; //type: uint32
        ydk::YLeaf last_run_stats; //type: uint32
        ydk::YLeaf error_stats; //type: uint32

}; // Rcmd::Server::Normal::ServerDetail::TraceInformation


class Rcmd::Server::Detail : public ydk::Entity
{
    public:
        Detail();
        ~Detail();

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

        ydk::YLeaf host_name; //type: string
        ydk::YLeaf status; //type: RcmdBagEnableDisable
        ydk::YLeaf max_events; //type: uint32
        ydk::YLeaf event_buffer_size; //type: uint32
        ydk::YLeaf monitoring_interval; //type: uint32
        ydk::YLeaf next_interval; //type: uint32
        ydk::YLeaf max_interface_count; //type: uint32
        ydk::YLeaf interface_count; //type: uint32
        ydk::YLeaf node_rp_count; //type: uint32
        ydk::YLeaf node_lc_count; //type: uint32
        ydk::YLeaf diag_node_count; //type: uint32
        ydk::YLeaf disabled_node_count; //type: uint32
        ydk::YLeaf in_active_node_count; //type: uint32
        ydk::YLeaf last_process_start_time; //type: string
        ydk::YLeaf last_process_duration; //type: string
        ydk::YLeaf last_process_state; //type: RcmdShowPrcsState
        ydk::YLeaf process_count; //type: uint32
        ydk::YLeaf spf_process_count; //type: uint32
        ydk::YLeaf reports_archive_path; //type: string
        ydk::YLeaf reports_archive_node; //type: string
        ydk::YLeaf last_archival_status; //type: string
        ydk::YLeaf last_archival_error; //type: string
        ydk::YLeaf last_archival_error_time; //type: string
        ydk::YLeaf archive_count; //type: uint32
        ydk::YLeaf diagnostics_archive_path; //type: string
        ydk::YLeaf diagnostics_archive_node; //type: string
        class ProtocolConfig; //type: Rcmd::Server::Detail::ProtocolConfig
        class ServerDetail; //type: Rcmd::Server::Detail::ServerDetail

        ydk::YList protocol_config;
        ydk::YList server_detail;
        
}; // Rcmd::Server::Detail


class Rcmd::Server::Detail::ProtocolConfig : public ydk::Entity
{
    public:
        ProtocolConfig();
        ~ProtocolConfig();

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

        ydk::YLeaf protocol_name; //type: string
        class Priority; //type: Rcmd::Server::Detail::ProtocolConfig::Priority

        ydk::YList priority;
        
}; // Rcmd::Server::Detail::ProtocolConfig


class Rcmd::Server::Detail::ProtocolConfig::Priority : public ydk::Entity
{
    public:
        Priority();
        ~Priority();

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

        ydk::YLeaf priority_name; //type: RcmdPriorityLevel
        ydk::YLeaf threshold; //type: uint32
        ydk::YLeaf disable; //type: RcmdBoolYesNo

}; // Rcmd::Server::Detail::ProtocolConfig::Priority


class Rcmd::Server::Detail::ServerDetail : public ydk::Entity
{
    public:
        ServerDetail();
        ~ServerDetail();

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

        ydk::YLeaf overload_suspend; //type: uint32
        ydk::YLeaf memory_suspend; //type: uint32
        class TraceInformation; //type: Rcmd::Server::Detail::ServerDetail::TraceInformation

        ydk::YList trace_information;
        
}; // Rcmd::Server::Detail::ServerDetail


class Rcmd::Server::Detail::ServerDetail::TraceInformation : public ydk::Entity
{
    public:
        TraceInformation();
        ~TraceInformation();

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

        ydk::YLeaf trace_name; //type: string
        ydk::YLeaf total_stats; //type: uint32
        ydk::YLeaf last_run_stats; //type: uint32
        ydk::YLeaf error_stats; //type: uint32

}; // Rcmd::Server::Detail::ServerDetail::TraceInformation


class Rcmd::Node : public ydk::Entity
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

        class NodeInformation; //type: Rcmd::Node::NodeInformation

        ydk::YList node_information;
        
}; // Rcmd::Node


class Rcmd::Node::NodeInformation : public ydk::Entity
{
    public:
        NodeInformation();
        ~NodeInformation();

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

        ydk::YLeaf node_id; //type: uint32
        ydk::YLeaf node_name; //type: string
        ydk::YLeaf rack_id; //type: uint32
        ydk::YLeaf last_update_time; //type: string
        ydk::YLeaf fwd_referenced; //type: RcmdBoolYesNo
        ydk::YLeaf node_type; //type: RcmdShowNode
        ydk::YLeaf software_state; //type: uint32
        ydk::YLeaf card_state; //type: uint32
        ydk::YLeaf node_state; //type: RcmdBoolYesNo
        ydk::YLeaf status; //type: RcmdBagEnblDsbl
        ydk::YLeaf diag_mode; //type: uint32
        ydk::YLeaf redundancy_state; //type: uint32

}; // Rcmd::Node::NodeInformation


class Rcmd::Isis : public ydk::Entity
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
        std::string get_absolute_path() const override;

        class Instances; //type: Rcmd::Isis::Instances

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_infra_rcmd_oper::Rcmd::Isis::Instances> instances;
        
}; // Rcmd::Isis


class Rcmd::Isis::Instances : public ydk::Entity
{
    public:
        Instances();
        ~Instances();

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

        class Instance; //type: Rcmd::Isis::Instances::Instance

        ydk::YList instance;
        
}; // Rcmd::Isis::Instances


class Rcmd::Isis::Instances::Instance : public ydk::Entity
{
    public:
        Instance();
        ~Instance();

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
        class IpfrrEventSummaries; //type: Rcmd::Isis::Instances::Instance::IpfrrEventSummaries
        class PrefixEventStatistics; //type: Rcmd::Isis::Instances::Instance::PrefixEventStatistics
        class SpfRunSummaries; //type: Rcmd::Isis::Instances::Instance::SpfRunSummaries
        class IpfrrEventOfflines; //type: Rcmd::Isis::Instances::Instance::IpfrrEventOfflines
        class SpfRunOfflines; //type: Rcmd::Isis::Instances::Instance::SpfRunOfflines
        class PrefixEventSummaries; //type: Rcmd::Isis::Instances::Instance::PrefixEventSummaries
        class PrefixEventOfflines; //type: Rcmd::Isis::Instances::Instance::PrefixEventOfflines
        class LspRegenerateds; //type: Rcmd::Isis::Instances::Instance::LspRegenerateds

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_infra_rcmd_oper::Rcmd::Isis::Instances::Instance::IpfrrEventSummaries> ipfrr_event_summaries;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_infra_rcmd_oper::Rcmd::Isis::Instances::Instance::PrefixEventStatistics> prefix_event_statistics;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_infra_rcmd_oper::Rcmd::Isis::Instances::Instance::SpfRunSummaries> spf_run_summaries;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_infra_rcmd_oper::Rcmd::Isis::Instances::Instance::IpfrrEventOfflines> ipfrr_event_offlines;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_infra_rcmd_oper::Rcmd::Isis::Instances::Instance::SpfRunOfflines> spf_run_offlines;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_infra_rcmd_oper::Rcmd::Isis::Instances::Instance::PrefixEventSummaries> prefix_event_summaries;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_infra_rcmd_oper::Rcmd::Isis::Instances::Instance::PrefixEventOfflines> prefix_event_offlines;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_infra_rcmd_oper::Rcmd::Isis::Instances::Instance::LspRegenerateds> lsp_regenerateds;
        
}; // Rcmd::Isis::Instances::Instance


class Rcmd::Isis::Instances::Instance::IpfrrEventSummaries : public ydk::Entity
{
    public:
        IpfrrEventSummaries();
        ~IpfrrEventSummaries();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class IpfrrEventSummary; //type: Rcmd::Isis::Instances::Instance::IpfrrEventSummaries::IpfrrEventSummary

        ydk::YList ipfrr_event_summary;
        
}; // Rcmd::Isis::Instances::Instance::IpfrrEventSummaries


class Rcmd::Isis::Instances::Instance::IpfrrEventSummaries::IpfrrEventSummary : public ydk::Entity
{
    public:
        IpfrrEventSummary();
        ~IpfrrEventSummary();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf event_id; //type: uint32
        ydk::YLeaf event_id_xr; //type: uint32
        ydk::YLeaf trigger_time; //type: string
        ydk::YLeaf trigger_spf_run; //type: uint32
        ydk::YLeaf wait_time; //type: uint32
        ydk::YLeaf start_time_offset; //type: string
        ydk::YLeaf duration; //type: string
        ydk::YLeaf completed_spf_run; //type: uint32
        ydk::YLeaf total_routes; //type: uint32
        ydk::YLeaf fully_protected_routes; //type: uint32
        ydk::YLeaf partially_protected_routes; //type: uint32
        ydk::YLeaf coverage; //type: string
        class IpfrrStatistic; //type: Rcmd::Isis::Instances::Instance::IpfrrEventSummaries::IpfrrEventSummary::IpfrrStatistic
        class RemoteNode; //type: Rcmd::Isis::Instances::Instance::IpfrrEventSummaries::IpfrrEventSummary::RemoteNode

        ydk::YList ipfrr_statistic;
        ydk::YList remote_node;
        
}; // Rcmd::Isis::Instances::Instance::IpfrrEventSummaries::IpfrrEventSummary


class Rcmd::Isis::Instances::Instance::IpfrrEventSummaries::IpfrrEventSummary::IpfrrStatistic : public ydk::Entity
{
    public:
        IpfrrStatistic();
        ~IpfrrStatistic();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf priority; //type: RcmdPriorityLevel
        ydk::YLeaf total_routes; //type: uint32
        ydk::YLeaf fully_protected_routes; //type: uint32
        ydk::YLeaf partially_protected_routes; //type: uint32
        ydk::YLeaf coverage; //type: string
        ydk::YLeaf local_lfa_coverage; //type: string
        ydk::YLeaf remote_lfa_coverage; //type: string
        ydk::YLeaf below_threshold; //type: boolean

}; // Rcmd::Isis::Instances::Instance::IpfrrEventSummaries::IpfrrEventSummary::IpfrrStatistic


class Rcmd::Isis::Instances::Instance::IpfrrEventSummaries::IpfrrEventSummary::RemoteNode : public ydk::Entity
{
    public:
        RemoteNode();
        ~RemoteNode();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf remote_node_id; //type: string
        ydk::YLeaf interface_name; //type: string
        ydk::YLeaf neighbour_address; //type: string
        ydk::YLeaf path_count; //type: uint32
        ydk::YLeaf in_use_time; //type: string
        class PrimaryPath; //type: Rcmd::Isis::Instances::Instance::IpfrrEventSummaries::IpfrrEventSummary::RemoteNode::PrimaryPath

        ydk::YList primary_path;
        
}; // Rcmd::Isis::Instances::Instance::IpfrrEventSummaries::IpfrrEventSummary::RemoteNode


class Rcmd::Isis::Instances::Instance::IpfrrEventSummaries::IpfrrEventSummary::RemoteNode::PrimaryPath : public ydk::Entity
{
    public:
        PrimaryPath();
        ~PrimaryPath();

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
        ydk::YLeaf neighbour_address; //type: string

}; // Rcmd::Isis::Instances::Instance::IpfrrEventSummaries::IpfrrEventSummary::RemoteNode::PrimaryPath


class Rcmd::Isis::Instances::Instance::PrefixEventStatistics : public ydk::Entity
{
    public:
        PrefixEventStatistics();
        ~PrefixEventStatistics();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class PrefixEventStatistic; //type: Rcmd::Isis::Instances::Instance::PrefixEventStatistics::PrefixEventStatistic

        ydk::YList prefix_event_statistic;
        
}; // Rcmd::Isis::Instances::Instance::PrefixEventStatistics


class Rcmd::Isis::Instances::Instance::PrefixEventStatistics::PrefixEventStatistic : public ydk::Entity
{
    public:
        PrefixEventStatistic();
        ~PrefixEventStatistic();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf prefix_info; //type: string
        ydk::YLeaf prefix; //type: string
        ydk::YLeaf prefix_lenth; //type: uint32
        ydk::YLeaf last_event_time; //type: string
        ydk::YLeaf last_priority; //type: RcmdPriorityLevel
        ydk::YLeaf last_route_type; //type: RcmdShowRoute
        ydk::YLeaf last_change_type; //type: RcmdChange
        ydk::YLeaf last_cost; //type: uint32
        ydk::YLeaf critical_priority; //type: uint32
        ydk::YLeaf high_priority; //type: uint32
        ydk::YLeaf medium_priority; //type: uint32
        ydk::YLeaf low_priority; //type: uint32
        ydk::YLeaf add_count; //type: uint32
        ydk::YLeaf modify_count; //type: uint32
        ydk::YLeaf delete_count; //type: uint32
        ydk::YLeaf threshold_exceed_count; //type: uint32

}; // Rcmd::Isis::Instances::Instance::PrefixEventStatistics::PrefixEventStatistic


class Rcmd::Isis::Instances::Instance::SpfRunSummaries : public ydk::Entity
{
    public:
        SpfRunSummaries();
        ~SpfRunSummaries();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class SpfRunSummary; //type: Rcmd::Isis::Instances::Instance::SpfRunSummaries::SpfRunSummary

        ydk::YList spf_run_summary;
        
}; // Rcmd::Isis::Instances::Instance::SpfRunSummaries


class Rcmd::Isis::Instances::Instance::SpfRunSummaries::SpfRunSummary : public ydk::Entity
{
    public:
        SpfRunSummary();
        ~SpfRunSummary();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf spf_run_number; //type: uint32
        ydk::YLeaf start_time; //type: string
        ydk::YLeaf wait_time; //type: uint32
        ydk::YLeaf reason; //type: string
        class SpfSummary; //type: Rcmd::Isis::Instances::Instance::SpfRunSummaries::SpfRunSummary::SpfSummary
        class NodeStatistics; //type: Rcmd::Isis::Instances::Instance::SpfRunSummaries::SpfRunSummary::NodeStatistics
        class TriggerLsp; //type: Rcmd::Isis::Instances::Instance::SpfRunSummaries::SpfRunSummary::TriggerLsp
        class Priority; //type: Rcmd::Isis::Instances::Instance::SpfRunSummaries::SpfRunSummary::Priority
        class LspProcessed; //type: Rcmd::Isis::Instances::Instance::SpfRunSummaries::SpfRunSummary::LspProcessed
        class LspRegenerated; //type: Rcmd::Isis::Instances::Instance::SpfRunSummaries::SpfRunSummary::LspRegenerated

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_infra_rcmd_oper::Rcmd::Isis::Instances::Instance::SpfRunSummaries::SpfRunSummary::SpfSummary> spf_summary;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_infra_rcmd_oper::Rcmd::Isis::Instances::Instance::SpfRunSummaries::SpfRunSummary::NodeStatistics> node_statistics;
        ydk::YList trigger_lsp;
        ydk::YList priority;
        ydk::YList lsp_processed;
        ydk::YList lsp_regenerated;
        
}; // Rcmd::Isis::Instances::Instance::SpfRunSummaries::SpfRunSummary


class Rcmd::Isis::Instances::Instance::SpfRunSummaries::SpfRunSummary::SpfSummary : public ydk::Entity
{
    public:
        SpfSummary();
        ~SpfSummary();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf topology; //type: uint32
        ydk::YLeaf isis_level; //type: RcmdIsisLvl
        ydk::YLeaf type; //type: RcmdIsisSpf
        ydk::YLeaf threshold_exceeded; //type: boolean
        ydk::YLeaf state; //type: RcmdSpfState
        ydk::YLeaf is_data_complete; //type: boolean
        ydk::YLeaf trigger_time; //type: string
        ydk::YLeaf duration; //type: string
        ydk::YLeaf total_lsp_changes; //type: uint16
        class PrioritySummary; //type: Rcmd::Isis::Instances::Instance::SpfRunSummaries::SpfRunSummary::SpfSummary::PrioritySummary

        ydk::YList priority_summary;
        
}; // Rcmd::Isis::Instances::Instance::SpfRunSummaries::SpfRunSummary::SpfSummary


class Rcmd::Isis::Instances::Instance::SpfRunSummaries::SpfRunSummary::SpfSummary::PrioritySummary : public ydk::Entity
{
    public:
        PrioritySummary();
        ~PrioritySummary();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf level; //type: RcmdPriorityLevel
        ydk::YLeaf threshold_exceeded; //type: boolean
        class RouteStatistics; //type: Rcmd::Isis::Instances::Instance::SpfRunSummaries::SpfRunSummary::SpfSummary::PrioritySummary::RouteStatistics
        class IpConvergenceTime; //type: Rcmd::Isis::Instances::Instance::SpfRunSummaries::SpfRunSummary::SpfSummary::PrioritySummary::IpConvergenceTime
        class MplsConvergenceTime; //type: Rcmd::Isis::Instances::Instance::SpfRunSummaries::SpfRunSummary::SpfSummary::PrioritySummary::MplsConvergenceTime
        class FrrStatistic; //type: Rcmd::Isis::Instances::Instance::SpfRunSummaries::SpfRunSummary::SpfSummary::PrioritySummary::FrrStatistic

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_infra_rcmd_oper::Rcmd::Isis::Instances::Instance::SpfRunSummaries::SpfRunSummary::SpfSummary::PrioritySummary::RouteStatistics> route_statistics;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_infra_rcmd_oper::Rcmd::Isis::Instances::Instance::SpfRunSummaries::SpfRunSummary::SpfSummary::PrioritySummary::IpConvergenceTime> ip_convergence_time;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_infra_rcmd_oper::Rcmd::Isis::Instances::Instance::SpfRunSummaries::SpfRunSummary::SpfSummary::PrioritySummary::MplsConvergenceTime> mpls_convergence_time;
        ydk::YList frr_statistic;
        
}; // Rcmd::Isis::Instances::Instance::SpfRunSummaries::SpfRunSummary::SpfSummary::PrioritySummary


class Rcmd::Isis::Instances::Instance::SpfRunSummaries::SpfRunSummary::SpfSummary::PrioritySummary::RouteStatistics : public ydk::Entity
{
    public:
        RouteStatistics();
        ~RouteStatistics();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf adds; //type: uint32
        ydk::YLeaf deletes; //type: uint32
        ydk::YLeaf modifies; //type: uint32
        ydk::YLeaf reachables; //type: uint32
        ydk::YLeaf unreachables; //type: uint32
        ydk::YLeaf touches; //type: uint32

}; // Rcmd::Isis::Instances::Instance::SpfRunSummaries::SpfRunSummary::SpfSummary::PrioritySummary::RouteStatistics


class Rcmd::Isis::Instances::Instance::SpfRunSummaries::SpfRunSummary::SpfSummary::PrioritySummary::IpConvergenceTime : public ydk::Entity
{
    public:
        IpConvergenceTime();
        ~IpConvergenceTime();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf minimum_time; //type: string
        ydk::YLeaf maximum_time; //type: string
        ydk::YLeaf slowest_node_name; //type: string
        ydk::YLeaf fastest_node_name; //type: string

}; // Rcmd::Isis::Instances::Instance::SpfRunSummaries::SpfRunSummary::SpfSummary::PrioritySummary::IpConvergenceTime


class Rcmd::Isis::Instances::Instance::SpfRunSummaries::SpfRunSummary::SpfSummary::PrioritySummary::MplsConvergenceTime : public ydk::Entity
{
    public:
        MplsConvergenceTime();
        ~MplsConvergenceTime();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf minimum_time; //type: string
        ydk::YLeaf maximum_time; //type: string
        ydk::YLeaf slowest_node_name; //type: string
        ydk::YLeaf fastest_node_name; //type: string

}; // Rcmd::Isis::Instances::Instance::SpfRunSummaries::SpfRunSummary::SpfSummary::PrioritySummary::MplsConvergenceTime


class Rcmd::Isis::Instances::Instance::SpfRunSummaries::SpfRunSummary::SpfSummary::PrioritySummary::FrrStatistic : public ydk::Entity
{
    public:
        FrrStatistic();
        ~FrrStatistic();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf total_routes; //type: uint32
        ydk::YLeaf fully_protected_routes; //type: uint32
        ydk::YLeaf partially_protected_routes; //type: uint32
        ydk::YLeaf coverage; //type: string

}; // Rcmd::Isis::Instances::Instance::SpfRunSummaries::SpfRunSummary::SpfSummary::PrioritySummary::FrrStatistic


class Rcmd::Isis::Instances::Instance::SpfRunSummaries::SpfRunSummary::NodeStatistics : public ydk::Entity
{
    public:
        NodeStatistics();
        ~NodeStatistics();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf adds; //type: uint32
        ydk::YLeaf deletes; //type: uint32
        ydk::YLeaf modifies; //type: uint32
        ydk::YLeaf reachables; //type: uint32
        ydk::YLeaf unreachables; //type: uint32
        ydk::YLeaf touches; //type: uint32

}; // Rcmd::Isis::Instances::Instance::SpfRunSummaries::SpfRunSummary::NodeStatistics


class Rcmd::Isis::Instances::Instance::SpfRunSummaries::SpfRunSummary::TriggerLsp : public ydk::Entity
{
    public:
        TriggerLsp();
        ~TriggerLsp();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf lsp_id; //type: string
        ydk::YLeaf sequence_number; //type: uint32
        ydk::YLeaf change_type; //type: RcmdLsChange
        ydk::YLeaf reception_time; //type: string

}; // Rcmd::Isis::Instances::Instance::SpfRunSummaries::SpfRunSummary::TriggerLsp


class Rcmd::Isis::Instances::Instance::SpfRunSummaries::SpfRunSummary::Priority : public ydk::Entity
{
    public:
        Priority();
        ~Priority();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class PrioritySummary; //type: Rcmd::Isis::Instances::Instance::SpfRunSummaries::SpfRunSummary::Priority::PrioritySummary
        class ConvergenceTimeline; //type: Rcmd::Isis::Instances::Instance::SpfRunSummaries::SpfRunSummary::Priority::ConvergenceTimeline
        class LeafNetworksAdded; //type: Rcmd::Isis::Instances::Instance::SpfRunSummaries::SpfRunSummary::Priority::LeafNetworksAdded
        class LeafNetworksDeleted; //type: Rcmd::Isis::Instances::Instance::SpfRunSummaries::SpfRunSummary::Priority::LeafNetworksDeleted

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_infra_rcmd_oper::Rcmd::Isis::Instances::Instance::SpfRunSummaries::SpfRunSummary::Priority::PrioritySummary> priority_summary;
        ydk::YList convergence_timeline;
        ydk::YList leaf_networks_added;
        ydk::YList leaf_networks_deleted;
        
}; // Rcmd::Isis::Instances::Instance::SpfRunSummaries::SpfRunSummary::Priority


class Rcmd::Isis::Instances::Instance::SpfRunSummaries::SpfRunSummary::Priority::PrioritySummary : public ydk::Entity
{
    public:
        PrioritySummary();
        ~PrioritySummary();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf level; //type: RcmdPriorityLevel
        ydk::YLeaf threshold_exceeded; //type: boolean
        class RouteStatistics; //type: Rcmd::Isis::Instances::Instance::SpfRunSummaries::SpfRunSummary::Priority::PrioritySummary::RouteStatistics
        class IpConvergenceTime; //type: Rcmd::Isis::Instances::Instance::SpfRunSummaries::SpfRunSummary::Priority::PrioritySummary::IpConvergenceTime
        class MplsConvergenceTime; //type: Rcmd::Isis::Instances::Instance::SpfRunSummaries::SpfRunSummary::Priority::PrioritySummary::MplsConvergenceTime
        class FrrStatistic; //type: Rcmd::Isis::Instances::Instance::SpfRunSummaries::SpfRunSummary::Priority::PrioritySummary::FrrStatistic

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_infra_rcmd_oper::Rcmd::Isis::Instances::Instance::SpfRunSummaries::SpfRunSummary::Priority::PrioritySummary::RouteStatistics> route_statistics;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_infra_rcmd_oper::Rcmd::Isis::Instances::Instance::SpfRunSummaries::SpfRunSummary::Priority::PrioritySummary::IpConvergenceTime> ip_convergence_time;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_infra_rcmd_oper::Rcmd::Isis::Instances::Instance::SpfRunSummaries::SpfRunSummary::Priority::PrioritySummary::MplsConvergenceTime> mpls_convergence_time;
        ydk::YList frr_statistic;
        
}; // Rcmd::Isis::Instances::Instance::SpfRunSummaries::SpfRunSummary::Priority::PrioritySummary


class Rcmd::Isis::Instances::Instance::SpfRunSummaries::SpfRunSummary::Priority::PrioritySummary::RouteStatistics : public ydk::Entity
{
    public:
        RouteStatistics();
        ~RouteStatistics();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf adds; //type: uint32
        ydk::YLeaf deletes; //type: uint32
        ydk::YLeaf modifies; //type: uint32
        ydk::YLeaf reachables; //type: uint32
        ydk::YLeaf unreachables; //type: uint32
        ydk::YLeaf touches; //type: uint32

}; // Rcmd::Isis::Instances::Instance::SpfRunSummaries::SpfRunSummary::Priority::PrioritySummary::RouteStatistics


class Rcmd::Isis::Instances::Instance::SpfRunSummaries::SpfRunSummary::Priority::PrioritySummary::IpConvergenceTime : public ydk::Entity
{
    public:
        IpConvergenceTime();
        ~IpConvergenceTime();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf minimum_time; //type: string
        ydk::YLeaf maximum_time; //type: string
        ydk::YLeaf slowest_node_name; //type: string
        ydk::YLeaf fastest_node_name; //type: string

}; // Rcmd::Isis::Instances::Instance::SpfRunSummaries::SpfRunSummary::Priority::PrioritySummary::IpConvergenceTime


class Rcmd::Isis::Instances::Instance::SpfRunSummaries::SpfRunSummary::Priority::PrioritySummary::MplsConvergenceTime : public ydk::Entity
{
    public:
        MplsConvergenceTime();
        ~MplsConvergenceTime();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf minimum_time; //type: string
        ydk::YLeaf maximum_time; //type: string
        ydk::YLeaf slowest_node_name; //type: string
        ydk::YLeaf fastest_node_name; //type: string

}; // Rcmd::Isis::Instances::Instance::SpfRunSummaries::SpfRunSummary::Priority::PrioritySummary::MplsConvergenceTime


class Rcmd::Isis::Instances::Instance::SpfRunSummaries::SpfRunSummary::Priority::PrioritySummary::FrrStatistic : public ydk::Entity
{
    public:
        FrrStatistic();
        ~FrrStatistic();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf total_routes; //type: uint32
        ydk::YLeaf fully_protected_routes; //type: uint32
        ydk::YLeaf partially_protected_routes; //type: uint32
        ydk::YLeaf coverage; //type: string

}; // Rcmd::Isis::Instances::Instance::SpfRunSummaries::SpfRunSummary::Priority::PrioritySummary::FrrStatistic


class Rcmd::Isis::Instances::Instance::SpfRunSummaries::SpfRunSummary::Priority::ConvergenceTimeline : public ydk::Entity
{
    public:
        ConvergenceTimeline();
        ~ConvergenceTimeline();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class RouteOrigin; //type: Rcmd::Isis::Instances::Instance::SpfRunSummaries::SpfRunSummary::Priority::ConvergenceTimeline::RouteOrigin
        class RiBv4Enter; //type: Rcmd::Isis::Instances::Instance::SpfRunSummaries::SpfRunSummary::Priority::ConvergenceTimeline::RiBv4Enter
        class RiBv4Exit; //type: Rcmd::Isis::Instances::Instance::SpfRunSummaries::SpfRunSummary::Priority::ConvergenceTimeline::RiBv4Exit
        class RiBv4Redistribute; //type: Rcmd::Isis::Instances::Instance::SpfRunSummaries::SpfRunSummary::Priority::ConvergenceTimeline::RiBv4Redistribute
        class LdpEnter; //type: Rcmd::Isis::Instances::Instance::SpfRunSummaries::SpfRunSummary::Priority::ConvergenceTimeline::LdpEnter
        class LdpExit; //type: Rcmd::Isis::Instances::Instance::SpfRunSummaries::SpfRunSummary::Priority::ConvergenceTimeline::LdpExit
        class LsdEnter; //type: Rcmd::Isis::Instances::Instance::SpfRunSummaries::SpfRunSummary::Priority::ConvergenceTimeline::LsdEnter
        class LsdExit; //type: Rcmd::Isis::Instances::Instance::SpfRunSummaries::SpfRunSummary::Priority::ConvergenceTimeline::LsdExit
        class LcIp; //type: Rcmd::Isis::Instances::Instance::SpfRunSummaries::SpfRunSummary::Priority::ConvergenceTimeline::LcIp
        class LcMpls; //type: Rcmd::Isis::Instances::Instance::SpfRunSummaries::SpfRunSummary::Priority::ConvergenceTimeline::LcMpls

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_infra_rcmd_oper::Rcmd::Isis::Instances::Instance::SpfRunSummaries::SpfRunSummary::Priority::ConvergenceTimeline::RouteOrigin> route_origin;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_infra_rcmd_oper::Rcmd::Isis::Instances::Instance::SpfRunSummaries::SpfRunSummary::Priority::ConvergenceTimeline::RiBv4Enter> ri_bv4_enter;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_infra_rcmd_oper::Rcmd::Isis::Instances::Instance::SpfRunSummaries::SpfRunSummary::Priority::ConvergenceTimeline::RiBv4Exit> ri_bv4_exit;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_infra_rcmd_oper::Rcmd::Isis::Instances::Instance::SpfRunSummaries::SpfRunSummary::Priority::ConvergenceTimeline::RiBv4Redistribute> ri_bv4_redistribute;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_infra_rcmd_oper::Rcmd::Isis::Instances::Instance::SpfRunSummaries::SpfRunSummary::Priority::ConvergenceTimeline::LdpEnter> ldp_enter;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_infra_rcmd_oper::Rcmd::Isis::Instances::Instance::SpfRunSummaries::SpfRunSummary::Priority::ConvergenceTimeline::LdpExit> ldp_exit;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_infra_rcmd_oper::Rcmd::Isis::Instances::Instance::SpfRunSummaries::SpfRunSummary::Priority::ConvergenceTimeline::LsdEnter> lsd_enter;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_infra_rcmd_oper::Rcmd::Isis::Instances::Instance::SpfRunSummaries::SpfRunSummary::Priority::ConvergenceTimeline::LsdExit> lsd_exit;
        ydk::YList lc_ip;
        ydk::YList lc_mpls;
        
}; // Rcmd::Isis::Instances::Instance::SpfRunSummaries::SpfRunSummary::Priority::ConvergenceTimeline


class Rcmd::Isis::Instances::Instance::SpfRunSummaries::SpfRunSummary::Priority::ConvergenceTimeline::RouteOrigin : public ydk::Entity
{
    public:
        RouteOrigin();
        ~RouteOrigin();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf start_time; //type: string
        ydk::YLeaf end_time; //type: string
        ydk::YLeaf duration; //type: string

}; // Rcmd::Isis::Instances::Instance::SpfRunSummaries::SpfRunSummary::Priority::ConvergenceTimeline::RouteOrigin


class Rcmd::Isis::Instances::Instance::SpfRunSummaries::SpfRunSummary::Priority::ConvergenceTimeline::RiBv4Enter : public ydk::Entity
{
    public:
        RiBv4Enter();
        ~RiBv4Enter();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf start_time; //type: string
        ydk::YLeaf end_time; //type: string
        ydk::YLeaf duration; //type: string

}; // Rcmd::Isis::Instances::Instance::SpfRunSummaries::SpfRunSummary::Priority::ConvergenceTimeline::RiBv4Enter


class Rcmd::Isis::Instances::Instance::SpfRunSummaries::SpfRunSummary::Priority::ConvergenceTimeline::RiBv4Exit : public ydk::Entity
{
    public:
        RiBv4Exit();
        ~RiBv4Exit();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf start_time; //type: string
        ydk::YLeaf end_time; //type: string
        ydk::YLeaf duration; //type: string

}; // Rcmd::Isis::Instances::Instance::SpfRunSummaries::SpfRunSummary::Priority::ConvergenceTimeline::RiBv4Exit


class Rcmd::Isis::Instances::Instance::SpfRunSummaries::SpfRunSummary::Priority::ConvergenceTimeline::RiBv4Redistribute : public ydk::Entity
{
    public:
        RiBv4Redistribute();
        ~RiBv4Redistribute();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf start_time; //type: string
        ydk::YLeaf end_time; //type: string
        ydk::YLeaf duration; //type: string

}; // Rcmd::Isis::Instances::Instance::SpfRunSummaries::SpfRunSummary::Priority::ConvergenceTimeline::RiBv4Redistribute


class Rcmd::Isis::Instances::Instance::SpfRunSummaries::SpfRunSummary::Priority::ConvergenceTimeline::LdpEnter : public ydk::Entity
{
    public:
        LdpEnter();
        ~LdpEnter();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf start_time; //type: string
        ydk::YLeaf end_time; //type: string
        ydk::YLeaf duration; //type: string

}; // Rcmd::Isis::Instances::Instance::SpfRunSummaries::SpfRunSummary::Priority::ConvergenceTimeline::LdpEnter


class Rcmd::Isis::Instances::Instance::SpfRunSummaries::SpfRunSummary::Priority::ConvergenceTimeline::LdpExit : public ydk::Entity
{
    public:
        LdpExit();
        ~LdpExit();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf start_time; //type: string
        ydk::YLeaf end_time; //type: string
        ydk::YLeaf duration; //type: string

}; // Rcmd::Isis::Instances::Instance::SpfRunSummaries::SpfRunSummary::Priority::ConvergenceTimeline::LdpExit


class Rcmd::Isis::Instances::Instance::SpfRunSummaries::SpfRunSummary::Priority::ConvergenceTimeline::LsdEnter : public ydk::Entity
{
    public:
        LsdEnter();
        ~LsdEnter();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf start_time; //type: string
        ydk::YLeaf end_time; //type: string
        ydk::YLeaf duration; //type: string

}; // Rcmd::Isis::Instances::Instance::SpfRunSummaries::SpfRunSummary::Priority::ConvergenceTimeline::LsdEnter


class Rcmd::Isis::Instances::Instance::SpfRunSummaries::SpfRunSummary::Priority::ConvergenceTimeline::LsdExit : public ydk::Entity
{
    public:
        LsdExit();
        ~LsdExit();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf start_time; //type: string
        ydk::YLeaf end_time; //type: string
        ydk::YLeaf duration; //type: string

}; // Rcmd::Isis::Instances::Instance::SpfRunSummaries::SpfRunSummary::Priority::ConvergenceTimeline::LsdExit


class Rcmd::Isis::Instances::Instance::SpfRunSummaries::SpfRunSummary::Priority::ConvergenceTimeline::LcIp : public ydk::Entity
{
    public:
        LcIp();
        ~LcIp();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf node_name; //type: string
        ydk::YLeaf speed; //type: RcmdLinecardSpeed
        class FibComplete; //type: Rcmd::Isis::Instances::Instance::SpfRunSummaries::SpfRunSummary::Priority::ConvergenceTimeline::LcIp::FibComplete

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_infra_rcmd_oper::Rcmd::Isis::Instances::Instance::SpfRunSummaries::SpfRunSummary::Priority::ConvergenceTimeline::LcIp::FibComplete> fib_complete;
        
}; // Rcmd::Isis::Instances::Instance::SpfRunSummaries::SpfRunSummary::Priority::ConvergenceTimeline::LcIp


class Rcmd::Isis::Instances::Instance::SpfRunSummaries::SpfRunSummary::Priority::ConvergenceTimeline::LcIp::FibComplete : public ydk::Entity
{
    public:
        FibComplete();
        ~FibComplete();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf start_time; //type: string
        ydk::YLeaf end_time; //type: string
        ydk::YLeaf duration; //type: string

}; // Rcmd::Isis::Instances::Instance::SpfRunSummaries::SpfRunSummary::Priority::ConvergenceTimeline::LcIp::FibComplete


class Rcmd::Isis::Instances::Instance::SpfRunSummaries::SpfRunSummary::Priority::ConvergenceTimeline::LcMpls : public ydk::Entity
{
    public:
        LcMpls();
        ~LcMpls();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf node_name; //type: string
        ydk::YLeaf speed; //type: RcmdLinecardSpeed
        class FibComplete; //type: Rcmd::Isis::Instances::Instance::SpfRunSummaries::SpfRunSummary::Priority::ConvergenceTimeline::LcMpls::FibComplete

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_infra_rcmd_oper::Rcmd::Isis::Instances::Instance::SpfRunSummaries::SpfRunSummary::Priority::ConvergenceTimeline::LcMpls::FibComplete> fib_complete;
        
}; // Rcmd::Isis::Instances::Instance::SpfRunSummaries::SpfRunSummary::Priority::ConvergenceTimeline::LcMpls


class Rcmd::Isis::Instances::Instance::SpfRunSummaries::SpfRunSummary::Priority::ConvergenceTimeline::LcMpls::FibComplete : public ydk::Entity
{
    public:
        FibComplete();
        ~FibComplete();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf start_time; //type: string
        ydk::YLeaf end_time; //type: string
        ydk::YLeaf duration; //type: string

}; // Rcmd::Isis::Instances::Instance::SpfRunSummaries::SpfRunSummary::Priority::ConvergenceTimeline::LcMpls::FibComplete


class Rcmd::Isis::Instances::Instance::SpfRunSummaries::SpfRunSummary::Priority::LeafNetworksAdded : public ydk::Entity
{
    public:
        LeafNetworksAdded();
        ~LeafNetworksAdded();

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
        ydk::YLeaf net_mask; //type: uint8

}; // Rcmd::Isis::Instances::Instance::SpfRunSummaries::SpfRunSummary::Priority::LeafNetworksAdded


class Rcmd::Isis::Instances::Instance::SpfRunSummaries::SpfRunSummary::Priority::LeafNetworksDeleted : public ydk::Entity
{
    public:
        LeafNetworksDeleted();
        ~LeafNetworksDeleted();

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
        ydk::YLeaf net_mask; //type: uint8

}; // Rcmd::Isis::Instances::Instance::SpfRunSummaries::SpfRunSummary::Priority::LeafNetworksDeleted


class Rcmd::Isis::Instances::Instance::SpfRunSummaries::SpfRunSummary::LspProcessed : public ydk::Entity
{
    public:
        LspProcessed();
        ~LspProcessed();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf lsp_id; //type: string
        ydk::YLeaf sequence_number; //type: uint32
        ydk::YLeaf change_type; //type: RcmdLsChange
        ydk::YLeaf reception_time; //type: string

}; // Rcmd::Isis::Instances::Instance::SpfRunSummaries::SpfRunSummary::LspProcessed


class Rcmd::Isis::Instances::Instance::SpfRunSummaries::SpfRunSummary::LspRegenerated : public ydk::Entity
{
    public:
        LspRegenerated();
        ~LspRegenerated();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf serial_number_xr; //type: uint32
        ydk::YLeaf lsp_id; //type: string
        ydk::YLeaf sequence_number; //type: uint32
        ydk::YLeaf reception_time; //type: string
        ydk::YLeaf isis_level; //type: RcmdIsisLvl
        ydk::YLeaf spf_run_number; //type: uint32
        ydk::YLeaf reason; //type: string

}; // Rcmd::Isis::Instances::Instance::SpfRunSummaries::SpfRunSummary::LspRegenerated


class Rcmd::Isis::Instances::Instance::IpfrrEventOfflines : public ydk::Entity
{
    public:
        IpfrrEventOfflines();
        ~IpfrrEventOfflines();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class IpfrrEventOffline; //type: Rcmd::Isis::Instances::Instance::IpfrrEventOfflines::IpfrrEventOffline

        ydk::YList ipfrr_event_offline;
        
}; // Rcmd::Isis::Instances::Instance::IpfrrEventOfflines


class Rcmd::Isis::Instances::Instance::IpfrrEventOfflines::IpfrrEventOffline : public ydk::Entity
{
    public:
        IpfrrEventOffline();
        ~IpfrrEventOffline();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf event_id; //type: uint32
        ydk::YLeaf event_id_xr; //type: uint32
        ydk::YLeaf trigger_time; //type: string
        ydk::YLeaf trigger_spf_run; //type: uint32
        ydk::YLeaf wait_time; //type: uint32
        ydk::YLeaf start_time_offset; //type: string
        ydk::YLeaf duration; //type: string
        ydk::YLeaf completed_spf_run; //type: uint32
        ydk::YLeaf total_routes; //type: uint32
        ydk::YLeaf fully_protected_routes; //type: uint32
        ydk::YLeaf partially_protected_routes; //type: uint32
        ydk::YLeaf coverage; //type: string
        class IpfrrStatistic; //type: Rcmd::Isis::Instances::Instance::IpfrrEventOfflines::IpfrrEventOffline::IpfrrStatistic
        class RemoteNode; //type: Rcmd::Isis::Instances::Instance::IpfrrEventOfflines::IpfrrEventOffline::RemoteNode

        ydk::YList ipfrr_statistic;
        ydk::YList remote_node;
        
}; // Rcmd::Isis::Instances::Instance::IpfrrEventOfflines::IpfrrEventOffline


class Rcmd::Isis::Instances::Instance::IpfrrEventOfflines::IpfrrEventOffline::IpfrrStatistic : public ydk::Entity
{
    public:
        IpfrrStatistic();
        ~IpfrrStatistic();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf priority; //type: RcmdPriorityLevel
        ydk::YLeaf total_routes; //type: uint32
        ydk::YLeaf fully_protected_routes; //type: uint32
        ydk::YLeaf partially_protected_routes; //type: uint32
        ydk::YLeaf coverage; //type: string
        ydk::YLeaf local_lfa_coverage; //type: string
        ydk::YLeaf remote_lfa_coverage; //type: string
        ydk::YLeaf below_threshold; //type: boolean

}; // Rcmd::Isis::Instances::Instance::IpfrrEventOfflines::IpfrrEventOffline::IpfrrStatistic


class Rcmd::Isis::Instances::Instance::IpfrrEventOfflines::IpfrrEventOffline::RemoteNode : public ydk::Entity
{
    public:
        RemoteNode();
        ~RemoteNode();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf remote_node_id; //type: string
        ydk::YLeaf interface_name; //type: string
        ydk::YLeaf neighbour_address; //type: string
        ydk::YLeaf path_count; //type: uint32
        ydk::YLeaf in_use_time; //type: string
        class PrimaryPath; //type: Rcmd::Isis::Instances::Instance::IpfrrEventOfflines::IpfrrEventOffline::RemoteNode::PrimaryPath

        ydk::YList primary_path;
        
}; // Rcmd::Isis::Instances::Instance::IpfrrEventOfflines::IpfrrEventOffline::RemoteNode


class Rcmd::Isis::Instances::Instance::IpfrrEventOfflines::IpfrrEventOffline::RemoteNode::PrimaryPath : public ydk::Entity
{
    public:
        PrimaryPath();
        ~PrimaryPath();

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
        ydk::YLeaf neighbour_address; //type: string

}; // Rcmd::Isis::Instances::Instance::IpfrrEventOfflines::IpfrrEventOffline::RemoteNode::PrimaryPath


class Rcmd::Isis::Instances::Instance::SpfRunOfflines : public ydk::Entity
{
    public:
        SpfRunOfflines();
        ~SpfRunOfflines();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class SpfRunOffline; //type: Rcmd::Isis::Instances::Instance::SpfRunOfflines::SpfRunOffline

        ydk::YList spf_run_offline;
        
}; // Rcmd::Isis::Instances::Instance::SpfRunOfflines


class Rcmd::Isis::Instances::Instance::SpfRunOfflines::SpfRunOffline : public ydk::Entity
{
    public:
        SpfRunOffline();
        ~SpfRunOffline();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf spf_run_number; //type: uint32
        ydk::YLeaf start_time; //type: string
        ydk::YLeaf wait_time; //type: uint32
        ydk::YLeaf reason; //type: string
        class SpfSummary; //type: Rcmd::Isis::Instances::Instance::SpfRunOfflines::SpfRunOffline::SpfSummary
        class NodeStatistics; //type: Rcmd::Isis::Instances::Instance::SpfRunOfflines::SpfRunOffline::NodeStatistics
        class TriggerLsp; //type: Rcmd::Isis::Instances::Instance::SpfRunOfflines::SpfRunOffline::TriggerLsp
        class Priority; //type: Rcmd::Isis::Instances::Instance::SpfRunOfflines::SpfRunOffline::Priority
        class LspProcessed; //type: Rcmd::Isis::Instances::Instance::SpfRunOfflines::SpfRunOffline::LspProcessed
        class LspRegenerated; //type: Rcmd::Isis::Instances::Instance::SpfRunOfflines::SpfRunOffline::LspRegenerated

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_infra_rcmd_oper::Rcmd::Isis::Instances::Instance::SpfRunOfflines::SpfRunOffline::SpfSummary> spf_summary;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_infra_rcmd_oper::Rcmd::Isis::Instances::Instance::SpfRunOfflines::SpfRunOffline::NodeStatistics> node_statistics;
        ydk::YList trigger_lsp;
        ydk::YList priority;
        ydk::YList lsp_processed;
        ydk::YList lsp_regenerated;
        
}; // Rcmd::Isis::Instances::Instance::SpfRunOfflines::SpfRunOffline


class Rcmd::Isis::Instances::Instance::SpfRunOfflines::SpfRunOffline::SpfSummary : public ydk::Entity
{
    public:
        SpfSummary();
        ~SpfSummary();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf topology; //type: uint32
        ydk::YLeaf isis_level; //type: RcmdIsisLvl
        ydk::YLeaf type; //type: RcmdIsisSpf
        ydk::YLeaf threshold_exceeded; //type: boolean
        ydk::YLeaf state; //type: RcmdSpfState
        ydk::YLeaf is_data_complete; //type: boolean
        ydk::YLeaf trigger_time; //type: string
        ydk::YLeaf duration; //type: string
        ydk::YLeaf total_lsp_changes; //type: uint16
        class PrioritySummary; //type: Rcmd::Isis::Instances::Instance::SpfRunOfflines::SpfRunOffline::SpfSummary::PrioritySummary

        ydk::YList priority_summary;
        
}; // Rcmd::Isis::Instances::Instance::SpfRunOfflines::SpfRunOffline::SpfSummary


class Rcmd::Isis::Instances::Instance::SpfRunOfflines::SpfRunOffline::SpfSummary::PrioritySummary : public ydk::Entity
{
    public:
        PrioritySummary();
        ~PrioritySummary();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf level; //type: RcmdPriorityLevel
        ydk::YLeaf threshold_exceeded; //type: boolean
        class RouteStatistics; //type: Rcmd::Isis::Instances::Instance::SpfRunOfflines::SpfRunOffline::SpfSummary::PrioritySummary::RouteStatistics
        class IpConvergenceTime; //type: Rcmd::Isis::Instances::Instance::SpfRunOfflines::SpfRunOffline::SpfSummary::PrioritySummary::IpConvergenceTime
        class MplsConvergenceTime; //type: Rcmd::Isis::Instances::Instance::SpfRunOfflines::SpfRunOffline::SpfSummary::PrioritySummary::MplsConvergenceTime
        class FrrStatistic; //type: Rcmd::Isis::Instances::Instance::SpfRunOfflines::SpfRunOffline::SpfSummary::PrioritySummary::FrrStatistic

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_infra_rcmd_oper::Rcmd::Isis::Instances::Instance::SpfRunOfflines::SpfRunOffline::SpfSummary::PrioritySummary::RouteStatistics> route_statistics;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_infra_rcmd_oper::Rcmd::Isis::Instances::Instance::SpfRunOfflines::SpfRunOffline::SpfSummary::PrioritySummary::IpConvergenceTime> ip_convergence_time;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_infra_rcmd_oper::Rcmd::Isis::Instances::Instance::SpfRunOfflines::SpfRunOffline::SpfSummary::PrioritySummary::MplsConvergenceTime> mpls_convergence_time;
        ydk::YList frr_statistic;
        
}; // Rcmd::Isis::Instances::Instance::SpfRunOfflines::SpfRunOffline::SpfSummary::PrioritySummary


class Rcmd::Isis::Instances::Instance::SpfRunOfflines::SpfRunOffline::SpfSummary::PrioritySummary::RouteStatistics : public ydk::Entity
{
    public:
        RouteStatistics();
        ~RouteStatistics();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf adds; //type: uint32
        ydk::YLeaf deletes; //type: uint32
        ydk::YLeaf modifies; //type: uint32
        ydk::YLeaf reachables; //type: uint32
        ydk::YLeaf unreachables; //type: uint32
        ydk::YLeaf touches; //type: uint32

}; // Rcmd::Isis::Instances::Instance::SpfRunOfflines::SpfRunOffline::SpfSummary::PrioritySummary::RouteStatistics


class Rcmd::Isis::Instances::Instance::SpfRunOfflines::SpfRunOffline::SpfSummary::PrioritySummary::IpConvergenceTime : public ydk::Entity
{
    public:
        IpConvergenceTime();
        ~IpConvergenceTime();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf minimum_time; //type: string
        ydk::YLeaf maximum_time; //type: string
        ydk::YLeaf slowest_node_name; //type: string
        ydk::YLeaf fastest_node_name; //type: string

}; // Rcmd::Isis::Instances::Instance::SpfRunOfflines::SpfRunOffline::SpfSummary::PrioritySummary::IpConvergenceTime


class Rcmd::Isis::Instances::Instance::SpfRunOfflines::SpfRunOffline::SpfSummary::PrioritySummary::MplsConvergenceTime : public ydk::Entity
{
    public:
        MplsConvergenceTime();
        ~MplsConvergenceTime();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf minimum_time; //type: string
        ydk::YLeaf maximum_time; //type: string
        ydk::YLeaf slowest_node_name; //type: string
        ydk::YLeaf fastest_node_name; //type: string

}; // Rcmd::Isis::Instances::Instance::SpfRunOfflines::SpfRunOffline::SpfSummary::PrioritySummary::MplsConvergenceTime


class Rcmd::Isis::Instances::Instance::SpfRunOfflines::SpfRunOffline::SpfSummary::PrioritySummary::FrrStatistic : public ydk::Entity
{
    public:
        FrrStatistic();
        ~FrrStatistic();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf total_routes; //type: uint32
        ydk::YLeaf fully_protected_routes; //type: uint32
        ydk::YLeaf partially_protected_routes; //type: uint32
        ydk::YLeaf coverage; //type: string

}; // Rcmd::Isis::Instances::Instance::SpfRunOfflines::SpfRunOffline::SpfSummary::PrioritySummary::FrrStatistic


class Rcmd::Isis::Instances::Instance::SpfRunOfflines::SpfRunOffline::NodeStatistics : public ydk::Entity
{
    public:
        NodeStatistics();
        ~NodeStatistics();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf adds; //type: uint32
        ydk::YLeaf deletes; //type: uint32
        ydk::YLeaf modifies; //type: uint32
        ydk::YLeaf reachables; //type: uint32
        ydk::YLeaf unreachables; //type: uint32
        ydk::YLeaf touches; //type: uint32

}; // Rcmd::Isis::Instances::Instance::SpfRunOfflines::SpfRunOffline::NodeStatistics


class Rcmd::Isis::Instances::Instance::SpfRunOfflines::SpfRunOffline::TriggerLsp : public ydk::Entity
{
    public:
        TriggerLsp();
        ~TriggerLsp();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf lsp_id; //type: string
        ydk::YLeaf sequence_number; //type: uint32
        ydk::YLeaf change_type; //type: RcmdLsChange
        ydk::YLeaf reception_time; //type: string

}; // Rcmd::Isis::Instances::Instance::SpfRunOfflines::SpfRunOffline::TriggerLsp


class Rcmd::Isis::Instances::Instance::SpfRunOfflines::SpfRunOffline::Priority : public ydk::Entity
{
    public:
        Priority();
        ~Priority();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class PrioritySummary; //type: Rcmd::Isis::Instances::Instance::SpfRunOfflines::SpfRunOffline::Priority::PrioritySummary
        class ConvergenceTimeline; //type: Rcmd::Isis::Instances::Instance::SpfRunOfflines::SpfRunOffline::Priority::ConvergenceTimeline
        class LeafNetworksAdded; //type: Rcmd::Isis::Instances::Instance::SpfRunOfflines::SpfRunOffline::Priority::LeafNetworksAdded
        class LeafNetworksDeleted; //type: Rcmd::Isis::Instances::Instance::SpfRunOfflines::SpfRunOffline::Priority::LeafNetworksDeleted

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_infra_rcmd_oper::Rcmd::Isis::Instances::Instance::SpfRunOfflines::SpfRunOffline::Priority::PrioritySummary> priority_summary;
        ydk::YList convergence_timeline;
        ydk::YList leaf_networks_added;
        ydk::YList leaf_networks_deleted;
        
}; // Rcmd::Isis::Instances::Instance::SpfRunOfflines::SpfRunOffline::Priority


class Rcmd::Isis::Instances::Instance::SpfRunOfflines::SpfRunOffline::Priority::PrioritySummary : public ydk::Entity
{
    public:
        PrioritySummary();
        ~PrioritySummary();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf level; //type: RcmdPriorityLevel
        ydk::YLeaf threshold_exceeded; //type: boolean
        class RouteStatistics; //type: Rcmd::Isis::Instances::Instance::SpfRunOfflines::SpfRunOffline::Priority::PrioritySummary::RouteStatistics
        class IpConvergenceTime; //type: Rcmd::Isis::Instances::Instance::SpfRunOfflines::SpfRunOffline::Priority::PrioritySummary::IpConvergenceTime
        class MplsConvergenceTime; //type: Rcmd::Isis::Instances::Instance::SpfRunOfflines::SpfRunOffline::Priority::PrioritySummary::MplsConvergenceTime
        class FrrStatistic; //type: Rcmd::Isis::Instances::Instance::SpfRunOfflines::SpfRunOffline::Priority::PrioritySummary::FrrStatistic

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_infra_rcmd_oper::Rcmd::Isis::Instances::Instance::SpfRunOfflines::SpfRunOffline::Priority::PrioritySummary::RouteStatistics> route_statistics;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_infra_rcmd_oper::Rcmd::Isis::Instances::Instance::SpfRunOfflines::SpfRunOffline::Priority::PrioritySummary::IpConvergenceTime> ip_convergence_time;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_infra_rcmd_oper::Rcmd::Isis::Instances::Instance::SpfRunOfflines::SpfRunOffline::Priority::PrioritySummary::MplsConvergenceTime> mpls_convergence_time;
        ydk::YList frr_statistic;
        
}; // Rcmd::Isis::Instances::Instance::SpfRunOfflines::SpfRunOffline::Priority::PrioritySummary


class Rcmd::Isis::Instances::Instance::SpfRunOfflines::SpfRunOffline::Priority::PrioritySummary::RouteStatistics : public ydk::Entity
{
    public:
        RouteStatistics();
        ~RouteStatistics();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf adds; //type: uint32
        ydk::YLeaf deletes; //type: uint32
        ydk::YLeaf modifies; //type: uint32
        ydk::YLeaf reachables; //type: uint32
        ydk::YLeaf unreachables; //type: uint32
        ydk::YLeaf touches; //type: uint32

}; // Rcmd::Isis::Instances::Instance::SpfRunOfflines::SpfRunOffline::Priority::PrioritySummary::RouteStatistics


class Rcmd::Isis::Instances::Instance::SpfRunOfflines::SpfRunOffline::Priority::PrioritySummary::IpConvergenceTime : public ydk::Entity
{
    public:
        IpConvergenceTime();
        ~IpConvergenceTime();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf minimum_time; //type: string
        ydk::YLeaf maximum_time; //type: string
        ydk::YLeaf slowest_node_name; //type: string
        ydk::YLeaf fastest_node_name; //type: string

}; // Rcmd::Isis::Instances::Instance::SpfRunOfflines::SpfRunOffline::Priority::PrioritySummary::IpConvergenceTime


class Rcmd::Isis::Instances::Instance::SpfRunOfflines::SpfRunOffline::Priority::PrioritySummary::MplsConvergenceTime : public ydk::Entity
{
    public:
        MplsConvergenceTime();
        ~MplsConvergenceTime();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf minimum_time; //type: string
        ydk::YLeaf maximum_time; //type: string
        ydk::YLeaf slowest_node_name; //type: string
        ydk::YLeaf fastest_node_name; //type: string

}; // Rcmd::Isis::Instances::Instance::SpfRunOfflines::SpfRunOffline::Priority::PrioritySummary::MplsConvergenceTime


class Rcmd::Isis::Instances::Instance::SpfRunOfflines::SpfRunOffline::Priority::PrioritySummary::FrrStatistic : public ydk::Entity
{
    public:
        FrrStatistic();
        ~FrrStatistic();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf total_routes; //type: uint32
        ydk::YLeaf fully_protected_routes; //type: uint32
        ydk::YLeaf partially_protected_routes; //type: uint32
        ydk::YLeaf coverage; //type: string

}; // Rcmd::Isis::Instances::Instance::SpfRunOfflines::SpfRunOffline::Priority::PrioritySummary::FrrStatistic


class Rcmd::Isis::Instances::Instance::SpfRunOfflines::SpfRunOffline::Priority::ConvergenceTimeline : public ydk::Entity
{
    public:
        ConvergenceTimeline();
        ~ConvergenceTimeline();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class RouteOrigin; //type: Rcmd::Isis::Instances::Instance::SpfRunOfflines::SpfRunOffline::Priority::ConvergenceTimeline::RouteOrigin
        class RiBv4Enter; //type: Rcmd::Isis::Instances::Instance::SpfRunOfflines::SpfRunOffline::Priority::ConvergenceTimeline::RiBv4Enter
        class RiBv4Exit; //type: Rcmd::Isis::Instances::Instance::SpfRunOfflines::SpfRunOffline::Priority::ConvergenceTimeline::RiBv4Exit
        class RiBv4Redistribute; //type: Rcmd::Isis::Instances::Instance::SpfRunOfflines::SpfRunOffline::Priority::ConvergenceTimeline::RiBv4Redistribute
        class LdpEnter; //type: Rcmd::Isis::Instances::Instance::SpfRunOfflines::SpfRunOffline::Priority::ConvergenceTimeline::LdpEnter
        class LdpExit; //type: Rcmd::Isis::Instances::Instance::SpfRunOfflines::SpfRunOffline::Priority::ConvergenceTimeline::LdpExit
        class LsdEnter; //type: Rcmd::Isis::Instances::Instance::SpfRunOfflines::SpfRunOffline::Priority::ConvergenceTimeline::LsdEnter
        class LsdExit; //type: Rcmd::Isis::Instances::Instance::SpfRunOfflines::SpfRunOffline::Priority::ConvergenceTimeline::LsdExit
        class LcIp; //type: Rcmd::Isis::Instances::Instance::SpfRunOfflines::SpfRunOffline::Priority::ConvergenceTimeline::LcIp
        class LcMpls; //type: Rcmd::Isis::Instances::Instance::SpfRunOfflines::SpfRunOffline::Priority::ConvergenceTimeline::LcMpls

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_infra_rcmd_oper::Rcmd::Isis::Instances::Instance::SpfRunOfflines::SpfRunOffline::Priority::ConvergenceTimeline::RouteOrigin> route_origin;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_infra_rcmd_oper::Rcmd::Isis::Instances::Instance::SpfRunOfflines::SpfRunOffline::Priority::ConvergenceTimeline::RiBv4Enter> ri_bv4_enter;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_infra_rcmd_oper::Rcmd::Isis::Instances::Instance::SpfRunOfflines::SpfRunOffline::Priority::ConvergenceTimeline::RiBv4Exit> ri_bv4_exit;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_infra_rcmd_oper::Rcmd::Isis::Instances::Instance::SpfRunOfflines::SpfRunOffline::Priority::ConvergenceTimeline::RiBv4Redistribute> ri_bv4_redistribute;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_infra_rcmd_oper::Rcmd::Isis::Instances::Instance::SpfRunOfflines::SpfRunOffline::Priority::ConvergenceTimeline::LdpEnter> ldp_enter;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_infra_rcmd_oper::Rcmd::Isis::Instances::Instance::SpfRunOfflines::SpfRunOffline::Priority::ConvergenceTimeline::LdpExit> ldp_exit;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_infra_rcmd_oper::Rcmd::Isis::Instances::Instance::SpfRunOfflines::SpfRunOffline::Priority::ConvergenceTimeline::LsdEnter> lsd_enter;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_infra_rcmd_oper::Rcmd::Isis::Instances::Instance::SpfRunOfflines::SpfRunOffline::Priority::ConvergenceTimeline::LsdExit> lsd_exit;
        ydk::YList lc_ip;
        ydk::YList lc_mpls;
        
}; // Rcmd::Isis::Instances::Instance::SpfRunOfflines::SpfRunOffline::Priority::ConvergenceTimeline


class Rcmd::Isis::Instances::Instance::SpfRunOfflines::SpfRunOffline::Priority::ConvergenceTimeline::RouteOrigin : public ydk::Entity
{
    public:
        RouteOrigin();
        ~RouteOrigin();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf start_time; //type: string
        ydk::YLeaf end_time; //type: string
        ydk::YLeaf duration; //type: string

}; // Rcmd::Isis::Instances::Instance::SpfRunOfflines::SpfRunOffline::Priority::ConvergenceTimeline::RouteOrigin


class Rcmd::Isis::Instances::Instance::SpfRunOfflines::SpfRunOffline::Priority::ConvergenceTimeline::RiBv4Enter : public ydk::Entity
{
    public:
        RiBv4Enter();
        ~RiBv4Enter();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf start_time; //type: string
        ydk::YLeaf end_time; //type: string
        ydk::YLeaf duration; //type: string

}; // Rcmd::Isis::Instances::Instance::SpfRunOfflines::SpfRunOffline::Priority::ConvergenceTimeline::RiBv4Enter


class Rcmd::Isis::Instances::Instance::SpfRunOfflines::SpfRunOffline::Priority::ConvergenceTimeline::RiBv4Exit : public ydk::Entity
{
    public:
        RiBv4Exit();
        ~RiBv4Exit();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf start_time; //type: string
        ydk::YLeaf end_time; //type: string
        ydk::YLeaf duration; //type: string

}; // Rcmd::Isis::Instances::Instance::SpfRunOfflines::SpfRunOffline::Priority::ConvergenceTimeline::RiBv4Exit


class Rcmd::Isis::Instances::Instance::SpfRunOfflines::SpfRunOffline::Priority::ConvergenceTimeline::RiBv4Redistribute : public ydk::Entity
{
    public:
        RiBv4Redistribute();
        ~RiBv4Redistribute();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf start_time; //type: string
        ydk::YLeaf end_time; //type: string
        ydk::YLeaf duration; //type: string

}; // Rcmd::Isis::Instances::Instance::SpfRunOfflines::SpfRunOffline::Priority::ConvergenceTimeline::RiBv4Redistribute


class Rcmd::Isis::Instances::Instance::SpfRunOfflines::SpfRunOffline::Priority::ConvergenceTimeline::LdpEnter : public ydk::Entity
{
    public:
        LdpEnter();
        ~LdpEnter();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf start_time; //type: string
        ydk::YLeaf end_time; //type: string
        ydk::YLeaf duration; //type: string

}; // Rcmd::Isis::Instances::Instance::SpfRunOfflines::SpfRunOffline::Priority::ConvergenceTimeline::LdpEnter


class Rcmd::Isis::Instances::Instance::SpfRunOfflines::SpfRunOffline::Priority::ConvergenceTimeline::LdpExit : public ydk::Entity
{
    public:
        LdpExit();
        ~LdpExit();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf start_time; //type: string
        ydk::YLeaf end_time; //type: string
        ydk::YLeaf duration; //type: string

}; // Rcmd::Isis::Instances::Instance::SpfRunOfflines::SpfRunOffline::Priority::ConvergenceTimeline::LdpExit


class Rcmd::Isis::Instances::Instance::SpfRunOfflines::SpfRunOffline::Priority::ConvergenceTimeline::LsdEnter : public ydk::Entity
{
    public:
        LsdEnter();
        ~LsdEnter();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf start_time; //type: string
        ydk::YLeaf end_time; //type: string
        ydk::YLeaf duration; //type: string

}; // Rcmd::Isis::Instances::Instance::SpfRunOfflines::SpfRunOffline::Priority::ConvergenceTimeline::LsdEnter


class Rcmd::Isis::Instances::Instance::SpfRunOfflines::SpfRunOffline::Priority::ConvergenceTimeline::LsdExit : public ydk::Entity
{
    public:
        LsdExit();
        ~LsdExit();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf start_time; //type: string
        ydk::YLeaf end_time; //type: string
        ydk::YLeaf duration; //type: string

}; // Rcmd::Isis::Instances::Instance::SpfRunOfflines::SpfRunOffline::Priority::ConvergenceTimeline::LsdExit


class Rcmd::Isis::Instances::Instance::SpfRunOfflines::SpfRunOffline::Priority::ConvergenceTimeline::LcIp : public ydk::Entity
{
    public:
        LcIp();
        ~LcIp();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf node_name; //type: string
        ydk::YLeaf speed; //type: RcmdLinecardSpeed
        class FibComplete; //type: Rcmd::Isis::Instances::Instance::SpfRunOfflines::SpfRunOffline::Priority::ConvergenceTimeline::LcIp::FibComplete

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_infra_rcmd_oper::Rcmd::Isis::Instances::Instance::SpfRunOfflines::SpfRunOffline::Priority::ConvergenceTimeline::LcIp::FibComplete> fib_complete;
        
}; // Rcmd::Isis::Instances::Instance::SpfRunOfflines::SpfRunOffline::Priority::ConvergenceTimeline::LcIp


class Rcmd::Isis::Instances::Instance::SpfRunOfflines::SpfRunOffline::Priority::ConvergenceTimeline::LcIp::FibComplete : public ydk::Entity
{
    public:
        FibComplete();
        ~FibComplete();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf start_time; //type: string
        ydk::YLeaf end_time; //type: string
        ydk::YLeaf duration; //type: string

}; // Rcmd::Isis::Instances::Instance::SpfRunOfflines::SpfRunOffline::Priority::ConvergenceTimeline::LcIp::FibComplete


class Rcmd::Isis::Instances::Instance::SpfRunOfflines::SpfRunOffline::Priority::ConvergenceTimeline::LcMpls : public ydk::Entity
{
    public:
        LcMpls();
        ~LcMpls();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf node_name; //type: string
        ydk::YLeaf speed; //type: RcmdLinecardSpeed
        class FibComplete; //type: Rcmd::Isis::Instances::Instance::SpfRunOfflines::SpfRunOffline::Priority::ConvergenceTimeline::LcMpls::FibComplete

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_infra_rcmd_oper::Rcmd::Isis::Instances::Instance::SpfRunOfflines::SpfRunOffline::Priority::ConvergenceTimeline::LcMpls::FibComplete> fib_complete;
        
}; // Rcmd::Isis::Instances::Instance::SpfRunOfflines::SpfRunOffline::Priority::ConvergenceTimeline::LcMpls


class Rcmd::Isis::Instances::Instance::SpfRunOfflines::SpfRunOffline::Priority::ConvergenceTimeline::LcMpls::FibComplete : public ydk::Entity
{
    public:
        FibComplete();
        ~FibComplete();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf start_time; //type: string
        ydk::YLeaf end_time; //type: string
        ydk::YLeaf duration; //type: string

}; // Rcmd::Isis::Instances::Instance::SpfRunOfflines::SpfRunOffline::Priority::ConvergenceTimeline::LcMpls::FibComplete


class Rcmd::Isis::Instances::Instance::SpfRunOfflines::SpfRunOffline::Priority::LeafNetworksAdded : public ydk::Entity
{
    public:
        LeafNetworksAdded();
        ~LeafNetworksAdded();

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
        ydk::YLeaf net_mask; //type: uint8

}; // Rcmd::Isis::Instances::Instance::SpfRunOfflines::SpfRunOffline::Priority::LeafNetworksAdded


class Rcmd::Isis::Instances::Instance::SpfRunOfflines::SpfRunOffline::Priority::LeafNetworksDeleted : public ydk::Entity
{
    public:
        LeafNetworksDeleted();
        ~LeafNetworksDeleted();

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
        ydk::YLeaf net_mask; //type: uint8

}; // Rcmd::Isis::Instances::Instance::SpfRunOfflines::SpfRunOffline::Priority::LeafNetworksDeleted


class Rcmd::Isis::Instances::Instance::SpfRunOfflines::SpfRunOffline::LspProcessed : public ydk::Entity
{
    public:
        LspProcessed();
        ~LspProcessed();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf lsp_id; //type: string
        ydk::YLeaf sequence_number; //type: uint32
        ydk::YLeaf change_type; //type: RcmdLsChange
        ydk::YLeaf reception_time; //type: string

}; // Rcmd::Isis::Instances::Instance::SpfRunOfflines::SpfRunOffline::LspProcessed


class Rcmd::Isis::Instances::Instance::SpfRunOfflines::SpfRunOffline::LspRegenerated : public ydk::Entity
{
    public:
        LspRegenerated();
        ~LspRegenerated();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf serial_number_xr; //type: uint32
        ydk::YLeaf lsp_id; //type: string
        ydk::YLeaf sequence_number; //type: uint32
        ydk::YLeaf reception_time; //type: string
        ydk::YLeaf isis_level; //type: RcmdIsisLvl
        ydk::YLeaf spf_run_number; //type: uint32
        ydk::YLeaf reason; //type: string

}; // Rcmd::Isis::Instances::Instance::SpfRunOfflines::SpfRunOffline::LspRegenerated


class Rcmd::Isis::Instances::Instance::PrefixEventSummaries : public ydk::Entity
{
    public:
        PrefixEventSummaries();
        ~PrefixEventSummaries();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class PrefixEventSummary; //type: Rcmd::Isis::Instances::Instance::PrefixEventSummaries::PrefixEventSummary

        ydk::YList prefix_event_summary;
        
}; // Rcmd::Isis::Instances::Instance::PrefixEventSummaries


class Rcmd::Isis::Instances::Instance::PrefixEventSummaries::PrefixEventSummary : public ydk::Entity
{
    public:
        PrefixEventSummary();
        ~PrefixEventSummary();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf event_id; //type: uint32
        ydk::YLeaf prefix; //type: string
        ydk::YLeaf prefix_lenth; //type: uint32
        ydk::YLeaf spf_run_no; //type: uint32
        ydk::YLeaf ipfrr_event_id; //type: uint32
        ydk::YLeaf threshold_exceeded; //type: boolean
        ydk::YLeaf priority; //type: RcmdPriorityLevel
        ydk::YLeaf change_type; //type: RcmdChange
        ydk::YLeaf route_type; //type: RcmdShowRoute
        ydk::YLeaf route_path_change_type; //type: RcmdShowRoutePathChange
        ydk::YLeaf cost; //type: uint32
        ydk::YLeaf trigger_time; //type: string
        class IpConvergenceTime; //type: Rcmd::Isis::Instances::Instance::PrefixEventSummaries::PrefixEventSummary::IpConvergenceTime
        class MplsConvergenceTime; //type: Rcmd::Isis::Instances::Instance::PrefixEventSummaries::PrefixEventSummary::MplsConvergenceTime
        class Path; //type: Rcmd::Isis::Instances::Instance::PrefixEventSummaries::PrefixEventSummary::Path
        class TriggerLsa; //type: Rcmd::Isis::Instances::Instance::PrefixEventSummaries::PrefixEventSummary::TriggerLsa
        class TimeLine; //type: Rcmd::Isis::Instances::Instance::PrefixEventSummaries::PrefixEventSummary::TimeLine
        class LsaProcessed; //type: Rcmd::Isis::Instances::Instance::PrefixEventSummaries::PrefixEventSummary::LsaProcessed

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_infra_rcmd_oper::Rcmd::Isis::Instances::Instance::PrefixEventSummaries::PrefixEventSummary::IpConvergenceTime> ip_convergence_time;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_infra_rcmd_oper::Rcmd::Isis::Instances::Instance::PrefixEventSummaries::PrefixEventSummary::MplsConvergenceTime> mpls_convergence_time;
        ydk::YList path;
        ydk::YList trigger_lsa;
        ydk::YList time_line;
        ydk::YList lsa_processed;
        
}; // Rcmd::Isis::Instances::Instance::PrefixEventSummaries::PrefixEventSummary


class Rcmd::Isis::Instances::Instance::PrefixEventSummaries::PrefixEventSummary::IpConvergenceTime : public ydk::Entity
{
    public:
        IpConvergenceTime();
        ~IpConvergenceTime();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf minimum_time; //type: string
        ydk::YLeaf maximum_time; //type: string
        ydk::YLeaf slowest_node_name; //type: string
        ydk::YLeaf fastest_node_name; //type: string

}; // Rcmd::Isis::Instances::Instance::PrefixEventSummaries::PrefixEventSummary::IpConvergenceTime


class Rcmd::Isis::Instances::Instance::PrefixEventSummaries::PrefixEventSummary::MplsConvergenceTime : public ydk::Entity
{
    public:
        MplsConvergenceTime();
        ~MplsConvergenceTime();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf minimum_time; //type: string
        ydk::YLeaf maximum_time; //type: string
        ydk::YLeaf slowest_node_name; //type: string
        ydk::YLeaf fastest_node_name; //type: string

}; // Rcmd::Isis::Instances::Instance::PrefixEventSummaries::PrefixEventSummary::MplsConvergenceTime


class Rcmd::Isis::Instances::Instance::PrefixEventSummaries::PrefixEventSummary::Path : public ydk::Entity
{
    public:
        Path();
        ~Path();

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
        ydk::YLeaf neighbour_address; //type: string
        ydk::YLeaf change_type; //type: RcmdChange
        ydk::YLeaf path_metric; //type: uint32
        class LfaPath; //type: Rcmd::Isis::Instances::Instance::PrefixEventSummaries::PrefixEventSummary::Path::LfaPath

        ydk::YList lfa_path;
        
}; // Rcmd::Isis::Instances::Instance::PrefixEventSummaries::PrefixEventSummary::Path


class Rcmd::Isis::Instances::Instance::PrefixEventSummaries::PrefixEventSummary::Path::LfaPath : public ydk::Entity
{
    public:
        LfaPath();
        ~LfaPath();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf lfa_type; //type: RcmdShowIpfrrLfa
        ydk::YLeaf interface_name; //type: string
        ydk::YLeaf neighbour_address; //type: string
        ydk::YLeaf change_type; //type: RcmdChange
        ydk::YLeaf path_metric; //type: uint32
        ydk::YLeaf remote_node_id; //type: string

}; // Rcmd::Isis::Instances::Instance::PrefixEventSummaries::PrefixEventSummary::Path::LfaPath


class Rcmd::Isis::Instances::Instance::PrefixEventSummaries::PrefixEventSummary::TriggerLsa : public ydk::Entity
{
    public:
        TriggerLsa();
        ~TriggerLsa();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf lsa_id; //type: string
        ydk::YLeaf sequence_number; //type: string
        ydk::YLeaf lsa_type; //type: RcmdLsa
        ydk::YLeaf origin_router_id; //type: string
        ydk::YLeaf change_type; //type: RcmdLsChange
        ydk::YLeaf reception_time; //type: string

}; // Rcmd::Isis::Instances::Instance::PrefixEventSummaries::PrefixEventSummary::TriggerLsa


class Rcmd::Isis::Instances::Instance::PrefixEventSummaries::PrefixEventSummary::TimeLine : public ydk::Entity
{
    public:
        TimeLine();
        ~TimeLine();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf route_origin; //type: string
        ydk::YLeaf ri_bv4_enter; //type: string
        ydk::YLeaf ri_bv4_exit; //type: string
        ydk::YLeaf ri_bv4_redistribute; //type: string
        ydk::YLeaf ldp_enter; //type: string
        ydk::YLeaf ldp_exit; //type: string
        ydk::YLeaf lsd_enter; //type: string
        ydk::YLeaf lsd_exit; //type: string
        class LcIp; //type: Rcmd::Isis::Instances::Instance::PrefixEventSummaries::PrefixEventSummary::TimeLine::LcIp
        class LcMpls; //type: Rcmd::Isis::Instances::Instance::PrefixEventSummaries::PrefixEventSummary::TimeLine::LcMpls

        ydk::YList lc_ip;
        ydk::YList lc_mpls;
        
}; // Rcmd::Isis::Instances::Instance::PrefixEventSummaries::PrefixEventSummary::TimeLine


class Rcmd::Isis::Instances::Instance::PrefixEventSummaries::PrefixEventSummary::TimeLine::LcIp : public ydk::Entity
{
    public:
        LcIp();
        ~LcIp();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf node_name; //type: string
        ydk::YLeaf speed; //type: RcmdLinecardSpeed
        ydk::YLeaf fib_complete; //type: string

}; // Rcmd::Isis::Instances::Instance::PrefixEventSummaries::PrefixEventSummary::TimeLine::LcIp


class Rcmd::Isis::Instances::Instance::PrefixEventSummaries::PrefixEventSummary::TimeLine::LcMpls : public ydk::Entity
{
    public:
        LcMpls();
        ~LcMpls();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf node_name; //type: string
        ydk::YLeaf speed; //type: RcmdLinecardSpeed
        ydk::YLeaf fib_complete; //type: string

}; // Rcmd::Isis::Instances::Instance::PrefixEventSummaries::PrefixEventSummary::TimeLine::LcMpls


class Rcmd::Isis::Instances::Instance::PrefixEventSummaries::PrefixEventSummary::LsaProcessed : public ydk::Entity
{
    public:
        LsaProcessed();
        ~LsaProcessed();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf lsa_id; //type: string
        ydk::YLeaf sequence_number; //type: string
        ydk::YLeaf lsa_type; //type: RcmdLsa
        ydk::YLeaf origin_router_id; //type: string
        ydk::YLeaf change_type; //type: RcmdLsChange
        ydk::YLeaf reception_time; //type: string

}; // Rcmd::Isis::Instances::Instance::PrefixEventSummaries::PrefixEventSummary::LsaProcessed


class Rcmd::Isis::Instances::Instance::PrefixEventOfflines : public ydk::Entity
{
    public:
        PrefixEventOfflines();
        ~PrefixEventOfflines();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class PrefixEventOffline; //type: Rcmd::Isis::Instances::Instance::PrefixEventOfflines::PrefixEventOffline

        ydk::YList prefix_event_offline;
        
}; // Rcmd::Isis::Instances::Instance::PrefixEventOfflines


class Rcmd::Isis::Instances::Instance::PrefixEventOfflines::PrefixEventOffline : public ydk::Entity
{
    public:
        PrefixEventOffline();
        ~PrefixEventOffline();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf event_id; //type: uint32
        ydk::YLeaf prefix; //type: string
        ydk::YLeaf prefix_lenth; //type: uint32
        ydk::YLeaf spf_run_no; //type: uint32
        ydk::YLeaf ipfrr_event_id; //type: uint32
        ydk::YLeaf threshold_exceeded; //type: boolean
        ydk::YLeaf priority; //type: RcmdPriorityLevel
        ydk::YLeaf change_type; //type: RcmdChange
        ydk::YLeaf route_type; //type: RcmdShowRoute
        ydk::YLeaf route_path_change_type; //type: RcmdShowRoutePathChange
        ydk::YLeaf cost; //type: uint32
        ydk::YLeaf trigger_time; //type: string
        class IpConvergenceTime; //type: Rcmd::Isis::Instances::Instance::PrefixEventOfflines::PrefixEventOffline::IpConvergenceTime
        class MplsConvergenceTime; //type: Rcmd::Isis::Instances::Instance::PrefixEventOfflines::PrefixEventOffline::MplsConvergenceTime
        class Path; //type: Rcmd::Isis::Instances::Instance::PrefixEventOfflines::PrefixEventOffline::Path
        class TriggerLsa; //type: Rcmd::Isis::Instances::Instance::PrefixEventOfflines::PrefixEventOffline::TriggerLsa
        class TimeLine; //type: Rcmd::Isis::Instances::Instance::PrefixEventOfflines::PrefixEventOffline::TimeLine
        class LsaProcessed; //type: Rcmd::Isis::Instances::Instance::PrefixEventOfflines::PrefixEventOffline::LsaProcessed

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_infra_rcmd_oper::Rcmd::Isis::Instances::Instance::PrefixEventOfflines::PrefixEventOffline::IpConvergenceTime> ip_convergence_time;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_infra_rcmd_oper::Rcmd::Isis::Instances::Instance::PrefixEventOfflines::PrefixEventOffline::MplsConvergenceTime> mpls_convergence_time;
        ydk::YList path;
        ydk::YList trigger_lsa;
        ydk::YList time_line;
        ydk::YList lsa_processed;
        
}; // Rcmd::Isis::Instances::Instance::PrefixEventOfflines::PrefixEventOffline


class Rcmd::Isis::Instances::Instance::PrefixEventOfflines::PrefixEventOffline::IpConvergenceTime : public ydk::Entity
{
    public:
        IpConvergenceTime();
        ~IpConvergenceTime();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf minimum_time; //type: string
        ydk::YLeaf maximum_time; //type: string
        ydk::YLeaf slowest_node_name; //type: string
        ydk::YLeaf fastest_node_name; //type: string

}; // Rcmd::Isis::Instances::Instance::PrefixEventOfflines::PrefixEventOffline::IpConvergenceTime


class Rcmd::Isis::Instances::Instance::PrefixEventOfflines::PrefixEventOffline::MplsConvergenceTime : public ydk::Entity
{
    public:
        MplsConvergenceTime();
        ~MplsConvergenceTime();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf minimum_time; //type: string
        ydk::YLeaf maximum_time; //type: string
        ydk::YLeaf slowest_node_name; //type: string
        ydk::YLeaf fastest_node_name; //type: string

}; // Rcmd::Isis::Instances::Instance::PrefixEventOfflines::PrefixEventOffline::MplsConvergenceTime


class Rcmd::Isis::Instances::Instance::PrefixEventOfflines::PrefixEventOffline::Path : public ydk::Entity
{
    public:
        Path();
        ~Path();

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
        ydk::YLeaf neighbour_address; //type: string
        ydk::YLeaf change_type; //type: RcmdChange
        ydk::YLeaf path_metric; //type: uint32
        class LfaPath; //type: Rcmd::Isis::Instances::Instance::PrefixEventOfflines::PrefixEventOffline::Path::LfaPath

        ydk::YList lfa_path;
        
}; // Rcmd::Isis::Instances::Instance::PrefixEventOfflines::PrefixEventOffline::Path


class Rcmd::Isis::Instances::Instance::PrefixEventOfflines::PrefixEventOffline::Path::LfaPath : public ydk::Entity
{
    public:
        LfaPath();
        ~LfaPath();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf lfa_type; //type: RcmdShowIpfrrLfa
        ydk::YLeaf interface_name; //type: string
        ydk::YLeaf neighbour_address; //type: string
        ydk::YLeaf change_type; //type: RcmdChange
        ydk::YLeaf path_metric; //type: uint32
        ydk::YLeaf remote_node_id; //type: string

}; // Rcmd::Isis::Instances::Instance::PrefixEventOfflines::PrefixEventOffline::Path::LfaPath


class Rcmd::Isis::Instances::Instance::PrefixEventOfflines::PrefixEventOffline::TriggerLsa : public ydk::Entity
{
    public:
        TriggerLsa();
        ~TriggerLsa();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf lsa_id; //type: string
        ydk::YLeaf sequence_number; //type: string
        ydk::YLeaf lsa_type; //type: RcmdLsa
        ydk::YLeaf origin_router_id; //type: string
        ydk::YLeaf change_type; //type: RcmdLsChange
        ydk::YLeaf reception_time; //type: string

}; // Rcmd::Isis::Instances::Instance::PrefixEventOfflines::PrefixEventOffline::TriggerLsa


class Rcmd::Isis::Instances::Instance::PrefixEventOfflines::PrefixEventOffline::TimeLine : public ydk::Entity
{
    public:
        TimeLine();
        ~TimeLine();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf route_origin; //type: string
        ydk::YLeaf ri_bv4_enter; //type: string
        ydk::YLeaf ri_bv4_exit; //type: string
        ydk::YLeaf ri_bv4_redistribute; //type: string
        ydk::YLeaf ldp_enter; //type: string
        ydk::YLeaf ldp_exit; //type: string
        ydk::YLeaf lsd_enter; //type: string
        ydk::YLeaf lsd_exit; //type: string
        class LcIp; //type: Rcmd::Isis::Instances::Instance::PrefixEventOfflines::PrefixEventOffline::TimeLine::LcIp
        class LcMpls; //type: Rcmd::Isis::Instances::Instance::PrefixEventOfflines::PrefixEventOffline::TimeLine::LcMpls

        ydk::YList lc_ip;
        ydk::YList lc_mpls;
        
}; // Rcmd::Isis::Instances::Instance::PrefixEventOfflines::PrefixEventOffline::TimeLine


class Rcmd::Isis::Instances::Instance::PrefixEventOfflines::PrefixEventOffline::TimeLine::LcIp : public ydk::Entity
{
    public:
        LcIp();
        ~LcIp();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf node_name; //type: string
        ydk::YLeaf speed; //type: RcmdLinecardSpeed
        ydk::YLeaf fib_complete; //type: string

}; // Rcmd::Isis::Instances::Instance::PrefixEventOfflines::PrefixEventOffline::TimeLine::LcIp


class Rcmd::Isis::Instances::Instance::PrefixEventOfflines::PrefixEventOffline::TimeLine::LcMpls : public ydk::Entity
{
    public:
        LcMpls();
        ~LcMpls();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf node_name; //type: string
        ydk::YLeaf speed; //type: RcmdLinecardSpeed
        ydk::YLeaf fib_complete; //type: string

}; // Rcmd::Isis::Instances::Instance::PrefixEventOfflines::PrefixEventOffline::TimeLine::LcMpls


class Rcmd::Isis::Instances::Instance::PrefixEventOfflines::PrefixEventOffline::LsaProcessed : public ydk::Entity
{
    public:
        LsaProcessed();
        ~LsaProcessed();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf lsa_id; //type: string
        ydk::YLeaf sequence_number; //type: string
        ydk::YLeaf lsa_type; //type: RcmdLsa
        ydk::YLeaf origin_router_id; //type: string
        ydk::YLeaf change_type; //type: RcmdLsChange
        ydk::YLeaf reception_time; //type: string

}; // Rcmd::Isis::Instances::Instance::PrefixEventOfflines::PrefixEventOffline::LsaProcessed


class Rcmd::Isis::Instances::Instance::LspRegenerateds : public ydk::Entity
{
    public:
        LspRegenerateds();
        ~LspRegenerateds();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class LspRegenerated; //type: Rcmd::Isis::Instances::Instance::LspRegenerateds::LspRegenerated

        ydk::YList lsp_regenerated;
        
}; // Rcmd::Isis::Instances::Instance::LspRegenerateds


class Rcmd::Isis::Instances::Instance::LspRegenerateds::LspRegenerated : public ydk::Entity
{
    public:
        LspRegenerated();
        ~LspRegenerated();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf serial_number; //type: uint32
        ydk::YLeaf serial_number_xr; //type: uint32
        ydk::YLeaf lsp_id; //type: string
        ydk::YLeaf sequence_number; //type: uint32
        ydk::YLeaf reception_time; //type: string
        ydk::YLeaf isis_level; //type: RcmdIsisLvl
        ydk::YLeaf spf_run_number; //type: uint32
        ydk::YLeaf reason; //type: string

}; // Rcmd::Isis::Instances::Instance::LspRegenerateds::LspRegenerated


class Rcmd::Memory : public ydk::Entity
{
    public:
        Memory();
        ~Memory();

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

        class MemoryInfo; //type: Rcmd::Memory::MemoryInfo
        class EdmMemoryInfo; //type: Rcmd::Memory::EdmMemoryInfo
        class StringMemoryInfo; //type: Rcmd::Memory::StringMemoryInfo

        ydk::YList memory_info;
        ydk::YList edm_memory_info;
        ydk::YList string_memory_info;
        
}; // Rcmd::Memory


class Rcmd::Memory::MemoryInfo : public ydk::Entity
{
    public:
        MemoryInfo();
        ~MemoryInfo();

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

        ydk::YLeaf structure_name; //type: string
        ydk::YLeaf size; //type: uint32
        ydk::YLeaf current_count; //type: uint32
        ydk::YLeaf alloc_fails; //type: uint32
        ydk::YLeaf alloc_count; //type: uint32
        ydk::YLeaf freed_count; //type: uint32
        ydk::YLeaf memory_type; //type: RcmdShowMem

}; // Rcmd::Memory::MemoryInfo


class Rcmd::Memory::EdmMemoryInfo : public ydk::Entity
{
    public:
        EdmMemoryInfo();
        ~EdmMemoryInfo();

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

        ydk::YLeaf size; //type: uint32
        ydk::YLeaf total; //type: uint32
        ydk::YLeaf success; //type: uint32
        ydk::YLeaf failure; //type: uint32

}; // Rcmd::Memory::EdmMemoryInfo


class Rcmd::Memory::StringMemoryInfo : public ydk::Entity
{
    public:
        StringMemoryInfo();
        ~StringMemoryInfo();

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

        ydk::YLeaf size; //type: uint32
        ydk::YLeaf total; //type: uint32
        ydk::YLeaf success; //type: uint32
        ydk::YLeaf failure; //type: uint32

}; // Rcmd::Memory::StringMemoryInfo


class Rcmd::Ldp : public ydk::Entity
{
    public:
        Ldp();
        ~Ldp();

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

        class Sessions; //type: Rcmd::Ldp::Sessions
        class RemoteLfaS; //type: Rcmd::Ldp::RemoteLfaS
        class RemoteLfaSummaries; //type: Rcmd::Ldp::RemoteLfaSummaries

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_infra_rcmd_oper::Rcmd::Ldp::Sessions> sessions;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_infra_rcmd_oper::Rcmd::Ldp::RemoteLfaS> remote_lfa_s;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_infra_rcmd_oper::Rcmd::Ldp::RemoteLfaSummaries> remote_lfa_summaries;
        
}; // Rcmd::Ldp


class Rcmd::Ldp::Sessions : public ydk::Entity
{
    public:
        Sessions();
        ~Sessions();

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

        class Session; //type: Rcmd::Ldp::Sessions::Session

        ydk::YList session;
        
}; // Rcmd::Ldp::Sessions


class Rcmd::Ldp::Sessions::Session : public ydk::Entity
{
    public:
        Session();
        ~Session();

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

        ydk::YLeaf event_id; //type: uint32
        ydk::YLeaf event_id_xr; //type: uint32
        ydk::YLeaf event_type; //type: RcmdLdpEvent
        ydk::YLeaf event_time; //type: string
        ydk::YLeaf lsr_id; //type: string
        ydk::YLeaf interface_name; //type: string
        ydk::YLeaf address; //type: string
        ydk::YLeaf state; //type: RcmdShowLdpNeighbourStatus

}; // Rcmd::Ldp::Sessions::Session


class Rcmd::Ldp::RemoteLfaS : public ydk::Entity
{
    public:
        RemoteLfaS();
        ~RemoteLfaS();

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

        class RemoteLfa; //type: Rcmd::Ldp::RemoteLfaS::RemoteLfa

        ydk::YList remote_lfa;
        
}; // Rcmd::Ldp::RemoteLfaS


class Rcmd::Ldp::RemoteLfaS::RemoteLfa : public ydk::Entity
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
        std::string get_absolute_path() const override;

        ydk::YLeaf event_id; //type: uint32
        ydk::YLeaf event_id_xr; //type: uint32
        ydk::YLeaf end_of_calculation_time; //type: string
        ydk::YLeaf igp_protocol; //type: RcmdProtocolId
        ydk::YLeaf process_name; //type: string
        ydk::YLeaf ipfrr_event_id; //type: uint32
        ydk::YLeaf below_threshold; //type: boolean
        class SessionStatistic; //type: Rcmd::Ldp::RemoteLfaS::RemoteLfa::SessionStatistic
        class RemoteNode; //type: Rcmd::Ldp::RemoteLfaS::RemoteLfa::RemoteNode
        class Logs; //type: Rcmd::Ldp::RemoteLfaS::RemoteLfa::Logs

        ydk::YList session_statistic;
        ydk::YList remote_node;
        ydk::YList logs;
        
}; // Rcmd::Ldp::RemoteLfaS::RemoteLfa


class Rcmd::Ldp::RemoteLfaS::RemoteLfa::SessionStatistic : public ydk::Entity
{
    public:
        SessionStatistic();
        ~SessionStatistic();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf session_state; //type: RcmdShowLdpSessionState
        ydk::YLeaf session_count; //type: uint32
        ydk::YLeaf route_count; //type: uint32
        ydk::YLeaf path_count; //type: uint32
        ydk::YLeaf remote_label_count; //type: uint32
        ydk::YLeaf protected_route_count; //type: uint32
        ydk::YLeaf protected_path_count; //type: uint32

}; // Rcmd::Ldp::RemoteLfaS::RemoteLfa::SessionStatistic


class Rcmd::Ldp::RemoteLfaS::RemoteLfa::RemoteNode : public ydk::Entity
{
    public:
        RemoteNode();
        ~RemoteNode();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf remote_node_id; //type: string
        ydk::YLeaf lsr_id; //type: string
        ydk::YLeaf transport_address; //type: string
        ydk::YLeaf in_use_time; //type: string
        ydk::YLeaf session_state; //type: RcmdShowLdpSessionState
        ydk::YLeaf route_count; //type: uint32
        ydk::YLeaf path_count; //type: uint32
        ydk::YLeaf remote_label_count; //type: uint32
        ydk::YLeaf protected_route_count; //type: uint32
        ydk::YLeaf protected_path_count; //type: uint32

}; // Rcmd::Ldp::RemoteLfaS::RemoteLfa::RemoteNode


class Rcmd::Ldp::RemoteLfaS::RemoteLfa::Logs : public ydk::Entity
{
    public:
        Logs();
        ~Logs();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf log_time; //type: string
        ydk::YLeaf label_coverage_state; //type: RcmdShowLdpConvState
        ydk::YLeaf route_count; //type: uint32
        ydk::YLeaf remote_label_count; //type: uint32

}; // Rcmd::Ldp::RemoteLfaS::RemoteLfa::Logs


class Rcmd::Ldp::RemoteLfaSummaries : public ydk::Entity
{
    public:
        RemoteLfaSummaries();
        ~RemoteLfaSummaries();

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

        class RemoteLfaSummary; //type: Rcmd::Ldp::RemoteLfaSummaries::RemoteLfaSummary

        ydk::YList remote_lfa_summary;
        
}; // Rcmd::Ldp::RemoteLfaSummaries


class Rcmd::Ldp::RemoteLfaSummaries::RemoteLfaSummary : public ydk::Entity
{
    public:
        RemoteLfaSummary();
        ~RemoteLfaSummary();

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

        ydk::YLeaf event_id; //type: uint32
        ydk::YLeaf event_id_xr; //type: uint32
        ydk::YLeaf end_of_calculation_time; //type: string
        ydk::YLeaf igp_protocol; //type: RcmdProtocolId
        ydk::YLeaf process_name; //type: string
        ydk::YLeaf ipfrr_event_id; //type: uint32
        ydk::YLeaf below_threshold; //type: boolean
        class SessionStatistic; //type: Rcmd::Ldp::RemoteLfaSummaries::RemoteLfaSummary::SessionStatistic
        class RemoteNode; //type: Rcmd::Ldp::RemoteLfaSummaries::RemoteLfaSummary::RemoteNode
        class Logs; //type: Rcmd::Ldp::RemoteLfaSummaries::RemoteLfaSummary::Logs

        ydk::YList session_statistic;
        ydk::YList remote_node;
        ydk::YList logs;
        
}; // Rcmd::Ldp::RemoteLfaSummaries::RemoteLfaSummary


class Rcmd::Ldp::RemoteLfaSummaries::RemoteLfaSummary::SessionStatistic : public ydk::Entity
{
    public:
        SessionStatistic();
        ~SessionStatistic();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf session_state; //type: RcmdShowLdpSessionState
        ydk::YLeaf session_count; //type: uint32
        ydk::YLeaf route_count; //type: uint32
        ydk::YLeaf path_count; //type: uint32
        ydk::YLeaf remote_label_count; //type: uint32
        ydk::YLeaf protected_route_count; //type: uint32
        ydk::YLeaf protected_path_count; //type: uint32

}; // Rcmd::Ldp::RemoteLfaSummaries::RemoteLfaSummary::SessionStatistic


class Rcmd::Ldp::RemoteLfaSummaries::RemoteLfaSummary::RemoteNode : public ydk::Entity
{
    public:
        RemoteNode();
        ~RemoteNode();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf remote_node_id; //type: string
        ydk::YLeaf lsr_id; //type: string
        ydk::YLeaf transport_address; //type: string
        ydk::YLeaf in_use_time; //type: string
        ydk::YLeaf session_state; //type: RcmdShowLdpSessionState
        ydk::YLeaf route_count; //type: uint32
        ydk::YLeaf path_count; //type: uint32
        ydk::YLeaf remote_label_count; //type: uint32
        ydk::YLeaf protected_route_count; //type: uint32
        ydk::YLeaf protected_path_count; //type: uint32

}; // Rcmd::Ldp::RemoteLfaSummaries::RemoteLfaSummary::RemoteNode


class Rcmd::Ldp::RemoteLfaSummaries::RemoteLfaSummary::Logs : public ydk::Entity
{
    public:
        Logs();
        ~Logs();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf log_time; //type: string
        ydk::YLeaf label_coverage_state; //type: RcmdShowLdpConvState
        ydk::YLeaf route_count; //type: uint32
        ydk::YLeaf remote_label_count; //type: uint32

}; // Rcmd::Ldp::RemoteLfaSummaries::RemoteLfaSummary::Logs


class Rcmd::Intf : public ydk::Entity
{
    public:
        Intf();
        ~Intf();

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

        class Events; //type: Rcmd::Intf::Events

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_infra_rcmd_oper::Rcmd::Intf::Events> events;
        
}; // Rcmd::Intf


class Rcmd::Intf::Events : public ydk::Entity
{
    public:
        Events();
        ~Events();

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

        class Event; //type: Rcmd::Intf::Events::Event

        ydk::YList event;
        
}; // Rcmd::Intf::Events


class Rcmd::Intf::Events::Event : public ydk::Entity
{
    public:
        Event();
        ~Event();

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

        ydk::YLeaf event_no; //type: uint32
        ydk::YLeaf sequence_no; //type: uint32
        ydk::YLeaf interface_name; //type: string
        ydk::YLeaf component; //type: RcmdShowCompId
        ydk::YLeaf event_type; //type: RcmdShowIntfEvent
        ydk::YLeaf event_time; //type: string
        ydk::YLeaf primary_address; //type: string

}; // Rcmd::Intf::Events::Event


class Rcmd::Process : public ydk::Entity
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

        class Isis; //type: Rcmd::Process::Isis
        class Ospf; //type: Rcmd::Process::Ospf
        class Ldp; //type: Rcmd::Process::Ldp

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_infra_rcmd_oper::Rcmd::Process::Isis> isis;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_infra_rcmd_oper::Rcmd::Process::Ospf> ospf;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_infra_rcmd_oper::Rcmd::Process::Ldp> ldp;
        
}; // Rcmd::Process


class Rcmd::Process::Isis : public ydk::Entity
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
        std::string get_absolute_path() const override;

        class Process_; //type: Rcmd::Process::Isis::Process_

        ydk::YList process;
        
}; // Rcmd::Process::Isis


class Rcmd::Process::Isis::Process_ : public ydk::Entity
{
    public:
        Process_();
        ~Process_();

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

        ydk::YLeaf protocol_id; //type: RcmdProtocolId
        ydk::YLeaf process_name; //type: string
        class InstanceName; //type: Rcmd::Process::Isis::Process_::InstanceName

        ydk::YList instance_name;
        
}; // Rcmd::Process::Isis::Process_


class Rcmd::Process::Isis::Process_::InstanceName : public ydk::Entity
{
    public:
        InstanceName();
        ~InstanceName();

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

        ydk::YLeaf name; //type: string
        ydk::YLeaf last_update_time; //type: string
        ydk::YLeaf total_spf_nos; //type: uint32
        ydk::YLeaf route_change_spf_nos; //type: uint32
        ydk::YLeaf no_route_change_spf_nos; //type: uint32
        ydk::YLeaf not_interested_spf_nos; //type: uint32
        ydk::YLeaf lsp_regeneration_count; //type: uint32
        ydk::YLeaf lsp_regeneration_serial; //type: uint32
        ydk::YLeaf arch_spf_event; //type: uint32
        ydk::YLeaf arch_lsp_regeneration; //type: uint32
        class Instance; //type: Rcmd::Process::Isis::Process_::InstanceName::Instance

        ydk::YList instance;
        
}; // Rcmd::Process::Isis::Process_::InstanceName


class Rcmd::Process::Isis::Process_::InstanceName::Instance : public ydk::Entity
{
    public:
        Instance();
        ~Instance();

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

        ydk::YLeaf instance_id; //type: uint32
        ydk::YLeaf instance_state; //type: RcmdShowInstState
        ydk::YLeaf instance_deleted; //type: RcmdBoolYesNo
        ydk::YLeaf fwd_referenced; //type: RcmdBoolYesNo
        ydk::YLeaf last_update_time; //type: string
        ydk::YLeaf node_id; //type: uint32
        ydk::YLeaf spf_offset; //type: uint32
        ydk::YLeaf total_spf_nos; //type: uint32
        ydk::YLeaf arch_spf_run; //type: uint32
        ydk::YLeaf route_change_spf_nos; //type: uint32
        ydk::YLeaf no_route_change_spf_nos; //type: uint32
        ydk::YLeaf not_interested_spf_nos; //type: uint32
        ydk::YLeaf total_spt_nos; //type: uint32

}; // Rcmd::Process::Isis::Process_::InstanceName::Instance


class Rcmd::Process::Ospf : public ydk::Entity
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
        std::string get_absolute_path() const override;

        class Process_; //type: Rcmd::Process::Ospf::Process_

        ydk::YList process;
        
}; // Rcmd::Process::Ospf


class Rcmd::Process::Ospf::Process_ : public ydk::Entity
{
    public:
        Process_();
        ~Process_();

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

        ydk::YLeaf protocol_id; //type: RcmdProtocolId
        ydk::YLeaf process_name; //type: string
        class InstanceName; //type: Rcmd::Process::Ospf::Process_::InstanceName

        ydk::YList instance_name;
        
}; // Rcmd::Process::Ospf::Process_


class Rcmd::Process::Ospf::Process_::InstanceName : public ydk::Entity
{
    public:
        InstanceName();
        ~InstanceName();

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

        ydk::YLeaf name; //type: string
        ydk::YLeaf last_update_time; //type: string
        ydk::YLeaf total_spf_nos; //type: uint32
        ydk::YLeaf route_change_spf_nos; //type: uint32
        ydk::YLeaf no_route_change_spf_nos; //type: uint32
        ydk::YLeaf not_interested_spf_nos; //type: uint32
        ydk::YLeaf lsp_regeneration_count; //type: uint32
        ydk::YLeaf lsp_regeneration_serial; //type: uint32
        ydk::YLeaf arch_spf_event; //type: uint32
        ydk::YLeaf arch_lsp_regeneration; //type: uint32
        class Instance; //type: Rcmd::Process::Ospf::Process_::InstanceName::Instance

        ydk::YList instance;
        
}; // Rcmd::Process::Ospf::Process_::InstanceName


class Rcmd::Process::Ospf::Process_::InstanceName::Instance : public ydk::Entity
{
    public:
        Instance();
        ~Instance();

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

        ydk::YLeaf instance_id; //type: uint32
        ydk::YLeaf instance_state; //type: RcmdShowInstState
        ydk::YLeaf instance_deleted; //type: RcmdBoolYesNo
        ydk::YLeaf fwd_referenced; //type: RcmdBoolYesNo
        ydk::YLeaf last_update_time; //type: string
        ydk::YLeaf node_id; //type: uint32
        ydk::YLeaf spf_offset; //type: uint32
        ydk::YLeaf total_spf_nos; //type: uint32
        ydk::YLeaf arch_spf_run; //type: uint32
        ydk::YLeaf route_change_spf_nos; //type: uint32
        ydk::YLeaf no_route_change_spf_nos; //type: uint32
        ydk::YLeaf not_interested_spf_nos; //type: uint32
        ydk::YLeaf total_spt_nos; //type: uint32

}; // Rcmd::Process::Ospf::Process_::InstanceName::Instance


class Rcmd::Process::Ldp : public ydk::Entity
{
    public:
        Ldp();
        ~Ldp();

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

        class Process_; //type: Rcmd::Process::Ldp::Process_

        ydk::YList process;
        
}; // Rcmd::Process::Ldp


class Rcmd::Process::Ldp::Process_ : public ydk::Entity
{
    public:
        Process_();
        ~Process_();

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

        ydk::YLeaf protocol_id; //type: RcmdProtocolId
        ydk::YLeaf process_name; //type: string
        class InstanceName; //type: Rcmd::Process::Ldp::Process_::InstanceName

        ydk::YList instance_name;
        
}; // Rcmd::Process::Ldp::Process_


class Rcmd::Process::Ldp::Process_::InstanceName : public ydk::Entity
{
    public:
        InstanceName();
        ~InstanceName();

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

        ydk::YLeaf name; //type: string
        ydk::YLeaf last_update_time; //type: string
        ydk::YLeaf total_spf_nos; //type: uint32
        ydk::YLeaf route_change_spf_nos; //type: uint32
        ydk::YLeaf no_route_change_spf_nos; //type: uint32
        ydk::YLeaf not_interested_spf_nos; //type: uint32
        ydk::YLeaf lsp_regeneration_count; //type: uint32
        ydk::YLeaf lsp_regeneration_serial; //type: uint32
        ydk::YLeaf arch_spf_event; //type: uint32
        ydk::YLeaf arch_lsp_regeneration; //type: uint32
        class Instance; //type: Rcmd::Process::Ldp::Process_::InstanceName::Instance

        ydk::YList instance;
        
}; // Rcmd::Process::Ldp::Process_::InstanceName


class Rcmd::Process::Ldp::Process_::InstanceName::Instance : public ydk::Entity
{
    public:
        Instance();
        ~Instance();

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

        ydk::YLeaf instance_id; //type: uint32
        ydk::YLeaf instance_state; //type: RcmdShowInstState
        ydk::YLeaf instance_deleted; //type: RcmdBoolYesNo
        ydk::YLeaf fwd_referenced; //type: RcmdBoolYesNo
        ydk::YLeaf last_update_time; //type: string
        ydk::YLeaf node_id; //type: uint32
        ydk::YLeaf spf_offset; //type: uint32
        ydk::YLeaf total_spf_nos; //type: uint32
        ydk::YLeaf arch_spf_run; //type: uint32
        ydk::YLeaf route_change_spf_nos; //type: uint32
        ydk::YLeaf no_route_change_spf_nos; //type: uint32
        ydk::YLeaf not_interested_spf_nos; //type: uint32
        ydk::YLeaf total_spt_nos; //type: uint32

}; // Rcmd::Process::Ldp::Process_::InstanceName::Instance

class RcmdBagEnblDsbl : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf dsbl;
        static const ydk::Enum::YLeaf enbl;

        static int get_enum_value(const std::string & name) {
            if (name == "dsbl") return 0;
            if (name == "enbl") return 1;
            return -1;
        }
};

class RcmdBoolYesNo : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf no;
        static const ydk::Enum::YLeaf yes;

        static int get_enum_value(const std::string & name) {
            if (name == "no") return 0;
            if (name == "yes") return 1;
            return -1;
        }
};

class RcmdPriorityLevel : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf critical;
        static const ydk::Enum::YLeaf high;
        static const ydk::Enum::YLeaf medium;
        static const ydk::Enum::YLeaf low;

        static int get_enum_value(const std::string & name) {
            if (name == "critical") return 0;
            if (name == "high") return 1;
            if (name == "medium") return 2;
            if (name == "low") return 3;
            return -1;
        }
};

class RcmdSpfState : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf complete;
        static const ydk::Enum::YLeaf in_complete;
        static const ydk::Enum::YLeaf collecting;
        static const ydk::Enum::YLeaf no_route_change;

        static int get_enum_value(const std::string & name) {
            if (name == "complete") return 0;
            if (name == "in-complete") return 1;
            if (name == "collecting") return 2;
            if (name == "no-route-change") return 3;
            return -1;
        }
};

class RcmdShowIpfrrLfa : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf none;
        static const ydk::Enum::YLeaf local;
        static const ydk::Enum::YLeaf remote;

        static int get_enum_value(const std::string & name) {
            if (name == "none") return 0;
            if (name == "local") return 1;
            if (name == "remote") return 2;
            return -1;
        }
};

class RcmdShowPrcsState : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf success;
        static const ydk::Enum::YLeaf cpu;
        static const ydk::Enum::YLeaf memory;

        static int get_enum_value(const std::string & name) {
            if (name == "success") return 0;
            if (name == "cpu") return 1;
            if (name == "memory") return 2;
            return -1;
        }
};

class RcmdShowCompId : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf ospf;
        static const ydk::Enum::YLeaf isis;
        static const ydk::Enum::YLeaf un_known;

        static int get_enum_value(const std::string & name) {
            if (name == "ospf") return 0;
            if (name == "isis") return 1;
            if (name == "un-known") return 2;
            return -1;
        }
};

class RcmdShowLdpSessionState : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf gr_down;
        static const ydk::Enum::YLeaf gr_converging;
        static const ydk::Enum::YLeaf establishing;
        static const ydk::Enum::YLeaf converging;
        static const ydk::Enum::YLeaf converged;
        static const ydk::Enum::YLeaf retrying;
        static const ydk::Enum::YLeaf total;

        static int get_enum_value(const std::string & name) {
            if (name == "gr-down") return 0;
            if (name == "gr-converging") return 1;
            if (name == "establishing") return 2;
            if (name == "converging") return 3;
            if (name == "converged") return 4;
            if (name == "retrying") return 5;
            if (name == "total") return 6;
            return -1;
        }
};

class RcmdProtocolId : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf ospf;
        static const ydk::Enum::YLeaf isis;
        static const ydk::Enum::YLeaf na;

        static int get_enum_value(const std::string & name) {
            if (name == "ospf") return 0;
            if (name == "isis") return 1;
            if (name == "na") return 2;
            return -1;
        }
};

class RcmdShowLdpConvState : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf not_full;
        static const ydk::Enum::YLeaf fully_covered;
        static const ydk::Enum::YLeaf coverage_above_threshold;
        static const ydk::Enum::YLeaf coverage_below_threshold;
        static const ydk::Enum::YLeaf coverage_flapping;

        static int get_enum_value(const std::string & name) {
            if (name == "not-full") return 0;
            if (name == "fully-covered") return 1;
            if (name == "coverage-above-threshold") return 2;
            if (name == "coverage-below-threshold") return 3;
            if (name == "coverage-flapping") return 4;
            return -1;
        }
};

class RcmdLinecardSpeed : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf other;
        static const ydk::Enum::YLeaf fastest;
        static const ydk::Enum::YLeaf slowest;

        static int get_enum_value(const std::string & name) {
            if (name == "other") return 0;
            if (name == "fastest") return 1;
            if (name == "slowest") return 2;
            return -1;
        }
};

class RcmdShowNode : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf unknown;
        static const ydk::Enum::YLeaf lc;
        static const ydk::Enum::YLeaf rp;

        static int get_enum_value(const std::string & name) {
            if (name == "unknown") return 0;
            if (name == "lc") return 1;
            if (name == "rp") return 2;
            return -1;
        }
};

class RcmdShowLdpNeighbourStatus : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf down;
        static const ydk::Enum::YLeaf up;

        static int get_enum_value(const std::string & name) {
            if (name == "down") return 0;
            if (name == "up") return 1;
            return -1;
        }
};

class RcmdIsisSpf : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf full;
        static const ydk::Enum::YLeaf incremental;
        static const ydk::Enum::YLeaf next_hop;
        static const ydk::Enum::YLeaf partial_route;

        static int get_enum_value(const std::string & name) {
            if (name == "full") return 0;
            if (name == "incremental") return 1;
            if (name == "next-hop") return 2;
            if (name == "partial-route") return 3;
            return -1;
        }
};

class RcmdShowRoutePathChange : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf primary;
        static const ydk::Enum::YLeaf backup;

        static int get_enum_value(const std::string & name) {
            if (name == "primary") return 0;
            if (name == "backup") return 1;
            return -1;
        }
};

class RcmdIsisLvl : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf l1;
        static const ydk::Enum::YLeaf l2;

        static int get_enum_value(const std::string & name) {
            if (name == "l1") return 0;
            if (name == "l2") return 1;
            return -1;
        }
};

class RcmdChange : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf none;
        static const ydk::Enum::YLeaf add;
        static const ydk::Enum::YLeaf delete_;
        static const ydk::Enum::YLeaf modify;
        static const ydk::Enum::YLeaf no_change;

        static int get_enum_value(const std::string & name) {
            if (name == "none") return 0;
            if (name == "add") return 1;
            if (name == "delete") return 2;
            if (name == "modify") return 3;
            if (name == "no-change") return 4;
            return -1;
        }
};

class RcmdShowRoute : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf ospf;
        static const ydk::Enum::YLeaf intra;
        static const ydk::Enum::YLeaf inter;
        static const ydk::Enum::YLeaf ext_1;
        static const ydk::Enum::YLeaf ext_2;
        static const ydk::Enum::YLeaf nssa_1;
        static const ydk::Enum::YLeaf nssa_2;
        static const ydk::Enum::YLeaf isis;
        static const ydk::Enum::YLeaf l1_summary;
        static const ydk::Enum::YLeaf l1;
        static const ydk::Enum::YLeaf l2_summary;
        static const ydk::Enum::YLeaf l2;
        static const ydk::Enum::YLeaf inter_area_summary;
        static const ydk::Enum::YLeaf inter_area;
        static const ydk::Enum::YLeaf default_attached;

        static int get_enum_value(const std::string & name) {
            if (name == "ospf") return 0;
            if (name == "intra") return 1;
            if (name == "inter") return 2;
            if (name == "ext-1") return 3;
            if (name == "ext-2") return 4;
            if (name == "nssa-1") return 5;
            if (name == "nssa-2") return 6;
            if (name == "isis") return 7;
            if (name == "l1-summary") return 8;
            if (name == "l1") return 9;
            if (name == "l2-summary") return 10;
            if (name == "l2") return 11;
            if (name == "inter-area-summary") return 12;
            if (name == "inter-area") return 13;
            if (name == "default-attached") return 14;
            return -1;
        }
};

class RcmdLdpEvent : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf neighbor;
        static const ydk::Enum::YLeaf adjacency;

        static int get_enum_value(const std::string & name) {
            if (name == "neighbor") return 1;
            if (name == "adjacency") return 2;
            return -1;
        }
};

class RcmdLsa : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf unknown;
        static const ydk::Enum::YLeaf router;
        static const ydk::Enum::YLeaf network;
        static const ydk::Enum::YLeaf summary;
        static const ydk::Enum::YLeaf asbr;
        static const ydk::Enum::YLeaf external;
        static const ydk::Enum::YLeaf multicast;
        static const ydk::Enum::YLeaf nssa;

        static int get_enum_value(const std::string & name) {
            if (name == "unknown") return 0;
            if (name == "router") return 1;
            if (name == "network") return 2;
            if (name == "summary") return 3;
            if (name == "asbr") return 4;
            if (name == "external") return 5;
            if (name == "multicast") return 6;
            if (name == "nssa") return 7;
            return -1;
        }
};

class RcmdShowMem : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf standard;
        static const ydk::Enum::YLeaf chunk;
        static const ydk::Enum::YLeaf edm;
        static const ydk::Enum::YLeaf string;
        static const ydk::Enum::YLeaf static_;
        static const ydk::Enum::YLeaf unknown;

        static int get_enum_value(const std::string & name) {
            if (name == "standard") return 0;
            if (name == "chunk") return 1;
            if (name == "edm") return 2;
            if (name == "string") return 3;
            if (name == "static") return 4;
            if (name == "unknown") return 5;
            return -1;
        }
};

class RcmdBagEnableDisable : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf disable;
        static const ydk::Enum::YLeaf enable;

        static int get_enum_value(const std::string & name) {
            if (name == "disable") return 0;
            if (name == "enable") return 1;
            return -1;
        }
};

class RcmdShowInstState : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf unknown;
        static const ydk::Enum::YLeaf active;
        static const ydk::Enum::YLeaf in_active;
        static const ydk::Enum::YLeaf na;

        static int get_enum_value(const std::string & name) {
            if (name == "unknown") return 0;
            if (name == "active") return 1;
            if (name == "in-active") return 2;
            if (name == "na") return 3;
            return -1;
        }
};

class RcmdLsChange : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf new_;
        static const ydk::Enum::YLeaf delete_;
        static const ydk::Enum::YLeaf modify;
        static const ydk::Enum::YLeaf noop;

        static int get_enum_value(const std::string & name) {
            if (name == "new") return 0;
            if (name == "delete") return 1;
            if (name == "modify") return 2;
            if (name == "noop") return 3;
            return -1;
        }
};

class RcmdShowIntfEvent : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf create;
        static const ydk::Enum::YLeaf delete_;
        static const ydk::Enum::YLeaf link_up;
        static const ydk::Enum::YLeaf link_down;
        static const ydk::Enum::YLeaf primary_address;
        static const ydk::Enum::YLeaf secondary_address;
        static const ydk::Enum::YLeaf ipv6_link_local_address;
        static const ydk::Enum::YLeaf ipv6_global_address;
        static const ydk::Enum::YLeaf mtu;
        static const ydk::Enum::YLeaf band_width;
        static const ydk::Enum::YLeaf ldp_sync;
        static const ydk::Enum::YLeaf forward_reference;
        static const ydk::Enum::YLeaf ldp_no_sync;

        static int get_enum_value(const std::string & name) {
            if (name == "create") return 1;
            if (name == "delete") return 2;
            if (name == "link-up") return 3;
            if (name == "link-down") return 4;
            if (name == "primary-address") return 5;
            if (name == "secondary-address") return 6;
            if (name == "ipv6-link-local-address") return 7;
            if (name == "ipv6-global-address") return 8;
            if (name == "mtu") return 9;
            if (name == "band-width") return 10;
            if (name == "ldp-sync") return 11;
            if (name == "forward-reference") return 12;
            if (name == "ldp-no-sync") return 13;
            return -1;
        }
};


}
}

#endif /* _CISCO_IOS_XR_INFRA_RCMD_OPER_ */


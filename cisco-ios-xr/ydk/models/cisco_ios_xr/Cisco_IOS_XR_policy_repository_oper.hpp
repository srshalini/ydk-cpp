#ifndef _CISCO_IOS_XR_POLICY_REPOSITORY_OPER_
#define _CISCO_IOS_XR_POLICY_REPOSITORY_OPER_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>

namespace cisco_ios_xr {
namespace Cisco_IOS_XR_policy_repository_oper {

class RoutingPolicy : public ydk::Entity
{
    public:
        RoutingPolicy();
        ~RoutingPolicy();

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

        class Limits; //type: RoutingPolicy::Limits
        class Policies; //type: RoutingPolicy::Policies
        class Sets; //type: RoutingPolicy::Sets

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_policy_repository_oper::RoutingPolicy::Limits> limits;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_policy_repository_oper::RoutingPolicy::Policies> policies;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_policy_repository_oper::RoutingPolicy::Sets> sets;
        
}; // RoutingPolicy


class RoutingPolicy::Limits : public ydk::Entity
{
    public:
        Limits();
        ~Limits();

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

        ydk::YLeaf maximum_lines_of_policy; //type: uint32
        ydk::YLeaf current_lines_of_policy_limit; //type: uint32
        ydk::YLeaf current_lines_of_policy_used; //type: uint32
        ydk::YLeaf maximum_number_of_policies; //type: uint32
        ydk::YLeaf current_number_of_policies_limit; //type: uint32
        ydk::YLeaf current_number_of_policies_used; //type: uint32
        ydk::YLeaf compiled_policies_length; //type: uint32

}; // RoutingPolicy::Limits


class RoutingPolicy::Policies : public ydk::Entity
{
    public:
        Policies();
        ~Policies();

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

        class RoutePolicies; //type: RoutingPolicy::Policies::RoutePolicies
        class Unused; //type: RoutingPolicy::Policies::Unused
        class Inactive; //type: RoutingPolicy::Policies::Inactive
        class Active; //type: RoutingPolicy::Policies::Active

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_policy_repository_oper::RoutingPolicy::Policies::RoutePolicies> route_policies;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_policy_repository_oper::RoutingPolicy::Policies::Unused> unused;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_policy_repository_oper::RoutingPolicy::Policies::Inactive> inactive;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_policy_repository_oper::RoutingPolicy::Policies::Active> active;
        
}; // RoutingPolicy::Policies


class RoutingPolicy::Policies::RoutePolicies : public ydk::Entity
{
    public:
        RoutePolicies();
        ~RoutePolicies();

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

        class RoutePolicy; //type: RoutingPolicy::Policies::RoutePolicies::RoutePolicy

        ydk::YList route_policy;
        
}; // RoutingPolicy::Policies::RoutePolicies


class RoutingPolicy::Policies::RoutePolicies::RoutePolicy : public ydk::Entity
{
    public:
        RoutePolicy();
        ~RoutePolicy();

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

        ydk::YLeaf route_policy_name; //type: string
        class PolicyUses; //type: RoutingPolicy::Policies::RoutePolicies::RoutePolicy::PolicyUses
        class UsedBy; //type: RoutingPolicy::Policies::RoutePolicies::RoutePolicy::UsedBy
        class Attached; //type: RoutingPolicy::Policies::RoutePolicies::RoutePolicy::Attached

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_policy_repository_oper::RoutingPolicy::Policies::RoutePolicies::RoutePolicy::PolicyUses> policy_uses;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_policy_repository_oper::RoutingPolicy::Policies::RoutePolicies::RoutePolicy::UsedBy> used_by;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_policy_repository_oper::RoutingPolicy::Policies::RoutePolicies::RoutePolicy::Attached> attached;
        
}; // RoutingPolicy::Policies::RoutePolicies::RoutePolicy


class RoutingPolicy::Policies::RoutePolicies::RoutePolicy::PolicyUses : public ydk::Entity
{
    public:
        PolicyUses();
        ~PolicyUses();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class DirectlyUsedPolicies; //type: RoutingPolicy::Policies::RoutePolicies::RoutePolicy::PolicyUses::DirectlyUsedPolicies
        class AllUsedSets; //type: RoutingPolicy::Policies::RoutePolicies::RoutePolicy::PolicyUses::AllUsedSets
        class DirectlyUsedSets; //type: RoutingPolicy::Policies::RoutePolicies::RoutePolicy::PolicyUses::DirectlyUsedSets
        class AllUsedPolicies; //type: RoutingPolicy::Policies::RoutePolicies::RoutePolicy::PolicyUses::AllUsedPolicies

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_policy_repository_oper::RoutingPolicy::Policies::RoutePolicies::RoutePolicy::PolicyUses::DirectlyUsedPolicies> directly_used_policies;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_policy_repository_oper::RoutingPolicy::Policies::RoutePolicies::RoutePolicy::PolicyUses::AllUsedSets> all_used_sets;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_policy_repository_oper::RoutingPolicy::Policies::RoutePolicies::RoutePolicy::PolicyUses::DirectlyUsedSets> directly_used_sets;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_policy_repository_oper::RoutingPolicy::Policies::RoutePolicies::RoutePolicy::PolicyUses::AllUsedPolicies> all_used_policies;
        
}; // RoutingPolicy::Policies::RoutePolicies::RoutePolicy::PolicyUses


class RoutingPolicy::Policies::RoutePolicies::RoutePolicy::PolicyUses::DirectlyUsedPolicies : public ydk::Entity
{
    public:
        DirectlyUsedPolicies();
        ~DirectlyUsedPolicies();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeafList object; //type: list of  string

}; // RoutingPolicy::Policies::RoutePolicies::RoutePolicy::PolicyUses::DirectlyUsedPolicies


class RoutingPolicy::Policies::RoutePolicies::RoutePolicy::PolicyUses::AllUsedSets : public ydk::Entity
{
    public:
        AllUsedSets();
        ~AllUsedSets();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Sets; //type: RoutingPolicy::Policies::RoutePolicies::RoutePolicy::PolicyUses::AllUsedSets::Sets

        ydk::YList sets;
        
}; // RoutingPolicy::Policies::RoutePolicies::RoutePolicy::PolicyUses::AllUsedSets


class RoutingPolicy::Policies::RoutePolicies::RoutePolicy::PolicyUses::AllUsedSets::Sets : public ydk::Entity
{
    public:
        Sets();
        ~Sets();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf set_domain; //type: string
        ydk::YLeafList set_name; //type: list of  string

}; // RoutingPolicy::Policies::RoutePolicies::RoutePolicy::PolicyUses::AllUsedSets::Sets


class RoutingPolicy::Policies::RoutePolicies::RoutePolicy::PolicyUses::DirectlyUsedSets : public ydk::Entity
{
    public:
        DirectlyUsedSets();
        ~DirectlyUsedSets();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Sets; //type: RoutingPolicy::Policies::RoutePolicies::RoutePolicy::PolicyUses::DirectlyUsedSets::Sets

        ydk::YList sets;
        
}; // RoutingPolicy::Policies::RoutePolicies::RoutePolicy::PolicyUses::DirectlyUsedSets


class RoutingPolicy::Policies::RoutePolicies::RoutePolicy::PolicyUses::DirectlyUsedSets::Sets : public ydk::Entity
{
    public:
        Sets();
        ~Sets();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf set_domain; //type: string
        ydk::YLeafList set_name; //type: list of  string

}; // RoutingPolicy::Policies::RoutePolicies::RoutePolicy::PolicyUses::DirectlyUsedSets::Sets


class RoutingPolicy::Policies::RoutePolicies::RoutePolicy::PolicyUses::AllUsedPolicies : public ydk::Entity
{
    public:
        AllUsedPolicies();
        ~AllUsedPolicies();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeafList object; //type: list of  string

}; // RoutingPolicy::Policies::RoutePolicies::RoutePolicy::PolicyUses::AllUsedPolicies


class RoutingPolicy::Policies::RoutePolicies::RoutePolicy::UsedBy : public ydk::Entity
{
    public:
        UsedBy();
        ~UsedBy();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Reference; //type: RoutingPolicy::Policies::RoutePolicies::RoutePolicy::UsedBy::Reference

        ydk::YList reference;
        
}; // RoutingPolicy::Policies::RoutePolicies::RoutePolicy::UsedBy


class RoutingPolicy::Policies::RoutePolicies::RoutePolicy::UsedBy::Reference : public ydk::Entity
{
    public:
        Reference();
        ~Reference();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf route_policy_name; //type: string
        ydk::YLeaf used_directly; //type: boolean
        ydk::YLeaf status; //type: ObjectStatus

}; // RoutingPolicy::Policies::RoutePolicies::RoutePolicy::UsedBy::Reference


class RoutingPolicy::Policies::RoutePolicies::RoutePolicy::Attached : public ydk::Entity
{
    public:
        Attached();
        ~Attached();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Binding; //type: RoutingPolicy::Policies::RoutePolicies::RoutePolicy::Attached::Binding

        ydk::YList binding;
        
}; // RoutingPolicy::Policies::RoutePolicies::RoutePolicy::Attached


class RoutingPolicy::Policies::RoutePolicies::RoutePolicy::Attached::Binding : public ydk::Entity
{
    public:
        Binding();
        ~Binding();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf protocol; //type: string
        ydk::YLeaf vrf_name; //type: string
        ydk::YLeaf proto_instance; //type: string
        ydk::YLeaf af_name; //type: AddressFamily
        ydk::YLeaf saf_name; //type: SubAddressFamily
        ydk::YLeaf neighbor_address; //type: string
        ydk::YLeaf neighbor_af_name; //type: AddressFamily
        ydk::YLeaf group_name; //type: string
        ydk::YLeaf direction; //type: AttachPointDirection
        ydk::YLeaf group; //type: Group
        ydk::YLeaf source_protocol; //type: string
        ydk::YLeaf aggregate_network_address; //type: string
        ydk::YLeaf interface_name; //type: string
        ydk::YLeaf instance; //type: string
        ydk::YLeaf area_id; //type: string
        ydk::YLeaf propogate_from; //type: int32
        ydk::YLeaf propogate_to; //type: int32
        ydk::YLeaf route_policy_name; //type: string
        ydk::YLeaf attached_policy; //type: string
        ydk::YLeaf attach_point; //type: string

}; // RoutingPolicy::Policies::RoutePolicies::RoutePolicy::Attached::Binding


class RoutingPolicy::Policies::Unused : public ydk::Entity
{
    public:
        Unused();
        ~Unused();

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

        ydk::YLeafList object; //type: list of  string

}; // RoutingPolicy::Policies::Unused


class RoutingPolicy::Policies::Inactive : public ydk::Entity
{
    public:
        Inactive();
        ~Inactive();

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

        ydk::YLeafList object; //type: list of  string

}; // RoutingPolicy::Policies::Inactive


class RoutingPolicy::Policies::Active : public ydk::Entity
{
    public:
        Active();
        ~Active();

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

        ydk::YLeafList object; //type: list of  string

}; // RoutingPolicy::Policies::Active


class RoutingPolicy::Sets : public ydk::Entity
{
    public:
        Sets();
        ~Sets();

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

        class Etag; //type: RoutingPolicy::Sets::Etag
        class OspfArea; //type: RoutingPolicy::Sets::OspfArea
        class ExtendedCommunityOpaque; //type: RoutingPolicy::Sets::ExtendedCommunityOpaque
        class ExtendedCommunitySegNh; //type: RoutingPolicy::Sets::ExtendedCommunitySegNh
        class ExtendedCommunitySoo; //type: RoutingPolicy::Sets::ExtendedCommunitySoo
        class Tag; //type: RoutingPolicy::Sets::Tag
        class Prefix; //type: RoutingPolicy::Sets::Prefix
        class Community; //type: RoutingPolicy::Sets::Community
        class AsPath; //type: RoutingPolicy::Sets::AsPath
        class LargeCommunity; //type: RoutingPolicy::Sets::LargeCommunity
        class Esi; //type: RoutingPolicy::Sets::Esi
        class ExtendedCommunityBandwidth; //type: RoutingPolicy::Sets::ExtendedCommunityBandwidth
        class ExtendedCommunityRt; //type: RoutingPolicy::Sets::ExtendedCommunityRt
        class Rd; //type: RoutingPolicy::Sets::Rd
        class Mac; //type: RoutingPolicy::Sets::Mac
        class ExtendedCommunityCost; //type: RoutingPolicy::Sets::ExtendedCommunityCost

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_policy_repository_oper::RoutingPolicy::Sets::Etag> etag;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_policy_repository_oper::RoutingPolicy::Sets::OspfArea> ospf_area;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_policy_repository_oper::RoutingPolicy::Sets::ExtendedCommunityOpaque> extended_community_opaque;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_policy_repository_oper::RoutingPolicy::Sets::ExtendedCommunitySegNh> extended_community_seg_nh;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_policy_repository_oper::RoutingPolicy::Sets::ExtendedCommunitySoo> extended_community_soo;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_policy_repository_oper::RoutingPolicy::Sets::Tag> tag;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_policy_repository_oper::RoutingPolicy::Sets::Prefix> prefix;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_policy_repository_oper::RoutingPolicy::Sets::Community> community;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_policy_repository_oper::RoutingPolicy::Sets::AsPath> as_path;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_policy_repository_oper::RoutingPolicy::Sets::LargeCommunity> large_community;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_policy_repository_oper::RoutingPolicy::Sets::Esi> esi;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_policy_repository_oper::RoutingPolicy::Sets::ExtendedCommunityBandwidth> extended_community_bandwidth;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_policy_repository_oper::RoutingPolicy::Sets::ExtendedCommunityRt> extended_community_rt;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_policy_repository_oper::RoutingPolicy::Sets::Rd> rd;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_policy_repository_oper::RoutingPolicy::Sets::Mac> mac;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_policy_repository_oper::RoutingPolicy::Sets::ExtendedCommunityCost> extended_community_cost;
        
}; // RoutingPolicy::Sets


class RoutingPolicy::Sets::Etag : public ydk::Entity
{
    public:
        Etag();
        ~Etag();

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

        class Sets_; //type: RoutingPolicy::Sets::Etag::Sets_
        class Unused; //type: RoutingPolicy::Sets::Etag::Unused
        class Inactive; //type: RoutingPolicy::Sets::Etag::Inactive
        class Active; //type: RoutingPolicy::Sets::Etag::Active

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_policy_repository_oper::RoutingPolicy::Sets::Etag::Sets_> sets;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_policy_repository_oper::RoutingPolicy::Sets::Etag::Unused> unused;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_policy_repository_oper::RoutingPolicy::Sets::Etag::Inactive> inactive;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_policy_repository_oper::RoutingPolicy::Sets::Etag::Active> active;
        
}; // RoutingPolicy::Sets::Etag


class RoutingPolicy::Sets::Etag::Sets_ : public ydk::Entity
{
    public:
        Sets_();
        ~Sets_();

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

        class Set; //type: RoutingPolicy::Sets::Etag::Sets_::Set

        ydk::YList set;
        
}; // RoutingPolicy::Sets::Etag::Sets_


class RoutingPolicy::Sets::Etag::Sets_::Set : public ydk::Entity
{
    public:
        Set();
        ~Set();

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

        ydk::YLeaf set_name; //type: string
        class UsedBy; //type: RoutingPolicy::Sets::Etag::Sets_::Set::UsedBy
        class Attached; //type: RoutingPolicy::Sets::Etag::Sets_::Set::Attached

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_policy_repository_oper::RoutingPolicy::Sets::Etag::Sets_::Set::UsedBy> used_by;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_policy_repository_oper::RoutingPolicy::Sets::Etag::Sets_::Set::Attached> attached;
        
}; // RoutingPolicy::Sets::Etag::Sets_::Set


class RoutingPolicy::Sets::Etag::Sets_::Set::UsedBy : public ydk::Entity
{
    public:
        UsedBy();
        ~UsedBy();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Reference; //type: RoutingPolicy::Sets::Etag::Sets_::Set::UsedBy::Reference

        ydk::YList reference;
        
}; // RoutingPolicy::Sets::Etag::Sets_::Set::UsedBy


class RoutingPolicy::Sets::Etag::Sets_::Set::UsedBy::Reference : public ydk::Entity
{
    public:
        Reference();
        ~Reference();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf route_policy_name; //type: string
        ydk::YLeaf used_directly; //type: boolean
        ydk::YLeaf status; //type: ObjectStatus

}; // RoutingPolicy::Sets::Etag::Sets_::Set::UsedBy::Reference


class RoutingPolicy::Sets::Etag::Sets_::Set::Attached : public ydk::Entity
{
    public:
        Attached();
        ~Attached();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Binding; //type: RoutingPolicy::Sets::Etag::Sets_::Set::Attached::Binding

        ydk::YList binding;
        
}; // RoutingPolicy::Sets::Etag::Sets_::Set::Attached


class RoutingPolicy::Sets::Etag::Sets_::Set::Attached::Binding : public ydk::Entity
{
    public:
        Binding();
        ~Binding();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf protocol; //type: string
        ydk::YLeaf vrf_name; //type: string
        ydk::YLeaf proto_instance; //type: string
        ydk::YLeaf af_name; //type: AddressFamily
        ydk::YLeaf saf_name; //type: SubAddressFamily
        ydk::YLeaf neighbor_address; //type: string
        ydk::YLeaf neighbor_af_name; //type: AddressFamily
        ydk::YLeaf group_name; //type: string
        ydk::YLeaf direction; //type: AttachPointDirection
        ydk::YLeaf group; //type: Group
        ydk::YLeaf source_protocol; //type: string
        ydk::YLeaf aggregate_network_address; //type: string
        ydk::YLeaf interface_name; //type: string
        ydk::YLeaf instance; //type: string
        ydk::YLeaf area_id; //type: string
        ydk::YLeaf propogate_from; //type: int32
        ydk::YLeaf propogate_to; //type: int32
        ydk::YLeaf route_policy_name; //type: string
        ydk::YLeaf attached_policy; //type: string
        ydk::YLeaf attach_point; //type: string

}; // RoutingPolicy::Sets::Etag::Sets_::Set::Attached::Binding


class RoutingPolicy::Sets::Etag::Unused : public ydk::Entity
{
    public:
        Unused();
        ~Unused();

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

        ydk::YLeafList object; //type: list of  string

}; // RoutingPolicy::Sets::Etag::Unused


class RoutingPolicy::Sets::Etag::Inactive : public ydk::Entity
{
    public:
        Inactive();
        ~Inactive();

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

        ydk::YLeafList object; //type: list of  string

}; // RoutingPolicy::Sets::Etag::Inactive


class RoutingPolicy::Sets::Etag::Active : public ydk::Entity
{
    public:
        Active();
        ~Active();

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

        ydk::YLeafList object; //type: list of  string

}; // RoutingPolicy::Sets::Etag::Active


class RoutingPolicy::Sets::OspfArea : public ydk::Entity
{
    public:
        OspfArea();
        ~OspfArea();

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

        class Sets_; //type: RoutingPolicy::Sets::OspfArea::Sets_
        class Unused; //type: RoutingPolicy::Sets::OspfArea::Unused
        class Inactive; //type: RoutingPolicy::Sets::OspfArea::Inactive
        class Active; //type: RoutingPolicy::Sets::OspfArea::Active

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_policy_repository_oper::RoutingPolicy::Sets::OspfArea::Sets_> sets;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_policy_repository_oper::RoutingPolicy::Sets::OspfArea::Unused> unused;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_policy_repository_oper::RoutingPolicy::Sets::OspfArea::Inactive> inactive;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_policy_repository_oper::RoutingPolicy::Sets::OspfArea::Active> active;
        
}; // RoutingPolicy::Sets::OspfArea


class RoutingPolicy::Sets::OspfArea::Sets_ : public ydk::Entity
{
    public:
        Sets_();
        ~Sets_();

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

        class Set; //type: RoutingPolicy::Sets::OspfArea::Sets_::Set

        ydk::YList set;
        
}; // RoutingPolicy::Sets::OspfArea::Sets_


class RoutingPolicy::Sets::OspfArea::Sets_::Set : public ydk::Entity
{
    public:
        Set();
        ~Set();

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

        ydk::YLeaf set_name; //type: string
        class UsedBy; //type: RoutingPolicy::Sets::OspfArea::Sets_::Set::UsedBy
        class Attached; //type: RoutingPolicy::Sets::OspfArea::Sets_::Set::Attached

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_policy_repository_oper::RoutingPolicy::Sets::OspfArea::Sets_::Set::UsedBy> used_by;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_policy_repository_oper::RoutingPolicy::Sets::OspfArea::Sets_::Set::Attached> attached;
        
}; // RoutingPolicy::Sets::OspfArea::Sets_::Set


class RoutingPolicy::Sets::OspfArea::Sets_::Set::UsedBy : public ydk::Entity
{
    public:
        UsedBy();
        ~UsedBy();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Reference; //type: RoutingPolicy::Sets::OspfArea::Sets_::Set::UsedBy::Reference

        ydk::YList reference;
        
}; // RoutingPolicy::Sets::OspfArea::Sets_::Set::UsedBy


class RoutingPolicy::Sets::OspfArea::Sets_::Set::UsedBy::Reference : public ydk::Entity
{
    public:
        Reference();
        ~Reference();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf route_policy_name; //type: string
        ydk::YLeaf used_directly; //type: boolean
        ydk::YLeaf status; //type: ObjectStatus

}; // RoutingPolicy::Sets::OspfArea::Sets_::Set::UsedBy::Reference


class RoutingPolicy::Sets::OspfArea::Sets_::Set::Attached : public ydk::Entity
{
    public:
        Attached();
        ~Attached();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Binding; //type: RoutingPolicy::Sets::OspfArea::Sets_::Set::Attached::Binding

        ydk::YList binding;
        
}; // RoutingPolicy::Sets::OspfArea::Sets_::Set::Attached


class RoutingPolicy::Sets::OspfArea::Sets_::Set::Attached::Binding : public ydk::Entity
{
    public:
        Binding();
        ~Binding();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf protocol; //type: string
        ydk::YLeaf vrf_name; //type: string
        ydk::YLeaf proto_instance; //type: string
        ydk::YLeaf af_name; //type: AddressFamily
        ydk::YLeaf saf_name; //type: SubAddressFamily
        ydk::YLeaf neighbor_address; //type: string
        ydk::YLeaf neighbor_af_name; //type: AddressFamily
        ydk::YLeaf group_name; //type: string
        ydk::YLeaf direction; //type: AttachPointDirection
        ydk::YLeaf group; //type: Group
        ydk::YLeaf source_protocol; //type: string
        ydk::YLeaf aggregate_network_address; //type: string
        ydk::YLeaf interface_name; //type: string
        ydk::YLeaf instance; //type: string
        ydk::YLeaf area_id; //type: string
        ydk::YLeaf propogate_from; //type: int32
        ydk::YLeaf propogate_to; //type: int32
        ydk::YLeaf route_policy_name; //type: string
        ydk::YLeaf attached_policy; //type: string
        ydk::YLeaf attach_point; //type: string

}; // RoutingPolicy::Sets::OspfArea::Sets_::Set::Attached::Binding


class RoutingPolicy::Sets::OspfArea::Unused : public ydk::Entity
{
    public:
        Unused();
        ~Unused();

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

        ydk::YLeafList object; //type: list of  string

}; // RoutingPolicy::Sets::OspfArea::Unused


class RoutingPolicy::Sets::OspfArea::Inactive : public ydk::Entity
{
    public:
        Inactive();
        ~Inactive();

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

        ydk::YLeafList object; //type: list of  string

}; // RoutingPolicy::Sets::OspfArea::Inactive


class RoutingPolicy::Sets::OspfArea::Active : public ydk::Entity
{
    public:
        Active();
        ~Active();

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

        ydk::YLeafList object; //type: list of  string

}; // RoutingPolicy::Sets::OspfArea::Active


class RoutingPolicy::Sets::ExtendedCommunityOpaque : public ydk::Entity
{
    public:
        ExtendedCommunityOpaque();
        ~ExtendedCommunityOpaque();

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

        class Sets_; //type: RoutingPolicy::Sets::ExtendedCommunityOpaque::Sets_
        class Unused; //type: RoutingPolicy::Sets::ExtendedCommunityOpaque::Unused
        class Inactive; //type: RoutingPolicy::Sets::ExtendedCommunityOpaque::Inactive
        class Active; //type: RoutingPolicy::Sets::ExtendedCommunityOpaque::Active

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_policy_repository_oper::RoutingPolicy::Sets::ExtendedCommunityOpaque::Sets_> sets;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_policy_repository_oper::RoutingPolicy::Sets::ExtendedCommunityOpaque::Unused> unused;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_policy_repository_oper::RoutingPolicy::Sets::ExtendedCommunityOpaque::Inactive> inactive;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_policy_repository_oper::RoutingPolicy::Sets::ExtendedCommunityOpaque::Active> active;
        
}; // RoutingPolicy::Sets::ExtendedCommunityOpaque


class RoutingPolicy::Sets::ExtendedCommunityOpaque::Sets_ : public ydk::Entity
{
    public:
        Sets_();
        ~Sets_();

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

        class Set; //type: RoutingPolicy::Sets::ExtendedCommunityOpaque::Sets_::Set

        ydk::YList set;
        
}; // RoutingPolicy::Sets::ExtendedCommunityOpaque::Sets_


class RoutingPolicy::Sets::ExtendedCommunityOpaque::Sets_::Set : public ydk::Entity
{
    public:
        Set();
        ~Set();

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

        ydk::YLeaf set_name; //type: string
        class UsedBy; //type: RoutingPolicy::Sets::ExtendedCommunityOpaque::Sets_::Set::UsedBy
        class Attached; //type: RoutingPolicy::Sets::ExtendedCommunityOpaque::Sets_::Set::Attached

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_policy_repository_oper::RoutingPolicy::Sets::ExtendedCommunityOpaque::Sets_::Set::UsedBy> used_by;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_policy_repository_oper::RoutingPolicy::Sets::ExtendedCommunityOpaque::Sets_::Set::Attached> attached;
        
}; // RoutingPolicy::Sets::ExtendedCommunityOpaque::Sets_::Set


class RoutingPolicy::Sets::ExtendedCommunityOpaque::Sets_::Set::UsedBy : public ydk::Entity
{
    public:
        UsedBy();
        ~UsedBy();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Reference; //type: RoutingPolicy::Sets::ExtendedCommunityOpaque::Sets_::Set::UsedBy::Reference

        ydk::YList reference;
        
}; // RoutingPolicy::Sets::ExtendedCommunityOpaque::Sets_::Set::UsedBy


class RoutingPolicy::Sets::ExtendedCommunityOpaque::Sets_::Set::UsedBy::Reference : public ydk::Entity
{
    public:
        Reference();
        ~Reference();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf route_policy_name; //type: string
        ydk::YLeaf used_directly; //type: boolean
        ydk::YLeaf status; //type: ObjectStatus

}; // RoutingPolicy::Sets::ExtendedCommunityOpaque::Sets_::Set::UsedBy::Reference


class RoutingPolicy::Sets::ExtendedCommunityOpaque::Sets_::Set::Attached : public ydk::Entity
{
    public:
        Attached();
        ~Attached();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Binding; //type: RoutingPolicy::Sets::ExtendedCommunityOpaque::Sets_::Set::Attached::Binding

        ydk::YList binding;
        
}; // RoutingPolicy::Sets::ExtendedCommunityOpaque::Sets_::Set::Attached


class RoutingPolicy::Sets::ExtendedCommunityOpaque::Sets_::Set::Attached::Binding : public ydk::Entity
{
    public:
        Binding();
        ~Binding();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf protocol; //type: string
        ydk::YLeaf vrf_name; //type: string
        ydk::YLeaf proto_instance; //type: string
        ydk::YLeaf af_name; //type: AddressFamily
        ydk::YLeaf saf_name; //type: SubAddressFamily
        ydk::YLeaf neighbor_address; //type: string
        ydk::YLeaf neighbor_af_name; //type: AddressFamily
        ydk::YLeaf group_name; //type: string
        ydk::YLeaf direction; //type: AttachPointDirection
        ydk::YLeaf group; //type: Group
        ydk::YLeaf source_protocol; //type: string
        ydk::YLeaf aggregate_network_address; //type: string
        ydk::YLeaf interface_name; //type: string
        ydk::YLeaf instance; //type: string
        ydk::YLeaf area_id; //type: string
        ydk::YLeaf propogate_from; //type: int32
        ydk::YLeaf propogate_to; //type: int32
        ydk::YLeaf route_policy_name; //type: string
        ydk::YLeaf attached_policy; //type: string
        ydk::YLeaf attach_point; //type: string

}; // RoutingPolicy::Sets::ExtendedCommunityOpaque::Sets_::Set::Attached::Binding


class RoutingPolicy::Sets::ExtendedCommunityOpaque::Unused : public ydk::Entity
{
    public:
        Unused();
        ~Unused();

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

        ydk::YLeafList object; //type: list of  string

}; // RoutingPolicy::Sets::ExtendedCommunityOpaque::Unused


class RoutingPolicy::Sets::ExtendedCommunityOpaque::Inactive : public ydk::Entity
{
    public:
        Inactive();
        ~Inactive();

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

        ydk::YLeafList object; //type: list of  string

}; // RoutingPolicy::Sets::ExtendedCommunityOpaque::Inactive


class RoutingPolicy::Sets::ExtendedCommunityOpaque::Active : public ydk::Entity
{
    public:
        Active();
        ~Active();

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

        ydk::YLeafList object; //type: list of  string

}; // RoutingPolicy::Sets::ExtendedCommunityOpaque::Active


class RoutingPolicy::Sets::ExtendedCommunitySegNh : public ydk::Entity
{
    public:
        ExtendedCommunitySegNh();
        ~ExtendedCommunitySegNh();

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

        class Sets_; //type: RoutingPolicy::Sets::ExtendedCommunitySegNh::Sets_
        class Unused; //type: RoutingPolicy::Sets::ExtendedCommunitySegNh::Unused
        class Inactive; //type: RoutingPolicy::Sets::ExtendedCommunitySegNh::Inactive
        class Active; //type: RoutingPolicy::Sets::ExtendedCommunitySegNh::Active

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_policy_repository_oper::RoutingPolicy::Sets::ExtendedCommunitySegNh::Sets_> sets;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_policy_repository_oper::RoutingPolicy::Sets::ExtendedCommunitySegNh::Unused> unused;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_policy_repository_oper::RoutingPolicy::Sets::ExtendedCommunitySegNh::Inactive> inactive;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_policy_repository_oper::RoutingPolicy::Sets::ExtendedCommunitySegNh::Active> active;
        
}; // RoutingPolicy::Sets::ExtendedCommunitySegNh


class RoutingPolicy::Sets::ExtendedCommunitySegNh::Sets_ : public ydk::Entity
{
    public:
        Sets_();
        ~Sets_();

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

        class Set; //type: RoutingPolicy::Sets::ExtendedCommunitySegNh::Sets_::Set

        ydk::YList set;
        
}; // RoutingPolicy::Sets::ExtendedCommunitySegNh::Sets_


class RoutingPolicy::Sets::ExtendedCommunitySegNh::Sets_::Set : public ydk::Entity
{
    public:
        Set();
        ~Set();

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

        ydk::YLeaf set_name; //type: string
        class UsedBy; //type: RoutingPolicy::Sets::ExtendedCommunitySegNh::Sets_::Set::UsedBy
        class Attached; //type: RoutingPolicy::Sets::ExtendedCommunitySegNh::Sets_::Set::Attached

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_policy_repository_oper::RoutingPolicy::Sets::ExtendedCommunitySegNh::Sets_::Set::UsedBy> used_by;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_policy_repository_oper::RoutingPolicy::Sets::ExtendedCommunitySegNh::Sets_::Set::Attached> attached;
        
}; // RoutingPolicy::Sets::ExtendedCommunitySegNh::Sets_::Set


class RoutingPolicy::Sets::ExtendedCommunitySegNh::Sets_::Set::UsedBy : public ydk::Entity
{
    public:
        UsedBy();
        ~UsedBy();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Reference; //type: RoutingPolicy::Sets::ExtendedCommunitySegNh::Sets_::Set::UsedBy::Reference

        ydk::YList reference;
        
}; // RoutingPolicy::Sets::ExtendedCommunitySegNh::Sets_::Set::UsedBy


class RoutingPolicy::Sets::ExtendedCommunitySegNh::Sets_::Set::UsedBy::Reference : public ydk::Entity
{
    public:
        Reference();
        ~Reference();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf route_policy_name; //type: string
        ydk::YLeaf used_directly; //type: boolean
        ydk::YLeaf status; //type: ObjectStatus

}; // RoutingPolicy::Sets::ExtendedCommunitySegNh::Sets_::Set::UsedBy::Reference


class RoutingPolicy::Sets::ExtendedCommunitySegNh::Sets_::Set::Attached : public ydk::Entity
{
    public:
        Attached();
        ~Attached();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Binding; //type: RoutingPolicy::Sets::ExtendedCommunitySegNh::Sets_::Set::Attached::Binding

        ydk::YList binding;
        
}; // RoutingPolicy::Sets::ExtendedCommunitySegNh::Sets_::Set::Attached


class RoutingPolicy::Sets::ExtendedCommunitySegNh::Sets_::Set::Attached::Binding : public ydk::Entity
{
    public:
        Binding();
        ~Binding();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf protocol; //type: string
        ydk::YLeaf vrf_name; //type: string
        ydk::YLeaf proto_instance; //type: string
        ydk::YLeaf af_name; //type: AddressFamily
        ydk::YLeaf saf_name; //type: SubAddressFamily
        ydk::YLeaf neighbor_address; //type: string
        ydk::YLeaf neighbor_af_name; //type: AddressFamily
        ydk::YLeaf group_name; //type: string
        ydk::YLeaf direction; //type: AttachPointDirection
        ydk::YLeaf group; //type: Group
        ydk::YLeaf source_protocol; //type: string
        ydk::YLeaf aggregate_network_address; //type: string
        ydk::YLeaf interface_name; //type: string
        ydk::YLeaf instance; //type: string
        ydk::YLeaf area_id; //type: string
        ydk::YLeaf propogate_from; //type: int32
        ydk::YLeaf propogate_to; //type: int32
        ydk::YLeaf route_policy_name; //type: string
        ydk::YLeaf attached_policy; //type: string
        ydk::YLeaf attach_point; //type: string

}; // RoutingPolicy::Sets::ExtendedCommunitySegNh::Sets_::Set::Attached::Binding


class RoutingPolicy::Sets::ExtendedCommunitySegNh::Unused : public ydk::Entity
{
    public:
        Unused();
        ~Unused();

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

        ydk::YLeafList object; //type: list of  string

}; // RoutingPolicy::Sets::ExtendedCommunitySegNh::Unused


class RoutingPolicy::Sets::ExtendedCommunitySegNh::Inactive : public ydk::Entity
{
    public:
        Inactive();
        ~Inactive();

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

        ydk::YLeafList object; //type: list of  string

}; // RoutingPolicy::Sets::ExtendedCommunitySegNh::Inactive


class RoutingPolicy::Sets::ExtendedCommunitySegNh::Active : public ydk::Entity
{
    public:
        Active();
        ~Active();

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

        ydk::YLeafList object; //type: list of  string

}; // RoutingPolicy::Sets::ExtendedCommunitySegNh::Active


class RoutingPolicy::Sets::ExtendedCommunitySoo : public ydk::Entity
{
    public:
        ExtendedCommunitySoo();
        ~ExtendedCommunitySoo();

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

        class Sets_; //type: RoutingPolicy::Sets::ExtendedCommunitySoo::Sets_
        class Unused; //type: RoutingPolicy::Sets::ExtendedCommunitySoo::Unused
        class Inactive; //type: RoutingPolicy::Sets::ExtendedCommunitySoo::Inactive
        class Active; //type: RoutingPolicy::Sets::ExtendedCommunitySoo::Active

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_policy_repository_oper::RoutingPolicy::Sets::ExtendedCommunitySoo::Sets_> sets;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_policy_repository_oper::RoutingPolicy::Sets::ExtendedCommunitySoo::Unused> unused;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_policy_repository_oper::RoutingPolicy::Sets::ExtendedCommunitySoo::Inactive> inactive;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_policy_repository_oper::RoutingPolicy::Sets::ExtendedCommunitySoo::Active> active;
        
}; // RoutingPolicy::Sets::ExtendedCommunitySoo


class RoutingPolicy::Sets::ExtendedCommunitySoo::Sets_ : public ydk::Entity
{
    public:
        Sets_();
        ~Sets_();

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

        class Set; //type: RoutingPolicy::Sets::ExtendedCommunitySoo::Sets_::Set

        ydk::YList set;
        
}; // RoutingPolicy::Sets::ExtendedCommunitySoo::Sets_


class RoutingPolicy::Sets::ExtendedCommunitySoo::Sets_::Set : public ydk::Entity
{
    public:
        Set();
        ~Set();

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

        ydk::YLeaf set_name; //type: string
        class UsedBy; //type: RoutingPolicy::Sets::ExtendedCommunitySoo::Sets_::Set::UsedBy
        class Attached; //type: RoutingPolicy::Sets::ExtendedCommunitySoo::Sets_::Set::Attached

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_policy_repository_oper::RoutingPolicy::Sets::ExtendedCommunitySoo::Sets_::Set::UsedBy> used_by;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_policy_repository_oper::RoutingPolicy::Sets::ExtendedCommunitySoo::Sets_::Set::Attached> attached;
        
}; // RoutingPolicy::Sets::ExtendedCommunitySoo::Sets_::Set


class RoutingPolicy::Sets::ExtendedCommunitySoo::Sets_::Set::UsedBy : public ydk::Entity
{
    public:
        UsedBy();
        ~UsedBy();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Reference; //type: RoutingPolicy::Sets::ExtendedCommunitySoo::Sets_::Set::UsedBy::Reference

        ydk::YList reference;
        
}; // RoutingPolicy::Sets::ExtendedCommunitySoo::Sets_::Set::UsedBy


class RoutingPolicy::Sets::ExtendedCommunitySoo::Sets_::Set::UsedBy::Reference : public ydk::Entity
{
    public:
        Reference();
        ~Reference();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf route_policy_name; //type: string
        ydk::YLeaf used_directly; //type: boolean
        ydk::YLeaf status; //type: ObjectStatus

}; // RoutingPolicy::Sets::ExtendedCommunitySoo::Sets_::Set::UsedBy::Reference


class RoutingPolicy::Sets::ExtendedCommunitySoo::Sets_::Set::Attached : public ydk::Entity
{
    public:
        Attached();
        ~Attached();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Binding; //type: RoutingPolicy::Sets::ExtendedCommunitySoo::Sets_::Set::Attached::Binding

        ydk::YList binding;
        
}; // RoutingPolicy::Sets::ExtendedCommunitySoo::Sets_::Set::Attached


class RoutingPolicy::Sets::ExtendedCommunitySoo::Sets_::Set::Attached::Binding : public ydk::Entity
{
    public:
        Binding();
        ~Binding();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf protocol; //type: string
        ydk::YLeaf vrf_name; //type: string
        ydk::YLeaf proto_instance; //type: string
        ydk::YLeaf af_name; //type: AddressFamily
        ydk::YLeaf saf_name; //type: SubAddressFamily
        ydk::YLeaf neighbor_address; //type: string
        ydk::YLeaf neighbor_af_name; //type: AddressFamily
        ydk::YLeaf group_name; //type: string
        ydk::YLeaf direction; //type: AttachPointDirection
        ydk::YLeaf group; //type: Group
        ydk::YLeaf source_protocol; //type: string
        ydk::YLeaf aggregate_network_address; //type: string
        ydk::YLeaf interface_name; //type: string
        ydk::YLeaf instance; //type: string
        ydk::YLeaf area_id; //type: string
        ydk::YLeaf propogate_from; //type: int32
        ydk::YLeaf propogate_to; //type: int32
        ydk::YLeaf route_policy_name; //type: string
        ydk::YLeaf attached_policy; //type: string
        ydk::YLeaf attach_point; //type: string

}; // RoutingPolicy::Sets::ExtendedCommunitySoo::Sets_::Set::Attached::Binding


class RoutingPolicy::Sets::ExtendedCommunitySoo::Unused : public ydk::Entity
{
    public:
        Unused();
        ~Unused();

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

        ydk::YLeafList object; //type: list of  string

}; // RoutingPolicy::Sets::ExtendedCommunitySoo::Unused


class RoutingPolicy::Sets::ExtendedCommunitySoo::Inactive : public ydk::Entity
{
    public:
        Inactive();
        ~Inactive();

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

        ydk::YLeafList object; //type: list of  string

}; // RoutingPolicy::Sets::ExtendedCommunitySoo::Inactive


class RoutingPolicy::Sets::ExtendedCommunitySoo::Active : public ydk::Entity
{
    public:
        Active();
        ~Active();

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

        ydk::YLeafList object; //type: list of  string

}; // RoutingPolicy::Sets::ExtendedCommunitySoo::Active


class RoutingPolicy::Sets::Tag : public ydk::Entity
{
    public:
        Tag();
        ~Tag();

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

        class Sets_; //type: RoutingPolicy::Sets::Tag::Sets_
        class Unused; //type: RoutingPolicy::Sets::Tag::Unused
        class Inactive; //type: RoutingPolicy::Sets::Tag::Inactive
        class Active; //type: RoutingPolicy::Sets::Tag::Active

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_policy_repository_oper::RoutingPolicy::Sets::Tag::Sets_> sets;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_policy_repository_oper::RoutingPolicy::Sets::Tag::Unused> unused;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_policy_repository_oper::RoutingPolicy::Sets::Tag::Inactive> inactive;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_policy_repository_oper::RoutingPolicy::Sets::Tag::Active> active;
        
}; // RoutingPolicy::Sets::Tag


class RoutingPolicy::Sets::Tag::Sets_ : public ydk::Entity
{
    public:
        Sets_();
        ~Sets_();

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

        class Set; //type: RoutingPolicy::Sets::Tag::Sets_::Set

        ydk::YList set;
        
}; // RoutingPolicy::Sets::Tag::Sets_


class RoutingPolicy::Sets::Tag::Sets_::Set : public ydk::Entity
{
    public:
        Set();
        ~Set();

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

        ydk::YLeaf set_name; //type: string
        class UsedBy; //type: RoutingPolicy::Sets::Tag::Sets_::Set::UsedBy
        class Attached; //type: RoutingPolicy::Sets::Tag::Sets_::Set::Attached

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_policy_repository_oper::RoutingPolicy::Sets::Tag::Sets_::Set::UsedBy> used_by;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_policy_repository_oper::RoutingPolicy::Sets::Tag::Sets_::Set::Attached> attached;
        
}; // RoutingPolicy::Sets::Tag::Sets_::Set


class RoutingPolicy::Sets::Tag::Sets_::Set::UsedBy : public ydk::Entity
{
    public:
        UsedBy();
        ~UsedBy();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Reference; //type: RoutingPolicy::Sets::Tag::Sets_::Set::UsedBy::Reference

        ydk::YList reference;
        
}; // RoutingPolicy::Sets::Tag::Sets_::Set::UsedBy


class RoutingPolicy::Sets::Tag::Sets_::Set::UsedBy::Reference : public ydk::Entity
{
    public:
        Reference();
        ~Reference();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf route_policy_name; //type: string
        ydk::YLeaf used_directly; //type: boolean
        ydk::YLeaf status; //type: ObjectStatus

}; // RoutingPolicy::Sets::Tag::Sets_::Set::UsedBy::Reference


class RoutingPolicy::Sets::Tag::Sets_::Set::Attached : public ydk::Entity
{
    public:
        Attached();
        ~Attached();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Binding; //type: RoutingPolicy::Sets::Tag::Sets_::Set::Attached::Binding

        ydk::YList binding;
        
}; // RoutingPolicy::Sets::Tag::Sets_::Set::Attached


class RoutingPolicy::Sets::Tag::Sets_::Set::Attached::Binding : public ydk::Entity
{
    public:
        Binding();
        ~Binding();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf protocol; //type: string
        ydk::YLeaf vrf_name; //type: string
        ydk::YLeaf proto_instance; //type: string
        ydk::YLeaf af_name; //type: AddressFamily
        ydk::YLeaf saf_name; //type: SubAddressFamily
        ydk::YLeaf neighbor_address; //type: string
        ydk::YLeaf neighbor_af_name; //type: AddressFamily
        ydk::YLeaf group_name; //type: string
        ydk::YLeaf direction; //type: AttachPointDirection
        ydk::YLeaf group; //type: Group
        ydk::YLeaf source_protocol; //type: string
        ydk::YLeaf aggregate_network_address; //type: string
        ydk::YLeaf interface_name; //type: string
        ydk::YLeaf instance; //type: string
        ydk::YLeaf area_id; //type: string
        ydk::YLeaf propogate_from; //type: int32
        ydk::YLeaf propogate_to; //type: int32
        ydk::YLeaf route_policy_name; //type: string
        ydk::YLeaf attached_policy; //type: string
        ydk::YLeaf attach_point; //type: string

}; // RoutingPolicy::Sets::Tag::Sets_::Set::Attached::Binding


class RoutingPolicy::Sets::Tag::Unused : public ydk::Entity
{
    public:
        Unused();
        ~Unused();

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

        ydk::YLeafList object; //type: list of  string

}; // RoutingPolicy::Sets::Tag::Unused


class RoutingPolicy::Sets::Tag::Inactive : public ydk::Entity
{
    public:
        Inactive();
        ~Inactive();

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

        ydk::YLeafList object; //type: list of  string

}; // RoutingPolicy::Sets::Tag::Inactive


class RoutingPolicy::Sets::Tag::Active : public ydk::Entity
{
    public:
        Active();
        ~Active();

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

        ydk::YLeafList object; //type: list of  string

}; // RoutingPolicy::Sets::Tag::Active


class RoutingPolicy::Sets::Prefix : public ydk::Entity
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
        std::string get_absolute_path() const override;

        class Sets_; //type: RoutingPolicy::Sets::Prefix::Sets_
        class Unused; //type: RoutingPolicy::Sets::Prefix::Unused
        class Inactive; //type: RoutingPolicy::Sets::Prefix::Inactive
        class Active; //type: RoutingPolicy::Sets::Prefix::Active

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_policy_repository_oper::RoutingPolicy::Sets::Prefix::Sets_> sets;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_policy_repository_oper::RoutingPolicy::Sets::Prefix::Unused> unused;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_policy_repository_oper::RoutingPolicy::Sets::Prefix::Inactive> inactive;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_policy_repository_oper::RoutingPolicy::Sets::Prefix::Active> active;
        
}; // RoutingPolicy::Sets::Prefix


class RoutingPolicy::Sets::Prefix::Sets_ : public ydk::Entity
{
    public:
        Sets_();
        ~Sets_();

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

        class Set; //type: RoutingPolicy::Sets::Prefix::Sets_::Set

        ydk::YList set;
        
}; // RoutingPolicy::Sets::Prefix::Sets_


class RoutingPolicy::Sets::Prefix::Sets_::Set : public ydk::Entity
{
    public:
        Set();
        ~Set();

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

        ydk::YLeaf set_name; //type: string
        class UsedBy; //type: RoutingPolicy::Sets::Prefix::Sets_::Set::UsedBy
        class Attached; //type: RoutingPolicy::Sets::Prefix::Sets_::Set::Attached

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_policy_repository_oper::RoutingPolicy::Sets::Prefix::Sets_::Set::UsedBy> used_by;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_policy_repository_oper::RoutingPolicy::Sets::Prefix::Sets_::Set::Attached> attached;
        
}; // RoutingPolicy::Sets::Prefix::Sets_::Set


class RoutingPolicy::Sets::Prefix::Sets_::Set::UsedBy : public ydk::Entity
{
    public:
        UsedBy();
        ~UsedBy();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Reference; //type: RoutingPolicy::Sets::Prefix::Sets_::Set::UsedBy::Reference

        ydk::YList reference;
        
}; // RoutingPolicy::Sets::Prefix::Sets_::Set::UsedBy


class RoutingPolicy::Sets::Prefix::Sets_::Set::UsedBy::Reference : public ydk::Entity
{
    public:
        Reference();
        ~Reference();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf route_policy_name; //type: string
        ydk::YLeaf used_directly; //type: boolean
        ydk::YLeaf status; //type: ObjectStatus

}; // RoutingPolicy::Sets::Prefix::Sets_::Set::UsedBy::Reference


class RoutingPolicy::Sets::Prefix::Sets_::Set::Attached : public ydk::Entity
{
    public:
        Attached();
        ~Attached();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Binding; //type: RoutingPolicy::Sets::Prefix::Sets_::Set::Attached::Binding

        ydk::YList binding;
        
}; // RoutingPolicy::Sets::Prefix::Sets_::Set::Attached


class RoutingPolicy::Sets::Prefix::Sets_::Set::Attached::Binding : public ydk::Entity
{
    public:
        Binding();
        ~Binding();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf protocol; //type: string
        ydk::YLeaf vrf_name; //type: string
        ydk::YLeaf proto_instance; //type: string
        ydk::YLeaf af_name; //type: AddressFamily
        ydk::YLeaf saf_name; //type: SubAddressFamily
        ydk::YLeaf neighbor_address; //type: string
        ydk::YLeaf neighbor_af_name; //type: AddressFamily
        ydk::YLeaf group_name; //type: string
        ydk::YLeaf direction; //type: AttachPointDirection
        ydk::YLeaf group; //type: Group
        ydk::YLeaf source_protocol; //type: string
        ydk::YLeaf aggregate_network_address; //type: string
        ydk::YLeaf interface_name; //type: string
        ydk::YLeaf instance; //type: string
        ydk::YLeaf area_id; //type: string
        ydk::YLeaf propogate_from; //type: int32
        ydk::YLeaf propogate_to; //type: int32
        ydk::YLeaf route_policy_name; //type: string
        ydk::YLeaf attached_policy; //type: string
        ydk::YLeaf attach_point; //type: string

}; // RoutingPolicy::Sets::Prefix::Sets_::Set::Attached::Binding


class RoutingPolicy::Sets::Prefix::Unused : public ydk::Entity
{
    public:
        Unused();
        ~Unused();

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

        ydk::YLeafList object; //type: list of  string

}; // RoutingPolicy::Sets::Prefix::Unused


class RoutingPolicy::Sets::Prefix::Inactive : public ydk::Entity
{
    public:
        Inactive();
        ~Inactive();

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

        ydk::YLeafList object; //type: list of  string

}; // RoutingPolicy::Sets::Prefix::Inactive


class RoutingPolicy::Sets::Prefix::Active : public ydk::Entity
{
    public:
        Active();
        ~Active();

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

        ydk::YLeafList object; //type: list of  string

}; // RoutingPolicy::Sets::Prefix::Active


class RoutingPolicy::Sets::Community : public ydk::Entity
{
    public:
        Community();
        ~Community();

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

        class Sets_; //type: RoutingPolicy::Sets::Community::Sets_
        class Unused; //type: RoutingPolicy::Sets::Community::Unused
        class Inactive; //type: RoutingPolicy::Sets::Community::Inactive
        class Active; //type: RoutingPolicy::Sets::Community::Active

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_policy_repository_oper::RoutingPolicy::Sets::Community::Sets_> sets;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_policy_repository_oper::RoutingPolicy::Sets::Community::Unused> unused;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_policy_repository_oper::RoutingPolicy::Sets::Community::Inactive> inactive;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_policy_repository_oper::RoutingPolicy::Sets::Community::Active> active;
        
}; // RoutingPolicy::Sets::Community


class RoutingPolicy::Sets::Community::Sets_ : public ydk::Entity
{
    public:
        Sets_();
        ~Sets_();

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

        class Set; //type: RoutingPolicy::Sets::Community::Sets_::Set

        ydk::YList set;
        
}; // RoutingPolicy::Sets::Community::Sets_


class RoutingPolicy::Sets::Community::Sets_::Set : public ydk::Entity
{
    public:
        Set();
        ~Set();

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

        ydk::YLeaf set_name; //type: string
        class UsedBy; //type: RoutingPolicy::Sets::Community::Sets_::Set::UsedBy
        class Attached; //type: RoutingPolicy::Sets::Community::Sets_::Set::Attached

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_policy_repository_oper::RoutingPolicy::Sets::Community::Sets_::Set::UsedBy> used_by;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_policy_repository_oper::RoutingPolicy::Sets::Community::Sets_::Set::Attached> attached;
        
}; // RoutingPolicy::Sets::Community::Sets_::Set


class RoutingPolicy::Sets::Community::Sets_::Set::UsedBy : public ydk::Entity
{
    public:
        UsedBy();
        ~UsedBy();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Reference; //type: RoutingPolicy::Sets::Community::Sets_::Set::UsedBy::Reference

        ydk::YList reference;
        
}; // RoutingPolicy::Sets::Community::Sets_::Set::UsedBy


class RoutingPolicy::Sets::Community::Sets_::Set::UsedBy::Reference : public ydk::Entity
{
    public:
        Reference();
        ~Reference();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf route_policy_name; //type: string
        ydk::YLeaf used_directly; //type: boolean
        ydk::YLeaf status; //type: ObjectStatus

}; // RoutingPolicy::Sets::Community::Sets_::Set::UsedBy::Reference


class RoutingPolicy::Sets::Community::Sets_::Set::Attached : public ydk::Entity
{
    public:
        Attached();
        ~Attached();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Binding; //type: RoutingPolicy::Sets::Community::Sets_::Set::Attached::Binding

        ydk::YList binding;
        
}; // RoutingPolicy::Sets::Community::Sets_::Set::Attached


class RoutingPolicy::Sets::Community::Sets_::Set::Attached::Binding : public ydk::Entity
{
    public:
        Binding();
        ~Binding();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf protocol; //type: string
        ydk::YLeaf vrf_name; //type: string
        ydk::YLeaf proto_instance; //type: string
        ydk::YLeaf af_name; //type: AddressFamily
        ydk::YLeaf saf_name; //type: SubAddressFamily
        ydk::YLeaf neighbor_address; //type: string
        ydk::YLeaf neighbor_af_name; //type: AddressFamily
        ydk::YLeaf group_name; //type: string
        ydk::YLeaf direction; //type: AttachPointDirection
        ydk::YLeaf group; //type: Group
        ydk::YLeaf source_protocol; //type: string
        ydk::YLeaf aggregate_network_address; //type: string
        ydk::YLeaf interface_name; //type: string
        ydk::YLeaf instance; //type: string
        ydk::YLeaf area_id; //type: string
        ydk::YLeaf propogate_from; //type: int32
        ydk::YLeaf propogate_to; //type: int32
        ydk::YLeaf route_policy_name; //type: string
        ydk::YLeaf attached_policy; //type: string
        ydk::YLeaf attach_point; //type: string

}; // RoutingPolicy::Sets::Community::Sets_::Set::Attached::Binding


class RoutingPolicy::Sets::Community::Unused : public ydk::Entity
{
    public:
        Unused();
        ~Unused();

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

        ydk::YLeafList object; //type: list of  string

}; // RoutingPolicy::Sets::Community::Unused


class RoutingPolicy::Sets::Community::Inactive : public ydk::Entity
{
    public:
        Inactive();
        ~Inactive();

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

        ydk::YLeafList object; //type: list of  string

}; // RoutingPolicy::Sets::Community::Inactive


class RoutingPolicy::Sets::Community::Active : public ydk::Entity
{
    public:
        Active();
        ~Active();

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

        ydk::YLeafList object; //type: list of  string

}; // RoutingPolicy::Sets::Community::Active


class RoutingPolicy::Sets::AsPath : public ydk::Entity
{
    public:
        AsPath();
        ~AsPath();

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

        class Sets_; //type: RoutingPolicy::Sets::AsPath::Sets_
        class Unused; //type: RoutingPolicy::Sets::AsPath::Unused
        class Inactive; //type: RoutingPolicy::Sets::AsPath::Inactive
        class Active; //type: RoutingPolicy::Sets::AsPath::Active

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_policy_repository_oper::RoutingPolicy::Sets::AsPath::Sets_> sets;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_policy_repository_oper::RoutingPolicy::Sets::AsPath::Unused> unused;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_policy_repository_oper::RoutingPolicy::Sets::AsPath::Inactive> inactive;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_policy_repository_oper::RoutingPolicy::Sets::AsPath::Active> active;
        
}; // RoutingPolicy::Sets::AsPath


class RoutingPolicy::Sets::AsPath::Sets_ : public ydk::Entity
{
    public:
        Sets_();
        ~Sets_();

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

        class Set; //type: RoutingPolicy::Sets::AsPath::Sets_::Set

        ydk::YList set;
        
}; // RoutingPolicy::Sets::AsPath::Sets_


class RoutingPolicy::Sets::AsPath::Sets_::Set : public ydk::Entity
{
    public:
        Set();
        ~Set();

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

        ydk::YLeaf set_name; //type: string
        class UsedBy; //type: RoutingPolicy::Sets::AsPath::Sets_::Set::UsedBy
        class Attached; //type: RoutingPolicy::Sets::AsPath::Sets_::Set::Attached

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_policy_repository_oper::RoutingPolicy::Sets::AsPath::Sets_::Set::UsedBy> used_by;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_policy_repository_oper::RoutingPolicy::Sets::AsPath::Sets_::Set::Attached> attached;
        
}; // RoutingPolicy::Sets::AsPath::Sets_::Set


class RoutingPolicy::Sets::AsPath::Sets_::Set::UsedBy : public ydk::Entity
{
    public:
        UsedBy();
        ~UsedBy();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Reference; //type: RoutingPolicy::Sets::AsPath::Sets_::Set::UsedBy::Reference

        ydk::YList reference;
        
}; // RoutingPolicy::Sets::AsPath::Sets_::Set::UsedBy


class RoutingPolicy::Sets::AsPath::Sets_::Set::UsedBy::Reference : public ydk::Entity
{
    public:
        Reference();
        ~Reference();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf route_policy_name; //type: string
        ydk::YLeaf used_directly; //type: boolean
        ydk::YLeaf status; //type: ObjectStatus

}; // RoutingPolicy::Sets::AsPath::Sets_::Set::UsedBy::Reference


class RoutingPolicy::Sets::AsPath::Sets_::Set::Attached : public ydk::Entity
{
    public:
        Attached();
        ~Attached();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Binding; //type: RoutingPolicy::Sets::AsPath::Sets_::Set::Attached::Binding

        ydk::YList binding;
        
}; // RoutingPolicy::Sets::AsPath::Sets_::Set::Attached


class RoutingPolicy::Sets::AsPath::Sets_::Set::Attached::Binding : public ydk::Entity
{
    public:
        Binding();
        ~Binding();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf protocol; //type: string
        ydk::YLeaf vrf_name; //type: string
        ydk::YLeaf proto_instance; //type: string
        ydk::YLeaf af_name; //type: AddressFamily
        ydk::YLeaf saf_name; //type: SubAddressFamily
        ydk::YLeaf neighbor_address; //type: string
        ydk::YLeaf neighbor_af_name; //type: AddressFamily
        ydk::YLeaf group_name; //type: string
        ydk::YLeaf direction; //type: AttachPointDirection
        ydk::YLeaf group; //type: Group
        ydk::YLeaf source_protocol; //type: string
        ydk::YLeaf aggregate_network_address; //type: string
        ydk::YLeaf interface_name; //type: string
        ydk::YLeaf instance; //type: string
        ydk::YLeaf area_id; //type: string
        ydk::YLeaf propogate_from; //type: int32
        ydk::YLeaf propogate_to; //type: int32
        ydk::YLeaf route_policy_name; //type: string
        ydk::YLeaf attached_policy; //type: string
        ydk::YLeaf attach_point; //type: string

}; // RoutingPolicy::Sets::AsPath::Sets_::Set::Attached::Binding


class RoutingPolicy::Sets::AsPath::Unused : public ydk::Entity
{
    public:
        Unused();
        ~Unused();

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

        ydk::YLeafList object; //type: list of  string

}; // RoutingPolicy::Sets::AsPath::Unused


class RoutingPolicy::Sets::AsPath::Inactive : public ydk::Entity
{
    public:
        Inactive();
        ~Inactive();

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

        ydk::YLeafList object; //type: list of  string

}; // RoutingPolicy::Sets::AsPath::Inactive


class RoutingPolicy::Sets::AsPath::Active : public ydk::Entity
{
    public:
        Active();
        ~Active();

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

        ydk::YLeafList object; //type: list of  string

}; // RoutingPolicy::Sets::AsPath::Active


class RoutingPolicy::Sets::LargeCommunity : public ydk::Entity
{
    public:
        LargeCommunity();
        ~LargeCommunity();

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

        class Sets_; //type: RoutingPolicy::Sets::LargeCommunity::Sets_
        class Unused; //type: RoutingPolicy::Sets::LargeCommunity::Unused
        class Inactive; //type: RoutingPolicy::Sets::LargeCommunity::Inactive
        class Active; //type: RoutingPolicy::Sets::LargeCommunity::Active

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_policy_repository_oper::RoutingPolicy::Sets::LargeCommunity::Sets_> sets;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_policy_repository_oper::RoutingPolicy::Sets::LargeCommunity::Unused> unused;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_policy_repository_oper::RoutingPolicy::Sets::LargeCommunity::Inactive> inactive;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_policy_repository_oper::RoutingPolicy::Sets::LargeCommunity::Active> active;
        
}; // RoutingPolicy::Sets::LargeCommunity


class RoutingPolicy::Sets::LargeCommunity::Sets_ : public ydk::Entity
{
    public:
        Sets_();
        ~Sets_();

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

        class Set; //type: RoutingPolicy::Sets::LargeCommunity::Sets_::Set

        ydk::YList set;
        
}; // RoutingPolicy::Sets::LargeCommunity::Sets_


class RoutingPolicy::Sets::LargeCommunity::Sets_::Set : public ydk::Entity
{
    public:
        Set();
        ~Set();

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

        ydk::YLeaf set_name; //type: string
        class UsedBy; //type: RoutingPolicy::Sets::LargeCommunity::Sets_::Set::UsedBy
        class Attached; //type: RoutingPolicy::Sets::LargeCommunity::Sets_::Set::Attached

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_policy_repository_oper::RoutingPolicy::Sets::LargeCommunity::Sets_::Set::UsedBy> used_by;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_policy_repository_oper::RoutingPolicy::Sets::LargeCommunity::Sets_::Set::Attached> attached;
        
}; // RoutingPolicy::Sets::LargeCommunity::Sets_::Set


class RoutingPolicy::Sets::LargeCommunity::Sets_::Set::UsedBy : public ydk::Entity
{
    public:
        UsedBy();
        ~UsedBy();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Reference; //type: RoutingPolicy::Sets::LargeCommunity::Sets_::Set::UsedBy::Reference

        ydk::YList reference;
        
}; // RoutingPolicy::Sets::LargeCommunity::Sets_::Set::UsedBy


class RoutingPolicy::Sets::LargeCommunity::Sets_::Set::UsedBy::Reference : public ydk::Entity
{
    public:
        Reference();
        ~Reference();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf route_policy_name; //type: string
        ydk::YLeaf used_directly; //type: boolean
        ydk::YLeaf status; //type: ObjectStatus

}; // RoutingPolicy::Sets::LargeCommunity::Sets_::Set::UsedBy::Reference


class RoutingPolicy::Sets::LargeCommunity::Sets_::Set::Attached : public ydk::Entity
{
    public:
        Attached();
        ~Attached();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Binding; //type: RoutingPolicy::Sets::LargeCommunity::Sets_::Set::Attached::Binding

        ydk::YList binding;
        
}; // RoutingPolicy::Sets::LargeCommunity::Sets_::Set::Attached


class RoutingPolicy::Sets::LargeCommunity::Sets_::Set::Attached::Binding : public ydk::Entity
{
    public:
        Binding();
        ~Binding();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf protocol; //type: string
        ydk::YLeaf vrf_name; //type: string
        ydk::YLeaf proto_instance; //type: string
        ydk::YLeaf af_name; //type: AddressFamily
        ydk::YLeaf saf_name; //type: SubAddressFamily
        ydk::YLeaf neighbor_address; //type: string
        ydk::YLeaf neighbor_af_name; //type: AddressFamily
        ydk::YLeaf group_name; //type: string
        ydk::YLeaf direction; //type: AttachPointDirection
        ydk::YLeaf group; //type: Group
        ydk::YLeaf source_protocol; //type: string
        ydk::YLeaf aggregate_network_address; //type: string
        ydk::YLeaf interface_name; //type: string
        ydk::YLeaf instance; //type: string
        ydk::YLeaf area_id; //type: string
        ydk::YLeaf propogate_from; //type: int32
        ydk::YLeaf propogate_to; //type: int32
        ydk::YLeaf route_policy_name; //type: string
        ydk::YLeaf attached_policy; //type: string
        ydk::YLeaf attach_point; //type: string

}; // RoutingPolicy::Sets::LargeCommunity::Sets_::Set::Attached::Binding


class RoutingPolicy::Sets::LargeCommunity::Unused : public ydk::Entity
{
    public:
        Unused();
        ~Unused();

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

        ydk::YLeafList object; //type: list of  string

}; // RoutingPolicy::Sets::LargeCommunity::Unused


class RoutingPolicy::Sets::LargeCommunity::Inactive : public ydk::Entity
{
    public:
        Inactive();
        ~Inactive();

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

        ydk::YLeafList object; //type: list of  string

}; // RoutingPolicy::Sets::LargeCommunity::Inactive


class RoutingPolicy::Sets::LargeCommunity::Active : public ydk::Entity
{
    public:
        Active();
        ~Active();

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

        ydk::YLeafList object; //type: list of  string

}; // RoutingPolicy::Sets::LargeCommunity::Active


class RoutingPolicy::Sets::Esi : public ydk::Entity
{
    public:
        Esi();
        ~Esi();

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

        class Sets_; //type: RoutingPolicy::Sets::Esi::Sets_
        class Unused; //type: RoutingPolicy::Sets::Esi::Unused
        class Inactive; //type: RoutingPolicy::Sets::Esi::Inactive
        class Active; //type: RoutingPolicy::Sets::Esi::Active

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_policy_repository_oper::RoutingPolicy::Sets::Esi::Sets_> sets;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_policy_repository_oper::RoutingPolicy::Sets::Esi::Unused> unused;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_policy_repository_oper::RoutingPolicy::Sets::Esi::Inactive> inactive;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_policy_repository_oper::RoutingPolicy::Sets::Esi::Active> active;
        
}; // RoutingPolicy::Sets::Esi


class RoutingPolicy::Sets::Esi::Sets_ : public ydk::Entity
{
    public:
        Sets_();
        ~Sets_();

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

        class Set; //type: RoutingPolicy::Sets::Esi::Sets_::Set

        ydk::YList set;
        
}; // RoutingPolicy::Sets::Esi::Sets_


class RoutingPolicy::Sets::Esi::Sets_::Set : public ydk::Entity
{
    public:
        Set();
        ~Set();

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

        ydk::YLeaf set_name; //type: string
        class UsedBy; //type: RoutingPolicy::Sets::Esi::Sets_::Set::UsedBy
        class Attached; //type: RoutingPolicy::Sets::Esi::Sets_::Set::Attached

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_policy_repository_oper::RoutingPolicy::Sets::Esi::Sets_::Set::UsedBy> used_by;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_policy_repository_oper::RoutingPolicy::Sets::Esi::Sets_::Set::Attached> attached;
        
}; // RoutingPolicy::Sets::Esi::Sets_::Set


class RoutingPolicy::Sets::Esi::Sets_::Set::UsedBy : public ydk::Entity
{
    public:
        UsedBy();
        ~UsedBy();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Reference; //type: RoutingPolicy::Sets::Esi::Sets_::Set::UsedBy::Reference

        ydk::YList reference;
        
}; // RoutingPolicy::Sets::Esi::Sets_::Set::UsedBy


class RoutingPolicy::Sets::Esi::Sets_::Set::UsedBy::Reference : public ydk::Entity
{
    public:
        Reference();
        ~Reference();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf route_policy_name; //type: string
        ydk::YLeaf used_directly; //type: boolean
        ydk::YLeaf status; //type: ObjectStatus

}; // RoutingPolicy::Sets::Esi::Sets_::Set::UsedBy::Reference


class RoutingPolicy::Sets::Esi::Sets_::Set::Attached : public ydk::Entity
{
    public:
        Attached();
        ~Attached();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Binding; //type: RoutingPolicy::Sets::Esi::Sets_::Set::Attached::Binding

        ydk::YList binding;
        
}; // RoutingPolicy::Sets::Esi::Sets_::Set::Attached


class RoutingPolicy::Sets::Esi::Sets_::Set::Attached::Binding : public ydk::Entity
{
    public:
        Binding();
        ~Binding();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf protocol; //type: string
        ydk::YLeaf vrf_name; //type: string
        ydk::YLeaf proto_instance; //type: string
        ydk::YLeaf af_name; //type: AddressFamily
        ydk::YLeaf saf_name; //type: SubAddressFamily
        ydk::YLeaf neighbor_address; //type: string
        ydk::YLeaf neighbor_af_name; //type: AddressFamily
        ydk::YLeaf group_name; //type: string
        ydk::YLeaf direction; //type: AttachPointDirection
        ydk::YLeaf group; //type: Group
        ydk::YLeaf source_protocol; //type: string
        ydk::YLeaf aggregate_network_address; //type: string
        ydk::YLeaf interface_name; //type: string
        ydk::YLeaf instance; //type: string
        ydk::YLeaf area_id; //type: string
        ydk::YLeaf propogate_from; //type: int32
        ydk::YLeaf propogate_to; //type: int32
        ydk::YLeaf route_policy_name; //type: string
        ydk::YLeaf attached_policy; //type: string
        ydk::YLeaf attach_point; //type: string

}; // RoutingPolicy::Sets::Esi::Sets_::Set::Attached::Binding


class RoutingPolicy::Sets::Esi::Unused : public ydk::Entity
{
    public:
        Unused();
        ~Unused();

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

        ydk::YLeafList object; //type: list of  string

}; // RoutingPolicy::Sets::Esi::Unused


class RoutingPolicy::Sets::Esi::Inactive : public ydk::Entity
{
    public:
        Inactive();
        ~Inactive();

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

        ydk::YLeafList object; //type: list of  string

}; // RoutingPolicy::Sets::Esi::Inactive


class RoutingPolicy::Sets::Esi::Active : public ydk::Entity
{
    public:
        Active();
        ~Active();

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

        ydk::YLeafList object; //type: list of  string

}; // RoutingPolicy::Sets::Esi::Active


class RoutingPolicy::Sets::ExtendedCommunityBandwidth : public ydk::Entity
{
    public:
        ExtendedCommunityBandwidth();
        ~ExtendedCommunityBandwidth();

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

        class Sets_; //type: RoutingPolicy::Sets::ExtendedCommunityBandwidth::Sets_
        class Unused; //type: RoutingPolicy::Sets::ExtendedCommunityBandwidth::Unused
        class Inactive; //type: RoutingPolicy::Sets::ExtendedCommunityBandwidth::Inactive

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_policy_repository_oper::RoutingPolicy::Sets::ExtendedCommunityBandwidth::Sets_> sets;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_policy_repository_oper::RoutingPolicy::Sets::ExtendedCommunityBandwidth::Unused> unused;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_policy_repository_oper::RoutingPolicy::Sets::ExtendedCommunityBandwidth::Inactive> inactive;
        
}; // RoutingPolicy::Sets::ExtendedCommunityBandwidth


class RoutingPolicy::Sets::ExtendedCommunityBandwidth::Sets_ : public ydk::Entity
{
    public:
        Sets_();
        ~Sets_();

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

        class Set; //type: RoutingPolicy::Sets::ExtendedCommunityBandwidth::Sets_::Set

        ydk::YList set;
        
}; // RoutingPolicy::Sets::ExtendedCommunityBandwidth::Sets_


class RoutingPolicy::Sets::ExtendedCommunityBandwidth::Sets_::Set : public ydk::Entity
{
    public:
        Set();
        ~Set();

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

        ydk::YLeaf set_name; //type: string
        class UsedBy; //type: RoutingPolicy::Sets::ExtendedCommunityBandwidth::Sets_::Set::UsedBy
        class Attached; //type: RoutingPolicy::Sets::ExtendedCommunityBandwidth::Sets_::Set::Attached

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_policy_repository_oper::RoutingPolicy::Sets::ExtendedCommunityBandwidth::Sets_::Set::UsedBy> used_by;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_policy_repository_oper::RoutingPolicy::Sets::ExtendedCommunityBandwidth::Sets_::Set::Attached> attached;
        
}; // RoutingPolicy::Sets::ExtendedCommunityBandwidth::Sets_::Set


class RoutingPolicy::Sets::ExtendedCommunityBandwidth::Sets_::Set::UsedBy : public ydk::Entity
{
    public:
        UsedBy();
        ~UsedBy();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Reference; //type: RoutingPolicy::Sets::ExtendedCommunityBandwidth::Sets_::Set::UsedBy::Reference

        ydk::YList reference;
        
}; // RoutingPolicy::Sets::ExtendedCommunityBandwidth::Sets_::Set::UsedBy


class RoutingPolicy::Sets::ExtendedCommunityBandwidth::Sets_::Set::UsedBy::Reference : public ydk::Entity
{
    public:
        Reference();
        ~Reference();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf route_policy_name; //type: string
        ydk::YLeaf used_directly; //type: boolean
        ydk::YLeaf status; //type: ObjectStatus

}; // RoutingPolicy::Sets::ExtendedCommunityBandwidth::Sets_::Set::UsedBy::Reference


class RoutingPolicy::Sets::ExtendedCommunityBandwidth::Sets_::Set::Attached : public ydk::Entity
{
    public:
        Attached();
        ~Attached();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Binding; //type: RoutingPolicy::Sets::ExtendedCommunityBandwidth::Sets_::Set::Attached::Binding

        ydk::YList binding;
        
}; // RoutingPolicy::Sets::ExtendedCommunityBandwidth::Sets_::Set::Attached


class RoutingPolicy::Sets::ExtendedCommunityBandwidth::Sets_::Set::Attached::Binding : public ydk::Entity
{
    public:
        Binding();
        ~Binding();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf protocol; //type: string
        ydk::YLeaf vrf_name; //type: string
        ydk::YLeaf proto_instance; //type: string
        ydk::YLeaf af_name; //type: AddressFamily
        ydk::YLeaf saf_name; //type: SubAddressFamily
        ydk::YLeaf neighbor_address; //type: string
        ydk::YLeaf neighbor_af_name; //type: AddressFamily
        ydk::YLeaf group_name; //type: string
        ydk::YLeaf direction; //type: AttachPointDirection
        ydk::YLeaf group; //type: Group
        ydk::YLeaf source_protocol; //type: string
        ydk::YLeaf aggregate_network_address; //type: string
        ydk::YLeaf interface_name; //type: string
        ydk::YLeaf instance; //type: string
        ydk::YLeaf area_id; //type: string
        ydk::YLeaf propogate_from; //type: int32
        ydk::YLeaf propogate_to; //type: int32
        ydk::YLeaf route_policy_name; //type: string
        ydk::YLeaf attached_policy; //type: string
        ydk::YLeaf attach_point; //type: string

}; // RoutingPolicy::Sets::ExtendedCommunityBandwidth::Sets_::Set::Attached::Binding


class RoutingPolicy::Sets::ExtendedCommunityBandwidth::Unused : public ydk::Entity
{
    public:
        Unused();
        ~Unused();

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

        ydk::YLeafList object; //type: list of  string

}; // RoutingPolicy::Sets::ExtendedCommunityBandwidth::Unused


class RoutingPolicy::Sets::ExtendedCommunityBandwidth::Inactive : public ydk::Entity
{
    public:
        Inactive();
        ~Inactive();

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

        ydk::YLeafList object; //type: list of  string

}; // RoutingPolicy::Sets::ExtendedCommunityBandwidth::Inactive


class RoutingPolicy::Sets::ExtendedCommunityRt : public ydk::Entity
{
    public:
        ExtendedCommunityRt();
        ~ExtendedCommunityRt();

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

        class Sets_; //type: RoutingPolicy::Sets::ExtendedCommunityRt::Sets_
        class Unused; //type: RoutingPolicy::Sets::ExtendedCommunityRt::Unused
        class Inactive; //type: RoutingPolicy::Sets::ExtendedCommunityRt::Inactive
        class Active; //type: RoutingPolicy::Sets::ExtendedCommunityRt::Active

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_policy_repository_oper::RoutingPolicy::Sets::ExtendedCommunityRt::Sets_> sets;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_policy_repository_oper::RoutingPolicy::Sets::ExtendedCommunityRt::Unused> unused;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_policy_repository_oper::RoutingPolicy::Sets::ExtendedCommunityRt::Inactive> inactive;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_policy_repository_oper::RoutingPolicy::Sets::ExtendedCommunityRt::Active> active;
        
}; // RoutingPolicy::Sets::ExtendedCommunityRt


class RoutingPolicy::Sets::ExtendedCommunityRt::Sets_ : public ydk::Entity
{
    public:
        Sets_();
        ~Sets_();

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

        class Set; //type: RoutingPolicy::Sets::ExtendedCommunityRt::Sets_::Set

        ydk::YList set;
        
}; // RoutingPolicy::Sets::ExtendedCommunityRt::Sets_


class RoutingPolicy::Sets::ExtendedCommunityRt::Sets_::Set : public ydk::Entity
{
    public:
        Set();
        ~Set();

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

        ydk::YLeaf set_name; //type: string
        class UsedBy; //type: RoutingPolicy::Sets::ExtendedCommunityRt::Sets_::Set::UsedBy
        class Attached; //type: RoutingPolicy::Sets::ExtendedCommunityRt::Sets_::Set::Attached

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_policy_repository_oper::RoutingPolicy::Sets::ExtendedCommunityRt::Sets_::Set::UsedBy> used_by;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_policy_repository_oper::RoutingPolicy::Sets::ExtendedCommunityRt::Sets_::Set::Attached> attached;
        
}; // RoutingPolicy::Sets::ExtendedCommunityRt::Sets_::Set


class RoutingPolicy::Sets::ExtendedCommunityRt::Sets_::Set::UsedBy : public ydk::Entity
{
    public:
        UsedBy();
        ~UsedBy();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Reference; //type: RoutingPolicy::Sets::ExtendedCommunityRt::Sets_::Set::UsedBy::Reference

        ydk::YList reference;
        
}; // RoutingPolicy::Sets::ExtendedCommunityRt::Sets_::Set::UsedBy


class RoutingPolicy::Sets::ExtendedCommunityRt::Sets_::Set::UsedBy::Reference : public ydk::Entity
{
    public:
        Reference();
        ~Reference();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf route_policy_name; //type: string
        ydk::YLeaf used_directly; //type: boolean
        ydk::YLeaf status; //type: ObjectStatus

}; // RoutingPolicy::Sets::ExtendedCommunityRt::Sets_::Set::UsedBy::Reference


class RoutingPolicy::Sets::ExtendedCommunityRt::Sets_::Set::Attached : public ydk::Entity
{
    public:
        Attached();
        ~Attached();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Binding; //type: RoutingPolicy::Sets::ExtendedCommunityRt::Sets_::Set::Attached::Binding

        ydk::YList binding;
        
}; // RoutingPolicy::Sets::ExtendedCommunityRt::Sets_::Set::Attached


class RoutingPolicy::Sets::ExtendedCommunityRt::Sets_::Set::Attached::Binding : public ydk::Entity
{
    public:
        Binding();
        ~Binding();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf protocol; //type: string
        ydk::YLeaf vrf_name; //type: string
        ydk::YLeaf proto_instance; //type: string
        ydk::YLeaf af_name; //type: AddressFamily
        ydk::YLeaf saf_name; //type: SubAddressFamily
        ydk::YLeaf neighbor_address; //type: string
        ydk::YLeaf neighbor_af_name; //type: AddressFamily
        ydk::YLeaf group_name; //type: string
        ydk::YLeaf direction; //type: AttachPointDirection
        ydk::YLeaf group; //type: Group
        ydk::YLeaf source_protocol; //type: string
        ydk::YLeaf aggregate_network_address; //type: string
        ydk::YLeaf interface_name; //type: string
        ydk::YLeaf instance; //type: string
        ydk::YLeaf area_id; //type: string
        ydk::YLeaf propogate_from; //type: int32
        ydk::YLeaf propogate_to; //type: int32
        ydk::YLeaf route_policy_name; //type: string
        ydk::YLeaf attached_policy; //type: string
        ydk::YLeaf attach_point; //type: string

}; // RoutingPolicy::Sets::ExtendedCommunityRt::Sets_::Set::Attached::Binding


class RoutingPolicy::Sets::ExtendedCommunityRt::Unused : public ydk::Entity
{
    public:
        Unused();
        ~Unused();

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

        ydk::YLeafList object; //type: list of  string

}; // RoutingPolicy::Sets::ExtendedCommunityRt::Unused


class RoutingPolicy::Sets::ExtendedCommunityRt::Inactive : public ydk::Entity
{
    public:
        Inactive();
        ~Inactive();

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

        ydk::YLeafList object; //type: list of  string

}; // RoutingPolicy::Sets::ExtendedCommunityRt::Inactive


class RoutingPolicy::Sets::ExtendedCommunityRt::Active : public ydk::Entity
{
    public:
        Active();
        ~Active();

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

        ydk::YLeafList object; //type: list of  string

}; // RoutingPolicy::Sets::ExtendedCommunityRt::Active


class RoutingPolicy::Sets::Rd : public ydk::Entity
{
    public:
        Rd();
        ~Rd();

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

        class Sets_; //type: RoutingPolicy::Sets::Rd::Sets_
        class Unused; //type: RoutingPolicy::Sets::Rd::Unused
        class Inactive; //type: RoutingPolicy::Sets::Rd::Inactive
        class Active; //type: RoutingPolicy::Sets::Rd::Active

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_policy_repository_oper::RoutingPolicy::Sets::Rd::Sets_> sets;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_policy_repository_oper::RoutingPolicy::Sets::Rd::Unused> unused;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_policy_repository_oper::RoutingPolicy::Sets::Rd::Inactive> inactive;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_policy_repository_oper::RoutingPolicy::Sets::Rd::Active> active;
        
}; // RoutingPolicy::Sets::Rd


class RoutingPolicy::Sets::Rd::Sets_ : public ydk::Entity
{
    public:
        Sets_();
        ~Sets_();

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

        class Set; //type: RoutingPolicy::Sets::Rd::Sets_::Set

        ydk::YList set;
        
}; // RoutingPolicy::Sets::Rd::Sets_


class RoutingPolicy::Sets::Rd::Sets_::Set : public ydk::Entity
{
    public:
        Set();
        ~Set();

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

        ydk::YLeaf set_name; //type: string
        class UsedBy; //type: RoutingPolicy::Sets::Rd::Sets_::Set::UsedBy
        class Attached; //type: RoutingPolicy::Sets::Rd::Sets_::Set::Attached

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_policy_repository_oper::RoutingPolicy::Sets::Rd::Sets_::Set::UsedBy> used_by;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_policy_repository_oper::RoutingPolicy::Sets::Rd::Sets_::Set::Attached> attached;
        
}; // RoutingPolicy::Sets::Rd::Sets_::Set


class RoutingPolicy::Sets::Rd::Sets_::Set::UsedBy : public ydk::Entity
{
    public:
        UsedBy();
        ~UsedBy();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Reference; //type: RoutingPolicy::Sets::Rd::Sets_::Set::UsedBy::Reference

        ydk::YList reference;
        
}; // RoutingPolicy::Sets::Rd::Sets_::Set::UsedBy


class RoutingPolicy::Sets::Rd::Sets_::Set::UsedBy::Reference : public ydk::Entity
{
    public:
        Reference();
        ~Reference();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf route_policy_name; //type: string
        ydk::YLeaf used_directly; //type: boolean
        ydk::YLeaf status; //type: ObjectStatus

}; // RoutingPolicy::Sets::Rd::Sets_::Set::UsedBy::Reference


class RoutingPolicy::Sets::Rd::Sets_::Set::Attached : public ydk::Entity
{
    public:
        Attached();
        ~Attached();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Binding; //type: RoutingPolicy::Sets::Rd::Sets_::Set::Attached::Binding

        ydk::YList binding;
        
}; // RoutingPolicy::Sets::Rd::Sets_::Set::Attached


class RoutingPolicy::Sets::Rd::Sets_::Set::Attached::Binding : public ydk::Entity
{
    public:
        Binding();
        ~Binding();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf protocol; //type: string
        ydk::YLeaf vrf_name; //type: string
        ydk::YLeaf proto_instance; //type: string
        ydk::YLeaf af_name; //type: AddressFamily
        ydk::YLeaf saf_name; //type: SubAddressFamily
        ydk::YLeaf neighbor_address; //type: string
        ydk::YLeaf neighbor_af_name; //type: AddressFamily
        ydk::YLeaf group_name; //type: string
        ydk::YLeaf direction; //type: AttachPointDirection
        ydk::YLeaf group; //type: Group
        ydk::YLeaf source_protocol; //type: string
        ydk::YLeaf aggregate_network_address; //type: string
        ydk::YLeaf interface_name; //type: string
        ydk::YLeaf instance; //type: string
        ydk::YLeaf area_id; //type: string
        ydk::YLeaf propogate_from; //type: int32
        ydk::YLeaf propogate_to; //type: int32
        ydk::YLeaf route_policy_name; //type: string
        ydk::YLeaf attached_policy; //type: string
        ydk::YLeaf attach_point; //type: string

}; // RoutingPolicy::Sets::Rd::Sets_::Set::Attached::Binding


class RoutingPolicy::Sets::Rd::Unused : public ydk::Entity
{
    public:
        Unused();
        ~Unused();

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

        ydk::YLeafList object; //type: list of  string

}; // RoutingPolicy::Sets::Rd::Unused


class RoutingPolicy::Sets::Rd::Inactive : public ydk::Entity
{
    public:
        Inactive();
        ~Inactive();

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

        ydk::YLeafList object; //type: list of  string

}; // RoutingPolicy::Sets::Rd::Inactive


class RoutingPolicy::Sets::Rd::Active : public ydk::Entity
{
    public:
        Active();
        ~Active();

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

        ydk::YLeafList object; //type: list of  string

}; // RoutingPolicy::Sets::Rd::Active


class RoutingPolicy::Sets::Mac : public ydk::Entity
{
    public:
        Mac();
        ~Mac();

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

        class Sets_; //type: RoutingPolicy::Sets::Mac::Sets_
        class Unused; //type: RoutingPolicy::Sets::Mac::Unused
        class Inactive; //type: RoutingPolicy::Sets::Mac::Inactive
        class Active; //type: RoutingPolicy::Sets::Mac::Active

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_policy_repository_oper::RoutingPolicy::Sets::Mac::Sets_> sets;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_policy_repository_oper::RoutingPolicy::Sets::Mac::Unused> unused;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_policy_repository_oper::RoutingPolicy::Sets::Mac::Inactive> inactive;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_policy_repository_oper::RoutingPolicy::Sets::Mac::Active> active;
        
}; // RoutingPolicy::Sets::Mac


class RoutingPolicy::Sets::Mac::Sets_ : public ydk::Entity
{
    public:
        Sets_();
        ~Sets_();

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

        class Set; //type: RoutingPolicy::Sets::Mac::Sets_::Set

        ydk::YList set;
        
}; // RoutingPolicy::Sets::Mac::Sets_


class RoutingPolicy::Sets::Mac::Sets_::Set : public ydk::Entity
{
    public:
        Set();
        ~Set();

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

        ydk::YLeaf set_name; //type: string
        class UsedBy; //type: RoutingPolicy::Sets::Mac::Sets_::Set::UsedBy
        class Attached; //type: RoutingPolicy::Sets::Mac::Sets_::Set::Attached

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_policy_repository_oper::RoutingPolicy::Sets::Mac::Sets_::Set::UsedBy> used_by;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_policy_repository_oper::RoutingPolicy::Sets::Mac::Sets_::Set::Attached> attached;
        
}; // RoutingPolicy::Sets::Mac::Sets_::Set


class RoutingPolicy::Sets::Mac::Sets_::Set::UsedBy : public ydk::Entity
{
    public:
        UsedBy();
        ~UsedBy();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Reference; //type: RoutingPolicy::Sets::Mac::Sets_::Set::UsedBy::Reference

        ydk::YList reference;
        
}; // RoutingPolicy::Sets::Mac::Sets_::Set::UsedBy


class RoutingPolicy::Sets::Mac::Sets_::Set::UsedBy::Reference : public ydk::Entity
{
    public:
        Reference();
        ~Reference();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf route_policy_name; //type: string
        ydk::YLeaf used_directly; //type: boolean
        ydk::YLeaf status; //type: ObjectStatus

}; // RoutingPolicy::Sets::Mac::Sets_::Set::UsedBy::Reference


class RoutingPolicy::Sets::Mac::Sets_::Set::Attached : public ydk::Entity
{
    public:
        Attached();
        ~Attached();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Binding; //type: RoutingPolicy::Sets::Mac::Sets_::Set::Attached::Binding

        ydk::YList binding;
        
}; // RoutingPolicy::Sets::Mac::Sets_::Set::Attached


class RoutingPolicy::Sets::Mac::Sets_::Set::Attached::Binding : public ydk::Entity
{
    public:
        Binding();
        ~Binding();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf protocol; //type: string
        ydk::YLeaf vrf_name; //type: string
        ydk::YLeaf proto_instance; //type: string
        ydk::YLeaf af_name; //type: AddressFamily
        ydk::YLeaf saf_name; //type: SubAddressFamily
        ydk::YLeaf neighbor_address; //type: string
        ydk::YLeaf neighbor_af_name; //type: AddressFamily
        ydk::YLeaf group_name; //type: string
        ydk::YLeaf direction; //type: AttachPointDirection
        ydk::YLeaf group; //type: Group
        ydk::YLeaf source_protocol; //type: string
        ydk::YLeaf aggregate_network_address; //type: string
        ydk::YLeaf interface_name; //type: string
        ydk::YLeaf instance; //type: string
        ydk::YLeaf area_id; //type: string
        ydk::YLeaf propogate_from; //type: int32
        ydk::YLeaf propogate_to; //type: int32
        ydk::YLeaf route_policy_name; //type: string
        ydk::YLeaf attached_policy; //type: string
        ydk::YLeaf attach_point; //type: string

}; // RoutingPolicy::Sets::Mac::Sets_::Set::Attached::Binding


class RoutingPolicy::Sets::Mac::Unused : public ydk::Entity
{
    public:
        Unused();
        ~Unused();

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

        ydk::YLeafList object; //type: list of  string

}; // RoutingPolicy::Sets::Mac::Unused


class RoutingPolicy::Sets::Mac::Inactive : public ydk::Entity
{
    public:
        Inactive();
        ~Inactive();

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

        ydk::YLeafList object; //type: list of  string

}; // RoutingPolicy::Sets::Mac::Inactive


class RoutingPolicy::Sets::Mac::Active : public ydk::Entity
{
    public:
        Active();
        ~Active();

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

        ydk::YLeafList object; //type: list of  string

}; // RoutingPolicy::Sets::Mac::Active


class RoutingPolicy::Sets::ExtendedCommunityCost : public ydk::Entity
{
    public:
        ExtendedCommunityCost();
        ~ExtendedCommunityCost();

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

        class Sets_; //type: RoutingPolicy::Sets::ExtendedCommunityCost::Sets_
        class Unused; //type: RoutingPolicy::Sets::ExtendedCommunityCost::Unused
        class Inactive; //type: RoutingPolicy::Sets::ExtendedCommunityCost::Inactive
        class Active; //type: RoutingPolicy::Sets::ExtendedCommunityCost::Active

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_policy_repository_oper::RoutingPolicy::Sets::ExtendedCommunityCost::Sets_> sets;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_policy_repository_oper::RoutingPolicy::Sets::ExtendedCommunityCost::Unused> unused;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_policy_repository_oper::RoutingPolicy::Sets::ExtendedCommunityCost::Inactive> inactive;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_policy_repository_oper::RoutingPolicy::Sets::ExtendedCommunityCost::Active> active;
        
}; // RoutingPolicy::Sets::ExtendedCommunityCost


class RoutingPolicy::Sets::ExtendedCommunityCost::Sets_ : public ydk::Entity
{
    public:
        Sets_();
        ~Sets_();

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

        class Set; //type: RoutingPolicy::Sets::ExtendedCommunityCost::Sets_::Set

        ydk::YList set;
        
}; // RoutingPolicy::Sets::ExtendedCommunityCost::Sets_


class RoutingPolicy::Sets::ExtendedCommunityCost::Sets_::Set : public ydk::Entity
{
    public:
        Set();
        ~Set();

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

        ydk::YLeaf set_name; //type: string
        class UsedBy; //type: RoutingPolicy::Sets::ExtendedCommunityCost::Sets_::Set::UsedBy
        class Attached; //type: RoutingPolicy::Sets::ExtendedCommunityCost::Sets_::Set::Attached

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_policy_repository_oper::RoutingPolicy::Sets::ExtendedCommunityCost::Sets_::Set::UsedBy> used_by;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_policy_repository_oper::RoutingPolicy::Sets::ExtendedCommunityCost::Sets_::Set::Attached> attached;
        
}; // RoutingPolicy::Sets::ExtendedCommunityCost::Sets_::Set


class RoutingPolicy::Sets::ExtendedCommunityCost::Sets_::Set::UsedBy : public ydk::Entity
{
    public:
        UsedBy();
        ~UsedBy();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Reference; //type: RoutingPolicy::Sets::ExtendedCommunityCost::Sets_::Set::UsedBy::Reference

        ydk::YList reference;
        
}; // RoutingPolicy::Sets::ExtendedCommunityCost::Sets_::Set::UsedBy


class RoutingPolicy::Sets::ExtendedCommunityCost::Sets_::Set::UsedBy::Reference : public ydk::Entity
{
    public:
        Reference();
        ~Reference();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf route_policy_name; //type: string
        ydk::YLeaf used_directly; //type: boolean
        ydk::YLeaf status; //type: ObjectStatus

}; // RoutingPolicy::Sets::ExtendedCommunityCost::Sets_::Set::UsedBy::Reference


class RoutingPolicy::Sets::ExtendedCommunityCost::Sets_::Set::Attached : public ydk::Entity
{
    public:
        Attached();
        ~Attached();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Binding; //type: RoutingPolicy::Sets::ExtendedCommunityCost::Sets_::Set::Attached::Binding

        ydk::YList binding;
        
}; // RoutingPolicy::Sets::ExtendedCommunityCost::Sets_::Set::Attached


class RoutingPolicy::Sets::ExtendedCommunityCost::Sets_::Set::Attached::Binding : public ydk::Entity
{
    public:
        Binding();
        ~Binding();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf protocol; //type: string
        ydk::YLeaf vrf_name; //type: string
        ydk::YLeaf proto_instance; //type: string
        ydk::YLeaf af_name; //type: AddressFamily
        ydk::YLeaf saf_name; //type: SubAddressFamily
        ydk::YLeaf neighbor_address; //type: string
        ydk::YLeaf neighbor_af_name; //type: AddressFamily
        ydk::YLeaf group_name; //type: string
        ydk::YLeaf direction; //type: AttachPointDirection
        ydk::YLeaf group; //type: Group
        ydk::YLeaf source_protocol; //type: string
        ydk::YLeaf aggregate_network_address; //type: string
        ydk::YLeaf interface_name; //type: string
        ydk::YLeaf instance; //type: string
        ydk::YLeaf area_id; //type: string
        ydk::YLeaf propogate_from; //type: int32
        ydk::YLeaf propogate_to; //type: int32
        ydk::YLeaf route_policy_name; //type: string
        ydk::YLeaf attached_policy; //type: string
        ydk::YLeaf attach_point; //type: string

}; // RoutingPolicy::Sets::ExtendedCommunityCost::Sets_::Set::Attached::Binding


class RoutingPolicy::Sets::ExtendedCommunityCost::Unused : public ydk::Entity
{
    public:
        Unused();
        ~Unused();

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

        ydk::YLeafList object; //type: list of  string

}; // RoutingPolicy::Sets::ExtendedCommunityCost::Unused


class RoutingPolicy::Sets::ExtendedCommunityCost::Inactive : public ydk::Entity
{
    public:
        Inactive();
        ~Inactive();

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

        ydk::YLeafList object; //type: list of  string

}; // RoutingPolicy::Sets::ExtendedCommunityCost::Inactive


class RoutingPolicy::Sets::ExtendedCommunityCost::Active : public ydk::Entity
{
    public:
        Active();
        ~Active();

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

        ydk::YLeafList object; //type: list of  string

}; // RoutingPolicy::Sets::ExtendedCommunityCost::Active

class RoutingPolicyShadow : public ydk::Entity
{
    public:
        RoutingPolicyShadow();
        ~RoutingPolicyShadow();

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

        class Limits; //type: RoutingPolicyShadow::Limits
        class Policies; //type: RoutingPolicyShadow::Policies
        class Sets; //type: RoutingPolicyShadow::Sets

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_policy_repository_oper::RoutingPolicyShadow::Limits> limits;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_policy_repository_oper::RoutingPolicyShadow::Policies> policies;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_policy_repository_oper::RoutingPolicyShadow::Sets> sets;
        
}; // RoutingPolicyShadow


class RoutingPolicyShadow::Limits : public ydk::Entity
{
    public:
        Limits();
        ~Limits();

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

        ydk::YLeaf maximum_lines_of_policy; //type: uint32
        ydk::YLeaf current_lines_of_policy_limit; //type: uint32
        ydk::YLeaf current_lines_of_policy_used; //type: uint32
        ydk::YLeaf maximum_number_of_policies; //type: uint32
        ydk::YLeaf current_number_of_policies_limit; //type: uint32
        ydk::YLeaf current_number_of_policies_used; //type: uint32
        ydk::YLeaf compiled_policies_length; //type: uint32

}; // RoutingPolicyShadow::Limits


class RoutingPolicyShadow::Policies : public ydk::Entity
{
    public:
        Policies();
        ~Policies();

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

        class RoutePolicies; //type: RoutingPolicyShadow::Policies::RoutePolicies
        class Unused; //type: RoutingPolicyShadow::Policies::Unused
        class Inactive; //type: RoutingPolicyShadow::Policies::Inactive
        class Active; //type: RoutingPolicyShadow::Policies::Active

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_policy_repository_oper::RoutingPolicyShadow::Policies::RoutePolicies> route_policies;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_policy_repository_oper::RoutingPolicyShadow::Policies::Unused> unused;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_policy_repository_oper::RoutingPolicyShadow::Policies::Inactive> inactive;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_policy_repository_oper::RoutingPolicyShadow::Policies::Active> active;
        
}; // RoutingPolicyShadow::Policies


class RoutingPolicyShadow::Policies::RoutePolicies : public ydk::Entity
{
    public:
        RoutePolicies();
        ~RoutePolicies();

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

        class RoutePolicy; //type: RoutingPolicyShadow::Policies::RoutePolicies::RoutePolicy

        ydk::YList route_policy;
        
}; // RoutingPolicyShadow::Policies::RoutePolicies


class RoutingPolicyShadow::Policies::RoutePolicies::RoutePolicy : public ydk::Entity
{
    public:
        RoutePolicy();
        ~RoutePolicy();

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

        ydk::YLeaf route_policy_name; //type: string
        class PolicyUses; //type: RoutingPolicyShadow::Policies::RoutePolicies::RoutePolicy::PolicyUses
        class UsedBy; //type: RoutingPolicyShadow::Policies::RoutePolicies::RoutePolicy::UsedBy
        class Attached; //type: RoutingPolicyShadow::Policies::RoutePolicies::RoutePolicy::Attached

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_policy_repository_oper::RoutingPolicyShadow::Policies::RoutePolicies::RoutePolicy::PolicyUses> policy_uses;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_policy_repository_oper::RoutingPolicyShadow::Policies::RoutePolicies::RoutePolicy::UsedBy> used_by;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_policy_repository_oper::RoutingPolicyShadow::Policies::RoutePolicies::RoutePolicy::Attached> attached;
        
}; // RoutingPolicyShadow::Policies::RoutePolicies::RoutePolicy


class RoutingPolicyShadow::Policies::RoutePolicies::RoutePolicy::PolicyUses : public ydk::Entity
{
    public:
        PolicyUses();
        ~PolicyUses();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class DirectlyUsedPolicies; //type: RoutingPolicyShadow::Policies::RoutePolicies::RoutePolicy::PolicyUses::DirectlyUsedPolicies
        class AllUsedSets; //type: RoutingPolicyShadow::Policies::RoutePolicies::RoutePolicy::PolicyUses::AllUsedSets
        class DirectlyUsedSets; //type: RoutingPolicyShadow::Policies::RoutePolicies::RoutePolicy::PolicyUses::DirectlyUsedSets
        class AllUsedPolicies; //type: RoutingPolicyShadow::Policies::RoutePolicies::RoutePolicy::PolicyUses::AllUsedPolicies

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_policy_repository_oper::RoutingPolicyShadow::Policies::RoutePolicies::RoutePolicy::PolicyUses::DirectlyUsedPolicies> directly_used_policies;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_policy_repository_oper::RoutingPolicyShadow::Policies::RoutePolicies::RoutePolicy::PolicyUses::AllUsedSets> all_used_sets;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_policy_repository_oper::RoutingPolicyShadow::Policies::RoutePolicies::RoutePolicy::PolicyUses::DirectlyUsedSets> directly_used_sets;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_policy_repository_oper::RoutingPolicyShadow::Policies::RoutePolicies::RoutePolicy::PolicyUses::AllUsedPolicies> all_used_policies;
        
}; // RoutingPolicyShadow::Policies::RoutePolicies::RoutePolicy::PolicyUses


class RoutingPolicyShadow::Policies::RoutePolicies::RoutePolicy::PolicyUses::DirectlyUsedPolicies : public ydk::Entity
{
    public:
        DirectlyUsedPolicies();
        ~DirectlyUsedPolicies();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeafList object; //type: list of  string

}; // RoutingPolicyShadow::Policies::RoutePolicies::RoutePolicy::PolicyUses::DirectlyUsedPolicies


class RoutingPolicyShadow::Policies::RoutePolicies::RoutePolicy::PolicyUses::AllUsedSets : public ydk::Entity
{
    public:
        AllUsedSets();
        ~AllUsedSets();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Sets; //type: RoutingPolicyShadow::Policies::RoutePolicies::RoutePolicy::PolicyUses::AllUsedSets::Sets

        ydk::YList sets;
        
}; // RoutingPolicyShadow::Policies::RoutePolicies::RoutePolicy::PolicyUses::AllUsedSets


class RoutingPolicyShadow::Policies::RoutePolicies::RoutePolicy::PolicyUses::AllUsedSets::Sets : public ydk::Entity
{
    public:
        Sets();
        ~Sets();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf set_domain; //type: string
        ydk::YLeafList set_name; //type: list of  string

}; // RoutingPolicyShadow::Policies::RoutePolicies::RoutePolicy::PolicyUses::AllUsedSets::Sets


class RoutingPolicyShadow::Policies::RoutePolicies::RoutePolicy::PolicyUses::DirectlyUsedSets : public ydk::Entity
{
    public:
        DirectlyUsedSets();
        ~DirectlyUsedSets();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Sets; //type: RoutingPolicyShadow::Policies::RoutePolicies::RoutePolicy::PolicyUses::DirectlyUsedSets::Sets

        ydk::YList sets;
        
}; // RoutingPolicyShadow::Policies::RoutePolicies::RoutePolicy::PolicyUses::DirectlyUsedSets


class RoutingPolicyShadow::Policies::RoutePolicies::RoutePolicy::PolicyUses::DirectlyUsedSets::Sets : public ydk::Entity
{
    public:
        Sets();
        ~Sets();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf set_domain; //type: string
        ydk::YLeafList set_name; //type: list of  string

}; // RoutingPolicyShadow::Policies::RoutePolicies::RoutePolicy::PolicyUses::DirectlyUsedSets::Sets


class RoutingPolicyShadow::Policies::RoutePolicies::RoutePolicy::PolicyUses::AllUsedPolicies : public ydk::Entity
{
    public:
        AllUsedPolicies();
        ~AllUsedPolicies();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeafList object; //type: list of  string

}; // RoutingPolicyShadow::Policies::RoutePolicies::RoutePolicy::PolicyUses::AllUsedPolicies


class RoutingPolicyShadow::Policies::RoutePolicies::RoutePolicy::UsedBy : public ydk::Entity
{
    public:
        UsedBy();
        ~UsedBy();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Reference; //type: RoutingPolicyShadow::Policies::RoutePolicies::RoutePolicy::UsedBy::Reference

        ydk::YList reference;
        
}; // RoutingPolicyShadow::Policies::RoutePolicies::RoutePolicy::UsedBy


class RoutingPolicyShadow::Policies::RoutePolicies::RoutePolicy::UsedBy::Reference : public ydk::Entity
{
    public:
        Reference();
        ~Reference();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf route_policy_name; //type: string
        ydk::YLeaf used_directly; //type: boolean
        ydk::YLeaf status; //type: ObjectStatus

}; // RoutingPolicyShadow::Policies::RoutePolicies::RoutePolicy::UsedBy::Reference


class RoutingPolicyShadow::Policies::RoutePolicies::RoutePolicy::Attached : public ydk::Entity
{
    public:
        Attached();
        ~Attached();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Binding; //type: RoutingPolicyShadow::Policies::RoutePolicies::RoutePolicy::Attached::Binding

        ydk::YList binding;
        
}; // RoutingPolicyShadow::Policies::RoutePolicies::RoutePolicy::Attached


class RoutingPolicyShadow::Policies::RoutePolicies::RoutePolicy::Attached::Binding : public ydk::Entity
{
    public:
        Binding();
        ~Binding();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf protocol; //type: string
        ydk::YLeaf vrf_name; //type: string
        ydk::YLeaf proto_instance; //type: string
        ydk::YLeaf af_name; //type: AddressFamily
        ydk::YLeaf saf_name; //type: SubAddressFamily
        ydk::YLeaf neighbor_address; //type: string
        ydk::YLeaf neighbor_af_name; //type: AddressFamily
        ydk::YLeaf group_name; //type: string
        ydk::YLeaf direction; //type: AttachPointDirection
        ydk::YLeaf group; //type: Group
        ydk::YLeaf source_protocol; //type: string
        ydk::YLeaf aggregate_network_address; //type: string
        ydk::YLeaf interface_name; //type: string
        ydk::YLeaf instance; //type: string
        ydk::YLeaf area_id; //type: string
        ydk::YLeaf propogate_from; //type: int32
        ydk::YLeaf propogate_to; //type: int32
        ydk::YLeaf route_policy_name; //type: string
        ydk::YLeaf attached_policy; //type: string
        ydk::YLeaf attach_point; //type: string

}; // RoutingPolicyShadow::Policies::RoutePolicies::RoutePolicy::Attached::Binding


class RoutingPolicyShadow::Policies::Unused : public ydk::Entity
{
    public:
        Unused();
        ~Unused();

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

        ydk::YLeafList object; //type: list of  string

}; // RoutingPolicyShadow::Policies::Unused


class RoutingPolicyShadow::Policies::Inactive : public ydk::Entity
{
    public:
        Inactive();
        ~Inactive();

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

        ydk::YLeafList object; //type: list of  string

}; // RoutingPolicyShadow::Policies::Inactive


class RoutingPolicyShadow::Policies::Active : public ydk::Entity
{
    public:
        Active();
        ~Active();

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

        ydk::YLeafList object; //type: list of  string

}; // RoutingPolicyShadow::Policies::Active


class RoutingPolicyShadow::Sets : public ydk::Entity
{
    public:
        Sets();
        ~Sets();

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

        class Etag; //type: RoutingPolicyShadow::Sets::Etag
        class OspfArea; //type: RoutingPolicyShadow::Sets::OspfArea
        class ExtendedCommunityOpaque; //type: RoutingPolicyShadow::Sets::ExtendedCommunityOpaque
        class ExtendedCommunitySegNh; //type: RoutingPolicyShadow::Sets::ExtendedCommunitySegNh
        class ExtendedCommunitySoo; //type: RoutingPolicyShadow::Sets::ExtendedCommunitySoo
        class Tag; //type: RoutingPolicyShadow::Sets::Tag
        class Prefix; //type: RoutingPolicyShadow::Sets::Prefix
        class Community; //type: RoutingPolicyShadow::Sets::Community
        class AsPath; //type: RoutingPolicyShadow::Sets::AsPath
        class LargeCommunity; //type: RoutingPolicyShadow::Sets::LargeCommunity
        class Esi; //type: RoutingPolicyShadow::Sets::Esi
        class ExtendedCommunityBandwidth; //type: RoutingPolicyShadow::Sets::ExtendedCommunityBandwidth
        class ExtendedCommunityRt; //type: RoutingPolicyShadow::Sets::ExtendedCommunityRt
        class Rd; //type: RoutingPolicyShadow::Sets::Rd
        class Mac; //type: RoutingPolicyShadow::Sets::Mac
        class ExtendedCommunityCost; //type: RoutingPolicyShadow::Sets::ExtendedCommunityCost

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_policy_repository_oper::RoutingPolicyShadow::Sets::Etag> etag;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_policy_repository_oper::RoutingPolicyShadow::Sets::OspfArea> ospf_area;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_policy_repository_oper::RoutingPolicyShadow::Sets::ExtendedCommunityOpaque> extended_community_opaque;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_policy_repository_oper::RoutingPolicyShadow::Sets::ExtendedCommunitySegNh> extended_community_seg_nh;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_policy_repository_oper::RoutingPolicyShadow::Sets::ExtendedCommunitySoo> extended_community_soo;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_policy_repository_oper::RoutingPolicyShadow::Sets::Tag> tag;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_policy_repository_oper::RoutingPolicyShadow::Sets::Prefix> prefix;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_policy_repository_oper::RoutingPolicyShadow::Sets::Community> community;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_policy_repository_oper::RoutingPolicyShadow::Sets::AsPath> as_path;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_policy_repository_oper::RoutingPolicyShadow::Sets::LargeCommunity> large_community;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_policy_repository_oper::RoutingPolicyShadow::Sets::Esi> esi;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_policy_repository_oper::RoutingPolicyShadow::Sets::ExtendedCommunityBandwidth> extended_community_bandwidth;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_policy_repository_oper::RoutingPolicyShadow::Sets::ExtendedCommunityRt> extended_community_rt;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_policy_repository_oper::RoutingPolicyShadow::Sets::Rd> rd;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_policy_repository_oper::RoutingPolicyShadow::Sets::Mac> mac;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_policy_repository_oper::RoutingPolicyShadow::Sets::ExtendedCommunityCost> extended_community_cost;
        
}; // RoutingPolicyShadow::Sets


class RoutingPolicyShadow::Sets::Etag : public ydk::Entity
{
    public:
        Etag();
        ~Etag();

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

        class Sets_; //type: RoutingPolicyShadow::Sets::Etag::Sets_
        class Unused; //type: RoutingPolicyShadow::Sets::Etag::Unused
        class Inactive; //type: RoutingPolicyShadow::Sets::Etag::Inactive
        class Active; //type: RoutingPolicyShadow::Sets::Etag::Active

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_policy_repository_oper::RoutingPolicyShadow::Sets::Etag::Sets_> sets;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_policy_repository_oper::RoutingPolicyShadow::Sets::Etag::Unused> unused;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_policy_repository_oper::RoutingPolicyShadow::Sets::Etag::Inactive> inactive;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_policy_repository_oper::RoutingPolicyShadow::Sets::Etag::Active> active;
        
}; // RoutingPolicyShadow::Sets::Etag


class RoutingPolicyShadow::Sets::Etag::Sets_ : public ydk::Entity
{
    public:
        Sets_();
        ~Sets_();

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

        class Set; //type: RoutingPolicyShadow::Sets::Etag::Sets_::Set

        ydk::YList set;
        
}; // RoutingPolicyShadow::Sets::Etag::Sets_


class RoutingPolicyShadow::Sets::Etag::Sets_::Set : public ydk::Entity
{
    public:
        Set();
        ~Set();

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

        ydk::YLeaf set_name; //type: string
        class UsedBy; //type: RoutingPolicyShadow::Sets::Etag::Sets_::Set::UsedBy
        class Attached; //type: RoutingPolicyShadow::Sets::Etag::Sets_::Set::Attached

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_policy_repository_oper::RoutingPolicyShadow::Sets::Etag::Sets_::Set::UsedBy> used_by;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_policy_repository_oper::RoutingPolicyShadow::Sets::Etag::Sets_::Set::Attached> attached;
        
}; // RoutingPolicyShadow::Sets::Etag::Sets_::Set


class RoutingPolicyShadow::Sets::Etag::Sets_::Set::UsedBy : public ydk::Entity
{
    public:
        UsedBy();
        ~UsedBy();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Reference; //type: RoutingPolicyShadow::Sets::Etag::Sets_::Set::UsedBy::Reference

        ydk::YList reference;
        
}; // RoutingPolicyShadow::Sets::Etag::Sets_::Set::UsedBy


class RoutingPolicyShadow::Sets::Etag::Sets_::Set::UsedBy::Reference : public ydk::Entity
{
    public:
        Reference();
        ~Reference();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf route_policy_name; //type: string
        ydk::YLeaf used_directly; //type: boolean
        ydk::YLeaf status; //type: ObjectStatus

}; // RoutingPolicyShadow::Sets::Etag::Sets_::Set::UsedBy::Reference


class RoutingPolicyShadow::Sets::Etag::Sets_::Set::Attached : public ydk::Entity
{
    public:
        Attached();
        ~Attached();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Binding; //type: RoutingPolicyShadow::Sets::Etag::Sets_::Set::Attached::Binding

        ydk::YList binding;
        
}; // RoutingPolicyShadow::Sets::Etag::Sets_::Set::Attached


class RoutingPolicyShadow::Sets::Etag::Sets_::Set::Attached::Binding : public ydk::Entity
{
    public:
        Binding();
        ~Binding();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf protocol; //type: string
        ydk::YLeaf vrf_name; //type: string
        ydk::YLeaf proto_instance; //type: string
        ydk::YLeaf af_name; //type: AddressFamily
        ydk::YLeaf saf_name; //type: SubAddressFamily
        ydk::YLeaf neighbor_address; //type: string
        ydk::YLeaf neighbor_af_name; //type: AddressFamily
        ydk::YLeaf group_name; //type: string
        ydk::YLeaf direction; //type: AttachPointDirection
        ydk::YLeaf group; //type: Group
        ydk::YLeaf source_protocol; //type: string
        ydk::YLeaf aggregate_network_address; //type: string
        ydk::YLeaf interface_name; //type: string
        ydk::YLeaf instance; //type: string
        ydk::YLeaf area_id; //type: string
        ydk::YLeaf propogate_from; //type: int32
        ydk::YLeaf propogate_to; //type: int32
        ydk::YLeaf route_policy_name; //type: string
        ydk::YLeaf attached_policy; //type: string
        ydk::YLeaf attach_point; //type: string

}; // RoutingPolicyShadow::Sets::Etag::Sets_::Set::Attached::Binding


class RoutingPolicyShadow::Sets::Etag::Unused : public ydk::Entity
{
    public:
        Unused();
        ~Unused();

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

        ydk::YLeafList object; //type: list of  string

}; // RoutingPolicyShadow::Sets::Etag::Unused


class RoutingPolicyShadow::Sets::Etag::Inactive : public ydk::Entity
{
    public:
        Inactive();
        ~Inactive();

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

        ydk::YLeafList object; //type: list of  string

}; // RoutingPolicyShadow::Sets::Etag::Inactive


class RoutingPolicyShadow::Sets::Etag::Active : public ydk::Entity
{
    public:
        Active();
        ~Active();

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

        ydk::YLeafList object; //type: list of  string

}; // RoutingPolicyShadow::Sets::Etag::Active


class RoutingPolicyShadow::Sets::OspfArea : public ydk::Entity
{
    public:
        OspfArea();
        ~OspfArea();

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

        class Sets_; //type: RoutingPolicyShadow::Sets::OspfArea::Sets_
        class Unused; //type: RoutingPolicyShadow::Sets::OspfArea::Unused
        class Inactive; //type: RoutingPolicyShadow::Sets::OspfArea::Inactive
        class Active; //type: RoutingPolicyShadow::Sets::OspfArea::Active

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_policy_repository_oper::RoutingPolicyShadow::Sets::OspfArea::Sets_> sets;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_policy_repository_oper::RoutingPolicyShadow::Sets::OspfArea::Unused> unused;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_policy_repository_oper::RoutingPolicyShadow::Sets::OspfArea::Inactive> inactive;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_policy_repository_oper::RoutingPolicyShadow::Sets::OspfArea::Active> active;
        
}; // RoutingPolicyShadow::Sets::OspfArea


class RoutingPolicyShadow::Sets::OspfArea::Sets_ : public ydk::Entity
{
    public:
        Sets_();
        ~Sets_();

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

        class Set; //type: RoutingPolicyShadow::Sets::OspfArea::Sets_::Set

        ydk::YList set;
        
}; // RoutingPolicyShadow::Sets::OspfArea::Sets_


class RoutingPolicyShadow::Sets::OspfArea::Sets_::Set : public ydk::Entity
{
    public:
        Set();
        ~Set();

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

        ydk::YLeaf set_name; //type: string
        class UsedBy; //type: RoutingPolicyShadow::Sets::OspfArea::Sets_::Set::UsedBy
        class Attached; //type: RoutingPolicyShadow::Sets::OspfArea::Sets_::Set::Attached

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_policy_repository_oper::RoutingPolicyShadow::Sets::OspfArea::Sets_::Set::UsedBy> used_by;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_policy_repository_oper::RoutingPolicyShadow::Sets::OspfArea::Sets_::Set::Attached> attached;
        
}; // RoutingPolicyShadow::Sets::OspfArea::Sets_::Set


class RoutingPolicyShadow::Sets::OspfArea::Sets_::Set::UsedBy : public ydk::Entity
{
    public:
        UsedBy();
        ~UsedBy();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Reference; //type: RoutingPolicyShadow::Sets::OspfArea::Sets_::Set::UsedBy::Reference

        ydk::YList reference;
        
}; // RoutingPolicyShadow::Sets::OspfArea::Sets_::Set::UsedBy


class RoutingPolicyShadow::Sets::OspfArea::Sets_::Set::UsedBy::Reference : public ydk::Entity
{
    public:
        Reference();
        ~Reference();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf route_policy_name; //type: string
        ydk::YLeaf used_directly; //type: boolean
        ydk::YLeaf status; //type: ObjectStatus

}; // RoutingPolicyShadow::Sets::OspfArea::Sets_::Set::UsedBy::Reference


class RoutingPolicyShadow::Sets::OspfArea::Sets_::Set::Attached : public ydk::Entity
{
    public:
        Attached();
        ~Attached();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Binding; //type: RoutingPolicyShadow::Sets::OspfArea::Sets_::Set::Attached::Binding

        ydk::YList binding;
        
}; // RoutingPolicyShadow::Sets::OspfArea::Sets_::Set::Attached


class RoutingPolicyShadow::Sets::OspfArea::Sets_::Set::Attached::Binding : public ydk::Entity
{
    public:
        Binding();
        ~Binding();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf protocol; //type: string
        ydk::YLeaf vrf_name; //type: string
        ydk::YLeaf proto_instance; //type: string
        ydk::YLeaf af_name; //type: AddressFamily
        ydk::YLeaf saf_name; //type: SubAddressFamily
        ydk::YLeaf neighbor_address; //type: string
        ydk::YLeaf neighbor_af_name; //type: AddressFamily
        ydk::YLeaf group_name; //type: string
        ydk::YLeaf direction; //type: AttachPointDirection
        ydk::YLeaf group; //type: Group
        ydk::YLeaf source_protocol; //type: string
        ydk::YLeaf aggregate_network_address; //type: string
        ydk::YLeaf interface_name; //type: string
        ydk::YLeaf instance; //type: string
        ydk::YLeaf area_id; //type: string
        ydk::YLeaf propogate_from; //type: int32
        ydk::YLeaf propogate_to; //type: int32
        ydk::YLeaf route_policy_name; //type: string
        ydk::YLeaf attached_policy; //type: string
        ydk::YLeaf attach_point; //type: string

}; // RoutingPolicyShadow::Sets::OspfArea::Sets_::Set::Attached::Binding


class RoutingPolicyShadow::Sets::OspfArea::Unused : public ydk::Entity
{
    public:
        Unused();
        ~Unused();

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

        ydk::YLeafList object; //type: list of  string

}; // RoutingPolicyShadow::Sets::OspfArea::Unused


class RoutingPolicyShadow::Sets::OspfArea::Inactive : public ydk::Entity
{
    public:
        Inactive();
        ~Inactive();

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

        ydk::YLeafList object; //type: list of  string

}; // RoutingPolicyShadow::Sets::OspfArea::Inactive


class RoutingPolicyShadow::Sets::OspfArea::Active : public ydk::Entity
{
    public:
        Active();
        ~Active();

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

        ydk::YLeafList object; //type: list of  string

}; // RoutingPolicyShadow::Sets::OspfArea::Active


class RoutingPolicyShadow::Sets::ExtendedCommunityOpaque : public ydk::Entity
{
    public:
        ExtendedCommunityOpaque();
        ~ExtendedCommunityOpaque();

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

        class Sets_; //type: RoutingPolicyShadow::Sets::ExtendedCommunityOpaque::Sets_
        class Unused; //type: RoutingPolicyShadow::Sets::ExtendedCommunityOpaque::Unused
        class Inactive; //type: RoutingPolicyShadow::Sets::ExtendedCommunityOpaque::Inactive
        class Active; //type: RoutingPolicyShadow::Sets::ExtendedCommunityOpaque::Active

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_policy_repository_oper::RoutingPolicyShadow::Sets::ExtendedCommunityOpaque::Sets_> sets;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_policy_repository_oper::RoutingPolicyShadow::Sets::ExtendedCommunityOpaque::Unused> unused;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_policy_repository_oper::RoutingPolicyShadow::Sets::ExtendedCommunityOpaque::Inactive> inactive;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_policy_repository_oper::RoutingPolicyShadow::Sets::ExtendedCommunityOpaque::Active> active;
        
}; // RoutingPolicyShadow::Sets::ExtendedCommunityOpaque


class RoutingPolicyShadow::Sets::ExtendedCommunityOpaque::Sets_ : public ydk::Entity
{
    public:
        Sets_();
        ~Sets_();

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

        class Set; //type: RoutingPolicyShadow::Sets::ExtendedCommunityOpaque::Sets_::Set

        ydk::YList set;
        
}; // RoutingPolicyShadow::Sets::ExtendedCommunityOpaque::Sets_


class RoutingPolicyShadow::Sets::ExtendedCommunityOpaque::Sets_::Set : public ydk::Entity
{
    public:
        Set();
        ~Set();

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

        ydk::YLeaf set_name; //type: string
        class UsedBy; //type: RoutingPolicyShadow::Sets::ExtendedCommunityOpaque::Sets_::Set::UsedBy
        class Attached; //type: RoutingPolicyShadow::Sets::ExtendedCommunityOpaque::Sets_::Set::Attached

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_policy_repository_oper::RoutingPolicyShadow::Sets::ExtendedCommunityOpaque::Sets_::Set::UsedBy> used_by;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_policy_repository_oper::RoutingPolicyShadow::Sets::ExtendedCommunityOpaque::Sets_::Set::Attached> attached;
        
}; // RoutingPolicyShadow::Sets::ExtendedCommunityOpaque::Sets_::Set


class RoutingPolicyShadow::Sets::ExtendedCommunityOpaque::Sets_::Set::UsedBy : public ydk::Entity
{
    public:
        UsedBy();
        ~UsedBy();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Reference; //type: RoutingPolicyShadow::Sets::ExtendedCommunityOpaque::Sets_::Set::UsedBy::Reference

        ydk::YList reference;
        
}; // RoutingPolicyShadow::Sets::ExtendedCommunityOpaque::Sets_::Set::UsedBy


class RoutingPolicyShadow::Sets::ExtendedCommunityOpaque::Sets_::Set::UsedBy::Reference : public ydk::Entity
{
    public:
        Reference();
        ~Reference();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf route_policy_name; //type: string
        ydk::YLeaf used_directly; //type: boolean
        ydk::YLeaf status; //type: ObjectStatus

}; // RoutingPolicyShadow::Sets::ExtendedCommunityOpaque::Sets_::Set::UsedBy::Reference


class RoutingPolicyShadow::Sets::ExtendedCommunityOpaque::Sets_::Set::Attached : public ydk::Entity
{
    public:
        Attached();
        ~Attached();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Binding; //type: RoutingPolicyShadow::Sets::ExtendedCommunityOpaque::Sets_::Set::Attached::Binding

        ydk::YList binding;
        
}; // RoutingPolicyShadow::Sets::ExtendedCommunityOpaque::Sets_::Set::Attached


class RoutingPolicyShadow::Sets::ExtendedCommunityOpaque::Sets_::Set::Attached::Binding : public ydk::Entity
{
    public:
        Binding();
        ~Binding();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf protocol; //type: string
        ydk::YLeaf vrf_name; //type: string
        ydk::YLeaf proto_instance; //type: string
        ydk::YLeaf af_name; //type: AddressFamily
        ydk::YLeaf saf_name; //type: SubAddressFamily
        ydk::YLeaf neighbor_address; //type: string
        ydk::YLeaf neighbor_af_name; //type: AddressFamily
        ydk::YLeaf group_name; //type: string
        ydk::YLeaf direction; //type: AttachPointDirection
        ydk::YLeaf group; //type: Group
        ydk::YLeaf source_protocol; //type: string
        ydk::YLeaf aggregate_network_address; //type: string
        ydk::YLeaf interface_name; //type: string
        ydk::YLeaf instance; //type: string
        ydk::YLeaf area_id; //type: string
        ydk::YLeaf propogate_from; //type: int32
        ydk::YLeaf propogate_to; //type: int32
        ydk::YLeaf route_policy_name; //type: string
        ydk::YLeaf attached_policy; //type: string
        ydk::YLeaf attach_point; //type: string

}; // RoutingPolicyShadow::Sets::ExtendedCommunityOpaque::Sets_::Set::Attached::Binding


class RoutingPolicyShadow::Sets::ExtendedCommunityOpaque::Unused : public ydk::Entity
{
    public:
        Unused();
        ~Unused();

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

        ydk::YLeafList object; //type: list of  string

}; // RoutingPolicyShadow::Sets::ExtendedCommunityOpaque::Unused


class RoutingPolicyShadow::Sets::ExtendedCommunityOpaque::Inactive : public ydk::Entity
{
    public:
        Inactive();
        ~Inactive();

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

        ydk::YLeafList object; //type: list of  string

}; // RoutingPolicyShadow::Sets::ExtendedCommunityOpaque::Inactive


class RoutingPolicyShadow::Sets::ExtendedCommunityOpaque::Active : public ydk::Entity
{
    public:
        Active();
        ~Active();

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

        ydk::YLeafList object; //type: list of  string

}; // RoutingPolicyShadow::Sets::ExtendedCommunityOpaque::Active


class RoutingPolicyShadow::Sets::ExtendedCommunitySegNh : public ydk::Entity
{
    public:
        ExtendedCommunitySegNh();
        ~ExtendedCommunitySegNh();

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

        class Sets_; //type: RoutingPolicyShadow::Sets::ExtendedCommunitySegNh::Sets_
        class Unused; //type: RoutingPolicyShadow::Sets::ExtendedCommunitySegNh::Unused
        class Inactive; //type: RoutingPolicyShadow::Sets::ExtendedCommunitySegNh::Inactive
        class Active; //type: RoutingPolicyShadow::Sets::ExtendedCommunitySegNh::Active

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_policy_repository_oper::RoutingPolicyShadow::Sets::ExtendedCommunitySegNh::Sets_> sets;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_policy_repository_oper::RoutingPolicyShadow::Sets::ExtendedCommunitySegNh::Unused> unused;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_policy_repository_oper::RoutingPolicyShadow::Sets::ExtendedCommunitySegNh::Inactive> inactive;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_policy_repository_oper::RoutingPolicyShadow::Sets::ExtendedCommunitySegNh::Active> active;
        
}; // RoutingPolicyShadow::Sets::ExtendedCommunitySegNh


class RoutingPolicyShadow::Sets::ExtendedCommunitySegNh::Sets_ : public ydk::Entity
{
    public:
        Sets_();
        ~Sets_();

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

        class Set; //type: RoutingPolicyShadow::Sets::ExtendedCommunitySegNh::Sets_::Set

        ydk::YList set;
        
}; // RoutingPolicyShadow::Sets::ExtendedCommunitySegNh::Sets_


class RoutingPolicyShadow::Sets::ExtendedCommunitySegNh::Sets_::Set : public ydk::Entity
{
    public:
        Set();
        ~Set();

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

        ydk::YLeaf set_name; //type: string
        class UsedBy; //type: RoutingPolicyShadow::Sets::ExtendedCommunitySegNh::Sets_::Set::UsedBy
        class Attached; //type: RoutingPolicyShadow::Sets::ExtendedCommunitySegNh::Sets_::Set::Attached

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_policy_repository_oper::RoutingPolicyShadow::Sets::ExtendedCommunitySegNh::Sets_::Set::UsedBy> used_by;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_policy_repository_oper::RoutingPolicyShadow::Sets::ExtendedCommunitySegNh::Sets_::Set::Attached> attached;
        
}; // RoutingPolicyShadow::Sets::ExtendedCommunitySegNh::Sets_::Set


class RoutingPolicyShadow::Sets::ExtendedCommunitySegNh::Sets_::Set::UsedBy : public ydk::Entity
{
    public:
        UsedBy();
        ~UsedBy();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Reference; //type: RoutingPolicyShadow::Sets::ExtendedCommunitySegNh::Sets_::Set::UsedBy::Reference

        ydk::YList reference;
        
}; // RoutingPolicyShadow::Sets::ExtendedCommunitySegNh::Sets_::Set::UsedBy


class RoutingPolicyShadow::Sets::ExtendedCommunitySegNh::Sets_::Set::UsedBy::Reference : public ydk::Entity
{
    public:
        Reference();
        ~Reference();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf route_policy_name; //type: string
        ydk::YLeaf used_directly; //type: boolean
        ydk::YLeaf status; //type: ObjectStatus

}; // RoutingPolicyShadow::Sets::ExtendedCommunitySegNh::Sets_::Set::UsedBy::Reference


class RoutingPolicyShadow::Sets::ExtendedCommunitySegNh::Sets_::Set::Attached : public ydk::Entity
{
    public:
        Attached();
        ~Attached();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Binding; //type: RoutingPolicyShadow::Sets::ExtendedCommunitySegNh::Sets_::Set::Attached::Binding

        ydk::YList binding;
        
}; // RoutingPolicyShadow::Sets::ExtendedCommunitySegNh::Sets_::Set::Attached


class RoutingPolicyShadow::Sets::ExtendedCommunitySegNh::Sets_::Set::Attached::Binding : public ydk::Entity
{
    public:
        Binding();
        ~Binding();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf protocol; //type: string
        ydk::YLeaf vrf_name; //type: string
        ydk::YLeaf proto_instance; //type: string
        ydk::YLeaf af_name; //type: AddressFamily
        ydk::YLeaf saf_name; //type: SubAddressFamily
        ydk::YLeaf neighbor_address; //type: string
        ydk::YLeaf neighbor_af_name; //type: AddressFamily
        ydk::YLeaf group_name; //type: string
        ydk::YLeaf direction; //type: AttachPointDirection
        ydk::YLeaf group; //type: Group
        ydk::YLeaf source_protocol; //type: string
        ydk::YLeaf aggregate_network_address; //type: string
        ydk::YLeaf interface_name; //type: string
        ydk::YLeaf instance; //type: string
        ydk::YLeaf area_id; //type: string
        ydk::YLeaf propogate_from; //type: int32
        ydk::YLeaf propogate_to; //type: int32
        ydk::YLeaf route_policy_name; //type: string
        ydk::YLeaf attached_policy; //type: string
        ydk::YLeaf attach_point; //type: string

}; // RoutingPolicyShadow::Sets::ExtendedCommunitySegNh::Sets_::Set::Attached::Binding


class RoutingPolicyShadow::Sets::ExtendedCommunitySegNh::Unused : public ydk::Entity
{
    public:
        Unused();
        ~Unused();

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

        ydk::YLeafList object; //type: list of  string

}; // RoutingPolicyShadow::Sets::ExtendedCommunitySegNh::Unused


class RoutingPolicyShadow::Sets::ExtendedCommunitySegNh::Inactive : public ydk::Entity
{
    public:
        Inactive();
        ~Inactive();

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

        ydk::YLeafList object; //type: list of  string

}; // RoutingPolicyShadow::Sets::ExtendedCommunitySegNh::Inactive


class RoutingPolicyShadow::Sets::ExtendedCommunitySegNh::Active : public ydk::Entity
{
    public:
        Active();
        ~Active();

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

        ydk::YLeafList object; //type: list of  string

}; // RoutingPolicyShadow::Sets::ExtendedCommunitySegNh::Active


class RoutingPolicyShadow::Sets::ExtendedCommunitySoo : public ydk::Entity
{
    public:
        ExtendedCommunitySoo();
        ~ExtendedCommunitySoo();

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

        class Sets_; //type: RoutingPolicyShadow::Sets::ExtendedCommunitySoo::Sets_
        class Unused; //type: RoutingPolicyShadow::Sets::ExtendedCommunitySoo::Unused
        class Inactive; //type: RoutingPolicyShadow::Sets::ExtendedCommunitySoo::Inactive
        class Active; //type: RoutingPolicyShadow::Sets::ExtendedCommunitySoo::Active

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_policy_repository_oper::RoutingPolicyShadow::Sets::ExtendedCommunitySoo::Sets_> sets;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_policy_repository_oper::RoutingPolicyShadow::Sets::ExtendedCommunitySoo::Unused> unused;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_policy_repository_oper::RoutingPolicyShadow::Sets::ExtendedCommunitySoo::Inactive> inactive;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_policy_repository_oper::RoutingPolicyShadow::Sets::ExtendedCommunitySoo::Active> active;
        
}; // RoutingPolicyShadow::Sets::ExtendedCommunitySoo


class RoutingPolicyShadow::Sets::ExtendedCommunitySoo::Sets_ : public ydk::Entity
{
    public:
        Sets_();
        ~Sets_();

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

        class Set; //type: RoutingPolicyShadow::Sets::ExtendedCommunitySoo::Sets_::Set

        ydk::YList set;
        
}; // RoutingPolicyShadow::Sets::ExtendedCommunitySoo::Sets_


class RoutingPolicyShadow::Sets::ExtendedCommunitySoo::Sets_::Set : public ydk::Entity
{
    public:
        Set();
        ~Set();

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

        ydk::YLeaf set_name; //type: string
        class UsedBy; //type: RoutingPolicyShadow::Sets::ExtendedCommunitySoo::Sets_::Set::UsedBy
        class Attached; //type: RoutingPolicyShadow::Sets::ExtendedCommunitySoo::Sets_::Set::Attached

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_policy_repository_oper::RoutingPolicyShadow::Sets::ExtendedCommunitySoo::Sets_::Set::UsedBy> used_by;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_policy_repository_oper::RoutingPolicyShadow::Sets::ExtendedCommunitySoo::Sets_::Set::Attached> attached;
        
}; // RoutingPolicyShadow::Sets::ExtendedCommunitySoo::Sets_::Set


class RoutingPolicyShadow::Sets::ExtendedCommunitySoo::Sets_::Set::UsedBy : public ydk::Entity
{
    public:
        UsedBy();
        ~UsedBy();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Reference; //type: RoutingPolicyShadow::Sets::ExtendedCommunitySoo::Sets_::Set::UsedBy::Reference

        ydk::YList reference;
        
}; // RoutingPolicyShadow::Sets::ExtendedCommunitySoo::Sets_::Set::UsedBy


class RoutingPolicyShadow::Sets::ExtendedCommunitySoo::Sets_::Set::UsedBy::Reference : public ydk::Entity
{
    public:
        Reference();
        ~Reference();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf route_policy_name; //type: string
        ydk::YLeaf used_directly; //type: boolean
        ydk::YLeaf status; //type: ObjectStatus

}; // RoutingPolicyShadow::Sets::ExtendedCommunitySoo::Sets_::Set::UsedBy::Reference


class RoutingPolicyShadow::Sets::ExtendedCommunitySoo::Sets_::Set::Attached : public ydk::Entity
{
    public:
        Attached();
        ~Attached();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Binding; //type: RoutingPolicyShadow::Sets::ExtendedCommunitySoo::Sets_::Set::Attached::Binding

        ydk::YList binding;
        
}; // RoutingPolicyShadow::Sets::ExtendedCommunitySoo::Sets_::Set::Attached


class RoutingPolicyShadow::Sets::ExtendedCommunitySoo::Sets_::Set::Attached::Binding : public ydk::Entity
{
    public:
        Binding();
        ~Binding();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf protocol; //type: string
        ydk::YLeaf vrf_name; //type: string
        ydk::YLeaf proto_instance; //type: string
        ydk::YLeaf af_name; //type: AddressFamily
        ydk::YLeaf saf_name; //type: SubAddressFamily
        ydk::YLeaf neighbor_address; //type: string
        ydk::YLeaf neighbor_af_name; //type: AddressFamily
        ydk::YLeaf group_name; //type: string
        ydk::YLeaf direction; //type: AttachPointDirection
        ydk::YLeaf group; //type: Group
        ydk::YLeaf source_protocol; //type: string
        ydk::YLeaf aggregate_network_address; //type: string
        ydk::YLeaf interface_name; //type: string
        ydk::YLeaf instance; //type: string
        ydk::YLeaf area_id; //type: string
        ydk::YLeaf propogate_from; //type: int32
        ydk::YLeaf propogate_to; //type: int32
        ydk::YLeaf route_policy_name; //type: string
        ydk::YLeaf attached_policy; //type: string
        ydk::YLeaf attach_point; //type: string

}; // RoutingPolicyShadow::Sets::ExtendedCommunitySoo::Sets_::Set::Attached::Binding


class RoutingPolicyShadow::Sets::ExtendedCommunitySoo::Unused : public ydk::Entity
{
    public:
        Unused();
        ~Unused();

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

        ydk::YLeafList object; //type: list of  string

}; // RoutingPolicyShadow::Sets::ExtendedCommunitySoo::Unused


class RoutingPolicyShadow::Sets::ExtendedCommunitySoo::Inactive : public ydk::Entity
{
    public:
        Inactive();
        ~Inactive();

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

        ydk::YLeafList object; //type: list of  string

}; // RoutingPolicyShadow::Sets::ExtendedCommunitySoo::Inactive


class RoutingPolicyShadow::Sets::ExtendedCommunitySoo::Active : public ydk::Entity
{
    public:
        Active();
        ~Active();

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

        ydk::YLeafList object; //type: list of  string

}; // RoutingPolicyShadow::Sets::ExtendedCommunitySoo::Active


class RoutingPolicyShadow::Sets::Tag : public ydk::Entity
{
    public:
        Tag();
        ~Tag();

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

        class Sets_; //type: RoutingPolicyShadow::Sets::Tag::Sets_
        class Unused; //type: RoutingPolicyShadow::Sets::Tag::Unused
        class Inactive; //type: RoutingPolicyShadow::Sets::Tag::Inactive
        class Active; //type: RoutingPolicyShadow::Sets::Tag::Active

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_policy_repository_oper::RoutingPolicyShadow::Sets::Tag::Sets_> sets;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_policy_repository_oper::RoutingPolicyShadow::Sets::Tag::Unused> unused;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_policy_repository_oper::RoutingPolicyShadow::Sets::Tag::Inactive> inactive;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_policy_repository_oper::RoutingPolicyShadow::Sets::Tag::Active> active;
        
}; // RoutingPolicyShadow::Sets::Tag


class RoutingPolicyShadow::Sets::Tag::Sets_ : public ydk::Entity
{
    public:
        Sets_();
        ~Sets_();

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

        class Set; //type: RoutingPolicyShadow::Sets::Tag::Sets_::Set

        ydk::YList set;
        
}; // RoutingPolicyShadow::Sets::Tag::Sets_


class RoutingPolicyShadow::Sets::Tag::Sets_::Set : public ydk::Entity
{
    public:
        Set();
        ~Set();

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

        ydk::YLeaf set_name; //type: string
        class UsedBy; //type: RoutingPolicyShadow::Sets::Tag::Sets_::Set::UsedBy
        class Attached; //type: RoutingPolicyShadow::Sets::Tag::Sets_::Set::Attached

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_policy_repository_oper::RoutingPolicyShadow::Sets::Tag::Sets_::Set::UsedBy> used_by;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_policy_repository_oper::RoutingPolicyShadow::Sets::Tag::Sets_::Set::Attached> attached;
        
}; // RoutingPolicyShadow::Sets::Tag::Sets_::Set


class RoutingPolicyShadow::Sets::Tag::Sets_::Set::UsedBy : public ydk::Entity
{
    public:
        UsedBy();
        ~UsedBy();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Reference; //type: RoutingPolicyShadow::Sets::Tag::Sets_::Set::UsedBy::Reference

        ydk::YList reference;
        
}; // RoutingPolicyShadow::Sets::Tag::Sets_::Set::UsedBy


class RoutingPolicyShadow::Sets::Tag::Sets_::Set::UsedBy::Reference : public ydk::Entity
{
    public:
        Reference();
        ~Reference();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf route_policy_name; //type: string
        ydk::YLeaf used_directly; //type: boolean
        ydk::YLeaf status; //type: ObjectStatus

}; // RoutingPolicyShadow::Sets::Tag::Sets_::Set::UsedBy::Reference


class RoutingPolicyShadow::Sets::Tag::Sets_::Set::Attached : public ydk::Entity
{
    public:
        Attached();
        ~Attached();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Binding; //type: RoutingPolicyShadow::Sets::Tag::Sets_::Set::Attached::Binding

        ydk::YList binding;
        
}; // RoutingPolicyShadow::Sets::Tag::Sets_::Set::Attached


class RoutingPolicyShadow::Sets::Tag::Sets_::Set::Attached::Binding : public ydk::Entity
{
    public:
        Binding();
        ~Binding();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf protocol; //type: string
        ydk::YLeaf vrf_name; //type: string
        ydk::YLeaf proto_instance; //type: string
        ydk::YLeaf af_name; //type: AddressFamily
        ydk::YLeaf saf_name; //type: SubAddressFamily
        ydk::YLeaf neighbor_address; //type: string
        ydk::YLeaf neighbor_af_name; //type: AddressFamily
        ydk::YLeaf group_name; //type: string
        ydk::YLeaf direction; //type: AttachPointDirection
        ydk::YLeaf group; //type: Group
        ydk::YLeaf source_protocol; //type: string
        ydk::YLeaf aggregate_network_address; //type: string
        ydk::YLeaf interface_name; //type: string
        ydk::YLeaf instance; //type: string
        ydk::YLeaf area_id; //type: string
        ydk::YLeaf propogate_from; //type: int32
        ydk::YLeaf propogate_to; //type: int32
        ydk::YLeaf route_policy_name; //type: string
        ydk::YLeaf attached_policy; //type: string
        ydk::YLeaf attach_point; //type: string

}; // RoutingPolicyShadow::Sets::Tag::Sets_::Set::Attached::Binding


class RoutingPolicyShadow::Sets::Tag::Unused : public ydk::Entity
{
    public:
        Unused();
        ~Unused();

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

        ydk::YLeafList object; //type: list of  string

}; // RoutingPolicyShadow::Sets::Tag::Unused


class RoutingPolicyShadow::Sets::Tag::Inactive : public ydk::Entity
{
    public:
        Inactive();
        ~Inactive();

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

        ydk::YLeafList object; //type: list of  string

}; // RoutingPolicyShadow::Sets::Tag::Inactive


class RoutingPolicyShadow::Sets::Tag::Active : public ydk::Entity
{
    public:
        Active();
        ~Active();

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

        ydk::YLeafList object; //type: list of  string

}; // RoutingPolicyShadow::Sets::Tag::Active


class RoutingPolicyShadow::Sets::Prefix : public ydk::Entity
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
        std::string get_absolute_path() const override;

        class Sets_; //type: RoutingPolicyShadow::Sets::Prefix::Sets_
        class Unused; //type: RoutingPolicyShadow::Sets::Prefix::Unused
        class Inactive; //type: RoutingPolicyShadow::Sets::Prefix::Inactive
        class Active; //type: RoutingPolicyShadow::Sets::Prefix::Active

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_policy_repository_oper::RoutingPolicyShadow::Sets::Prefix::Sets_> sets;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_policy_repository_oper::RoutingPolicyShadow::Sets::Prefix::Unused> unused;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_policy_repository_oper::RoutingPolicyShadow::Sets::Prefix::Inactive> inactive;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_policy_repository_oper::RoutingPolicyShadow::Sets::Prefix::Active> active;
        
}; // RoutingPolicyShadow::Sets::Prefix


class RoutingPolicyShadow::Sets::Prefix::Sets_ : public ydk::Entity
{
    public:
        Sets_();
        ~Sets_();

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

        class Set; //type: RoutingPolicyShadow::Sets::Prefix::Sets_::Set

        ydk::YList set;
        
}; // RoutingPolicyShadow::Sets::Prefix::Sets_


class RoutingPolicyShadow::Sets::Prefix::Sets_::Set : public ydk::Entity
{
    public:
        Set();
        ~Set();

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

        ydk::YLeaf set_name; //type: string
        class UsedBy; //type: RoutingPolicyShadow::Sets::Prefix::Sets_::Set::UsedBy
        class Attached; //type: RoutingPolicyShadow::Sets::Prefix::Sets_::Set::Attached

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_policy_repository_oper::RoutingPolicyShadow::Sets::Prefix::Sets_::Set::UsedBy> used_by;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_policy_repository_oper::RoutingPolicyShadow::Sets::Prefix::Sets_::Set::Attached> attached;
        
}; // RoutingPolicyShadow::Sets::Prefix::Sets_::Set


class RoutingPolicyShadow::Sets::Prefix::Sets_::Set::UsedBy : public ydk::Entity
{
    public:
        UsedBy();
        ~UsedBy();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Reference; //type: RoutingPolicyShadow::Sets::Prefix::Sets_::Set::UsedBy::Reference

        ydk::YList reference;
        
}; // RoutingPolicyShadow::Sets::Prefix::Sets_::Set::UsedBy


class RoutingPolicyShadow::Sets::Prefix::Sets_::Set::UsedBy::Reference : public ydk::Entity
{
    public:
        Reference();
        ~Reference();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf route_policy_name; //type: string
        ydk::YLeaf used_directly; //type: boolean
        ydk::YLeaf status; //type: ObjectStatus

}; // RoutingPolicyShadow::Sets::Prefix::Sets_::Set::UsedBy::Reference


class RoutingPolicyShadow::Sets::Prefix::Sets_::Set::Attached : public ydk::Entity
{
    public:
        Attached();
        ~Attached();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Binding; //type: RoutingPolicyShadow::Sets::Prefix::Sets_::Set::Attached::Binding

        ydk::YList binding;
        
}; // RoutingPolicyShadow::Sets::Prefix::Sets_::Set::Attached


class RoutingPolicyShadow::Sets::Prefix::Sets_::Set::Attached::Binding : public ydk::Entity
{
    public:
        Binding();
        ~Binding();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf protocol; //type: string
        ydk::YLeaf vrf_name; //type: string
        ydk::YLeaf proto_instance; //type: string
        ydk::YLeaf af_name; //type: AddressFamily
        ydk::YLeaf saf_name; //type: SubAddressFamily
        ydk::YLeaf neighbor_address; //type: string
        ydk::YLeaf neighbor_af_name; //type: AddressFamily
        ydk::YLeaf group_name; //type: string
        ydk::YLeaf direction; //type: AttachPointDirection
        ydk::YLeaf group; //type: Group
        ydk::YLeaf source_protocol; //type: string
        ydk::YLeaf aggregate_network_address; //type: string
        ydk::YLeaf interface_name; //type: string
        ydk::YLeaf instance; //type: string
        ydk::YLeaf area_id; //type: string
        ydk::YLeaf propogate_from; //type: int32
        ydk::YLeaf propogate_to; //type: int32
        ydk::YLeaf route_policy_name; //type: string
        ydk::YLeaf attached_policy; //type: string
        ydk::YLeaf attach_point; //type: string

}; // RoutingPolicyShadow::Sets::Prefix::Sets_::Set::Attached::Binding


class RoutingPolicyShadow::Sets::Prefix::Unused : public ydk::Entity
{
    public:
        Unused();
        ~Unused();

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

        ydk::YLeafList object; //type: list of  string

}; // RoutingPolicyShadow::Sets::Prefix::Unused


class RoutingPolicyShadow::Sets::Prefix::Inactive : public ydk::Entity
{
    public:
        Inactive();
        ~Inactive();

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

        ydk::YLeafList object; //type: list of  string

}; // RoutingPolicyShadow::Sets::Prefix::Inactive


class RoutingPolicyShadow::Sets::Prefix::Active : public ydk::Entity
{
    public:
        Active();
        ~Active();

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

        ydk::YLeafList object; //type: list of  string

}; // RoutingPolicyShadow::Sets::Prefix::Active


class RoutingPolicyShadow::Sets::Community : public ydk::Entity
{
    public:
        Community();
        ~Community();

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

        class Sets_; //type: RoutingPolicyShadow::Sets::Community::Sets_
        class Unused; //type: RoutingPolicyShadow::Sets::Community::Unused
        class Inactive; //type: RoutingPolicyShadow::Sets::Community::Inactive
        class Active; //type: RoutingPolicyShadow::Sets::Community::Active

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_policy_repository_oper::RoutingPolicyShadow::Sets::Community::Sets_> sets;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_policy_repository_oper::RoutingPolicyShadow::Sets::Community::Unused> unused;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_policy_repository_oper::RoutingPolicyShadow::Sets::Community::Inactive> inactive;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_policy_repository_oper::RoutingPolicyShadow::Sets::Community::Active> active;
        
}; // RoutingPolicyShadow::Sets::Community


class RoutingPolicyShadow::Sets::Community::Sets_ : public ydk::Entity
{
    public:
        Sets_();
        ~Sets_();

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

        class Set; //type: RoutingPolicyShadow::Sets::Community::Sets_::Set

        ydk::YList set;
        
}; // RoutingPolicyShadow::Sets::Community::Sets_


class RoutingPolicyShadow::Sets::Community::Sets_::Set : public ydk::Entity
{
    public:
        Set();
        ~Set();

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

        ydk::YLeaf set_name; //type: string
        class UsedBy; //type: RoutingPolicyShadow::Sets::Community::Sets_::Set::UsedBy
        class Attached; //type: RoutingPolicyShadow::Sets::Community::Sets_::Set::Attached

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_policy_repository_oper::RoutingPolicyShadow::Sets::Community::Sets_::Set::UsedBy> used_by;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_policy_repository_oper::RoutingPolicyShadow::Sets::Community::Sets_::Set::Attached> attached;
        
}; // RoutingPolicyShadow::Sets::Community::Sets_::Set


class RoutingPolicyShadow::Sets::Community::Sets_::Set::UsedBy : public ydk::Entity
{
    public:
        UsedBy();
        ~UsedBy();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Reference; //type: RoutingPolicyShadow::Sets::Community::Sets_::Set::UsedBy::Reference

        ydk::YList reference;
        
}; // RoutingPolicyShadow::Sets::Community::Sets_::Set::UsedBy


class RoutingPolicyShadow::Sets::Community::Sets_::Set::UsedBy::Reference : public ydk::Entity
{
    public:
        Reference();
        ~Reference();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf route_policy_name; //type: string
        ydk::YLeaf used_directly; //type: boolean
        ydk::YLeaf status; //type: ObjectStatus

}; // RoutingPolicyShadow::Sets::Community::Sets_::Set::UsedBy::Reference


class RoutingPolicyShadow::Sets::Community::Sets_::Set::Attached : public ydk::Entity
{
    public:
        Attached();
        ~Attached();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Binding; //type: RoutingPolicyShadow::Sets::Community::Sets_::Set::Attached::Binding

        ydk::YList binding;
        
}; // RoutingPolicyShadow::Sets::Community::Sets_::Set::Attached


class RoutingPolicyShadow::Sets::Community::Sets_::Set::Attached::Binding : public ydk::Entity
{
    public:
        Binding();
        ~Binding();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf protocol; //type: string
        ydk::YLeaf vrf_name; //type: string
        ydk::YLeaf proto_instance; //type: string
        ydk::YLeaf af_name; //type: AddressFamily
        ydk::YLeaf saf_name; //type: SubAddressFamily
        ydk::YLeaf neighbor_address; //type: string
        ydk::YLeaf neighbor_af_name; //type: AddressFamily
        ydk::YLeaf group_name; //type: string
        ydk::YLeaf direction; //type: AttachPointDirection
        ydk::YLeaf group; //type: Group
        ydk::YLeaf source_protocol; //type: string
        ydk::YLeaf aggregate_network_address; //type: string
        ydk::YLeaf interface_name; //type: string
        ydk::YLeaf instance; //type: string
        ydk::YLeaf area_id; //type: string
        ydk::YLeaf propogate_from; //type: int32
        ydk::YLeaf propogate_to; //type: int32
        ydk::YLeaf route_policy_name; //type: string
        ydk::YLeaf attached_policy; //type: string
        ydk::YLeaf attach_point; //type: string

}; // RoutingPolicyShadow::Sets::Community::Sets_::Set::Attached::Binding


class RoutingPolicyShadow::Sets::Community::Unused : public ydk::Entity
{
    public:
        Unused();
        ~Unused();

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

        ydk::YLeafList object; //type: list of  string

}; // RoutingPolicyShadow::Sets::Community::Unused


class RoutingPolicyShadow::Sets::Community::Inactive : public ydk::Entity
{
    public:
        Inactive();
        ~Inactive();

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

        ydk::YLeafList object; //type: list of  string

}; // RoutingPolicyShadow::Sets::Community::Inactive


class RoutingPolicyShadow::Sets::Community::Active : public ydk::Entity
{
    public:
        Active();
        ~Active();

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

        ydk::YLeafList object; //type: list of  string

}; // RoutingPolicyShadow::Sets::Community::Active


class RoutingPolicyShadow::Sets::AsPath : public ydk::Entity
{
    public:
        AsPath();
        ~AsPath();

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

        class Sets_; //type: RoutingPolicyShadow::Sets::AsPath::Sets_
        class Unused; //type: RoutingPolicyShadow::Sets::AsPath::Unused
        class Inactive; //type: RoutingPolicyShadow::Sets::AsPath::Inactive
        class Active; //type: RoutingPolicyShadow::Sets::AsPath::Active

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_policy_repository_oper::RoutingPolicyShadow::Sets::AsPath::Sets_> sets;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_policy_repository_oper::RoutingPolicyShadow::Sets::AsPath::Unused> unused;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_policy_repository_oper::RoutingPolicyShadow::Sets::AsPath::Inactive> inactive;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_policy_repository_oper::RoutingPolicyShadow::Sets::AsPath::Active> active;
        
}; // RoutingPolicyShadow::Sets::AsPath


class RoutingPolicyShadow::Sets::AsPath::Sets_ : public ydk::Entity
{
    public:
        Sets_();
        ~Sets_();

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

        class Set; //type: RoutingPolicyShadow::Sets::AsPath::Sets_::Set

        ydk::YList set;
        
}; // RoutingPolicyShadow::Sets::AsPath::Sets_


class RoutingPolicyShadow::Sets::AsPath::Sets_::Set : public ydk::Entity
{
    public:
        Set();
        ~Set();

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

        ydk::YLeaf set_name; //type: string
        class UsedBy; //type: RoutingPolicyShadow::Sets::AsPath::Sets_::Set::UsedBy
        class Attached; //type: RoutingPolicyShadow::Sets::AsPath::Sets_::Set::Attached

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_policy_repository_oper::RoutingPolicyShadow::Sets::AsPath::Sets_::Set::UsedBy> used_by;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_policy_repository_oper::RoutingPolicyShadow::Sets::AsPath::Sets_::Set::Attached> attached;
        
}; // RoutingPolicyShadow::Sets::AsPath::Sets_::Set


class RoutingPolicyShadow::Sets::AsPath::Sets_::Set::UsedBy : public ydk::Entity
{
    public:
        UsedBy();
        ~UsedBy();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Reference; //type: RoutingPolicyShadow::Sets::AsPath::Sets_::Set::UsedBy::Reference

        ydk::YList reference;
        
}; // RoutingPolicyShadow::Sets::AsPath::Sets_::Set::UsedBy


class RoutingPolicyShadow::Sets::AsPath::Sets_::Set::UsedBy::Reference : public ydk::Entity
{
    public:
        Reference();
        ~Reference();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf route_policy_name; //type: string
        ydk::YLeaf used_directly; //type: boolean
        ydk::YLeaf status; //type: ObjectStatus

}; // RoutingPolicyShadow::Sets::AsPath::Sets_::Set::UsedBy::Reference


class RoutingPolicyShadow::Sets::AsPath::Sets_::Set::Attached : public ydk::Entity
{
    public:
        Attached();
        ~Attached();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Binding; //type: RoutingPolicyShadow::Sets::AsPath::Sets_::Set::Attached::Binding

        ydk::YList binding;
        
}; // RoutingPolicyShadow::Sets::AsPath::Sets_::Set::Attached


class RoutingPolicyShadow::Sets::AsPath::Sets_::Set::Attached::Binding : public ydk::Entity
{
    public:
        Binding();
        ~Binding();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf protocol; //type: string
        ydk::YLeaf vrf_name; //type: string
        ydk::YLeaf proto_instance; //type: string
        ydk::YLeaf af_name; //type: AddressFamily
        ydk::YLeaf saf_name; //type: SubAddressFamily
        ydk::YLeaf neighbor_address; //type: string
        ydk::YLeaf neighbor_af_name; //type: AddressFamily
        ydk::YLeaf group_name; //type: string
        ydk::YLeaf direction; //type: AttachPointDirection
        ydk::YLeaf group; //type: Group
        ydk::YLeaf source_protocol; //type: string
        ydk::YLeaf aggregate_network_address; //type: string
        ydk::YLeaf interface_name; //type: string
        ydk::YLeaf instance; //type: string
        ydk::YLeaf area_id; //type: string
        ydk::YLeaf propogate_from; //type: int32
        ydk::YLeaf propogate_to; //type: int32
        ydk::YLeaf route_policy_name; //type: string
        ydk::YLeaf attached_policy; //type: string
        ydk::YLeaf attach_point; //type: string

}; // RoutingPolicyShadow::Sets::AsPath::Sets_::Set::Attached::Binding


class RoutingPolicyShadow::Sets::AsPath::Unused : public ydk::Entity
{
    public:
        Unused();
        ~Unused();

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

        ydk::YLeafList object; //type: list of  string

}; // RoutingPolicyShadow::Sets::AsPath::Unused


class RoutingPolicyShadow::Sets::AsPath::Inactive : public ydk::Entity
{
    public:
        Inactive();
        ~Inactive();

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

        ydk::YLeafList object; //type: list of  string

}; // RoutingPolicyShadow::Sets::AsPath::Inactive


class RoutingPolicyShadow::Sets::AsPath::Active : public ydk::Entity
{
    public:
        Active();
        ~Active();

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

        ydk::YLeafList object; //type: list of  string

}; // RoutingPolicyShadow::Sets::AsPath::Active


class RoutingPolicyShadow::Sets::LargeCommunity : public ydk::Entity
{
    public:
        LargeCommunity();
        ~LargeCommunity();

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

        class Sets_; //type: RoutingPolicyShadow::Sets::LargeCommunity::Sets_
        class Unused; //type: RoutingPolicyShadow::Sets::LargeCommunity::Unused
        class Inactive; //type: RoutingPolicyShadow::Sets::LargeCommunity::Inactive
        class Active; //type: RoutingPolicyShadow::Sets::LargeCommunity::Active

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_policy_repository_oper::RoutingPolicyShadow::Sets::LargeCommunity::Sets_> sets;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_policy_repository_oper::RoutingPolicyShadow::Sets::LargeCommunity::Unused> unused;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_policy_repository_oper::RoutingPolicyShadow::Sets::LargeCommunity::Inactive> inactive;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_policy_repository_oper::RoutingPolicyShadow::Sets::LargeCommunity::Active> active;
        
}; // RoutingPolicyShadow::Sets::LargeCommunity


class RoutingPolicyShadow::Sets::LargeCommunity::Sets_ : public ydk::Entity
{
    public:
        Sets_();
        ~Sets_();

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

        class Set; //type: RoutingPolicyShadow::Sets::LargeCommunity::Sets_::Set

        ydk::YList set;
        
}; // RoutingPolicyShadow::Sets::LargeCommunity::Sets_


class RoutingPolicyShadow::Sets::LargeCommunity::Sets_::Set : public ydk::Entity
{
    public:
        Set();
        ~Set();

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

        ydk::YLeaf set_name; //type: string
        class UsedBy; //type: RoutingPolicyShadow::Sets::LargeCommunity::Sets_::Set::UsedBy
        class Attached; //type: RoutingPolicyShadow::Sets::LargeCommunity::Sets_::Set::Attached

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_policy_repository_oper::RoutingPolicyShadow::Sets::LargeCommunity::Sets_::Set::UsedBy> used_by;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_policy_repository_oper::RoutingPolicyShadow::Sets::LargeCommunity::Sets_::Set::Attached> attached;
        
}; // RoutingPolicyShadow::Sets::LargeCommunity::Sets_::Set


class RoutingPolicyShadow::Sets::LargeCommunity::Sets_::Set::UsedBy : public ydk::Entity
{
    public:
        UsedBy();
        ~UsedBy();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Reference; //type: RoutingPolicyShadow::Sets::LargeCommunity::Sets_::Set::UsedBy::Reference

        ydk::YList reference;
        
}; // RoutingPolicyShadow::Sets::LargeCommunity::Sets_::Set::UsedBy


class RoutingPolicyShadow::Sets::LargeCommunity::Sets_::Set::UsedBy::Reference : public ydk::Entity
{
    public:
        Reference();
        ~Reference();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf route_policy_name; //type: string
        ydk::YLeaf used_directly; //type: boolean
        ydk::YLeaf status; //type: ObjectStatus

}; // RoutingPolicyShadow::Sets::LargeCommunity::Sets_::Set::UsedBy::Reference


class RoutingPolicyShadow::Sets::LargeCommunity::Sets_::Set::Attached : public ydk::Entity
{
    public:
        Attached();
        ~Attached();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Binding; //type: RoutingPolicyShadow::Sets::LargeCommunity::Sets_::Set::Attached::Binding

        ydk::YList binding;
        
}; // RoutingPolicyShadow::Sets::LargeCommunity::Sets_::Set::Attached


class RoutingPolicyShadow::Sets::LargeCommunity::Sets_::Set::Attached::Binding : public ydk::Entity
{
    public:
        Binding();
        ~Binding();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf protocol; //type: string
        ydk::YLeaf vrf_name; //type: string
        ydk::YLeaf proto_instance; //type: string
        ydk::YLeaf af_name; //type: AddressFamily
        ydk::YLeaf saf_name; //type: SubAddressFamily
        ydk::YLeaf neighbor_address; //type: string
        ydk::YLeaf neighbor_af_name; //type: AddressFamily
        ydk::YLeaf group_name; //type: string
        ydk::YLeaf direction; //type: AttachPointDirection
        ydk::YLeaf group; //type: Group
        ydk::YLeaf source_protocol; //type: string
        ydk::YLeaf aggregate_network_address; //type: string
        ydk::YLeaf interface_name; //type: string
        ydk::YLeaf instance; //type: string
        ydk::YLeaf area_id; //type: string
        ydk::YLeaf propogate_from; //type: int32
        ydk::YLeaf propogate_to; //type: int32
        ydk::YLeaf route_policy_name; //type: string
        ydk::YLeaf attached_policy; //type: string
        ydk::YLeaf attach_point; //type: string

}; // RoutingPolicyShadow::Sets::LargeCommunity::Sets_::Set::Attached::Binding


class RoutingPolicyShadow::Sets::LargeCommunity::Unused : public ydk::Entity
{
    public:
        Unused();
        ~Unused();

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

        ydk::YLeafList object; //type: list of  string

}; // RoutingPolicyShadow::Sets::LargeCommunity::Unused


class RoutingPolicyShadow::Sets::LargeCommunity::Inactive : public ydk::Entity
{
    public:
        Inactive();
        ~Inactive();

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

        ydk::YLeafList object; //type: list of  string

}; // RoutingPolicyShadow::Sets::LargeCommunity::Inactive


class RoutingPolicyShadow::Sets::LargeCommunity::Active : public ydk::Entity
{
    public:
        Active();
        ~Active();

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

        ydk::YLeafList object; //type: list of  string

}; // RoutingPolicyShadow::Sets::LargeCommunity::Active


class RoutingPolicyShadow::Sets::Esi : public ydk::Entity
{
    public:
        Esi();
        ~Esi();

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

        class Sets_; //type: RoutingPolicyShadow::Sets::Esi::Sets_
        class Unused; //type: RoutingPolicyShadow::Sets::Esi::Unused
        class Inactive; //type: RoutingPolicyShadow::Sets::Esi::Inactive
        class Active; //type: RoutingPolicyShadow::Sets::Esi::Active

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_policy_repository_oper::RoutingPolicyShadow::Sets::Esi::Sets_> sets;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_policy_repository_oper::RoutingPolicyShadow::Sets::Esi::Unused> unused;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_policy_repository_oper::RoutingPolicyShadow::Sets::Esi::Inactive> inactive;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_policy_repository_oper::RoutingPolicyShadow::Sets::Esi::Active> active;
        
}; // RoutingPolicyShadow::Sets::Esi


class RoutingPolicyShadow::Sets::Esi::Sets_ : public ydk::Entity
{
    public:
        Sets_();
        ~Sets_();

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

        class Set; //type: RoutingPolicyShadow::Sets::Esi::Sets_::Set

        ydk::YList set;
        
}; // RoutingPolicyShadow::Sets::Esi::Sets_


class RoutingPolicyShadow::Sets::Esi::Sets_::Set : public ydk::Entity
{
    public:
        Set();
        ~Set();

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

        ydk::YLeaf set_name; //type: string
        class UsedBy; //type: RoutingPolicyShadow::Sets::Esi::Sets_::Set::UsedBy
        class Attached; //type: RoutingPolicyShadow::Sets::Esi::Sets_::Set::Attached

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_policy_repository_oper::RoutingPolicyShadow::Sets::Esi::Sets_::Set::UsedBy> used_by;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_policy_repository_oper::RoutingPolicyShadow::Sets::Esi::Sets_::Set::Attached> attached;
        
}; // RoutingPolicyShadow::Sets::Esi::Sets_::Set


class RoutingPolicyShadow::Sets::Esi::Sets_::Set::UsedBy : public ydk::Entity
{
    public:
        UsedBy();
        ~UsedBy();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Reference; //type: RoutingPolicyShadow::Sets::Esi::Sets_::Set::UsedBy::Reference

        ydk::YList reference;
        
}; // RoutingPolicyShadow::Sets::Esi::Sets_::Set::UsedBy


class RoutingPolicyShadow::Sets::Esi::Sets_::Set::UsedBy::Reference : public ydk::Entity
{
    public:
        Reference();
        ~Reference();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf route_policy_name; //type: string
        ydk::YLeaf used_directly; //type: boolean
        ydk::YLeaf status; //type: ObjectStatus

}; // RoutingPolicyShadow::Sets::Esi::Sets_::Set::UsedBy::Reference


class RoutingPolicyShadow::Sets::Esi::Sets_::Set::Attached : public ydk::Entity
{
    public:
        Attached();
        ~Attached();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Binding; //type: RoutingPolicyShadow::Sets::Esi::Sets_::Set::Attached::Binding

        ydk::YList binding;
        
}; // RoutingPolicyShadow::Sets::Esi::Sets_::Set::Attached


class RoutingPolicyShadow::Sets::Esi::Sets_::Set::Attached::Binding : public ydk::Entity
{
    public:
        Binding();
        ~Binding();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf protocol; //type: string
        ydk::YLeaf vrf_name; //type: string
        ydk::YLeaf proto_instance; //type: string
        ydk::YLeaf af_name; //type: AddressFamily
        ydk::YLeaf saf_name; //type: SubAddressFamily
        ydk::YLeaf neighbor_address; //type: string
        ydk::YLeaf neighbor_af_name; //type: AddressFamily
        ydk::YLeaf group_name; //type: string
        ydk::YLeaf direction; //type: AttachPointDirection
        ydk::YLeaf group; //type: Group
        ydk::YLeaf source_protocol; //type: string
        ydk::YLeaf aggregate_network_address; //type: string
        ydk::YLeaf interface_name; //type: string
        ydk::YLeaf instance; //type: string
        ydk::YLeaf area_id; //type: string
        ydk::YLeaf propogate_from; //type: int32
        ydk::YLeaf propogate_to; //type: int32
        ydk::YLeaf route_policy_name; //type: string
        ydk::YLeaf attached_policy; //type: string
        ydk::YLeaf attach_point; //type: string

}; // RoutingPolicyShadow::Sets::Esi::Sets_::Set::Attached::Binding


class RoutingPolicyShadow::Sets::Esi::Unused : public ydk::Entity
{
    public:
        Unused();
        ~Unused();

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

        ydk::YLeafList object; //type: list of  string

}; // RoutingPolicyShadow::Sets::Esi::Unused


class RoutingPolicyShadow::Sets::Esi::Inactive : public ydk::Entity
{
    public:
        Inactive();
        ~Inactive();

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

        ydk::YLeafList object; //type: list of  string

}; // RoutingPolicyShadow::Sets::Esi::Inactive


class RoutingPolicyShadow::Sets::Esi::Active : public ydk::Entity
{
    public:
        Active();
        ~Active();

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

        ydk::YLeafList object; //type: list of  string

}; // RoutingPolicyShadow::Sets::Esi::Active


class RoutingPolicyShadow::Sets::ExtendedCommunityBandwidth : public ydk::Entity
{
    public:
        ExtendedCommunityBandwidth();
        ~ExtendedCommunityBandwidth();

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

        class Sets_; //type: RoutingPolicyShadow::Sets::ExtendedCommunityBandwidth::Sets_
        class Unused; //type: RoutingPolicyShadow::Sets::ExtendedCommunityBandwidth::Unused
        class Inactive; //type: RoutingPolicyShadow::Sets::ExtendedCommunityBandwidth::Inactive

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_policy_repository_oper::RoutingPolicyShadow::Sets::ExtendedCommunityBandwidth::Sets_> sets;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_policy_repository_oper::RoutingPolicyShadow::Sets::ExtendedCommunityBandwidth::Unused> unused;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_policy_repository_oper::RoutingPolicyShadow::Sets::ExtendedCommunityBandwidth::Inactive> inactive;
        
}; // RoutingPolicyShadow::Sets::ExtendedCommunityBandwidth


class RoutingPolicyShadow::Sets::ExtendedCommunityBandwidth::Sets_ : public ydk::Entity
{
    public:
        Sets_();
        ~Sets_();

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

        class Set; //type: RoutingPolicyShadow::Sets::ExtendedCommunityBandwidth::Sets_::Set

        ydk::YList set;
        
}; // RoutingPolicyShadow::Sets::ExtendedCommunityBandwidth::Sets_


class RoutingPolicyShadow::Sets::ExtendedCommunityBandwidth::Sets_::Set : public ydk::Entity
{
    public:
        Set();
        ~Set();

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

        ydk::YLeaf set_name; //type: string
        class UsedBy; //type: RoutingPolicyShadow::Sets::ExtendedCommunityBandwidth::Sets_::Set::UsedBy
        class Attached; //type: RoutingPolicyShadow::Sets::ExtendedCommunityBandwidth::Sets_::Set::Attached

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_policy_repository_oper::RoutingPolicyShadow::Sets::ExtendedCommunityBandwidth::Sets_::Set::UsedBy> used_by;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_policy_repository_oper::RoutingPolicyShadow::Sets::ExtendedCommunityBandwidth::Sets_::Set::Attached> attached;
        
}; // RoutingPolicyShadow::Sets::ExtendedCommunityBandwidth::Sets_::Set


class RoutingPolicyShadow::Sets::ExtendedCommunityBandwidth::Sets_::Set::UsedBy : public ydk::Entity
{
    public:
        UsedBy();
        ~UsedBy();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Reference; //type: RoutingPolicyShadow::Sets::ExtendedCommunityBandwidth::Sets_::Set::UsedBy::Reference

        ydk::YList reference;
        
}; // RoutingPolicyShadow::Sets::ExtendedCommunityBandwidth::Sets_::Set::UsedBy


class RoutingPolicyShadow::Sets::ExtendedCommunityBandwidth::Sets_::Set::UsedBy::Reference : public ydk::Entity
{
    public:
        Reference();
        ~Reference();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf route_policy_name; //type: string
        ydk::YLeaf used_directly; //type: boolean
        ydk::YLeaf status; //type: ObjectStatus

}; // RoutingPolicyShadow::Sets::ExtendedCommunityBandwidth::Sets_::Set::UsedBy::Reference


class RoutingPolicyShadow::Sets::ExtendedCommunityBandwidth::Sets_::Set::Attached : public ydk::Entity
{
    public:
        Attached();
        ~Attached();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Binding; //type: RoutingPolicyShadow::Sets::ExtendedCommunityBandwidth::Sets_::Set::Attached::Binding

        ydk::YList binding;
        
}; // RoutingPolicyShadow::Sets::ExtendedCommunityBandwidth::Sets_::Set::Attached


class RoutingPolicyShadow::Sets::ExtendedCommunityBandwidth::Sets_::Set::Attached::Binding : public ydk::Entity
{
    public:
        Binding();
        ~Binding();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf protocol; //type: string
        ydk::YLeaf vrf_name; //type: string
        ydk::YLeaf proto_instance; //type: string
        ydk::YLeaf af_name; //type: AddressFamily
        ydk::YLeaf saf_name; //type: SubAddressFamily
        ydk::YLeaf neighbor_address; //type: string
        ydk::YLeaf neighbor_af_name; //type: AddressFamily
        ydk::YLeaf group_name; //type: string
        ydk::YLeaf direction; //type: AttachPointDirection
        ydk::YLeaf group; //type: Group
        ydk::YLeaf source_protocol; //type: string
        ydk::YLeaf aggregate_network_address; //type: string
        ydk::YLeaf interface_name; //type: string
        ydk::YLeaf instance; //type: string
        ydk::YLeaf area_id; //type: string
        ydk::YLeaf propogate_from; //type: int32
        ydk::YLeaf propogate_to; //type: int32
        ydk::YLeaf route_policy_name; //type: string
        ydk::YLeaf attached_policy; //type: string
        ydk::YLeaf attach_point; //type: string

}; // RoutingPolicyShadow::Sets::ExtendedCommunityBandwidth::Sets_::Set::Attached::Binding


class RoutingPolicyShadow::Sets::ExtendedCommunityBandwidth::Unused : public ydk::Entity
{
    public:
        Unused();
        ~Unused();

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

        ydk::YLeafList object; //type: list of  string

}; // RoutingPolicyShadow::Sets::ExtendedCommunityBandwidth::Unused


class RoutingPolicyShadow::Sets::ExtendedCommunityBandwidth::Inactive : public ydk::Entity
{
    public:
        Inactive();
        ~Inactive();

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

        ydk::YLeafList object; //type: list of  string

}; // RoutingPolicyShadow::Sets::ExtendedCommunityBandwidth::Inactive


class RoutingPolicyShadow::Sets::ExtendedCommunityRt : public ydk::Entity
{
    public:
        ExtendedCommunityRt();
        ~ExtendedCommunityRt();

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

        class Sets_; //type: RoutingPolicyShadow::Sets::ExtendedCommunityRt::Sets_
        class Unused; //type: RoutingPolicyShadow::Sets::ExtendedCommunityRt::Unused
        class Inactive; //type: RoutingPolicyShadow::Sets::ExtendedCommunityRt::Inactive
        class Active; //type: RoutingPolicyShadow::Sets::ExtendedCommunityRt::Active

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_policy_repository_oper::RoutingPolicyShadow::Sets::ExtendedCommunityRt::Sets_> sets;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_policy_repository_oper::RoutingPolicyShadow::Sets::ExtendedCommunityRt::Unused> unused;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_policy_repository_oper::RoutingPolicyShadow::Sets::ExtendedCommunityRt::Inactive> inactive;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_policy_repository_oper::RoutingPolicyShadow::Sets::ExtendedCommunityRt::Active> active;
        
}; // RoutingPolicyShadow::Sets::ExtendedCommunityRt


class RoutingPolicyShadow::Sets::ExtendedCommunityRt::Sets_ : public ydk::Entity
{
    public:
        Sets_();
        ~Sets_();

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

        class Set; //type: RoutingPolicyShadow::Sets::ExtendedCommunityRt::Sets_::Set

        ydk::YList set;
        
}; // RoutingPolicyShadow::Sets::ExtendedCommunityRt::Sets_


class RoutingPolicyShadow::Sets::ExtendedCommunityRt::Sets_::Set : public ydk::Entity
{
    public:
        Set();
        ~Set();

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

        ydk::YLeaf set_name; //type: string
        class UsedBy; //type: RoutingPolicyShadow::Sets::ExtendedCommunityRt::Sets_::Set::UsedBy
        class Attached; //type: RoutingPolicyShadow::Sets::ExtendedCommunityRt::Sets_::Set::Attached

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_policy_repository_oper::RoutingPolicyShadow::Sets::ExtendedCommunityRt::Sets_::Set::UsedBy> used_by;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_policy_repository_oper::RoutingPolicyShadow::Sets::ExtendedCommunityRt::Sets_::Set::Attached> attached;
        
}; // RoutingPolicyShadow::Sets::ExtendedCommunityRt::Sets_::Set


class RoutingPolicyShadow::Sets::ExtendedCommunityRt::Sets_::Set::UsedBy : public ydk::Entity
{
    public:
        UsedBy();
        ~UsedBy();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Reference; //type: RoutingPolicyShadow::Sets::ExtendedCommunityRt::Sets_::Set::UsedBy::Reference

        ydk::YList reference;
        
}; // RoutingPolicyShadow::Sets::ExtendedCommunityRt::Sets_::Set::UsedBy


class RoutingPolicyShadow::Sets::ExtendedCommunityRt::Sets_::Set::UsedBy::Reference : public ydk::Entity
{
    public:
        Reference();
        ~Reference();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf route_policy_name; //type: string
        ydk::YLeaf used_directly; //type: boolean
        ydk::YLeaf status; //type: ObjectStatus

}; // RoutingPolicyShadow::Sets::ExtendedCommunityRt::Sets_::Set::UsedBy::Reference


class RoutingPolicyShadow::Sets::ExtendedCommunityRt::Sets_::Set::Attached : public ydk::Entity
{
    public:
        Attached();
        ~Attached();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Binding; //type: RoutingPolicyShadow::Sets::ExtendedCommunityRt::Sets_::Set::Attached::Binding

        ydk::YList binding;
        
}; // RoutingPolicyShadow::Sets::ExtendedCommunityRt::Sets_::Set::Attached


class RoutingPolicyShadow::Sets::ExtendedCommunityRt::Sets_::Set::Attached::Binding : public ydk::Entity
{
    public:
        Binding();
        ~Binding();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf protocol; //type: string
        ydk::YLeaf vrf_name; //type: string
        ydk::YLeaf proto_instance; //type: string
        ydk::YLeaf af_name; //type: AddressFamily
        ydk::YLeaf saf_name; //type: SubAddressFamily
        ydk::YLeaf neighbor_address; //type: string
        ydk::YLeaf neighbor_af_name; //type: AddressFamily
        ydk::YLeaf group_name; //type: string
        ydk::YLeaf direction; //type: AttachPointDirection
        ydk::YLeaf group; //type: Group
        ydk::YLeaf source_protocol; //type: string
        ydk::YLeaf aggregate_network_address; //type: string
        ydk::YLeaf interface_name; //type: string
        ydk::YLeaf instance; //type: string
        ydk::YLeaf area_id; //type: string
        ydk::YLeaf propogate_from; //type: int32
        ydk::YLeaf propogate_to; //type: int32
        ydk::YLeaf route_policy_name; //type: string
        ydk::YLeaf attached_policy; //type: string
        ydk::YLeaf attach_point; //type: string

}; // RoutingPolicyShadow::Sets::ExtendedCommunityRt::Sets_::Set::Attached::Binding


class RoutingPolicyShadow::Sets::ExtendedCommunityRt::Unused : public ydk::Entity
{
    public:
        Unused();
        ~Unused();

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

        ydk::YLeafList object; //type: list of  string

}; // RoutingPolicyShadow::Sets::ExtendedCommunityRt::Unused


class RoutingPolicyShadow::Sets::ExtendedCommunityRt::Inactive : public ydk::Entity
{
    public:
        Inactive();
        ~Inactive();

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

        ydk::YLeafList object; //type: list of  string

}; // RoutingPolicyShadow::Sets::ExtendedCommunityRt::Inactive


class RoutingPolicyShadow::Sets::ExtendedCommunityRt::Active : public ydk::Entity
{
    public:
        Active();
        ~Active();

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

        ydk::YLeafList object; //type: list of  string

}; // RoutingPolicyShadow::Sets::ExtendedCommunityRt::Active


class RoutingPolicyShadow::Sets::Rd : public ydk::Entity
{
    public:
        Rd();
        ~Rd();

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

        class Sets_; //type: RoutingPolicyShadow::Sets::Rd::Sets_
        class Unused; //type: RoutingPolicyShadow::Sets::Rd::Unused
        class Inactive; //type: RoutingPolicyShadow::Sets::Rd::Inactive
        class Active; //type: RoutingPolicyShadow::Sets::Rd::Active

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_policy_repository_oper::RoutingPolicyShadow::Sets::Rd::Sets_> sets;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_policy_repository_oper::RoutingPolicyShadow::Sets::Rd::Unused> unused;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_policy_repository_oper::RoutingPolicyShadow::Sets::Rd::Inactive> inactive;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_policy_repository_oper::RoutingPolicyShadow::Sets::Rd::Active> active;
        
}; // RoutingPolicyShadow::Sets::Rd


class RoutingPolicyShadow::Sets::Rd::Sets_ : public ydk::Entity
{
    public:
        Sets_();
        ~Sets_();

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

        class Set; //type: RoutingPolicyShadow::Sets::Rd::Sets_::Set

        ydk::YList set;
        
}; // RoutingPolicyShadow::Sets::Rd::Sets_


class RoutingPolicyShadow::Sets::Rd::Sets_::Set : public ydk::Entity
{
    public:
        Set();
        ~Set();

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

        ydk::YLeaf set_name; //type: string
        class UsedBy; //type: RoutingPolicyShadow::Sets::Rd::Sets_::Set::UsedBy
        class Attached; //type: RoutingPolicyShadow::Sets::Rd::Sets_::Set::Attached

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_policy_repository_oper::RoutingPolicyShadow::Sets::Rd::Sets_::Set::UsedBy> used_by;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_policy_repository_oper::RoutingPolicyShadow::Sets::Rd::Sets_::Set::Attached> attached;
        
}; // RoutingPolicyShadow::Sets::Rd::Sets_::Set


class RoutingPolicyShadow::Sets::Rd::Sets_::Set::UsedBy : public ydk::Entity
{
    public:
        UsedBy();
        ~UsedBy();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Reference; //type: RoutingPolicyShadow::Sets::Rd::Sets_::Set::UsedBy::Reference

        ydk::YList reference;
        
}; // RoutingPolicyShadow::Sets::Rd::Sets_::Set::UsedBy


class RoutingPolicyShadow::Sets::Rd::Sets_::Set::UsedBy::Reference : public ydk::Entity
{
    public:
        Reference();
        ~Reference();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf route_policy_name; //type: string
        ydk::YLeaf used_directly; //type: boolean
        ydk::YLeaf status; //type: ObjectStatus

}; // RoutingPolicyShadow::Sets::Rd::Sets_::Set::UsedBy::Reference


class RoutingPolicyShadow::Sets::Rd::Sets_::Set::Attached : public ydk::Entity
{
    public:
        Attached();
        ~Attached();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Binding; //type: RoutingPolicyShadow::Sets::Rd::Sets_::Set::Attached::Binding

        ydk::YList binding;
        
}; // RoutingPolicyShadow::Sets::Rd::Sets_::Set::Attached


class RoutingPolicyShadow::Sets::Rd::Sets_::Set::Attached::Binding : public ydk::Entity
{
    public:
        Binding();
        ~Binding();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf protocol; //type: string
        ydk::YLeaf vrf_name; //type: string
        ydk::YLeaf proto_instance; //type: string
        ydk::YLeaf af_name; //type: AddressFamily
        ydk::YLeaf saf_name; //type: SubAddressFamily
        ydk::YLeaf neighbor_address; //type: string
        ydk::YLeaf neighbor_af_name; //type: AddressFamily
        ydk::YLeaf group_name; //type: string
        ydk::YLeaf direction; //type: AttachPointDirection
        ydk::YLeaf group; //type: Group
        ydk::YLeaf source_protocol; //type: string
        ydk::YLeaf aggregate_network_address; //type: string
        ydk::YLeaf interface_name; //type: string
        ydk::YLeaf instance; //type: string
        ydk::YLeaf area_id; //type: string
        ydk::YLeaf propogate_from; //type: int32
        ydk::YLeaf propogate_to; //type: int32
        ydk::YLeaf route_policy_name; //type: string
        ydk::YLeaf attached_policy; //type: string
        ydk::YLeaf attach_point; //type: string

}; // RoutingPolicyShadow::Sets::Rd::Sets_::Set::Attached::Binding


class RoutingPolicyShadow::Sets::Rd::Unused : public ydk::Entity
{
    public:
        Unused();
        ~Unused();

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

        ydk::YLeafList object; //type: list of  string

}; // RoutingPolicyShadow::Sets::Rd::Unused


class RoutingPolicyShadow::Sets::Rd::Inactive : public ydk::Entity
{
    public:
        Inactive();
        ~Inactive();

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

        ydk::YLeafList object; //type: list of  string

}; // RoutingPolicyShadow::Sets::Rd::Inactive


class RoutingPolicyShadow::Sets::Rd::Active : public ydk::Entity
{
    public:
        Active();
        ~Active();

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

        ydk::YLeafList object; //type: list of  string

}; // RoutingPolicyShadow::Sets::Rd::Active


class RoutingPolicyShadow::Sets::Mac : public ydk::Entity
{
    public:
        Mac();
        ~Mac();

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

        class Sets_; //type: RoutingPolicyShadow::Sets::Mac::Sets_
        class Unused; //type: RoutingPolicyShadow::Sets::Mac::Unused
        class Inactive; //type: RoutingPolicyShadow::Sets::Mac::Inactive
        class Active; //type: RoutingPolicyShadow::Sets::Mac::Active

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_policy_repository_oper::RoutingPolicyShadow::Sets::Mac::Sets_> sets;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_policy_repository_oper::RoutingPolicyShadow::Sets::Mac::Unused> unused;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_policy_repository_oper::RoutingPolicyShadow::Sets::Mac::Inactive> inactive;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_policy_repository_oper::RoutingPolicyShadow::Sets::Mac::Active> active;
        
}; // RoutingPolicyShadow::Sets::Mac


class RoutingPolicyShadow::Sets::Mac::Sets_ : public ydk::Entity
{
    public:
        Sets_();
        ~Sets_();

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

        class Set; //type: RoutingPolicyShadow::Sets::Mac::Sets_::Set

        ydk::YList set;
        
}; // RoutingPolicyShadow::Sets::Mac::Sets_


class RoutingPolicyShadow::Sets::Mac::Sets_::Set : public ydk::Entity
{
    public:
        Set();
        ~Set();

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

        ydk::YLeaf set_name; //type: string
        class UsedBy; //type: RoutingPolicyShadow::Sets::Mac::Sets_::Set::UsedBy
        class Attached; //type: RoutingPolicyShadow::Sets::Mac::Sets_::Set::Attached

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_policy_repository_oper::RoutingPolicyShadow::Sets::Mac::Sets_::Set::UsedBy> used_by;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_policy_repository_oper::RoutingPolicyShadow::Sets::Mac::Sets_::Set::Attached> attached;
        
}; // RoutingPolicyShadow::Sets::Mac::Sets_::Set


class RoutingPolicyShadow::Sets::Mac::Sets_::Set::UsedBy : public ydk::Entity
{
    public:
        UsedBy();
        ~UsedBy();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Reference; //type: RoutingPolicyShadow::Sets::Mac::Sets_::Set::UsedBy::Reference

        ydk::YList reference;
        
}; // RoutingPolicyShadow::Sets::Mac::Sets_::Set::UsedBy


class RoutingPolicyShadow::Sets::Mac::Sets_::Set::UsedBy::Reference : public ydk::Entity
{
    public:
        Reference();
        ~Reference();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf route_policy_name; //type: string
        ydk::YLeaf used_directly; //type: boolean
        ydk::YLeaf status; //type: ObjectStatus

}; // RoutingPolicyShadow::Sets::Mac::Sets_::Set::UsedBy::Reference


class RoutingPolicyShadow::Sets::Mac::Sets_::Set::Attached : public ydk::Entity
{
    public:
        Attached();
        ~Attached();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Binding; //type: RoutingPolicyShadow::Sets::Mac::Sets_::Set::Attached::Binding

        ydk::YList binding;
        
}; // RoutingPolicyShadow::Sets::Mac::Sets_::Set::Attached


class RoutingPolicyShadow::Sets::Mac::Sets_::Set::Attached::Binding : public ydk::Entity
{
    public:
        Binding();
        ~Binding();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf protocol; //type: string
        ydk::YLeaf vrf_name; //type: string
        ydk::YLeaf proto_instance; //type: string
        ydk::YLeaf af_name; //type: AddressFamily
        ydk::YLeaf saf_name; //type: SubAddressFamily
        ydk::YLeaf neighbor_address; //type: string
        ydk::YLeaf neighbor_af_name; //type: AddressFamily
        ydk::YLeaf group_name; //type: string
        ydk::YLeaf direction; //type: AttachPointDirection
        ydk::YLeaf group; //type: Group
        ydk::YLeaf source_protocol; //type: string
        ydk::YLeaf aggregate_network_address; //type: string
        ydk::YLeaf interface_name; //type: string
        ydk::YLeaf instance; //type: string
        ydk::YLeaf area_id; //type: string
        ydk::YLeaf propogate_from; //type: int32
        ydk::YLeaf propogate_to; //type: int32
        ydk::YLeaf route_policy_name; //type: string
        ydk::YLeaf attached_policy; //type: string
        ydk::YLeaf attach_point; //type: string

}; // RoutingPolicyShadow::Sets::Mac::Sets_::Set::Attached::Binding


class RoutingPolicyShadow::Sets::Mac::Unused : public ydk::Entity
{
    public:
        Unused();
        ~Unused();

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

        ydk::YLeafList object; //type: list of  string

}; // RoutingPolicyShadow::Sets::Mac::Unused


class RoutingPolicyShadow::Sets::Mac::Inactive : public ydk::Entity
{
    public:
        Inactive();
        ~Inactive();

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

        ydk::YLeafList object; //type: list of  string

}; // RoutingPolicyShadow::Sets::Mac::Inactive


class RoutingPolicyShadow::Sets::Mac::Active : public ydk::Entity
{
    public:
        Active();
        ~Active();

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

        ydk::YLeafList object; //type: list of  string

}; // RoutingPolicyShadow::Sets::Mac::Active


class RoutingPolicyShadow::Sets::ExtendedCommunityCost : public ydk::Entity
{
    public:
        ExtendedCommunityCost();
        ~ExtendedCommunityCost();

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

        class Sets_; //type: RoutingPolicyShadow::Sets::ExtendedCommunityCost::Sets_
        class Unused; //type: RoutingPolicyShadow::Sets::ExtendedCommunityCost::Unused
        class Inactive; //type: RoutingPolicyShadow::Sets::ExtendedCommunityCost::Inactive
        class Active; //type: RoutingPolicyShadow::Sets::ExtendedCommunityCost::Active

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_policy_repository_oper::RoutingPolicyShadow::Sets::ExtendedCommunityCost::Sets_> sets;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_policy_repository_oper::RoutingPolicyShadow::Sets::ExtendedCommunityCost::Unused> unused;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_policy_repository_oper::RoutingPolicyShadow::Sets::ExtendedCommunityCost::Inactive> inactive;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_policy_repository_oper::RoutingPolicyShadow::Sets::ExtendedCommunityCost::Active> active;
        
}; // RoutingPolicyShadow::Sets::ExtendedCommunityCost


class RoutingPolicyShadow::Sets::ExtendedCommunityCost::Sets_ : public ydk::Entity
{
    public:
        Sets_();
        ~Sets_();

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

        class Set; //type: RoutingPolicyShadow::Sets::ExtendedCommunityCost::Sets_::Set

        ydk::YList set;
        
}; // RoutingPolicyShadow::Sets::ExtendedCommunityCost::Sets_


class RoutingPolicyShadow::Sets::ExtendedCommunityCost::Sets_::Set : public ydk::Entity
{
    public:
        Set();
        ~Set();

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

        ydk::YLeaf set_name; //type: string
        class UsedBy; //type: RoutingPolicyShadow::Sets::ExtendedCommunityCost::Sets_::Set::UsedBy
        class Attached; //type: RoutingPolicyShadow::Sets::ExtendedCommunityCost::Sets_::Set::Attached

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_policy_repository_oper::RoutingPolicyShadow::Sets::ExtendedCommunityCost::Sets_::Set::UsedBy> used_by;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_policy_repository_oper::RoutingPolicyShadow::Sets::ExtendedCommunityCost::Sets_::Set::Attached> attached;
        
}; // RoutingPolicyShadow::Sets::ExtendedCommunityCost::Sets_::Set


class RoutingPolicyShadow::Sets::ExtendedCommunityCost::Sets_::Set::UsedBy : public ydk::Entity
{
    public:
        UsedBy();
        ~UsedBy();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Reference; //type: RoutingPolicyShadow::Sets::ExtendedCommunityCost::Sets_::Set::UsedBy::Reference

        ydk::YList reference;
        
}; // RoutingPolicyShadow::Sets::ExtendedCommunityCost::Sets_::Set::UsedBy


class RoutingPolicyShadow::Sets::ExtendedCommunityCost::Sets_::Set::UsedBy::Reference : public ydk::Entity
{
    public:
        Reference();
        ~Reference();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf route_policy_name; //type: string
        ydk::YLeaf used_directly; //type: boolean
        ydk::YLeaf status; //type: ObjectStatus

}; // RoutingPolicyShadow::Sets::ExtendedCommunityCost::Sets_::Set::UsedBy::Reference


class RoutingPolicyShadow::Sets::ExtendedCommunityCost::Sets_::Set::Attached : public ydk::Entity
{
    public:
        Attached();
        ~Attached();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Binding; //type: RoutingPolicyShadow::Sets::ExtendedCommunityCost::Sets_::Set::Attached::Binding

        ydk::YList binding;
        
}; // RoutingPolicyShadow::Sets::ExtendedCommunityCost::Sets_::Set::Attached


class RoutingPolicyShadow::Sets::ExtendedCommunityCost::Sets_::Set::Attached::Binding : public ydk::Entity
{
    public:
        Binding();
        ~Binding();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf protocol; //type: string
        ydk::YLeaf vrf_name; //type: string
        ydk::YLeaf proto_instance; //type: string
        ydk::YLeaf af_name; //type: AddressFamily
        ydk::YLeaf saf_name; //type: SubAddressFamily
        ydk::YLeaf neighbor_address; //type: string
        ydk::YLeaf neighbor_af_name; //type: AddressFamily
        ydk::YLeaf group_name; //type: string
        ydk::YLeaf direction; //type: AttachPointDirection
        ydk::YLeaf group; //type: Group
        ydk::YLeaf source_protocol; //type: string
        ydk::YLeaf aggregate_network_address; //type: string
        ydk::YLeaf interface_name; //type: string
        ydk::YLeaf instance; //type: string
        ydk::YLeaf area_id; //type: string
        ydk::YLeaf propogate_from; //type: int32
        ydk::YLeaf propogate_to; //type: int32
        ydk::YLeaf route_policy_name; //type: string
        ydk::YLeaf attached_policy; //type: string
        ydk::YLeaf attach_point; //type: string

}; // RoutingPolicyShadow::Sets::ExtendedCommunityCost::Sets_::Set::Attached::Binding


class RoutingPolicyShadow::Sets::ExtendedCommunityCost::Unused : public ydk::Entity
{
    public:
        Unused();
        ~Unused();

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

        ydk::YLeafList object; //type: list of  string

}; // RoutingPolicyShadow::Sets::ExtendedCommunityCost::Unused


class RoutingPolicyShadow::Sets::ExtendedCommunityCost::Inactive : public ydk::Entity
{
    public:
        Inactive();
        ~Inactive();

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

        ydk::YLeafList object; //type: list of  string

}; // RoutingPolicyShadow::Sets::ExtendedCommunityCost::Inactive


class RoutingPolicyShadow::Sets::ExtendedCommunityCost::Active : public ydk::Entity
{
    public:
        Active();
        ~Active();

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

        ydk::YLeafList object; //type: list of  string

}; // RoutingPolicyShadow::Sets::ExtendedCommunityCost::Active

class Group : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf address_family_group;
        static const ydk::Enum::YLeaf session_group;
        static const ydk::Enum::YLeaf neighbor_group;
        static const ydk::Enum::YLeaf neighbor;
        static const ydk::Enum::YLeaf error_group;

        static int get_enum_value(const std::string & name) {
            if (name == "address-family-group") return 0;
            if (name == "session-group") return 1;
            if (name == "neighbor-group") return 2;
            if (name == "neighbor") return 3;
            if (name == "error-group") return 4;
            return -1;
        }
};

class AttachPointDirection : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf in;
        static const ydk::Enum::YLeaf out;

        static int get_enum_value(const std::string & name) {
            if (name == "in") return 0;
            if (name == "out") return 1;
            return -1;
        }
};

class SubAddressFamily : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf unicast;
        static const ydk::Enum::YLeaf multicast;
        static const ydk::Enum::YLeaf label;
        static const ydk::Enum::YLeaf tunnel;
        static const ydk::Enum::YLeaf vpn;
        static const ydk::Enum::YLeaf mdt;
        static const ydk::Enum::YLeaf vpls;
        static const ydk::Enum::YLeaf rt_constraint;
        static const ydk::Enum::YLeaf mvpn;
        static const ydk::Enum::YLeaf flow;
        static const ydk::Enum::YLeaf vpn_mcast;
        static const ydk::Enum::YLeaf evpn;
        static const ydk::Enum::YLeaf saf_none;
        static const ydk::Enum::YLeaf saf_unknown;

        static int get_enum_value(const std::string & name) {
            if (name == "unicast") return 0;
            if (name == "multicast") return 1;
            if (name == "label") return 2;
            if (name == "tunnel") return 3;
            if (name == "vpn") return 4;
            if (name == "mdt") return 5;
            if (name == "vpls") return 6;
            if (name == "rt-constraint") return 7;
            if (name == "mvpn") return 8;
            if (name == "flow") return 9;
            if (name == "vpn-mcast") return 10;
            if (name == "evpn") return 11;
            if (name == "saf-none") return 12;
            if (name == "saf-unknown") return 13;
            return -1;
        }
};

class AddressFamily : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf ipv4;
        static const ydk::Enum::YLeaf ipv6;
        static const ydk::Enum::YLeaf l2vpn;
        static const ydk::Enum::YLeaf ls;
        static const ydk::Enum::YLeaf af_none;
        static const ydk::Enum::YLeaf af_unknown;

        static int get_enum_value(const std::string & name) {
            if (name == "ipv4") return 0;
            if (name == "ipv6") return 1;
            if (name == "l2vpn") return 2;
            if (name == "ls") return 3;
            if (name == "af-none") return 4;
            if (name == "af-unknown") return 5;
            return -1;
        }
};

class ObjectStatus : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf active;
        static const ydk::Enum::YLeaf inactive;
        static const ydk::Enum::YLeaf unused;

        static int get_enum_value(const std::string & name) {
            if (name == "active") return 0;
            if (name == "inactive") return 1;
            if (name == "unused") return 2;
            return -1;
        }
};


}
}

#endif /* _CISCO_IOS_XR_POLICY_REPOSITORY_OPER_ */


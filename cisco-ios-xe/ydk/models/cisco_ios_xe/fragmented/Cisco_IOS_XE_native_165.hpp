#ifndef _CISCO_IOS_XE_NATIVE_165_
#define _CISCO_IOS_XE_NATIVE_165_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>

#include "Cisco_IOS_XE_native_0.hpp"
#include "Cisco_IOS_XE_native_133.hpp"
#include "Cisco_IOS_XE_native_146.hpp"
#include "Cisco_IOS_XE_native_164.hpp"

namespace cisco_ios_xe {
namespace Cisco_IOS_XE_native {


class Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Ipv4::Ipv4Unicast::Neighbor::Advertise::AdditionalPaths::All : public ydk::Entity
{
    public:
        All();
        ~All();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Best; //type: Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Ipv4::Ipv4Unicast::Neighbor::Advertise::AdditionalPaths::All::Best
        class GroupBest; //type: Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Ipv4::Ipv4Unicast::Neighbor::Advertise::AdditionalPaths::All::GroupBest

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Ipv4::Ipv4Unicast::Neighbor::Advertise::AdditionalPaths::All::Best> best;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Ipv4::Ipv4Unicast::Neighbor::Advertise::AdditionalPaths::All::GroupBest> group_best; // presence node
        
}; // Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Ipv4::Ipv4Unicast::Neighbor::Advertise::AdditionalPaths::All


class Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Ipv4::Ipv4Unicast::Neighbor::Advertise::AdditionalPaths::All::Best : public ydk::Entity
{
    public:
        Best();
        ~Best();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class BestRange; //type: Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Ipv4::Ipv4Unicast::Neighbor::Advertise::AdditionalPaths::All::Best::BestRange

        ydk::YList best_range;
        
}; // Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Ipv4::Ipv4Unicast::Neighbor::Advertise::AdditionalPaths::All::Best


class Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Ipv4::Ipv4Unicast::Neighbor::Advertise::AdditionalPaths::All::Best::BestRange : public ydk::Entity
{
    public:
        BestRange();
        ~BestRange();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf range; //type: uint8
        ydk::YLeaf group_best; //type: empty

}; // Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Ipv4::Ipv4Unicast::Neighbor::Advertise::AdditionalPaths::All::Best::BestRange


class Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Ipv4::Ipv4Unicast::Neighbor::Advertise::AdditionalPaths::All::GroupBest : public ydk::Entity
{
    public:
        GroupBest();
        ~GroupBest();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf best; //type: uint8

}; // Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Ipv4::Ipv4Unicast::Neighbor::Advertise::AdditionalPaths::All::GroupBest


class Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Ipv4::Ipv4Unicast::Neighbor::Advertise::AdditionalPaths::Best : public ydk::Entity
{
    public:
        Best();
        ~Best();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class BestRange; //type: Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Ipv4::Ipv4Unicast::Neighbor::Advertise::AdditionalPaths::Best::BestRange

        ydk::YList best_range;
        
}; // Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Ipv4::Ipv4Unicast::Neighbor::Advertise::AdditionalPaths::Best


class Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Ipv4::Ipv4Unicast::Neighbor::Advertise::AdditionalPaths::Best::BestRange : public ydk::Entity
{
    public:
        BestRange();
        ~BestRange();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf range; //type: uint8
        ydk::YLeaf all; //type: empty
        class GroupBest; //type: Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Ipv4::Ipv4Unicast::Neighbor::Advertise::AdditionalPaths::Best::BestRange::GroupBest

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Ipv4::Ipv4Unicast::Neighbor::Advertise::AdditionalPaths::Best::BestRange::GroupBest> group_best; // presence node
        
}; // Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Ipv4::Ipv4Unicast::Neighbor::Advertise::AdditionalPaths::Best::BestRange


class Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Ipv4::Ipv4Unicast::Neighbor::Advertise::AdditionalPaths::Best::BestRange::GroupBest : public ydk::Entity
{
    public:
        GroupBest();
        ~GroupBest();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf all; //type: empty

}; // Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Ipv4::Ipv4Unicast::Neighbor::Advertise::AdditionalPaths::Best::BestRange::GroupBest


class Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Ipv4::Ipv4Unicast::Neighbor::Advertise::AdditionalPaths::GroupBest : public ydk::Entity
{
    public:
        GroupBest();
        ~GroupBest();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf all; //type: empty
        ydk::YLeaf best; //type: uint8

}; // Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Ipv4::Ipv4Unicast::Neighbor::Advertise::AdditionalPaths::GroupBest


class Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Ipv4::Ipv4Unicast::Neighbor::Advertise::DiversePath : public ydk::Entity
{
    public:
        DiversePath();
        ~DiversePath();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf mpath; //type: empty
        class Backup; //type: Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Ipv4::Ipv4Unicast::Neighbor::Advertise::DiversePath::Backup

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Ipv4::Ipv4Unicast::Neighbor::Advertise::DiversePath::Backup> backup; // presence node
        
}; // Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Ipv4::Ipv4Unicast::Neighbor::Advertise::DiversePath


class Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Ipv4::Ipv4Unicast::Neighbor::Advertise::DiversePath::Backup : public ydk::Entity
{
    public:
        Backup();
        ~Backup();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf mpath; //type: empty

}; // Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Ipv4::Ipv4Unicast::Neighbor::Advertise::DiversePath::Backup


class Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Ipv4::Ipv4Unicast::Neighbor::AdvertiseMap : public ydk::Entity
{
    public:
        AdvertiseMap();
        ~AdvertiseMap();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Name; //type: Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Ipv4::Ipv4Unicast::Neighbor::AdvertiseMap::Name

        ydk::YList name;
        
}; // Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Ipv4::Ipv4Unicast::Neighbor::AdvertiseMap


class Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Ipv4::Ipv4Unicast::Neighbor::AdvertiseMap::Name : public ydk::Entity
{
    public:
        Name();
        ~Name();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf word; //type: string
        ydk::YLeaf exist_map; //type: string
        ydk::YLeaf non_exist_map; //type: string

}; // Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Ipv4::Ipv4Unicast::Neighbor::AdvertiseMap::Name


class Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Ipv4::Ipv4Unicast::Neighbor::Aigp : public ydk::Entity
{
    public:
        Aigp();
        ~Aigp();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Send; //type: Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Ipv4::Ipv4Unicast::Neighbor::Aigp::Send

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Ipv4::Ipv4Unicast::Neighbor::Aigp::Send> send;
        
}; // Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Ipv4::Ipv4Unicast::Neighbor::Aigp


class Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Ipv4::Ipv4Unicast::Neighbor::Aigp::Send : public ydk::Entity
{
    public:
        Send();
        ~Send();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf med; //type: empty
        class CostCommunity; //type: Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Ipv4::Ipv4Unicast::Neighbor::Aigp::Send::CostCommunity

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Ipv4::Ipv4Unicast::Neighbor::Aigp::Send::CostCommunity> cost_community;
        
}; // Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Ipv4::Ipv4Unicast::Neighbor::Aigp::Send


class Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Ipv4::Ipv4Unicast::Neighbor::Aigp::Send::CostCommunity : public ydk::Entity
{
    public:
        CostCommunity();
        ~CostCommunity();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class CcRange; //type: Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Ipv4::Ipv4Unicast::Neighbor::Aigp::Send::CostCommunity::CcRange

        ydk::YList cc_range;
        
}; // Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Ipv4::Ipv4Unicast::Neighbor::Aigp::Send::CostCommunity


class Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Ipv4::Ipv4Unicast::Neighbor::Aigp::Send::CostCommunity::CcRange : public ydk::Entity
{
    public:
        CcRange();
        ~CcRange();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf range; //type: uint8
        class Poi; //type: Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Ipv4::Ipv4Unicast::Neighbor::Aigp::Send::CostCommunity::CcRange::Poi

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Ipv4::Ipv4Unicast::Neighbor::Aigp::Send::CostCommunity::CcRange::Poi> poi;
        
}; // Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Ipv4::Ipv4Unicast::Neighbor::Aigp::Send::CostCommunity::CcRange


class Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Ipv4::Ipv4Unicast::Neighbor::Aigp::Send::CostCommunity::CcRange::Poi : public ydk::Entity
{
    public:
        Poi();
        ~Poi();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class IgpCost; //type: Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Ipv4::Ipv4Unicast::Neighbor::Aigp::Send::CostCommunity::CcRange::Poi::IgpCost
        class PreBestpath; //type: Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Ipv4::Ipv4Unicast::Neighbor::Aigp::Send::CostCommunity::CcRange::Poi::PreBestpath

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Ipv4::Ipv4Unicast::Neighbor::Aigp::Send::CostCommunity::CcRange::Poi::IgpCost> igp_cost; // presence node
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Ipv4::Ipv4Unicast::Neighbor::Aigp::Send::CostCommunity::CcRange::Poi::PreBestpath> pre_bestpath; // presence node
        
}; // Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Ipv4::Ipv4Unicast::Neighbor::Aigp::Send::CostCommunity::CcRange::Poi


class Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Ipv4::Ipv4Unicast::Neighbor::Aigp::Send::CostCommunity::CcRange::Poi::IgpCost : public ydk::Entity
{
    public:
        IgpCost();
        ~IgpCost();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf transitive; //type: empty

}; // Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Ipv4::Ipv4Unicast::Neighbor::Aigp::Send::CostCommunity::CcRange::Poi::IgpCost


class Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Ipv4::Ipv4Unicast::Neighbor::Aigp::Send::CostCommunity::CcRange::Poi::PreBestpath : public ydk::Entity
{
    public:
        PreBestpath();
        ~PreBestpath();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf transitive; //type: empty

}; // Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Ipv4::Ipv4Unicast::Neighbor::Aigp::Send::CostCommunity::CcRange::Poi::PreBestpath


class Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Ipv4::Ipv4Unicast::Neighbor::AllowasIn : public ydk::Entity
{
    public:
        AllowasIn();
        ~AllowasIn();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf as_number; //type: uint8

}; // Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Ipv4::Ipv4Unicast::Neighbor::AllowasIn


class Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Ipv4::Ipv4Unicast::Neighbor::Announce : public ydk::Entity
{
    public:
        Announce();
        ~Announce();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Rpki; //type: Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Ipv4::Ipv4Unicast::Neighbor::Announce::Rpki

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Ipv4::Ipv4Unicast::Neighbor::Announce::Rpki> rpki;
        
}; // Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Ipv4::Ipv4Unicast::Neighbor::Announce


class Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Ipv4::Ipv4Unicast::Neighbor::Announce::Rpki : public ydk::Entity
{
    public:
        Rpki();
        ~Rpki();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf state; //type: empty

}; // Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Ipv4::Ipv4Unicast::Neighbor::Announce::Rpki


class Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Ipv4::Ipv4Unicast::Neighbor::AsOverride : public ydk::Entity
{
    public:
        AsOverride();
        ~AsOverride();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf split_horizon; //type: empty

}; // Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Ipv4::Ipv4Unicast::Neighbor::AsOverride


class Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Ipv4::Ipv4Unicast::Neighbor::Capability : public ydk::Entity
{
    public:
        Capability();
        ~Capability();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Orf; //type: Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Ipv4::Ipv4Unicast::Neighbor::Capability::Orf

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Ipv4::Ipv4Unicast::Neighbor::Capability::Orf> orf;
        
}; // Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Ipv4::Ipv4Unicast::Neighbor::Capability


class Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Ipv4::Ipv4Unicast::Neighbor::Capability::Orf : public ydk::Entity
{
    public:
        Orf();
        ~Orf();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeafList prefix_list; //type: list of  PrefixList
        class PrefixList;

}; // Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Ipv4::Ipv4Unicast::Neighbor::Capability::Orf


class Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Ipv4::Ipv4Unicast::Neighbor::DefaultOriginate : public ydk::Entity
{
    public:
        DefaultOriginate();
        ~DefaultOriginate();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf route_map; //type: string

}; // Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Ipv4::Ipv4Unicast::Neighbor::DefaultOriginate


class Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Ipv4::Ipv4Unicast::Neighbor::DistributeList : public ydk::Entity
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

        ydk::YLeaf inout; //type: Inout
        ydk::YLeaf accesslist; //type: one of uint16, string
        class Inout;

}; // Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Ipv4::Ipv4Unicast::Neighbor::DistributeList


class Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Ipv4::Ipv4Unicast::Neighbor::FilterList : public ydk::Entity
{
    public:
        FilterList();
        ~FilterList();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf inout; //type: Inout
        ydk::YLeaf as_path_list; //type: uint16
        class Inout;

}; // Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Ipv4::Ipv4Unicast::Neighbor::FilterList


class Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Ipv4::Ipv4Unicast::Neighbor::Inherit : public ydk::Entity
{
    public:
        Inherit();
        ~Inherit();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf peer_policy; //type: string
        ydk::YLeaf peer_session; //type: string

}; // Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Ipv4::Ipv4Unicast::Neighbor::Inherit


class Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Ipv4::Ipv4Unicast::Neighbor::MaximumPrefix : public ydk::Entity
{
    public:
        MaximumPrefix();
        ~MaximumPrefix();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf max_prefix_no; //type: uint32
        ydk::YLeaf threshold; //type: uint8
        ydk::YLeaf restart; //type: uint16
        ydk::YLeaf warning_only; //type: empty

}; // Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Ipv4::Ipv4Unicast::Neighbor::MaximumPrefix


class Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Ipv4::Ipv4Unicast::Neighbor::NextHopSelf : public ydk::Entity
{
    public:
        NextHopSelf();
        ~NextHopSelf();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf all; //type: empty

}; // Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Ipv4::Ipv4Unicast::Neighbor::NextHopSelf


class Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Ipv4::Ipv4Unicast::Neighbor::PrefixList : public ydk::Entity
{
    public:
        PrefixList();
        ~PrefixList();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf inout; //type: Inout
        ydk::YLeaf prefix_list_name; //type: string
        class Inout;

}; // Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Ipv4::Ipv4Unicast::Neighbor::PrefixList


class Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Ipv4::Ipv4Unicast::Neighbor::RemovePrivateAs : public ydk::Entity
{
    public:
        RemovePrivateAs();
        ~RemovePrivateAs();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class All; //type: Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Ipv4::Ipv4Unicast::Neighbor::RemovePrivateAs::All

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Ipv4::Ipv4Unicast::Neighbor::RemovePrivateAs::All> all; // presence node
        
}; // Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Ipv4::Ipv4Unicast::Neighbor::RemovePrivateAs


class Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Ipv4::Ipv4Unicast::Neighbor::RemovePrivateAs::All : public ydk::Entity
{
    public:
        All();
        ~All();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf replace_as; //type: empty

}; // Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Ipv4::Ipv4Unicast::Neighbor::RemovePrivateAs::All


class Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Ipv4::Ipv4Unicast::Neighbor::RouteMap : public ydk::Entity
{
    public:
        RouteMap();
        ~RouteMap();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf inout; //type: Inout
        ydk::YLeaf route_map_name; //type: string
        class Inout;

}; // Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Ipv4::Ipv4Unicast::Neighbor::RouteMap


class Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Ipv4::Ipv4Unicast::Neighbor::SendCommunity : public ydk::Entity
{
    public:
        SendCommunity();
        ~SendCommunity();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf send_community_where; //type: SendCommunityWhere
        class SendCommunityWhere;

}; // Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Ipv4::Ipv4Unicast::Neighbor::SendCommunity


class Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Ipv4::Ipv4Unicast::Neighbor::SendLabel : public ydk::Entity
{
    public:
        SendLabel();
        ~SendLabel();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf send_label_explicit; //type: SendLabelExplicit
        class SendLabelExplicit;

}; // Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Ipv4::Ipv4Unicast::Neighbor::SendLabel


class Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Ipv4::Ipv4Unicast::Neighbor::SlowPeer : public ydk::Entity
{
    public:
        SlowPeer();
        ~SlowPeer();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Detection; //type: Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Ipv4::Ipv4Unicast::Neighbor::SlowPeer::Detection
        class SplitUpdateGroup; //type: Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Ipv4::Ipv4Unicast::Neighbor::SlowPeer::SplitUpdateGroup

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Ipv4::Ipv4Unicast::Neighbor::SlowPeer::Detection> detection; // presence node
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Ipv4::Ipv4Unicast::Neighbor::SlowPeer::SplitUpdateGroup> split_update_group;
        
}; // Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Ipv4::Ipv4Unicast::Neighbor::SlowPeer


class Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Ipv4::Ipv4Unicast::Neighbor::SlowPeer::Detection : public ydk::Entity
{
    public:
        Detection();
        ~Detection();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf threshold; //type: uint16

}; // Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Ipv4::Ipv4Unicast::Neighbor::SlowPeer::Detection


class Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Ipv4::Ipv4Unicast::Neighbor::SlowPeer::SplitUpdateGroup : public ydk::Entity
{
    public:
        SplitUpdateGroup();
        ~SplitUpdateGroup();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Dynamic; //type: Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Ipv4::Ipv4Unicast::Neighbor::SlowPeer::SplitUpdateGroup::Dynamic

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Ipv4::Ipv4Unicast::Neighbor::SlowPeer::SplitUpdateGroup::Dynamic> dynamic; // presence node
        
}; // Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Ipv4::Ipv4Unicast::Neighbor::SlowPeer::SplitUpdateGroup


class Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Ipv4::Ipv4Unicast::Neighbor::SlowPeer::SplitUpdateGroup::Dynamic : public ydk::Entity
{
    public:
        Dynamic();
        ~Dynamic();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf permanent; //type: empty

}; // Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Ipv4::Ipv4Unicast::Neighbor::SlowPeer::SplitUpdateGroup::Dynamic


class Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Ipv4::Ipv4Unicast::Neighbor::TranslateUpdate : public ydk::Entity
{
    public:
        TranslateUpdate();
        ~TranslateUpdate();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Ipv4_; //type: Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Ipv4::Ipv4Unicast::Neighbor::TranslateUpdate::Ipv4_

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Ipv4::Ipv4Unicast::Neighbor::TranslateUpdate::Ipv4_> ipv4;
        
}; // Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Ipv4::Ipv4Unicast::Neighbor::TranslateUpdate


class Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Ipv4::Ipv4Unicast::Neighbor::TranslateUpdate::Ipv4_ : public ydk::Entity
{
    public:
        Ipv4_();
        ~Ipv4_();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Multicast; //type: Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Ipv4::Ipv4Unicast::Neighbor::TranslateUpdate::Ipv4_::Multicast

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Ipv4::Ipv4Unicast::Neighbor::TranslateUpdate::Ipv4_::Multicast> multicast; // presence node
        
}; // Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Ipv4::Ipv4Unicast::Neighbor::TranslateUpdate::Ipv4_


class Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Ipv4::Ipv4Unicast::Neighbor::TranslateUpdate::Ipv4_::Multicast : public ydk::Entity
{
    public:
        Multicast();
        ~Multicast();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf unicast; //type: empty

}; // Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Ipv4::Ipv4Unicast::Neighbor::TranslateUpdate::Ipv4_::Multicast


class Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Ipv4::Ipv4Unicast::Network : public ydk::Entity
{
    public:
        Network();
        ~Network();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class WithMask; //type: Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Ipv4::Ipv4Unicast::Network::WithMask
        class NoMask; //type: Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Ipv4::Ipv4Unicast::Network::NoMask

        ydk::YList with_mask;
        ydk::YList no_mask;
        
}; // Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Ipv4::Ipv4Unicast::Network


class Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Ipv4::Ipv4Unicast::Network::WithMask : public ydk::Entity
{
    public:
        WithMask();
        ~WithMask();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf number; //type: string
        ydk::YLeaf mask; //type: string
        ydk::YLeaf route_map; //type: string
        ydk::YLeaf backdoor; //type: empty

}; // Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Ipv4::Ipv4Unicast::Network::WithMask


class Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Ipv4::Ipv4Unicast::Network::NoMask : public ydk::Entity
{
    public:
        NoMask();
        ~NoMask();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf number; //type: string
        ydk::YLeaf route_map; //type: string
        ydk::YLeaf backdoor; //type: empty

}; // Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Ipv4::Ipv4Unicast::Network::NoMask


class Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Ipv4::Ipv4Unicast::Redistribute : public ydk::Entity
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

        class Application; //type: Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Ipv4::Ipv4Unicast::Redistribute::Application
        class Bgp_; //type: Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Ipv4::Ipv4Unicast::Redistribute::Bgp_
        class Connected; //type: Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Ipv4::Ipv4Unicast::Redistribute::Connected
        class Dvmrp; //type: Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Ipv4::Ipv4Unicast::Redistribute::Dvmrp
        class Eigrp; //type: Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Ipv4::Ipv4Unicast::Redistribute::Eigrp
        class Isis; //type: Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Ipv4::Ipv4Unicast::Redistribute::Isis
        class Lisp; //type: Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Ipv4::Ipv4Unicast::Redistribute::Lisp
        class IsoIgrp; //type: Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Ipv4::Ipv4Unicast::Redistribute::IsoIgrp
        class Mobile; //type: Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Ipv4::Ipv4Unicast::Redistribute::Mobile
        class Odr; //type: Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Ipv4::Ipv4Unicast::Redistribute::Odr
        class Ospf; //type: Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Ipv4::Ipv4Unicast::Redistribute::Ospf
        class Ospfv3; //type: Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Ipv4::Ipv4Unicast::Redistribute::Ospfv3
        class Rip; //type: Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Ipv4::Ipv4Unicast::Redistribute::Rip
        class Static; //type: Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Ipv4::Ipv4Unicast::Redistribute::Static

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Ipv4::Ipv4Unicast::Redistribute::Application> application; // presence node
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Ipv4::Ipv4Unicast::Redistribute::Bgp_> bgp;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Ipv4::Ipv4Unicast::Redistribute::Connected> connected; // presence node
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Ipv4::Ipv4Unicast::Redistribute::Dvmrp> dvmrp; // presence node
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Ipv4::Ipv4Unicast::Redistribute::Eigrp> eigrp;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Ipv4::Ipv4Unicast::Redistribute::Isis> isis; // presence node
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Ipv4::Ipv4Unicast::Redistribute::Lisp> lisp; // presence node
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Ipv4::Ipv4Unicast::Redistribute::IsoIgrp> iso_igrp;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Ipv4::Ipv4Unicast::Redistribute::Mobile> mobile; // presence node
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Ipv4::Ipv4Unicast::Redistribute::Odr> odr; // presence node
        ydk::YList ospf;
        ydk::YList ospfv3;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Ipv4::Ipv4Unicast::Redistribute::Rip> rip; // presence node
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Ipv4::Ipv4Unicast::Redistribute::Static> static_; // presence node
        
}; // Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Ipv4::Ipv4Unicast::Redistribute


class Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Ipv4::Ipv4Unicast::Redistribute::Application : public ydk::Entity
{
    public:
        Application();
        ~Application();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Name; //type: Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Ipv4::Ipv4Unicast::Redistribute::Application::Name

        ydk::YList name;
        
}; // Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Ipv4::Ipv4Unicast::Redistribute::Application


class Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Ipv4::Ipv4Unicast::Redistribute::Application::Name : public ydk::Entity
{
    public:
        Name();
        ~Name();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf name; //type: string
        ydk::YLeaf metric; //type: uint32
        ydk::YLeaf route_map; //type: string

}; // Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Ipv4::Ipv4Unicast::Redistribute::Application::Name


class Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Ipv4::Ipv4Unicast::Redistribute::Bgp_ : public ydk::Entity
{
    public:
        Bgp_();
        ~Bgp_();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf as_no; //type: one of uint32, string
        ydk::YLeaf metric; //type: uint32
        ydk::YLeaf route_map; //type: string

}; // Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Ipv4::Ipv4Unicast::Redistribute::Bgp_


class Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Ipv4::Ipv4Unicast::Redistribute::Connected : public ydk::Entity
{
    public:
        Connected();
        ~Connected();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf metric; //type: uint32
        ydk::YLeaf route_map; //type: string

}; // Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Ipv4::Ipv4Unicast::Redistribute::Connected


class Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Ipv4::Ipv4Unicast::Redistribute::Dvmrp : public ydk::Entity
{
    public:
        Dvmrp();
        ~Dvmrp();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf route_map; //type: string
        ydk::YLeaf metric; //type: uint32

}; // Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Ipv4::Ipv4Unicast::Redistribute::Dvmrp


class Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Ipv4::Ipv4Unicast::Redistribute::Eigrp : public ydk::Entity
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

        ydk::YLeaf as_no; //type: uint16
        ydk::YLeaf metric; //type: uint32
        ydk::YLeaf route_map; //type: string

}; // Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Ipv4::Ipv4Unicast::Redistribute::Eigrp


class Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Ipv4::Ipv4Unicast::Redistribute::Isis : public ydk::Entity
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

        class IsisArea; //type: Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Ipv4::Ipv4Unicast::Redistribute::Isis::IsisArea
        class Default; //type: Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Ipv4::Ipv4Unicast::Redistribute::Isis::Default

        ydk::YList isis_area;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Ipv4::Ipv4Unicast::Redistribute::Isis::Default> default_;
        
}; // Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Ipv4::Ipv4Unicast::Redistribute::Isis


class Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Ipv4::Ipv4Unicast::Redistribute::Isis::IsisArea : public ydk::Entity
{
    public:
        IsisArea();
        ~IsisArea();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        //type: string (refers to cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::IsisContainer::Isis::area_tag)
        ydk::YLeaf name;
        ydk::YLeaf ip; //type: empty
        ydk::YLeaf clns; //type: empty
        ydk::YLeaf routes; //type: Routes
        ydk::YLeaf metric; //type: uint32
        ydk::YLeaf route_map; //type: string
        class Routes;

}; // Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Ipv4::Ipv4Unicast::Redistribute::Isis::IsisArea


class Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Ipv4::Ipv4Unicast::Redistribute::Isis::Default : public ydk::Entity
{
    public:
        Default();
        ~Default();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf ip; //type: empty
        ydk::YLeaf clns; //type: empty
        ydk::YLeaf routes; //type: Routes
        ydk::YLeaf metric; //type: uint32
        ydk::YLeaf route_map; //type: string
        class Routes;

}; // Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Ipv4::Ipv4Unicast::Redistribute::Isis::Default


class Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Ipv4::Ipv4Unicast::Redistribute::Lisp : public ydk::Entity
{
    public:
        Lisp();
        ~Lisp();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf include_connected; //type: empty
        ydk::YLeaf metric; //type: uint32
        ydk::YLeaf route_map; //type: string

}; // Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Ipv4::Ipv4Unicast::Redistribute::Lisp


class Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Ipv4::Ipv4Unicast::Redistribute::IsoIgrp : public ydk::Entity
{
    public:
        IsoIgrp();
        ~IsoIgrp();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class IsoIgrpArea; //type: Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Ipv4::Ipv4Unicast::Redistribute::IsoIgrp::IsoIgrpArea
        class Default; //type: Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Ipv4::Ipv4Unicast::Redistribute::IsoIgrp::Default

        ydk::YList iso_igrp_area;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Ipv4::Ipv4Unicast::Redistribute::IsoIgrp::Default> default_;
        
}; // Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Ipv4::Ipv4Unicast::Redistribute::IsoIgrp


class Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Ipv4::Ipv4Unicast::Redistribute::IsoIgrp::IsoIgrpArea : public ydk::Entity
{
    public:
        IsoIgrpArea();
        ~IsoIgrpArea();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf name; //type: string
        ydk::YLeaf route_map; //type: string
        ydk::YLeaf metric; //type: uint32

}; // Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Ipv4::Ipv4Unicast::Redistribute::IsoIgrp::IsoIgrpArea


class Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Ipv4::Ipv4Unicast::Redistribute::IsoIgrp::Default : public ydk::Entity
{
    public:
        Default();
        ~Default();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf route_map; //type: string
        ydk::YLeaf metric; //type: uint32

}; // Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Ipv4::Ipv4Unicast::Redistribute::IsoIgrp::Default


class Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Ipv4::Ipv4Unicast::Redistribute::Mobile : public ydk::Entity
{
    public:
        Mobile();
        ~Mobile();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf metric; //type: uint32
        ydk::YLeaf route_map; //type: string

}; // Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Ipv4::Ipv4Unicast::Redistribute::Mobile


class Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Ipv4::Ipv4Unicast::Redistribute::Odr : public ydk::Entity
{
    public:
        Odr();
        ~Odr();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf metric; //type: uint32
        ydk::YLeaf route_map; //type: string

}; // Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Ipv4::Ipv4Unicast::Redistribute::Odr


class Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Ipv4::Ipv4Unicast::Redistribute::Ospf : public ydk::Entity
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

        ydk::YLeaf id; //type: uint16
        class Vrf; //type: Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Ipv4::Ipv4Unicast::Redistribute::Ospf::Vrf
        class NonVrf; //type: Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Ipv4::Ipv4Unicast::Redistribute::Ospf::NonVrf

        ydk::YList vrf;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Ipv4::Ipv4Unicast::Redistribute::Ospf::NonVrf> non_vrf;
        
}; // Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Ipv4::Ipv4Unicast::Redistribute::Ospf


class Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Ipv4::Ipv4Unicast::Redistribute::Ospf::Vrf : public ydk::Entity
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

        ydk::YLeaf name; //type: string
        ydk::YLeaf metric; //type: uint32
        ydk::YLeaf route_map; //type: string
        class Match; //type: Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Ipv4::Ipv4Unicast::Redistribute::Ospf::Vrf::Match

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Ipv4::Ipv4Unicast::Redistribute::Ospf::Vrf::Match> match;
        
}; // Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Ipv4::Ipv4Unicast::Redistribute::Ospf::Vrf


class Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Ipv4::Ipv4Unicast::Redistribute::Ospf::Vrf::Match : public ydk::Entity
{
    public:
        Match();
        ~Match();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf internal; //type: empty
        ydk::YLeaf external; //type: RedistOspfExternalType
        ydk::YLeaf external2; //type: RedistOspfExternalType
        ydk::YLeaf nssa_external; //type: RedistOspfExternalType

}; // Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Ipv4::Ipv4Unicast::Redistribute::Ospf::Vrf::Match


class Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Ipv4::Ipv4Unicast::Redistribute::Ospf::NonVrf : public ydk::Entity
{
    public:
        NonVrf();
        ~NonVrf();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf metric; //type: uint32
        ydk::YLeaf route_map; //type: string
        class Match; //type: Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Ipv4::Ipv4Unicast::Redistribute::Ospf::NonVrf::Match

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Ipv4::Ipv4Unicast::Redistribute::Ospf::NonVrf::Match> match;
        
}; // Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Ipv4::Ipv4Unicast::Redistribute::Ospf::NonVrf


class Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Ipv4::Ipv4Unicast::Redistribute::Ospf::NonVrf::Match : public ydk::Entity
{
    public:
        Match();
        ~Match();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf internal; //type: empty
        ydk::YLeaf external; //type: RedistOspfExternalType
        ydk::YLeaf external2; //type: RedistOspfExternalType
        ydk::YLeaf nssa_external; //type: RedistOspfExternalType

}; // Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Ipv4::Ipv4Unicast::Redistribute::Ospf::NonVrf::Match


class Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Ipv4::Ipv4Unicast::Redistribute::Ospfv3 : public ydk::Entity
{
    public:
        Ospfv3();
        ~Ospfv3();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        //type: uint16 (refers to cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Ospfv3::id)
        ydk::YLeaf id;
        ydk::YLeaf metric; //type: uint32
        ydk::YLeaf route_map; //type: string
        class Match; //type: Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Ipv4::Ipv4Unicast::Redistribute::Ospfv3::Match

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Ipv4::Ipv4Unicast::Redistribute::Ospfv3::Match> match;
        
}; // Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Ipv4::Ipv4Unicast::Redistribute::Ospfv3


class Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Ipv4::Ipv4Unicast::Redistribute::Ospfv3::Match : public ydk::Entity
{
    public:
        Match();
        ~Match();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf internal; //type: empty
        ydk::YLeaf external; //type: RedistOspfExternalType
        ydk::YLeaf external2; //type: RedistOspfExternalType
        ydk::YLeaf nssa_external; //type: RedistOspfExternalType

}; // Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Ipv4::Ipv4Unicast::Redistribute::Ospfv3::Match


class Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Ipv4::Ipv4Unicast::Redistribute::Rip : public ydk::Entity
{
    public:
        Rip();
        ~Rip();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf metric; //type: uint32
        ydk::YLeaf route_map; //type: string
        ydk::YLeaf name; //type: string

}; // Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Ipv4::Ipv4Unicast::Redistribute::Rip


class Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Ipv4::Ipv4Unicast::Redistribute::Static : public ydk::Entity
{
    public:
        Static();
        ~Static();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Clns; //type: Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Ipv4::Ipv4Unicast::Redistribute::Static::Clns
        class Ip; //type: Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Ipv4::Ipv4Unicast::Redistribute::Static::Ip
        class Default; //type: Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Ipv4::Ipv4Unicast::Redistribute::Static::Default

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Ipv4::Ipv4Unicast::Redistribute::Static::Clns> clns; // presence node
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Ipv4::Ipv4Unicast::Redistribute::Static::Ip> ip; // presence node
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Ipv4::Ipv4Unicast::Redistribute::Static::Default> default_;
        
}; // Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Ipv4::Ipv4Unicast::Redistribute::Static


class Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Ipv4::Ipv4Unicast::Redistribute::Static::Clns : public ydk::Entity
{
    public:
        Clns();
        ~Clns();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf route_map; //type: string
        ydk::YLeaf metric; //type: uint32

}; // Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Ipv4::Ipv4Unicast::Redistribute::Static::Clns


class Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Ipv4::Ipv4Unicast::Redistribute::Static::Ip : public ydk::Entity
{
    public:
        Ip();
        ~Ip();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf metric; //type: uint32
        ydk::YLeaf route_map; //type: string

}; // Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Ipv4::Ipv4Unicast::Redistribute::Static::Ip


class Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Ipv4::Ipv4Unicast::Redistribute::Static::Default : public ydk::Entity
{
    public:
        Default();
        ~Default();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf metric; //type: uint32
        ydk::YLeaf route_map; //type: string

}; // Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Ipv4::Ipv4Unicast::Redistribute::Static::Default


class Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Ipv4::Ipv4Unicast::SegmentRouting : public ydk::Entity
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

        ydk::YLeaf mpls; //type: empty

}; // Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Ipv4::Ipv4Unicast::SegmentRouting


class Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Ipv4::Ipv4Unicast::Snmp : public ydk::Entity
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

        class Context; //type: Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Ipv4::Ipv4Unicast::Snmp::Context

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Ipv4::Ipv4Unicast::Snmp::Context> context;
        
}; // Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Ipv4::Ipv4Unicast::Snmp


class Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Ipv4::Ipv4Unicast::Snmp::Context : public ydk::Entity
{
    public:
        Context();
        ~Context();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class ContextWord; //type: Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Ipv4::Ipv4Unicast::Snmp::Context::ContextWord

        ydk::YList context_word;
        
}; // Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Ipv4::Ipv4Unicast::Snmp::Context


class Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Ipv4::Ipv4Unicast::Snmp::Context::ContextWord : public ydk::Entity
{
    public:
        ContextWord();
        ~ContextWord();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf context_word; //type: string

}; // Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Ipv4::Ipv4Unicast::Snmp::Context::ContextWord


class Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Ipv4::Ipv4Unicast::TableMap : public ydk::Entity
{
    public:
        TableMap();
        ~TableMap();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf name; //type: string
        ydk::YLeaf filter; //type: empty

}; // Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Ipv4::Ipv4Unicast::TableMap


class Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Ipv6 : public ydk::Entity
{
    public:
        Ipv6();
        ~Ipv6();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf af_name; //type: BgpIpv6AfType
        class Ipv6Unicast; //type: Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Ipv6::Ipv6Unicast

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Ipv6::Ipv6Unicast> ipv6_unicast;
        
}; // Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Ipv6


class Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Ipv6::Ipv6Unicast : public ydk::Entity
{
    public:
        Ipv6Unicast();
        ~Ipv6Unicast();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf default_metric; //type: uint32
        ydk::YLeaf synchronization; //type: empty
        class AggregateAddress; //type: Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Ipv6::Ipv6Unicast::AggregateAddress
        class Bgp_; //type: Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Ipv6::Ipv6Unicast::Bgp_
        class DefaultInformation; //type: Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Ipv6::Ipv6Unicast::DefaultInformation
        class Distance; //type: Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Ipv6::Ipv6Unicast::Distance
        class MaximumPaths; //type: Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Ipv6::Ipv6Unicast::MaximumPaths
        class PeerGroup; //type: Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Ipv6::Ipv6Unicast::PeerGroup
        class Neighbor; //type: Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Ipv6::Ipv6Unicast::Neighbor
        class Network; //type: Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Ipv6::Ipv6Unicast::Network
        class Redistribute; //type: Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Ipv6::Ipv6Unicast::Redistribute
        class Snmp; //type: Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Ipv6::Ipv6Unicast::Snmp
        class TableMap; //type: Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Ipv6::Ipv6Unicast::TableMap

        ydk::YList aggregate_address;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Ipv6::Ipv6Unicast::Bgp_> bgp;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Ipv6::Ipv6Unicast::DefaultInformation> default_information;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Ipv6::Ipv6Unicast::Distance> distance;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Ipv6::Ipv6Unicast::MaximumPaths> maximum_paths;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Ipv6::Ipv6Unicast::PeerGroup> peer_group;
        ydk::YList neighbor;
        ydk::YList network;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Ipv6::Ipv6Unicast::Redistribute> redistribute;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Ipv6::Ipv6Unicast::Snmp> snmp; // presence node
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Ipv6::Ipv6Unicast::TableMap> table_map; // presence node
        
}; // Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Ipv6::Ipv6Unicast


class Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Ipv6::Ipv6Unicast::AggregateAddress : public ydk::Entity
{
    public:
        AggregateAddress();
        ~AggregateAddress();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf ipv6_address; //type: string
        ydk::YLeaf advertise_map; //type: string
        ydk::YLeaf as_set; //type: empty
        ydk::YLeaf attribute_map; //type: string
        ydk::YLeaf as_override; //type: empty
        ydk::YLeaf route_map; //type: string
        ydk::YLeaf summary_only; //type: empty
        ydk::YLeaf suppress_map; //type: string

}; // Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Ipv6::Ipv6Unicast::AggregateAddress


class Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Ipv6::Ipv6Unicast::Bgp_ : public ydk::Entity
{
    public:
        Bgp_();
        ~Bgp_();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf advertise_best_external; //type: empty
        ydk::YLeaf dmzlink_bw; //type: empty
        ydk::YLeaf redistribute_internal; //type: empty
        ydk::YLeaf scan_time; //type: uint8
        ydk::YLeaf soft_reconfig_backup; //type: empty
        ydk::YLeaf suppress_inactive; //type: empty
        class AdditionalPaths; //type: Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Ipv6::Ipv6Unicast::Bgp_::AdditionalPaths
        class AggregateTimer; //type: Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Ipv6::Ipv6Unicast::Bgp_::AggregateTimer
        class Bestpath; //type: Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Ipv6::Ipv6Unicast::Bgp_::Bestpath
        class Dampening; //type: Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Ipv6::Ipv6Unicast::Bgp_::Dampening
        class InjectMap; //type: Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Ipv6::Ipv6Unicast::Bgp_::InjectMap
        class Nexthop; //type: Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Ipv6::Ipv6Unicast::Bgp_::Nexthop
        class Recursion; //type: Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Ipv6::Ipv6Unicast::Bgp_::Recursion
        class RouteMap; //type: Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Ipv6::Ipv6Unicast::Bgp_::RouteMap
        class SlowPeer; //type: Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Ipv6::Ipv6Unicast::Bgp_::SlowPeer
        class UpdateGroup; //type: Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Ipv6::Ipv6Unicast::Bgp_::UpdateGroup

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Ipv6::Ipv6Unicast::Bgp_::AdditionalPaths> additional_paths;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Ipv6::Ipv6Unicast::Bgp_::AggregateTimer> aggregate_timer;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Ipv6::Ipv6Unicast::Bgp_::Bestpath> bestpath;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Ipv6::Ipv6Unicast::Bgp_::Dampening> dampening; // presence node
        ydk::YList inject_map;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Ipv6::Ipv6Unicast::Bgp_::Nexthop> nexthop;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Ipv6::Ipv6Unicast::Bgp_::Recursion> recursion;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Ipv6::Ipv6Unicast::Bgp_::RouteMap> route_map;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Ipv6::Ipv6Unicast::Bgp_::SlowPeer> slow_peer;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Ipv6::Ipv6Unicast::Bgp_::UpdateGroup> update_group;
        
}; // Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Ipv6::Ipv6Unicast::Bgp_


class Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Ipv6::Ipv6Unicast::Bgp_::AdditionalPaths : public ydk::Entity
{
    public:
        AdditionalPaths();
        ~AdditionalPaths();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf install; //type: empty
        ydk::YLeaf receive; //type: empty
        class Select; //type: Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Ipv6::Ipv6Unicast::Bgp_::AdditionalPaths::Select
        class Send; //type: Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Ipv6::Ipv6Unicast::Bgp_::AdditionalPaths::Send

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Ipv6::Ipv6Unicast::Bgp_::AdditionalPaths::Select> select;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Ipv6::Ipv6Unicast::Bgp_::AdditionalPaths::Send> send; // presence node
        
}; // Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Ipv6::Ipv6Unicast::Bgp_::AdditionalPaths


class Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Ipv6::Ipv6Unicast::Bgp_::AdditionalPaths::Select : public ydk::Entity
{
    public:
        Select();
        ~Select();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class All; //type: Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Ipv6::Ipv6Unicast::Bgp_::AdditionalPaths::Select::All
        class Backup; //type: Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Ipv6::Ipv6Unicast::Bgp_::AdditionalPaths::Select::Backup
        class Best; //type: Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Ipv6::Ipv6Unicast::Bgp_::AdditionalPaths::Select::Best
        class BestExternal; //type: Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Ipv6::Ipv6Unicast::Bgp_::AdditionalPaths::Select::BestExternal
        class GroupBest; //type: Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Ipv6::Ipv6Unicast::Bgp_::AdditionalPaths::Select::GroupBest

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Ipv6::Ipv6Unicast::Bgp_::AdditionalPaths::Select::All> all; // presence node
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Ipv6::Ipv6Unicast::Bgp_::AdditionalPaths::Select::Backup> backup; // presence node
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Ipv6::Ipv6Unicast::Bgp_::AdditionalPaths::Select::Best> best;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Ipv6::Ipv6Unicast::Bgp_::AdditionalPaths::Select::BestExternal> best_external; // presence node
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Ipv6::Ipv6Unicast::Bgp_::AdditionalPaths::Select::GroupBest> group_best; // presence node
        
}; // Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Ipv6::Ipv6Unicast::Bgp_::AdditionalPaths::Select


class Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Ipv6::Ipv6Unicast::Bgp_::AdditionalPaths::Select::All : public ydk::Entity
{
    public:
        All();
        ~All();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Best; //type: Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Ipv6::Ipv6Unicast::Bgp_::AdditionalPaths::Select::All::Best
        class GroupBest; //type: Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Ipv6::Ipv6Unicast::Bgp_::AdditionalPaths::Select::All::GroupBest

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Ipv6::Ipv6Unicast::Bgp_::AdditionalPaths::Select::All::Best> best;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Ipv6::Ipv6Unicast::Bgp_::AdditionalPaths::Select::All::GroupBest> group_best; // presence node
        
}; // Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Ipv6::Ipv6Unicast::Bgp_::AdditionalPaths::Select::All


class Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Ipv6::Ipv6Unicast::Bgp_::AdditionalPaths::Select::All::Best : public ydk::Entity
{
    public:
        Best();
        ~Best();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Range; //type: Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Ipv6::Ipv6Unicast::Bgp_::AdditionalPaths::Select::All::Best::Range

        ydk::YList range;
        
}; // Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Ipv6::Ipv6Unicast::Bgp_::AdditionalPaths::Select::All::Best


class Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Ipv6::Ipv6Unicast::Bgp_::AdditionalPaths::Select::All::Best::Range : public ydk::Entity
{
    public:
        Range();
        ~Range();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf range; //type: uint8
        ydk::YLeaf group_best; //type: empty

}; // Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Ipv6::Ipv6Unicast::Bgp_::AdditionalPaths::Select::All::Best::Range


class Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Ipv6::Ipv6Unicast::Bgp_::AdditionalPaths::Select::All::GroupBest : public ydk::Entity
{
    public:
        GroupBest();
        ~GroupBest();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf best; //type: uint8

}; // Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Ipv6::Ipv6Unicast::Bgp_::AdditionalPaths::Select::All::GroupBest


class Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Ipv6::Ipv6Unicast::Bgp_::AdditionalPaths::Select::Backup : public ydk::Entity
{
    public:
        Backup();
        ~Backup();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf best_external; //type: empty

}; // Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Ipv6::Ipv6Unicast::Bgp_::AdditionalPaths::Select::Backup


class Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Ipv6::Ipv6Unicast::Bgp_::AdditionalPaths::Select::Best : public ydk::Entity
{
    public:
        Best();
        ~Best();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Range; //type: Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Ipv6::Ipv6Unicast::Bgp_::AdditionalPaths::Select::Best::Range

        ydk::YList range;
        
}; // Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Ipv6::Ipv6Unicast::Bgp_::AdditionalPaths::Select::Best


class Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Ipv6::Ipv6Unicast::Bgp_::AdditionalPaths::Select::Best::Range : public ydk::Entity
{
    public:
        Range();
        ~Range();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf range; //type: uint8
        ydk::YLeaf all; //type: empty
        class GroupBest; //type: Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Ipv6::Ipv6Unicast::Bgp_::AdditionalPaths::Select::Best::Range::GroupBest

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Ipv6::Ipv6Unicast::Bgp_::AdditionalPaths::Select::Best::Range::GroupBest> group_best; // presence node
        
}; // Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Ipv6::Ipv6Unicast::Bgp_::AdditionalPaths::Select::Best::Range


class Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Ipv6::Ipv6Unicast::Bgp_::AdditionalPaths::Select::Best::Range::GroupBest : public ydk::Entity
{
    public:
        GroupBest();
        ~GroupBest();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf all; //type: empty

}; // Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Ipv6::Ipv6Unicast::Bgp_::AdditionalPaths::Select::Best::Range::GroupBest


class Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Ipv6::Ipv6Unicast::Bgp_::AdditionalPaths::Select::BestExternal : public ydk::Entity
{
    public:
        BestExternal();
        ~BestExternal();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf backup; //type: empty

}; // Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Ipv6::Ipv6Unicast::Bgp_::AdditionalPaths::Select::BestExternal


class Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Ipv6::Ipv6Unicast::Bgp_::AdditionalPaths::Select::GroupBest : public ydk::Entity
{
    public:
        GroupBest();
        ~GroupBest();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf all; //type: empty
        ydk::YLeaf best; //type: uint8

}; // Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Ipv6::Ipv6Unicast::Bgp_::AdditionalPaths::Select::GroupBest


class Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Ipv6::Ipv6Unicast::Bgp_::AdditionalPaths::Send : public ydk::Entity
{
    public:
        Send();
        ~Send();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf receive; //type: empty

}; // Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Ipv6::Ipv6Unicast::Bgp_::AdditionalPaths::Send


class Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Ipv6::Ipv6Unicast::Bgp_::AggregateTimer : public ydk::Entity
{
    public:
        AggregateTimer();
        ~AggregateTimer();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf aggregate_timer; //type: uint8
        ydk::YLeaf disable_timer; //type: DisableTimer
        class DisableTimer;

}; // Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Ipv6::Ipv6Unicast::Bgp_::AggregateTimer


class Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Ipv6::Ipv6Unicast::Bgp_::Bestpath : public ydk::Entity
{
    public:
        Bestpath();
        ~Bestpath();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class IgpMetric; //type: Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Ipv6::Ipv6Unicast::Bgp_::Bestpath::IgpMetric
        class PrefixValidate; //type: Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Ipv6::Ipv6Unicast::Bgp_::Bestpath::PrefixValidate

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Ipv6::Ipv6Unicast::Bgp_::Bestpath::IgpMetric> igp_metric;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Ipv6::Ipv6Unicast::Bgp_::Bestpath::PrefixValidate> prefix_validate;
        
}; // Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Ipv6::Ipv6Unicast::Bgp_::Bestpath


class Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Ipv6::Ipv6Unicast::Bgp_::Bestpath::IgpMetric : public ydk::Entity
{
    public:
        IgpMetric();
        ~IgpMetric();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf ignore; //type: empty

}; // Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Ipv6::Ipv6Unicast::Bgp_::Bestpath::IgpMetric


class Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Ipv6::Ipv6Unicast::Bgp_::Bestpath::PrefixValidate : public ydk::Entity
{
    public:
        PrefixValidate();
        ~PrefixValidate();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf allow_invalid; //type: empty
        ydk::YLeaf disable; //type: empty

}; // Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Ipv6::Ipv6Unicast::Bgp_::Bestpath::PrefixValidate


class Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Ipv6::Ipv6Unicast::Bgp_::Dampening : public ydk::Entity
{
    public:
        Dampening();
        ~Dampening();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf route_map; //type: string
        class Dampen; //type: Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Ipv6::Ipv6Unicast::Bgp_::Dampening::Dampen

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Ipv6::Ipv6Unicast::Bgp_::Dampening::Dampen> dampen;
        
}; // Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Ipv6::Ipv6Unicast::Bgp_::Dampening


class Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Ipv6::Ipv6Unicast::Bgp_::Dampening::Dampen : public ydk::Entity
{
    public:
        Dampen();
        ~Dampen();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf half_life_time; //type: uint8
        ydk::YLeaf reuse_time; //type: uint16
        ydk::YLeaf suppress_time; //type: uint16
        ydk::YLeaf max_suppress_time; //type: uint8

}; // Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Ipv6::Ipv6Unicast::Bgp_::Dampening::Dampen


class Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Ipv6::Ipv6Unicast::Bgp_::InjectMap : public ydk::Entity
{
    public:
        InjectMap();
        ~InjectMap();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf name; //type: string
        ydk::YLeaf exist_map; //type: string
        ydk::YLeaf copy_attributes; //type: empty

}; // Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Ipv6::Ipv6Unicast::Bgp_::InjectMap


class Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Ipv6::Ipv6Unicast::Bgp_::Nexthop : public ydk::Entity
{
    public:
        Nexthop();
        ~Nexthop();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf route_map; //type: string
        class Trigger; //type: Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Ipv6::Ipv6Unicast::Bgp_::Nexthop::Trigger

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Ipv6::Ipv6Unicast::Bgp_::Nexthop::Trigger> trigger;
        
}; // Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Ipv6::Ipv6Unicast::Bgp_::Nexthop


class Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Ipv6::Ipv6Unicast::Bgp_::Nexthop::Trigger : public ydk::Entity
{
    public:
        Trigger();
        ~Trigger();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf delay; //type: uint8
        ydk::YLeaf enable; //type: boolean

}; // Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Ipv6::Ipv6Unicast::Bgp_::Nexthop::Trigger


class Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Ipv6::Ipv6Unicast::Bgp_::Recursion : public ydk::Entity
{
    public:
        Recursion();
        ~Recursion();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf host; //type: empty

}; // Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Ipv6::Ipv6Unicast::Bgp_::Recursion


class Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Ipv6::Ipv6Unicast::Bgp_::RouteMap : public ydk::Entity
{
    public:
        RouteMap();
        ~RouteMap();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf priority; //type: empty

}; // Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Ipv6::Ipv6Unicast::Bgp_::RouteMap


class Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Ipv6::Ipv6Unicast::Bgp_::SlowPeer : public ydk::Entity
{
    public:
        SlowPeer();
        ~SlowPeer();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Detection; //type: Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Ipv6::Ipv6Unicast::Bgp_::SlowPeer::Detection
        class SplitUpdateGroup; //type: Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Ipv6::Ipv6Unicast::Bgp_::SlowPeer::SplitUpdateGroup

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Ipv6::Ipv6Unicast::Bgp_::SlowPeer::Detection> detection; // presence node
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Ipv6::Ipv6Unicast::Bgp_::SlowPeer::SplitUpdateGroup> split_update_group;
        
}; // Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Ipv6::Ipv6Unicast::Bgp_::SlowPeer


class Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Ipv6::Ipv6Unicast::Bgp_::SlowPeer::Detection : public ydk::Entity
{
    public:
        Detection();
        ~Detection();

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
        ydk::YLeaf threshold; //type: uint16

}; // Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Ipv6::Ipv6Unicast::Bgp_::SlowPeer::Detection


class Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Ipv6::Ipv6Unicast::Bgp_::SlowPeer::SplitUpdateGroup : public ydk::Entity
{
    public:
        SplitUpdateGroup();
        ~SplitUpdateGroup();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Dynamic; //type: Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Ipv6::Ipv6Unicast::Bgp_::SlowPeer::SplitUpdateGroup::Dynamic

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Ipv6::Ipv6Unicast::Bgp_::SlowPeer::SplitUpdateGroup::Dynamic> dynamic; // presence node
        
}; // Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Ipv6::Ipv6Unicast::Bgp_::SlowPeer::SplitUpdateGroup


class Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Ipv6::Ipv6Unicast::Bgp_::SlowPeer::SplitUpdateGroup::Dynamic : public ydk::Entity
{
    public:
        Dynamic();
        ~Dynamic();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf permanent; //type: empty

}; // Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Ipv6::Ipv6Unicast::Bgp_::SlowPeer::SplitUpdateGroup::Dynamic


class Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Ipv6::Ipv6Unicast::Bgp_::UpdateGroup : public ydk::Entity
{
    public:
        UpdateGroup();
        ~UpdateGroup();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Split; //type: Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Ipv6::Ipv6Unicast::Bgp_::UpdateGroup::Split

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Ipv6::Ipv6Unicast::Bgp_::UpdateGroup::Split> split;
        
}; // Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Ipv6::Ipv6Unicast::Bgp_::UpdateGroup


class Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Ipv6::Ipv6Unicast::Bgp_::UpdateGroup::Split : public ydk::Entity
{
    public:
        Split();
        ~Split();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf as_override; //type: empty

}; // Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Ipv6::Ipv6Unicast::Bgp_::UpdateGroup::Split


class Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Ipv6::Ipv6Unicast::DefaultInformation : public ydk::Entity
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

        ydk::YLeaf originate; //type: empty

}; // Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Ipv6::Ipv6Unicast::DefaultInformation


class Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Ipv6::Ipv6Unicast::Distance : public ydk::Entity
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

        class Bgp_; //type: Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Ipv6::Ipv6Unicast::Distance::Bgp_
        class AdmDistance; //type: Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Ipv6::Ipv6Unicast::Distance::AdmDistance

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Ipv6::Ipv6Unicast::Distance::Bgp_> bgp;
        ydk::YList adm_distance;
        
}; // Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Ipv6::Ipv6Unicast::Distance


class Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Ipv6::Ipv6Unicast::Distance::Bgp_ : public ydk::Entity
{
    public:
        Bgp_();
        ~Bgp_();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf extern_as; //type: uint16
        ydk::YLeaf internal_as; //type: uint16
        ydk::YLeaf local; //type: uint16

}; // Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Ipv6::Ipv6Unicast::Distance::Bgp_


class Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Ipv6::Ipv6Unicast::Distance::AdmDistance : public ydk::Entity
{
    public:
        AdmDistance();
        ~AdmDistance();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf distance; //type: uint16
        ydk::YLeaf srcip; //type: string
        ydk::YLeaf wildbits; //type: string
        ydk::YLeaf acl; //type: one of uint16, string

}; // Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Ipv6::Ipv6Unicast::Distance::AdmDistance


class Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Ipv6::Ipv6Unicast::MaximumPaths : public ydk::Entity
{
    public:
        MaximumPaths();
        ~MaximumPaths();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf ebgp; //type: uint16
        ydk::YLeaf eibgp; //type: uint16
        class Ibgp; //type: Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Ipv6::Ipv6Unicast::MaximumPaths::Ibgp
        class ExternalRtfilter; //type: Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Ipv6::Ipv6Unicast::MaximumPaths::ExternalRtfilter

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Ipv6::Ipv6Unicast::MaximumPaths::Ibgp> ibgp;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Ipv6::Ipv6Unicast::MaximumPaths::ExternalRtfilter> external_rtfilter;
        
}; // Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Ipv6::Ipv6Unicast::MaximumPaths


class Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Ipv6::Ipv6Unicast::MaximumPaths::Ibgp : public ydk::Entity
{
    public:
        Ibgp();
        ~Ibgp();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf unequal_cost; //type: uint16
        ydk::YLeaf max; //type: uint16

}; // Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Ipv6::Ipv6Unicast::MaximumPaths::Ibgp


class Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Ipv6::Ipv6Unicast::MaximumPaths::ExternalRtfilter : public ydk::Entity
{
    public:
        ExternalRtfilter();
        ~ExternalRtfilter();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf max; //type: uint16

}; // Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Ipv6::Ipv6Unicast::MaximumPaths::ExternalRtfilter


class Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Ipv6::Ipv6Unicast::PeerGroup : public ydk::Entity
{
    public:
        PeerGroup();
        ~PeerGroup();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Neighbor; //type: Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Ipv6::Ipv6Unicast::PeerGroup::Neighbor

        ydk::YList neighbor;
        
}; // Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Ipv6::Ipv6Unicast::PeerGroup


class Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Ipv6::Ipv6Unicast::PeerGroup::Neighbor : public ydk::Entity
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

        ydk::YLeaf id; //type: string
        ydk::YLeaf activate; //type: empty
        ydk::YLeaf allow_policy; //type: empty
        ydk::YLeaf dmzlink_bw; //type: empty
        ydk::YLeaf next_hop_unchanged; //type: empty
        ydk::YLeaf route_reflector_client; //type: empty
        ydk::YLeaf soft_reconfiguration; //type: SoftReconfiguration
        ydk::YLeaf soo; //type: string
        ydk::YLeaf unsuppress_map; //type: string
        ydk::YLeaf weight; //type: uint16
        class AdditionalPaths; //type: Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Ipv6::Ipv6Unicast::PeerGroup::Neighbor::AdditionalPaths
        class Advertise; //type: Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Ipv6::Ipv6Unicast::PeerGroup::Neighbor::Advertise
        class AdvertiseMap; //type: Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Ipv6::Ipv6Unicast::PeerGroup::Neighbor::AdvertiseMap
        class Aigp; //type: Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Ipv6::Ipv6Unicast::PeerGroup::Neighbor::Aigp
        class AllowasIn; //type: Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Ipv6::Ipv6Unicast::PeerGroup::Neighbor::AllowasIn
        class Announce; //type: Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Ipv6::Ipv6Unicast::PeerGroup::Neighbor::Announce
        class AsOverride; //type: Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Ipv6::Ipv6Unicast::PeerGroup::Neighbor::AsOverride
        class Capability; //type: Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Ipv6::Ipv6Unicast::PeerGroup::Neighbor::Capability
        class DefaultOriginate; //type: Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Ipv6::Ipv6Unicast::PeerGroup::Neighbor::DefaultOriginate
        class FilterList; //type: Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Ipv6::Ipv6Unicast::PeerGroup::Neighbor::FilterList
        class Inherit; //type: Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Ipv6::Ipv6Unicast::PeerGroup::Neighbor::Inherit
        class MaximumPrefix; //type: Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Ipv6::Ipv6Unicast::PeerGroup::Neighbor::MaximumPrefix
        class NextHopSelf; //type: Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Ipv6::Ipv6Unicast::PeerGroup::Neighbor::NextHopSelf
        class PrefixList; //type: Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Ipv6::Ipv6Unicast::PeerGroup::Neighbor::PrefixList
        class RemovePrivateAs; //type: Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Ipv6::Ipv6Unicast::PeerGroup::Neighbor::RemovePrivateAs
        class RouteMap; //type: Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Ipv6::Ipv6Unicast::PeerGroup::Neighbor::RouteMap
        class SendCommunity; //type: Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Ipv6::Ipv6Unicast::PeerGroup::Neighbor::SendCommunity
        class SendLabel; //type: Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Ipv6::Ipv6Unicast::PeerGroup::Neighbor::SendLabel
        class SlowPeer; //type: Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Ipv6::Ipv6Unicast::PeerGroup::Neighbor::SlowPeer
        class TranslateUpdate; //type: Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Ipv6::Ipv6Unicast::PeerGroup::Neighbor::TranslateUpdate

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Ipv6::Ipv6Unicast::PeerGroup::Neighbor::AdditionalPaths> additional_paths;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Ipv6::Ipv6Unicast::PeerGroup::Neighbor::Advertise> advertise;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Ipv6::Ipv6Unicast::PeerGroup::Neighbor::AdvertiseMap> advertise_map;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Ipv6::Ipv6Unicast::PeerGroup::Neighbor::Aigp> aigp; // presence node
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Ipv6::Ipv6Unicast::PeerGroup::Neighbor::AllowasIn> allowas_in; // presence node
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Ipv6::Ipv6Unicast::PeerGroup::Neighbor::Announce> announce;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Ipv6::Ipv6Unicast::PeerGroup::Neighbor::AsOverride> as_override; // presence node
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Ipv6::Ipv6Unicast::PeerGroup::Neighbor::Capability> capability;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Ipv6::Ipv6Unicast::PeerGroup::Neighbor::DefaultOriginate> default_originate; // presence node
        ydk::YList filter_list;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Ipv6::Ipv6Unicast::PeerGroup::Neighbor::Inherit> inherit;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Ipv6::Ipv6Unicast::PeerGroup::Neighbor::MaximumPrefix> maximum_prefix;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Ipv6::Ipv6Unicast::PeerGroup::Neighbor::NextHopSelf> next_hop_self; // presence node
        ydk::YList prefix_list;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Ipv6::Ipv6Unicast::PeerGroup::Neighbor::RemovePrivateAs> remove_private_as; // presence node
        ydk::YList route_map;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Ipv6::Ipv6Unicast::PeerGroup::Neighbor::SendCommunity> send_community; // presence node
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Ipv6::Ipv6Unicast::PeerGroup::Neighbor::SendLabel> send_label; // presence node
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Ipv6::Ipv6Unicast::PeerGroup::Neighbor::SlowPeer> slow_peer;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Ipv6::Ipv6Unicast::PeerGroup::Neighbor::TranslateUpdate> translate_update;
                class SoftReconfiguration;

}; // Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Ipv6::Ipv6Unicast::PeerGroup::Neighbor


class Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Ipv6::Ipv6Unicast::PeerGroup::Neighbor::AdditionalPaths : public ydk::Entity
{
    public:
        AdditionalPaths();
        ~AdditionalPaths();

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
        ydk::YLeaf receive; //type: empty
        class Send; //type: Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Ipv6::Ipv6Unicast::PeerGroup::Neighbor::AdditionalPaths::Send

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Ipv6::Ipv6Unicast::PeerGroup::Neighbor::AdditionalPaths::Send> send; // presence node
        
}; // Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Ipv6::Ipv6Unicast::PeerGroup::Neighbor::AdditionalPaths


class Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Ipv6::Ipv6Unicast::PeerGroup::Neighbor::AdditionalPaths::Send : public ydk::Entity
{
    public:
        Send();
        ~Send();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf receive; //type: empty

}; // Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Ipv6::Ipv6Unicast::PeerGroup::Neighbor::AdditionalPaths::Send


class Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Ipv6::Ipv6Unicast::PeerGroup::Neighbor::Advertise : public ydk::Entity
{
    public:
        Advertise();
        ~Advertise();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf best_external; //type: empty
        class AdditionalPaths; //type: Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Ipv6::Ipv6Unicast::PeerGroup::Neighbor::Advertise::AdditionalPaths
        class DiversePath; //type: Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Ipv6::Ipv6Unicast::PeerGroup::Neighbor::Advertise::DiversePath

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Ipv6::Ipv6Unicast::PeerGroup::Neighbor::Advertise::AdditionalPaths> additional_paths;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Ipv6::Ipv6Unicast::PeerGroup::Neighbor::Advertise::DiversePath> diverse_path;
        
}; // Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Ipv6::Ipv6Unicast::PeerGroup::Neighbor::Advertise


class Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Ipv6::Ipv6Unicast::PeerGroup::Neighbor::Advertise::AdditionalPaths : public ydk::Entity
{
    public:
        AdditionalPaths();
        ~AdditionalPaths();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class All; //type: Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Ipv6::Ipv6Unicast::PeerGroup::Neighbor::Advertise::AdditionalPaths::All
        class Best; //type: Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Ipv6::Ipv6Unicast::PeerGroup::Neighbor::Advertise::AdditionalPaths::Best
        class GroupBest; //type: Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Ipv6::Ipv6Unicast::PeerGroup::Neighbor::Advertise::AdditionalPaths::GroupBest

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Ipv6::Ipv6Unicast::PeerGroup::Neighbor::Advertise::AdditionalPaths::All> all; // presence node
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Ipv6::Ipv6Unicast::PeerGroup::Neighbor::Advertise::AdditionalPaths::Best> best;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Ipv6::Ipv6Unicast::PeerGroup::Neighbor::Advertise::AdditionalPaths::GroupBest> group_best; // presence node
        
}; // Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Ipv6::Ipv6Unicast::PeerGroup::Neighbor::Advertise::AdditionalPaths


class Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Ipv6::Ipv6Unicast::PeerGroup::Neighbor::Advertise::AdditionalPaths::All : public ydk::Entity
{
    public:
        All();
        ~All();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Best; //type: Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Ipv6::Ipv6Unicast::PeerGroup::Neighbor::Advertise::AdditionalPaths::All::Best
        class GroupBest; //type: Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Ipv6::Ipv6Unicast::PeerGroup::Neighbor::Advertise::AdditionalPaths::All::GroupBest

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Ipv6::Ipv6Unicast::PeerGroup::Neighbor::Advertise::AdditionalPaths::All::Best> best;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Ipv6::Ipv6Unicast::PeerGroup::Neighbor::Advertise::AdditionalPaths::All::GroupBest> group_best; // presence node
        
}; // Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Ipv6::Ipv6Unicast::PeerGroup::Neighbor::Advertise::AdditionalPaths::All


class Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Ipv6::Ipv6Unicast::PeerGroup::Neighbor::Advertise::AdditionalPaths::All::Best : public ydk::Entity
{
    public:
        Best();
        ~Best();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class BestRange; //type: Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Ipv6::Ipv6Unicast::PeerGroup::Neighbor::Advertise::AdditionalPaths::All::Best::BestRange

        ydk::YList best_range;
        
}; // Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Ipv6::Ipv6Unicast::PeerGroup::Neighbor::Advertise::AdditionalPaths::All::Best


class Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Ipv6::Ipv6Unicast::PeerGroup::Neighbor::Advertise::AdditionalPaths::All::Best::BestRange : public ydk::Entity
{
    public:
        BestRange();
        ~BestRange();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf range; //type: uint8
        ydk::YLeaf group_best; //type: empty

}; // Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Ipv6::Ipv6Unicast::PeerGroup::Neighbor::Advertise::AdditionalPaths::All::Best::BestRange


class Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Ipv6::Ipv6Unicast::PeerGroup::Neighbor::Advertise::AdditionalPaths::All::GroupBest : public ydk::Entity
{
    public:
        GroupBest();
        ~GroupBest();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf best; //type: uint8

}; // Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Ipv6::Ipv6Unicast::PeerGroup::Neighbor::Advertise::AdditionalPaths::All::GroupBest


class Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Ipv6::Ipv6Unicast::PeerGroup::Neighbor::Advertise::AdditionalPaths::Best : public ydk::Entity
{
    public:
        Best();
        ~Best();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class BestRange; //type: Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Ipv6::Ipv6Unicast::PeerGroup::Neighbor::Advertise::AdditionalPaths::Best::BestRange

        ydk::YList best_range;
        
}; // Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Ipv6::Ipv6Unicast::PeerGroup::Neighbor::Advertise::AdditionalPaths::Best


class Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Ipv6::Ipv6Unicast::PeerGroup::Neighbor::Advertise::AdditionalPaths::Best::BestRange : public ydk::Entity
{
    public:
        BestRange();
        ~BestRange();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf range; //type: uint8
        ydk::YLeaf all; //type: empty
        class GroupBest; //type: Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Ipv6::Ipv6Unicast::PeerGroup::Neighbor::Advertise::AdditionalPaths::Best::BestRange::GroupBest

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Ipv6::Ipv6Unicast::PeerGroup::Neighbor::Advertise::AdditionalPaths::Best::BestRange::GroupBest> group_best; // presence node
        
}; // Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Ipv6::Ipv6Unicast::PeerGroup::Neighbor::Advertise::AdditionalPaths::Best::BestRange


class Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Ipv6::Ipv6Unicast::PeerGroup::Neighbor::Advertise::AdditionalPaths::Best::BestRange::GroupBest : public ydk::Entity
{
    public:
        GroupBest();
        ~GroupBest();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf all; //type: empty

}; // Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Ipv6::Ipv6Unicast::PeerGroup::Neighbor::Advertise::AdditionalPaths::Best::BestRange::GroupBest


class Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Ipv6::Ipv6Unicast::PeerGroup::Neighbor::Advertise::AdditionalPaths::GroupBest : public ydk::Entity
{
    public:
        GroupBest();
        ~GroupBest();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf all; //type: empty
        ydk::YLeaf best; //type: uint8

}; // Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Ipv6::Ipv6Unicast::PeerGroup::Neighbor::Advertise::AdditionalPaths::GroupBest


class Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Ipv6::Ipv6Unicast::PeerGroup::Neighbor::Advertise::DiversePath : public ydk::Entity
{
    public:
        DiversePath();
        ~DiversePath();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf mpath; //type: empty
        class Backup; //type: Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Ipv6::Ipv6Unicast::PeerGroup::Neighbor::Advertise::DiversePath::Backup

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Ipv6::Ipv6Unicast::PeerGroup::Neighbor::Advertise::DiversePath::Backup> backup; // presence node
        
}; // Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Ipv6::Ipv6Unicast::PeerGroup::Neighbor::Advertise::DiversePath


class Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Ipv6::Ipv6Unicast::PeerGroup::Neighbor::Advertise::DiversePath::Backup : public ydk::Entity
{
    public:
        Backup();
        ~Backup();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf mpath; //type: empty

}; // Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Ipv6::Ipv6Unicast::PeerGroup::Neighbor::Advertise::DiversePath::Backup


class Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Ipv6::Ipv6Unicast::PeerGroup::Neighbor::AdvertiseMap : public ydk::Entity
{
    public:
        AdvertiseMap();
        ~AdvertiseMap();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Name; //type: Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Ipv6::Ipv6Unicast::PeerGroup::Neighbor::AdvertiseMap::Name

        ydk::YList name;
        
}; // Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Ipv6::Ipv6Unicast::PeerGroup::Neighbor::AdvertiseMap


class Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Ipv6::Ipv6Unicast::PeerGroup::Neighbor::AdvertiseMap::Name : public ydk::Entity
{
    public:
        Name();
        ~Name();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf word; //type: string
        ydk::YLeaf exist_map; //type: string
        ydk::YLeaf non_exist_map; //type: string

}; // Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Ipv6::Ipv6Unicast::PeerGroup::Neighbor::AdvertiseMap::Name


class Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Ipv6::Ipv6Unicast::PeerGroup::Neighbor::Aigp : public ydk::Entity
{
    public:
        Aigp();
        ~Aigp();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Send; //type: Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Ipv6::Ipv6Unicast::PeerGroup::Neighbor::Aigp::Send

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Ipv6::Ipv6Unicast::PeerGroup::Neighbor::Aigp::Send> send;
        
}; // Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Ipv6::Ipv6Unicast::PeerGroup::Neighbor::Aigp


class Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Ipv6::Ipv6Unicast::PeerGroup::Neighbor::Aigp::Send : public ydk::Entity
{
    public:
        Send();
        ~Send();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf med; //type: empty
        class CostCommunity; //type: Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Ipv6::Ipv6Unicast::PeerGroup::Neighbor::Aigp::Send::CostCommunity

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Ipv6::Ipv6Unicast::PeerGroup::Neighbor::Aigp::Send::CostCommunity> cost_community;
        
}; // Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Ipv6::Ipv6Unicast::PeerGroup::Neighbor::Aigp::Send


class Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Ipv6::Ipv6Unicast::PeerGroup::Neighbor::Aigp::Send::CostCommunity : public ydk::Entity
{
    public:
        CostCommunity();
        ~CostCommunity();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class CcRange; //type: Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Ipv6::Ipv6Unicast::PeerGroup::Neighbor::Aigp::Send::CostCommunity::CcRange

        ydk::YList cc_range;
        
}; // Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Ipv6::Ipv6Unicast::PeerGroup::Neighbor::Aigp::Send::CostCommunity


class Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Ipv6::Ipv6Unicast::PeerGroup::Neighbor::Aigp::Send::CostCommunity::CcRange : public ydk::Entity
{
    public:
        CcRange();
        ~CcRange();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf range; //type: uint8
        class Poi; //type: Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Ipv6::Ipv6Unicast::PeerGroup::Neighbor::Aigp::Send::CostCommunity::CcRange::Poi

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Ipv6::Ipv6Unicast::PeerGroup::Neighbor::Aigp::Send::CostCommunity::CcRange::Poi> poi;
        
}; // Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Ipv6::Ipv6Unicast::PeerGroup::Neighbor::Aigp::Send::CostCommunity::CcRange


class Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Ipv6::Ipv6Unicast::PeerGroup::Neighbor::Aigp::Send::CostCommunity::CcRange::Poi : public ydk::Entity
{
    public:
        Poi();
        ~Poi();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class IgpCost; //type: Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Ipv6::Ipv6Unicast::PeerGroup::Neighbor::Aigp::Send::CostCommunity::CcRange::Poi::IgpCost
        class PreBestpath; //type: Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Ipv6::Ipv6Unicast::PeerGroup::Neighbor::Aigp::Send::CostCommunity::CcRange::Poi::PreBestpath

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Ipv6::Ipv6Unicast::PeerGroup::Neighbor::Aigp::Send::CostCommunity::CcRange::Poi::IgpCost> igp_cost; // presence node
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Ipv6::Ipv6Unicast::PeerGroup::Neighbor::Aigp::Send::CostCommunity::CcRange::Poi::PreBestpath> pre_bestpath; // presence node
        
}; // Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Ipv6::Ipv6Unicast::PeerGroup::Neighbor::Aigp::Send::CostCommunity::CcRange::Poi


class Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Ipv6::Ipv6Unicast::PeerGroup::Neighbor::Aigp::Send::CostCommunity::CcRange::Poi::IgpCost : public ydk::Entity
{
    public:
        IgpCost();
        ~IgpCost();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf transitive; //type: empty

}; // Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Ipv6::Ipv6Unicast::PeerGroup::Neighbor::Aigp::Send::CostCommunity::CcRange::Poi::IgpCost


class Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Ipv6::Ipv6Unicast::PeerGroup::Neighbor::Aigp::Send::CostCommunity::CcRange::Poi::PreBestpath : public ydk::Entity
{
    public:
        PreBestpath();
        ~PreBestpath();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf transitive; //type: empty

}; // Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Ipv6::Ipv6Unicast::PeerGroup::Neighbor::Aigp::Send::CostCommunity::CcRange::Poi::PreBestpath


class Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Ipv6::Ipv6Unicast::PeerGroup::Neighbor::AllowasIn : public ydk::Entity
{
    public:
        AllowasIn();
        ~AllowasIn();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf as_number; //type: uint8

}; // Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Ipv6::Ipv6Unicast::PeerGroup::Neighbor::AllowasIn


class Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Ipv6::Ipv6Unicast::PeerGroup::Neighbor::Announce : public ydk::Entity
{
    public:
        Announce();
        ~Announce();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Rpki; //type: Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Ipv6::Ipv6Unicast::PeerGroup::Neighbor::Announce::Rpki

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Ipv6::Ipv6Unicast::PeerGroup::Neighbor::Announce::Rpki> rpki;
        
}; // Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Ipv6::Ipv6Unicast::PeerGroup::Neighbor::Announce


class Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Ipv6::Ipv6Unicast::PeerGroup::Neighbor::Announce::Rpki : public ydk::Entity
{
    public:
        Rpki();
        ~Rpki();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf state; //type: empty

}; // Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Ipv6::Ipv6Unicast::PeerGroup::Neighbor::Announce::Rpki


class Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Ipv6::Ipv6Unicast::PeerGroup::Neighbor::AsOverride : public ydk::Entity
{
    public:
        AsOverride();
        ~AsOverride();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf split_horizon; //type: empty

}; // Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Ipv6::Ipv6Unicast::PeerGroup::Neighbor::AsOverride

class Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Ipv4::Ipv4Unicast::Neighbor::Capability::Orf::PrefixList : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf both;
        static const ydk::Enum::YLeaf receive;
        static const ydk::Enum::YLeaf send;

        static int get_enum_value(const std::string & name) {
            if (name == "both") return 0;
            if (name == "receive") return 1;
            if (name == "send") return 2;
            return -1;
        }
};

class Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Ipv4::Ipv4Unicast::Neighbor::DistributeList::Inout : public ydk::Enum
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

class Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Ipv4::Ipv4Unicast::Neighbor::FilterList::Inout : public ydk::Enum
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

class Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Ipv4::Ipv4Unicast::Neighbor::PrefixList::Inout : public ydk::Enum
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

class Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Ipv4::Ipv4Unicast::Neighbor::RouteMap::Inout : public ydk::Enum
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

class Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Ipv4::Ipv4Unicast::Neighbor::SendCommunity::SendCommunityWhere : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf both;
        static const ydk::Enum::YLeaf extended;
        static const ydk::Enum::YLeaf standard;

        static int get_enum_value(const std::string & name) {
            if (name == "both") return 0;
            if (name == "extended") return 1;
            if (name == "standard") return 2;
            return -1;
        }
};

class Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Ipv4::Ipv4Unicast::Neighbor::SendLabel::SendLabelExplicit : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf explicit_null;

        static int get_enum_value(const std::string & name) {
            if (name == "explicit-null") return 0;
            return -1;
        }
};

class Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Ipv4::Ipv4Unicast::Redistribute::Isis::IsisArea::Routes : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf level_1;
        static const ydk::Enum::YLeaf level_2;
        static const ydk::Enum::YLeaf level_1_2;

        static int get_enum_value(const std::string & name) {
            if (name == "level-1") return 0;
            if (name == "level-2") return 1;
            if (name == "level-1-2") return 2;
            return -1;
        }
};

class Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Ipv4::Ipv4Unicast::Redistribute::Isis::Default::Routes : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf level_1;
        static const ydk::Enum::YLeaf level_2;
        static const ydk::Enum::YLeaf level_1_2;

        static int get_enum_value(const std::string & name) {
            if (name == "level-1") return 0;
            if (name == "level-2") return 1;
            if (name == "level-1-2") return 2;
            return -1;
        }
};

class Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Ipv6::Ipv6Unicast::Bgp_::AggregateTimer::DisableTimer : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf Y_0;

        static int get_enum_value(const std::string & name) {
            if (name == "0") return 0;
            return -1;
        }
};

class Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Ipv6::Ipv6Unicast::PeerGroup::Neighbor::SoftReconfiguration : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf inbound;

        static int get_enum_value(const std::string & name) {
            if (name == "inbound") return 0;
            return -1;
        }
};


}
}

#endif /* _CISCO_IOS_XE_NATIVE_165_ */


#ifndef _CISCO_IOS_XR_ALARMGR_SERVER_OPER_
#define _CISCO_IOS_XR_ALARMGR_SERVER_OPER_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>

namespace cisco_ios_xr {
namespace Cisco_IOS_XR_alarmgr_server_oper {

class Alarms : public ydk::Entity
{
    public:
        Alarms();
        ~Alarms();

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

        class Detail; //type: Alarms::Detail
        class Brief; //type: Alarms::Brief

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_alarmgr_server_oper::Alarms::Detail> detail;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_alarmgr_server_oper::Alarms::Brief> brief;
        
}; // Alarms


class Alarms::Detail : public ydk::Entity
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

        class DetailSystem; //type: Alarms::Detail::DetailSystem
        class DetailCard; //type: Alarms::Detail::DetailCard

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_alarmgr_server_oper::Alarms::Detail::DetailSystem> detail_system;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_alarmgr_server_oper::Alarms::Detail::DetailCard> detail_card;
        
}; // Alarms::Detail


class Alarms::Detail::DetailSystem : public ydk::Entity
{
    public:
        DetailSystem();
        ~DetailSystem();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        class Conditions; //type: Alarms::Detail::DetailSystem::Conditions
        class Active; //type: Alarms::Detail::DetailSystem::Active
        class History; //type: Alarms::Detail::DetailSystem::History
        class Suppressed; //type: Alarms::Detail::DetailSystem::Suppressed
        class Stats; //type: Alarms::Detail::DetailSystem::Stats
        class Clients; //type: Alarms::Detail::DetailSystem::Clients

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_alarmgr_server_oper::Alarms::Detail::DetailSystem::Conditions> conditions;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_alarmgr_server_oper::Alarms::Detail::DetailSystem::Active> active;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_alarmgr_server_oper::Alarms::Detail::DetailSystem::History> history;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_alarmgr_server_oper::Alarms::Detail::DetailSystem::Suppressed> suppressed;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_alarmgr_server_oper::Alarms::Detail::DetailSystem::Stats> stats;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_alarmgr_server_oper::Alarms::Detail::DetailSystem::Clients> clients;
        
}; // Alarms::Detail::DetailSystem


class Alarms::Detail::DetailSystem::Conditions : public ydk::Entity
{
    public:
        Conditions();
        ~Conditions();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        class AlarmInfo; //type: Alarms::Detail::DetailSystem::Conditions::AlarmInfo

        ydk::YList alarm_info;
        
}; // Alarms::Detail::DetailSystem::Conditions


class Alarms::Detail::DetailSystem::Conditions::AlarmInfo : public ydk::Entity
{
    public:
        AlarmInfo();
        ~AlarmInfo();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf description; //type: string
        ydk::YLeaf location; //type: string
        ydk::YLeaf aid; //type: string
        ydk::YLeaf tag; //type: string
        ydk::YLeaf module; //type: string
        ydk::YLeaf eid; //type: string
        ydk::YLeaf reporting_agent_id; //type: uint32
        ydk::YLeaf pending_sync; //type: boolean
        ydk::YLeaf severity; //type: AlarmSeverity
        ydk::YLeaf status; //type: AlarmStatus
        ydk::YLeaf group; //type: AlarmGroups
        ydk::YLeaf set_time; //type: string
        ydk::YLeaf set_timestamp; //type: uint64
        ydk::YLeaf clear_time; //type: string
        ydk::YLeaf clear_timestamp; //type: uint64
        ydk::YLeaf service_affecting; //type: AlarmServiceAffecting
        ydk::YLeaf type; //type: AlarmEvent
        ydk::YLeaf interface; //type: string
        ydk::YLeaf alarm_name; //type: string
        class Otn; //type: Alarms::Detail::DetailSystem::Conditions::AlarmInfo::Otn
        class Tca; //type: Alarms::Detail::DetailSystem::Conditions::AlarmInfo::Tca

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_alarmgr_server_oper::Alarms::Detail::DetailSystem::Conditions::AlarmInfo::Otn> otn;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_alarmgr_server_oper::Alarms::Detail::DetailSystem::Conditions::AlarmInfo::Tca> tca;
        
}; // Alarms::Detail::DetailSystem::Conditions::AlarmInfo


class Alarms::Detail::DetailSystem::Conditions::AlarmInfo::Otn : public ydk::Entity
{
    public:
        Otn();
        ~Otn();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf direction; //type: AlarmDirection
        ydk::YLeaf notification_source; //type: AlarmNotificationSrc

}; // Alarms::Detail::DetailSystem::Conditions::AlarmInfo::Otn


class Alarms::Detail::DetailSystem::Conditions::AlarmInfo::Tca : public ydk::Entity
{
    public:
        Tca();
        ~Tca();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf threshold_value; //type: string
        ydk::YLeaf current_value; //type: string
        ydk::YLeaf bucket_type; //type: TimingBucket

}; // Alarms::Detail::DetailSystem::Conditions::AlarmInfo::Tca


class Alarms::Detail::DetailSystem::Active : public ydk::Entity
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

        class AlarmInfo; //type: Alarms::Detail::DetailSystem::Active::AlarmInfo

        ydk::YList alarm_info;
        
}; // Alarms::Detail::DetailSystem::Active


class Alarms::Detail::DetailSystem::Active::AlarmInfo : public ydk::Entity
{
    public:
        AlarmInfo();
        ~AlarmInfo();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf description; //type: string
        ydk::YLeaf location; //type: string
        ydk::YLeaf aid; //type: string
        ydk::YLeaf tag; //type: string
        ydk::YLeaf module; //type: string
        ydk::YLeaf eid; //type: string
        ydk::YLeaf reporting_agent_id; //type: uint32
        ydk::YLeaf pending_sync; //type: boolean
        ydk::YLeaf severity; //type: AlarmSeverity
        ydk::YLeaf status; //type: AlarmStatus
        ydk::YLeaf group; //type: AlarmGroups
        ydk::YLeaf set_time; //type: string
        ydk::YLeaf set_timestamp; //type: uint64
        ydk::YLeaf clear_time; //type: string
        ydk::YLeaf clear_timestamp; //type: uint64
        ydk::YLeaf service_affecting; //type: AlarmServiceAffecting
        ydk::YLeaf type; //type: AlarmEvent
        ydk::YLeaf interface; //type: string
        ydk::YLeaf alarm_name; //type: string
        class Otn; //type: Alarms::Detail::DetailSystem::Active::AlarmInfo::Otn
        class Tca; //type: Alarms::Detail::DetailSystem::Active::AlarmInfo::Tca

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_alarmgr_server_oper::Alarms::Detail::DetailSystem::Active::AlarmInfo::Otn> otn;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_alarmgr_server_oper::Alarms::Detail::DetailSystem::Active::AlarmInfo::Tca> tca;
        
}; // Alarms::Detail::DetailSystem::Active::AlarmInfo


class Alarms::Detail::DetailSystem::Active::AlarmInfo::Otn : public ydk::Entity
{
    public:
        Otn();
        ~Otn();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf direction; //type: AlarmDirection
        ydk::YLeaf notification_source; //type: AlarmNotificationSrc

}; // Alarms::Detail::DetailSystem::Active::AlarmInfo::Otn


class Alarms::Detail::DetailSystem::Active::AlarmInfo::Tca : public ydk::Entity
{
    public:
        Tca();
        ~Tca();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf threshold_value; //type: string
        ydk::YLeaf current_value; //type: string
        ydk::YLeaf bucket_type; //type: TimingBucket

}; // Alarms::Detail::DetailSystem::Active::AlarmInfo::Tca


class Alarms::Detail::DetailSystem::History : public ydk::Entity
{
    public:
        History();
        ~History();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        class AlarmInfo; //type: Alarms::Detail::DetailSystem::History::AlarmInfo

        ydk::YList alarm_info;
        
}; // Alarms::Detail::DetailSystem::History


class Alarms::Detail::DetailSystem::History::AlarmInfo : public ydk::Entity
{
    public:
        AlarmInfo();
        ~AlarmInfo();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf description; //type: string
        ydk::YLeaf location; //type: string
        ydk::YLeaf aid; //type: string
        ydk::YLeaf tag; //type: string
        ydk::YLeaf module; //type: string
        ydk::YLeaf eid; //type: string
        ydk::YLeaf reporting_agent_id; //type: uint32
        ydk::YLeaf pending_sync; //type: boolean
        ydk::YLeaf severity; //type: AlarmSeverity
        ydk::YLeaf status; //type: AlarmStatus
        ydk::YLeaf group; //type: AlarmGroups
        ydk::YLeaf set_time; //type: string
        ydk::YLeaf set_timestamp; //type: uint64
        ydk::YLeaf clear_time; //type: string
        ydk::YLeaf clear_timestamp; //type: uint64
        ydk::YLeaf service_affecting; //type: AlarmServiceAffecting
        ydk::YLeaf type; //type: AlarmEvent
        ydk::YLeaf interface; //type: string
        ydk::YLeaf alarm_name; //type: string
        class Otn; //type: Alarms::Detail::DetailSystem::History::AlarmInfo::Otn
        class Tca; //type: Alarms::Detail::DetailSystem::History::AlarmInfo::Tca

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_alarmgr_server_oper::Alarms::Detail::DetailSystem::History::AlarmInfo::Otn> otn;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_alarmgr_server_oper::Alarms::Detail::DetailSystem::History::AlarmInfo::Tca> tca;
        
}; // Alarms::Detail::DetailSystem::History::AlarmInfo


class Alarms::Detail::DetailSystem::History::AlarmInfo::Otn : public ydk::Entity
{
    public:
        Otn();
        ~Otn();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf direction; //type: AlarmDirection
        ydk::YLeaf notification_source; //type: AlarmNotificationSrc

}; // Alarms::Detail::DetailSystem::History::AlarmInfo::Otn


class Alarms::Detail::DetailSystem::History::AlarmInfo::Tca : public ydk::Entity
{
    public:
        Tca();
        ~Tca();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf threshold_value; //type: string
        ydk::YLeaf current_value; //type: string
        ydk::YLeaf bucket_type; //type: TimingBucket

}; // Alarms::Detail::DetailSystem::History::AlarmInfo::Tca


class Alarms::Detail::DetailSystem::Suppressed : public ydk::Entity
{
    public:
        Suppressed();
        ~Suppressed();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        class SuppressedInfo; //type: Alarms::Detail::DetailSystem::Suppressed::SuppressedInfo

        ydk::YList suppressed_info;
        
}; // Alarms::Detail::DetailSystem::Suppressed


class Alarms::Detail::DetailSystem::Suppressed::SuppressedInfo : public ydk::Entity
{
    public:
        SuppressedInfo();
        ~SuppressedInfo();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf description; //type: string
        ydk::YLeaf location; //type: string
        ydk::YLeaf aid; //type: string
        ydk::YLeaf tag; //type: string
        ydk::YLeaf module; //type: string
        ydk::YLeaf eid; //type: string
        ydk::YLeaf reporting_agent_id; //type: uint32
        ydk::YLeaf pending_sync; //type: boolean
        ydk::YLeaf severity; //type: AlarmSeverity
        ydk::YLeaf status; //type: AlarmStatus
        ydk::YLeaf group; //type: AlarmGroups
        ydk::YLeaf set_time; //type: string
        ydk::YLeaf set_timestamp; //type: uint64
        ydk::YLeaf suppressed_time; //type: string
        ydk::YLeaf suppressed_timestamp; //type: uint64
        ydk::YLeaf service_affecting; //type: AlarmServiceAffecting
        ydk::YLeaf interface; //type: string
        ydk::YLeaf alarm_name; //type: string
        class Otn; //type: Alarms::Detail::DetailSystem::Suppressed::SuppressedInfo::Otn

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_alarmgr_server_oper::Alarms::Detail::DetailSystem::Suppressed::SuppressedInfo::Otn> otn;
        
}; // Alarms::Detail::DetailSystem::Suppressed::SuppressedInfo


class Alarms::Detail::DetailSystem::Suppressed::SuppressedInfo::Otn : public ydk::Entity
{
    public:
        Otn();
        ~Otn();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf direction; //type: AlarmDirection
        ydk::YLeaf notification_source; //type: AlarmNotificationSrc

}; // Alarms::Detail::DetailSystem::Suppressed::SuppressedInfo::Otn


class Alarms::Detail::DetailSystem::Stats : public ydk::Entity
{
    public:
        Stats();
        ~Stats();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf reported; //type: uint64
        ydk::YLeaf dropped; //type: uint64
        ydk::YLeaf active; //type: uint64
        ydk::YLeaf history; //type: uint64
        ydk::YLeaf suppressed; //type: uint64
        ydk::YLeaf sysadmin_active; //type: uint64
        ydk::YLeaf sysadmin_history; //type: uint64
        ydk::YLeaf sysadmin_suppressed; //type: uint64
        ydk::YLeaf dropped_invalid_aid; //type: uint32
        ydk::YLeaf dropped_insuff_mem; //type: uint32
        ydk::YLeaf dropped_db_error; //type: uint32
        ydk::YLeaf dropped_clear_without_set; //type: uint32
        ydk::YLeaf dropped_duplicate; //type: uint32
        ydk::YLeaf cache_hit; //type: uint32
        ydk::YLeaf cache_miss; //type: uint32

}; // Alarms::Detail::DetailSystem::Stats


class Alarms::Detail::DetailSystem::Clients : public ydk::Entity
{
    public:
        Clients();
        ~Clients();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        class ClientInfo; //type: Alarms::Detail::DetailSystem::Clients::ClientInfo

        ydk::YList client_info;
        
}; // Alarms::Detail::DetailSystem::Clients


class Alarms::Detail::DetailSystem::Clients::ClientInfo : public ydk::Entity
{
    public:
        ClientInfo();
        ~ClientInfo();

        bool has_data() const override;
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
        ydk::YLeaf id; //type: uint32
        ydk::YLeaf location; //type: string
        ydk::YLeaf handle; //type: string
        ydk::YLeaf state; //type: AlarmClientState
        ydk::YLeaf type; //type: AlarmClient
        ydk::YLeaf filter_disp; //type: boolean
        ydk::YLeaf subscriber_id; //type: uint32
        ydk::YLeaf filter_severity; //type: AlarmSeverity
        ydk::YLeaf filter_state; //type: AlarmStatus
        ydk::YLeaf filter_group; //type: AlarmGroups
        ydk::YLeaf connect_count; //type: uint32
        ydk::YLeaf connect_timestamp; //type: string
        ydk::YLeaf get_count; //type: uint32
        ydk::YLeaf subscribe_count; //type: uint32
        ydk::YLeaf report_count; //type: uint32

}; // Alarms::Detail::DetailSystem::Clients::ClientInfo


class Alarms::Detail::DetailCard : public ydk::Entity
{
    public:
        DetailCard();
        ~DetailCard();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        class DetailLocations; //type: Alarms::Detail::DetailCard::DetailLocations

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_alarmgr_server_oper::Alarms::Detail::DetailCard::DetailLocations> detail_locations;
        
}; // Alarms::Detail::DetailCard


class Alarms::Detail::DetailCard::DetailLocations : public ydk::Entity
{
    public:
        DetailLocations();
        ~DetailLocations();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        class DetailLocation; //type: Alarms::Detail::DetailCard::DetailLocations::DetailLocation

        ydk::YList detail_location;
        
}; // Alarms::Detail::DetailCard::DetailLocations


class Alarms::Detail::DetailCard::DetailLocations::DetailLocation : public ydk::Entity
{
    public:
        DetailLocation();
        ~DetailLocation();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf node_id; //type: string
        class Conditions; //type: Alarms::Detail::DetailCard::DetailLocations::DetailLocation::Conditions
        class Active; //type: Alarms::Detail::DetailCard::DetailLocations::DetailLocation::Active
        class History; //type: Alarms::Detail::DetailCard::DetailLocations::DetailLocation::History
        class Suppressed; //type: Alarms::Detail::DetailCard::DetailLocations::DetailLocation::Suppressed
        class Stats; //type: Alarms::Detail::DetailCard::DetailLocations::DetailLocation::Stats
        class Clients; //type: Alarms::Detail::DetailCard::DetailLocations::DetailLocation::Clients

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_alarmgr_server_oper::Alarms::Detail::DetailCard::DetailLocations::DetailLocation::Conditions> conditions;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_alarmgr_server_oper::Alarms::Detail::DetailCard::DetailLocations::DetailLocation::Active> active;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_alarmgr_server_oper::Alarms::Detail::DetailCard::DetailLocations::DetailLocation::History> history;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_alarmgr_server_oper::Alarms::Detail::DetailCard::DetailLocations::DetailLocation::Suppressed> suppressed;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_alarmgr_server_oper::Alarms::Detail::DetailCard::DetailLocations::DetailLocation::Stats> stats;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_alarmgr_server_oper::Alarms::Detail::DetailCard::DetailLocations::DetailLocation::Clients> clients;
        
}; // Alarms::Detail::DetailCard::DetailLocations::DetailLocation


class Alarms::Detail::DetailCard::DetailLocations::DetailLocation::Conditions : public ydk::Entity
{
    public:
        Conditions();
        ~Conditions();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class AlarmInfo; //type: Alarms::Detail::DetailCard::DetailLocations::DetailLocation::Conditions::AlarmInfo

        ydk::YList alarm_info;
        
}; // Alarms::Detail::DetailCard::DetailLocations::DetailLocation::Conditions


class Alarms::Detail::DetailCard::DetailLocations::DetailLocation::Conditions::AlarmInfo : public ydk::Entity
{
    public:
        AlarmInfo();
        ~AlarmInfo();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf description; //type: string
        ydk::YLeaf location; //type: string
        ydk::YLeaf aid; //type: string
        ydk::YLeaf tag; //type: string
        ydk::YLeaf module; //type: string
        ydk::YLeaf eid; //type: string
        ydk::YLeaf reporting_agent_id; //type: uint32
        ydk::YLeaf pending_sync; //type: boolean
        ydk::YLeaf severity; //type: AlarmSeverity
        ydk::YLeaf status; //type: AlarmStatus
        ydk::YLeaf group; //type: AlarmGroups
        ydk::YLeaf set_time; //type: string
        ydk::YLeaf set_timestamp; //type: uint64
        ydk::YLeaf clear_time; //type: string
        ydk::YLeaf clear_timestamp; //type: uint64
        ydk::YLeaf service_affecting; //type: AlarmServiceAffecting
        ydk::YLeaf type; //type: AlarmEvent
        ydk::YLeaf interface; //type: string
        ydk::YLeaf alarm_name; //type: string
        class Otn; //type: Alarms::Detail::DetailCard::DetailLocations::DetailLocation::Conditions::AlarmInfo::Otn
        class Tca; //type: Alarms::Detail::DetailCard::DetailLocations::DetailLocation::Conditions::AlarmInfo::Tca

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_alarmgr_server_oper::Alarms::Detail::DetailCard::DetailLocations::DetailLocation::Conditions::AlarmInfo::Otn> otn;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_alarmgr_server_oper::Alarms::Detail::DetailCard::DetailLocations::DetailLocation::Conditions::AlarmInfo::Tca> tca;
        
}; // Alarms::Detail::DetailCard::DetailLocations::DetailLocation::Conditions::AlarmInfo


class Alarms::Detail::DetailCard::DetailLocations::DetailLocation::Conditions::AlarmInfo::Otn : public ydk::Entity
{
    public:
        Otn();
        ~Otn();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf direction; //type: AlarmDirection
        ydk::YLeaf notification_source; //type: AlarmNotificationSrc

}; // Alarms::Detail::DetailCard::DetailLocations::DetailLocation::Conditions::AlarmInfo::Otn


class Alarms::Detail::DetailCard::DetailLocations::DetailLocation::Conditions::AlarmInfo::Tca : public ydk::Entity
{
    public:
        Tca();
        ~Tca();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf threshold_value; //type: string
        ydk::YLeaf current_value; //type: string
        ydk::YLeaf bucket_type; //type: TimingBucket

}; // Alarms::Detail::DetailCard::DetailLocations::DetailLocation::Conditions::AlarmInfo::Tca


class Alarms::Detail::DetailCard::DetailLocations::DetailLocation::Active : public ydk::Entity
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

        class AlarmInfo; //type: Alarms::Detail::DetailCard::DetailLocations::DetailLocation::Active::AlarmInfo

        ydk::YList alarm_info;
        
}; // Alarms::Detail::DetailCard::DetailLocations::DetailLocation::Active


class Alarms::Detail::DetailCard::DetailLocations::DetailLocation::Active::AlarmInfo : public ydk::Entity
{
    public:
        AlarmInfo();
        ~AlarmInfo();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf description; //type: string
        ydk::YLeaf location; //type: string
        ydk::YLeaf aid; //type: string
        ydk::YLeaf tag; //type: string
        ydk::YLeaf module; //type: string
        ydk::YLeaf eid; //type: string
        ydk::YLeaf reporting_agent_id; //type: uint32
        ydk::YLeaf pending_sync; //type: boolean
        ydk::YLeaf severity; //type: AlarmSeverity
        ydk::YLeaf status; //type: AlarmStatus
        ydk::YLeaf group; //type: AlarmGroups
        ydk::YLeaf set_time; //type: string
        ydk::YLeaf set_timestamp; //type: uint64
        ydk::YLeaf clear_time; //type: string
        ydk::YLeaf clear_timestamp; //type: uint64
        ydk::YLeaf service_affecting; //type: AlarmServiceAffecting
        ydk::YLeaf type; //type: AlarmEvent
        ydk::YLeaf interface; //type: string
        ydk::YLeaf alarm_name; //type: string
        class Otn; //type: Alarms::Detail::DetailCard::DetailLocations::DetailLocation::Active::AlarmInfo::Otn
        class Tca; //type: Alarms::Detail::DetailCard::DetailLocations::DetailLocation::Active::AlarmInfo::Tca

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_alarmgr_server_oper::Alarms::Detail::DetailCard::DetailLocations::DetailLocation::Active::AlarmInfo::Otn> otn;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_alarmgr_server_oper::Alarms::Detail::DetailCard::DetailLocations::DetailLocation::Active::AlarmInfo::Tca> tca;
        
}; // Alarms::Detail::DetailCard::DetailLocations::DetailLocation::Active::AlarmInfo


class Alarms::Detail::DetailCard::DetailLocations::DetailLocation::Active::AlarmInfo::Otn : public ydk::Entity
{
    public:
        Otn();
        ~Otn();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf direction; //type: AlarmDirection
        ydk::YLeaf notification_source; //type: AlarmNotificationSrc

}; // Alarms::Detail::DetailCard::DetailLocations::DetailLocation::Active::AlarmInfo::Otn


class Alarms::Detail::DetailCard::DetailLocations::DetailLocation::Active::AlarmInfo::Tca : public ydk::Entity
{
    public:
        Tca();
        ~Tca();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf threshold_value; //type: string
        ydk::YLeaf current_value; //type: string
        ydk::YLeaf bucket_type; //type: TimingBucket

}; // Alarms::Detail::DetailCard::DetailLocations::DetailLocation::Active::AlarmInfo::Tca


class Alarms::Detail::DetailCard::DetailLocations::DetailLocation::History : public ydk::Entity
{
    public:
        History();
        ~History();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class AlarmInfo; //type: Alarms::Detail::DetailCard::DetailLocations::DetailLocation::History::AlarmInfo

        ydk::YList alarm_info;
        
}; // Alarms::Detail::DetailCard::DetailLocations::DetailLocation::History


class Alarms::Detail::DetailCard::DetailLocations::DetailLocation::History::AlarmInfo : public ydk::Entity
{
    public:
        AlarmInfo();
        ~AlarmInfo();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf description; //type: string
        ydk::YLeaf location; //type: string
        ydk::YLeaf aid; //type: string
        ydk::YLeaf tag; //type: string
        ydk::YLeaf module; //type: string
        ydk::YLeaf eid; //type: string
        ydk::YLeaf reporting_agent_id; //type: uint32
        ydk::YLeaf pending_sync; //type: boolean
        ydk::YLeaf severity; //type: AlarmSeverity
        ydk::YLeaf status; //type: AlarmStatus
        ydk::YLeaf group; //type: AlarmGroups
        ydk::YLeaf set_time; //type: string
        ydk::YLeaf set_timestamp; //type: uint64
        ydk::YLeaf clear_time; //type: string
        ydk::YLeaf clear_timestamp; //type: uint64
        ydk::YLeaf service_affecting; //type: AlarmServiceAffecting
        ydk::YLeaf type; //type: AlarmEvent
        ydk::YLeaf interface; //type: string
        ydk::YLeaf alarm_name; //type: string
        class Otn; //type: Alarms::Detail::DetailCard::DetailLocations::DetailLocation::History::AlarmInfo::Otn
        class Tca; //type: Alarms::Detail::DetailCard::DetailLocations::DetailLocation::History::AlarmInfo::Tca

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_alarmgr_server_oper::Alarms::Detail::DetailCard::DetailLocations::DetailLocation::History::AlarmInfo::Otn> otn;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_alarmgr_server_oper::Alarms::Detail::DetailCard::DetailLocations::DetailLocation::History::AlarmInfo::Tca> tca;
        
}; // Alarms::Detail::DetailCard::DetailLocations::DetailLocation::History::AlarmInfo


class Alarms::Detail::DetailCard::DetailLocations::DetailLocation::History::AlarmInfo::Otn : public ydk::Entity
{
    public:
        Otn();
        ~Otn();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf direction; //type: AlarmDirection
        ydk::YLeaf notification_source; //type: AlarmNotificationSrc

}; // Alarms::Detail::DetailCard::DetailLocations::DetailLocation::History::AlarmInfo::Otn


class Alarms::Detail::DetailCard::DetailLocations::DetailLocation::History::AlarmInfo::Tca : public ydk::Entity
{
    public:
        Tca();
        ~Tca();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf threshold_value; //type: string
        ydk::YLeaf current_value; //type: string
        ydk::YLeaf bucket_type; //type: TimingBucket

}; // Alarms::Detail::DetailCard::DetailLocations::DetailLocation::History::AlarmInfo::Tca


class Alarms::Detail::DetailCard::DetailLocations::DetailLocation::Suppressed : public ydk::Entity
{
    public:
        Suppressed();
        ~Suppressed();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class SuppressedInfo; //type: Alarms::Detail::DetailCard::DetailLocations::DetailLocation::Suppressed::SuppressedInfo

        ydk::YList suppressed_info;
        
}; // Alarms::Detail::DetailCard::DetailLocations::DetailLocation::Suppressed


class Alarms::Detail::DetailCard::DetailLocations::DetailLocation::Suppressed::SuppressedInfo : public ydk::Entity
{
    public:
        SuppressedInfo();
        ~SuppressedInfo();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf description; //type: string
        ydk::YLeaf location; //type: string
        ydk::YLeaf aid; //type: string
        ydk::YLeaf tag; //type: string
        ydk::YLeaf module; //type: string
        ydk::YLeaf eid; //type: string
        ydk::YLeaf reporting_agent_id; //type: uint32
        ydk::YLeaf pending_sync; //type: boolean
        ydk::YLeaf severity; //type: AlarmSeverity
        ydk::YLeaf status; //type: AlarmStatus
        ydk::YLeaf group; //type: AlarmGroups
        ydk::YLeaf set_time; //type: string
        ydk::YLeaf set_timestamp; //type: uint64
        ydk::YLeaf suppressed_time; //type: string
        ydk::YLeaf suppressed_timestamp; //type: uint64
        ydk::YLeaf service_affecting; //type: AlarmServiceAffecting
        ydk::YLeaf interface; //type: string
        ydk::YLeaf alarm_name; //type: string
        class Otn; //type: Alarms::Detail::DetailCard::DetailLocations::DetailLocation::Suppressed::SuppressedInfo::Otn

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_alarmgr_server_oper::Alarms::Detail::DetailCard::DetailLocations::DetailLocation::Suppressed::SuppressedInfo::Otn> otn;
        
}; // Alarms::Detail::DetailCard::DetailLocations::DetailLocation::Suppressed::SuppressedInfo


class Alarms::Detail::DetailCard::DetailLocations::DetailLocation::Suppressed::SuppressedInfo::Otn : public ydk::Entity
{
    public:
        Otn();
        ~Otn();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf direction; //type: AlarmDirection
        ydk::YLeaf notification_source; //type: AlarmNotificationSrc

}; // Alarms::Detail::DetailCard::DetailLocations::DetailLocation::Suppressed::SuppressedInfo::Otn


class Alarms::Detail::DetailCard::DetailLocations::DetailLocation::Stats : public ydk::Entity
{
    public:
        Stats();
        ~Stats();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf reported; //type: uint64
        ydk::YLeaf dropped; //type: uint64
        ydk::YLeaf active; //type: uint64
        ydk::YLeaf history; //type: uint64
        ydk::YLeaf suppressed; //type: uint64
        ydk::YLeaf sysadmin_active; //type: uint64
        ydk::YLeaf sysadmin_history; //type: uint64
        ydk::YLeaf sysadmin_suppressed; //type: uint64
        ydk::YLeaf dropped_invalid_aid; //type: uint32
        ydk::YLeaf dropped_insuff_mem; //type: uint32
        ydk::YLeaf dropped_db_error; //type: uint32
        ydk::YLeaf dropped_clear_without_set; //type: uint32
        ydk::YLeaf dropped_duplicate; //type: uint32
        ydk::YLeaf cache_hit; //type: uint32
        ydk::YLeaf cache_miss; //type: uint32

}; // Alarms::Detail::DetailCard::DetailLocations::DetailLocation::Stats


class Alarms::Detail::DetailCard::DetailLocations::DetailLocation::Clients : public ydk::Entity
{
    public:
        Clients();
        ~Clients();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class ClientInfo; //type: Alarms::Detail::DetailCard::DetailLocations::DetailLocation::Clients::ClientInfo

        ydk::YList client_info;
        
}; // Alarms::Detail::DetailCard::DetailLocations::DetailLocation::Clients


class Alarms::Detail::DetailCard::DetailLocations::DetailLocation::Clients::ClientInfo : public ydk::Entity
{
    public:
        ClientInfo();
        ~ClientInfo();

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
        ydk::YLeaf id; //type: uint32
        ydk::YLeaf location; //type: string
        ydk::YLeaf handle; //type: string
        ydk::YLeaf state; //type: AlarmClientState
        ydk::YLeaf type; //type: AlarmClient
        ydk::YLeaf filter_disp; //type: boolean
        ydk::YLeaf subscriber_id; //type: uint32
        ydk::YLeaf filter_severity; //type: AlarmSeverity
        ydk::YLeaf filter_state; //type: AlarmStatus
        ydk::YLeaf filter_group; //type: AlarmGroups
        ydk::YLeaf connect_count; //type: uint32
        ydk::YLeaf connect_timestamp; //type: string
        ydk::YLeaf get_count; //type: uint32
        ydk::YLeaf subscribe_count; //type: uint32
        ydk::YLeaf report_count; //type: uint32

}; // Alarms::Detail::DetailCard::DetailLocations::DetailLocation::Clients::ClientInfo


class Alarms::Brief : public ydk::Entity
{
    public:
        Brief();
        ~Brief();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        class BriefCard; //type: Alarms::Brief::BriefCard
        class BriefSystem; //type: Alarms::Brief::BriefSystem
        class AlarmId; //type: Alarms::Brief::AlarmId

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_alarmgr_server_oper::Alarms::Brief::BriefCard> brief_card;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_alarmgr_server_oper::Alarms::Brief::BriefSystem> brief_system;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_alarmgr_server_oper::Alarms::Brief::AlarmId> alarm_id;
        
}; // Alarms::Brief


class Alarms::Brief::BriefCard : public ydk::Entity
{
    public:
        BriefCard();
        ~BriefCard();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        class BriefLocations; //type: Alarms::Brief::BriefCard::BriefLocations

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_alarmgr_server_oper::Alarms::Brief::BriefCard::BriefLocations> brief_locations;
        
}; // Alarms::Brief::BriefCard


class Alarms::Brief::BriefCard::BriefLocations : public ydk::Entity
{
    public:
        BriefLocations();
        ~BriefLocations();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        class BriefLocation; //type: Alarms::Brief::BriefCard::BriefLocations::BriefLocation

        ydk::YList brief_location;
        
}; // Alarms::Brief::BriefCard::BriefLocations


class Alarms::Brief::BriefCard::BriefLocations::BriefLocation : public ydk::Entity
{
    public:
        BriefLocation();
        ~BriefLocation();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf node_id; //type: string
        class Conditions; //type: Alarms::Brief::BriefCard::BriefLocations::BriefLocation::Conditions
        class Active; //type: Alarms::Brief::BriefCard::BriefLocations::BriefLocation::Active
        class History; //type: Alarms::Brief::BriefCard::BriefLocations::BriefLocation::History
        class Suppressed; //type: Alarms::Brief::BriefCard::BriefLocations::BriefLocation::Suppressed

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_alarmgr_server_oper::Alarms::Brief::BriefCard::BriefLocations::BriefLocation::Conditions> conditions;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_alarmgr_server_oper::Alarms::Brief::BriefCard::BriefLocations::BriefLocation::Active> active;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_alarmgr_server_oper::Alarms::Brief::BriefCard::BriefLocations::BriefLocation::History> history;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_alarmgr_server_oper::Alarms::Brief::BriefCard::BriefLocations::BriefLocation::Suppressed> suppressed;
        
}; // Alarms::Brief::BriefCard::BriefLocations::BriefLocation


class Alarms::Brief::BriefCard::BriefLocations::BriefLocation::Conditions : public ydk::Entity
{
    public:
        Conditions();
        ~Conditions();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class AlarmInfo; //type: Alarms::Brief::BriefCard::BriefLocations::BriefLocation::Conditions::AlarmInfo

        ydk::YList alarm_info;
        
}; // Alarms::Brief::BriefCard::BriefLocations::BriefLocation::Conditions


class Alarms::Brief::BriefCard::BriefLocations::BriefLocation::Conditions::AlarmInfo : public ydk::Entity
{
    public:
        AlarmInfo();
        ~AlarmInfo();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf location; //type: string
        ydk::YLeaf severity; //type: AlarmSeverity
        ydk::YLeaf group; //type: AlarmGroups
        ydk::YLeaf set_time; //type: string
        ydk::YLeaf set_timestamp; //type: uint64
        ydk::YLeaf clear_time; //type: string
        ydk::YLeaf clear_timestamp; //type: uint64
        ydk::YLeaf description; //type: string

}; // Alarms::Brief::BriefCard::BriefLocations::BriefLocation::Conditions::AlarmInfo


class Alarms::Brief::BriefCard::BriefLocations::BriefLocation::Active : public ydk::Entity
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

        class AlarmInfo; //type: Alarms::Brief::BriefCard::BriefLocations::BriefLocation::Active::AlarmInfo

        ydk::YList alarm_info;
        
}; // Alarms::Brief::BriefCard::BriefLocations::BriefLocation::Active


class Alarms::Brief::BriefCard::BriefLocations::BriefLocation::Active::AlarmInfo : public ydk::Entity
{
    public:
        AlarmInfo();
        ~AlarmInfo();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf location; //type: string
        ydk::YLeaf severity; //type: AlarmSeverity
        ydk::YLeaf group; //type: AlarmGroups
        ydk::YLeaf set_time; //type: string
        ydk::YLeaf set_timestamp; //type: uint64
        ydk::YLeaf clear_time; //type: string
        ydk::YLeaf clear_timestamp; //type: uint64
        ydk::YLeaf description; //type: string

}; // Alarms::Brief::BriefCard::BriefLocations::BriefLocation::Active::AlarmInfo


class Alarms::Brief::BriefCard::BriefLocations::BriefLocation::History : public ydk::Entity
{
    public:
        History();
        ~History();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class AlarmInfo; //type: Alarms::Brief::BriefCard::BriefLocations::BriefLocation::History::AlarmInfo

        ydk::YList alarm_info;
        
}; // Alarms::Brief::BriefCard::BriefLocations::BriefLocation::History


class Alarms::Brief::BriefCard::BriefLocations::BriefLocation::History::AlarmInfo : public ydk::Entity
{
    public:
        AlarmInfo();
        ~AlarmInfo();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf location; //type: string
        ydk::YLeaf severity; //type: AlarmSeverity
        ydk::YLeaf group; //type: AlarmGroups
        ydk::YLeaf set_time; //type: string
        ydk::YLeaf set_timestamp; //type: uint64
        ydk::YLeaf clear_time; //type: string
        ydk::YLeaf clear_timestamp; //type: uint64
        ydk::YLeaf description; //type: string

}; // Alarms::Brief::BriefCard::BriefLocations::BriefLocation::History::AlarmInfo


class Alarms::Brief::BriefCard::BriefLocations::BriefLocation::Suppressed : public ydk::Entity
{
    public:
        Suppressed();
        ~Suppressed();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class SuppressedInfo; //type: Alarms::Brief::BriefCard::BriefLocations::BriefLocation::Suppressed::SuppressedInfo

        ydk::YList suppressed_info;
        
}; // Alarms::Brief::BriefCard::BriefLocations::BriefLocation::Suppressed


class Alarms::Brief::BriefCard::BriefLocations::BriefLocation::Suppressed::SuppressedInfo : public ydk::Entity
{
    public:
        SuppressedInfo();
        ~SuppressedInfo();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf location; //type: string
        ydk::YLeaf severity; //type: AlarmSeverity
        ydk::YLeaf group; //type: AlarmGroups
        ydk::YLeaf set_time; //type: string
        ydk::YLeaf set_timestamp; //type: uint64
        ydk::YLeaf suppressed_time; //type: string
        ydk::YLeaf suppressed_timestamp; //type: uint64
        ydk::YLeaf description; //type: string

}; // Alarms::Brief::BriefCard::BriefLocations::BriefLocation::Suppressed::SuppressedInfo


class Alarms::Brief::BriefSystem : public ydk::Entity
{
    public:
        BriefSystem();
        ~BriefSystem();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        class Conditions; //type: Alarms::Brief::BriefSystem::Conditions
        class Active; //type: Alarms::Brief::BriefSystem::Active
        class History; //type: Alarms::Brief::BriefSystem::History
        class Suppressed; //type: Alarms::Brief::BriefSystem::Suppressed

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_alarmgr_server_oper::Alarms::Brief::BriefSystem::Conditions> conditions;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_alarmgr_server_oper::Alarms::Brief::BriefSystem::Active> active;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_alarmgr_server_oper::Alarms::Brief::BriefSystem::History> history;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_alarmgr_server_oper::Alarms::Brief::BriefSystem::Suppressed> suppressed;
        
}; // Alarms::Brief::BriefSystem


class Alarms::Brief::BriefSystem::Conditions : public ydk::Entity
{
    public:
        Conditions();
        ~Conditions();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        class AlarmInfo; //type: Alarms::Brief::BriefSystem::Conditions::AlarmInfo

        ydk::YList alarm_info;
        
}; // Alarms::Brief::BriefSystem::Conditions


class Alarms::Brief::BriefSystem::Conditions::AlarmInfo : public ydk::Entity
{
    public:
        AlarmInfo();
        ~AlarmInfo();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf location; //type: string
        ydk::YLeaf severity; //type: AlarmSeverity
        ydk::YLeaf group; //type: AlarmGroups
        ydk::YLeaf set_time; //type: string
        ydk::YLeaf set_timestamp; //type: uint64
        ydk::YLeaf clear_time; //type: string
        ydk::YLeaf clear_timestamp; //type: uint64
        ydk::YLeaf description; //type: string

}; // Alarms::Brief::BriefSystem::Conditions::AlarmInfo


class Alarms::Brief::BriefSystem::Active : public ydk::Entity
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

        class AlarmInfo; //type: Alarms::Brief::BriefSystem::Active::AlarmInfo

        ydk::YList alarm_info;
        
}; // Alarms::Brief::BriefSystem::Active


class Alarms::Brief::BriefSystem::Active::AlarmInfo : public ydk::Entity
{
    public:
        AlarmInfo();
        ~AlarmInfo();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf location; //type: string
        ydk::YLeaf severity; //type: AlarmSeverity
        ydk::YLeaf group; //type: AlarmGroups
        ydk::YLeaf set_time; //type: string
        ydk::YLeaf set_timestamp; //type: uint64
        ydk::YLeaf clear_time; //type: string
        ydk::YLeaf clear_timestamp; //type: uint64
        ydk::YLeaf description; //type: string

}; // Alarms::Brief::BriefSystem::Active::AlarmInfo


class Alarms::Brief::BriefSystem::History : public ydk::Entity
{
    public:
        History();
        ~History();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        class AlarmInfo; //type: Alarms::Brief::BriefSystem::History::AlarmInfo

        ydk::YList alarm_info;
        
}; // Alarms::Brief::BriefSystem::History


class Alarms::Brief::BriefSystem::History::AlarmInfo : public ydk::Entity
{
    public:
        AlarmInfo();
        ~AlarmInfo();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf location; //type: string
        ydk::YLeaf severity; //type: AlarmSeverity
        ydk::YLeaf group; //type: AlarmGroups
        ydk::YLeaf set_time; //type: string
        ydk::YLeaf set_timestamp; //type: uint64
        ydk::YLeaf clear_time; //type: string
        ydk::YLeaf clear_timestamp; //type: uint64
        ydk::YLeaf description; //type: string

}; // Alarms::Brief::BriefSystem::History::AlarmInfo


class Alarms::Brief::BriefSystem::Suppressed : public ydk::Entity
{
    public:
        Suppressed();
        ~Suppressed();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        class SuppressedInfo; //type: Alarms::Brief::BriefSystem::Suppressed::SuppressedInfo

        ydk::YList suppressed_info;
        
}; // Alarms::Brief::BriefSystem::Suppressed


class Alarms::Brief::BriefSystem::Suppressed::SuppressedInfo : public ydk::Entity
{
    public:
        SuppressedInfo();
        ~SuppressedInfo();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf location; //type: string
        ydk::YLeaf severity; //type: AlarmSeverity
        ydk::YLeaf group; //type: AlarmGroups
        ydk::YLeaf set_time; //type: string
        ydk::YLeaf set_timestamp; //type: uint64
        ydk::YLeaf suppressed_time; //type: string
        ydk::YLeaf suppressed_timestamp; //type: uint64
        ydk::YLeaf description; //type: string

}; // Alarms::Brief::BriefSystem::Suppressed::SuppressedInfo


class Alarms::Brief::AlarmId : public ydk::Entity
{
    public:
        AlarmId();
        ~AlarmId();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        class ActiveAlarms; //type: Alarms::Brief::AlarmId::ActiveAlarms

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_alarmgr_server_oper::Alarms::Brief::AlarmId::ActiveAlarms> active_alarms;
        
}; // Alarms::Brief::AlarmId


class Alarms::Brief::AlarmId::ActiveAlarms : public ydk::Entity
{
    public:
        ActiveAlarms();
        ~ActiveAlarms();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        class ActiveAlarm; //type: Alarms::Brief::AlarmId::ActiveAlarms::ActiveAlarm

        ydk::YList active_alarm;
        
}; // Alarms::Brief::AlarmId::ActiveAlarms


class Alarms::Brief::AlarmId::ActiveAlarms::ActiveAlarm : public ydk::Entity
{
    public:
        ActiveAlarm();
        ~ActiveAlarm();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf aid; //type: string
        class Alarm; //type: Alarms::Brief::AlarmId::ActiveAlarms::ActiveAlarm::Alarm

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_alarmgr_server_oper::Alarms::Brief::AlarmId::ActiveAlarms::ActiveAlarm::Alarm> alarm;
        
}; // Alarms::Brief::AlarmId::ActiveAlarms::ActiveAlarm


class Alarms::Brief::AlarmId::ActiveAlarms::ActiveAlarm::Alarm : public ydk::Entity
{
    public:
        Alarm();
        ~Alarm();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf location; //type: string
        ydk::YLeaf severity; //type: AlarmSeverity
        ydk::YLeaf group; //type: AlarmGroups
        ydk::YLeaf set_time; //type: string
        ydk::YLeaf set_timestamp; //type: uint64
        ydk::YLeaf clear_time; //type: string
        ydk::YLeaf clear_timestamp; //type: uint64
        ydk::YLeaf description; //type: string

}; // Alarms::Brief::AlarmId::ActiveAlarms::ActiveAlarm::Alarm

class TimingBucket : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf not_specified;
        static const ydk::Enum::YLeaf fifteen_min;
        static const ydk::Enum::YLeaf one_day;

        static int get_enum_value(const std::string & name) {
            if (name == "not-specified") return 0;
            if (name == "fifteen-min") return 1;
            if (name == "one-day") return 2;
            return -1;
        }
};

class AlarmSeverity : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf unknown;
        static const ydk::Enum::YLeaf not_reported;
        static const ydk::Enum::YLeaf not_alarmed;
        static const ydk::Enum::YLeaf minor;
        static const ydk::Enum::YLeaf major_;
        static const ydk::Enum::YLeaf critical;
        static const ydk::Enum::YLeaf severity_last;

        static int get_enum_value(const std::string & name) {
            if (name == "unknown") return 0;
            if (name == "not-reported") return 1;
            if (name == "not-alarmed") return 2;
            if (name == "minor") return 3;
            if (name == "major") return 4;
            if (name == "critical") return 5;
            if (name == "severity-last") return 6;
            return -1;
        }
};

class AlarmDirection : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf not_specified;
        static const ydk::Enum::YLeaf send;
        static const ydk::Enum::YLeaf receive;
        static const ydk::Enum::YLeaf send_receive;

        static int get_enum_value(const std::string & name) {
            if (name == "not-specified") return 0;
            if (name == "send") return 1;
            if (name == "receive") return 2;
            if (name == "send-receive") return 3;
            return -1;
        }
};

class AlarmStatus : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf unknown;
        static const ydk::Enum::YLeaf set;
        static const ydk::Enum::YLeaf clear;
        static const ydk::Enum::YLeaf suppress;
        static const ydk::Enum::YLeaf last;

        static int get_enum_value(const std::string & name) {
            if (name == "unknown") return 0;
            if (name == "set") return 1;
            if (name == "clear") return 2;
            if (name == "suppress") return 3;
            if (name == "last") return 4;
            return -1;
        }
};

class AlarmServiceAffecting : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf unknown;
        static const ydk::Enum::YLeaf not_service_affecting;
        static const ydk::Enum::YLeaf service_affecting;

        static int get_enum_value(const std::string & name) {
            if (name == "unknown") return 0;
            if (name == "not-service-affecting") return 1;
            if (name == "service-affecting") return 2;
            return -1;
        }
};

class AlarmNotificationSrc : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf not_specified;
        static const ydk::Enum::YLeaf near_end;
        static const ydk::Enum::YLeaf far_end;

        static int get_enum_value(const std::string & name) {
            if (name == "not-specified") return 0;
            if (name == "near-end") return 1;
            if (name == "far-end") return 2;
            return -1;
        }
};

class AlarmEvent : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf default_;
        static const ydk::Enum::YLeaf notification;
        static const ydk::Enum::YLeaf condition;
        static const ydk::Enum::YLeaf last;

        static int get_enum_value(const std::string & name) {
            if (name == "default") return 0;
            if (name == "notification") return 1;
            if (name == "condition") return 2;
            if (name == "last") return 3;
            return -1;
        }
};

class AlarmClient : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf unknown;
        static const ydk::Enum::YLeaf producer;
        static const ydk::Enum::YLeaf consumer;
        static const ydk::Enum::YLeaf subscriber;
        static const ydk::Enum::YLeaf client_last;

        static int get_enum_value(const std::string & name) {
            if (name == "unknown") return 1;
            if (name == "producer") return 2;
            if (name == "consumer") return 4;
            if (name == "subscriber") return 8;
            if (name == "client-last") return 16;
            return -1;
        }
};

class AlarmClientState : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf start;
        static const ydk::Enum::YLeaf init;
        static const ydk::Enum::YLeaf connecting;
        static const ydk::Enum::YLeaf connected;
        static const ydk::Enum::YLeaf registered;
        static const ydk::Enum::YLeaf disconnected;
        static const ydk::Enum::YLeaf ready;

        static int get_enum_value(const std::string & name) {
            if (name == "start") return 0;
            if (name == "init") return 1;
            if (name == "connecting") return 2;
            if (name == "connected") return 3;
            if (name == "registered") return 4;
            if (name == "disconnected") return 5;
            if (name == "ready") return 6;
            return -1;
        }
};

class AlarmGroups : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf unknown;
        static const ydk::Enum::YLeaf environ;
        static const ydk::Enum::YLeaf ethernet;
        static const ydk::Enum::YLeaf fabric;
        static const ydk::Enum::YLeaf power;
        static const ydk::Enum::YLeaf software;
        static const ydk::Enum::YLeaf slice;
        static const ydk::Enum::YLeaf cpu;
        static const ydk::Enum::YLeaf controller;
        static const ydk::Enum::YLeaf sonet;
        static const ydk::Enum::YLeaf otn;
        static const ydk::Enum::YLeaf sdh_controller;
        static const ydk::Enum::YLeaf asic;
        static const ydk::Enum::YLeaf fpd_infra;
        static const ydk::Enum::YLeaf shelf;
        static const ydk::Enum::YLeaf mpa;
        static const ydk::Enum::YLeaf ots;
        static const ydk::Enum::YLeaf timing;
        static const ydk::Enum::YLeaf last;

        static int get_enum_value(const std::string & name) {
            if (name == "unknown") return 0;
            if (name == "environ") return 1;
            if (name == "ethernet") return 2;
            if (name == "fabric") return 3;
            if (name == "power") return 4;
            if (name == "software") return 5;
            if (name == "slice") return 6;
            if (name == "cpu") return 7;
            if (name == "controller") return 8;
            if (name == "sonet") return 9;
            if (name == "otn") return 10;
            if (name == "sdh-controller") return 11;
            if (name == "asic") return 12;
            if (name == "fpd-infra") return 13;
            if (name == "shelf") return 14;
            if (name == "mpa") return 15;
            if (name == "ots") return 16;
            if (name == "timing") return 17;
            if (name == "last") return 18;
            return -1;
        }
};


}
}

#endif /* _CISCO_IOS_XR_ALARMGR_SERVER_OPER_ */


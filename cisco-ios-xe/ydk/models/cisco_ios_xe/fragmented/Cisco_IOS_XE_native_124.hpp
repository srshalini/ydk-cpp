#ifndef _CISCO_IOS_XE_NATIVE_124_
#define _CISCO_IOS_XE_NATIVE_124_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>

#include "Cisco_IOS_XE_native_0.hpp"
#include "Cisco_IOS_XE_native_123.hpp"

namespace cisco_ios_xe {
namespace Cisco_IOS_XE_native {


class Native::Ethernet::Evc : public ydk::Entity
{
    public:
        Evc();
        ~Evc();

        bool has_data() const override;
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

}; // Native::Ethernet::Evc


class Native::Ethernet::Lmi : public ydk::Entity
{
    public:
        Lmi();
        ~Lmi();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf ce; //type: empty
        ydk::YLeaf global; //type: empty

}; // Native::Ethernet::Lmi


class Native::Ethernet::Cfm : public ydk::Entity
{
    public:
        Cfm();
        ~Cfm();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf ieee; //type: empty
        ydk::YLeaf global; //type: empty
        class Ais; //type: Native::Ethernet::Cfm::Ais
        class Alarm; //type: Native::Ethernet::Cfm::Alarm
        class Domain; //type: Native::Ethernet::Cfm::Domain
        class Logging; //type: Native::Ethernet::Cfm::Logging
        class Mep; //type: Native::Ethernet::Cfm::Mep
        class Mip; //type: Native::Ethernet::Cfm::Mip
        class Traceroute; //type: Native::Ethernet::Cfm::Traceroute

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Ethernet::Cfm::Ais> ais;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Ethernet::Cfm::Alarm> alarm;
        ydk::YList domain;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Ethernet::Cfm::Logging> logging; // presence node
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Ethernet::Cfm::Mep> mep;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Ethernet::Cfm::Mip> mip;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Ethernet::Cfm::Traceroute> traceroute;
        
}; // Native::Ethernet::Cfm


class Native::Ethernet::Cfm::Ais : public ydk::Entity
{
    public:
        Ais();
        ~Ais();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        class LinkStatus; //type: Native::Ethernet::Cfm::Ais::LinkStatus

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Ethernet::Cfm::Ais::LinkStatus> link_status;
        
}; // Native::Ethernet::Cfm::Ais


class Native::Ethernet::Cfm::Ais::LinkStatus : public ydk::Entity
{
    public:
        LinkStatus();
        ~LinkStatus();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        class Global; //type: Native::Ethernet::Cfm::Ais::LinkStatus::Global

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Ethernet::Cfm::Ais::LinkStatus::Global> global; // presence node
        
}; // Native::Ethernet::Cfm::Ais::LinkStatus


class Native::Ethernet::Cfm::Ais::LinkStatus::Global : public ydk::Entity
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

        class CfmModeConfigAisLinkCfm; //type: Native::Ethernet::Cfm::Ais::LinkStatus::Global::CfmModeConfigAisLinkCfm

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Ethernet::Cfm::Ais::LinkStatus::Global::CfmModeConfigAisLinkCfm> cfm_mode__config_ais_link_cfm;
        
}; // Native::Ethernet::Cfm::Ais::LinkStatus::Global


class Native::Ethernet::Cfm::Ais::LinkStatus::Global::CfmModeConfigAisLinkCfm : public ydk::Entity
{
    public:
        CfmModeConfigAisLinkCfm();
        ~CfmModeConfigAisLinkCfm();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf disable; //type: empty
        ydk::YLeaf level; //type: uint8
        class Period; //type: Native::Ethernet::Cfm::Ais::LinkStatus::Global::CfmModeConfigAisLinkCfm::Period

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Ethernet::Cfm::Ais::LinkStatus::Global::CfmModeConfigAisLinkCfm::Period> period;
        
}; // Native::Ethernet::Cfm::Ais::LinkStatus::Global::CfmModeConfigAisLinkCfm


class Native::Ethernet::Cfm::Ais::LinkStatus::Global::CfmModeConfigAisLinkCfm::Period : public ydk::Entity
{
    public:
        Period();
        ~Period();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf tp_1; //type: empty
        ydk::YLeaf tp_60; //type: empty

}; // Native::Ethernet::Cfm::Ais::LinkStatus::Global::CfmModeConfigAisLinkCfm::Period


class Native::Ethernet::Cfm::Alarm : public ydk::Entity
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
        std::string get_absolute_path() const override;

        ydk::YLeaf delay; //type: uint16
        ydk::YLeaf packet; //type: uint16
        ydk::YLeaf reset; //type: uint16
        class Notification; //type: Native::Ethernet::Cfm::Alarm::Notification

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Ethernet::Cfm::Alarm::Notification> notification;
        
}; // Native::Ethernet::Cfm::Alarm


class Native::Ethernet::Cfm::Alarm::Notification : public ydk::Entity
{
    public:
        Notification();
        ~Notification();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf all; //type: empty
        ydk::YLeaf error_xcon; //type: empty
        ydk::YLeaf mac_remote_error_xcon; //type: empty
        ydk::YLeaf none; //type: empty
        ydk::YLeaf remote_error_xcon; //type: empty
        ydk::YLeaf xcon; //type: empty

}; // Native::Ethernet::Cfm::Alarm::Notification


class Native::Ethernet::Cfm::Domain : public ydk::Entity
{
    public:
        Domain();
        ~Domain();

        bool has_data() const override;
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
        ydk::YLeaf level; //type: uint8
        class Service; //type: Native::Ethernet::Cfm::Domain::Service

        ydk::YList service;
        
}; // Native::Ethernet::Cfm::Domain


class Native::Ethernet::Cfm::Domain::Service : public ydk::Entity
{
    public:
        Service();
        ~Service();

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
        ydk::YLeaf evc; //type: string
        ydk::YLeaf vlan; //type: uint16
        class ContinuityCheck; //type: Native::Ethernet::Cfm::Domain::Service::ContinuityCheck

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Ethernet::Cfm::Domain::Service::ContinuityCheck> continuity_check; // presence node
        
}; // Native::Ethernet::Cfm::Domain::Service


class Native::Ethernet::Cfm::Domain::Service::ContinuityCheck : public ydk::Entity
{
    public:
        ContinuityCheck();
        ~ContinuityCheck();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;


}; // Native::Ethernet::Cfm::Domain::Service::ContinuityCheck


class Native::Ethernet::Cfm::Logging : public ydk::Entity
{
    public:
        Logging();
        ~Logging();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf ais; //type: empty
        class Alarm; //type: Native::Ethernet::Cfm::Logging::Alarm

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Ethernet::Cfm::Logging::Alarm> alarm;
        
}; // Native::Ethernet::Cfm::Logging


class Native::Ethernet::Cfm::Logging::Alarm : public ydk::Entity
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
        std::string get_absolute_path() const override;

        ydk::YLeaf cisco; //type: empty
        ydk::YLeaf ieee; //type: empty

}; // Native::Ethernet::Cfm::Logging::Alarm


class Native::Ethernet::Cfm::Mep : public ydk::Entity
{
    public:
        Mep();
        ~Mep();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        class Crosscheck; //type: Native::Ethernet::Cfm::Mep::Crosscheck

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Ethernet::Cfm::Mep::Crosscheck> crosscheck;
        
}; // Native::Ethernet::Cfm::Mep


class Native::Ethernet::Cfm::Mep::Crosscheck : public ydk::Entity
{
    public:
        Crosscheck();
        ~Crosscheck();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf start_delay; //type: uint16

}; // Native::Ethernet::Cfm::Mep::Crosscheck


class Native::Ethernet::Cfm::Mip : public ydk::Entity
{
    public:
        Mip();
        ~Mip();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf filter; //type: empty
        class AutoCreate; //type: Native::Ethernet::Cfm::Mip::AutoCreate

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Ethernet::Cfm::Mip::AutoCreate> auto_create;
        
}; // Native::Ethernet::Cfm::Mip


class Native::Ethernet::Cfm::Mip::AutoCreate : public ydk::Entity
{
    public:
        AutoCreate();
        ~AutoCreate();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        class Level; //type: Native::Ethernet::Cfm::Mip::AutoCreate::Level

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Ethernet::Cfm::Mip::AutoCreate::Level> level;
        
}; // Native::Ethernet::Cfm::Mip::AutoCreate


class Native::Ethernet::Cfm::Mip::AutoCreate::Level : public ydk::Entity
{
    public:
        Level();
        ~Level();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        class MefNum; //type: Native::Ethernet::Cfm::Mip::AutoCreate::Level::MefNum

        ydk::YList mef_num;
        
}; // Native::Ethernet::Cfm::Mip::AutoCreate::Level


class Native::Ethernet::Cfm::Mip::AutoCreate::Level::MefNum : public ydk::Entity
{
    public:
        MefNum();
        ~MefNum();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf mef_num; //type: uint8
        ydk::YLeaf evc; //type: string
        ydk::YLeaf vlan; //type: uint16

}; // Native::Ethernet::Cfm::Mip::AutoCreate::Level::MefNum


class Native::Ethernet::Cfm::Traceroute : public ydk::Entity
{
    public:
        Traceroute();
        ~Traceroute();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        class Cache; //type: Native::Ethernet::Cfm::Traceroute::Cache

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Ethernet::Cfm::Traceroute::Cache> cache; // presence node
        
}; // Native::Ethernet::Cfm::Traceroute


class Native::Ethernet::Cfm::Traceroute::Cache : public ydk::Entity
{
    public:
        Cache();
        ~Cache();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf hold_time; //type: uint16
        ydk::YLeaf size; //type: uint16

}; // Native::Ethernet::Cfm::Traceroute::Cache


class Native::BridgeDomain : public ydk::Entity
{
    public:
        BridgeDomain();
        ~BridgeDomain();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        class BrdId; //type: Native::BridgeDomain::BrdId
        class CMac; //type: Native::BridgeDomain::CMac
        class Otv; //type: Native::BridgeDomain::Otv
        class Parameterized; //type: Native::BridgeDomain::Parameterized

        ydk::YList brd_id;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::BridgeDomain::CMac> c_mac;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::BridgeDomain::Otv> otv;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::BridgeDomain::Parameterized> parameterized;
        
}; // Native::BridgeDomain


class Native::BridgeDomain::BrdId : public ydk::Entity
{
    public:
        BrdId();
        ~BrdId();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf bridge_domain_id; //type: uint16
        ydk::YLeaf shutdown; //type: empty
        class Ip; //type: Native::BridgeDomain::BrdId::Ip
        class Mac; //type: Native::BridgeDomain::BrdId::Mac
        class Member; //type: Native::BridgeDomain::BrdId::Member

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::BridgeDomain::BrdId::Ip> ip;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::BridgeDomain::BrdId::Mac> mac;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::BridgeDomain::BrdId::Member> member;
        
}; // Native::BridgeDomain::BrdId


class Native::BridgeDomain::BrdId::Ip : public ydk::Entity
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

        class Igmp; //type: Native::BridgeDomain::BrdId::Ip::Igmp

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::BridgeDomain::BrdId::Ip::Igmp> igmp;
        
}; // Native::BridgeDomain::BrdId::Ip


class Native::BridgeDomain::BrdId::Ip::Igmp : public ydk::Entity
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

        class Snooping; //type: Native::BridgeDomain::BrdId::Ip::Igmp::Snooping

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::BridgeDomain::BrdId::Ip::Igmp::Snooping> snooping; // presence node
        
}; // Native::BridgeDomain::BrdId::Ip::Igmp


class Native::BridgeDomain::BrdId::Ip::Igmp::Snooping : public ydk::Entity
{
    public:
        Snooping();
        ~Snooping();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf immediate_leave; //type: empty
        ydk::YLeaf last_member_query_count; //type: uint8
        ydk::YLeaf last_member_query_interval; //type: uint16
        ydk::YLeaf report_suppression; //type: empty
        ydk::YLeaf robustness_variable; //type: uint8
        ydk::YLeaf static_; //type: string
        class Check; //type: Native::BridgeDomain::BrdId::Ip::Igmp::Snooping::Check
        class ExplicitTracking; //type: Native::BridgeDomain::BrdId::Ip::Igmp::Snooping::ExplicitTracking
        class Mrouter; //type: Native::BridgeDomain::BrdId::Ip::Igmp::Snooping::Mrouter
        class Querier; //type: Native::BridgeDomain::BrdId::Ip::Igmp::Snooping::Querier

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::BridgeDomain::BrdId::Ip::Igmp::Snooping::Check> check;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::BridgeDomain::BrdId::Ip::Igmp::Snooping::ExplicitTracking> explicit_tracking;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::BridgeDomain::BrdId::Ip::Igmp::Snooping::Mrouter> mrouter;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::BridgeDomain::BrdId::Ip::Igmp::Snooping::Querier> querier; // presence node
        
}; // Native::BridgeDomain::BrdId::Ip::Igmp::Snooping


class Native::BridgeDomain::BrdId::Ip::Igmp::Snooping::Check : public ydk::Entity
{
    public:
        Check();
        ~Check();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf rtr_alert_option; //type: empty
        ydk::YLeaf ttl; //type: empty

}; // Native::BridgeDomain::BrdId::Ip::Igmp::Snooping::Check


class Native::BridgeDomain::BrdId::Ip::Igmp::Snooping::ExplicitTracking : public ydk::Entity
{
    public:
        ExplicitTracking();
        ~ExplicitTracking();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf limit; //type: empty

}; // Native::BridgeDomain::BrdId::Ip::Igmp::Snooping::ExplicitTracking


class Native::BridgeDomain::BrdId::Ip::Igmp::Snooping::Mrouter : public ydk::Entity
{
    public:
        Mrouter();
        ~Mrouter();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf interface; //type: empty

}; // Native::BridgeDomain::BrdId::Ip::Igmp::Snooping::Mrouter


class Native::BridgeDomain::BrdId::Ip::Igmp::Snooping::Querier : public ydk::Entity
{
    public:
        Querier();
        ~Querier();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf address; //type: empty
        ydk::YLeaf max_response_time; //type: empty
        ydk::YLeaf query_interval; //type: empty
        ydk::YLeaf tcn; //type: empty
        ydk::YLeaf timer; //type: empty
        ydk::YLeaf version; //type: empty

}; // Native::BridgeDomain::BrdId::Ip::Igmp::Snooping::Querier


class Native::BridgeDomain::BrdId::Mac : public ydk::Entity
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

        ydk::YLeaf aging_time; //type: uint16
        ydk::YLeaf learning; //type: empty
        class Limit; //type: Native::BridgeDomain::BrdId::Mac::Limit

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::BridgeDomain::BrdId::Mac::Limit> limit;
        
}; // Native::BridgeDomain::BrdId::Mac


class Native::BridgeDomain::BrdId::Mac::Limit : public ydk::Entity
{
    public:
        Limit();
        ~Limit();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Action; //type: Native::BridgeDomain::BrdId::Mac::Limit::Action
        class Maximum; //type: Native::BridgeDomain::BrdId::Mac::Limit::Maximum

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::BridgeDomain::BrdId::Mac::Limit::Action> action;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::BridgeDomain::BrdId::Mac::Limit::Maximum> maximum;
        
}; // Native::BridgeDomain::BrdId::Mac::Limit


class Native::BridgeDomain::BrdId::Mac::Limit::Action : public ydk::Entity
{
    public:
        Action();
        ~Action();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Flooding; //type: Native::BridgeDomain::BrdId::Mac::Limit::Action::Flooding

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::BridgeDomain::BrdId::Mac::Limit::Action::Flooding> flooding;
        
}; // Native::BridgeDomain::BrdId::Mac::Limit::Action


class Native::BridgeDomain::BrdId::Mac::Limit::Action::Flooding : public ydk::Entity
{
    public:
        Flooding();
        ~Flooding();

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

}; // Native::BridgeDomain::BrdId::Mac::Limit::Action::Flooding


class Native::BridgeDomain::BrdId::Mac::Limit::Maximum : public ydk::Entity
{
    public:
        Maximum();
        ~Maximum();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf addresses; //type: uint32

}; // Native::BridgeDomain::BrdId::Mac::Limit::Maximum


class Native::BridgeDomain::BrdId::Member : public ydk::Entity
{
    public:
        Member();
        ~Member();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf analysis_module; //type: uint8
        ydk::YLeaf fcpa; //type: uint8
        ydk::YLeaf sbc; //type: uint32
        ydk::YLeaf sonet_acr; //type: uint8
        ydk::YLeaf y_controller; //type: string
        ydk::YLeaf service_engine; //type: uint8
        ydk::YLeaf tunnel_tp; //type: uint16
        ydk::YLeaf vpn; //type: uint32
        ydk::YLeaf virtual_tokenring; //type: uint32
        ydk::YLeaf ucse; //type: uint8
        ydk::YLeaf vasileft; //type: uint16
        ydk::YLeaf vasiright; //type: uint16
        ydk::YLeaf vfi; //type: string
        ydk::YLeaf vni; //type: uint32
        class MemIpv4; //type: Native::BridgeDomain::BrdId::Member::MemIpv4
        class ACR; //type: Native::BridgeDomain::BrdId::Member::ACR
        class MemberInterface; //type: Native::BridgeDomain::BrdId::Member::MemberInterface

        ydk::YList mem_ipv4;
        ydk::YList acr;
        ydk::YList member_interface;
        
}; // Native::BridgeDomain::BrdId::Member


class Native::BridgeDomain::BrdId::Member::MemIpv4 : public ydk::Entity
{
    public:
        MemIpv4();
        ~MemIpv4();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf mem_ipv4; //type: string
        ydk::YLeaf template_; //type: string
        class MemVcid; //type: Native::BridgeDomain::BrdId::Member::MemIpv4::MemVcid
        class Encapsulation; //type: Native::BridgeDomain::BrdId::Member::MemIpv4::Encapsulation

        ydk::YList mem_vcid;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::BridgeDomain::BrdId::Member::MemIpv4::Encapsulation> encapsulation;
        
}; // Native::BridgeDomain::BrdId::Member::MemIpv4


class Native::BridgeDomain::BrdId::Member::MemIpv4::MemVcid : public ydk::Entity
{
    public:
        MemVcid();
        ~MemVcid();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf mem_vcid; //type: uint32
        class Encapsulation; //type: Native::BridgeDomain::BrdId::Member::MemIpv4::MemVcid::Encapsulation
        class Template; //type: Native::BridgeDomain::BrdId::Member::MemIpv4::MemVcid::Template

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::BridgeDomain::BrdId::Member::MemIpv4::MemVcid::Encapsulation> encapsulation; // presence node
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::BridgeDomain::BrdId::Member::MemIpv4::MemVcid::Template> template_; // presence node
        
}; // Native::BridgeDomain::BrdId::Member::MemIpv4::MemVcid


class Native::BridgeDomain::BrdId::Member::MemIpv4::MemVcid::Encapsulation : public ydk::Entity
{
    public:
        Encapsulation();
        ~Encapsulation();

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

}; // Native::BridgeDomain::BrdId::Member::MemIpv4::MemVcid::Encapsulation


class Native::BridgeDomain::BrdId::Member::MemIpv4::MemVcid::Template : public ydk::Entity
{
    public:
        Template();
        ~Template();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf template_; //type: string

}; // Native::BridgeDomain::BrdId::Member::MemIpv4::MemVcid::Template


class Native::BridgeDomain::BrdId::Member::MemIpv4::Encapsulation : public ydk::Entity
{
    public:
        Encapsulation();
        ~Encapsulation();

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

}; // Native::BridgeDomain::BrdId::Member::MemIpv4::Encapsulation


class Native::BridgeDomain::BrdId::Member::ACR : public ydk::Entity
{
    public:
        ACR();
        ~ACR();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf acr_int; //type: string
        class ServiceInstance; //type: Native::BridgeDomain::BrdId::Member::ACR::ServiceInstance

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::BridgeDomain::BrdId::Member::ACR::ServiceInstance> service_instance;
        
}; // Native::BridgeDomain::BrdId::Member::ACR


class Native::BridgeDomain::BrdId::Member::ACR::ServiceInstance : public ydk::Entity
{
    public:
        ServiceInstance();
        ~ServiceInstance();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Id; //type: Native::BridgeDomain::BrdId::Member::ACR::ServiceInstance::Id

        ydk::YList id;
        
}; // Native::BridgeDomain::BrdId::Member::ACR::ServiceInstance


class Native::BridgeDomain::BrdId::Member::ACR::ServiceInstance::Id : public ydk::Entity
{
    public:
        Id();
        ~Id();

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
        ydk::YLeaf split_horizon; //type: empty

}; // Native::BridgeDomain::BrdId::Member::ACR::ServiceInstance::Id


class Native::BridgeDomain::BrdId::Member::MemberInterface : public ydk::Entity
{
    public:
        MemberInterface();
        ~MemberInterface();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf interface; //type: string
        ydk::YLeaf interface_id; //type: one of string, uint32
        ydk::YLeaf service_instance; //type: uint32
        class SplitHorizon; //type: Native::BridgeDomain::BrdId::Member::MemberInterface::SplitHorizon

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::BridgeDomain::BrdId::Member::MemberInterface::SplitHorizon> split_horizon;
        
}; // Native::BridgeDomain::BrdId::Member::MemberInterface


class Native::BridgeDomain::BrdId::Member::MemberInterface::SplitHorizon : public ydk::Entity
{
    public:
        SplitHorizon();
        ~SplitHorizon();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf group; //type: uint8

}; // Native::BridgeDomain::BrdId::Member::MemberInterface::SplitHorizon


class Native::BridgeDomain::CMac : public ydk::Entity
{
    public:
        CMac();
        ~CMac();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf aging_time; //type: uint16

}; // Native::BridgeDomain::CMac


class Native::BridgeDomain::Otv : public ydk::Entity
{
    public:
        Otv();
        ~Otv();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        class Default; //type: Native::BridgeDomain::Otv::Default

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::BridgeDomain::Otv::Default> default_;
        
}; // Native::BridgeDomain::Otv


class Native::BridgeDomain::Otv::Default : public ydk::Entity
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
        std::string get_absolute_path() const override;

        ydk::YLeaf age_time; //type: uint16

}; // Native::BridgeDomain::Otv::Default


class Native::BridgeDomain::Parameterized : public ydk::Entity
{
    public:
        Parameterized();
        ~Parameterized();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        class Vlan; //type: Native::BridgeDomain::Parameterized::Vlan

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::BridgeDomain::Parameterized::Vlan> vlan; // presence node
        
}; // Native::BridgeDomain::Parameterized


class Native::BridgeDomain::Parameterized::Vlan : public ydk::Entity
{
    public:
        Vlan();
        ~Vlan();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf shutdown; //type: empty
        class Ip; //type: Native::BridgeDomain::Parameterized::Vlan::Ip
        class Mac; //type: Native::BridgeDomain::Parameterized::Vlan::Mac
        class Member; //type: Native::BridgeDomain::Parameterized::Vlan::Member

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::BridgeDomain::Parameterized::Vlan::Ip> ip;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::BridgeDomain::Parameterized::Vlan::Mac> mac;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::BridgeDomain::Parameterized::Vlan::Member> member;
        
}; // Native::BridgeDomain::Parameterized::Vlan


class Native::BridgeDomain::Parameterized::Vlan::Ip : public ydk::Entity
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
        std::string get_absolute_path() const override;

        class Igmp; //type: Native::BridgeDomain::Parameterized::Vlan::Ip::Igmp

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::BridgeDomain::Parameterized::Vlan::Ip::Igmp> igmp;
        
}; // Native::BridgeDomain::Parameterized::Vlan::Ip


class Native::BridgeDomain::Parameterized::Vlan::Ip::Igmp : public ydk::Entity
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
        std::string get_absolute_path() const override;

        class Snooping; //type: Native::BridgeDomain::Parameterized::Vlan::Ip::Igmp::Snooping

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::BridgeDomain::Parameterized::Vlan::Ip::Igmp::Snooping> snooping; // presence node
        
}; // Native::BridgeDomain::Parameterized::Vlan::Ip::Igmp


class Native::BridgeDomain::Parameterized::Vlan::Ip::Igmp::Snooping : public ydk::Entity
{
    public:
        Snooping();
        ~Snooping();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf immediate_leave; //type: empty
        ydk::YLeaf last_member_query_count; //type: uint8
        ydk::YLeaf last_member_query_interval; //type: uint16
        ydk::YLeaf report_suppression; //type: empty
        ydk::YLeaf robustness_variable; //type: uint8
        ydk::YLeaf static_; //type: string
        class Check; //type: Native::BridgeDomain::Parameterized::Vlan::Ip::Igmp::Snooping::Check
        class ExplicitTracking; //type: Native::BridgeDomain::Parameterized::Vlan::Ip::Igmp::Snooping::ExplicitTracking
        class Mrouter; //type: Native::BridgeDomain::Parameterized::Vlan::Ip::Igmp::Snooping::Mrouter
        class Querier; //type: Native::BridgeDomain::Parameterized::Vlan::Ip::Igmp::Snooping::Querier

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::BridgeDomain::Parameterized::Vlan::Ip::Igmp::Snooping::Check> check;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::BridgeDomain::Parameterized::Vlan::Ip::Igmp::Snooping::ExplicitTracking> explicit_tracking;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::BridgeDomain::Parameterized::Vlan::Ip::Igmp::Snooping::Mrouter> mrouter;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::BridgeDomain::Parameterized::Vlan::Ip::Igmp::Snooping::Querier> querier; // presence node
        
}; // Native::BridgeDomain::Parameterized::Vlan::Ip::Igmp::Snooping


class Native::BridgeDomain::Parameterized::Vlan::Ip::Igmp::Snooping::Check : public ydk::Entity
{
    public:
        Check();
        ~Check();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf rtr_alert_option; //type: empty
        ydk::YLeaf ttl; //type: empty

}; // Native::BridgeDomain::Parameterized::Vlan::Ip::Igmp::Snooping::Check


class Native::BridgeDomain::Parameterized::Vlan::Ip::Igmp::Snooping::ExplicitTracking : public ydk::Entity
{
    public:
        ExplicitTracking();
        ~ExplicitTracking();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf limit; //type: empty

}; // Native::BridgeDomain::Parameterized::Vlan::Ip::Igmp::Snooping::ExplicitTracking


class Native::BridgeDomain::Parameterized::Vlan::Ip::Igmp::Snooping::Mrouter : public ydk::Entity
{
    public:
        Mrouter();
        ~Mrouter();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf interface; //type: empty

}; // Native::BridgeDomain::Parameterized::Vlan::Ip::Igmp::Snooping::Mrouter


class Native::BridgeDomain::Parameterized::Vlan::Ip::Igmp::Snooping::Querier : public ydk::Entity
{
    public:
        Querier();
        ~Querier();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf address; //type: empty
        ydk::YLeaf max_response_time; //type: empty
        ydk::YLeaf query_interval; //type: empty
        ydk::YLeaf tcn; //type: empty
        ydk::YLeaf timer; //type: empty
        ydk::YLeaf version; //type: empty

}; // Native::BridgeDomain::Parameterized::Vlan::Ip::Igmp::Snooping::Querier


class Native::BridgeDomain::Parameterized::Vlan::Mac : public ydk::Entity
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

        ydk::YLeaf aging_time; //type: uint16
        ydk::YLeaf learning; //type: empty
        class Limit; //type: Native::BridgeDomain::Parameterized::Vlan::Mac::Limit

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::BridgeDomain::Parameterized::Vlan::Mac::Limit> limit;
        
}; // Native::BridgeDomain::Parameterized::Vlan::Mac


class Native::BridgeDomain::Parameterized::Vlan::Mac::Limit : public ydk::Entity
{
    public:
        Limit();
        ~Limit();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        class Action; //type: Native::BridgeDomain::Parameterized::Vlan::Mac::Limit::Action
        class Maximum; //type: Native::BridgeDomain::Parameterized::Vlan::Mac::Limit::Maximum

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::BridgeDomain::Parameterized::Vlan::Mac::Limit::Action> action;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::BridgeDomain::Parameterized::Vlan::Mac::Limit::Maximum> maximum;
        
}; // Native::BridgeDomain::Parameterized::Vlan::Mac::Limit


class Native::BridgeDomain::Parameterized::Vlan::Mac::Limit::Action : public ydk::Entity
{
    public:
        Action();
        ~Action();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        class Flooding; //type: Native::BridgeDomain::Parameterized::Vlan::Mac::Limit::Action::Flooding

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::BridgeDomain::Parameterized::Vlan::Mac::Limit::Action::Flooding> flooding;
        
}; // Native::BridgeDomain::Parameterized::Vlan::Mac::Limit::Action


class Native::BridgeDomain::Parameterized::Vlan::Mac::Limit::Action::Flooding : public ydk::Entity
{
    public:
        Flooding();
        ~Flooding();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf disable; //type: empty

}; // Native::BridgeDomain::Parameterized::Vlan::Mac::Limit::Action::Flooding


class Native::BridgeDomain::Parameterized::Vlan::Mac::Limit::Maximum : public ydk::Entity
{
    public:
        Maximum();
        ~Maximum();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf addresses; //type: uint32

}; // Native::BridgeDomain::Parameterized::Vlan::Mac::Limit::Maximum


class Native::BridgeDomain::Parameterized::Vlan::Member : public ydk::Entity
{
    public:
        Member();
        ~Member();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf analysis_module; //type: uint8
        ydk::YLeaf fcpa; //type: uint8
        ydk::YLeaf sbc; //type: uint32
        ydk::YLeaf sonet_acr; //type: uint8
        ydk::YLeaf y_controller; //type: string
        ydk::YLeaf service_engine; //type: uint8
        ydk::YLeaf tunnel_tp; //type: uint16
        ydk::YLeaf vpn; //type: uint32
        ydk::YLeaf virtual_tokenring; //type: uint32
        ydk::YLeaf ucse; //type: uint8
        ydk::YLeaf vasileft; //type: uint16
        ydk::YLeaf vasiright; //type: uint16
        ydk::YLeaf vfi; //type: string
        ydk::YLeaf vni; //type: uint32
        class MemIpv4; //type: Native::BridgeDomain::Parameterized::Vlan::Member::MemIpv4
        class ACR; //type: Native::BridgeDomain::Parameterized::Vlan::Member::ACR
        class MemberInterface; //type: Native::BridgeDomain::Parameterized::Vlan::Member::MemberInterface

        ydk::YList mem_ipv4;
        ydk::YList acr;
        ydk::YList member_interface;
        
}; // Native::BridgeDomain::Parameterized::Vlan::Member


class Native::BridgeDomain::Parameterized::Vlan::Member::MemIpv4 : public ydk::Entity
{
    public:
        MemIpv4();
        ~MemIpv4();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf mem_ipv4; //type: string
        ydk::YLeaf template_; //type: string
        class MemVcid; //type: Native::BridgeDomain::Parameterized::Vlan::Member::MemIpv4::MemVcid
        class Encapsulation; //type: Native::BridgeDomain::Parameterized::Vlan::Member::MemIpv4::Encapsulation

        ydk::YList mem_vcid;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::BridgeDomain::Parameterized::Vlan::Member::MemIpv4::Encapsulation> encapsulation;
        
}; // Native::BridgeDomain::Parameterized::Vlan::Member::MemIpv4


class Native::BridgeDomain::Parameterized::Vlan::Member::MemIpv4::MemVcid : public ydk::Entity
{
    public:
        MemVcid();
        ~MemVcid();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf mem_vcid; //type: uint32
        class Encapsulation; //type: Native::BridgeDomain::Parameterized::Vlan::Member::MemIpv4::MemVcid::Encapsulation
        class Template; //type: Native::BridgeDomain::Parameterized::Vlan::Member::MemIpv4::MemVcid::Template

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::BridgeDomain::Parameterized::Vlan::Member::MemIpv4::MemVcid::Encapsulation> encapsulation; // presence node
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::BridgeDomain::Parameterized::Vlan::Member::MemIpv4::MemVcid::Template> template_; // presence node
        
}; // Native::BridgeDomain::Parameterized::Vlan::Member::MemIpv4::MemVcid


class Native::BridgeDomain::Parameterized::Vlan::Member::MemIpv4::MemVcid::Encapsulation : public ydk::Entity
{
    public:
        Encapsulation();
        ~Encapsulation();

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

}; // Native::BridgeDomain::Parameterized::Vlan::Member::MemIpv4::MemVcid::Encapsulation


class Native::BridgeDomain::Parameterized::Vlan::Member::MemIpv4::MemVcid::Template : public ydk::Entity
{
    public:
        Template();
        ~Template();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf template_; //type: string

}; // Native::BridgeDomain::Parameterized::Vlan::Member::MemIpv4::MemVcid::Template


class Native::BridgeDomain::Parameterized::Vlan::Member::MemIpv4::Encapsulation : public ydk::Entity
{
    public:
        Encapsulation();
        ~Encapsulation();

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

}; // Native::BridgeDomain::Parameterized::Vlan::Member::MemIpv4::Encapsulation


class Native::BridgeDomain::Parameterized::Vlan::Member::ACR : public ydk::Entity
{
    public:
        ACR();
        ~ACR();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf acr_int; //type: string
        class ServiceInstance; //type: Native::BridgeDomain::Parameterized::Vlan::Member::ACR::ServiceInstance

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::BridgeDomain::Parameterized::Vlan::Member::ACR::ServiceInstance> service_instance;
        
}; // Native::BridgeDomain::Parameterized::Vlan::Member::ACR


class Native::BridgeDomain::Parameterized::Vlan::Member::ACR::ServiceInstance : public ydk::Entity
{
    public:
        ServiceInstance();
        ~ServiceInstance();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Id; //type: Native::BridgeDomain::Parameterized::Vlan::Member::ACR::ServiceInstance::Id

        ydk::YList id;
        
}; // Native::BridgeDomain::Parameterized::Vlan::Member::ACR::ServiceInstance


class Native::BridgeDomain::Parameterized::Vlan::Member::ACR::ServiceInstance::Id : public ydk::Entity
{
    public:
        Id();
        ~Id();

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
        ydk::YLeaf split_horizon; //type: empty

}; // Native::BridgeDomain::Parameterized::Vlan::Member::ACR::ServiceInstance::Id


class Native::BridgeDomain::Parameterized::Vlan::Member::MemberInterface : public ydk::Entity
{
    public:
        MemberInterface();
        ~MemberInterface();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf interface; //type: string
        ydk::YLeaf interface_id; //type: one of string, uint32
        ydk::YLeaf service_instance; //type: uint32
        class SplitHorizon; //type: Native::BridgeDomain::Parameterized::Vlan::Member::MemberInterface::SplitHorizon

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::BridgeDomain::Parameterized::Vlan::Member::MemberInterface::SplitHorizon> split_horizon;
        
}; // Native::BridgeDomain::Parameterized::Vlan::Member::MemberInterface


class Native::BridgeDomain::Parameterized::Vlan::Member::MemberInterface::SplitHorizon : public ydk::Entity
{
    public:
        SplitHorizon();
        ~SplitHorizon();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf group; //type: uint8

}; // Native::BridgeDomain::Parameterized::Vlan::Member::MemberInterface::SplitHorizon


class Native::Crypto : public ydk::Entity
{
    public:
        Crypto();
        ~Crypto();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf xauth; //type: string
        class Call; //type: Native::Crypto::Call
        class DynamicMap; //type: Native::Crypto::DynamicMap
        class Engine; //type: Native::Crypto::Engine
        class Gdoi; //type: Native::Crypto::Gdoi
        class Ikev2; //type: Native::Crypto::Ikev2
        class Gkm; //type: Native::Crypto::Gkm
        class Identity; //type: Native::Crypto::Identity
        class Ipsec; //type: Native::Crypto::Ipsec
        class Key; //type: Native::Crypto::Key
        class Keyring; //type: Native::Crypto::Keyring
        class Isakmp; //type: Native::Crypto::Isakmp
        class Logging; //type: Native::Crypto::Logging
        class CryptoMap; //type: Native::Crypto::CryptoMap
        class MapIpv6Gdoi; //type: Native::Crypto::MapIpv6Gdoi
        class MapClient; //type: Native::Crypto::MapClient
        class Mib; //type: Native::Crypto::Mib
        class Pki; //type: Native::Crypto::Pki
        class TlsTunnel; //type: Native::Crypto::TlsTunnel
        class Ssl; //type: Native::Crypto::Ssl
        class Vpn; //type: Native::Crypto::Vpn

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Crypto::Call> call;
        ydk::YList dynamic_map;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Crypto::Engine> engine;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Crypto::Gdoi> gdoi;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Crypto::Ikev2> ikev2;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Crypto::Gkm> gkm;
        ydk::YList identity;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Crypto::Ipsec> ipsec;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Crypto::Key> key;
        ydk::YList keyring;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Crypto::Isakmp> isakmp;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Crypto::Logging> logging;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Crypto::CryptoMap> crypto_map;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Crypto::MapIpv6Gdoi> map_ipv6_gdoi;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Crypto::MapClient> map_client;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Crypto::Mib> mib;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Crypto::Pki> pki;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Crypto::TlsTunnel> tls_tunnel;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Crypto::Ssl> ssl;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Crypto::Vpn> vpn;
        
}; // Native::Crypto


class Native::Crypto::Call : public ydk::Entity
{
    public:
        Call();
        ~Call();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        class Admission; //type: Native::Crypto::Call::Admission

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Crypto::Call::Admission> admission;
        
}; // Native::Crypto::Call


class Native::Crypto::Call::Admission : public ydk::Entity
{
    public:
        Admission();
        ~Admission();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        class Limit; //type: Native::Crypto::Call::Admission::Limit

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Crypto::Call::Admission::Limit> limit;
        
}; // Native::Crypto::Call::Admission


class Native::Crypto::Call::Admission::Limit : public ydk::Entity
{
    public:
        Limit();
        ~Limit();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        class All; //type: Native::Crypto::Call::Admission::Limit::All
        class Ike; //type: Native::Crypto::Call::Admission::Limit::Ike
        class Ipsec; //type: Native::Crypto::Call::Admission::Limit::Ipsec

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Crypto::Call::Admission::Limit::All> all;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Crypto::Call::Admission::Limit::Ike> ike;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Crypto::Call::Admission::Limit::Ipsec> ipsec;
        
}; // Native::Crypto::Call::Admission::Limit


class Native::Crypto::Call::Admission::Limit::All : public ydk::Entity
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
        std::string get_absolute_path() const override;

        ydk::YLeaf in_negotiation_sa; //type: uint32

}; // Native::Crypto::Call::Admission::Limit::All


class Native::Crypto::Call::Admission::Limit::Ike : public ydk::Entity
{
    public:
        Ike();
        ~Ike();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf in_negotiation_sa; //type: uint32
        ydk::YLeaf sa; //type: uint32

}; // Native::Crypto::Call::Admission::Limit::Ike


class Native::Crypto::Call::Admission::Limit::Ipsec : public ydk::Entity
{
    public:
        Ipsec();
        ~Ipsec();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf sa; //type: uint32

}; // Native::Crypto::Call::Admission::Limit::Ipsec


class Native::Crypto::DynamicMap : public ydk::Entity
{
    public:
        DynamicMap();
        ~DynamicMap();

        bool has_data() const override;
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
        ydk::YLeaf sequence; //type: uint16
        ydk::YLeaf description; //type: string
        class Default; //type: Native::Crypto::DynamicMap::Default
        class Dialer; //type: Native::Crypto::DynamicMap::Dialer
        class Match; //type: Native::Crypto::DynamicMap::Match
        class Qos; //type: Native::Crypto::DynamicMap::Qos
        class ReverseRoute; //type: Native::Crypto::DynamicMap::ReverseRoute
        class Set; //type: Native::Crypto::DynamicMap::Set

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Crypto::DynamicMap::Default> default_;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Crypto::DynamicMap::Dialer> dialer;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Crypto::DynamicMap::Match> match;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Crypto::DynamicMap::Qos> qos;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Crypto::DynamicMap::ReverseRoute> reverse_route; // presence node
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Crypto::DynamicMap::Set> set;
        
}; // Native::Crypto::DynamicMap


class Native::Crypto::DynamicMap::Default : public ydk::Entity
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

        ydk::YLeaf description; //type: empty
        class Dialer; //type: Native::Crypto::DynamicMap::Default::Dialer
        class Match; //type: Native::Crypto::DynamicMap::Default::Match
        class Qos; //type: Native::Crypto::DynamicMap::Default::Qos
        class ReverseRoute; //type: Native::Crypto::DynamicMap::Default::ReverseRoute
        class Set; //type: Native::Crypto::DynamicMap::Default::Set

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Crypto::DynamicMap::Default::Dialer> dialer;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Crypto::DynamicMap::Default::Match> match;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Crypto::DynamicMap::Default::Qos> qos;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Crypto::DynamicMap::Default::ReverseRoute> reverse_route; // presence node
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Crypto::DynamicMap::Default::Set> set;
        
}; // Native::Crypto::DynamicMap::Default


class Native::Crypto::DynamicMap::Default::Dialer : public ydk::Entity
{
    public:
        Dialer();
        ~Dialer();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf pre_classify; //type: empty

}; // Native::Crypto::DynamicMap::Default::Dialer


class Native::Crypto::DynamicMap::Default::Match : public ydk::Entity
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

        ydk::YLeaf address; //type: empty

}; // Native::Crypto::DynamicMap::Default::Match


class Native::Crypto::DynamicMap::Default::Qos : public ydk::Entity
{
    public:
        Qos();
        ~Qos();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf pre_classify; //type: empty

}; // Native::Crypto::DynamicMap::Default::Qos


class Native::Crypto::DynamicMap::Default::ReverseRoute : public ydk::Entity
{
    public:
        ReverseRoute();
        ~ReverseRoute();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;


}; // Native::Crypto::DynamicMap::Default::ReverseRoute


class Native::Crypto::DynamicMap::Default::Set : public ydk::Entity
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

        ydk::YLeaf group; //type: empty
        ydk::YLeaf identity; //type: empty
        ydk::YLeaf ikev2_profile; //type: string
        ydk::YLeaf isakmp_profile; //type: string
        ydk::YLeaf transform_set; //type: empty
        class Ip; //type: Native::Crypto::DynamicMap::Default::Set::Ip
        class Nat; //type: Native::Crypto::DynamicMap::Default::Set::Nat
        class PeerContainer; //type: Native::Crypto::DynamicMap::Default::Set::PeerContainer
        class Pfs; //type: Native::Crypto::DynamicMap::Default::Set::Pfs
        class ReverseRoute; //type: Native::Crypto::DynamicMap::Default::Set::ReverseRoute
        class SecurityAssociation; //type: Native::Crypto::DynamicMap::Default::Set::SecurityAssociation

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Crypto::DynamicMap::Default::Set::Ip> ip;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Crypto::DynamicMap::Default::Set::Nat> nat;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Crypto::DynamicMap::Default::Set::PeerContainer> peer_container;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Crypto::DynamicMap::Default::Set::Pfs> pfs; // presence node
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Crypto::DynamicMap::Default::Set::ReverseRoute> reverse_route; // presence node
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Crypto::DynamicMap::Default::Set::SecurityAssociation> security_association;
        
}; // Native::Crypto::DynamicMap::Default::Set


class Native::Crypto::DynamicMap::Default::Set::Ip : public ydk::Entity
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

        ydk::YLeaf access_group; //type: one of uint16, string
        ydk::YLeaf direction; //type: Direction
        class Direction;

}; // Native::Crypto::DynamicMap::Default::Set::Ip


class Native::Crypto::DynamicMap::Default::Set::Nat : public ydk::Entity
{
    public:
        Nat();
        ~Nat();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf demux; //type: empty

}; // Native::Crypto::DynamicMap::Default::Set::Nat


class Native::Crypto::DynamicMap::Default::Set::PeerContainer : public ydk::Entity
{
    public:
        PeerContainer();
        ~PeerContainer();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf peer; //type: one of union, string
        ydk::YLeaf default_; //type: empty

}; // Native::Crypto::DynamicMap::Default::Set::PeerContainer


class Native::Crypto::DynamicMap::Default::Set::Pfs : public ydk::Entity
{
    public:
        Pfs();
        ~Pfs();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;


}; // Native::Crypto::DynamicMap::Default::Set::Pfs


class Native::Crypto::DynamicMap::Default::Set::ReverseRoute : public ydk::Entity
{
    public:
        ReverseRoute();
        ~ReverseRoute();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;


}; // Native::Crypto::DynamicMap::Default::Set::ReverseRoute


class Native::Crypto::DynamicMap::Default::Set::SecurityAssociation : public ydk::Entity
{
    public:
        SecurityAssociation();
        ~SecurityAssociation();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf dfbit; //type: empty
        ydk::YLeaf ecn; //type: empty
        class Dummy; //type: Native::Crypto::DynamicMap::Default::Set::SecurityAssociation::Dummy
        class IdleTimeContainer; //type: Native::Crypto::DynamicMap::Default::Set::SecurityAssociation::IdleTimeContainer
        class Lifetime; //type: Native::Crypto::DynamicMap::Default::Set::SecurityAssociation::Lifetime
        class Replay; //type: Native::Crypto::DynamicMap::Default::Set::SecurityAssociation::Replay

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Crypto::DynamicMap::Default::Set::SecurityAssociation::Dummy> dummy; // presence node
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Crypto::DynamicMap::Default::Set::SecurityAssociation::IdleTimeContainer> idle_time_container;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Crypto::DynamicMap::Default::Set::SecurityAssociation::Lifetime> lifetime;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Crypto::DynamicMap::Default::Set::SecurityAssociation::Replay> replay;
        
}; // Native::Crypto::DynamicMap::Default::Set::SecurityAssociation


class Native::Crypto::DynamicMap::Default::Set::SecurityAssociation::Dummy : public ydk::Entity
{
    public:
        Dummy();
        ~Dummy();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;


}; // Native::Crypto::DynamicMap::Default::Set::SecurityAssociation::Dummy


class Native::Crypto::DynamicMap::Default::Set::SecurityAssociation::IdleTimeContainer : public ydk::Entity
{
    public:
        IdleTimeContainer();
        ~IdleTimeContainer();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf idle_time; //type: empty
        ydk::YLeaf default_; //type: empty

}; // Native::Crypto::DynamicMap::Default::Set::SecurityAssociation::IdleTimeContainer


class Native::Crypto::DynamicMap::Default::Set::SecurityAssociation::Lifetime : public ydk::Entity
{
    public:
        Lifetime();
        ~Lifetime();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf days; //type: empty
        ydk::YLeaf kilobytes; //type: empty
        ydk::YLeaf seconds; //type: empty

}; // Native::Crypto::DynamicMap::Default::Set::SecurityAssociation::Lifetime


class Native::Crypto::DynamicMap::Default::Set::SecurityAssociation::Replay : public ydk::Entity
{
    public:
        Replay();
        ~Replay();

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
        ydk::YLeaf window_size; //type: empty

}; // Native::Crypto::DynamicMap::Default::Set::SecurityAssociation::Replay


class Native::Crypto::DynamicMap::Dialer : public ydk::Entity
{
    public:
        Dialer();
        ~Dialer();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf pre_classify; //type: empty

}; // Native::Crypto::DynamicMap::Dialer


class Native::Crypto::DynamicMap::Match : public ydk::Entity
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

        ydk::YLeaf address; //type: one of uint16, string

}; // Native::Crypto::DynamicMap::Match


class Native::Crypto::DynamicMap::Qos : public ydk::Entity
{
    public:
        Qos();
        ~Qos();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf pre_classify; //type: empty

}; // Native::Crypto::DynamicMap::Qos


class Native::Crypto::DynamicMap::ReverseRoute : public ydk::Entity
{
    public:
        ReverseRoute();
        ~ReverseRoute();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf static_; //type: empty
        class RemotePeerConatiner; //type: Native::Crypto::DynamicMap::ReverseRoute::RemotePeerConatiner

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Crypto::DynamicMap::ReverseRoute::RemotePeerConatiner> remote_peer_conatiner;
        
}; // Native::Crypto::DynamicMap::ReverseRoute


class Native::Crypto::DynamicMap::ReverseRoute::RemotePeerConatiner : public ydk::Entity
{
    public:
        RemotePeerConatiner();
        ~RemotePeerConatiner();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf remote_peer; //type: string
        ydk::YLeaf gateway; //type: empty
        ydk::YLeaf static_; //type: empty

}; // Native::Crypto::DynamicMap::ReverseRoute::RemotePeerConatiner


class Native::Crypto::DynamicMap::Set : public ydk::Entity
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

        ydk::YLeaf group; //type: string
        ydk::YLeaf identity; //type: string
        ydk::YLeaf ikev2_profile; //type: string
        ydk::YLeaf isakmp_profile; //type: string
        ydk::YLeafList transform_set; //type: list of  string
        class Peer; //type: Native::Crypto::DynamicMap::Set::Peer
        class Pfs; //type: Native::Crypto::DynamicMap::Set::Pfs
        class ReverseRoute; //type: Native::Crypto::DynamicMap::Set::ReverseRoute
        class IpIn; //type: Native::Crypto::DynamicMap::Set::IpIn
        class IpOut; //type: Native::Crypto::DynamicMap::Set::IpOut
        class Nat; //type: Native::Crypto::DynamicMap::Set::Nat
        class PeerContainer; //type: Native::Crypto::DynamicMap::Set::PeerContainer
        class SecurityAssociation; //type: Native::Crypto::DynamicMap::Set::SecurityAssociation

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Crypto::DynamicMap::Set::Peer> peer;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Crypto::DynamicMap::Set::Pfs> pfs; // presence node
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Crypto::DynamicMap::Set::ReverseRoute> reverse_route;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Crypto::DynamicMap::Set::IpIn> ip_in;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Crypto::DynamicMap::Set::IpOut> ip_out;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Crypto::DynamicMap::Set::Nat> nat;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Crypto::DynamicMap::Set::PeerContainer> peer_container;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Crypto::DynamicMap::Set::SecurityAssociation> security_association;
        
}; // Native::Crypto::DynamicMap::Set


class Native::Crypto::DynamicMap::Set::Peer : public ydk::Entity
{
    public:
        Peer();
        ~Peer();

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
        ydk::YLeaf default_; //type: empty
        ydk::YLeaf dynamic; //type: empty

}; // Native::Crypto::DynamicMap::Set::Peer


class Native::Crypto::DynamicMap::Set::Pfs : public ydk::Entity
{
    public:
        Pfs();
        ~Pfs();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf group; //type: Group
        class Group;

}; // Native::Crypto::DynamicMap::Set::Pfs


class Native::Crypto::DynamicMap::Set::ReverseRoute : public ydk::Entity
{
    public:
        ReverseRoute();
        ~ReverseRoute();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf distance; //type: uint8
        ydk::YLeaf tag; //type: uint64
        ydk::YLeaf gateway; //type: string

}; // Native::Crypto::DynamicMap::Set::ReverseRoute


class Native::Crypto::DynamicMap::Set::IpIn : public ydk::Entity
{
    public:
        IpIn();
        ~IpIn();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Ip; //type: Native::Crypto::DynamicMap::Set::IpIn::Ip

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Crypto::DynamicMap::Set::IpIn::Ip> ip;
        
}; // Native::Crypto::DynamicMap::Set::IpIn


class Native::Crypto::DynamicMap::Set::IpIn::Ip : public ydk::Entity
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

        ydk::YLeaf access_group; //type: one of uint16, string
        ydk::YLeaf in; //type: empty

}; // Native::Crypto::DynamicMap::Set::IpIn::Ip


class Native::Crypto::DynamicMap::Set::IpOut : public ydk::Entity
{
    public:
        IpOut();
        ~IpOut();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Ip; //type: Native::Crypto::DynamicMap::Set::IpOut::Ip

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Crypto::DynamicMap::Set::IpOut::Ip> ip;
        
}; // Native::Crypto::DynamicMap::Set::IpOut


class Native::Crypto::DynamicMap::Set::IpOut::Ip : public ydk::Entity
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

        ydk::YLeaf access_group; //type: one of uint16, string
        ydk::YLeaf out; //type: empty

}; // Native::Crypto::DynamicMap::Set::IpOut::Ip


class Native::Crypto::DynamicMap::Set::Nat : public ydk::Entity
{
    public:
        Nat();
        ~Nat();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf demux; //type: empty

}; // Native::Crypto::DynamicMap::Set::Nat


class Native::Crypto::DynamicMap::Set::PeerContainer : public ydk::Entity
{
    public:
        PeerContainer();
        ~PeerContainer();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf peer; //type: one of union, string
        ydk::YLeaf default_; //type: empty

}; // Native::Crypto::DynamicMap::Set::PeerContainer


class Native::Crypto::DynamicMap::Set::SecurityAssociation : public ydk::Entity
{
    public:
        SecurityAssociation();
        ~SecurityAssociation();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf dfbit; //type: Dfbit
        ydk::YLeaf ecn; //type: Ecn
        class Dummy; //type: Native::Crypto::DynamicMap::Set::SecurityAssociation::Dummy
        class IdleTimeContainer; //type: Native::Crypto::DynamicMap::Set::SecurityAssociation::IdleTimeContainer
        class Lifetime; //type: Native::Crypto::DynamicMap::Set::SecurityAssociation::Lifetime
        class Replay; //type: Native::Crypto::DynamicMap::Set::SecurityAssociation::Replay

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Crypto::DynamicMap::Set::SecurityAssociation::Dummy> dummy;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Crypto::DynamicMap::Set::SecurityAssociation::IdleTimeContainer> idle_time_container;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Crypto::DynamicMap::Set::SecurityAssociation::Lifetime> lifetime;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Crypto::DynamicMap::Set::SecurityAssociation::Replay> replay;
                class Dfbit;
        class Ecn;

}; // Native::Crypto::DynamicMap::Set::SecurityAssociation


class Native::Crypto::DynamicMap::Set::SecurityAssociation::Dummy : public ydk::Entity
{
    public:
        Dummy();
        ~Dummy();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf pps; //type: uint8
        ydk::YLeaf seconds; //type: uint16

}; // Native::Crypto::DynamicMap::Set::SecurityAssociation::Dummy


class Native::Crypto::DynamicMap::Set::SecurityAssociation::IdleTimeContainer : public ydk::Entity
{
    public:
        IdleTimeContainer();
        ~IdleTimeContainer();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf idle_time; //type: uint32
        ydk::YLeaf default_; //type: empty

}; // Native::Crypto::DynamicMap::Set::SecurityAssociation::IdleTimeContainer


class Native::Crypto::DynamicMap::Set::SecurityAssociation::Lifetime : public ydk::Entity
{
    public:
        Lifetime();
        ~Lifetime();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf days; //type: uint8
        ydk::YLeaf kilobytes; //type: one of uint64, enumeration
        ydk::YLeaf seconds; //type: uint64
        class Kilobytes;

}; // Native::Crypto::DynamicMap::Set::SecurityAssociation::Lifetime


class Native::Crypto::DynamicMap::Set::SecurityAssociation::Replay : public ydk::Entity
{
    public:
        Replay();
        ~Replay();

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
        ydk::YLeaf window_size; //type: WindowSize
        class WindowSize;

}; // Native::Crypto::DynamicMap::Set::SecurityAssociation::Replay


class Native::Crypto::Engine : public ydk::Entity
{
    public:
        Engine();
        ~Engine();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf software; //type: Software
        class Software;

}; // Native::Crypto::Engine


class Native::Crypto::Gdoi : public ydk::Entity
{
    public:
        Gdoi();
        ~Gdoi();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        class Group; //type: Native::Crypto::Gdoi::Group

        ydk::YList group;
        
}; // Native::Crypto::Gdoi


class Native::Crypto::Gdoi::Group : public ydk::Entity
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

        ydk::YLeaf name; //type: string
        ydk::YLeaf ipv6; //type: empty
        ydk::YLeaf passive; //type: empty
        class Client; //type: Native::Crypto::Gdoi::Group::Client
        class Identity; //type: Native::Crypto::Gdoi::Group::Identity
        class Server; //type: Native::Crypto::Gdoi::Group::Server
        class Default; //type: Native::Crypto::Gdoi::Group::Default

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Crypto::Gdoi::Group::Client> client;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Crypto::Gdoi::Group::Identity> identity;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Crypto::Gdoi::Group::Server> server;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Crypto::Gdoi::Group::Default> default_;
        
}; // Native::Crypto::Gdoi::Group


class Native::Crypto::Gdoi::Group::Client : public ydk::Entity
{
    public:
        Client();
        ~Client();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf bypass_policy; //type: empty
        ydk::YLeaf transport_encrypt_key; //type: TransportEncryptKey
        ydk::YLeafList transform_sets; //type: list of  string
        class Protocol; //type: Native::Crypto::Gdoi::Group::Client::Protocol
        class RecoveryCheck; //type: Native::Crypto::Gdoi::Group::Client::RecoveryCheck
        class Registration; //type: Native::Crypto::Gdoi::Group::Client::Registration
        class Rekey; //type: Native::Crypto::Gdoi::Group::Client::Rekey
        class Status; //type: Native::Crypto::Gdoi::Group::Client::Status

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Crypto::Gdoi::Group::Client::Protocol> protocol;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Crypto::Gdoi::Group::Client::RecoveryCheck> recovery_check;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Crypto::Gdoi::Group::Client::Registration> registration;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Crypto::Gdoi::Group::Client::Rekey> rekey;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Crypto::Gdoi::Group::Client::Status> status;
                class TransportEncryptKey;

}; // Native::Crypto::Gdoi::Group::Client


class Native::Crypto::Gdoi::Group::Client::Protocol : public ydk::Entity
{
    public:
        Protocol();
        ~Protocol();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf gdoi; //type: empty
        ydk::YLeaf gikev2; //type: string

}; // Native::Crypto::Gdoi::Group::Client::Protocol


class Native::Crypto::Gdoi::Group::Client::RecoveryCheck : public ydk::Entity
{
    public:
        RecoveryCheck();
        ~RecoveryCheck();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf interval; //type: uint16

}; // Native::Crypto::Gdoi::Group::Client::RecoveryCheck


class Native::Crypto::Gdoi::Group::Client::Registration : public ydk::Entity
{
    public:
        Registration();
        ~Registration();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf interface; //type: string

}; // Native::Crypto::Gdoi::Group::Client::Registration


class Native::Crypto::Gdoi::Group::Client::Rekey : public ydk::Entity
{
    public:
        Rekey();
        ~Rekey();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Encryption; //type: Native::Crypto::Gdoi::Group::Client::Rekey::Encryption
        class Hash; //type: Native::Crypto::Gdoi::Group::Client::Rekey::Hash

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Crypto::Gdoi::Group::Client::Rekey::Encryption> encryption;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Crypto::Gdoi::Group::Client::Rekey::Hash> hash;
        
}; // Native::Crypto::Gdoi::Group::Client::Rekey


class Native::Crypto::Gdoi::Group::Client::Rekey::Encryption : public ydk::Entity
{
    public:
        Encryption();
        ~Encryption();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf rekey_3des_cbc; //type: empty
        ydk::YLeaf aes_128; //type: empty
        ydk::YLeaf aes_192; //type: empty
        ydk::YLeaf aes_256; //type: empty
        ydk::YLeaf des_cbc; //type: empty

}; // Native::Crypto::Gdoi::Group::Client::Rekey::Encryption


class Native::Crypto::Gdoi::Group::Client::Rekey::Hash : public ydk::Entity
{
    public:
        Hash();
        ~Hash();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf sha; //type: empty
        ydk::YLeaf sha256; //type: empty
        ydk::YLeaf sha384; //type: empty
        ydk::YLeaf sha512; //type: empty

}; // Native::Crypto::Gdoi::Group::Client::Rekey::Hash


class Native::Crypto::Gdoi::Group::Client::Status : public ydk::Entity
{
    public:
        Status();
        ~Status();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class ActiveSa; //type: Native::Crypto::Gdoi::Group::Client::Status::ActiveSa

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Crypto::Gdoi::Group::Client::Status::ActiveSa> active_sa;
        
}; // Native::Crypto::Gdoi::Group::Client::Status


class Native::Crypto::Gdoi::Group::Client::Status::ActiveSa : public ydk::Entity
{
    public:
        ActiveSa();
        ~ActiveSa();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf track; //type: uint16

}; // Native::Crypto::Gdoi::Group::Client::Status::ActiveSa


class Native::Crypto::Gdoi::Group::Identity : public ydk::Entity
{
    public:
        Identity();
        ~Identity();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf number; //type: uint64
        class Address; //type: Native::Crypto::Gdoi::Group::Identity::Address

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Crypto::Gdoi::Group::Identity::Address> address;
        
}; // Native::Crypto::Gdoi::Group::Identity


class Native::Crypto::Gdoi::Group::Identity::Address : public ydk::Entity
{
    public:
        Address();
        ~Address();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf ipv4; //type: string

}; // Native::Crypto::Gdoi::Group::Identity::Address


class Native::Crypto::Gdoi::Group::Server : public ydk::Entity
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

        class Address; //type: Native::Crypto::Gdoi::Group::Server::Address
        class Hostname; //type: Native::Crypto::Gdoi::Group::Server::Hostname
        class Local; //type: Native::Crypto::Gdoi::Group::Server::Local

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Crypto::Gdoi::Group::Server::Address> address;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Crypto::Gdoi::Group::Server::Hostname> hostname;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Crypto::Gdoi::Group::Server::Local> local;
        
}; // Native::Crypto::Gdoi::Group::Server


class Native::Crypto::Gdoi::Group::Server::Address : public ydk::Entity
{
    public:
        Address();
        ~Address();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeafList ipv4; //type: list of  string
        ydk::YLeafList ipv6; //type: list of  string

}; // Native::Crypto::Gdoi::Group::Server::Address


class Native::Crypto::Gdoi::Group::Server::Hostname : public ydk::Entity
{
    public:
        Hostname();
        ~Hostname();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf ipv4; //type: string

}; // Native::Crypto::Gdoi::Group::Server::Hostname


class Native::Crypto::Gdoi::Group::Server::Local : public ydk::Entity
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

        ydk::YLeaf gdoi; //type: empty
        ydk::YLeaf gikev2; //type: string
        class Address; //type: Native::Crypto::Gdoi::Group::Server::Local::Address
        class Authorization; //type: Native::Crypto::Gdoi::Group::Server::Local::Authorization
        class Group_; //type: Native::Crypto::Gdoi::Group::Server::Local::Group_
        class Identifier; //type: Native::Crypto::Gdoi::Group::Server::Local::Identifier
        class Redundancy; //type: Native::Crypto::Gdoi::Group::Server::Local::Redundancy
        class Registration; //type: Native::Crypto::Gdoi::Group::Server::Local::Registration
        class Rekey; //type: Native::Crypto::Gdoi::Group::Server::Local::Rekey
        class Sa; //type: Native::Crypto::Gdoi::Group::Server::Local::Sa
        class Default; //type: Native::Crypto::Gdoi::Group::Server::Local::Default

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Crypto::Gdoi::Group::Server::Local::Address> address;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Crypto::Gdoi::Group::Server::Local::Authorization> authorization;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Crypto::Gdoi::Group::Server::Local::Group_> group;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Crypto::Gdoi::Group::Server::Local::Identifier> identifier;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Crypto::Gdoi::Group::Server::Local::Redundancy> redundancy;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Crypto::Gdoi::Group::Server::Local::Registration> registration;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Crypto::Gdoi::Group::Server::Local::Rekey> rekey;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Crypto::Gdoi::Group::Server::Local::Sa> sa;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Crypto::Gdoi::Group::Server::Local::Default> default_;
        
}; // Native::Crypto::Gdoi::Group::Server::Local


class Native::Crypto::Gdoi::Group::Server::Local::Address : public ydk::Entity
{
    public:
        Address();
        ~Address();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf ipv4; //type: string

}; // Native::Crypto::Gdoi::Group::Server::Local::Address


class Native::Crypto::Gdoi::Group::Server::Local::Authorization : public ydk::Entity
{
    public:
        Authorization();
        ~Authorization();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf identity; //type: string
        class Address; //type: Native::Crypto::Gdoi::Group::Server::Local::Authorization::Address

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Crypto::Gdoi::Group::Server::Local::Authorization::Address> address;
        
}; // Native::Crypto::Gdoi::Group::Server::Local::Authorization


class Native::Crypto::Gdoi::Group::Server::Local::Authorization::Address : public ydk::Entity
{
    public:
        Address();
        ~Address();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf ipv4; //type: one of uint16, string

}; // Native::Crypto::Gdoi::Group::Server::Local::Authorization::Address


class Native::Crypto::Gdoi::Group::Server::Local::Group_ : public ydk::Entity
{
    public:
        Group_();
        ~Group_();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Size; //type: Native::Crypto::Gdoi::Group::Server::Local::Group_::Size

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Crypto::Gdoi::Group::Server::Local::Group_::Size> size;
        
}; // Native::Crypto::Gdoi::Group::Server::Local::Group_


class Native::Crypto::Gdoi::Group::Server::Local::Group_::Size : public ydk::Entity
{
    public:
        Size();
        ~Size();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf large; //type: empty
        ydk::YLeaf medium; //type: empty
        ydk::YLeaf small; //type: Small
        class Small;

}; // Native::Crypto::Gdoi::Group::Server::Local::Group_::Size


class Native::Crypto::Gdoi::Group::Server::Local::Identifier : public ydk::Entity
{
    public:
        Identifier();
        ~Identifier();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf value_; //type: uint8
        class Default; //type: Native::Crypto::Gdoi::Group::Server::Local::Identifier::Default
        class Range; //type: Native::Crypto::Gdoi::Group::Server::Local::Identifier::Range

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Crypto::Gdoi::Group::Server::Local::Identifier::Default> default_;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Crypto::Gdoi::Group::Server::Local::Identifier::Range> range;
        
}; // Native::Crypto::Gdoi::Group::Server::Local::Identifier


class Native::Crypto::Gdoi::Group::Server::Local::Identifier::Default : public ydk::Entity
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

        ydk::YLeaf value_; //type: uint8
        class Range; //type: Native::Crypto::Gdoi::Group::Server::Local::Identifier::Default::Range

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Crypto::Gdoi::Group::Server::Local::Identifier::Default::Range> range;
        
}; // Native::Crypto::Gdoi::Group::Server::Local::Identifier::Default


class Native::Crypto::Gdoi::Group::Server::Local::Identifier::Default::Range : public ydk::Entity
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

        ydk::YLeaf lowest; //type: uint8
        ydk::YLeaf hyphen; //type: empty
        ydk::YLeaf highest; //type: uint8

}; // Native::Crypto::Gdoi::Group::Server::Local::Identifier::Default::Range


class Native::Crypto::Gdoi::Group::Server::Local::Identifier::Range : public ydk::Entity
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

        ydk::YLeaf lowest; //type: uint8
        ydk::YLeaf hyphen; //type: empty
        ydk::YLeaf highest; //type: uint8

}; // Native::Crypto::Gdoi::Group::Server::Local::Identifier::Range


class Native::Crypto::Gdoi::Group::Server::Local::Redundancy : public ydk::Entity
{
    public:
        Redundancy();
        ~Redundancy();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Default; //type: Native::Crypto::Gdoi::Group::Server::Local::Redundancy::Default
        class Local_; //type: Native::Crypto::Gdoi::Group::Server::Local::Redundancy::Local_
        class Peer; //type: Native::Crypto::Gdoi::Group::Server::Local::Redundancy::Peer
        class Protocol; //type: Native::Crypto::Gdoi::Group::Server::Local::Redundancy::Protocol

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Crypto::Gdoi::Group::Server::Local::Redundancy::Default> default_;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Crypto::Gdoi::Group::Server::Local::Redundancy::Local_> local; // presence node
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Crypto::Gdoi::Group::Server::Local::Redundancy::Peer> peer;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Crypto::Gdoi::Group::Server::Local::Redundancy::Protocol> protocol; // presence node
        
}; // Native::Crypto::Gdoi::Group::Server::Local::Redundancy


class Native::Crypto::Gdoi::Group::Server::Local::Redundancy::Default : public ydk::Entity
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

        class Local_; //type: Native::Crypto::Gdoi::Group::Server::Local::Redundancy::Default::Local_
        class Peer; //type: Native::Crypto::Gdoi::Group::Server::Local::Redundancy::Default::Peer
        class Protocol; //type: Native::Crypto::Gdoi::Group::Server::Local::Redundancy::Default::Protocol

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Crypto::Gdoi::Group::Server::Local::Redundancy::Default::Local_> local; // presence node
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Crypto::Gdoi::Group::Server::Local::Redundancy::Default::Peer> peer;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Crypto::Gdoi::Group::Server::Local::Redundancy::Default::Protocol> protocol; // presence node
        
}; // Native::Crypto::Gdoi::Group::Server::Local::Redundancy::Default


class Native::Crypto::Gdoi::Group::Server::Local::Redundancy::Default::Local_ : public ydk::Entity
{
    public:
        Local_();
        ~Local_();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf priority; //type: uint8

}; // Native::Crypto::Gdoi::Group::Server::Local::Redundancy::Default::Local_

class Native::Crypto::DynamicMap::Default::Set::Ip::Direction : public ydk::Enum
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

class Native::Crypto::DynamicMap::Set::Pfs::Group : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf group1;
        static const ydk::Enum::YLeaf group14;
        static const ydk::Enum::YLeaf group15;
        static const ydk::Enum::YLeaf group16;
        static const ydk::Enum::YLeaf group19;
        static const ydk::Enum::YLeaf group2;
        static const ydk::Enum::YLeaf group20;
        static const ydk::Enum::YLeaf group21;
        static const ydk::Enum::YLeaf group24;
        static const ydk::Enum::YLeaf group5;

        static int get_enum_value(const std::string & name) {
            if (name == "group1") return 0;
            if (name == "group14") return 1;
            if (name == "group15") return 2;
            if (name == "group16") return 3;
            if (name == "group19") return 4;
            if (name == "group2") return 5;
            if (name == "group20") return 6;
            if (name == "group21") return 7;
            if (name == "group24") return 8;
            if (name == "group5") return 9;
            return -1;
        }
};

class Native::Crypto::DynamicMap::Set::SecurityAssociation::Dfbit : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf clear;
        static const ydk::Enum::YLeaf copy;
        static const ydk::Enum::YLeaf set;

        static int get_enum_value(const std::string & name) {
            if (name == "clear") return 0;
            if (name == "copy") return 1;
            if (name == "set") return 2;
            return -1;
        }
};

class Native::Crypto::DynamicMap::Set::SecurityAssociation::Ecn : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf discard;
        static const ydk::Enum::YLeaf propagate;

        static int get_enum_value(const std::string & name) {
            if (name == "discard") return 0;
            if (name == "propagate") return 1;
            return -1;
        }
};

class Native::Crypto::DynamicMap::Set::SecurityAssociation::Lifetime::Kilobytes : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf disable;

        static int get_enum_value(const std::string & name) {
            if (name == "disable") return 0;
            return -1;
        }
};

class Native::Crypto::DynamicMap::Set::SecurityAssociation::Replay::WindowSize : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf Y_1024;
        static const ydk::Enum::YLeaf Y_128;
        static const ydk::Enum::YLeaf Y_256;
        static const ydk::Enum::YLeaf Y_512;
        static const ydk::Enum::YLeaf Y_64;

        static int get_enum_value(const std::string & name) {
            if (name == "1024") return 0;
            if (name == "128") return 1;
            if (name == "256") return 2;
            if (name == "512") return 3;
            if (name == "64") return 4;
            return -1;
        }
};

class Native::Crypto::Engine::Software : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf ipsec;
        static const ydk::Enum::YLeaf isakmp;

        static int get_enum_value(const std::string & name) {
            if (name == "ipsec") return 0;
            if (name == "isakmp") return 1;
            return -1;
        }
};

class Native::Crypto::Gdoi::Group::Client::TransportEncryptKey : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf group_key;
        static const ydk::Enum::YLeaf pair_wise_key;

        static int get_enum_value(const std::string & name) {
            if (name == "group-key") return 0;
            if (name == "pair-wise-key") return 1;
            return -1;
        }
};

class Native::Crypto::Gdoi::Group::Server::Local::Group_::Size::Small : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf Y_12;
        static const ydk::Enum::YLeaf Y_16;
        static const ydk::Enum::YLeaf Y_8;

        static int get_enum_value(const std::string & name) {
            if (name == "12") return 0;
            if (name == "16") return 1;
            if (name == "8") return 2;
            return -1;
        }
};


}
}

#endif /* _CISCO_IOS_XE_NATIVE_124_ */


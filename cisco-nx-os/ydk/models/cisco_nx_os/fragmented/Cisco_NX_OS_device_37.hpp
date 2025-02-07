#ifndef _CISCO_NX_OS_DEVICE_37_
#define _CISCO_NX_OS_DEVICE_37_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>

#include "Cisco_NX_OS_device_0.hpp"
#include "Cisco_NX_OS_device_36.hpp"

namespace cisco_nx_os {
namespace Cisco_NX_OS_device {


class System::ConngItems::PathItems::PathEpList::RtfvDyPathAttItems : public ydk::Entity
{
    public:
        RtfvDyPathAttItems();
        ~RtfvDyPathAttItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class RtFvDyPathAttList; //type: System::ConngItems::PathItems::PathEpList::RtfvDyPathAttItems::RtFvDyPathAttList

        ydk::YList rtfvdypathatt_list;
        
}; // System::ConngItems::PathItems::PathEpList::RtfvDyPathAttItems


class System::ConngItems::PathItems::PathEpList::RtfvDyPathAttItems::RtFvDyPathAttList : public ydk::Entity
{
    public:
        RtFvDyPathAttList();
        ~RtFvDyPathAttList();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf tdn; //type: string

}; // System::ConngItems::PathItems::PathEpList::RtfvDyPathAttItems::RtFvDyPathAttList


class System::ConngItems::PathItems::PathEpList::RtvsanVsanPathAttItems : public ydk::Entity
{
    public:
        RtvsanVsanPathAttItems();
        ~RtvsanVsanPathAttItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class RtVsanVsanPathAttList; //type: System::ConngItems::PathItems::PathEpList::RtvsanVsanPathAttItems::RtVsanVsanPathAttList

        ydk::YList rtvsanvsanpathatt_list;
        
}; // System::ConngItems::PathItems::PathEpList::RtvsanVsanPathAttItems


class System::ConngItems::PathItems::PathEpList::RtvsanVsanPathAttItems::RtVsanVsanPathAttList : public ydk::Entity
{
    public:
        RtVsanVsanPathAttList();
        ~RtVsanVsanPathAttList();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf tdn; //type: string

}; // System::ConngItems::PathItems::PathEpList::RtvsanVsanPathAttItems::RtVsanVsanPathAttList


class System::ConngItems::PathItems::PathEpList::RspathToIfItems : public ydk::Entity
{
    public:
        RspathToIfItems();
        ~RspathToIfItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf tdn; //type: string

}; // System::ConngItems::PathItems::PathEpList::RspathToIfItems


class System::VdcItems : public ydk::Entity
{
    public:
        VdcItems();
        ~VdcItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        class VdcList; //type: System::VdcItems::VdcList

        ydk::YList vdc_list;
        
}; // System::VdcItems


class System::VdcItems::VdcList : public ydk::Entity
{
    public:
        VdcList();
        ~VdcList();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf id; //type: uint16
        ydk::YLeaf name; //type: string
        class LimresItems; //type: System::VdcItems::VdcList::LimresItems

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::VdcItems::VdcList::LimresItems> limres_items;
        
}; // System::VdcItems::VdcList


class System::VdcItems::VdcList::LimresItems : public ydk::Entity
{
    public:
        LimresItems();
        ~LimresItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf vlanmin; //type: uint16
        ydk::YLeaf vlanmax; //type: uint16
        ydk::YLeaf vrfmin; //type: uint16
        ydk::YLeaf vrfmax; //type: uint16
        ydk::YLeaf pomin; //type: uint16
        ydk::YLeaf pomax; //type: uint16
        ydk::YLeaf u4rtmemmin; //type: uint16
        ydk::YLeaf u4rtmemmax; //type: uint16
        ydk::YLeaf u6rtmemmin; //type: uint16
        ydk::YLeaf u6rtmemmax; //type: uint16
        ydk::YLeaf m4rtmemmin; //type: uint16
        ydk::YLeaf m4rtmemmax; //type: uint16
        ydk::YLeaf m6rtmemmin; //type: uint16
        ydk::YLeaf m6rtmemmax; //type: uint16

}; // System::VdcItems::VdcList::LimresItems


class System::PktmgrItems : public ydk::Entity
{
    public:
        PktmgrItems();
        ~PktmgrItems();

        bool has_data() const override;
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
        ydk::YLeaf adminst; //type: NwAdminSt___
        ydk::YLeaf operst; //type: NwEntOperSt
        ydk::YLeaf opererr; //type: string
        class InstItems; //type: System::PktmgrItems::InstItems

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::PktmgrItems::InstItems> inst_items;
        
}; // System::PktmgrItems


class System::PktmgrItems::InstItems : public ydk::Entity
{
    public:
        InstItems();
        ~InstItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf logginglevel; //type: ArpLoggingLevel
        ydk::YLeaf ratelimitdirection; //type: PktmgrRateLimitDirection
        ydk::YLeaf ratelimitpps; //type: int32
        ydk::YLeaf name; //type: string
        ydk::YLeaf adminst; //type: NwAdminSt___
        ydk::YLeaf ctrl; //type: string
        ydk::YLeaf opererr; //type: string
        class IfItems; //type: System::PktmgrItems::InstItems::IfItems

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::PktmgrItems::InstItems::IfItems> if_items;
        
}; // System::PktmgrItems::InstItems


class System::PktmgrItems::InstItems::IfItems : public ydk::Entity
{
    public:
        IfItems();
        ~IfItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        class IfList; //type: System::PktmgrItems::InstItems::IfItems::IfList

        ydk::YList if_list;
        
}; // System::PktmgrItems::InstItems::IfItems


class System::PktmgrItems::InstItems::IfItems::IfList : public ydk::Entity
{
    public:
        IfList();
        ~IfList();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf id; //type: string
        ydk::YLeaf ratelimitdirection; //type: PktmgrRateLimitDirection
        ydk::YLeaf ratelimitpps; //type: int32
        class RtvrfMbrItems; //type: System::PktmgrItems::InstItems::IfItems::IfList::RtvrfMbrItems
        class RtnwPathToIfItems; //type: System::PktmgrItems::InstItems::IfItems::IfList::RtnwPathToIfItems

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::PktmgrItems::InstItems::IfItems::IfList::RtvrfMbrItems> rtvrfmbr_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::PktmgrItems::InstItems::IfItems::IfList::RtnwPathToIfItems> rtnwpathtoif_items;
        
}; // System::PktmgrItems::InstItems::IfItems::IfList


class System::PktmgrItems::InstItems::IfItems::IfList::RtvrfMbrItems : public ydk::Entity
{
    public:
        RtvrfMbrItems();
        ~RtvrfMbrItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf tdn; //type: string

}; // System::PktmgrItems::InstItems::IfItems::IfList::RtvrfMbrItems


class System::PktmgrItems::InstItems::IfItems::IfList::RtnwPathToIfItems : public ydk::Entity
{
    public:
        RtnwPathToIfItems();
        ~RtnwPathToIfItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class RtNwPathToIfList; //type: System::PktmgrItems::InstItems::IfItems::IfList::RtnwPathToIfItems::RtNwPathToIfList

        ydk::YList rtnwpathtoif_list;
        
}; // System::PktmgrItems::InstItems::IfItems::IfList::RtnwPathToIfItems


class System::PktmgrItems::InstItems::IfItems::IfList::RtnwPathToIfItems::RtNwPathToIfList : public ydk::Entity
{
    public:
        RtNwPathToIfList();
        ~RtNwPathToIfList();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf tdn; //type: string

}; // System::PktmgrItems::InstItems::IfItems::IfList::RtnwPathToIfItems::RtNwPathToIfList


class System::ProcsysItems : public ydk::Entity
{
    public:
        ProcsysItems();
        ~ProcsysItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf maxmemalloc; //type: uint64
        ydk::YLeaf upts; //type: string
        ydk::YLeaf name; //type: string
        class ProcItems; //type: System::ProcsysItems::ProcItems
        class SyscoreItems; //type: System::ProcsysItems::SyscoreItems
        class SysloadItems; //type: System::ProcsysItems::SysloadItems
        class SyscpusummaryItems; //type: System::ProcsysItems::SyscpusummaryItems
        class SysmemItems; //type: System::ProcsysItems::SysmemItems

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::ProcsysItems::ProcItems> proc_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::ProcsysItems::SyscoreItems> syscore_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::ProcsysItems::SysloadItems> sysload_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::ProcsysItems::SyscpusummaryItems> syscpusummary_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::ProcsysItems::SysmemItems> sysmem_items;
        
}; // System::ProcsysItems


class System::ProcsysItems::ProcItems : public ydk::Entity
{
    public:
        ProcItems();
        ~ProcItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        class ProcList; //type: System::ProcsysItems::ProcItems::ProcList

        ydk::YList proc_list;
        
}; // System::ProcsysItems::ProcItems


class System::ProcsysItems::ProcItems::ProcList : public ydk::Entity
{
    public:
        ProcList();
        ~ProcList();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf id; //type: uint32
        ydk::YLeaf operst; //type: ProcOperSt
        ydk::YLeaf name; //type: string

}; // System::ProcsysItems::ProcItems::ProcList


class System::ProcsysItems::SyscoreItems : public ydk::Entity
{
    public:
        SyscoreItems();
        ~SyscoreItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf numofcores; //type: uint32
        ydk::YLeaf name; //type: string
        class CoreItems; //type: System::ProcsysItems::SyscoreItems::CoreItems

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::ProcsysItems::SyscoreItems::CoreItems> core_items;
        
}; // System::ProcsysItems::SyscoreItems


class System::ProcsysItems::SyscoreItems::CoreItems : public ydk::Entity
{
    public:
        CoreItems();
        ~CoreItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        class CoreList; //type: System::ProcsysItems::SyscoreItems::CoreItems::CoreList

        ydk::YList core_list;
        
}; // System::ProcsysItems::SyscoreItems::CoreItems


class System::ProcsysItems::SyscoreItems::CoreItems::CoreList : public ydk::Entity
{
    public:
        CoreList();
        ~CoreList();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf processid; //type: uint32
        ydk::YLeaf vdcid; //type: uint32
        ydk::YLeaf modulenumber; //type: uint32
        ydk::YLeaf instancenumber; //type: uint32
        ydk::YLeaf processname; //type: string
        ydk::YLeaf date; //type: string
        ydk::YLeaf name; //type: string

}; // System::ProcsysItems::SyscoreItems::CoreItems::CoreList


class System::ProcsysItems::SysloadItems : public ydk::Entity
{
    public:
        SysloadItems();
        ~SysloadItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf loadaverage1m; //type: decimal64
        ydk::YLeaf loadaverage5m; //type: decimal64
        ydk::YLeaf loadaverage15m; //type: decimal64
        ydk::YLeaf loadaverage5sec; //type: decimal64
        ydk::YLeaf totalproc; //type: uint32
        ydk::YLeaf runproc; //type: uint32
        ydk::YLeaf name; //type: string

}; // System::ProcsysItems::SysloadItems


class System::ProcsysItems::SyscpusummaryItems : public ydk::Entity
{
    public:
        SyscpusummaryItems();
        ~SyscpusummaryItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf user; //type: decimal64
        ydk::YLeaf kernel; //type: decimal64
        ydk::YLeaf idle; //type: decimal64
        ydk::YLeaf name; //type: string
        class SyscpuhistoryItems; //type: System::ProcsysItems::SyscpusummaryItems::SyscpuhistoryItems
        class SyscpuItems; //type: System::ProcsysItems::SyscpusummaryItems::SyscpuItems

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::ProcsysItems::SyscpusummaryItems::SyscpuhistoryItems> syscpuhistory_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::ProcsysItems::SyscpusummaryItems::SyscpuItems> syscpu_items;
        
}; // System::ProcsysItems::SyscpusummaryItems


class System::ProcsysItems::SyscpusummaryItems::SyscpuhistoryItems : public ydk::Entity
{
    public:
        SyscpuhistoryItems();
        ~SyscpuhistoryItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        class SysCpuHistoryList; //type: System::ProcsysItems::SyscpusummaryItems::SyscpuhistoryItems::SysCpuHistoryList

        ydk::YList syscpuhistory_list;
        
}; // System::ProcsysItems::SyscpusummaryItems::SyscpuhistoryItems


class System::ProcsysItems::SyscpusummaryItems::SyscpuhistoryItems::SysCpuHistoryList : public ydk::Entity
{
    public:
        SysCpuHistoryList();
        ~SysCpuHistoryList();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf durationname; //type: ProcCpuHistoryDurationName
        ydk::YLeaf usage; //type: string
        ydk::YLeaf usagemin; //type: uint32
        ydk::YLeaf usageavg; //type: decimal64
        ydk::YLeaf usagemax; //type: uint32
        ydk::YLeaf name; //type: string

}; // System::ProcsysItems::SyscpusummaryItems::SyscpuhistoryItems::SysCpuHistoryList


class System::ProcsysItems::SyscpusummaryItems::SyscpuItems : public ydk::Entity
{
    public:
        SyscpuItems();
        ~SyscpuItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        class SysCpuList; //type: System::ProcsysItems::SyscpusummaryItems::SyscpuItems::SysCpuList

        ydk::YList syscpu_list;
        
}; // System::ProcsysItems::SyscpusummaryItems::SyscpuItems


class System::ProcsysItems::SyscpusummaryItems::SyscpuItems::SysCpuList : public ydk::Entity
{
    public:
        SysCpuList();
        ~SysCpuList();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf id; //type: string
        ydk::YLeaf name; //type: string
        class KernelItems; //type: System::ProcsysItems::SyscpusummaryItems::SyscpuItems::SysCpuList::KernelItems
        class TotalItems; //type: System::ProcsysItems::SyscpusummaryItems::SyscpuItems::SysCpuList::TotalItems
        class UserItems; //type: System::ProcsysItems::SyscpusummaryItems::SyscpuItems::SysCpuList::UserItems
        class NiceItems; //type: System::ProcsysItems::SyscpusummaryItems::SyscpuItems::SysCpuList::NiceItems
        class IdleItems; //type: System::ProcsysItems::SyscpusummaryItems::SyscpuItems::SysCpuList::IdleItems
        class WaitItems; //type: System::ProcsysItems::SyscpusummaryItems::SyscpuItems::SysCpuList::WaitItems
        class IrqItems; //type: System::ProcsysItems::SyscpusummaryItems::SyscpuItems::SysCpuList::IrqItems
        class SoftirqItems; //type: System::ProcsysItems::SyscpusummaryItems::SyscpuItems::SysCpuList::SoftirqItems

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::ProcsysItems::SyscpusummaryItems::SyscpuItems::SysCpuList::KernelItems> kernel_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::ProcsysItems::SyscpusummaryItems::SyscpuItems::SysCpuList::TotalItems> total_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::ProcsysItems::SyscpusummaryItems::SyscpuItems::SysCpuList::UserItems> user_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::ProcsysItems::SyscpusummaryItems::SyscpuItems::SysCpuList::NiceItems> nice_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::ProcsysItems::SyscpusummaryItems::SyscpuItems::SysCpuList::IdleItems> idle_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::ProcsysItems::SyscpusummaryItems::SyscpuItems::SysCpuList::WaitItems> wait_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::ProcsysItems::SyscpusummaryItems::SyscpuItems::SysCpuList::IrqItems> irq_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::ProcsysItems::SyscpusummaryItems::SyscpuItems::SysCpuList::SoftirqItems> softirq_items;
        
}; // System::ProcsysItems::SyscpusummaryItems::SyscpuItems::SysCpuList


class System::ProcsysItems::SyscpusummaryItems::SyscpuItems::SysCpuList::KernelItems : public ydk::Entity
{
    public:
        KernelItems();
        ~KernelItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf avg; //type: decimal64
        ydk::YLeaf min; //type: decimal64
        ydk::YLeaf max; //type: decimal64
        ydk::YLeaf mininstant; //type: uint64
        ydk::YLeaf maxinstant; //type: uint64
        ydk::YLeaf stats; //type: uint64
        ydk::YLeaf pct; //type: decimal64
        ydk::YLeaf name; //type: string

}; // System::ProcsysItems::SyscpusummaryItems::SyscpuItems::SysCpuList::KernelItems


class System::ProcsysItems::SyscpusummaryItems::SyscpuItems::SysCpuList::TotalItems : public ydk::Entity
{
    public:
        TotalItems();
        ~TotalItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf avg; //type: decimal64
        ydk::YLeaf min; //type: decimal64
        ydk::YLeaf max; //type: decimal64
        ydk::YLeaf mininstant; //type: uint64
        ydk::YLeaf maxinstant; //type: uint64
        ydk::YLeaf stats; //type: uint64
        ydk::YLeaf pct; //type: decimal64
        ydk::YLeaf name; //type: string

}; // System::ProcsysItems::SyscpusummaryItems::SyscpuItems::SysCpuList::TotalItems


class System::ProcsysItems::SyscpusummaryItems::SyscpuItems::SysCpuList::UserItems : public ydk::Entity
{
    public:
        UserItems();
        ~UserItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf avg; //type: decimal64
        ydk::YLeaf min; //type: decimal64
        ydk::YLeaf max; //type: decimal64
        ydk::YLeaf mininstant; //type: uint64
        ydk::YLeaf maxinstant; //type: uint64
        ydk::YLeaf stats; //type: uint64
        ydk::YLeaf pct; //type: decimal64
        ydk::YLeaf name; //type: string

}; // System::ProcsysItems::SyscpusummaryItems::SyscpuItems::SysCpuList::UserItems


class System::ProcsysItems::SyscpusummaryItems::SyscpuItems::SysCpuList::NiceItems : public ydk::Entity
{
    public:
        NiceItems();
        ~NiceItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf avg; //type: decimal64
        ydk::YLeaf min; //type: decimal64
        ydk::YLeaf max; //type: decimal64
        ydk::YLeaf mininstant; //type: uint64
        ydk::YLeaf maxinstant; //type: uint64
        ydk::YLeaf stats; //type: uint64
        ydk::YLeaf pct; //type: decimal64
        ydk::YLeaf name; //type: string

}; // System::ProcsysItems::SyscpusummaryItems::SyscpuItems::SysCpuList::NiceItems


class System::ProcsysItems::SyscpusummaryItems::SyscpuItems::SysCpuList::IdleItems : public ydk::Entity
{
    public:
        IdleItems();
        ~IdleItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf avg; //type: decimal64
        ydk::YLeaf min; //type: decimal64
        ydk::YLeaf max; //type: decimal64
        ydk::YLeaf mininstant; //type: uint64
        ydk::YLeaf maxinstant; //type: uint64
        ydk::YLeaf stats; //type: uint64
        ydk::YLeaf pct; //type: decimal64
        ydk::YLeaf name; //type: string

}; // System::ProcsysItems::SyscpusummaryItems::SyscpuItems::SysCpuList::IdleItems


class System::ProcsysItems::SyscpusummaryItems::SyscpuItems::SysCpuList::WaitItems : public ydk::Entity
{
    public:
        WaitItems();
        ~WaitItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf avg; //type: decimal64
        ydk::YLeaf min; //type: decimal64
        ydk::YLeaf max; //type: decimal64
        ydk::YLeaf mininstant; //type: uint64
        ydk::YLeaf maxinstant; //type: uint64
        ydk::YLeaf stats; //type: uint64
        ydk::YLeaf pct; //type: decimal64
        ydk::YLeaf name; //type: string

}; // System::ProcsysItems::SyscpusummaryItems::SyscpuItems::SysCpuList::WaitItems


class System::ProcsysItems::SyscpusummaryItems::SyscpuItems::SysCpuList::IrqItems : public ydk::Entity
{
    public:
        IrqItems();
        ~IrqItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf avg; //type: decimal64
        ydk::YLeaf min; //type: decimal64
        ydk::YLeaf max; //type: decimal64
        ydk::YLeaf mininstant; //type: uint64
        ydk::YLeaf maxinstant; //type: uint64
        ydk::YLeaf stats; //type: uint64
        ydk::YLeaf pct; //type: decimal64
        ydk::YLeaf name; //type: string

}; // System::ProcsysItems::SyscpusummaryItems::SyscpuItems::SysCpuList::IrqItems


class System::ProcsysItems::SyscpusummaryItems::SyscpuItems::SysCpuList::SoftirqItems : public ydk::Entity
{
    public:
        SoftirqItems();
        ~SoftirqItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf avg; //type: decimal64
        ydk::YLeaf min; //type: decimal64
        ydk::YLeaf max; //type: decimal64
        ydk::YLeaf mininstant; //type: uint64
        ydk::YLeaf maxinstant; //type: uint64
        ydk::YLeaf stats; //type: uint64
        ydk::YLeaf pct; //type: decimal64
        ydk::YLeaf name; //type: string

}; // System::ProcsysItems::SyscpusummaryItems::SyscpuItems::SysCpuList::SoftirqItems


class System::ProcsysItems::SysmemItems : public ydk::Entity
{
    public:
        SysmemItems();
        ~SysmemItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf total; //type: uint64
        ydk::YLeaf reserved; //type: uint64
        ydk::YLeaf memstatus; //type: string
        ydk::YLeaf name; //type: string
        class SysmemusageItems; //type: System::ProcsysItems::SysmemItems::SysmemusageItems
        class SysmemfreeItems; //type: System::ProcsysItems::SysmemItems::SysmemfreeItems
        class SysmemusedItems; //type: System::ProcsysItems::SysmemItems::SysmemusedItems

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::ProcsysItems::SysmemItems::SysmemusageItems> sysmemusage_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::ProcsysItems::SysmemItems::SysmemfreeItems> sysmemfree_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::ProcsysItems::SysmemItems::SysmemusedItems> sysmemused_items;
        
}; // System::ProcsysItems::SysmemItems


class System::ProcsysItems::SysmemItems::SysmemusageItems : public ydk::Entity
{
    public:
        SysmemusageItems();
        ~SysmemusageItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf min; //type: decimal64
        ydk::YLeaf timemin; //type: uint64
        ydk::YLeaf max; //type: decimal64
        ydk::YLeaf timemax; //type: uint64
        ydk::YLeaf avg; //type: decimal64
        ydk::YLeaf curr; //type: decimal64
        ydk::YLeaf interval; //type: string
        ydk::YLeaf name; //type: string

}; // System::ProcsysItems::SysmemItems::SysmemusageItems


class System::ProcsysItems::SysmemItems::SysmemfreeItems : public ydk::Entity
{
    public:
        SysmemfreeItems();
        ~SysmemfreeItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf min; //type: uint64
        ydk::YLeaf timemin; //type: uint64
        ydk::YLeaf max; //type: uint64
        ydk::YLeaf timemax; //type: uint64
        ydk::YLeaf avg; //type: uint64
        ydk::YLeaf curr; //type: uint64
        ydk::YLeaf interval; //type: string
        ydk::YLeaf name; //type: string

}; // System::ProcsysItems::SysmemItems::SysmemfreeItems


class System::ProcsysItems::SysmemItems::SysmemusedItems : public ydk::Entity
{
    public:
        SysmemusedItems();
        ~SysmemusedItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf min; //type: uint64
        ydk::YLeaf timemin; //type: uint64
        ydk::YLeaf max; //type: uint64
        ydk::YLeaf timemax; //type: uint64
        ydk::YLeaf avg; //type: uint64
        ydk::YLeaf curr; //type: uint64
        ydk::YLeaf interval; //type: string
        ydk::YLeaf name; //type: string

}; // System::ProcsysItems::SysmemItems::SysmemusedItems


class System::ProcItems : public ydk::Entity
{
    public:
        ProcItems();
        ~ProcItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf maxmemalloc; //type: uint64
        ydk::YLeaf memfree; //type: uint64
        ydk::YLeaf cpupct; //type: uint32
        ydk::YLeaf name; //type: string
        class ProcessItems; //type: System::ProcItems::ProcessItems

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::ProcItems::ProcessItems> process_items;
        
}; // System::ProcItems


class System::ProcItems::ProcessItems : public ydk::Entity
{
    public:
        ProcessItems();
        ~ProcessItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        class EntryList; //type: System::ProcItems::ProcessItems::EntryList

        ydk::YList entry_list;
        
}; // System::ProcItems::ProcessItems


class System::ProcItems::ProcessItems::EntryList : public ydk::Entity
{
    public:
        EntryList();
        ~EntryList();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf id; //type: uint32
        ydk::YLeaf processname; //type: string
        ydk::YLeaf startcnt; //type: uint32
        ydk::YLeaf pc; //type: uint64
        ydk::YLeaf esp; //type: uint64
        ydk::YLeaf processtype; //type: ProcProcessType
        ydk::YLeaf maxmemalloc; //type: uint64
        ydk::YLeaf memused; //type: uint64
        ydk::YLeaf operstate; //type: ProcOperState
        ydk::YLeaf phymem; //type: uint64
        ydk::YLeaf procarg; //type: string
        ydk::YLeaf starttime; //type: uint64
        ydk::YLeaf uptime; //type: uint64
        ydk::YLeaf cpuusgusr; //type: uint64
        ydk::YLeaf cpuusgsys; //type: uint64
        ydk::YLeaf cpuutil; //type: uint32
        ydk::YLeaf memutil; //type: uint32
        ydk::YLeaf cpuutil5sec; //type: decimal64
        ydk::YLeaf cpuutil1min; //type: decimal64
        ydk::YLeaf cpuutil5min; //type: decimal64
        ydk::YLeaf priority; //type: uint32
        ydk::YLeaf avgcpuutil; //type: uint32
        ydk::YLeaf name; //type: string

}; // System::ProcItems::ProcessItems::EntryList


class System::RegrItems : public ydk::Entity
{
    public:
        RegrItems();
        ~RegrItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        class IfList; //type: System::RegrItems::IfList

        ydk::YList if_list;
        
}; // System::RegrItems


class System::RegrItems::IfList : public ydk::Entity
{
    public:
        IfList();
        ~IfList();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf id; //type: string
        ydk::YLeaf enumprop; //type: RegressEnumT
        ydk::YLeaf strprop; //type: string
        ydk::YLeaf intprop; //type: uint32
        ydk::YLeaf boolprop; //type: boolean
        ydk::YLeaf name; //type: string
        ydk::YLeaf descr; //type: string
        class RtvrfMbrItems; //type: System::RegrItems::IfList::RtvrfMbrItems
        class RtnwPathToIfItems; //type: System::RegrItems::IfList::RtnwPathToIfItems

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::RegrItems::IfList::RtvrfMbrItems> rtvrfmbr_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::RegrItems::IfList::RtnwPathToIfItems> rtnwpathtoif_items;
        
}; // System::RegrItems::IfList


class System::RegrItems::IfList::RtvrfMbrItems : public ydk::Entity
{
    public:
        RtvrfMbrItems();
        ~RtvrfMbrItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf tdn; //type: string

}; // System::RegrItems::IfList::RtvrfMbrItems


class System::RegrItems::IfList::RtnwPathToIfItems : public ydk::Entity
{
    public:
        RtnwPathToIfItems();
        ~RtnwPathToIfItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class RtNwPathToIfList; //type: System::RegrItems::IfList::RtnwPathToIfItems::RtNwPathToIfList

        ydk::YList rtnwpathtoif_list;
        
}; // System::RegrItems::IfList::RtnwPathToIfItems


class System::RegrItems::IfList::RtnwPathToIfItems::RtNwPathToIfList : public ydk::Entity
{
    public:
        RtNwPathToIfList();
        ~RtNwPathToIfList();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf tdn; //type: string

}; // System::RegrItems::IfList::RtnwPathToIfItems::RtNwPathToIfList


class System::RpmItems : public ydk::Entity
{
    public:
        RpmItems();
        ~RpmItems();

        bool has_data() const override;
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
        ydk::YLeaf adminst; //type: NwAdminSt___
        ydk::YLeaf operst; //type: NwEntOperSt
        class RtextcomItems; //type: System::RpmItems::RtextcomItems
        class AccesslistItems; //type: System::RpmItems::AccesslistItems
        class MaclistItems; //type: System::RpmItems::MaclistItems
        class RtmapItems; //type: System::RpmItems::RtmapItems
        class ExpcommlistItems; //type: System::RpmItems::ExpcommlistItems
        class Pfxlistv4Items; //type: System::RpmItems::Pfxlistv4Items
        class Pfxlistv6Items; //type: System::RpmItems::Pfxlistv6Items
        class RtregcomItems; //type: System::RpmItems::RtregcomItems

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::RpmItems::RtextcomItems> rtextcom_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::RpmItems::AccesslistItems> accesslist_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::RpmItems::MaclistItems> maclist_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::RpmItems::RtmapItems> rtmap_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::RpmItems::ExpcommlistItems> expcommlist_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::RpmItems::Pfxlistv4Items> pfxlistv4_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::RpmItems::Pfxlistv6Items> pfxlistv6_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::RpmItems::RtregcomItems> rtregcom_items;
        
}; // System::RpmItems


class System::RpmItems::RtextcomItems : public ydk::Entity
{
    public:
        RtextcomItems();
        ~RtextcomItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        class RuleList; //type: System::RpmItems::RtextcomItems::RuleList

        ydk::YList rule_list;
        
}; // System::RpmItems::RtextcomItems


class System::RpmItems::RtextcomItems::RuleList : public ydk::Entity
{
    public:
        RuleList();
        ~RuleList();

        bool has_data() const override;
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
        ydk::YLeaf descr; //type: string
        ydk::YLeaf type; //type: RtcomComT
        ydk::YLeaf mode; //type: RtcomMode
        class EntItems; //type: System::RpmItems::RtextcomItems::RuleList::EntItems
        class RtExtCommAttItems; //type: System::RpmItems::RtextcomItems::RuleList::RtExtCommAttItems

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::RpmItems::RtextcomItems::RuleList::EntItems> ent_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::RpmItems::RtextcomItems::RuleList::RtExtCommAttItems> rtextcommatt_items;
        
}; // System::RpmItems::RtextcomItems::RuleList


class System::RpmItems::RtextcomItems::RuleList::EntItems : public ydk::Entity
{
    public:
        EntItems();
        ~EntItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class EntryList; //type: System::RpmItems::RtextcomItems::RuleList::EntItems::EntryList

        ydk::YList entry_list;
        
}; // System::RpmItems::RtextcomItems::RuleList::EntItems


class System::RpmItems::RtextcomItems::RuleList::EntItems::EntryList : public ydk::Entity
{
    public:
        EntryList();
        ~EntryList();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf order; //type: uint32
        ydk::YLeaf name; //type: string
        ydk::YLeaf descr; //type: string
        ydk::YLeaf action; //type: RtfltAction
        ydk::YLeaf regex; //type: string
        class ItemItems; //type: System::RpmItems::RtextcomItems::RuleList::EntItems::EntryList::ItemItems
        class ExtrmacItems; //type: System::RpmItems::RtextcomItems::RuleList::EntItems::EntryList::ExtrmacItems

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::RpmItems::RtextcomItems::RuleList::EntItems::EntryList::ItemItems> item_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::RpmItems::RtextcomItems::RuleList::EntItems::EntryList::ExtrmacItems> extrmac_items;
        
}; // System::RpmItems::RtextcomItems::RuleList::EntItems::EntryList


class System::RpmItems::RtextcomItems::RuleList::EntItems::EntryList::ItemItems : public ydk::Entity
{
    public:
        ItemItems();
        ~ItemItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class ItemList; //type: System::RpmItems::RtextcomItems::RuleList::EntItems::EntryList::ItemItems::ItemList

        ydk::YList item_list;
        
}; // System::RpmItems::RtextcomItems::RuleList::EntItems::EntryList::ItemItems


class System::RpmItems::RtextcomItems::RuleList::EntItems::EntryList::ItemItems::ItemList : public ydk::Entity
{
    public:
        ItemList();
        ~ItemList();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf scope; //type: RtextcomScope
        ydk::YLeaf community; //type: string
        ydk::YLeaf type; //type: RtextcomType
        ydk::YLeaf name; //type: string
        ydk::YLeaf descr; //type: string

}; // System::RpmItems::RtextcomItems::RuleList::EntItems::EntryList::ItemItems::ItemList


class System::RpmItems::RtextcomItems::RuleList::EntItems::EntryList::ExtrmacItems : public ydk::Entity
{
    public:
        ExtrmacItems();
        ~ExtrmacItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf commrmac; //type: string

}; // System::RpmItems::RtextcomItems::RuleList::EntItems::EntryList::ExtrmacItems


class System::RpmItems::RtextcomItems::RuleList::RtExtCommAttItems : public ydk::Entity
{
    public:
        RtExtCommAttItems();
        ~RtExtCommAttItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf tdn; //type: string

}; // System::RpmItems::RtextcomItems::RuleList::RtExtCommAttItems


class System::RpmItems::AccesslistItems : public ydk::Entity
{
    public:
        AccesslistItems();
        ~AccesslistItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        class RuleList; //type: System::RpmItems::AccesslistItems::RuleList

        ydk::YList rule_list;
        
}; // System::RpmItems::AccesslistItems


class System::RpmItems::AccesslistItems::RuleList : public ydk::Entity
{
    public:
        RuleList();
        ~RuleList();

        bool has_data() const override;
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
        ydk::YLeaf descr; //type: string
        class EntItems; //type: System::RpmItems::AccesslistItems::RuleList::EntItems
        class RtrtmapRtDstAccAttItems; //type: System::RpmItems::AccesslistItems::RuleList::RtrtmapRtDstAccAttItems
        class RtrtmapRtAsPathAccAttItems; //type: System::RpmItems::AccesslistItems::RuleList::RtrtmapRtAsPathAccAttItems

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::RpmItems::AccesslistItems::RuleList::EntItems> ent_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::RpmItems::AccesslistItems::RuleList::RtrtmapRtDstAccAttItems> rtrtmaprtdstaccatt_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::RpmItems::AccesslistItems::RuleList::RtrtmapRtAsPathAccAttItems> rtrtmaprtaspathaccatt_items;
        
}; // System::RpmItems::AccesslistItems::RuleList


class System::RpmItems::AccesslistItems::RuleList::EntItems : public ydk::Entity
{
    public:
        EntItems();
        ~EntItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class EntryList; //type: System::RpmItems::AccesslistItems::RuleList::EntItems::EntryList

        ydk::YList entry_list;
        
}; // System::RpmItems::AccesslistItems::RuleList::EntItems


class System::RpmItems::AccesslistItems::RuleList::EntItems::EntryList : public ydk::Entity
{
    public:
        EntryList();
        ~EntryList();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf order; //type: uint32
        ydk::YLeaf name; //type: string
        ydk::YLeaf descr; //type: string
        ydk::YLeaf action; //type: RtfltAction
        ydk::YLeaf regex; //type: string

}; // System::RpmItems::AccesslistItems::RuleList::EntItems::EntryList


class System::RpmItems::AccesslistItems::RuleList::RtrtmapRtDstAccAttItems : public ydk::Entity
{
    public:
        RtrtmapRtDstAccAttItems();
        ~RtrtmapRtDstAccAttItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class RtRtmapRtDstAccAttList; //type: System::RpmItems::AccesslistItems::RuleList::RtrtmapRtDstAccAttItems::RtRtmapRtDstAccAttList

        ydk::YList rtrtmaprtdstaccatt_list;
        
}; // System::RpmItems::AccesslistItems::RuleList::RtrtmapRtDstAccAttItems


class System::RpmItems::AccesslistItems::RuleList::RtrtmapRtDstAccAttItems::RtRtmapRtDstAccAttList : public ydk::Entity
{
    public:
        RtRtmapRtDstAccAttList();
        ~RtRtmapRtDstAccAttList();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf tdn; //type: string

}; // System::RpmItems::AccesslistItems::RuleList::RtrtmapRtDstAccAttItems::RtRtmapRtDstAccAttList


class System::RpmItems::AccesslistItems::RuleList::RtrtmapRtAsPathAccAttItems : public ydk::Entity
{
    public:
        RtrtmapRtAsPathAccAttItems();
        ~RtrtmapRtAsPathAccAttItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class RtRtmapRtAsPathAccAttList; //type: System::RpmItems::AccesslistItems::RuleList::RtrtmapRtAsPathAccAttItems::RtRtmapRtAsPathAccAttList

        ydk::YList rtrtmaprtaspathaccatt_list;
        
}; // System::RpmItems::AccesslistItems::RuleList::RtrtmapRtAsPathAccAttItems


class System::RpmItems::AccesslistItems::RuleList::RtrtmapRtAsPathAccAttItems::RtRtmapRtAsPathAccAttList : public ydk::Entity
{
    public:
        RtRtmapRtAsPathAccAttList();
        ~RtRtmapRtAsPathAccAttList();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf tdn; //type: string

}; // System::RpmItems::AccesslistItems::RuleList::RtrtmapRtAsPathAccAttItems::RtRtmapRtAsPathAccAttList


class System::RpmItems::MaclistItems : public ydk::Entity
{
    public:
        MaclistItems();
        ~MaclistItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        class RuleMacList; //type: System::RpmItems::MaclistItems::RuleMacList

        ydk::YList rulemac_list;
        
}; // System::RpmItems::MaclistItems


class System::RpmItems::MaclistItems::RuleMacList : public ydk::Entity
{
    public:
        RuleMacList();
        ~RuleMacList();

        bool has_data() const override;
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
        ydk::YLeaf descr; //type: string
        class EntItems; //type: System::RpmItems::MaclistItems::RuleMacList::EntItems
        class RtrtmapRtMacListAttItems; //type: System::RpmItems::MaclistItems::RuleMacList::RtrtmapRtMacListAttItems

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::RpmItems::MaclistItems::RuleMacList::EntItems> ent_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::RpmItems::MaclistItems::RuleMacList::RtrtmapRtMacListAttItems> rtrtmaprtmaclistatt_items;
        
}; // System::RpmItems::MaclistItems::RuleMacList


class System::RpmItems::MaclistItems::RuleMacList::EntItems : public ydk::Entity
{
    public:
        EntItems();
        ~EntItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class EntryList; //type: System::RpmItems::MaclistItems::RuleMacList::EntItems::EntryList

        ydk::YList entry_list;
        
}; // System::RpmItems::MaclistItems::RuleMacList::EntItems


class System::RpmItems::MaclistItems::RuleMacList::EntItems::EntryList : public ydk::Entity
{
    public:
        EntryList();
        ~EntryList();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf order; //type: uint32
        ydk::YLeaf macaddr; //type: string
        ydk::YLeaf macaddrmask; //type: string
        ydk::YLeaf name; //type: string
        ydk::YLeaf descr; //type: string
        ydk::YLeaf action; //type: RtfltAction

}; // System::RpmItems::MaclistItems::RuleMacList::EntItems::EntryList


class System::RpmItems::MaclistItems::RuleMacList::RtrtmapRtMacListAttItems : public ydk::Entity
{
    public:
        RtrtmapRtMacListAttItems();
        ~RtrtmapRtMacListAttItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class RtRtmapRtMacListAttList; //type: System::RpmItems::MaclistItems::RuleMacList::RtrtmapRtMacListAttItems::RtRtmapRtMacListAttList

        ydk::YList rtrtmaprtmaclistatt_list;
        
}; // System::RpmItems::MaclistItems::RuleMacList::RtrtmapRtMacListAttItems


class System::RpmItems::MaclistItems::RuleMacList::RtrtmapRtMacListAttItems::RtRtmapRtMacListAttList : public ydk::Entity
{
    public:
        RtRtmapRtMacListAttList();
        ~RtRtmapRtMacListAttList();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf tdn; //type: string

}; // System::RpmItems::MaclistItems::RuleMacList::RtrtmapRtMacListAttItems::RtRtmapRtMacListAttList


class System::RpmItems::RtmapItems : public ydk::Entity
{
    public:
        RtmapItems();
        ~RtmapItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        class RuleList; //type: System::RpmItems::RtmapItems::RuleList

        ydk::YList rule_list;
        
}; // System::RpmItems::RtmapItems


class System::RpmItems::RtmapItems::RuleList : public ydk::Entity
{
    public:
        RuleList();
        ~RuleList();

        bool has_data() const override;
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
        ydk::YLeaf descr; //type: string
        class EntItems; //type: System::RpmItems::RtmapItems::RuleList::EntItems

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::RpmItems::RtmapItems::RuleList::EntItems> ent_items;
        
}; // System::RpmItems::RtmapItems::RuleList


class System::RpmItems::RtmapItems::RuleList::EntItems : public ydk::Entity
{
    public:
        EntItems();
        ~EntItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class EntryList; //type: System::RpmItems::RtmapItems::RuleList::EntItems::EntryList

        ydk::YList entry_list;
        
}; // System::RpmItems::RtmapItems::RuleList::EntItems


class System::RpmItems::RtmapItems::RuleList::EntItems::EntryList : public ydk::Entity
{
    public:
        EntryList();
        ~EntryList();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf order; //type: uint32
        ydk::YLeaf loadsharev4; //type: RtmapAdminSt
        ydk::YLeaf loadsharev6; //type: RtmapAdminSt
        ydk::YLeaf forceorderv4; //type: RtmapAdminSt
        ydk::YLeaf forceorderv6; //type: RtmapAdminSt
        ydk::YLeaf droponfailv4; //type: RtmapAdminSt
        ydk::YLeaf droponfailv6; //type: RtmapAdminSt
        ydk::YLeaf name; //type: string
        ydk::YLeaf descr; //type: string
        ydk::YLeaf action; //type: RtfltAction
        class MregcommItems; //type: System::RpmItems::RtmapItems::RuleList::EntItems::EntryList::MregcommItems
        class MextcommItems; //type: System::RpmItems::RtmapItems::RuleList::EntItems::EntryList::MextcommItems
        class MrtdstItems; //type: System::RpmItems::RtmapItems::RuleList::EntItems::EntryList::MrtdstItems
        class Mrtdstv6Items; //type: System::RpmItems::RtmapItems::RuleList::EntItems::EntryList::Mrtdstv6Items
        class Mipv4mcastItems; //type: System::RpmItems::RtmapItems::RuleList::EntItems::EntryList::Mipv4mcastItems
        class Mipv6mcastItems; //type: System::RpmItems::RtmapItems::RuleList::EntItems::EntryList::Mipv6mcastItems
        class MrtnhItems; //type: System::RpmItems::RtmapItems::RuleList::EntItems::EntryList::MrtnhItems
        class Mrtnhv6Items; //type: System::RpmItems::RtmapItems::RuleList::EntItems::EntryList::Mrtnhv6Items
        class MrtsrcItems; //type: System::RpmItems::RtmapItems::RuleList::EntItems::EntryList::MrtsrcItems
        class Mrtsrcv6Items; //type: System::RpmItems::RtmapItems::RuleList::EntItems::EntryList::Mrtsrcv6Items
        class MrttypeItems; //type: System::RpmItems::RtmapItems::RuleList::EntItems::EntryList::MrttypeItems
        class MrttagItems; //type: System::RpmItems::RtmapItems::RuleList::EntItems::EntryList::MrttagItems
        class MsrcprotItems; //type: System::RpmItems::RtmapItems::RuleList::EntItems::EntryList::MsrcprotItems
        class MrtpervasiveItems; //type: System::RpmItems::RtmapItems::RuleList::EntItems::EntryList::MrtpervasiveItems
        class MrtacclistItems; //type: System::RpmItems::RtmapItems::RuleList::EntItems::EntryList::MrtacclistItems
        class MrtmetricItems; //type: System::RpmItems::RtmapItems::RuleList::EntItems::EntryList::MrtmetricItems
        class MrtasnItems; //type: System::RpmItems::RtmapItems::RuleList::EntItems::EntryList::MrtasnItems
        class MrtifItems; //type: System::RpmItems::RtmapItems::RuleList::EntItems::EntryList::MrtifItems
        class MrtospfItems; //type: System::RpmItems::RtmapItems::RuleList::EntItems::EntryList::MrtospfItems
        class MrtmaclistItems; //type: System::RpmItems::RtmapItems::RuleList::EntItems::EntryList::MrtmaclistItems
        class ScontinueItems; //type: System::RpmItems::RtmapItems::RuleList::EntItems::EntryList::ScontinueItems
        class SregcommItems; //type: System::RpmItems::RtmapItems::RuleList::EntItems::EntryList::SregcommItems
        class SextcommItems; //type: System::RpmItems::RtmapItems::RuleList::EntItems::EntryList::SextcommItems
        class SextcommcostItems; //type: System::RpmItems::RtmapItems::RuleList::EntItems::EntryList::SextcommcostItems
        class SextcommcolorItems; //type: System::RpmItems::RtmapItems::RuleList::EntItems::EntryList::SextcommcolorItems
        class SextcommrmacItems; //type: System::RpmItems::RtmapItems::RuleList::EntItems::EntryList::SextcommrmacItems
        class ScommlistItems; //type: System::RpmItems::RtmapItems::RuleList::EntItems::EntryList::ScommlistItems
        class SextcommlistItems; //type: System::RpmItems::RtmapItems::RuleList::EntItems::EntryList::SextcommlistItems
        class SrttItems; //type: System::RpmItems::RtmapItems::RuleList::EntItems::EntryList::SrttItems
        class SrtdistItems; //type: System::RpmItems::RtmapItems::RuleList::EntItems::EntryList::SrtdistItems
        class SrttagItems; //type: System::RpmItems::RtmapItems::RuleList::EntItems::EntryList::SrttagItems
        class SweightItems; //type: System::RpmItems::RtmapItems::RuleList::EntItems::EntryList::SweightItems
        class SlblindexItems; //type: System::RpmItems::RtmapItems::RuleList::EntItems::EntryList::SlblindexItems
        class SprefItems; //type: System::RpmItems::RtmapItems::RuleList::EntItems::EntryList::SprefItems
        class SmetricItems; //type: System::RpmItems::RtmapItems::RuleList::EntItems::EntryList::SmetricItems
        class SmetrictItems; //type: System::RpmItems::RtmapItems::RuleList::EntItems::EntryList::SmetrictItems
        class SdampItems; //type: System::RpmItems::RtmapItems::RuleList::EntItems::EntryList::SdampItems
        class SprecItems; //type: System::RpmItems::RtmapItems::RuleList::EntItems::EntryList::SprecItems
        class Sprecv6Items; //type: System::RpmItems::RtmapItems::RuleList::EntItems::EntryList::Sprecv6Items
        class SnssaItems; //type: System::RpmItems::RtmapItems::RuleList::EntItems::EntryList::SnssaItems
        class SfwdaddrItems; //type: System::RpmItems::RtmapItems::RuleList::EntItems::EntryList::SfwdaddrItems
        class NhItems; //type: System::RpmItems::RtmapItems::RuleList::EntItems::EntryList::NhItems
        class NhpaItems; //type: System::RpmItems::RtmapItems::RuleList::EntItems::EntryList::NhpaItems
        class SetaspathprependItems; //type: System::RpmItems::RtmapItems::RuleList::EntItems::EntryList::SetaspathprependItems
        class SetaspathlastasItems; //type: System::RpmItems::RtmapItems::RuleList::EntItems::EntryList::SetaspathlastasItems
        class SetaspathtagItems; //type: System::RpmItems::RtmapItems::RuleList::EntItems::EntryList::SetaspathtagItems
        class OriginItems; //type: System::RpmItems::RtmapItems::RuleList::EntItems::EntryList::OriginItems
        class SevpnItems; //type: System::RpmItems::RtmapItems::RuleList::EntItems::EntryList::SevpnItems

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::RpmItems::RtmapItems::RuleList::EntItems::EntryList::MregcommItems> mregcomm_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::RpmItems::RtmapItems::RuleList::EntItems::EntryList::MextcommItems> mextcomm_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::RpmItems::RtmapItems::RuleList::EntItems::EntryList::MrtdstItems> mrtdst_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::RpmItems::RtmapItems::RuleList::EntItems::EntryList::Mrtdstv6Items> mrtdstv6_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::RpmItems::RtmapItems::RuleList::EntItems::EntryList::Mipv4mcastItems> mipv4mcast_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::RpmItems::RtmapItems::RuleList::EntItems::EntryList::Mipv6mcastItems> mipv6mcast_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::RpmItems::RtmapItems::RuleList::EntItems::EntryList::MrtnhItems> mrtnh_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::RpmItems::RtmapItems::RuleList::EntItems::EntryList::Mrtnhv6Items> mrtnhv6_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::RpmItems::RtmapItems::RuleList::EntItems::EntryList::MrtsrcItems> mrtsrc_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::RpmItems::RtmapItems::RuleList::EntItems::EntryList::Mrtsrcv6Items> mrtsrcv6_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::RpmItems::RtmapItems::RuleList::EntItems::EntryList::MrttypeItems> mrttype_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::RpmItems::RtmapItems::RuleList::EntItems::EntryList::MrttagItems> mrttag_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::RpmItems::RtmapItems::RuleList::EntItems::EntryList::MsrcprotItems> msrcprot_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::RpmItems::RtmapItems::RuleList::EntItems::EntryList::MrtpervasiveItems> mrtpervasive_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::RpmItems::RtmapItems::RuleList::EntItems::EntryList::MrtacclistItems> mrtacclist_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::RpmItems::RtmapItems::RuleList::EntItems::EntryList::MrtmetricItems> mrtmetric_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::RpmItems::RtmapItems::RuleList::EntItems::EntryList::MrtasnItems> mrtasn_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::RpmItems::RtmapItems::RuleList::EntItems::EntryList::MrtifItems> mrtif_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::RpmItems::RtmapItems::RuleList::EntItems::EntryList::MrtospfItems> mrtospf_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::RpmItems::RtmapItems::RuleList::EntItems::EntryList::MrtmaclistItems> mrtmaclist_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::RpmItems::RtmapItems::RuleList::EntItems::EntryList::ScontinueItems> scontinue_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::RpmItems::RtmapItems::RuleList::EntItems::EntryList::SregcommItems> sregcomm_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::RpmItems::RtmapItems::RuleList::EntItems::EntryList::SextcommItems> sextcomm_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::RpmItems::RtmapItems::RuleList::EntItems::EntryList::SextcommcostItems> sextcommcost_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::RpmItems::RtmapItems::RuleList::EntItems::EntryList::SextcommcolorItems> sextcommcolor_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::RpmItems::RtmapItems::RuleList::EntItems::EntryList::SextcommrmacItems> sextcommrmac_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::RpmItems::RtmapItems::RuleList::EntItems::EntryList::ScommlistItems> scommlist_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::RpmItems::RtmapItems::RuleList::EntItems::EntryList::SextcommlistItems> sextcommlist_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::RpmItems::RtmapItems::RuleList::EntItems::EntryList::SrttItems> srtt_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::RpmItems::RtmapItems::RuleList::EntItems::EntryList::SrtdistItems> srtdist_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::RpmItems::RtmapItems::RuleList::EntItems::EntryList::SrttagItems> srttag_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::RpmItems::RtmapItems::RuleList::EntItems::EntryList::SweightItems> sweight_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::RpmItems::RtmapItems::RuleList::EntItems::EntryList::SlblindexItems> slblindex_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::RpmItems::RtmapItems::RuleList::EntItems::EntryList::SprefItems> spref_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::RpmItems::RtmapItems::RuleList::EntItems::EntryList::SmetricItems> smetric_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::RpmItems::RtmapItems::RuleList::EntItems::EntryList::SmetrictItems> smetrict_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::RpmItems::RtmapItems::RuleList::EntItems::EntryList::SdampItems> sdamp_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::RpmItems::RtmapItems::RuleList::EntItems::EntryList::SprecItems> sprec_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::RpmItems::RtmapItems::RuleList::EntItems::EntryList::Sprecv6Items> sprecv6_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::RpmItems::RtmapItems::RuleList::EntItems::EntryList::SnssaItems> snssa_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::RpmItems::RtmapItems::RuleList::EntItems::EntryList::SfwdaddrItems> sfwdaddr_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::RpmItems::RtmapItems::RuleList::EntItems::EntryList::NhItems> nh_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::RpmItems::RtmapItems::RuleList::EntItems::EntryList::NhpaItems> nhpa_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::RpmItems::RtmapItems::RuleList::EntItems::EntryList::SetaspathprependItems> setaspathprepend_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::RpmItems::RtmapItems::RuleList::EntItems::EntryList::SetaspathlastasItems> setaspathlastas_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::RpmItems::RtmapItems::RuleList::EntItems::EntryList::SetaspathtagItems> setaspathtag_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::RpmItems::RtmapItems::RuleList::EntItems::EntryList::OriginItems> origin_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::RpmItems::RtmapItems::RuleList::EntItems::EntryList::SevpnItems> sevpn_items;
        
}; // System::RpmItems::RtmapItems::RuleList::EntItems::EntryList


class System::RpmItems::RtmapItems::RuleList::EntItems::EntryList::MregcommItems : public ydk::Entity
{
    public:
        MregcommItems();
        ~MregcommItems();

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
        ydk::YLeaf descr; //type: string
        ydk::YLeaf type; //type: RtmapMatchT
        ydk::YLeaf criteria; //type: RtmapCriteria
        class RsregCommAttItems; //type: System::RpmItems::RtmapItems::RuleList::EntItems::EntryList::MregcommItems::RsregCommAttItems

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::RpmItems::RtmapItems::RuleList::EntItems::EntryList::MregcommItems::RsregCommAttItems> rsregcommatt_items;
        
}; // System::RpmItems::RtmapItems::RuleList::EntItems::EntryList::MregcommItems


class System::RpmItems::RtmapItems::RuleList::EntItems::EntryList::MregcommItems::RsregCommAttItems : public ydk::Entity
{
    public:
        RsregCommAttItems();
        ~RsregCommAttItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class RsRegCommAttList; //type: System::RpmItems::RtmapItems::RuleList::EntItems::EntryList::MregcommItems::RsregCommAttItems::RsRegCommAttList

        ydk::YList rsregcommatt_list;
        
}; // System::RpmItems::RtmapItems::RuleList::EntItems::EntryList::MregcommItems::RsregCommAttItems


class System::RpmItems::RtmapItems::RuleList::EntItems::EntryList::MregcommItems::RsregCommAttItems::RsRegCommAttList : public ydk::Entity
{
    public:
        RsRegCommAttList();
        ~RsRegCommAttList();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf tdn; //type: string
        ydk::YLeaf state; //type: RelnState
        ydk::YLeaf statequal; //type: RelnStateQual
        ydk::YLeaf ttype; //type: RelnTargetType
        ydk::YLeaf rtype; //type: RelnResolverType
        ydk::YLeaf forceresolve; //type: boolean

}; // System::RpmItems::RtmapItems::RuleList::EntItems::EntryList::MregcommItems::RsregCommAttItems::RsRegCommAttList


class System::RpmItems::RtmapItems::RuleList::EntItems::EntryList::MextcommItems : public ydk::Entity
{
    public:
        MextcommItems();
        ~MextcommItems();

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
        ydk::YLeaf descr; //type: string
        ydk::YLeaf type; //type: RtmapMatchT
        ydk::YLeaf criteria; //type: RtmapCriteria
        class RsextCommAttItems; //type: System::RpmItems::RtmapItems::RuleList::EntItems::EntryList::MextcommItems::RsextCommAttItems

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::RpmItems::RtmapItems::RuleList::EntItems::EntryList::MextcommItems::RsextCommAttItems> rsextcommatt_items;
        
}; // System::RpmItems::RtmapItems::RuleList::EntItems::EntryList::MextcommItems


class System::RpmItems::RtmapItems::RuleList::EntItems::EntryList::MextcommItems::RsextCommAttItems : public ydk::Entity
{
    public:
        RsextCommAttItems();
        ~RsextCommAttItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class RsExtCommAttList; //type: System::RpmItems::RtmapItems::RuleList::EntItems::EntryList::MextcommItems::RsextCommAttItems::RsExtCommAttList

        ydk::YList rsextcommatt_list;
        
}; // System::RpmItems::RtmapItems::RuleList::EntItems::EntryList::MextcommItems::RsextCommAttItems


class System::RpmItems::RtmapItems::RuleList::EntItems::EntryList::MextcommItems::RsextCommAttItems::RsExtCommAttList : public ydk::Entity
{
    public:
        RsExtCommAttList();
        ~RsExtCommAttList();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf tdn; //type: string
        ydk::YLeaf state; //type: RelnState
        ydk::YLeaf statequal; //type: RelnStateQual
        ydk::YLeaf ttype; //type: RelnTargetType
        ydk::YLeaf rtype; //type: RelnResolverType
        ydk::YLeaf forceresolve; //type: boolean

}; // System::RpmItems::RtmapItems::RuleList::EntItems::EntryList::MextcommItems::RsextCommAttItems::RsExtCommAttList


class System::RpmItems::RtmapItems::RuleList::EntItems::EntryList::MrtdstItems : public ydk::Entity
{
    public:
        MrtdstItems();
        ~MrtdstItems();

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
        ydk::YLeaf descr; //type: string
        ydk::YLeaf type; //type: RtmapMatchT
        class RsrtDstAttItems; //type: System::RpmItems::RtmapItems::RuleList::EntItems::EntryList::MrtdstItems::RsrtDstAttItems
        class RsrtDstAccAttItems; //type: System::RpmItems::RtmapItems::RuleList::EntItems::EntryList::MrtdstItems::RsrtDstAccAttItems

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::RpmItems::RtmapItems::RuleList::EntItems::EntryList::MrtdstItems::RsrtDstAttItems> rsrtdstatt_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::RpmItems::RtmapItems::RuleList::EntItems::EntryList::MrtdstItems::RsrtDstAccAttItems> rsrtdstaccatt_items;
        
}; // System::RpmItems::RtmapItems::RuleList::EntItems::EntryList::MrtdstItems


class System::RpmItems::RtmapItems::RuleList::EntItems::EntryList::MrtdstItems::RsrtDstAttItems : public ydk::Entity
{
    public:
        RsrtDstAttItems();
        ~RsrtDstAttItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class RsRtDstAttList; //type: System::RpmItems::RtmapItems::RuleList::EntItems::EntryList::MrtdstItems::RsrtDstAttItems::RsRtDstAttList

        ydk::YList rsrtdstatt_list;
        
}; // System::RpmItems::RtmapItems::RuleList::EntItems::EntryList::MrtdstItems::RsrtDstAttItems


class System::RpmItems::RtmapItems::RuleList::EntItems::EntryList::MrtdstItems::RsrtDstAttItems::RsRtDstAttList : public ydk::Entity
{
    public:
        RsRtDstAttList();
        ~RsRtDstAttList();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf tdn; //type: string
        ydk::YLeaf state; //type: RelnState
        ydk::YLeaf statequal; //type: RelnStateQual
        ydk::YLeaf ttype; //type: RelnTargetType
        ydk::YLeaf rtype; //type: RelnResolverType
        ydk::YLeaf forceresolve; //type: boolean

}; // System::RpmItems::RtmapItems::RuleList::EntItems::EntryList::MrtdstItems::RsrtDstAttItems::RsRtDstAttList


class System::RpmItems::RtmapItems::RuleList::EntItems::EntryList::MrtdstItems::RsrtDstAccAttItems : public ydk::Entity
{
    public:
        RsrtDstAccAttItems();
        ~RsrtDstAccAttItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class RsRtDstAccAttList; //type: System::RpmItems::RtmapItems::RuleList::EntItems::EntryList::MrtdstItems::RsrtDstAccAttItems::RsRtDstAccAttList

        ydk::YList rsrtdstaccatt_list;
        
}; // System::RpmItems::RtmapItems::RuleList::EntItems::EntryList::MrtdstItems::RsrtDstAccAttItems


class System::RpmItems::RtmapItems::RuleList::EntItems::EntryList::MrtdstItems::RsrtDstAccAttItems::RsRtDstAccAttList : public ydk::Entity
{
    public:
        RsRtDstAccAttList();
        ~RsRtDstAccAttList();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf tdn; //type: string
        ydk::YLeaf state; //type: RelnState
        ydk::YLeaf statequal; //type: RelnStateQual
        ydk::YLeaf ttype; //type: RelnTargetType
        ydk::YLeaf rtype; //type: RelnResolverType
        ydk::YLeaf forceresolve; //type: boolean

}; // System::RpmItems::RtmapItems::RuleList::EntItems::EntryList::MrtdstItems::RsrtDstAccAttItems::RsRtDstAccAttList


class System::RpmItems::RtmapItems::RuleList::EntItems::EntryList::Mrtdstv6Items : public ydk::Entity
{
    public:
        Mrtdstv6Items();
        ~Mrtdstv6Items();

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
        ydk::YLeaf descr; //type: string
        ydk::YLeaf type; //type: RtmapMatchT
        class RsrtDstV6AttItems; //type: System::RpmItems::RtmapItems::RuleList::EntItems::EntryList::Mrtdstv6Items::RsrtDstV6AttItems

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::RpmItems::RtmapItems::RuleList::EntItems::EntryList::Mrtdstv6Items::RsrtDstV6AttItems> rsrtdstv6att_items;
        
}; // System::RpmItems::RtmapItems::RuleList::EntItems::EntryList::Mrtdstv6Items


class System::RpmItems::RtmapItems::RuleList::EntItems::EntryList::Mrtdstv6Items::RsrtDstV6AttItems : public ydk::Entity
{
    public:
        RsrtDstV6AttItems();
        ~RsrtDstV6AttItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class RsRtDstV6AttList; //type: System::RpmItems::RtmapItems::RuleList::EntItems::EntryList::Mrtdstv6Items::RsrtDstV6AttItems::RsRtDstV6AttList

        ydk::YList rsrtdstv6att_list;
        
}; // System::RpmItems::RtmapItems::RuleList::EntItems::EntryList::Mrtdstv6Items::RsrtDstV6AttItems


class System::RpmItems::RtmapItems::RuleList::EntItems::EntryList::Mrtdstv6Items::RsrtDstV6AttItems::RsRtDstV6AttList : public ydk::Entity
{
    public:
        RsRtDstV6AttList();
        ~RsRtDstV6AttList();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf tdn; //type: string
        ydk::YLeaf state; //type: RelnState
        ydk::YLeaf statequal; //type: RelnStateQual
        ydk::YLeaf ttype; //type: RelnTargetType
        ydk::YLeaf rtype; //type: RelnResolverType
        ydk::YLeaf forceresolve; //type: boolean

}; // System::RpmItems::RtmapItems::RuleList::EntItems::EntryList::Mrtdstv6Items::RsrtDstV6AttItems::RsRtDstV6AttList


class System::RpmItems::RtmapItems::RuleList::EntItems::EntryList::Mipv4mcastItems : public ydk::Entity
{
    public:
        Mipv4mcastItems();
        ~Mipv4mcastItems();

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
        ydk::YLeaf descr; //type: string
        ydk::YLeaf type; //type: RtmapMatchT
        ydk::YLeaf groupaddr; //type: string
        ydk::YLeaf groupstartaddr; //type: string
        ydk::YLeaf groupendaddr; //type: string
        ydk::YLeaf rp; //type: string
        ydk::YLeaf rptype; //type: RtmapRpTypeT
        ydk::YLeaf sourceaddr; //type: string

}; // System::RpmItems::RtmapItems::RuleList::EntItems::EntryList::Mipv4mcastItems


class System::RpmItems::RtmapItems::RuleList::EntItems::EntryList::Mipv6mcastItems : public ydk::Entity
{
    public:
        Mipv6mcastItems();
        ~Mipv6mcastItems();

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
        ydk::YLeaf descr; //type: string
        ydk::YLeaf type; //type: RtmapMatchT
        ydk::YLeaf groupaddr; //type: string
        ydk::YLeaf groupstartaddr; //type: string
        ydk::YLeaf groupendaddr; //type: string
        ydk::YLeaf rp; //type: string
        ydk::YLeaf rptype; //type: RtmapRpTypeT
        ydk::YLeaf sourceaddr; //type: string

}; // System::RpmItems::RtmapItems::RuleList::EntItems::EntryList::Mipv6mcastItems


class System::RpmItems::RtmapItems::RuleList::EntItems::EntryList::MrtnhItems : public ydk::Entity
{
    public:
        MrtnhItems();
        ~MrtnhItems();

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
        ydk::YLeaf descr; //type: string
        ydk::YLeaf type; //type: RtmapMatchT
        class RsrtNhAttItems; //type: System::RpmItems::RtmapItems::RuleList::EntItems::EntryList::MrtnhItems::RsrtNhAttItems

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::RpmItems::RtmapItems::RuleList::EntItems::EntryList::MrtnhItems::RsrtNhAttItems> rsrtnhatt_items;
        
}; // System::RpmItems::RtmapItems::RuleList::EntItems::EntryList::MrtnhItems


class System::RpmItems::RtmapItems::RuleList::EntItems::EntryList::MrtnhItems::RsrtNhAttItems : public ydk::Entity
{
    public:
        RsrtNhAttItems();
        ~RsrtNhAttItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class RsRtNhAttList; //type: System::RpmItems::RtmapItems::RuleList::EntItems::EntryList::MrtnhItems::RsrtNhAttItems::RsRtNhAttList

        ydk::YList rsrtnhatt_list;
        
}; // System::RpmItems::RtmapItems::RuleList::EntItems::EntryList::MrtnhItems::RsrtNhAttItems


class System::RpmItems::RtmapItems::RuleList::EntItems::EntryList::MrtnhItems::RsrtNhAttItems::RsRtNhAttList : public ydk::Entity
{
    public:
        RsRtNhAttList();
        ~RsRtNhAttList();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf tdn; //type: string
        ydk::YLeaf state; //type: RelnState
        ydk::YLeaf statequal; //type: RelnStateQual
        ydk::YLeaf ttype; //type: RelnTargetType
        ydk::YLeaf rtype; //type: RelnResolverType
        ydk::YLeaf forceresolve; //type: boolean

}; // System::RpmItems::RtmapItems::RuleList::EntItems::EntryList::MrtnhItems::RsrtNhAttItems::RsRtNhAttList


class System::RpmItems::RtmapItems::RuleList::EntItems::EntryList::Mrtnhv6Items : public ydk::Entity
{
    public:
        Mrtnhv6Items();
        ~Mrtnhv6Items();

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
        ydk::YLeaf descr; //type: string
        ydk::YLeaf type; //type: RtmapMatchT
        class RsrtNhV6AttItems; //type: System::RpmItems::RtmapItems::RuleList::EntItems::EntryList::Mrtnhv6Items::RsrtNhV6AttItems

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::RpmItems::RtmapItems::RuleList::EntItems::EntryList::Mrtnhv6Items::RsrtNhV6AttItems> rsrtnhv6att_items;
        
}; // System::RpmItems::RtmapItems::RuleList::EntItems::EntryList::Mrtnhv6Items


class System::RpmItems::RtmapItems::RuleList::EntItems::EntryList::Mrtnhv6Items::RsrtNhV6AttItems : public ydk::Entity
{
    public:
        RsrtNhV6AttItems();
        ~RsrtNhV6AttItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class RsRtNhV6AttList; //type: System::RpmItems::RtmapItems::RuleList::EntItems::EntryList::Mrtnhv6Items::RsrtNhV6AttItems::RsRtNhV6AttList

        ydk::YList rsrtnhv6att_list;
        
}; // System::RpmItems::RtmapItems::RuleList::EntItems::EntryList::Mrtnhv6Items::RsrtNhV6AttItems


class System::RpmItems::RtmapItems::RuleList::EntItems::EntryList::Mrtnhv6Items::RsrtNhV6AttItems::RsRtNhV6AttList : public ydk::Entity
{
    public:
        RsRtNhV6AttList();
        ~RsRtNhV6AttList();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf tdn; //type: string
        ydk::YLeaf state; //type: RelnState
        ydk::YLeaf statequal; //type: RelnStateQual
        ydk::YLeaf ttype; //type: RelnTargetType
        ydk::YLeaf rtype; //type: RelnResolverType
        ydk::YLeaf forceresolve; //type: boolean

}; // System::RpmItems::RtmapItems::RuleList::EntItems::EntryList::Mrtnhv6Items::RsrtNhV6AttItems::RsRtNhV6AttList


class System::RpmItems::RtmapItems::RuleList::EntItems::EntryList::MrtsrcItems : public ydk::Entity
{
    public:
        MrtsrcItems();
        ~MrtsrcItems();

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
        ydk::YLeaf descr; //type: string
        ydk::YLeaf type; //type: RtmapMatchT
        class RsrtSrcAttItems; //type: System::RpmItems::RtmapItems::RuleList::EntItems::EntryList::MrtsrcItems::RsrtSrcAttItems

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::RpmItems::RtmapItems::RuleList::EntItems::EntryList::MrtsrcItems::RsrtSrcAttItems> rsrtsrcatt_items;
        
}; // System::RpmItems::RtmapItems::RuleList::EntItems::EntryList::MrtsrcItems


class System::RpmItems::RtmapItems::RuleList::EntItems::EntryList::MrtsrcItems::RsrtSrcAttItems : public ydk::Entity
{
    public:
        RsrtSrcAttItems();
        ~RsrtSrcAttItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class RsRtSrcAttList; //type: System::RpmItems::RtmapItems::RuleList::EntItems::EntryList::MrtsrcItems::RsrtSrcAttItems::RsRtSrcAttList

        ydk::YList rsrtsrcatt_list;
        
}; // System::RpmItems::RtmapItems::RuleList::EntItems::EntryList::MrtsrcItems::RsrtSrcAttItems


class System::RpmItems::RtmapItems::RuleList::EntItems::EntryList::MrtsrcItems::RsrtSrcAttItems::RsRtSrcAttList : public ydk::Entity
{
    public:
        RsRtSrcAttList();
        ~RsRtSrcAttList();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf tdn; //type: string
        ydk::YLeaf state; //type: RelnState
        ydk::YLeaf statequal; //type: RelnStateQual
        ydk::YLeaf ttype; //type: RelnTargetType
        ydk::YLeaf rtype; //type: RelnResolverType
        ydk::YLeaf forceresolve; //type: boolean

}; // System::RpmItems::RtmapItems::RuleList::EntItems::EntryList::MrtsrcItems::RsrtSrcAttItems::RsRtSrcAttList


class System::RpmItems::RtmapItems::RuleList::EntItems::EntryList::Mrtsrcv6Items : public ydk::Entity
{
    public:
        Mrtsrcv6Items();
        ~Mrtsrcv6Items();

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
        ydk::YLeaf descr; //type: string
        ydk::YLeaf type; //type: RtmapMatchT
        class RsrtSrcV6AttItems; //type: System::RpmItems::RtmapItems::RuleList::EntItems::EntryList::Mrtsrcv6Items::RsrtSrcV6AttItems

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::RpmItems::RtmapItems::RuleList::EntItems::EntryList::Mrtsrcv6Items::RsrtSrcV6AttItems> rsrtsrcv6att_items;
        
}; // System::RpmItems::RtmapItems::RuleList::EntItems::EntryList::Mrtsrcv6Items


class System::RpmItems::RtmapItems::RuleList::EntItems::EntryList::Mrtsrcv6Items::RsrtSrcV6AttItems : public ydk::Entity
{
    public:
        RsrtSrcV6AttItems();
        ~RsrtSrcV6AttItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class RsRtSrcV6AttList; //type: System::RpmItems::RtmapItems::RuleList::EntItems::EntryList::Mrtsrcv6Items::RsrtSrcV6AttItems::RsRtSrcV6AttList

        ydk::YList rsrtsrcv6att_list;
        
}; // System::RpmItems::RtmapItems::RuleList::EntItems::EntryList::Mrtsrcv6Items::RsrtSrcV6AttItems


class System::RpmItems::RtmapItems::RuleList::EntItems::EntryList::Mrtsrcv6Items::RsrtSrcV6AttItems::RsRtSrcV6AttList : public ydk::Entity
{
    public:
        RsRtSrcV6AttList();
        ~RsRtSrcV6AttList();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf tdn; //type: string
        ydk::YLeaf state; //type: RelnState
        ydk::YLeaf statequal; //type: RelnStateQual
        ydk::YLeaf ttype; //type: RelnTargetType
        ydk::YLeaf rtype; //type: RelnResolverType
        ydk::YLeaf forceresolve; //type: boolean

}; // System::RpmItems::RtmapItems::RuleList::EntItems::EntryList::Mrtsrcv6Items::RsrtSrcV6AttItems::RsRtSrcV6AttList


class System::RpmItems::RtmapItems::RuleList::EntItems::EntryList::MrttypeItems : public ydk::Entity
{
    public:
        MrttypeItems();
        ~MrttypeItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class MatchRtTypeList; //type: System::RpmItems::RtmapItems::RuleList::EntItems::EntryList::MrttypeItems::MatchRtTypeList

        ydk::YList matchrttype_list;
        
}; // System::RpmItems::RtmapItems::RuleList::EntItems::EntryList::MrttypeItems


class System::RpmItems::RtmapItems::RuleList::EntItems::EntryList::MrttypeItems::MatchRtTypeList : public ydk::Entity
{
    public:
        MatchRtTypeList();
        ~MatchRtTypeList();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf routet; //type: RtmapRouteT
        ydk::YLeaf name; //type: string
        ydk::YLeaf descr; //type: string
        ydk::YLeaf type; //type: RtmapMatchT

}; // System::RpmItems::RtmapItems::RuleList::EntItems::EntryList::MrttypeItems::MatchRtTypeList


class System::RpmItems::RtmapItems::RuleList::EntItems::EntryList::MrttagItems : public ydk::Entity
{
    public:
        MrttagItems();
        ~MrttagItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class MatchRtTagList; //type: System::RpmItems::RtmapItems::RuleList::EntItems::EntryList::MrttagItems::MatchRtTagList

        ydk::YList matchrttag_list;
        
}; // System::RpmItems::RtmapItems::RuleList::EntItems::EntryList::MrttagItems


class System::RpmItems::RtmapItems::RuleList::EntItems::EntryList::MrttagItems::MatchRtTagList : public ydk::Entity
{
    public:
        MatchRtTagList();
        ~MatchRtTagList();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf tag; //type: uint32
        ydk::YLeaf name; //type: string
        ydk::YLeaf descr; //type: string
        ydk::YLeaf type; //type: RtmapMatchT

}; // System::RpmItems::RtmapItems::RuleList::EntItems::EntryList::MrttagItems::MatchRtTagList


class System::RpmItems::RtmapItems::RuleList::EntItems::EntryList::MsrcprotItems : public ydk::Entity
{
    public:
        MsrcprotItems();
        ~MsrcprotItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class MatchSrcProtoList; //type: System::RpmItems::RtmapItems::RuleList::EntItems::EntryList::MsrcprotItems::MatchSrcProtoList

        ydk::YList matchsrcproto_list;
        
}; // System::RpmItems::RtmapItems::RuleList::EntItems::EntryList::MsrcprotItems


class System::RpmItems::RtmapItems::RuleList::EntItems::EntryList::MsrcprotItems::MatchSrcProtoList : public ydk::Entity
{
    public:
        MatchSrcProtoList();
        ~MatchSrcProtoList();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf proto; //type: string
        ydk::YLeaf name; //type: string
        ydk::YLeaf descr; //type: string
        ydk::YLeaf type; //type: RtmapMatchT

}; // System::RpmItems::RtmapItems::RuleList::EntItems::EntryList::MsrcprotItems::MatchSrcProtoList


class System::RpmItems::RtmapItems::RuleList::EntItems::EntryList::MrtpervasiveItems : public ydk::Entity
{
    public:
        MrtpervasiveItems();
        ~MrtpervasiveItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf pervasive; //type: RtmapRoutePervasive
        ydk::YLeaf name; //type: string
        ydk::YLeaf descr; //type: string
        ydk::YLeaf type; //type: RtmapMatchT

}; // System::RpmItems::RtmapItems::RuleList::EntItems::EntryList::MrtpervasiveItems


class System::RpmItems::RtmapItems::RuleList::EntItems::EntryList::MrtacclistItems : public ydk::Entity
{
    public:
        MrtacclistItems();
        ~MrtacclistItems();

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
        ydk::YLeaf descr; //type: string
        ydk::YLeaf type; //type: RtmapMatchT
        class RsrtAsPathAccAttItems; //type: System::RpmItems::RtmapItems::RuleList::EntItems::EntryList::MrtacclistItems::RsrtAsPathAccAttItems

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::RpmItems::RtmapItems::RuleList::EntItems::EntryList::MrtacclistItems::RsrtAsPathAccAttItems> rsrtaspathaccatt_items;
        
}; // System::RpmItems::RtmapItems::RuleList::EntItems::EntryList::MrtacclistItems


class System::RpmItems::RtmapItems::RuleList::EntItems::EntryList::MrtacclistItems::RsrtAsPathAccAttItems : public ydk::Entity
{
    public:
        RsrtAsPathAccAttItems();
        ~RsrtAsPathAccAttItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class RsRtAsPathAccAttList; //type: System::RpmItems::RtmapItems::RuleList::EntItems::EntryList::MrtacclistItems::RsrtAsPathAccAttItems::RsRtAsPathAccAttList

        ydk::YList rsrtaspathaccatt_list;
        
}; // System::RpmItems::RtmapItems::RuleList::EntItems::EntryList::MrtacclistItems::RsrtAsPathAccAttItems


class System::RpmItems::RtmapItems::RuleList::EntItems::EntryList::MrtacclistItems::RsrtAsPathAccAttItems::RsRtAsPathAccAttList : public ydk::Entity
{
    public:
        RsRtAsPathAccAttList();
        ~RsRtAsPathAccAttList();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf tdn; //type: string
        ydk::YLeaf state; //type: RelnState
        ydk::YLeaf statequal; //type: RelnStateQual
        ydk::YLeaf ttype; //type: RelnTargetType
        ydk::YLeaf rtype; //type: RelnResolverType
        ydk::YLeaf forceresolve; //type: boolean

}; // System::RpmItems::RtmapItems::RuleList::EntItems::EntryList::MrtacclistItems::RsrtAsPathAccAttItems::RsRtAsPathAccAttList


class System::RpmItems::RtmapItems::RuleList::EntItems::EntryList::MrtmetricItems : public ydk::Entity
{
    public:
        MrtmetricItems();
        ~MrtmetricItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class MatchRtMetricList; //type: System::RpmItems::RtmapItems::RuleList::EntItems::EntryList::MrtmetricItems::MatchRtMetricList

        ydk::YList matchrtmetric_list;
        
}; // System::RpmItems::RtmapItems::RuleList::EntItems::EntryList::MrtmetricItems


class System::RpmItems::RtmapItems::RuleList::EntItems::EntryList::MrtmetricItems::MatchRtMetricList : public ydk::Entity
{
    public:
        MatchRtMetricList();
        ~MatchRtMetricList();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf measure; //type: uint32
        ydk::YLeaf deviation; //type: uint32
        ydk::YLeaf name; //type: string
        ydk::YLeaf descr; //type: string
        ydk::YLeaf type; //type: RtmapMatchT

}; // System::RpmItems::RtmapItems::RuleList::EntItems::EntryList::MrtmetricItems::MatchRtMetricList


class System::RpmItems::RtmapItems::RuleList::EntItems::EntryList::MrtasnItems : public ydk::Entity
{
    public:
        MrtasnItems();
        ~MrtasnItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class MatchRtAsnList; //type: System::RpmItems::RtmapItems::RuleList::EntItems::EntryList::MrtasnItems::MatchRtAsnList

        ydk::YList matchrtasn_list;
        
}; // System::RpmItems::RtmapItems::RuleList::EntItems::EntryList::MrtasnItems


class System::RpmItems::RtmapItems::RuleList::EntItems::EntryList::MrtasnItems::MatchRtAsnList : public ydk::Entity
{
    public:
        MatchRtAsnList();
        ~MatchRtAsnList();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf asn; //type: string
        ydk::YLeaf name; //type: string
        ydk::YLeaf descr; //type: string
        ydk::YLeaf type; //type: RtmapMatchT

}; // System::RpmItems::RtmapItems::RuleList::EntItems::EntryList::MrtasnItems::MatchRtAsnList


class System::RpmItems::RtmapItems::RuleList::EntItems::EntryList::MrtifItems : public ydk::Entity
{
    public:
        MrtifItems();
        ~MrtifItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class MatchRtIfList; //type: System::RpmItems::RtmapItems::RuleList::EntItems::EntryList::MrtifItems::MatchRtIfList

        ydk::YList matchrtif_list;
        
}; // System::RpmItems::RtmapItems::RuleList::EntItems::EntryList::MrtifItems


class System::RpmItems::RtmapItems::RuleList::EntItems::EntryList::MrtifItems::MatchRtIfList : public ydk::Entity
{
    public:
        MatchRtIfList();
        ~MatchRtIfList();

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
        ydk::YLeaf name; //type: string
        ydk::YLeaf descr; //type: string
        ydk::YLeaf type; //type: RtmapMatchT

}; // System::RpmItems::RtmapItems::RuleList::EntItems::EntryList::MrtifItems::MatchRtIfList


class System::RpmItems::RtmapItems::RuleList::EntItems::EntryList::MrtospfItems : public ydk::Entity
{
    public:
        MrtospfItems();
        ~MrtospfItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class MatchRtOspfList; //type: System::RpmItems::RtmapItems::RuleList::EntItems::EntryList::MrtospfItems::MatchRtOspfList

        ydk::YList matchrtospf_list;
        
}; // System::RpmItems::RtmapItems::RuleList::EntItems::EntryList::MrtospfItems


class System::RpmItems::RtmapItems::RuleList::EntItems::EntryList::MrtospfItems::MatchRtOspfList : public ydk::Entity
{
    public:
        MatchRtOspfList();
        ~MatchRtOspfList();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf area; //type: uint32
        ydk::YLeaf name; //type: string
        ydk::YLeaf descr; //type: string
        ydk::YLeaf type; //type: RtmapMatchT

}; // System::RpmItems::RtmapItems::RuleList::EntItems::EntryList::MrtospfItems::MatchRtOspfList


class System::RpmItems::RtmapItems::RuleList::EntItems::EntryList::MrtmaclistItems : public ydk::Entity
{
    public:
        MrtmaclistItems();
        ~MrtmaclistItems();

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
        ydk::YLeaf descr; //type: string
        ydk::YLeaf type; //type: RtmapMatchT
        class RsrtMacListAttItems; //type: System::RpmItems::RtmapItems::RuleList::EntItems::EntryList::MrtmaclistItems::RsrtMacListAttItems

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::RpmItems::RtmapItems::RuleList::EntItems::EntryList::MrtmaclistItems::RsrtMacListAttItems> rsrtmaclistatt_items;
        
}; // System::RpmItems::RtmapItems::RuleList::EntItems::EntryList::MrtmaclistItems


class System::RpmItems::RtmapItems::RuleList::EntItems::EntryList::MrtmaclistItems::RsrtMacListAttItems : public ydk::Entity
{
    public:
        RsrtMacListAttItems();
        ~RsrtMacListAttItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class RsRtMacListAttList; //type: System::RpmItems::RtmapItems::RuleList::EntItems::EntryList::MrtmaclistItems::RsrtMacListAttItems::RsRtMacListAttList

        ydk::YList rsrtmaclistatt_list;
        
}; // System::RpmItems::RtmapItems::RuleList::EntItems::EntryList::MrtmaclistItems::RsrtMacListAttItems


class System::RpmItems::RtmapItems::RuleList::EntItems::EntryList::MrtmaclistItems::RsrtMacListAttItems::RsRtMacListAttList : public ydk::Entity
{
    public:
        RsRtMacListAttList();
        ~RsRtMacListAttList();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf tdn; //type: string
        ydk::YLeaf state; //type: RelnState
        ydk::YLeaf statequal; //type: RelnStateQual
        ydk::YLeaf ttype; //type: RelnTargetType
        ydk::YLeaf rtype; //type: RelnResolverType
        ydk::YLeaf forceresolve; //type: boolean

}; // System::RpmItems::RtmapItems::RuleList::EntItems::EntryList::MrtmaclistItems::RsrtMacListAttItems::RsRtMacListAttList


class System::RpmItems::RtmapItems::RuleList::EntItems::EntryList::ScontinueItems : public ydk::Entity
{
    public:
        ScontinueItems();
        ~ScontinueItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf continue_; //type: uint16
        ydk::YLeaf name; //type: string
        ydk::YLeaf descr; //type: string
        ydk::YLeaf type; //type: RtmapSetT

}; // System::RpmItems::RtmapItems::RuleList::EntItems::EntryList::ScontinueItems


class System::RpmItems::RtmapItems::RuleList::EntItems::EntryList::SregcommItems : public ydk::Entity
{
    public:
        SregcommItems();
        ~SregcommItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf additive; //type: RtmapAdminSt
        ydk::YLeaf nocommattr; //type: RtmapAdminSt
        ydk::YLeaf name; //type: string
        ydk::YLeaf descr; //type: string
        ydk::YLeaf type; //type: RtmapSetT
        ydk::YLeaf setcriteria; //type: RtmapSetCriteria
        class ScommItems; //type: System::RpmItems::RtmapItems::RuleList::EntItems::EntryList::SregcommItems::ScommItems
        class ItemItems; //type: System::RpmItems::RtmapItems::RuleList::EntItems::EntryList::SregcommItems::ItemItems

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::RpmItems::RtmapItems::RuleList::EntItems::EntryList::SregcommItems::ScommItems> scomm_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::RpmItems::RtmapItems::RuleList::EntItems::EntryList::SregcommItems::ItemItems> item_items;
        
}; // System::RpmItems::RtmapItems::RuleList::EntItems::EntryList::SregcommItems


class System::RpmItems::RtmapItems::RuleList::EntItems::EntryList::SregcommItems::ScommItems : public ydk::Entity
{
    public:
        ScommItems();
        ~ScommItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class SetCommItemList; //type: System::RpmItems::RtmapItems::RuleList::EntItems::EntryList::SregcommItems::ScommItems::SetCommItemList

        ydk::YList setcommitem_list;
        
}; // System::RpmItems::RtmapItems::RuleList::EntItems::EntryList::SregcommItems::ScommItems


class System::RpmItems::RtmapItems::RuleList::EntItems::EntryList::SregcommItems::ScommItems::SetCommItemList : public ydk::Entity
{
    public:
        SetCommItemList();
        ~SetCommItemList();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf community; //type: string

}; // System::RpmItems::RtmapItems::RuleList::EntItems::EntryList::SregcommItems::ScommItems::SetCommItemList


class System::RpmItems::RtmapItems::RuleList::EntItems::EntryList::SregcommItems::ItemItems : public ydk::Entity
{
    public:
        ItemItems();
        ~ItemItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class ItemList; //type: System::RpmItems::RtmapItems::RuleList::EntItems::EntryList::SregcommItems::ItemItems::ItemList

        ydk::YList item_list;
        
}; // System::RpmItems::RtmapItems::RuleList::EntItems::EntryList::SregcommItems::ItemItems


class System::RpmItems::RtmapItems::RuleList::EntItems::EntryList::SregcommItems::ItemItems::ItemList : public ydk::Entity
{
    public:
        ItemList();
        ~ItemList();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf community; //type: string
        ydk::YLeaf name; //type: string
        ydk::YLeaf descr; //type: string

}; // System::RpmItems::RtmapItems::RuleList::EntItems::EntryList::SregcommItems::ItemItems::ItemList


class System::RpmItems::RtmapItems::RuleList::EntItems::EntryList::SextcommItems : public ydk::Entity
{
    public:
        SextcommItems();
        ~SextcommItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf additive; //type: RtmapAdminSt
        ydk::YLeaf nocommattr; //type: RtmapAdminSt
        ydk::YLeaf scope; //type: RtextcomScope
        ydk::YLeaf name; //type: string
        ydk::YLeaf descr; //type: string
        ydk::YLeaf type; //type: RtmapSetT
        ydk::YLeaf setcriteria; //type: RtmapSetCriteria
        class ItemItems; //type: System::RpmItems::RtmapItems::RuleList::EntItems::EntryList::SextcommItems::ItemItems
        class ScommItems; //type: System::RpmItems::RtmapItems::RuleList::EntItems::EntryList::SextcommItems::ScommItems

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::RpmItems::RtmapItems::RuleList::EntItems::EntryList::SextcommItems::ItemItems> item_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::RpmItems::RtmapItems::RuleList::EntItems::EntryList::SextcommItems::ScommItems> scomm_items;
        
}; // System::RpmItems::RtmapItems::RuleList::EntItems::EntryList::SextcommItems


class System::RpmItems::RtmapItems::RuleList::EntItems::EntryList::SextcommItems::ItemItems : public ydk::Entity
{
    public:
        ItemItems();
        ~ItemItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class ItemList; //type: System::RpmItems::RtmapItems::RuleList::EntItems::EntryList::SextcommItems::ItemItems::ItemList

        ydk::YList item_list;
        
}; // System::RpmItems::RtmapItems::RuleList::EntItems::EntryList::SextcommItems::ItemItems


class System::RpmItems::RtmapItems::RuleList::EntItems::EntryList::SextcommItems::ItemItems::ItemList : public ydk::Entity
{
    public:
        ItemList();
        ~ItemList();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf scope; //type: RtextcomScope
        ydk::YLeaf community; //type: string
        ydk::YLeaf type; //type: RtextcomType
        ydk::YLeaf name; //type: string
        ydk::YLeaf descr; //type: string

}; // System::RpmItems::RtmapItems::RuleList::EntItems::EntryList::SextcommItems::ItemItems::ItemList


class System::RpmItems::RtmapItems::RuleList::EntItems::EntryList::SextcommItems::ScommItems : public ydk::Entity
{
    public:
        ScommItems();
        ~ScommItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class SetCommItemList; //type: System::RpmItems::RtmapItems::RuleList::EntItems::EntryList::SextcommItems::ScommItems::SetCommItemList

        ydk::YList setcommitem_list;
        
}; // System::RpmItems::RtmapItems::RuleList::EntItems::EntryList::SextcommItems::ScommItems


class System::RpmItems::RtmapItems::RuleList::EntItems::EntryList::SextcommItems::ScommItems::SetCommItemList : public ydk::Entity
{
    public:
        SetCommItemList();
        ~SetCommItemList();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf community; //type: string

}; // System::RpmItems::RtmapItems::RuleList::EntItems::EntryList::SextcommItems::ScommItems::SetCommItemList


class System::RpmItems::RtmapItems::RuleList::EntItems::EntryList::SextcommcostItems : public ydk::Entity
{
    public:
        SextcommcostItems();
        ~SextcommcostItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class SetExtCommCostList; //type: System::RpmItems::RtmapItems::RuleList::EntItems::EntryList::SextcommcostItems::SetExtCommCostList

        ydk::YList setextcommcost_list;
        
}; // System::RpmItems::RtmapItems::RuleList::EntItems::EntryList::SextcommcostItems


class System::RpmItems::RtmapItems::RuleList::EntItems::EntryList::SextcommcostItems::SetExtCommCostList : public ydk::Entity
{
    public:
        SetExtCommCostList();
        ~SetExtCommCostList();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf commcrit; //type: RtmapSetCriteria
        ydk::YLeaf commid; //type: uint8
        ydk::YLeaf commvalue; //type: uint32
        ydk::YLeaf name; //type: string
        ydk::YLeaf descr; //type: string
        ydk::YLeaf type; //type: RtmapSetT
        ydk::YLeaf setcriteria; //type: RtmapSetCriteria

}; // System::RpmItems::RtmapItems::RuleList::EntItems::EntryList::SextcommcostItems::SetExtCommCostList


class System::RpmItems::RtmapItems::RuleList::EntItems::EntryList::SextcommcolorItems : public ydk::Entity
{
    public:
        SextcommcolorItems();
        ~SextcommcolorItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf commvalue; //type: uint32

}; // System::RpmItems::RtmapItems::RuleList::EntItems::EntryList::SextcommcolorItems


class System::RpmItems::RtmapItems::RuleList::EntItems::EntryList::SextcommrmacItems : public ydk::Entity
{
    public:
        SextcommrmacItems();
        ~SextcommrmacItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf commrmac; //type: string

}; // System::RpmItems::RtmapItems::RuleList::EntItems::EntryList::SextcommrmacItems


class System::RpmItems::RtmapItems::RuleList::EntItems::EntryList::ScommlistItems : public ydk::Entity
{
    public:
        ScommlistItems();
        ~ScommlistItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf delete_; //type: RtmapAdminSt
        ydk::YLeaf name; //type: string
        ydk::YLeaf descr; //type: string
        ydk::YLeaf type; //type: RtmapSetT
        ydk::YLeaf setcriteria; //type: RtmapSetCriteria

}; // System::RpmItems::RtmapItems::RuleList::EntItems::EntryList::ScommlistItems


class System::RpmItems::RtmapItems::RuleList::EntItems::EntryList::SextcommlistItems : public ydk::Entity
{
    public:
        SextcommlistItems();
        ~SextcommlistItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf delete_; //type: RtmapAdminSt
        ydk::YLeaf name; //type: string
        ydk::YLeaf descr; //type: string
        ydk::YLeaf type; //type: RtmapSetT
        ydk::YLeaf setcriteria; //type: RtmapSetCriteria

}; // System::RpmItems::RtmapItems::RuleList::EntItems::EntryList::SextcommlistItems


class System::RpmItems::RtmapItems::RuleList::EntItems::EntryList::SrttItems : public ydk::Entity
{
    public:
        SrttItems();
        ~SrttItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf additive; //type: RtmapAdminSt
        ydk::YLeaf name; //type: string
        ydk::YLeaf descr; //type: string
        ydk::YLeaf type; //type: RtmapSetT
        ydk::YLeaf setcriteria; //type: RtmapSetCriteria
        class ItemItems; //type: System::RpmItems::RtmapItems::RuleList::EntItems::EntryList::SrttItems::ItemItems
        class ScommItems; //type: System::RpmItems::RtmapItems::RuleList::EntItems::EntryList::SrttItems::ScommItems

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::RpmItems::RtmapItems::RuleList::EntItems::EntryList::SrttItems::ItemItems> item_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::RpmItems::RtmapItems::RuleList::EntItems::EntryList::SrttItems::ScommItems> scomm_items;
        
}; // System::RpmItems::RtmapItems::RuleList::EntItems::EntryList::SrttItems


class System::RpmItems::RtmapItems::RuleList::EntItems::EntryList::SrttItems::ItemItems : public ydk::Entity
{
    public:
        ItemItems();
        ~ItemItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class ItemList; //type: System::RpmItems::RtmapItems::RuleList::EntItems::EntryList::SrttItems::ItemItems::ItemList

        ydk::YList item_list;
        
}; // System::RpmItems::RtmapItems::RuleList::EntItems::EntryList::SrttItems::ItemItems


class System::RpmItems::RtmapItems::RuleList::EntItems::EntryList::SrttItems::ItemItems::ItemList : public ydk::Entity
{
    public:
        ItemList();
        ~ItemList();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf scope; //type: RtextcomScope
        ydk::YLeaf community; //type: string
        ydk::YLeaf type; //type: RtextcomType
        ydk::YLeaf name; //type: string
        ydk::YLeaf descr; //type: string

}; // System::RpmItems::RtmapItems::RuleList::EntItems::EntryList::SrttItems::ItemItems::ItemList


class System::RpmItems::RtmapItems::RuleList::EntItems::EntryList::SrttItems::ScommItems : public ydk::Entity
{
    public:
        ScommItems();
        ~ScommItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class SetCommItemList; //type: System::RpmItems::RtmapItems::RuleList::EntItems::EntryList::SrttItems::ScommItems::SetCommItemList

        ydk::YList setcommitem_list;
        
}; // System::RpmItems::RtmapItems::RuleList::EntItems::EntryList::SrttItems::ScommItems


class System::RpmItems::RtmapItems::RuleList::EntItems::EntryList::SrttItems::ScommItems::SetCommItemList : public ydk::Entity
{
    public:
        SetCommItemList();
        ~SetCommItemList();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf community; //type: string

}; // System::RpmItems::RtmapItems::RuleList::EntItems::EntryList::SrttItems::ScommItems::SetCommItemList


class System::RpmItems::RtmapItems::RuleList::EntItems::EntryList::SrtdistItems : public ydk::Entity
{
    public:
        SrtdistItems();
        ~SrtdistItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf dist; //type: uint8
        ydk::YLeaf disti; //type: uint8
        ydk::YLeaf distl; //type: uint8
        ydk::YLeaf name; //type: string
        ydk::YLeaf descr; //type: string
        ydk::YLeaf type; //type: RtmapSetT

}; // System::RpmItems::RtmapItems::RuleList::EntItems::EntryList::SrtdistItems


class System::RpmItems::RtmapItems::RuleList::EntItems::EntryList::SrttagItems : public ydk::Entity
{
    public:
        SrttagItems();
        ~SrttagItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf tag; //type: uint32
        ydk::YLeaf name; //type: string
        ydk::YLeaf descr; //type: string
        ydk::YLeaf type; //type: RtmapSetT

}; // System::RpmItems::RtmapItems::RuleList::EntItems::EntryList::SrttagItems


class System::RpmItems::RtmapItems::RuleList::EntItems::EntryList::SweightItems : public ydk::Entity
{
    public:
        SweightItems();
        ~SweightItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf weight; //type: uint16
        ydk::YLeaf name; //type: string
        ydk::YLeaf descr; //type: string
        ydk::YLeaf type; //type: RtmapSetT

}; // System::RpmItems::RtmapItems::RuleList::EntItems::EntryList::SweightItems


class System::RpmItems::RtmapItems::RuleList::EntItems::EntryList::SlblindexItems : public ydk::Entity
{
    public:
        SlblindexItems();
        ~SlblindexItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf index_; //type: uint32
        ydk::YLeaf name; //type: string
        ydk::YLeaf descr; //type: string
        ydk::YLeaf type; //type: RtmapSetT

}; // System::RpmItems::RtmapItems::RuleList::EntItems::EntryList::SlblindexItems


class System::RpmItems::RtmapItems::RuleList::EntItems::EntryList::SprefItems : public ydk::Entity
{
    public:
        SprefItems();
        ~SprefItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf localpref; //type: uint32
        ydk::YLeaf name; //type: string
        ydk::YLeaf descr; //type: string
        ydk::YLeaf type; //type: RtmapSetT

}; // System::RpmItems::RtmapItems::RuleList::EntItems::EntryList::SprefItems


}
}

#endif /* _CISCO_NX_OS_DEVICE_37_ */


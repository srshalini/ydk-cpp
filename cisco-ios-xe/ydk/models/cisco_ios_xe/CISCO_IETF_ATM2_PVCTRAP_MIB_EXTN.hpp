#ifndef _CISCO_IETF_ATM2_PVCTRAP_MIB_EXTN_
#define _CISCO_IETF_ATM2_PVCTRAP_MIB_EXTN_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>

namespace cisco_ios_xe {
namespace CISCO_IETF_ATM2_PVCTRAP_MIB_EXTN {

class CISCOIETFATM2PVCTRAPMIBEXTN : public ydk::Entity
{
    public:
        CISCOIETFATM2PVCTRAPMIBEXTN();
        ~CISCOIETFATM2PVCTRAPMIBEXTN();

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

        class AtmCurrentStatusChangePVclTable; //type: CISCOIETFATM2PVCTRAPMIBEXTN::AtmCurrentStatusChangePVclTable
        class AtmStatusChangePVclRangeTable; //type: CISCOIETFATM2PVCTRAPMIBEXTN::AtmStatusChangePVclRangeTable

        std::shared_ptr<cisco_ios_xe::CISCO_IETF_ATM2_PVCTRAP_MIB_EXTN::CISCOIETFATM2PVCTRAPMIBEXTN::AtmCurrentStatusChangePVclTable> atmcurrentstatuschangepvcltable;
        std::shared_ptr<cisco_ios_xe::CISCO_IETF_ATM2_PVCTRAP_MIB_EXTN::CISCOIETFATM2PVCTRAPMIBEXTN::AtmStatusChangePVclRangeTable> atmstatuschangepvclrangetable;
        
}; // CISCOIETFATM2PVCTRAPMIBEXTN


class CISCOIETFATM2PVCTRAPMIBEXTN::AtmCurrentStatusChangePVclTable : public ydk::Entity
{
    public:
        AtmCurrentStatusChangePVclTable();
        ~AtmCurrentStatusChangePVclTable();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        class AtmCurrentStatusChangePVclEntry; //type: CISCOIETFATM2PVCTRAPMIBEXTN::AtmCurrentStatusChangePVclTable::AtmCurrentStatusChangePVclEntry

        ydk::YList atmcurrentstatuschangepvclentry;
        
}; // CISCOIETFATM2PVCTRAPMIBEXTN::AtmCurrentStatusChangePVclTable


class CISCOIETFATM2PVCTRAPMIBEXTN::AtmCurrentStatusChangePVclTable::AtmCurrentStatusChangePVclEntry : public ydk::Entity
{
    public:
        AtmCurrentStatusChangePVclEntry();
        ~AtmCurrentStatusChangePVclEntry();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        //type: int32 (refers to cisco_ios_xe::IF_MIB::IFMIB::IfTable::IfEntry::ifindex)
        ydk::YLeaf ifindex;
        //type: int32 (refers to cisco_ios_xe::ATM_MIB::ATMMIB::AtmVclTable::AtmVclEntry::atmvclvpi)
        ydk::YLeaf atmvclvpi;
        //type: int32 (refers to cisco_ios_xe::ATM_MIB::ATMMIB::AtmVclTable::AtmVclEntry::atmvclvci)
        ydk::YLeaf atmvclvci;
        ydk::YLeaf atmpvclstatustransition; //type: uint32
        ydk::YLeaf atmpvclstatuschangestart; //type: uint32
        ydk::YLeaf atmpvclstatuschangeend; //type: uint32

}; // CISCOIETFATM2PVCTRAPMIBEXTN::AtmCurrentStatusChangePVclTable::AtmCurrentStatusChangePVclEntry


class CISCOIETFATM2PVCTRAPMIBEXTN::AtmStatusChangePVclRangeTable : public ydk::Entity
{
    public:
        AtmStatusChangePVclRangeTable();
        ~AtmStatusChangePVclRangeTable();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        class AtmStatusChangePVclRangeEntry; //type: CISCOIETFATM2PVCTRAPMIBEXTN::AtmStatusChangePVclRangeTable::AtmStatusChangePVclRangeEntry

        ydk::YList atmstatuschangepvclrangeentry;
        
}; // CISCOIETFATM2PVCTRAPMIBEXTN::AtmStatusChangePVclRangeTable


class CISCOIETFATM2PVCTRAPMIBEXTN::AtmStatusChangePVclRangeTable::AtmStatusChangePVclRangeEntry : public ydk::Entity
{
    public:
        AtmStatusChangePVclRangeEntry();
        ~AtmStatusChangePVclRangeEntry();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        //type: int32 (refers to cisco_ios_xe::IF_MIB::IFMIB::IfTable::IfEntry::ifindex)
        ydk::YLeaf ifindex;
        //type: int32 (refers to cisco_ios_xe::ATM_MIB::ATMMIB::AtmVclTable::AtmVclEntry::atmvclvpi)
        ydk::YLeaf atmvclvpi;
        ydk::YLeaf rangeindex; //type: uint32
        ydk::YLeaf atmpvcllowerrangevalue; //type: int32
        ydk::YLeaf atmpvclhigherrangevalue; //type: int32
        ydk::YLeaf atmpvclrangestatuschangestart; //type: uint32
        ydk::YLeaf atmpvclrangestatuschangeend; //type: uint32

}; // CISCOIETFATM2PVCTRAPMIBEXTN::AtmStatusChangePVclRangeTable::AtmStatusChangePVclRangeEntry


}
}

#endif /* _CISCO_IETF_ATM2_PVCTRAP_MIB_EXTN_ */


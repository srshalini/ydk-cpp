#ifndef _CISCO_PIM_MIB_
#define _CISCO_PIM_MIB_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>


namespace cisco_ios_xe {
namespace CISCO_PIM_MIB {

class CISCOPIMMIB : public ydk::Entity
{
    public:
        CISCOPIMMIB();
        ~CISCOPIMMIB();

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

        class Cpim; //type: CISCOPIMMIB::Cpim
        class CiscoPimMIBNotificationObjects; //type: CISCOPIMMIB::CiscoPimMIBNotificationObjects

        std::shared_ptr<cisco_ios_xe::CISCO_PIM_MIB::CISCOPIMMIB::Cpim> cpim;
        std::shared_ptr<cisco_ios_xe::CISCO_PIM_MIB::CISCOPIMMIB::CiscoPimMIBNotificationObjects> ciscopimmibnotificationobjects;
        
}; // CISCOPIMMIB


class CISCOPIMMIB::Cpim : public ydk::Entity
{
    public:
        Cpim();
        ~Cpim();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf cpiminvalidregistermsgsrcvd; //type: uint32
        ydk::YLeaf cpiminvalidjoinprunemsgsrcvd; //type: uint32
        ydk::YLeaf cpimlasterrortype; //type: CpimLastErrorType
        ydk::YLeaf cpimlasterrororigintype; //type: InetAddressType
        ydk::YLeaf cpimlasterrororigin; //type: binary
        ydk::YLeaf cpimlasterrorgrouptype; //type: InetAddressType
        ydk::YLeaf cpimlasterrorgroup; //type: binary
        ydk::YLeaf cpimlasterrorrptype; //type: InetAddressType
        ydk::YLeaf cpimlasterrorrp; //type: binary
        class CpimLastErrorType;

}; // CISCOPIMMIB::Cpim


class CISCOPIMMIB::CiscoPimMIBNotificationObjects : public ydk::Entity
{
    public:
        CiscoPimMIBNotificationObjects();
        ~CiscoPimMIBNotificationObjects();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf cpimrpmappingchangetype; //type: CpimRPMappingChangeType
        class CpimRPMappingChangeType;

}; // CISCOPIMMIB::CiscoPimMIBNotificationObjects

class CISCOPIMMIB::Cpim::CpimLastErrorType : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf none;
        static const ydk::Enum::YLeaf invalidRegister;
        static const ydk::Enum::YLeaf invalidJoinPrune;

        static int get_enum_value(const std::string & name) {
            if (name == "none") return 1;
            if (name == "invalidRegister") return 2;
            if (name == "invalidJoinPrune") return 3;
            return -1;
        }
};

class CISCOPIMMIB::CiscoPimMIBNotificationObjects::CpimRPMappingChangeType : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf newMapping;
        static const ydk::Enum::YLeaf deletedMapping;
        static const ydk::Enum::YLeaf modifiedOldMapping;
        static const ydk::Enum::YLeaf modifiedNewMapping;

        static int get_enum_value(const std::string & name) {
            if (name == "newMapping") return 1;
            if (name == "deletedMapping") return 2;
            if (name == "modifiedOldMapping") return 3;
            if (name == "modifiedNewMapping") return 4;
            return -1;
        }
};


}
}

#endif /* _CISCO_PIM_MIB_ */


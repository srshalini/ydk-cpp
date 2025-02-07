#ifndef _SNMP_PROXY_MIB_
#define _SNMP_PROXY_MIB_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>


namespace cisco_ios_xe {
namespace SNMP_PROXY_MIB {

class SNMPPROXYMIB : public ydk::Entity
{
    public:
        SNMPPROXYMIB();
        ~SNMPPROXYMIB();

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

        class SnmpProxyTable; //type: SNMPPROXYMIB::SnmpProxyTable

        std::shared_ptr<cisco_ios_xe::SNMP_PROXY_MIB::SNMPPROXYMIB::SnmpProxyTable> snmpproxytable;
        
}; // SNMPPROXYMIB


class SNMPPROXYMIB::SnmpProxyTable : public ydk::Entity
{
    public:
        SnmpProxyTable();
        ~SnmpProxyTable();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        class SnmpProxyEntry; //type: SNMPPROXYMIB::SnmpProxyTable::SnmpProxyEntry

        ydk::YList snmpproxyentry;
        
}; // SNMPPROXYMIB::SnmpProxyTable


class SNMPPROXYMIB::SnmpProxyTable::SnmpProxyEntry : public ydk::Entity
{
    public:
        SnmpProxyEntry();
        ~SnmpProxyEntry();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf snmpproxyname; //type: string
        ydk::YLeaf snmpproxytype; //type: SnmpProxyType
        ydk::YLeaf snmpproxycontextengineid; //type: binary
        ydk::YLeaf snmpproxycontextname; //type: string
        ydk::YLeaf snmpproxytargetparamsin; //type: string
        ydk::YLeaf snmpproxysingletargetout; //type: string
        ydk::YLeaf snmpproxymultipletargetout; //type: string
        ydk::YLeaf snmpproxystoragetype; //type: StorageType
        ydk::YLeaf snmpproxyrowstatus; //type: RowStatus
        class SnmpProxyType;

}; // SNMPPROXYMIB::SnmpProxyTable::SnmpProxyEntry

class SNMPPROXYMIB::SnmpProxyTable::SnmpProxyEntry::SnmpProxyType : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf read;
        static const ydk::Enum::YLeaf write;
        static const ydk::Enum::YLeaf trap;
        static const ydk::Enum::YLeaf inform;

        static int get_enum_value(const std::string & name) {
            if (name == "read") return 1;
            if (name == "write") return 2;
            if (name == "trap") return 3;
            if (name == "inform") return 4;
            return -1;
        }
};


}
}

#endif /* _SNMP_PROXY_MIB_ */


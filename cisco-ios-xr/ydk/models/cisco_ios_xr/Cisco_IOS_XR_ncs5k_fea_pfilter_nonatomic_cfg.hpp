#ifndef _CISCO_IOS_XR_NCS5K_FEA_PFILTER_NONATOMIC_CFG_
#define _CISCO_IOS_XR_NCS5K_FEA_PFILTER_NONATOMIC_CFG_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>

namespace cisco_ios_xr {
namespace Cisco_IOS_XR_ncs5k_fea_pfilter_nonatomic_cfg {

class Hardware : public ydk::Entity
{
    public:
        Hardware();
        ~Hardware();

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

        class AccessList; //type: Hardware::AccessList

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ncs5k_fea_pfilter_nonatomic_cfg::Hardware::AccessList> access_list;
        
}; // Hardware


class Hardware::AccessList : public ydk::Entity
{
    public:
        AccessList();
        ~AccessList();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf atomic_disable; //type: AtomicDisableDfltActn

}; // Hardware::AccessList

class AtomicDisableDfltActn : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf default_action_deny;
        static const ydk::Enum::YLeaf default_action_permit;

        static int get_enum_value(const std::string & name) {
            if (name == "default-action-deny") return 1;
            if (name == "default-action-permit") return 2;
            return -1;
        }
};


}
}

#endif /* _CISCO_IOS_XR_NCS5K_FEA_PFILTER_NONATOMIC_CFG_ */


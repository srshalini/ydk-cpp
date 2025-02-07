#ifndef _CISCO_IOS_XR_CRYPTO_MACSEC_MKA_CFG_
#define _CISCO_IOS_XR_CRYPTO_MACSEC_MKA_CFG_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>

namespace cisco_ios_xr {
namespace Cisco_IOS_XR_crypto_macsec_mka_cfg {

class Macsec : public ydk::Entity
{
    public:
        Macsec();
        ~Macsec();

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

        ydk::YLeaf shutdown; //type: empty
        class PolicyNames; //type: Macsec::PolicyNames

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_crypto_macsec_mka_cfg::Macsec::PolicyNames> policy_names;
        
}; // Macsec


class Macsec::PolicyNames : public ydk::Entity
{
    public:
        PolicyNames();
        ~PolicyNames();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        class PolicyName; //type: Macsec::PolicyNames::PolicyName

        ydk::YList policy_name;
        
}; // Macsec::PolicyNames


class Macsec::PolicyNames::PolicyName : public ydk::Entity
{
    public:
        PolicyName();
        ~PolicyName();

        bool has_data() const override;
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
        ydk::YLeaf delay_protection; //type: empty
        ydk::YLeaf security_policy; //type: MacsecMkaSecurityPolicy
        ydk::YLeaf key_server_priority; //type: uint32
        ydk::YLeaf conf_offset; //type: MacsecMkaConfOffset
        ydk::YLeaf sak_rekey_interval; //type: uint32
        ydk::YLeaf policy_exception; //type: MacsecMkaPolicyException
        ydk::YLeaf window_size; //type: uint32
        ydk::YLeaf cipher_suite; //type: MacsecMkaCipherSuite
        ydk::YLeaf include_icv_indicator; //type: empty
        ydk::YLeaf sak_rekey_interval_sec; //type: uint32
        ydk::YLeaf vlan_tags_in_clear; //type: uint32

}; // Macsec::PolicyNames::PolicyName

class MacsecMkaConfOffset : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf conf_off_set_0;
        static const ydk::Enum::YLeaf conf_off_set_30;
        static const ydk::Enum::YLeaf conf_off_set_50;

        static int get_enum_value(const std::string & name) {
            if (name == "conf-off-set-0") return 0;
            if (name == "conf-off-set-30") return 30;
            if (name == "conf-off-set-50") return 50;
            return -1;
        }
};

class MacsecMkaSecurityPolicy : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf should_secure;
        static const ydk::Enum::YLeaf must_secure;

        static int get_enum_value(const std::string & name) {
            if (name == "should-secure") return 0;
            if (name == "must-secure") return 1;
            return -1;
        }
};

class MacsecMkaPolicyException : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf lacp_in_clear;

        static int get_enum_value(const std::string & name) {
            if (name == "lacp-in-clear") return 1;
            return -1;
        }
};

class MacsecMkaCipherSuite : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf gcm_aes_128;
        static const ydk::Enum::YLeaf gcm_aes_256;
        static const ydk::Enum::YLeaf gcm_aes_xpn_128;
        static const ydk::Enum::YLeaf gcm_aes_xpn_256;

        static int get_enum_value(const std::string & name) {
            if (name == "gcm-aes-128") return 1;
            if (name == "gcm-aes-256") return 2;
            if (name == "gcm-aes-xpn-128") return 3;
            if (name == "gcm-aes-xpn-256") return 4;
            return -1;
        }
};


}
}

#endif /* _CISCO_IOS_XR_CRYPTO_MACSEC_MKA_CFG_ */


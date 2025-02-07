#ifndef _CISCO_IOS_XE_CDP_OPER_
#define _CISCO_IOS_XE_CDP_OPER_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>

namespace cisco_ios_xe {
namespace Cisco_IOS_XE_cdp_oper {

class CdpNeighborDetails : public ydk::Entity
{
    public:
        CdpNeighborDetails();
        ~CdpNeighborDetails();

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

        class CdpNeighborDetail; //type: CdpNeighborDetails::CdpNeighborDetail

        ydk::YList cdp_neighbor_detail;
        
}; // CdpNeighborDetails


class CdpNeighborDetails::CdpNeighborDetail : public ydk::Entity
{
    public:
        CdpNeighborDetail();
        ~CdpNeighborDetail();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf device_id; //type: uint32
        ydk::YLeaf device_name; //type: string
        ydk::YLeaf local_intf_name; //type: string
        ydk::YLeaf port_id; //type: string
        ydk::YLeaf capability; //type: string
        ydk::YLeaf platform_name; //type: string
        ydk::YLeaf version; //type: string
        ydk::YLeaf duplex; //type: CdpDuplex
        ydk::YLeaf adv_version; //type: CdpAdvVersion
        ydk::YLeaf vty_mgmt_domain; //type: string
        ydk::YLeaf native_vlan; //type: uint16
        ydk::YLeaf vvid_tag; //type: uint8
        ydk::YLeaf vvid; //type: uint16
        ydk::YLeaf power; //type: uint32
        ydk::YLeaf unidirectional_mode; //type: CdpUnidirectionalMode
        ydk::YLeaf mgmt_address; //type: string
        ydk::YLeaf ip_address; //type: string
        ydk::YLeaf ipv6_address; //type: string
        ydk::YLeaf clns_address; //type: string
        ydk::YLeaf decnet_addr; //type: string
        ydk::YLeaf novell_addr; //type: string
        ydk::YLeaf second_port_status; //type: string
        ydk::YLeaf table_id; //type: uint16
        class HelloMessage; //type: CdpNeighborDetails::CdpNeighborDetail::HelloMessage
        class PowerRequest; //type: CdpNeighborDetails::CdpNeighborDetail::PowerRequest
        class PowerAvailable; //type: CdpNeighborDetails::CdpNeighborDetail::PowerAvailable
        class SparePair; //type: CdpNeighborDetails::CdpNeighborDetail::SparePair

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_cdp_oper::CdpNeighborDetails::CdpNeighborDetail::HelloMessage> hello_message;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_cdp_oper::CdpNeighborDetails::CdpNeighborDetail::PowerRequest> power_request;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_cdp_oper::CdpNeighborDetails::CdpNeighborDetail::PowerAvailable> power_available;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_cdp_oper::CdpNeighborDetails::CdpNeighborDetail::SparePair> spare_pair;
        
}; // CdpNeighborDetails::CdpNeighborDetail


class CdpNeighborDetails::CdpNeighborDetail::HelloMessage : public ydk::Entity
{
    public:
        HelloMessage();
        ~HelloMessage();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf oui; //type: string
        ydk::YLeaf protocol_id; //type: string
        ydk::YLeaf payload_value; //type: string
        ydk::YLeaf payload_len; //type: uint16

}; // CdpNeighborDetails::CdpNeighborDetail::HelloMessage


class CdpNeighborDetails::CdpNeighborDetail::PowerRequest : public ydk::Entity
{
    public:
        PowerRequest();
        ~PowerRequest();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf power_request_id; //type: uint16
        ydk::YLeaf power_man_id; //type: uint16
        ydk::YLeaf power_request_level; //type: string

}; // CdpNeighborDetails::CdpNeighborDetail::PowerRequest


class CdpNeighborDetails::CdpNeighborDetail::PowerAvailable : public ydk::Entity
{
    public:
        PowerAvailable();
        ~PowerAvailable();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf power_request_id; //type: uint16
        ydk::YLeaf power_man_id; //type: uint16
        ydk::YLeaf power_available; //type: uint32
        ydk::YLeaf power_man_level; //type: uint32

}; // CdpNeighborDetails::CdpNeighborDetail::PowerAvailable


class CdpNeighborDetails::CdpNeighborDetail::SparePair : public ydk::Entity
{
    public:
        SparePair();
        ~SparePair();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf spare_pair_poe; //type: CdpYesNo
        ydk::YLeaf spare_pair_detection_required; //type: CdpYesNo
        ydk::YLeaf spare_pair_pd_config; //type: CdpEnableDisable
        ydk::YLeaf spare_pair_pse_operational; //type: CdpYesNo

}; // CdpNeighborDetails::CdpNeighborDetail::SparePair

class CdpEnableDisable : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf cdp_disable;
        static const ydk::Enum::YLeaf cdp_enable;

        static int get_enum_value(const std::string & name) {
            if (name == "cdp-disable") return 0;
            if (name == "cdp-enable") return 1;
            return -1;
        }
};

class CdpYesNo : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf cdp_no;
        static const ydk::Enum::YLeaf cdp_yes;

        static int get_enum_value(const std::string & name) {
            if (name == "cdp-no") return 0;
            if (name == "cdp-yes") return 1;
            return -1;
        }
};

class CdpDuplex : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf cdp_duplex_unknown;
        static const ydk::Enum::YLeaf cdp_half_duplex;
        static const ydk::Enum::YLeaf cdp_full_duplex;
        static const ydk::Enum::YLeaf cdp_half_duplex_mismatch;
        static const ydk::Enum::YLeaf cdp_full_duplex_mismatch;

        static int get_enum_value(const std::string & name) {
            if (name == "cdp-duplex-unknown") return 0;
            if (name == "cdp-half-duplex") return 1;
            if (name == "cdp-full-duplex") return 2;
            if (name == "cdp-half-duplex-mismatch") return 3;
            if (name == "cdp-full-duplex-mismatch") return 4;
            return -1;
        }
};

class CdpUnidirectionalMode : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf cdp_uni_mode_off;
        static const ydk::Enum::YLeaf cdp_uni_mode_send_only;
        static const ydk::Enum::YLeaf cdp_uni_mode_recv_only;
        static const ydk::Enum::YLeaf cdp_uni_mode_unknown;

        static int get_enum_value(const std::string & name) {
            if (name == "cdp-uni-mode-off") return 0;
            if (name == "cdp-uni-mode-send-only") return 1;
            if (name == "cdp-uni-mode-recv-only") return 2;
            if (name == "cdp-uni-mode-unknown") return 3;
            return -1;
        }
};

class CdpAdvVersion : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf cdp_advertised_none;
        static const ydk::Enum::YLeaf cdp_advertised_v1;
        static const ydk::Enum::YLeaf cdp_advertised_v2;

        static int get_enum_value(const std::string & name) {
            if (name == "cdp-advertised-none") return 0;
            if (name == "cdp-advertised-v1") return 1;
            if (name == "cdp-advertised-v2") return 2;
            return -1;
        }
};


}
}

#endif /* _CISCO_IOS_XE_CDP_OPER_ */


#ifndef _CISCO_IOS_XE_NTP_OPER_
#define _CISCO_IOS_XE_NTP_OPER_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>

namespace cisco_ios_xe {
namespace Cisco_IOS_XE_ntp_oper {

class NtpOperData : public ydk::Entity
{
    public:
        NtpOperData();
        ~NtpOperData();

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

        class NtpStatusInfo; //type: NtpOperData::NtpStatusInfo

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_ntp_oper::NtpOperData::NtpStatusInfo> ntp_status_info; // presence node
        
}; // NtpOperData


class NtpOperData::NtpStatusInfo : public ydk::Entity
{
    public:
        NtpStatusInfo();
        ~NtpStatusInfo();

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

        ydk::YLeaf reftime; //type: string
        ydk::YLeaf sys_poll; //type: uint8
        ydk::YLeaf stratum; //type: uint32
        ydk::YLeaf root_delay; //type: decimal64
        ydk::YLeaf root_disp; //type: decimal64
        ydk::YLeaf offset; //type: decimal64
        ydk::YLeaf freq_drift_ppm; //type: decimal64
        class Refid; //type: NtpOperData::NtpStatusInfo::Refid
        class NtpAssociations; //type: NtpOperData::NtpStatusInfo::NtpAssociations

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_ntp_oper::NtpOperData::NtpStatusInfo::Refid> refid;
        ydk::YList ntp_associations;
        
}; // NtpOperData::NtpStatusInfo


class NtpOperData::NtpStatusInfo::Refid : public ydk::Entity
{
    public:
        Refid();
        ~Refid();

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

        ydk::YLeaf ip_addr; //type: string
        ydk::YLeaf exception_code; //type: uint32
        class KodData; //type: NtpOperData::NtpStatusInfo::Refid::KodData
        class RefClkSrcData; //type: NtpOperData::NtpStatusInfo::Refid::RefClkSrcData

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_ntp_oper::NtpOperData::NtpStatusInfo::Refid::KodData> kod_data;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_ntp_oper::NtpOperData::NtpStatusInfo::Refid::RefClkSrcData> ref_clk_src_data;
        
}; // NtpOperData::NtpStatusInfo::Refid


class NtpOperData::NtpStatusInfo::Refid::KodData : public ydk::Entity
{
    public:
        KodData();
        ~KodData();

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

        ydk::YLeaf kod_type; //type: KissCodeType

}; // NtpOperData::NtpStatusInfo::Refid::KodData


class NtpOperData::NtpStatusInfo::Refid::RefClkSrcData : public ydk::Entity
{
    public:
        RefClkSrcData();
        ~RefClkSrcData();

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

        ydk::YLeaf ref_clk_src_type; //type: RefClockSourceType

}; // NtpOperData::NtpStatusInfo::Refid::RefClkSrcData


class NtpOperData::NtpStatusInfo::NtpAssociations : public ydk::Entity
{
    public:
        NtpAssociations();
        ~NtpAssociations();

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

        ydk::YLeaf assoc_id; //type: uint16
        ydk::YLeaf peer_reach; //type: uint8
        ydk::YLeaf peer_stratum; //type: uint32
        ydk::YLeaf reftime; //type: string
        ydk::YLeaf last_poll_time; //type: uint64
        ydk::YLeaf poll; //type: uint32
        ydk::YLeaf delay; //type: decimal64
        ydk::YLeaf offset; //type: decimal64
        ydk::YLeaf jitter; //type: decimal64
        ydk::YLeaf num_events; //type: uint8
        ydk::YLeaf last_peer_event; //type: PeerEvent
        ydk::YLeaf peer_selection_status; //type: PeerSelectStatus
        ydk::YLeaf peer_authentication_status; //type: PeerAuthStatus
        ydk::YLeaf serv_type; //type: ServerType
        ydk::YLeaf psw_crypto; //type: PeerStatusWord
        class Refid; //type: NtpOperData::NtpStatusInfo::NtpAssociations::Refid
        class NtpAddress; //type: NtpOperData::NtpStatusInfo::NtpAssociations::NtpAddress

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_ntp_oper::NtpOperData::NtpStatusInfo::NtpAssociations::Refid> refid;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_ntp_oper::NtpOperData::NtpStatusInfo::NtpAssociations::NtpAddress> ntp_address;
        
}; // NtpOperData::NtpStatusInfo::NtpAssociations


class NtpOperData::NtpStatusInfo::NtpAssociations::Refid : public ydk::Entity
{
    public:
        Refid();
        ~Refid();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf ip_addr; //type: string
        ydk::YLeaf exception_code; //type: uint32
        class KodData; //type: NtpOperData::NtpStatusInfo::NtpAssociations::Refid::KodData
        class RefClkSrcData; //type: NtpOperData::NtpStatusInfo::NtpAssociations::Refid::RefClkSrcData

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_ntp_oper::NtpOperData::NtpStatusInfo::NtpAssociations::Refid::KodData> kod_data;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_ntp_oper::NtpOperData::NtpStatusInfo::NtpAssociations::Refid::RefClkSrcData> ref_clk_src_data;
        
}; // NtpOperData::NtpStatusInfo::NtpAssociations::Refid


class NtpOperData::NtpStatusInfo::NtpAssociations::Refid::KodData : public ydk::Entity
{
    public:
        KodData();
        ~KodData();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf kod_type; //type: KissCodeType

}; // NtpOperData::NtpStatusInfo::NtpAssociations::Refid::KodData


class NtpOperData::NtpStatusInfo::NtpAssociations::Refid::RefClkSrcData : public ydk::Entity
{
    public:
        RefClkSrcData();
        ~RefClkSrcData();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf ref_clk_src_type; //type: RefClockSourceType

}; // NtpOperData::NtpStatusInfo::NtpAssociations::Refid::RefClkSrcData


class NtpOperData::NtpStatusInfo::NtpAssociations::NtpAddress : public ydk::Entity
{
    public:
        NtpAddress();
        ~NtpAddress();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf ip_addr; //type: string
        ydk::YLeaf vrf_name; //type: string

}; // NtpOperData::NtpStatusInfo::NtpAssociations::NtpAddress

class KissCodeType : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf ntp_ref_acst;
        static const ydk::Enum::YLeaf ntp_ref_auth;
        static const ydk::Enum::YLeaf ntp_ref_auto;
        static const ydk::Enum::YLeaf ntp_ref_bcst;
        static const ydk::Enum::YLeaf ntp_ref_cryp;
        static const ydk::Enum::YLeaf ntp_ref_deny;
        static const ydk::Enum::YLeaf ntp_ref_drop;
        static const ydk::Enum::YLeaf ntp_ref_rstr;
        static const ydk::Enum::YLeaf ntp_ref_init;
        static const ydk::Enum::YLeaf ntp_ref_mcst;
        static const ydk::Enum::YLeaf ntp_ref_nkey;
        static const ydk::Enum::YLeaf ntp_ref_rate;
        static const ydk::Enum::YLeaf ntp_ref_rmot;
        static const ydk::Enum::YLeaf ntp_ref_step;

        static int get_enum_value(const std::string & name) {
            if (name == "ntp-ref-acst") return 0;
            if (name == "ntp-ref-auth") return 1;
            if (name == "ntp-ref-auto") return 2;
            if (name == "ntp-ref-bcst") return 3;
            if (name == "ntp-ref-cryp") return 4;
            if (name == "ntp-ref-deny") return 5;
            if (name == "ntp-ref-drop") return 6;
            if (name == "ntp-ref-rstr") return 7;
            if (name == "ntp-ref-init") return 8;
            if (name == "ntp-ref-mcst") return 9;
            if (name == "ntp-ref-nkey") return 10;
            if (name == "ntp-ref-rate") return 11;
            if (name == "ntp-ref-rmot") return 12;
            if (name == "ntp-ref-step") return 13;
            return -1;
        }
};

class PeerEvent : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf ntp_peer_event_mobilize;
        static const ydk::Enum::YLeaf ntp_peer_event_demobilize;
        static const ydk::Enum::YLeaf ntp_peer_event_unreachable;
        static const ydk::Enum::YLeaf ntp_peer_event_reachable;
        static const ydk::Enum::YLeaf ntp_peer_event_restart;
        static const ydk::Enum::YLeaf ntp_peer_event_reply;
        static const ydk::Enum::YLeaf ntp_peer_event_rate;
        static const ydk::Enum::YLeaf ntp_peer_event_deny;
        static const ydk::Enum::YLeaf ntp_peer_disarmed;
        static const ydk::Enum::YLeaf ntp_peer_armed;
        static const ydk::Enum::YLeaf ntp_peer_event_newpeer;
        static const ydk::Enum::YLeaf ntp_peer_event_clock;
        static const ydk::Enum::YLeaf ntp_peer_event_auth;
        static const ydk::Enum::YLeaf ntp_peer_event_popcorn;
        static const ydk::Enum::YLeaf ntp_peer_event_xleave;
        static const ydk::Enum::YLeaf ntp_peer_event_xerr;
        static const ydk::Enum::YLeaf ntp_peer_event_tai;

        static int get_enum_value(const std::string & name) {
            if (name == "ntp-peer-event-mobilize") return 0;
            if (name == "ntp-peer-event-demobilize") return 1;
            if (name == "ntp-peer-event-unreachable") return 2;
            if (name == "ntp-peer-event-reachable") return 3;
            if (name == "ntp-peer-event-restart") return 4;
            if (name == "ntp-peer-event-reply") return 5;
            if (name == "ntp-peer-event-rate") return 6;
            if (name == "ntp-peer-event-deny") return 7;
            if (name == "ntp-peer-disarmed") return 8;
            if (name == "ntp-peer-armed") return 9;
            if (name == "ntp-peer-event-newpeer") return 10;
            if (name == "ntp-peer-event-clock") return 11;
            if (name == "ntp-peer-event-auth") return 12;
            if (name == "ntp-peer-event-popcorn") return 13;
            if (name == "ntp-peer-event-xleave") return 14;
            if (name == "ntp-peer-event-xerr") return 15;
            if (name == "ntp-peer-event-tai") return 16;
            return -1;
        }
};

class ServerType : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf ntp_peer;
        static const ydk::Enum::YLeaf ntp_server;
        static const ydk::Enum::YLeaf ntp_unknown_type;

        static int get_enum_value(const std::string & name) {
            if (name == "ntp-peer") return 0;
            if (name == "ntp-server") return 1;
            if (name == "ntp-unknown-type") return 2;
            return -1;
        }
};

class RefidPktTypeInfo : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf ntp_ref_state_kod;
        static const ydk::Enum::YLeaf ntp_ref_state_resolved_with_clk_source;
        static const ydk::Enum::YLeaf ntp_ref_state_resolved_with_ip_addr;
        static const ydk::Enum::YLeaf ntp_ref_state_bad_state;

        static int get_enum_value(const std::string & name) {
            if (name == "ntp-ref-state-kod") return 0;
            if (name == "ntp-ref-state-resolved-with-clk-source") return 1;
            if (name == "ntp-ref-state-resolved-with-ip-addr") return 2;
            if (name == "ntp-ref-state-bad-state") return 3;
            return -1;
        }
};

class PeerStatusWord : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf crypto_flag_sig;
        static const ydk::Enum::YLeaf crypto_flag_leap;
        static const ydk::Enum::YLeaf crypto_flag_vrfy;
        static const ydk::Enum::YLeaf crypto_flag_cook;
        static const ydk::Enum::YLeaf crypto_flag_auto;
        static const ydk::Enum::YLeaf crypto_flag_cert;

        static int get_enum_value(const std::string & name) {
            if (name == "crypto-flag-sig") return 0;
            if (name == "crypto-flag-leap") return 1;
            if (name == "crypto-flag-vrfy") return 2;
            if (name == "crypto-flag-cook") return 3;
            if (name == "crypto-flag-auto") return 4;
            if (name == "crypto-flag-cert") return 5;
            return -1;
        }
};

class PeerSelectStatus : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf ntp_peer_as_backup;
        static const ydk::Enum::YLeaf ntp_peer_rejected;
        static const ydk::Enum::YLeaf ntp_peer_false_ticker;
        static const ydk::Enum::YLeaf ntp_peer_excess;
        static const ydk::Enum::YLeaf ntp_peer_outlier;
        static const ydk::Enum::YLeaf ntp_peer_candidate;
        static const ydk::Enum::YLeaf ntp_peer_sys_peer;
        static const ydk::Enum::YLeaf ntp_peer_pps_peer;

        static int get_enum_value(const std::string & name) {
            if (name == "ntp-peer-as-backup") return 0;
            if (name == "ntp-peer-rejected") return 1;
            if (name == "ntp-peer-false-ticker") return 2;
            if (name == "ntp-peer-excess") return 3;
            if (name == "ntp-peer-outlier") return 4;
            if (name == "ntp-peer-candidate") return 5;
            if (name == "ntp-peer-sys-peer") return 6;
            if (name == "ntp-peer-pps-peer") return 7;
            return -1;
        }
};

class RefClockSourceType : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf ntp_ref_goes;
        static const ydk::Enum::YLeaf ntp_ref_gps;
        static const ydk::Enum::YLeaf ntp_ref_gal;
        static const ydk::Enum::YLeaf ntp_ref_pps;
        static const ydk::Enum::YLeaf ntp_ref_irig;
        static const ydk::Enum::YLeaf ntp_ref_wwvb;
        static const ydk::Enum::YLeaf ntp_ref_dcf;
        static const ydk::Enum::YLeaf ntp_ref_hbg;
        static const ydk::Enum::YLeaf ntp_ref_msf;
        static const ydk::Enum::YLeaf ntp_ref_jjy;
        static const ydk::Enum::YLeaf ntp_ref_lorc;
        static const ydk::Enum::YLeaf ntp_ref_tdf;
        static const ydk::Enum::YLeaf ntp_ref_chu;
        static const ydk::Enum::YLeaf ntp_ref_wwv;
        static const ydk::Enum::YLeaf ntp_ref_wwvh;
        static const ydk::Enum::YLeaf ntp_ref_nist;
        static const ydk::Enum::YLeaf ntp_ref_acts;
        static const ydk::Enum::YLeaf ntp_ref_usno;
        static const ydk::Enum::YLeaf ntp_ref_ptb;

        static int get_enum_value(const std::string & name) {
            if (name == "ntp-ref-goes") return 0;
            if (name == "ntp-ref-gps") return 1;
            if (name == "ntp-ref-gal") return 2;
            if (name == "ntp-ref-pps") return 3;
            if (name == "ntp-ref-irig") return 4;
            if (name == "ntp-ref-wwvb") return 5;
            if (name == "ntp-ref-dcf") return 6;
            if (name == "ntp-ref-hbg") return 7;
            if (name == "ntp-ref-msf") return 8;
            if (name == "ntp-ref-jjy") return 9;
            if (name == "ntp-ref-lorc") return 10;
            if (name == "ntp-ref-tdf") return 11;
            if (name == "ntp-ref-chu") return 12;
            if (name == "ntp-ref-wwv") return 13;
            if (name == "ntp-ref-wwvh") return 14;
            if (name == "ntp-ref-nist") return 15;
            if (name == "ntp-ref-acts") return 16;
            if (name == "ntp-ref-usno") return 17;
            if (name == "ntp-ref-ptb") return 18;
            return -1;
        }
};

class PeerAuthStatus : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf ntp_auth_ok;
        static const ydk::Enum::YLeaf ntp_auth_bad_auth;
        static const ydk::Enum::YLeaf ntp_auth_auth_not_configured;
        static const ydk::Enum::YLeaf ntp_auth_status_not_available;
        static const ydk::Enum::YLeaf ntp_auth_none;
        static const ydk::Enum::YLeaf ntp_auth_crypto;

        static int get_enum_value(const std::string & name) {
            if (name == "ntp-auth-ok") return 0;
            if (name == "ntp-auth-bad-auth") return 1;
            if (name == "ntp-auth-auth-not-configured") return 2;
            if (name == "ntp-auth-status-not-available") return 3;
            if (name == "ntp-auth-none") return 4;
            if (name == "ntp-auth-crypto") return 5;
            return -1;
        }
};


}
}

#endif /* _CISCO_IOS_XE_NTP_OPER_ */


#ifndef _CISCO_IOS_XR_CRYPTO_MACSEC_MKA_OPER_
#define _CISCO_IOS_XR_CRYPTO_MACSEC_MKA_OPER_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>

namespace cisco_ios_xr {
namespace Cisco_IOS_XR_crypto_macsec_mka_oper {

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

        class Mka; //type: Macsec::Mka

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_crypto_macsec_mka_oper::Macsec::Mka> mka;
        
}; // Macsec


class Macsec::Mka : public ydk::Entity
{
    public:
        Mka();
        ~Mka();

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

        class Interfaces; //type: Macsec::Mka::Interfaces

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_crypto_macsec_mka_oper::Macsec::Mka::Interfaces> interfaces;
        
}; // Macsec::Mka


class Macsec::Mka::Interfaces : public ydk::Entity
{
    public:
        Interfaces();
        ~Interfaces();

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

        class Interface; //type: Macsec::Mka::Interfaces::Interface

        ydk::YList interface;
        
}; // Macsec::Mka::Interfaces


class Macsec::Mka::Interfaces::Interface : public ydk::Entity
{
    public:
        Interface();
        ~Interface();

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
        class Session; //type: Macsec::Mka::Interfaces::Interface::Session
        class Info; //type: Macsec::Mka::Interfaces::Interface::Info

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_crypto_macsec_mka_oper::Macsec::Mka::Interfaces::Interface::Session> session;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_crypto_macsec_mka_oper::Macsec::Mka::Interfaces::Interface::Info> info;
        
}; // Macsec::Mka::Interfaces::Interface


class Macsec::Mka::Interfaces::Interface::Session : public ydk::Entity
{
    public:
        Session();
        ~Session();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class SessionSummary; //type: Macsec::Mka::Interfaces::Interface::Session::SessionSummary
        class Vp; //type: Macsec::Mka::Interfaces::Interface::Session::Vp
        class Ca; //type: Macsec::Mka::Interfaces::Interface::Session::Ca

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_crypto_macsec_mka_oper::Macsec::Mka::Interfaces::Interface::Session::SessionSummary> session_summary;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_crypto_macsec_mka_oper::Macsec::Mka::Interfaces::Interface::Session::Vp> vp;
        ydk::YList ca;
        
}; // Macsec::Mka::Interfaces::Interface::Session


class Macsec::Mka::Interfaces::Interface::Session::SessionSummary : public ydk::Entity
{
    public:
        SessionSummary();
        ~SessionSummary();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf interface_name; //type: string
        ydk::YLeaf inherited_policy; //type: boolean
        ydk::YLeaf policy; //type: string
        ydk::YLeaf priority; //type: uint32
        ydk::YLeaf my_mac; //type: string
        ydk::YLeaf delay_protection; //type: boolean
        ydk::YLeaf replay_protect; //type: boolean
        ydk::YLeaf window_size; //type: uint32
        ydk::YLeaf include_icv_indicator; //type: boolean
        ydk::YLeaf confidentiality_offset; //type: uint32
        ydk::YLeaf algo_agility; //type: uint32
        ydk::YLeaf capability; //type: uint32
        ydk::YLeaf mka_cipher_suite; //type: string
        ydk::YLeaf configured_mac_sec_cipher_suite; //type: string
        ydk::YLeaf mac_sec_desired; //type: boolean
        class OuterTag; //type: Macsec::Mka::Interfaces::Interface::Session::SessionSummary::OuterTag
        class InnerTag; //type: Macsec::Mka::Interfaces::Interface::Session::SessionSummary::InnerTag

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_crypto_macsec_mka_oper::Macsec::Mka::Interfaces::Interface::Session::SessionSummary::OuterTag> outer_tag;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_crypto_macsec_mka_oper::Macsec::Mka::Interfaces::Interface::Session::SessionSummary::InnerTag> inner_tag;
        
}; // Macsec::Mka::Interfaces::Interface::Session::SessionSummary


class Macsec::Mka::Interfaces::Interface::Session::SessionSummary::OuterTag : public ydk::Entity
{
    public:
        OuterTag();
        ~OuterTag();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf ether_type; //type: uint16
        ydk::YLeaf priority; //type: uint8
        ydk::YLeaf cfi; //type: uint8
        ydk::YLeaf vlan_id; //type: uint16

}; // Macsec::Mka::Interfaces::Interface::Session::SessionSummary::OuterTag


class Macsec::Mka::Interfaces::Interface::Session::SessionSummary::InnerTag : public ydk::Entity
{
    public:
        InnerTag();
        ~InnerTag();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf ether_type; //type: uint16
        ydk::YLeaf priority; //type: uint8
        ydk::YLeaf cfi; //type: uint8
        ydk::YLeaf vlan_id; //type: uint16

}; // Macsec::Mka::Interfaces::Interface::Session::SessionSummary::InnerTag


class Macsec::Mka::Interfaces::Interface::Session::Vp : public ydk::Entity
{
    public:
        Vp();
        ~Vp();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf my_sci; //type: string
        ydk::YLeaf virtual_port_id; //type: uint32
        ydk::YLeaf latest_rx; //type: boolean
        ydk::YLeaf latest_tx; //type: boolean
        ydk::YLeaf latest_an; //type: uint32
        ydk::YLeaf latest_ki; //type: string
        ydk::YLeaf latest_kn; //type: uint32
        ydk::YLeaf old_rx; //type: boolean
        ydk::YLeaf old_tx; //type: boolean
        ydk::YLeaf old_an; //type: uint32
        ydk::YLeaf old_ki; //type: string
        ydk::YLeaf old_kn; //type: uint32
        ydk::YLeaf wait_time; //type: uint32
        ydk::YLeaf retire_time; //type: uint32
        ydk::YLeaf macsec_cipher_suite; //type: MacsecCipherSuite
        ydk::YLeaf ssci; //type: uint32
        ydk::YLeaf time_to_sak_rekey; //type: string
        class FallbackKeepalive; //type: Macsec::Mka::Interfaces::Interface::Session::Vp::FallbackKeepalive

        ydk::YList fallback_keepalive;
        
}; // Macsec::Mka::Interfaces::Interface::Session::Vp


class Macsec::Mka::Interfaces::Interface::Session::Vp::FallbackKeepalive : public ydk::Entity
{
    public:
        FallbackKeepalive();
        ~FallbackKeepalive();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf ckn; //type: string
        ydk::YLeaf mi; //type: string
        ydk::YLeaf mn; //type: uint32
        class PeersStatus; //type: Macsec::Mka::Interfaces::Interface::Session::Vp::FallbackKeepalive::PeersStatus

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_crypto_macsec_mka_oper::Macsec::Mka::Interfaces::Interface::Session::Vp::FallbackKeepalive::PeersStatus> peers_status;
        
}; // Macsec::Mka::Interfaces::Interface::Session::Vp::FallbackKeepalive


class Macsec::Mka::Interfaces::Interface::Session::Vp::FallbackKeepalive::PeersStatus : public ydk::Entity
{
    public:
        PeersStatus();
        ~PeersStatus();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf tx_mkpdu_timestamp; //type: string
        ydk::YLeaf peer_count; //type: uint32
        class Peer; //type: Macsec::Mka::Interfaces::Interface::Session::Vp::FallbackKeepalive::PeersStatus::Peer

        ydk::YList peer;
        
}; // Macsec::Mka::Interfaces::Interface::Session::Vp::FallbackKeepalive::PeersStatus


class Macsec::Mka::Interfaces::Interface::Session::Vp::FallbackKeepalive::PeersStatus::Peer : public ydk::Entity
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

        ydk::YLeaf sci; //type: string
        class PeerData; //type: Macsec::Mka::Interfaces::Interface::Session::Vp::FallbackKeepalive::PeersStatus::Peer::PeerData

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_crypto_macsec_mka_oper::Macsec::Mka::Interfaces::Interface::Session::Vp::FallbackKeepalive::PeersStatus::Peer::PeerData> peer_data;
        
}; // Macsec::Mka::Interfaces::Interface::Session::Vp::FallbackKeepalive::PeersStatus::Peer


class Macsec::Mka::Interfaces::Interface::Session::Vp::FallbackKeepalive::PeersStatus::Peer::PeerData : public ydk::Entity
{
    public:
        PeerData();
        ~PeerData();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf mi; //type: string
        ydk::YLeaf icv_status; //type: string
        ydk::YLeaf icv_check_timestamp; //type: string

}; // Macsec::Mka::Interfaces::Interface::Session::Vp::FallbackKeepalive::PeersStatus::Peer::PeerData


class Macsec::Mka::Interfaces::Interface::Session::Ca : public ydk::Entity
{
    public:
        Ca();
        ~Ca();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf is_key_server; //type: boolean
        ydk::YLeaf status; //type: uint32
        ydk::YLeaf num_live_peers; //type: uint32
        ydk::YLeaf first_ca; //type: boolean
        ydk::YLeaf peer_sci; //type: string
        ydk::YLeaf num_live_peers_responded; //type: uint32
        ydk::YLeaf ckn; //type: string
        ydk::YLeaf my_mi; //type: string
        ydk::YLeaf my_mn; //type: uint32
        ydk::YLeaf authenticator; //type: boolean
        ydk::YLeaf status_description; //type: string
        ydk::YLeaf authentication_mode; //type: string
        ydk::YLeaf key_chain; //type: string
        class PeersStatus; //type: Macsec::Mka::Interfaces::Interface::Session::Ca::PeersStatus
        class LivePeer; //type: Macsec::Mka::Interfaces::Interface::Session::Ca::LivePeer
        class PotentialPeer; //type: Macsec::Mka::Interfaces::Interface::Session::Ca::PotentialPeer
        class DormantPeer; //type: Macsec::Mka::Interfaces::Interface::Session::Ca::DormantPeer

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_crypto_macsec_mka_oper::Macsec::Mka::Interfaces::Interface::Session::Ca::PeersStatus> peers_status;
        ydk::YList live_peer;
        ydk::YList potential_peer;
        ydk::YList dormant_peer;
        
}; // Macsec::Mka::Interfaces::Interface::Session::Ca


class Macsec::Mka::Interfaces::Interface::Session::Ca::PeersStatus : public ydk::Entity
{
    public:
        PeersStatus();
        ~PeersStatus();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf tx_mkpdu_timestamp; //type: string
        ydk::YLeaf peer_count; //type: uint32
        class Peer; //type: Macsec::Mka::Interfaces::Interface::Session::Ca::PeersStatus::Peer

        ydk::YList peer;
        
}; // Macsec::Mka::Interfaces::Interface::Session::Ca::PeersStatus


class Macsec::Mka::Interfaces::Interface::Session::Ca::PeersStatus::Peer : public ydk::Entity
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

        ydk::YLeaf sci; //type: string
        class PeerData; //type: Macsec::Mka::Interfaces::Interface::Session::Ca::PeersStatus::Peer::PeerData

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_crypto_macsec_mka_oper::Macsec::Mka::Interfaces::Interface::Session::Ca::PeersStatus::Peer::PeerData> peer_data;
        
}; // Macsec::Mka::Interfaces::Interface::Session::Ca::PeersStatus::Peer


class Macsec::Mka::Interfaces::Interface::Session::Ca::PeersStatus::Peer::PeerData : public ydk::Entity
{
    public:
        PeerData();
        ~PeerData();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf mi; //type: string
        ydk::YLeaf icv_status; //type: string
        ydk::YLeaf icv_check_timestamp; //type: string

}; // Macsec::Mka::Interfaces::Interface::Session::Ca::PeersStatus::Peer::PeerData


class Macsec::Mka::Interfaces::Interface::Session::Ca::LivePeer : public ydk::Entity
{
    public:
        LivePeer();
        ~LivePeer();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf mi; //type: string
        ydk::YLeaf sci; //type: string
        ydk::YLeaf mn; //type: uint32
        ydk::YLeaf priority; //type: uint32
        ydk::YLeaf ssci; //type: uint32

}; // Macsec::Mka::Interfaces::Interface::Session::Ca::LivePeer


class Macsec::Mka::Interfaces::Interface::Session::Ca::PotentialPeer : public ydk::Entity
{
    public:
        PotentialPeer();
        ~PotentialPeer();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf mi; //type: string
        ydk::YLeaf sci; //type: string
        ydk::YLeaf mn; //type: uint32
        ydk::YLeaf priority; //type: uint32
        ydk::YLeaf ssci; //type: uint32

}; // Macsec::Mka::Interfaces::Interface::Session::Ca::PotentialPeer


class Macsec::Mka::Interfaces::Interface::Session::Ca::DormantPeer : public ydk::Entity
{
    public:
        DormantPeer();
        ~DormantPeer();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf mi; //type: string
        ydk::YLeaf sci; //type: string
        ydk::YLeaf mn; //type: uint32
        ydk::YLeaf priority; //type: uint32
        ydk::YLeaf ssci; //type: uint32

}; // Macsec::Mka::Interfaces::Interface::Session::Ca::DormantPeer


class Macsec::Mka::Interfaces::Interface::Info : public ydk::Entity
{
    public:
        Info();
        ~Info();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class InterfaceSummary; //type: Macsec::Mka::Interfaces::Interface::Info::InterfaceSummary

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_crypto_macsec_mka_oper::Macsec::Mka::Interfaces::Interface::Info::InterfaceSummary> interface_summary;
        
}; // Macsec::Mka::Interfaces::Interface::Info


class Macsec::Mka::Interfaces::Interface::Info::InterfaceSummary : public ydk::Entity
{
    public:
        InterfaceSummary();
        ~InterfaceSummary();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf interface_name; //type: string
        ydk::YLeaf short_name; //type: string
        ydk::YLeaf key_chain; //type: string
        ydk::YLeaf policy; //type: string
        ydk::YLeaf macsec_svc_port; //type: boolean
        ydk::YLeaf macsec_svc_port_type; //type: MacsecServicePort
        ydk::YLeaf svcport_short_name; //type: string
        ydk::YLeaf mka_mode; //type: MkaAuthenticationMode
        ydk::YLeaf fallback_keychain; //type: string
        ydk::YLeaf macsec_shutdown; //type: boolean

}; // Macsec::Mka::Interfaces::Interface::Info::InterfaceSummary

class MacsecCipherSuite : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf cipher_suite_none;
        static const ydk::Enum::YLeaf cipher_suite_gcm_aes_128;
        static const ydk::Enum::YLeaf cipher_suite_gcm_aes_256;
        static const ydk::Enum::YLeaf cipher_suite_gcm_aes_128_xpn;
        static const ydk::Enum::YLeaf cipher_suite_gcm_aes_256_xpn;

        static int get_enum_value(const std::string & name) {
            if (name == "cipher-suite-none") return 0;
            if (name == "cipher-suite-gcm-aes-128") return 1;
            if (name == "cipher-suite-gcm-aes-256") return 2;
            if (name == "cipher-suite-gcm-aes-128-xpn") return 3;
            if (name == "cipher-suite-gcm-aes-256-xpn") return 4;
            return -1;
        }
};

class MkaAuthenticationMode : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf auth_mode_invalid;
        static const ydk::Enum::YLeaf auth_mode_psk;
        static const ydk::Enum::YLeaf auth_mode_eap;

        static int get_enum_value(const std::string & name) {
            if (name == "auth-mode-invalid") return 0;
            if (name == "auth-mode-psk") return 1;
            if (name == "auth-mode-eap") return 2;
            return -1;
        }
};

class MacsecServicePort : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf macsec_service_port_none;
        static const ydk::Enum::YLeaf macsec_service_port_encryption;
        static const ydk::Enum::YLeaf macsec_service_port_decryption;

        static int get_enum_value(const std::string & name) {
            if (name == "macsec-service-port-none") return 0;
            if (name == "macsec-service-port-encryption") return 1;
            if (name == "macsec-service-port-decryption") return 2;
            return -1;
        }
};


}
}

#endif /* _CISCO_IOS_XR_CRYPTO_MACSEC_MKA_OPER_ */


#ifndef _CISCO_IOS_XR_MPLS_TE_OPER_46_
#define _CISCO_IOS_XR_MPLS_TE_OPER_46_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>

#include "Cisco_IOS_XR_mpls_te_oper_36.hpp"
#include "Cisco_IOS_XR_mpls_te_oper_38.hpp"
#include "Cisco_IOS_XR_mpls_te_oper_45.hpp"

namespace cisco_ios_xr {
namespace Cisco_IOS_XR_mpls_te_oper {


class MplsTeStandby::P2pP2mpTunnel::NniTunnels::NniTunnel::TunnelRestorationLsp::S2l::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetP2pTe::TunnelId : public ydk::Entity
{
    public:
        TunnelId();
        ~TunnelId();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf entry; //type: uint16

}; // MplsTeStandby::P2pP2mpTunnel::NniTunnels::NniTunnel::TunnelRestorationLsp::S2l::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetP2pTe::TunnelId


class MplsTeStandby::P2pP2mpTunnel::NniTunnels::NniTunnel::TunnelRestorationLsp::S2l::ActivePathOption::PathCalculationError : public ydk::Entity
{
    public:
        PathCalculationError();
        ~PathCalculationError();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf error_message; //type: string
        ydk::YLeaf lsp_mode; //type: MplsTeLspMode
        ydk::YLeaf log_time; //type: uint32

}; // MplsTeStandby::P2pP2mpTunnel::NniTunnels::NniTunnel::TunnelRestorationLsp::S2l::ActivePathOption::PathCalculationError


class MplsTeStandby::P2pP2mpTunnel::NniTunnels::NniTunnel::TunnelRestorationLsp::S2l::ActivePathOption::RemergeError : public ydk::Entity
{
    public:
        RemergeError();
        ~RemergeError();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf error_message; //type: string
        ydk::YLeaf lsp_mode; //type: MplsTeLspMode
        ydk::YLeaf log_time; //type: uint32

}; // MplsTeStandby::P2pP2mpTunnel::NniTunnels::NniTunnel::TunnelRestorationLsp::S2l::ActivePathOption::RemergeError


class MplsTeStandby::P2pP2mpTunnel::NniTunnels::NniTunnel::TunnelRestorationLsp::S2l::ActivePathOption::SignallingError : public ydk::Entity
{
    public:
        SignallingError();
        ~SignallingError();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf error_node; //type: uint32
        ydk::YLeaf error; //type: uint8
        ydk::YLeaf sub_code; //type: uint16
        ydk::YLeaf lsp_mode; //type: MplsTeLspMode
        ydk::YLeaf log_time; //type: uint32
        ydk::YLeaf signalling_lsp_id; //type: uint16
        ydk::YLeaf error_message; //type: string
        ydk::YLeaf reverse_lsp; //type: boolean

}; // MplsTeStandby::P2pP2mpTunnel::NniTunnels::NniTunnel::TunnelRestorationLsp::S2l::ActivePathOption::SignallingError


class MplsTeStandby::P2pP2mpTunnel::NniTunnels::NniTunnel::TunnelRestorationLsp::S2l::OutXro : public ydk::Entity
{
    public:
        OutXro();
        ~OutXro();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf mutual_diversity_flag; //type: boolean
        class XroSubobject; //type: MplsTeStandby::P2pP2mpTunnel::NniTunnels::NniTunnel::TunnelRestorationLsp::S2l::OutXro::XroSubobject

        ydk::YList xro_subobject;
        
}; // MplsTeStandby::P2pP2mpTunnel::NniTunnels::NniTunnel::TunnelRestorationLsp::S2l::OutXro


class MplsTeStandby::P2pP2mpTunnel::NniTunnels::NniTunnel::TunnelRestorationLsp::S2l::OutXro::XroSubobject : public ydk::Entity
{
    public:
        XroSubobject();
        ~XroSubobject();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf type; //type: TeXroSubobj
        class Ipv4Subobject; //type: MplsTeStandby::P2pP2mpTunnel::NniTunnels::NniTunnel::TunnelRestorationLsp::S2l::OutXro::XroSubobject::Ipv4Subobject
        class Ipv6Subobject; //type: MplsTeStandby::P2pP2mpTunnel::NniTunnels::NniTunnel::TunnelRestorationLsp::S2l::OutXro::XroSubobject::Ipv6Subobject
        class UnnumberedSubobject; //type: MplsTeStandby::P2pP2mpTunnel::NniTunnels::NniTunnel::TunnelRestorationLsp::S2l::OutXro::XroSubobject::UnnumberedSubobject
        class AsSubobject; //type: MplsTeStandby::P2pP2mpTunnel::NniTunnels::NniTunnel::TunnelRestorationLsp::S2l::OutXro::XroSubobject::AsSubobject
        class SrlgSubobject; //type: MplsTeStandby::P2pP2mpTunnel::NniTunnels::NniTunnel::TunnelRestorationLsp::S2l::OutXro::XroSubobject::SrlgSubobject
        class LspSubobject; //type: MplsTeStandby::P2pP2mpTunnel::NniTunnels::NniTunnel::TunnelRestorationLsp::S2l::OutXro::XroSubobject::LspSubobject

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::P2pP2mpTunnel::NniTunnels::NniTunnel::TunnelRestorationLsp::S2l::OutXro::XroSubobject::Ipv4Subobject> ipv4_subobject;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::P2pP2mpTunnel::NniTunnels::NniTunnel::TunnelRestorationLsp::S2l::OutXro::XroSubobject::Ipv6Subobject> ipv6_subobject;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::P2pP2mpTunnel::NniTunnels::NniTunnel::TunnelRestorationLsp::S2l::OutXro::XroSubobject::UnnumberedSubobject> unnumbered_subobject;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::P2pP2mpTunnel::NniTunnels::NniTunnel::TunnelRestorationLsp::S2l::OutXro::XroSubobject::AsSubobject> as_subobject;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::P2pP2mpTunnel::NniTunnels::NniTunnel::TunnelRestorationLsp::S2l::OutXro::XroSubobject::SrlgSubobject> srlg_subobject;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::P2pP2mpTunnel::NniTunnels::NniTunnel::TunnelRestorationLsp::S2l::OutXro::XroSubobject::LspSubobject> lsp_subobject;
        
}; // MplsTeStandby::P2pP2mpTunnel::NniTunnels::NniTunnel::TunnelRestorationLsp::S2l::OutXro::XroSubobject


class MplsTeStandby::P2pP2mpTunnel::NniTunnels::NniTunnel::TunnelRestorationLsp::S2l::OutXro::XroSubobject::Ipv4Subobject : public ydk::Entity
{
    public:
        Ipv4Subobject();
        ~Ipv4Subobject();

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
        ydk::YLeaf prefix_len; //type: uint8
        ydk::YLeaf attribute; //type: TeXroAttribute
        ydk::YLeaf exclusion_type; //type: TeXroExclusion

}; // MplsTeStandby::P2pP2mpTunnel::NniTunnels::NniTunnel::TunnelRestorationLsp::S2l::OutXro::XroSubobject::Ipv4Subobject


class MplsTeStandby::P2pP2mpTunnel::NniTunnels::NniTunnel::TunnelRestorationLsp::S2l::OutXro::XroSubobject::Ipv6Subobject : public ydk::Entity
{
    public:
        Ipv6Subobject();
        ~Ipv6Subobject();

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
        ydk::YLeaf prefix_len; //type: uint8
        ydk::YLeaf attribute; //type: TeXroAttribute
        ydk::YLeaf exclusion_type; //type: TeXroExclusion

}; // MplsTeStandby::P2pP2mpTunnel::NniTunnels::NniTunnel::TunnelRestorationLsp::S2l::OutXro::XroSubobject::Ipv6Subobject


class MplsTeStandby::P2pP2mpTunnel::NniTunnels::NniTunnel::TunnelRestorationLsp::S2l::OutXro::XroSubobject::UnnumberedSubobject : public ydk::Entity
{
    public:
        UnnumberedSubobject();
        ~UnnumberedSubobject();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf te_router_id; //type: string
        ydk::YLeaf interface_id; //type: uint32
        ydk::YLeaf attribute; //type: TeXroAttribute
        ydk::YLeaf exclusion_type; //type: TeXroExclusion

}; // MplsTeStandby::P2pP2mpTunnel::NniTunnels::NniTunnel::TunnelRestorationLsp::S2l::OutXro::XroSubobject::UnnumberedSubobject


class MplsTeStandby::P2pP2mpTunnel::NniTunnels::NniTunnel::TunnelRestorationLsp::S2l::OutXro::XroSubobject::AsSubobject : public ydk::Entity
{
    public:
        AsSubobject();
        ~AsSubobject();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf as_number; //type: uint16

}; // MplsTeStandby::P2pP2mpTunnel::NniTunnels::NniTunnel::TunnelRestorationLsp::S2l::OutXro::XroSubobject::AsSubobject


class MplsTeStandby::P2pP2mpTunnel::NniTunnels::NniTunnel::TunnelRestorationLsp::S2l::OutXro::XroSubobject::SrlgSubobject : public ydk::Entity
{
    public:
        SrlgSubobject();
        ~SrlgSubobject();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf srlg_id; //type: uint32
        ydk::YLeaf exclusion_type; //type: TeXroExclusion

}; // MplsTeStandby::P2pP2mpTunnel::NniTunnels::NniTunnel::TunnelRestorationLsp::S2l::OutXro::XroSubobject::SrlgSubobject


class MplsTeStandby::P2pP2mpTunnel::NniTunnels::NniTunnel::TunnelRestorationLsp::S2l::OutXro::XroSubobject::LspSubobject : public ydk::Entity
{
    public:
        LspSubobject();
        ~LspSubobject();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf ignore_lsp_id; //type: boolean
        ydk::YLeaf processing_node_exception; //type: boolean
        ydk::YLeaf penultimate_node_exception; //type: boolean
        ydk::YLeaf destination_node_exception; //type: boolean
        ydk::YLeaf exclusion_type; //type: TeXroExclusion
        class Fec; //type: MplsTeStandby::P2pP2mpTunnel::NniTunnels::NniTunnel::TunnelRestorationLsp::S2l::OutXro::XroSubobject::LspSubobject::Fec

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::P2pP2mpTunnel::NniTunnels::NniTunnel::TunnelRestorationLsp::S2l::OutXro::XroSubobject::LspSubobject::Fec> fec;
        
}; // MplsTeStandby::P2pP2mpTunnel::NniTunnels::NniTunnel::TunnelRestorationLsp::S2l::OutXro::XroSubobject::LspSubobject


class MplsTeStandby::P2pP2mpTunnel::NniTunnels::NniTunnel::TunnelRestorationLsp::S2l::OutXro::XroSubobject::LspSubobject::Fec : public ydk::Entity
{
    public:
        Fec();
        ~Fec();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf fec_lsp_id; //type: uint16
        ydk::YLeaf fec_tunnel_id; //type: uint16
        ydk::YLeaf fec_extended_tunnel_id; //type: string
        ydk::YLeaf fec_source; //type: string
        ydk::YLeaf fec_vrf; //type: string
        class FecDestinationInfo; //type: MplsTeStandby::P2pP2mpTunnel::NniTunnels::NniTunnel::TunnelRestorationLsp::S2l::OutXro::XroSubobject::LspSubobject::Fec::FecDestinationInfo

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::P2pP2mpTunnel::NniTunnels::NniTunnel::TunnelRestorationLsp::S2l::OutXro::XroSubobject::LspSubobject::Fec::FecDestinationInfo> fec_destination_info;
        
}; // MplsTeStandby::P2pP2mpTunnel::NniTunnels::NniTunnel::TunnelRestorationLsp::S2l::OutXro::XroSubobject::LspSubobject::Fec


class MplsTeStandby::P2pP2mpTunnel::NniTunnels::NniTunnel::TunnelRestorationLsp::S2l::OutXro::XroSubobject::LspSubobject::Fec::FecDestinationInfo : public ydk::Entity
{
    public:
        FecDestinationInfo();
        ~FecDestinationInfo();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf fec_ctype; //type: MplsLibC
        ydk::YLeaf p2p_lsp_destination; //type: string
        ydk::YLeaf fec_destination_p2mp_id; //type: uint32

}; // MplsTeStandby::P2pP2mpTunnel::NniTunnels::NniTunnel::TunnelRestorationLsp::S2l::OutXro::XroSubobject::LspSubobject::Fec::FecDestinationInfo


class MplsTeStandby::P2pP2mpTunnel::NniTunnels::NniTunnel::TunnelRestorationLsp::S2l::InXro : public ydk::Entity
{
    public:
        InXro();
        ~InXro();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf mutual_diversity_flag; //type: boolean
        class XroSubobject; //type: MplsTeStandby::P2pP2mpTunnel::NniTunnels::NniTunnel::TunnelRestorationLsp::S2l::InXro::XroSubobject

        ydk::YList xro_subobject;
        
}; // MplsTeStandby::P2pP2mpTunnel::NniTunnels::NniTunnel::TunnelRestorationLsp::S2l::InXro


class MplsTeStandby::P2pP2mpTunnel::NniTunnels::NniTunnel::TunnelRestorationLsp::S2l::InXro::XroSubobject : public ydk::Entity
{
    public:
        XroSubobject();
        ~XroSubobject();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf type; //type: TeXroSubobj
        class Ipv4Subobject; //type: MplsTeStandby::P2pP2mpTunnel::NniTunnels::NniTunnel::TunnelRestorationLsp::S2l::InXro::XroSubobject::Ipv4Subobject
        class Ipv6Subobject; //type: MplsTeStandby::P2pP2mpTunnel::NniTunnels::NniTunnel::TunnelRestorationLsp::S2l::InXro::XroSubobject::Ipv6Subobject
        class UnnumberedSubobject; //type: MplsTeStandby::P2pP2mpTunnel::NniTunnels::NniTunnel::TunnelRestorationLsp::S2l::InXro::XroSubobject::UnnumberedSubobject
        class AsSubobject; //type: MplsTeStandby::P2pP2mpTunnel::NniTunnels::NniTunnel::TunnelRestorationLsp::S2l::InXro::XroSubobject::AsSubobject
        class SrlgSubobject; //type: MplsTeStandby::P2pP2mpTunnel::NniTunnels::NniTunnel::TunnelRestorationLsp::S2l::InXro::XroSubobject::SrlgSubobject
        class LspSubobject; //type: MplsTeStandby::P2pP2mpTunnel::NniTunnels::NniTunnel::TunnelRestorationLsp::S2l::InXro::XroSubobject::LspSubobject

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::P2pP2mpTunnel::NniTunnels::NniTunnel::TunnelRestorationLsp::S2l::InXro::XroSubobject::Ipv4Subobject> ipv4_subobject;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::P2pP2mpTunnel::NniTunnels::NniTunnel::TunnelRestorationLsp::S2l::InXro::XroSubobject::Ipv6Subobject> ipv6_subobject;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::P2pP2mpTunnel::NniTunnels::NniTunnel::TunnelRestorationLsp::S2l::InXro::XroSubobject::UnnumberedSubobject> unnumbered_subobject;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::P2pP2mpTunnel::NniTunnels::NniTunnel::TunnelRestorationLsp::S2l::InXro::XroSubobject::AsSubobject> as_subobject;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::P2pP2mpTunnel::NniTunnels::NniTunnel::TunnelRestorationLsp::S2l::InXro::XroSubobject::SrlgSubobject> srlg_subobject;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::P2pP2mpTunnel::NniTunnels::NniTunnel::TunnelRestorationLsp::S2l::InXro::XroSubobject::LspSubobject> lsp_subobject;
        
}; // MplsTeStandby::P2pP2mpTunnel::NniTunnels::NniTunnel::TunnelRestorationLsp::S2l::InXro::XroSubobject


class MplsTeStandby::P2pP2mpTunnel::NniTunnels::NniTunnel::TunnelRestorationLsp::S2l::InXro::XroSubobject::Ipv4Subobject : public ydk::Entity
{
    public:
        Ipv4Subobject();
        ~Ipv4Subobject();

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
        ydk::YLeaf prefix_len; //type: uint8
        ydk::YLeaf attribute; //type: TeXroAttribute
        ydk::YLeaf exclusion_type; //type: TeXroExclusion

}; // MplsTeStandby::P2pP2mpTunnel::NniTunnels::NniTunnel::TunnelRestorationLsp::S2l::InXro::XroSubobject::Ipv4Subobject


class MplsTeStandby::P2pP2mpTunnel::NniTunnels::NniTunnel::TunnelRestorationLsp::S2l::InXro::XroSubobject::Ipv6Subobject : public ydk::Entity
{
    public:
        Ipv6Subobject();
        ~Ipv6Subobject();

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
        ydk::YLeaf prefix_len; //type: uint8
        ydk::YLeaf attribute; //type: TeXroAttribute
        ydk::YLeaf exclusion_type; //type: TeXroExclusion

}; // MplsTeStandby::P2pP2mpTunnel::NniTunnels::NniTunnel::TunnelRestorationLsp::S2l::InXro::XroSubobject::Ipv6Subobject


class MplsTeStandby::P2pP2mpTunnel::NniTunnels::NniTunnel::TunnelRestorationLsp::S2l::InXro::XroSubobject::UnnumberedSubobject : public ydk::Entity
{
    public:
        UnnumberedSubobject();
        ~UnnumberedSubobject();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf te_router_id; //type: string
        ydk::YLeaf interface_id; //type: uint32
        ydk::YLeaf attribute; //type: TeXroAttribute
        ydk::YLeaf exclusion_type; //type: TeXroExclusion

}; // MplsTeStandby::P2pP2mpTunnel::NniTunnels::NniTunnel::TunnelRestorationLsp::S2l::InXro::XroSubobject::UnnumberedSubobject


class MplsTeStandby::P2pP2mpTunnel::NniTunnels::NniTunnel::TunnelRestorationLsp::S2l::InXro::XroSubobject::AsSubobject : public ydk::Entity
{
    public:
        AsSubobject();
        ~AsSubobject();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf as_number; //type: uint16

}; // MplsTeStandby::P2pP2mpTunnel::NniTunnels::NniTunnel::TunnelRestorationLsp::S2l::InXro::XroSubobject::AsSubobject


class MplsTeStandby::P2pP2mpTunnel::NniTunnels::NniTunnel::TunnelRestorationLsp::S2l::InXro::XroSubobject::SrlgSubobject : public ydk::Entity
{
    public:
        SrlgSubobject();
        ~SrlgSubobject();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf srlg_id; //type: uint32
        ydk::YLeaf exclusion_type; //type: TeXroExclusion

}; // MplsTeStandby::P2pP2mpTunnel::NniTunnels::NniTunnel::TunnelRestorationLsp::S2l::InXro::XroSubobject::SrlgSubobject


class MplsTeStandby::P2pP2mpTunnel::NniTunnels::NniTunnel::TunnelRestorationLsp::S2l::InXro::XroSubobject::LspSubobject : public ydk::Entity
{
    public:
        LspSubobject();
        ~LspSubobject();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf ignore_lsp_id; //type: boolean
        ydk::YLeaf processing_node_exception; //type: boolean
        ydk::YLeaf penultimate_node_exception; //type: boolean
        ydk::YLeaf destination_node_exception; //type: boolean
        ydk::YLeaf exclusion_type; //type: TeXroExclusion
        class Fec; //type: MplsTeStandby::P2pP2mpTunnel::NniTunnels::NniTunnel::TunnelRestorationLsp::S2l::InXro::XroSubobject::LspSubobject::Fec

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::P2pP2mpTunnel::NniTunnels::NniTunnel::TunnelRestorationLsp::S2l::InXro::XroSubobject::LspSubobject::Fec> fec;
        
}; // MplsTeStandby::P2pP2mpTunnel::NniTunnels::NniTunnel::TunnelRestorationLsp::S2l::InXro::XroSubobject::LspSubobject


class MplsTeStandby::P2pP2mpTunnel::NniTunnels::NniTunnel::TunnelRestorationLsp::S2l::InXro::XroSubobject::LspSubobject::Fec : public ydk::Entity
{
    public:
        Fec();
        ~Fec();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf fec_lsp_id; //type: uint16
        ydk::YLeaf fec_tunnel_id; //type: uint16
        ydk::YLeaf fec_extended_tunnel_id; //type: string
        ydk::YLeaf fec_source; //type: string
        ydk::YLeaf fec_vrf; //type: string
        class FecDestinationInfo; //type: MplsTeStandby::P2pP2mpTunnel::NniTunnels::NniTunnel::TunnelRestorationLsp::S2l::InXro::XroSubobject::LspSubobject::Fec::FecDestinationInfo

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::P2pP2mpTunnel::NniTunnels::NniTunnel::TunnelRestorationLsp::S2l::InXro::XroSubobject::LspSubobject::Fec::FecDestinationInfo> fec_destination_info;
        
}; // MplsTeStandby::P2pP2mpTunnel::NniTunnels::NniTunnel::TunnelRestorationLsp::S2l::InXro::XroSubobject::LspSubobject::Fec


class MplsTeStandby::P2pP2mpTunnel::NniTunnels::NniTunnel::TunnelRestorationLsp::S2l::InXro::XroSubobject::LspSubobject::Fec::FecDestinationInfo : public ydk::Entity
{
    public:
        FecDestinationInfo();
        ~FecDestinationInfo();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf fec_ctype; //type: MplsLibC
        ydk::YLeaf p2p_lsp_destination; //type: string
        ydk::YLeaf fec_destination_p2mp_id; //type: uint32

}; // MplsTeStandby::P2pP2mpTunnel::NniTunnels::NniTunnel::TunnelRestorationLsp::S2l::InXro::XroSubobject::LspSubobject::Fec::FecDestinationInfo


class MplsTeStandby::P2pP2mpTunnel::NniTunnels::NniTunnel::TunnelRestorationLsp::S2l::Tspec : public ydk::Entity
{
    public:
        Tspec();
        ~Tspec();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf average_rate; //type: uint64
        ydk::YLeaf maximum_burst; //type: uint64
        ydk::YLeaf peak_rate; //type: uint64

}; // MplsTeStandby::P2pP2mpTunnel::NniTunnels::NniTunnel::TunnelRestorationLsp::S2l::Tspec


class MplsTeStandby::P2pP2mpTunnel::NniTunnels::NniTunnel::TunnelRestorationLsp::S2l::GenericTspec : public ydk::Entity
{
    public:
        GenericTspec();
        ~GenericTspec();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf tspec_type; //type: TeMgmtGenericTspec
        class Otntspec; //type: MplsTeStandby::P2pP2mpTunnel::NniTunnels::NniTunnel::TunnelRestorationLsp::S2l::GenericTspec::Otntspec

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::P2pP2mpTunnel::NniTunnels::NniTunnel::TunnelRestorationLsp::S2l::GenericTspec::Otntspec> otntspec;
        
}; // MplsTeStandby::P2pP2mpTunnel::NniTunnels::NniTunnel::TunnelRestorationLsp::S2l::GenericTspec


class MplsTeStandby::P2pP2mpTunnel::NniTunnels::NniTunnel::TunnelRestorationLsp::S2l::GenericTspec::Otntspec : public ydk::Entity
{
    public:
        Otntspec();
        ~Otntspec();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf signal_type; //type: uint8
        ydk::YLeaf nmc_or_tolerance; //type: uint16
        ydk::YLeaf nvc; //type: uint16
        ydk::YLeaf multiplier; //type: uint16
        ydk::YLeaf bit_rate; //type: uint32

}; // MplsTeStandby::P2pP2mpTunnel::NniTunnels::NniTunnel::TunnelRestorationLsp::S2l::GenericTspec::Otntspec


class MplsTeStandby::P2pP2mpTunnel::NniTunnels::NniTunnel::TunnelRestorationLsp::S2l::Fspec : public ydk::Entity
{
    public:
        Fspec();
        ~Fspec();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf average_rate; //type: uint64
        ydk::YLeaf maximum_burst; //type: uint64
        ydk::YLeaf peak_rate; //type: uint64

}; // MplsTeStandby::P2pP2mpTunnel::NniTunnels::NniTunnel::TunnelRestorationLsp::S2l::Fspec


class MplsTeStandby::P2pP2mpTunnel::NniTunnels::NniTunnel::TunnelRestorationLsp::S2l::GenericFspec : public ydk::Entity
{
    public:
        GenericFspec();
        ~GenericFspec();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf fspec_type; //type: TeMgmtGenericFspec
        class Otnfspec; //type: MplsTeStandby::P2pP2mpTunnel::NniTunnels::NniTunnel::TunnelRestorationLsp::S2l::GenericFspec::Otnfspec

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::P2pP2mpTunnel::NniTunnels::NniTunnel::TunnelRestorationLsp::S2l::GenericFspec::Otnfspec> otnfspec;
        
}; // MplsTeStandby::P2pP2mpTunnel::NniTunnels::NniTunnel::TunnelRestorationLsp::S2l::GenericFspec


class MplsTeStandby::P2pP2mpTunnel::NniTunnels::NniTunnel::TunnelRestorationLsp::S2l::GenericFspec::Otnfspec : public ydk::Entity
{
    public:
        Otnfspec();
        ~Otnfspec();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf signal_type; //type: uint8
        ydk::YLeaf nmc_or_tolerance; //type: uint16
        ydk::YLeaf nvc; //type: uint16
        ydk::YLeaf multiplier; //type: uint16
        ydk::YLeaf bit_rate; //type: uint32

}; // MplsTeStandby::P2pP2mpTunnel::NniTunnels::NniTunnel::TunnelRestorationLsp::S2l::GenericFspec::Otnfspec


class MplsTeStandby::P2pP2mpTunnel::NniTunnels::NniTunnel::TunnelRestorationLsp::S2l::NextHopAddressGeneric : public ydk::Entity
{
    public:
        NextHopAddressGeneric();
        ~NextHopAddressGeneric();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class TeAddr; //type: MplsTeStandby::P2pP2mpTunnel::NniTunnels::NniTunnel::TunnelRestorationLsp::S2l::NextHopAddressGeneric::TeAddr

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::P2pP2mpTunnel::NniTunnels::NniTunnel::TunnelRestorationLsp::S2l::NextHopAddressGeneric::TeAddr> te_addr;
        
}; // MplsTeStandby::P2pP2mpTunnel::NniTunnels::NniTunnel::TunnelRestorationLsp::S2l::NextHopAddressGeneric


class MplsTeStandby::P2pP2mpTunnel::NniTunnels::NniTunnel::TunnelRestorationLsp::S2l::NextHopAddressGeneric::TeAddr : public ydk::Entity
{
    public:
        TeAddr();
        ~TeAddr();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf type; //type: TeAddr
        ydk::YLeaf ipv4_address; //type: string
        class Ipv4UnnumberedAddress; //type: MplsTeStandby::P2pP2mpTunnel::NniTunnels::NniTunnel::TunnelRestorationLsp::S2l::NextHopAddressGeneric::TeAddr::Ipv4UnnumberedAddress

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::P2pP2mpTunnel::NniTunnels::NniTunnel::TunnelRestorationLsp::S2l::NextHopAddressGeneric::TeAddr::Ipv4UnnumberedAddress> ipv4_unnumbered_address;
        
}; // MplsTeStandby::P2pP2mpTunnel::NniTunnels::NniTunnel::TunnelRestorationLsp::S2l::NextHopAddressGeneric::TeAddr


class MplsTeStandby::P2pP2mpTunnel::NniTunnels::NniTunnel::TunnelRestorationLsp::S2l::NextHopAddressGeneric::TeAddr::Ipv4UnnumberedAddress : public ydk::Entity
{
    public:
        Ipv4UnnumberedAddress();
        ~Ipv4UnnumberedAddress();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf router_id; //type: string
        ydk::YLeaf interface_index; //type: uint32

}; // MplsTeStandby::P2pP2mpTunnel::NniTunnels::NniTunnel::TunnelRestorationLsp::S2l::NextHopAddressGeneric::TeAddr::Ipv4UnnumberedAddress


class MplsTeStandby::P2pP2mpTunnel::NniTunnels::NniTunnel::TunnelRestorationLsp::S2l::PreviousHopAddressGeneric : public ydk::Entity
{
    public:
        PreviousHopAddressGeneric();
        ~PreviousHopAddressGeneric();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class TeAddr; //type: MplsTeStandby::P2pP2mpTunnel::NniTunnels::NniTunnel::TunnelRestorationLsp::S2l::PreviousHopAddressGeneric::TeAddr

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::P2pP2mpTunnel::NniTunnels::NniTunnel::TunnelRestorationLsp::S2l::PreviousHopAddressGeneric::TeAddr> te_addr;
        
}; // MplsTeStandby::P2pP2mpTunnel::NniTunnels::NniTunnel::TunnelRestorationLsp::S2l::PreviousHopAddressGeneric


class MplsTeStandby::P2pP2mpTunnel::NniTunnels::NniTunnel::TunnelRestorationLsp::S2l::PreviousHopAddressGeneric::TeAddr : public ydk::Entity
{
    public:
        TeAddr();
        ~TeAddr();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf type; //type: TeAddr
        ydk::YLeaf ipv4_address; //type: string
        class Ipv4UnnumberedAddress; //type: MplsTeStandby::P2pP2mpTunnel::NniTunnels::NniTunnel::TunnelRestorationLsp::S2l::PreviousHopAddressGeneric::TeAddr::Ipv4UnnumberedAddress

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::P2pP2mpTunnel::NniTunnels::NniTunnel::TunnelRestorationLsp::S2l::PreviousHopAddressGeneric::TeAddr::Ipv4UnnumberedAddress> ipv4_unnumbered_address;
        
}; // MplsTeStandby::P2pP2mpTunnel::NniTunnels::NniTunnel::TunnelRestorationLsp::S2l::PreviousHopAddressGeneric::TeAddr


class MplsTeStandby::P2pP2mpTunnel::NniTunnels::NniTunnel::TunnelRestorationLsp::S2l::PreviousHopAddressGeneric::TeAddr::Ipv4UnnumberedAddress : public ydk::Entity
{
    public:
        Ipv4UnnumberedAddress();
        ~Ipv4UnnumberedAddress();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf router_id; //type: string
        ydk::YLeaf interface_index; //type: uint32

}; // MplsTeStandby::P2pP2mpTunnel::NniTunnels::NniTunnel::TunnelRestorationLsp::S2l::PreviousHopAddressGeneric::TeAddr::Ipv4UnnumberedAddress


class MplsTeStandby::P2pP2mpTunnel::NniTunnels::NniTunnel::TunnelRestorationLsp::S2l::IncomingAddressGeneric : public ydk::Entity
{
    public:
        IncomingAddressGeneric();
        ~IncomingAddressGeneric();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class TeAddr; //type: MplsTeStandby::P2pP2mpTunnel::NniTunnels::NniTunnel::TunnelRestorationLsp::S2l::IncomingAddressGeneric::TeAddr

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::P2pP2mpTunnel::NniTunnels::NniTunnel::TunnelRestorationLsp::S2l::IncomingAddressGeneric::TeAddr> te_addr;
        
}; // MplsTeStandby::P2pP2mpTunnel::NniTunnels::NniTunnel::TunnelRestorationLsp::S2l::IncomingAddressGeneric


class MplsTeStandby::P2pP2mpTunnel::NniTunnels::NniTunnel::TunnelRestorationLsp::S2l::IncomingAddressGeneric::TeAddr : public ydk::Entity
{
    public:
        TeAddr();
        ~TeAddr();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf type; //type: TeAddr
        ydk::YLeaf ipv4_address; //type: string
        class Ipv4UnnumberedAddress; //type: MplsTeStandby::P2pP2mpTunnel::NniTunnels::NniTunnel::TunnelRestorationLsp::S2l::IncomingAddressGeneric::TeAddr::Ipv4UnnumberedAddress

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::P2pP2mpTunnel::NniTunnels::NniTunnel::TunnelRestorationLsp::S2l::IncomingAddressGeneric::TeAddr::Ipv4UnnumberedAddress> ipv4_unnumbered_address;
        
}; // MplsTeStandby::P2pP2mpTunnel::NniTunnels::NniTunnel::TunnelRestorationLsp::S2l::IncomingAddressGeneric::TeAddr


class MplsTeStandby::P2pP2mpTunnel::NniTunnels::NniTunnel::TunnelRestorationLsp::S2l::IncomingAddressGeneric::TeAddr::Ipv4UnnumberedAddress : public ydk::Entity
{
    public:
        Ipv4UnnumberedAddress();
        ~Ipv4UnnumberedAddress();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf router_id; //type: string
        ydk::YLeaf interface_index; //type: uint32

}; // MplsTeStandby::P2pP2mpTunnel::NniTunnels::NniTunnel::TunnelRestorationLsp::S2l::IncomingAddressGeneric::TeAddr::Ipv4UnnumberedAddress


class MplsTeStandby::P2pP2mpTunnel::NniTunnels::NniTunnel::TunnelRestorationLsp::S2l::S2lConvergence : public ydk::Entity
{
    public:
        S2lConvergence();
        ~S2lConvergence();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf path_in; //type: uint64
        ydk::YLeaf path_out; //type: uint64
        ydk::YLeaf resv_in; //type: uint64
        ydk::YLeaf resv_out; //type: uint64
        ydk::YLeaf label_rewrite; //type: uint64
        ydk::YLeaf tunnel_rewrite; //type: uint64
        ydk::YLeaf creation_time; //type: uint64

}; // MplsTeStandby::P2pP2mpTunnel::NniTunnels::NniTunnel::TunnelRestorationLsp::S2l::S2lConvergence


class MplsTeStandby::P2pP2mpTunnel::NniTunnels::NniTunnel::TunnelRestorationLsp::S2l::SoftPreemption : public ydk::Entity
{
    public:
        SoftPreemption();
        ~SoftPreemption();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf status; //type: MplsTeSoftPreemptionState
        ydk::YLeaf soft_preemption_timestamp; //type: uint32
        ydk::YLeaf soft_preemption_link; //type: string
        ydk::YLeaf preempting_link_address; //type: string
        ydk::YLeaf time_to_hard_preemption; //type: uint16
        ydk::YLeaf fr_rrewrite; //type: boolean
        ydk::YLeaf fr_rrewrite_tunnel_name; //type: string

}; // MplsTeStandby::P2pP2mpTunnel::NniTunnels::NniTunnel::TunnelRestorationLsp::S2l::SoftPreemption


class MplsTeStandby::P2pP2mpTunnel::NniTunnels::NniTunnel::TunnelRestorationLsp::S2l::GmplsLabels : public ydk::Entity
{
    public:
        GmplsLabels();
        ~GmplsLabels();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class PathIngressLabel; //type: MplsTeStandby::P2pP2mpTunnel::NniTunnels::NniTunnel::TunnelRestorationLsp::S2l::GmplsLabels::PathIngressLabel
        class PathEgressLabel; //type: MplsTeStandby::P2pP2mpTunnel::NniTunnels::NniTunnel::TunnelRestorationLsp::S2l::GmplsLabels::PathEgressLabel
        class ResvIngressLabel; //type: MplsTeStandby::P2pP2mpTunnel::NniTunnels::NniTunnel::TunnelRestorationLsp::S2l::GmplsLabels::ResvIngressLabel
        class ResvEgressLabel; //type: MplsTeStandby::P2pP2mpTunnel::NniTunnels::NniTunnel::TunnelRestorationLsp::S2l::GmplsLabels::ResvEgressLabel

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::P2pP2mpTunnel::NniTunnels::NniTunnel::TunnelRestorationLsp::S2l::GmplsLabels::PathIngressLabel> path_ingress_label;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::P2pP2mpTunnel::NniTunnels::NniTunnel::TunnelRestorationLsp::S2l::GmplsLabels::PathEgressLabel> path_egress_label;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::P2pP2mpTunnel::NniTunnels::NniTunnel::TunnelRestorationLsp::S2l::GmplsLabels::ResvIngressLabel> resv_ingress_label;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::P2pP2mpTunnel::NniTunnels::NniTunnel::TunnelRestorationLsp::S2l::GmplsLabels::ResvEgressLabel> resv_egress_label;
        
}; // MplsTeStandby::P2pP2mpTunnel::NniTunnels::NniTunnel::TunnelRestorationLsp::S2l::GmplsLabels


class MplsTeStandby::P2pP2mpTunnel::NniTunnels::NniTunnel::TunnelRestorationLsp::S2l::GmplsLabels::PathIngressLabel : public ydk::Entity
{
    public:
        PathIngressLabel();
        ~PathIngressLabel();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf label_type; //type: MplsTeMgmtGmplsLabel
        class Wdm; //type: MplsTeStandby::P2pP2mpTunnel::NniTunnels::NniTunnel::TunnelRestorationLsp::S2l::GmplsLabels::PathIngressLabel::Wdm
        class Otn; //type: MplsTeStandby::P2pP2mpTunnel::NniTunnels::NniTunnel::TunnelRestorationLsp::S2l::GmplsLabels::PathIngressLabel::Otn

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::P2pP2mpTunnel::NniTunnels::NniTunnel::TunnelRestorationLsp::S2l::GmplsLabels::PathIngressLabel::Wdm> wdm;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::P2pP2mpTunnel::NniTunnels::NniTunnel::TunnelRestorationLsp::S2l::GmplsLabels::PathIngressLabel::Otn> otn;
        
}; // MplsTeStandby::P2pP2mpTunnel::NniTunnels::NniTunnel::TunnelRestorationLsp::S2l::GmplsLabels::PathIngressLabel


class MplsTeStandby::P2pP2mpTunnel::NniTunnels::NniTunnel::TunnelRestorationLsp::S2l::GmplsLabels::PathIngressLabel::Wdm : public ydk::Entity
{
    public:
        Wdm();
        ~Wdm();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf label_set; //type: boolean
        ydk::YLeaf grid; //type: GmplsUniMgmtWdmGrid
        ydk::YLeaf channel_spacing; //type: GmplsUniMgmtDwdmCs
        ydk::YLeaf identifier; //type: uint16
        ydk::YLeaf channel; //type: int16

}; // MplsTeStandby::P2pP2mpTunnel::NniTunnels::NniTunnel::TunnelRestorationLsp::S2l::GmplsLabels::PathIngressLabel::Wdm


class MplsTeStandby::P2pP2mpTunnel::NniTunnels::NniTunnel::TunnelRestorationLsp::S2l::GmplsLabels::PathIngressLabel::Otn : public ydk::Entity
{
    public:
        Otn();
        ~Otn();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf tpn; //type: uint16
        ydk::YLeaf bit_map_length; //type: uint16
        class BitMap; //type: MplsTeStandby::P2pP2mpTunnel::NniTunnels::NniTunnel::TunnelRestorationLsp::S2l::GmplsLabels::PathIngressLabel::Otn::BitMap

        ydk::YList bit_map;
        
}; // MplsTeStandby::P2pP2mpTunnel::NniTunnels::NniTunnel::TunnelRestorationLsp::S2l::GmplsLabels::PathIngressLabel::Otn


class MplsTeStandby::P2pP2mpTunnel::NniTunnels::NniTunnel::TunnelRestorationLsp::S2l::GmplsLabels::PathIngressLabel::Otn::BitMap : public ydk::Entity
{
    public:
        BitMap();
        ~BitMap();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf entry; //type: uint8

}; // MplsTeStandby::P2pP2mpTunnel::NniTunnels::NniTunnel::TunnelRestorationLsp::S2l::GmplsLabels::PathIngressLabel::Otn::BitMap


class MplsTeStandby::P2pP2mpTunnel::NniTunnels::NniTunnel::TunnelRestorationLsp::S2l::GmplsLabels::PathEgressLabel : public ydk::Entity
{
    public:
        PathEgressLabel();
        ~PathEgressLabel();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf label_type; //type: MplsTeMgmtGmplsLabel
        class Wdm; //type: MplsTeStandby::P2pP2mpTunnel::NniTunnels::NniTunnel::TunnelRestorationLsp::S2l::GmplsLabels::PathEgressLabel::Wdm
        class Otn; //type: MplsTeStandby::P2pP2mpTunnel::NniTunnels::NniTunnel::TunnelRestorationLsp::S2l::GmplsLabels::PathEgressLabel::Otn

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::P2pP2mpTunnel::NniTunnels::NniTunnel::TunnelRestorationLsp::S2l::GmplsLabels::PathEgressLabel::Wdm> wdm;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::P2pP2mpTunnel::NniTunnels::NniTunnel::TunnelRestorationLsp::S2l::GmplsLabels::PathEgressLabel::Otn> otn;
        
}; // MplsTeStandby::P2pP2mpTunnel::NniTunnels::NniTunnel::TunnelRestorationLsp::S2l::GmplsLabels::PathEgressLabel


class MplsTeStandby::P2pP2mpTunnel::NniTunnels::NniTunnel::TunnelRestorationLsp::S2l::GmplsLabels::PathEgressLabel::Wdm : public ydk::Entity
{
    public:
        Wdm();
        ~Wdm();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf label_set; //type: boolean
        ydk::YLeaf grid; //type: GmplsUniMgmtWdmGrid
        ydk::YLeaf channel_spacing; //type: GmplsUniMgmtDwdmCs
        ydk::YLeaf identifier; //type: uint16
        ydk::YLeaf channel; //type: int16

}; // MplsTeStandby::P2pP2mpTunnel::NniTunnels::NniTunnel::TunnelRestorationLsp::S2l::GmplsLabels::PathEgressLabel::Wdm


class MplsTeStandby::P2pP2mpTunnel::NniTunnels::NniTunnel::TunnelRestorationLsp::S2l::GmplsLabels::PathEgressLabel::Otn : public ydk::Entity
{
    public:
        Otn();
        ~Otn();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf tpn; //type: uint16
        ydk::YLeaf bit_map_length; //type: uint16
        class BitMap; //type: MplsTeStandby::P2pP2mpTunnel::NniTunnels::NniTunnel::TunnelRestorationLsp::S2l::GmplsLabels::PathEgressLabel::Otn::BitMap

        ydk::YList bit_map;
        
}; // MplsTeStandby::P2pP2mpTunnel::NniTunnels::NniTunnel::TunnelRestorationLsp::S2l::GmplsLabels::PathEgressLabel::Otn


class MplsTeStandby::P2pP2mpTunnel::NniTunnels::NniTunnel::TunnelRestorationLsp::S2l::GmplsLabels::PathEgressLabel::Otn::BitMap : public ydk::Entity
{
    public:
        BitMap();
        ~BitMap();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf entry; //type: uint8

}; // MplsTeStandby::P2pP2mpTunnel::NniTunnels::NniTunnel::TunnelRestorationLsp::S2l::GmplsLabels::PathEgressLabel::Otn::BitMap


class MplsTeStandby::P2pP2mpTunnel::NniTunnels::NniTunnel::TunnelRestorationLsp::S2l::GmplsLabels::ResvIngressLabel : public ydk::Entity
{
    public:
        ResvIngressLabel();
        ~ResvIngressLabel();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf label_type; //type: MplsTeMgmtGmplsLabel
        class Wdm; //type: MplsTeStandby::P2pP2mpTunnel::NniTunnels::NniTunnel::TunnelRestorationLsp::S2l::GmplsLabels::ResvIngressLabel::Wdm
        class Otn; //type: MplsTeStandby::P2pP2mpTunnel::NniTunnels::NniTunnel::TunnelRestorationLsp::S2l::GmplsLabels::ResvIngressLabel::Otn

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::P2pP2mpTunnel::NniTunnels::NniTunnel::TunnelRestorationLsp::S2l::GmplsLabels::ResvIngressLabel::Wdm> wdm;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::P2pP2mpTunnel::NniTunnels::NniTunnel::TunnelRestorationLsp::S2l::GmplsLabels::ResvIngressLabel::Otn> otn;
        
}; // MplsTeStandby::P2pP2mpTunnel::NniTunnels::NniTunnel::TunnelRestorationLsp::S2l::GmplsLabels::ResvIngressLabel


class MplsTeStandby::P2pP2mpTunnel::NniTunnels::NniTunnel::TunnelRestorationLsp::S2l::GmplsLabels::ResvIngressLabel::Wdm : public ydk::Entity
{
    public:
        Wdm();
        ~Wdm();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf label_set; //type: boolean
        ydk::YLeaf grid; //type: GmplsUniMgmtWdmGrid
        ydk::YLeaf channel_spacing; //type: GmplsUniMgmtDwdmCs
        ydk::YLeaf identifier; //type: uint16
        ydk::YLeaf channel; //type: int16

}; // MplsTeStandby::P2pP2mpTunnel::NniTunnels::NniTunnel::TunnelRestorationLsp::S2l::GmplsLabels::ResvIngressLabel::Wdm


class MplsTeStandby::P2pP2mpTunnel::NniTunnels::NniTunnel::TunnelRestorationLsp::S2l::GmplsLabels::ResvIngressLabel::Otn : public ydk::Entity
{
    public:
        Otn();
        ~Otn();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf tpn; //type: uint16
        ydk::YLeaf bit_map_length; //type: uint16
        class BitMap; //type: MplsTeStandby::P2pP2mpTunnel::NniTunnels::NniTunnel::TunnelRestorationLsp::S2l::GmplsLabels::ResvIngressLabel::Otn::BitMap

        ydk::YList bit_map;
        
}; // MplsTeStandby::P2pP2mpTunnel::NniTunnels::NniTunnel::TunnelRestorationLsp::S2l::GmplsLabels::ResvIngressLabel::Otn


class MplsTeStandby::P2pP2mpTunnel::NniTunnels::NniTunnel::TunnelRestorationLsp::S2l::GmplsLabels::ResvIngressLabel::Otn::BitMap : public ydk::Entity
{
    public:
        BitMap();
        ~BitMap();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf entry; //type: uint8

}; // MplsTeStandby::P2pP2mpTunnel::NniTunnels::NniTunnel::TunnelRestorationLsp::S2l::GmplsLabels::ResvIngressLabel::Otn::BitMap


class MplsTeStandby::P2pP2mpTunnel::NniTunnels::NniTunnel::TunnelRestorationLsp::S2l::GmplsLabels::ResvEgressLabel : public ydk::Entity
{
    public:
        ResvEgressLabel();
        ~ResvEgressLabel();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf label_type; //type: MplsTeMgmtGmplsLabel
        class Wdm; //type: MplsTeStandby::P2pP2mpTunnel::NniTunnels::NniTunnel::TunnelRestorationLsp::S2l::GmplsLabels::ResvEgressLabel::Wdm
        class Otn; //type: MplsTeStandby::P2pP2mpTunnel::NniTunnels::NniTunnel::TunnelRestorationLsp::S2l::GmplsLabels::ResvEgressLabel::Otn

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::P2pP2mpTunnel::NniTunnels::NniTunnel::TunnelRestorationLsp::S2l::GmplsLabels::ResvEgressLabel::Wdm> wdm;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::P2pP2mpTunnel::NniTunnels::NniTunnel::TunnelRestorationLsp::S2l::GmplsLabels::ResvEgressLabel::Otn> otn;
        
}; // MplsTeStandby::P2pP2mpTunnel::NniTunnels::NniTunnel::TunnelRestorationLsp::S2l::GmplsLabels::ResvEgressLabel


class MplsTeStandby::P2pP2mpTunnel::NniTunnels::NniTunnel::TunnelRestorationLsp::S2l::GmplsLabels::ResvEgressLabel::Wdm : public ydk::Entity
{
    public:
        Wdm();
        ~Wdm();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf label_set; //type: boolean
        ydk::YLeaf grid; //type: GmplsUniMgmtWdmGrid
        ydk::YLeaf channel_spacing; //type: GmplsUniMgmtDwdmCs
        ydk::YLeaf identifier; //type: uint16
        ydk::YLeaf channel; //type: int16

}; // MplsTeStandby::P2pP2mpTunnel::NniTunnels::NniTunnel::TunnelRestorationLsp::S2l::GmplsLabels::ResvEgressLabel::Wdm


class MplsTeStandby::P2pP2mpTunnel::NniTunnels::NniTunnel::TunnelRestorationLsp::S2l::GmplsLabels::ResvEgressLabel::Otn : public ydk::Entity
{
    public:
        Otn();
        ~Otn();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf tpn; //type: uint16
        ydk::YLeaf bit_map_length; //type: uint16
        class BitMap; //type: MplsTeStandby::P2pP2mpTunnel::NniTunnels::NniTunnel::TunnelRestorationLsp::S2l::GmplsLabels::ResvEgressLabel::Otn::BitMap

        ydk::YList bit_map;
        
}; // MplsTeStandby::P2pP2mpTunnel::NniTunnels::NniTunnel::TunnelRestorationLsp::S2l::GmplsLabels::ResvEgressLabel::Otn


class MplsTeStandby::P2pP2mpTunnel::NniTunnels::NniTunnel::TunnelRestorationLsp::S2l::GmplsLabels::ResvEgressLabel::Otn::BitMap : public ydk::Entity
{
    public:
        BitMap();
        ~BitMap();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf entry; //type: uint8

}; // MplsTeStandby::P2pP2mpTunnel::NniTunnels::NniTunnel::TunnelRestorationLsp::S2l::GmplsLabels::ResvEgressLabel::Otn::BitMap


class MplsTeStandby::P2pP2mpTunnel::NniTunnels::NniTunnel::TunnelRestorationLsp::S2l::OtnS2l : public ydk::Entity
{
    public:
        OtnS2l();
        ~OtnS2l();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Otn; //type: MplsTeStandby::P2pP2mpTunnel::NniTunnels::NniTunnel::TunnelRestorationLsp::S2l::OtnS2l::Otn
        class Aps; //type: MplsTeStandby::P2pP2mpTunnel::NniTunnels::NniTunnel::TunnelRestorationLsp::S2l::OtnS2l::Aps

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::P2pP2mpTunnel::NniTunnels::NniTunnel::TunnelRestorationLsp::S2l::OtnS2l::Otn> otn;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::P2pP2mpTunnel::NniTunnels::NniTunnel::TunnelRestorationLsp::S2l::OtnS2l::Aps> aps;
        
}; // MplsTeStandby::P2pP2mpTunnel::NniTunnels::NniTunnel::TunnelRestorationLsp::S2l::OtnS2l


class MplsTeStandby::P2pP2mpTunnel::NniTunnels::NniTunnel::TunnelRestorationLsp::S2l::OtnS2l::Otn : public ydk::Entity
{
    public:
        Otn();
        ~Otn();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf incoming_controller; //type: string
        ydk::YLeaf incoming_controller_state; //type: TeControllerState
        ydk::YLeaf incoming_sub_controller; //type: string
        ydk::YLeaf incoming_sub_controller_state; //type: TeControllerState
        ydk::YLeaf outgoing_controller; //type: string
        ydk::YLeaf outgoing_controller_state; //type: TeControllerState
        ydk::YLeaf outgoing_sub_controller; //type: string
        ydk::YLeaf outgoing_sub_controller_state; //type: TeControllerState
        ydk::YLeaf cross_connect_id; //type: uint32
        ydk::YLeaf is_connected; //type: boolean
        ydk::YLeaf uptime; //type: uint32
        ydk::YLeaf outgoing_controller_ifhandle; //type: string
        ydk::YLeaf outgoing_sub_controller_ifhandle; //type: string
        ydk::YLeaf incoming_controller_ifhandle; //type: string
        ydk::YLeaf incoming_sub_controller_ifhandle; //type: string
        ydk::YLeaf gpid; //type: uint16
        class Bandwidth; //type: MplsTeStandby::P2pP2mpTunnel::NniTunnels::NniTunnel::TunnelRestorationLsp::S2l::OtnS2l::Otn::Bandwidth
        class Labels; //type: MplsTeStandby::P2pP2mpTunnel::NniTunnels::NniTunnel::TunnelRestorationLsp::S2l::OtnS2l::Otn::Labels

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::P2pP2mpTunnel::NniTunnels::NniTunnel::TunnelRestorationLsp::S2l::OtnS2l::Otn::Bandwidth> bandwidth;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::P2pP2mpTunnel::NniTunnels::NniTunnel::TunnelRestorationLsp::S2l::OtnS2l::Otn::Labels> labels;
        
}; // MplsTeStandby::P2pP2mpTunnel::NniTunnels::NniTunnel::TunnelRestorationLsp::S2l::OtnS2l::Otn


class MplsTeStandby::P2pP2mpTunnel::NniTunnels::NniTunnel::TunnelRestorationLsp::S2l::OtnS2l::Otn::Bandwidth : public ydk::Entity
{
    public:
        Bandwidth();
        ~Bandwidth();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf odu_level; //type: TeOduLevel
        class OduFlexCbr; //type: MplsTeStandby::P2pP2mpTunnel::NniTunnels::NniTunnel::TunnelRestorationLsp::S2l::OtnS2l::Otn::Bandwidth::OduFlexCbr
        class OduFlexGfpFRes; //type: MplsTeStandby::P2pP2mpTunnel::NniTunnels::NniTunnel::TunnelRestorationLsp::S2l::OtnS2l::Otn::Bandwidth::OduFlexGfpFRes
        class OduFlexGfpFNonRes; //type: MplsTeStandby::P2pP2mpTunnel::NniTunnels::NniTunnel::TunnelRestorationLsp::S2l::OtnS2l::Otn::Bandwidth::OduFlexGfpFNonRes

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::P2pP2mpTunnel::NniTunnels::NniTunnel::TunnelRestorationLsp::S2l::OtnS2l::Otn::Bandwidth::OduFlexCbr> odu_flex_cbr;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::P2pP2mpTunnel::NniTunnels::NniTunnel::TunnelRestorationLsp::S2l::OtnS2l::Otn::Bandwidth::OduFlexGfpFRes> odu_flex_gfp_f_res;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::P2pP2mpTunnel::NniTunnels::NniTunnel::TunnelRestorationLsp::S2l::OtnS2l::Otn::Bandwidth::OduFlexGfpFNonRes> odu_flex_gfp_f_non_res;
        
}; // MplsTeStandby::P2pP2mpTunnel::NniTunnels::NniTunnel::TunnelRestorationLsp::S2l::OtnS2l::Otn::Bandwidth


class MplsTeStandby::P2pP2mpTunnel::NniTunnels::NniTunnel::TunnelRestorationLsp::S2l::OtnS2l::Otn::Bandwidth::OduFlexCbr : public ydk::Entity
{
    public:
        OduFlexCbr();
        ~OduFlexCbr();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf bit_rate; //type: uint32
        ydk::YLeaf tolerance; //type: uint16

}; // MplsTeStandby::P2pP2mpTunnel::NniTunnels::NniTunnel::TunnelRestorationLsp::S2l::OtnS2l::Otn::Bandwidth::OduFlexCbr


class MplsTeStandby::P2pP2mpTunnel::NniTunnels::NniTunnel::TunnelRestorationLsp::S2l::OtnS2l::Otn::Bandwidth::OduFlexGfpFRes : public ydk::Entity
{
    public:
        OduFlexGfpFRes();
        ~OduFlexGfpFRes();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf bit_rate; //type: uint32

}; // MplsTeStandby::P2pP2mpTunnel::NniTunnels::NniTunnel::TunnelRestorationLsp::S2l::OtnS2l::Otn::Bandwidth::OduFlexGfpFRes


class MplsTeStandby::P2pP2mpTunnel::NniTunnels::NniTunnel::TunnelRestorationLsp::S2l::OtnS2l::Otn::Bandwidth::OduFlexGfpFNonRes : public ydk::Entity
{
    public:
        OduFlexGfpFNonRes();
        ~OduFlexGfpFNonRes();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf bit_rate; //type: uint32

}; // MplsTeStandby::P2pP2mpTunnel::NniTunnels::NniTunnel::TunnelRestorationLsp::S2l::OtnS2l::Otn::Bandwidth::OduFlexGfpFNonRes


class MplsTeStandby::P2pP2mpTunnel::NniTunnels::NniTunnel::TunnelRestorationLsp::S2l::OtnS2l::Otn::Labels : public ydk::Entity
{
    public:
        Labels();
        ~Labels();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class PathIngressLabel; //type: MplsTeStandby::P2pP2mpTunnel::NniTunnels::NniTunnel::TunnelRestorationLsp::S2l::OtnS2l::Otn::Labels::PathIngressLabel
        class PathEgressLabel; //type: MplsTeStandby::P2pP2mpTunnel::NniTunnels::NniTunnel::TunnelRestorationLsp::S2l::OtnS2l::Otn::Labels::PathEgressLabel
        class ResvIngressLabel; //type: MplsTeStandby::P2pP2mpTunnel::NniTunnels::NniTunnel::TunnelRestorationLsp::S2l::OtnS2l::Otn::Labels::ResvIngressLabel
        class ResvEgressLabel; //type: MplsTeStandby::P2pP2mpTunnel::NniTunnels::NniTunnel::TunnelRestorationLsp::S2l::OtnS2l::Otn::Labels::ResvEgressLabel

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::P2pP2mpTunnel::NniTunnels::NniTunnel::TunnelRestorationLsp::S2l::OtnS2l::Otn::Labels::PathIngressLabel> path_ingress_label;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::P2pP2mpTunnel::NniTunnels::NniTunnel::TunnelRestorationLsp::S2l::OtnS2l::Otn::Labels::PathEgressLabel> path_egress_label;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::P2pP2mpTunnel::NniTunnels::NniTunnel::TunnelRestorationLsp::S2l::OtnS2l::Otn::Labels::ResvIngressLabel> resv_ingress_label;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::P2pP2mpTunnel::NniTunnels::NniTunnel::TunnelRestorationLsp::S2l::OtnS2l::Otn::Labels::ResvEgressLabel> resv_egress_label;
        
}; // MplsTeStandby::P2pP2mpTunnel::NniTunnels::NniTunnel::TunnelRestorationLsp::S2l::OtnS2l::Otn::Labels


class MplsTeStandby::P2pP2mpTunnel::NniTunnels::NniTunnel::TunnelRestorationLsp::S2l::OtnS2l::Otn::Labels::PathIngressLabel : public ydk::Entity
{
    public:
        PathIngressLabel();
        ~PathIngressLabel();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf label_type; //type: MplsTeMgmtGmplsLabel
        class Wdm; //type: MplsTeStandby::P2pP2mpTunnel::NniTunnels::NniTunnel::TunnelRestorationLsp::S2l::OtnS2l::Otn::Labels::PathIngressLabel::Wdm
        class Otn_; //type: MplsTeStandby::P2pP2mpTunnel::NniTunnels::NniTunnel::TunnelRestorationLsp::S2l::OtnS2l::Otn::Labels::PathIngressLabel::Otn_

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::P2pP2mpTunnel::NniTunnels::NniTunnel::TunnelRestorationLsp::S2l::OtnS2l::Otn::Labels::PathIngressLabel::Wdm> wdm;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::P2pP2mpTunnel::NniTunnels::NniTunnel::TunnelRestorationLsp::S2l::OtnS2l::Otn::Labels::PathIngressLabel::Otn_> otn;
        
}; // MplsTeStandby::P2pP2mpTunnel::NniTunnels::NniTunnel::TunnelRestorationLsp::S2l::OtnS2l::Otn::Labels::PathIngressLabel


class MplsTeStandby::P2pP2mpTunnel::NniTunnels::NniTunnel::TunnelRestorationLsp::S2l::OtnS2l::Otn::Labels::PathIngressLabel::Wdm : public ydk::Entity
{
    public:
        Wdm();
        ~Wdm();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf label_set; //type: boolean
        ydk::YLeaf grid; //type: GmplsUniMgmtWdmGrid
        ydk::YLeaf channel_spacing; //type: GmplsUniMgmtDwdmCs
        ydk::YLeaf identifier; //type: uint16
        ydk::YLeaf channel; //type: int16

}; // MplsTeStandby::P2pP2mpTunnel::NniTunnels::NniTunnel::TunnelRestorationLsp::S2l::OtnS2l::Otn::Labels::PathIngressLabel::Wdm


class MplsTeStandby::P2pP2mpTunnel::NniTunnels::NniTunnel::TunnelRestorationLsp::S2l::OtnS2l::Otn::Labels::PathIngressLabel::Otn_ : public ydk::Entity
{
    public:
        Otn_();
        ~Otn_();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf tpn; //type: uint16
        ydk::YLeaf bit_map_length; //type: uint16
        class BitMap; //type: MplsTeStandby::P2pP2mpTunnel::NniTunnels::NniTunnel::TunnelRestorationLsp::S2l::OtnS2l::Otn::Labels::PathIngressLabel::Otn_::BitMap

        ydk::YList bit_map;
        
}; // MplsTeStandby::P2pP2mpTunnel::NniTunnels::NniTunnel::TunnelRestorationLsp::S2l::OtnS2l::Otn::Labels::PathIngressLabel::Otn_


class MplsTeStandby::P2pP2mpTunnel::NniTunnels::NniTunnel::TunnelRestorationLsp::S2l::OtnS2l::Otn::Labels::PathIngressLabel::Otn_::BitMap : public ydk::Entity
{
    public:
        BitMap();
        ~BitMap();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf entry; //type: uint8

}; // MplsTeStandby::P2pP2mpTunnel::NniTunnels::NniTunnel::TunnelRestorationLsp::S2l::OtnS2l::Otn::Labels::PathIngressLabel::Otn_::BitMap


class MplsTeStandby::P2pP2mpTunnel::NniTunnels::NniTunnel::TunnelRestorationLsp::S2l::OtnS2l::Otn::Labels::PathEgressLabel : public ydk::Entity
{
    public:
        PathEgressLabel();
        ~PathEgressLabel();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf label_type; //type: MplsTeMgmtGmplsLabel
        class Wdm; //type: MplsTeStandby::P2pP2mpTunnel::NniTunnels::NniTunnel::TunnelRestorationLsp::S2l::OtnS2l::Otn::Labels::PathEgressLabel::Wdm
        class Otn_; //type: MplsTeStandby::P2pP2mpTunnel::NniTunnels::NniTunnel::TunnelRestorationLsp::S2l::OtnS2l::Otn::Labels::PathEgressLabel::Otn_

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::P2pP2mpTunnel::NniTunnels::NniTunnel::TunnelRestorationLsp::S2l::OtnS2l::Otn::Labels::PathEgressLabel::Wdm> wdm;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::P2pP2mpTunnel::NniTunnels::NniTunnel::TunnelRestorationLsp::S2l::OtnS2l::Otn::Labels::PathEgressLabel::Otn_> otn;
        
}; // MplsTeStandby::P2pP2mpTunnel::NniTunnels::NniTunnel::TunnelRestorationLsp::S2l::OtnS2l::Otn::Labels::PathEgressLabel


class MplsTeStandby::P2pP2mpTunnel::NniTunnels::NniTunnel::TunnelRestorationLsp::S2l::OtnS2l::Otn::Labels::PathEgressLabel::Wdm : public ydk::Entity
{
    public:
        Wdm();
        ~Wdm();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf label_set; //type: boolean
        ydk::YLeaf grid; //type: GmplsUniMgmtWdmGrid
        ydk::YLeaf channel_spacing; //type: GmplsUniMgmtDwdmCs
        ydk::YLeaf identifier; //type: uint16
        ydk::YLeaf channel; //type: int16

}; // MplsTeStandby::P2pP2mpTunnel::NniTunnels::NniTunnel::TunnelRestorationLsp::S2l::OtnS2l::Otn::Labels::PathEgressLabel::Wdm


class MplsTeStandby::P2pP2mpTunnel::NniTunnels::NniTunnel::TunnelRestorationLsp::S2l::OtnS2l::Otn::Labels::PathEgressLabel::Otn_ : public ydk::Entity
{
    public:
        Otn_();
        ~Otn_();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf tpn; //type: uint16
        ydk::YLeaf bit_map_length; //type: uint16
        class BitMap; //type: MplsTeStandby::P2pP2mpTunnel::NniTunnels::NniTunnel::TunnelRestorationLsp::S2l::OtnS2l::Otn::Labels::PathEgressLabel::Otn_::BitMap

        ydk::YList bit_map;
        
}; // MplsTeStandby::P2pP2mpTunnel::NniTunnels::NniTunnel::TunnelRestorationLsp::S2l::OtnS2l::Otn::Labels::PathEgressLabel::Otn_


class MplsTeStandby::P2pP2mpTunnel::NniTunnels::NniTunnel::TunnelRestorationLsp::S2l::OtnS2l::Otn::Labels::PathEgressLabel::Otn_::BitMap : public ydk::Entity
{
    public:
        BitMap();
        ~BitMap();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf entry; //type: uint8

}; // MplsTeStandby::P2pP2mpTunnel::NniTunnels::NniTunnel::TunnelRestorationLsp::S2l::OtnS2l::Otn::Labels::PathEgressLabel::Otn_::BitMap


class MplsTeStandby::P2pP2mpTunnel::NniTunnels::NniTunnel::TunnelRestorationLsp::S2l::OtnS2l::Otn::Labels::ResvIngressLabel : public ydk::Entity
{
    public:
        ResvIngressLabel();
        ~ResvIngressLabel();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf label_type; //type: MplsTeMgmtGmplsLabel
        class Wdm; //type: MplsTeStandby::P2pP2mpTunnel::NniTunnels::NniTunnel::TunnelRestorationLsp::S2l::OtnS2l::Otn::Labels::ResvIngressLabel::Wdm
        class Otn_; //type: MplsTeStandby::P2pP2mpTunnel::NniTunnels::NniTunnel::TunnelRestorationLsp::S2l::OtnS2l::Otn::Labels::ResvIngressLabel::Otn_

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::P2pP2mpTunnel::NniTunnels::NniTunnel::TunnelRestorationLsp::S2l::OtnS2l::Otn::Labels::ResvIngressLabel::Wdm> wdm;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::P2pP2mpTunnel::NniTunnels::NniTunnel::TunnelRestorationLsp::S2l::OtnS2l::Otn::Labels::ResvIngressLabel::Otn_> otn;
        
}; // MplsTeStandby::P2pP2mpTunnel::NniTunnels::NniTunnel::TunnelRestorationLsp::S2l::OtnS2l::Otn::Labels::ResvIngressLabel


class MplsTeStandby::P2pP2mpTunnel::NniTunnels::NniTunnel::TunnelRestorationLsp::S2l::OtnS2l::Otn::Labels::ResvIngressLabel::Wdm : public ydk::Entity
{
    public:
        Wdm();
        ~Wdm();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf label_set; //type: boolean
        ydk::YLeaf grid; //type: GmplsUniMgmtWdmGrid
        ydk::YLeaf channel_spacing; //type: GmplsUniMgmtDwdmCs
        ydk::YLeaf identifier; //type: uint16
        ydk::YLeaf channel; //type: int16

}; // MplsTeStandby::P2pP2mpTunnel::NniTunnels::NniTunnel::TunnelRestorationLsp::S2l::OtnS2l::Otn::Labels::ResvIngressLabel::Wdm


class MplsTeStandby::P2pP2mpTunnel::NniTunnels::NniTunnel::TunnelRestorationLsp::S2l::OtnS2l::Otn::Labels::ResvIngressLabel::Otn_ : public ydk::Entity
{
    public:
        Otn_();
        ~Otn_();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf tpn; //type: uint16
        ydk::YLeaf bit_map_length; //type: uint16
        class BitMap; //type: MplsTeStandby::P2pP2mpTunnel::NniTunnels::NniTunnel::TunnelRestorationLsp::S2l::OtnS2l::Otn::Labels::ResvIngressLabel::Otn_::BitMap

        ydk::YList bit_map;
        
}; // MplsTeStandby::P2pP2mpTunnel::NniTunnels::NniTunnel::TunnelRestorationLsp::S2l::OtnS2l::Otn::Labels::ResvIngressLabel::Otn_


class MplsTeStandby::P2pP2mpTunnel::NniTunnels::NniTunnel::TunnelRestorationLsp::S2l::OtnS2l::Otn::Labels::ResvIngressLabel::Otn_::BitMap : public ydk::Entity
{
    public:
        BitMap();
        ~BitMap();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf entry; //type: uint8

}; // MplsTeStandby::P2pP2mpTunnel::NniTunnels::NniTunnel::TunnelRestorationLsp::S2l::OtnS2l::Otn::Labels::ResvIngressLabel::Otn_::BitMap


class MplsTeStandby::P2pP2mpTunnel::NniTunnels::NniTunnel::TunnelRestorationLsp::S2l::OtnS2l::Otn::Labels::ResvEgressLabel : public ydk::Entity
{
    public:
        ResvEgressLabel();
        ~ResvEgressLabel();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf label_type; //type: MplsTeMgmtGmplsLabel
        class Wdm; //type: MplsTeStandby::P2pP2mpTunnel::NniTunnels::NniTunnel::TunnelRestorationLsp::S2l::OtnS2l::Otn::Labels::ResvEgressLabel::Wdm
        class Otn_; //type: MplsTeStandby::P2pP2mpTunnel::NniTunnels::NniTunnel::TunnelRestorationLsp::S2l::OtnS2l::Otn::Labels::ResvEgressLabel::Otn_

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::P2pP2mpTunnel::NniTunnels::NniTunnel::TunnelRestorationLsp::S2l::OtnS2l::Otn::Labels::ResvEgressLabel::Wdm> wdm;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::P2pP2mpTunnel::NniTunnels::NniTunnel::TunnelRestorationLsp::S2l::OtnS2l::Otn::Labels::ResvEgressLabel::Otn_> otn;
        
}; // MplsTeStandby::P2pP2mpTunnel::NniTunnels::NniTunnel::TunnelRestorationLsp::S2l::OtnS2l::Otn::Labels::ResvEgressLabel


class MplsTeStandby::P2pP2mpTunnel::NniTunnels::NniTunnel::TunnelRestorationLsp::S2l::OtnS2l::Otn::Labels::ResvEgressLabel::Wdm : public ydk::Entity
{
    public:
        Wdm();
        ~Wdm();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf label_set; //type: boolean
        ydk::YLeaf grid; //type: GmplsUniMgmtWdmGrid
        ydk::YLeaf channel_spacing; //type: GmplsUniMgmtDwdmCs
        ydk::YLeaf identifier; //type: uint16
        ydk::YLeaf channel; //type: int16

}; // MplsTeStandby::P2pP2mpTunnel::NniTunnels::NniTunnel::TunnelRestorationLsp::S2l::OtnS2l::Otn::Labels::ResvEgressLabel::Wdm


class MplsTeStandby::P2pP2mpTunnel::NniTunnels::NniTunnel::TunnelRestorationLsp::S2l::OtnS2l::Otn::Labels::ResvEgressLabel::Otn_ : public ydk::Entity
{
    public:
        Otn_();
        ~Otn_();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf tpn; //type: uint16
        ydk::YLeaf bit_map_length; //type: uint16
        class BitMap; //type: MplsTeStandby::P2pP2mpTunnel::NniTunnels::NniTunnel::TunnelRestorationLsp::S2l::OtnS2l::Otn::Labels::ResvEgressLabel::Otn_::BitMap

        ydk::YList bit_map;
        
}; // MplsTeStandby::P2pP2mpTunnel::NniTunnels::NniTunnel::TunnelRestorationLsp::S2l::OtnS2l::Otn::Labels::ResvEgressLabel::Otn_


class MplsTeStandby::P2pP2mpTunnel::NniTunnels::NniTunnel::TunnelRestorationLsp::S2l::OtnS2l::Otn::Labels::ResvEgressLabel::Otn_::BitMap : public ydk::Entity
{
    public:
        BitMap();
        ~BitMap();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf entry; //type: uint8

}; // MplsTeStandby::P2pP2mpTunnel::NniTunnels::NniTunnel::TunnelRestorationLsp::S2l::OtnS2l::Otn::Labels::ResvEgressLabel::Otn_::BitMap


class MplsTeStandby::P2pP2mpTunnel::NniTunnels::NniTunnel::TunnelRestorationLsp::S2l::OtnS2l::Aps : public ydk::Entity
{
    public:
        Aps();
        ~Aps();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class ProtectionInfo; //type: MplsTeStandby::P2pP2mpTunnel::NniTunnels::NniTunnel::TunnelRestorationLsp::S2l::OtnS2l::Aps::ProtectionInfo

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::P2pP2mpTunnel::NniTunnels::NniTunnel::TunnelRestorationLsp::S2l::OtnS2l::Aps::ProtectionInfo> protection_info;
        
}; // MplsTeStandby::P2pP2mpTunnel::NniTunnels::NniTunnel::TunnelRestorationLsp::S2l::OtnS2l::Aps


class MplsTeStandby::P2pP2mpTunnel::NniTunnels::NniTunnel::TunnelRestorationLsp::S2l::OtnS2l::Aps::ProtectionInfo : public ydk::Entity
{
    public:
        ProtectionInfo();
        ~ProtectionInfo();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf sbit; //type: boolean
        ydk::YLeaf pbit; //type: boolean
        ydk::YLeaf nbit; //type: boolean
        ydk::YLeaf obit; //type: boolean
        ydk::YLeaf protect_type; //type: TeProtect
        ydk::YLeaf is_wtr_present; //type: boolean
        ydk::YLeaf wtr_timeout; //type: uint32
        ydk::YLeaf is_hopresent; //type: boolean
        ydk::YLeaf ho_timeout; //type: uint32
        ydk::YLeaf is_snc_mode_present; //type: boolean
        ydk::YLeaf snc_mode; //type: TeApsSncMode
        ydk::YLeaf tcm_id; //type: uint32
        ydk::YLeaf path_prot_profile_type; //type: TePathProtProfile

}; // MplsTeStandby::P2pP2mpTunnel::NniTunnels::NniTunnel::TunnelRestorationLsp::S2l::OtnS2l::Aps::ProtectionInfo


class MplsTeStandby::P2pP2mpTunnel::NniTunnels::NniTunnel::TunnelRestorationLsp::S2l::HeadEndBfdInfo : public ydk::Entity
{
    public:
        HeadEndBfdInfo();
        ~HeadEndBfdInfo();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf creation_time; //type: uint32
        ydk::YLeaf lspbfd_type; //type: TeVifBfd
        ydk::YLeaf is_redundant; //type: boolean
        ydk::YLeaf bfd_reverse_path_stale; //type: boolean
        class SessionInfo; //type: MplsTeStandby::P2pP2mpTunnel::NniTunnels::NniTunnel::TunnelRestorationLsp::S2l::HeadEndBfdInfo::SessionInfo
        class DeletionHistory; //type: MplsTeStandby::P2pP2mpTunnel::NniTunnels::NniTunnel::TunnelRestorationLsp::S2l::HeadEndBfdInfo::DeletionHistory
        class BfdReversePathLabel; //type: MplsTeStandby::P2pP2mpTunnel::NniTunnels::NniTunnel::TunnelRestorationLsp::S2l::HeadEndBfdInfo::BfdReversePathLabel

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::P2pP2mpTunnel::NniTunnels::NniTunnel::TunnelRestorationLsp::S2l::HeadEndBfdInfo::SessionInfo> session_info;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::P2pP2mpTunnel::NniTunnels::NniTunnel::TunnelRestorationLsp::S2l::HeadEndBfdInfo::DeletionHistory> deletion_history;
        ydk::YList bfd_reverse_path_label;
        
}; // MplsTeStandby::P2pP2mpTunnel::NniTunnels::NniTunnel::TunnelRestorationLsp::S2l::HeadEndBfdInfo


class MplsTeStandby::P2pP2mpTunnel::NniTunnels::NniTunnel::TunnelRestorationLsp::S2l::HeadEndBfdInfo::SessionInfo : public ydk::Entity
{
    public:
        SessionInfo();
        ~SessionInfo();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf state; //type: TeBfdLspSessionState
        ydk::YLeaf state_change_time; //type: uint32

}; // MplsTeStandby::P2pP2mpTunnel::NniTunnels::NniTunnel::TunnelRestorationLsp::S2l::HeadEndBfdInfo::SessionInfo


class MplsTeStandby::P2pP2mpTunnel::NniTunnels::NniTunnel::TunnelRestorationLsp::S2l::HeadEndBfdInfo::DeletionHistory : public ydk::Entity
{
    public:
        DeletionHistory();
        ~DeletionHistory();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf lsp_id; //type: uint16
        ydk::YLeaf deletion_time; //type: uint32
        ydk::YLeaf deletion_reason; //type: string
        ydk::YLeaf deletion_diagnostic_code; //type: uint32

}; // MplsTeStandby::P2pP2mpTunnel::NniTunnels::NniTunnel::TunnelRestorationLsp::S2l::HeadEndBfdInfo::DeletionHistory


class MplsTeStandby::P2pP2mpTunnel::NniTunnels::NniTunnel::TunnelRestorationLsp::S2l::HeadEndBfdInfo::BfdReversePathLabel : public ydk::Entity
{
    public:
        BfdReversePathLabel();
        ~BfdReversePathLabel();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf entry; //type: uint32

}; // MplsTeStandby::P2pP2mpTunnel::NniTunnels::NniTunnel::TunnelRestorationLsp::S2l::HeadEndBfdInfo::BfdReversePathLabel


class MplsTeStandby::P2pP2mpTunnel::NniTunnels::NniTunnel::TunnelRestorationLsp::S2l::TailEndBfdInfo : public ydk::Entity
{
    public:
        TailEndBfdInfo();
        ~TailEndBfdInfo();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf failure_diagnostic_code; //type: uint32
        ydk::YLeaf failure_reason; //type: string
        ydk::YLeaf local_discriminator; //type: uint32
        ydk::YLeaf remote_discriminator; //type: uint32
        ydk::YLeaf min_interval; //type: uint32
        ydk::YLeaf min_interval_default; //type: boolean
        ydk::YLeaf multiplier; //type: uint8
        ydk::YLeaf multiplier_default; //type: boolean
        class SessionInfo; //type: MplsTeStandby::P2pP2mpTunnel::NniTunnels::NniTunnel::TunnelRestorationLsp::S2l::TailEndBfdInfo::SessionInfo

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::P2pP2mpTunnel::NniTunnels::NniTunnel::TunnelRestorationLsp::S2l::TailEndBfdInfo::SessionInfo> session_info;
        
}; // MplsTeStandby::P2pP2mpTunnel::NniTunnels::NniTunnel::TunnelRestorationLsp::S2l::TailEndBfdInfo


class MplsTeStandby::P2pP2mpTunnel::NniTunnels::NniTunnel::TunnelRestorationLsp::S2l::TailEndBfdInfo::SessionInfo : public ydk::Entity
{
    public:
        SessionInfo();
        ~SessionInfo();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf state; //type: TeBfdLspSessionState
        ydk::YLeaf state_change_time; //type: uint32

}; // MplsTeStandby::P2pP2mpTunnel::NniTunnels::NniTunnel::TunnelRestorationLsp::S2l::TailEndBfdInfo::SessionInfo


class MplsTeStandby::P2pP2mpTunnel::NniTunnels::NniTunnel::TunnelRestorationLsp::S2l::SrlgCollection : public ydk::Entity
{
    public:
        SrlgCollection();
        ~SrlgCollection();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf srlg_collect_type; //type: TeSrlgCollectRequest
        class DiscoveredSrlg; //type: MplsTeStandby::P2pP2mpTunnel::NniTunnels::NniTunnel::TunnelRestorationLsp::S2l::SrlgCollection::DiscoveredSrlg

        ydk::YList discovered_srlg;
        
}; // MplsTeStandby::P2pP2mpTunnel::NniTunnels::NniTunnel::TunnelRestorationLsp::S2l::SrlgCollection


class MplsTeStandby::P2pP2mpTunnel::NniTunnels::NniTunnel::TunnelRestorationLsp::S2l::SrlgCollection::DiscoveredSrlg : public ydk::Entity
{
    public:
        DiscoveredSrlg();
        ~DiscoveredSrlg();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf entry; //type: uint32

}; // MplsTeStandby::P2pP2mpTunnel::NniTunnels::NniTunnel::TunnelRestorationLsp::S2l::SrlgCollection::DiscoveredSrlg


class MplsTeStandby::P2pP2mpTunnel::NniTunnels::NniTunnel::TunnelRestorationLsp::S2l::Association : public ydk::Entity
{
    public:
        Association();
        ~Association();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf s2l_association_type; //type: uint16
        ydk::YLeaf s2l_association_tie_role; //type: TeAssociationTieRole
        ydk::YLeaf s2l_association_id; //type: uint16
        ydk::YLeaf s2l_association_source; //type: string
        ydk::YLeaf s2l_global_source; //type: uint32
        class S2lExtendedId; //type: MplsTeStandby::P2pP2mpTunnel::NniTunnels::NniTunnel::TunnelRestorationLsp::S2l::Association::S2lExtendedId

        ydk::YList s2l_extended_id;
        
}; // MplsTeStandby::P2pP2mpTunnel::NniTunnels::NniTunnel::TunnelRestorationLsp::S2l::Association


class MplsTeStandby::P2pP2mpTunnel::NniTunnels::NniTunnel::TunnelRestorationLsp::S2l::Association::S2lExtendedId : public ydk::Entity
{
    public:
        S2lExtendedId();
        ~S2lExtendedId();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf entry; //type: uint32

}; // MplsTeStandby::P2pP2mpTunnel::NniTunnels::NniTunnel::TunnelRestorationLsp::S2l::Association::S2lExtendedId


class MplsTeStandby::P2pP2mpTunnel::NniTunnels::NniTunnel::TunnelRestorationLsp::S2l::Protection : public ydk::Entity
{
    public:
        Protection();
        ~Protection();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf s2l_secondary; //type: boolean
        ydk::YLeaf s2l_protecting; //type: boolean
        ydk::YLeaf s2l_notification; //type: boolean
        ydk::YLeaf s2l_operational; //type: boolean
        ydk::YLeaf enhanced; //type: boolean
        ydk::YLeaf ded1_plus1; //type: boolean
        ydk::YLeaf ded1_to1; //type: boolean
        ydk::YLeaf shared; //type: boolean
        ydk::YLeaf link_unprotected; //type: boolean
        ydk::YLeaf extra_traffic; //type: boolean
        ydk::YLeaf any; //type: boolean
        ydk::YLeaf rerouting; //type: boolean
        ydk::YLeaf rerouting_no_et; //type: boolean
        ydk::YLeaf one_to_n_protection_et; //type: boolean
        ydk::YLeaf one_plus_one_uni; //type: boolean
        ydk::YLeaf one_plus_one_bi; //type: boolean
        ydk::YLeaf lsp_unprotected; //type: boolean

}; // MplsTeStandby::P2pP2mpTunnel::NniTunnels::NniTunnel::TunnelRestorationLsp::S2l::Protection


class MplsTeStandby::P2pP2mpTunnel::NniTunnels::NniTunnel::TunnelRestorationLsp::S2l::ReverseLspFec : public ydk::Entity
{
    public:
        ReverseLspFec();
        ~ReverseLspFec();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf fec_lsp_id; //type: uint16
        ydk::YLeaf fec_tunnel_id; //type: uint16
        ydk::YLeaf fec_extended_tunnel_id; //type: string
        ydk::YLeaf fec_source; //type: string
        ydk::YLeaf fec_vrf; //type: string
        class FecDestinationInfo; //type: MplsTeStandby::P2pP2mpTunnel::NniTunnels::NniTunnel::TunnelRestorationLsp::S2l::ReverseLspFec::FecDestinationInfo

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::P2pP2mpTunnel::NniTunnels::NniTunnel::TunnelRestorationLsp::S2l::ReverseLspFec::FecDestinationInfo> fec_destination_info;
        
}; // MplsTeStandby::P2pP2mpTunnel::NniTunnels::NniTunnel::TunnelRestorationLsp::S2l::ReverseLspFec


class MplsTeStandby::P2pP2mpTunnel::NniTunnels::NniTunnel::TunnelRestorationLsp::S2l::ReverseLspFec::FecDestinationInfo : public ydk::Entity
{
    public:
        FecDestinationInfo();
        ~FecDestinationInfo();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf fec_ctype; //type: MplsLibC
        ydk::YLeaf p2p_lsp_destination; //type: string
        ydk::YLeaf fec_destination_p2mp_id; //type: uint32

}; // MplsTeStandby::P2pP2mpTunnel::NniTunnels::NniTunnel::TunnelRestorationLsp::S2l::ReverseLspFec::FecDestinationInfo


class MplsTeStandby::P2pP2mpTunnel::NniTunnels::NniTunnel::TunnelRestorationLsp::S2l::ReverseTspec : public ydk::Entity
{
    public:
        ReverseTspec();
        ~ReverseTspec();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf average_rate; //type: uint64
        ydk::YLeaf maximum_burst; //type: uint64
        ydk::YLeaf peak_rate; //type: uint64

}; // MplsTeStandby::P2pP2mpTunnel::NniTunnels::NniTunnel::TunnelRestorationLsp::S2l::ReverseTspec


class MplsTeStandby::P2pP2mpTunnel::NniTunnels::NniTunnel::TunnelRestorationLsp::S2l::FlexInfo : public ydk::Entity
{
    public:
        FlexInfo();
        ~FlexInfo();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf entry_exists; //type: boolean
        ydk::YLeaf in_label; //type: uint32
        ydk::YLeaf bfd_created; //type: boolean
        ydk::YLeaf bfd_up; //type: boolean
        ydk::YLeaf oam_created; //type: boolean
        ydk::YLeaf bfd_next_hop; //type: string
        ydk::YLeaf bfd_tun_ifh; //type: string
        ydk::YLeaf bfd_out_ifh; //type: string
        ydk::YLeaf bfd_int_label; //type: uint32
        ydk::YLeaf bfd_egress_label; //type: uint32
        ydk::YLeaf fault_ldi_lockout; //type: boolean
        ydk::YLeaf fault_ldi; //type: boolean
        ydk::YLeaf fault_lkr; //type: boolean
        ydk::YLeaf fault_ais; //type: boolean
        ydk::YLeaf fault_time; //type: uint32
        class FlexFec; //type: MplsTeStandby::P2pP2mpTunnel::NniTunnels::NniTunnel::TunnelRestorationLsp::S2l::FlexInfo::FlexFec

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::P2pP2mpTunnel::NniTunnels::NniTunnel::TunnelRestorationLsp::S2l::FlexInfo::FlexFec> flex_fec;
        
}; // MplsTeStandby::P2pP2mpTunnel::NniTunnels::NniTunnel::TunnelRestorationLsp::S2l::FlexInfo


class MplsTeStandby::P2pP2mpTunnel::NniTunnels::NniTunnel::TunnelRestorationLsp::S2l::FlexInfo::FlexFec : public ydk::Entity
{
    public:
        FlexFec();
        ~FlexFec();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf s2l_fec_subgroup_id; //type: uint16
        ydk::YLeaf s2l_fec_lsp_id; //type: uint16
        ydk::YLeaf s2l_fec_tunnel_id; //type: uint16
        ydk::YLeaf s2l_fec_extended_tunnel_id; //type: string
        ydk::YLeaf s2l_fec_source; //type: string
        ydk::YLeaf s2l_fec_dest; //type: string
        ydk::YLeaf s2l_fec_p2mp_id; //type: uint32
        ydk::YLeaf s2l_fec_subgroup_originator; //type: string
        ydk::YLeaf s2l_fec_ctype; //type: MplsLibC
        ydk::YLeaf s2l_fec_vrf; //type: string

}; // MplsTeStandby::P2pP2mpTunnel::NniTunnels::NniTunnel::TunnelRestorationLsp::S2l::FlexInfo::FlexFec


class MplsTeStandby::P2pP2mpTunnel::NniTunnels::NniTunnel::TunnelRestorationLsp::S2l::LspWrapInfo : public ydk::Entity
{
    public:
        LspWrapInfo();
        ~LspWrapInfo();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf lsp_wrap_protection_enable; //type: boolean
        ydk::YLeaf lsp_wrap_protection_label; //type: uint32
        ydk::YLeaf reverse_egress_interface; //type: string
        ydk::YLeaf reverse_lsp_label; //type: uint32
        ydk::YLeaf lsp_wrap_protection_state; //type: MplsTeLspWrapState

}; // MplsTeStandby::P2pP2mpTunnel::NniTunnels::NniTunnel::TunnelRestorationLsp::S2l::LspWrapInfo


class MplsTeStandby::P2pP2mpTunnel::NniTunnels::NniTunnel::TunnelRestorationLsp::S2l::DiversityInfo : public ydk::Entity
{
    public:
        DiversityInfo();
        ~DiversityInfo();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf diversity_type; //type: TePpDiversity

}; // MplsTeStandby::P2pP2mpTunnel::NniTunnels::NniTunnel::TunnelRestorationLsp::S2l::DiversityInfo


class MplsTeStandby::P2pP2mpTunnel::NniTunnels::NniTunnel::TunnelRestorationLsp::S2l::AccumulatedPathMetrics : public ydk::Entity
{
    public:
        AccumulatedPathMetrics();
        ~AccumulatedPathMetrics();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf te_metric; //type: uint64
        ydk::YLeaf igp_metric; //type: uint64
        ydk::YLeaf delay_metric; //type: uint64

}; // MplsTeStandby::P2pP2mpTunnel::NniTunnels::NniTunnel::TunnelRestorationLsp::S2l::AccumulatedPathMetrics


class MplsTeStandby::P2pP2mpTunnel::NniTunnels::NniTunnel::TunnelRestorationLsp::S2l::AccumulatedReversePathMetrics : public ydk::Entity
{
    public:
        AccumulatedReversePathMetrics();
        ~AccumulatedReversePathMetrics();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf te_metric; //type: uint64
        ydk::YLeaf igp_metric; //type: uint64
        ydk::YLeaf delay_metric; //type: uint64

}; // MplsTeStandby::P2pP2mpTunnel::NniTunnels::NniTunnel::TunnelRestorationLsp::S2l::AccumulatedReversePathMetrics


class MplsTeStandby::P2pP2mpTunnel::NniTunnels::NniTunnel::TunnelRestorationLsp::S2l::S2lReverseLspSubObj : public ydk::Entity
{
    public:
        S2lReverseLspSubObj();
        ~S2lReverseLspSubObj();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf entry; //type: uint8

}; // MplsTeStandby::P2pP2mpTunnel::NniTunnels::NniTunnel::TunnelRestorationLsp::S2l::S2lReverseLspSubObj


class MplsTeStandby::P2pP2mpTunnel::NniTunnels::NniTunnel::TunnelRestorationLsp::S2l::SharedRiskLinkGroup : public ydk::Entity
{
    public:
        SharedRiskLinkGroup();
        ~SharedRiskLinkGroup();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf shared_risk_group; //type: uint32
        ydk::YLeaf srlg_name; //type: string

}; // MplsTeStandby::P2pP2mpTunnel::NniTunnels::NniTunnel::TunnelRestorationLsp::S2l::SharedRiskLinkGroup


class MplsTeStandby::P2pP2mpTunnel::NniTunnels::NniTunnel::TunnelRestorationLsp::S2l::OutEro : public ydk::Entity
{
    public:
        OutEro();
        ~OutEro();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf ero_type; //type: RsvpMgmtEroSubobj
        class Ipv4eroSubObject; //type: MplsTeStandby::P2pP2mpTunnel::NniTunnels::NniTunnel::TunnelRestorationLsp::S2l::OutEro::Ipv4eroSubObject
        class UnnumberedEroSubObject; //type: MplsTeStandby::P2pP2mpTunnel::NniTunnels::NniTunnel::TunnelRestorationLsp::S2l::OutEro::UnnumberedEroSubObject

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::P2pP2mpTunnel::NniTunnels::NniTunnel::TunnelRestorationLsp::S2l::OutEro::Ipv4eroSubObject> ipv4ero_sub_object;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::P2pP2mpTunnel::NniTunnels::NniTunnel::TunnelRestorationLsp::S2l::OutEro::UnnumberedEroSubObject> unnumbered_ero_sub_object;
        
}; // MplsTeStandby::P2pP2mpTunnel::NniTunnels::NniTunnel::TunnelRestorationLsp::S2l::OutEro


class MplsTeStandby::P2pP2mpTunnel::NniTunnels::NniTunnel::TunnelRestorationLsp::S2l::OutEro::Ipv4eroSubObject : public ydk::Entity
{
    public:
        Ipv4eroSubObject();
        ~Ipv4eroSubObject();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf is_strict_route; //type: boolean
        ydk::YLeaf ero_address; //type: string
        ydk::YLeaf prefix_length; //type: uint8

}; // MplsTeStandby::P2pP2mpTunnel::NniTunnels::NniTunnel::TunnelRestorationLsp::S2l::OutEro::Ipv4eroSubObject


class MplsTeStandby::P2pP2mpTunnel::NniTunnels::NniTunnel::TunnelRestorationLsp::S2l::OutEro::UnnumberedEroSubObject : public ydk::Entity
{
    public:
        UnnumberedEroSubObject();
        ~UnnumberedEroSubObject();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf is_strict_route; //type: boolean
        ydk::YLeaf ero_interface_id; //type: uint32
        ydk::YLeaf ero_router_id; //type: string
        ydk::YLeaf status; //type: RsvpMgmtEroSubobjStatus

}; // MplsTeStandby::P2pP2mpTunnel::NniTunnels::NniTunnel::TunnelRestorationLsp::S2l::OutEro::UnnumberedEroSubObject


class MplsTeStandby::P2pP2mpTunnel::NniTunnels::NniTunnel::TunnelRestorationLsp::S2l::InEro : public ydk::Entity
{
    public:
        InEro();
        ~InEro();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf ero_type; //type: RsvpMgmtEroSubobj
        class Ipv4eroSubObject; //type: MplsTeStandby::P2pP2mpTunnel::NniTunnels::NniTunnel::TunnelRestorationLsp::S2l::InEro::Ipv4eroSubObject
        class UnnumberedEroSubObject; //type: MplsTeStandby::P2pP2mpTunnel::NniTunnels::NniTunnel::TunnelRestorationLsp::S2l::InEro::UnnumberedEroSubObject

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::P2pP2mpTunnel::NniTunnels::NniTunnel::TunnelRestorationLsp::S2l::InEro::Ipv4eroSubObject> ipv4ero_sub_object;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::P2pP2mpTunnel::NniTunnels::NniTunnel::TunnelRestorationLsp::S2l::InEro::UnnumberedEroSubObject> unnumbered_ero_sub_object;
        
}; // MplsTeStandby::P2pP2mpTunnel::NniTunnels::NniTunnel::TunnelRestorationLsp::S2l::InEro


class MplsTeStandby::P2pP2mpTunnel::NniTunnels::NniTunnel::TunnelRestorationLsp::S2l::InEro::Ipv4eroSubObject : public ydk::Entity
{
    public:
        Ipv4eroSubObject();
        ~Ipv4eroSubObject();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf is_strict_route; //type: boolean
        ydk::YLeaf ero_address; //type: string
        ydk::YLeaf prefix_length; //type: uint8

}; // MplsTeStandby::P2pP2mpTunnel::NniTunnels::NniTunnel::TunnelRestorationLsp::S2l::InEro::Ipv4eroSubObject


class MplsTeStandby::P2pP2mpTunnel::NniTunnels::NniTunnel::TunnelRestorationLsp::S2l::InEro::UnnumberedEroSubObject : public ydk::Entity
{
    public:
        UnnumberedEroSubObject();
        ~UnnumberedEroSubObject();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf is_strict_route; //type: boolean
        ydk::YLeaf ero_interface_id; //type: uint32
        ydk::YLeaf ero_router_id; //type: string
        ydk::YLeaf status; //type: RsvpMgmtEroSubobjStatus

}; // MplsTeStandby::P2pP2mpTunnel::NniTunnels::NniTunnel::TunnelRestorationLsp::S2l::InEro::UnnumberedEroSubObject


class MplsTeStandby::P2pP2mpTunnel::NniTunnels::NniTunnel::TunnelRestorationLsp::S2l::PathRro : public ydk::Entity
{
    public:
        PathRro();
        ~PathRro();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf rro_type; //type: RsvpMgmtRroSubobj
        class Ipv4rroSubObject; //type: MplsTeStandby::P2pP2mpTunnel::NniTunnels::NniTunnel::TunnelRestorationLsp::S2l::PathRro::Ipv4rroSubObject
        class LabelRroSubObject; //type: MplsTeStandby::P2pP2mpTunnel::NniTunnels::NniTunnel::TunnelRestorationLsp::S2l::PathRro::LabelRroSubObject
        class UnnumberedRroSubObject; //type: MplsTeStandby::P2pP2mpTunnel::NniTunnels::NniTunnel::TunnelRestorationLsp::S2l::PathRro::UnnumberedRroSubObject
        class SrlgRroSubObject; //type: MplsTeStandby::P2pP2mpTunnel::NniTunnels::NniTunnel::TunnelRestorationLsp::S2l::PathRro::SrlgRroSubObject

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::P2pP2mpTunnel::NniTunnels::NniTunnel::TunnelRestorationLsp::S2l::PathRro::Ipv4rroSubObject> ipv4rro_sub_object;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::P2pP2mpTunnel::NniTunnels::NniTunnel::TunnelRestorationLsp::S2l::PathRro::LabelRroSubObject> label_rro_sub_object;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::P2pP2mpTunnel::NniTunnels::NniTunnel::TunnelRestorationLsp::S2l::PathRro::UnnumberedRroSubObject> unnumbered_rro_sub_object;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::P2pP2mpTunnel::NniTunnels::NniTunnel::TunnelRestorationLsp::S2l::PathRro::SrlgRroSubObject> srlg_rro_sub_object;
        
}; // MplsTeStandby::P2pP2mpTunnel::NniTunnels::NniTunnel::TunnelRestorationLsp::S2l::PathRro


class MplsTeStandby::P2pP2mpTunnel::NniTunnels::NniTunnel::TunnelRestorationLsp::S2l::PathRro::Ipv4rroSubObject : public ydk::Entity
{
    public:
        Ipv4rroSubObject();
        ~Ipv4rroSubObject();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf rro_address; //type: string
        class Flags; //type: MplsTeStandby::P2pP2mpTunnel::NniTunnels::NniTunnel::TunnelRestorationLsp::S2l::PathRro::Ipv4rroSubObject::Flags

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::P2pP2mpTunnel::NniTunnels::NniTunnel::TunnelRestorationLsp::S2l::PathRro::Ipv4rroSubObject::Flags> flags;
        
}; // MplsTeStandby::P2pP2mpTunnel::NniTunnels::NniTunnel::TunnelRestorationLsp::S2l::PathRro::Ipv4rroSubObject


class MplsTeStandby::P2pP2mpTunnel::NniTunnels::NniTunnel::TunnelRestorationLsp::S2l::PathRro::Ipv4rroSubObject::Flags : public ydk::Entity
{
    public:
        Flags();
        ~Flags();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf is_protection_available; //type: boolean
        ydk::YLeaf is_protection_in_use; //type: boolean
        ydk::YLeaf is_bandwidth_protected; //type: boolean
        ydk::YLeaf is_node_protection_available; //type: boolean
        ydk::YLeaf is_node_id; //type: boolean

}; // MplsTeStandby::P2pP2mpTunnel::NniTunnels::NniTunnel::TunnelRestorationLsp::S2l::PathRro::Ipv4rroSubObject::Flags


class MplsTeStandby::P2pP2mpTunnel::NniTunnels::NniTunnel::TunnelRestorationLsp::S2l::PathRro::LabelRroSubObject : public ydk::Entity
{
    public:
        LabelRroSubObject();
        ~LabelRroSubObject();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf label; //type: uint32
        ydk::YLeaf is_label_variable_length; //type: boolean
        class Flags; //type: MplsTeStandby::P2pP2mpTunnel::NniTunnels::NniTunnel::TunnelRestorationLsp::S2l::PathRro::LabelRroSubObject::Flags
        class VariableLengthLabel; //type: MplsTeStandby::P2pP2mpTunnel::NniTunnels::NniTunnel::TunnelRestorationLsp::S2l::PathRro::LabelRroSubObject::VariableLengthLabel

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::P2pP2mpTunnel::NniTunnels::NniTunnel::TunnelRestorationLsp::S2l::PathRro::LabelRroSubObject::Flags> flags;
        ydk::YList variable_length_label;
        
}; // MplsTeStandby::P2pP2mpTunnel::NniTunnels::NniTunnel::TunnelRestorationLsp::S2l::PathRro::LabelRroSubObject


class MplsTeStandby::P2pP2mpTunnel::NniTunnels::NniTunnel::TunnelRestorationLsp::S2l::PathRro::LabelRroSubObject::Flags : public ydk::Entity
{
    public:
        Flags();
        ~Flags();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf is_global_label; //type: boolean

}; // MplsTeStandby::P2pP2mpTunnel::NniTunnels::NniTunnel::TunnelRestorationLsp::S2l::PathRro::LabelRroSubObject::Flags


class MplsTeStandby::P2pP2mpTunnel::NniTunnels::NniTunnel::TunnelRestorationLsp::S2l::PathRro::LabelRroSubObject::VariableLengthLabel : public ydk::Entity
{
    public:
        VariableLengthLabel();
        ~VariableLengthLabel();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf entry; //type: uint32

}; // MplsTeStandby::P2pP2mpTunnel::NniTunnels::NniTunnel::TunnelRestorationLsp::S2l::PathRro::LabelRroSubObject::VariableLengthLabel


class MplsTeStandby::P2pP2mpTunnel::NniTunnels::NniTunnel::TunnelRestorationLsp::S2l::PathRro::UnnumberedRroSubObject : public ydk::Entity
{
    public:
        UnnumberedRroSubObject();
        ~UnnumberedRroSubObject();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf interface_address; //type: string
        ydk::YLeaf interface_id; //type: uint32
        class Flags; //type: MplsTeStandby::P2pP2mpTunnel::NniTunnels::NniTunnel::TunnelRestorationLsp::S2l::PathRro::UnnumberedRroSubObject::Flags

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::P2pP2mpTunnel::NniTunnels::NniTunnel::TunnelRestorationLsp::S2l::PathRro::UnnumberedRroSubObject::Flags> flags;
        
}; // MplsTeStandby::P2pP2mpTunnel::NniTunnels::NniTunnel::TunnelRestorationLsp::S2l::PathRro::UnnumberedRroSubObject


class MplsTeStandby::P2pP2mpTunnel::NniTunnels::NniTunnel::TunnelRestorationLsp::S2l::PathRro::UnnumberedRroSubObject::Flags : public ydk::Entity
{
    public:
        Flags();
        ~Flags();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf is_protection_available; //type: boolean
        ydk::YLeaf is_protection_in_use; //type: boolean
        ydk::YLeaf is_bandwidth_protected; //type: boolean
        ydk::YLeaf is_node_protection_available; //type: boolean
        ydk::YLeaf is_node_id; //type: boolean

}; // MplsTeStandby::P2pP2mpTunnel::NniTunnels::NniTunnel::TunnelRestorationLsp::S2l::PathRro::UnnumberedRroSubObject::Flags


class MplsTeStandby::P2pP2mpTunnel::NniTunnels::NniTunnel::TunnelRestorationLsp::S2l::PathRro::SrlgRroSubObject : public ydk::Entity
{
    public:
        SrlgRroSubObject();
        ~SrlgRroSubObject();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class SrlGs; //type: MplsTeStandby::P2pP2mpTunnel::NniTunnels::NniTunnel::TunnelRestorationLsp::S2l::PathRro::SrlgRroSubObject::SrlGs

        ydk::YList srl_gs;
        
}; // MplsTeStandby::P2pP2mpTunnel::NniTunnels::NniTunnel::TunnelRestorationLsp::S2l::PathRro::SrlgRroSubObject


class MplsTeStandby::P2pP2mpTunnel::NniTunnels::NniTunnel::TunnelRestorationLsp::S2l::PathRro::SrlgRroSubObject::SrlGs : public ydk::Entity
{
    public:
        SrlGs();
        ~SrlGs();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf entry; //type: uint32

}; // MplsTeStandby::P2pP2mpTunnel::NniTunnels::NniTunnel::TunnelRestorationLsp::S2l::PathRro::SrlgRroSubObject::SrlGs


class MplsTeStandby::P2pP2mpTunnel::NniTunnels::NniTunnel::TunnelRestorationLsp::S2l::ResvRro : public ydk::Entity
{
    public:
        ResvRro();
        ~ResvRro();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf rro_type; //type: RsvpMgmtRroSubobj
        class Ipv4rroSubObject; //type: MplsTeStandby::P2pP2mpTunnel::NniTunnels::NniTunnel::TunnelRestorationLsp::S2l::ResvRro::Ipv4rroSubObject
        class LabelRroSubObject; //type: MplsTeStandby::P2pP2mpTunnel::NniTunnels::NniTunnel::TunnelRestorationLsp::S2l::ResvRro::LabelRroSubObject
        class UnnumberedRroSubObject; //type: MplsTeStandby::P2pP2mpTunnel::NniTunnels::NniTunnel::TunnelRestorationLsp::S2l::ResvRro::UnnumberedRroSubObject
        class SrlgRroSubObject; //type: MplsTeStandby::P2pP2mpTunnel::NniTunnels::NniTunnel::TunnelRestorationLsp::S2l::ResvRro::SrlgRroSubObject

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::P2pP2mpTunnel::NniTunnels::NniTunnel::TunnelRestorationLsp::S2l::ResvRro::Ipv4rroSubObject> ipv4rro_sub_object;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::P2pP2mpTunnel::NniTunnels::NniTunnel::TunnelRestorationLsp::S2l::ResvRro::LabelRroSubObject> label_rro_sub_object;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::P2pP2mpTunnel::NniTunnels::NniTunnel::TunnelRestorationLsp::S2l::ResvRro::UnnumberedRroSubObject> unnumbered_rro_sub_object;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::P2pP2mpTunnel::NniTunnels::NniTunnel::TunnelRestorationLsp::S2l::ResvRro::SrlgRroSubObject> srlg_rro_sub_object;
        
}; // MplsTeStandby::P2pP2mpTunnel::NniTunnels::NniTunnel::TunnelRestorationLsp::S2l::ResvRro


class MplsTeStandby::P2pP2mpTunnel::NniTunnels::NniTunnel::TunnelRestorationLsp::S2l::ResvRro::Ipv4rroSubObject : public ydk::Entity
{
    public:
        Ipv4rroSubObject();
        ~Ipv4rroSubObject();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf rro_address; //type: string
        class Flags; //type: MplsTeStandby::P2pP2mpTunnel::NniTunnels::NniTunnel::TunnelRestorationLsp::S2l::ResvRro::Ipv4rroSubObject::Flags

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::P2pP2mpTunnel::NniTunnels::NniTunnel::TunnelRestorationLsp::S2l::ResvRro::Ipv4rroSubObject::Flags> flags;
        
}; // MplsTeStandby::P2pP2mpTunnel::NniTunnels::NniTunnel::TunnelRestorationLsp::S2l::ResvRro::Ipv4rroSubObject


class MplsTeStandby::P2pP2mpTunnel::NniTunnels::NniTunnel::TunnelRestorationLsp::S2l::ResvRro::Ipv4rroSubObject::Flags : public ydk::Entity
{
    public:
        Flags();
        ~Flags();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf is_protection_available; //type: boolean
        ydk::YLeaf is_protection_in_use; //type: boolean
        ydk::YLeaf is_bandwidth_protected; //type: boolean
        ydk::YLeaf is_node_protection_available; //type: boolean
        ydk::YLeaf is_node_id; //type: boolean

}; // MplsTeStandby::P2pP2mpTunnel::NniTunnels::NniTunnel::TunnelRestorationLsp::S2l::ResvRro::Ipv4rroSubObject::Flags


class MplsTeStandby::P2pP2mpTunnel::NniTunnels::NniTunnel::TunnelRestorationLsp::S2l::ResvRro::LabelRroSubObject : public ydk::Entity
{
    public:
        LabelRroSubObject();
        ~LabelRroSubObject();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf label; //type: uint32
        ydk::YLeaf is_label_variable_length; //type: boolean
        class Flags; //type: MplsTeStandby::P2pP2mpTunnel::NniTunnels::NniTunnel::TunnelRestorationLsp::S2l::ResvRro::LabelRroSubObject::Flags
        class VariableLengthLabel; //type: MplsTeStandby::P2pP2mpTunnel::NniTunnels::NniTunnel::TunnelRestorationLsp::S2l::ResvRro::LabelRroSubObject::VariableLengthLabel

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::P2pP2mpTunnel::NniTunnels::NniTunnel::TunnelRestorationLsp::S2l::ResvRro::LabelRroSubObject::Flags> flags;
        ydk::YList variable_length_label;
        
}; // MplsTeStandby::P2pP2mpTunnel::NniTunnels::NniTunnel::TunnelRestorationLsp::S2l::ResvRro::LabelRroSubObject


class MplsTeStandby::P2pP2mpTunnel::NniTunnels::NniTunnel::TunnelRestorationLsp::S2l::ResvRro::LabelRroSubObject::Flags : public ydk::Entity
{
    public:
        Flags();
        ~Flags();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf is_global_label; //type: boolean

}; // MplsTeStandby::P2pP2mpTunnel::NniTunnels::NniTunnel::TunnelRestorationLsp::S2l::ResvRro::LabelRroSubObject::Flags


class MplsTeStandby::P2pP2mpTunnel::NniTunnels::NniTunnel::TunnelRestorationLsp::S2l::ResvRro::LabelRroSubObject::VariableLengthLabel : public ydk::Entity
{
    public:
        VariableLengthLabel();
        ~VariableLengthLabel();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf entry; //type: uint32

}; // MplsTeStandby::P2pP2mpTunnel::NniTunnels::NniTunnel::TunnelRestorationLsp::S2l::ResvRro::LabelRroSubObject::VariableLengthLabel


class MplsTeStandby::P2pP2mpTunnel::NniTunnels::NniTunnel::TunnelRestorationLsp::S2l::ResvRro::UnnumberedRroSubObject : public ydk::Entity
{
    public:
        UnnumberedRroSubObject();
        ~UnnumberedRroSubObject();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf interface_address; //type: string
        ydk::YLeaf interface_id; //type: uint32
        class Flags; //type: MplsTeStandby::P2pP2mpTunnel::NniTunnels::NniTunnel::TunnelRestorationLsp::S2l::ResvRro::UnnumberedRroSubObject::Flags

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::P2pP2mpTunnel::NniTunnels::NniTunnel::TunnelRestorationLsp::S2l::ResvRro::UnnumberedRroSubObject::Flags> flags;
        
}; // MplsTeStandby::P2pP2mpTunnel::NniTunnels::NniTunnel::TunnelRestorationLsp::S2l::ResvRro::UnnumberedRroSubObject


class MplsTeStandby::P2pP2mpTunnel::NniTunnels::NniTunnel::TunnelRestorationLsp::S2l::ResvRro::UnnumberedRroSubObject::Flags : public ydk::Entity
{
    public:
        Flags();
        ~Flags();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf is_protection_available; //type: boolean
        ydk::YLeaf is_protection_in_use; //type: boolean
        ydk::YLeaf is_bandwidth_protected; //type: boolean
        ydk::YLeaf is_node_protection_available; //type: boolean
        ydk::YLeaf is_node_id; //type: boolean

}; // MplsTeStandby::P2pP2mpTunnel::NniTunnels::NniTunnel::TunnelRestorationLsp::S2l::ResvRro::UnnumberedRroSubObject::Flags


class MplsTeStandby::P2pP2mpTunnel::NniTunnels::NniTunnel::TunnelRestorationLsp::S2l::ResvRro::SrlgRroSubObject : public ydk::Entity
{
    public:
        SrlgRroSubObject();
        ~SrlgRroSubObject();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class SrlGs; //type: MplsTeStandby::P2pP2mpTunnel::NniTunnels::NniTunnel::TunnelRestorationLsp::S2l::ResvRro::SrlgRroSubObject::SrlGs

        ydk::YList srl_gs;
        
}; // MplsTeStandby::P2pP2mpTunnel::NniTunnels::NniTunnel::TunnelRestorationLsp::S2l::ResvRro::SrlgRroSubObject


class MplsTeStandby::P2pP2mpTunnel::NniTunnels::NniTunnel::TunnelRestorationLsp::S2l::ResvRro::SrlgRroSubObject::SrlGs : public ydk::Entity
{
    public:
        SrlGs();
        ~SrlGs();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf entry; //type: uint32

}; // MplsTeStandby::P2pP2mpTunnel::NniTunnels::NniTunnel::TunnelRestorationLsp::S2l::ResvRro::SrlgRroSubObject::SrlGs


class MplsTeStandby::P2pP2mpTunnel::NniTunnels::NniTunnel::TunnelRestorationLsp::S2l::PathAffinityArray : public ydk::Entity
{
    public:
        PathAffinityArray();
        ~PathAffinityArray();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf hop_address; //type: string
        ydk::YLeaf hop_affinity; //type: uint32
        class HopExtendedAffinity; //type: MplsTeStandby::P2pP2mpTunnel::NniTunnels::NniTunnel::TunnelRestorationLsp::S2l::PathAffinityArray::HopExtendedAffinity

        ydk::YList hop_extended_affinity;
        
}; // MplsTeStandby::P2pP2mpTunnel::NniTunnels::NniTunnel::TunnelRestorationLsp::S2l::PathAffinityArray


class MplsTeStandby::P2pP2mpTunnel::NniTunnels::NniTunnel::TunnelRestorationLsp::S2l::PathAffinityArray::HopExtendedAffinity : public ydk::Entity
{
    public:
        HopExtendedAffinity();
        ~HopExtendedAffinity();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf entry; //type: uint32

}; // MplsTeStandby::P2pP2mpTunnel::NniTunnels::NniTunnel::TunnelRestorationLsp::S2l::PathAffinityArray::HopExtendedAffinity


class MplsTeStandby::P2pP2mpTunnel::NniTunnels::NniTunnel::TunnelRestorationLsp::S2l::ReverseEroIn : public ydk::Entity
{
    public:
        ReverseEroIn();
        ~ReverseEroIn();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf ero_type; //type: RsvpMgmtEroSubobj
        class Ipv4eroSubObject; //type: MplsTeStandby::P2pP2mpTunnel::NniTunnels::NniTunnel::TunnelRestorationLsp::S2l::ReverseEroIn::Ipv4eroSubObject
        class UnnumberedEroSubObject; //type: MplsTeStandby::P2pP2mpTunnel::NniTunnels::NniTunnel::TunnelRestorationLsp::S2l::ReverseEroIn::UnnumberedEroSubObject

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::P2pP2mpTunnel::NniTunnels::NniTunnel::TunnelRestorationLsp::S2l::ReverseEroIn::Ipv4eroSubObject> ipv4ero_sub_object;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::P2pP2mpTunnel::NniTunnels::NniTunnel::TunnelRestorationLsp::S2l::ReverseEroIn::UnnumberedEroSubObject> unnumbered_ero_sub_object;
        
}; // MplsTeStandby::P2pP2mpTunnel::NniTunnels::NniTunnel::TunnelRestorationLsp::S2l::ReverseEroIn


class MplsTeStandby::P2pP2mpTunnel::NniTunnels::NniTunnel::TunnelRestorationLsp::S2l::ReverseEroIn::Ipv4eroSubObject : public ydk::Entity
{
    public:
        Ipv4eroSubObject();
        ~Ipv4eroSubObject();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf is_strict_route; //type: boolean
        ydk::YLeaf ero_address; //type: string
        ydk::YLeaf prefix_length; //type: uint8

}; // MplsTeStandby::P2pP2mpTunnel::NniTunnels::NniTunnel::TunnelRestorationLsp::S2l::ReverseEroIn::Ipv4eroSubObject


class MplsTeStandby::P2pP2mpTunnel::NniTunnels::NniTunnel::TunnelRestorationLsp::S2l::ReverseEroIn::UnnumberedEroSubObject : public ydk::Entity
{
    public:
        UnnumberedEroSubObject();
        ~UnnumberedEroSubObject();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf is_strict_route; //type: boolean
        ydk::YLeaf ero_interface_id; //type: uint32
        ydk::YLeaf ero_router_id; //type: string
        ydk::YLeaf status; //type: RsvpMgmtEroSubobjStatus

}; // MplsTeStandby::P2pP2mpTunnel::NniTunnels::NniTunnel::TunnelRestorationLsp::S2l::ReverseEroIn::UnnumberedEroSubObject


class MplsTeStandby::P2pP2mpTunnel::NniTunnels::NniTunnel::TunnelRestorationLsp::S2l::S2lSegmentRoutingPath : public ydk::Entity
{
    public:
        S2lSegmentRoutingPath();
        ~S2lSegmentRoutingPath();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf sid_type; //type: TeSrSid
        ydk::YLeaf has_ip_addresses; //type: boolean
        ydk::YLeaf local_addr; //type: string
        ydk::YLeaf remote_addr; //type: string
        ydk::YLeaf has_mpls_label; //type: boolean
        ydk::YLeaf mpls_label_value; //type: uint32
        ydk::YLeaf has_entropy_label; //type: boolean

}; // MplsTeStandby::P2pP2mpTunnel::NniTunnels::NniTunnel::TunnelRestorationLsp::S2l::S2lSegmentRoutingPath


class MplsTeStandby::P2pP2mpTunnel::NniTunnels::NniTunnel::DelayCleanPpLsp : public ydk::Entity
{
    public:
        DelayCleanPpLsp();
        ~DelayCleanPpLsp();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf signaled_name; //type: string
        ydk::YLeaf is_frr_failed; //type: boolean
        ydk::YLeaf frr_active_reason; //type: uint32
        ydk::YLeaf lsp_bandwidth; //type: uint32
        ydk::YLeaf lsp_setup_priority; //type: uint8
        ydk::YLeaf lsp_hold_priority; //type: uint8
        ydk::YLeaf lsp_bandwidth_type; //type: MplsTeBwPool
        ydk::YLeaf dste_class_match; //type: boolean
        ydk::YLeaf dste_class_index; //type: uint8
        ydk::YLeaf type; //type: MplsTeLsp
        ydk::YLeaf uptime; //type: uint32
        ydk::YLeaf s2_ls_up; //type: uint32
        ydk::YLeaf s2_ls_proceeding; //type: uint32
        ydk::YLeaf s2_ls_down; //type: uint32
        ydk::YLeaf reoptimize_reason; //type: MplsTeReoptDecisionReason
        ydk::YLeaf reoptimize_trigger; //type: MteReoptTrigger
        ydk::YLeaf timer_left; //type: uint32
        ydk::YLeaf is_passive; //type: boolean
        ydk::YLeaf is_interface; //type: boolean
        ydk::YLeaf last_path_change; //type: uint32
        ydk::YLeaf persistent_bytes; //type: uint64
        ydk::YLeaf persistent_packets; //type: uint64
        class LspFec; //type: MplsTeStandby::P2pP2mpTunnel::NniTunnels::NniTunnel::DelayCleanPpLsp::LspFec
        class S2l; //type: MplsTeStandby::P2pP2mpTunnel::NniTunnels::NniTunnel::DelayCleanPpLsp::S2l

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::P2pP2mpTunnel::NniTunnels::NniTunnel::DelayCleanPpLsp::LspFec> lsp_fec;
        ydk::YList s2l;
        
}; // MplsTeStandby::P2pP2mpTunnel::NniTunnels::NniTunnel::DelayCleanPpLsp


class MplsTeStandby::P2pP2mpTunnel::NniTunnels::NniTunnel::DelayCleanPpLsp::LspFec : public ydk::Entity
{
    public:
        LspFec();
        ~LspFec();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf fec_lsp_id; //type: uint16
        ydk::YLeaf fec_tunnel_id; //type: uint16
        ydk::YLeaf fec_extended_tunnel_id; //type: string
        ydk::YLeaf fec_source; //type: string
        ydk::YLeaf fec_vrf; //type: string
        class FecDestinationInfo; //type: MplsTeStandby::P2pP2mpTunnel::NniTunnels::NniTunnel::DelayCleanPpLsp::LspFec::FecDestinationInfo

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::P2pP2mpTunnel::NniTunnels::NniTunnel::DelayCleanPpLsp::LspFec::FecDestinationInfo> fec_destination_info;
        
}; // MplsTeStandby::P2pP2mpTunnel::NniTunnels::NniTunnel::DelayCleanPpLsp::LspFec


class MplsTeStandby::P2pP2mpTunnel::NniTunnels::NniTunnel::DelayCleanPpLsp::LspFec::FecDestinationInfo : public ydk::Entity
{
    public:
        FecDestinationInfo();
        ~FecDestinationInfo();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf fec_ctype; //type: MplsLibC
        ydk::YLeaf p2p_lsp_destination; //type: string
        ydk::YLeaf fec_destination_p2mp_id; //type: uint32

}; // MplsTeStandby::P2pP2mpTunnel::NniTunnels::NniTunnel::DelayCleanPpLsp::LspFec::FecDestinationInfo


class MplsTeStandby::P2pP2mpTunnel::NniTunnels::NniTunnel::DelayCleanPpLsp::S2l : public ydk::Entity
{
    public:
        S2l();
        ~S2l();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf pcalc_area; //type: string
        ydk::YLeaf is_expanded_ero; //type: boolean
        ydk::YLeaf path_reeval_query_mid; //type: uint32
        ydk::YLeaf time_since_last_query_received_mid; //type: uint32
        ydk::YLeaf time_since_last_preferred_path_exists_send_mid; //type: uint32
        ydk::YLeaf time_since_last_preferred_tree_exists_send_mid; //type: uint32
        ydk::YLeaf expanded_ero_area_id; //type: string
        ydk::YLeaf expanded_ero_affinity_bits; //type: uint32
        ydk::YLeaf expanded_ero_affinity_mask; //type: uint32
        ydk::YLeaf expanded_ero_metric_type; //type: MplsTeMetric
        ydk::YLeaf expanded_ero_metric; //type: uint32
        ydk::YLeaf abr_auto_discovered; //type: string
        ydk::YLeaf is_frr_enabled; //type: boolean
        ydk::YLeaf is_node_protected; //type: boolean
        ydk::YLeaf is_bandwidth_protect; //type: boolean
        ydk::YLeaf path_rro_enabled; //type: boolean
        ydk::YLeaf weight; //type: uint64
        ydk::YLeaf reverse_weight; //type: uint64
        ydk::YLeaf uptime; //type: uint32
        ydk::YLeaf egress_interface; //type: string
        ydk::YLeaf egress_interface_state; //type: TeControllerState
        ydk::YLeaf egress_interface_brief; //type: string
        ydk::YLeaf ingress_interface; //type: string
        ydk::YLeaf ingress_interface_state; //type: TeControllerState
        ydk::YLeaf ingress_interface_brief; //type: string
        ydk::YLeaf s2l_local_label; //type: uint32
        ydk::YLeaf s2l_out_label; //type: uint32
        ydk::YLeaf outbound_frr_state; //type: MplsTeFrrState
        ydk::YLeaf frr_out_tunnel_interface; //type: string
        ydk::YLeaf role; //type: MplsTeTunnelRole
        ydk::YLeaf signalling_status; //type: MplsTeTunnelsSignalingStatus
        ydk::YLeaf local_router_id; //type: string
        ydk::YLeaf upstream_router_id; //type: string
        ydk::YLeaf downstream_router_id; //type: string
        ydk::YLeaf next_hop_address; //type: string
        ydk::YLeaf next_next_hop_address; //type: string
        ydk::YLeaf previous_hop_address; //type: string
        ydk::YLeaf incoming_address; //type: string
        ydk::YLeaf backup_tunnel_interface; //type: string
        ydk::YLeaf node_hop_count; //type: uint8
        ydk::YLeaf is_optical; //type: boolean
        ydk::YLeaf s2l_reverse_ero_obj_present; //type: boolean
        ydk::YLeaf reverse_lsp_present; //type: boolean
        ydk::YLeaf reverse_lsp_connected; //type: boolean
        ydk::YLeaf reverse_lsp_name; //type: string
        ydk::YLeaf s2l_reverse_tspec_obj_present; //type: boolean
        ydk::YLeaf path_using_strict_spf; //type: boolean
        class S2lFec; //type: MplsTeStandby::P2pP2mpTunnel::NniTunnels::NniTunnel::DelayCleanPpLsp::S2l::S2lFec
        class ActivePathOption; //type: MplsTeStandby::P2pP2mpTunnel::NniTunnels::NniTunnel::DelayCleanPpLsp::S2l::ActivePathOption
        class OutXro; //type: MplsTeStandby::P2pP2mpTunnel::NniTunnels::NniTunnel::DelayCleanPpLsp::S2l::OutXro
        class InXro; //type: MplsTeStandby::P2pP2mpTunnel::NniTunnels::NniTunnel::DelayCleanPpLsp::S2l::InXro
        class Tspec; //type: MplsTeStandby::P2pP2mpTunnel::NniTunnels::NniTunnel::DelayCleanPpLsp::S2l::Tspec
        class GenericTspec; //type: MplsTeStandby::P2pP2mpTunnel::NniTunnels::NniTunnel::DelayCleanPpLsp::S2l::GenericTspec
        class Fspec; //type: MplsTeStandby::P2pP2mpTunnel::NniTunnels::NniTunnel::DelayCleanPpLsp::S2l::Fspec
        class GenericFspec; //type: MplsTeStandby::P2pP2mpTunnel::NniTunnels::NniTunnel::DelayCleanPpLsp::S2l::GenericFspec
        class NextHopAddressGeneric; //type: MplsTeStandby::P2pP2mpTunnel::NniTunnels::NniTunnel::DelayCleanPpLsp::S2l::NextHopAddressGeneric
        class PreviousHopAddressGeneric; //type: MplsTeStandby::P2pP2mpTunnel::NniTunnels::NniTunnel::DelayCleanPpLsp::S2l::PreviousHopAddressGeneric
        class IncomingAddressGeneric; //type: MplsTeStandby::P2pP2mpTunnel::NniTunnels::NniTunnel::DelayCleanPpLsp::S2l::IncomingAddressGeneric
        class S2lConvergence; //type: MplsTeStandby::P2pP2mpTunnel::NniTunnels::NniTunnel::DelayCleanPpLsp::S2l::S2lConvergence
        class SoftPreemption; //type: MplsTeStandby::P2pP2mpTunnel::NniTunnels::NniTunnel::DelayCleanPpLsp::S2l::SoftPreemption
        class GmplsLabels; //type: MplsTeStandby::P2pP2mpTunnel::NniTunnels::NniTunnel::DelayCleanPpLsp::S2l::GmplsLabels
        class OtnS2l; //type: MplsTeStandby::P2pP2mpTunnel::NniTunnels::NniTunnel::DelayCleanPpLsp::S2l::OtnS2l
        class HeadEndBfdInfo; //type: MplsTeStandby::P2pP2mpTunnel::NniTunnels::NniTunnel::DelayCleanPpLsp::S2l::HeadEndBfdInfo
        class TailEndBfdInfo; //type: MplsTeStandby::P2pP2mpTunnel::NniTunnels::NniTunnel::DelayCleanPpLsp::S2l::TailEndBfdInfo
        class SrlgCollection; //type: MplsTeStandby::P2pP2mpTunnel::NniTunnels::NniTunnel::DelayCleanPpLsp::S2l::SrlgCollection
        class Association; //type: MplsTeStandby::P2pP2mpTunnel::NniTunnels::NniTunnel::DelayCleanPpLsp::S2l::Association
        class Protection; //type: MplsTeStandby::P2pP2mpTunnel::NniTunnels::NniTunnel::DelayCleanPpLsp::S2l::Protection
        class ReverseLspFec; //type: MplsTeStandby::P2pP2mpTunnel::NniTunnels::NniTunnel::DelayCleanPpLsp::S2l::ReverseLspFec
        class ReverseTspec; //type: MplsTeStandby::P2pP2mpTunnel::NniTunnels::NniTunnel::DelayCleanPpLsp::S2l::ReverseTspec
        class FlexInfo; //type: MplsTeStandby::P2pP2mpTunnel::NniTunnels::NniTunnel::DelayCleanPpLsp::S2l::FlexInfo
        class LspWrapInfo; //type: MplsTeStandby::P2pP2mpTunnel::NniTunnels::NniTunnel::DelayCleanPpLsp::S2l::LspWrapInfo
        class DiversityInfo; //type: MplsTeStandby::P2pP2mpTunnel::NniTunnels::NniTunnel::DelayCleanPpLsp::S2l::DiversityInfo
        class AccumulatedPathMetrics; //type: MplsTeStandby::P2pP2mpTunnel::NniTunnels::NniTunnel::DelayCleanPpLsp::S2l::AccumulatedPathMetrics
        class AccumulatedReversePathMetrics; //type: MplsTeStandby::P2pP2mpTunnel::NniTunnels::NniTunnel::DelayCleanPpLsp::S2l::AccumulatedReversePathMetrics
        class S2lReverseLspSubObj; //type: MplsTeStandby::P2pP2mpTunnel::NniTunnels::NniTunnel::DelayCleanPpLsp::S2l::S2lReverseLspSubObj
        class SharedRiskLinkGroup; //type: MplsTeStandby::P2pP2mpTunnel::NniTunnels::NniTunnel::DelayCleanPpLsp::S2l::SharedRiskLinkGroup
        class OutEro; //type: MplsTeStandby::P2pP2mpTunnel::NniTunnels::NniTunnel::DelayCleanPpLsp::S2l::OutEro
        class InEro; //type: MplsTeStandby::P2pP2mpTunnel::NniTunnels::NniTunnel::DelayCleanPpLsp::S2l::InEro
        class PathRro; //type: MplsTeStandby::P2pP2mpTunnel::NniTunnels::NniTunnel::DelayCleanPpLsp::S2l::PathRro
        class ResvRro; //type: MplsTeStandby::P2pP2mpTunnel::NniTunnels::NniTunnel::DelayCleanPpLsp::S2l::ResvRro
        class PathAffinityArray; //type: MplsTeStandby::P2pP2mpTunnel::NniTunnels::NniTunnel::DelayCleanPpLsp::S2l::PathAffinityArray
        class ReverseEroIn; //type: MplsTeStandby::P2pP2mpTunnel::NniTunnels::NniTunnel::DelayCleanPpLsp::S2l::ReverseEroIn
        class S2lSegmentRoutingPath; //type: MplsTeStandby::P2pP2mpTunnel::NniTunnels::NniTunnel::DelayCleanPpLsp::S2l::S2lSegmentRoutingPath

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::P2pP2mpTunnel::NniTunnels::NniTunnel::DelayCleanPpLsp::S2l::S2lFec> s2l_fec;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::P2pP2mpTunnel::NniTunnels::NniTunnel::DelayCleanPpLsp::S2l::ActivePathOption> active_path_option;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::P2pP2mpTunnel::NniTunnels::NniTunnel::DelayCleanPpLsp::S2l::OutXro> out_xro;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::P2pP2mpTunnel::NniTunnels::NniTunnel::DelayCleanPpLsp::S2l::InXro> in_xro;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::P2pP2mpTunnel::NniTunnels::NniTunnel::DelayCleanPpLsp::S2l::Tspec> tspec;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::P2pP2mpTunnel::NniTunnels::NniTunnel::DelayCleanPpLsp::S2l::GenericTspec> generic_tspec;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::P2pP2mpTunnel::NniTunnels::NniTunnel::DelayCleanPpLsp::S2l::Fspec> fspec;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::P2pP2mpTunnel::NniTunnels::NniTunnel::DelayCleanPpLsp::S2l::GenericFspec> generic_fspec;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::P2pP2mpTunnel::NniTunnels::NniTunnel::DelayCleanPpLsp::S2l::NextHopAddressGeneric> next_hop_address_generic;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::P2pP2mpTunnel::NniTunnels::NniTunnel::DelayCleanPpLsp::S2l::PreviousHopAddressGeneric> previous_hop_address_generic;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::P2pP2mpTunnel::NniTunnels::NniTunnel::DelayCleanPpLsp::S2l::IncomingAddressGeneric> incoming_address_generic;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::P2pP2mpTunnel::NniTunnels::NniTunnel::DelayCleanPpLsp::S2l::S2lConvergence> s2l_convergence;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::P2pP2mpTunnel::NniTunnels::NniTunnel::DelayCleanPpLsp::S2l::SoftPreemption> soft_preemption;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::P2pP2mpTunnel::NniTunnels::NniTunnel::DelayCleanPpLsp::S2l::GmplsLabels> gmpls_labels;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::P2pP2mpTunnel::NniTunnels::NniTunnel::DelayCleanPpLsp::S2l::OtnS2l> otn_s2l;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::P2pP2mpTunnel::NniTunnels::NniTunnel::DelayCleanPpLsp::S2l::HeadEndBfdInfo> head_end_bfd_info;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::P2pP2mpTunnel::NniTunnels::NniTunnel::DelayCleanPpLsp::S2l::TailEndBfdInfo> tail_end_bfd_info;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::P2pP2mpTunnel::NniTunnels::NniTunnel::DelayCleanPpLsp::S2l::SrlgCollection> srlg_collection;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::P2pP2mpTunnel::NniTunnels::NniTunnel::DelayCleanPpLsp::S2l::Association> association;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::P2pP2mpTunnel::NniTunnels::NniTunnel::DelayCleanPpLsp::S2l::Protection> protection;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::P2pP2mpTunnel::NniTunnels::NniTunnel::DelayCleanPpLsp::S2l::ReverseLspFec> reverse_lsp_fec;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::P2pP2mpTunnel::NniTunnels::NniTunnel::DelayCleanPpLsp::S2l::ReverseTspec> reverse_tspec;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::P2pP2mpTunnel::NniTunnels::NniTunnel::DelayCleanPpLsp::S2l::FlexInfo> flex_info;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::P2pP2mpTunnel::NniTunnels::NniTunnel::DelayCleanPpLsp::S2l::LspWrapInfo> lsp_wrap_info;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::P2pP2mpTunnel::NniTunnels::NniTunnel::DelayCleanPpLsp::S2l::DiversityInfo> diversity_info;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::P2pP2mpTunnel::NniTunnels::NniTunnel::DelayCleanPpLsp::S2l::AccumulatedPathMetrics> accumulated_path_metrics;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::P2pP2mpTunnel::NniTunnels::NniTunnel::DelayCleanPpLsp::S2l::AccumulatedReversePathMetrics> accumulated_reverse_path_metrics;
        ydk::YList s2l_reverse_lsp_sub_obj;
        ydk::YList shared_risk_link_group;
        ydk::YList out_ero;
        ydk::YList in_ero;
        ydk::YList path_rro;
        ydk::YList resv_rro;
        ydk::YList path_affinity_array;
        ydk::YList reverse_ero_in;
        ydk::YList s2l_segment_routing_path;
        
}; // MplsTeStandby::P2pP2mpTunnel::NniTunnels::NniTunnel::DelayCleanPpLsp::S2l


class MplsTeStandby::P2pP2mpTunnel::NniTunnels::NniTunnel::DelayCleanPpLsp::S2l::S2lFec : public ydk::Entity
{
    public:
        S2lFec();
        ~S2lFec();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf s2l_fec_subgroup_id; //type: uint16
        ydk::YLeaf s2l_fec_lsp_id; //type: uint16
        ydk::YLeaf s2l_fec_tunnel_id; //type: uint16
        ydk::YLeaf s2l_fec_extended_tunnel_id; //type: string
        ydk::YLeaf s2l_fec_source; //type: string
        ydk::YLeaf s2l_fec_dest; //type: string
        ydk::YLeaf s2l_fec_p2mp_id; //type: uint32
        ydk::YLeaf s2l_fec_subgroup_originator; //type: string
        ydk::YLeaf s2l_fec_ctype; //type: MplsLibC
        ydk::YLeaf s2l_fec_vrf; //type: string

}; // MplsTeStandby::P2pP2mpTunnel::NniTunnels::NniTunnel::DelayCleanPpLsp::S2l::S2lFec


class MplsTeStandby::P2pP2mpTunnel::NniTunnels::NniTunnel::DelayCleanPpLsp::S2l::ActivePathOption : public ydk::Entity
{
    public:
        ActivePathOption();
        ~ActivePathOption();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf option_index_is_valid; //type: boolean
        ydk::YLeaf option_index; //type: uint32
        ydk::YLeaf path_option_name; //type: string
        ydk::YLeaf path_option_type; //type: MplsTePathoption
        ydk::YLeaf explicit_path_name; //type: string
        ydk::YLeaf explicit_path_id; //type: uint16
        ydk::YLeaf holddown_duration; //type: uint16
        ydk::YLeaf pce_address; //type: string
        ydk::YLeaf path_option_area_id; //type: string
        ydk::YLeaf is_strict_explicit_path; //type: boolean
        ydk::YLeaf is_helddown; //type: boolean
        ydk::YLeaf is_lockdown; //type: boolean
        ydk::YLeaf is_verbatim; //type: boolean
        ydk::YLeaf is_disabled; //type: boolean
        ydk::YLeaf has_attribute_set; //type: boolean
        ydk::YLeaf attribute_set_found; //type: boolean
        ydk::YLeaf has_xro_attribute_set; //type: boolean
        ydk::YLeaf xro_attribute_set_found; //type: boolean
        ydk::YLeaf is_segment_routing; //type: boolean
        ydk::YLeaf protected_by_path_option_index; //type: uint32
        ydk::YLeaf restored_from_path_option_index; //type: uint32
        class AttributeSet; //type: MplsTeStandby::P2pP2mpTunnel::NniTunnels::NniTunnel::DelayCleanPpLsp::S2l::ActivePathOption::AttributeSet
        class XroAttributeSet; //type: MplsTeStandby::P2pP2mpTunnel::NniTunnels::NniTunnel::DelayCleanPpLsp::S2l::ActivePathOption::XroAttributeSet
        class PathCalculationError; //type: MplsTeStandby::P2pP2mpTunnel::NniTunnels::NniTunnel::DelayCleanPpLsp::S2l::ActivePathOption::PathCalculationError
        class RemergeError; //type: MplsTeStandby::P2pP2mpTunnel::NniTunnels::NniTunnel::DelayCleanPpLsp::S2l::ActivePathOption::RemergeError
        class SignallingError; //type: MplsTeStandby::P2pP2mpTunnel::NniTunnels::NniTunnel::DelayCleanPpLsp::S2l::ActivePathOption::SignallingError

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::P2pP2mpTunnel::NniTunnels::NniTunnel::DelayCleanPpLsp::S2l::ActivePathOption::AttributeSet> attribute_set;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::P2pP2mpTunnel::NniTunnels::NniTunnel::DelayCleanPpLsp::S2l::ActivePathOption::XroAttributeSet> xro_attribute_set;
        ydk::YList path_calculation_error;
        ydk::YList remerge_error;
        ydk::YList signalling_error;
        
}; // MplsTeStandby::P2pP2mpTunnel::NniTunnels::NniTunnel::DelayCleanPpLsp::S2l::ActivePathOption


class MplsTeStandby::P2pP2mpTunnel::NniTunnels::NniTunnel::DelayCleanPpLsp::S2l::ActivePathOption::AttributeSet : public ydk::Entity
{
    public:
        AttributeSet();
        ~AttributeSet();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf tunnel_attribute_set_name; //type: string
        ydk::YLeaf tunnel_attribute_set_name_crc32; //type: uint32
        class AttributeSetUnion; //type: MplsTeStandby::P2pP2mpTunnel::NniTunnels::NniTunnel::DelayCleanPpLsp::S2l::ActivePathOption::AttributeSet::AttributeSetUnion

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::P2pP2mpTunnel::NniTunnels::NniTunnel::DelayCleanPpLsp::S2l::ActivePathOption::AttributeSet::AttributeSetUnion> attribute_set_union;
        
}; // MplsTeStandby::P2pP2mpTunnel::NniTunnels::NniTunnel::DelayCleanPpLsp::S2l::ActivePathOption::AttributeSet


class MplsTeStandby::P2pP2mpTunnel::NniTunnels::NniTunnel::DelayCleanPpLsp::S2l::ActivePathOption::AttributeSet::AttributeSetUnion : public ydk::Entity
{
    public:
        AttributeSetUnion();
        ~AttributeSetUnion();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf tunnel_attribute_set_type; //type: TunnelAttributeSet
        class AttributeSetPathOption; //type: MplsTeStandby::P2pP2mpTunnel::NniTunnels::NniTunnel::DelayCleanPpLsp::S2l::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetPathOption
        class AttributeSetAutobackup; //type: MplsTeStandby::P2pP2mpTunnel::NniTunnels::NniTunnel::DelayCleanPpLsp::S2l::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetAutobackup
        class AttributeSetAutomesh; //type: MplsTeStandby::P2pP2mpTunnel::NniTunnels::NniTunnel::DelayCleanPpLsp::S2l::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetAutomesh
        class AttributeSetXro; //type: MplsTeStandby::P2pP2mpTunnel::NniTunnels::NniTunnel::DelayCleanPpLsp::S2l::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetXro
        class AttributeSetP2mpte; //type: MplsTeStandby::P2pP2mpTunnel::NniTunnels::NniTunnel::DelayCleanPpLsp::S2l::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetP2mpte
        class AttributeSetApsPp; //type: MplsTeStandby::P2pP2mpTunnel::NniTunnels::NniTunnel::DelayCleanPpLsp::S2l::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetApsPp
        class AttributeSetP2pTe; //type: MplsTeStandby::P2pP2mpTunnel::NniTunnels::NniTunnel::DelayCleanPpLsp::S2l::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetP2pTe

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::P2pP2mpTunnel::NniTunnels::NniTunnel::DelayCleanPpLsp::S2l::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetPathOption> attribute_set_path_option;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::P2pP2mpTunnel::NniTunnels::NniTunnel::DelayCleanPpLsp::S2l::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetAutobackup> attribute_set_autobackup;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::P2pP2mpTunnel::NniTunnels::NniTunnel::DelayCleanPpLsp::S2l::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetAutomesh> attribute_set_automesh;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::P2pP2mpTunnel::NniTunnels::NniTunnel::DelayCleanPpLsp::S2l::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetXro> attribute_set_xro;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::P2pP2mpTunnel::NniTunnels::NniTunnel::DelayCleanPpLsp::S2l::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetP2mpte> attribute_set_p2mpte;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::P2pP2mpTunnel::NniTunnels::NniTunnel::DelayCleanPpLsp::S2l::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetApsPp> attribute_set_aps_pp;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::P2pP2mpTunnel::NniTunnels::NniTunnel::DelayCleanPpLsp::S2l::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetP2pTe> attribute_set_p2p_te;
        
}; // MplsTeStandby::P2pP2mpTunnel::NniTunnels::NniTunnel::DelayCleanPpLsp::S2l::ActivePathOption::AttributeSet::AttributeSetUnion


class MplsTeStandby::P2pP2mpTunnel::NniTunnels::NniTunnel::DelayCleanPpLsp::S2l::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetPathOption : public ydk::Entity
{
    public:
        AttributeSetPathOption();
        ~AttributeSetPathOption();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf configured_bandwidth; //type: uint32
        ydk::YLeaf cost_limit; //type: uint32
        ydk::YLeaf dste_class_type; //type: uint8
        ydk::YLeaf bandwidth_type; //type: MplsTeBwPool
        ydk::YLeaf is_bandwidth_configured; //type: boolean
        ydk::YLeaf is_cost_limit_configured; //type: boolean
        ydk::YLeaf is_affinity_configured; //type: boolean
        ydk::YLeaf generation; //type: uint32
        ydk::YLeaf path_invalidation_timeout; //type: uint32
        ydk::YLeaf path_invalidation_action; //type: uint32
        ydk::YLeaf is_path_invalidation_timeout_configured; //type: boolean
        ydk::YLeaf is_path_invalidation_action_configured; //type: boolean
        ydk::YLeaf exclude_list_name; //type: string
        ydk::YLeaf is_exclude_list_name_configured; //type: boolean
        ydk::YLeaf is_pce_configured; //type: boolean
        ydk::YLeaf is_pce_disj_source_configured; //type: boolean
        ydk::YLeaf is_pce_disj_type_configured; //type: boolean
        ydk::YLeaf is_pce_disj_group_id_configured; //type: boolean
        ydk::YLeaf pcedp_source_address; //type: uint32
        ydk::YLeaf pcedp_type; //type: TePceDisjoint
        ydk::YLeaf pcedp_group_id; //type: uint32
        ydk::YLeaf is_pceb_dj_source_configured; //type: boolean
        ydk::YLeaf is_pcebd_group_id_configured; //type: boolean
        ydk::YLeaf pcebd_source_address; //type: uint32
        ydk::YLeaf pcebd_group_id; //type: uint32
        ydk::YLeaf is_bfd_reverse_pat_configured; //type: boolean
        ydk::YLeaf is_delay_limit_configured; //type: boolean
        ydk::YLeaf delay_limit; //type: uint32
        class Affinity; //type: MplsTeStandby::P2pP2mpTunnel::NniTunnels::NniTunnel::DelayCleanPpLsp::S2l::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetPathOption::Affinity
        class BfdReversePath; //type: MplsTeStandby::P2pP2mpTunnel::NniTunnels::NniTunnel::DelayCleanPpLsp::S2l::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetPathOption::BfdReversePath
        class TunnelId; //type: MplsTeStandby::P2pP2mpTunnel::NniTunnels::NniTunnel::DelayCleanPpLsp::S2l::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetPathOption::TunnelId
        class VersionInfo; //type: MplsTeStandby::P2pP2mpTunnel::NniTunnels::NniTunnel::DelayCleanPpLsp::S2l::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetPathOption::VersionInfo

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::P2pP2mpTunnel::NniTunnels::NniTunnel::DelayCleanPpLsp::S2l::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetPathOption::Affinity> affinity;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::P2pP2mpTunnel::NniTunnels::NniTunnel::DelayCleanPpLsp::S2l::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetPathOption::BfdReversePath> bfd_reverse_path;
        ydk::YList tunnel_id;
        ydk::YList version_info;
        
}; // MplsTeStandby::P2pP2mpTunnel::NniTunnels::NniTunnel::DelayCleanPpLsp::S2l::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetPathOption


class MplsTeStandby::P2pP2mpTunnel::NniTunnels::NniTunnel::DelayCleanPpLsp::S2l::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetPathOption::Affinity : public ydk::Entity
{
    public:
        Affinity();
        ~Affinity();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf affinity_bits; //type: uint32
        ydk::YLeaf affinity_mask; //type: uint32
        class NamedAffinity; //type: MplsTeStandby::P2pP2mpTunnel::NniTunnels::NniTunnel::DelayCleanPpLsp::S2l::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetPathOption::Affinity::NamedAffinity

        ydk::YList named_affinity;
        
}; // MplsTeStandby::P2pP2mpTunnel::NniTunnels::NniTunnel::DelayCleanPpLsp::S2l::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetPathOption::Affinity


class MplsTeStandby::P2pP2mpTunnel::NniTunnels::NniTunnel::DelayCleanPpLsp::S2l::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetPathOption::Affinity::NamedAffinity : public ydk::Entity
{
    public:
        NamedAffinity();
        ~NamedAffinity();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf constraint_type; //type: uint8
        ydk::YLeaf constraint_value; //type: uint32
        ydk::YLeaf forward_ref_value; //type: uint32
        class ConstraintExtendedValue; //type: MplsTeStandby::P2pP2mpTunnel::NniTunnels::NniTunnel::DelayCleanPpLsp::S2l::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetPathOption::Affinity::NamedAffinity::ConstraintExtendedValue
        class ExtendedForwardRefValue; //type: MplsTeStandby::P2pP2mpTunnel::NniTunnels::NniTunnel::DelayCleanPpLsp::S2l::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetPathOption::Affinity::NamedAffinity::ExtendedForwardRefValue

        ydk::YList constraint_extended_value;
        ydk::YList extended_forward_ref_value;
        
}; // MplsTeStandby::P2pP2mpTunnel::NniTunnels::NniTunnel::DelayCleanPpLsp::S2l::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetPathOption::Affinity::NamedAffinity


class MplsTeStandby::P2pP2mpTunnel::NniTunnels::NniTunnel::DelayCleanPpLsp::S2l::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetPathOption::Affinity::NamedAffinity::ConstraintExtendedValue : public ydk::Entity
{
    public:
        ConstraintExtendedValue();
        ~ConstraintExtendedValue();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf entry; //type: uint32

}; // MplsTeStandby::P2pP2mpTunnel::NniTunnels::NniTunnel::DelayCleanPpLsp::S2l::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetPathOption::Affinity::NamedAffinity::ConstraintExtendedValue


class MplsTeStandby::P2pP2mpTunnel::NniTunnels::NniTunnel::DelayCleanPpLsp::S2l::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetPathOption::Affinity::NamedAffinity::ExtendedForwardRefValue : public ydk::Entity
{
    public:
        ExtendedForwardRefValue();
        ~ExtendedForwardRefValue();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf entry; //type: uint32

}; // MplsTeStandby::P2pP2mpTunnel::NniTunnels::NniTunnel::DelayCleanPpLsp::S2l::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetPathOption::Affinity::NamedAffinity::ExtendedForwardRefValue


}
}

#endif /* _CISCO_IOS_XR_MPLS_TE_OPER_46_ */


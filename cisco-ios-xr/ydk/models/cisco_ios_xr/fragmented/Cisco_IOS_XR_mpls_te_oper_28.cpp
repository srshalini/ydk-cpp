
#include <sstream>
#include <iostream>
#include <ydk/entity_util.hpp>
#include "bundle_info.hpp"
#include "generated_entity_lookup.hpp"
#include "Cisco_IOS_XR_mpls_te_oper_28.hpp"
#include "Cisco_IOS_XR_mpls_te_oper_29.hpp"

using namespace ydk;

namespace cisco_ios_xr {
namespace Cisco_IOS_XR_mpls_te_oper {

MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::CleanedLsp::S2l::GmplsLabels::ResvIngressLabel::Otn::BitMap::BitMap()
    :
    entry{YType::uint8, "entry"}
{

    yang_name = "bit-map"; yang_parent_name = "otn"; is_top_level_class = false; has_list_ancestor = true; 
}

MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::CleanedLsp::S2l::GmplsLabels::ResvIngressLabel::Otn::BitMap::~BitMap()
{
}

bool MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::CleanedLsp::S2l::GmplsLabels::ResvIngressLabel::Otn::BitMap::has_data() const
{
    if (is_presence_container) return true;
    return entry.is_set;
}

bool MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::CleanedLsp::S2l::GmplsLabels::ResvIngressLabel::Otn::BitMap::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(entry.yfilter);
}

std::string MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::CleanedLsp::S2l::GmplsLabels::ResvIngressLabel::Otn::BitMap::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bit-map";
    path_buffer << "[" << get_ylist_key() << "]";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::CleanedLsp::S2l::GmplsLabels::ResvIngressLabel::Otn::BitMap::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (entry.is_set || is_set(entry.yfilter)) leaf_name_data.push_back(entry.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::CleanedLsp::S2l::GmplsLabels::ResvIngressLabel::Otn::BitMap::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::CleanedLsp::S2l::GmplsLabels::ResvIngressLabel::Otn::BitMap::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::CleanedLsp::S2l::GmplsLabels::ResvIngressLabel::Otn::BitMap::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "entry")
    {
        entry = value;
        entry.value_namespace = name_space;
        entry.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::CleanedLsp::S2l::GmplsLabels::ResvIngressLabel::Otn::BitMap::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "entry")
    {
        entry.yfilter = yfilter;
    }
}

bool MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::CleanedLsp::S2l::GmplsLabels::ResvIngressLabel::Otn::BitMap::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "entry")
        return true;
    return false;
}

MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::CleanedLsp::S2l::GmplsLabels::ResvEgressLabel::ResvEgressLabel()
    :
    label_type{YType::enumeration, "label-type"}
        ,
    wdm(std::make_shared<MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::CleanedLsp::S2l::GmplsLabels::ResvEgressLabel::Wdm>())
    , otn(std::make_shared<MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::CleanedLsp::S2l::GmplsLabels::ResvEgressLabel::Otn>())
{
    wdm->parent = this;
    otn->parent = this;

    yang_name = "resv-egress-label"; yang_parent_name = "gmpls-labels"; is_top_level_class = false; has_list_ancestor = true; 
}

MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::CleanedLsp::S2l::GmplsLabels::ResvEgressLabel::~ResvEgressLabel()
{
}

bool MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::CleanedLsp::S2l::GmplsLabels::ResvEgressLabel::has_data() const
{
    if (is_presence_container) return true;
    return label_type.is_set
	|| (wdm !=  nullptr && wdm->has_data())
	|| (otn !=  nullptr && otn->has_data());
}

bool MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::CleanedLsp::S2l::GmplsLabels::ResvEgressLabel::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(label_type.yfilter)
	|| (wdm !=  nullptr && wdm->has_operation())
	|| (otn !=  nullptr && otn->has_operation());
}

std::string MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::CleanedLsp::S2l::GmplsLabels::ResvEgressLabel::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "resv-egress-label";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::CleanedLsp::S2l::GmplsLabels::ResvEgressLabel::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (label_type.is_set || is_set(label_type.yfilter)) leaf_name_data.push_back(label_type.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::CleanedLsp::S2l::GmplsLabels::ResvEgressLabel::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "wdm")
    {
        if(wdm == nullptr)
        {
            wdm = std::make_shared<MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::CleanedLsp::S2l::GmplsLabels::ResvEgressLabel::Wdm>();
        }
        return wdm;
    }

    if(child_yang_name == "otn")
    {
        if(otn == nullptr)
        {
            otn = std::make_shared<MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::CleanedLsp::S2l::GmplsLabels::ResvEgressLabel::Otn>();
        }
        return otn;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::CleanedLsp::S2l::GmplsLabels::ResvEgressLabel::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(wdm != nullptr)
    {
        _children["wdm"] = wdm;
    }

    if(otn != nullptr)
    {
        _children["otn"] = otn;
    }

    return _children;
}

void MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::CleanedLsp::S2l::GmplsLabels::ResvEgressLabel::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "label-type")
    {
        label_type = value;
        label_type.value_namespace = name_space;
        label_type.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::CleanedLsp::S2l::GmplsLabels::ResvEgressLabel::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "label-type")
    {
        label_type.yfilter = yfilter;
    }
}

bool MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::CleanedLsp::S2l::GmplsLabels::ResvEgressLabel::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "wdm" || name == "otn" || name == "label-type")
        return true;
    return false;
}

MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::CleanedLsp::S2l::GmplsLabels::ResvEgressLabel::Wdm::Wdm()
    :
    label_set{YType::boolean, "label-set"},
    grid{YType::enumeration, "grid"},
    channel_spacing{YType::enumeration, "channel-spacing"},
    identifier{YType::uint16, "identifier"},
    channel{YType::int16, "channel"}
{

    yang_name = "wdm"; yang_parent_name = "resv-egress-label"; is_top_level_class = false; has_list_ancestor = true; 
}

MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::CleanedLsp::S2l::GmplsLabels::ResvEgressLabel::Wdm::~Wdm()
{
}

bool MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::CleanedLsp::S2l::GmplsLabels::ResvEgressLabel::Wdm::has_data() const
{
    if (is_presence_container) return true;
    return label_set.is_set
	|| grid.is_set
	|| channel_spacing.is_set
	|| identifier.is_set
	|| channel.is_set;
}

bool MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::CleanedLsp::S2l::GmplsLabels::ResvEgressLabel::Wdm::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(label_set.yfilter)
	|| ydk::is_set(grid.yfilter)
	|| ydk::is_set(channel_spacing.yfilter)
	|| ydk::is_set(identifier.yfilter)
	|| ydk::is_set(channel.yfilter);
}

std::string MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::CleanedLsp::S2l::GmplsLabels::ResvEgressLabel::Wdm::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "wdm";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::CleanedLsp::S2l::GmplsLabels::ResvEgressLabel::Wdm::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (label_set.is_set || is_set(label_set.yfilter)) leaf_name_data.push_back(label_set.get_name_leafdata());
    if (grid.is_set || is_set(grid.yfilter)) leaf_name_data.push_back(grid.get_name_leafdata());
    if (channel_spacing.is_set || is_set(channel_spacing.yfilter)) leaf_name_data.push_back(channel_spacing.get_name_leafdata());
    if (identifier.is_set || is_set(identifier.yfilter)) leaf_name_data.push_back(identifier.get_name_leafdata());
    if (channel.is_set || is_set(channel.yfilter)) leaf_name_data.push_back(channel.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::CleanedLsp::S2l::GmplsLabels::ResvEgressLabel::Wdm::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::CleanedLsp::S2l::GmplsLabels::ResvEgressLabel::Wdm::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::CleanedLsp::S2l::GmplsLabels::ResvEgressLabel::Wdm::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "label-set")
    {
        label_set = value;
        label_set.value_namespace = name_space;
        label_set.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "grid")
    {
        grid = value;
        grid.value_namespace = name_space;
        grid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "channel-spacing")
    {
        channel_spacing = value;
        channel_spacing.value_namespace = name_space;
        channel_spacing.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "identifier")
    {
        identifier = value;
        identifier.value_namespace = name_space;
        identifier.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "channel")
    {
        channel = value;
        channel.value_namespace = name_space;
        channel.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::CleanedLsp::S2l::GmplsLabels::ResvEgressLabel::Wdm::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "label-set")
    {
        label_set.yfilter = yfilter;
    }
    if(value_path == "grid")
    {
        grid.yfilter = yfilter;
    }
    if(value_path == "channel-spacing")
    {
        channel_spacing.yfilter = yfilter;
    }
    if(value_path == "identifier")
    {
        identifier.yfilter = yfilter;
    }
    if(value_path == "channel")
    {
        channel.yfilter = yfilter;
    }
}

bool MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::CleanedLsp::S2l::GmplsLabels::ResvEgressLabel::Wdm::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "label-set" || name == "grid" || name == "channel-spacing" || name == "identifier" || name == "channel")
        return true;
    return false;
}

MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::CleanedLsp::S2l::GmplsLabels::ResvEgressLabel::Otn::Otn()
    :
    tpn{YType::uint16, "tpn"},
    bit_map_length{YType::uint16, "bit-map-length"}
        ,
    bit_map(this, {})
{

    yang_name = "otn"; yang_parent_name = "resv-egress-label"; is_top_level_class = false; has_list_ancestor = true; 
}

MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::CleanedLsp::S2l::GmplsLabels::ResvEgressLabel::Otn::~Otn()
{
}

bool MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::CleanedLsp::S2l::GmplsLabels::ResvEgressLabel::Otn::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<bit_map.len(); index++)
    {
        if(bit_map[index]->has_data())
            return true;
    }
    return tpn.is_set
	|| bit_map_length.is_set;
}

bool MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::CleanedLsp::S2l::GmplsLabels::ResvEgressLabel::Otn::has_operation() const
{
    for (std::size_t index=0; index<bit_map.len(); index++)
    {
        if(bit_map[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(tpn.yfilter)
	|| ydk::is_set(bit_map_length.yfilter);
}

std::string MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::CleanedLsp::S2l::GmplsLabels::ResvEgressLabel::Otn::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "otn";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::CleanedLsp::S2l::GmplsLabels::ResvEgressLabel::Otn::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (tpn.is_set || is_set(tpn.yfilter)) leaf_name_data.push_back(tpn.get_name_leafdata());
    if (bit_map_length.is_set || is_set(bit_map_length.yfilter)) leaf_name_data.push_back(bit_map_length.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::CleanedLsp::S2l::GmplsLabels::ResvEgressLabel::Otn::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "bit-map")
    {
        auto ent_ = std::make_shared<MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::CleanedLsp::S2l::GmplsLabels::ResvEgressLabel::Otn::BitMap>();
        ent_->parent = this;
        bit_map.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::CleanedLsp::S2l::GmplsLabels::ResvEgressLabel::Otn::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : bit_map.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::CleanedLsp::S2l::GmplsLabels::ResvEgressLabel::Otn::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "tpn")
    {
        tpn = value;
        tpn.value_namespace = name_space;
        tpn.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bit-map-length")
    {
        bit_map_length = value;
        bit_map_length.value_namespace = name_space;
        bit_map_length.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::CleanedLsp::S2l::GmplsLabels::ResvEgressLabel::Otn::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "tpn")
    {
        tpn.yfilter = yfilter;
    }
    if(value_path == "bit-map-length")
    {
        bit_map_length.yfilter = yfilter;
    }
}

bool MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::CleanedLsp::S2l::GmplsLabels::ResvEgressLabel::Otn::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "bit-map" || name == "tpn" || name == "bit-map-length")
        return true;
    return false;
}

MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::CleanedLsp::S2l::GmplsLabels::ResvEgressLabel::Otn::BitMap::BitMap()
    :
    entry{YType::uint8, "entry"}
{

    yang_name = "bit-map"; yang_parent_name = "otn"; is_top_level_class = false; has_list_ancestor = true; 
}

MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::CleanedLsp::S2l::GmplsLabels::ResvEgressLabel::Otn::BitMap::~BitMap()
{
}

bool MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::CleanedLsp::S2l::GmplsLabels::ResvEgressLabel::Otn::BitMap::has_data() const
{
    if (is_presence_container) return true;
    return entry.is_set;
}

bool MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::CleanedLsp::S2l::GmplsLabels::ResvEgressLabel::Otn::BitMap::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(entry.yfilter);
}

std::string MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::CleanedLsp::S2l::GmplsLabels::ResvEgressLabel::Otn::BitMap::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bit-map";
    path_buffer << "[" << get_ylist_key() << "]";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::CleanedLsp::S2l::GmplsLabels::ResvEgressLabel::Otn::BitMap::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (entry.is_set || is_set(entry.yfilter)) leaf_name_data.push_back(entry.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::CleanedLsp::S2l::GmplsLabels::ResvEgressLabel::Otn::BitMap::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::CleanedLsp::S2l::GmplsLabels::ResvEgressLabel::Otn::BitMap::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::CleanedLsp::S2l::GmplsLabels::ResvEgressLabel::Otn::BitMap::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "entry")
    {
        entry = value;
        entry.value_namespace = name_space;
        entry.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::CleanedLsp::S2l::GmplsLabels::ResvEgressLabel::Otn::BitMap::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "entry")
    {
        entry.yfilter = yfilter;
    }
}

bool MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::CleanedLsp::S2l::GmplsLabels::ResvEgressLabel::Otn::BitMap::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "entry")
        return true;
    return false;
}

MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::CleanedLsp::S2l::OtnS2l::OtnS2l()
    :
    otn(std::make_shared<MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::CleanedLsp::S2l::OtnS2l::Otn>())
    , aps(std::make_shared<MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::CleanedLsp::S2l::OtnS2l::Aps>())
{
    otn->parent = this;
    aps->parent = this;

    yang_name = "otn-s2l"; yang_parent_name = "s2l"; is_top_level_class = false; has_list_ancestor = true; 
}

MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::CleanedLsp::S2l::OtnS2l::~OtnS2l()
{
}

bool MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::CleanedLsp::S2l::OtnS2l::has_data() const
{
    if (is_presence_container) return true;
    return (otn !=  nullptr && otn->has_data())
	|| (aps !=  nullptr && aps->has_data());
}

bool MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::CleanedLsp::S2l::OtnS2l::has_operation() const
{
    return is_set(yfilter)
	|| (otn !=  nullptr && otn->has_operation())
	|| (aps !=  nullptr && aps->has_operation());
}

std::string MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::CleanedLsp::S2l::OtnS2l::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "otn-s2l";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::CleanedLsp::S2l::OtnS2l::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::CleanedLsp::S2l::OtnS2l::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "otn")
    {
        if(otn == nullptr)
        {
            otn = std::make_shared<MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::CleanedLsp::S2l::OtnS2l::Otn>();
        }
        return otn;
    }

    if(child_yang_name == "aps")
    {
        if(aps == nullptr)
        {
            aps = std::make_shared<MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::CleanedLsp::S2l::OtnS2l::Aps>();
        }
        return aps;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::CleanedLsp::S2l::OtnS2l::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(otn != nullptr)
    {
        _children["otn"] = otn;
    }

    if(aps != nullptr)
    {
        _children["aps"] = aps;
    }

    return _children;
}

void MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::CleanedLsp::S2l::OtnS2l::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::CleanedLsp::S2l::OtnS2l::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::CleanedLsp::S2l::OtnS2l::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "otn" || name == "aps")
        return true;
    return false;
}

MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::CleanedLsp::S2l::OtnS2l::Otn::Otn()
    :
    incoming_controller{YType::str, "incoming-controller"},
    incoming_controller_state{YType::enumeration, "incoming-controller-state"},
    incoming_sub_controller{YType::str, "incoming-sub-controller"},
    incoming_sub_controller_state{YType::enumeration, "incoming-sub-controller-state"},
    outgoing_controller{YType::str, "outgoing-controller"},
    outgoing_controller_state{YType::enumeration, "outgoing-controller-state"},
    outgoing_sub_controller{YType::str, "outgoing-sub-controller"},
    outgoing_sub_controller_state{YType::enumeration, "outgoing-sub-controller-state"},
    cross_connect_id{YType::uint32, "cross-connect-id"},
    is_connected{YType::boolean, "is-connected"},
    uptime{YType::uint32, "uptime"},
    outgoing_controller_ifhandle{YType::str, "outgoing-controller-ifhandle"},
    outgoing_sub_controller_ifhandle{YType::str, "outgoing-sub-controller-ifhandle"},
    incoming_controller_ifhandle{YType::str, "incoming-controller-ifhandle"},
    incoming_sub_controller_ifhandle{YType::str, "incoming-sub-controller-ifhandle"},
    gpid{YType::uint16, "gpid"}
        ,
    bandwidth(std::make_shared<MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::CleanedLsp::S2l::OtnS2l::Otn::Bandwidth>())
    , labels(std::make_shared<MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::CleanedLsp::S2l::OtnS2l::Otn::Labels>())
{
    bandwidth->parent = this;
    labels->parent = this;

    yang_name = "otn"; yang_parent_name = "otn-s2l"; is_top_level_class = false; has_list_ancestor = true; 
}

MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::CleanedLsp::S2l::OtnS2l::Otn::~Otn()
{
}

bool MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::CleanedLsp::S2l::OtnS2l::Otn::has_data() const
{
    if (is_presence_container) return true;
    return incoming_controller.is_set
	|| incoming_controller_state.is_set
	|| incoming_sub_controller.is_set
	|| incoming_sub_controller_state.is_set
	|| outgoing_controller.is_set
	|| outgoing_controller_state.is_set
	|| outgoing_sub_controller.is_set
	|| outgoing_sub_controller_state.is_set
	|| cross_connect_id.is_set
	|| is_connected.is_set
	|| uptime.is_set
	|| outgoing_controller_ifhandle.is_set
	|| outgoing_sub_controller_ifhandle.is_set
	|| incoming_controller_ifhandle.is_set
	|| incoming_sub_controller_ifhandle.is_set
	|| gpid.is_set
	|| (bandwidth !=  nullptr && bandwidth->has_data())
	|| (labels !=  nullptr && labels->has_data());
}

bool MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::CleanedLsp::S2l::OtnS2l::Otn::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(incoming_controller.yfilter)
	|| ydk::is_set(incoming_controller_state.yfilter)
	|| ydk::is_set(incoming_sub_controller.yfilter)
	|| ydk::is_set(incoming_sub_controller_state.yfilter)
	|| ydk::is_set(outgoing_controller.yfilter)
	|| ydk::is_set(outgoing_controller_state.yfilter)
	|| ydk::is_set(outgoing_sub_controller.yfilter)
	|| ydk::is_set(outgoing_sub_controller_state.yfilter)
	|| ydk::is_set(cross_connect_id.yfilter)
	|| ydk::is_set(is_connected.yfilter)
	|| ydk::is_set(uptime.yfilter)
	|| ydk::is_set(outgoing_controller_ifhandle.yfilter)
	|| ydk::is_set(outgoing_sub_controller_ifhandle.yfilter)
	|| ydk::is_set(incoming_controller_ifhandle.yfilter)
	|| ydk::is_set(incoming_sub_controller_ifhandle.yfilter)
	|| ydk::is_set(gpid.yfilter)
	|| (bandwidth !=  nullptr && bandwidth->has_operation())
	|| (labels !=  nullptr && labels->has_operation());
}

std::string MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::CleanedLsp::S2l::OtnS2l::Otn::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "otn";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::CleanedLsp::S2l::OtnS2l::Otn::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (incoming_controller.is_set || is_set(incoming_controller.yfilter)) leaf_name_data.push_back(incoming_controller.get_name_leafdata());
    if (incoming_controller_state.is_set || is_set(incoming_controller_state.yfilter)) leaf_name_data.push_back(incoming_controller_state.get_name_leafdata());
    if (incoming_sub_controller.is_set || is_set(incoming_sub_controller.yfilter)) leaf_name_data.push_back(incoming_sub_controller.get_name_leafdata());
    if (incoming_sub_controller_state.is_set || is_set(incoming_sub_controller_state.yfilter)) leaf_name_data.push_back(incoming_sub_controller_state.get_name_leafdata());
    if (outgoing_controller.is_set || is_set(outgoing_controller.yfilter)) leaf_name_data.push_back(outgoing_controller.get_name_leafdata());
    if (outgoing_controller_state.is_set || is_set(outgoing_controller_state.yfilter)) leaf_name_data.push_back(outgoing_controller_state.get_name_leafdata());
    if (outgoing_sub_controller.is_set || is_set(outgoing_sub_controller.yfilter)) leaf_name_data.push_back(outgoing_sub_controller.get_name_leafdata());
    if (outgoing_sub_controller_state.is_set || is_set(outgoing_sub_controller_state.yfilter)) leaf_name_data.push_back(outgoing_sub_controller_state.get_name_leafdata());
    if (cross_connect_id.is_set || is_set(cross_connect_id.yfilter)) leaf_name_data.push_back(cross_connect_id.get_name_leafdata());
    if (is_connected.is_set || is_set(is_connected.yfilter)) leaf_name_data.push_back(is_connected.get_name_leafdata());
    if (uptime.is_set || is_set(uptime.yfilter)) leaf_name_data.push_back(uptime.get_name_leafdata());
    if (outgoing_controller_ifhandle.is_set || is_set(outgoing_controller_ifhandle.yfilter)) leaf_name_data.push_back(outgoing_controller_ifhandle.get_name_leafdata());
    if (outgoing_sub_controller_ifhandle.is_set || is_set(outgoing_sub_controller_ifhandle.yfilter)) leaf_name_data.push_back(outgoing_sub_controller_ifhandle.get_name_leafdata());
    if (incoming_controller_ifhandle.is_set || is_set(incoming_controller_ifhandle.yfilter)) leaf_name_data.push_back(incoming_controller_ifhandle.get_name_leafdata());
    if (incoming_sub_controller_ifhandle.is_set || is_set(incoming_sub_controller_ifhandle.yfilter)) leaf_name_data.push_back(incoming_sub_controller_ifhandle.get_name_leafdata());
    if (gpid.is_set || is_set(gpid.yfilter)) leaf_name_data.push_back(gpid.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::CleanedLsp::S2l::OtnS2l::Otn::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "bandwidth")
    {
        if(bandwidth == nullptr)
        {
            bandwidth = std::make_shared<MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::CleanedLsp::S2l::OtnS2l::Otn::Bandwidth>();
        }
        return bandwidth;
    }

    if(child_yang_name == "labels")
    {
        if(labels == nullptr)
        {
            labels = std::make_shared<MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::CleanedLsp::S2l::OtnS2l::Otn::Labels>();
        }
        return labels;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::CleanedLsp::S2l::OtnS2l::Otn::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(bandwidth != nullptr)
    {
        _children["bandwidth"] = bandwidth;
    }

    if(labels != nullptr)
    {
        _children["labels"] = labels;
    }

    return _children;
}

void MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::CleanedLsp::S2l::OtnS2l::Otn::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "incoming-controller")
    {
        incoming_controller = value;
        incoming_controller.value_namespace = name_space;
        incoming_controller.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "incoming-controller-state")
    {
        incoming_controller_state = value;
        incoming_controller_state.value_namespace = name_space;
        incoming_controller_state.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "incoming-sub-controller")
    {
        incoming_sub_controller = value;
        incoming_sub_controller.value_namespace = name_space;
        incoming_sub_controller.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "incoming-sub-controller-state")
    {
        incoming_sub_controller_state = value;
        incoming_sub_controller_state.value_namespace = name_space;
        incoming_sub_controller_state.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "outgoing-controller")
    {
        outgoing_controller = value;
        outgoing_controller.value_namespace = name_space;
        outgoing_controller.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "outgoing-controller-state")
    {
        outgoing_controller_state = value;
        outgoing_controller_state.value_namespace = name_space;
        outgoing_controller_state.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "outgoing-sub-controller")
    {
        outgoing_sub_controller = value;
        outgoing_sub_controller.value_namespace = name_space;
        outgoing_sub_controller.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "outgoing-sub-controller-state")
    {
        outgoing_sub_controller_state = value;
        outgoing_sub_controller_state.value_namespace = name_space;
        outgoing_sub_controller_state.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cross-connect-id")
    {
        cross_connect_id = value;
        cross_connect_id.value_namespace = name_space;
        cross_connect_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-connected")
    {
        is_connected = value;
        is_connected.value_namespace = name_space;
        is_connected.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "uptime")
    {
        uptime = value;
        uptime.value_namespace = name_space;
        uptime.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "outgoing-controller-ifhandle")
    {
        outgoing_controller_ifhandle = value;
        outgoing_controller_ifhandle.value_namespace = name_space;
        outgoing_controller_ifhandle.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "outgoing-sub-controller-ifhandle")
    {
        outgoing_sub_controller_ifhandle = value;
        outgoing_sub_controller_ifhandle.value_namespace = name_space;
        outgoing_sub_controller_ifhandle.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "incoming-controller-ifhandle")
    {
        incoming_controller_ifhandle = value;
        incoming_controller_ifhandle.value_namespace = name_space;
        incoming_controller_ifhandle.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "incoming-sub-controller-ifhandle")
    {
        incoming_sub_controller_ifhandle = value;
        incoming_sub_controller_ifhandle.value_namespace = name_space;
        incoming_sub_controller_ifhandle.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "gpid")
    {
        gpid = value;
        gpid.value_namespace = name_space;
        gpid.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::CleanedLsp::S2l::OtnS2l::Otn::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "incoming-controller")
    {
        incoming_controller.yfilter = yfilter;
    }
    if(value_path == "incoming-controller-state")
    {
        incoming_controller_state.yfilter = yfilter;
    }
    if(value_path == "incoming-sub-controller")
    {
        incoming_sub_controller.yfilter = yfilter;
    }
    if(value_path == "incoming-sub-controller-state")
    {
        incoming_sub_controller_state.yfilter = yfilter;
    }
    if(value_path == "outgoing-controller")
    {
        outgoing_controller.yfilter = yfilter;
    }
    if(value_path == "outgoing-controller-state")
    {
        outgoing_controller_state.yfilter = yfilter;
    }
    if(value_path == "outgoing-sub-controller")
    {
        outgoing_sub_controller.yfilter = yfilter;
    }
    if(value_path == "outgoing-sub-controller-state")
    {
        outgoing_sub_controller_state.yfilter = yfilter;
    }
    if(value_path == "cross-connect-id")
    {
        cross_connect_id.yfilter = yfilter;
    }
    if(value_path == "is-connected")
    {
        is_connected.yfilter = yfilter;
    }
    if(value_path == "uptime")
    {
        uptime.yfilter = yfilter;
    }
    if(value_path == "outgoing-controller-ifhandle")
    {
        outgoing_controller_ifhandle.yfilter = yfilter;
    }
    if(value_path == "outgoing-sub-controller-ifhandle")
    {
        outgoing_sub_controller_ifhandle.yfilter = yfilter;
    }
    if(value_path == "incoming-controller-ifhandle")
    {
        incoming_controller_ifhandle.yfilter = yfilter;
    }
    if(value_path == "incoming-sub-controller-ifhandle")
    {
        incoming_sub_controller_ifhandle.yfilter = yfilter;
    }
    if(value_path == "gpid")
    {
        gpid.yfilter = yfilter;
    }
}

bool MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::CleanedLsp::S2l::OtnS2l::Otn::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "bandwidth" || name == "labels" || name == "incoming-controller" || name == "incoming-controller-state" || name == "incoming-sub-controller" || name == "incoming-sub-controller-state" || name == "outgoing-controller" || name == "outgoing-controller-state" || name == "outgoing-sub-controller" || name == "outgoing-sub-controller-state" || name == "cross-connect-id" || name == "is-connected" || name == "uptime" || name == "outgoing-controller-ifhandle" || name == "outgoing-sub-controller-ifhandle" || name == "incoming-controller-ifhandle" || name == "incoming-sub-controller-ifhandle" || name == "gpid")
        return true;
    return false;
}

MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::CleanedLsp::S2l::OtnS2l::Otn::Bandwidth::Bandwidth()
    :
    odu_level{YType::enumeration, "odu-level"}
        ,
    odu_flex_cbr(std::make_shared<MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::CleanedLsp::S2l::OtnS2l::Otn::Bandwidth::OduFlexCbr>())
    , odu_flex_gfp_f_res(std::make_shared<MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::CleanedLsp::S2l::OtnS2l::Otn::Bandwidth::OduFlexGfpFRes>())
    , odu_flex_gfp_f_non_res(std::make_shared<MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::CleanedLsp::S2l::OtnS2l::Otn::Bandwidth::OduFlexGfpFNonRes>())
{
    odu_flex_cbr->parent = this;
    odu_flex_gfp_f_res->parent = this;
    odu_flex_gfp_f_non_res->parent = this;

    yang_name = "bandwidth"; yang_parent_name = "otn"; is_top_level_class = false; has_list_ancestor = true; 
}

MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::CleanedLsp::S2l::OtnS2l::Otn::Bandwidth::~Bandwidth()
{
}

bool MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::CleanedLsp::S2l::OtnS2l::Otn::Bandwidth::has_data() const
{
    if (is_presence_container) return true;
    return odu_level.is_set
	|| (odu_flex_cbr !=  nullptr && odu_flex_cbr->has_data())
	|| (odu_flex_gfp_f_res !=  nullptr && odu_flex_gfp_f_res->has_data())
	|| (odu_flex_gfp_f_non_res !=  nullptr && odu_flex_gfp_f_non_res->has_data());
}

bool MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::CleanedLsp::S2l::OtnS2l::Otn::Bandwidth::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(odu_level.yfilter)
	|| (odu_flex_cbr !=  nullptr && odu_flex_cbr->has_operation())
	|| (odu_flex_gfp_f_res !=  nullptr && odu_flex_gfp_f_res->has_operation())
	|| (odu_flex_gfp_f_non_res !=  nullptr && odu_flex_gfp_f_non_res->has_operation());
}

std::string MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::CleanedLsp::S2l::OtnS2l::Otn::Bandwidth::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bandwidth";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::CleanedLsp::S2l::OtnS2l::Otn::Bandwidth::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (odu_level.is_set || is_set(odu_level.yfilter)) leaf_name_data.push_back(odu_level.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::CleanedLsp::S2l::OtnS2l::Otn::Bandwidth::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "odu-flex-cbr")
    {
        if(odu_flex_cbr == nullptr)
        {
            odu_flex_cbr = std::make_shared<MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::CleanedLsp::S2l::OtnS2l::Otn::Bandwidth::OduFlexCbr>();
        }
        return odu_flex_cbr;
    }

    if(child_yang_name == "odu-flex-gfp-f-res")
    {
        if(odu_flex_gfp_f_res == nullptr)
        {
            odu_flex_gfp_f_res = std::make_shared<MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::CleanedLsp::S2l::OtnS2l::Otn::Bandwidth::OduFlexGfpFRes>();
        }
        return odu_flex_gfp_f_res;
    }

    if(child_yang_name == "odu-flex-gfp-f-non-res")
    {
        if(odu_flex_gfp_f_non_res == nullptr)
        {
            odu_flex_gfp_f_non_res = std::make_shared<MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::CleanedLsp::S2l::OtnS2l::Otn::Bandwidth::OduFlexGfpFNonRes>();
        }
        return odu_flex_gfp_f_non_res;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::CleanedLsp::S2l::OtnS2l::Otn::Bandwidth::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(odu_flex_cbr != nullptr)
    {
        _children["odu-flex-cbr"] = odu_flex_cbr;
    }

    if(odu_flex_gfp_f_res != nullptr)
    {
        _children["odu-flex-gfp-f-res"] = odu_flex_gfp_f_res;
    }

    if(odu_flex_gfp_f_non_res != nullptr)
    {
        _children["odu-flex-gfp-f-non-res"] = odu_flex_gfp_f_non_res;
    }

    return _children;
}

void MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::CleanedLsp::S2l::OtnS2l::Otn::Bandwidth::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "odu-level")
    {
        odu_level = value;
        odu_level.value_namespace = name_space;
        odu_level.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::CleanedLsp::S2l::OtnS2l::Otn::Bandwidth::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "odu-level")
    {
        odu_level.yfilter = yfilter;
    }
}

bool MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::CleanedLsp::S2l::OtnS2l::Otn::Bandwidth::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "odu-flex-cbr" || name == "odu-flex-gfp-f-res" || name == "odu-flex-gfp-f-non-res" || name == "odu-level")
        return true;
    return false;
}

MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::CleanedLsp::S2l::OtnS2l::Otn::Bandwidth::OduFlexCbr::OduFlexCbr()
    :
    bit_rate{YType::uint32, "bit-rate"},
    tolerance{YType::uint16, "tolerance"}
{

    yang_name = "odu-flex-cbr"; yang_parent_name = "bandwidth"; is_top_level_class = false; has_list_ancestor = true; 
}

MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::CleanedLsp::S2l::OtnS2l::Otn::Bandwidth::OduFlexCbr::~OduFlexCbr()
{
}

bool MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::CleanedLsp::S2l::OtnS2l::Otn::Bandwidth::OduFlexCbr::has_data() const
{
    if (is_presence_container) return true;
    return bit_rate.is_set
	|| tolerance.is_set;
}

bool MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::CleanedLsp::S2l::OtnS2l::Otn::Bandwidth::OduFlexCbr::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(bit_rate.yfilter)
	|| ydk::is_set(tolerance.yfilter);
}

std::string MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::CleanedLsp::S2l::OtnS2l::Otn::Bandwidth::OduFlexCbr::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "odu-flex-cbr";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::CleanedLsp::S2l::OtnS2l::Otn::Bandwidth::OduFlexCbr::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (bit_rate.is_set || is_set(bit_rate.yfilter)) leaf_name_data.push_back(bit_rate.get_name_leafdata());
    if (tolerance.is_set || is_set(tolerance.yfilter)) leaf_name_data.push_back(tolerance.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::CleanedLsp::S2l::OtnS2l::Otn::Bandwidth::OduFlexCbr::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::CleanedLsp::S2l::OtnS2l::Otn::Bandwidth::OduFlexCbr::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::CleanedLsp::S2l::OtnS2l::Otn::Bandwidth::OduFlexCbr::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "bit-rate")
    {
        bit_rate = value;
        bit_rate.value_namespace = name_space;
        bit_rate.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tolerance")
    {
        tolerance = value;
        tolerance.value_namespace = name_space;
        tolerance.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::CleanedLsp::S2l::OtnS2l::Otn::Bandwidth::OduFlexCbr::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "bit-rate")
    {
        bit_rate.yfilter = yfilter;
    }
    if(value_path == "tolerance")
    {
        tolerance.yfilter = yfilter;
    }
}

bool MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::CleanedLsp::S2l::OtnS2l::Otn::Bandwidth::OduFlexCbr::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "bit-rate" || name == "tolerance")
        return true;
    return false;
}

MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::CleanedLsp::S2l::OtnS2l::Otn::Bandwidth::OduFlexGfpFRes::OduFlexGfpFRes()
    :
    bit_rate{YType::uint32, "bit-rate"}
{

    yang_name = "odu-flex-gfp-f-res"; yang_parent_name = "bandwidth"; is_top_level_class = false; has_list_ancestor = true; 
}

MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::CleanedLsp::S2l::OtnS2l::Otn::Bandwidth::OduFlexGfpFRes::~OduFlexGfpFRes()
{
}

bool MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::CleanedLsp::S2l::OtnS2l::Otn::Bandwidth::OduFlexGfpFRes::has_data() const
{
    if (is_presence_container) return true;
    return bit_rate.is_set;
}

bool MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::CleanedLsp::S2l::OtnS2l::Otn::Bandwidth::OduFlexGfpFRes::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(bit_rate.yfilter);
}

std::string MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::CleanedLsp::S2l::OtnS2l::Otn::Bandwidth::OduFlexGfpFRes::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "odu-flex-gfp-f-res";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::CleanedLsp::S2l::OtnS2l::Otn::Bandwidth::OduFlexGfpFRes::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (bit_rate.is_set || is_set(bit_rate.yfilter)) leaf_name_data.push_back(bit_rate.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::CleanedLsp::S2l::OtnS2l::Otn::Bandwidth::OduFlexGfpFRes::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::CleanedLsp::S2l::OtnS2l::Otn::Bandwidth::OduFlexGfpFRes::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::CleanedLsp::S2l::OtnS2l::Otn::Bandwidth::OduFlexGfpFRes::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "bit-rate")
    {
        bit_rate = value;
        bit_rate.value_namespace = name_space;
        bit_rate.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::CleanedLsp::S2l::OtnS2l::Otn::Bandwidth::OduFlexGfpFRes::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "bit-rate")
    {
        bit_rate.yfilter = yfilter;
    }
}

bool MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::CleanedLsp::S2l::OtnS2l::Otn::Bandwidth::OduFlexGfpFRes::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "bit-rate")
        return true;
    return false;
}

MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::CleanedLsp::S2l::OtnS2l::Otn::Bandwidth::OduFlexGfpFNonRes::OduFlexGfpFNonRes()
    :
    bit_rate{YType::uint32, "bit-rate"}
{

    yang_name = "odu-flex-gfp-f-non-res"; yang_parent_name = "bandwidth"; is_top_level_class = false; has_list_ancestor = true; 
}

MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::CleanedLsp::S2l::OtnS2l::Otn::Bandwidth::OduFlexGfpFNonRes::~OduFlexGfpFNonRes()
{
}

bool MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::CleanedLsp::S2l::OtnS2l::Otn::Bandwidth::OduFlexGfpFNonRes::has_data() const
{
    if (is_presence_container) return true;
    return bit_rate.is_set;
}

bool MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::CleanedLsp::S2l::OtnS2l::Otn::Bandwidth::OduFlexGfpFNonRes::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(bit_rate.yfilter);
}

std::string MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::CleanedLsp::S2l::OtnS2l::Otn::Bandwidth::OduFlexGfpFNonRes::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "odu-flex-gfp-f-non-res";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::CleanedLsp::S2l::OtnS2l::Otn::Bandwidth::OduFlexGfpFNonRes::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (bit_rate.is_set || is_set(bit_rate.yfilter)) leaf_name_data.push_back(bit_rate.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::CleanedLsp::S2l::OtnS2l::Otn::Bandwidth::OduFlexGfpFNonRes::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::CleanedLsp::S2l::OtnS2l::Otn::Bandwidth::OduFlexGfpFNonRes::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::CleanedLsp::S2l::OtnS2l::Otn::Bandwidth::OduFlexGfpFNonRes::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "bit-rate")
    {
        bit_rate = value;
        bit_rate.value_namespace = name_space;
        bit_rate.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::CleanedLsp::S2l::OtnS2l::Otn::Bandwidth::OduFlexGfpFNonRes::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "bit-rate")
    {
        bit_rate.yfilter = yfilter;
    }
}

bool MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::CleanedLsp::S2l::OtnS2l::Otn::Bandwidth::OduFlexGfpFNonRes::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "bit-rate")
        return true;
    return false;
}

MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::CleanedLsp::S2l::OtnS2l::Otn::Labels::Labels()
    :
    path_ingress_label(std::make_shared<MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::CleanedLsp::S2l::OtnS2l::Otn::Labels::PathIngressLabel>())
    , path_egress_label(std::make_shared<MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::CleanedLsp::S2l::OtnS2l::Otn::Labels::PathEgressLabel>())
    , resv_ingress_label(std::make_shared<MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::CleanedLsp::S2l::OtnS2l::Otn::Labels::ResvIngressLabel>())
    , resv_egress_label(std::make_shared<MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::CleanedLsp::S2l::OtnS2l::Otn::Labels::ResvEgressLabel>())
{
    path_ingress_label->parent = this;
    path_egress_label->parent = this;
    resv_ingress_label->parent = this;
    resv_egress_label->parent = this;

    yang_name = "labels"; yang_parent_name = "otn"; is_top_level_class = false; has_list_ancestor = true; 
}

MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::CleanedLsp::S2l::OtnS2l::Otn::Labels::~Labels()
{
}

bool MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::CleanedLsp::S2l::OtnS2l::Otn::Labels::has_data() const
{
    if (is_presence_container) return true;
    return (path_ingress_label !=  nullptr && path_ingress_label->has_data())
	|| (path_egress_label !=  nullptr && path_egress_label->has_data())
	|| (resv_ingress_label !=  nullptr && resv_ingress_label->has_data())
	|| (resv_egress_label !=  nullptr && resv_egress_label->has_data());
}

bool MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::CleanedLsp::S2l::OtnS2l::Otn::Labels::has_operation() const
{
    return is_set(yfilter)
	|| (path_ingress_label !=  nullptr && path_ingress_label->has_operation())
	|| (path_egress_label !=  nullptr && path_egress_label->has_operation())
	|| (resv_ingress_label !=  nullptr && resv_ingress_label->has_operation())
	|| (resv_egress_label !=  nullptr && resv_egress_label->has_operation());
}

std::string MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::CleanedLsp::S2l::OtnS2l::Otn::Labels::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "labels";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::CleanedLsp::S2l::OtnS2l::Otn::Labels::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::CleanedLsp::S2l::OtnS2l::Otn::Labels::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "path-ingress-label")
    {
        if(path_ingress_label == nullptr)
        {
            path_ingress_label = std::make_shared<MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::CleanedLsp::S2l::OtnS2l::Otn::Labels::PathIngressLabel>();
        }
        return path_ingress_label;
    }

    if(child_yang_name == "path-egress-label")
    {
        if(path_egress_label == nullptr)
        {
            path_egress_label = std::make_shared<MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::CleanedLsp::S2l::OtnS2l::Otn::Labels::PathEgressLabel>();
        }
        return path_egress_label;
    }

    if(child_yang_name == "resv-ingress-label")
    {
        if(resv_ingress_label == nullptr)
        {
            resv_ingress_label = std::make_shared<MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::CleanedLsp::S2l::OtnS2l::Otn::Labels::ResvIngressLabel>();
        }
        return resv_ingress_label;
    }

    if(child_yang_name == "resv-egress-label")
    {
        if(resv_egress_label == nullptr)
        {
            resv_egress_label = std::make_shared<MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::CleanedLsp::S2l::OtnS2l::Otn::Labels::ResvEgressLabel>();
        }
        return resv_egress_label;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::CleanedLsp::S2l::OtnS2l::Otn::Labels::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(path_ingress_label != nullptr)
    {
        _children["path-ingress-label"] = path_ingress_label;
    }

    if(path_egress_label != nullptr)
    {
        _children["path-egress-label"] = path_egress_label;
    }

    if(resv_ingress_label != nullptr)
    {
        _children["resv-ingress-label"] = resv_ingress_label;
    }

    if(resv_egress_label != nullptr)
    {
        _children["resv-egress-label"] = resv_egress_label;
    }

    return _children;
}

void MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::CleanedLsp::S2l::OtnS2l::Otn::Labels::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::CleanedLsp::S2l::OtnS2l::Otn::Labels::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::CleanedLsp::S2l::OtnS2l::Otn::Labels::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "path-ingress-label" || name == "path-egress-label" || name == "resv-ingress-label" || name == "resv-egress-label")
        return true;
    return false;
}

MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::CleanedLsp::S2l::OtnS2l::Otn::Labels::PathIngressLabel::PathIngressLabel()
    :
    label_type{YType::enumeration, "label-type"}
        ,
    wdm(std::make_shared<MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::CleanedLsp::S2l::OtnS2l::Otn::Labels::PathIngressLabel::Wdm>())
    , otn(std::make_shared<MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::CleanedLsp::S2l::OtnS2l::Otn::Labels::PathIngressLabel::Otn_>())
{
    wdm->parent = this;
    otn->parent = this;

    yang_name = "path-ingress-label"; yang_parent_name = "labels"; is_top_level_class = false; has_list_ancestor = true; 
}

MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::CleanedLsp::S2l::OtnS2l::Otn::Labels::PathIngressLabel::~PathIngressLabel()
{
}

bool MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::CleanedLsp::S2l::OtnS2l::Otn::Labels::PathIngressLabel::has_data() const
{
    if (is_presence_container) return true;
    return label_type.is_set
	|| (wdm !=  nullptr && wdm->has_data())
	|| (otn !=  nullptr && otn->has_data());
}

bool MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::CleanedLsp::S2l::OtnS2l::Otn::Labels::PathIngressLabel::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(label_type.yfilter)
	|| (wdm !=  nullptr && wdm->has_operation())
	|| (otn !=  nullptr && otn->has_operation());
}

std::string MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::CleanedLsp::S2l::OtnS2l::Otn::Labels::PathIngressLabel::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "path-ingress-label";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::CleanedLsp::S2l::OtnS2l::Otn::Labels::PathIngressLabel::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (label_type.is_set || is_set(label_type.yfilter)) leaf_name_data.push_back(label_type.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::CleanedLsp::S2l::OtnS2l::Otn::Labels::PathIngressLabel::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "wdm")
    {
        if(wdm == nullptr)
        {
            wdm = std::make_shared<MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::CleanedLsp::S2l::OtnS2l::Otn::Labels::PathIngressLabel::Wdm>();
        }
        return wdm;
    }

    if(child_yang_name == "otn")
    {
        if(otn == nullptr)
        {
            otn = std::make_shared<MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::CleanedLsp::S2l::OtnS2l::Otn::Labels::PathIngressLabel::Otn_>();
        }
        return otn;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::CleanedLsp::S2l::OtnS2l::Otn::Labels::PathIngressLabel::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(wdm != nullptr)
    {
        _children["wdm"] = wdm;
    }

    if(otn != nullptr)
    {
        _children["otn"] = otn;
    }

    return _children;
}

void MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::CleanedLsp::S2l::OtnS2l::Otn::Labels::PathIngressLabel::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "label-type")
    {
        label_type = value;
        label_type.value_namespace = name_space;
        label_type.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::CleanedLsp::S2l::OtnS2l::Otn::Labels::PathIngressLabel::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "label-type")
    {
        label_type.yfilter = yfilter;
    }
}

bool MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::CleanedLsp::S2l::OtnS2l::Otn::Labels::PathIngressLabel::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "wdm" || name == "otn" || name == "label-type")
        return true;
    return false;
}

MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::CleanedLsp::S2l::OtnS2l::Otn::Labels::PathIngressLabel::Wdm::Wdm()
    :
    label_set{YType::boolean, "label-set"},
    grid{YType::enumeration, "grid"},
    channel_spacing{YType::enumeration, "channel-spacing"},
    identifier{YType::uint16, "identifier"},
    channel{YType::int16, "channel"}
{

    yang_name = "wdm"; yang_parent_name = "path-ingress-label"; is_top_level_class = false; has_list_ancestor = true; 
}

MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::CleanedLsp::S2l::OtnS2l::Otn::Labels::PathIngressLabel::Wdm::~Wdm()
{
}

bool MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::CleanedLsp::S2l::OtnS2l::Otn::Labels::PathIngressLabel::Wdm::has_data() const
{
    if (is_presence_container) return true;
    return label_set.is_set
	|| grid.is_set
	|| channel_spacing.is_set
	|| identifier.is_set
	|| channel.is_set;
}

bool MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::CleanedLsp::S2l::OtnS2l::Otn::Labels::PathIngressLabel::Wdm::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(label_set.yfilter)
	|| ydk::is_set(grid.yfilter)
	|| ydk::is_set(channel_spacing.yfilter)
	|| ydk::is_set(identifier.yfilter)
	|| ydk::is_set(channel.yfilter);
}

std::string MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::CleanedLsp::S2l::OtnS2l::Otn::Labels::PathIngressLabel::Wdm::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "wdm";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::CleanedLsp::S2l::OtnS2l::Otn::Labels::PathIngressLabel::Wdm::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (label_set.is_set || is_set(label_set.yfilter)) leaf_name_data.push_back(label_set.get_name_leafdata());
    if (grid.is_set || is_set(grid.yfilter)) leaf_name_data.push_back(grid.get_name_leafdata());
    if (channel_spacing.is_set || is_set(channel_spacing.yfilter)) leaf_name_data.push_back(channel_spacing.get_name_leafdata());
    if (identifier.is_set || is_set(identifier.yfilter)) leaf_name_data.push_back(identifier.get_name_leafdata());
    if (channel.is_set || is_set(channel.yfilter)) leaf_name_data.push_back(channel.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::CleanedLsp::S2l::OtnS2l::Otn::Labels::PathIngressLabel::Wdm::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::CleanedLsp::S2l::OtnS2l::Otn::Labels::PathIngressLabel::Wdm::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::CleanedLsp::S2l::OtnS2l::Otn::Labels::PathIngressLabel::Wdm::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "label-set")
    {
        label_set = value;
        label_set.value_namespace = name_space;
        label_set.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "grid")
    {
        grid = value;
        grid.value_namespace = name_space;
        grid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "channel-spacing")
    {
        channel_spacing = value;
        channel_spacing.value_namespace = name_space;
        channel_spacing.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "identifier")
    {
        identifier = value;
        identifier.value_namespace = name_space;
        identifier.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "channel")
    {
        channel = value;
        channel.value_namespace = name_space;
        channel.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::CleanedLsp::S2l::OtnS2l::Otn::Labels::PathIngressLabel::Wdm::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "label-set")
    {
        label_set.yfilter = yfilter;
    }
    if(value_path == "grid")
    {
        grid.yfilter = yfilter;
    }
    if(value_path == "channel-spacing")
    {
        channel_spacing.yfilter = yfilter;
    }
    if(value_path == "identifier")
    {
        identifier.yfilter = yfilter;
    }
    if(value_path == "channel")
    {
        channel.yfilter = yfilter;
    }
}

bool MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::CleanedLsp::S2l::OtnS2l::Otn::Labels::PathIngressLabel::Wdm::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "label-set" || name == "grid" || name == "channel-spacing" || name == "identifier" || name == "channel")
        return true;
    return false;
}

MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::CleanedLsp::S2l::OtnS2l::Otn::Labels::PathIngressLabel::Otn_::Otn_()
    :
    tpn{YType::uint16, "tpn"},
    bit_map_length{YType::uint16, "bit-map-length"}
        ,
    bit_map(this, {})
{

    yang_name = "otn"; yang_parent_name = "path-ingress-label"; is_top_level_class = false; has_list_ancestor = true; 
}

MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::CleanedLsp::S2l::OtnS2l::Otn::Labels::PathIngressLabel::Otn_::~Otn_()
{
}

bool MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::CleanedLsp::S2l::OtnS2l::Otn::Labels::PathIngressLabel::Otn_::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<bit_map.len(); index++)
    {
        if(bit_map[index]->has_data())
            return true;
    }
    return tpn.is_set
	|| bit_map_length.is_set;
}

bool MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::CleanedLsp::S2l::OtnS2l::Otn::Labels::PathIngressLabel::Otn_::has_operation() const
{
    for (std::size_t index=0; index<bit_map.len(); index++)
    {
        if(bit_map[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(tpn.yfilter)
	|| ydk::is_set(bit_map_length.yfilter);
}

std::string MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::CleanedLsp::S2l::OtnS2l::Otn::Labels::PathIngressLabel::Otn_::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "otn";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::CleanedLsp::S2l::OtnS2l::Otn::Labels::PathIngressLabel::Otn_::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (tpn.is_set || is_set(tpn.yfilter)) leaf_name_data.push_back(tpn.get_name_leafdata());
    if (bit_map_length.is_set || is_set(bit_map_length.yfilter)) leaf_name_data.push_back(bit_map_length.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::CleanedLsp::S2l::OtnS2l::Otn::Labels::PathIngressLabel::Otn_::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "bit-map")
    {
        auto ent_ = std::make_shared<MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::CleanedLsp::S2l::OtnS2l::Otn::Labels::PathIngressLabel::Otn_::BitMap>();
        ent_->parent = this;
        bit_map.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::CleanedLsp::S2l::OtnS2l::Otn::Labels::PathIngressLabel::Otn_::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : bit_map.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::CleanedLsp::S2l::OtnS2l::Otn::Labels::PathIngressLabel::Otn_::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "tpn")
    {
        tpn = value;
        tpn.value_namespace = name_space;
        tpn.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bit-map-length")
    {
        bit_map_length = value;
        bit_map_length.value_namespace = name_space;
        bit_map_length.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::CleanedLsp::S2l::OtnS2l::Otn::Labels::PathIngressLabel::Otn_::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "tpn")
    {
        tpn.yfilter = yfilter;
    }
    if(value_path == "bit-map-length")
    {
        bit_map_length.yfilter = yfilter;
    }
}

bool MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::CleanedLsp::S2l::OtnS2l::Otn::Labels::PathIngressLabel::Otn_::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "bit-map" || name == "tpn" || name == "bit-map-length")
        return true;
    return false;
}

MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::CleanedLsp::S2l::OtnS2l::Otn::Labels::PathIngressLabel::Otn_::BitMap::BitMap()
    :
    entry{YType::uint8, "entry"}
{

    yang_name = "bit-map"; yang_parent_name = "otn"; is_top_level_class = false; has_list_ancestor = true; 
}

MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::CleanedLsp::S2l::OtnS2l::Otn::Labels::PathIngressLabel::Otn_::BitMap::~BitMap()
{
}

bool MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::CleanedLsp::S2l::OtnS2l::Otn::Labels::PathIngressLabel::Otn_::BitMap::has_data() const
{
    if (is_presence_container) return true;
    return entry.is_set;
}

bool MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::CleanedLsp::S2l::OtnS2l::Otn::Labels::PathIngressLabel::Otn_::BitMap::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(entry.yfilter);
}

std::string MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::CleanedLsp::S2l::OtnS2l::Otn::Labels::PathIngressLabel::Otn_::BitMap::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bit-map";
    path_buffer << "[" << get_ylist_key() << "]";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::CleanedLsp::S2l::OtnS2l::Otn::Labels::PathIngressLabel::Otn_::BitMap::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (entry.is_set || is_set(entry.yfilter)) leaf_name_data.push_back(entry.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::CleanedLsp::S2l::OtnS2l::Otn::Labels::PathIngressLabel::Otn_::BitMap::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::CleanedLsp::S2l::OtnS2l::Otn::Labels::PathIngressLabel::Otn_::BitMap::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::CleanedLsp::S2l::OtnS2l::Otn::Labels::PathIngressLabel::Otn_::BitMap::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "entry")
    {
        entry = value;
        entry.value_namespace = name_space;
        entry.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::CleanedLsp::S2l::OtnS2l::Otn::Labels::PathIngressLabel::Otn_::BitMap::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "entry")
    {
        entry.yfilter = yfilter;
    }
}

bool MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::CleanedLsp::S2l::OtnS2l::Otn::Labels::PathIngressLabel::Otn_::BitMap::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "entry")
        return true;
    return false;
}

MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::CleanedLsp::S2l::OtnS2l::Otn::Labels::PathEgressLabel::PathEgressLabel()
    :
    label_type{YType::enumeration, "label-type"}
        ,
    wdm(std::make_shared<MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::CleanedLsp::S2l::OtnS2l::Otn::Labels::PathEgressLabel::Wdm>())
    , otn(std::make_shared<MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::CleanedLsp::S2l::OtnS2l::Otn::Labels::PathEgressLabel::Otn_>())
{
    wdm->parent = this;
    otn->parent = this;

    yang_name = "path-egress-label"; yang_parent_name = "labels"; is_top_level_class = false; has_list_ancestor = true; 
}

MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::CleanedLsp::S2l::OtnS2l::Otn::Labels::PathEgressLabel::~PathEgressLabel()
{
}

bool MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::CleanedLsp::S2l::OtnS2l::Otn::Labels::PathEgressLabel::has_data() const
{
    if (is_presence_container) return true;
    return label_type.is_set
	|| (wdm !=  nullptr && wdm->has_data())
	|| (otn !=  nullptr && otn->has_data());
}

bool MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::CleanedLsp::S2l::OtnS2l::Otn::Labels::PathEgressLabel::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(label_type.yfilter)
	|| (wdm !=  nullptr && wdm->has_operation())
	|| (otn !=  nullptr && otn->has_operation());
}

std::string MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::CleanedLsp::S2l::OtnS2l::Otn::Labels::PathEgressLabel::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "path-egress-label";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::CleanedLsp::S2l::OtnS2l::Otn::Labels::PathEgressLabel::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (label_type.is_set || is_set(label_type.yfilter)) leaf_name_data.push_back(label_type.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::CleanedLsp::S2l::OtnS2l::Otn::Labels::PathEgressLabel::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "wdm")
    {
        if(wdm == nullptr)
        {
            wdm = std::make_shared<MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::CleanedLsp::S2l::OtnS2l::Otn::Labels::PathEgressLabel::Wdm>();
        }
        return wdm;
    }

    if(child_yang_name == "otn")
    {
        if(otn == nullptr)
        {
            otn = std::make_shared<MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::CleanedLsp::S2l::OtnS2l::Otn::Labels::PathEgressLabel::Otn_>();
        }
        return otn;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::CleanedLsp::S2l::OtnS2l::Otn::Labels::PathEgressLabel::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(wdm != nullptr)
    {
        _children["wdm"] = wdm;
    }

    if(otn != nullptr)
    {
        _children["otn"] = otn;
    }

    return _children;
}

void MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::CleanedLsp::S2l::OtnS2l::Otn::Labels::PathEgressLabel::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "label-type")
    {
        label_type = value;
        label_type.value_namespace = name_space;
        label_type.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::CleanedLsp::S2l::OtnS2l::Otn::Labels::PathEgressLabel::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "label-type")
    {
        label_type.yfilter = yfilter;
    }
}

bool MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::CleanedLsp::S2l::OtnS2l::Otn::Labels::PathEgressLabel::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "wdm" || name == "otn" || name == "label-type")
        return true;
    return false;
}

MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::CleanedLsp::S2l::OtnS2l::Otn::Labels::PathEgressLabel::Wdm::Wdm()
    :
    label_set{YType::boolean, "label-set"},
    grid{YType::enumeration, "grid"},
    channel_spacing{YType::enumeration, "channel-spacing"},
    identifier{YType::uint16, "identifier"},
    channel{YType::int16, "channel"}
{

    yang_name = "wdm"; yang_parent_name = "path-egress-label"; is_top_level_class = false; has_list_ancestor = true; 
}

MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::CleanedLsp::S2l::OtnS2l::Otn::Labels::PathEgressLabel::Wdm::~Wdm()
{
}

bool MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::CleanedLsp::S2l::OtnS2l::Otn::Labels::PathEgressLabel::Wdm::has_data() const
{
    if (is_presence_container) return true;
    return label_set.is_set
	|| grid.is_set
	|| channel_spacing.is_set
	|| identifier.is_set
	|| channel.is_set;
}

bool MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::CleanedLsp::S2l::OtnS2l::Otn::Labels::PathEgressLabel::Wdm::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(label_set.yfilter)
	|| ydk::is_set(grid.yfilter)
	|| ydk::is_set(channel_spacing.yfilter)
	|| ydk::is_set(identifier.yfilter)
	|| ydk::is_set(channel.yfilter);
}

std::string MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::CleanedLsp::S2l::OtnS2l::Otn::Labels::PathEgressLabel::Wdm::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "wdm";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::CleanedLsp::S2l::OtnS2l::Otn::Labels::PathEgressLabel::Wdm::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (label_set.is_set || is_set(label_set.yfilter)) leaf_name_data.push_back(label_set.get_name_leafdata());
    if (grid.is_set || is_set(grid.yfilter)) leaf_name_data.push_back(grid.get_name_leafdata());
    if (channel_spacing.is_set || is_set(channel_spacing.yfilter)) leaf_name_data.push_back(channel_spacing.get_name_leafdata());
    if (identifier.is_set || is_set(identifier.yfilter)) leaf_name_data.push_back(identifier.get_name_leafdata());
    if (channel.is_set || is_set(channel.yfilter)) leaf_name_data.push_back(channel.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::CleanedLsp::S2l::OtnS2l::Otn::Labels::PathEgressLabel::Wdm::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::CleanedLsp::S2l::OtnS2l::Otn::Labels::PathEgressLabel::Wdm::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::CleanedLsp::S2l::OtnS2l::Otn::Labels::PathEgressLabel::Wdm::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "label-set")
    {
        label_set = value;
        label_set.value_namespace = name_space;
        label_set.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "grid")
    {
        grid = value;
        grid.value_namespace = name_space;
        grid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "channel-spacing")
    {
        channel_spacing = value;
        channel_spacing.value_namespace = name_space;
        channel_spacing.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "identifier")
    {
        identifier = value;
        identifier.value_namespace = name_space;
        identifier.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "channel")
    {
        channel = value;
        channel.value_namespace = name_space;
        channel.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::CleanedLsp::S2l::OtnS2l::Otn::Labels::PathEgressLabel::Wdm::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "label-set")
    {
        label_set.yfilter = yfilter;
    }
    if(value_path == "grid")
    {
        grid.yfilter = yfilter;
    }
    if(value_path == "channel-spacing")
    {
        channel_spacing.yfilter = yfilter;
    }
    if(value_path == "identifier")
    {
        identifier.yfilter = yfilter;
    }
    if(value_path == "channel")
    {
        channel.yfilter = yfilter;
    }
}

bool MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::CleanedLsp::S2l::OtnS2l::Otn::Labels::PathEgressLabel::Wdm::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "label-set" || name == "grid" || name == "channel-spacing" || name == "identifier" || name == "channel")
        return true;
    return false;
}

MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::CleanedLsp::S2l::OtnS2l::Otn::Labels::PathEgressLabel::Otn_::Otn_()
    :
    tpn{YType::uint16, "tpn"},
    bit_map_length{YType::uint16, "bit-map-length"}
        ,
    bit_map(this, {})
{

    yang_name = "otn"; yang_parent_name = "path-egress-label"; is_top_level_class = false; has_list_ancestor = true; 
}

MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::CleanedLsp::S2l::OtnS2l::Otn::Labels::PathEgressLabel::Otn_::~Otn_()
{
}

bool MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::CleanedLsp::S2l::OtnS2l::Otn::Labels::PathEgressLabel::Otn_::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<bit_map.len(); index++)
    {
        if(bit_map[index]->has_data())
            return true;
    }
    return tpn.is_set
	|| bit_map_length.is_set;
}

bool MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::CleanedLsp::S2l::OtnS2l::Otn::Labels::PathEgressLabel::Otn_::has_operation() const
{
    for (std::size_t index=0; index<bit_map.len(); index++)
    {
        if(bit_map[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(tpn.yfilter)
	|| ydk::is_set(bit_map_length.yfilter);
}

std::string MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::CleanedLsp::S2l::OtnS2l::Otn::Labels::PathEgressLabel::Otn_::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "otn";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::CleanedLsp::S2l::OtnS2l::Otn::Labels::PathEgressLabel::Otn_::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (tpn.is_set || is_set(tpn.yfilter)) leaf_name_data.push_back(tpn.get_name_leafdata());
    if (bit_map_length.is_set || is_set(bit_map_length.yfilter)) leaf_name_data.push_back(bit_map_length.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::CleanedLsp::S2l::OtnS2l::Otn::Labels::PathEgressLabel::Otn_::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "bit-map")
    {
        auto ent_ = std::make_shared<MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::CleanedLsp::S2l::OtnS2l::Otn::Labels::PathEgressLabel::Otn_::BitMap>();
        ent_->parent = this;
        bit_map.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::CleanedLsp::S2l::OtnS2l::Otn::Labels::PathEgressLabel::Otn_::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : bit_map.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::CleanedLsp::S2l::OtnS2l::Otn::Labels::PathEgressLabel::Otn_::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "tpn")
    {
        tpn = value;
        tpn.value_namespace = name_space;
        tpn.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bit-map-length")
    {
        bit_map_length = value;
        bit_map_length.value_namespace = name_space;
        bit_map_length.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::CleanedLsp::S2l::OtnS2l::Otn::Labels::PathEgressLabel::Otn_::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "tpn")
    {
        tpn.yfilter = yfilter;
    }
    if(value_path == "bit-map-length")
    {
        bit_map_length.yfilter = yfilter;
    }
}

bool MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::CleanedLsp::S2l::OtnS2l::Otn::Labels::PathEgressLabel::Otn_::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "bit-map" || name == "tpn" || name == "bit-map-length")
        return true;
    return false;
}

MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::CleanedLsp::S2l::OtnS2l::Otn::Labels::PathEgressLabel::Otn_::BitMap::BitMap()
    :
    entry{YType::uint8, "entry"}
{

    yang_name = "bit-map"; yang_parent_name = "otn"; is_top_level_class = false; has_list_ancestor = true; 
}

MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::CleanedLsp::S2l::OtnS2l::Otn::Labels::PathEgressLabel::Otn_::BitMap::~BitMap()
{
}

bool MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::CleanedLsp::S2l::OtnS2l::Otn::Labels::PathEgressLabel::Otn_::BitMap::has_data() const
{
    if (is_presence_container) return true;
    return entry.is_set;
}

bool MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::CleanedLsp::S2l::OtnS2l::Otn::Labels::PathEgressLabel::Otn_::BitMap::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(entry.yfilter);
}

std::string MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::CleanedLsp::S2l::OtnS2l::Otn::Labels::PathEgressLabel::Otn_::BitMap::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bit-map";
    path_buffer << "[" << get_ylist_key() << "]";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::CleanedLsp::S2l::OtnS2l::Otn::Labels::PathEgressLabel::Otn_::BitMap::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (entry.is_set || is_set(entry.yfilter)) leaf_name_data.push_back(entry.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::CleanedLsp::S2l::OtnS2l::Otn::Labels::PathEgressLabel::Otn_::BitMap::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::CleanedLsp::S2l::OtnS2l::Otn::Labels::PathEgressLabel::Otn_::BitMap::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::CleanedLsp::S2l::OtnS2l::Otn::Labels::PathEgressLabel::Otn_::BitMap::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "entry")
    {
        entry = value;
        entry.value_namespace = name_space;
        entry.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::CleanedLsp::S2l::OtnS2l::Otn::Labels::PathEgressLabel::Otn_::BitMap::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "entry")
    {
        entry.yfilter = yfilter;
    }
}

bool MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::CleanedLsp::S2l::OtnS2l::Otn::Labels::PathEgressLabel::Otn_::BitMap::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "entry")
        return true;
    return false;
}

MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::CleanedLsp::S2l::OtnS2l::Otn::Labels::ResvIngressLabel::ResvIngressLabel()
    :
    label_type{YType::enumeration, "label-type"}
        ,
    wdm(std::make_shared<MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::CleanedLsp::S2l::OtnS2l::Otn::Labels::ResvIngressLabel::Wdm>())
    , otn(std::make_shared<MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::CleanedLsp::S2l::OtnS2l::Otn::Labels::ResvIngressLabel::Otn_>())
{
    wdm->parent = this;
    otn->parent = this;

    yang_name = "resv-ingress-label"; yang_parent_name = "labels"; is_top_level_class = false; has_list_ancestor = true; 
}

MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::CleanedLsp::S2l::OtnS2l::Otn::Labels::ResvIngressLabel::~ResvIngressLabel()
{
}

bool MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::CleanedLsp::S2l::OtnS2l::Otn::Labels::ResvIngressLabel::has_data() const
{
    if (is_presence_container) return true;
    return label_type.is_set
	|| (wdm !=  nullptr && wdm->has_data())
	|| (otn !=  nullptr && otn->has_data());
}

bool MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::CleanedLsp::S2l::OtnS2l::Otn::Labels::ResvIngressLabel::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(label_type.yfilter)
	|| (wdm !=  nullptr && wdm->has_operation())
	|| (otn !=  nullptr && otn->has_operation());
}

std::string MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::CleanedLsp::S2l::OtnS2l::Otn::Labels::ResvIngressLabel::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "resv-ingress-label";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::CleanedLsp::S2l::OtnS2l::Otn::Labels::ResvIngressLabel::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (label_type.is_set || is_set(label_type.yfilter)) leaf_name_data.push_back(label_type.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::CleanedLsp::S2l::OtnS2l::Otn::Labels::ResvIngressLabel::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "wdm")
    {
        if(wdm == nullptr)
        {
            wdm = std::make_shared<MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::CleanedLsp::S2l::OtnS2l::Otn::Labels::ResvIngressLabel::Wdm>();
        }
        return wdm;
    }

    if(child_yang_name == "otn")
    {
        if(otn == nullptr)
        {
            otn = std::make_shared<MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::CleanedLsp::S2l::OtnS2l::Otn::Labels::ResvIngressLabel::Otn_>();
        }
        return otn;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::CleanedLsp::S2l::OtnS2l::Otn::Labels::ResvIngressLabel::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(wdm != nullptr)
    {
        _children["wdm"] = wdm;
    }

    if(otn != nullptr)
    {
        _children["otn"] = otn;
    }

    return _children;
}

void MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::CleanedLsp::S2l::OtnS2l::Otn::Labels::ResvIngressLabel::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "label-type")
    {
        label_type = value;
        label_type.value_namespace = name_space;
        label_type.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::CleanedLsp::S2l::OtnS2l::Otn::Labels::ResvIngressLabel::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "label-type")
    {
        label_type.yfilter = yfilter;
    }
}

bool MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::CleanedLsp::S2l::OtnS2l::Otn::Labels::ResvIngressLabel::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "wdm" || name == "otn" || name == "label-type")
        return true;
    return false;
}

MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::CleanedLsp::S2l::OtnS2l::Otn::Labels::ResvIngressLabel::Wdm::Wdm()
    :
    label_set{YType::boolean, "label-set"},
    grid{YType::enumeration, "grid"},
    channel_spacing{YType::enumeration, "channel-spacing"},
    identifier{YType::uint16, "identifier"},
    channel{YType::int16, "channel"}
{

    yang_name = "wdm"; yang_parent_name = "resv-ingress-label"; is_top_level_class = false; has_list_ancestor = true; 
}

MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::CleanedLsp::S2l::OtnS2l::Otn::Labels::ResvIngressLabel::Wdm::~Wdm()
{
}

bool MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::CleanedLsp::S2l::OtnS2l::Otn::Labels::ResvIngressLabel::Wdm::has_data() const
{
    if (is_presence_container) return true;
    return label_set.is_set
	|| grid.is_set
	|| channel_spacing.is_set
	|| identifier.is_set
	|| channel.is_set;
}

bool MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::CleanedLsp::S2l::OtnS2l::Otn::Labels::ResvIngressLabel::Wdm::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(label_set.yfilter)
	|| ydk::is_set(grid.yfilter)
	|| ydk::is_set(channel_spacing.yfilter)
	|| ydk::is_set(identifier.yfilter)
	|| ydk::is_set(channel.yfilter);
}

std::string MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::CleanedLsp::S2l::OtnS2l::Otn::Labels::ResvIngressLabel::Wdm::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "wdm";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::CleanedLsp::S2l::OtnS2l::Otn::Labels::ResvIngressLabel::Wdm::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (label_set.is_set || is_set(label_set.yfilter)) leaf_name_data.push_back(label_set.get_name_leafdata());
    if (grid.is_set || is_set(grid.yfilter)) leaf_name_data.push_back(grid.get_name_leafdata());
    if (channel_spacing.is_set || is_set(channel_spacing.yfilter)) leaf_name_data.push_back(channel_spacing.get_name_leafdata());
    if (identifier.is_set || is_set(identifier.yfilter)) leaf_name_data.push_back(identifier.get_name_leafdata());
    if (channel.is_set || is_set(channel.yfilter)) leaf_name_data.push_back(channel.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::CleanedLsp::S2l::OtnS2l::Otn::Labels::ResvIngressLabel::Wdm::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::CleanedLsp::S2l::OtnS2l::Otn::Labels::ResvIngressLabel::Wdm::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::CleanedLsp::S2l::OtnS2l::Otn::Labels::ResvIngressLabel::Wdm::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "label-set")
    {
        label_set = value;
        label_set.value_namespace = name_space;
        label_set.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "grid")
    {
        grid = value;
        grid.value_namespace = name_space;
        grid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "channel-spacing")
    {
        channel_spacing = value;
        channel_spacing.value_namespace = name_space;
        channel_spacing.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "identifier")
    {
        identifier = value;
        identifier.value_namespace = name_space;
        identifier.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "channel")
    {
        channel = value;
        channel.value_namespace = name_space;
        channel.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::CleanedLsp::S2l::OtnS2l::Otn::Labels::ResvIngressLabel::Wdm::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "label-set")
    {
        label_set.yfilter = yfilter;
    }
    if(value_path == "grid")
    {
        grid.yfilter = yfilter;
    }
    if(value_path == "channel-spacing")
    {
        channel_spacing.yfilter = yfilter;
    }
    if(value_path == "identifier")
    {
        identifier.yfilter = yfilter;
    }
    if(value_path == "channel")
    {
        channel.yfilter = yfilter;
    }
}

bool MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::CleanedLsp::S2l::OtnS2l::Otn::Labels::ResvIngressLabel::Wdm::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "label-set" || name == "grid" || name == "channel-spacing" || name == "identifier" || name == "channel")
        return true;
    return false;
}

MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::CleanedLsp::S2l::OtnS2l::Otn::Labels::ResvIngressLabel::Otn_::Otn_()
    :
    tpn{YType::uint16, "tpn"},
    bit_map_length{YType::uint16, "bit-map-length"}
        ,
    bit_map(this, {})
{

    yang_name = "otn"; yang_parent_name = "resv-ingress-label"; is_top_level_class = false; has_list_ancestor = true; 
}

MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::CleanedLsp::S2l::OtnS2l::Otn::Labels::ResvIngressLabel::Otn_::~Otn_()
{
}

bool MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::CleanedLsp::S2l::OtnS2l::Otn::Labels::ResvIngressLabel::Otn_::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<bit_map.len(); index++)
    {
        if(bit_map[index]->has_data())
            return true;
    }
    return tpn.is_set
	|| bit_map_length.is_set;
}

bool MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::CleanedLsp::S2l::OtnS2l::Otn::Labels::ResvIngressLabel::Otn_::has_operation() const
{
    for (std::size_t index=0; index<bit_map.len(); index++)
    {
        if(bit_map[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(tpn.yfilter)
	|| ydk::is_set(bit_map_length.yfilter);
}

std::string MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::CleanedLsp::S2l::OtnS2l::Otn::Labels::ResvIngressLabel::Otn_::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "otn";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::CleanedLsp::S2l::OtnS2l::Otn::Labels::ResvIngressLabel::Otn_::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (tpn.is_set || is_set(tpn.yfilter)) leaf_name_data.push_back(tpn.get_name_leafdata());
    if (bit_map_length.is_set || is_set(bit_map_length.yfilter)) leaf_name_data.push_back(bit_map_length.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::CleanedLsp::S2l::OtnS2l::Otn::Labels::ResvIngressLabel::Otn_::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "bit-map")
    {
        auto ent_ = std::make_shared<MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::CleanedLsp::S2l::OtnS2l::Otn::Labels::ResvIngressLabel::Otn_::BitMap>();
        ent_->parent = this;
        bit_map.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::CleanedLsp::S2l::OtnS2l::Otn::Labels::ResvIngressLabel::Otn_::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : bit_map.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::CleanedLsp::S2l::OtnS2l::Otn::Labels::ResvIngressLabel::Otn_::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "tpn")
    {
        tpn = value;
        tpn.value_namespace = name_space;
        tpn.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bit-map-length")
    {
        bit_map_length = value;
        bit_map_length.value_namespace = name_space;
        bit_map_length.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::CleanedLsp::S2l::OtnS2l::Otn::Labels::ResvIngressLabel::Otn_::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "tpn")
    {
        tpn.yfilter = yfilter;
    }
    if(value_path == "bit-map-length")
    {
        bit_map_length.yfilter = yfilter;
    }
}

bool MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::CleanedLsp::S2l::OtnS2l::Otn::Labels::ResvIngressLabel::Otn_::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "bit-map" || name == "tpn" || name == "bit-map-length")
        return true;
    return false;
}

MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::CleanedLsp::S2l::OtnS2l::Otn::Labels::ResvIngressLabel::Otn_::BitMap::BitMap()
    :
    entry{YType::uint8, "entry"}
{

    yang_name = "bit-map"; yang_parent_name = "otn"; is_top_level_class = false; has_list_ancestor = true; 
}

MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::CleanedLsp::S2l::OtnS2l::Otn::Labels::ResvIngressLabel::Otn_::BitMap::~BitMap()
{
}

bool MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::CleanedLsp::S2l::OtnS2l::Otn::Labels::ResvIngressLabel::Otn_::BitMap::has_data() const
{
    if (is_presence_container) return true;
    return entry.is_set;
}

bool MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::CleanedLsp::S2l::OtnS2l::Otn::Labels::ResvIngressLabel::Otn_::BitMap::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(entry.yfilter);
}

std::string MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::CleanedLsp::S2l::OtnS2l::Otn::Labels::ResvIngressLabel::Otn_::BitMap::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bit-map";
    path_buffer << "[" << get_ylist_key() << "]";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::CleanedLsp::S2l::OtnS2l::Otn::Labels::ResvIngressLabel::Otn_::BitMap::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (entry.is_set || is_set(entry.yfilter)) leaf_name_data.push_back(entry.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::CleanedLsp::S2l::OtnS2l::Otn::Labels::ResvIngressLabel::Otn_::BitMap::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::CleanedLsp::S2l::OtnS2l::Otn::Labels::ResvIngressLabel::Otn_::BitMap::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::CleanedLsp::S2l::OtnS2l::Otn::Labels::ResvIngressLabel::Otn_::BitMap::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "entry")
    {
        entry = value;
        entry.value_namespace = name_space;
        entry.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::CleanedLsp::S2l::OtnS2l::Otn::Labels::ResvIngressLabel::Otn_::BitMap::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "entry")
    {
        entry.yfilter = yfilter;
    }
}

bool MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::CleanedLsp::S2l::OtnS2l::Otn::Labels::ResvIngressLabel::Otn_::BitMap::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "entry")
        return true;
    return false;
}

MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::CleanedLsp::S2l::OtnS2l::Otn::Labels::ResvEgressLabel::ResvEgressLabel()
    :
    label_type{YType::enumeration, "label-type"}
        ,
    wdm(std::make_shared<MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::CleanedLsp::S2l::OtnS2l::Otn::Labels::ResvEgressLabel::Wdm>())
    , otn(std::make_shared<MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::CleanedLsp::S2l::OtnS2l::Otn::Labels::ResvEgressLabel::Otn_>())
{
    wdm->parent = this;
    otn->parent = this;

    yang_name = "resv-egress-label"; yang_parent_name = "labels"; is_top_level_class = false; has_list_ancestor = true; 
}

MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::CleanedLsp::S2l::OtnS2l::Otn::Labels::ResvEgressLabel::~ResvEgressLabel()
{
}

bool MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::CleanedLsp::S2l::OtnS2l::Otn::Labels::ResvEgressLabel::has_data() const
{
    if (is_presence_container) return true;
    return label_type.is_set
	|| (wdm !=  nullptr && wdm->has_data())
	|| (otn !=  nullptr && otn->has_data());
}

bool MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::CleanedLsp::S2l::OtnS2l::Otn::Labels::ResvEgressLabel::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(label_type.yfilter)
	|| (wdm !=  nullptr && wdm->has_operation())
	|| (otn !=  nullptr && otn->has_operation());
}

std::string MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::CleanedLsp::S2l::OtnS2l::Otn::Labels::ResvEgressLabel::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "resv-egress-label";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::CleanedLsp::S2l::OtnS2l::Otn::Labels::ResvEgressLabel::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (label_type.is_set || is_set(label_type.yfilter)) leaf_name_data.push_back(label_type.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::CleanedLsp::S2l::OtnS2l::Otn::Labels::ResvEgressLabel::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "wdm")
    {
        if(wdm == nullptr)
        {
            wdm = std::make_shared<MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::CleanedLsp::S2l::OtnS2l::Otn::Labels::ResvEgressLabel::Wdm>();
        }
        return wdm;
    }

    if(child_yang_name == "otn")
    {
        if(otn == nullptr)
        {
            otn = std::make_shared<MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::CleanedLsp::S2l::OtnS2l::Otn::Labels::ResvEgressLabel::Otn_>();
        }
        return otn;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::CleanedLsp::S2l::OtnS2l::Otn::Labels::ResvEgressLabel::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(wdm != nullptr)
    {
        _children["wdm"] = wdm;
    }

    if(otn != nullptr)
    {
        _children["otn"] = otn;
    }

    return _children;
}

void MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::CleanedLsp::S2l::OtnS2l::Otn::Labels::ResvEgressLabel::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "label-type")
    {
        label_type = value;
        label_type.value_namespace = name_space;
        label_type.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::CleanedLsp::S2l::OtnS2l::Otn::Labels::ResvEgressLabel::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "label-type")
    {
        label_type.yfilter = yfilter;
    }
}

bool MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::CleanedLsp::S2l::OtnS2l::Otn::Labels::ResvEgressLabel::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "wdm" || name == "otn" || name == "label-type")
        return true;
    return false;
}

MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::CleanedLsp::S2l::OtnS2l::Otn::Labels::ResvEgressLabel::Wdm::Wdm()
    :
    label_set{YType::boolean, "label-set"},
    grid{YType::enumeration, "grid"},
    channel_spacing{YType::enumeration, "channel-spacing"},
    identifier{YType::uint16, "identifier"},
    channel{YType::int16, "channel"}
{

    yang_name = "wdm"; yang_parent_name = "resv-egress-label"; is_top_level_class = false; has_list_ancestor = true; 
}

MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::CleanedLsp::S2l::OtnS2l::Otn::Labels::ResvEgressLabel::Wdm::~Wdm()
{
}

bool MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::CleanedLsp::S2l::OtnS2l::Otn::Labels::ResvEgressLabel::Wdm::has_data() const
{
    if (is_presence_container) return true;
    return label_set.is_set
	|| grid.is_set
	|| channel_spacing.is_set
	|| identifier.is_set
	|| channel.is_set;
}

bool MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::CleanedLsp::S2l::OtnS2l::Otn::Labels::ResvEgressLabel::Wdm::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(label_set.yfilter)
	|| ydk::is_set(grid.yfilter)
	|| ydk::is_set(channel_spacing.yfilter)
	|| ydk::is_set(identifier.yfilter)
	|| ydk::is_set(channel.yfilter);
}

std::string MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::CleanedLsp::S2l::OtnS2l::Otn::Labels::ResvEgressLabel::Wdm::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "wdm";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::CleanedLsp::S2l::OtnS2l::Otn::Labels::ResvEgressLabel::Wdm::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (label_set.is_set || is_set(label_set.yfilter)) leaf_name_data.push_back(label_set.get_name_leafdata());
    if (grid.is_set || is_set(grid.yfilter)) leaf_name_data.push_back(grid.get_name_leafdata());
    if (channel_spacing.is_set || is_set(channel_spacing.yfilter)) leaf_name_data.push_back(channel_spacing.get_name_leafdata());
    if (identifier.is_set || is_set(identifier.yfilter)) leaf_name_data.push_back(identifier.get_name_leafdata());
    if (channel.is_set || is_set(channel.yfilter)) leaf_name_data.push_back(channel.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::CleanedLsp::S2l::OtnS2l::Otn::Labels::ResvEgressLabel::Wdm::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::CleanedLsp::S2l::OtnS2l::Otn::Labels::ResvEgressLabel::Wdm::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::CleanedLsp::S2l::OtnS2l::Otn::Labels::ResvEgressLabel::Wdm::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "label-set")
    {
        label_set = value;
        label_set.value_namespace = name_space;
        label_set.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "grid")
    {
        grid = value;
        grid.value_namespace = name_space;
        grid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "channel-spacing")
    {
        channel_spacing = value;
        channel_spacing.value_namespace = name_space;
        channel_spacing.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "identifier")
    {
        identifier = value;
        identifier.value_namespace = name_space;
        identifier.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "channel")
    {
        channel = value;
        channel.value_namespace = name_space;
        channel.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::CleanedLsp::S2l::OtnS2l::Otn::Labels::ResvEgressLabel::Wdm::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "label-set")
    {
        label_set.yfilter = yfilter;
    }
    if(value_path == "grid")
    {
        grid.yfilter = yfilter;
    }
    if(value_path == "channel-spacing")
    {
        channel_spacing.yfilter = yfilter;
    }
    if(value_path == "identifier")
    {
        identifier.yfilter = yfilter;
    }
    if(value_path == "channel")
    {
        channel.yfilter = yfilter;
    }
}

bool MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::CleanedLsp::S2l::OtnS2l::Otn::Labels::ResvEgressLabel::Wdm::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "label-set" || name == "grid" || name == "channel-spacing" || name == "identifier" || name == "channel")
        return true;
    return false;
}

MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::CleanedLsp::S2l::OtnS2l::Otn::Labels::ResvEgressLabel::Otn_::Otn_()
    :
    tpn{YType::uint16, "tpn"},
    bit_map_length{YType::uint16, "bit-map-length"}
        ,
    bit_map(this, {})
{

    yang_name = "otn"; yang_parent_name = "resv-egress-label"; is_top_level_class = false; has_list_ancestor = true; 
}

MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::CleanedLsp::S2l::OtnS2l::Otn::Labels::ResvEgressLabel::Otn_::~Otn_()
{
}

bool MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::CleanedLsp::S2l::OtnS2l::Otn::Labels::ResvEgressLabel::Otn_::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<bit_map.len(); index++)
    {
        if(bit_map[index]->has_data())
            return true;
    }
    return tpn.is_set
	|| bit_map_length.is_set;
}

bool MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::CleanedLsp::S2l::OtnS2l::Otn::Labels::ResvEgressLabel::Otn_::has_operation() const
{
    for (std::size_t index=0; index<bit_map.len(); index++)
    {
        if(bit_map[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(tpn.yfilter)
	|| ydk::is_set(bit_map_length.yfilter);
}

std::string MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::CleanedLsp::S2l::OtnS2l::Otn::Labels::ResvEgressLabel::Otn_::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "otn";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::CleanedLsp::S2l::OtnS2l::Otn::Labels::ResvEgressLabel::Otn_::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (tpn.is_set || is_set(tpn.yfilter)) leaf_name_data.push_back(tpn.get_name_leafdata());
    if (bit_map_length.is_set || is_set(bit_map_length.yfilter)) leaf_name_data.push_back(bit_map_length.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::CleanedLsp::S2l::OtnS2l::Otn::Labels::ResvEgressLabel::Otn_::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "bit-map")
    {
        auto ent_ = std::make_shared<MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::CleanedLsp::S2l::OtnS2l::Otn::Labels::ResvEgressLabel::Otn_::BitMap>();
        ent_->parent = this;
        bit_map.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::CleanedLsp::S2l::OtnS2l::Otn::Labels::ResvEgressLabel::Otn_::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : bit_map.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::CleanedLsp::S2l::OtnS2l::Otn::Labels::ResvEgressLabel::Otn_::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "tpn")
    {
        tpn = value;
        tpn.value_namespace = name_space;
        tpn.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bit-map-length")
    {
        bit_map_length = value;
        bit_map_length.value_namespace = name_space;
        bit_map_length.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::CleanedLsp::S2l::OtnS2l::Otn::Labels::ResvEgressLabel::Otn_::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "tpn")
    {
        tpn.yfilter = yfilter;
    }
    if(value_path == "bit-map-length")
    {
        bit_map_length.yfilter = yfilter;
    }
}

bool MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::CleanedLsp::S2l::OtnS2l::Otn::Labels::ResvEgressLabel::Otn_::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "bit-map" || name == "tpn" || name == "bit-map-length")
        return true;
    return false;
}

MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::CleanedLsp::S2l::OtnS2l::Otn::Labels::ResvEgressLabel::Otn_::BitMap::BitMap()
    :
    entry{YType::uint8, "entry"}
{

    yang_name = "bit-map"; yang_parent_name = "otn"; is_top_level_class = false; has_list_ancestor = true; 
}

MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::CleanedLsp::S2l::OtnS2l::Otn::Labels::ResvEgressLabel::Otn_::BitMap::~BitMap()
{
}

bool MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::CleanedLsp::S2l::OtnS2l::Otn::Labels::ResvEgressLabel::Otn_::BitMap::has_data() const
{
    if (is_presence_container) return true;
    return entry.is_set;
}

bool MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::CleanedLsp::S2l::OtnS2l::Otn::Labels::ResvEgressLabel::Otn_::BitMap::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(entry.yfilter);
}

std::string MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::CleanedLsp::S2l::OtnS2l::Otn::Labels::ResvEgressLabel::Otn_::BitMap::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bit-map";
    path_buffer << "[" << get_ylist_key() << "]";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::CleanedLsp::S2l::OtnS2l::Otn::Labels::ResvEgressLabel::Otn_::BitMap::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (entry.is_set || is_set(entry.yfilter)) leaf_name_data.push_back(entry.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::CleanedLsp::S2l::OtnS2l::Otn::Labels::ResvEgressLabel::Otn_::BitMap::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::CleanedLsp::S2l::OtnS2l::Otn::Labels::ResvEgressLabel::Otn_::BitMap::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::CleanedLsp::S2l::OtnS2l::Otn::Labels::ResvEgressLabel::Otn_::BitMap::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "entry")
    {
        entry = value;
        entry.value_namespace = name_space;
        entry.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::CleanedLsp::S2l::OtnS2l::Otn::Labels::ResvEgressLabel::Otn_::BitMap::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "entry")
    {
        entry.yfilter = yfilter;
    }
}

bool MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::CleanedLsp::S2l::OtnS2l::Otn::Labels::ResvEgressLabel::Otn_::BitMap::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "entry")
        return true;
    return false;
}

MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::CleanedLsp::S2l::OtnS2l::Aps::Aps()
    :
    protection_info(std::make_shared<MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::CleanedLsp::S2l::OtnS2l::Aps::ProtectionInfo>())
{
    protection_info->parent = this;

    yang_name = "aps"; yang_parent_name = "otn-s2l"; is_top_level_class = false; has_list_ancestor = true; 
}

MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::CleanedLsp::S2l::OtnS2l::Aps::~Aps()
{
}

bool MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::CleanedLsp::S2l::OtnS2l::Aps::has_data() const
{
    if (is_presence_container) return true;
    return (protection_info !=  nullptr && protection_info->has_data());
}

bool MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::CleanedLsp::S2l::OtnS2l::Aps::has_operation() const
{
    return is_set(yfilter)
	|| (protection_info !=  nullptr && protection_info->has_operation());
}

std::string MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::CleanedLsp::S2l::OtnS2l::Aps::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "aps";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::CleanedLsp::S2l::OtnS2l::Aps::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::CleanedLsp::S2l::OtnS2l::Aps::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "protection-info")
    {
        if(protection_info == nullptr)
        {
            protection_info = std::make_shared<MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::CleanedLsp::S2l::OtnS2l::Aps::ProtectionInfo>();
        }
        return protection_info;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::CleanedLsp::S2l::OtnS2l::Aps::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(protection_info != nullptr)
    {
        _children["protection-info"] = protection_info;
    }

    return _children;
}

void MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::CleanedLsp::S2l::OtnS2l::Aps::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::CleanedLsp::S2l::OtnS2l::Aps::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::CleanedLsp::S2l::OtnS2l::Aps::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "protection-info")
        return true;
    return false;
}

MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::CleanedLsp::S2l::OtnS2l::Aps::ProtectionInfo::ProtectionInfo()
    :
    sbit{YType::boolean, "sbit"},
    pbit{YType::boolean, "pbit"},
    nbit{YType::boolean, "nbit"},
    obit{YType::boolean, "obit"},
    protect_type{YType::enumeration, "protect-type"},
    is_wtr_present{YType::boolean, "is-wtr-present"},
    wtr_timeout{YType::uint32, "wtr-timeout"},
    is_hopresent{YType::boolean, "is-hopresent"},
    ho_timeout{YType::uint32, "ho-timeout"},
    is_snc_mode_present{YType::boolean, "is-snc-mode-present"},
    snc_mode{YType::enumeration, "snc-mode"},
    tcm_id{YType::uint32, "tcm-id"},
    path_prot_profile_type{YType::enumeration, "path-prot-profile-type"}
{

    yang_name = "protection-info"; yang_parent_name = "aps"; is_top_level_class = false; has_list_ancestor = true; 
}

MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::CleanedLsp::S2l::OtnS2l::Aps::ProtectionInfo::~ProtectionInfo()
{
}

bool MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::CleanedLsp::S2l::OtnS2l::Aps::ProtectionInfo::has_data() const
{
    if (is_presence_container) return true;
    return sbit.is_set
	|| pbit.is_set
	|| nbit.is_set
	|| obit.is_set
	|| protect_type.is_set
	|| is_wtr_present.is_set
	|| wtr_timeout.is_set
	|| is_hopresent.is_set
	|| ho_timeout.is_set
	|| is_snc_mode_present.is_set
	|| snc_mode.is_set
	|| tcm_id.is_set
	|| path_prot_profile_type.is_set;
}

bool MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::CleanedLsp::S2l::OtnS2l::Aps::ProtectionInfo::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(sbit.yfilter)
	|| ydk::is_set(pbit.yfilter)
	|| ydk::is_set(nbit.yfilter)
	|| ydk::is_set(obit.yfilter)
	|| ydk::is_set(protect_type.yfilter)
	|| ydk::is_set(is_wtr_present.yfilter)
	|| ydk::is_set(wtr_timeout.yfilter)
	|| ydk::is_set(is_hopresent.yfilter)
	|| ydk::is_set(ho_timeout.yfilter)
	|| ydk::is_set(is_snc_mode_present.yfilter)
	|| ydk::is_set(snc_mode.yfilter)
	|| ydk::is_set(tcm_id.yfilter)
	|| ydk::is_set(path_prot_profile_type.yfilter);
}

std::string MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::CleanedLsp::S2l::OtnS2l::Aps::ProtectionInfo::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "protection-info";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::CleanedLsp::S2l::OtnS2l::Aps::ProtectionInfo::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (sbit.is_set || is_set(sbit.yfilter)) leaf_name_data.push_back(sbit.get_name_leafdata());
    if (pbit.is_set || is_set(pbit.yfilter)) leaf_name_data.push_back(pbit.get_name_leafdata());
    if (nbit.is_set || is_set(nbit.yfilter)) leaf_name_data.push_back(nbit.get_name_leafdata());
    if (obit.is_set || is_set(obit.yfilter)) leaf_name_data.push_back(obit.get_name_leafdata());
    if (protect_type.is_set || is_set(protect_type.yfilter)) leaf_name_data.push_back(protect_type.get_name_leafdata());
    if (is_wtr_present.is_set || is_set(is_wtr_present.yfilter)) leaf_name_data.push_back(is_wtr_present.get_name_leafdata());
    if (wtr_timeout.is_set || is_set(wtr_timeout.yfilter)) leaf_name_data.push_back(wtr_timeout.get_name_leafdata());
    if (is_hopresent.is_set || is_set(is_hopresent.yfilter)) leaf_name_data.push_back(is_hopresent.get_name_leafdata());
    if (ho_timeout.is_set || is_set(ho_timeout.yfilter)) leaf_name_data.push_back(ho_timeout.get_name_leafdata());
    if (is_snc_mode_present.is_set || is_set(is_snc_mode_present.yfilter)) leaf_name_data.push_back(is_snc_mode_present.get_name_leafdata());
    if (snc_mode.is_set || is_set(snc_mode.yfilter)) leaf_name_data.push_back(snc_mode.get_name_leafdata());
    if (tcm_id.is_set || is_set(tcm_id.yfilter)) leaf_name_data.push_back(tcm_id.get_name_leafdata());
    if (path_prot_profile_type.is_set || is_set(path_prot_profile_type.yfilter)) leaf_name_data.push_back(path_prot_profile_type.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::CleanedLsp::S2l::OtnS2l::Aps::ProtectionInfo::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::CleanedLsp::S2l::OtnS2l::Aps::ProtectionInfo::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::CleanedLsp::S2l::OtnS2l::Aps::ProtectionInfo::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "sbit")
    {
        sbit = value;
        sbit.value_namespace = name_space;
        sbit.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pbit")
    {
        pbit = value;
        pbit.value_namespace = name_space;
        pbit.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nbit")
    {
        nbit = value;
        nbit.value_namespace = name_space;
        nbit.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "obit")
    {
        obit = value;
        obit.value_namespace = name_space;
        obit.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "protect-type")
    {
        protect_type = value;
        protect_type.value_namespace = name_space;
        protect_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-wtr-present")
    {
        is_wtr_present = value;
        is_wtr_present.value_namespace = name_space;
        is_wtr_present.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "wtr-timeout")
    {
        wtr_timeout = value;
        wtr_timeout.value_namespace = name_space;
        wtr_timeout.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-hopresent")
    {
        is_hopresent = value;
        is_hopresent.value_namespace = name_space;
        is_hopresent.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ho-timeout")
    {
        ho_timeout = value;
        ho_timeout.value_namespace = name_space;
        ho_timeout.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-snc-mode-present")
    {
        is_snc_mode_present = value;
        is_snc_mode_present.value_namespace = name_space;
        is_snc_mode_present.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "snc-mode")
    {
        snc_mode = value;
        snc_mode.value_namespace = name_space;
        snc_mode.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tcm-id")
    {
        tcm_id = value;
        tcm_id.value_namespace = name_space;
        tcm_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "path-prot-profile-type")
    {
        path_prot_profile_type = value;
        path_prot_profile_type.value_namespace = name_space;
        path_prot_profile_type.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::CleanedLsp::S2l::OtnS2l::Aps::ProtectionInfo::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "sbit")
    {
        sbit.yfilter = yfilter;
    }
    if(value_path == "pbit")
    {
        pbit.yfilter = yfilter;
    }
    if(value_path == "nbit")
    {
        nbit.yfilter = yfilter;
    }
    if(value_path == "obit")
    {
        obit.yfilter = yfilter;
    }
    if(value_path == "protect-type")
    {
        protect_type.yfilter = yfilter;
    }
    if(value_path == "is-wtr-present")
    {
        is_wtr_present.yfilter = yfilter;
    }
    if(value_path == "wtr-timeout")
    {
        wtr_timeout.yfilter = yfilter;
    }
    if(value_path == "is-hopresent")
    {
        is_hopresent.yfilter = yfilter;
    }
    if(value_path == "ho-timeout")
    {
        ho_timeout.yfilter = yfilter;
    }
    if(value_path == "is-snc-mode-present")
    {
        is_snc_mode_present.yfilter = yfilter;
    }
    if(value_path == "snc-mode")
    {
        snc_mode.yfilter = yfilter;
    }
    if(value_path == "tcm-id")
    {
        tcm_id.yfilter = yfilter;
    }
    if(value_path == "path-prot-profile-type")
    {
        path_prot_profile_type.yfilter = yfilter;
    }
}

bool MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::CleanedLsp::S2l::OtnS2l::Aps::ProtectionInfo::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "sbit" || name == "pbit" || name == "nbit" || name == "obit" || name == "protect-type" || name == "is-wtr-present" || name == "wtr-timeout" || name == "is-hopresent" || name == "ho-timeout" || name == "is-snc-mode-present" || name == "snc-mode" || name == "tcm-id" || name == "path-prot-profile-type")
        return true;
    return false;
}

MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::CleanedLsp::S2l::HeadEndBfdInfo::HeadEndBfdInfo()
    :
    creation_time{YType::uint32, "creation-time"},
    lspbfd_type{YType::enumeration, "lspbfd-type"},
    is_redundant{YType::boolean, "is-redundant"},
    bfd_reverse_path_stale{YType::boolean, "bfd-reverse-path-stale"}
        ,
    session_info(std::make_shared<MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::CleanedLsp::S2l::HeadEndBfdInfo::SessionInfo>())
    , deletion_history(std::make_shared<MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::CleanedLsp::S2l::HeadEndBfdInfo::DeletionHistory>())
    , bfd_reverse_path_label(this, {})
{
    session_info->parent = this;
    deletion_history->parent = this;

    yang_name = "head-end-bfd-info"; yang_parent_name = "s2l"; is_top_level_class = false; has_list_ancestor = true; 
}

MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::CleanedLsp::S2l::HeadEndBfdInfo::~HeadEndBfdInfo()
{
}

bool MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::CleanedLsp::S2l::HeadEndBfdInfo::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<bfd_reverse_path_label.len(); index++)
    {
        if(bfd_reverse_path_label[index]->has_data())
            return true;
    }
    return creation_time.is_set
	|| lspbfd_type.is_set
	|| is_redundant.is_set
	|| bfd_reverse_path_stale.is_set
	|| (session_info !=  nullptr && session_info->has_data())
	|| (deletion_history !=  nullptr && deletion_history->has_data());
}

bool MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::CleanedLsp::S2l::HeadEndBfdInfo::has_operation() const
{
    for (std::size_t index=0; index<bfd_reverse_path_label.len(); index++)
    {
        if(bfd_reverse_path_label[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(creation_time.yfilter)
	|| ydk::is_set(lspbfd_type.yfilter)
	|| ydk::is_set(is_redundant.yfilter)
	|| ydk::is_set(bfd_reverse_path_stale.yfilter)
	|| (session_info !=  nullptr && session_info->has_operation())
	|| (deletion_history !=  nullptr && deletion_history->has_operation());
}

std::string MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::CleanedLsp::S2l::HeadEndBfdInfo::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "head-end-bfd-info";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::CleanedLsp::S2l::HeadEndBfdInfo::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (creation_time.is_set || is_set(creation_time.yfilter)) leaf_name_data.push_back(creation_time.get_name_leafdata());
    if (lspbfd_type.is_set || is_set(lspbfd_type.yfilter)) leaf_name_data.push_back(lspbfd_type.get_name_leafdata());
    if (is_redundant.is_set || is_set(is_redundant.yfilter)) leaf_name_data.push_back(is_redundant.get_name_leafdata());
    if (bfd_reverse_path_stale.is_set || is_set(bfd_reverse_path_stale.yfilter)) leaf_name_data.push_back(bfd_reverse_path_stale.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::CleanedLsp::S2l::HeadEndBfdInfo::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "session-info")
    {
        if(session_info == nullptr)
        {
            session_info = std::make_shared<MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::CleanedLsp::S2l::HeadEndBfdInfo::SessionInfo>();
        }
        return session_info;
    }

    if(child_yang_name == "deletion-history")
    {
        if(deletion_history == nullptr)
        {
            deletion_history = std::make_shared<MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::CleanedLsp::S2l::HeadEndBfdInfo::DeletionHistory>();
        }
        return deletion_history;
    }

    if(child_yang_name == "bfd-reverse-path-label")
    {
        auto ent_ = std::make_shared<MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::CleanedLsp::S2l::HeadEndBfdInfo::BfdReversePathLabel>();
        ent_->parent = this;
        bfd_reverse_path_label.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::CleanedLsp::S2l::HeadEndBfdInfo::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(session_info != nullptr)
    {
        _children["session-info"] = session_info;
    }

    if(deletion_history != nullptr)
    {
        _children["deletion-history"] = deletion_history;
    }

    count_ = 0;
    for (auto ent_ : bfd_reverse_path_label.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::CleanedLsp::S2l::HeadEndBfdInfo::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "creation-time")
    {
        creation_time = value;
        creation_time.value_namespace = name_space;
        creation_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lspbfd-type")
    {
        lspbfd_type = value;
        lspbfd_type.value_namespace = name_space;
        lspbfd_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-redundant")
    {
        is_redundant = value;
        is_redundant.value_namespace = name_space;
        is_redundant.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bfd-reverse-path-stale")
    {
        bfd_reverse_path_stale = value;
        bfd_reverse_path_stale.value_namespace = name_space;
        bfd_reverse_path_stale.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::CleanedLsp::S2l::HeadEndBfdInfo::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "creation-time")
    {
        creation_time.yfilter = yfilter;
    }
    if(value_path == "lspbfd-type")
    {
        lspbfd_type.yfilter = yfilter;
    }
    if(value_path == "is-redundant")
    {
        is_redundant.yfilter = yfilter;
    }
    if(value_path == "bfd-reverse-path-stale")
    {
        bfd_reverse_path_stale.yfilter = yfilter;
    }
}

bool MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::CleanedLsp::S2l::HeadEndBfdInfo::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "session-info" || name == "deletion-history" || name == "bfd-reverse-path-label" || name == "creation-time" || name == "lspbfd-type" || name == "is-redundant" || name == "bfd-reverse-path-stale")
        return true;
    return false;
}

MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::CleanedLsp::S2l::HeadEndBfdInfo::SessionInfo::SessionInfo()
    :
    state{YType::enumeration, "state"},
    state_change_time{YType::uint32, "state-change-time"}
{

    yang_name = "session-info"; yang_parent_name = "head-end-bfd-info"; is_top_level_class = false; has_list_ancestor = true; 
}

MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::CleanedLsp::S2l::HeadEndBfdInfo::SessionInfo::~SessionInfo()
{
}

bool MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::CleanedLsp::S2l::HeadEndBfdInfo::SessionInfo::has_data() const
{
    if (is_presence_container) return true;
    return state.is_set
	|| state_change_time.is_set;
}

bool MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::CleanedLsp::S2l::HeadEndBfdInfo::SessionInfo::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(state.yfilter)
	|| ydk::is_set(state_change_time.yfilter);
}

std::string MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::CleanedLsp::S2l::HeadEndBfdInfo::SessionInfo::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "session-info";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::CleanedLsp::S2l::HeadEndBfdInfo::SessionInfo::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (state.is_set || is_set(state.yfilter)) leaf_name_data.push_back(state.get_name_leafdata());
    if (state_change_time.is_set || is_set(state_change_time.yfilter)) leaf_name_data.push_back(state_change_time.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::CleanedLsp::S2l::HeadEndBfdInfo::SessionInfo::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::CleanedLsp::S2l::HeadEndBfdInfo::SessionInfo::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::CleanedLsp::S2l::HeadEndBfdInfo::SessionInfo::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "state")
    {
        state = value;
        state.value_namespace = name_space;
        state.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "state-change-time")
    {
        state_change_time = value;
        state_change_time.value_namespace = name_space;
        state_change_time.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::CleanedLsp::S2l::HeadEndBfdInfo::SessionInfo::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "state")
    {
        state.yfilter = yfilter;
    }
    if(value_path == "state-change-time")
    {
        state_change_time.yfilter = yfilter;
    }
}

bool MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::CleanedLsp::S2l::HeadEndBfdInfo::SessionInfo::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "state" || name == "state-change-time")
        return true;
    return false;
}

MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::CleanedLsp::S2l::HeadEndBfdInfo::DeletionHistory::DeletionHistory()
    :
    lsp_id{YType::uint16, "lsp-id"},
    deletion_time{YType::uint32, "deletion-time"},
    deletion_reason{YType::str, "deletion-reason"},
    deletion_diagnostic_code{YType::uint32, "deletion-diagnostic-code"}
{

    yang_name = "deletion-history"; yang_parent_name = "head-end-bfd-info"; is_top_level_class = false; has_list_ancestor = true; 
}

MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::CleanedLsp::S2l::HeadEndBfdInfo::DeletionHistory::~DeletionHistory()
{
}

bool MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::CleanedLsp::S2l::HeadEndBfdInfo::DeletionHistory::has_data() const
{
    if (is_presence_container) return true;
    return lsp_id.is_set
	|| deletion_time.is_set
	|| deletion_reason.is_set
	|| deletion_diagnostic_code.is_set;
}

bool MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::CleanedLsp::S2l::HeadEndBfdInfo::DeletionHistory::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(lsp_id.yfilter)
	|| ydk::is_set(deletion_time.yfilter)
	|| ydk::is_set(deletion_reason.yfilter)
	|| ydk::is_set(deletion_diagnostic_code.yfilter);
}

std::string MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::CleanedLsp::S2l::HeadEndBfdInfo::DeletionHistory::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "deletion-history";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::CleanedLsp::S2l::HeadEndBfdInfo::DeletionHistory::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (lsp_id.is_set || is_set(lsp_id.yfilter)) leaf_name_data.push_back(lsp_id.get_name_leafdata());
    if (deletion_time.is_set || is_set(deletion_time.yfilter)) leaf_name_data.push_back(deletion_time.get_name_leafdata());
    if (deletion_reason.is_set || is_set(deletion_reason.yfilter)) leaf_name_data.push_back(deletion_reason.get_name_leafdata());
    if (deletion_diagnostic_code.is_set || is_set(deletion_diagnostic_code.yfilter)) leaf_name_data.push_back(deletion_diagnostic_code.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::CleanedLsp::S2l::HeadEndBfdInfo::DeletionHistory::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::CleanedLsp::S2l::HeadEndBfdInfo::DeletionHistory::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::CleanedLsp::S2l::HeadEndBfdInfo::DeletionHistory::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "lsp-id")
    {
        lsp_id = value;
        lsp_id.value_namespace = name_space;
        lsp_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "deletion-time")
    {
        deletion_time = value;
        deletion_time.value_namespace = name_space;
        deletion_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "deletion-reason")
    {
        deletion_reason = value;
        deletion_reason.value_namespace = name_space;
        deletion_reason.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "deletion-diagnostic-code")
    {
        deletion_diagnostic_code = value;
        deletion_diagnostic_code.value_namespace = name_space;
        deletion_diagnostic_code.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::CleanedLsp::S2l::HeadEndBfdInfo::DeletionHistory::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "lsp-id")
    {
        lsp_id.yfilter = yfilter;
    }
    if(value_path == "deletion-time")
    {
        deletion_time.yfilter = yfilter;
    }
    if(value_path == "deletion-reason")
    {
        deletion_reason.yfilter = yfilter;
    }
    if(value_path == "deletion-diagnostic-code")
    {
        deletion_diagnostic_code.yfilter = yfilter;
    }
}

bool MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::CleanedLsp::S2l::HeadEndBfdInfo::DeletionHistory::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "lsp-id" || name == "deletion-time" || name == "deletion-reason" || name == "deletion-diagnostic-code")
        return true;
    return false;
}

MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::CleanedLsp::S2l::HeadEndBfdInfo::BfdReversePathLabel::BfdReversePathLabel()
    :
    entry{YType::uint32, "entry"}
{

    yang_name = "bfd-reverse-path-label"; yang_parent_name = "head-end-bfd-info"; is_top_level_class = false; has_list_ancestor = true; 
}

MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::CleanedLsp::S2l::HeadEndBfdInfo::BfdReversePathLabel::~BfdReversePathLabel()
{
}

bool MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::CleanedLsp::S2l::HeadEndBfdInfo::BfdReversePathLabel::has_data() const
{
    if (is_presence_container) return true;
    return entry.is_set;
}

bool MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::CleanedLsp::S2l::HeadEndBfdInfo::BfdReversePathLabel::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(entry.yfilter);
}

std::string MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::CleanedLsp::S2l::HeadEndBfdInfo::BfdReversePathLabel::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bfd-reverse-path-label";
    path_buffer << "[" << get_ylist_key() << "]";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::CleanedLsp::S2l::HeadEndBfdInfo::BfdReversePathLabel::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (entry.is_set || is_set(entry.yfilter)) leaf_name_data.push_back(entry.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::CleanedLsp::S2l::HeadEndBfdInfo::BfdReversePathLabel::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::CleanedLsp::S2l::HeadEndBfdInfo::BfdReversePathLabel::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::CleanedLsp::S2l::HeadEndBfdInfo::BfdReversePathLabel::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "entry")
    {
        entry = value;
        entry.value_namespace = name_space;
        entry.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::CleanedLsp::S2l::HeadEndBfdInfo::BfdReversePathLabel::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "entry")
    {
        entry.yfilter = yfilter;
    }
}

bool MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::CleanedLsp::S2l::HeadEndBfdInfo::BfdReversePathLabel::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "entry")
        return true;
    return false;
}

MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::CleanedLsp::S2l::TailEndBfdInfo::TailEndBfdInfo()
    :
    failure_diagnostic_code{YType::uint32, "failure-diagnostic-code"},
    failure_reason{YType::str, "failure-reason"},
    local_discriminator{YType::uint32, "local-discriminator"},
    remote_discriminator{YType::uint32, "remote-discriminator"},
    min_interval{YType::uint32, "min-interval"},
    min_interval_default{YType::boolean, "min-interval-default"},
    multiplier{YType::uint8, "multiplier"},
    multiplier_default{YType::boolean, "multiplier-default"}
        ,
    session_info(std::make_shared<MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::CleanedLsp::S2l::TailEndBfdInfo::SessionInfo>())
{
    session_info->parent = this;

    yang_name = "tail-end-bfd-info"; yang_parent_name = "s2l"; is_top_level_class = false; has_list_ancestor = true; 
}

MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::CleanedLsp::S2l::TailEndBfdInfo::~TailEndBfdInfo()
{
}

bool MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::CleanedLsp::S2l::TailEndBfdInfo::has_data() const
{
    if (is_presence_container) return true;
    return failure_diagnostic_code.is_set
	|| failure_reason.is_set
	|| local_discriminator.is_set
	|| remote_discriminator.is_set
	|| min_interval.is_set
	|| min_interval_default.is_set
	|| multiplier.is_set
	|| multiplier_default.is_set
	|| (session_info !=  nullptr && session_info->has_data());
}

bool MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::CleanedLsp::S2l::TailEndBfdInfo::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(failure_diagnostic_code.yfilter)
	|| ydk::is_set(failure_reason.yfilter)
	|| ydk::is_set(local_discriminator.yfilter)
	|| ydk::is_set(remote_discriminator.yfilter)
	|| ydk::is_set(min_interval.yfilter)
	|| ydk::is_set(min_interval_default.yfilter)
	|| ydk::is_set(multiplier.yfilter)
	|| ydk::is_set(multiplier_default.yfilter)
	|| (session_info !=  nullptr && session_info->has_operation());
}

std::string MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::CleanedLsp::S2l::TailEndBfdInfo::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "tail-end-bfd-info";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::CleanedLsp::S2l::TailEndBfdInfo::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (failure_diagnostic_code.is_set || is_set(failure_diagnostic_code.yfilter)) leaf_name_data.push_back(failure_diagnostic_code.get_name_leafdata());
    if (failure_reason.is_set || is_set(failure_reason.yfilter)) leaf_name_data.push_back(failure_reason.get_name_leafdata());
    if (local_discriminator.is_set || is_set(local_discriminator.yfilter)) leaf_name_data.push_back(local_discriminator.get_name_leafdata());
    if (remote_discriminator.is_set || is_set(remote_discriminator.yfilter)) leaf_name_data.push_back(remote_discriminator.get_name_leafdata());
    if (min_interval.is_set || is_set(min_interval.yfilter)) leaf_name_data.push_back(min_interval.get_name_leafdata());
    if (min_interval_default.is_set || is_set(min_interval_default.yfilter)) leaf_name_data.push_back(min_interval_default.get_name_leafdata());
    if (multiplier.is_set || is_set(multiplier.yfilter)) leaf_name_data.push_back(multiplier.get_name_leafdata());
    if (multiplier_default.is_set || is_set(multiplier_default.yfilter)) leaf_name_data.push_back(multiplier_default.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::CleanedLsp::S2l::TailEndBfdInfo::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "session-info")
    {
        if(session_info == nullptr)
        {
            session_info = std::make_shared<MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::CleanedLsp::S2l::TailEndBfdInfo::SessionInfo>();
        }
        return session_info;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::CleanedLsp::S2l::TailEndBfdInfo::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(session_info != nullptr)
    {
        _children["session-info"] = session_info;
    }

    return _children;
}

void MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::CleanedLsp::S2l::TailEndBfdInfo::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "failure-diagnostic-code")
    {
        failure_diagnostic_code = value;
        failure_diagnostic_code.value_namespace = name_space;
        failure_diagnostic_code.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "failure-reason")
    {
        failure_reason = value;
        failure_reason.value_namespace = name_space;
        failure_reason.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "local-discriminator")
    {
        local_discriminator = value;
        local_discriminator.value_namespace = name_space;
        local_discriminator.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "remote-discriminator")
    {
        remote_discriminator = value;
        remote_discriminator.value_namespace = name_space;
        remote_discriminator.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "min-interval")
    {
        min_interval = value;
        min_interval.value_namespace = name_space;
        min_interval.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "min-interval-default")
    {
        min_interval_default = value;
        min_interval_default.value_namespace = name_space;
        min_interval_default.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "multiplier")
    {
        multiplier = value;
        multiplier.value_namespace = name_space;
        multiplier.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "multiplier-default")
    {
        multiplier_default = value;
        multiplier_default.value_namespace = name_space;
        multiplier_default.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::CleanedLsp::S2l::TailEndBfdInfo::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "failure-diagnostic-code")
    {
        failure_diagnostic_code.yfilter = yfilter;
    }
    if(value_path == "failure-reason")
    {
        failure_reason.yfilter = yfilter;
    }
    if(value_path == "local-discriminator")
    {
        local_discriminator.yfilter = yfilter;
    }
    if(value_path == "remote-discriminator")
    {
        remote_discriminator.yfilter = yfilter;
    }
    if(value_path == "min-interval")
    {
        min_interval.yfilter = yfilter;
    }
    if(value_path == "min-interval-default")
    {
        min_interval_default.yfilter = yfilter;
    }
    if(value_path == "multiplier")
    {
        multiplier.yfilter = yfilter;
    }
    if(value_path == "multiplier-default")
    {
        multiplier_default.yfilter = yfilter;
    }
}

bool MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::CleanedLsp::S2l::TailEndBfdInfo::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "session-info" || name == "failure-diagnostic-code" || name == "failure-reason" || name == "local-discriminator" || name == "remote-discriminator" || name == "min-interval" || name == "min-interval-default" || name == "multiplier" || name == "multiplier-default")
        return true;
    return false;
}

MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::CleanedLsp::S2l::TailEndBfdInfo::SessionInfo::SessionInfo()
    :
    state{YType::enumeration, "state"},
    state_change_time{YType::uint32, "state-change-time"}
{

    yang_name = "session-info"; yang_parent_name = "tail-end-bfd-info"; is_top_level_class = false; has_list_ancestor = true; 
}

MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::CleanedLsp::S2l::TailEndBfdInfo::SessionInfo::~SessionInfo()
{
}

bool MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::CleanedLsp::S2l::TailEndBfdInfo::SessionInfo::has_data() const
{
    if (is_presence_container) return true;
    return state.is_set
	|| state_change_time.is_set;
}

bool MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::CleanedLsp::S2l::TailEndBfdInfo::SessionInfo::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(state.yfilter)
	|| ydk::is_set(state_change_time.yfilter);
}

std::string MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::CleanedLsp::S2l::TailEndBfdInfo::SessionInfo::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "session-info";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::CleanedLsp::S2l::TailEndBfdInfo::SessionInfo::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (state.is_set || is_set(state.yfilter)) leaf_name_data.push_back(state.get_name_leafdata());
    if (state_change_time.is_set || is_set(state_change_time.yfilter)) leaf_name_data.push_back(state_change_time.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::CleanedLsp::S2l::TailEndBfdInfo::SessionInfo::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::CleanedLsp::S2l::TailEndBfdInfo::SessionInfo::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::CleanedLsp::S2l::TailEndBfdInfo::SessionInfo::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "state")
    {
        state = value;
        state.value_namespace = name_space;
        state.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "state-change-time")
    {
        state_change_time = value;
        state_change_time.value_namespace = name_space;
        state_change_time.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::CleanedLsp::S2l::TailEndBfdInfo::SessionInfo::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "state")
    {
        state.yfilter = yfilter;
    }
    if(value_path == "state-change-time")
    {
        state_change_time.yfilter = yfilter;
    }
}

bool MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::CleanedLsp::S2l::TailEndBfdInfo::SessionInfo::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "state" || name == "state-change-time")
        return true;
    return false;
}

MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::CleanedLsp::S2l::SrlgCollection::SrlgCollection()
    :
    srlg_collect_type{YType::enumeration, "srlg-collect-type"}
        ,
    discovered_srlg(this, {})
{

    yang_name = "srlg-collection"; yang_parent_name = "s2l"; is_top_level_class = false; has_list_ancestor = true; 
}

MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::CleanedLsp::S2l::SrlgCollection::~SrlgCollection()
{
}

bool MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::CleanedLsp::S2l::SrlgCollection::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<discovered_srlg.len(); index++)
    {
        if(discovered_srlg[index]->has_data())
            return true;
    }
    return srlg_collect_type.is_set;
}

bool MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::CleanedLsp::S2l::SrlgCollection::has_operation() const
{
    for (std::size_t index=0; index<discovered_srlg.len(); index++)
    {
        if(discovered_srlg[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(srlg_collect_type.yfilter);
}

std::string MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::CleanedLsp::S2l::SrlgCollection::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "srlg-collection";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::CleanedLsp::S2l::SrlgCollection::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (srlg_collect_type.is_set || is_set(srlg_collect_type.yfilter)) leaf_name_data.push_back(srlg_collect_type.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::CleanedLsp::S2l::SrlgCollection::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "discovered-srlg")
    {
        auto ent_ = std::make_shared<MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::CleanedLsp::S2l::SrlgCollection::DiscoveredSrlg>();
        ent_->parent = this;
        discovered_srlg.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::CleanedLsp::S2l::SrlgCollection::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : discovered_srlg.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::CleanedLsp::S2l::SrlgCollection::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "srlg-collect-type")
    {
        srlg_collect_type = value;
        srlg_collect_type.value_namespace = name_space;
        srlg_collect_type.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::CleanedLsp::S2l::SrlgCollection::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "srlg-collect-type")
    {
        srlg_collect_type.yfilter = yfilter;
    }
}

bool MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::CleanedLsp::S2l::SrlgCollection::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "discovered-srlg" || name == "srlg-collect-type")
        return true;
    return false;
}

MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::CleanedLsp::S2l::SrlgCollection::DiscoveredSrlg::DiscoveredSrlg()
    :
    entry{YType::uint32, "entry"}
{

    yang_name = "discovered-srlg"; yang_parent_name = "srlg-collection"; is_top_level_class = false; has_list_ancestor = true; 
}

MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::CleanedLsp::S2l::SrlgCollection::DiscoveredSrlg::~DiscoveredSrlg()
{
}

bool MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::CleanedLsp::S2l::SrlgCollection::DiscoveredSrlg::has_data() const
{
    if (is_presence_container) return true;
    return entry.is_set;
}

bool MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::CleanedLsp::S2l::SrlgCollection::DiscoveredSrlg::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(entry.yfilter);
}

std::string MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::CleanedLsp::S2l::SrlgCollection::DiscoveredSrlg::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "discovered-srlg";
    path_buffer << "[" << get_ylist_key() << "]";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::CleanedLsp::S2l::SrlgCollection::DiscoveredSrlg::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (entry.is_set || is_set(entry.yfilter)) leaf_name_data.push_back(entry.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::CleanedLsp::S2l::SrlgCollection::DiscoveredSrlg::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::CleanedLsp::S2l::SrlgCollection::DiscoveredSrlg::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::CleanedLsp::S2l::SrlgCollection::DiscoveredSrlg::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "entry")
    {
        entry = value;
        entry.value_namespace = name_space;
        entry.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::CleanedLsp::S2l::SrlgCollection::DiscoveredSrlg::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "entry")
    {
        entry.yfilter = yfilter;
    }
}

bool MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::CleanedLsp::S2l::SrlgCollection::DiscoveredSrlg::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "entry")
        return true;
    return false;
}

MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::CleanedLsp::S2l::Association::Association()
    :
    s2l_association_type{YType::uint16, "s2l-association-type"},
    s2l_association_tie_role{YType::enumeration, "s2l-association-tie-role"},
    s2l_association_id{YType::uint16, "s2l-association-id"},
    s2l_association_source{YType::str, "s2l-association-source"},
    s2l_global_source{YType::uint32, "s2l-global-source"}
        ,
    s2l_extended_id(this, {})
{

    yang_name = "association"; yang_parent_name = "s2l"; is_top_level_class = false; has_list_ancestor = true; 
}

MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::CleanedLsp::S2l::Association::~Association()
{
}

bool MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::CleanedLsp::S2l::Association::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<s2l_extended_id.len(); index++)
    {
        if(s2l_extended_id[index]->has_data())
            return true;
    }
    return s2l_association_type.is_set
	|| s2l_association_tie_role.is_set
	|| s2l_association_id.is_set
	|| s2l_association_source.is_set
	|| s2l_global_source.is_set;
}

bool MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::CleanedLsp::S2l::Association::has_operation() const
{
    for (std::size_t index=0; index<s2l_extended_id.len(); index++)
    {
        if(s2l_extended_id[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(s2l_association_type.yfilter)
	|| ydk::is_set(s2l_association_tie_role.yfilter)
	|| ydk::is_set(s2l_association_id.yfilter)
	|| ydk::is_set(s2l_association_source.yfilter)
	|| ydk::is_set(s2l_global_source.yfilter);
}

std::string MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::CleanedLsp::S2l::Association::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "association";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::CleanedLsp::S2l::Association::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (s2l_association_type.is_set || is_set(s2l_association_type.yfilter)) leaf_name_data.push_back(s2l_association_type.get_name_leafdata());
    if (s2l_association_tie_role.is_set || is_set(s2l_association_tie_role.yfilter)) leaf_name_data.push_back(s2l_association_tie_role.get_name_leafdata());
    if (s2l_association_id.is_set || is_set(s2l_association_id.yfilter)) leaf_name_data.push_back(s2l_association_id.get_name_leafdata());
    if (s2l_association_source.is_set || is_set(s2l_association_source.yfilter)) leaf_name_data.push_back(s2l_association_source.get_name_leafdata());
    if (s2l_global_source.is_set || is_set(s2l_global_source.yfilter)) leaf_name_data.push_back(s2l_global_source.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::CleanedLsp::S2l::Association::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "s2l-extended-id")
    {
        auto ent_ = std::make_shared<MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::CleanedLsp::S2l::Association::S2lExtendedId>();
        ent_->parent = this;
        s2l_extended_id.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::CleanedLsp::S2l::Association::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : s2l_extended_id.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::CleanedLsp::S2l::Association::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "s2l-association-type")
    {
        s2l_association_type = value;
        s2l_association_type.value_namespace = name_space;
        s2l_association_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "s2l-association-tie-role")
    {
        s2l_association_tie_role = value;
        s2l_association_tie_role.value_namespace = name_space;
        s2l_association_tie_role.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "s2l-association-id")
    {
        s2l_association_id = value;
        s2l_association_id.value_namespace = name_space;
        s2l_association_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "s2l-association-source")
    {
        s2l_association_source = value;
        s2l_association_source.value_namespace = name_space;
        s2l_association_source.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "s2l-global-source")
    {
        s2l_global_source = value;
        s2l_global_source.value_namespace = name_space;
        s2l_global_source.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::CleanedLsp::S2l::Association::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "s2l-association-type")
    {
        s2l_association_type.yfilter = yfilter;
    }
    if(value_path == "s2l-association-tie-role")
    {
        s2l_association_tie_role.yfilter = yfilter;
    }
    if(value_path == "s2l-association-id")
    {
        s2l_association_id.yfilter = yfilter;
    }
    if(value_path == "s2l-association-source")
    {
        s2l_association_source.yfilter = yfilter;
    }
    if(value_path == "s2l-global-source")
    {
        s2l_global_source.yfilter = yfilter;
    }
}

bool MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::CleanedLsp::S2l::Association::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "s2l-extended-id" || name == "s2l-association-type" || name == "s2l-association-tie-role" || name == "s2l-association-id" || name == "s2l-association-source" || name == "s2l-global-source")
        return true;
    return false;
}

MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::CleanedLsp::S2l::Association::S2lExtendedId::S2lExtendedId()
    :
    entry{YType::uint32, "entry"}
{

    yang_name = "s2l-extended-id"; yang_parent_name = "association"; is_top_level_class = false; has_list_ancestor = true; 
}

MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::CleanedLsp::S2l::Association::S2lExtendedId::~S2lExtendedId()
{
}

bool MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::CleanedLsp::S2l::Association::S2lExtendedId::has_data() const
{
    if (is_presence_container) return true;
    return entry.is_set;
}

bool MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::CleanedLsp::S2l::Association::S2lExtendedId::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(entry.yfilter);
}

std::string MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::CleanedLsp::S2l::Association::S2lExtendedId::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "s2l-extended-id";
    path_buffer << "[" << get_ylist_key() << "]";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::CleanedLsp::S2l::Association::S2lExtendedId::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (entry.is_set || is_set(entry.yfilter)) leaf_name_data.push_back(entry.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::CleanedLsp::S2l::Association::S2lExtendedId::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::CleanedLsp::S2l::Association::S2lExtendedId::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::CleanedLsp::S2l::Association::S2lExtendedId::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "entry")
    {
        entry = value;
        entry.value_namespace = name_space;
        entry.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::CleanedLsp::S2l::Association::S2lExtendedId::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "entry")
    {
        entry.yfilter = yfilter;
    }
}

bool MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::CleanedLsp::S2l::Association::S2lExtendedId::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "entry")
        return true;
    return false;
}

MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::CleanedLsp::S2l::Protection::Protection()
    :
    s2l_secondary{YType::boolean, "s2l-secondary"},
    s2l_protecting{YType::boolean, "s2l-protecting"},
    s2l_notification{YType::boolean, "s2l-notification"},
    s2l_operational{YType::boolean, "s2l-operational"},
    enhanced{YType::boolean, "enhanced"},
    ded1_plus1{YType::boolean, "ded1-plus1"},
    ded1_to1{YType::boolean, "ded1-to1"},
    shared{YType::boolean, "shared"},
    link_unprotected{YType::boolean, "link-unprotected"},
    extra_traffic{YType::boolean, "extra-traffic"},
    any{YType::boolean, "any"},
    rerouting{YType::boolean, "rerouting"},
    rerouting_no_et{YType::boolean, "rerouting-no-et"},
    one_to_n_protection_et{YType::boolean, "one-to-n-protection-et"},
    one_plus_one_uni{YType::boolean, "one-plus-one-uni"},
    one_plus_one_bi{YType::boolean, "one-plus-one-bi"},
    lsp_unprotected{YType::boolean, "lsp-unprotected"}
{

    yang_name = "protection"; yang_parent_name = "s2l"; is_top_level_class = false; has_list_ancestor = true; 
}

MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::CleanedLsp::S2l::Protection::~Protection()
{
}

bool MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::CleanedLsp::S2l::Protection::has_data() const
{
    if (is_presence_container) return true;
    return s2l_secondary.is_set
	|| s2l_protecting.is_set
	|| s2l_notification.is_set
	|| s2l_operational.is_set
	|| enhanced.is_set
	|| ded1_plus1.is_set
	|| ded1_to1.is_set
	|| shared.is_set
	|| link_unprotected.is_set
	|| extra_traffic.is_set
	|| any.is_set
	|| rerouting.is_set
	|| rerouting_no_et.is_set
	|| one_to_n_protection_et.is_set
	|| one_plus_one_uni.is_set
	|| one_plus_one_bi.is_set
	|| lsp_unprotected.is_set;
}

bool MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::CleanedLsp::S2l::Protection::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(s2l_secondary.yfilter)
	|| ydk::is_set(s2l_protecting.yfilter)
	|| ydk::is_set(s2l_notification.yfilter)
	|| ydk::is_set(s2l_operational.yfilter)
	|| ydk::is_set(enhanced.yfilter)
	|| ydk::is_set(ded1_plus1.yfilter)
	|| ydk::is_set(ded1_to1.yfilter)
	|| ydk::is_set(shared.yfilter)
	|| ydk::is_set(link_unprotected.yfilter)
	|| ydk::is_set(extra_traffic.yfilter)
	|| ydk::is_set(any.yfilter)
	|| ydk::is_set(rerouting.yfilter)
	|| ydk::is_set(rerouting_no_et.yfilter)
	|| ydk::is_set(one_to_n_protection_et.yfilter)
	|| ydk::is_set(one_plus_one_uni.yfilter)
	|| ydk::is_set(one_plus_one_bi.yfilter)
	|| ydk::is_set(lsp_unprotected.yfilter);
}

std::string MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::CleanedLsp::S2l::Protection::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "protection";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::CleanedLsp::S2l::Protection::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (s2l_secondary.is_set || is_set(s2l_secondary.yfilter)) leaf_name_data.push_back(s2l_secondary.get_name_leafdata());
    if (s2l_protecting.is_set || is_set(s2l_protecting.yfilter)) leaf_name_data.push_back(s2l_protecting.get_name_leafdata());
    if (s2l_notification.is_set || is_set(s2l_notification.yfilter)) leaf_name_data.push_back(s2l_notification.get_name_leafdata());
    if (s2l_operational.is_set || is_set(s2l_operational.yfilter)) leaf_name_data.push_back(s2l_operational.get_name_leafdata());
    if (enhanced.is_set || is_set(enhanced.yfilter)) leaf_name_data.push_back(enhanced.get_name_leafdata());
    if (ded1_plus1.is_set || is_set(ded1_plus1.yfilter)) leaf_name_data.push_back(ded1_plus1.get_name_leafdata());
    if (ded1_to1.is_set || is_set(ded1_to1.yfilter)) leaf_name_data.push_back(ded1_to1.get_name_leafdata());
    if (shared.is_set || is_set(shared.yfilter)) leaf_name_data.push_back(shared.get_name_leafdata());
    if (link_unprotected.is_set || is_set(link_unprotected.yfilter)) leaf_name_data.push_back(link_unprotected.get_name_leafdata());
    if (extra_traffic.is_set || is_set(extra_traffic.yfilter)) leaf_name_data.push_back(extra_traffic.get_name_leafdata());
    if (any.is_set || is_set(any.yfilter)) leaf_name_data.push_back(any.get_name_leafdata());
    if (rerouting.is_set || is_set(rerouting.yfilter)) leaf_name_data.push_back(rerouting.get_name_leafdata());
    if (rerouting_no_et.is_set || is_set(rerouting_no_et.yfilter)) leaf_name_data.push_back(rerouting_no_et.get_name_leafdata());
    if (one_to_n_protection_et.is_set || is_set(one_to_n_protection_et.yfilter)) leaf_name_data.push_back(one_to_n_protection_et.get_name_leafdata());
    if (one_plus_one_uni.is_set || is_set(one_plus_one_uni.yfilter)) leaf_name_data.push_back(one_plus_one_uni.get_name_leafdata());
    if (one_plus_one_bi.is_set || is_set(one_plus_one_bi.yfilter)) leaf_name_data.push_back(one_plus_one_bi.get_name_leafdata());
    if (lsp_unprotected.is_set || is_set(lsp_unprotected.yfilter)) leaf_name_data.push_back(lsp_unprotected.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::CleanedLsp::S2l::Protection::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::CleanedLsp::S2l::Protection::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::CleanedLsp::S2l::Protection::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "s2l-secondary")
    {
        s2l_secondary = value;
        s2l_secondary.value_namespace = name_space;
        s2l_secondary.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "s2l-protecting")
    {
        s2l_protecting = value;
        s2l_protecting.value_namespace = name_space;
        s2l_protecting.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "s2l-notification")
    {
        s2l_notification = value;
        s2l_notification.value_namespace = name_space;
        s2l_notification.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "s2l-operational")
    {
        s2l_operational = value;
        s2l_operational.value_namespace = name_space;
        s2l_operational.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "enhanced")
    {
        enhanced = value;
        enhanced.value_namespace = name_space;
        enhanced.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ded1-plus1")
    {
        ded1_plus1 = value;
        ded1_plus1.value_namespace = name_space;
        ded1_plus1.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ded1-to1")
    {
        ded1_to1 = value;
        ded1_to1.value_namespace = name_space;
        ded1_to1.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "shared")
    {
        shared = value;
        shared.value_namespace = name_space;
        shared.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "link-unprotected")
    {
        link_unprotected = value;
        link_unprotected.value_namespace = name_space;
        link_unprotected.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "extra-traffic")
    {
        extra_traffic = value;
        extra_traffic.value_namespace = name_space;
        extra_traffic.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "any")
    {
        any = value;
        any.value_namespace = name_space;
        any.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rerouting")
    {
        rerouting = value;
        rerouting.value_namespace = name_space;
        rerouting.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rerouting-no-et")
    {
        rerouting_no_et = value;
        rerouting_no_et.value_namespace = name_space;
        rerouting_no_et.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "one-to-n-protection-et")
    {
        one_to_n_protection_et = value;
        one_to_n_protection_et.value_namespace = name_space;
        one_to_n_protection_et.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "one-plus-one-uni")
    {
        one_plus_one_uni = value;
        one_plus_one_uni.value_namespace = name_space;
        one_plus_one_uni.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "one-plus-one-bi")
    {
        one_plus_one_bi = value;
        one_plus_one_bi.value_namespace = name_space;
        one_plus_one_bi.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lsp-unprotected")
    {
        lsp_unprotected = value;
        lsp_unprotected.value_namespace = name_space;
        lsp_unprotected.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::CleanedLsp::S2l::Protection::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "s2l-secondary")
    {
        s2l_secondary.yfilter = yfilter;
    }
    if(value_path == "s2l-protecting")
    {
        s2l_protecting.yfilter = yfilter;
    }
    if(value_path == "s2l-notification")
    {
        s2l_notification.yfilter = yfilter;
    }
    if(value_path == "s2l-operational")
    {
        s2l_operational.yfilter = yfilter;
    }
    if(value_path == "enhanced")
    {
        enhanced.yfilter = yfilter;
    }
    if(value_path == "ded1-plus1")
    {
        ded1_plus1.yfilter = yfilter;
    }
    if(value_path == "ded1-to1")
    {
        ded1_to1.yfilter = yfilter;
    }
    if(value_path == "shared")
    {
        shared.yfilter = yfilter;
    }
    if(value_path == "link-unprotected")
    {
        link_unprotected.yfilter = yfilter;
    }
    if(value_path == "extra-traffic")
    {
        extra_traffic.yfilter = yfilter;
    }
    if(value_path == "any")
    {
        any.yfilter = yfilter;
    }
    if(value_path == "rerouting")
    {
        rerouting.yfilter = yfilter;
    }
    if(value_path == "rerouting-no-et")
    {
        rerouting_no_et.yfilter = yfilter;
    }
    if(value_path == "one-to-n-protection-et")
    {
        one_to_n_protection_et.yfilter = yfilter;
    }
    if(value_path == "one-plus-one-uni")
    {
        one_plus_one_uni.yfilter = yfilter;
    }
    if(value_path == "one-plus-one-bi")
    {
        one_plus_one_bi.yfilter = yfilter;
    }
    if(value_path == "lsp-unprotected")
    {
        lsp_unprotected.yfilter = yfilter;
    }
}

bool MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::CleanedLsp::S2l::Protection::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "s2l-secondary" || name == "s2l-protecting" || name == "s2l-notification" || name == "s2l-operational" || name == "enhanced" || name == "ded1-plus1" || name == "ded1-to1" || name == "shared" || name == "link-unprotected" || name == "extra-traffic" || name == "any" || name == "rerouting" || name == "rerouting-no-et" || name == "one-to-n-protection-et" || name == "one-plus-one-uni" || name == "one-plus-one-bi" || name == "lsp-unprotected")
        return true;
    return false;
}

MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::CleanedLsp::S2l::ReverseLspFec::ReverseLspFec()
    :
    fec_lsp_id{YType::uint16, "fec-lsp-id"},
    fec_tunnel_id{YType::uint16, "fec-tunnel-id"},
    fec_extended_tunnel_id{YType::str, "fec-extended-tunnel-id"},
    fec_source{YType::str, "fec-source"},
    fec_vrf{YType::str, "fec-vrf"}
        ,
    fec_destination_info(std::make_shared<MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::CleanedLsp::S2l::ReverseLspFec::FecDestinationInfo>())
{
    fec_destination_info->parent = this;

    yang_name = "reverse-lsp-fec"; yang_parent_name = "s2l"; is_top_level_class = false; has_list_ancestor = true; 
}

MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::CleanedLsp::S2l::ReverseLspFec::~ReverseLspFec()
{
}

bool MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::CleanedLsp::S2l::ReverseLspFec::has_data() const
{
    if (is_presence_container) return true;
    return fec_lsp_id.is_set
	|| fec_tunnel_id.is_set
	|| fec_extended_tunnel_id.is_set
	|| fec_source.is_set
	|| fec_vrf.is_set
	|| (fec_destination_info !=  nullptr && fec_destination_info->has_data());
}

bool MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::CleanedLsp::S2l::ReverseLspFec::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(fec_lsp_id.yfilter)
	|| ydk::is_set(fec_tunnel_id.yfilter)
	|| ydk::is_set(fec_extended_tunnel_id.yfilter)
	|| ydk::is_set(fec_source.yfilter)
	|| ydk::is_set(fec_vrf.yfilter)
	|| (fec_destination_info !=  nullptr && fec_destination_info->has_operation());
}

std::string MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::CleanedLsp::S2l::ReverseLspFec::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "reverse-lsp-fec";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::CleanedLsp::S2l::ReverseLspFec::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (fec_lsp_id.is_set || is_set(fec_lsp_id.yfilter)) leaf_name_data.push_back(fec_lsp_id.get_name_leafdata());
    if (fec_tunnel_id.is_set || is_set(fec_tunnel_id.yfilter)) leaf_name_data.push_back(fec_tunnel_id.get_name_leafdata());
    if (fec_extended_tunnel_id.is_set || is_set(fec_extended_tunnel_id.yfilter)) leaf_name_data.push_back(fec_extended_tunnel_id.get_name_leafdata());
    if (fec_source.is_set || is_set(fec_source.yfilter)) leaf_name_data.push_back(fec_source.get_name_leafdata());
    if (fec_vrf.is_set || is_set(fec_vrf.yfilter)) leaf_name_data.push_back(fec_vrf.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::CleanedLsp::S2l::ReverseLspFec::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "fec-destination-info")
    {
        if(fec_destination_info == nullptr)
        {
            fec_destination_info = std::make_shared<MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::CleanedLsp::S2l::ReverseLspFec::FecDestinationInfo>();
        }
        return fec_destination_info;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::CleanedLsp::S2l::ReverseLspFec::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(fec_destination_info != nullptr)
    {
        _children["fec-destination-info"] = fec_destination_info;
    }

    return _children;
}

void MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::CleanedLsp::S2l::ReverseLspFec::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "fec-lsp-id")
    {
        fec_lsp_id = value;
        fec_lsp_id.value_namespace = name_space;
        fec_lsp_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "fec-tunnel-id")
    {
        fec_tunnel_id = value;
        fec_tunnel_id.value_namespace = name_space;
        fec_tunnel_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "fec-extended-tunnel-id")
    {
        fec_extended_tunnel_id = value;
        fec_extended_tunnel_id.value_namespace = name_space;
        fec_extended_tunnel_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "fec-source")
    {
        fec_source = value;
        fec_source.value_namespace = name_space;
        fec_source.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "fec-vrf")
    {
        fec_vrf = value;
        fec_vrf.value_namespace = name_space;
        fec_vrf.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::CleanedLsp::S2l::ReverseLspFec::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "fec-lsp-id")
    {
        fec_lsp_id.yfilter = yfilter;
    }
    if(value_path == "fec-tunnel-id")
    {
        fec_tunnel_id.yfilter = yfilter;
    }
    if(value_path == "fec-extended-tunnel-id")
    {
        fec_extended_tunnel_id.yfilter = yfilter;
    }
    if(value_path == "fec-source")
    {
        fec_source.yfilter = yfilter;
    }
    if(value_path == "fec-vrf")
    {
        fec_vrf.yfilter = yfilter;
    }
}

bool MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::CleanedLsp::S2l::ReverseLspFec::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "fec-destination-info" || name == "fec-lsp-id" || name == "fec-tunnel-id" || name == "fec-extended-tunnel-id" || name == "fec-source" || name == "fec-vrf")
        return true;
    return false;
}

MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::CleanedLsp::S2l::ReverseLspFec::FecDestinationInfo::FecDestinationInfo()
    :
    fec_ctype{YType::enumeration, "fec-ctype"},
    p2p_lsp_destination{YType::str, "p2p-lsp-destination"},
    fec_destination_p2mp_id{YType::uint32, "fec-destination-p2mp-id"}
{

    yang_name = "fec-destination-info"; yang_parent_name = "reverse-lsp-fec"; is_top_level_class = false; has_list_ancestor = true; 
}

MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::CleanedLsp::S2l::ReverseLspFec::FecDestinationInfo::~FecDestinationInfo()
{
}

bool MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::CleanedLsp::S2l::ReverseLspFec::FecDestinationInfo::has_data() const
{
    if (is_presence_container) return true;
    return fec_ctype.is_set
	|| p2p_lsp_destination.is_set
	|| fec_destination_p2mp_id.is_set;
}

bool MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::CleanedLsp::S2l::ReverseLspFec::FecDestinationInfo::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(fec_ctype.yfilter)
	|| ydk::is_set(p2p_lsp_destination.yfilter)
	|| ydk::is_set(fec_destination_p2mp_id.yfilter);
}

std::string MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::CleanedLsp::S2l::ReverseLspFec::FecDestinationInfo::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "fec-destination-info";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::CleanedLsp::S2l::ReverseLspFec::FecDestinationInfo::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (fec_ctype.is_set || is_set(fec_ctype.yfilter)) leaf_name_data.push_back(fec_ctype.get_name_leafdata());
    if (p2p_lsp_destination.is_set || is_set(p2p_lsp_destination.yfilter)) leaf_name_data.push_back(p2p_lsp_destination.get_name_leafdata());
    if (fec_destination_p2mp_id.is_set || is_set(fec_destination_p2mp_id.yfilter)) leaf_name_data.push_back(fec_destination_p2mp_id.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::CleanedLsp::S2l::ReverseLspFec::FecDestinationInfo::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::CleanedLsp::S2l::ReverseLspFec::FecDestinationInfo::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::CleanedLsp::S2l::ReverseLspFec::FecDestinationInfo::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "fec-ctype")
    {
        fec_ctype = value;
        fec_ctype.value_namespace = name_space;
        fec_ctype.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "p2p-lsp-destination")
    {
        p2p_lsp_destination = value;
        p2p_lsp_destination.value_namespace = name_space;
        p2p_lsp_destination.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "fec-destination-p2mp-id")
    {
        fec_destination_p2mp_id = value;
        fec_destination_p2mp_id.value_namespace = name_space;
        fec_destination_p2mp_id.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::CleanedLsp::S2l::ReverseLspFec::FecDestinationInfo::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "fec-ctype")
    {
        fec_ctype.yfilter = yfilter;
    }
    if(value_path == "p2p-lsp-destination")
    {
        p2p_lsp_destination.yfilter = yfilter;
    }
    if(value_path == "fec-destination-p2mp-id")
    {
        fec_destination_p2mp_id.yfilter = yfilter;
    }
}

bool MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::CleanedLsp::S2l::ReverseLspFec::FecDestinationInfo::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "fec-ctype" || name == "p2p-lsp-destination" || name == "fec-destination-p2mp-id")
        return true;
    return false;
}

MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::CleanedLsp::S2l::ReverseTspec::ReverseTspec()
    :
    average_rate{YType::uint64, "average-rate"},
    maximum_burst{YType::uint64, "maximum-burst"},
    peak_rate{YType::uint64, "peak-rate"}
{

    yang_name = "reverse-tspec"; yang_parent_name = "s2l"; is_top_level_class = false; has_list_ancestor = true; 
}

MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::CleanedLsp::S2l::ReverseTspec::~ReverseTspec()
{
}

bool MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::CleanedLsp::S2l::ReverseTspec::has_data() const
{
    if (is_presence_container) return true;
    return average_rate.is_set
	|| maximum_burst.is_set
	|| peak_rate.is_set;
}

bool MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::CleanedLsp::S2l::ReverseTspec::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(average_rate.yfilter)
	|| ydk::is_set(maximum_burst.yfilter)
	|| ydk::is_set(peak_rate.yfilter);
}

std::string MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::CleanedLsp::S2l::ReverseTspec::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "reverse-tspec";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::CleanedLsp::S2l::ReverseTspec::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (average_rate.is_set || is_set(average_rate.yfilter)) leaf_name_data.push_back(average_rate.get_name_leafdata());
    if (maximum_burst.is_set || is_set(maximum_burst.yfilter)) leaf_name_data.push_back(maximum_burst.get_name_leafdata());
    if (peak_rate.is_set || is_set(peak_rate.yfilter)) leaf_name_data.push_back(peak_rate.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::CleanedLsp::S2l::ReverseTspec::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::CleanedLsp::S2l::ReverseTspec::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::CleanedLsp::S2l::ReverseTspec::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "average-rate")
    {
        average_rate = value;
        average_rate.value_namespace = name_space;
        average_rate.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "maximum-burst")
    {
        maximum_burst = value;
        maximum_burst.value_namespace = name_space;
        maximum_burst.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "peak-rate")
    {
        peak_rate = value;
        peak_rate.value_namespace = name_space;
        peak_rate.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::CleanedLsp::S2l::ReverseTspec::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "average-rate")
    {
        average_rate.yfilter = yfilter;
    }
    if(value_path == "maximum-burst")
    {
        maximum_burst.yfilter = yfilter;
    }
    if(value_path == "peak-rate")
    {
        peak_rate.yfilter = yfilter;
    }
}

bool MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::CleanedLsp::S2l::ReverseTspec::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "average-rate" || name == "maximum-burst" || name == "peak-rate")
        return true;
    return false;
}

MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::CleanedLsp::S2l::FlexInfo::FlexInfo()
    :
    entry_exists{YType::boolean, "entry-exists"},
    in_label{YType::uint32, "in-label"},
    bfd_created{YType::boolean, "bfd-created"},
    bfd_up{YType::boolean, "bfd-up"},
    oam_created{YType::boolean, "oam-created"},
    bfd_next_hop{YType::str, "bfd-next-hop"},
    bfd_tun_ifh{YType::str, "bfd-tun-ifh"},
    bfd_out_ifh{YType::str, "bfd-out-ifh"},
    bfd_int_label{YType::uint32, "bfd-int-label"},
    bfd_egress_label{YType::uint32, "bfd-egress-label"},
    fault_ldi_lockout{YType::boolean, "fault-ldi-lockout"},
    fault_ldi{YType::boolean, "fault-ldi"},
    fault_lkr{YType::boolean, "fault-lkr"},
    fault_ais{YType::boolean, "fault-ais"},
    fault_time{YType::uint32, "fault-time"}
        ,
    flex_fec(std::make_shared<MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::CleanedLsp::S2l::FlexInfo::FlexFec>())
{
    flex_fec->parent = this;

    yang_name = "flex-info"; yang_parent_name = "s2l"; is_top_level_class = false; has_list_ancestor = true; 
}

MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::CleanedLsp::S2l::FlexInfo::~FlexInfo()
{
}

bool MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::CleanedLsp::S2l::FlexInfo::has_data() const
{
    if (is_presence_container) return true;
    return entry_exists.is_set
	|| in_label.is_set
	|| bfd_created.is_set
	|| bfd_up.is_set
	|| oam_created.is_set
	|| bfd_next_hop.is_set
	|| bfd_tun_ifh.is_set
	|| bfd_out_ifh.is_set
	|| bfd_int_label.is_set
	|| bfd_egress_label.is_set
	|| fault_ldi_lockout.is_set
	|| fault_ldi.is_set
	|| fault_lkr.is_set
	|| fault_ais.is_set
	|| fault_time.is_set
	|| (flex_fec !=  nullptr && flex_fec->has_data());
}

bool MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::CleanedLsp::S2l::FlexInfo::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(entry_exists.yfilter)
	|| ydk::is_set(in_label.yfilter)
	|| ydk::is_set(bfd_created.yfilter)
	|| ydk::is_set(bfd_up.yfilter)
	|| ydk::is_set(oam_created.yfilter)
	|| ydk::is_set(bfd_next_hop.yfilter)
	|| ydk::is_set(bfd_tun_ifh.yfilter)
	|| ydk::is_set(bfd_out_ifh.yfilter)
	|| ydk::is_set(bfd_int_label.yfilter)
	|| ydk::is_set(bfd_egress_label.yfilter)
	|| ydk::is_set(fault_ldi_lockout.yfilter)
	|| ydk::is_set(fault_ldi.yfilter)
	|| ydk::is_set(fault_lkr.yfilter)
	|| ydk::is_set(fault_ais.yfilter)
	|| ydk::is_set(fault_time.yfilter)
	|| (flex_fec !=  nullptr && flex_fec->has_operation());
}

std::string MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::CleanedLsp::S2l::FlexInfo::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "flex-info";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::CleanedLsp::S2l::FlexInfo::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (entry_exists.is_set || is_set(entry_exists.yfilter)) leaf_name_data.push_back(entry_exists.get_name_leafdata());
    if (in_label.is_set || is_set(in_label.yfilter)) leaf_name_data.push_back(in_label.get_name_leafdata());
    if (bfd_created.is_set || is_set(bfd_created.yfilter)) leaf_name_data.push_back(bfd_created.get_name_leafdata());
    if (bfd_up.is_set || is_set(bfd_up.yfilter)) leaf_name_data.push_back(bfd_up.get_name_leafdata());
    if (oam_created.is_set || is_set(oam_created.yfilter)) leaf_name_data.push_back(oam_created.get_name_leafdata());
    if (bfd_next_hop.is_set || is_set(bfd_next_hop.yfilter)) leaf_name_data.push_back(bfd_next_hop.get_name_leafdata());
    if (bfd_tun_ifh.is_set || is_set(bfd_tun_ifh.yfilter)) leaf_name_data.push_back(bfd_tun_ifh.get_name_leafdata());
    if (bfd_out_ifh.is_set || is_set(bfd_out_ifh.yfilter)) leaf_name_data.push_back(bfd_out_ifh.get_name_leafdata());
    if (bfd_int_label.is_set || is_set(bfd_int_label.yfilter)) leaf_name_data.push_back(bfd_int_label.get_name_leafdata());
    if (bfd_egress_label.is_set || is_set(bfd_egress_label.yfilter)) leaf_name_data.push_back(bfd_egress_label.get_name_leafdata());
    if (fault_ldi_lockout.is_set || is_set(fault_ldi_lockout.yfilter)) leaf_name_data.push_back(fault_ldi_lockout.get_name_leafdata());
    if (fault_ldi.is_set || is_set(fault_ldi.yfilter)) leaf_name_data.push_back(fault_ldi.get_name_leafdata());
    if (fault_lkr.is_set || is_set(fault_lkr.yfilter)) leaf_name_data.push_back(fault_lkr.get_name_leafdata());
    if (fault_ais.is_set || is_set(fault_ais.yfilter)) leaf_name_data.push_back(fault_ais.get_name_leafdata());
    if (fault_time.is_set || is_set(fault_time.yfilter)) leaf_name_data.push_back(fault_time.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::CleanedLsp::S2l::FlexInfo::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "flex-fec")
    {
        if(flex_fec == nullptr)
        {
            flex_fec = std::make_shared<MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::CleanedLsp::S2l::FlexInfo::FlexFec>();
        }
        return flex_fec;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::CleanedLsp::S2l::FlexInfo::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(flex_fec != nullptr)
    {
        _children["flex-fec"] = flex_fec;
    }

    return _children;
}

void MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::CleanedLsp::S2l::FlexInfo::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "entry-exists")
    {
        entry_exists = value;
        entry_exists.value_namespace = name_space;
        entry_exists.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "in-label")
    {
        in_label = value;
        in_label.value_namespace = name_space;
        in_label.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bfd-created")
    {
        bfd_created = value;
        bfd_created.value_namespace = name_space;
        bfd_created.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bfd-up")
    {
        bfd_up = value;
        bfd_up.value_namespace = name_space;
        bfd_up.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "oam-created")
    {
        oam_created = value;
        oam_created.value_namespace = name_space;
        oam_created.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bfd-next-hop")
    {
        bfd_next_hop = value;
        bfd_next_hop.value_namespace = name_space;
        bfd_next_hop.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bfd-tun-ifh")
    {
        bfd_tun_ifh = value;
        bfd_tun_ifh.value_namespace = name_space;
        bfd_tun_ifh.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bfd-out-ifh")
    {
        bfd_out_ifh = value;
        bfd_out_ifh.value_namespace = name_space;
        bfd_out_ifh.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bfd-int-label")
    {
        bfd_int_label = value;
        bfd_int_label.value_namespace = name_space;
        bfd_int_label.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bfd-egress-label")
    {
        bfd_egress_label = value;
        bfd_egress_label.value_namespace = name_space;
        bfd_egress_label.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "fault-ldi-lockout")
    {
        fault_ldi_lockout = value;
        fault_ldi_lockout.value_namespace = name_space;
        fault_ldi_lockout.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "fault-ldi")
    {
        fault_ldi = value;
        fault_ldi.value_namespace = name_space;
        fault_ldi.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "fault-lkr")
    {
        fault_lkr = value;
        fault_lkr.value_namespace = name_space;
        fault_lkr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "fault-ais")
    {
        fault_ais = value;
        fault_ais.value_namespace = name_space;
        fault_ais.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "fault-time")
    {
        fault_time = value;
        fault_time.value_namespace = name_space;
        fault_time.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::CleanedLsp::S2l::FlexInfo::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "entry-exists")
    {
        entry_exists.yfilter = yfilter;
    }
    if(value_path == "in-label")
    {
        in_label.yfilter = yfilter;
    }
    if(value_path == "bfd-created")
    {
        bfd_created.yfilter = yfilter;
    }
    if(value_path == "bfd-up")
    {
        bfd_up.yfilter = yfilter;
    }
    if(value_path == "oam-created")
    {
        oam_created.yfilter = yfilter;
    }
    if(value_path == "bfd-next-hop")
    {
        bfd_next_hop.yfilter = yfilter;
    }
    if(value_path == "bfd-tun-ifh")
    {
        bfd_tun_ifh.yfilter = yfilter;
    }
    if(value_path == "bfd-out-ifh")
    {
        bfd_out_ifh.yfilter = yfilter;
    }
    if(value_path == "bfd-int-label")
    {
        bfd_int_label.yfilter = yfilter;
    }
    if(value_path == "bfd-egress-label")
    {
        bfd_egress_label.yfilter = yfilter;
    }
    if(value_path == "fault-ldi-lockout")
    {
        fault_ldi_lockout.yfilter = yfilter;
    }
    if(value_path == "fault-ldi")
    {
        fault_ldi.yfilter = yfilter;
    }
    if(value_path == "fault-lkr")
    {
        fault_lkr.yfilter = yfilter;
    }
    if(value_path == "fault-ais")
    {
        fault_ais.yfilter = yfilter;
    }
    if(value_path == "fault-time")
    {
        fault_time.yfilter = yfilter;
    }
}

bool MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::CleanedLsp::S2l::FlexInfo::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "flex-fec" || name == "entry-exists" || name == "in-label" || name == "bfd-created" || name == "bfd-up" || name == "oam-created" || name == "bfd-next-hop" || name == "bfd-tun-ifh" || name == "bfd-out-ifh" || name == "bfd-int-label" || name == "bfd-egress-label" || name == "fault-ldi-lockout" || name == "fault-ldi" || name == "fault-lkr" || name == "fault-ais" || name == "fault-time")
        return true;
    return false;
}

MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::CleanedLsp::S2l::FlexInfo::FlexFec::FlexFec()
    :
    s2l_fec_subgroup_id{YType::uint16, "s2l-fec-subgroup-id"},
    s2l_fec_lsp_id{YType::uint16, "s2l-fec-lsp-id"},
    s2l_fec_tunnel_id{YType::uint16, "s2l-fec-tunnel-id"},
    s2l_fec_extended_tunnel_id{YType::str, "s2l-fec-extended-tunnel-id"},
    s2l_fec_source{YType::str, "s2l-fec-source"},
    s2l_fec_dest{YType::str, "s2l-fec-dest"},
    s2l_fec_p2mp_id{YType::uint32, "s2l-fec-p2mp-id"},
    s2l_fec_subgroup_originator{YType::str, "s2l-fec-subgroup-originator"},
    s2l_fec_ctype{YType::enumeration, "s2l-fec-ctype"},
    s2l_fec_vrf{YType::str, "s2l-fec-vrf"}
{

    yang_name = "flex-fec"; yang_parent_name = "flex-info"; is_top_level_class = false; has_list_ancestor = true; 
}

MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::CleanedLsp::S2l::FlexInfo::FlexFec::~FlexFec()
{
}

bool MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::CleanedLsp::S2l::FlexInfo::FlexFec::has_data() const
{
    if (is_presence_container) return true;
    return s2l_fec_subgroup_id.is_set
	|| s2l_fec_lsp_id.is_set
	|| s2l_fec_tunnel_id.is_set
	|| s2l_fec_extended_tunnel_id.is_set
	|| s2l_fec_source.is_set
	|| s2l_fec_dest.is_set
	|| s2l_fec_p2mp_id.is_set
	|| s2l_fec_subgroup_originator.is_set
	|| s2l_fec_ctype.is_set
	|| s2l_fec_vrf.is_set;
}

bool MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::CleanedLsp::S2l::FlexInfo::FlexFec::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(s2l_fec_subgroup_id.yfilter)
	|| ydk::is_set(s2l_fec_lsp_id.yfilter)
	|| ydk::is_set(s2l_fec_tunnel_id.yfilter)
	|| ydk::is_set(s2l_fec_extended_tunnel_id.yfilter)
	|| ydk::is_set(s2l_fec_source.yfilter)
	|| ydk::is_set(s2l_fec_dest.yfilter)
	|| ydk::is_set(s2l_fec_p2mp_id.yfilter)
	|| ydk::is_set(s2l_fec_subgroup_originator.yfilter)
	|| ydk::is_set(s2l_fec_ctype.yfilter)
	|| ydk::is_set(s2l_fec_vrf.yfilter);
}

std::string MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::CleanedLsp::S2l::FlexInfo::FlexFec::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "flex-fec";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::CleanedLsp::S2l::FlexInfo::FlexFec::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (s2l_fec_subgroup_id.is_set || is_set(s2l_fec_subgroup_id.yfilter)) leaf_name_data.push_back(s2l_fec_subgroup_id.get_name_leafdata());
    if (s2l_fec_lsp_id.is_set || is_set(s2l_fec_lsp_id.yfilter)) leaf_name_data.push_back(s2l_fec_lsp_id.get_name_leafdata());
    if (s2l_fec_tunnel_id.is_set || is_set(s2l_fec_tunnel_id.yfilter)) leaf_name_data.push_back(s2l_fec_tunnel_id.get_name_leafdata());
    if (s2l_fec_extended_tunnel_id.is_set || is_set(s2l_fec_extended_tunnel_id.yfilter)) leaf_name_data.push_back(s2l_fec_extended_tunnel_id.get_name_leafdata());
    if (s2l_fec_source.is_set || is_set(s2l_fec_source.yfilter)) leaf_name_data.push_back(s2l_fec_source.get_name_leafdata());
    if (s2l_fec_dest.is_set || is_set(s2l_fec_dest.yfilter)) leaf_name_data.push_back(s2l_fec_dest.get_name_leafdata());
    if (s2l_fec_p2mp_id.is_set || is_set(s2l_fec_p2mp_id.yfilter)) leaf_name_data.push_back(s2l_fec_p2mp_id.get_name_leafdata());
    if (s2l_fec_subgroup_originator.is_set || is_set(s2l_fec_subgroup_originator.yfilter)) leaf_name_data.push_back(s2l_fec_subgroup_originator.get_name_leafdata());
    if (s2l_fec_ctype.is_set || is_set(s2l_fec_ctype.yfilter)) leaf_name_data.push_back(s2l_fec_ctype.get_name_leafdata());
    if (s2l_fec_vrf.is_set || is_set(s2l_fec_vrf.yfilter)) leaf_name_data.push_back(s2l_fec_vrf.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::CleanedLsp::S2l::FlexInfo::FlexFec::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::CleanedLsp::S2l::FlexInfo::FlexFec::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::CleanedLsp::S2l::FlexInfo::FlexFec::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "s2l-fec-subgroup-id")
    {
        s2l_fec_subgroup_id = value;
        s2l_fec_subgroup_id.value_namespace = name_space;
        s2l_fec_subgroup_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "s2l-fec-lsp-id")
    {
        s2l_fec_lsp_id = value;
        s2l_fec_lsp_id.value_namespace = name_space;
        s2l_fec_lsp_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "s2l-fec-tunnel-id")
    {
        s2l_fec_tunnel_id = value;
        s2l_fec_tunnel_id.value_namespace = name_space;
        s2l_fec_tunnel_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "s2l-fec-extended-tunnel-id")
    {
        s2l_fec_extended_tunnel_id = value;
        s2l_fec_extended_tunnel_id.value_namespace = name_space;
        s2l_fec_extended_tunnel_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "s2l-fec-source")
    {
        s2l_fec_source = value;
        s2l_fec_source.value_namespace = name_space;
        s2l_fec_source.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "s2l-fec-dest")
    {
        s2l_fec_dest = value;
        s2l_fec_dest.value_namespace = name_space;
        s2l_fec_dest.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "s2l-fec-p2mp-id")
    {
        s2l_fec_p2mp_id = value;
        s2l_fec_p2mp_id.value_namespace = name_space;
        s2l_fec_p2mp_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "s2l-fec-subgroup-originator")
    {
        s2l_fec_subgroup_originator = value;
        s2l_fec_subgroup_originator.value_namespace = name_space;
        s2l_fec_subgroup_originator.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "s2l-fec-ctype")
    {
        s2l_fec_ctype = value;
        s2l_fec_ctype.value_namespace = name_space;
        s2l_fec_ctype.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "s2l-fec-vrf")
    {
        s2l_fec_vrf = value;
        s2l_fec_vrf.value_namespace = name_space;
        s2l_fec_vrf.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::CleanedLsp::S2l::FlexInfo::FlexFec::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "s2l-fec-subgroup-id")
    {
        s2l_fec_subgroup_id.yfilter = yfilter;
    }
    if(value_path == "s2l-fec-lsp-id")
    {
        s2l_fec_lsp_id.yfilter = yfilter;
    }
    if(value_path == "s2l-fec-tunnel-id")
    {
        s2l_fec_tunnel_id.yfilter = yfilter;
    }
    if(value_path == "s2l-fec-extended-tunnel-id")
    {
        s2l_fec_extended_tunnel_id.yfilter = yfilter;
    }
    if(value_path == "s2l-fec-source")
    {
        s2l_fec_source.yfilter = yfilter;
    }
    if(value_path == "s2l-fec-dest")
    {
        s2l_fec_dest.yfilter = yfilter;
    }
    if(value_path == "s2l-fec-p2mp-id")
    {
        s2l_fec_p2mp_id.yfilter = yfilter;
    }
    if(value_path == "s2l-fec-subgroup-originator")
    {
        s2l_fec_subgroup_originator.yfilter = yfilter;
    }
    if(value_path == "s2l-fec-ctype")
    {
        s2l_fec_ctype.yfilter = yfilter;
    }
    if(value_path == "s2l-fec-vrf")
    {
        s2l_fec_vrf.yfilter = yfilter;
    }
}

bool MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::CleanedLsp::S2l::FlexInfo::FlexFec::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "s2l-fec-subgroup-id" || name == "s2l-fec-lsp-id" || name == "s2l-fec-tunnel-id" || name == "s2l-fec-extended-tunnel-id" || name == "s2l-fec-source" || name == "s2l-fec-dest" || name == "s2l-fec-p2mp-id" || name == "s2l-fec-subgroup-originator" || name == "s2l-fec-ctype" || name == "s2l-fec-vrf")
        return true;
    return false;
}

MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::CleanedLsp::S2l::LspWrapInfo::LspWrapInfo()
    :
    lsp_wrap_protection_enable{YType::boolean, "lsp-wrap-protection-enable"},
    lsp_wrap_protection_label{YType::uint32, "lsp-wrap-protection-label"},
    reverse_egress_interface{YType::str, "reverse-egress-interface"},
    reverse_lsp_label{YType::uint32, "reverse-lsp-label"},
    lsp_wrap_protection_state{YType::enumeration, "lsp-wrap-protection-state"}
{

    yang_name = "lsp-wrap-info"; yang_parent_name = "s2l"; is_top_level_class = false; has_list_ancestor = true; 
}

MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::CleanedLsp::S2l::LspWrapInfo::~LspWrapInfo()
{
}

bool MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::CleanedLsp::S2l::LspWrapInfo::has_data() const
{
    if (is_presence_container) return true;
    return lsp_wrap_protection_enable.is_set
	|| lsp_wrap_protection_label.is_set
	|| reverse_egress_interface.is_set
	|| reverse_lsp_label.is_set
	|| lsp_wrap_protection_state.is_set;
}

bool MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::CleanedLsp::S2l::LspWrapInfo::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(lsp_wrap_protection_enable.yfilter)
	|| ydk::is_set(lsp_wrap_protection_label.yfilter)
	|| ydk::is_set(reverse_egress_interface.yfilter)
	|| ydk::is_set(reverse_lsp_label.yfilter)
	|| ydk::is_set(lsp_wrap_protection_state.yfilter);
}

std::string MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::CleanedLsp::S2l::LspWrapInfo::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "lsp-wrap-info";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::CleanedLsp::S2l::LspWrapInfo::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (lsp_wrap_protection_enable.is_set || is_set(lsp_wrap_protection_enable.yfilter)) leaf_name_data.push_back(lsp_wrap_protection_enable.get_name_leafdata());
    if (lsp_wrap_protection_label.is_set || is_set(lsp_wrap_protection_label.yfilter)) leaf_name_data.push_back(lsp_wrap_protection_label.get_name_leafdata());
    if (reverse_egress_interface.is_set || is_set(reverse_egress_interface.yfilter)) leaf_name_data.push_back(reverse_egress_interface.get_name_leafdata());
    if (reverse_lsp_label.is_set || is_set(reverse_lsp_label.yfilter)) leaf_name_data.push_back(reverse_lsp_label.get_name_leafdata());
    if (lsp_wrap_protection_state.is_set || is_set(lsp_wrap_protection_state.yfilter)) leaf_name_data.push_back(lsp_wrap_protection_state.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::CleanedLsp::S2l::LspWrapInfo::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::CleanedLsp::S2l::LspWrapInfo::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::CleanedLsp::S2l::LspWrapInfo::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "lsp-wrap-protection-enable")
    {
        lsp_wrap_protection_enable = value;
        lsp_wrap_protection_enable.value_namespace = name_space;
        lsp_wrap_protection_enable.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lsp-wrap-protection-label")
    {
        lsp_wrap_protection_label = value;
        lsp_wrap_protection_label.value_namespace = name_space;
        lsp_wrap_protection_label.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "reverse-egress-interface")
    {
        reverse_egress_interface = value;
        reverse_egress_interface.value_namespace = name_space;
        reverse_egress_interface.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "reverse-lsp-label")
    {
        reverse_lsp_label = value;
        reverse_lsp_label.value_namespace = name_space;
        reverse_lsp_label.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lsp-wrap-protection-state")
    {
        lsp_wrap_protection_state = value;
        lsp_wrap_protection_state.value_namespace = name_space;
        lsp_wrap_protection_state.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::CleanedLsp::S2l::LspWrapInfo::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "lsp-wrap-protection-enable")
    {
        lsp_wrap_protection_enable.yfilter = yfilter;
    }
    if(value_path == "lsp-wrap-protection-label")
    {
        lsp_wrap_protection_label.yfilter = yfilter;
    }
    if(value_path == "reverse-egress-interface")
    {
        reverse_egress_interface.yfilter = yfilter;
    }
    if(value_path == "reverse-lsp-label")
    {
        reverse_lsp_label.yfilter = yfilter;
    }
    if(value_path == "lsp-wrap-protection-state")
    {
        lsp_wrap_protection_state.yfilter = yfilter;
    }
}

bool MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::CleanedLsp::S2l::LspWrapInfo::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "lsp-wrap-protection-enable" || name == "lsp-wrap-protection-label" || name == "reverse-egress-interface" || name == "reverse-lsp-label" || name == "lsp-wrap-protection-state")
        return true;
    return false;
}

MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::CleanedLsp::S2l::DiversityInfo::DiversityInfo()
    :
    diversity_type{YType::enumeration, "diversity-type"}
{

    yang_name = "diversity-info"; yang_parent_name = "s2l"; is_top_level_class = false; has_list_ancestor = true; 
}

MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::CleanedLsp::S2l::DiversityInfo::~DiversityInfo()
{
}

bool MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::CleanedLsp::S2l::DiversityInfo::has_data() const
{
    if (is_presence_container) return true;
    return diversity_type.is_set;
}

bool MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::CleanedLsp::S2l::DiversityInfo::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(diversity_type.yfilter);
}

std::string MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::CleanedLsp::S2l::DiversityInfo::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "diversity-info";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::CleanedLsp::S2l::DiversityInfo::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (diversity_type.is_set || is_set(diversity_type.yfilter)) leaf_name_data.push_back(diversity_type.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::CleanedLsp::S2l::DiversityInfo::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::CleanedLsp::S2l::DiversityInfo::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::CleanedLsp::S2l::DiversityInfo::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "diversity-type")
    {
        diversity_type = value;
        diversity_type.value_namespace = name_space;
        diversity_type.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::CleanedLsp::S2l::DiversityInfo::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "diversity-type")
    {
        diversity_type.yfilter = yfilter;
    }
}

bool MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::CleanedLsp::S2l::DiversityInfo::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "diversity-type")
        return true;
    return false;
}

MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::CleanedLsp::S2l::AccumulatedPathMetrics::AccumulatedPathMetrics()
    :
    te_metric{YType::uint64, "te-metric"},
    igp_metric{YType::uint64, "igp-metric"},
    delay_metric{YType::uint64, "delay-metric"}
{

    yang_name = "accumulated-path-metrics"; yang_parent_name = "s2l"; is_top_level_class = false; has_list_ancestor = true; 
}

MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::CleanedLsp::S2l::AccumulatedPathMetrics::~AccumulatedPathMetrics()
{
}

bool MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::CleanedLsp::S2l::AccumulatedPathMetrics::has_data() const
{
    if (is_presence_container) return true;
    return te_metric.is_set
	|| igp_metric.is_set
	|| delay_metric.is_set;
}

bool MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::CleanedLsp::S2l::AccumulatedPathMetrics::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(te_metric.yfilter)
	|| ydk::is_set(igp_metric.yfilter)
	|| ydk::is_set(delay_metric.yfilter);
}

std::string MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::CleanedLsp::S2l::AccumulatedPathMetrics::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "accumulated-path-metrics";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::CleanedLsp::S2l::AccumulatedPathMetrics::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (te_metric.is_set || is_set(te_metric.yfilter)) leaf_name_data.push_back(te_metric.get_name_leafdata());
    if (igp_metric.is_set || is_set(igp_metric.yfilter)) leaf_name_data.push_back(igp_metric.get_name_leafdata());
    if (delay_metric.is_set || is_set(delay_metric.yfilter)) leaf_name_data.push_back(delay_metric.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::CleanedLsp::S2l::AccumulatedPathMetrics::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::CleanedLsp::S2l::AccumulatedPathMetrics::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::CleanedLsp::S2l::AccumulatedPathMetrics::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "te-metric")
    {
        te_metric = value;
        te_metric.value_namespace = name_space;
        te_metric.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "igp-metric")
    {
        igp_metric = value;
        igp_metric.value_namespace = name_space;
        igp_metric.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "delay-metric")
    {
        delay_metric = value;
        delay_metric.value_namespace = name_space;
        delay_metric.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::CleanedLsp::S2l::AccumulatedPathMetrics::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "te-metric")
    {
        te_metric.yfilter = yfilter;
    }
    if(value_path == "igp-metric")
    {
        igp_metric.yfilter = yfilter;
    }
    if(value_path == "delay-metric")
    {
        delay_metric.yfilter = yfilter;
    }
}

bool MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::CleanedLsp::S2l::AccumulatedPathMetrics::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "te-metric" || name == "igp-metric" || name == "delay-metric")
        return true;
    return false;
}

MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::CleanedLsp::S2l::AccumulatedReversePathMetrics::AccumulatedReversePathMetrics()
    :
    te_metric{YType::uint64, "te-metric"},
    igp_metric{YType::uint64, "igp-metric"},
    delay_metric{YType::uint64, "delay-metric"}
{

    yang_name = "accumulated-reverse-path-metrics"; yang_parent_name = "s2l"; is_top_level_class = false; has_list_ancestor = true; 
}

MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::CleanedLsp::S2l::AccumulatedReversePathMetrics::~AccumulatedReversePathMetrics()
{
}

bool MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::CleanedLsp::S2l::AccumulatedReversePathMetrics::has_data() const
{
    if (is_presence_container) return true;
    return te_metric.is_set
	|| igp_metric.is_set
	|| delay_metric.is_set;
}

bool MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::CleanedLsp::S2l::AccumulatedReversePathMetrics::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(te_metric.yfilter)
	|| ydk::is_set(igp_metric.yfilter)
	|| ydk::is_set(delay_metric.yfilter);
}

std::string MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::CleanedLsp::S2l::AccumulatedReversePathMetrics::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "accumulated-reverse-path-metrics";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::CleanedLsp::S2l::AccumulatedReversePathMetrics::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (te_metric.is_set || is_set(te_metric.yfilter)) leaf_name_data.push_back(te_metric.get_name_leafdata());
    if (igp_metric.is_set || is_set(igp_metric.yfilter)) leaf_name_data.push_back(igp_metric.get_name_leafdata());
    if (delay_metric.is_set || is_set(delay_metric.yfilter)) leaf_name_data.push_back(delay_metric.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::CleanedLsp::S2l::AccumulatedReversePathMetrics::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::CleanedLsp::S2l::AccumulatedReversePathMetrics::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::CleanedLsp::S2l::AccumulatedReversePathMetrics::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "te-metric")
    {
        te_metric = value;
        te_metric.value_namespace = name_space;
        te_metric.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "igp-metric")
    {
        igp_metric = value;
        igp_metric.value_namespace = name_space;
        igp_metric.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "delay-metric")
    {
        delay_metric = value;
        delay_metric.value_namespace = name_space;
        delay_metric.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::CleanedLsp::S2l::AccumulatedReversePathMetrics::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "te-metric")
    {
        te_metric.yfilter = yfilter;
    }
    if(value_path == "igp-metric")
    {
        igp_metric.yfilter = yfilter;
    }
    if(value_path == "delay-metric")
    {
        delay_metric.yfilter = yfilter;
    }
}

bool MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::CleanedLsp::S2l::AccumulatedReversePathMetrics::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "te-metric" || name == "igp-metric" || name == "delay-metric")
        return true;
    return false;
}

MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::CleanedLsp::S2l::S2lReverseLspSubObj::S2lReverseLspSubObj()
    :
    entry{YType::uint8, "entry"}
{

    yang_name = "s2l-reverse-lsp-sub-obj"; yang_parent_name = "s2l"; is_top_level_class = false; has_list_ancestor = true; 
}

MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::CleanedLsp::S2l::S2lReverseLspSubObj::~S2lReverseLspSubObj()
{
}

bool MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::CleanedLsp::S2l::S2lReverseLspSubObj::has_data() const
{
    if (is_presence_container) return true;
    return entry.is_set;
}

bool MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::CleanedLsp::S2l::S2lReverseLspSubObj::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(entry.yfilter);
}

std::string MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::CleanedLsp::S2l::S2lReverseLspSubObj::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "s2l-reverse-lsp-sub-obj";
    path_buffer << "[" << get_ylist_key() << "]";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::CleanedLsp::S2l::S2lReverseLspSubObj::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (entry.is_set || is_set(entry.yfilter)) leaf_name_data.push_back(entry.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::CleanedLsp::S2l::S2lReverseLspSubObj::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::CleanedLsp::S2l::S2lReverseLspSubObj::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::CleanedLsp::S2l::S2lReverseLspSubObj::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "entry")
    {
        entry = value;
        entry.value_namespace = name_space;
        entry.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::CleanedLsp::S2l::S2lReverseLspSubObj::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "entry")
    {
        entry.yfilter = yfilter;
    }
}

bool MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::CleanedLsp::S2l::S2lReverseLspSubObj::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "entry")
        return true;
    return false;
}

MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::CleanedLsp::S2l::SharedRiskLinkGroup::SharedRiskLinkGroup()
    :
    shared_risk_group{YType::uint32, "shared-risk-group"},
    srlg_name{YType::str, "srlg-name"}
{

    yang_name = "shared-risk-link-group"; yang_parent_name = "s2l"; is_top_level_class = false; has_list_ancestor = true; 
}

MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::CleanedLsp::S2l::SharedRiskLinkGroup::~SharedRiskLinkGroup()
{
}

bool MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::CleanedLsp::S2l::SharedRiskLinkGroup::has_data() const
{
    if (is_presence_container) return true;
    return shared_risk_group.is_set
	|| srlg_name.is_set;
}

bool MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::CleanedLsp::S2l::SharedRiskLinkGroup::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(shared_risk_group.yfilter)
	|| ydk::is_set(srlg_name.yfilter);
}

std::string MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::CleanedLsp::S2l::SharedRiskLinkGroup::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "shared-risk-link-group";
    path_buffer << "[" << get_ylist_key() << "]";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::CleanedLsp::S2l::SharedRiskLinkGroup::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (shared_risk_group.is_set || is_set(shared_risk_group.yfilter)) leaf_name_data.push_back(shared_risk_group.get_name_leafdata());
    if (srlg_name.is_set || is_set(srlg_name.yfilter)) leaf_name_data.push_back(srlg_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::CleanedLsp::S2l::SharedRiskLinkGroup::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::CleanedLsp::S2l::SharedRiskLinkGroup::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::CleanedLsp::S2l::SharedRiskLinkGroup::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "shared-risk-group")
    {
        shared_risk_group = value;
        shared_risk_group.value_namespace = name_space;
        shared_risk_group.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "srlg-name")
    {
        srlg_name = value;
        srlg_name.value_namespace = name_space;
        srlg_name.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::CleanedLsp::S2l::SharedRiskLinkGroup::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "shared-risk-group")
    {
        shared_risk_group.yfilter = yfilter;
    }
    if(value_path == "srlg-name")
    {
        srlg_name.yfilter = yfilter;
    }
}

bool MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::CleanedLsp::S2l::SharedRiskLinkGroup::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "shared-risk-group" || name == "srlg-name")
        return true;
    return false;
}

MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::CleanedLsp::S2l::OutEro::OutEro()
    :
    ero_type{YType::enumeration, "ero-type"}
        ,
    ipv4ero_sub_object(std::make_shared<MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::CleanedLsp::S2l::OutEro::Ipv4eroSubObject>())
    , unnumbered_ero_sub_object(std::make_shared<MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::CleanedLsp::S2l::OutEro::UnnumberedEroSubObject>())
{
    ipv4ero_sub_object->parent = this;
    unnumbered_ero_sub_object->parent = this;

    yang_name = "out-ero"; yang_parent_name = "s2l"; is_top_level_class = false; has_list_ancestor = true; 
}

MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::CleanedLsp::S2l::OutEro::~OutEro()
{
}

bool MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::CleanedLsp::S2l::OutEro::has_data() const
{
    if (is_presence_container) return true;
    return ero_type.is_set
	|| (ipv4ero_sub_object !=  nullptr && ipv4ero_sub_object->has_data())
	|| (unnumbered_ero_sub_object !=  nullptr && unnumbered_ero_sub_object->has_data());
}

bool MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::CleanedLsp::S2l::OutEro::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ero_type.yfilter)
	|| (ipv4ero_sub_object !=  nullptr && ipv4ero_sub_object->has_operation())
	|| (unnumbered_ero_sub_object !=  nullptr && unnumbered_ero_sub_object->has_operation());
}

std::string MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::CleanedLsp::S2l::OutEro::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "out-ero";
    path_buffer << "[" << get_ylist_key() << "]";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::CleanedLsp::S2l::OutEro::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ero_type.is_set || is_set(ero_type.yfilter)) leaf_name_data.push_back(ero_type.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::CleanedLsp::S2l::OutEro::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ipv4ero-sub-object")
    {
        if(ipv4ero_sub_object == nullptr)
        {
            ipv4ero_sub_object = std::make_shared<MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::CleanedLsp::S2l::OutEro::Ipv4eroSubObject>();
        }
        return ipv4ero_sub_object;
    }

    if(child_yang_name == "unnumbered-ero-sub-object")
    {
        if(unnumbered_ero_sub_object == nullptr)
        {
            unnumbered_ero_sub_object = std::make_shared<MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::CleanedLsp::S2l::OutEro::UnnumberedEroSubObject>();
        }
        return unnumbered_ero_sub_object;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::CleanedLsp::S2l::OutEro::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(ipv4ero_sub_object != nullptr)
    {
        _children["ipv4ero-sub-object"] = ipv4ero_sub_object;
    }

    if(unnumbered_ero_sub_object != nullptr)
    {
        _children["unnumbered-ero-sub-object"] = unnumbered_ero_sub_object;
    }

    return _children;
}

void MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::CleanedLsp::S2l::OutEro::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ero-type")
    {
        ero_type = value;
        ero_type.value_namespace = name_space;
        ero_type.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::CleanedLsp::S2l::OutEro::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ero-type")
    {
        ero_type.yfilter = yfilter;
    }
}

bool MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::CleanedLsp::S2l::OutEro::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ipv4ero-sub-object" || name == "unnumbered-ero-sub-object" || name == "ero-type")
        return true;
    return false;
}

MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::CleanedLsp::S2l::OutEro::Ipv4eroSubObject::Ipv4eroSubObject()
    :
    is_strict_route{YType::boolean, "is-strict-route"},
    ero_address{YType::str, "ero-address"},
    prefix_length{YType::uint8, "prefix-length"}
{

    yang_name = "ipv4ero-sub-object"; yang_parent_name = "out-ero"; is_top_level_class = false; has_list_ancestor = true; 
}

MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::CleanedLsp::S2l::OutEro::Ipv4eroSubObject::~Ipv4eroSubObject()
{
}

bool MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::CleanedLsp::S2l::OutEro::Ipv4eroSubObject::has_data() const
{
    if (is_presence_container) return true;
    return is_strict_route.is_set
	|| ero_address.is_set
	|| prefix_length.is_set;
}

bool MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::CleanedLsp::S2l::OutEro::Ipv4eroSubObject::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(is_strict_route.yfilter)
	|| ydk::is_set(ero_address.yfilter)
	|| ydk::is_set(prefix_length.yfilter);
}

std::string MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::CleanedLsp::S2l::OutEro::Ipv4eroSubObject::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv4ero-sub-object";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::CleanedLsp::S2l::OutEro::Ipv4eroSubObject::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (is_strict_route.is_set || is_set(is_strict_route.yfilter)) leaf_name_data.push_back(is_strict_route.get_name_leafdata());
    if (ero_address.is_set || is_set(ero_address.yfilter)) leaf_name_data.push_back(ero_address.get_name_leafdata());
    if (prefix_length.is_set || is_set(prefix_length.yfilter)) leaf_name_data.push_back(prefix_length.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::CleanedLsp::S2l::OutEro::Ipv4eroSubObject::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::CleanedLsp::S2l::OutEro::Ipv4eroSubObject::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::CleanedLsp::S2l::OutEro::Ipv4eroSubObject::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "is-strict-route")
    {
        is_strict_route = value;
        is_strict_route.value_namespace = name_space;
        is_strict_route.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ero-address")
    {
        ero_address = value;
        ero_address.value_namespace = name_space;
        ero_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "prefix-length")
    {
        prefix_length = value;
        prefix_length.value_namespace = name_space;
        prefix_length.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::CleanedLsp::S2l::OutEro::Ipv4eroSubObject::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "is-strict-route")
    {
        is_strict_route.yfilter = yfilter;
    }
    if(value_path == "ero-address")
    {
        ero_address.yfilter = yfilter;
    }
    if(value_path == "prefix-length")
    {
        prefix_length.yfilter = yfilter;
    }
}

bool MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::CleanedLsp::S2l::OutEro::Ipv4eroSubObject::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "is-strict-route" || name == "ero-address" || name == "prefix-length")
        return true;
    return false;
}

MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::CleanedLsp::S2l::OutEro::UnnumberedEroSubObject::UnnumberedEroSubObject()
    :
    is_strict_route{YType::boolean, "is-strict-route"},
    ero_interface_id{YType::uint32, "ero-interface-id"},
    ero_router_id{YType::str, "ero-router-id"},
    status{YType::enumeration, "status"}
{

    yang_name = "unnumbered-ero-sub-object"; yang_parent_name = "out-ero"; is_top_level_class = false; has_list_ancestor = true; 
}

MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::CleanedLsp::S2l::OutEro::UnnumberedEroSubObject::~UnnumberedEroSubObject()
{
}

bool MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::CleanedLsp::S2l::OutEro::UnnumberedEroSubObject::has_data() const
{
    if (is_presence_container) return true;
    return is_strict_route.is_set
	|| ero_interface_id.is_set
	|| ero_router_id.is_set
	|| status.is_set;
}

bool MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::CleanedLsp::S2l::OutEro::UnnumberedEroSubObject::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(is_strict_route.yfilter)
	|| ydk::is_set(ero_interface_id.yfilter)
	|| ydk::is_set(ero_router_id.yfilter)
	|| ydk::is_set(status.yfilter);
}

std::string MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::CleanedLsp::S2l::OutEro::UnnumberedEroSubObject::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "unnumbered-ero-sub-object";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::CleanedLsp::S2l::OutEro::UnnumberedEroSubObject::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (is_strict_route.is_set || is_set(is_strict_route.yfilter)) leaf_name_data.push_back(is_strict_route.get_name_leafdata());
    if (ero_interface_id.is_set || is_set(ero_interface_id.yfilter)) leaf_name_data.push_back(ero_interface_id.get_name_leafdata());
    if (ero_router_id.is_set || is_set(ero_router_id.yfilter)) leaf_name_data.push_back(ero_router_id.get_name_leafdata());
    if (status.is_set || is_set(status.yfilter)) leaf_name_data.push_back(status.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::CleanedLsp::S2l::OutEro::UnnumberedEroSubObject::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::CleanedLsp::S2l::OutEro::UnnumberedEroSubObject::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::CleanedLsp::S2l::OutEro::UnnumberedEroSubObject::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "is-strict-route")
    {
        is_strict_route = value;
        is_strict_route.value_namespace = name_space;
        is_strict_route.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ero-interface-id")
    {
        ero_interface_id = value;
        ero_interface_id.value_namespace = name_space;
        ero_interface_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ero-router-id")
    {
        ero_router_id = value;
        ero_router_id.value_namespace = name_space;
        ero_router_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "status")
    {
        status = value;
        status.value_namespace = name_space;
        status.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::CleanedLsp::S2l::OutEro::UnnumberedEroSubObject::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "is-strict-route")
    {
        is_strict_route.yfilter = yfilter;
    }
    if(value_path == "ero-interface-id")
    {
        ero_interface_id.yfilter = yfilter;
    }
    if(value_path == "ero-router-id")
    {
        ero_router_id.yfilter = yfilter;
    }
    if(value_path == "status")
    {
        status.yfilter = yfilter;
    }
}

bool MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::CleanedLsp::S2l::OutEro::UnnumberedEroSubObject::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "is-strict-route" || name == "ero-interface-id" || name == "ero-router-id" || name == "status")
        return true;
    return false;
}

MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::CleanedLsp::S2l::InEro::InEro()
    :
    ero_type{YType::enumeration, "ero-type"}
        ,
    ipv4ero_sub_object(std::make_shared<MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::CleanedLsp::S2l::InEro::Ipv4eroSubObject>())
    , unnumbered_ero_sub_object(std::make_shared<MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::CleanedLsp::S2l::InEro::UnnumberedEroSubObject>())
{
    ipv4ero_sub_object->parent = this;
    unnumbered_ero_sub_object->parent = this;

    yang_name = "in-ero"; yang_parent_name = "s2l"; is_top_level_class = false; has_list_ancestor = true; 
}

MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::CleanedLsp::S2l::InEro::~InEro()
{
}

bool MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::CleanedLsp::S2l::InEro::has_data() const
{
    if (is_presence_container) return true;
    return ero_type.is_set
	|| (ipv4ero_sub_object !=  nullptr && ipv4ero_sub_object->has_data())
	|| (unnumbered_ero_sub_object !=  nullptr && unnumbered_ero_sub_object->has_data());
}

bool MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::CleanedLsp::S2l::InEro::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ero_type.yfilter)
	|| (ipv4ero_sub_object !=  nullptr && ipv4ero_sub_object->has_operation())
	|| (unnumbered_ero_sub_object !=  nullptr && unnumbered_ero_sub_object->has_operation());
}

std::string MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::CleanedLsp::S2l::InEro::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "in-ero";
    path_buffer << "[" << get_ylist_key() << "]";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::CleanedLsp::S2l::InEro::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ero_type.is_set || is_set(ero_type.yfilter)) leaf_name_data.push_back(ero_type.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::CleanedLsp::S2l::InEro::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ipv4ero-sub-object")
    {
        if(ipv4ero_sub_object == nullptr)
        {
            ipv4ero_sub_object = std::make_shared<MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::CleanedLsp::S2l::InEro::Ipv4eroSubObject>();
        }
        return ipv4ero_sub_object;
    }

    if(child_yang_name == "unnumbered-ero-sub-object")
    {
        if(unnumbered_ero_sub_object == nullptr)
        {
            unnumbered_ero_sub_object = std::make_shared<MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::CleanedLsp::S2l::InEro::UnnumberedEroSubObject>();
        }
        return unnumbered_ero_sub_object;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::CleanedLsp::S2l::InEro::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(ipv4ero_sub_object != nullptr)
    {
        _children["ipv4ero-sub-object"] = ipv4ero_sub_object;
    }

    if(unnumbered_ero_sub_object != nullptr)
    {
        _children["unnumbered-ero-sub-object"] = unnumbered_ero_sub_object;
    }

    return _children;
}

void MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::CleanedLsp::S2l::InEro::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ero-type")
    {
        ero_type = value;
        ero_type.value_namespace = name_space;
        ero_type.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::CleanedLsp::S2l::InEro::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ero-type")
    {
        ero_type.yfilter = yfilter;
    }
}

bool MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::CleanedLsp::S2l::InEro::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ipv4ero-sub-object" || name == "unnumbered-ero-sub-object" || name == "ero-type")
        return true;
    return false;
}

MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::CleanedLsp::S2l::InEro::Ipv4eroSubObject::Ipv4eroSubObject()
    :
    is_strict_route{YType::boolean, "is-strict-route"},
    ero_address{YType::str, "ero-address"},
    prefix_length{YType::uint8, "prefix-length"}
{

    yang_name = "ipv4ero-sub-object"; yang_parent_name = "in-ero"; is_top_level_class = false; has_list_ancestor = true; 
}

MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::CleanedLsp::S2l::InEro::Ipv4eroSubObject::~Ipv4eroSubObject()
{
}

bool MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::CleanedLsp::S2l::InEro::Ipv4eroSubObject::has_data() const
{
    if (is_presence_container) return true;
    return is_strict_route.is_set
	|| ero_address.is_set
	|| prefix_length.is_set;
}

bool MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::CleanedLsp::S2l::InEro::Ipv4eroSubObject::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(is_strict_route.yfilter)
	|| ydk::is_set(ero_address.yfilter)
	|| ydk::is_set(prefix_length.yfilter);
}

std::string MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::CleanedLsp::S2l::InEro::Ipv4eroSubObject::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv4ero-sub-object";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::CleanedLsp::S2l::InEro::Ipv4eroSubObject::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (is_strict_route.is_set || is_set(is_strict_route.yfilter)) leaf_name_data.push_back(is_strict_route.get_name_leafdata());
    if (ero_address.is_set || is_set(ero_address.yfilter)) leaf_name_data.push_back(ero_address.get_name_leafdata());
    if (prefix_length.is_set || is_set(prefix_length.yfilter)) leaf_name_data.push_back(prefix_length.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::CleanedLsp::S2l::InEro::Ipv4eroSubObject::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::CleanedLsp::S2l::InEro::Ipv4eroSubObject::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::CleanedLsp::S2l::InEro::Ipv4eroSubObject::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "is-strict-route")
    {
        is_strict_route = value;
        is_strict_route.value_namespace = name_space;
        is_strict_route.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ero-address")
    {
        ero_address = value;
        ero_address.value_namespace = name_space;
        ero_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "prefix-length")
    {
        prefix_length = value;
        prefix_length.value_namespace = name_space;
        prefix_length.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::CleanedLsp::S2l::InEro::Ipv4eroSubObject::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "is-strict-route")
    {
        is_strict_route.yfilter = yfilter;
    }
    if(value_path == "ero-address")
    {
        ero_address.yfilter = yfilter;
    }
    if(value_path == "prefix-length")
    {
        prefix_length.yfilter = yfilter;
    }
}

bool MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::CleanedLsp::S2l::InEro::Ipv4eroSubObject::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "is-strict-route" || name == "ero-address" || name == "prefix-length")
        return true;
    return false;
}

MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::CleanedLsp::S2l::InEro::UnnumberedEroSubObject::UnnumberedEroSubObject()
    :
    is_strict_route{YType::boolean, "is-strict-route"},
    ero_interface_id{YType::uint32, "ero-interface-id"},
    ero_router_id{YType::str, "ero-router-id"},
    status{YType::enumeration, "status"}
{

    yang_name = "unnumbered-ero-sub-object"; yang_parent_name = "in-ero"; is_top_level_class = false; has_list_ancestor = true; 
}

MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::CleanedLsp::S2l::InEro::UnnumberedEroSubObject::~UnnumberedEroSubObject()
{
}

bool MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::CleanedLsp::S2l::InEro::UnnumberedEroSubObject::has_data() const
{
    if (is_presence_container) return true;
    return is_strict_route.is_set
	|| ero_interface_id.is_set
	|| ero_router_id.is_set
	|| status.is_set;
}

bool MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::CleanedLsp::S2l::InEro::UnnumberedEroSubObject::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(is_strict_route.yfilter)
	|| ydk::is_set(ero_interface_id.yfilter)
	|| ydk::is_set(ero_router_id.yfilter)
	|| ydk::is_set(status.yfilter);
}

std::string MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::CleanedLsp::S2l::InEro::UnnumberedEroSubObject::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "unnumbered-ero-sub-object";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::CleanedLsp::S2l::InEro::UnnumberedEroSubObject::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (is_strict_route.is_set || is_set(is_strict_route.yfilter)) leaf_name_data.push_back(is_strict_route.get_name_leafdata());
    if (ero_interface_id.is_set || is_set(ero_interface_id.yfilter)) leaf_name_data.push_back(ero_interface_id.get_name_leafdata());
    if (ero_router_id.is_set || is_set(ero_router_id.yfilter)) leaf_name_data.push_back(ero_router_id.get_name_leafdata());
    if (status.is_set || is_set(status.yfilter)) leaf_name_data.push_back(status.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::CleanedLsp::S2l::InEro::UnnumberedEroSubObject::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::CleanedLsp::S2l::InEro::UnnumberedEroSubObject::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::CleanedLsp::S2l::InEro::UnnumberedEroSubObject::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "is-strict-route")
    {
        is_strict_route = value;
        is_strict_route.value_namespace = name_space;
        is_strict_route.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ero-interface-id")
    {
        ero_interface_id = value;
        ero_interface_id.value_namespace = name_space;
        ero_interface_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ero-router-id")
    {
        ero_router_id = value;
        ero_router_id.value_namespace = name_space;
        ero_router_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "status")
    {
        status = value;
        status.value_namespace = name_space;
        status.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::CleanedLsp::S2l::InEro::UnnumberedEroSubObject::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "is-strict-route")
    {
        is_strict_route.yfilter = yfilter;
    }
    if(value_path == "ero-interface-id")
    {
        ero_interface_id.yfilter = yfilter;
    }
    if(value_path == "ero-router-id")
    {
        ero_router_id.yfilter = yfilter;
    }
    if(value_path == "status")
    {
        status.yfilter = yfilter;
    }
}

bool MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::CleanedLsp::S2l::InEro::UnnumberedEroSubObject::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "is-strict-route" || name == "ero-interface-id" || name == "ero-router-id" || name == "status")
        return true;
    return false;
}

MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::CleanedLsp::S2l::PathRro::PathRro()
    :
    rro_type{YType::enumeration, "rro-type"}
        ,
    ipv4rro_sub_object(std::make_shared<MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::CleanedLsp::S2l::PathRro::Ipv4rroSubObject>())
    , label_rro_sub_object(std::make_shared<MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::CleanedLsp::S2l::PathRro::LabelRroSubObject>())
    , unnumbered_rro_sub_object(std::make_shared<MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::CleanedLsp::S2l::PathRro::UnnumberedRroSubObject>())
    , srlg_rro_sub_object(std::make_shared<MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::CleanedLsp::S2l::PathRro::SrlgRroSubObject>())
{
    ipv4rro_sub_object->parent = this;
    label_rro_sub_object->parent = this;
    unnumbered_rro_sub_object->parent = this;
    srlg_rro_sub_object->parent = this;

    yang_name = "path-rro"; yang_parent_name = "s2l"; is_top_level_class = false; has_list_ancestor = true; 
}

MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::CleanedLsp::S2l::PathRro::~PathRro()
{
}

bool MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::CleanedLsp::S2l::PathRro::has_data() const
{
    if (is_presence_container) return true;
    return rro_type.is_set
	|| (ipv4rro_sub_object !=  nullptr && ipv4rro_sub_object->has_data())
	|| (label_rro_sub_object !=  nullptr && label_rro_sub_object->has_data())
	|| (unnumbered_rro_sub_object !=  nullptr && unnumbered_rro_sub_object->has_data())
	|| (srlg_rro_sub_object !=  nullptr && srlg_rro_sub_object->has_data());
}

bool MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::CleanedLsp::S2l::PathRro::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(rro_type.yfilter)
	|| (ipv4rro_sub_object !=  nullptr && ipv4rro_sub_object->has_operation())
	|| (label_rro_sub_object !=  nullptr && label_rro_sub_object->has_operation())
	|| (unnumbered_rro_sub_object !=  nullptr && unnumbered_rro_sub_object->has_operation())
	|| (srlg_rro_sub_object !=  nullptr && srlg_rro_sub_object->has_operation());
}

std::string MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::CleanedLsp::S2l::PathRro::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "path-rro";
    path_buffer << "[" << get_ylist_key() << "]";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::CleanedLsp::S2l::PathRro::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (rro_type.is_set || is_set(rro_type.yfilter)) leaf_name_data.push_back(rro_type.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::CleanedLsp::S2l::PathRro::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ipv4rro-sub-object")
    {
        if(ipv4rro_sub_object == nullptr)
        {
            ipv4rro_sub_object = std::make_shared<MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::CleanedLsp::S2l::PathRro::Ipv4rroSubObject>();
        }
        return ipv4rro_sub_object;
    }

    if(child_yang_name == "label-rro-sub-object")
    {
        if(label_rro_sub_object == nullptr)
        {
            label_rro_sub_object = std::make_shared<MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::CleanedLsp::S2l::PathRro::LabelRroSubObject>();
        }
        return label_rro_sub_object;
    }

    if(child_yang_name == "unnumbered-rro-sub-object")
    {
        if(unnumbered_rro_sub_object == nullptr)
        {
            unnumbered_rro_sub_object = std::make_shared<MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::CleanedLsp::S2l::PathRro::UnnumberedRroSubObject>();
        }
        return unnumbered_rro_sub_object;
    }

    if(child_yang_name == "srlg-rro-sub-object")
    {
        if(srlg_rro_sub_object == nullptr)
        {
            srlg_rro_sub_object = std::make_shared<MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::CleanedLsp::S2l::PathRro::SrlgRroSubObject>();
        }
        return srlg_rro_sub_object;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::CleanedLsp::S2l::PathRro::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(ipv4rro_sub_object != nullptr)
    {
        _children["ipv4rro-sub-object"] = ipv4rro_sub_object;
    }

    if(label_rro_sub_object != nullptr)
    {
        _children["label-rro-sub-object"] = label_rro_sub_object;
    }

    if(unnumbered_rro_sub_object != nullptr)
    {
        _children["unnumbered-rro-sub-object"] = unnumbered_rro_sub_object;
    }

    if(srlg_rro_sub_object != nullptr)
    {
        _children["srlg-rro-sub-object"] = srlg_rro_sub_object;
    }

    return _children;
}

void MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::CleanedLsp::S2l::PathRro::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "rro-type")
    {
        rro_type = value;
        rro_type.value_namespace = name_space;
        rro_type.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::CleanedLsp::S2l::PathRro::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "rro-type")
    {
        rro_type.yfilter = yfilter;
    }
}

bool MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::CleanedLsp::S2l::PathRro::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ipv4rro-sub-object" || name == "label-rro-sub-object" || name == "unnumbered-rro-sub-object" || name == "srlg-rro-sub-object" || name == "rro-type")
        return true;
    return false;
}

MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::CleanedLsp::S2l::PathRro::Ipv4rroSubObject::Ipv4rroSubObject()
    :
    rro_address{YType::str, "rro-address"}
        ,
    flags(std::make_shared<MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::CleanedLsp::S2l::PathRro::Ipv4rroSubObject::Flags>())
{
    flags->parent = this;

    yang_name = "ipv4rro-sub-object"; yang_parent_name = "path-rro"; is_top_level_class = false; has_list_ancestor = true; 
}

MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::CleanedLsp::S2l::PathRro::Ipv4rroSubObject::~Ipv4rroSubObject()
{
}

bool MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::CleanedLsp::S2l::PathRro::Ipv4rroSubObject::has_data() const
{
    if (is_presence_container) return true;
    return rro_address.is_set
	|| (flags !=  nullptr && flags->has_data());
}

bool MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::CleanedLsp::S2l::PathRro::Ipv4rroSubObject::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(rro_address.yfilter)
	|| (flags !=  nullptr && flags->has_operation());
}

std::string MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::CleanedLsp::S2l::PathRro::Ipv4rroSubObject::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv4rro-sub-object";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::CleanedLsp::S2l::PathRro::Ipv4rroSubObject::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (rro_address.is_set || is_set(rro_address.yfilter)) leaf_name_data.push_back(rro_address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::CleanedLsp::S2l::PathRro::Ipv4rroSubObject::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "flags")
    {
        if(flags == nullptr)
        {
            flags = std::make_shared<MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::CleanedLsp::S2l::PathRro::Ipv4rroSubObject::Flags>();
        }
        return flags;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::CleanedLsp::S2l::PathRro::Ipv4rroSubObject::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(flags != nullptr)
    {
        _children["flags"] = flags;
    }

    return _children;
}

void MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::CleanedLsp::S2l::PathRro::Ipv4rroSubObject::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "rro-address")
    {
        rro_address = value;
        rro_address.value_namespace = name_space;
        rro_address.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::CleanedLsp::S2l::PathRro::Ipv4rroSubObject::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "rro-address")
    {
        rro_address.yfilter = yfilter;
    }
}

bool MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::CleanedLsp::S2l::PathRro::Ipv4rroSubObject::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "flags" || name == "rro-address")
        return true;
    return false;
}

MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::CleanedLsp::S2l::PathRro::Ipv4rroSubObject::Flags::Flags()
    :
    is_protection_available{YType::boolean, "is-protection-available"},
    is_protection_in_use{YType::boolean, "is-protection-in-use"},
    is_bandwidth_protected{YType::boolean, "is-bandwidth-protected"},
    is_node_protection_available{YType::boolean, "is-node-protection-available"},
    is_node_id{YType::boolean, "is-node-id"}
{

    yang_name = "flags"; yang_parent_name = "ipv4rro-sub-object"; is_top_level_class = false; has_list_ancestor = true; 
}

MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::CleanedLsp::S2l::PathRro::Ipv4rroSubObject::Flags::~Flags()
{
}

bool MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::CleanedLsp::S2l::PathRro::Ipv4rroSubObject::Flags::has_data() const
{
    if (is_presence_container) return true;
    return is_protection_available.is_set
	|| is_protection_in_use.is_set
	|| is_bandwidth_protected.is_set
	|| is_node_protection_available.is_set
	|| is_node_id.is_set;
}

bool MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::CleanedLsp::S2l::PathRro::Ipv4rroSubObject::Flags::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(is_protection_available.yfilter)
	|| ydk::is_set(is_protection_in_use.yfilter)
	|| ydk::is_set(is_bandwidth_protected.yfilter)
	|| ydk::is_set(is_node_protection_available.yfilter)
	|| ydk::is_set(is_node_id.yfilter);
}

std::string MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::CleanedLsp::S2l::PathRro::Ipv4rroSubObject::Flags::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "flags";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::CleanedLsp::S2l::PathRro::Ipv4rroSubObject::Flags::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (is_protection_available.is_set || is_set(is_protection_available.yfilter)) leaf_name_data.push_back(is_protection_available.get_name_leafdata());
    if (is_protection_in_use.is_set || is_set(is_protection_in_use.yfilter)) leaf_name_data.push_back(is_protection_in_use.get_name_leafdata());
    if (is_bandwidth_protected.is_set || is_set(is_bandwidth_protected.yfilter)) leaf_name_data.push_back(is_bandwidth_protected.get_name_leafdata());
    if (is_node_protection_available.is_set || is_set(is_node_protection_available.yfilter)) leaf_name_data.push_back(is_node_protection_available.get_name_leafdata());
    if (is_node_id.is_set || is_set(is_node_id.yfilter)) leaf_name_data.push_back(is_node_id.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::CleanedLsp::S2l::PathRro::Ipv4rroSubObject::Flags::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::CleanedLsp::S2l::PathRro::Ipv4rroSubObject::Flags::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::CleanedLsp::S2l::PathRro::Ipv4rroSubObject::Flags::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "is-protection-available")
    {
        is_protection_available = value;
        is_protection_available.value_namespace = name_space;
        is_protection_available.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-protection-in-use")
    {
        is_protection_in_use = value;
        is_protection_in_use.value_namespace = name_space;
        is_protection_in_use.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-bandwidth-protected")
    {
        is_bandwidth_protected = value;
        is_bandwidth_protected.value_namespace = name_space;
        is_bandwidth_protected.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-node-protection-available")
    {
        is_node_protection_available = value;
        is_node_protection_available.value_namespace = name_space;
        is_node_protection_available.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-node-id")
    {
        is_node_id = value;
        is_node_id.value_namespace = name_space;
        is_node_id.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::CleanedLsp::S2l::PathRro::Ipv4rroSubObject::Flags::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "is-protection-available")
    {
        is_protection_available.yfilter = yfilter;
    }
    if(value_path == "is-protection-in-use")
    {
        is_protection_in_use.yfilter = yfilter;
    }
    if(value_path == "is-bandwidth-protected")
    {
        is_bandwidth_protected.yfilter = yfilter;
    }
    if(value_path == "is-node-protection-available")
    {
        is_node_protection_available.yfilter = yfilter;
    }
    if(value_path == "is-node-id")
    {
        is_node_id.yfilter = yfilter;
    }
}

bool MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::CleanedLsp::S2l::PathRro::Ipv4rroSubObject::Flags::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "is-protection-available" || name == "is-protection-in-use" || name == "is-bandwidth-protected" || name == "is-node-protection-available" || name == "is-node-id")
        return true;
    return false;
}

MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::CleanedLsp::S2l::PathRro::LabelRroSubObject::LabelRroSubObject()
    :
    label{YType::uint32, "label"},
    is_label_variable_length{YType::boolean, "is-label-variable-length"}
        ,
    flags(std::make_shared<MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::CleanedLsp::S2l::PathRro::LabelRroSubObject::Flags>())
    , variable_length_label(this, {})
{
    flags->parent = this;

    yang_name = "label-rro-sub-object"; yang_parent_name = "path-rro"; is_top_level_class = false; has_list_ancestor = true; 
}

MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::CleanedLsp::S2l::PathRro::LabelRroSubObject::~LabelRroSubObject()
{
}

bool MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::CleanedLsp::S2l::PathRro::LabelRroSubObject::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<variable_length_label.len(); index++)
    {
        if(variable_length_label[index]->has_data())
            return true;
    }
    return label.is_set
	|| is_label_variable_length.is_set
	|| (flags !=  nullptr && flags->has_data());
}

bool MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::CleanedLsp::S2l::PathRro::LabelRroSubObject::has_operation() const
{
    for (std::size_t index=0; index<variable_length_label.len(); index++)
    {
        if(variable_length_label[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(label.yfilter)
	|| ydk::is_set(is_label_variable_length.yfilter)
	|| (flags !=  nullptr && flags->has_operation());
}

std::string MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::CleanedLsp::S2l::PathRro::LabelRroSubObject::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "label-rro-sub-object";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::CleanedLsp::S2l::PathRro::LabelRroSubObject::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (label.is_set || is_set(label.yfilter)) leaf_name_data.push_back(label.get_name_leafdata());
    if (is_label_variable_length.is_set || is_set(is_label_variable_length.yfilter)) leaf_name_data.push_back(is_label_variable_length.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::CleanedLsp::S2l::PathRro::LabelRroSubObject::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "flags")
    {
        if(flags == nullptr)
        {
            flags = std::make_shared<MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::CleanedLsp::S2l::PathRro::LabelRroSubObject::Flags>();
        }
        return flags;
    }

    if(child_yang_name == "variable-length-label")
    {
        auto ent_ = std::make_shared<MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::CleanedLsp::S2l::PathRro::LabelRroSubObject::VariableLengthLabel>();
        ent_->parent = this;
        variable_length_label.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::CleanedLsp::S2l::PathRro::LabelRroSubObject::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(flags != nullptr)
    {
        _children["flags"] = flags;
    }

    count_ = 0;
    for (auto ent_ : variable_length_label.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::CleanedLsp::S2l::PathRro::LabelRroSubObject::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "label")
    {
        label = value;
        label.value_namespace = name_space;
        label.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-label-variable-length")
    {
        is_label_variable_length = value;
        is_label_variable_length.value_namespace = name_space;
        is_label_variable_length.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::CleanedLsp::S2l::PathRro::LabelRroSubObject::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "label")
    {
        label.yfilter = yfilter;
    }
    if(value_path == "is-label-variable-length")
    {
        is_label_variable_length.yfilter = yfilter;
    }
}

bool MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::CleanedLsp::S2l::PathRro::LabelRroSubObject::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "flags" || name == "variable-length-label" || name == "label" || name == "is-label-variable-length")
        return true;
    return false;
}

MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::CleanedLsp::S2l::PathRro::LabelRroSubObject::Flags::Flags()
    :
    is_global_label{YType::boolean, "is-global-label"}
{

    yang_name = "flags"; yang_parent_name = "label-rro-sub-object"; is_top_level_class = false; has_list_ancestor = true; 
}

MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::CleanedLsp::S2l::PathRro::LabelRroSubObject::Flags::~Flags()
{
}

bool MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::CleanedLsp::S2l::PathRro::LabelRroSubObject::Flags::has_data() const
{
    if (is_presence_container) return true;
    return is_global_label.is_set;
}

bool MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::CleanedLsp::S2l::PathRro::LabelRroSubObject::Flags::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(is_global_label.yfilter);
}

std::string MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::CleanedLsp::S2l::PathRro::LabelRroSubObject::Flags::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "flags";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::CleanedLsp::S2l::PathRro::LabelRroSubObject::Flags::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (is_global_label.is_set || is_set(is_global_label.yfilter)) leaf_name_data.push_back(is_global_label.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::CleanedLsp::S2l::PathRro::LabelRroSubObject::Flags::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::CleanedLsp::S2l::PathRro::LabelRroSubObject::Flags::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::CleanedLsp::S2l::PathRro::LabelRroSubObject::Flags::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "is-global-label")
    {
        is_global_label = value;
        is_global_label.value_namespace = name_space;
        is_global_label.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::CleanedLsp::S2l::PathRro::LabelRroSubObject::Flags::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "is-global-label")
    {
        is_global_label.yfilter = yfilter;
    }
}

bool MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::CleanedLsp::S2l::PathRro::LabelRroSubObject::Flags::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "is-global-label")
        return true;
    return false;
}

MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::CleanedLsp::S2l::PathRro::LabelRroSubObject::VariableLengthLabel::VariableLengthLabel()
    :
    entry{YType::uint32, "entry"}
{

    yang_name = "variable-length-label"; yang_parent_name = "label-rro-sub-object"; is_top_level_class = false; has_list_ancestor = true; 
}

MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::CleanedLsp::S2l::PathRro::LabelRroSubObject::VariableLengthLabel::~VariableLengthLabel()
{
}

bool MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::CleanedLsp::S2l::PathRro::LabelRroSubObject::VariableLengthLabel::has_data() const
{
    if (is_presence_container) return true;
    return entry.is_set;
}

bool MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::CleanedLsp::S2l::PathRro::LabelRroSubObject::VariableLengthLabel::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(entry.yfilter);
}

std::string MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::CleanedLsp::S2l::PathRro::LabelRroSubObject::VariableLengthLabel::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "variable-length-label";
    path_buffer << "[" << get_ylist_key() << "]";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::CleanedLsp::S2l::PathRro::LabelRroSubObject::VariableLengthLabel::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (entry.is_set || is_set(entry.yfilter)) leaf_name_data.push_back(entry.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::CleanedLsp::S2l::PathRro::LabelRroSubObject::VariableLengthLabel::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::CleanedLsp::S2l::PathRro::LabelRroSubObject::VariableLengthLabel::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::CleanedLsp::S2l::PathRro::LabelRroSubObject::VariableLengthLabel::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "entry")
    {
        entry = value;
        entry.value_namespace = name_space;
        entry.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::CleanedLsp::S2l::PathRro::LabelRroSubObject::VariableLengthLabel::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "entry")
    {
        entry.yfilter = yfilter;
    }
}

bool MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::CleanedLsp::S2l::PathRro::LabelRroSubObject::VariableLengthLabel::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "entry")
        return true;
    return false;
}

MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::CleanedLsp::S2l::PathRro::UnnumberedRroSubObject::UnnumberedRroSubObject()
    :
    interface_address{YType::str, "interface-address"},
    interface_id{YType::uint32, "interface-id"}
        ,
    flags(std::make_shared<MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::CleanedLsp::S2l::PathRro::UnnumberedRroSubObject::Flags>())
{
    flags->parent = this;

    yang_name = "unnumbered-rro-sub-object"; yang_parent_name = "path-rro"; is_top_level_class = false; has_list_ancestor = true; 
}

MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::CleanedLsp::S2l::PathRro::UnnumberedRroSubObject::~UnnumberedRroSubObject()
{
}

bool MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::CleanedLsp::S2l::PathRro::UnnumberedRroSubObject::has_data() const
{
    if (is_presence_container) return true;
    return interface_address.is_set
	|| interface_id.is_set
	|| (flags !=  nullptr && flags->has_data());
}

bool MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::CleanedLsp::S2l::PathRro::UnnumberedRroSubObject::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(interface_address.yfilter)
	|| ydk::is_set(interface_id.yfilter)
	|| (flags !=  nullptr && flags->has_operation());
}

std::string MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::CleanedLsp::S2l::PathRro::UnnumberedRroSubObject::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "unnumbered-rro-sub-object";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::CleanedLsp::S2l::PathRro::UnnumberedRroSubObject::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interface_address.is_set || is_set(interface_address.yfilter)) leaf_name_data.push_back(interface_address.get_name_leafdata());
    if (interface_id.is_set || is_set(interface_id.yfilter)) leaf_name_data.push_back(interface_id.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::CleanedLsp::S2l::PathRro::UnnumberedRroSubObject::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "flags")
    {
        if(flags == nullptr)
        {
            flags = std::make_shared<MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::CleanedLsp::S2l::PathRro::UnnumberedRroSubObject::Flags>();
        }
        return flags;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::CleanedLsp::S2l::PathRro::UnnumberedRroSubObject::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(flags != nullptr)
    {
        _children["flags"] = flags;
    }

    return _children;
}

void MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::CleanedLsp::S2l::PathRro::UnnumberedRroSubObject::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "interface-address")
    {
        interface_address = value;
        interface_address.value_namespace = name_space;
        interface_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "interface-id")
    {
        interface_id = value;
        interface_id.value_namespace = name_space;
        interface_id.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::CleanedLsp::S2l::PathRro::UnnumberedRroSubObject::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "interface-address")
    {
        interface_address.yfilter = yfilter;
    }
    if(value_path == "interface-id")
    {
        interface_id.yfilter = yfilter;
    }
}

bool MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::CleanedLsp::S2l::PathRro::UnnumberedRroSubObject::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "flags" || name == "interface-address" || name == "interface-id")
        return true;
    return false;
}

MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::CleanedLsp::S2l::PathRro::UnnumberedRroSubObject::Flags::Flags()
    :
    is_protection_available{YType::boolean, "is-protection-available"},
    is_protection_in_use{YType::boolean, "is-protection-in-use"},
    is_bandwidth_protected{YType::boolean, "is-bandwidth-protected"},
    is_node_protection_available{YType::boolean, "is-node-protection-available"},
    is_node_id{YType::boolean, "is-node-id"}
{

    yang_name = "flags"; yang_parent_name = "unnumbered-rro-sub-object"; is_top_level_class = false; has_list_ancestor = true; 
}

MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::CleanedLsp::S2l::PathRro::UnnumberedRroSubObject::Flags::~Flags()
{
}

bool MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::CleanedLsp::S2l::PathRro::UnnumberedRroSubObject::Flags::has_data() const
{
    if (is_presence_container) return true;
    return is_protection_available.is_set
	|| is_protection_in_use.is_set
	|| is_bandwidth_protected.is_set
	|| is_node_protection_available.is_set
	|| is_node_id.is_set;
}

bool MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::CleanedLsp::S2l::PathRro::UnnumberedRroSubObject::Flags::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(is_protection_available.yfilter)
	|| ydk::is_set(is_protection_in_use.yfilter)
	|| ydk::is_set(is_bandwidth_protected.yfilter)
	|| ydk::is_set(is_node_protection_available.yfilter)
	|| ydk::is_set(is_node_id.yfilter);
}

std::string MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::CleanedLsp::S2l::PathRro::UnnumberedRroSubObject::Flags::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "flags";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::CleanedLsp::S2l::PathRro::UnnumberedRroSubObject::Flags::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (is_protection_available.is_set || is_set(is_protection_available.yfilter)) leaf_name_data.push_back(is_protection_available.get_name_leafdata());
    if (is_protection_in_use.is_set || is_set(is_protection_in_use.yfilter)) leaf_name_data.push_back(is_protection_in_use.get_name_leafdata());
    if (is_bandwidth_protected.is_set || is_set(is_bandwidth_protected.yfilter)) leaf_name_data.push_back(is_bandwidth_protected.get_name_leafdata());
    if (is_node_protection_available.is_set || is_set(is_node_protection_available.yfilter)) leaf_name_data.push_back(is_node_protection_available.get_name_leafdata());
    if (is_node_id.is_set || is_set(is_node_id.yfilter)) leaf_name_data.push_back(is_node_id.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::CleanedLsp::S2l::PathRro::UnnumberedRroSubObject::Flags::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::CleanedLsp::S2l::PathRro::UnnumberedRroSubObject::Flags::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::CleanedLsp::S2l::PathRro::UnnumberedRroSubObject::Flags::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "is-protection-available")
    {
        is_protection_available = value;
        is_protection_available.value_namespace = name_space;
        is_protection_available.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-protection-in-use")
    {
        is_protection_in_use = value;
        is_protection_in_use.value_namespace = name_space;
        is_protection_in_use.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-bandwidth-protected")
    {
        is_bandwidth_protected = value;
        is_bandwidth_protected.value_namespace = name_space;
        is_bandwidth_protected.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-node-protection-available")
    {
        is_node_protection_available = value;
        is_node_protection_available.value_namespace = name_space;
        is_node_protection_available.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-node-id")
    {
        is_node_id = value;
        is_node_id.value_namespace = name_space;
        is_node_id.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::CleanedLsp::S2l::PathRro::UnnumberedRroSubObject::Flags::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "is-protection-available")
    {
        is_protection_available.yfilter = yfilter;
    }
    if(value_path == "is-protection-in-use")
    {
        is_protection_in_use.yfilter = yfilter;
    }
    if(value_path == "is-bandwidth-protected")
    {
        is_bandwidth_protected.yfilter = yfilter;
    }
    if(value_path == "is-node-protection-available")
    {
        is_node_protection_available.yfilter = yfilter;
    }
    if(value_path == "is-node-id")
    {
        is_node_id.yfilter = yfilter;
    }
}

bool MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::CleanedLsp::S2l::PathRro::UnnumberedRroSubObject::Flags::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "is-protection-available" || name == "is-protection-in-use" || name == "is-bandwidth-protected" || name == "is-node-protection-available" || name == "is-node-id")
        return true;
    return false;
}

MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::CleanedLsp::S2l::PathRro::SrlgRroSubObject::SrlgRroSubObject()
    :
    srl_gs(this, {})
{

    yang_name = "srlg-rro-sub-object"; yang_parent_name = "path-rro"; is_top_level_class = false; has_list_ancestor = true; 
}

MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::CleanedLsp::S2l::PathRro::SrlgRroSubObject::~SrlgRroSubObject()
{
}

bool MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::CleanedLsp::S2l::PathRro::SrlgRroSubObject::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<srl_gs.len(); index++)
    {
        if(srl_gs[index]->has_data())
            return true;
    }
    return false;
}

bool MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::CleanedLsp::S2l::PathRro::SrlgRroSubObject::has_operation() const
{
    for (std::size_t index=0; index<srl_gs.len(); index++)
    {
        if(srl_gs[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::CleanedLsp::S2l::PathRro::SrlgRroSubObject::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "srlg-rro-sub-object";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::CleanedLsp::S2l::PathRro::SrlgRroSubObject::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::CleanedLsp::S2l::PathRro::SrlgRroSubObject::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "srl-gs")
    {
        auto ent_ = std::make_shared<MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::CleanedLsp::S2l::PathRro::SrlgRroSubObject::SrlGs>();
        ent_->parent = this;
        srl_gs.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::CleanedLsp::S2l::PathRro::SrlgRroSubObject::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : srl_gs.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::CleanedLsp::S2l::PathRro::SrlgRroSubObject::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::CleanedLsp::S2l::PathRro::SrlgRroSubObject::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::CleanedLsp::S2l::PathRro::SrlgRroSubObject::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "srl-gs")
        return true;
    return false;
}

MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::CleanedLsp::S2l::PathRro::SrlgRroSubObject::SrlGs::SrlGs()
    :
    entry{YType::uint32, "entry"}
{

    yang_name = "srl-gs"; yang_parent_name = "srlg-rro-sub-object"; is_top_level_class = false; has_list_ancestor = true; 
}

MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::CleanedLsp::S2l::PathRro::SrlgRroSubObject::SrlGs::~SrlGs()
{
}

bool MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::CleanedLsp::S2l::PathRro::SrlgRroSubObject::SrlGs::has_data() const
{
    if (is_presence_container) return true;
    return entry.is_set;
}

bool MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::CleanedLsp::S2l::PathRro::SrlgRroSubObject::SrlGs::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(entry.yfilter);
}

std::string MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::CleanedLsp::S2l::PathRro::SrlgRroSubObject::SrlGs::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "srl-gs";
    path_buffer << "[" << get_ylist_key() << "]";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::CleanedLsp::S2l::PathRro::SrlgRroSubObject::SrlGs::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (entry.is_set || is_set(entry.yfilter)) leaf_name_data.push_back(entry.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::CleanedLsp::S2l::PathRro::SrlgRroSubObject::SrlGs::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::CleanedLsp::S2l::PathRro::SrlgRroSubObject::SrlGs::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::CleanedLsp::S2l::PathRro::SrlgRroSubObject::SrlGs::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "entry")
    {
        entry = value;
        entry.value_namespace = name_space;
        entry.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::CleanedLsp::S2l::PathRro::SrlgRroSubObject::SrlGs::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "entry")
    {
        entry.yfilter = yfilter;
    }
}

bool MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::CleanedLsp::S2l::PathRro::SrlgRroSubObject::SrlGs::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "entry")
        return true;
    return false;
}

MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::CleanedLsp::S2l::ResvRro::ResvRro()
    :
    rro_type{YType::enumeration, "rro-type"}
        ,
    ipv4rro_sub_object(std::make_shared<MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::CleanedLsp::S2l::ResvRro::Ipv4rroSubObject>())
    , label_rro_sub_object(std::make_shared<MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::CleanedLsp::S2l::ResvRro::LabelRroSubObject>())
    , unnumbered_rro_sub_object(std::make_shared<MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::CleanedLsp::S2l::ResvRro::UnnumberedRroSubObject>())
    , srlg_rro_sub_object(std::make_shared<MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::CleanedLsp::S2l::ResvRro::SrlgRroSubObject>())
{
    ipv4rro_sub_object->parent = this;
    label_rro_sub_object->parent = this;
    unnumbered_rro_sub_object->parent = this;
    srlg_rro_sub_object->parent = this;

    yang_name = "resv-rro"; yang_parent_name = "s2l"; is_top_level_class = false; has_list_ancestor = true; 
}

MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::CleanedLsp::S2l::ResvRro::~ResvRro()
{
}

bool MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::CleanedLsp::S2l::ResvRro::has_data() const
{
    if (is_presence_container) return true;
    return rro_type.is_set
	|| (ipv4rro_sub_object !=  nullptr && ipv4rro_sub_object->has_data())
	|| (label_rro_sub_object !=  nullptr && label_rro_sub_object->has_data())
	|| (unnumbered_rro_sub_object !=  nullptr && unnumbered_rro_sub_object->has_data())
	|| (srlg_rro_sub_object !=  nullptr && srlg_rro_sub_object->has_data());
}

bool MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::CleanedLsp::S2l::ResvRro::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(rro_type.yfilter)
	|| (ipv4rro_sub_object !=  nullptr && ipv4rro_sub_object->has_operation())
	|| (label_rro_sub_object !=  nullptr && label_rro_sub_object->has_operation())
	|| (unnumbered_rro_sub_object !=  nullptr && unnumbered_rro_sub_object->has_operation())
	|| (srlg_rro_sub_object !=  nullptr && srlg_rro_sub_object->has_operation());
}

std::string MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::CleanedLsp::S2l::ResvRro::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "resv-rro";
    path_buffer << "[" << get_ylist_key() << "]";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::CleanedLsp::S2l::ResvRro::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (rro_type.is_set || is_set(rro_type.yfilter)) leaf_name_data.push_back(rro_type.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::CleanedLsp::S2l::ResvRro::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ipv4rro-sub-object")
    {
        if(ipv4rro_sub_object == nullptr)
        {
            ipv4rro_sub_object = std::make_shared<MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::CleanedLsp::S2l::ResvRro::Ipv4rroSubObject>();
        }
        return ipv4rro_sub_object;
    }

    if(child_yang_name == "label-rro-sub-object")
    {
        if(label_rro_sub_object == nullptr)
        {
            label_rro_sub_object = std::make_shared<MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::CleanedLsp::S2l::ResvRro::LabelRroSubObject>();
        }
        return label_rro_sub_object;
    }

    if(child_yang_name == "unnumbered-rro-sub-object")
    {
        if(unnumbered_rro_sub_object == nullptr)
        {
            unnumbered_rro_sub_object = std::make_shared<MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::CleanedLsp::S2l::ResvRro::UnnumberedRroSubObject>();
        }
        return unnumbered_rro_sub_object;
    }

    if(child_yang_name == "srlg-rro-sub-object")
    {
        if(srlg_rro_sub_object == nullptr)
        {
            srlg_rro_sub_object = std::make_shared<MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::CleanedLsp::S2l::ResvRro::SrlgRroSubObject>();
        }
        return srlg_rro_sub_object;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::CleanedLsp::S2l::ResvRro::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(ipv4rro_sub_object != nullptr)
    {
        _children["ipv4rro-sub-object"] = ipv4rro_sub_object;
    }

    if(label_rro_sub_object != nullptr)
    {
        _children["label-rro-sub-object"] = label_rro_sub_object;
    }

    if(unnumbered_rro_sub_object != nullptr)
    {
        _children["unnumbered-rro-sub-object"] = unnumbered_rro_sub_object;
    }

    if(srlg_rro_sub_object != nullptr)
    {
        _children["srlg-rro-sub-object"] = srlg_rro_sub_object;
    }

    return _children;
}

void MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::CleanedLsp::S2l::ResvRro::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "rro-type")
    {
        rro_type = value;
        rro_type.value_namespace = name_space;
        rro_type.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::CleanedLsp::S2l::ResvRro::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "rro-type")
    {
        rro_type.yfilter = yfilter;
    }
}

bool MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::CleanedLsp::S2l::ResvRro::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ipv4rro-sub-object" || name == "label-rro-sub-object" || name == "unnumbered-rro-sub-object" || name == "srlg-rro-sub-object" || name == "rro-type")
        return true;
    return false;
}

MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::CleanedLsp::S2l::ResvRro::Ipv4rroSubObject::Ipv4rroSubObject()
    :
    rro_address{YType::str, "rro-address"}
        ,
    flags(std::make_shared<MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::CleanedLsp::S2l::ResvRro::Ipv4rroSubObject::Flags>())
{
    flags->parent = this;

    yang_name = "ipv4rro-sub-object"; yang_parent_name = "resv-rro"; is_top_level_class = false; has_list_ancestor = true; 
}

MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::CleanedLsp::S2l::ResvRro::Ipv4rroSubObject::~Ipv4rroSubObject()
{
}

bool MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::CleanedLsp::S2l::ResvRro::Ipv4rroSubObject::has_data() const
{
    if (is_presence_container) return true;
    return rro_address.is_set
	|| (flags !=  nullptr && flags->has_data());
}

bool MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::CleanedLsp::S2l::ResvRro::Ipv4rroSubObject::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(rro_address.yfilter)
	|| (flags !=  nullptr && flags->has_operation());
}

std::string MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::CleanedLsp::S2l::ResvRro::Ipv4rroSubObject::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv4rro-sub-object";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::CleanedLsp::S2l::ResvRro::Ipv4rroSubObject::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (rro_address.is_set || is_set(rro_address.yfilter)) leaf_name_data.push_back(rro_address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::CleanedLsp::S2l::ResvRro::Ipv4rroSubObject::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "flags")
    {
        if(flags == nullptr)
        {
            flags = std::make_shared<MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::CleanedLsp::S2l::ResvRro::Ipv4rroSubObject::Flags>();
        }
        return flags;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::CleanedLsp::S2l::ResvRro::Ipv4rroSubObject::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(flags != nullptr)
    {
        _children["flags"] = flags;
    }

    return _children;
}

void MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::CleanedLsp::S2l::ResvRro::Ipv4rroSubObject::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "rro-address")
    {
        rro_address = value;
        rro_address.value_namespace = name_space;
        rro_address.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::CleanedLsp::S2l::ResvRro::Ipv4rroSubObject::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "rro-address")
    {
        rro_address.yfilter = yfilter;
    }
}

bool MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::CleanedLsp::S2l::ResvRro::Ipv4rroSubObject::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "flags" || name == "rro-address")
        return true;
    return false;
}

MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::CleanedLsp::S2l::ResvRro::Ipv4rroSubObject::Flags::Flags()
    :
    is_protection_available{YType::boolean, "is-protection-available"},
    is_protection_in_use{YType::boolean, "is-protection-in-use"},
    is_bandwidth_protected{YType::boolean, "is-bandwidth-protected"},
    is_node_protection_available{YType::boolean, "is-node-protection-available"},
    is_node_id{YType::boolean, "is-node-id"}
{

    yang_name = "flags"; yang_parent_name = "ipv4rro-sub-object"; is_top_level_class = false; has_list_ancestor = true; 
}

MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::CleanedLsp::S2l::ResvRro::Ipv4rroSubObject::Flags::~Flags()
{
}

bool MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::CleanedLsp::S2l::ResvRro::Ipv4rroSubObject::Flags::has_data() const
{
    if (is_presence_container) return true;
    return is_protection_available.is_set
	|| is_protection_in_use.is_set
	|| is_bandwidth_protected.is_set
	|| is_node_protection_available.is_set
	|| is_node_id.is_set;
}

bool MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::CleanedLsp::S2l::ResvRro::Ipv4rroSubObject::Flags::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(is_protection_available.yfilter)
	|| ydk::is_set(is_protection_in_use.yfilter)
	|| ydk::is_set(is_bandwidth_protected.yfilter)
	|| ydk::is_set(is_node_protection_available.yfilter)
	|| ydk::is_set(is_node_id.yfilter);
}

std::string MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::CleanedLsp::S2l::ResvRro::Ipv4rroSubObject::Flags::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "flags";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::CleanedLsp::S2l::ResvRro::Ipv4rroSubObject::Flags::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (is_protection_available.is_set || is_set(is_protection_available.yfilter)) leaf_name_data.push_back(is_protection_available.get_name_leafdata());
    if (is_protection_in_use.is_set || is_set(is_protection_in_use.yfilter)) leaf_name_data.push_back(is_protection_in_use.get_name_leafdata());
    if (is_bandwidth_protected.is_set || is_set(is_bandwidth_protected.yfilter)) leaf_name_data.push_back(is_bandwidth_protected.get_name_leafdata());
    if (is_node_protection_available.is_set || is_set(is_node_protection_available.yfilter)) leaf_name_data.push_back(is_node_protection_available.get_name_leafdata());
    if (is_node_id.is_set || is_set(is_node_id.yfilter)) leaf_name_data.push_back(is_node_id.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::CleanedLsp::S2l::ResvRro::Ipv4rroSubObject::Flags::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::CleanedLsp::S2l::ResvRro::Ipv4rroSubObject::Flags::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::CleanedLsp::S2l::ResvRro::Ipv4rroSubObject::Flags::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "is-protection-available")
    {
        is_protection_available = value;
        is_protection_available.value_namespace = name_space;
        is_protection_available.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-protection-in-use")
    {
        is_protection_in_use = value;
        is_protection_in_use.value_namespace = name_space;
        is_protection_in_use.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-bandwidth-protected")
    {
        is_bandwidth_protected = value;
        is_bandwidth_protected.value_namespace = name_space;
        is_bandwidth_protected.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-node-protection-available")
    {
        is_node_protection_available = value;
        is_node_protection_available.value_namespace = name_space;
        is_node_protection_available.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-node-id")
    {
        is_node_id = value;
        is_node_id.value_namespace = name_space;
        is_node_id.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::CleanedLsp::S2l::ResvRro::Ipv4rroSubObject::Flags::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "is-protection-available")
    {
        is_protection_available.yfilter = yfilter;
    }
    if(value_path == "is-protection-in-use")
    {
        is_protection_in_use.yfilter = yfilter;
    }
    if(value_path == "is-bandwidth-protected")
    {
        is_bandwidth_protected.yfilter = yfilter;
    }
    if(value_path == "is-node-protection-available")
    {
        is_node_protection_available.yfilter = yfilter;
    }
    if(value_path == "is-node-id")
    {
        is_node_id.yfilter = yfilter;
    }
}

bool MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::CleanedLsp::S2l::ResvRro::Ipv4rroSubObject::Flags::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "is-protection-available" || name == "is-protection-in-use" || name == "is-bandwidth-protected" || name == "is-node-protection-available" || name == "is-node-id")
        return true;
    return false;
}

MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::CleanedLsp::S2l::ResvRro::LabelRroSubObject::LabelRroSubObject()
    :
    label{YType::uint32, "label"},
    is_label_variable_length{YType::boolean, "is-label-variable-length"}
        ,
    flags(std::make_shared<MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::CleanedLsp::S2l::ResvRro::LabelRroSubObject::Flags>())
    , variable_length_label(this, {})
{
    flags->parent = this;

    yang_name = "label-rro-sub-object"; yang_parent_name = "resv-rro"; is_top_level_class = false; has_list_ancestor = true; 
}

MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::CleanedLsp::S2l::ResvRro::LabelRroSubObject::~LabelRroSubObject()
{
}

bool MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::CleanedLsp::S2l::ResvRro::LabelRroSubObject::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<variable_length_label.len(); index++)
    {
        if(variable_length_label[index]->has_data())
            return true;
    }
    return label.is_set
	|| is_label_variable_length.is_set
	|| (flags !=  nullptr && flags->has_data());
}

bool MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::CleanedLsp::S2l::ResvRro::LabelRroSubObject::has_operation() const
{
    for (std::size_t index=0; index<variable_length_label.len(); index++)
    {
        if(variable_length_label[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(label.yfilter)
	|| ydk::is_set(is_label_variable_length.yfilter)
	|| (flags !=  nullptr && flags->has_operation());
}

std::string MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::CleanedLsp::S2l::ResvRro::LabelRroSubObject::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "label-rro-sub-object";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::CleanedLsp::S2l::ResvRro::LabelRroSubObject::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (label.is_set || is_set(label.yfilter)) leaf_name_data.push_back(label.get_name_leafdata());
    if (is_label_variable_length.is_set || is_set(is_label_variable_length.yfilter)) leaf_name_data.push_back(is_label_variable_length.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::CleanedLsp::S2l::ResvRro::LabelRroSubObject::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "flags")
    {
        if(flags == nullptr)
        {
            flags = std::make_shared<MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::CleanedLsp::S2l::ResvRro::LabelRroSubObject::Flags>();
        }
        return flags;
    }

    if(child_yang_name == "variable-length-label")
    {
        auto ent_ = std::make_shared<MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::CleanedLsp::S2l::ResvRro::LabelRroSubObject::VariableLengthLabel>();
        ent_->parent = this;
        variable_length_label.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::CleanedLsp::S2l::ResvRro::LabelRroSubObject::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(flags != nullptr)
    {
        _children["flags"] = flags;
    }

    count_ = 0;
    for (auto ent_ : variable_length_label.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::CleanedLsp::S2l::ResvRro::LabelRroSubObject::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "label")
    {
        label = value;
        label.value_namespace = name_space;
        label.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-label-variable-length")
    {
        is_label_variable_length = value;
        is_label_variable_length.value_namespace = name_space;
        is_label_variable_length.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::CleanedLsp::S2l::ResvRro::LabelRroSubObject::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "label")
    {
        label.yfilter = yfilter;
    }
    if(value_path == "is-label-variable-length")
    {
        is_label_variable_length.yfilter = yfilter;
    }
}

bool MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::CleanedLsp::S2l::ResvRro::LabelRroSubObject::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "flags" || name == "variable-length-label" || name == "label" || name == "is-label-variable-length")
        return true;
    return false;
}

MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::CleanedLsp::S2l::ResvRro::LabelRroSubObject::Flags::Flags()
    :
    is_global_label{YType::boolean, "is-global-label"}
{

    yang_name = "flags"; yang_parent_name = "label-rro-sub-object"; is_top_level_class = false; has_list_ancestor = true; 
}

MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::CleanedLsp::S2l::ResvRro::LabelRroSubObject::Flags::~Flags()
{
}

bool MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::CleanedLsp::S2l::ResvRro::LabelRroSubObject::Flags::has_data() const
{
    if (is_presence_container) return true;
    return is_global_label.is_set;
}

bool MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::CleanedLsp::S2l::ResvRro::LabelRroSubObject::Flags::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(is_global_label.yfilter);
}

std::string MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::CleanedLsp::S2l::ResvRro::LabelRroSubObject::Flags::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "flags";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::CleanedLsp::S2l::ResvRro::LabelRroSubObject::Flags::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (is_global_label.is_set || is_set(is_global_label.yfilter)) leaf_name_data.push_back(is_global_label.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::CleanedLsp::S2l::ResvRro::LabelRroSubObject::Flags::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::CleanedLsp::S2l::ResvRro::LabelRroSubObject::Flags::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::CleanedLsp::S2l::ResvRro::LabelRroSubObject::Flags::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "is-global-label")
    {
        is_global_label = value;
        is_global_label.value_namespace = name_space;
        is_global_label.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::CleanedLsp::S2l::ResvRro::LabelRroSubObject::Flags::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "is-global-label")
    {
        is_global_label.yfilter = yfilter;
    }
}

bool MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::CleanedLsp::S2l::ResvRro::LabelRroSubObject::Flags::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "is-global-label")
        return true;
    return false;
}

MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::CleanedLsp::S2l::ResvRro::LabelRroSubObject::VariableLengthLabel::VariableLengthLabel()
    :
    entry{YType::uint32, "entry"}
{

    yang_name = "variable-length-label"; yang_parent_name = "label-rro-sub-object"; is_top_level_class = false; has_list_ancestor = true; 
}

MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::CleanedLsp::S2l::ResvRro::LabelRroSubObject::VariableLengthLabel::~VariableLengthLabel()
{
}

bool MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::CleanedLsp::S2l::ResvRro::LabelRroSubObject::VariableLengthLabel::has_data() const
{
    if (is_presence_container) return true;
    return entry.is_set;
}

bool MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::CleanedLsp::S2l::ResvRro::LabelRroSubObject::VariableLengthLabel::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(entry.yfilter);
}

std::string MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::CleanedLsp::S2l::ResvRro::LabelRroSubObject::VariableLengthLabel::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "variable-length-label";
    path_buffer << "[" << get_ylist_key() << "]";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::CleanedLsp::S2l::ResvRro::LabelRroSubObject::VariableLengthLabel::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (entry.is_set || is_set(entry.yfilter)) leaf_name_data.push_back(entry.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::CleanedLsp::S2l::ResvRro::LabelRroSubObject::VariableLengthLabel::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::CleanedLsp::S2l::ResvRro::LabelRroSubObject::VariableLengthLabel::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::CleanedLsp::S2l::ResvRro::LabelRroSubObject::VariableLengthLabel::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "entry")
    {
        entry = value;
        entry.value_namespace = name_space;
        entry.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::CleanedLsp::S2l::ResvRro::LabelRroSubObject::VariableLengthLabel::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "entry")
    {
        entry.yfilter = yfilter;
    }
}

bool MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::CleanedLsp::S2l::ResvRro::LabelRroSubObject::VariableLengthLabel::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "entry")
        return true;
    return false;
}

MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::CleanedLsp::S2l::ResvRro::UnnumberedRroSubObject::UnnumberedRroSubObject()
    :
    interface_address{YType::str, "interface-address"},
    interface_id{YType::uint32, "interface-id"}
        ,
    flags(std::make_shared<MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::CleanedLsp::S2l::ResvRro::UnnumberedRroSubObject::Flags>())
{
    flags->parent = this;

    yang_name = "unnumbered-rro-sub-object"; yang_parent_name = "resv-rro"; is_top_level_class = false; has_list_ancestor = true; 
}

MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::CleanedLsp::S2l::ResvRro::UnnumberedRroSubObject::~UnnumberedRroSubObject()
{
}

bool MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::CleanedLsp::S2l::ResvRro::UnnumberedRroSubObject::has_data() const
{
    if (is_presence_container) return true;
    return interface_address.is_set
	|| interface_id.is_set
	|| (flags !=  nullptr && flags->has_data());
}

bool MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::CleanedLsp::S2l::ResvRro::UnnumberedRroSubObject::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(interface_address.yfilter)
	|| ydk::is_set(interface_id.yfilter)
	|| (flags !=  nullptr && flags->has_operation());
}

std::string MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::CleanedLsp::S2l::ResvRro::UnnumberedRroSubObject::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "unnumbered-rro-sub-object";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::CleanedLsp::S2l::ResvRro::UnnumberedRroSubObject::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interface_address.is_set || is_set(interface_address.yfilter)) leaf_name_data.push_back(interface_address.get_name_leafdata());
    if (interface_id.is_set || is_set(interface_id.yfilter)) leaf_name_data.push_back(interface_id.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::CleanedLsp::S2l::ResvRro::UnnumberedRroSubObject::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "flags")
    {
        if(flags == nullptr)
        {
            flags = std::make_shared<MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::CleanedLsp::S2l::ResvRro::UnnumberedRroSubObject::Flags>();
        }
        return flags;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::CleanedLsp::S2l::ResvRro::UnnumberedRroSubObject::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(flags != nullptr)
    {
        _children["flags"] = flags;
    }

    return _children;
}

void MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::CleanedLsp::S2l::ResvRro::UnnumberedRroSubObject::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "interface-address")
    {
        interface_address = value;
        interface_address.value_namespace = name_space;
        interface_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "interface-id")
    {
        interface_id = value;
        interface_id.value_namespace = name_space;
        interface_id.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::CleanedLsp::S2l::ResvRro::UnnumberedRroSubObject::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "interface-address")
    {
        interface_address.yfilter = yfilter;
    }
    if(value_path == "interface-id")
    {
        interface_id.yfilter = yfilter;
    }
}

bool MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::CleanedLsp::S2l::ResvRro::UnnumberedRroSubObject::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "flags" || name == "interface-address" || name == "interface-id")
        return true;
    return false;
}

MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::CleanedLsp::S2l::ResvRro::UnnumberedRroSubObject::Flags::Flags()
    :
    is_protection_available{YType::boolean, "is-protection-available"},
    is_protection_in_use{YType::boolean, "is-protection-in-use"},
    is_bandwidth_protected{YType::boolean, "is-bandwidth-protected"},
    is_node_protection_available{YType::boolean, "is-node-protection-available"},
    is_node_id{YType::boolean, "is-node-id"}
{

    yang_name = "flags"; yang_parent_name = "unnumbered-rro-sub-object"; is_top_level_class = false; has_list_ancestor = true; 
}

MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::CleanedLsp::S2l::ResvRro::UnnumberedRroSubObject::Flags::~Flags()
{
}

bool MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::CleanedLsp::S2l::ResvRro::UnnumberedRroSubObject::Flags::has_data() const
{
    if (is_presence_container) return true;
    return is_protection_available.is_set
	|| is_protection_in_use.is_set
	|| is_bandwidth_protected.is_set
	|| is_node_protection_available.is_set
	|| is_node_id.is_set;
}

bool MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::CleanedLsp::S2l::ResvRro::UnnumberedRroSubObject::Flags::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(is_protection_available.yfilter)
	|| ydk::is_set(is_protection_in_use.yfilter)
	|| ydk::is_set(is_bandwidth_protected.yfilter)
	|| ydk::is_set(is_node_protection_available.yfilter)
	|| ydk::is_set(is_node_id.yfilter);
}

std::string MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::CleanedLsp::S2l::ResvRro::UnnumberedRroSubObject::Flags::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "flags";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::CleanedLsp::S2l::ResvRro::UnnumberedRroSubObject::Flags::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (is_protection_available.is_set || is_set(is_protection_available.yfilter)) leaf_name_data.push_back(is_protection_available.get_name_leafdata());
    if (is_protection_in_use.is_set || is_set(is_protection_in_use.yfilter)) leaf_name_data.push_back(is_protection_in_use.get_name_leafdata());
    if (is_bandwidth_protected.is_set || is_set(is_bandwidth_protected.yfilter)) leaf_name_data.push_back(is_bandwidth_protected.get_name_leafdata());
    if (is_node_protection_available.is_set || is_set(is_node_protection_available.yfilter)) leaf_name_data.push_back(is_node_protection_available.get_name_leafdata());
    if (is_node_id.is_set || is_set(is_node_id.yfilter)) leaf_name_data.push_back(is_node_id.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::CleanedLsp::S2l::ResvRro::UnnumberedRroSubObject::Flags::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::CleanedLsp::S2l::ResvRro::UnnumberedRroSubObject::Flags::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::CleanedLsp::S2l::ResvRro::UnnumberedRroSubObject::Flags::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "is-protection-available")
    {
        is_protection_available = value;
        is_protection_available.value_namespace = name_space;
        is_protection_available.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-protection-in-use")
    {
        is_protection_in_use = value;
        is_protection_in_use.value_namespace = name_space;
        is_protection_in_use.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-bandwidth-protected")
    {
        is_bandwidth_protected = value;
        is_bandwidth_protected.value_namespace = name_space;
        is_bandwidth_protected.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-node-protection-available")
    {
        is_node_protection_available = value;
        is_node_protection_available.value_namespace = name_space;
        is_node_protection_available.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-node-id")
    {
        is_node_id = value;
        is_node_id.value_namespace = name_space;
        is_node_id.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::CleanedLsp::S2l::ResvRro::UnnumberedRroSubObject::Flags::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "is-protection-available")
    {
        is_protection_available.yfilter = yfilter;
    }
    if(value_path == "is-protection-in-use")
    {
        is_protection_in_use.yfilter = yfilter;
    }
    if(value_path == "is-bandwidth-protected")
    {
        is_bandwidth_protected.yfilter = yfilter;
    }
    if(value_path == "is-node-protection-available")
    {
        is_node_protection_available.yfilter = yfilter;
    }
    if(value_path == "is-node-id")
    {
        is_node_id.yfilter = yfilter;
    }
}

bool MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::CleanedLsp::S2l::ResvRro::UnnumberedRroSubObject::Flags::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "is-protection-available" || name == "is-protection-in-use" || name == "is-bandwidth-protected" || name == "is-node-protection-available" || name == "is-node-id")
        return true;
    return false;
}

MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::CleanedLsp::S2l::ResvRro::SrlgRroSubObject::SrlgRroSubObject()
    :
    srl_gs(this, {})
{

    yang_name = "srlg-rro-sub-object"; yang_parent_name = "resv-rro"; is_top_level_class = false; has_list_ancestor = true; 
}

MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::CleanedLsp::S2l::ResvRro::SrlgRroSubObject::~SrlgRroSubObject()
{
}

bool MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::CleanedLsp::S2l::ResvRro::SrlgRroSubObject::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<srl_gs.len(); index++)
    {
        if(srl_gs[index]->has_data())
            return true;
    }
    return false;
}

bool MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::CleanedLsp::S2l::ResvRro::SrlgRroSubObject::has_operation() const
{
    for (std::size_t index=0; index<srl_gs.len(); index++)
    {
        if(srl_gs[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::CleanedLsp::S2l::ResvRro::SrlgRroSubObject::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "srlg-rro-sub-object";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::CleanedLsp::S2l::ResvRro::SrlgRroSubObject::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::CleanedLsp::S2l::ResvRro::SrlgRroSubObject::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "srl-gs")
    {
        auto ent_ = std::make_shared<MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::CleanedLsp::S2l::ResvRro::SrlgRroSubObject::SrlGs>();
        ent_->parent = this;
        srl_gs.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::CleanedLsp::S2l::ResvRro::SrlgRroSubObject::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : srl_gs.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::CleanedLsp::S2l::ResvRro::SrlgRroSubObject::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::CleanedLsp::S2l::ResvRro::SrlgRroSubObject::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::CleanedLsp::S2l::ResvRro::SrlgRroSubObject::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "srl-gs")
        return true;
    return false;
}

MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::CleanedLsp::S2l::ResvRro::SrlgRroSubObject::SrlGs::SrlGs()
    :
    entry{YType::uint32, "entry"}
{

    yang_name = "srl-gs"; yang_parent_name = "srlg-rro-sub-object"; is_top_level_class = false; has_list_ancestor = true; 
}

MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::CleanedLsp::S2l::ResvRro::SrlgRroSubObject::SrlGs::~SrlGs()
{
}

bool MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::CleanedLsp::S2l::ResvRro::SrlgRroSubObject::SrlGs::has_data() const
{
    if (is_presence_container) return true;
    return entry.is_set;
}

bool MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::CleanedLsp::S2l::ResvRro::SrlgRroSubObject::SrlGs::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(entry.yfilter);
}

std::string MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::CleanedLsp::S2l::ResvRro::SrlgRroSubObject::SrlGs::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "srl-gs";
    path_buffer << "[" << get_ylist_key() << "]";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::CleanedLsp::S2l::ResvRro::SrlgRroSubObject::SrlGs::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (entry.is_set || is_set(entry.yfilter)) leaf_name_data.push_back(entry.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::CleanedLsp::S2l::ResvRro::SrlgRroSubObject::SrlGs::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::CleanedLsp::S2l::ResvRro::SrlgRroSubObject::SrlGs::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::CleanedLsp::S2l::ResvRro::SrlgRroSubObject::SrlGs::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "entry")
    {
        entry = value;
        entry.value_namespace = name_space;
        entry.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::CleanedLsp::S2l::ResvRro::SrlgRroSubObject::SrlGs::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "entry")
    {
        entry.yfilter = yfilter;
    }
}

bool MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::CleanedLsp::S2l::ResvRro::SrlgRroSubObject::SrlGs::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "entry")
        return true;
    return false;
}

MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::CleanedLsp::S2l::PathAffinityArray::PathAffinityArray()
    :
    hop_address{YType::str, "hop-address"},
    hop_affinity{YType::uint32, "hop-affinity"}
        ,
    hop_extended_affinity(this, {})
{

    yang_name = "path-affinity-array"; yang_parent_name = "s2l"; is_top_level_class = false; has_list_ancestor = true; 
}

MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::CleanedLsp::S2l::PathAffinityArray::~PathAffinityArray()
{
}

bool MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::CleanedLsp::S2l::PathAffinityArray::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<hop_extended_affinity.len(); index++)
    {
        if(hop_extended_affinity[index]->has_data())
            return true;
    }
    return hop_address.is_set
	|| hop_affinity.is_set;
}

bool MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::CleanedLsp::S2l::PathAffinityArray::has_operation() const
{
    for (std::size_t index=0; index<hop_extended_affinity.len(); index++)
    {
        if(hop_extended_affinity[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(hop_address.yfilter)
	|| ydk::is_set(hop_affinity.yfilter);
}

std::string MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::CleanedLsp::S2l::PathAffinityArray::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "path-affinity-array";
    path_buffer << "[" << get_ylist_key() << "]";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::CleanedLsp::S2l::PathAffinityArray::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (hop_address.is_set || is_set(hop_address.yfilter)) leaf_name_data.push_back(hop_address.get_name_leafdata());
    if (hop_affinity.is_set || is_set(hop_affinity.yfilter)) leaf_name_data.push_back(hop_affinity.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::CleanedLsp::S2l::PathAffinityArray::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "hop-extended-affinity")
    {
        auto ent_ = std::make_shared<MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::CleanedLsp::S2l::PathAffinityArray::HopExtendedAffinity>();
        ent_->parent = this;
        hop_extended_affinity.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::CleanedLsp::S2l::PathAffinityArray::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : hop_extended_affinity.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::CleanedLsp::S2l::PathAffinityArray::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "hop-address")
    {
        hop_address = value;
        hop_address.value_namespace = name_space;
        hop_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "hop-affinity")
    {
        hop_affinity = value;
        hop_affinity.value_namespace = name_space;
        hop_affinity.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::CleanedLsp::S2l::PathAffinityArray::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "hop-address")
    {
        hop_address.yfilter = yfilter;
    }
    if(value_path == "hop-affinity")
    {
        hop_affinity.yfilter = yfilter;
    }
}

bool MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::CleanedLsp::S2l::PathAffinityArray::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "hop-extended-affinity" || name == "hop-address" || name == "hop-affinity")
        return true;
    return false;
}

MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::CleanedLsp::S2l::PathAffinityArray::HopExtendedAffinity::HopExtendedAffinity()
    :
    entry{YType::uint32, "entry"}
{

    yang_name = "hop-extended-affinity"; yang_parent_name = "path-affinity-array"; is_top_level_class = false; has_list_ancestor = true; 
}

MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::CleanedLsp::S2l::PathAffinityArray::HopExtendedAffinity::~HopExtendedAffinity()
{
}

bool MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::CleanedLsp::S2l::PathAffinityArray::HopExtendedAffinity::has_data() const
{
    if (is_presence_container) return true;
    return entry.is_set;
}

bool MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::CleanedLsp::S2l::PathAffinityArray::HopExtendedAffinity::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(entry.yfilter);
}

std::string MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::CleanedLsp::S2l::PathAffinityArray::HopExtendedAffinity::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "hop-extended-affinity";
    path_buffer << "[" << get_ylist_key() << "]";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::CleanedLsp::S2l::PathAffinityArray::HopExtendedAffinity::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (entry.is_set || is_set(entry.yfilter)) leaf_name_data.push_back(entry.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::CleanedLsp::S2l::PathAffinityArray::HopExtendedAffinity::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::CleanedLsp::S2l::PathAffinityArray::HopExtendedAffinity::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::CleanedLsp::S2l::PathAffinityArray::HopExtendedAffinity::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "entry")
    {
        entry = value;
        entry.value_namespace = name_space;
        entry.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::CleanedLsp::S2l::PathAffinityArray::HopExtendedAffinity::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "entry")
    {
        entry.yfilter = yfilter;
    }
}

bool MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::CleanedLsp::S2l::PathAffinityArray::HopExtendedAffinity::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "entry")
        return true;
    return false;
}

MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::CleanedLsp::S2l::ReverseEroIn::ReverseEroIn()
    :
    ero_type{YType::enumeration, "ero-type"}
        ,
    ipv4ero_sub_object(std::make_shared<MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::CleanedLsp::S2l::ReverseEroIn::Ipv4eroSubObject>())
    , unnumbered_ero_sub_object(std::make_shared<MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::CleanedLsp::S2l::ReverseEroIn::UnnumberedEroSubObject>())
{
    ipv4ero_sub_object->parent = this;
    unnumbered_ero_sub_object->parent = this;

    yang_name = "reverse-ero-in"; yang_parent_name = "s2l"; is_top_level_class = false; has_list_ancestor = true; 
}

MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::CleanedLsp::S2l::ReverseEroIn::~ReverseEroIn()
{
}

bool MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::CleanedLsp::S2l::ReverseEroIn::has_data() const
{
    if (is_presence_container) return true;
    return ero_type.is_set
	|| (ipv4ero_sub_object !=  nullptr && ipv4ero_sub_object->has_data())
	|| (unnumbered_ero_sub_object !=  nullptr && unnumbered_ero_sub_object->has_data());
}

bool MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::CleanedLsp::S2l::ReverseEroIn::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ero_type.yfilter)
	|| (ipv4ero_sub_object !=  nullptr && ipv4ero_sub_object->has_operation())
	|| (unnumbered_ero_sub_object !=  nullptr && unnumbered_ero_sub_object->has_operation());
}

std::string MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::CleanedLsp::S2l::ReverseEroIn::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "reverse-ero-in";
    path_buffer << "[" << get_ylist_key() << "]";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::CleanedLsp::S2l::ReverseEroIn::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ero_type.is_set || is_set(ero_type.yfilter)) leaf_name_data.push_back(ero_type.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::CleanedLsp::S2l::ReverseEroIn::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ipv4ero-sub-object")
    {
        if(ipv4ero_sub_object == nullptr)
        {
            ipv4ero_sub_object = std::make_shared<MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::CleanedLsp::S2l::ReverseEroIn::Ipv4eroSubObject>();
        }
        return ipv4ero_sub_object;
    }

    if(child_yang_name == "unnumbered-ero-sub-object")
    {
        if(unnumbered_ero_sub_object == nullptr)
        {
            unnumbered_ero_sub_object = std::make_shared<MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::CleanedLsp::S2l::ReverseEroIn::UnnumberedEroSubObject>();
        }
        return unnumbered_ero_sub_object;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::CleanedLsp::S2l::ReverseEroIn::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(ipv4ero_sub_object != nullptr)
    {
        _children["ipv4ero-sub-object"] = ipv4ero_sub_object;
    }

    if(unnumbered_ero_sub_object != nullptr)
    {
        _children["unnumbered-ero-sub-object"] = unnumbered_ero_sub_object;
    }

    return _children;
}

void MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::CleanedLsp::S2l::ReverseEroIn::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ero-type")
    {
        ero_type = value;
        ero_type.value_namespace = name_space;
        ero_type.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::CleanedLsp::S2l::ReverseEroIn::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ero-type")
    {
        ero_type.yfilter = yfilter;
    }
}

bool MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::CleanedLsp::S2l::ReverseEroIn::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ipv4ero-sub-object" || name == "unnumbered-ero-sub-object" || name == "ero-type")
        return true;
    return false;
}

MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::CleanedLsp::S2l::ReverseEroIn::Ipv4eroSubObject::Ipv4eroSubObject()
    :
    is_strict_route{YType::boolean, "is-strict-route"},
    ero_address{YType::str, "ero-address"},
    prefix_length{YType::uint8, "prefix-length"}
{

    yang_name = "ipv4ero-sub-object"; yang_parent_name = "reverse-ero-in"; is_top_level_class = false; has_list_ancestor = true; 
}

MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::CleanedLsp::S2l::ReverseEroIn::Ipv4eroSubObject::~Ipv4eroSubObject()
{
}

bool MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::CleanedLsp::S2l::ReverseEroIn::Ipv4eroSubObject::has_data() const
{
    if (is_presence_container) return true;
    return is_strict_route.is_set
	|| ero_address.is_set
	|| prefix_length.is_set;
}

bool MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::CleanedLsp::S2l::ReverseEroIn::Ipv4eroSubObject::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(is_strict_route.yfilter)
	|| ydk::is_set(ero_address.yfilter)
	|| ydk::is_set(prefix_length.yfilter);
}

std::string MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::CleanedLsp::S2l::ReverseEroIn::Ipv4eroSubObject::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv4ero-sub-object";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::CleanedLsp::S2l::ReverseEroIn::Ipv4eroSubObject::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (is_strict_route.is_set || is_set(is_strict_route.yfilter)) leaf_name_data.push_back(is_strict_route.get_name_leafdata());
    if (ero_address.is_set || is_set(ero_address.yfilter)) leaf_name_data.push_back(ero_address.get_name_leafdata());
    if (prefix_length.is_set || is_set(prefix_length.yfilter)) leaf_name_data.push_back(prefix_length.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::CleanedLsp::S2l::ReverseEroIn::Ipv4eroSubObject::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::CleanedLsp::S2l::ReverseEroIn::Ipv4eroSubObject::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::CleanedLsp::S2l::ReverseEroIn::Ipv4eroSubObject::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "is-strict-route")
    {
        is_strict_route = value;
        is_strict_route.value_namespace = name_space;
        is_strict_route.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ero-address")
    {
        ero_address = value;
        ero_address.value_namespace = name_space;
        ero_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "prefix-length")
    {
        prefix_length = value;
        prefix_length.value_namespace = name_space;
        prefix_length.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::CleanedLsp::S2l::ReverseEroIn::Ipv4eroSubObject::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "is-strict-route")
    {
        is_strict_route.yfilter = yfilter;
    }
    if(value_path == "ero-address")
    {
        ero_address.yfilter = yfilter;
    }
    if(value_path == "prefix-length")
    {
        prefix_length.yfilter = yfilter;
    }
}

bool MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::CleanedLsp::S2l::ReverseEroIn::Ipv4eroSubObject::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "is-strict-route" || name == "ero-address" || name == "prefix-length")
        return true;
    return false;
}

MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::CleanedLsp::S2l::ReverseEroIn::UnnumberedEroSubObject::UnnumberedEroSubObject()
    :
    is_strict_route{YType::boolean, "is-strict-route"},
    ero_interface_id{YType::uint32, "ero-interface-id"},
    ero_router_id{YType::str, "ero-router-id"},
    status{YType::enumeration, "status"}
{

    yang_name = "unnumbered-ero-sub-object"; yang_parent_name = "reverse-ero-in"; is_top_level_class = false; has_list_ancestor = true; 
}

MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::CleanedLsp::S2l::ReverseEroIn::UnnumberedEroSubObject::~UnnumberedEroSubObject()
{
}

bool MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::CleanedLsp::S2l::ReverseEroIn::UnnumberedEroSubObject::has_data() const
{
    if (is_presence_container) return true;
    return is_strict_route.is_set
	|| ero_interface_id.is_set
	|| ero_router_id.is_set
	|| status.is_set;
}

bool MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::CleanedLsp::S2l::ReverseEroIn::UnnumberedEroSubObject::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(is_strict_route.yfilter)
	|| ydk::is_set(ero_interface_id.yfilter)
	|| ydk::is_set(ero_router_id.yfilter)
	|| ydk::is_set(status.yfilter);
}

std::string MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::CleanedLsp::S2l::ReverseEroIn::UnnumberedEroSubObject::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "unnumbered-ero-sub-object";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::CleanedLsp::S2l::ReverseEroIn::UnnumberedEroSubObject::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (is_strict_route.is_set || is_set(is_strict_route.yfilter)) leaf_name_data.push_back(is_strict_route.get_name_leafdata());
    if (ero_interface_id.is_set || is_set(ero_interface_id.yfilter)) leaf_name_data.push_back(ero_interface_id.get_name_leafdata());
    if (ero_router_id.is_set || is_set(ero_router_id.yfilter)) leaf_name_data.push_back(ero_router_id.get_name_leafdata());
    if (status.is_set || is_set(status.yfilter)) leaf_name_data.push_back(status.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::CleanedLsp::S2l::ReverseEroIn::UnnumberedEroSubObject::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::CleanedLsp::S2l::ReverseEroIn::UnnumberedEroSubObject::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::CleanedLsp::S2l::ReverseEroIn::UnnumberedEroSubObject::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "is-strict-route")
    {
        is_strict_route = value;
        is_strict_route.value_namespace = name_space;
        is_strict_route.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ero-interface-id")
    {
        ero_interface_id = value;
        ero_interface_id.value_namespace = name_space;
        ero_interface_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ero-router-id")
    {
        ero_router_id = value;
        ero_router_id.value_namespace = name_space;
        ero_router_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "status")
    {
        status = value;
        status.value_namespace = name_space;
        status.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::CleanedLsp::S2l::ReverseEroIn::UnnumberedEroSubObject::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "is-strict-route")
    {
        is_strict_route.yfilter = yfilter;
    }
    if(value_path == "ero-interface-id")
    {
        ero_interface_id.yfilter = yfilter;
    }
    if(value_path == "ero-router-id")
    {
        ero_router_id.yfilter = yfilter;
    }
    if(value_path == "status")
    {
        status.yfilter = yfilter;
    }
}

bool MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::CleanedLsp::S2l::ReverseEroIn::UnnumberedEroSubObject::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "is-strict-route" || name == "ero-interface-id" || name == "ero-router-id" || name == "status")
        return true;
    return false;
}

MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::CleanedLsp::S2l::S2lSegmentRoutingPath::S2lSegmentRoutingPath()
    :
    sid_type{YType::enumeration, "sid-type"},
    has_ip_addresses{YType::boolean, "has-ip-addresses"},
    local_addr{YType::str, "local-addr"},
    remote_addr{YType::str, "remote-addr"},
    has_mpls_label{YType::boolean, "has-mpls-label"},
    mpls_label_value{YType::uint32, "mpls-label-value"},
    has_entropy_label{YType::boolean, "has-entropy-label"}
{

    yang_name = "s2l-segment-routing-path"; yang_parent_name = "s2l"; is_top_level_class = false; has_list_ancestor = true; 
}

MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::CleanedLsp::S2l::S2lSegmentRoutingPath::~S2lSegmentRoutingPath()
{
}

bool MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::CleanedLsp::S2l::S2lSegmentRoutingPath::has_data() const
{
    if (is_presence_container) return true;
    return sid_type.is_set
	|| has_ip_addresses.is_set
	|| local_addr.is_set
	|| remote_addr.is_set
	|| has_mpls_label.is_set
	|| mpls_label_value.is_set
	|| has_entropy_label.is_set;
}

bool MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::CleanedLsp::S2l::S2lSegmentRoutingPath::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(sid_type.yfilter)
	|| ydk::is_set(has_ip_addresses.yfilter)
	|| ydk::is_set(local_addr.yfilter)
	|| ydk::is_set(remote_addr.yfilter)
	|| ydk::is_set(has_mpls_label.yfilter)
	|| ydk::is_set(mpls_label_value.yfilter)
	|| ydk::is_set(has_entropy_label.yfilter);
}

std::string MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::CleanedLsp::S2l::S2lSegmentRoutingPath::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "s2l-segment-routing-path";
    path_buffer << "[" << get_ylist_key() << "]";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::CleanedLsp::S2l::S2lSegmentRoutingPath::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (sid_type.is_set || is_set(sid_type.yfilter)) leaf_name_data.push_back(sid_type.get_name_leafdata());
    if (has_ip_addresses.is_set || is_set(has_ip_addresses.yfilter)) leaf_name_data.push_back(has_ip_addresses.get_name_leafdata());
    if (local_addr.is_set || is_set(local_addr.yfilter)) leaf_name_data.push_back(local_addr.get_name_leafdata());
    if (remote_addr.is_set || is_set(remote_addr.yfilter)) leaf_name_data.push_back(remote_addr.get_name_leafdata());
    if (has_mpls_label.is_set || is_set(has_mpls_label.yfilter)) leaf_name_data.push_back(has_mpls_label.get_name_leafdata());
    if (mpls_label_value.is_set || is_set(mpls_label_value.yfilter)) leaf_name_data.push_back(mpls_label_value.get_name_leafdata());
    if (has_entropy_label.is_set || is_set(has_entropy_label.yfilter)) leaf_name_data.push_back(has_entropy_label.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::CleanedLsp::S2l::S2lSegmentRoutingPath::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::CleanedLsp::S2l::S2lSegmentRoutingPath::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::CleanedLsp::S2l::S2lSegmentRoutingPath::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "sid-type")
    {
        sid_type = value;
        sid_type.value_namespace = name_space;
        sid_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "has-ip-addresses")
    {
        has_ip_addresses = value;
        has_ip_addresses.value_namespace = name_space;
        has_ip_addresses.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "local-addr")
    {
        local_addr = value;
        local_addr.value_namespace = name_space;
        local_addr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "remote-addr")
    {
        remote_addr = value;
        remote_addr.value_namespace = name_space;
        remote_addr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "has-mpls-label")
    {
        has_mpls_label = value;
        has_mpls_label.value_namespace = name_space;
        has_mpls_label.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mpls-label-value")
    {
        mpls_label_value = value;
        mpls_label_value.value_namespace = name_space;
        mpls_label_value.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "has-entropy-label")
    {
        has_entropy_label = value;
        has_entropy_label.value_namespace = name_space;
        has_entropy_label.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::CleanedLsp::S2l::S2lSegmentRoutingPath::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "sid-type")
    {
        sid_type.yfilter = yfilter;
    }
    if(value_path == "has-ip-addresses")
    {
        has_ip_addresses.yfilter = yfilter;
    }
    if(value_path == "local-addr")
    {
        local_addr.yfilter = yfilter;
    }
    if(value_path == "remote-addr")
    {
        remote_addr.yfilter = yfilter;
    }
    if(value_path == "has-mpls-label")
    {
        has_mpls_label.yfilter = yfilter;
    }
    if(value_path == "mpls-label-value")
    {
        mpls_label_value.yfilter = yfilter;
    }
    if(value_path == "has-entropy-label")
    {
        has_entropy_label.yfilter = yfilter;
    }
}

bool MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::CleanedLsp::S2l::S2lSegmentRoutingPath::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "sid-type" || name == "has-ip-addresses" || name == "local-addr" || name == "remote-addr" || name == "has-mpls-label" || name == "mpls-label-value" || name == "has-entropy-label")
        return true;
    return false;
}

MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::P2pInfo::P2pInfo()
    :
    is_bidirectional{YType::boolean, "is-bidirectional"}
        ,
    auto_bandwidth_status(std::make_shared<MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::P2pInfo::AutoBandwidthStatus>())
    , auto_bandwidth_config(std::make_shared<MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::P2pInfo::AutoBandwidthConfig>())
    , auto_bandwidth_oper(std::make_shared<MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::P2pInfo::AutoBandwidthOper>())
{
    auto_bandwidth_status->parent = this;
    auto_bandwidth_config->parent = this;
    auto_bandwidth_oper->parent = this;

    yang_name = "p2p-info"; yang_parent_name = "tunnel-head"; is_top_level_class = false; has_list_ancestor = true; 
}

MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::P2pInfo::~P2pInfo()
{
}

bool MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::P2pInfo::has_data() const
{
    if (is_presence_container) return true;
    return is_bidirectional.is_set
	|| (auto_bandwidth_status !=  nullptr && auto_bandwidth_status->has_data())
	|| (auto_bandwidth_config !=  nullptr && auto_bandwidth_config->has_data())
	|| (auto_bandwidth_oper !=  nullptr && auto_bandwidth_oper->has_data());
}

bool MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::P2pInfo::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(is_bidirectional.yfilter)
	|| (auto_bandwidth_status !=  nullptr && auto_bandwidth_status->has_operation())
	|| (auto_bandwidth_config !=  nullptr && auto_bandwidth_config->has_operation())
	|| (auto_bandwidth_oper !=  nullptr && auto_bandwidth_oper->has_operation());
}

std::string MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::P2pInfo::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "p2p-info";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::P2pInfo::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (is_bidirectional.is_set || is_set(is_bidirectional.yfilter)) leaf_name_data.push_back(is_bidirectional.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::P2pInfo::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "auto-bandwidth-status")
    {
        if(auto_bandwidth_status == nullptr)
        {
            auto_bandwidth_status = std::make_shared<MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::P2pInfo::AutoBandwidthStatus>();
        }
        return auto_bandwidth_status;
    }

    if(child_yang_name == "auto-bandwidth-config")
    {
        if(auto_bandwidth_config == nullptr)
        {
            auto_bandwidth_config = std::make_shared<MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::P2pInfo::AutoBandwidthConfig>();
        }
        return auto_bandwidth_config;
    }

    if(child_yang_name == "auto-bandwidth-oper")
    {
        if(auto_bandwidth_oper == nullptr)
        {
            auto_bandwidth_oper = std::make_shared<MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::P2pInfo::AutoBandwidthOper>();
        }
        return auto_bandwidth_oper;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::P2pInfo::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(auto_bandwidth_status != nullptr)
    {
        _children["auto-bandwidth-status"] = auto_bandwidth_status;
    }

    if(auto_bandwidth_config != nullptr)
    {
        _children["auto-bandwidth-config"] = auto_bandwidth_config;
    }

    if(auto_bandwidth_oper != nullptr)
    {
        _children["auto-bandwidth-oper"] = auto_bandwidth_oper;
    }

    return _children;
}

void MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::P2pInfo::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "is-bidirectional")
    {
        is_bidirectional = value;
        is_bidirectional.value_namespace = name_space;
        is_bidirectional.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::P2pInfo::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "is-bidirectional")
    {
        is_bidirectional.yfilter = yfilter;
    }
}

bool MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::P2pInfo::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "auto-bandwidth-status" || name == "auto-bandwidth-config" || name == "auto-bandwidth-oper" || name == "is-bidirectional")
        return true;
    return false;
}

MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::P2pInfo::AutoBandwidthStatus::AutoBandwidthStatus()
    :
    is_auto_bandwidth_enabled{YType::boolean, "is-auto-bandwidth-enabled"},
    reactivation_time{YType::uint32, "reactivation-time"}
{

    yang_name = "auto-bandwidth-status"; yang_parent_name = "p2p-info"; is_top_level_class = false; has_list_ancestor = true; 
}

MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::P2pInfo::AutoBandwidthStatus::~AutoBandwidthStatus()
{
}

bool MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::P2pInfo::AutoBandwidthStatus::has_data() const
{
    if (is_presence_container) return true;
    return is_auto_bandwidth_enabled.is_set
	|| reactivation_time.is_set;
}

bool MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::P2pInfo::AutoBandwidthStatus::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(is_auto_bandwidth_enabled.yfilter)
	|| ydk::is_set(reactivation_time.yfilter);
}

std::string MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::P2pInfo::AutoBandwidthStatus::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "auto-bandwidth-status";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::P2pInfo::AutoBandwidthStatus::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (is_auto_bandwidth_enabled.is_set || is_set(is_auto_bandwidth_enabled.yfilter)) leaf_name_data.push_back(is_auto_bandwidth_enabled.get_name_leafdata());
    if (reactivation_time.is_set || is_set(reactivation_time.yfilter)) leaf_name_data.push_back(reactivation_time.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::P2pInfo::AutoBandwidthStatus::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::P2pInfo::AutoBandwidthStatus::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::P2pInfo::AutoBandwidthStatus::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "is-auto-bandwidth-enabled")
    {
        is_auto_bandwidth_enabled = value;
        is_auto_bandwidth_enabled.value_namespace = name_space;
        is_auto_bandwidth_enabled.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "reactivation-time")
    {
        reactivation_time = value;
        reactivation_time.value_namespace = name_space;
        reactivation_time.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::P2pInfo::AutoBandwidthStatus::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "is-auto-bandwidth-enabled")
    {
        is_auto_bandwidth_enabled.yfilter = yfilter;
    }
    if(value_path == "reactivation-time")
    {
        reactivation_time.yfilter = yfilter;
    }
}

bool MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::P2pInfo::AutoBandwidthStatus::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "is-auto-bandwidth-enabled" || name == "reactivation-time")
        return true;
    return false;
}

MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::P2pInfo::AutoBandwidthConfig::AutoBandwidthConfig()
    :
    is_auto_bandwidth_collect_only{YType::boolean, "is-auto-bandwidth-collect-only"},
    minimum_bandwidth{YType::uint32, "minimum-bandwidth"},
    maximum_bandwidth{YType::uint32, "maximum-bandwidth"},
    application_frequency{YType::uint32, "application-frequency"},
    collection_frequency{YType::uint32, "collection-frequency"},
    adjustment_threshold_percent{YType::uint32, "adjustment-threshold-percent"},
    adjustment_threshold_value{YType::uint32, "adjustment-threshold-value"},
    overflow_threshold_percent{YType::uint32, "overflow-threshold-percent"},
    overflow_threshold_value{YType::uint32, "overflow-threshold-value"},
    overflow_threshold_limit{YType::uint32, "overflow-threshold-limit"},
    underflow_threshold_percent{YType::uint32, "underflow-threshold-percent"},
    underflow_threshold_value{YType::uint32, "underflow-threshold-value"},
    underflow_threshold_limit{YType::uint32, "underflow-threshold-limit"},
    resignal_last_bandwidth_enabled{YType::boolean, "resignal-last-bandwidth-enabled"},
    resignal_last_bandwidth_timeout{YType::uint32, "resignal-last-bandwidth-timeout"}
{

    yang_name = "auto-bandwidth-config"; yang_parent_name = "p2p-info"; is_top_level_class = false; has_list_ancestor = true; 
}

MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::P2pInfo::AutoBandwidthConfig::~AutoBandwidthConfig()
{
}

bool MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::P2pInfo::AutoBandwidthConfig::has_data() const
{
    if (is_presence_container) return true;
    return is_auto_bandwidth_collect_only.is_set
	|| minimum_bandwidth.is_set
	|| maximum_bandwidth.is_set
	|| application_frequency.is_set
	|| collection_frequency.is_set
	|| adjustment_threshold_percent.is_set
	|| adjustment_threshold_value.is_set
	|| overflow_threshold_percent.is_set
	|| overflow_threshold_value.is_set
	|| overflow_threshold_limit.is_set
	|| underflow_threshold_percent.is_set
	|| underflow_threshold_value.is_set
	|| underflow_threshold_limit.is_set
	|| resignal_last_bandwidth_enabled.is_set
	|| resignal_last_bandwidth_timeout.is_set;
}

bool MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::P2pInfo::AutoBandwidthConfig::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(is_auto_bandwidth_collect_only.yfilter)
	|| ydk::is_set(minimum_bandwidth.yfilter)
	|| ydk::is_set(maximum_bandwidth.yfilter)
	|| ydk::is_set(application_frequency.yfilter)
	|| ydk::is_set(collection_frequency.yfilter)
	|| ydk::is_set(adjustment_threshold_percent.yfilter)
	|| ydk::is_set(adjustment_threshold_value.yfilter)
	|| ydk::is_set(overflow_threshold_percent.yfilter)
	|| ydk::is_set(overflow_threshold_value.yfilter)
	|| ydk::is_set(overflow_threshold_limit.yfilter)
	|| ydk::is_set(underflow_threshold_percent.yfilter)
	|| ydk::is_set(underflow_threshold_value.yfilter)
	|| ydk::is_set(underflow_threshold_limit.yfilter)
	|| ydk::is_set(resignal_last_bandwidth_enabled.yfilter)
	|| ydk::is_set(resignal_last_bandwidth_timeout.yfilter);
}

std::string MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::P2pInfo::AutoBandwidthConfig::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "auto-bandwidth-config";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::P2pInfo::AutoBandwidthConfig::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (is_auto_bandwidth_collect_only.is_set || is_set(is_auto_bandwidth_collect_only.yfilter)) leaf_name_data.push_back(is_auto_bandwidth_collect_only.get_name_leafdata());
    if (minimum_bandwidth.is_set || is_set(minimum_bandwidth.yfilter)) leaf_name_data.push_back(minimum_bandwidth.get_name_leafdata());
    if (maximum_bandwidth.is_set || is_set(maximum_bandwidth.yfilter)) leaf_name_data.push_back(maximum_bandwidth.get_name_leafdata());
    if (application_frequency.is_set || is_set(application_frequency.yfilter)) leaf_name_data.push_back(application_frequency.get_name_leafdata());
    if (collection_frequency.is_set || is_set(collection_frequency.yfilter)) leaf_name_data.push_back(collection_frequency.get_name_leafdata());
    if (adjustment_threshold_percent.is_set || is_set(adjustment_threshold_percent.yfilter)) leaf_name_data.push_back(adjustment_threshold_percent.get_name_leafdata());
    if (adjustment_threshold_value.is_set || is_set(adjustment_threshold_value.yfilter)) leaf_name_data.push_back(adjustment_threshold_value.get_name_leafdata());
    if (overflow_threshold_percent.is_set || is_set(overflow_threshold_percent.yfilter)) leaf_name_data.push_back(overflow_threshold_percent.get_name_leafdata());
    if (overflow_threshold_value.is_set || is_set(overflow_threshold_value.yfilter)) leaf_name_data.push_back(overflow_threshold_value.get_name_leafdata());
    if (overflow_threshold_limit.is_set || is_set(overflow_threshold_limit.yfilter)) leaf_name_data.push_back(overflow_threshold_limit.get_name_leafdata());
    if (underflow_threshold_percent.is_set || is_set(underflow_threshold_percent.yfilter)) leaf_name_data.push_back(underflow_threshold_percent.get_name_leafdata());
    if (underflow_threshold_value.is_set || is_set(underflow_threshold_value.yfilter)) leaf_name_data.push_back(underflow_threshold_value.get_name_leafdata());
    if (underflow_threshold_limit.is_set || is_set(underflow_threshold_limit.yfilter)) leaf_name_data.push_back(underflow_threshold_limit.get_name_leafdata());
    if (resignal_last_bandwidth_enabled.is_set || is_set(resignal_last_bandwidth_enabled.yfilter)) leaf_name_data.push_back(resignal_last_bandwidth_enabled.get_name_leafdata());
    if (resignal_last_bandwidth_timeout.is_set || is_set(resignal_last_bandwidth_timeout.yfilter)) leaf_name_data.push_back(resignal_last_bandwidth_timeout.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::P2pInfo::AutoBandwidthConfig::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::P2pInfo::AutoBandwidthConfig::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::P2pInfo::AutoBandwidthConfig::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "is-auto-bandwidth-collect-only")
    {
        is_auto_bandwidth_collect_only = value;
        is_auto_bandwidth_collect_only.value_namespace = name_space;
        is_auto_bandwidth_collect_only.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "minimum-bandwidth")
    {
        minimum_bandwidth = value;
        minimum_bandwidth.value_namespace = name_space;
        minimum_bandwidth.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "maximum-bandwidth")
    {
        maximum_bandwidth = value;
        maximum_bandwidth.value_namespace = name_space;
        maximum_bandwidth.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "application-frequency")
    {
        application_frequency = value;
        application_frequency.value_namespace = name_space;
        application_frequency.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "collection-frequency")
    {
        collection_frequency = value;
        collection_frequency.value_namespace = name_space;
        collection_frequency.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "adjustment-threshold-percent")
    {
        adjustment_threshold_percent = value;
        adjustment_threshold_percent.value_namespace = name_space;
        adjustment_threshold_percent.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "adjustment-threshold-value")
    {
        adjustment_threshold_value = value;
        adjustment_threshold_value.value_namespace = name_space;
        adjustment_threshold_value.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "overflow-threshold-percent")
    {
        overflow_threshold_percent = value;
        overflow_threshold_percent.value_namespace = name_space;
        overflow_threshold_percent.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "overflow-threshold-value")
    {
        overflow_threshold_value = value;
        overflow_threshold_value.value_namespace = name_space;
        overflow_threshold_value.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "overflow-threshold-limit")
    {
        overflow_threshold_limit = value;
        overflow_threshold_limit.value_namespace = name_space;
        overflow_threshold_limit.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "underflow-threshold-percent")
    {
        underflow_threshold_percent = value;
        underflow_threshold_percent.value_namespace = name_space;
        underflow_threshold_percent.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "underflow-threshold-value")
    {
        underflow_threshold_value = value;
        underflow_threshold_value.value_namespace = name_space;
        underflow_threshold_value.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "underflow-threshold-limit")
    {
        underflow_threshold_limit = value;
        underflow_threshold_limit.value_namespace = name_space;
        underflow_threshold_limit.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "resignal-last-bandwidth-enabled")
    {
        resignal_last_bandwidth_enabled = value;
        resignal_last_bandwidth_enabled.value_namespace = name_space;
        resignal_last_bandwidth_enabled.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "resignal-last-bandwidth-timeout")
    {
        resignal_last_bandwidth_timeout = value;
        resignal_last_bandwidth_timeout.value_namespace = name_space;
        resignal_last_bandwidth_timeout.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::P2pInfo::AutoBandwidthConfig::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "is-auto-bandwidth-collect-only")
    {
        is_auto_bandwidth_collect_only.yfilter = yfilter;
    }
    if(value_path == "minimum-bandwidth")
    {
        minimum_bandwidth.yfilter = yfilter;
    }
    if(value_path == "maximum-bandwidth")
    {
        maximum_bandwidth.yfilter = yfilter;
    }
    if(value_path == "application-frequency")
    {
        application_frequency.yfilter = yfilter;
    }
    if(value_path == "collection-frequency")
    {
        collection_frequency.yfilter = yfilter;
    }
    if(value_path == "adjustment-threshold-percent")
    {
        adjustment_threshold_percent.yfilter = yfilter;
    }
    if(value_path == "adjustment-threshold-value")
    {
        adjustment_threshold_value.yfilter = yfilter;
    }
    if(value_path == "overflow-threshold-percent")
    {
        overflow_threshold_percent.yfilter = yfilter;
    }
    if(value_path == "overflow-threshold-value")
    {
        overflow_threshold_value.yfilter = yfilter;
    }
    if(value_path == "overflow-threshold-limit")
    {
        overflow_threshold_limit.yfilter = yfilter;
    }
    if(value_path == "underflow-threshold-percent")
    {
        underflow_threshold_percent.yfilter = yfilter;
    }
    if(value_path == "underflow-threshold-value")
    {
        underflow_threshold_value.yfilter = yfilter;
    }
    if(value_path == "underflow-threshold-limit")
    {
        underflow_threshold_limit.yfilter = yfilter;
    }
    if(value_path == "resignal-last-bandwidth-enabled")
    {
        resignal_last_bandwidth_enabled.yfilter = yfilter;
    }
    if(value_path == "resignal-last-bandwidth-timeout")
    {
        resignal_last_bandwidth_timeout.yfilter = yfilter;
    }
}

bool MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::P2pInfo::AutoBandwidthConfig::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "is-auto-bandwidth-collect-only" || name == "minimum-bandwidth" || name == "maximum-bandwidth" || name == "application-frequency" || name == "collection-frequency" || name == "adjustment-threshold-percent" || name == "adjustment-threshold-value" || name == "overflow-threshold-percent" || name == "overflow-threshold-value" || name == "overflow-threshold-limit" || name == "underflow-threshold-percent" || name == "underflow-threshold-value" || name == "underflow-threshold-limit" || name == "resignal-last-bandwidth-enabled" || name == "resignal-last-bandwidth-timeout")
        return true;
    return false;
}

MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::P2pInfo::AutoBandwidthOper::AutoBandwidthOper()
    :
    last_bandwidth_applied{YType::uint32, "last-bandwidth-applied"},
    bandwidth_pool_type{YType::enumeration, "bandwidth-pool-type"},
    bandwidth_applications{YType::uint32, "bandwidth-applications"},
    last_application_trigger{YType::enumeration, "last-application-trigger"},
    application_jitter{YType::uint32, "application-jitter"},
    time_left_application{YType::uint32, "time-left-application"},
    samples_collected{YType::uint32, "samples-collected"},
    time_left_collection{YType::uint32, "time-left-collection"},
    highest_bandwidth{YType::uint32, "highest-bandwidth"},
    underflow_highest_bandwidth{YType::uint32, "underflow-highest-bandwidth"},
    threshold_overflows{YType::uint32, "threshold-overflows"},
    overflow_early_bw_applications{YType::uint32, "overflow-early-bw-applications"},
    threshold_underflows{YType::uint32, "threshold-underflows"},
    underflow_early_bw_applications{YType::uint32, "underflow-early-bw-applications"},
    collect_only_requested_bandwidth{YType::uint32, "collect-only-requested-bandwidth"},
    application_reject_reason{YType::enumeration, "application-reject-reason"},
    resignal_last_bandwidth_expire_time{YType::uint32, "resignal-last-bandwidth-expire-time"}
{

    yang_name = "auto-bandwidth-oper"; yang_parent_name = "p2p-info"; is_top_level_class = false; has_list_ancestor = true; 
}

MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::P2pInfo::AutoBandwidthOper::~AutoBandwidthOper()
{
}

bool MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::P2pInfo::AutoBandwidthOper::has_data() const
{
    if (is_presence_container) return true;
    return last_bandwidth_applied.is_set
	|| bandwidth_pool_type.is_set
	|| bandwidth_applications.is_set
	|| last_application_trigger.is_set
	|| application_jitter.is_set
	|| time_left_application.is_set
	|| samples_collected.is_set
	|| time_left_collection.is_set
	|| highest_bandwidth.is_set
	|| underflow_highest_bandwidth.is_set
	|| threshold_overflows.is_set
	|| overflow_early_bw_applications.is_set
	|| threshold_underflows.is_set
	|| underflow_early_bw_applications.is_set
	|| collect_only_requested_bandwidth.is_set
	|| application_reject_reason.is_set
	|| resignal_last_bandwidth_expire_time.is_set;
}

bool MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::P2pInfo::AutoBandwidthOper::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(last_bandwidth_applied.yfilter)
	|| ydk::is_set(bandwidth_pool_type.yfilter)
	|| ydk::is_set(bandwidth_applications.yfilter)
	|| ydk::is_set(last_application_trigger.yfilter)
	|| ydk::is_set(application_jitter.yfilter)
	|| ydk::is_set(time_left_application.yfilter)
	|| ydk::is_set(samples_collected.yfilter)
	|| ydk::is_set(time_left_collection.yfilter)
	|| ydk::is_set(highest_bandwidth.yfilter)
	|| ydk::is_set(underflow_highest_bandwidth.yfilter)
	|| ydk::is_set(threshold_overflows.yfilter)
	|| ydk::is_set(overflow_early_bw_applications.yfilter)
	|| ydk::is_set(threshold_underflows.yfilter)
	|| ydk::is_set(underflow_early_bw_applications.yfilter)
	|| ydk::is_set(collect_only_requested_bandwidth.yfilter)
	|| ydk::is_set(application_reject_reason.yfilter)
	|| ydk::is_set(resignal_last_bandwidth_expire_time.yfilter);
}

std::string MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::P2pInfo::AutoBandwidthOper::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "auto-bandwidth-oper";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::P2pInfo::AutoBandwidthOper::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (last_bandwidth_applied.is_set || is_set(last_bandwidth_applied.yfilter)) leaf_name_data.push_back(last_bandwidth_applied.get_name_leafdata());
    if (bandwidth_pool_type.is_set || is_set(bandwidth_pool_type.yfilter)) leaf_name_data.push_back(bandwidth_pool_type.get_name_leafdata());
    if (bandwidth_applications.is_set || is_set(bandwidth_applications.yfilter)) leaf_name_data.push_back(bandwidth_applications.get_name_leafdata());
    if (last_application_trigger.is_set || is_set(last_application_trigger.yfilter)) leaf_name_data.push_back(last_application_trigger.get_name_leafdata());
    if (application_jitter.is_set || is_set(application_jitter.yfilter)) leaf_name_data.push_back(application_jitter.get_name_leafdata());
    if (time_left_application.is_set || is_set(time_left_application.yfilter)) leaf_name_data.push_back(time_left_application.get_name_leafdata());
    if (samples_collected.is_set || is_set(samples_collected.yfilter)) leaf_name_data.push_back(samples_collected.get_name_leafdata());
    if (time_left_collection.is_set || is_set(time_left_collection.yfilter)) leaf_name_data.push_back(time_left_collection.get_name_leafdata());
    if (highest_bandwidth.is_set || is_set(highest_bandwidth.yfilter)) leaf_name_data.push_back(highest_bandwidth.get_name_leafdata());
    if (underflow_highest_bandwidth.is_set || is_set(underflow_highest_bandwidth.yfilter)) leaf_name_data.push_back(underflow_highest_bandwidth.get_name_leafdata());
    if (threshold_overflows.is_set || is_set(threshold_overflows.yfilter)) leaf_name_data.push_back(threshold_overflows.get_name_leafdata());
    if (overflow_early_bw_applications.is_set || is_set(overflow_early_bw_applications.yfilter)) leaf_name_data.push_back(overflow_early_bw_applications.get_name_leafdata());
    if (threshold_underflows.is_set || is_set(threshold_underflows.yfilter)) leaf_name_data.push_back(threshold_underflows.get_name_leafdata());
    if (underflow_early_bw_applications.is_set || is_set(underflow_early_bw_applications.yfilter)) leaf_name_data.push_back(underflow_early_bw_applications.get_name_leafdata());
    if (collect_only_requested_bandwidth.is_set || is_set(collect_only_requested_bandwidth.yfilter)) leaf_name_data.push_back(collect_only_requested_bandwidth.get_name_leafdata());
    if (application_reject_reason.is_set || is_set(application_reject_reason.yfilter)) leaf_name_data.push_back(application_reject_reason.get_name_leafdata());
    if (resignal_last_bandwidth_expire_time.is_set || is_set(resignal_last_bandwidth_expire_time.yfilter)) leaf_name_data.push_back(resignal_last_bandwidth_expire_time.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::P2pInfo::AutoBandwidthOper::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::P2pInfo::AutoBandwidthOper::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::P2pInfo::AutoBandwidthOper::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "last-bandwidth-applied")
    {
        last_bandwidth_applied = value;
        last_bandwidth_applied.value_namespace = name_space;
        last_bandwidth_applied.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bandwidth-pool-type")
    {
        bandwidth_pool_type = value;
        bandwidth_pool_type.value_namespace = name_space;
        bandwidth_pool_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bandwidth-applications")
    {
        bandwidth_applications = value;
        bandwidth_applications.value_namespace = name_space;
        bandwidth_applications.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "last-application-trigger")
    {
        last_application_trigger = value;
        last_application_trigger.value_namespace = name_space;
        last_application_trigger.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "application-jitter")
    {
        application_jitter = value;
        application_jitter.value_namespace = name_space;
        application_jitter.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "time-left-application")
    {
        time_left_application = value;
        time_left_application.value_namespace = name_space;
        time_left_application.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "samples-collected")
    {
        samples_collected = value;
        samples_collected.value_namespace = name_space;
        samples_collected.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "time-left-collection")
    {
        time_left_collection = value;
        time_left_collection.value_namespace = name_space;
        time_left_collection.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "highest-bandwidth")
    {
        highest_bandwidth = value;
        highest_bandwidth.value_namespace = name_space;
        highest_bandwidth.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "underflow-highest-bandwidth")
    {
        underflow_highest_bandwidth = value;
        underflow_highest_bandwidth.value_namespace = name_space;
        underflow_highest_bandwidth.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "threshold-overflows")
    {
        threshold_overflows = value;
        threshold_overflows.value_namespace = name_space;
        threshold_overflows.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "overflow-early-bw-applications")
    {
        overflow_early_bw_applications = value;
        overflow_early_bw_applications.value_namespace = name_space;
        overflow_early_bw_applications.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "threshold-underflows")
    {
        threshold_underflows = value;
        threshold_underflows.value_namespace = name_space;
        threshold_underflows.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "underflow-early-bw-applications")
    {
        underflow_early_bw_applications = value;
        underflow_early_bw_applications.value_namespace = name_space;
        underflow_early_bw_applications.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "collect-only-requested-bandwidth")
    {
        collect_only_requested_bandwidth = value;
        collect_only_requested_bandwidth.value_namespace = name_space;
        collect_only_requested_bandwidth.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "application-reject-reason")
    {
        application_reject_reason = value;
        application_reject_reason.value_namespace = name_space;
        application_reject_reason.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "resignal-last-bandwidth-expire-time")
    {
        resignal_last_bandwidth_expire_time = value;
        resignal_last_bandwidth_expire_time.value_namespace = name_space;
        resignal_last_bandwidth_expire_time.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::P2pInfo::AutoBandwidthOper::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "last-bandwidth-applied")
    {
        last_bandwidth_applied.yfilter = yfilter;
    }
    if(value_path == "bandwidth-pool-type")
    {
        bandwidth_pool_type.yfilter = yfilter;
    }
    if(value_path == "bandwidth-applications")
    {
        bandwidth_applications.yfilter = yfilter;
    }
    if(value_path == "last-application-trigger")
    {
        last_application_trigger.yfilter = yfilter;
    }
    if(value_path == "application-jitter")
    {
        application_jitter.yfilter = yfilter;
    }
    if(value_path == "time-left-application")
    {
        time_left_application.yfilter = yfilter;
    }
    if(value_path == "samples-collected")
    {
        samples_collected.yfilter = yfilter;
    }
    if(value_path == "time-left-collection")
    {
        time_left_collection.yfilter = yfilter;
    }
    if(value_path == "highest-bandwidth")
    {
        highest_bandwidth.yfilter = yfilter;
    }
    if(value_path == "underflow-highest-bandwidth")
    {
        underflow_highest_bandwidth.yfilter = yfilter;
    }
    if(value_path == "threshold-overflows")
    {
        threshold_overflows.yfilter = yfilter;
    }
    if(value_path == "overflow-early-bw-applications")
    {
        overflow_early_bw_applications.yfilter = yfilter;
    }
    if(value_path == "threshold-underflows")
    {
        threshold_underflows.yfilter = yfilter;
    }
    if(value_path == "underflow-early-bw-applications")
    {
        underflow_early_bw_applications.yfilter = yfilter;
    }
    if(value_path == "collect-only-requested-bandwidth")
    {
        collect_only_requested_bandwidth.yfilter = yfilter;
    }
    if(value_path == "application-reject-reason")
    {
        application_reject_reason.yfilter = yfilter;
    }
    if(value_path == "resignal-last-bandwidth-expire-time")
    {
        resignal_last_bandwidth_expire_time.yfilter = yfilter;
    }
}

bool MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::P2pInfo::AutoBandwidthOper::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "last-bandwidth-applied" || name == "bandwidth-pool-type" || name == "bandwidth-applications" || name == "last-application-trigger" || name == "application-jitter" || name == "time-left-application" || name == "samples-collected" || name == "time-left-collection" || name == "highest-bandwidth" || name == "underflow-highest-bandwidth" || name == "threshold-overflows" || name == "overflow-early-bw-applications" || name == "threshold-underflows" || name == "underflow-early-bw-applications" || name == "collect-only-requested-bandwidth" || name == "application-reject-reason" || name == "resignal-last-bandwidth-expire-time")
        return true;
    return false;
}

MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::AutoCapacity::AutoCapacity()
    :
    auto_capacity_configuration(std::make_shared<MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::AutoCapacity::AutoCapacityConfiguration>())
    , auto_capacity_stats(std::make_shared<MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::AutoCapacity::AutoCapacityStats>())
    , clone(this, {})
{
    auto_capacity_configuration->parent = this;
    auto_capacity_stats->parent = this;

    yang_name = "auto-capacity"; yang_parent_name = "tunnel-head"; is_top_level_class = false; has_list_ancestor = true; 
}

MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::AutoCapacity::~AutoCapacity()
{
}

bool MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::AutoCapacity::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<clone.len(); index++)
    {
        if(clone[index]->has_data())
            return true;
    }
    return (auto_capacity_configuration !=  nullptr && auto_capacity_configuration->has_data())
	|| (auto_capacity_stats !=  nullptr && auto_capacity_stats->has_data());
}

bool MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::AutoCapacity::has_operation() const
{
    for (std::size_t index=0; index<clone.len(); index++)
    {
        if(clone[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| (auto_capacity_configuration !=  nullptr && auto_capacity_configuration->has_operation())
	|| (auto_capacity_stats !=  nullptr && auto_capacity_stats->has_operation());
}

std::string MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::AutoCapacity::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "auto-capacity";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::AutoCapacity::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::AutoCapacity::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "auto-capacity-configuration")
    {
        if(auto_capacity_configuration == nullptr)
        {
            auto_capacity_configuration = std::make_shared<MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::AutoCapacity::AutoCapacityConfiguration>();
        }
        return auto_capacity_configuration;
    }

    if(child_yang_name == "auto-capacity-stats")
    {
        if(auto_capacity_stats == nullptr)
        {
            auto_capacity_stats = std::make_shared<MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::AutoCapacity::AutoCapacityStats>();
        }
        return auto_capacity_stats;
    }

    if(child_yang_name == "clone")
    {
        auto ent_ = std::make_shared<MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::AutoCapacity::Clone>();
        ent_->parent = this;
        clone.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::AutoCapacity::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(auto_capacity_configuration != nullptr)
    {
        _children["auto-capacity-configuration"] = auto_capacity_configuration;
    }

    if(auto_capacity_stats != nullptr)
    {
        _children["auto-capacity-stats"] = auto_capacity_stats;
    }

    count_ = 0;
    for (auto ent_ : clone.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::AutoCapacity::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::AutoCapacity::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::AutoCapacity::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "auto-capacity-configuration" || name == "auto-capacity-stats" || name == "clone")
        return true;
    return false;
}

MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::AutoCapacity::AutoCapacityConfiguration::AutoCapacityConfiguration()
    :
    minimum_clones{YType::uint32, "minimum-clones"},
    maximum_clones{YType::uint32, "maximum-clones"},
    merge_bandwidth{YType::uint32, "merge-bandwidth"},
    split_bandwidth{YType::uint32, "split-bandwidth"},
    nominal_bandwidth{YType::uint32, "nominal-bandwidth"}
{

    yang_name = "auto-capacity-configuration"; yang_parent_name = "auto-capacity"; is_top_level_class = false; has_list_ancestor = true; 
}

MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::AutoCapacity::AutoCapacityConfiguration::~AutoCapacityConfiguration()
{
}

bool MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::AutoCapacity::AutoCapacityConfiguration::has_data() const
{
    if (is_presence_container) return true;
    return minimum_clones.is_set
	|| maximum_clones.is_set
	|| merge_bandwidth.is_set
	|| split_bandwidth.is_set
	|| nominal_bandwidth.is_set;
}

bool MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::AutoCapacity::AutoCapacityConfiguration::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(minimum_clones.yfilter)
	|| ydk::is_set(maximum_clones.yfilter)
	|| ydk::is_set(merge_bandwidth.yfilter)
	|| ydk::is_set(split_bandwidth.yfilter)
	|| ydk::is_set(nominal_bandwidth.yfilter);
}

std::string MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::AutoCapacity::AutoCapacityConfiguration::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "auto-capacity-configuration";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::AutoCapacity::AutoCapacityConfiguration::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (minimum_clones.is_set || is_set(minimum_clones.yfilter)) leaf_name_data.push_back(minimum_clones.get_name_leafdata());
    if (maximum_clones.is_set || is_set(maximum_clones.yfilter)) leaf_name_data.push_back(maximum_clones.get_name_leafdata());
    if (merge_bandwidth.is_set || is_set(merge_bandwidth.yfilter)) leaf_name_data.push_back(merge_bandwidth.get_name_leafdata());
    if (split_bandwidth.is_set || is_set(split_bandwidth.yfilter)) leaf_name_data.push_back(split_bandwidth.get_name_leafdata());
    if (nominal_bandwidth.is_set || is_set(nominal_bandwidth.yfilter)) leaf_name_data.push_back(nominal_bandwidth.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::AutoCapacity::AutoCapacityConfiguration::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::AutoCapacity::AutoCapacityConfiguration::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::AutoCapacity::AutoCapacityConfiguration::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "minimum-clones")
    {
        minimum_clones = value;
        minimum_clones.value_namespace = name_space;
        minimum_clones.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "maximum-clones")
    {
        maximum_clones = value;
        maximum_clones.value_namespace = name_space;
        maximum_clones.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "merge-bandwidth")
    {
        merge_bandwidth = value;
        merge_bandwidth.value_namespace = name_space;
        merge_bandwidth.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "split-bandwidth")
    {
        split_bandwidth = value;
        split_bandwidth.value_namespace = name_space;
        split_bandwidth.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nominal-bandwidth")
    {
        nominal_bandwidth = value;
        nominal_bandwidth.value_namespace = name_space;
        nominal_bandwidth.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::AutoCapacity::AutoCapacityConfiguration::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "minimum-clones")
    {
        minimum_clones.yfilter = yfilter;
    }
    if(value_path == "maximum-clones")
    {
        maximum_clones.yfilter = yfilter;
    }
    if(value_path == "merge-bandwidth")
    {
        merge_bandwidth.yfilter = yfilter;
    }
    if(value_path == "split-bandwidth")
    {
        split_bandwidth.yfilter = yfilter;
    }
    if(value_path == "nominal-bandwidth")
    {
        nominal_bandwidth.yfilter = yfilter;
    }
}

bool MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::AutoCapacity::AutoCapacityConfiguration::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "minimum-clones" || name == "maximum-clones" || name == "merge-bandwidth" || name == "split-bandwidth" || name == "nominal-bandwidth")
        return true;
    return false;
}

MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::AutoCapacity::AutoCapacityStats::AutoCapacityStats()
    :
    splits{YType::uint32, "splits"},
    merges{YType::uint32, "merges"},
    total_clones_created{YType::uint32, "total-clones-created"},
    total_clones_deleted{YType::uint32, "total-clones-deleted"},
    high_watermark_clones{YType::uint32, "high-watermark-clones"}
{

    yang_name = "auto-capacity-stats"; yang_parent_name = "auto-capacity"; is_top_level_class = false; has_list_ancestor = true; 
}

MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::AutoCapacity::AutoCapacityStats::~AutoCapacityStats()
{
}

bool MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::AutoCapacity::AutoCapacityStats::has_data() const
{
    if (is_presence_container) return true;
    return splits.is_set
	|| merges.is_set
	|| total_clones_created.is_set
	|| total_clones_deleted.is_set
	|| high_watermark_clones.is_set;
}

bool MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::AutoCapacity::AutoCapacityStats::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(splits.yfilter)
	|| ydk::is_set(merges.yfilter)
	|| ydk::is_set(total_clones_created.yfilter)
	|| ydk::is_set(total_clones_deleted.yfilter)
	|| ydk::is_set(high_watermark_clones.yfilter);
}

std::string MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::AutoCapacity::AutoCapacityStats::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "auto-capacity-stats";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::AutoCapacity::AutoCapacityStats::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (splits.is_set || is_set(splits.yfilter)) leaf_name_data.push_back(splits.get_name_leafdata());
    if (merges.is_set || is_set(merges.yfilter)) leaf_name_data.push_back(merges.get_name_leafdata());
    if (total_clones_created.is_set || is_set(total_clones_created.yfilter)) leaf_name_data.push_back(total_clones_created.get_name_leafdata());
    if (total_clones_deleted.is_set || is_set(total_clones_deleted.yfilter)) leaf_name_data.push_back(total_clones_deleted.get_name_leafdata());
    if (high_watermark_clones.is_set || is_set(high_watermark_clones.yfilter)) leaf_name_data.push_back(high_watermark_clones.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::AutoCapacity::AutoCapacityStats::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::AutoCapacity::AutoCapacityStats::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::AutoCapacity::AutoCapacityStats::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "splits")
    {
        splits = value;
        splits.value_namespace = name_space;
        splits.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "merges")
    {
        merges = value;
        merges.value_namespace = name_space;
        merges.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "total-clones-created")
    {
        total_clones_created = value;
        total_clones_created.value_namespace = name_space;
        total_clones_created.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "total-clones-deleted")
    {
        total_clones_deleted = value;
        total_clones_deleted.value_namespace = name_space;
        total_clones_deleted.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "high-watermark-clones")
    {
        high_watermark_clones = value;
        high_watermark_clones.value_namespace = name_space;
        high_watermark_clones.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::AutoCapacity::AutoCapacityStats::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "splits")
    {
        splits.yfilter = yfilter;
    }
    if(value_path == "merges")
    {
        merges.yfilter = yfilter;
    }
    if(value_path == "total-clones-created")
    {
        total_clones_created.yfilter = yfilter;
    }
    if(value_path == "total-clones-deleted")
    {
        total_clones_deleted.yfilter = yfilter;
    }
    if(value_path == "high-watermark-clones")
    {
        high_watermark_clones.yfilter = yfilter;
    }
}

bool MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::AutoCapacity::AutoCapacityStats::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "splits" || name == "merges" || name == "total-clones-created" || name == "total-clones-deleted" || name == "high-watermark-clones")
        return true;
    return false;
}

MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::AutoCapacity::Clone::Clone()
    :
    name{YType::str, "name"},
    creation_timestamp{YType::uint32, "creation-timestamp"},
    state{YType::enumeration, "state"},
    signaled_bandwidth{YType::uint32, "signaled-bandwidth"},
    current_bandwidth_demand{YType::uint32, "current-bandwidth-demand"}
{

    yang_name = "clone"; yang_parent_name = "auto-capacity"; is_top_level_class = false; has_list_ancestor = true; 
}

MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::AutoCapacity::Clone::~Clone()
{
}

bool MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::AutoCapacity::Clone::has_data() const
{
    if (is_presence_container) return true;
    return name.is_set
	|| creation_timestamp.is_set
	|| state.is_set
	|| signaled_bandwidth.is_set
	|| current_bandwidth_demand.is_set;
}

bool MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::AutoCapacity::Clone::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(creation_timestamp.yfilter)
	|| ydk::is_set(state.yfilter)
	|| ydk::is_set(signaled_bandwidth.yfilter)
	|| ydk::is_set(current_bandwidth_demand.yfilter);
}

std::string MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::AutoCapacity::Clone::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "clone";
    path_buffer << "[" << get_ylist_key() << "]";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::AutoCapacity::Clone::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (creation_timestamp.is_set || is_set(creation_timestamp.yfilter)) leaf_name_data.push_back(creation_timestamp.get_name_leafdata());
    if (state.is_set || is_set(state.yfilter)) leaf_name_data.push_back(state.get_name_leafdata());
    if (signaled_bandwidth.is_set || is_set(signaled_bandwidth.yfilter)) leaf_name_data.push_back(signaled_bandwidth.get_name_leafdata());
    if (current_bandwidth_demand.is_set || is_set(current_bandwidth_demand.yfilter)) leaf_name_data.push_back(current_bandwidth_demand.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::AutoCapacity::Clone::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::AutoCapacity::Clone::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::AutoCapacity::Clone::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "creation-timestamp")
    {
        creation_timestamp = value;
        creation_timestamp.value_namespace = name_space;
        creation_timestamp.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "state")
    {
        state = value;
        state.value_namespace = name_space;
        state.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "signaled-bandwidth")
    {
        signaled_bandwidth = value;
        signaled_bandwidth.value_namespace = name_space;
        signaled_bandwidth.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "current-bandwidth-demand")
    {
        current_bandwidth_demand = value;
        current_bandwidth_demand.value_namespace = name_space;
        current_bandwidth_demand.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::AutoCapacity::Clone::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "creation-timestamp")
    {
        creation_timestamp.yfilter = yfilter;
    }
    if(value_path == "state")
    {
        state.yfilter = yfilter;
    }
    if(value_path == "signaled-bandwidth")
    {
        signaled_bandwidth.yfilter = yfilter;
    }
    if(value_path == "current-bandwidth-demand")
    {
        current_bandwidth_demand.yfilter = yfilter;
    }
}

bool MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::AutoCapacity::Clone::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "name" || name == "creation-timestamp" || name == "state" || name == "signaled-bandwidth" || name == "current-bandwidth-demand")
        return true;
    return false;
}

MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::History::History()
    :
    current_setup(std::make_shared<MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::History::CurrentSetup>())
    , reopt_setup(std::make_shared<MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::History::ReoptSetup>())
    , gmpls_path_protect_setup(std::make_shared<MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::History::GmplsPathProtectSetup>())
    , previous_setup(std::make_shared<MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::History::PreviousSetup>())
    , previous_gmpls_path_protect_setup(std::make_shared<MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::History::PreviousGmplsPathProtectSetup>())
    , gmpls_other_setup(std::make_shared<MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::History::GmplsOtherSetup>())
    , gmpls_other_protect_setup(std::make_shared<MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::History::GmplsOtherProtectSetup>())
    , standby_setup(std::make_shared<MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::History::StandbySetup>())
    , standby_reopt_setup(std::make_shared<MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::History::StandbyReoptSetup>())
    , last_re_opt_fail(std::make_shared<MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::History::LastReOptFail>())
    , last_stdby_re_opt_fail(std::make_shared<MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::History::LastStdbyReOptFail>())
{
    current_setup->parent = this;
    reopt_setup->parent = this;
    gmpls_path_protect_setup->parent = this;
    previous_setup->parent = this;
    previous_gmpls_path_protect_setup->parent = this;
    gmpls_other_setup->parent = this;
    gmpls_other_protect_setup->parent = this;
    standby_setup->parent = this;
    standby_reopt_setup->parent = this;
    last_re_opt_fail->parent = this;
    last_stdby_re_opt_fail->parent = this;

    yang_name = "history"; yang_parent_name = "tunnel-head"; is_top_level_class = false; has_list_ancestor = true; 
}

MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::History::~History()
{
}

bool MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::History::has_data() const
{
    if (is_presence_container) return true;
    return (current_setup !=  nullptr && current_setup->has_data())
	|| (reopt_setup !=  nullptr && reopt_setup->has_data())
	|| (gmpls_path_protect_setup !=  nullptr && gmpls_path_protect_setup->has_data())
	|| (previous_setup !=  nullptr && previous_setup->has_data())
	|| (previous_gmpls_path_protect_setup !=  nullptr && previous_gmpls_path_protect_setup->has_data())
	|| (gmpls_other_setup !=  nullptr && gmpls_other_setup->has_data())
	|| (gmpls_other_protect_setup !=  nullptr && gmpls_other_protect_setup->has_data())
	|| (standby_setup !=  nullptr && standby_setup->has_data())
	|| (standby_reopt_setup !=  nullptr && standby_reopt_setup->has_data())
	|| (last_re_opt_fail !=  nullptr && last_re_opt_fail->has_data())
	|| (last_stdby_re_opt_fail !=  nullptr && last_stdby_re_opt_fail->has_data());
}

bool MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::History::has_operation() const
{
    return is_set(yfilter)
	|| (current_setup !=  nullptr && current_setup->has_operation())
	|| (reopt_setup !=  nullptr && reopt_setup->has_operation())
	|| (gmpls_path_protect_setup !=  nullptr && gmpls_path_protect_setup->has_operation())
	|| (previous_setup !=  nullptr && previous_setup->has_operation())
	|| (previous_gmpls_path_protect_setup !=  nullptr && previous_gmpls_path_protect_setup->has_operation())
	|| (gmpls_other_setup !=  nullptr && gmpls_other_setup->has_operation())
	|| (gmpls_other_protect_setup !=  nullptr && gmpls_other_protect_setup->has_operation())
	|| (standby_setup !=  nullptr && standby_setup->has_operation())
	|| (standby_reopt_setup !=  nullptr && standby_reopt_setup->has_operation())
	|| (last_re_opt_fail !=  nullptr && last_re_opt_fail->has_operation())
	|| (last_stdby_re_opt_fail !=  nullptr && last_stdby_re_opt_fail->has_operation());
}

std::string MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::History::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "history";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::History::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::History::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "current-setup")
    {
        if(current_setup == nullptr)
        {
            current_setup = std::make_shared<MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::History::CurrentSetup>();
        }
        return current_setup;
    }

    if(child_yang_name == "reopt-setup")
    {
        if(reopt_setup == nullptr)
        {
            reopt_setup = std::make_shared<MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::History::ReoptSetup>();
        }
        return reopt_setup;
    }

    if(child_yang_name == "gmpls-path-protect-setup")
    {
        if(gmpls_path_protect_setup == nullptr)
        {
            gmpls_path_protect_setup = std::make_shared<MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::History::GmplsPathProtectSetup>();
        }
        return gmpls_path_protect_setup;
    }

    if(child_yang_name == "previous-setup")
    {
        if(previous_setup == nullptr)
        {
            previous_setup = std::make_shared<MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::History::PreviousSetup>();
        }
        return previous_setup;
    }

    if(child_yang_name == "previous-gmpls-path-protect-setup")
    {
        if(previous_gmpls_path_protect_setup == nullptr)
        {
            previous_gmpls_path_protect_setup = std::make_shared<MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::History::PreviousGmplsPathProtectSetup>();
        }
        return previous_gmpls_path_protect_setup;
    }

    if(child_yang_name == "gmpls-other-setup")
    {
        if(gmpls_other_setup == nullptr)
        {
            gmpls_other_setup = std::make_shared<MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::History::GmplsOtherSetup>();
        }
        return gmpls_other_setup;
    }

    if(child_yang_name == "gmpls-other-protect-setup")
    {
        if(gmpls_other_protect_setup == nullptr)
        {
            gmpls_other_protect_setup = std::make_shared<MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::History::GmplsOtherProtectSetup>();
        }
        return gmpls_other_protect_setup;
    }

    if(child_yang_name == "standby-setup")
    {
        if(standby_setup == nullptr)
        {
            standby_setup = std::make_shared<MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::History::StandbySetup>();
        }
        return standby_setup;
    }

    if(child_yang_name == "standby-reopt-setup")
    {
        if(standby_reopt_setup == nullptr)
        {
            standby_reopt_setup = std::make_shared<MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::History::StandbyReoptSetup>();
        }
        return standby_reopt_setup;
    }

    if(child_yang_name == "last-re-opt-fail")
    {
        if(last_re_opt_fail == nullptr)
        {
            last_re_opt_fail = std::make_shared<MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::History::LastReOptFail>();
        }
        return last_re_opt_fail;
    }

    if(child_yang_name == "last-stdby-re-opt-fail")
    {
        if(last_stdby_re_opt_fail == nullptr)
        {
            last_stdby_re_opt_fail = std::make_shared<MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::History::LastStdbyReOptFail>();
        }
        return last_stdby_re_opt_fail;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::History::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(current_setup != nullptr)
    {
        _children["current-setup"] = current_setup;
    }

    if(reopt_setup != nullptr)
    {
        _children["reopt-setup"] = reopt_setup;
    }

    if(gmpls_path_protect_setup != nullptr)
    {
        _children["gmpls-path-protect-setup"] = gmpls_path_protect_setup;
    }

    if(previous_setup != nullptr)
    {
        _children["previous-setup"] = previous_setup;
    }

    if(previous_gmpls_path_protect_setup != nullptr)
    {
        _children["previous-gmpls-path-protect-setup"] = previous_gmpls_path_protect_setup;
    }

    if(gmpls_other_setup != nullptr)
    {
        _children["gmpls-other-setup"] = gmpls_other_setup;
    }

    if(gmpls_other_protect_setup != nullptr)
    {
        _children["gmpls-other-protect-setup"] = gmpls_other_protect_setup;
    }

    if(standby_setup != nullptr)
    {
        _children["standby-setup"] = standby_setup;
    }

    if(standby_reopt_setup != nullptr)
    {
        _children["standby-reopt-setup"] = standby_reopt_setup;
    }

    if(last_re_opt_fail != nullptr)
    {
        _children["last-re-opt-fail"] = last_re_opt_fail;
    }

    if(last_stdby_re_opt_fail != nullptr)
    {
        _children["last-stdby-re-opt-fail"] = last_stdby_re_opt_fail;
    }

    return _children;
}

void MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::History::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::History::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::History::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "current-setup" || name == "reopt-setup" || name == "gmpls-path-protect-setup" || name == "previous-setup" || name == "previous-gmpls-path-protect-setup" || name == "gmpls-other-setup" || name == "gmpls-other-protect-setup" || name == "standby-setup" || name == "standby-reopt-setup" || name == "last-re-opt-fail" || name == "last-stdby-re-opt-fail")
        return true;
    return false;
}

MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::History::CurrentSetup::CurrentSetup()
    :
    current_setup_timer{YType::uint32, "current-setup-timer"},
    selection_reason{YType::str, "selection-reason"},
    current_setup_last_error{YType::str, "current-setup-last-error"}
        ,
    connected_uptimes(std::make_shared<MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::History::CurrentSetup::ConnectedUptimes>())
{
    connected_uptimes->parent = this;

    yang_name = "current-setup"; yang_parent_name = "history"; is_top_level_class = false; has_list_ancestor = true; 
}

MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::History::CurrentSetup::~CurrentSetup()
{
}

bool MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::History::CurrentSetup::has_data() const
{
    if (is_presence_container) return true;
    return current_setup_timer.is_set
	|| selection_reason.is_set
	|| current_setup_last_error.is_set
	|| (connected_uptimes !=  nullptr && connected_uptimes->has_data());
}

bool MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::History::CurrentSetup::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(current_setup_timer.yfilter)
	|| ydk::is_set(selection_reason.yfilter)
	|| ydk::is_set(current_setup_last_error.yfilter)
	|| (connected_uptimes !=  nullptr && connected_uptimes->has_operation());
}

std::string MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::History::CurrentSetup::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "current-setup";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::History::CurrentSetup::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (current_setup_timer.is_set || is_set(current_setup_timer.yfilter)) leaf_name_data.push_back(current_setup_timer.get_name_leafdata());
    if (selection_reason.is_set || is_set(selection_reason.yfilter)) leaf_name_data.push_back(selection_reason.get_name_leafdata());
    if (current_setup_last_error.is_set || is_set(current_setup_last_error.yfilter)) leaf_name_data.push_back(current_setup_last_error.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::History::CurrentSetup::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "connected-uptimes")
    {
        if(connected_uptimes == nullptr)
        {
            connected_uptimes = std::make_shared<MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::History::CurrentSetup::ConnectedUptimes>();
        }
        return connected_uptimes;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::History::CurrentSetup::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(connected_uptimes != nullptr)
    {
        _children["connected-uptimes"] = connected_uptimes;
    }

    return _children;
}

void MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::History::CurrentSetup::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "current-setup-timer")
    {
        current_setup_timer = value;
        current_setup_timer.value_namespace = name_space;
        current_setup_timer.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "selection-reason")
    {
        selection_reason = value;
        selection_reason.value_namespace = name_space;
        selection_reason.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "current-setup-last-error")
    {
        current_setup_last_error = value;
        current_setup_last_error.value_namespace = name_space;
        current_setup_last_error.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::History::CurrentSetup::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "current-setup-timer")
    {
        current_setup_timer.yfilter = yfilter;
    }
    if(value_path == "selection-reason")
    {
        selection_reason.yfilter = yfilter;
    }
    if(value_path == "current-setup-last-error")
    {
        current_setup_last_error.yfilter = yfilter;
    }
}

bool MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::History::CurrentSetup::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "connected-uptimes" || name == "current-setup-timer" || name == "selection-reason" || name == "current-setup-last-error")
        return true;
    return false;
}

MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::History::CurrentSetup::ConnectedUptimes::ConnectedUptimes()
    :
    current_lsp_uptime{YType::uint32, "current-lsp-uptime"},
    current_uptime{YType::uint32, "current-uptime"}
{

    yang_name = "connected-uptimes"; yang_parent_name = "current-setup"; is_top_level_class = false; has_list_ancestor = true; 
}

MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::History::CurrentSetup::ConnectedUptimes::~ConnectedUptimes()
{
}

bool MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::History::CurrentSetup::ConnectedUptimes::has_data() const
{
    if (is_presence_container) return true;
    return current_lsp_uptime.is_set
	|| current_uptime.is_set;
}

bool MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::History::CurrentSetup::ConnectedUptimes::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(current_lsp_uptime.yfilter)
	|| ydk::is_set(current_uptime.yfilter);
}

std::string MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::History::CurrentSetup::ConnectedUptimes::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "connected-uptimes";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::History::CurrentSetup::ConnectedUptimes::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (current_lsp_uptime.is_set || is_set(current_lsp_uptime.yfilter)) leaf_name_data.push_back(current_lsp_uptime.get_name_leafdata());
    if (current_uptime.is_set || is_set(current_uptime.yfilter)) leaf_name_data.push_back(current_uptime.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::History::CurrentSetup::ConnectedUptimes::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::History::CurrentSetup::ConnectedUptimes::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::History::CurrentSetup::ConnectedUptimes::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "current-lsp-uptime")
    {
        current_lsp_uptime = value;
        current_lsp_uptime.value_namespace = name_space;
        current_lsp_uptime.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "current-uptime")
    {
        current_uptime = value;
        current_uptime.value_namespace = name_space;
        current_uptime.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::History::CurrentSetup::ConnectedUptimes::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "current-lsp-uptime")
    {
        current_lsp_uptime.yfilter = yfilter;
    }
    if(value_path == "current-uptime")
    {
        current_uptime.yfilter = yfilter;
    }
}

bool MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::History::CurrentSetup::ConnectedUptimes::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "current-lsp-uptime" || name == "current-uptime")
        return true;
    return false;
}

MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::History::ReoptSetup::ReoptSetup()
    :
    reoptimized_setup_uptime{YType::uint32, "reoptimized-setup-uptime"},
    reoptimized_setup_timer{YType::uint32, "reoptimized-setup-timer"},
    reoptimized_setup_last_error{YType::str, "reoptimized-setup-last-error"}
{

    yang_name = "reopt-setup"; yang_parent_name = "history"; is_top_level_class = false; has_list_ancestor = true; 
}

MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::History::ReoptSetup::~ReoptSetup()
{
}

bool MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::History::ReoptSetup::has_data() const
{
    if (is_presence_container) return true;
    return reoptimized_setup_uptime.is_set
	|| reoptimized_setup_timer.is_set
	|| reoptimized_setup_last_error.is_set;
}

bool MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::History::ReoptSetup::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(reoptimized_setup_uptime.yfilter)
	|| ydk::is_set(reoptimized_setup_timer.yfilter)
	|| ydk::is_set(reoptimized_setup_last_error.yfilter);
}

std::string MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::History::ReoptSetup::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "reopt-setup";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::History::ReoptSetup::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (reoptimized_setup_uptime.is_set || is_set(reoptimized_setup_uptime.yfilter)) leaf_name_data.push_back(reoptimized_setup_uptime.get_name_leafdata());
    if (reoptimized_setup_timer.is_set || is_set(reoptimized_setup_timer.yfilter)) leaf_name_data.push_back(reoptimized_setup_timer.get_name_leafdata());
    if (reoptimized_setup_last_error.is_set || is_set(reoptimized_setup_last_error.yfilter)) leaf_name_data.push_back(reoptimized_setup_last_error.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::History::ReoptSetup::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::History::ReoptSetup::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::History::ReoptSetup::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "reoptimized-setup-uptime")
    {
        reoptimized_setup_uptime = value;
        reoptimized_setup_uptime.value_namespace = name_space;
        reoptimized_setup_uptime.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "reoptimized-setup-timer")
    {
        reoptimized_setup_timer = value;
        reoptimized_setup_timer.value_namespace = name_space;
        reoptimized_setup_timer.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "reoptimized-setup-last-error")
    {
        reoptimized_setup_last_error = value;
        reoptimized_setup_last_error.value_namespace = name_space;
        reoptimized_setup_last_error.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::History::ReoptSetup::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "reoptimized-setup-uptime")
    {
        reoptimized_setup_uptime.yfilter = yfilter;
    }
    if(value_path == "reoptimized-setup-timer")
    {
        reoptimized_setup_timer.yfilter = yfilter;
    }
    if(value_path == "reoptimized-setup-last-error")
    {
        reoptimized_setup_last_error.yfilter = yfilter;
    }
}

bool MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::History::ReoptSetup::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "reoptimized-setup-uptime" || name == "reoptimized-setup-timer" || name == "reoptimized-setup-last-error")
        return true;
    return false;
}

MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::History::GmplsPathProtectSetup::GmplsPathProtectSetup()
    :
    protecting_setup_uptime{YType::uint32, "protecting-setup-uptime"},
    protecting_setup_timer{YType::uint32, "protecting-setup-timer"},
    protecting_setup_last_error{YType::str, "protecting-setup-last-error"}
{

    yang_name = "gmpls-path-protect-setup"; yang_parent_name = "history"; is_top_level_class = false; has_list_ancestor = true; 
}

MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::History::GmplsPathProtectSetup::~GmplsPathProtectSetup()
{
}

bool MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::History::GmplsPathProtectSetup::has_data() const
{
    if (is_presence_container) return true;
    return protecting_setup_uptime.is_set
	|| protecting_setup_timer.is_set
	|| protecting_setup_last_error.is_set;
}

bool MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::History::GmplsPathProtectSetup::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(protecting_setup_uptime.yfilter)
	|| ydk::is_set(protecting_setup_timer.yfilter)
	|| ydk::is_set(protecting_setup_last_error.yfilter);
}

std::string MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::History::GmplsPathProtectSetup::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "gmpls-path-protect-setup";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::History::GmplsPathProtectSetup::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (protecting_setup_uptime.is_set || is_set(protecting_setup_uptime.yfilter)) leaf_name_data.push_back(protecting_setup_uptime.get_name_leafdata());
    if (protecting_setup_timer.is_set || is_set(protecting_setup_timer.yfilter)) leaf_name_data.push_back(protecting_setup_timer.get_name_leafdata());
    if (protecting_setup_last_error.is_set || is_set(protecting_setup_last_error.yfilter)) leaf_name_data.push_back(protecting_setup_last_error.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::History::GmplsPathProtectSetup::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::History::GmplsPathProtectSetup::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::History::GmplsPathProtectSetup::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "protecting-setup-uptime")
    {
        protecting_setup_uptime = value;
        protecting_setup_uptime.value_namespace = name_space;
        protecting_setup_uptime.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "protecting-setup-timer")
    {
        protecting_setup_timer = value;
        protecting_setup_timer.value_namespace = name_space;
        protecting_setup_timer.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "protecting-setup-last-error")
    {
        protecting_setup_last_error = value;
        protecting_setup_last_error.value_namespace = name_space;
        protecting_setup_last_error.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::History::GmplsPathProtectSetup::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "protecting-setup-uptime")
    {
        protecting_setup_uptime.yfilter = yfilter;
    }
    if(value_path == "protecting-setup-timer")
    {
        protecting_setup_timer.yfilter = yfilter;
    }
    if(value_path == "protecting-setup-last-error")
    {
        protecting_setup_last_error.yfilter = yfilter;
    }
}

bool MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::History::GmplsPathProtectSetup::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "protecting-setup-uptime" || name == "protecting-setup-timer" || name == "protecting-setup-last-error")
        return true;
    return false;
}

MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::History::PreviousSetup::PreviousSetup()
    :
    previous_path_option{YType::str, "previous-path-option"},
    previous_tunnel_instance{YType::uint32, "previous-tunnel-instance"},
    previous_fail_reason{YType::str, "previous-fail-reason"},
    previous_setup_last_error{YType::str, "previous-setup-last-error"}
{

    yang_name = "previous-setup"; yang_parent_name = "history"; is_top_level_class = false; has_list_ancestor = true; 
}

MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::History::PreviousSetup::~PreviousSetup()
{
}

bool MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::History::PreviousSetup::has_data() const
{
    if (is_presence_container) return true;
    return previous_path_option.is_set
	|| previous_tunnel_instance.is_set
	|| previous_fail_reason.is_set
	|| previous_setup_last_error.is_set;
}

bool MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::History::PreviousSetup::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(previous_path_option.yfilter)
	|| ydk::is_set(previous_tunnel_instance.yfilter)
	|| ydk::is_set(previous_fail_reason.yfilter)
	|| ydk::is_set(previous_setup_last_error.yfilter);
}

std::string MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::History::PreviousSetup::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "previous-setup";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::History::PreviousSetup::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (previous_path_option.is_set || is_set(previous_path_option.yfilter)) leaf_name_data.push_back(previous_path_option.get_name_leafdata());
    if (previous_tunnel_instance.is_set || is_set(previous_tunnel_instance.yfilter)) leaf_name_data.push_back(previous_tunnel_instance.get_name_leafdata());
    if (previous_fail_reason.is_set || is_set(previous_fail_reason.yfilter)) leaf_name_data.push_back(previous_fail_reason.get_name_leafdata());
    if (previous_setup_last_error.is_set || is_set(previous_setup_last_error.yfilter)) leaf_name_data.push_back(previous_setup_last_error.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::History::PreviousSetup::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::History::PreviousSetup::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::History::PreviousSetup::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "previous-path-option")
    {
        previous_path_option = value;
        previous_path_option.value_namespace = name_space;
        previous_path_option.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "previous-tunnel-instance")
    {
        previous_tunnel_instance = value;
        previous_tunnel_instance.value_namespace = name_space;
        previous_tunnel_instance.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "previous-fail-reason")
    {
        previous_fail_reason = value;
        previous_fail_reason.value_namespace = name_space;
        previous_fail_reason.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "previous-setup-last-error")
    {
        previous_setup_last_error = value;
        previous_setup_last_error.value_namespace = name_space;
        previous_setup_last_error.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::History::PreviousSetup::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "previous-path-option")
    {
        previous_path_option.yfilter = yfilter;
    }
    if(value_path == "previous-tunnel-instance")
    {
        previous_tunnel_instance.yfilter = yfilter;
    }
    if(value_path == "previous-fail-reason")
    {
        previous_fail_reason.yfilter = yfilter;
    }
    if(value_path == "previous-setup-last-error")
    {
        previous_setup_last_error.yfilter = yfilter;
    }
}

bool MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::History::PreviousSetup::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "previous-path-option" || name == "previous-tunnel-instance" || name == "previous-fail-reason" || name == "previous-setup-last-error")
        return true;
    return false;
}

MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::History::PreviousGmplsPathProtectSetup::PreviousGmplsPathProtectSetup()
    :
    previous_protect_path_option{YType::str, "previous-protect-path-option"},
    previous_protect_tunnel_instance{YType::uint32, "previous-protect-tunnel-instance"},
    previous_protect_fail_reason{YType::str, "previous-protect-fail-reason"},
    previous_protect_setup_last_error{YType::str, "previous-protect-setup-last-error"}
{

    yang_name = "previous-gmpls-path-protect-setup"; yang_parent_name = "history"; is_top_level_class = false; has_list_ancestor = true; 
}

MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::History::PreviousGmplsPathProtectSetup::~PreviousGmplsPathProtectSetup()
{
}

bool MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::History::PreviousGmplsPathProtectSetup::has_data() const
{
    if (is_presence_container) return true;
    return previous_protect_path_option.is_set
	|| previous_protect_tunnel_instance.is_set
	|| previous_protect_fail_reason.is_set
	|| previous_protect_setup_last_error.is_set;
}

bool MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::History::PreviousGmplsPathProtectSetup::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(previous_protect_path_option.yfilter)
	|| ydk::is_set(previous_protect_tunnel_instance.yfilter)
	|| ydk::is_set(previous_protect_fail_reason.yfilter)
	|| ydk::is_set(previous_protect_setup_last_error.yfilter);
}

std::string MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::History::PreviousGmplsPathProtectSetup::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "previous-gmpls-path-protect-setup";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::History::PreviousGmplsPathProtectSetup::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (previous_protect_path_option.is_set || is_set(previous_protect_path_option.yfilter)) leaf_name_data.push_back(previous_protect_path_option.get_name_leafdata());
    if (previous_protect_tunnel_instance.is_set || is_set(previous_protect_tunnel_instance.yfilter)) leaf_name_data.push_back(previous_protect_tunnel_instance.get_name_leafdata());
    if (previous_protect_fail_reason.is_set || is_set(previous_protect_fail_reason.yfilter)) leaf_name_data.push_back(previous_protect_fail_reason.get_name_leafdata());
    if (previous_protect_setup_last_error.is_set || is_set(previous_protect_setup_last_error.yfilter)) leaf_name_data.push_back(previous_protect_setup_last_error.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::History::PreviousGmplsPathProtectSetup::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::History::PreviousGmplsPathProtectSetup::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::History::PreviousGmplsPathProtectSetup::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "previous-protect-path-option")
    {
        previous_protect_path_option = value;
        previous_protect_path_option.value_namespace = name_space;
        previous_protect_path_option.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "previous-protect-tunnel-instance")
    {
        previous_protect_tunnel_instance = value;
        previous_protect_tunnel_instance.value_namespace = name_space;
        previous_protect_tunnel_instance.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "previous-protect-fail-reason")
    {
        previous_protect_fail_reason = value;
        previous_protect_fail_reason.value_namespace = name_space;
        previous_protect_fail_reason.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "previous-protect-setup-last-error")
    {
        previous_protect_setup_last_error = value;
        previous_protect_setup_last_error.value_namespace = name_space;
        previous_protect_setup_last_error.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::History::PreviousGmplsPathProtectSetup::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "previous-protect-path-option")
    {
        previous_protect_path_option.yfilter = yfilter;
    }
    if(value_path == "previous-protect-tunnel-instance")
    {
        previous_protect_tunnel_instance.yfilter = yfilter;
    }
    if(value_path == "previous-protect-fail-reason")
    {
        previous_protect_fail_reason.yfilter = yfilter;
    }
    if(value_path == "previous-protect-setup-last-error")
    {
        previous_protect_setup_last_error.yfilter = yfilter;
    }
}

bool MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::History::PreviousGmplsPathProtectSetup::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "previous-protect-path-option" || name == "previous-protect-tunnel-instance" || name == "previous-protect-fail-reason" || name == "previous-protect-setup-last-error")
        return true;
    return false;
}

MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::History::GmplsOtherSetup::GmplsOtherSetup()
    :
    path_option_index{YType::uint32, "path-option-index"},
    other_setup_error{YType::str, "other-setup-error"}
{

    yang_name = "gmpls-other-setup"; yang_parent_name = "history"; is_top_level_class = false; has_list_ancestor = true; 
}

MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::History::GmplsOtherSetup::~GmplsOtherSetup()
{
}

bool MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::History::GmplsOtherSetup::has_data() const
{
    if (is_presence_container) return true;
    return path_option_index.is_set
	|| other_setup_error.is_set;
}

bool MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::History::GmplsOtherSetup::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(path_option_index.yfilter)
	|| ydk::is_set(other_setup_error.yfilter);
}

std::string MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::History::GmplsOtherSetup::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "gmpls-other-setup";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::History::GmplsOtherSetup::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (path_option_index.is_set || is_set(path_option_index.yfilter)) leaf_name_data.push_back(path_option_index.get_name_leafdata());
    if (other_setup_error.is_set || is_set(other_setup_error.yfilter)) leaf_name_data.push_back(other_setup_error.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::History::GmplsOtherSetup::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::History::GmplsOtherSetup::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::History::GmplsOtherSetup::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "path-option-index")
    {
        path_option_index = value;
        path_option_index.value_namespace = name_space;
        path_option_index.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "other-setup-error")
    {
        other_setup_error = value;
        other_setup_error.value_namespace = name_space;
        other_setup_error.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::History::GmplsOtherSetup::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "path-option-index")
    {
        path_option_index.yfilter = yfilter;
    }
    if(value_path == "other-setup-error")
    {
        other_setup_error.yfilter = yfilter;
    }
}

bool MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::History::GmplsOtherSetup::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "path-option-index" || name == "other-setup-error")
        return true;
    return false;
}

MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::History::GmplsOtherProtectSetup::GmplsOtherProtectSetup()
    :
    path_option_index{YType::uint32, "path-option-index"},
    other_setup_error{YType::str, "other-setup-error"}
{

    yang_name = "gmpls-other-protect-setup"; yang_parent_name = "history"; is_top_level_class = false; has_list_ancestor = true; 
}

MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::History::GmplsOtherProtectSetup::~GmplsOtherProtectSetup()
{
}

bool MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::History::GmplsOtherProtectSetup::has_data() const
{
    if (is_presence_container) return true;
    return path_option_index.is_set
	|| other_setup_error.is_set;
}

bool MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::History::GmplsOtherProtectSetup::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(path_option_index.yfilter)
	|| ydk::is_set(other_setup_error.yfilter);
}

std::string MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::History::GmplsOtherProtectSetup::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "gmpls-other-protect-setup";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::History::GmplsOtherProtectSetup::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (path_option_index.is_set || is_set(path_option_index.yfilter)) leaf_name_data.push_back(path_option_index.get_name_leafdata());
    if (other_setup_error.is_set || is_set(other_setup_error.yfilter)) leaf_name_data.push_back(other_setup_error.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::History::GmplsOtherProtectSetup::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::History::GmplsOtherProtectSetup::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::History::GmplsOtherProtectSetup::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "path-option-index")
    {
        path_option_index = value;
        path_option_index.value_namespace = name_space;
        path_option_index.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "other-setup-error")
    {
        other_setup_error = value;
        other_setup_error.value_namespace = name_space;
        other_setup_error.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::History::GmplsOtherProtectSetup::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "path-option-index")
    {
        path_option_index.yfilter = yfilter;
    }
    if(value_path == "other-setup-error")
    {
        other_setup_error.yfilter = yfilter;
    }
}

bool MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::History::GmplsOtherProtectSetup::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "path-option-index" || name == "other-setup-error")
        return true;
    return false;
}

MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::History::StandbySetup::StandbySetup()
    :
    standby_lsp_uptime{YType::uint32, "standby-lsp-uptime"},
    standby_setup_timer{YType::uint32, "standby-setup-timer"}
{

    yang_name = "standby-setup"; yang_parent_name = "history"; is_top_level_class = false; has_list_ancestor = true; 
}

MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::History::StandbySetup::~StandbySetup()
{
}

bool MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::History::StandbySetup::has_data() const
{
    if (is_presence_container) return true;
    return standby_lsp_uptime.is_set
	|| standby_setup_timer.is_set;
}

bool MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::History::StandbySetup::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(standby_lsp_uptime.yfilter)
	|| ydk::is_set(standby_setup_timer.yfilter);
}

std::string MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::History::StandbySetup::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "standby-setup";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::History::StandbySetup::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (standby_lsp_uptime.is_set || is_set(standby_lsp_uptime.yfilter)) leaf_name_data.push_back(standby_lsp_uptime.get_name_leafdata());
    if (standby_setup_timer.is_set || is_set(standby_setup_timer.yfilter)) leaf_name_data.push_back(standby_setup_timer.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::History::StandbySetup::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::History::StandbySetup::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::History::StandbySetup::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "standby-lsp-uptime")
    {
        standby_lsp_uptime = value;
        standby_lsp_uptime.value_namespace = name_space;
        standby_lsp_uptime.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "standby-setup-timer")
    {
        standby_setup_timer = value;
        standby_setup_timer.value_namespace = name_space;
        standby_setup_timer.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::History::StandbySetup::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "standby-lsp-uptime")
    {
        standby_lsp_uptime.yfilter = yfilter;
    }
    if(value_path == "standby-setup-timer")
    {
        standby_setup_timer.yfilter = yfilter;
    }
}

bool MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::History::StandbySetup::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "standby-lsp-uptime" || name == "standby-setup-timer")
        return true;
    return false;
}

MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::History::StandbyReoptSetup::StandbyReoptSetup()
    :
    reoptimized_setup_uptime{YType::uint32, "reoptimized-setup-uptime"},
    reoptimized_setup_timer{YType::uint32, "reoptimized-setup-timer"},
    reoptimized_setup_last_error{YType::str, "reoptimized-setup-last-error"}
{

    yang_name = "standby-reopt-setup"; yang_parent_name = "history"; is_top_level_class = false; has_list_ancestor = true; 
}

MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::History::StandbyReoptSetup::~StandbyReoptSetup()
{
}

bool MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::History::StandbyReoptSetup::has_data() const
{
    if (is_presence_container) return true;
    return reoptimized_setup_uptime.is_set
	|| reoptimized_setup_timer.is_set
	|| reoptimized_setup_last_error.is_set;
}

bool MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::History::StandbyReoptSetup::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(reoptimized_setup_uptime.yfilter)
	|| ydk::is_set(reoptimized_setup_timer.yfilter)
	|| ydk::is_set(reoptimized_setup_last_error.yfilter);
}

std::string MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::History::StandbyReoptSetup::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "standby-reopt-setup";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::History::StandbyReoptSetup::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (reoptimized_setup_uptime.is_set || is_set(reoptimized_setup_uptime.yfilter)) leaf_name_data.push_back(reoptimized_setup_uptime.get_name_leafdata());
    if (reoptimized_setup_timer.is_set || is_set(reoptimized_setup_timer.yfilter)) leaf_name_data.push_back(reoptimized_setup_timer.get_name_leafdata());
    if (reoptimized_setup_last_error.is_set || is_set(reoptimized_setup_last_error.yfilter)) leaf_name_data.push_back(reoptimized_setup_last_error.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::History::StandbyReoptSetup::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::History::StandbyReoptSetup::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::History::StandbyReoptSetup::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "reoptimized-setup-uptime")
    {
        reoptimized_setup_uptime = value;
        reoptimized_setup_uptime.value_namespace = name_space;
        reoptimized_setup_uptime.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "reoptimized-setup-timer")
    {
        reoptimized_setup_timer = value;
        reoptimized_setup_timer.value_namespace = name_space;
        reoptimized_setup_timer.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "reoptimized-setup-last-error")
    {
        reoptimized_setup_last_error = value;
        reoptimized_setup_last_error.value_namespace = name_space;
        reoptimized_setup_last_error.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::History::StandbyReoptSetup::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "reoptimized-setup-uptime")
    {
        reoptimized_setup_uptime.yfilter = yfilter;
    }
    if(value_path == "reoptimized-setup-timer")
    {
        reoptimized_setup_timer.yfilter = yfilter;
    }
    if(value_path == "reoptimized-setup-last-error")
    {
        reoptimized_setup_last_error.yfilter = yfilter;
    }
}

bool MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::History::StandbyReoptSetup::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "reoptimized-setup-uptime" || name == "reoptimized-setup-timer" || name == "reoptimized-setup-last-error")
        return true;
    return false;
}

MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::History::LastReOptFail::LastReOptFail()
    :
    re_opt_last_fail_reason{YType::enumeration, "re-opt-last-fail-reason"},
    re_opt_failed_destination{YType::str, "re-opt-failed-destination"},
    re_opt_failed_timestamp{YType::uint32, "re-opt-failed-timestamp"}
{

    yang_name = "last-re-opt-fail"; yang_parent_name = "history"; is_top_level_class = false; has_list_ancestor = true; 
}

MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::History::LastReOptFail::~LastReOptFail()
{
}

bool MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::History::LastReOptFail::has_data() const
{
    if (is_presence_container) return true;
    return re_opt_last_fail_reason.is_set
	|| re_opt_failed_destination.is_set
	|| re_opt_failed_timestamp.is_set;
}

bool MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::History::LastReOptFail::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(re_opt_last_fail_reason.yfilter)
	|| ydk::is_set(re_opt_failed_destination.yfilter)
	|| ydk::is_set(re_opt_failed_timestamp.yfilter);
}

std::string MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::History::LastReOptFail::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "last-re-opt-fail";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::History::LastReOptFail::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (re_opt_last_fail_reason.is_set || is_set(re_opt_last_fail_reason.yfilter)) leaf_name_data.push_back(re_opt_last_fail_reason.get_name_leafdata());
    if (re_opt_failed_destination.is_set || is_set(re_opt_failed_destination.yfilter)) leaf_name_data.push_back(re_opt_failed_destination.get_name_leafdata());
    if (re_opt_failed_timestamp.is_set || is_set(re_opt_failed_timestamp.yfilter)) leaf_name_data.push_back(re_opt_failed_timestamp.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::History::LastReOptFail::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::History::LastReOptFail::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::History::LastReOptFail::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "re-opt-last-fail-reason")
    {
        re_opt_last_fail_reason = value;
        re_opt_last_fail_reason.value_namespace = name_space;
        re_opt_last_fail_reason.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "re-opt-failed-destination")
    {
        re_opt_failed_destination = value;
        re_opt_failed_destination.value_namespace = name_space;
        re_opt_failed_destination.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "re-opt-failed-timestamp")
    {
        re_opt_failed_timestamp = value;
        re_opt_failed_timestamp.value_namespace = name_space;
        re_opt_failed_timestamp.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::History::LastReOptFail::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "re-opt-last-fail-reason")
    {
        re_opt_last_fail_reason.yfilter = yfilter;
    }
    if(value_path == "re-opt-failed-destination")
    {
        re_opt_failed_destination.yfilter = yfilter;
    }
    if(value_path == "re-opt-failed-timestamp")
    {
        re_opt_failed_timestamp.yfilter = yfilter;
    }
}

bool MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::History::LastReOptFail::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "re-opt-last-fail-reason" || name == "re-opt-failed-destination" || name == "re-opt-failed-timestamp")
        return true;
    return false;
}

MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::History::LastStdbyReOptFail::LastStdbyReOptFail()
    :
    re_opt_last_fail_reason{YType::enumeration, "re-opt-last-fail-reason"},
    re_opt_failed_destination{YType::str, "re-opt-failed-destination"},
    re_opt_failed_timestamp{YType::uint32, "re-opt-failed-timestamp"}
{

    yang_name = "last-stdby-re-opt-fail"; yang_parent_name = "history"; is_top_level_class = false; has_list_ancestor = true; 
}

MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::History::LastStdbyReOptFail::~LastStdbyReOptFail()
{
}

bool MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::History::LastStdbyReOptFail::has_data() const
{
    if (is_presence_container) return true;
    return re_opt_last_fail_reason.is_set
	|| re_opt_failed_destination.is_set
	|| re_opt_failed_timestamp.is_set;
}

bool MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::History::LastStdbyReOptFail::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(re_opt_last_fail_reason.yfilter)
	|| ydk::is_set(re_opt_failed_destination.yfilter)
	|| ydk::is_set(re_opt_failed_timestamp.yfilter);
}

std::string MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::History::LastStdbyReOptFail::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "last-stdby-re-opt-fail";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::History::LastStdbyReOptFail::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (re_opt_last_fail_reason.is_set || is_set(re_opt_last_fail_reason.yfilter)) leaf_name_data.push_back(re_opt_last_fail_reason.get_name_leafdata());
    if (re_opt_failed_destination.is_set || is_set(re_opt_failed_destination.yfilter)) leaf_name_data.push_back(re_opt_failed_destination.get_name_leafdata());
    if (re_opt_failed_timestamp.is_set || is_set(re_opt_failed_timestamp.yfilter)) leaf_name_data.push_back(re_opt_failed_timestamp.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::History::LastStdbyReOptFail::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::History::LastStdbyReOptFail::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::History::LastStdbyReOptFail::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "re-opt-last-fail-reason")
    {
        re_opt_last_fail_reason = value;
        re_opt_last_fail_reason.value_namespace = name_space;
        re_opt_last_fail_reason.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "re-opt-failed-destination")
    {
        re_opt_failed_destination = value;
        re_opt_failed_destination.value_namespace = name_space;
        re_opt_failed_destination.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "re-opt-failed-timestamp")
    {
        re_opt_failed_timestamp = value;
        re_opt_failed_timestamp.value_namespace = name_space;
        re_opt_failed_timestamp.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::History::LastStdbyReOptFail::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "re-opt-last-fail-reason")
    {
        re_opt_last_fail_reason.yfilter = yfilter;
    }
    if(value_path == "re-opt-failed-destination")
    {
        re_opt_failed_destination.yfilter = yfilter;
    }
    if(value_path == "re-opt-failed-timestamp")
    {
        re_opt_failed_timestamp.yfilter = yfilter;
    }
}

bool MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::History::LastStdbyReOptFail::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "re-opt-last-fail-reason" || name == "re-opt-failed-destination" || name == "re-opt-failed-timestamp")
        return true;
    return false;
}

MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::PathProtection::PathProtection()
    :
    time_of_switchover_sec{YType::uint32, "time-of-switchover-sec"},
    switchover_total{YType::uint16, "switchover-total"},
    switchover_ready{YType::uint16, "switchover-ready"},
    standby_reoptimized_number{YType::uint16, "standby-reoptimized-number"},
    switchover_reason{YType::uint16, "switchover-reason"},
    diversity_type{YType::enumeration, "diversity-type"},
    is_path_protect_configured{YType::boolean, "is-path-protect-configured"},
    path_protection_protected_by_id{YType::uint32, "path-protection-protected-by-id"},
    valid_path_protection_path_option_exists{YType::boolean, "valid-path-protection-path-option-exists"},
    is_path_protect_switch_over_underway{YType::boolean, "is-path-protect-switch-over-underway"},
    reoptimization_time_remaining{YType::uint32, "reoptimization-time-remaining"}
        ,
    switchover(std::make_shared<MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::PathProtection::Switchover>())
{
    switchover->parent = this;

    yang_name = "path-protection"; yang_parent_name = "tunnel-head"; is_top_level_class = false; has_list_ancestor = true; 
}

MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::PathProtection::~PathProtection()
{
}

bool MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::PathProtection::has_data() const
{
    if (is_presence_container) return true;
    return time_of_switchover_sec.is_set
	|| switchover_total.is_set
	|| switchover_ready.is_set
	|| standby_reoptimized_number.is_set
	|| switchover_reason.is_set
	|| diversity_type.is_set
	|| is_path_protect_configured.is_set
	|| path_protection_protected_by_id.is_set
	|| valid_path_protection_path_option_exists.is_set
	|| is_path_protect_switch_over_underway.is_set
	|| reoptimization_time_remaining.is_set
	|| (switchover !=  nullptr && switchover->has_data());
}

bool MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::PathProtection::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(time_of_switchover_sec.yfilter)
	|| ydk::is_set(switchover_total.yfilter)
	|| ydk::is_set(switchover_ready.yfilter)
	|| ydk::is_set(standby_reoptimized_number.yfilter)
	|| ydk::is_set(switchover_reason.yfilter)
	|| ydk::is_set(diversity_type.yfilter)
	|| ydk::is_set(is_path_protect_configured.yfilter)
	|| ydk::is_set(path_protection_protected_by_id.yfilter)
	|| ydk::is_set(valid_path_protection_path_option_exists.yfilter)
	|| ydk::is_set(is_path_protect_switch_over_underway.yfilter)
	|| ydk::is_set(reoptimization_time_remaining.yfilter)
	|| (switchover !=  nullptr && switchover->has_operation());
}

std::string MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::PathProtection::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "path-protection";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::PathProtection::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (time_of_switchover_sec.is_set || is_set(time_of_switchover_sec.yfilter)) leaf_name_data.push_back(time_of_switchover_sec.get_name_leafdata());
    if (switchover_total.is_set || is_set(switchover_total.yfilter)) leaf_name_data.push_back(switchover_total.get_name_leafdata());
    if (switchover_ready.is_set || is_set(switchover_ready.yfilter)) leaf_name_data.push_back(switchover_ready.get_name_leafdata());
    if (standby_reoptimized_number.is_set || is_set(standby_reoptimized_number.yfilter)) leaf_name_data.push_back(standby_reoptimized_number.get_name_leafdata());
    if (switchover_reason.is_set || is_set(switchover_reason.yfilter)) leaf_name_data.push_back(switchover_reason.get_name_leafdata());
    if (diversity_type.is_set || is_set(diversity_type.yfilter)) leaf_name_data.push_back(diversity_type.get_name_leafdata());
    if (is_path_protect_configured.is_set || is_set(is_path_protect_configured.yfilter)) leaf_name_data.push_back(is_path_protect_configured.get_name_leafdata());
    if (path_protection_protected_by_id.is_set || is_set(path_protection_protected_by_id.yfilter)) leaf_name_data.push_back(path_protection_protected_by_id.get_name_leafdata());
    if (valid_path_protection_path_option_exists.is_set || is_set(valid_path_protection_path_option_exists.yfilter)) leaf_name_data.push_back(valid_path_protection_path_option_exists.get_name_leafdata());
    if (is_path_protect_switch_over_underway.is_set || is_set(is_path_protect_switch_over_underway.yfilter)) leaf_name_data.push_back(is_path_protect_switch_over_underway.get_name_leafdata());
    if (reoptimization_time_remaining.is_set || is_set(reoptimization_time_remaining.yfilter)) leaf_name_data.push_back(reoptimization_time_remaining.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::PathProtection::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "switchover")
    {
        if(switchover == nullptr)
        {
            switchover = std::make_shared<MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::PathProtection::Switchover>();
        }
        return switchover;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::PathProtection::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(switchover != nullptr)
    {
        _children["switchover"] = switchover;
    }

    return _children;
}

void MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::PathProtection::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "time-of-switchover-sec")
    {
        time_of_switchover_sec = value;
        time_of_switchover_sec.value_namespace = name_space;
        time_of_switchover_sec.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "switchover-total")
    {
        switchover_total = value;
        switchover_total.value_namespace = name_space;
        switchover_total.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "switchover-ready")
    {
        switchover_ready = value;
        switchover_ready.value_namespace = name_space;
        switchover_ready.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "standby-reoptimized-number")
    {
        standby_reoptimized_number = value;
        standby_reoptimized_number.value_namespace = name_space;
        standby_reoptimized_number.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "switchover-reason")
    {
        switchover_reason = value;
        switchover_reason.value_namespace = name_space;
        switchover_reason.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "diversity-type")
    {
        diversity_type = value;
        diversity_type.value_namespace = name_space;
        diversity_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-path-protect-configured")
    {
        is_path_protect_configured = value;
        is_path_protect_configured.value_namespace = name_space;
        is_path_protect_configured.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "path-protection-protected-by-id")
    {
        path_protection_protected_by_id = value;
        path_protection_protected_by_id.value_namespace = name_space;
        path_protection_protected_by_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "valid-path-protection-path-option-exists")
    {
        valid_path_protection_path_option_exists = value;
        valid_path_protection_path_option_exists.value_namespace = name_space;
        valid_path_protection_path_option_exists.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-path-protect-switch-over-underway")
    {
        is_path_protect_switch_over_underway = value;
        is_path_protect_switch_over_underway.value_namespace = name_space;
        is_path_protect_switch_over_underway.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "reoptimization-time-remaining")
    {
        reoptimization_time_remaining = value;
        reoptimization_time_remaining.value_namespace = name_space;
        reoptimization_time_remaining.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::PathProtection::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "time-of-switchover-sec")
    {
        time_of_switchover_sec.yfilter = yfilter;
    }
    if(value_path == "switchover-total")
    {
        switchover_total.yfilter = yfilter;
    }
    if(value_path == "switchover-ready")
    {
        switchover_ready.yfilter = yfilter;
    }
    if(value_path == "standby-reoptimized-number")
    {
        standby_reoptimized_number.yfilter = yfilter;
    }
    if(value_path == "switchover-reason")
    {
        switchover_reason.yfilter = yfilter;
    }
    if(value_path == "diversity-type")
    {
        diversity_type.yfilter = yfilter;
    }
    if(value_path == "is-path-protect-configured")
    {
        is_path_protect_configured.yfilter = yfilter;
    }
    if(value_path == "path-protection-protected-by-id")
    {
        path_protection_protected_by_id.yfilter = yfilter;
    }
    if(value_path == "valid-path-protection-path-option-exists")
    {
        valid_path_protection_path_option_exists.yfilter = yfilter;
    }
    if(value_path == "is-path-protect-switch-over-underway")
    {
        is_path_protect_switch_over_underway.yfilter = yfilter;
    }
    if(value_path == "reoptimization-time-remaining")
    {
        reoptimization_time_remaining.yfilter = yfilter;
    }
}

bool MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::PathProtection::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "switchover" || name == "time-of-switchover-sec" || name == "switchover-total" || name == "switchover-ready" || name == "standby-reoptimized-number" || name == "switchover-reason" || name == "diversity-type" || name == "is-path-protect-configured" || name == "path-protection-protected-by-id" || name == "valid-path-protection-path-option-exists" || name == "is-path-protect-switch-over-underway" || name == "reoptimization-time-remaining")
        return true;
    return false;
}

MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::PathProtection::Switchover::Switchover()
    :
    path_protection_switchover_event_index{YType::uint32, "path-protection-switchover-event-index"},
    path_protection_tunnel_id{YType::uint16, "path-protection-tunnel-id"},
    from_lsp_id{YType::uint16, "from-lsp-id"},
    to_lsp_id{YType::uint16, "to-lsp-id"},
    date_of_error_detection{YType::uint32, "date-of-error-detection"},
    date_of_error_detection_millisec{YType::uint32, "date-of-error-detection-millisec"},
    switchover_duration_millisec{YType::uint32, "switchover-duration-millisec"},
    path_protection_switchover_reason{YType::enumeration, "path-protection-switchover-reason"}
{

    yang_name = "switchover"; yang_parent_name = "path-protection"; is_top_level_class = false; has_list_ancestor = true; 
}

MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::PathProtection::Switchover::~Switchover()
{
}

bool MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::PathProtection::Switchover::has_data() const
{
    if (is_presence_container) return true;
    return path_protection_switchover_event_index.is_set
	|| path_protection_tunnel_id.is_set
	|| from_lsp_id.is_set
	|| to_lsp_id.is_set
	|| date_of_error_detection.is_set
	|| date_of_error_detection_millisec.is_set
	|| switchover_duration_millisec.is_set
	|| path_protection_switchover_reason.is_set;
}

bool MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::PathProtection::Switchover::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(path_protection_switchover_event_index.yfilter)
	|| ydk::is_set(path_protection_tunnel_id.yfilter)
	|| ydk::is_set(from_lsp_id.yfilter)
	|| ydk::is_set(to_lsp_id.yfilter)
	|| ydk::is_set(date_of_error_detection.yfilter)
	|| ydk::is_set(date_of_error_detection_millisec.yfilter)
	|| ydk::is_set(switchover_duration_millisec.yfilter)
	|| ydk::is_set(path_protection_switchover_reason.yfilter);
}

std::string MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::PathProtection::Switchover::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "switchover";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::PathProtection::Switchover::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (path_protection_switchover_event_index.is_set || is_set(path_protection_switchover_event_index.yfilter)) leaf_name_data.push_back(path_protection_switchover_event_index.get_name_leafdata());
    if (path_protection_tunnel_id.is_set || is_set(path_protection_tunnel_id.yfilter)) leaf_name_data.push_back(path_protection_tunnel_id.get_name_leafdata());
    if (from_lsp_id.is_set || is_set(from_lsp_id.yfilter)) leaf_name_data.push_back(from_lsp_id.get_name_leafdata());
    if (to_lsp_id.is_set || is_set(to_lsp_id.yfilter)) leaf_name_data.push_back(to_lsp_id.get_name_leafdata());
    if (date_of_error_detection.is_set || is_set(date_of_error_detection.yfilter)) leaf_name_data.push_back(date_of_error_detection.get_name_leafdata());
    if (date_of_error_detection_millisec.is_set || is_set(date_of_error_detection_millisec.yfilter)) leaf_name_data.push_back(date_of_error_detection_millisec.get_name_leafdata());
    if (switchover_duration_millisec.is_set || is_set(switchover_duration_millisec.yfilter)) leaf_name_data.push_back(switchover_duration_millisec.get_name_leafdata());
    if (path_protection_switchover_reason.is_set || is_set(path_protection_switchover_reason.yfilter)) leaf_name_data.push_back(path_protection_switchover_reason.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::PathProtection::Switchover::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::PathProtection::Switchover::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::PathProtection::Switchover::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "path-protection-switchover-event-index")
    {
        path_protection_switchover_event_index = value;
        path_protection_switchover_event_index.value_namespace = name_space;
        path_protection_switchover_event_index.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "path-protection-tunnel-id")
    {
        path_protection_tunnel_id = value;
        path_protection_tunnel_id.value_namespace = name_space;
        path_protection_tunnel_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "from-lsp-id")
    {
        from_lsp_id = value;
        from_lsp_id.value_namespace = name_space;
        from_lsp_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "to-lsp-id")
    {
        to_lsp_id = value;
        to_lsp_id.value_namespace = name_space;
        to_lsp_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "date-of-error-detection")
    {
        date_of_error_detection = value;
        date_of_error_detection.value_namespace = name_space;
        date_of_error_detection.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "date-of-error-detection-millisec")
    {
        date_of_error_detection_millisec = value;
        date_of_error_detection_millisec.value_namespace = name_space;
        date_of_error_detection_millisec.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "switchover-duration-millisec")
    {
        switchover_duration_millisec = value;
        switchover_duration_millisec.value_namespace = name_space;
        switchover_duration_millisec.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "path-protection-switchover-reason")
    {
        path_protection_switchover_reason = value;
        path_protection_switchover_reason.value_namespace = name_space;
        path_protection_switchover_reason.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::PathProtection::Switchover::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "path-protection-switchover-event-index")
    {
        path_protection_switchover_event_index.yfilter = yfilter;
    }
    if(value_path == "path-protection-tunnel-id")
    {
        path_protection_tunnel_id.yfilter = yfilter;
    }
    if(value_path == "from-lsp-id")
    {
        from_lsp_id.yfilter = yfilter;
    }
    if(value_path == "to-lsp-id")
    {
        to_lsp_id.yfilter = yfilter;
    }
    if(value_path == "date-of-error-detection")
    {
        date_of_error_detection.yfilter = yfilter;
    }
    if(value_path == "date-of-error-detection-millisec")
    {
        date_of_error_detection_millisec.yfilter = yfilter;
    }
    if(value_path == "switchover-duration-millisec")
    {
        switchover_duration_millisec.yfilter = yfilter;
    }
    if(value_path == "path-protection-switchover-reason")
    {
        path_protection_switchover_reason.yfilter = yfilter;
    }
}

bool MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::PathProtection::Switchover::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "path-protection-switchover-event-index" || name == "path-protection-tunnel-id" || name == "from-lsp-id" || name == "to-lsp-id" || name == "date-of-error-detection" || name == "date-of-error-detection-millisec" || name == "switchover-duration-millisec" || name == "path-protection-switchover-reason")
        return true;
    return false;
}

MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::AutoBackup::AutoBackup()
    :
    protected_ls_ps{YType::uint32, "protected-ls-ps"},
    protected_s2_ls{YType::uint32, "protected-s2-ls"},
    sharing_families{YType::uint32, "sharing-families"},
    ab_protection_type{YType::enumeration, "ab-protection-type"},
    is_using_srlg{YType::boolean, "is-using-srlg"},
    srlg_prot_type{YType::enumeration, "srlg-prot-type"},
    ab_protected_interface{YType::str, "ab-protected-interface"},
    protected_address{YType::str, "protected-address"},
    tunnel_attribute_set_name{YType::str, "tunnel-attribute-set-name"},
    is_unused_removal_timer_running{YType::boolean, "is-unused-removal-timer-running"},
    unused_removal_remaining_time{YType::uint32, "unused-removal-remaining-time"}
        ,
    weighted_srlg_info(std::make_shared<MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::AutoBackup::WeightedSrlgInfo>())
    , iep(this, {})
{
    weighted_srlg_info->parent = this;

    yang_name = "auto-backup"; yang_parent_name = "tunnel-head"; is_top_level_class = false; has_list_ancestor = true; 
}

MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::AutoBackup::~AutoBackup()
{
}

bool MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::AutoBackup::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<iep.len(); index++)
    {
        if(iep[index]->has_data())
            return true;
    }
    return protected_ls_ps.is_set
	|| protected_s2_ls.is_set
	|| sharing_families.is_set
	|| ab_protection_type.is_set
	|| is_using_srlg.is_set
	|| srlg_prot_type.is_set
	|| ab_protected_interface.is_set
	|| protected_address.is_set
	|| tunnel_attribute_set_name.is_set
	|| is_unused_removal_timer_running.is_set
	|| unused_removal_remaining_time.is_set
	|| (weighted_srlg_info !=  nullptr && weighted_srlg_info->has_data());
}

bool MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::AutoBackup::has_operation() const
{
    for (std::size_t index=0; index<iep.len(); index++)
    {
        if(iep[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(protected_ls_ps.yfilter)
	|| ydk::is_set(protected_s2_ls.yfilter)
	|| ydk::is_set(sharing_families.yfilter)
	|| ydk::is_set(ab_protection_type.yfilter)
	|| ydk::is_set(is_using_srlg.yfilter)
	|| ydk::is_set(srlg_prot_type.yfilter)
	|| ydk::is_set(ab_protected_interface.yfilter)
	|| ydk::is_set(protected_address.yfilter)
	|| ydk::is_set(tunnel_attribute_set_name.yfilter)
	|| ydk::is_set(is_unused_removal_timer_running.yfilter)
	|| ydk::is_set(unused_removal_remaining_time.yfilter)
	|| (weighted_srlg_info !=  nullptr && weighted_srlg_info->has_operation());
}

std::string MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::AutoBackup::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "auto-backup";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::AutoBackup::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (protected_ls_ps.is_set || is_set(protected_ls_ps.yfilter)) leaf_name_data.push_back(protected_ls_ps.get_name_leafdata());
    if (protected_s2_ls.is_set || is_set(protected_s2_ls.yfilter)) leaf_name_data.push_back(protected_s2_ls.get_name_leafdata());
    if (sharing_families.is_set || is_set(sharing_families.yfilter)) leaf_name_data.push_back(sharing_families.get_name_leafdata());
    if (ab_protection_type.is_set || is_set(ab_protection_type.yfilter)) leaf_name_data.push_back(ab_protection_type.get_name_leafdata());
    if (is_using_srlg.is_set || is_set(is_using_srlg.yfilter)) leaf_name_data.push_back(is_using_srlg.get_name_leafdata());
    if (srlg_prot_type.is_set || is_set(srlg_prot_type.yfilter)) leaf_name_data.push_back(srlg_prot_type.get_name_leafdata());
    if (ab_protected_interface.is_set || is_set(ab_protected_interface.yfilter)) leaf_name_data.push_back(ab_protected_interface.get_name_leafdata());
    if (protected_address.is_set || is_set(protected_address.yfilter)) leaf_name_data.push_back(protected_address.get_name_leafdata());
    if (tunnel_attribute_set_name.is_set || is_set(tunnel_attribute_set_name.yfilter)) leaf_name_data.push_back(tunnel_attribute_set_name.get_name_leafdata());
    if (is_unused_removal_timer_running.is_set || is_set(is_unused_removal_timer_running.yfilter)) leaf_name_data.push_back(is_unused_removal_timer_running.get_name_leafdata());
    if (unused_removal_remaining_time.is_set || is_set(unused_removal_remaining_time.yfilter)) leaf_name_data.push_back(unused_removal_remaining_time.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::AutoBackup::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "weighted-srlg-info")
    {
        if(weighted_srlg_info == nullptr)
        {
            weighted_srlg_info = std::make_shared<MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::AutoBackup::WeightedSrlgInfo>();
        }
        return weighted_srlg_info;
    }

    if(child_yang_name == "iep")
    {
        auto ent_ = std::make_shared<MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::AutoBackup::Iep>();
        ent_->parent = this;
        iep.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::AutoBackup::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(weighted_srlg_info != nullptr)
    {
        _children["weighted-srlg-info"] = weighted_srlg_info;
    }

    count_ = 0;
    for (auto ent_ : iep.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::AutoBackup::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "protected-ls-ps")
    {
        protected_ls_ps = value;
        protected_ls_ps.value_namespace = name_space;
        protected_ls_ps.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "protected-s2-ls")
    {
        protected_s2_ls = value;
        protected_s2_ls.value_namespace = name_space;
        protected_s2_ls.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sharing-families")
    {
        sharing_families = value;
        sharing_families.value_namespace = name_space;
        sharing_families.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ab-protection-type")
    {
        ab_protection_type = value;
        ab_protection_type.value_namespace = name_space;
        ab_protection_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-using-srlg")
    {
        is_using_srlg = value;
        is_using_srlg.value_namespace = name_space;
        is_using_srlg.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "srlg-prot-type")
    {
        srlg_prot_type = value;
        srlg_prot_type.value_namespace = name_space;
        srlg_prot_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ab-protected-interface")
    {
        ab_protected_interface = value;
        ab_protected_interface.value_namespace = name_space;
        ab_protected_interface.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "protected-address")
    {
        protected_address = value;
        protected_address.value_namespace = name_space;
        protected_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tunnel-attribute-set-name")
    {
        tunnel_attribute_set_name = value;
        tunnel_attribute_set_name.value_namespace = name_space;
        tunnel_attribute_set_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-unused-removal-timer-running")
    {
        is_unused_removal_timer_running = value;
        is_unused_removal_timer_running.value_namespace = name_space;
        is_unused_removal_timer_running.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "unused-removal-remaining-time")
    {
        unused_removal_remaining_time = value;
        unused_removal_remaining_time.value_namespace = name_space;
        unused_removal_remaining_time.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::AutoBackup::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "protected-ls-ps")
    {
        protected_ls_ps.yfilter = yfilter;
    }
    if(value_path == "protected-s2-ls")
    {
        protected_s2_ls.yfilter = yfilter;
    }
    if(value_path == "sharing-families")
    {
        sharing_families.yfilter = yfilter;
    }
    if(value_path == "ab-protection-type")
    {
        ab_protection_type.yfilter = yfilter;
    }
    if(value_path == "is-using-srlg")
    {
        is_using_srlg.yfilter = yfilter;
    }
    if(value_path == "srlg-prot-type")
    {
        srlg_prot_type.yfilter = yfilter;
    }
    if(value_path == "ab-protected-interface")
    {
        ab_protected_interface.yfilter = yfilter;
    }
    if(value_path == "protected-address")
    {
        protected_address.yfilter = yfilter;
    }
    if(value_path == "tunnel-attribute-set-name")
    {
        tunnel_attribute_set_name.yfilter = yfilter;
    }
    if(value_path == "is-unused-removal-timer-running")
    {
        is_unused_removal_timer_running.yfilter = yfilter;
    }
    if(value_path == "unused-removal-remaining-time")
    {
        unused_removal_remaining_time.yfilter = yfilter;
    }
}

bool MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::AutoBackup::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "weighted-srlg-info" || name == "iep" || name == "protected-ls-ps" || name == "protected-s2-ls" || name == "sharing-families" || name == "ab-protection-type" || name == "is-using-srlg" || name == "srlg-prot-type" || name == "ab-protected-interface" || name == "protected-address" || name == "tunnel-attribute-set-name" || name == "is-unused-removal-timer-running" || name == "unused-removal-remaining-time")
        return true;
    return false;
}

MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::AutoBackup::WeightedSrlgInfo::WeightedSrlgInfo()
    :
    protected_interface_srlg(this, {})
    , weighted_srlg_hop(this, {})
{

    yang_name = "weighted-srlg-info"; yang_parent_name = "auto-backup"; is_top_level_class = false; has_list_ancestor = true; 
}

MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::AutoBackup::WeightedSrlgInfo::~WeightedSrlgInfo()
{
}

bool MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::AutoBackup::WeightedSrlgInfo::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<protected_interface_srlg.len(); index++)
    {
        if(protected_interface_srlg[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<weighted_srlg_hop.len(); index++)
    {
        if(weighted_srlg_hop[index]->has_data())
            return true;
    }
    return false;
}

bool MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::AutoBackup::WeightedSrlgInfo::has_operation() const
{
    for (std::size_t index=0; index<protected_interface_srlg.len(); index++)
    {
        if(protected_interface_srlg[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<weighted_srlg_hop.len(); index++)
    {
        if(weighted_srlg_hop[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::AutoBackup::WeightedSrlgInfo::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "weighted-srlg-info";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::AutoBackup::WeightedSrlgInfo::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::AutoBackup::WeightedSrlgInfo::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "protected-interface-srlg")
    {
        auto ent_ = std::make_shared<MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::AutoBackup::WeightedSrlgInfo::ProtectedInterfaceSrlg>();
        ent_->parent = this;
        protected_interface_srlg.append(ent_);
        return ent_;
    }

    if(child_yang_name == "weighted-srlg-hop")
    {
        auto ent_ = std::make_shared<MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::AutoBackup::WeightedSrlgInfo::WeightedSrlgHop>();
        ent_->parent = this;
        weighted_srlg_hop.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::AutoBackup::WeightedSrlgInfo::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : protected_interface_srlg.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    count_ = 0;
    for (auto ent_ : weighted_srlg_hop.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::AutoBackup::WeightedSrlgInfo::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::AutoBackup::WeightedSrlgInfo::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::AutoBackup::WeightedSrlgInfo::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "protected-interface-srlg" || name == "weighted-srlg-hop")
        return true;
    return false;
}

MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::AutoBackup::WeightedSrlgInfo::ProtectedInterfaceSrlg::ProtectedInterfaceSrlg()
    :
    srlg{YType::uint32, "srlg"},
    srlg_name{YType::str, "srlg-name"},
    admin_weight{YType::uint32, "admin-weight"}
{

    yang_name = "protected-interface-srlg"; yang_parent_name = "weighted-srlg-info"; is_top_level_class = false; has_list_ancestor = true; 
}

MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::AutoBackup::WeightedSrlgInfo::ProtectedInterfaceSrlg::~ProtectedInterfaceSrlg()
{
}

bool MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::AutoBackup::WeightedSrlgInfo::ProtectedInterfaceSrlg::has_data() const
{
    if (is_presence_container) return true;
    return srlg.is_set
	|| srlg_name.is_set
	|| admin_weight.is_set;
}

bool MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::AutoBackup::WeightedSrlgInfo::ProtectedInterfaceSrlg::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(srlg.yfilter)
	|| ydk::is_set(srlg_name.yfilter)
	|| ydk::is_set(admin_weight.yfilter);
}

std::string MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::AutoBackup::WeightedSrlgInfo::ProtectedInterfaceSrlg::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "protected-interface-srlg";
    path_buffer << "[" << get_ylist_key() << "]";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::AutoBackup::WeightedSrlgInfo::ProtectedInterfaceSrlg::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (srlg.is_set || is_set(srlg.yfilter)) leaf_name_data.push_back(srlg.get_name_leafdata());
    if (srlg_name.is_set || is_set(srlg_name.yfilter)) leaf_name_data.push_back(srlg_name.get_name_leafdata());
    if (admin_weight.is_set || is_set(admin_weight.yfilter)) leaf_name_data.push_back(admin_weight.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::AutoBackup::WeightedSrlgInfo::ProtectedInterfaceSrlg::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::AutoBackup::WeightedSrlgInfo::ProtectedInterfaceSrlg::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::AutoBackup::WeightedSrlgInfo::ProtectedInterfaceSrlg::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "srlg")
    {
        srlg = value;
        srlg.value_namespace = name_space;
        srlg.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "srlg-name")
    {
        srlg_name = value;
        srlg_name.value_namespace = name_space;
        srlg_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "admin-weight")
    {
        admin_weight = value;
        admin_weight.value_namespace = name_space;
        admin_weight.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::AutoBackup::WeightedSrlgInfo::ProtectedInterfaceSrlg::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "srlg")
    {
        srlg.yfilter = yfilter;
    }
    if(value_path == "srlg-name")
    {
        srlg_name.yfilter = yfilter;
    }
    if(value_path == "admin-weight")
    {
        admin_weight.yfilter = yfilter;
    }
}

bool MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::AutoBackup::WeightedSrlgInfo::ProtectedInterfaceSrlg::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "srlg" || name == "srlg-name" || name == "admin-weight")
        return true;
    return false;
}

MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::AutoBackup::WeightedSrlgInfo::WeightedSrlgHop::WeightedSrlgHop()
    :
    from_address{YType::str, "from-address"},
    to_address{YType::str, "to-address"},
    aggregate_admin_weight{YType::uint64, "aggregate-admin-weight"}
        ,
    common_srlg(this, {})
{

    yang_name = "weighted-srlg-hop"; yang_parent_name = "weighted-srlg-info"; is_top_level_class = false; has_list_ancestor = true; 
}

MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::AutoBackup::WeightedSrlgInfo::WeightedSrlgHop::~WeightedSrlgHop()
{
}

bool MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::AutoBackup::WeightedSrlgInfo::WeightedSrlgHop::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<common_srlg.len(); index++)
    {
        if(common_srlg[index]->has_data())
            return true;
    }
    return from_address.is_set
	|| to_address.is_set
	|| aggregate_admin_weight.is_set;
}

bool MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::AutoBackup::WeightedSrlgInfo::WeightedSrlgHop::has_operation() const
{
    for (std::size_t index=0; index<common_srlg.len(); index++)
    {
        if(common_srlg[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(from_address.yfilter)
	|| ydk::is_set(to_address.yfilter)
	|| ydk::is_set(aggregate_admin_weight.yfilter);
}

std::string MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::AutoBackup::WeightedSrlgInfo::WeightedSrlgHop::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "weighted-srlg-hop";
    path_buffer << "[" << get_ylist_key() << "]";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::AutoBackup::WeightedSrlgInfo::WeightedSrlgHop::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (from_address.is_set || is_set(from_address.yfilter)) leaf_name_data.push_back(from_address.get_name_leafdata());
    if (to_address.is_set || is_set(to_address.yfilter)) leaf_name_data.push_back(to_address.get_name_leafdata());
    if (aggregate_admin_weight.is_set || is_set(aggregate_admin_weight.yfilter)) leaf_name_data.push_back(aggregate_admin_weight.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::AutoBackup::WeightedSrlgInfo::WeightedSrlgHop::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "common-srlg")
    {
        auto ent_ = std::make_shared<MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::AutoBackup::WeightedSrlgInfo::WeightedSrlgHop::CommonSrlg>();
        ent_->parent = this;
        common_srlg.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::AutoBackup::WeightedSrlgInfo::WeightedSrlgHop::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : common_srlg.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::AutoBackup::WeightedSrlgInfo::WeightedSrlgHop::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "from-address")
    {
        from_address = value;
        from_address.value_namespace = name_space;
        from_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "to-address")
    {
        to_address = value;
        to_address.value_namespace = name_space;
        to_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "aggregate-admin-weight")
    {
        aggregate_admin_weight = value;
        aggregate_admin_weight.value_namespace = name_space;
        aggregate_admin_weight.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::AutoBackup::WeightedSrlgInfo::WeightedSrlgHop::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "from-address")
    {
        from_address.yfilter = yfilter;
    }
    if(value_path == "to-address")
    {
        to_address.yfilter = yfilter;
    }
    if(value_path == "aggregate-admin-weight")
    {
        aggregate_admin_weight.yfilter = yfilter;
    }
}

bool MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::AutoBackup::WeightedSrlgInfo::WeightedSrlgHop::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "common-srlg" || name == "from-address" || name == "to-address" || name == "aggregate-admin-weight")
        return true;
    return false;
}

MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::AutoBackup::WeightedSrlgInfo::WeightedSrlgHop::CommonSrlg::CommonSrlg()
    :
    entry{YType::uint32, "entry"}
{

    yang_name = "common-srlg"; yang_parent_name = "weighted-srlg-hop"; is_top_level_class = false; has_list_ancestor = true; 
}

MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::AutoBackup::WeightedSrlgInfo::WeightedSrlgHop::CommonSrlg::~CommonSrlg()
{
}

bool MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::AutoBackup::WeightedSrlgInfo::WeightedSrlgHop::CommonSrlg::has_data() const
{
    if (is_presence_container) return true;
    return entry.is_set;
}

bool MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::AutoBackup::WeightedSrlgInfo::WeightedSrlgHop::CommonSrlg::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(entry.yfilter);
}

std::string MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::AutoBackup::WeightedSrlgInfo::WeightedSrlgHop::CommonSrlg::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "common-srlg";
    path_buffer << "[" << get_ylist_key() << "]";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::AutoBackup::WeightedSrlgInfo::WeightedSrlgHop::CommonSrlg::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (entry.is_set || is_set(entry.yfilter)) leaf_name_data.push_back(entry.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::AutoBackup::WeightedSrlgInfo::WeightedSrlgHop::CommonSrlg::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::AutoBackup::WeightedSrlgInfo::WeightedSrlgHop::CommonSrlg::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::AutoBackup::WeightedSrlgInfo::WeightedSrlgHop::CommonSrlg::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "entry")
    {
        entry = value;
        entry.value_namespace = name_space;
        entry.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::AutoBackup::WeightedSrlgInfo::WeightedSrlgHop::CommonSrlg::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "entry")
    {
        entry.yfilter = yfilter;
    }
}

bool MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::AutoBackup::WeightedSrlgInfo::WeightedSrlgHop::CommonSrlg::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "entry")
        return true;
    return false;
}

MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::AutoBackup::Iep::Iep()
    :
    path_option_id{YType::uint32, "path-option-id"}
        ,
    iep_hop(this, {})
{

    yang_name = "iep"; yang_parent_name = "auto-backup"; is_top_level_class = false; has_list_ancestor = true; 
}

MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::AutoBackup::Iep::~Iep()
{
}

bool MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::AutoBackup::Iep::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<iep_hop.len(); index++)
    {
        if(iep_hop[index]->has_data())
            return true;
    }
    return path_option_id.is_set;
}

bool MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::AutoBackup::Iep::has_operation() const
{
    for (std::size_t index=0; index<iep_hop.len(); index++)
    {
        if(iep_hop[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(path_option_id.yfilter);
}

std::string MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::AutoBackup::Iep::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "iep";
    path_buffer << "[" << get_ylist_key() << "]";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::AutoBackup::Iep::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (path_option_id.is_set || is_set(path_option_id.yfilter)) leaf_name_data.push_back(path_option_id.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::AutoBackup::Iep::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "iep-hop")
    {
        auto ent_ = std::make_shared<MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::AutoBackup::Iep::IepHop>();
        ent_->parent = this;
        iep_hop.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::AutoBackup::Iep::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : iep_hop.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::AutoBackup::Iep::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "path-option-id")
    {
        path_option_id = value;
        path_option_id.value_namespace = name_space;
        path_option_id.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::AutoBackup::Iep::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "path-option-id")
    {
        path_option_id.yfilter = yfilter;
    }
}

bool MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::AutoBackup::Iep::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "iep-hop" || name == "path-option-id")
        return true;
    return false;
}

MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::AutoBackup::Iep::IepHop::IepHop()
    :
    hop_index{YType::uint32, "hop-index"},
    iep_hop_type{YType::enumeration, "iep-hop-type"},
    iep_hop_address{YType::str, "iep-hop-address"}
{

    yang_name = "iep-hop"; yang_parent_name = "iep"; is_top_level_class = false; has_list_ancestor = true; 
}

MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::AutoBackup::Iep::IepHop::~IepHop()
{
}

bool MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::AutoBackup::Iep::IepHop::has_data() const
{
    if (is_presence_container) return true;
    return hop_index.is_set
	|| iep_hop_type.is_set
	|| iep_hop_address.is_set;
}

bool MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::AutoBackup::Iep::IepHop::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(hop_index.yfilter)
	|| ydk::is_set(iep_hop_type.yfilter)
	|| ydk::is_set(iep_hop_address.yfilter);
}

std::string MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::AutoBackup::Iep::IepHop::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "iep-hop";
    path_buffer << "[" << get_ylist_key() << "]";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::AutoBackup::Iep::IepHop::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (hop_index.is_set || is_set(hop_index.yfilter)) leaf_name_data.push_back(hop_index.get_name_leafdata());
    if (iep_hop_type.is_set || is_set(iep_hop_type.yfilter)) leaf_name_data.push_back(iep_hop_type.get_name_leafdata());
    if (iep_hop_address.is_set || is_set(iep_hop_address.yfilter)) leaf_name_data.push_back(iep_hop_address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::AutoBackup::Iep::IepHop::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::AutoBackup::Iep::IepHop::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::AutoBackup::Iep::IepHop::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "hop-index")
    {
        hop_index = value;
        hop_index.value_namespace = name_space;
        hop_index.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "iep-hop-type")
    {
        iep_hop_type = value;
        iep_hop_type.value_namespace = name_space;
        iep_hop_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "iep-hop-address")
    {
        iep_hop_address = value;
        iep_hop_address.value_namespace = name_space;
        iep_hop_address.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::AutoBackup::Iep::IepHop::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "hop-index")
    {
        hop_index.yfilter = yfilter;
    }
    if(value_path == "iep-hop-type")
    {
        iep_hop_type.yfilter = yfilter;
    }
    if(value_path == "iep-hop-address")
    {
        iep_hop_address.yfilter = yfilter;
    }
}

bool MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::AutoBackup::Iep::IepHop::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "hop-index" || name == "iep-hop-type" || name == "iep-hop-address")
        return true;
    return false;
}

MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::AutoMesh::AutoMesh()
    :
    mesh_group_id{YType::uint32, "mesh-group-id"},
    tunnel_destination_list_name{YType::str, "tunnel-destination-list-name"},
    is_tunnel_unused_timer_running{YType::boolean, "is-tunnel-unused-timer-running"},
    remaining_unused_time{YType::uint32, "remaining-unused-time"},
    mesh_group_type{YType::enumeration, "mesh-group-type"}
{

    yang_name = "auto-mesh"; yang_parent_name = "tunnel-head"; is_top_level_class = false; has_list_ancestor = true; 
}

MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::AutoMesh::~AutoMesh()
{
}

bool MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::AutoMesh::has_data() const
{
    if (is_presence_container) return true;
    return mesh_group_id.is_set
	|| tunnel_destination_list_name.is_set
	|| is_tunnel_unused_timer_running.is_set
	|| remaining_unused_time.is_set
	|| mesh_group_type.is_set;
}

bool MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::AutoMesh::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(mesh_group_id.yfilter)
	|| ydk::is_set(tunnel_destination_list_name.yfilter)
	|| ydk::is_set(is_tunnel_unused_timer_running.yfilter)
	|| ydk::is_set(remaining_unused_time.yfilter)
	|| ydk::is_set(mesh_group_type.yfilter);
}

std::string MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::AutoMesh::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "auto-mesh";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::AutoMesh::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (mesh_group_id.is_set || is_set(mesh_group_id.yfilter)) leaf_name_data.push_back(mesh_group_id.get_name_leafdata());
    if (tunnel_destination_list_name.is_set || is_set(tunnel_destination_list_name.yfilter)) leaf_name_data.push_back(tunnel_destination_list_name.get_name_leafdata());
    if (is_tunnel_unused_timer_running.is_set || is_set(is_tunnel_unused_timer_running.yfilter)) leaf_name_data.push_back(is_tunnel_unused_timer_running.get_name_leafdata());
    if (remaining_unused_time.is_set || is_set(remaining_unused_time.yfilter)) leaf_name_data.push_back(remaining_unused_time.get_name_leafdata());
    if (mesh_group_type.is_set || is_set(mesh_group_type.yfilter)) leaf_name_data.push_back(mesh_group_type.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::AutoMesh::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::AutoMesh::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::AutoMesh::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "mesh-group-id")
    {
        mesh_group_id = value;
        mesh_group_id.value_namespace = name_space;
        mesh_group_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tunnel-destination-list-name")
    {
        tunnel_destination_list_name = value;
        tunnel_destination_list_name.value_namespace = name_space;
        tunnel_destination_list_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-tunnel-unused-timer-running")
    {
        is_tunnel_unused_timer_running = value;
        is_tunnel_unused_timer_running.value_namespace = name_space;
        is_tunnel_unused_timer_running.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "remaining-unused-time")
    {
        remaining_unused_time = value;
        remaining_unused_time.value_namespace = name_space;
        remaining_unused_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mesh-group-type")
    {
        mesh_group_type = value;
        mesh_group_type.value_namespace = name_space;
        mesh_group_type.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::AutoMesh::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "mesh-group-id")
    {
        mesh_group_id.yfilter = yfilter;
    }
    if(value_path == "tunnel-destination-list-name")
    {
        tunnel_destination_list_name.yfilter = yfilter;
    }
    if(value_path == "is-tunnel-unused-timer-running")
    {
        is_tunnel_unused_timer_running.yfilter = yfilter;
    }
    if(value_path == "remaining-unused-time")
    {
        remaining_unused_time.yfilter = yfilter;
    }
    if(value_path == "mesh-group-type")
    {
        mesh_group_type.yfilter = yfilter;
    }
}

bool MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::AutoMesh::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "mesh-group-id" || name == "tunnel-destination-list-name" || name == "is-tunnel-unused-timer-running" || name == "remaining-unused-time" || name == "mesh-group-type")
        return true;
    return false;
}

MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::AutoPcc::AutoPcc()
    :
    owner_address{YType::str, "owner-address"},
    creator_address{YType::str, "creator-address"},
    has_creator_id{YType::boolean, "has-creator-id"},
    creator_id{YType::str, "creator-id"},
    plspid{YType::uint32, "plspid"},
    symbolic_name{YType::str, "symbolic-name"},
    operationally_up{YType::boolean, "operationally-up"}
{

    yang_name = "auto-pcc"; yang_parent_name = "tunnel-head"; is_top_level_class = false; has_list_ancestor = true; 
}

MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::AutoPcc::~AutoPcc()
{
}

bool MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::AutoPcc::has_data() const
{
    if (is_presence_container) return true;
    return owner_address.is_set
	|| creator_address.is_set
	|| has_creator_id.is_set
	|| creator_id.is_set
	|| plspid.is_set
	|| symbolic_name.is_set
	|| operationally_up.is_set;
}

bool MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::AutoPcc::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(owner_address.yfilter)
	|| ydk::is_set(creator_address.yfilter)
	|| ydk::is_set(has_creator_id.yfilter)
	|| ydk::is_set(creator_id.yfilter)
	|| ydk::is_set(plspid.yfilter)
	|| ydk::is_set(symbolic_name.yfilter)
	|| ydk::is_set(operationally_up.yfilter);
}

std::string MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::AutoPcc::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "auto-pcc";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::AutoPcc::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (owner_address.is_set || is_set(owner_address.yfilter)) leaf_name_data.push_back(owner_address.get_name_leafdata());
    if (creator_address.is_set || is_set(creator_address.yfilter)) leaf_name_data.push_back(creator_address.get_name_leafdata());
    if (has_creator_id.is_set || is_set(has_creator_id.yfilter)) leaf_name_data.push_back(has_creator_id.get_name_leafdata());
    if (creator_id.is_set || is_set(creator_id.yfilter)) leaf_name_data.push_back(creator_id.get_name_leafdata());
    if (plspid.is_set || is_set(plspid.yfilter)) leaf_name_data.push_back(plspid.get_name_leafdata());
    if (symbolic_name.is_set || is_set(symbolic_name.yfilter)) leaf_name_data.push_back(symbolic_name.get_name_leafdata());
    if (operationally_up.is_set || is_set(operationally_up.yfilter)) leaf_name_data.push_back(operationally_up.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::AutoPcc::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::AutoPcc::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::AutoPcc::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "owner-address")
    {
        owner_address = value;
        owner_address.value_namespace = name_space;
        owner_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "creator-address")
    {
        creator_address = value;
        creator_address.value_namespace = name_space;
        creator_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "has-creator-id")
    {
        has_creator_id = value;
        has_creator_id.value_namespace = name_space;
        has_creator_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "creator-id")
    {
        creator_id = value;
        creator_id.value_namespace = name_space;
        creator_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "plspid")
    {
        plspid = value;
        plspid.value_namespace = name_space;
        plspid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "symbolic-name")
    {
        symbolic_name = value;
        symbolic_name.value_namespace = name_space;
        symbolic_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "operationally-up")
    {
        operationally_up = value;
        operationally_up.value_namespace = name_space;
        operationally_up.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::AutoPcc::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "owner-address")
    {
        owner_address.yfilter = yfilter;
    }
    if(value_path == "creator-address")
    {
        creator_address.yfilter = yfilter;
    }
    if(value_path == "has-creator-id")
    {
        has_creator_id.yfilter = yfilter;
    }
    if(value_path == "creator-id")
    {
        creator_id.yfilter = yfilter;
    }
    if(value_path == "plspid")
    {
        plspid.yfilter = yfilter;
    }
    if(value_path == "symbolic-name")
    {
        symbolic_name.yfilter = yfilter;
    }
    if(value_path == "operationally-up")
    {
        operationally_up.yfilter = yfilter;
    }
}

bool MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::AutoPcc::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "owner-address" || name == "creator-address" || name == "has-creator-id" || name == "creator-id" || name == "plspid" || name == "symbolic-name" || name == "operationally-up")
        return true;
    return false;
}

MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::PceDelegation::PceDelegation()
    :
    plsp_id{YType::uint32, "plsp-id"},
    symbolic_name{YType::str, "symbolic-name"},
    owner_address{YType::str, "owner-address"},
    operationally_up{YType::boolean, "operationally-up"}
{

    yang_name = "pce-delegation"; yang_parent_name = "tunnel-head"; is_top_level_class = false; has_list_ancestor = true; 
}

MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::PceDelegation::~PceDelegation()
{
}

bool MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::PceDelegation::has_data() const
{
    if (is_presence_container) return true;
    return plsp_id.is_set
	|| symbolic_name.is_set
	|| owner_address.is_set
	|| operationally_up.is_set;
}

bool MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::PceDelegation::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(plsp_id.yfilter)
	|| ydk::is_set(symbolic_name.yfilter)
	|| ydk::is_set(owner_address.yfilter)
	|| ydk::is_set(operationally_up.yfilter);
}

std::string MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::PceDelegation::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "pce-delegation";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::PceDelegation::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (plsp_id.is_set || is_set(plsp_id.yfilter)) leaf_name_data.push_back(plsp_id.get_name_leafdata());
    if (symbolic_name.is_set || is_set(symbolic_name.yfilter)) leaf_name_data.push_back(symbolic_name.get_name_leafdata());
    if (owner_address.is_set || is_set(owner_address.yfilter)) leaf_name_data.push_back(owner_address.get_name_leafdata());
    if (operationally_up.is_set || is_set(operationally_up.yfilter)) leaf_name_data.push_back(operationally_up.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::PceDelegation::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::PceDelegation::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::PceDelegation::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "plsp-id")
    {
        plsp_id = value;
        plsp_id.value_namespace = name_space;
        plsp_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "symbolic-name")
    {
        symbolic_name = value;
        symbolic_name.value_namespace = name_space;
        symbolic_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "owner-address")
    {
        owner_address = value;
        owner_address.value_namespace = name_space;
        owner_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "operationally-up")
    {
        operationally_up = value;
        operationally_up.value_namespace = name_space;
        operationally_up.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::PceDelegation::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "plsp-id")
    {
        plsp_id.yfilter = yfilter;
    }
    if(value_path == "symbolic-name")
    {
        symbolic_name.yfilter = yfilter;
    }
    if(value_path == "owner-address")
    {
        owner_address.yfilter = yfilter;
    }
    if(value_path == "operationally-up")
    {
        operationally_up.yfilter = yfilter;
    }
}

bool MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::PceDelegation::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "plsp-id" || name == "symbolic-name" || name == "owner-address" || name == "operationally-up")
        return true;
    return false;
}

MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::SoftPreemption::SoftPreemption()
    :
    status{YType::enumeration, "status"},
    time_in_preemption_pending{YType::uint16, "time-in-preemption-pending"},
    preemption_pending_resolution{YType::enumeration, "preemption-pending-resolution"}
        ,
    soft_preemption_counters(std::make_shared<MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::SoftPreemption::SoftPreemptionCounters>())
    , soft_preemption_path_error(this, {})
{
    soft_preemption_counters->parent = this;

    yang_name = "soft-preemption"; yang_parent_name = "tunnel-head"; is_top_level_class = false; has_list_ancestor = true; 
}

MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::SoftPreemption::~SoftPreemption()
{
}

bool MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::SoftPreemption::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<soft_preemption_path_error.len(); index++)
    {
        if(soft_preemption_path_error[index]->has_data())
            return true;
    }
    return status.is_set
	|| time_in_preemption_pending.is_set
	|| preemption_pending_resolution.is_set
	|| (soft_preemption_counters !=  nullptr && soft_preemption_counters->has_data());
}

bool MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::SoftPreemption::has_operation() const
{
    for (std::size_t index=0; index<soft_preemption_path_error.len(); index++)
    {
        if(soft_preemption_path_error[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(status.yfilter)
	|| ydk::is_set(time_in_preemption_pending.yfilter)
	|| ydk::is_set(preemption_pending_resolution.yfilter)
	|| (soft_preemption_counters !=  nullptr && soft_preemption_counters->has_operation());
}

std::string MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::SoftPreemption::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "soft-preemption";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::SoftPreemption::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (status.is_set || is_set(status.yfilter)) leaf_name_data.push_back(status.get_name_leafdata());
    if (time_in_preemption_pending.is_set || is_set(time_in_preemption_pending.yfilter)) leaf_name_data.push_back(time_in_preemption_pending.get_name_leafdata());
    if (preemption_pending_resolution.is_set || is_set(preemption_pending_resolution.yfilter)) leaf_name_data.push_back(preemption_pending_resolution.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::SoftPreemption::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "soft-preemption-counters")
    {
        if(soft_preemption_counters == nullptr)
        {
            soft_preemption_counters = std::make_shared<MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::SoftPreemption::SoftPreemptionCounters>();
        }
        return soft_preemption_counters;
    }

    if(child_yang_name == "soft-preemption-path-error")
    {
        auto ent_ = std::make_shared<MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::SoftPreemption::SoftPreemptionPathError>();
        ent_->parent = this;
        soft_preemption_path_error.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::SoftPreemption::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(soft_preemption_counters != nullptr)
    {
        _children["soft-preemption-counters"] = soft_preemption_counters;
    }

    count_ = 0;
    for (auto ent_ : soft_preemption_path_error.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::SoftPreemption::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "status")
    {
        status = value;
        status.value_namespace = name_space;
        status.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "time-in-preemption-pending")
    {
        time_in_preemption_pending = value;
        time_in_preemption_pending.value_namespace = name_space;
        time_in_preemption_pending.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "preemption-pending-resolution")
    {
        preemption_pending_resolution = value;
        preemption_pending_resolution.value_namespace = name_space;
        preemption_pending_resolution.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::SoftPreemption::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "status")
    {
        status.yfilter = yfilter;
    }
    if(value_path == "time-in-preemption-pending")
    {
        time_in_preemption_pending.yfilter = yfilter;
    }
    if(value_path == "preemption-pending-resolution")
    {
        preemption_pending_resolution.yfilter = yfilter;
    }
}

bool MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::SoftPreemption::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "soft-preemption-counters" || name == "soft-preemption-path-error" || name == "status" || name == "time-in-preemption-pending" || name == "preemption-pending-resolution")
        return true;
    return false;
}

MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::SoftPreemption::SoftPreemptionCounters::SoftPreemptionCounters()
    :
    soft_preemption_events{YType::uint32, "soft-preemption-events"},
    reopt_completed_ls_ps{YType::uint32, "reopt-completed-ls-ps"},
    torn_down_ls_ps{YType::uint32, "torn-down-ls-ps"},
    path_protection_switchover_ls_ps{YType::uint32, "path-protection-switchover-ls-ps"},
    frr_triggered_ls_ps{YType::uint32, "frr-triggered-ls-ps"},
    time_in_preemption_pending_min{YType::uint16, "time-in-preemption-pending-min"},
    time_in_preemption_pending_max{YType::uint16, "time-in-preemption-pending-max"},
    time_in_preemption_pending_avg{YType::uint16, "time-in-preemption-pending-avg"}
{

    yang_name = "soft-preemption-counters"; yang_parent_name = "soft-preemption"; is_top_level_class = false; has_list_ancestor = true; 
}

MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::SoftPreemption::SoftPreemptionCounters::~SoftPreemptionCounters()
{
}

bool MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::SoftPreemption::SoftPreemptionCounters::has_data() const
{
    if (is_presence_container) return true;
    return soft_preemption_events.is_set
	|| reopt_completed_ls_ps.is_set
	|| torn_down_ls_ps.is_set
	|| path_protection_switchover_ls_ps.is_set
	|| frr_triggered_ls_ps.is_set
	|| time_in_preemption_pending_min.is_set
	|| time_in_preemption_pending_max.is_set
	|| time_in_preemption_pending_avg.is_set;
}

bool MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::SoftPreemption::SoftPreemptionCounters::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(soft_preemption_events.yfilter)
	|| ydk::is_set(reopt_completed_ls_ps.yfilter)
	|| ydk::is_set(torn_down_ls_ps.yfilter)
	|| ydk::is_set(path_protection_switchover_ls_ps.yfilter)
	|| ydk::is_set(frr_triggered_ls_ps.yfilter)
	|| ydk::is_set(time_in_preemption_pending_min.yfilter)
	|| ydk::is_set(time_in_preemption_pending_max.yfilter)
	|| ydk::is_set(time_in_preemption_pending_avg.yfilter);
}

std::string MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::SoftPreemption::SoftPreemptionCounters::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "soft-preemption-counters";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::SoftPreemption::SoftPreemptionCounters::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (soft_preemption_events.is_set || is_set(soft_preemption_events.yfilter)) leaf_name_data.push_back(soft_preemption_events.get_name_leafdata());
    if (reopt_completed_ls_ps.is_set || is_set(reopt_completed_ls_ps.yfilter)) leaf_name_data.push_back(reopt_completed_ls_ps.get_name_leafdata());
    if (torn_down_ls_ps.is_set || is_set(torn_down_ls_ps.yfilter)) leaf_name_data.push_back(torn_down_ls_ps.get_name_leafdata());
    if (path_protection_switchover_ls_ps.is_set || is_set(path_protection_switchover_ls_ps.yfilter)) leaf_name_data.push_back(path_protection_switchover_ls_ps.get_name_leafdata());
    if (frr_triggered_ls_ps.is_set || is_set(frr_triggered_ls_ps.yfilter)) leaf_name_data.push_back(frr_triggered_ls_ps.get_name_leafdata());
    if (time_in_preemption_pending_min.is_set || is_set(time_in_preemption_pending_min.yfilter)) leaf_name_data.push_back(time_in_preemption_pending_min.get_name_leafdata());
    if (time_in_preemption_pending_max.is_set || is_set(time_in_preemption_pending_max.yfilter)) leaf_name_data.push_back(time_in_preemption_pending_max.get_name_leafdata());
    if (time_in_preemption_pending_avg.is_set || is_set(time_in_preemption_pending_avg.yfilter)) leaf_name_data.push_back(time_in_preemption_pending_avg.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::SoftPreemption::SoftPreemptionCounters::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::SoftPreemption::SoftPreemptionCounters::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::SoftPreemption::SoftPreemptionCounters::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "soft-preemption-events")
    {
        soft_preemption_events = value;
        soft_preemption_events.value_namespace = name_space;
        soft_preemption_events.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "reopt-completed-ls-ps")
    {
        reopt_completed_ls_ps = value;
        reopt_completed_ls_ps.value_namespace = name_space;
        reopt_completed_ls_ps.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "torn-down-ls-ps")
    {
        torn_down_ls_ps = value;
        torn_down_ls_ps.value_namespace = name_space;
        torn_down_ls_ps.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "path-protection-switchover-ls-ps")
    {
        path_protection_switchover_ls_ps = value;
        path_protection_switchover_ls_ps.value_namespace = name_space;
        path_protection_switchover_ls_ps.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "frr-triggered-ls-ps")
    {
        frr_triggered_ls_ps = value;
        frr_triggered_ls_ps.value_namespace = name_space;
        frr_triggered_ls_ps.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "time-in-preemption-pending-min")
    {
        time_in_preemption_pending_min = value;
        time_in_preemption_pending_min.value_namespace = name_space;
        time_in_preemption_pending_min.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "time-in-preemption-pending-max")
    {
        time_in_preemption_pending_max = value;
        time_in_preemption_pending_max.value_namespace = name_space;
        time_in_preemption_pending_max.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "time-in-preemption-pending-avg")
    {
        time_in_preemption_pending_avg = value;
        time_in_preemption_pending_avg.value_namespace = name_space;
        time_in_preemption_pending_avg.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::SoftPreemption::SoftPreemptionCounters::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "soft-preemption-events")
    {
        soft_preemption_events.yfilter = yfilter;
    }
    if(value_path == "reopt-completed-ls-ps")
    {
        reopt_completed_ls_ps.yfilter = yfilter;
    }
    if(value_path == "torn-down-ls-ps")
    {
        torn_down_ls_ps.yfilter = yfilter;
    }
    if(value_path == "path-protection-switchover-ls-ps")
    {
        path_protection_switchover_ls_ps.yfilter = yfilter;
    }
    if(value_path == "frr-triggered-ls-ps")
    {
        frr_triggered_ls_ps.yfilter = yfilter;
    }
    if(value_path == "time-in-preemption-pending-min")
    {
        time_in_preemption_pending_min.yfilter = yfilter;
    }
    if(value_path == "time-in-preemption-pending-max")
    {
        time_in_preemption_pending_max.yfilter = yfilter;
    }
    if(value_path == "time-in-preemption-pending-avg")
    {
        time_in_preemption_pending_avg.yfilter = yfilter;
    }
}

bool MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::SoftPreemption::SoftPreemptionCounters::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "soft-preemption-events" || name == "reopt-completed-ls-ps" || name == "torn-down-ls-ps" || name == "path-protection-switchover-ls-ps" || name == "frr-triggered-ls-ps" || name == "time-in-preemption-pending-min" || name == "time-in-preemption-pending-max" || name == "time-in-preemption-pending-avg")
        return true;
    return false;
}

MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::SoftPreemption::SoftPreemptionPathError::SoftPreemptionPathError()
    :
    timestamp{YType::uint32, "timestamp"},
    preempting_link_address{YType::str, "preempting-link-address"}
{

    yang_name = "soft-preemption-path-error"; yang_parent_name = "soft-preemption"; is_top_level_class = false; has_list_ancestor = true; 
}

MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::SoftPreemption::SoftPreemptionPathError::~SoftPreemptionPathError()
{
}

bool MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::SoftPreemption::SoftPreemptionPathError::has_data() const
{
    if (is_presence_container) return true;
    return timestamp.is_set
	|| preempting_link_address.is_set;
}

bool MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::SoftPreemption::SoftPreemptionPathError::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(timestamp.yfilter)
	|| ydk::is_set(preempting_link_address.yfilter);
}

std::string MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::SoftPreemption::SoftPreemptionPathError::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "soft-preemption-path-error";
    path_buffer << "[" << get_ylist_key() << "]";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::SoftPreemption::SoftPreemptionPathError::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (timestamp.is_set || is_set(timestamp.yfilter)) leaf_name_data.push_back(timestamp.get_name_leafdata());
    if (preempting_link_address.is_set || is_set(preempting_link_address.yfilter)) leaf_name_data.push_back(preempting_link_address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::SoftPreemption::SoftPreemptionPathError::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::SoftPreemption::SoftPreemptionPathError::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::SoftPreemption::SoftPreemptionPathError::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "timestamp")
    {
        timestamp = value;
        timestamp.value_namespace = name_space;
        timestamp.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "preempting-link-address")
    {
        preempting_link_address = value;
        preempting_link_address.value_namespace = name_space;
        preempting_link_address.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::SoftPreemption::SoftPreemptionPathError::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "timestamp")
    {
        timestamp.yfilter = yfilter;
    }
    if(value_path == "preempting-link-address")
    {
        preempting_link_address.yfilter = yfilter;
    }
}

bool MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::SoftPreemption::SoftPreemptionPathError::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "timestamp" || name == "preempting-link-address")
        return true;
    return false;
}

MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::WdmUnitunnel::WdmUnitunnel()
    :
    tunnel_state{YType::enumeration, "tunnel-state"},
    tunnel_role{YType::enumeration, "tunnel-role"},
    tunnel_id{YType::uint16, "tunnel-id"},
    lsp_id{YType::uint16, "lsp-id"},
    local_optical_router_id{YType::str, "local-optical-router-id"},
    remote_optical_router_id{YType::str, "remote-optical-router-id"},
    controlled_interface{YType::str, "controlled-interface"},
    source_address{YType::str, "source-address"},
    destination_address{YType::str, "destination-address"},
    extended_tunnel_id{YType::str, "extended-tunnel-id"},
    label_origin{YType::enumeration, "label-origin"},
    srlg_discovery{YType::boolean, "srlg-discovery"}
{

    yang_name = "wdm-unitunnel"; yang_parent_name = "tunnel-head"; is_top_level_class = false; has_list_ancestor = true; 
}

MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::WdmUnitunnel::~WdmUnitunnel()
{
}

bool MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::WdmUnitunnel::has_data() const
{
    if (is_presence_container) return true;
    return tunnel_state.is_set
	|| tunnel_role.is_set
	|| tunnel_id.is_set
	|| lsp_id.is_set
	|| local_optical_router_id.is_set
	|| remote_optical_router_id.is_set
	|| controlled_interface.is_set
	|| source_address.is_set
	|| destination_address.is_set
	|| extended_tunnel_id.is_set
	|| label_origin.is_set
	|| srlg_discovery.is_set;
}

bool MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::WdmUnitunnel::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(tunnel_state.yfilter)
	|| ydk::is_set(tunnel_role.yfilter)
	|| ydk::is_set(tunnel_id.yfilter)
	|| ydk::is_set(lsp_id.yfilter)
	|| ydk::is_set(local_optical_router_id.yfilter)
	|| ydk::is_set(remote_optical_router_id.yfilter)
	|| ydk::is_set(controlled_interface.yfilter)
	|| ydk::is_set(source_address.yfilter)
	|| ydk::is_set(destination_address.yfilter)
	|| ydk::is_set(extended_tunnel_id.yfilter)
	|| ydk::is_set(label_origin.yfilter)
	|| ydk::is_set(srlg_discovery.yfilter);
}

std::string MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::WdmUnitunnel::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "wdm-unitunnel";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::WdmUnitunnel::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (tunnel_state.is_set || is_set(tunnel_state.yfilter)) leaf_name_data.push_back(tunnel_state.get_name_leafdata());
    if (tunnel_role.is_set || is_set(tunnel_role.yfilter)) leaf_name_data.push_back(tunnel_role.get_name_leafdata());
    if (tunnel_id.is_set || is_set(tunnel_id.yfilter)) leaf_name_data.push_back(tunnel_id.get_name_leafdata());
    if (lsp_id.is_set || is_set(lsp_id.yfilter)) leaf_name_data.push_back(lsp_id.get_name_leafdata());
    if (local_optical_router_id.is_set || is_set(local_optical_router_id.yfilter)) leaf_name_data.push_back(local_optical_router_id.get_name_leafdata());
    if (remote_optical_router_id.is_set || is_set(remote_optical_router_id.yfilter)) leaf_name_data.push_back(remote_optical_router_id.get_name_leafdata());
    if (controlled_interface.is_set || is_set(controlled_interface.yfilter)) leaf_name_data.push_back(controlled_interface.get_name_leafdata());
    if (source_address.is_set || is_set(source_address.yfilter)) leaf_name_data.push_back(source_address.get_name_leafdata());
    if (destination_address.is_set || is_set(destination_address.yfilter)) leaf_name_data.push_back(destination_address.get_name_leafdata());
    if (extended_tunnel_id.is_set || is_set(extended_tunnel_id.yfilter)) leaf_name_data.push_back(extended_tunnel_id.get_name_leafdata());
    if (label_origin.is_set || is_set(label_origin.yfilter)) leaf_name_data.push_back(label_origin.get_name_leafdata());
    if (srlg_discovery.is_set || is_set(srlg_discovery.yfilter)) leaf_name_data.push_back(srlg_discovery.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::WdmUnitunnel::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::WdmUnitunnel::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::WdmUnitunnel::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "tunnel-state")
    {
        tunnel_state = value;
        tunnel_state.value_namespace = name_space;
        tunnel_state.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tunnel-role")
    {
        tunnel_role = value;
        tunnel_role.value_namespace = name_space;
        tunnel_role.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tunnel-id")
    {
        tunnel_id = value;
        tunnel_id.value_namespace = name_space;
        tunnel_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lsp-id")
    {
        lsp_id = value;
        lsp_id.value_namespace = name_space;
        lsp_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "local-optical-router-id")
    {
        local_optical_router_id = value;
        local_optical_router_id.value_namespace = name_space;
        local_optical_router_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "remote-optical-router-id")
    {
        remote_optical_router_id = value;
        remote_optical_router_id.value_namespace = name_space;
        remote_optical_router_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "controlled-interface")
    {
        controlled_interface = value;
        controlled_interface.value_namespace = name_space;
        controlled_interface.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "source-address")
    {
        source_address = value;
        source_address.value_namespace = name_space;
        source_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "destination-address")
    {
        destination_address = value;
        destination_address.value_namespace = name_space;
        destination_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "extended-tunnel-id")
    {
        extended_tunnel_id = value;
        extended_tunnel_id.value_namespace = name_space;
        extended_tunnel_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "label-origin")
    {
        label_origin = value;
        label_origin.value_namespace = name_space;
        label_origin.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "srlg-discovery")
    {
        srlg_discovery = value;
        srlg_discovery.value_namespace = name_space;
        srlg_discovery.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::WdmUnitunnel::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "tunnel-state")
    {
        tunnel_state.yfilter = yfilter;
    }
    if(value_path == "tunnel-role")
    {
        tunnel_role.yfilter = yfilter;
    }
    if(value_path == "tunnel-id")
    {
        tunnel_id.yfilter = yfilter;
    }
    if(value_path == "lsp-id")
    {
        lsp_id.yfilter = yfilter;
    }
    if(value_path == "local-optical-router-id")
    {
        local_optical_router_id.yfilter = yfilter;
    }
    if(value_path == "remote-optical-router-id")
    {
        remote_optical_router_id.yfilter = yfilter;
    }
    if(value_path == "controlled-interface")
    {
        controlled_interface.yfilter = yfilter;
    }
    if(value_path == "source-address")
    {
        source_address.yfilter = yfilter;
    }
    if(value_path == "destination-address")
    {
        destination_address.yfilter = yfilter;
    }
    if(value_path == "extended-tunnel-id")
    {
        extended_tunnel_id.yfilter = yfilter;
    }
    if(value_path == "label-origin")
    {
        label_origin.yfilter = yfilter;
    }
    if(value_path == "srlg-discovery")
    {
        srlg_discovery.yfilter = yfilter;
    }
}

bool MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::WdmUnitunnel::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "tunnel-state" || name == "tunnel-role" || name == "tunnel-id" || name == "lsp-id" || name == "local-optical-router-id" || name == "remote-optical-router-id" || name == "controlled-interface" || name == "source-address" || name == "destination-address" || name == "extended-tunnel-id" || name == "label-origin" || name == "srlg-discovery")
        return true;
    return false;
}

MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::TransportTunnelInfo::TransportTunnelInfo()
    :
    status_homepath_working{YType::boolean, "status-homepath-working"}
        ,
    otn(std::make_shared<MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::TransportTunnelInfo::Otn>())
    , static_uni(std::make_shared<MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::TransportTunnelInfo::StaticUni>())
    , egress_static_uni(std::make_shared<MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::TransportTunnelInfo::EgressStaticUni>())
    , homepath_ero(this, {})
    , diversity_info(this, {})
{
    otn->parent = this;
    static_uni->parent = this;
    egress_static_uni->parent = this;

    yang_name = "transport-tunnel-info"; yang_parent_name = "tunnel-head"; is_top_level_class = false; has_list_ancestor = true; 
}

MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::TransportTunnelInfo::~TransportTunnelInfo()
{
}

bool MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::TransportTunnelInfo::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<homepath_ero.len(); index++)
    {
        if(homepath_ero[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<diversity_info.len(); index++)
    {
        if(diversity_info[index]->has_data())
            return true;
    }
    return status_homepath_working.is_set
	|| (otn !=  nullptr && otn->has_data())
	|| (static_uni !=  nullptr && static_uni->has_data())
	|| (egress_static_uni !=  nullptr && egress_static_uni->has_data());
}

bool MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::TransportTunnelInfo::has_operation() const
{
    for (std::size_t index=0; index<homepath_ero.len(); index++)
    {
        if(homepath_ero[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<diversity_info.len(); index++)
    {
        if(diversity_info[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(status_homepath_working.yfilter)
	|| (otn !=  nullptr && otn->has_operation())
	|| (static_uni !=  nullptr && static_uni->has_operation())
	|| (egress_static_uni !=  nullptr && egress_static_uni->has_operation());
}

std::string MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::TransportTunnelInfo::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "transport-tunnel-info";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::TransportTunnelInfo::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (status_homepath_working.is_set || is_set(status_homepath_working.yfilter)) leaf_name_data.push_back(status_homepath_working.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::TransportTunnelInfo::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "otn")
    {
        if(otn == nullptr)
        {
            otn = std::make_shared<MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::TransportTunnelInfo::Otn>();
        }
        return otn;
    }

    if(child_yang_name == "static-uni")
    {
        if(static_uni == nullptr)
        {
            static_uni = std::make_shared<MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::TransportTunnelInfo::StaticUni>();
        }
        return static_uni;
    }

    if(child_yang_name == "egress-static-uni")
    {
        if(egress_static_uni == nullptr)
        {
            egress_static_uni = std::make_shared<MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::TransportTunnelInfo::EgressStaticUni>();
        }
        return egress_static_uni;
    }

    if(child_yang_name == "homepath-ero")
    {
        auto ent_ = std::make_shared<MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::TransportTunnelInfo::HomepathEro>();
        ent_->parent = this;
        homepath_ero.append(ent_);
        return ent_;
    }

    if(child_yang_name == "diversity-info")
    {
        auto ent_ = std::make_shared<MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::TransportTunnelInfo::DiversityInfo>();
        ent_->parent = this;
        diversity_info.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::TransportTunnelInfo::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(otn != nullptr)
    {
        _children["otn"] = otn;
    }

    if(static_uni != nullptr)
    {
        _children["static-uni"] = static_uni;
    }

    if(egress_static_uni != nullptr)
    {
        _children["egress-static-uni"] = egress_static_uni;
    }

    count_ = 0;
    for (auto ent_ : homepath_ero.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    count_ = 0;
    for (auto ent_ : diversity_info.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::TransportTunnelInfo::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "status-homepath-working")
    {
        status_homepath_working = value;
        status_homepath_working.value_namespace = name_space;
        status_homepath_working.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::TransportTunnelInfo::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "status-homepath-working")
    {
        status_homepath_working.yfilter = yfilter;
    }
}

bool MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::TransportTunnelInfo::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "otn" || name == "static-uni" || name == "egress-static-uni" || name == "homepath-ero" || name == "diversity-info" || name == "status-homepath-working")
        return true;
    return false;
}

MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::TransportTunnelInfo::Otn::Otn()
    :
    config_bit_rate{YType::uint32, "config-bit-rate"}
        ,
    bandwidth_cfg(std::make_shared<MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::TransportTunnelInfo::Otn::BandwidthCfg>())
{
    bandwidth_cfg->parent = this;

    yang_name = "otn"; yang_parent_name = "transport-tunnel-info"; is_top_level_class = false; has_list_ancestor = true; 
}

MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::TransportTunnelInfo::Otn::~Otn()
{
}

bool MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::TransportTunnelInfo::Otn::has_data() const
{
    if (is_presence_container) return true;
    return config_bit_rate.is_set
	|| (bandwidth_cfg !=  nullptr && bandwidth_cfg->has_data());
}

bool MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::TransportTunnelInfo::Otn::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(config_bit_rate.yfilter)
	|| (bandwidth_cfg !=  nullptr && bandwidth_cfg->has_operation());
}

std::string MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::TransportTunnelInfo::Otn::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "otn";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::TransportTunnelInfo::Otn::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (config_bit_rate.is_set || is_set(config_bit_rate.yfilter)) leaf_name_data.push_back(config_bit_rate.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::TransportTunnelInfo::Otn::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "bandwidth-cfg")
    {
        if(bandwidth_cfg == nullptr)
        {
            bandwidth_cfg = std::make_shared<MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::TransportTunnelInfo::Otn::BandwidthCfg>();
        }
        return bandwidth_cfg;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::TransportTunnelInfo::Otn::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(bandwidth_cfg != nullptr)
    {
        _children["bandwidth-cfg"] = bandwidth_cfg;
    }

    return _children;
}

void MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::TransportTunnelInfo::Otn::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "config-bit-rate")
    {
        config_bit_rate = value;
        config_bit_rate.value_namespace = name_space;
        config_bit_rate.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::TransportTunnelInfo::Otn::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "config-bit-rate")
    {
        config_bit_rate.yfilter = yfilter;
    }
}

bool MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::TransportTunnelInfo::Otn::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "bandwidth-cfg" || name == "config-bit-rate")
        return true;
    return false;
}

MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::TransportTunnelInfo::Otn::BandwidthCfg::BandwidthCfg()
    :
    odu_level{YType::enumeration, "odu-level"}
        ,
    odu_flex_cbr(std::make_shared<MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::TransportTunnelInfo::Otn::BandwidthCfg::OduFlexCbr>())
    , odu_flex_gfp_f_res(std::make_shared<MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::TransportTunnelInfo::Otn::BandwidthCfg::OduFlexGfpFRes>())
    , odu_flex_gfp_f_non_res(std::make_shared<MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::TransportTunnelInfo::Otn::BandwidthCfg::OduFlexGfpFNonRes>())
{
    odu_flex_cbr->parent = this;
    odu_flex_gfp_f_res->parent = this;
    odu_flex_gfp_f_non_res->parent = this;

    yang_name = "bandwidth-cfg"; yang_parent_name = "otn"; is_top_level_class = false; has_list_ancestor = true; 
}

MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::TransportTunnelInfo::Otn::BandwidthCfg::~BandwidthCfg()
{
}

bool MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::TransportTunnelInfo::Otn::BandwidthCfg::has_data() const
{
    if (is_presence_container) return true;
    return odu_level.is_set
	|| (odu_flex_cbr !=  nullptr && odu_flex_cbr->has_data())
	|| (odu_flex_gfp_f_res !=  nullptr && odu_flex_gfp_f_res->has_data())
	|| (odu_flex_gfp_f_non_res !=  nullptr && odu_flex_gfp_f_non_res->has_data());
}

bool MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::TransportTunnelInfo::Otn::BandwidthCfg::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(odu_level.yfilter)
	|| (odu_flex_cbr !=  nullptr && odu_flex_cbr->has_operation())
	|| (odu_flex_gfp_f_res !=  nullptr && odu_flex_gfp_f_res->has_operation())
	|| (odu_flex_gfp_f_non_res !=  nullptr && odu_flex_gfp_f_non_res->has_operation());
}

std::string MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::TransportTunnelInfo::Otn::BandwidthCfg::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bandwidth-cfg";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::TransportTunnelInfo::Otn::BandwidthCfg::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (odu_level.is_set || is_set(odu_level.yfilter)) leaf_name_data.push_back(odu_level.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::TransportTunnelInfo::Otn::BandwidthCfg::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "odu-flex-cbr")
    {
        if(odu_flex_cbr == nullptr)
        {
            odu_flex_cbr = std::make_shared<MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::TransportTunnelInfo::Otn::BandwidthCfg::OduFlexCbr>();
        }
        return odu_flex_cbr;
    }

    if(child_yang_name == "odu-flex-gfp-f-res")
    {
        if(odu_flex_gfp_f_res == nullptr)
        {
            odu_flex_gfp_f_res = std::make_shared<MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::TransportTunnelInfo::Otn::BandwidthCfg::OduFlexGfpFRes>();
        }
        return odu_flex_gfp_f_res;
    }

    if(child_yang_name == "odu-flex-gfp-f-non-res")
    {
        if(odu_flex_gfp_f_non_res == nullptr)
        {
            odu_flex_gfp_f_non_res = std::make_shared<MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::TransportTunnelInfo::Otn::BandwidthCfg::OduFlexGfpFNonRes>();
        }
        return odu_flex_gfp_f_non_res;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::TransportTunnelInfo::Otn::BandwidthCfg::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(odu_flex_cbr != nullptr)
    {
        _children["odu-flex-cbr"] = odu_flex_cbr;
    }

    if(odu_flex_gfp_f_res != nullptr)
    {
        _children["odu-flex-gfp-f-res"] = odu_flex_gfp_f_res;
    }

    if(odu_flex_gfp_f_non_res != nullptr)
    {
        _children["odu-flex-gfp-f-non-res"] = odu_flex_gfp_f_non_res;
    }

    return _children;
}

void MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::TransportTunnelInfo::Otn::BandwidthCfg::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "odu-level")
    {
        odu_level = value;
        odu_level.value_namespace = name_space;
        odu_level.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::TransportTunnelInfo::Otn::BandwidthCfg::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "odu-level")
    {
        odu_level.yfilter = yfilter;
    }
}

bool MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::TransportTunnelInfo::Otn::BandwidthCfg::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "odu-flex-cbr" || name == "odu-flex-gfp-f-res" || name == "odu-flex-gfp-f-non-res" || name == "odu-level")
        return true;
    return false;
}

MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::TransportTunnelInfo::Otn::BandwidthCfg::OduFlexCbr::OduFlexCbr()
    :
    bit_rate{YType::uint32, "bit-rate"},
    tolerance{YType::uint16, "tolerance"}
{

    yang_name = "odu-flex-cbr"; yang_parent_name = "bandwidth-cfg"; is_top_level_class = false; has_list_ancestor = true; 
}

MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::TransportTunnelInfo::Otn::BandwidthCfg::OduFlexCbr::~OduFlexCbr()
{
}

bool MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::TransportTunnelInfo::Otn::BandwidthCfg::OduFlexCbr::has_data() const
{
    if (is_presence_container) return true;
    return bit_rate.is_set
	|| tolerance.is_set;
}

bool MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::TransportTunnelInfo::Otn::BandwidthCfg::OduFlexCbr::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(bit_rate.yfilter)
	|| ydk::is_set(tolerance.yfilter);
}

std::string MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::TransportTunnelInfo::Otn::BandwidthCfg::OduFlexCbr::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "odu-flex-cbr";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::TransportTunnelInfo::Otn::BandwidthCfg::OduFlexCbr::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (bit_rate.is_set || is_set(bit_rate.yfilter)) leaf_name_data.push_back(bit_rate.get_name_leafdata());
    if (tolerance.is_set || is_set(tolerance.yfilter)) leaf_name_data.push_back(tolerance.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::TransportTunnelInfo::Otn::BandwidthCfg::OduFlexCbr::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::TransportTunnelInfo::Otn::BandwidthCfg::OduFlexCbr::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::TransportTunnelInfo::Otn::BandwidthCfg::OduFlexCbr::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "bit-rate")
    {
        bit_rate = value;
        bit_rate.value_namespace = name_space;
        bit_rate.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tolerance")
    {
        tolerance = value;
        tolerance.value_namespace = name_space;
        tolerance.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::TransportTunnelInfo::Otn::BandwidthCfg::OduFlexCbr::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "bit-rate")
    {
        bit_rate.yfilter = yfilter;
    }
    if(value_path == "tolerance")
    {
        tolerance.yfilter = yfilter;
    }
}

bool MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::TransportTunnelInfo::Otn::BandwidthCfg::OduFlexCbr::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "bit-rate" || name == "tolerance")
        return true;
    return false;
}

MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::TransportTunnelInfo::Otn::BandwidthCfg::OduFlexGfpFRes::OduFlexGfpFRes()
    :
    bit_rate{YType::uint32, "bit-rate"}
{

    yang_name = "odu-flex-gfp-f-res"; yang_parent_name = "bandwidth-cfg"; is_top_level_class = false; has_list_ancestor = true; 
}

MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::TransportTunnelInfo::Otn::BandwidthCfg::OduFlexGfpFRes::~OduFlexGfpFRes()
{
}

bool MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::TransportTunnelInfo::Otn::BandwidthCfg::OduFlexGfpFRes::has_data() const
{
    if (is_presence_container) return true;
    return bit_rate.is_set;
}

bool MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::TransportTunnelInfo::Otn::BandwidthCfg::OduFlexGfpFRes::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(bit_rate.yfilter);
}

std::string MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::TransportTunnelInfo::Otn::BandwidthCfg::OduFlexGfpFRes::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "odu-flex-gfp-f-res";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::TransportTunnelInfo::Otn::BandwidthCfg::OduFlexGfpFRes::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (bit_rate.is_set || is_set(bit_rate.yfilter)) leaf_name_data.push_back(bit_rate.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::TransportTunnelInfo::Otn::BandwidthCfg::OduFlexGfpFRes::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::TransportTunnelInfo::Otn::BandwidthCfg::OduFlexGfpFRes::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::TransportTunnelInfo::Otn::BandwidthCfg::OduFlexGfpFRes::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "bit-rate")
    {
        bit_rate = value;
        bit_rate.value_namespace = name_space;
        bit_rate.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::TransportTunnelInfo::Otn::BandwidthCfg::OduFlexGfpFRes::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "bit-rate")
    {
        bit_rate.yfilter = yfilter;
    }
}

bool MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::TransportTunnelInfo::Otn::BandwidthCfg::OduFlexGfpFRes::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "bit-rate")
        return true;
    return false;
}

MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::TransportTunnelInfo::Otn::BandwidthCfg::OduFlexGfpFNonRes::OduFlexGfpFNonRes()
    :
    bit_rate{YType::uint32, "bit-rate"}
{

    yang_name = "odu-flex-gfp-f-non-res"; yang_parent_name = "bandwidth-cfg"; is_top_level_class = false; has_list_ancestor = true; 
}

MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::TransportTunnelInfo::Otn::BandwidthCfg::OduFlexGfpFNonRes::~OduFlexGfpFNonRes()
{
}

bool MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::TransportTunnelInfo::Otn::BandwidthCfg::OduFlexGfpFNonRes::has_data() const
{
    if (is_presence_container) return true;
    return bit_rate.is_set;
}

bool MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::TransportTunnelInfo::Otn::BandwidthCfg::OduFlexGfpFNonRes::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(bit_rate.yfilter);
}

std::string MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::TransportTunnelInfo::Otn::BandwidthCfg::OduFlexGfpFNonRes::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "odu-flex-gfp-f-non-res";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::TransportTunnelInfo::Otn::BandwidthCfg::OduFlexGfpFNonRes::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (bit_rate.is_set || is_set(bit_rate.yfilter)) leaf_name_data.push_back(bit_rate.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::TransportTunnelInfo::Otn::BandwidthCfg::OduFlexGfpFNonRes::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::TransportTunnelInfo::Otn::BandwidthCfg::OduFlexGfpFNonRes::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::TransportTunnelInfo::Otn::BandwidthCfg::OduFlexGfpFNonRes::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "bit-rate")
    {
        bit_rate = value;
        bit_rate.value_namespace = name_space;
        bit_rate.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::TransportTunnelInfo::Otn::BandwidthCfg::OduFlexGfpFNonRes::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "bit-rate")
    {
        bit_rate.yfilter = yfilter;
    }
}

bool MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::TransportTunnelInfo::Otn::BandwidthCfg::OduFlexGfpFNonRes::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "bit-rate")
        return true;
    return false;
}

MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::TransportTunnelInfo::StaticUni::StaticUni()
    :
    client_port{YType::str, "client-port"},
    client_if_handle{YType::str, "client-if-handle"},
    client_odu_name{YType::str, "client-odu-name"},
    client_odu_if_handle{YType::str, "client-odu-if-handle"},
    cross_connect_id{YType::uint32, "cross-connect-id"},
    is_connected{YType::boolean, "is-connected"},
    uptime{YType::uint32, "uptime"},
    local_termination{YType::enumeration, "local-termination"},
    static_uni_type{YType::enumeration, "static-uni-type"},
    term_client_port{YType::str, "term-client-port"},
    term_client_if_handle{YType::str, "term-client-if-handle"}
        ,
    term_interface_srlg(std::make_shared<MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::TransportTunnelInfo::StaticUni::TermInterfaceSrlg>())
{
    term_interface_srlg->parent = this;

    yang_name = "static-uni"; yang_parent_name = "transport-tunnel-info"; is_top_level_class = false; has_list_ancestor = true; 
}

MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::TransportTunnelInfo::StaticUni::~StaticUni()
{
}

bool MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::TransportTunnelInfo::StaticUni::has_data() const
{
    if (is_presence_container) return true;
    return client_port.is_set
	|| client_if_handle.is_set
	|| client_odu_name.is_set
	|| client_odu_if_handle.is_set
	|| cross_connect_id.is_set
	|| is_connected.is_set
	|| uptime.is_set
	|| local_termination.is_set
	|| static_uni_type.is_set
	|| term_client_port.is_set
	|| term_client_if_handle.is_set
	|| (term_interface_srlg !=  nullptr && term_interface_srlg->has_data());
}

bool MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::TransportTunnelInfo::StaticUni::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(client_port.yfilter)
	|| ydk::is_set(client_if_handle.yfilter)
	|| ydk::is_set(client_odu_name.yfilter)
	|| ydk::is_set(client_odu_if_handle.yfilter)
	|| ydk::is_set(cross_connect_id.yfilter)
	|| ydk::is_set(is_connected.yfilter)
	|| ydk::is_set(uptime.yfilter)
	|| ydk::is_set(local_termination.yfilter)
	|| ydk::is_set(static_uni_type.yfilter)
	|| ydk::is_set(term_client_port.yfilter)
	|| ydk::is_set(term_client_if_handle.yfilter)
	|| (term_interface_srlg !=  nullptr && term_interface_srlg->has_operation());
}

std::string MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::TransportTunnelInfo::StaticUni::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "static-uni";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::TransportTunnelInfo::StaticUni::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (client_port.is_set || is_set(client_port.yfilter)) leaf_name_data.push_back(client_port.get_name_leafdata());
    if (client_if_handle.is_set || is_set(client_if_handle.yfilter)) leaf_name_data.push_back(client_if_handle.get_name_leafdata());
    if (client_odu_name.is_set || is_set(client_odu_name.yfilter)) leaf_name_data.push_back(client_odu_name.get_name_leafdata());
    if (client_odu_if_handle.is_set || is_set(client_odu_if_handle.yfilter)) leaf_name_data.push_back(client_odu_if_handle.get_name_leafdata());
    if (cross_connect_id.is_set || is_set(cross_connect_id.yfilter)) leaf_name_data.push_back(cross_connect_id.get_name_leafdata());
    if (is_connected.is_set || is_set(is_connected.yfilter)) leaf_name_data.push_back(is_connected.get_name_leafdata());
    if (uptime.is_set || is_set(uptime.yfilter)) leaf_name_data.push_back(uptime.get_name_leafdata());
    if (local_termination.is_set || is_set(local_termination.yfilter)) leaf_name_data.push_back(local_termination.get_name_leafdata());
    if (static_uni_type.is_set || is_set(static_uni_type.yfilter)) leaf_name_data.push_back(static_uni_type.get_name_leafdata());
    if (term_client_port.is_set || is_set(term_client_port.yfilter)) leaf_name_data.push_back(term_client_port.get_name_leafdata());
    if (term_client_if_handle.is_set || is_set(term_client_if_handle.yfilter)) leaf_name_data.push_back(term_client_if_handle.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::TransportTunnelInfo::StaticUni::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "term-interface-srlg")
    {
        if(term_interface_srlg == nullptr)
        {
            term_interface_srlg = std::make_shared<MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::TransportTunnelInfo::StaticUni::TermInterfaceSrlg>();
        }
        return term_interface_srlg;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::TransportTunnelInfo::StaticUni::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(term_interface_srlg != nullptr)
    {
        _children["term-interface-srlg"] = term_interface_srlg;
    }

    return _children;
}

void MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::TransportTunnelInfo::StaticUni::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "client-port")
    {
        client_port = value;
        client_port.value_namespace = name_space;
        client_port.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "client-if-handle")
    {
        client_if_handle = value;
        client_if_handle.value_namespace = name_space;
        client_if_handle.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "client-odu-name")
    {
        client_odu_name = value;
        client_odu_name.value_namespace = name_space;
        client_odu_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "client-odu-if-handle")
    {
        client_odu_if_handle = value;
        client_odu_if_handle.value_namespace = name_space;
        client_odu_if_handle.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cross-connect-id")
    {
        cross_connect_id = value;
        cross_connect_id.value_namespace = name_space;
        cross_connect_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-connected")
    {
        is_connected = value;
        is_connected.value_namespace = name_space;
        is_connected.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "uptime")
    {
        uptime = value;
        uptime.value_namespace = name_space;
        uptime.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "local-termination")
    {
        local_termination = value;
        local_termination.value_namespace = name_space;
        local_termination.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "static-uni-type")
    {
        static_uni_type = value;
        static_uni_type.value_namespace = name_space;
        static_uni_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "term-client-port")
    {
        term_client_port = value;
        term_client_port.value_namespace = name_space;
        term_client_port.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "term-client-if-handle")
    {
        term_client_if_handle = value;
        term_client_if_handle.value_namespace = name_space;
        term_client_if_handle.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::TransportTunnelInfo::StaticUni::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "client-port")
    {
        client_port.yfilter = yfilter;
    }
    if(value_path == "client-if-handle")
    {
        client_if_handle.yfilter = yfilter;
    }
    if(value_path == "client-odu-name")
    {
        client_odu_name.yfilter = yfilter;
    }
    if(value_path == "client-odu-if-handle")
    {
        client_odu_if_handle.yfilter = yfilter;
    }
    if(value_path == "cross-connect-id")
    {
        cross_connect_id.yfilter = yfilter;
    }
    if(value_path == "is-connected")
    {
        is_connected.yfilter = yfilter;
    }
    if(value_path == "uptime")
    {
        uptime.yfilter = yfilter;
    }
    if(value_path == "local-termination")
    {
        local_termination.yfilter = yfilter;
    }
    if(value_path == "static-uni-type")
    {
        static_uni_type.yfilter = yfilter;
    }
    if(value_path == "term-client-port")
    {
        term_client_port.yfilter = yfilter;
    }
    if(value_path == "term-client-if-handle")
    {
        term_client_if_handle.yfilter = yfilter;
    }
}

bool MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::TransportTunnelInfo::StaticUni::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "term-interface-srlg" || name == "client-port" || name == "client-if-handle" || name == "client-odu-name" || name == "client-odu-if-handle" || name == "cross-connect-id" || name == "is-connected" || name == "uptime" || name == "local-termination" || name == "static-uni-type" || name == "term-client-port" || name == "term-client-if-handle")
        return true;
    return false;
}

MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::TransportTunnelInfo::StaticUni::TermInterfaceSrlg::TermInterfaceSrlg()
    :
    discovered_srlg(this, {})
{

    yang_name = "term-interface-srlg"; yang_parent_name = "static-uni"; is_top_level_class = false; has_list_ancestor = true; 
}

MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::TransportTunnelInfo::StaticUni::TermInterfaceSrlg::~TermInterfaceSrlg()
{
}

bool MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::TransportTunnelInfo::StaticUni::TermInterfaceSrlg::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<discovered_srlg.len(); index++)
    {
        if(discovered_srlg[index]->has_data())
            return true;
    }
    return false;
}

bool MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::TransportTunnelInfo::StaticUni::TermInterfaceSrlg::has_operation() const
{
    for (std::size_t index=0; index<discovered_srlg.len(); index++)
    {
        if(discovered_srlg[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::TransportTunnelInfo::StaticUni::TermInterfaceSrlg::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "term-interface-srlg";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::TransportTunnelInfo::StaticUni::TermInterfaceSrlg::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::TransportTunnelInfo::StaticUni::TermInterfaceSrlg::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "discovered-srlg")
    {
        auto ent_ = std::make_shared<MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::TransportTunnelInfo::StaticUni::TermInterfaceSrlg::DiscoveredSrlg>();
        ent_->parent = this;
        discovered_srlg.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::TransportTunnelInfo::StaticUni::TermInterfaceSrlg::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : discovered_srlg.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::TransportTunnelInfo::StaticUni::TermInterfaceSrlg::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::TransportTunnelInfo::StaticUni::TermInterfaceSrlg::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::TransportTunnelInfo::StaticUni::TermInterfaceSrlg::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "discovered-srlg")
        return true;
    return false;
}

MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::TransportTunnelInfo::StaticUni::TermInterfaceSrlg::DiscoveredSrlg::DiscoveredSrlg()
    :
    entry{YType::uint32, "entry"}
{

    yang_name = "discovered-srlg"; yang_parent_name = "term-interface-srlg"; is_top_level_class = false; has_list_ancestor = true; 
}

MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::TransportTunnelInfo::StaticUni::TermInterfaceSrlg::DiscoveredSrlg::~DiscoveredSrlg()
{
}

bool MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::TransportTunnelInfo::StaticUni::TermInterfaceSrlg::DiscoveredSrlg::has_data() const
{
    if (is_presence_container) return true;
    return entry.is_set;
}

bool MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::TransportTunnelInfo::StaticUni::TermInterfaceSrlg::DiscoveredSrlg::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(entry.yfilter);
}

std::string MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::TransportTunnelInfo::StaticUni::TermInterfaceSrlg::DiscoveredSrlg::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "discovered-srlg";
    path_buffer << "[" << get_ylist_key() << "]";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::TransportTunnelInfo::StaticUni::TermInterfaceSrlg::DiscoveredSrlg::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (entry.is_set || is_set(entry.yfilter)) leaf_name_data.push_back(entry.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::TransportTunnelInfo::StaticUni::TermInterfaceSrlg::DiscoveredSrlg::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::TransportTunnelInfo::StaticUni::TermInterfaceSrlg::DiscoveredSrlg::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::TransportTunnelInfo::StaticUni::TermInterfaceSrlg::DiscoveredSrlg::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "entry")
    {
        entry = value;
        entry.value_namespace = name_space;
        entry.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::TransportTunnelInfo::StaticUni::TermInterfaceSrlg::DiscoveredSrlg::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "entry")
    {
        entry.yfilter = yfilter;
    }
}

bool MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::TransportTunnelInfo::StaticUni::TermInterfaceSrlg::DiscoveredSrlg::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "entry")
        return true;
    return false;
}

MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::TransportTunnelInfo::EgressStaticUni::EgressStaticUni()
    :
    local_termination{YType::enumeration, "local-termination"},
    remote_uni_type{YType::enumeration, "remote-uni-type"}
        ,
    egress_port(std::make_shared<MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::TransportTunnelInfo::EgressStaticUni::EgressPort>())
    , term_egress_port(std::make_shared<MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::TransportTunnelInfo::EgressStaticUni::TermEgressPort>())
{
    egress_port->parent = this;
    term_egress_port->parent = this;

    yang_name = "egress-static-uni"; yang_parent_name = "transport-tunnel-info"; is_top_level_class = false; has_list_ancestor = true; 
}

MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::TransportTunnelInfo::EgressStaticUni::~EgressStaticUni()
{
}

bool MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::TransportTunnelInfo::EgressStaticUni::has_data() const
{
    if (is_presence_container) return true;
    return local_termination.is_set
	|| remote_uni_type.is_set
	|| (egress_port !=  nullptr && egress_port->has_data())
	|| (term_egress_port !=  nullptr && term_egress_port->has_data());
}

bool MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::TransportTunnelInfo::EgressStaticUni::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(local_termination.yfilter)
	|| ydk::is_set(remote_uni_type.yfilter)
	|| (egress_port !=  nullptr && egress_port->has_operation())
	|| (term_egress_port !=  nullptr && term_egress_port->has_operation());
}

std::string MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::TransportTunnelInfo::EgressStaticUni::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "egress-static-uni";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::TransportTunnelInfo::EgressStaticUni::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (local_termination.is_set || is_set(local_termination.yfilter)) leaf_name_data.push_back(local_termination.get_name_leafdata());
    if (remote_uni_type.is_set || is_set(remote_uni_type.yfilter)) leaf_name_data.push_back(remote_uni_type.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::TransportTunnelInfo::EgressStaticUni::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "egress-port")
    {
        if(egress_port == nullptr)
        {
            egress_port = std::make_shared<MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::TransportTunnelInfo::EgressStaticUni::EgressPort>();
        }
        return egress_port;
    }

    if(child_yang_name == "term-egress-port")
    {
        if(term_egress_port == nullptr)
        {
            term_egress_port = std::make_shared<MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::TransportTunnelInfo::EgressStaticUni::TermEgressPort>();
        }
        return term_egress_port;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::TransportTunnelInfo::EgressStaticUni::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(egress_port != nullptr)
    {
        _children["egress-port"] = egress_port;
    }

    if(term_egress_port != nullptr)
    {
        _children["term-egress-port"] = term_egress_port;
    }

    return _children;
}

void MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::TransportTunnelInfo::EgressStaticUni::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "local-termination")
    {
        local_termination = value;
        local_termination.value_namespace = name_space;
        local_termination.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "remote-uni-type")
    {
        remote_uni_type = value;
        remote_uni_type.value_namespace = name_space;
        remote_uni_type.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::TransportTunnelInfo::EgressStaticUni::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "local-termination")
    {
        local_termination.yfilter = yfilter;
    }
    if(value_path == "remote-uni-type")
    {
        remote_uni_type.yfilter = yfilter;
    }
}

bool MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::TransportTunnelInfo::EgressStaticUni::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "egress-port" || name == "term-egress-port" || name == "local-termination" || name == "remote-uni-type")
        return true;
    return false;
}

MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::TransportTunnelInfo::EgressStaticUni::EgressPort::EgressPort()
    :
    te_addr(std::make_shared<MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::TransportTunnelInfo::EgressStaticUni::EgressPort::TeAddr>())
{
    te_addr->parent = this;

    yang_name = "egress-port"; yang_parent_name = "egress-static-uni"; is_top_level_class = false; has_list_ancestor = true; 
}

MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::TransportTunnelInfo::EgressStaticUni::EgressPort::~EgressPort()
{
}

bool MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::TransportTunnelInfo::EgressStaticUni::EgressPort::has_data() const
{
    if (is_presence_container) return true;
    return (te_addr !=  nullptr && te_addr->has_data());
}

bool MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::TransportTunnelInfo::EgressStaticUni::EgressPort::has_operation() const
{
    return is_set(yfilter)
	|| (te_addr !=  nullptr && te_addr->has_operation());
}

std::string MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::TransportTunnelInfo::EgressStaticUni::EgressPort::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "egress-port";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::TransportTunnelInfo::EgressStaticUni::EgressPort::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::TransportTunnelInfo::EgressStaticUni::EgressPort::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "te-addr")
    {
        if(te_addr == nullptr)
        {
            te_addr = std::make_shared<MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::TransportTunnelInfo::EgressStaticUni::EgressPort::TeAddr>();
        }
        return te_addr;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::TransportTunnelInfo::EgressStaticUni::EgressPort::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(te_addr != nullptr)
    {
        _children["te-addr"] = te_addr;
    }

    return _children;
}

void MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::TransportTunnelInfo::EgressStaticUni::EgressPort::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::TransportTunnelInfo::EgressStaticUni::EgressPort::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::TransportTunnelInfo::EgressStaticUni::EgressPort::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "te-addr")
        return true;
    return false;
}

MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::TransportTunnelInfo::EgressStaticUni::EgressPort::TeAddr::TeAddr()
    :
    type{YType::enumeration, "type"},
    ipv4_address{YType::str, "ipv4-address"}
        ,
    ipv4_unnumbered_address(std::make_shared<MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::TransportTunnelInfo::EgressStaticUni::EgressPort::TeAddr::Ipv4UnnumberedAddress>())
{
    ipv4_unnumbered_address->parent = this;

    yang_name = "te-addr"; yang_parent_name = "egress-port"; is_top_level_class = false; has_list_ancestor = true; 
}

MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::TransportTunnelInfo::EgressStaticUni::EgressPort::TeAddr::~TeAddr()
{
}

bool MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::TransportTunnelInfo::EgressStaticUni::EgressPort::TeAddr::has_data() const
{
    if (is_presence_container) return true;
    return type.is_set
	|| ipv4_address.is_set
	|| (ipv4_unnumbered_address !=  nullptr && ipv4_unnumbered_address->has_data());
}

bool MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::TransportTunnelInfo::EgressStaticUni::EgressPort::TeAddr::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(type.yfilter)
	|| ydk::is_set(ipv4_address.yfilter)
	|| (ipv4_unnumbered_address !=  nullptr && ipv4_unnumbered_address->has_operation());
}

std::string MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::TransportTunnelInfo::EgressStaticUni::EgressPort::TeAddr::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "te-addr";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::TransportTunnelInfo::EgressStaticUni::EgressPort::TeAddr::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (type.is_set || is_set(type.yfilter)) leaf_name_data.push_back(type.get_name_leafdata());
    if (ipv4_address.is_set || is_set(ipv4_address.yfilter)) leaf_name_data.push_back(ipv4_address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::TransportTunnelInfo::EgressStaticUni::EgressPort::TeAddr::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ipv4-unnumbered-address")
    {
        if(ipv4_unnumbered_address == nullptr)
        {
            ipv4_unnumbered_address = std::make_shared<MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::TransportTunnelInfo::EgressStaticUni::EgressPort::TeAddr::Ipv4UnnumberedAddress>();
        }
        return ipv4_unnumbered_address;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::TransportTunnelInfo::EgressStaticUni::EgressPort::TeAddr::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(ipv4_unnumbered_address != nullptr)
    {
        _children["ipv4-unnumbered-address"] = ipv4_unnumbered_address;
    }

    return _children;
}

void MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::TransportTunnelInfo::EgressStaticUni::EgressPort::TeAddr::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "type")
    {
        type = value;
        type.value_namespace = name_space;
        type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv4-address")
    {
        ipv4_address = value;
        ipv4_address.value_namespace = name_space;
        ipv4_address.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::TransportTunnelInfo::EgressStaticUni::EgressPort::TeAddr::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "type")
    {
        type.yfilter = yfilter;
    }
    if(value_path == "ipv4-address")
    {
        ipv4_address.yfilter = yfilter;
    }
}

bool MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::TransportTunnelInfo::EgressStaticUni::EgressPort::TeAddr::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ipv4-unnumbered-address" || name == "type" || name == "ipv4-address")
        return true;
    return false;
}

MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::TransportTunnelInfo::EgressStaticUni::EgressPort::TeAddr::Ipv4UnnumberedAddress::Ipv4UnnumberedAddress()
    :
    router_id{YType::str, "router-id"},
    interface_index{YType::uint32, "interface-index"}
{

    yang_name = "ipv4-unnumbered-address"; yang_parent_name = "te-addr"; is_top_level_class = false; has_list_ancestor = true; 
}

MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::TransportTunnelInfo::EgressStaticUni::EgressPort::TeAddr::Ipv4UnnumberedAddress::~Ipv4UnnumberedAddress()
{
}

bool MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::TransportTunnelInfo::EgressStaticUni::EgressPort::TeAddr::Ipv4UnnumberedAddress::has_data() const
{
    if (is_presence_container) return true;
    return router_id.is_set
	|| interface_index.is_set;
}

bool MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::TransportTunnelInfo::EgressStaticUni::EgressPort::TeAddr::Ipv4UnnumberedAddress::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(router_id.yfilter)
	|| ydk::is_set(interface_index.yfilter);
}

std::string MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::TransportTunnelInfo::EgressStaticUni::EgressPort::TeAddr::Ipv4UnnumberedAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv4-unnumbered-address";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::TransportTunnelInfo::EgressStaticUni::EgressPort::TeAddr::Ipv4UnnumberedAddress::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (router_id.is_set || is_set(router_id.yfilter)) leaf_name_data.push_back(router_id.get_name_leafdata());
    if (interface_index.is_set || is_set(interface_index.yfilter)) leaf_name_data.push_back(interface_index.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::TransportTunnelInfo::EgressStaticUni::EgressPort::TeAddr::Ipv4UnnumberedAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::TransportTunnelInfo::EgressStaticUni::EgressPort::TeAddr::Ipv4UnnumberedAddress::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::TransportTunnelInfo::EgressStaticUni::EgressPort::TeAddr::Ipv4UnnumberedAddress::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "router-id")
    {
        router_id = value;
        router_id.value_namespace = name_space;
        router_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "interface-index")
    {
        interface_index = value;
        interface_index.value_namespace = name_space;
        interface_index.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::TransportTunnelInfo::EgressStaticUni::EgressPort::TeAddr::Ipv4UnnumberedAddress::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "router-id")
    {
        router_id.yfilter = yfilter;
    }
    if(value_path == "interface-index")
    {
        interface_index.yfilter = yfilter;
    }
}

bool MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::TransportTunnelInfo::EgressStaticUni::EgressPort::TeAddr::Ipv4UnnumberedAddress::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "router-id" || name == "interface-index")
        return true;
    return false;
}

MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::TransportTunnelInfo::EgressStaticUni::TermEgressPort::TermEgressPort()
    :
    te_addr(std::make_shared<MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::TransportTunnelInfo::EgressStaticUni::TermEgressPort::TeAddr>())
{
    te_addr->parent = this;

    yang_name = "term-egress-port"; yang_parent_name = "egress-static-uni"; is_top_level_class = false; has_list_ancestor = true; 
}

MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::TransportTunnelInfo::EgressStaticUni::TermEgressPort::~TermEgressPort()
{
}

bool MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::TransportTunnelInfo::EgressStaticUni::TermEgressPort::has_data() const
{
    if (is_presence_container) return true;
    return (te_addr !=  nullptr && te_addr->has_data());
}

bool MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::TransportTunnelInfo::EgressStaticUni::TermEgressPort::has_operation() const
{
    return is_set(yfilter)
	|| (te_addr !=  nullptr && te_addr->has_operation());
}

std::string MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::TransportTunnelInfo::EgressStaticUni::TermEgressPort::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "term-egress-port";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::TransportTunnelInfo::EgressStaticUni::TermEgressPort::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::TransportTunnelInfo::EgressStaticUni::TermEgressPort::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "te-addr")
    {
        if(te_addr == nullptr)
        {
            te_addr = std::make_shared<MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::TransportTunnelInfo::EgressStaticUni::TermEgressPort::TeAddr>();
        }
        return te_addr;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::TransportTunnelInfo::EgressStaticUni::TermEgressPort::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(te_addr != nullptr)
    {
        _children["te-addr"] = te_addr;
    }

    return _children;
}

void MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::TransportTunnelInfo::EgressStaticUni::TermEgressPort::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::TransportTunnelInfo::EgressStaticUni::TermEgressPort::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::TransportTunnelInfo::EgressStaticUni::TermEgressPort::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "te-addr")
        return true;
    return false;
}

MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::TransportTunnelInfo::EgressStaticUni::TermEgressPort::TeAddr::TeAddr()
    :
    type{YType::enumeration, "type"},
    ipv4_address{YType::str, "ipv4-address"}
        ,
    ipv4_unnumbered_address(std::make_shared<MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::TransportTunnelInfo::EgressStaticUni::TermEgressPort::TeAddr::Ipv4UnnumberedAddress>())
{
    ipv4_unnumbered_address->parent = this;

    yang_name = "te-addr"; yang_parent_name = "term-egress-port"; is_top_level_class = false; has_list_ancestor = true; 
}

MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::TransportTunnelInfo::EgressStaticUni::TermEgressPort::TeAddr::~TeAddr()
{
}

bool MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::TransportTunnelInfo::EgressStaticUni::TermEgressPort::TeAddr::has_data() const
{
    if (is_presence_container) return true;
    return type.is_set
	|| ipv4_address.is_set
	|| (ipv4_unnumbered_address !=  nullptr && ipv4_unnumbered_address->has_data());
}

bool MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::TransportTunnelInfo::EgressStaticUni::TermEgressPort::TeAddr::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(type.yfilter)
	|| ydk::is_set(ipv4_address.yfilter)
	|| (ipv4_unnumbered_address !=  nullptr && ipv4_unnumbered_address->has_operation());
}

std::string MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::TransportTunnelInfo::EgressStaticUni::TermEgressPort::TeAddr::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "te-addr";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::TransportTunnelInfo::EgressStaticUni::TermEgressPort::TeAddr::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (type.is_set || is_set(type.yfilter)) leaf_name_data.push_back(type.get_name_leafdata());
    if (ipv4_address.is_set || is_set(ipv4_address.yfilter)) leaf_name_data.push_back(ipv4_address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::TransportTunnelInfo::EgressStaticUni::TermEgressPort::TeAddr::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ipv4-unnumbered-address")
    {
        if(ipv4_unnumbered_address == nullptr)
        {
            ipv4_unnumbered_address = std::make_shared<MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::TransportTunnelInfo::EgressStaticUni::TermEgressPort::TeAddr::Ipv4UnnumberedAddress>();
        }
        return ipv4_unnumbered_address;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::TransportTunnelInfo::EgressStaticUni::TermEgressPort::TeAddr::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(ipv4_unnumbered_address != nullptr)
    {
        _children["ipv4-unnumbered-address"] = ipv4_unnumbered_address;
    }

    return _children;
}

void MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::TransportTunnelInfo::EgressStaticUni::TermEgressPort::TeAddr::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "type")
    {
        type = value;
        type.value_namespace = name_space;
        type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv4-address")
    {
        ipv4_address = value;
        ipv4_address.value_namespace = name_space;
        ipv4_address.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::TransportTunnelInfo::EgressStaticUni::TermEgressPort::TeAddr::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "type")
    {
        type.yfilter = yfilter;
    }
    if(value_path == "ipv4-address")
    {
        ipv4_address.yfilter = yfilter;
    }
}

bool MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::TransportTunnelInfo::EgressStaticUni::TermEgressPort::TeAddr::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ipv4-unnumbered-address" || name == "type" || name == "ipv4-address")
        return true;
    return false;
}

MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::TransportTunnelInfo::EgressStaticUni::TermEgressPort::TeAddr::Ipv4UnnumberedAddress::Ipv4UnnumberedAddress()
    :
    router_id{YType::str, "router-id"},
    interface_index{YType::uint32, "interface-index"}
{

    yang_name = "ipv4-unnumbered-address"; yang_parent_name = "te-addr"; is_top_level_class = false; has_list_ancestor = true; 
}

MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::TransportTunnelInfo::EgressStaticUni::TermEgressPort::TeAddr::Ipv4UnnumberedAddress::~Ipv4UnnumberedAddress()
{
}

bool MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::TransportTunnelInfo::EgressStaticUni::TermEgressPort::TeAddr::Ipv4UnnumberedAddress::has_data() const
{
    if (is_presence_container) return true;
    return router_id.is_set
	|| interface_index.is_set;
}

bool MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::TransportTunnelInfo::EgressStaticUni::TermEgressPort::TeAddr::Ipv4UnnumberedAddress::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(router_id.yfilter)
	|| ydk::is_set(interface_index.yfilter);
}

std::string MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::TransportTunnelInfo::EgressStaticUni::TermEgressPort::TeAddr::Ipv4UnnumberedAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv4-unnumbered-address";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::TransportTunnelInfo::EgressStaticUni::TermEgressPort::TeAddr::Ipv4UnnumberedAddress::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (router_id.is_set || is_set(router_id.yfilter)) leaf_name_data.push_back(router_id.get_name_leafdata());
    if (interface_index.is_set || is_set(interface_index.yfilter)) leaf_name_data.push_back(interface_index.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::TransportTunnelInfo::EgressStaticUni::TermEgressPort::TeAddr::Ipv4UnnumberedAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::TransportTunnelInfo::EgressStaticUni::TermEgressPort::TeAddr::Ipv4UnnumberedAddress::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::TransportTunnelInfo::EgressStaticUni::TermEgressPort::TeAddr::Ipv4UnnumberedAddress::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "router-id")
    {
        router_id = value;
        router_id.value_namespace = name_space;
        router_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "interface-index")
    {
        interface_index = value;
        interface_index.value_namespace = name_space;
        interface_index.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::TransportTunnelInfo::EgressStaticUni::TermEgressPort::TeAddr::Ipv4UnnumberedAddress::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "router-id")
    {
        router_id.yfilter = yfilter;
    }
    if(value_path == "interface-index")
    {
        interface_index.yfilter = yfilter;
    }
}

bool MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::TransportTunnelInfo::EgressStaticUni::TermEgressPort::TeAddr::Ipv4UnnumberedAddress::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "router-id" || name == "interface-index")
        return true;
    return false;
}

MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::TransportTunnelInfo::HomepathEro::HomepathEro()
    :
    ero_type{YType::enumeration, "ero-type"}
        ,
    ipv4ero_sub_object(std::make_shared<MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::TransportTunnelInfo::HomepathEro::Ipv4eroSubObject>())
    , unnumbered_ero_sub_object(std::make_shared<MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::TransportTunnelInfo::HomepathEro::UnnumberedEroSubObject>())
{
    ipv4ero_sub_object->parent = this;
    unnumbered_ero_sub_object->parent = this;

    yang_name = "homepath-ero"; yang_parent_name = "transport-tunnel-info"; is_top_level_class = false; has_list_ancestor = true; 
}

MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::TransportTunnelInfo::HomepathEro::~HomepathEro()
{
}

bool MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::TransportTunnelInfo::HomepathEro::has_data() const
{
    if (is_presence_container) return true;
    return ero_type.is_set
	|| (ipv4ero_sub_object !=  nullptr && ipv4ero_sub_object->has_data())
	|| (unnumbered_ero_sub_object !=  nullptr && unnumbered_ero_sub_object->has_data());
}

bool MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::TransportTunnelInfo::HomepathEro::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ero_type.yfilter)
	|| (ipv4ero_sub_object !=  nullptr && ipv4ero_sub_object->has_operation())
	|| (unnumbered_ero_sub_object !=  nullptr && unnumbered_ero_sub_object->has_operation());
}

std::string MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::TransportTunnelInfo::HomepathEro::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "homepath-ero";
    path_buffer << "[" << get_ylist_key() << "]";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::TransportTunnelInfo::HomepathEro::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ero_type.is_set || is_set(ero_type.yfilter)) leaf_name_data.push_back(ero_type.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::TransportTunnelInfo::HomepathEro::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ipv4ero-sub-object")
    {
        if(ipv4ero_sub_object == nullptr)
        {
            ipv4ero_sub_object = std::make_shared<MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::TransportTunnelInfo::HomepathEro::Ipv4eroSubObject>();
        }
        return ipv4ero_sub_object;
    }

    if(child_yang_name == "unnumbered-ero-sub-object")
    {
        if(unnumbered_ero_sub_object == nullptr)
        {
            unnumbered_ero_sub_object = std::make_shared<MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::TransportTunnelInfo::HomepathEro::UnnumberedEroSubObject>();
        }
        return unnumbered_ero_sub_object;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::TransportTunnelInfo::HomepathEro::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(ipv4ero_sub_object != nullptr)
    {
        _children["ipv4ero-sub-object"] = ipv4ero_sub_object;
    }

    if(unnumbered_ero_sub_object != nullptr)
    {
        _children["unnumbered-ero-sub-object"] = unnumbered_ero_sub_object;
    }

    return _children;
}

void MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::TransportTunnelInfo::HomepathEro::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ero-type")
    {
        ero_type = value;
        ero_type.value_namespace = name_space;
        ero_type.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::TransportTunnelInfo::HomepathEro::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ero-type")
    {
        ero_type.yfilter = yfilter;
    }
}

bool MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::TransportTunnelInfo::HomepathEro::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ipv4ero-sub-object" || name == "unnumbered-ero-sub-object" || name == "ero-type")
        return true;
    return false;
}

MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::TransportTunnelInfo::HomepathEro::Ipv4eroSubObject::Ipv4eroSubObject()
    :
    is_strict_route{YType::boolean, "is-strict-route"},
    ero_address{YType::str, "ero-address"},
    prefix_length{YType::uint8, "prefix-length"}
{

    yang_name = "ipv4ero-sub-object"; yang_parent_name = "homepath-ero"; is_top_level_class = false; has_list_ancestor = true; 
}

MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::TransportTunnelInfo::HomepathEro::Ipv4eroSubObject::~Ipv4eroSubObject()
{
}

bool MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::TransportTunnelInfo::HomepathEro::Ipv4eroSubObject::has_data() const
{
    if (is_presence_container) return true;
    return is_strict_route.is_set
	|| ero_address.is_set
	|| prefix_length.is_set;
}

bool MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::TransportTunnelInfo::HomepathEro::Ipv4eroSubObject::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(is_strict_route.yfilter)
	|| ydk::is_set(ero_address.yfilter)
	|| ydk::is_set(prefix_length.yfilter);
}

std::string MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::TransportTunnelInfo::HomepathEro::Ipv4eroSubObject::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv4ero-sub-object";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::TransportTunnelInfo::HomepathEro::Ipv4eroSubObject::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (is_strict_route.is_set || is_set(is_strict_route.yfilter)) leaf_name_data.push_back(is_strict_route.get_name_leafdata());
    if (ero_address.is_set || is_set(ero_address.yfilter)) leaf_name_data.push_back(ero_address.get_name_leafdata());
    if (prefix_length.is_set || is_set(prefix_length.yfilter)) leaf_name_data.push_back(prefix_length.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::TransportTunnelInfo::HomepathEro::Ipv4eroSubObject::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::TransportTunnelInfo::HomepathEro::Ipv4eroSubObject::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::TransportTunnelInfo::HomepathEro::Ipv4eroSubObject::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "is-strict-route")
    {
        is_strict_route = value;
        is_strict_route.value_namespace = name_space;
        is_strict_route.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ero-address")
    {
        ero_address = value;
        ero_address.value_namespace = name_space;
        ero_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "prefix-length")
    {
        prefix_length = value;
        prefix_length.value_namespace = name_space;
        prefix_length.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::TransportTunnelInfo::HomepathEro::Ipv4eroSubObject::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "is-strict-route")
    {
        is_strict_route.yfilter = yfilter;
    }
    if(value_path == "ero-address")
    {
        ero_address.yfilter = yfilter;
    }
    if(value_path == "prefix-length")
    {
        prefix_length.yfilter = yfilter;
    }
}

bool MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::TransportTunnelInfo::HomepathEro::Ipv4eroSubObject::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "is-strict-route" || name == "ero-address" || name == "prefix-length")
        return true;
    return false;
}

MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::TransportTunnelInfo::HomepathEro::UnnumberedEroSubObject::UnnumberedEroSubObject()
    :
    is_strict_route{YType::boolean, "is-strict-route"},
    ero_interface_id{YType::uint32, "ero-interface-id"},
    ero_router_id{YType::str, "ero-router-id"},
    status{YType::enumeration, "status"}
{

    yang_name = "unnumbered-ero-sub-object"; yang_parent_name = "homepath-ero"; is_top_level_class = false; has_list_ancestor = true; 
}

MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::TransportTunnelInfo::HomepathEro::UnnumberedEroSubObject::~UnnumberedEroSubObject()
{
}

bool MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::TransportTunnelInfo::HomepathEro::UnnumberedEroSubObject::has_data() const
{
    if (is_presence_container) return true;
    return is_strict_route.is_set
	|| ero_interface_id.is_set
	|| ero_router_id.is_set
	|| status.is_set;
}

bool MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::TransportTunnelInfo::HomepathEro::UnnumberedEroSubObject::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(is_strict_route.yfilter)
	|| ydk::is_set(ero_interface_id.yfilter)
	|| ydk::is_set(ero_router_id.yfilter)
	|| ydk::is_set(status.yfilter);
}

std::string MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::TransportTunnelInfo::HomepathEro::UnnumberedEroSubObject::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "unnumbered-ero-sub-object";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::TransportTunnelInfo::HomepathEro::UnnumberedEroSubObject::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (is_strict_route.is_set || is_set(is_strict_route.yfilter)) leaf_name_data.push_back(is_strict_route.get_name_leafdata());
    if (ero_interface_id.is_set || is_set(ero_interface_id.yfilter)) leaf_name_data.push_back(ero_interface_id.get_name_leafdata());
    if (ero_router_id.is_set || is_set(ero_router_id.yfilter)) leaf_name_data.push_back(ero_router_id.get_name_leafdata());
    if (status.is_set || is_set(status.yfilter)) leaf_name_data.push_back(status.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::TransportTunnelInfo::HomepathEro::UnnumberedEroSubObject::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::TransportTunnelInfo::HomepathEro::UnnumberedEroSubObject::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::TransportTunnelInfo::HomepathEro::UnnumberedEroSubObject::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "is-strict-route")
    {
        is_strict_route = value;
        is_strict_route.value_namespace = name_space;
        is_strict_route.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ero-interface-id")
    {
        ero_interface_id = value;
        ero_interface_id.value_namespace = name_space;
        ero_interface_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ero-router-id")
    {
        ero_router_id = value;
        ero_router_id.value_namespace = name_space;
        ero_router_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "status")
    {
        status = value;
        status.value_namespace = name_space;
        status.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::TransportTunnelInfo::HomepathEro::UnnumberedEroSubObject::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "is-strict-route")
    {
        is_strict_route.yfilter = yfilter;
    }
    if(value_path == "ero-interface-id")
    {
        ero_interface_id.yfilter = yfilter;
    }
    if(value_path == "ero-router-id")
    {
        ero_router_id.yfilter = yfilter;
    }
    if(value_path == "status")
    {
        status.yfilter = yfilter;
    }
}

bool MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::TransportTunnelInfo::HomepathEro::UnnumberedEroSubObject::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "is-strict-route" || name == "ero-interface-id" || name == "ero-router-id" || name == "status")
        return true;
    return false;
}

MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::TransportTunnelInfo::DiversityInfo::DiversityInfo()
    :
    tunnel_id{YType::uint16, "tunnel-id"}
{

    yang_name = "diversity-info"; yang_parent_name = "transport-tunnel-info"; is_top_level_class = false; has_list_ancestor = true; 
}

MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::TransportTunnelInfo::DiversityInfo::~DiversityInfo()
{
}

bool MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::TransportTunnelInfo::DiversityInfo::has_data() const
{
    if (is_presence_container) return true;
    return tunnel_id.is_set;
}

bool MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::TransportTunnelInfo::DiversityInfo::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(tunnel_id.yfilter);
}

std::string MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::TransportTunnelInfo::DiversityInfo::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "diversity-info";
    path_buffer << "[" << get_ylist_key() << "]";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::TransportTunnelInfo::DiversityInfo::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (tunnel_id.is_set || is_set(tunnel_id.yfilter)) leaf_name_data.push_back(tunnel_id.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::TransportTunnelInfo::DiversityInfo::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::TransportTunnelInfo::DiversityInfo::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::TransportTunnelInfo::DiversityInfo::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "tunnel-id")
    {
        tunnel_id = value;
        tunnel_id.value_namespace = name_space;
        tunnel_id.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::TransportTunnelInfo::DiversityInfo::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "tunnel-id")
    {
        tunnel_id.yfilter = yfilter;
    }
}

bool MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::TransportTunnelInfo::DiversityInfo::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "tunnel-id")
        return true;
    return false;
}

MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::BfdInfo::BfdInfo()
    :
    bfd_session_up{YType::boolean, "bfd-session-up"},
    session_up_time{YType::uint32, "session-up-time"},
    failure_diagnostic_code{YType::uint32, "failure-diagnostic-code"},
    failure_reason{YType::str, "failure-reason"},
    minimum_session_up_interval{YType::uint32, "minimum-session-up-interval"},
    maximum_session_up_interval{YType::uint32, "maximum-session-up-interval"}
        ,
    event_counters(std::make_shared<MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::BfdInfo::EventCounters>())
    , dampening_info(this, {})
{
    event_counters->parent = this;

    yang_name = "bfd-info"; yang_parent_name = "tunnel-head"; is_top_level_class = false; has_list_ancestor = true; 
}

MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::BfdInfo::~BfdInfo()
{
}

bool MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::BfdInfo::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<dampening_info.len(); index++)
    {
        if(dampening_info[index]->has_data())
            return true;
    }
    return bfd_session_up.is_set
	|| session_up_time.is_set
	|| failure_diagnostic_code.is_set
	|| failure_reason.is_set
	|| minimum_session_up_interval.is_set
	|| maximum_session_up_interval.is_set
	|| (event_counters !=  nullptr && event_counters->has_data());
}

bool MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::BfdInfo::has_operation() const
{
    for (std::size_t index=0; index<dampening_info.len(); index++)
    {
        if(dampening_info[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(bfd_session_up.yfilter)
	|| ydk::is_set(session_up_time.yfilter)
	|| ydk::is_set(failure_diagnostic_code.yfilter)
	|| ydk::is_set(failure_reason.yfilter)
	|| ydk::is_set(minimum_session_up_interval.yfilter)
	|| ydk::is_set(maximum_session_up_interval.yfilter)
	|| (event_counters !=  nullptr && event_counters->has_operation());
}

std::string MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::BfdInfo::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bfd-info";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::BfdInfo::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (bfd_session_up.is_set || is_set(bfd_session_up.yfilter)) leaf_name_data.push_back(bfd_session_up.get_name_leafdata());
    if (session_up_time.is_set || is_set(session_up_time.yfilter)) leaf_name_data.push_back(session_up_time.get_name_leafdata());
    if (failure_diagnostic_code.is_set || is_set(failure_diagnostic_code.yfilter)) leaf_name_data.push_back(failure_diagnostic_code.get_name_leafdata());
    if (failure_reason.is_set || is_set(failure_reason.yfilter)) leaf_name_data.push_back(failure_reason.get_name_leafdata());
    if (minimum_session_up_interval.is_set || is_set(minimum_session_up_interval.yfilter)) leaf_name_data.push_back(minimum_session_up_interval.get_name_leafdata());
    if (maximum_session_up_interval.is_set || is_set(maximum_session_up_interval.yfilter)) leaf_name_data.push_back(maximum_session_up_interval.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::BfdInfo::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "event-counters")
    {
        if(event_counters == nullptr)
        {
            event_counters = std::make_shared<MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::BfdInfo::EventCounters>();
        }
        return event_counters;
    }

    if(child_yang_name == "dampening-info")
    {
        auto ent_ = std::make_shared<MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::BfdInfo::DampeningInfo>();
        ent_->parent = this;
        dampening_info.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::BfdInfo::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(event_counters != nullptr)
    {
        _children["event-counters"] = event_counters;
    }

    count_ = 0;
    for (auto ent_ : dampening_info.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::BfdInfo::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "bfd-session-up")
    {
        bfd_session_up = value;
        bfd_session_up.value_namespace = name_space;
        bfd_session_up.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "session-up-time")
    {
        session_up_time = value;
        session_up_time.value_namespace = name_space;
        session_up_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "failure-diagnostic-code")
    {
        failure_diagnostic_code = value;
        failure_diagnostic_code.value_namespace = name_space;
        failure_diagnostic_code.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "failure-reason")
    {
        failure_reason = value;
        failure_reason.value_namespace = name_space;
        failure_reason.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "minimum-session-up-interval")
    {
        minimum_session_up_interval = value;
        minimum_session_up_interval.value_namespace = name_space;
        minimum_session_up_interval.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "maximum-session-up-interval")
    {
        maximum_session_up_interval = value;
        maximum_session_up_interval.value_namespace = name_space;
        maximum_session_up_interval.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::BfdInfo::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "bfd-session-up")
    {
        bfd_session_up.yfilter = yfilter;
    }
    if(value_path == "session-up-time")
    {
        session_up_time.yfilter = yfilter;
    }
    if(value_path == "failure-diagnostic-code")
    {
        failure_diagnostic_code.yfilter = yfilter;
    }
    if(value_path == "failure-reason")
    {
        failure_reason.yfilter = yfilter;
    }
    if(value_path == "minimum-session-up-interval")
    {
        minimum_session_up_interval.yfilter = yfilter;
    }
    if(value_path == "maximum-session-up-interval")
    {
        maximum_session_up_interval.yfilter = yfilter;
    }
}

bool MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::BfdInfo::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "event-counters" || name == "dampening-info" || name == "bfd-session-up" || name == "session-up-time" || name == "failure-diagnostic-code" || name == "failure-reason" || name == "minimum-session-up-interval" || name == "maximum-session-up-interval")
        return true;
    return false;
}

MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::BfdInfo::EventCounters::EventCounters()
    :
    session_create_events{YType::uint32, "session-create-events"},
    session_up_events{YType::uint32, "session-up-events"},
    session_creation_failed_events{YType::uint32, "session-creation-failed-events"},
    session_down_events{YType::uint32, "session-down-events"},
    session_admin_down_events{YType::uint32, "session-admin-down-events"},
    session_gracefully_delete_events{YType::uint32, "session-gracefully-delete-events"},
    session_non_gracefully_delete_events{YType::uint32, "session-non-gracefully-delete-events"},
    session_create_timeout_events{YType::uint32, "session-create-timeout-events"},
    session_replay_events{YType::uint32, "session-replay-events"}
{

    yang_name = "event-counters"; yang_parent_name = "bfd-info"; is_top_level_class = false; has_list_ancestor = true; 
}

MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::BfdInfo::EventCounters::~EventCounters()
{
}

bool MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::BfdInfo::EventCounters::has_data() const
{
    if (is_presence_container) return true;
    return session_create_events.is_set
	|| session_up_events.is_set
	|| session_creation_failed_events.is_set
	|| session_down_events.is_set
	|| session_admin_down_events.is_set
	|| session_gracefully_delete_events.is_set
	|| session_non_gracefully_delete_events.is_set
	|| session_create_timeout_events.is_set
	|| session_replay_events.is_set;
}

bool MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::BfdInfo::EventCounters::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(session_create_events.yfilter)
	|| ydk::is_set(session_up_events.yfilter)
	|| ydk::is_set(session_creation_failed_events.yfilter)
	|| ydk::is_set(session_down_events.yfilter)
	|| ydk::is_set(session_admin_down_events.yfilter)
	|| ydk::is_set(session_gracefully_delete_events.yfilter)
	|| ydk::is_set(session_non_gracefully_delete_events.yfilter)
	|| ydk::is_set(session_create_timeout_events.yfilter)
	|| ydk::is_set(session_replay_events.yfilter);
}

std::string MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::BfdInfo::EventCounters::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "event-counters";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::BfdInfo::EventCounters::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (session_create_events.is_set || is_set(session_create_events.yfilter)) leaf_name_data.push_back(session_create_events.get_name_leafdata());
    if (session_up_events.is_set || is_set(session_up_events.yfilter)) leaf_name_data.push_back(session_up_events.get_name_leafdata());
    if (session_creation_failed_events.is_set || is_set(session_creation_failed_events.yfilter)) leaf_name_data.push_back(session_creation_failed_events.get_name_leafdata());
    if (session_down_events.is_set || is_set(session_down_events.yfilter)) leaf_name_data.push_back(session_down_events.get_name_leafdata());
    if (session_admin_down_events.is_set || is_set(session_admin_down_events.yfilter)) leaf_name_data.push_back(session_admin_down_events.get_name_leafdata());
    if (session_gracefully_delete_events.is_set || is_set(session_gracefully_delete_events.yfilter)) leaf_name_data.push_back(session_gracefully_delete_events.get_name_leafdata());
    if (session_non_gracefully_delete_events.is_set || is_set(session_non_gracefully_delete_events.yfilter)) leaf_name_data.push_back(session_non_gracefully_delete_events.get_name_leafdata());
    if (session_create_timeout_events.is_set || is_set(session_create_timeout_events.yfilter)) leaf_name_data.push_back(session_create_timeout_events.get_name_leafdata());
    if (session_replay_events.is_set || is_set(session_replay_events.yfilter)) leaf_name_data.push_back(session_replay_events.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::BfdInfo::EventCounters::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::BfdInfo::EventCounters::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::BfdInfo::EventCounters::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "session-create-events")
    {
        session_create_events = value;
        session_create_events.value_namespace = name_space;
        session_create_events.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "session-up-events")
    {
        session_up_events = value;
        session_up_events.value_namespace = name_space;
        session_up_events.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "session-creation-failed-events")
    {
        session_creation_failed_events = value;
        session_creation_failed_events.value_namespace = name_space;
        session_creation_failed_events.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "session-down-events")
    {
        session_down_events = value;
        session_down_events.value_namespace = name_space;
        session_down_events.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "session-admin-down-events")
    {
        session_admin_down_events = value;
        session_admin_down_events.value_namespace = name_space;
        session_admin_down_events.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "session-gracefully-delete-events")
    {
        session_gracefully_delete_events = value;
        session_gracefully_delete_events.value_namespace = name_space;
        session_gracefully_delete_events.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "session-non-gracefully-delete-events")
    {
        session_non_gracefully_delete_events = value;
        session_non_gracefully_delete_events.value_namespace = name_space;
        session_non_gracefully_delete_events.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "session-create-timeout-events")
    {
        session_create_timeout_events = value;
        session_create_timeout_events.value_namespace = name_space;
        session_create_timeout_events.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "session-replay-events")
    {
        session_replay_events = value;
        session_replay_events.value_namespace = name_space;
        session_replay_events.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::BfdInfo::EventCounters::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "session-create-events")
    {
        session_create_events.yfilter = yfilter;
    }
    if(value_path == "session-up-events")
    {
        session_up_events.yfilter = yfilter;
    }
    if(value_path == "session-creation-failed-events")
    {
        session_creation_failed_events.yfilter = yfilter;
    }
    if(value_path == "session-down-events")
    {
        session_down_events.yfilter = yfilter;
    }
    if(value_path == "session-admin-down-events")
    {
        session_admin_down_events.yfilter = yfilter;
    }
    if(value_path == "session-gracefully-delete-events")
    {
        session_gracefully_delete_events.yfilter = yfilter;
    }
    if(value_path == "session-non-gracefully-delete-events")
    {
        session_non_gracefully_delete_events.yfilter = yfilter;
    }
    if(value_path == "session-create-timeout-events")
    {
        session_create_timeout_events.yfilter = yfilter;
    }
    if(value_path == "session-replay-events")
    {
        session_replay_events.yfilter = yfilter;
    }
}

bool MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::BfdInfo::EventCounters::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "session-create-events" || name == "session-up-events" || name == "session-creation-failed-events" || name == "session-down-events" || name == "session-admin-down-events" || name == "session-gracefully-delete-events" || name == "session-non-gracefully-delete-events" || name == "session-create-timeout-events" || name == "session-replay-events")
        return true;
    return false;
}

MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::BfdInfo::DampeningInfo::DampeningInfo()
    :
    option_index{YType::uint32, "option-index"},
    hold_down_time{YType::uint32, "hold-down-time"},
    remained_time{YType::uint32, "remained-time"},
    backoff_count{YType::uint32, "backoff-count"}
{

    yang_name = "dampening-info"; yang_parent_name = "bfd-info"; is_top_level_class = false; has_list_ancestor = true; 
}

MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::BfdInfo::DampeningInfo::~DampeningInfo()
{
}

bool MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::BfdInfo::DampeningInfo::has_data() const
{
    if (is_presence_container) return true;
    return option_index.is_set
	|| hold_down_time.is_set
	|| remained_time.is_set
	|| backoff_count.is_set;
}

bool MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::BfdInfo::DampeningInfo::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(option_index.yfilter)
	|| ydk::is_set(hold_down_time.yfilter)
	|| ydk::is_set(remained_time.yfilter)
	|| ydk::is_set(backoff_count.yfilter);
}

std::string MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::BfdInfo::DampeningInfo::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "dampening-info";
    path_buffer << "[" << get_ylist_key() << "]";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::BfdInfo::DampeningInfo::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (option_index.is_set || is_set(option_index.yfilter)) leaf_name_data.push_back(option_index.get_name_leafdata());
    if (hold_down_time.is_set || is_set(hold_down_time.yfilter)) leaf_name_data.push_back(hold_down_time.get_name_leafdata());
    if (remained_time.is_set || is_set(remained_time.yfilter)) leaf_name_data.push_back(remained_time.get_name_leafdata());
    if (backoff_count.is_set || is_set(backoff_count.yfilter)) leaf_name_data.push_back(backoff_count.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::BfdInfo::DampeningInfo::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::BfdInfo::DampeningInfo::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::BfdInfo::DampeningInfo::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "option-index")
    {
        option_index = value;
        option_index.value_namespace = name_space;
        option_index.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "hold-down-time")
    {
        hold_down_time = value;
        hold_down_time.value_namespace = name_space;
        hold_down_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "remained-time")
    {
        remained_time = value;
        remained_time.value_namespace = name_space;
        remained_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "backoff-count")
    {
        backoff_count = value;
        backoff_count.value_namespace = name_space;
        backoff_count.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::BfdInfo::DampeningInfo::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "option-index")
    {
        option_index.yfilter = yfilter;
    }
    if(value_path == "hold-down-time")
    {
        hold_down_time.yfilter = yfilter;
    }
    if(value_path == "remained-time")
    {
        remained_time.yfilter = yfilter;
    }
    if(value_path == "backoff-count")
    {
        backoff_count.yfilter = yfilter;
    }
}

bool MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::BfdInfo::DampeningInfo::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "option-index" || name == "hold-down-time" || name == "remained-time" || name == "backoff-count")
        return true;
    return false;
}

MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::OtnBidir::OtnBidir()
    :
    aps(std::make_shared<MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::OtnBidir::Aps>())
    , restoration(std::make_shared<MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::OtnBidir::Restoration>())
{
    aps->parent = this;
    restoration->parent = this;

    yang_name = "otn-bidir"; yang_parent_name = "tunnel-head"; is_top_level_class = false; has_list_ancestor = true; 
}

MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::OtnBidir::~OtnBidir()
{
}

bool MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::OtnBidir::has_data() const
{
    if (is_presence_container) return true;
    return (aps !=  nullptr && aps->has_data())
	|| (restoration !=  nullptr && restoration->has_data());
}

bool MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::OtnBidir::has_operation() const
{
    return is_set(yfilter)
	|| (aps !=  nullptr && aps->has_operation())
	|| (restoration !=  nullptr && restoration->has_operation());
}

std::string MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::OtnBidir::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "otn-bidir";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::OtnBidir::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::OtnBidir::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "aps")
    {
        if(aps == nullptr)
        {
            aps = std::make_shared<MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::OtnBidir::Aps>();
        }
        return aps;
    }

    if(child_yang_name == "restoration")
    {
        if(restoration == nullptr)
        {
            restoration = std::make_shared<MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::OtnBidir::Restoration>();
        }
        return restoration;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::OtnBidir::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(aps != nullptr)
    {
        _children["aps"] = aps;
    }

    if(restoration != nullptr)
    {
        _children["restoration"] = restoration;
    }

    return _children;
}

void MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::OtnBidir::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::OtnBidir::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::OtnBidir::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "aps" || name == "restoration")
        return true;
    return false;
}

MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::OtnBidir::Aps::Aps()
    :
    active_lsp{YType::enumeration, "active-lsp"},
    diversity_type{YType::enumeration, "diversity-type"}
        ,
    protection_profile(std::make_shared<MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::OtnBidir::Aps::ProtectionProfile>())
{
    protection_profile->parent = this;

    yang_name = "aps"; yang_parent_name = "otn-bidir"; is_top_level_class = false; has_list_ancestor = true; 
}

MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::OtnBidir::Aps::~Aps()
{
}

bool MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::OtnBidir::Aps::has_data() const
{
    if (is_presence_container) return true;
    return active_lsp.is_set
	|| diversity_type.is_set
	|| (protection_profile !=  nullptr && protection_profile->has_data());
}

bool MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::OtnBidir::Aps::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(active_lsp.yfilter)
	|| ydk::is_set(diversity_type.yfilter)
	|| (protection_profile !=  nullptr && protection_profile->has_operation());
}

std::string MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::OtnBidir::Aps::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "aps";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::OtnBidir::Aps::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (active_lsp.is_set || is_set(active_lsp.yfilter)) leaf_name_data.push_back(active_lsp.get_name_leafdata());
    if (diversity_type.is_set || is_set(diversity_type.yfilter)) leaf_name_data.push_back(diversity_type.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::OtnBidir::Aps::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "protection-profile")
    {
        if(protection_profile == nullptr)
        {
            protection_profile = std::make_shared<MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::OtnBidir::Aps::ProtectionProfile>();
        }
        return protection_profile;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::OtnBidir::Aps::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(protection_profile != nullptr)
    {
        _children["protection-profile"] = protection_profile;
    }

    return _children;
}

void MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::OtnBidir::Aps::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "active-lsp")
    {
        active_lsp = value;
        active_lsp.value_namespace = name_space;
        active_lsp.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "diversity-type")
    {
        diversity_type = value;
        diversity_type.value_namespace = name_space;
        diversity_type.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::OtnBidir::Aps::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "active-lsp")
    {
        active_lsp.yfilter = yfilter;
    }
    if(value_path == "diversity-type")
    {
        diversity_type.yfilter = yfilter;
    }
}

bool MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::OtnBidir::Aps::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "protection-profile" || name == "active-lsp" || name == "diversity-type")
        return true;
    return false;
}

MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::OtnBidir::Aps::ProtectionProfile::ProtectionProfile()
    :
    snc_mode{YType::enumeration, "snc-mode"},
    tcm_id{YType::uint32, "tcm-id"},
    protection_type{YType::enumeration, "protection-type"},
    protection_mode{YType::enumeration, "protection-mode"},
    wait_to_restore_time{YType::uint32, "wait-to-restore-time"},
    hold_off_time{YType::uint32, "hold-off-time"},
    path_prot_profile_type{YType::enumeration, "path-prot-profile-type"},
    restoration_style{YType::enumeration, "restoration-style"}
        ,
    revert_schedule(std::make_shared<MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::OtnBidir::Aps::ProtectionProfile::RevertSchedule>())
{
    revert_schedule->parent = this;

    yang_name = "protection-profile"; yang_parent_name = "aps"; is_top_level_class = false; has_list_ancestor = true; 
}

MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::OtnBidir::Aps::ProtectionProfile::~ProtectionProfile()
{
}

bool MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::OtnBidir::Aps::ProtectionProfile::has_data() const
{
    if (is_presence_container) return true;
    return snc_mode.is_set
	|| tcm_id.is_set
	|| protection_type.is_set
	|| protection_mode.is_set
	|| wait_to_restore_time.is_set
	|| hold_off_time.is_set
	|| path_prot_profile_type.is_set
	|| restoration_style.is_set
	|| (revert_schedule !=  nullptr && revert_schedule->has_data());
}

bool MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::OtnBidir::Aps::ProtectionProfile::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(snc_mode.yfilter)
	|| ydk::is_set(tcm_id.yfilter)
	|| ydk::is_set(protection_type.yfilter)
	|| ydk::is_set(protection_mode.yfilter)
	|| ydk::is_set(wait_to_restore_time.yfilter)
	|| ydk::is_set(hold_off_time.yfilter)
	|| ydk::is_set(path_prot_profile_type.yfilter)
	|| ydk::is_set(restoration_style.yfilter)
	|| (revert_schedule !=  nullptr && revert_schedule->has_operation());
}

std::string MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::OtnBidir::Aps::ProtectionProfile::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "protection-profile";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::OtnBidir::Aps::ProtectionProfile::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (snc_mode.is_set || is_set(snc_mode.yfilter)) leaf_name_data.push_back(snc_mode.get_name_leafdata());
    if (tcm_id.is_set || is_set(tcm_id.yfilter)) leaf_name_data.push_back(tcm_id.get_name_leafdata());
    if (protection_type.is_set || is_set(protection_type.yfilter)) leaf_name_data.push_back(protection_type.get_name_leafdata());
    if (protection_mode.is_set || is_set(protection_mode.yfilter)) leaf_name_data.push_back(protection_mode.get_name_leafdata());
    if (wait_to_restore_time.is_set || is_set(wait_to_restore_time.yfilter)) leaf_name_data.push_back(wait_to_restore_time.get_name_leafdata());
    if (hold_off_time.is_set || is_set(hold_off_time.yfilter)) leaf_name_data.push_back(hold_off_time.get_name_leafdata());
    if (path_prot_profile_type.is_set || is_set(path_prot_profile_type.yfilter)) leaf_name_data.push_back(path_prot_profile_type.get_name_leafdata());
    if (restoration_style.is_set || is_set(restoration_style.yfilter)) leaf_name_data.push_back(restoration_style.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::OtnBidir::Aps::ProtectionProfile::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "revert-schedule")
    {
        if(revert_schedule == nullptr)
        {
            revert_schedule = std::make_shared<MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::OtnBidir::Aps::ProtectionProfile::RevertSchedule>();
        }
        return revert_schedule;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::OtnBidir::Aps::ProtectionProfile::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(revert_schedule != nullptr)
    {
        _children["revert-schedule"] = revert_schedule;
    }

    return _children;
}

void MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::OtnBidir::Aps::ProtectionProfile::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "snc-mode")
    {
        snc_mode = value;
        snc_mode.value_namespace = name_space;
        snc_mode.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tcm-id")
    {
        tcm_id = value;
        tcm_id.value_namespace = name_space;
        tcm_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "protection-type")
    {
        protection_type = value;
        protection_type.value_namespace = name_space;
        protection_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "protection-mode")
    {
        protection_mode = value;
        protection_mode.value_namespace = name_space;
        protection_mode.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "wait-to-restore-time")
    {
        wait_to_restore_time = value;
        wait_to_restore_time.value_namespace = name_space;
        wait_to_restore_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "hold-off-time")
    {
        hold_off_time = value;
        hold_off_time.value_namespace = name_space;
        hold_off_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "path-prot-profile-type")
    {
        path_prot_profile_type = value;
        path_prot_profile_type.value_namespace = name_space;
        path_prot_profile_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "restoration-style")
    {
        restoration_style = value;
        restoration_style.value_namespace = name_space;
        restoration_style.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::OtnBidir::Aps::ProtectionProfile::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "snc-mode")
    {
        snc_mode.yfilter = yfilter;
    }
    if(value_path == "tcm-id")
    {
        tcm_id.yfilter = yfilter;
    }
    if(value_path == "protection-type")
    {
        protection_type.yfilter = yfilter;
    }
    if(value_path == "protection-mode")
    {
        protection_mode.yfilter = yfilter;
    }
    if(value_path == "wait-to-restore-time")
    {
        wait_to_restore_time.yfilter = yfilter;
    }
    if(value_path == "hold-off-time")
    {
        hold_off_time.yfilter = yfilter;
    }
    if(value_path == "path-prot-profile-type")
    {
        path_prot_profile_type.yfilter = yfilter;
    }
    if(value_path == "restoration-style")
    {
        restoration_style.yfilter = yfilter;
    }
}

bool MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::OtnBidir::Aps::ProtectionProfile::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "revert-schedule" || name == "snc-mode" || name == "tcm-id" || name == "protection-type" || name == "protection-mode" || name == "wait-to-restore-time" || name == "hold-off-time" || name == "path-prot-profile-type" || name == "restoration-style")
        return true;
    return false;
}

MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::OtnBidir::Aps::ProtectionProfile::RevertSchedule::RevertSchedule()
    :
    schedulename{YType::str, "schedulename"},
    schedule_date{YType::uint32, "schedule-date"},
    schedule_frequency{YType::enumeration, "schedule-frequency"},
    duration{YType::uint32, "duration"},
    max_tries{YType::uint32, "max-tries"}
{

    yang_name = "revert-schedule"; yang_parent_name = "protection-profile"; is_top_level_class = false; has_list_ancestor = true; 
}

MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::OtnBidir::Aps::ProtectionProfile::RevertSchedule::~RevertSchedule()
{
}

bool MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::OtnBidir::Aps::ProtectionProfile::RevertSchedule::has_data() const
{
    if (is_presence_container) return true;
    return schedulename.is_set
	|| schedule_date.is_set
	|| schedule_frequency.is_set
	|| duration.is_set
	|| max_tries.is_set;
}

bool MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::OtnBidir::Aps::ProtectionProfile::RevertSchedule::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(schedulename.yfilter)
	|| ydk::is_set(schedule_date.yfilter)
	|| ydk::is_set(schedule_frequency.yfilter)
	|| ydk::is_set(duration.yfilter)
	|| ydk::is_set(max_tries.yfilter);
}

std::string MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::OtnBidir::Aps::ProtectionProfile::RevertSchedule::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "revert-schedule";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::OtnBidir::Aps::ProtectionProfile::RevertSchedule::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (schedulename.is_set || is_set(schedulename.yfilter)) leaf_name_data.push_back(schedulename.get_name_leafdata());
    if (schedule_date.is_set || is_set(schedule_date.yfilter)) leaf_name_data.push_back(schedule_date.get_name_leafdata());
    if (schedule_frequency.is_set || is_set(schedule_frequency.yfilter)) leaf_name_data.push_back(schedule_frequency.get_name_leafdata());
    if (duration.is_set || is_set(duration.yfilter)) leaf_name_data.push_back(duration.get_name_leafdata());
    if (max_tries.is_set || is_set(max_tries.yfilter)) leaf_name_data.push_back(max_tries.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::OtnBidir::Aps::ProtectionProfile::RevertSchedule::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::OtnBidir::Aps::ProtectionProfile::RevertSchedule::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::OtnBidir::Aps::ProtectionProfile::RevertSchedule::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "schedulename")
    {
        schedulename = value;
        schedulename.value_namespace = name_space;
        schedulename.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "schedule-date")
    {
        schedule_date = value;
        schedule_date.value_namespace = name_space;
        schedule_date.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "schedule-frequency")
    {
        schedule_frequency = value;
        schedule_frequency.value_namespace = name_space;
        schedule_frequency.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "duration")
    {
        duration = value;
        duration.value_namespace = name_space;
        duration.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "max-tries")
    {
        max_tries = value;
        max_tries.value_namespace = name_space;
        max_tries.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::OtnBidir::Aps::ProtectionProfile::RevertSchedule::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "schedulename")
    {
        schedulename.yfilter = yfilter;
    }
    if(value_path == "schedule-date")
    {
        schedule_date.yfilter = yfilter;
    }
    if(value_path == "schedule-frequency")
    {
        schedule_frequency.yfilter = yfilter;
    }
    if(value_path == "duration")
    {
        duration.yfilter = yfilter;
    }
    if(value_path == "max-tries")
    {
        max_tries.yfilter = yfilter;
    }
}

bool MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::OtnBidir::Aps::ProtectionProfile::RevertSchedule::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "schedulename" || name == "schedule-date" || name == "schedule-frequency" || name == "duration" || name == "max-tries")
        return true;
    return false;
}

MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::OtnBidir::Restoration::Restoration()
    :
    revert_option{YType::enumeration, "revert-option"},
    diverse_lsp{YType::enumeration, "diverse-lsp"},
    diversity_type{YType::enumeration, "diversity-type"}
{

    yang_name = "restoration"; yang_parent_name = "otn-bidir"; is_top_level_class = false; has_list_ancestor = true; 
}

MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::OtnBidir::Restoration::~Restoration()
{
}

bool MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::OtnBidir::Restoration::has_data() const
{
    if (is_presence_container) return true;
    return revert_option.is_set
	|| diverse_lsp.is_set
	|| diversity_type.is_set;
}

bool MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::OtnBidir::Restoration::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(revert_option.yfilter)
	|| ydk::is_set(diverse_lsp.yfilter)
	|| ydk::is_set(diversity_type.yfilter);
}

std::string MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::OtnBidir::Restoration::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "restoration";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::OtnBidir::Restoration::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (revert_option.is_set || is_set(revert_option.yfilter)) leaf_name_data.push_back(revert_option.get_name_leafdata());
    if (diverse_lsp.is_set || is_set(diverse_lsp.yfilter)) leaf_name_data.push_back(diverse_lsp.get_name_leafdata());
    if (diversity_type.is_set || is_set(diversity_type.yfilter)) leaf_name_data.push_back(diversity_type.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::OtnBidir::Restoration::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::OtnBidir::Restoration::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::OtnBidir::Restoration::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "revert-option")
    {
        revert_option = value;
        revert_option.value_namespace = name_space;
        revert_option.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "diverse-lsp")
    {
        diverse_lsp = value;
        diverse_lsp.value_namespace = name_space;
        diverse_lsp.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "diversity-type")
    {
        diversity_type = value;
        diversity_type.value_namespace = name_space;
        diversity_type.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::OtnBidir::Restoration::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "revert-option")
    {
        revert_option.yfilter = yfilter;
    }
    if(value_path == "diverse-lsp")
    {
        diverse_lsp.yfilter = yfilter;
    }
    if(value_path == "diversity-type")
    {
        diversity_type.yfilter = yfilter;
    }
}

bool MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::OtnBidir::Restoration::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "revert-option" || name == "diverse-lsp" || name == "diversity-type")
        return true;
    return false;
}

MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::Bidir::Bidir()
    :
    reverse_bandwidth{YType::uint32, "reverse-bandwidth"},
    reverse_bandwidth_standby{YType::uint32, "reverse-bandwidth-standby"}
        ,
    reverse_ero_error_current(std::make_shared<MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::Bidir::ReverseEroErrorCurrent>())
    , reverse_ero_error_reopt(std::make_shared<MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::Bidir::ReverseEroErrorReopt>())
    , reverse_ero_error_standby(std::make_shared<MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::Bidir::ReverseEroErrorStandby>())
    , reverse_ero_error_standby_reopt(std::make_shared<MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::Bidir::ReverseEroErrorStandbyReopt>())
{
    reverse_ero_error_current->parent = this;
    reverse_ero_error_reopt->parent = this;
    reverse_ero_error_standby->parent = this;
    reverse_ero_error_standby_reopt->parent = this;

    yang_name = "bidir"; yang_parent_name = "tunnel-head"; is_top_level_class = false; has_list_ancestor = true; 
}

MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::Bidir::~Bidir()
{
}

bool MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::Bidir::has_data() const
{
    if (is_presence_container) return true;
    return reverse_bandwidth.is_set
	|| reverse_bandwidth_standby.is_set
	|| (reverse_ero_error_current !=  nullptr && reverse_ero_error_current->has_data())
	|| (reverse_ero_error_reopt !=  nullptr && reverse_ero_error_reopt->has_data())
	|| (reverse_ero_error_standby !=  nullptr && reverse_ero_error_standby->has_data())
	|| (reverse_ero_error_standby_reopt !=  nullptr && reverse_ero_error_standby_reopt->has_data());
}

bool MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::Bidir::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(reverse_bandwidth.yfilter)
	|| ydk::is_set(reverse_bandwidth_standby.yfilter)
	|| (reverse_ero_error_current !=  nullptr && reverse_ero_error_current->has_operation())
	|| (reverse_ero_error_reopt !=  nullptr && reverse_ero_error_reopt->has_operation())
	|| (reverse_ero_error_standby !=  nullptr && reverse_ero_error_standby->has_operation())
	|| (reverse_ero_error_standby_reopt !=  nullptr && reverse_ero_error_standby_reopt->has_operation());
}

std::string MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::Bidir::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bidir";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::Bidir::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (reverse_bandwidth.is_set || is_set(reverse_bandwidth.yfilter)) leaf_name_data.push_back(reverse_bandwidth.get_name_leafdata());
    if (reverse_bandwidth_standby.is_set || is_set(reverse_bandwidth_standby.yfilter)) leaf_name_data.push_back(reverse_bandwidth_standby.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::Bidir::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "reverse-ero-error-current")
    {
        if(reverse_ero_error_current == nullptr)
        {
            reverse_ero_error_current = std::make_shared<MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::Bidir::ReverseEroErrorCurrent>();
        }
        return reverse_ero_error_current;
    }

    if(child_yang_name == "reverse-ero-error-reopt")
    {
        if(reverse_ero_error_reopt == nullptr)
        {
            reverse_ero_error_reopt = std::make_shared<MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::Bidir::ReverseEroErrorReopt>();
        }
        return reverse_ero_error_reopt;
    }

    if(child_yang_name == "reverse-ero-error-standby")
    {
        if(reverse_ero_error_standby == nullptr)
        {
            reverse_ero_error_standby = std::make_shared<MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::Bidir::ReverseEroErrorStandby>();
        }
        return reverse_ero_error_standby;
    }

    if(child_yang_name == "reverse-ero-error-standby-reopt")
    {
        if(reverse_ero_error_standby_reopt == nullptr)
        {
            reverse_ero_error_standby_reopt = std::make_shared<MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::Bidir::ReverseEroErrorStandbyReopt>();
        }
        return reverse_ero_error_standby_reopt;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::Bidir::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(reverse_ero_error_current != nullptr)
    {
        _children["reverse-ero-error-current"] = reverse_ero_error_current;
    }

    if(reverse_ero_error_reopt != nullptr)
    {
        _children["reverse-ero-error-reopt"] = reverse_ero_error_reopt;
    }

    if(reverse_ero_error_standby != nullptr)
    {
        _children["reverse-ero-error-standby"] = reverse_ero_error_standby;
    }

    if(reverse_ero_error_standby_reopt != nullptr)
    {
        _children["reverse-ero-error-standby-reopt"] = reverse_ero_error_standby_reopt;
    }

    return _children;
}

void MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::Bidir::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "reverse-bandwidth")
    {
        reverse_bandwidth = value;
        reverse_bandwidth.value_namespace = name_space;
        reverse_bandwidth.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "reverse-bandwidth-standby")
    {
        reverse_bandwidth_standby = value;
        reverse_bandwidth_standby.value_namespace = name_space;
        reverse_bandwidth_standby.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::Bidir::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "reverse-bandwidth")
    {
        reverse_bandwidth.yfilter = yfilter;
    }
    if(value_path == "reverse-bandwidth-standby")
    {
        reverse_bandwidth_standby.yfilter = yfilter;
    }
}

bool MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::Bidir::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "reverse-ero-error-current" || name == "reverse-ero-error-reopt" || name == "reverse-ero-error-standby" || name == "reverse-ero-error-standby-reopt" || name == "reverse-bandwidth" || name == "reverse-bandwidth-standby")
        return true;
    return false;
}


}
}


#ifndef _CISCO_IOS_XR_INVMGR_OPER_0_
#define _CISCO_IOS_XR_INVMGR_OPER_0_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>

namespace cisco_ios_xr {
namespace Cisco_IOS_XR_invmgr_oper {

class Inventory : public ydk::Entity
{
    public:
        Inventory();
        ~Inventory();

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

        class Entities; //type: Inventory::Entities
        class Racks; //type: Inventory::Racks

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_invmgr_oper::Inventory::Entities> entities;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_invmgr_oper::Inventory::Racks> racks;
        
}; // Inventory


class Inventory::Entities : public ydk::Entity
{
    public:
        Entities();
        ~Entities();

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

        class Entity; //type: Inventory::Entities::Entity

        ydk::YList entity_;
        
}; // Inventory::Entities


class Inventory::Entities::Entity : public ydk::Entity
{
    public:
        Entity();
        ~Entity();

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
        class Attributes; //type: Inventory::Entities::Entity::Attributes
        class Subentities; //type: Inventory::Entities::Entity::Subentities

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_invmgr_oper::Inventory::Entities::Entity::Attributes> attributes;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_invmgr_oper::Inventory::Entities::Entity::Subentities> subentities;
        
}; // Inventory::Entities::Entity


class Inventory::Entities::Entity::Attributes : public ydk::Entity
{
    public:
        Attributes();
        ~Attributes();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class InvBasicBag; //type: Inventory::Entities::Entity::Attributes::InvBasicBag
        class InvAssetBag; //type: Inventory::Entities::Entity::Attributes::InvAssetBag

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_invmgr_oper::Inventory::Entities::Entity::Attributes::InvBasicBag> inv_basic_bag;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_invmgr_oper::Inventory::Entities::Entity::Attributes::InvAssetBag> inv_asset_bag;
        
}; // Inventory::Entities::Entity::Attributes


class Inventory::Entities::Entity::Attributes::InvBasicBag : public ydk::Entity
{
    public:
        InvBasicBag();
        ~InvBasicBag();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf description; //type: string
        ydk::YLeaf vendor_type; //type: string
        ydk::YLeaf name; //type: string
        ydk::YLeaf hardware_revision; //type: string
        ydk::YLeaf firmware_revision; //type: string
        ydk::YLeaf software_revision; //type: string
        ydk::YLeaf chip_hardware_revision; //type: string
        ydk::YLeaf serial_number; //type: string
        ydk::YLeaf manufacturer_name; //type: string
        ydk::YLeaf model_name; //type: string
        ydk::YLeaf asset_id_str; //type: string
        ydk::YLeaf asset_identification; //type: int32
        ydk::YLeaf is_field_replaceable_unit; //type: boolean
        ydk::YLeaf manufacturer_asset_tags; //type: int32
        ydk::YLeaf composite_class_code; //type: int32
        ydk::YLeaf memory_size; //type: int32
        ydk::YLeaf environmental_monitor_path; //type: string
        ydk::YLeaf alias; //type: string
        ydk::YLeaf group_flag; //type: boolean
        ydk::YLeaf new_deviation_number; //type: int32
        ydk::YLeaf physical_layer_interface_module_type; //type: int32
        ydk::YLeaf unrecognized_fru; //type: boolean
        ydk::YLeaf redundancystate; //type: int32
        ydk::YLeaf ceport; //type: boolean
        ydk::YLeaf xr_scoped; //type: boolean
        ydk::YLeaf unique_id; //type: int32

}; // Inventory::Entities::Entity::Attributes::InvBasicBag


class Inventory::Entities::Entity::Attributes::InvAssetBag : public ydk::Entity
{
    public:
        InvAssetBag();
        ~InvAssetBag();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf part_number; //type: string
        ydk::YLeaf manufacturer_assembly_number; //type: string
        ydk::YLeaf manufacturer_assembly_revision; //type: string
        ydk::YLeaf manufacturer_firmware_identifier; //type: string
        ydk::YLeaf manufacturer_software_identifier; //type: string
        ydk::YLeaf manufacturer_common_language_equipment_identifier; //type: string
        ydk::YLeaf original_equipment_manufacturer_string; //type: string

}; // Inventory::Entities::Entity::Attributes::InvAssetBag


class Inventory::Entities::Entity::Subentities : public ydk::Entity
{
    public:
        Subentities();
        ~Subentities();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Subentity; //type: Inventory::Entities::Entity::Subentities::Subentity

        ydk::YList subentity;
        
}; // Inventory::Entities::Entity::Subentities


class Inventory::Entities::Entity::Subentities::Subentity : public ydk::Entity
{
    public:
        Subentity();
        ~Subentity();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf name; //type: string
        ydk::YLeaf name_xr; //type: string

}; // Inventory::Entities::Entity::Subentities::Subentity


class Inventory::Racks : public ydk::Entity
{
    public:
        Racks();
        ~Racks();

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

        class Rack; //type: Inventory::Racks::Rack

        ydk::YList rack;
        
}; // Inventory::Racks


class Inventory::Racks::Rack : public ydk::Entity
{
    public:
        Rack();
        ~Rack();

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
        class Entity; //type: Inventory::Racks::Rack::Entity
        class Powershelf; //type: Inventory::Racks::Rack::Powershelf
        class Fantray; //type: Inventory::Racks::Rack::Fantray
        class Attributes; //type: Inventory::Racks::Rack::Attributes

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_invmgr_oper::Inventory::Racks::Rack::Entity> entity_;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_invmgr_oper::Inventory::Racks::Rack::Powershelf> powershelf;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_invmgr_oper::Inventory::Racks::Rack::Fantray> fantray;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_invmgr_oper::Inventory::Racks::Rack::Attributes> attributes;
        
}; // Inventory::Racks::Rack


class Inventory::Racks::Rack::Entity : public ydk::Entity
{
    public:
        Entity();
        ~Entity();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Slot; //type: Inventory::Racks::Rack::Entity::Slot

        ydk::YList slot;
        
}; // Inventory::Racks::Rack::Entity


class Inventory::Racks::Rack::Entity::Slot : public ydk::Entity
{
    public:
        Slot();
        ~Slot();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf name; //type: string
        class Tsi1s; //type: Inventory::Racks::Rack::Entity::Slot::Tsi1s
        class Attributes; //type: Inventory::Racks::Rack::Entity::Slot::Attributes

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_invmgr_oper::Inventory::Racks::Rack::Entity::Slot::Tsi1s> tsi1s;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_invmgr_oper::Inventory::Racks::Rack::Entity::Slot::Attributes> attributes;
        
}; // Inventory::Racks::Rack::Entity::Slot


class Inventory::Racks::Rack::Entity::Slot::Tsi1s : public ydk::Entity
{
    public:
        Tsi1s();
        ~Tsi1s();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Tsi1; //type: Inventory::Racks::Rack::Entity::Slot::Tsi1s::Tsi1

        ydk::YList tsi1;
        
}; // Inventory::Racks::Rack::Entity::Slot::Tsi1s


class Inventory::Racks::Rack::Entity::Slot::Tsi1s::Tsi1 : public ydk::Entity
{
    public:
        Tsi1();
        ~Tsi1();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf name; //type: string
        class Tsi2s; //type: Inventory::Racks::Rack::Entity::Slot::Tsi1s::Tsi1::Tsi2s
        class Attributes; //type: Inventory::Racks::Rack::Entity::Slot::Tsi1s::Tsi1::Attributes

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_invmgr_oper::Inventory::Racks::Rack::Entity::Slot::Tsi1s::Tsi1::Tsi2s> tsi2s;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_invmgr_oper::Inventory::Racks::Rack::Entity::Slot::Tsi1s::Tsi1::Attributes> attributes;
        
}; // Inventory::Racks::Rack::Entity::Slot::Tsi1s::Tsi1


class Inventory::Racks::Rack::Entity::Slot::Tsi1s::Tsi1::Tsi2s : public ydk::Entity
{
    public:
        Tsi2s();
        ~Tsi2s();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Tsi2; //type: Inventory::Racks::Rack::Entity::Slot::Tsi1s::Tsi1::Tsi2s::Tsi2

        ydk::YList tsi2;
        
}; // Inventory::Racks::Rack::Entity::Slot::Tsi1s::Tsi1::Tsi2s


class Inventory::Racks::Rack::Entity::Slot::Tsi1s::Tsi1::Tsi2s::Tsi2 : public ydk::Entity
{
    public:
        Tsi2();
        ~Tsi2();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf name; //type: string
        class Tsi3s; //type: Inventory::Racks::Rack::Entity::Slot::Tsi1s::Tsi1::Tsi2s::Tsi2::Tsi3s
        class Attributes; //type: Inventory::Racks::Rack::Entity::Slot::Tsi1s::Tsi1::Tsi2s::Tsi2::Attributes

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_invmgr_oper::Inventory::Racks::Rack::Entity::Slot::Tsi1s::Tsi1::Tsi2s::Tsi2::Tsi3s> tsi3s;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_invmgr_oper::Inventory::Racks::Rack::Entity::Slot::Tsi1s::Tsi1::Tsi2s::Tsi2::Attributes> attributes;
        
}; // Inventory::Racks::Rack::Entity::Slot::Tsi1s::Tsi1::Tsi2s::Tsi2


class Inventory::Racks::Rack::Entity::Slot::Tsi1s::Tsi1::Tsi2s::Tsi2::Tsi3s : public ydk::Entity
{
    public:
        Tsi3s();
        ~Tsi3s();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Tsi3; //type: Inventory::Racks::Rack::Entity::Slot::Tsi1s::Tsi1::Tsi2s::Tsi2::Tsi3s::Tsi3

        ydk::YList tsi3;
        
}; // Inventory::Racks::Rack::Entity::Slot::Tsi1s::Tsi1::Tsi2s::Tsi2::Tsi3s


class Inventory::Racks::Rack::Entity::Slot::Tsi1s::Tsi1::Tsi2s::Tsi2::Tsi3s::Tsi3 : public ydk::Entity
{
    public:
        Tsi3();
        ~Tsi3();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf name; //type: string
        class Tsi4s; //type: Inventory::Racks::Rack::Entity::Slot::Tsi1s::Tsi1::Tsi2s::Tsi2::Tsi3s::Tsi3::Tsi4s
        class Attributes; //type: Inventory::Racks::Rack::Entity::Slot::Tsi1s::Tsi1::Tsi2s::Tsi2::Tsi3s::Tsi3::Attributes

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_invmgr_oper::Inventory::Racks::Rack::Entity::Slot::Tsi1s::Tsi1::Tsi2s::Tsi2::Tsi3s::Tsi3::Tsi4s> tsi4s;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_invmgr_oper::Inventory::Racks::Rack::Entity::Slot::Tsi1s::Tsi1::Tsi2s::Tsi2::Tsi3s::Tsi3::Attributes> attributes;
        
}; // Inventory::Racks::Rack::Entity::Slot::Tsi1s::Tsi1::Tsi2s::Tsi2::Tsi3s::Tsi3


class Inventory::Racks::Rack::Entity::Slot::Tsi1s::Tsi1::Tsi2s::Tsi2::Tsi3s::Tsi3::Tsi4s : public ydk::Entity
{
    public:
        Tsi4s();
        ~Tsi4s();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Tsi4; //type: Inventory::Racks::Rack::Entity::Slot::Tsi1s::Tsi1::Tsi2s::Tsi2::Tsi3s::Tsi3::Tsi4s::Tsi4

        ydk::YList tsi4;
        
}; // Inventory::Racks::Rack::Entity::Slot::Tsi1s::Tsi1::Tsi2s::Tsi2::Tsi3s::Tsi3::Tsi4s


class Inventory::Racks::Rack::Entity::Slot::Tsi1s::Tsi1::Tsi2s::Tsi2::Tsi3s::Tsi3::Tsi4s::Tsi4 : public ydk::Entity
{
    public:
        Tsi4();
        ~Tsi4();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf name; //type: string
        class Tsi5s; //type: Inventory::Racks::Rack::Entity::Slot::Tsi1s::Tsi1::Tsi2s::Tsi2::Tsi3s::Tsi3::Tsi4s::Tsi4::Tsi5s
        class Attributes; //type: Inventory::Racks::Rack::Entity::Slot::Tsi1s::Tsi1::Tsi2s::Tsi2::Tsi3s::Tsi3::Tsi4s::Tsi4::Attributes

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_invmgr_oper::Inventory::Racks::Rack::Entity::Slot::Tsi1s::Tsi1::Tsi2s::Tsi2::Tsi3s::Tsi3::Tsi4s::Tsi4::Tsi5s> tsi5s;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_invmgr_oper::Inventory::Racks::Rack::Entity::Slot::Tsi1s::Tsi1::Tsi2s::Tsi2::Tsi3s::Tsi3::Tsi4s::Tsi4::Attributes> attributes;
        
}; // Inventory::Racks::Rack::Entity::Slot::Tsi1s::Tsi1::Tsi2s::Tsi2::Tsi3s::Tsi3::Tsi4s::Tsi4


class Inventory::Racks::Rack::Entity::Slot::Tsi1s::Tsi1::Tsi2s::Tsi2::Tsi3s::Tsi3::Tsi4s::Tsi4::Tsi5s : public ydk::Entity
{
    public:
        Tsi5s();
        ~Tsi5s();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Tsi5; //type: Inventory::Racks::Rack::Entity::Slot::Tsi1s::Tsi1::Tsi2s::Tsi2::Tsi3s::Tsi3::Tsi4s::Tsi4::Tsi5s::Tsi5

        ydk::YList tsi5;
        
}; // Inventory::Racks::Rack::Entity::Slot::Tsi1s::Tsi1::Tsi2s::Tsi2::Tsi3s::Tsi3::Tsi4s::Tsi4::Tsi5s


class Inventory::Racks::Rack::Entity::Slot::Tsi1s::Tsi1::Tsi2s::Tsi2::Tsi3s::Tsi3::Tsi4s::Tsi4::Tsi5s::Tsi5 : public ydk::Entity
{
    public:
        Tsi5();
        ~Tsi5();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf name; //type: string
        class Tsi6s; //type: Inventory::Racks::Rack::Entity::Slot::Tsi1s::Tsi1::Tsi2s::Tsi2::Tsi3s::Tsi3::Tsi4s::Tsi4::Tsi5s::Tsi5::Tsi6s
        class Attributes; //type: Inventory::Racks::Rack::Entity::Slot::Tsi1s::Tsi1::Tsi2s::Tsi2::Tsi3s::Tsi3::Tsi4s::Tsi4::Tsi5s::Tsi5::Attributes

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_invmgr_oper::Inventory::Racks::Rack::Entity::Slot::Tsi1s::Tsi1::Tsi2s::Tsi2::Tsi3s::Tsi3::Tsi4s::Tsi4::Tsi5s::Tsi5::Tsi6s> tsi6s;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_invmgr_oper::Inventory::Racks::Rack::Entity::Slot::Tsi1s::Tsi1::Tsi2s::Tsi2::Tsi3s::Tsi3::Tsi4s::Tsi4::Tsi5s::Tsi5::Attributes> attributes;
        
}; // Inventory::Racks::Rack::Entity::Slot::Tsi1s::Tsi1::Tsi2s::Tsi2::Tsi3s::Tsi3::Tsi4s::Tsi4::Tsi5s::Tsi5


class Inventory::Racks::Rack::Entity::Slot::Tsi1s::Tsi1::Tsi2s::Tsi2::Tsi3s::Tsi3::Tsi4s::Tsi4::Tsi5s::Tsi5::Tsi6s : public ydk::Entity
{
    public:
        Tsi6s();
        ~Tsi6s();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Tsi6; //type: Inventory::Racks::Rack::Entity::Slot::Tsi1s::Tsi1::Tsi2s::Tsi2::Tsi3s::Tsi3::Tsi4s::Tsi4::Tsi5s::Tsi5::Tsi6s::Tsi6

        ydk::YList tsi6;
        
}; // Inventory::Racks::Rack::Entity::Slot::Tsi1s::Tsi1::Tsi2s::Tsi2::Tsi3s::Tsi3::Tsi4s::Tsi4::Tsi5s::Tsi5::Tsi6s


class Inventory::Racks::Rack::Entity::Slot::Tsi1s::Tsi1::Tsi2s::Tsi2::Tsi3s::Tsi3::Tsi4s::Tsi4::Tsi5s::Tsi5::Tsi6s::Tsi6 : public ydk::Entity
{
    public:
        Tsi6();
        ~Tsi6();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf name; //type: string
        class Tsi7s; //type: Inventory::Racks::Rack::Entity::Slot::Tsi1s::Tsi1::Tsi2s::Tsi2::Tsi3s::Tsi3::Tsi4s::Tsi4::Tsi5s::Tsi5::Tsi6s::Tsi6::Tsi7s
        class Attributes; //type: Inventory::Racks::Rack::Entity::Slot::Tsi1s::Tsi1::Tsi2s::Tsi2::Tsi3s::Tsi3::Tsi4s::Tsi4::Tsi5s::Tsi5::Tsi6s::Tsi6::Attributes

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_invmgr_oper::Inventory::Racks::Rack::Entity::Slot::Tsi1s::Tsi1::Tsi2s::Tsi2::Tsi3s::Tsi3::Tsi4s::Tsi4::Tsi5s::Tsi5::Tsi6s::Tsi6::Tsi7s> tsi7s;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_invmgr_oper::Inventory::Racks::Rack::Entity::Slot::Tsi1s::Tsi1::Tsi2s::Tsi2::Tsi3s::Tsi3::Tsi4s::Tsi4::Tsi5s::Tsi5::Tsi6s::Tsi6::Attributes> attributes;
        
}; // Inventory::Racks::Rack::Entity::Slot::Tsi1s::Tsi1::Tsi2s::Tsi2::Tsi3s::Tsi3::Tsi4s::Tsi4::Tsi5s::Tsi5::Tsi6s::Tsi6


class Inventory::Racks::Rack::Entity::Slot::Tsi1s::Tsi1::Tsi2s::Tsi2::Tsi3s::Tsi3::Tsi4s::Tsi4::Tsi5s::Tsi5::Tsi6s::Tsi6::Tsi7s : public ydk::Entity
{
    public:
        Tsi7s();
        ~Tsi7s();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Tsi7; //type: Inventory::Racks::Rack::Entity::Slot::Tsi1s::Tsi1::Tsi2s::Tsi2::Tsi3s::Tsi3::Tsi4s::Tsi4::Tsi5s::Tsi5::Tsi6s::Tsi6::Tsi7s::Tsi7

        ydk::YList tsi7;
        
}; // Inventory::Racks::Rack::Entity::Slot::Tsi1s::Tsi1::Tsi2s::Tsi2::Tsi3s::Tsi3::Tsi4s::Tsi4::Tsi5s::Tsi5::Tsi6s::Tsi6::Tsi7s


class Inventory::Racks::Rack::Entity::Slot::Tsi1s::Tsi1::Tsi2s::Tsi2::Tsi3s::Tsi3::Tsi4s::Tsi4::Tsi5s::Tsi5::Tsi6s::Tsi6::Tsi7s::Tsi7 : public ydk::Entity
{
    public:
        Tsi7();
        ~Tsi7();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf name; //type: string
        class Tsi8s; //type: Inventory::Racks::Rack::Entity::Slot::Tsi1s::Tsi1::Tsi2s::Tsi2::Tsi3s::Tsi3::Tsi4s::Tsi4::Tsi5s::Tsi5::Tsi6s::Tsi6::Tsi7s::Tsi7::Tsi8s
        class Attributes; //type: Inventory::Racks::Rack::Entity::Slot::Tsi1s::Tsi1::Tsi2s::Tsi2::Tsi3s::Tsi3::Tsi4s::Tsi4::Tsi5s::Tsi5::Tsi6s::Tsi6::Tsi7s::Tsi7::Attributes

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_invmgr_oper::Inventory::Racks::Rack::Entity::Slot::Tsi1s::Tsi1::Tsi2s::Tsi2::Tsi3s::Tsi3::Tsi4s::Tsi4::Tsi5s::Tsi5::Tsi6s::Tsi6::Tsi7s::Tsi7::Tsi8s> tsi8s;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_invmgr_oper::Inventory::Racks::Rack::Entity::Slot::Tsi1s::Tsi1::Tsi2s::Tsi2::Tsi3s::Tsi3::Tsi4s::Tsi4::Tsi5s::Tsi5::Tsi6s::Tsi6::Tsi7s::Tsi7::Attributes> attributes;
        
}; // Inventory::Racks::Rack::Entity::Slot::Tsi1s::Tsi1::Tsi2s::Tsi2::Tsi3s::Tsi3::Tsi4s::Tsi4::Tsi5s::Tsi5::Tsi6s::Tsi6::Tsi7s::Tsi7


class Inventory::Racks::Rack::Entity::Slot::Tsi1s::Tsi1::Tsi2s::Tsi2::Tsi3s::Tsi3::Tsi4s::Tsi4::Tsi5s::Tsi5::Tsi6s::Tsi6::Tsi7s::Tsi7::Tsi8s : public ydk::Entity
{
    public:
        Tsi8s();
        ~Tsi8s();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Tsi8; //type: Inventory::Racks::Rack::Entity::Slot::Tsi1s::Tsi1::Tsi2s::Tsi2::Tsi3s::Tsi3::Tsi4s::Tsi4::Tsi5s::Tsi5::Tsi6s::Tsi6::Tsi7s::Tsi7::Tsi8s::Tsi8

        ydk::YList tsi8;
        
}; // Inventory::Racks::Rack::Entity::Slot::Tsi1s::Tsi1::Tsi2s::Tsi2::Tsi3s::Tsi3::Tsi4s::Tsi4::Tsi5s::Tsi5::Tsi6s::Tsi6::Tsi7s::Tsi7::Tsi8s


class Inventory::Racks::Rack::Entity::Slot::Tsi1s::Tsi1::Tsi2s::Tsi2::Tsi3s::Tsi3::Tsi4s::Tsi4::Tsi5s::Tsi5::Tsi6s::Tsi6::Tsi7s::Tsi7::Tsi8s::Tsi8 : public ydk::Entity
{
    public:
        Tsi8();
        ~Tsi8();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf name; //type: string
        class Tsi9s; //type: Inventory::Racks::Rack::Entity::Slot::Tsi1s::Tsi1::Tsi2s::Tsi2::Tsi3s::Tsi3::Tsi4s::Tsi4::Tsi5s::Tsi5::Tsi6s::Tsi6::Tsi7s::Tsi7::Tsi8s::Tsi8::Tsi9s
        class Attributes; //type: Inventory::Racks::Rack::Entity::Slot::Tsi1s::Tsi1::Tsi2s::Tsi2::Tsi3s::Tsi3::Tsi4s::Tsi4::Tsi5s::Tsi5::Tsi6s::Tsi6::Tsi7s::Tsi7::Tsi8s::Tsi8::Attributes

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_invmgr_oper::Inventory::Racks::Rack::Entity::Slot::Tsi1s::Tsi1::Tsi2s::Tsi2::Tsi3s::Tsi3::Tsi4s::Tsi4::Tsi5s::Tsi5::Tsi6s::Tsi6::Tsi7s::Tsi7::Tsi8s::Tsi8::Tsi9s> tsi9s;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_invmgr_oper::Inventory::Racks::Rack::Entity::Slot::Tsi1s::Tsi1::Tsi2s::Tsi2::Tsi3s::Tsi3::Tsi4s::Tsi4::Tsi5s::Tsi5::Tsi6s::Tsi6::Tsi7s::Tsi7::Tsi8s::Tsi8::Attributes> attributes;
        
}; // Inventory::Racks::Rack::Entity::Slot::Tsi1s::Tsi1::Tsi2s::Tsi2::Tsi3s::Tsi3::Tsi4s::Tsi4::Tsi5s::Tsi5::Tsi6s::Tsi6::Tsi7s::Tsi7::Tsi8s::Tsi8


class Inventory::Racks::Rack::Entity::Slot::Tsi1s::Tsi1::Tsi2s::Tsi2::Tsi3s::Tsi3::Tsi4s::Tsi4::Tsi5s::Tsi5::Tsi6s::Tsi6::Tsi7s::Tsi7::Tsi8s::Tsi8::Tsi9s : public ydk::Entity
{
    public:
        Tsi9s();
        ~Tsi9s();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Tsi9; //type: Inventory::Racks::Rack::Entity::Slot::Tsi1s::Tsi1::Tsi2s::Tsi2::Tsi3s::Tsi3::Tsi4s::Tsi4::Tsi5s::Tsi5::Tsi6s::Tsi6::Tsi7s::Tsi7::Tsi8s::Tsi8::Tsi9s::Tsi9

        ydk::YList tsi9;
        
}; // Inventory::Racks::Rack::Entity::Slot::Tsi1s::Tsi1::Tsi2s::Tsi2::Tsi3s::Tsi3::Tsi4s::Tsi4::Tsi5s::Tsi5::Tsi6s::Tsi6::Tsi7s::Tsi7::Tsi8s::Tsi8::Tsi9s


class Inventory::Racks::Rack::Entity::Slot::Tsi1s::Tsi1::Tsi2s::Tsi2::Tsi3s::Tsi3::Tsi4s::Tsi4::Tsi5s::Tsi5::Tsi6s::Tsi6::Tsi7s::Tsi7::Tsi8s::Tsi8::Tsi9s::Tsi9 : public ydk::Entity
{
    public:
        Tsi9();
        ~Tsi9();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf name; //type: string
        class Tsi10s; //type: Inventory::Racks::Rack::Entity::Slot::Tsi1s::Tsi1::Tsi2s::Tsi2::Tsi3s::Tsi3::Tsi4s::Tsi4::Tsi5s::Tsi5::Tsi6s::Tsi6::Tsi7s::Tsi7::Tsi8s::Tsi8::Tsi9s::Tsi9::Tsi10s
        class Attributes; //type: Inventory::Racks::Rack::Entity::Slot::Tsi1s::Tsi1::Tsi2s::Tsi2::Tsi3s::Tsi3::Tsi4s::Tsi4::Tsi5s::Tsi5::Tsi6s::Tsi6::Tsi7s::Tsi7::Tsi8s::Tsi8::Tsi9s::Tsi9::Attributes

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_invmgr_oper::Inventory::Racks::Rack::Entity::Slot::Tsi1s::Tsi1::Tsi2s::Tsi2::Tsi3s::Tsi3::Tsi4s::Tsi4::Tsi5s::Tsi5::Tsi6s::Tsi6::Tsi7s::Tsi7::Tsi8s::Tsi8::Tsi9s::Tsi9::Tsi10s> tsi10s;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_invmgr_oper::Inventory::Racks::Rack::Entity::Slot::Tsi1s::Tsi1::Tsi2s::Tsi2::Tsi3s::Tsi3::Tsi4s::Tsi4::Tsi5s::Tsi5::Tsi6s::Tsi6::Tsi7s::Tsi7::Tsi8s::Tsi8::Tsi9s::Tsi9::Attributes> attributes;
        
}; // Inventory::Racks::Rack::Entity::Slot::Tsi1s::Tsi1::Tsi2s::Tsi2::Tsi3s::Tsi3::Tsi4s::Tsi4::Tsi5s::Tsi5::Tsi6s::Tsi6::Tsi7s::Tsi7::Tsi8s::Tsi8::Tsi9s::Tsi9


class Inventory::Racks::Rack::Entity::Slot::Tsi1s::Tsi1::Tsi2s::Tsi2::Tsi3s::Tsi3::Tsi4s::Tsi4::Tsi5s::Tsi5::Tsi6s::Tsi6::Tsi7s::Tsi7::Tsi8s::Tsi8::Tsi9s::Tsi9::Tsi10s : public ydk::Entity
{
    public:
        Tsi10s();
        ~Tsi10s();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Tsi10; //type: Inventory::Racks::Rack::Entity::Slot::Tsi1s::Tsi1::Tsi2s::Tsi2::Tsi3s::Tsi3::Tsi4s::Tsi4::Tsi5s::Tsi5::Tsi6s::Tsi6::Tsi7s::Tsi7::Tsi8s::Tsi8::Tsi9s::Tsi9::Tsi10s::Tsi10

        ydk::YList tsi10;
        
}; // Inventory::Racks::Rack::Entity::Slot::Tsi1s::Tsi1::Tsi2s::Tsi2::Tsi3s::Tsi3::Tsi4s::Tsi4::Tsi5s::Tsi5::Tsi6s::Tsi6::Tsi7s::Tsi7::Tsi8s::Tsi8::Tsi9s::Tsi9::Tsi10s


class Inventory::Racks::Rack::Entity::Slot::Tsi1s::Tsi1::Tsi2s::Tsi2::Tsi3s::Tsi3::Tsi4s::Tsi4::Tsi5s::Tsi5::Tsi6s::Tsi6::Tsi7s::Tsi7::Tsi8s::Tsi8::Tsi9s::Tsi9::Tsi10s::Tsi10 : public ydk::Entity
{
    public:
        Tsi10();
        ~Tsi10();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf name; //type: string
        class Tsi11s; //type: Inventory::Racks::Rack::Entity::Slot::Tsi1s::Tsi1::Tsi2s::Tsi2::Tsi3s::Tsi3::Tsi4s::Tsi4::Tsi5s::Tsi5::Tsi6s::Tsi6::Tsi7s::Tsi7::Tsi8s::Tsi8::Tsi9s::Tsi9::Tsi10s::Tsi10::Tsi11s
        class Attributes; //type: Inventory::Racks::Rack::Entity::Slot::Tsi1s::Tsi1::Tsi2s::Tsi2::Tsi3s::Tsi3::Tsi4s::Tsi4::Tsi5s::Tsi5::Tsi6s::Tsi6::Tsi7s::Tsi7::Tsi8s::Tsi8::Tsi9s::Tsi9::Tsi10s::Tsi10::Attributes

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_invmgr_oper::Inventory::Racks::Rack::Entity::Slot::Tsi1s::Tsi1::Tsi2s::Tsi2::Tsi3s::Tsi3::Tsi4s::Tsi4::Tsi5s::Tsi5::Tsi6s::Tsi6::Tsi7s::Tsi7::Tsi8s::Tsi8::Tsi9s::Tsi9::Tsi10s::Tsi10::Tsi11s> tsi11s;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_invmgr_oper::Inventory::Racks::Rack::Entity::Slot::Tsi1s::Tsi1::Tsi2s::Tsi2::Tsi3s::Tsi3::Tsi4s::Tsi4::Tsi5s::Tsi5::Tsi6s::Tsi6::Tsi7s::Tsi7::Tsi8s::Tsi8::Tsi9s::Tsi9::Tsi10s::Tsi10::Attributes> attributes;
        
}; // Inventory::Racks::Rack::Entity::Slot::Tsi1s::Tsi1::Tsi2s::Tsi2::Tsi3s::Tsi3::Tsi4s::Tsi4::Tsi5s::Tsi5::Tsi6s::Tsi6::Tsi7s::Tsi7::Tsi8s::Tsi8::Tsi9s::Tsi9::Tsi10s::Tsi10


class Inventory::Racks::Rack::Entity::Slot::Tsi1s::Tsi1::Tsi2s::Tsi2::Tsi3s::Tsi3::Tsi4s::Tsi4::Tsi5s::Tsi5::Tsi6s::Tsi6::Tsi7s::Tsi7::Tsi8s::Tsi8::Tsi9s::Tsi9::Tsi10s::Tsi10::Tsi11s : public ydk::Entity
{
    public:
        Tsi11s();
        ~Tsi11s();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Tsi11; //type: Inventory::Racks::Rack::Entity::Slot::Tsi1s::Tsi1::Tsi2s::Tsi2::Tsi3s::Tsi3::Tsi4s::Tsi4::Tsi5s::Tsi5::Tsi6s::Tsi6::Tsi7s::Tsi7::Tsi8s::Tsi8::Tsi9s::Tsi9::Tsi10s::Tsi10::Tsi11s::Tsi11

        ydk::YList tsi11;
        
}; // Inventory::Racks::Rack::Entity::Slot::Tsi1s::Tsi1::Tsi2s::Tsi2::Tsi3s::Tsi3::Tsi4s::Tsi4::Tsi5s::Tsi5::Tsi6s::Tsi6::Tsi7s::Tsi7::Tsi8s::Tsi8::Tsi9s::Tsi9::Tsi10s::Tsi10::Tsi11s


class Inventory::Racks::Rack::Entity::Slot::Tsi1s::Tsi1::Tsi2s::Tsi2::Tsi3s::Tsi3::Tsi4s::Tsi4::Tsi5s::Tsi5::Tsi6s::Tsi6::Tsi7s::Tsi7::Tsi8s::Tsi8::Tsi9s::Tsi9::Tsi10s::Tsi10::Tsi11s::Tsi11 : public ydk::Entity
{
    public:
        Tsi11();
        ~Tsi11();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf name; //type: string
        class Attributes; //type: Inventory::Racks::Rack::Entity::Slot::Tsi1s::Tsi1::Tsi2s::Tsi2::Tsi3s::Tsi3::Tsi4s::Tsi4::Tsi5s::Tsi5::Tsi6s::Tsi6::Tsi7s::Tsi7::Tsi8s::Tsi8::Tsi9s::Tsi9::Tsi10s::Tsi10::Tsi11s::Tsi11::Attributes

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_invmgr_oper::Inventory::Racks::Rack::Entity::Slot::Tsi1s::Tsi1::Tsi2s::Tsi2::Tsi3s::Tsi3::Tsi4s::Tsi4::Tsi5s::Tsi5::Tsi6s::Tsi6::Tsi7s::Tsi7::Tsi8s::Tsi8::Tsi9s::Tsi9::Tsi10s::Tsi10::Tsi11s::Tsi11::Attributes> attributes;
        
}; // Inventory::Racks::Rack::Entity::Slot::Tsi1s::Tsi1::Tsi2s::Tsi2::Tsi3s::Tsi3::Tsi4s::Tsi4::Tsi5s::Tsi5::Tsi6s::Tsi6::Tsi7s::Tsi7::Tsi8s::Tsi8::Tsi9s::Tsi9::Tsi10s::Tsi10::Tsi11s::Tsi11


class Inventory::Racks::Rack::Entity::Slot::Tsi1s::Tsi1::Tsi2s::Tsi2::Tsi3s::Tsi3::Tsi4s::Tsi4::Tsi5s::Tsi5::Tsi6s::Tsi6::Tsi7s::Tsi7::Tsi8s::Tsi8::Tsi9s::Tsi9::Tsi10s::Tsi10::Tsi11s::Tsi11::Attributes : public ydk::Entity
{
    public:
        Attributes();
        ~Attributes();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class InvBasicBag; //type: Inventory::Racks::Rack::Entity::Slot::Tsi1s::Tsi1::Tsi2s::Tsi2::Tsi3s::Tsi3::Tsi4s::Tsi4::Tsi5s::Tsi5::Tsi6s::Tsi6::Tsi7s::Tsi7::Tsi8s::Tsi8::Tsi9s::Tsi9::Tsi10s::Tsi10::Tsi11s::Tsi11::Attributes::InvBasicBag
        class EnvSensorInfo; //type: Inventory::Racks::Rack::Entity::Slot::Tsi1s::Tsi1::Tsi2s::Tsi2::Tsi3s::Tsi3::Tsi4s::Tsi4::Tsi5s::Tsi5::Tsi6s::Tsi6::Tsi7s::Tsi7::Tsi8s::Tsi8::Tsi9s::Tsi9::Tsi10s::Tsi10::Tsi11s::Tsi11::Attributes::EnvSensorInfo
        class PwgInfo; //type: Inventory::Racks::Rack::Entity::Slot::Tsi1s::Tsi1::Tsi2s::Tsi2::Tsi3s::Tsi3::Tsi4s::Tsi4::Tsi5s::Tsi5::Tsi6s::Tsi6::Tsi7s::Tsi7::Tsi8s::Tsi8::Tsi9s::Tsi9::Tsi10s::Tsi10::Tsi11s::Tsi11::Attributes::PwgInfo
        class EnvSensorInfoXml; //type: Inventory::Racks::Rack::Entity::Slot::Tsi1s::Tsi1::Tsi2s::Tsi2::Tsi3s::Tsi3::Tsi4s::Tsi4::Tsi5s::Tsi5::Tsi6s::Tsi6::Tsi7s::Tsi7::Tsi8s::Tsi8::Tsi9s::Tsi9::Tsi10s::Tsi10::Tsi11s::Tsi11::Attributes::EnvSensorInfoXml
        class InvAssetBag; //type: Inventory::Racks::Rack::Entity::Slot::Tsi1s::Tsi1::Tsi2s::Tsi2::Tsi3s::Tsi3::Tsi4s::Tsi4::Tsi5s::Tsi5::Tsi6s::Tsi6::Tsi7s::Tsi7::Tsi8s::Tsi8::Tsi9s::Tsi9::Tsi10s::Tsi10::Tsi11s::Tsi11::Attributes::InvAssetBag
        class Threshold; //type: Inventory::Racks::Rack::Entity::Slot::Tsi1s::Tsi1::Tsi2s::Tsi2::Tsi3s::Tsi3::Tsi4s::Tsi4::Tsi5s::Tsi5::Tsi6s::Tsi6::Tsi7s::Tsi7::Tsi8s::Tsi8::Tsi9s::Tsi9::Tsi10s::Tsi10::Tsi11s::Tsi11::Attributes::Threshold
        class FruInfo; //type: Inventory::Racks::Rack::Entity::Slot::Tsi1s::Tsi1::Tsi2s::Tsi2::Tsi3s::Tsi3::Tsi4s::Tsi4::Tsi5s::Tsi5::Tsi6s::Tsi6::Tsi7s::Tsi7::Tsi8s::Tsi8::Tsi9s::Tsi9::Tsi10s::Tsi10::Tsi11s::Tsi11::Attributes::FruInfo
        class InvEepromInfo; //type: Inventory::Racks::Rack::Entity::Slot::Tsi1s::Tsi1::Tsi2s::Tsi2::Tsi3s::Tsi3::Tsi4s::Tsi4::Tsi5s::Tsi5::Tsi6s::Tsi6::Tsi7s::Tsi7::Tsi8s::Tsi8::Tsi9s::Tsi9::Tsi10s::Tsi10::Tsi11s::Tsi11::Attributes::InvEepromInfo

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_invmgr_oper::Inventory::Racks::Rack::Entity::Slot::Tsi1s::Tsi1::Tsi2s::Tsi2::Tsi3s::Tsi3::Tsi4s::Tsi4::Tsi5s::Tsi5::Tsi6s::Tsi6::Tsi7s::Tsi7::Tsi8s::Tsi8::Tsi9s::Tsi9::Tsi10s::Tsi10::Tsi11s::Tsi11::Attributes::InvBasicBag> inv_basic_bag;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_invmgr_oper::Inventory::Racks::Rack::Entity::Slot::Tsi1s::Tsi1::Tsi2s::Tsi2::Tsi3s::Tsi3::Tsi4s::Tsi4::Tsi5s::Tsi5::Tsi6s::Tsi6::Tsi7s::Tsi7::Tsi8s::Tsi8::Tsi9s::Tsi9::Tsi10s::Tsi10::Tsi11s::Tsi11::Attributes::EnvSensorInfo> env_sensor_info;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_invmgr_oper::Inventory::Racks::Rack::Entity::Slot::Tsi1s::Tsi1::Tsi2s::Tsi2::Tsi3s::Tsi3::Tsi4s::Tsi4::Tsi5s::Tsi5::Tsi6s::Tsi6::Tsi7s::Tsi7::Tsi8s::Tsi8::Tsi9s::Tsi9::Tsi10s::Tsi10::Tsi11s::Tsi11::Attributes::PwgInfo> pwg_info;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_invmgr_oper::Inventory::Racks::Rack::Entity::Slot::Tsi1s::Tsi1::Tsi2s::Tsi2::Tsi3s::Tsi3::Tsi4s::Tsi4::Tsi5s::Tsi5::Tsi6s::Tsi6::Tsi7s::Tsi7::Tsi8s::Tsi8::Tsi9s::Tsi9::Tsi10s::Tsi10::Tsi11s::Tsi11::Attributes::EnvSensorInfoXml> env_sensor_info_xml;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_invmgr_oper::Inventory::Racks::Rack::Entity::Slot::Tsi1s::Tsi1::Tsi2s::Tsi2::Tsi3s::Tsi3::Tsi4s::Tsi4::Tsi5s::Tsi5::Tsi6s::Tsi6::Tsi7s::Tsi7::Tsi8s::Tsi8::Tsi9s::Tsi9::Tsi10s::Tsi10::Tsi11s::Tsi11::Attributes::InvAssetBag> inv_asset_bag;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_invmgr_oper::Inventory::Racks::Rack::Entity::Slot::Tsi1s::Tsi1::Tsi2s::Tsi2::Tsi3s::Tsi3::Tsi4s::Tsi4::Tsi5s::Tsi5::Tsi6s::Tsi6::Tsi7s::Tsi7::Tsi8s::Tsi8::Tsi9s::Tsi9::Tsi10s::Tsi10::Tsi11s::Tsi11::Attributes::Threshold> threshold;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_invmgr_oper::Inventory::Racks::Rack::Entity::Slot::Tsi1s::Tsi1::Tsi2s::Tsi2::Tsi3s::Tsi3::Tsi4s::Tsi4::Tsi5s::Tsi5::Tsi6s::Tsi6::Tsi7s::Tsi7::Tsi8s::Tsi8::Tsi9s::Tsi9::Tsi10s::Tsi10::Tsi11s::Tsi11::Attributes::FruInfo> fru_info;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_invmgr_oper::Inventory::Racks::Rack::Entity::Slot::Tsi1s::Tsi1::Tsi2s::Tsi2::Tsi3s::Tsi3::Tsi4s::Tsi4::Tsi5s::Tsi5::Tsi6s::Tsi6::Tsi7s::Tsi7::Tsi8s::Tsi8::Tsi9s::Tsi9::Tsi10s::Tsi10::Tsi11s::Tsi11::Attributes::InvEepromInfo> inv_eeprom_info;
        
}; // Inventory::Racks::Rack::Entity::Slot::Tsi1s::Tsi1::Tsi2s::Tsi2::Tsi3s::Tsi3::Tsi4s::Tsi4::Tsi5s::Tsi5::Tsi6s::Tsi6::Tsi7s::Tsi7::Tsi8s::Tsi8::Tsi9s::Tsi9::Tsi10s::Tsi10::Tsi11s::Tsi11::Attributes


class Inventory::Racks::Rack::Entity::Slot::Tsi1s::Tsi1::Tsi2s::Tsi2::Tsi3s::Tsi3::Tsi4s::Tsi4::Tsi5s::Tsi5::Tsi6s::Tsi6::Tsi7s::Tsi7::Tsi8s::Tsi8::Tsi9s::Tsi9::Tsi10s::Tsi10::Tsi11s::Tsi11::Attributes::InvBasicBag : public ydk::Entity
{
    public:
        InvBasicBag();
        ~InvBasicBag();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf description; //type: string
        ydk::YLeaf vendor_type; //type: string
        ydk::YLeaf name; //type: string
        ydk::YLeaf hardware_revision; //type: string
        ydk::YLeaf firmware_revision; //type: string
        ydk::YLeaf software_revision; //type: string
        ydk::YLeaf chip_hardware_revision; //type: string
        ydk::YLeaf serial_number; //type: string
        ydk::YLeaf manufacturer_name; //type: string
        ydk::YLeaf model_name; //type: string
        ydk::YLeaf asset_id_str; //type: string
        ydk::YLeaf asset_identification; //type: int32
        ydk::YLeaf is_field_replaceable_unit; //type: boolean
        ydk::YLeaf manufacturer_asset_tags; //type: int32
        ydk::YLeaf composite_class_code; //type: int32
        ydk::YLeaf memory_size; //type: int32
        ydk::YLeaf environmental_monitor_path; //type: string
        ydk::YLeaf alias; //type: string
        ydk::YLeaf group_flag; //type: boolean
        ydk::YLeaf new_deviation_number; //type: int32
        ydk::YLeaf physical_layer_interface_module_type; //type: int32
        ydk::YLeaf unrecognized_fru; //type: boolean
        ydk::YLeaf redundancystate; //type: int32
        ydk::YLeaf ceport; //type: boolean
        ydk::YLeaf xr_scoped; //type: boolean
        ydk::YLeaf unique_id; //type: int32

}; // Inventory::Racks::Rack::Entity::Slot::Tsi1s::Tsi1::Tsi2s::Tsi2::Tsi3s::Tsi3::Tsi4s::Tsi4::Tsi5s::Tsi5::Tsi6s::Tsi6::Tsi7s::Tsi7::Tsi8s::Tsi8::Tsi9s::Tsi9::Tsi10s::Tsi10::Tsi11s::Tsi11::Attributes::InvBasicBag


class Inventory::Racks::Rack::Entity::Slot::Tsi1s::Tsi1::Tsi2s::Tsi2::Tsi3s::Tsi3::Tsi4s::Tsi4::Tsi5s::Tsi5::Tsi6s::Tsi6::Tsi7s::Tsi7::Tsi8s::Tsi8::Tsi9s::Tsi9::Tsi10s::Tsi10::Tsi11s::Tsi11::Attributes::EnvSensorInfo : public ydk::Entity
{
    public:
        EnvSensorInfo();
        ~EnvSensorInfo();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf field_validity_bitmap; //type: uint32
        ydk::YLeaf device_description; //type: string
        ydk::YLeaf units; //type: string
        ydk::YLeaf device_id; //type: uint32
        ydk::YLeaf value_; //type: uint32
        ydk::YLeaf alarm_type; //type: uint32
        ydk::YLeaf data_type; //type: uint32
        ydk::YLeaf scale; //type: uint32
        ydk::YLeaf precision; //type: uint32
        ydk::YLeaf status; //type: uint32
        ydk::YLeaf age_time_stamp; //type: uint32
        ydk::YLeaf update_rate; //type: uint32

}; // Inventory::Racks::Rack::Entity::Slot::Tsi1s::Tsi1::Tsi2s::Tsi2::Tsi3s::Tsi3::Tsi4s::Tsi4::Tsi5s::Tsi5::Tsi6s::Tsi6::Tsi7s::Tsi7::Tsi8s::Tsi8::Tsi9s::Tsi9::Tsi10s::Tsi10::Tsi11s::Tsi11::Attributes::EnvSensorInfo


class Inventory::Racks::Rack::Entity::Slot::Tsi1s::Tsi1::Tsi2s::Tsi2::Tsi3s::Tsi3::Tsi4s::Tsi4::Tsi5s::Tsi5::Tsi6s::Tsi6::Tsi7s::Tsi7::Tsi8s::Tsi8::Tsi9s::Tsi9::Tsi10s::Tsi10::Tsi11s::Tsi11::Attributes::PwgInfo : public ydk::Entity
{
    public:
        PwgInfo();
        ~PwgInfo();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf power_group_redundancy_mode; //type: int32
        ydk::YLeaf power_group_power_units; //type: string
        ydk::YLeaf power_group_available_current; //type: int32
        ydk::YLeaf power_group_drawn_current; //type: int32

}; // Inventory::Racks::Rack::Entity::Slot::Tsi1s::Tsi1::Tsi2s::Tsi2::Tsi3s::Tsi3::Tsi4s::Tsi4::Tsi5s::Tsi5::Tsi6s::Tsi6::Tsi7s::Tsi7::Tsi8s::Tsi8::Tsi9s::Tsi9::Tsi10s::Tsi10::Tsi11s::Tsi11::Attributes::PwgInfo


class Inventory::Racks::Rack::Entity::Slot::Tsi1s::Tsi1::Tsi2s::Tsi2::Tsi3s::Tsi3::Tsi4s::Tsi4::Tsi5s::Tsi5::Tsi6s::Tsi6::Tsi7s::Tsi7::Tsi8s::Tsi8::Tsi9s::Tsi9::Tsi10s::Tsi10::Tsi11s::Tsi11::Attributes::EnvSensorInfoXml : public ydk::Entity
{
    public:
        EnvSensorInfoXml();
        ~EnvSensorInfoXml();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf description; //type: string
        ydk::YLeaf units; //type: Unit
        ydk::YLeaf value_; //type: string
        ydk::YLeaf data_type; //type: SensorData
        ydk::YLeaf status; //type: SensorStatus
        ydk::YLeaf update_rate; //type: uint32
        class Threshold; //type: Inventory::Racks::Rack::Entity::Slot::Tsi1s::Tsi1::Tsi2s::Tsi2::Tsi3s::Tsi3::Tsi4s::Tsi4::Tsi5s::Tsi5::Tsi6s::Tsi6::Tsi7s::Tsi7::Tsi8s::Tsi8::Tsi9s::Tsi9::Tsi10s::Tsi10::Tsi11s::Tsi11::Attributes::EnvSensorInfoXml::Threshold

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_invmgr_oper::Inventory::Racks::Rack::Entity::Slot::Tsi1s::Tsi1::Tsi2s::Tsi2::Tsi3s::Tsi3::Tsi4s::Tsi4::Tsi5s::Tsi5::Tsi6s::Tsi6::Tsi7s::Tsi7::Tsi8s::Tsi8::Tsi9s::Tsi9::Tsi10s::Tsi10::Tsi11s::Tsi11::Attributes::EnvSensorInfoXml::Threshold> threshold;
        
}; // Inventory::Racks::Rack::Entity::Slot::Tsi1s::Tsi1::Tsi2s::Tsi2::Tsi3s::Tsi3::Tsi4s::Tsi4::Tsi5s::Tsi5::Tsi6s::Tsi6::Tsi7s::Tsi7::Tsi8s::Tsi8::Tsi9s::Tsi9::Tsi10s::Tsi10::Tsi11s::Tsi11::Attributes::EnvSensorInfoXml


class Inventory::Racks::Rack::Entity::Slot::Tsi1s::Tsi1::Tsi2s::Tsi2::Tsi3s::Tsi3::Tsi4s::Tsi4::Tsi5s::Tsi5::Tsi6s::Tsi6::Tsi7s::Tsi7::Tsi8s::Tsi8::Tsi9s::Tsi9::Tsi10s::Tsi10::Tsi11s::Tsi11::Attributes::EnvSensorInfoXml::Threshold : public ydk::Entity
{
    public:
        Threshold();
        ~Threshold();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class ThresholdArray; //type: Inventory::Racks::Rack::Entity::Slot::Tsi1s::Tsi1::Tsi2s::Tsi2::Tsi3s::Tsi3::Tsi4s::Tsi4::Tsi5s::Tsi5::Tsi6s::Tsi6::Tsi7s::Tsi7::Tsi8s::Tsi8::Tsi9s::Tsi9::Tsi10s::Tsi10::Tsi11s::Tsi11::Attributes::EnvSensorInfoXml::Threshold::ThresholdArray

        ydk::YList threshold_array;
        
}; // Inventory::Racks::Rack::Entity::Slot::Tsi1s::Tsi1::Tsi2s::Tsi2::Tsi3s::Tsi3::Tsi4s::Tsi4::Tsi5s::Tsi5::Tsi6s::Tsi6::Tsi7s::Tsi7::Tsi8s::Tsi8::Tsi9s::Tsi9::Tsi10s::Tsi10::Tsi11s::Tsi11::Attributes::EnvSensorInfoXml::Threshold


class Inventory::Racks::Rack::Entity::Slot::Tsi1s::Tsi1::Tsi2s::Tsi2::Tsi3s::Tsi3::Tsi4s::Tsi4::Tsi5s::Tsi5::Tsi6s::Tsi6::Tsi7s::Tsi7::Tsi8s::Tsi8::Tsi9s::Tsi9::Tsi10s::Tsi10::Tsi11s::Tsi11::Attributes::EnvSensorInfoXml::Threshold::ThresholdArray : public ydk::Entity
{
    public:
        ThresholdArray();
        ~ThresholdArray();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf threshold_severity; //type: ThresholdSeverity
        ydk::YLeaf threshold_relation; //type: ThresholdRelation
        ydk::YLeaf threshold_value; //type: int32
        ydk::YLeaf threshold_name; //type: string

}; // Inventory::Racks::Rack::Entity::Slot::Tsi1s::Tsi1::Tsi2s::Tsi2::Tsi3s::Tsi3::Tsi4s::Tsi4::Tsi5s::Tsi5::Tsi6s::Tsi6::Tsi7s::Tsi7::Tsi8s::Tsi8::Tsi9s::Tsi9::Tsi10s::Tsi10::Tsi11s::Tsi11::Attributes::EnvSensorInfoXml::Threshold::ThresholdArray


class Inventory::Racks::Rack::Entity::Slot::Tsi1s::Tsi1::Tsi2s::Tsi2::Tsi3s::Tsi3::Tsi4s::Tsi4::Tsi5s::Tsi5::Tsi6s::Tsi6::Tsi7s::Tsi7::Tsi8s::Tsi8::Tsi9s::Tsi9::Tsi10s::Tsi10::Tsi11s::Tsi11::Attributes::InvAssetBag : public ydk::Entity
{
    public:
        InvAssetBag();
        ~InvAssetBag();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf part_number; //type: string
        ydk::YLeaf manufacturer_assembly_number; //type: string
        ydk::YLeaf manufacturer_assembly_revision; //type: string
        ydk::YLeaf manufacturer_firmware_identifier; //type: string
        ydk::YLeaf manufacturer_software_identifier; //type: string
        ydk::YLeaf manufacturer_common_language_equipment_identifier; //type: string
        ydk::YLeaf original_equipment_manufacturer_string; //type: string

}; // Inventory::Racks::Rack::Entity::Slot::Tsi1s::Tsi1::Tsi2s::Tsi2::Tsi3s::Tsi3::Tsi4s::Tsi4::Tsi5s::Tsi5::Tsi6s::Tsi6::Tsi7s::Tsi7::Tsi8s::Tsi8::Tsi9s::Tsi9::Tsi10s::Tsi10::Tsi11s::Tsi11::Attributes::InvAssetBag


class Inventory::Racks::Rack::Entity::Slot::Tsi1s::Tsi1::Tsi2s::Tsi2::Tsi3s::Tsi3::Tsi4s::Tsi4::Tsi5s::Tsi5::Tsi6s::Tsi6::Tsi7s::Tsi7::Tsi8s::Tsi8::Tsi9s::Tsi9::Tsi10s::Tsi10::Tsi11s::Tsi11::Attributes::Threshold : public ydk::Entity
{
    public:
        Threshold();
        ~Threshold();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class MajorLo; //type: Inventory::Racks::Rack::Entity::Slot::Tsi1s::Tsi1::Tsi2s::Tsi2::Tsi3s::Tsi3::Tsi4s::Tsi4::Tsi5s::Tsi5::Tsi6s::Tsi6::Tsi7s::Tsi7::Tsi8s::Tsi8::Tsi9s::Tsi9::Tsi10s::Tsi10::Tsi11s::Tsi11::Attributes::Threshold::MajorLo
        class CriticalHi; //type: Inventory::Racks::Rack::Entity::Slot::Tsi1s::Tsi1::Tsi2s::Tsi2::Tsi3s::Tsi3::Tsi4s::Tsi4::Tsi5s::Tsi5::Tsi6s::Tsi6::Tsi7s::Tsi7::Tsi8s::Tsi8::Tsi9s::Tsi9::Tsi10s::Tsi10::Tsi11s::Tsi11::Attributes::Threshold::CriticalHi
        class MinorHi; //type: Inventory::Racks::Rack::Entity::Slot::Tsi1s::Tsi1::Tsi2s::Tsi2::Tsi3s::Tsi3::Tsi4s::Tsi4::Tsi5s::Tsi5::Tsi6s::Tsi6::Tsi7s::Tsi7::Tsi8s::Tsi8::Tsi9s::Tsi9::Tsi10s::Tsi10::Tsi11s::Tsi11::Attributes::Threshold::MinorHi
        class MajorHi; //type: Inventory::Racks::Rack::Entity::Slot::Tsi1s::Tsi1::Tsi2s::Tsi2::Tsi3s::Tsi3::Tsi4s::Tsi4::Tsi5s::Tsi5::Tsi6s::Tsi6::Tsi7s::Tsi7::Tsi8s::Tsi8::Tsi9s::Tsi9::Tsi10s::Tsi10::Tsi11s::Tsi11::Attributes::Threshold::MajorHi
        class CriticalLo; //type: Inventory::Racks::Rack::Entity::Slot::Tsi1s::Tsi1::Tsi2s::Tsi2::Tsi3s::Tsi3::Tsi4s::Tsi4::Tsi5s::Tsi5::Tsi6s::Tsi6::Tsi7s::Tsi7::Tsi8s::Tsi8::Tsi9s::Tsi9::Tsi10s::Tsi10::Tsi11s::Tsi11::Attributes::Threshold::CriticalLo
        class MinorLo; //type: Inventory::Racks::Rack::Entity::Slot::Tsi1s::Tsi1::Tsi2s::Tsi2::Tsi3s::Tsi3::Tsi4s::Tsi4::Tsi5s::Tsi5::Tsi6s::Tsi6::Tsi7s::Tsi7::Tsi8s::Tsi8::Tsi9s::Tsi9::Tsi10s::Tsi10::Tsi11s::Tsi11::Attributes::Threshold::MinorLo

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_invmgr_oper::Inventory::Racks::Rack::Entity::Slot::Tsi1s::Tsi1::Tsi2s::Tsi2::Tsi3s::Tsi3::Tsi4s::Tsi4::Tsi5s::Tsi5::Tsi6s::Tsi6::Tsi7s::Tsi7::Tsi8s::Tsi8::Tsi9s::Tsi9::Tsi10s::Tsi10::Tsi11s::Tsi11::Attributes::Threshold::MajorLo> major_lo;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_invmgr_oper::Inventory::Racks::Rack::Entity::Slot::Tsi1s::Tsi1::Tsi2s::Tsi2::Tsi3s::Tsi3::Tsi4s::Tsi4::Tsi5s::Tsi5::Tsi6s::Tsi6::Tsi7s::Tsi7::Tsi8s::Tsi8::Tsi9s::Tsi9::Tsi10s::Tsi10::Tsi11s::Tsi11::Attributes::Threshold::CriticalHi> critical_hi;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_invmgr_oper::Inventory::Racks::Rack::Entity::Slot::Tsi1s::Tsi1::Tsi2s::Tsi2::Tsi3s::Tsi3::Tsi4s::Tsi4::Tsi5s::Tsi5::Tsi6s::Tsi6::Tsi7s::Tsi7::Tsi8s::Tsi8::Tsi9s::Tsi9::Tsi10s::Tsi10::Tsi11s::Tsi11::Attributes::Threshold::MinorHi> minor_hi;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_invmgr_oper::Inventory::Racks::Rack::Entity::Slot::Tsi1s::Tsi1::Tsi2s::Tsi2::Tsi3s::Tsi3::Tsi4s::Tsi4::Tsi5s::Tsi5::Tsi6s::Tsi6::Tsi7s::Tsi7::Tsi8s::Tsi8::Tsi9s::Tsi9::Tsi10s::Tsi10::Tsi11s::Tsi11::Attributes::Threshold::MajorHi> major_hi;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_invmgr_oper::Inventory::Racks::Rack::Entity::Slot::Tsi1s::Tsi1::Tsi2s::Tsi2::Tsi3s::Tsi3::Tsi4s::Tsi4::Tsi5s::Tsi5::Tsi6s::Tsi6::Tsi7s::Tsi7::Tsi8s::Tsi8::Tsi9s::Tsi9::Tsi10s::Tsi10::Tsi11s::Tsi11::Attributes::Threshold::CriticalLo> critical_lo;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_invmgr_oper::Inventory::Racks::Rack::Entity::Slot::Tsi1s::Tsi1::Tsi2s::Tsi2::Tsi3s::Tsi3::Tsi4s::Tsi4::Tsi5s::Tsi5::Tsi6s::Tsi6::Tsi7s::Tsi7::Tsi8s::Tsi8::Tsi9s::Tsi9::Tsi10s::Tsi10::Tsi11s::Tsi11::Attributes::Threshold::MinorLo> minor_lo;
        
}; // Inventory::Racks::Rack::Entity::Slot::Tsi1s::Tsi1::Tsi2s::Tsi2::Tsi3s::Tsi3::Tsi4s::Tsi4::Tsi5s::Tsi5::Tsi6s::Tsi6::Tsi7s::Tsi7::Tsi8s::Tsi8::Tsi9s::Tsi9::Tsi10s::Tsi10::Tsi11s::Tsi11::Attributes::Threshold


class Inventory::Racks::Rack::Entity::Slot::Tsi1s::Tsi1::Tsi2s::Tsi2::Tsi3s::Tsi3::Tsi4s::Tsi4::Tsi5s::Tsi5::Tsi6s::Tsi6::Tsi7s::Tsi7::Tsi8s::Tsi8::Tsi9s::Tsi9::Tsi10s::Tsi10::Tsi11s::Tsi11::Attributes::Threshold::MajorLo : public ydk::Entity
{
    public:
        MajorLo();
        ~MajorLo();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class ThreshBag; //type: Inventory::Racks::Rack::Entity::Slot::Tsi1s::Tsi1::Tsi2s::Tsi2::Tsi3s::Tsi3::Tsi4s::Tsi4::Tsi5s::Tsi5::Tsi6s::Tsi6::Tsi7s::Tsi7::Tsi8s::Tsi8::Tsi9s::Tsi9::Tsi10s::Tsi10::Tsi11s::Tsi11::Attributes::Threshold::MajorLo::ThreshBag

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_invmgr_oper::Inventory::Racks::Rack::Entity::Slot::Tsi1s::Tsi1::Tsi2s::Tsi2::Tsi3s::Tsi3::Tsi4s::Tsi4::Tsi5s::Tsi5::Tsi6s::Tsi6::Tsi7s::Tsi7::Tsi8s::Tsi8::Tsi9s::Tsi9::Tsi10s::Tsi10::Tsi11s::Tsi11::Attributes::Threshold::MajorLo::ThreshBag> thresh_bag;
        
}; // Inventory::Racks::Rack::Entity::Slot::Tsi1s::Tsi1::Tsi2s::Tsi2::Tsi3s::Tsi3::Tsi4s::Tsi4::Tsi5s::Tsi5::Tsi6s::Tsi6::Tsi7s::Tsi7::Tsi8s::Tsi8::Tsi9s::Tsi9::Tsi10s::Tsi10::Tsi11s::Tsi11::Attributes::Threshold::MajorLo


class Inventory::Racks::Rack::Entity::Slot::Tsi1s::Tsi1::Tsi2s::Tsi2::Tsi3s::Tsi3::Tsi4s::Tsi4::Tsi5s::Tsi5::Tsi6s::Tsi6::Tsi7s::Tsi7::Tsi8s::Tsi8::Tsi9s::Tsi9::Tsi10s::Tsi10::Tsi11s::Tsi11::Attributes::Threshold::MajorLo::ThreshBag : public ydk::Entity
{
    public:
        ThreshBag();
        ~ThreshBag();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf threshold_severity; //type: uint32
        ydk::YLeaf threshold_relation; //type: uint32
        ydk::YLeaf threshold_value; //type: uint32
        ydk::YLeaf threshold_evaluation; //type: boolean
        ydk::YLeaf threshold_notification_enabled; //type: boolean

}; // Inventory::Racks::Rack::Entity::Slot::Tsi1s::Tsi1::Tsi2s::Tsi2::Tsi3s::Tsi3::Tsi4s::Tsi4::Tsi5s::Tsi5::Tsi6s::Tsi6::Tsi7s::Tsi7::Tsi8s::Tsi8::Tsi9s::Tsi9::Tsi10s::Tsi10::Tsi11s::Tsi11::Attributes::Threshold::MajorLo::ThreshBag


class Inventory::Racks::Rack::Entity::Slot::Tsi1s::Tsi1::Tsi2s::Tsi2::Tsi3s::Tsi3::Tsi4s::Tsi4::Tsi5s::Tsi5::Tsi6s::Tsi6::Tsi7s::Tsi7::Tsi8s::Tsi8::Tsi9s::Tsi9::Tsi10s::Tsi10::Tsi11s::Tsi11::Attributes::Threshold::CriticalHi : public ydk::Entity
{
    public:
        CriticalHi();
        ~CriticalHi();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class ThreshBag; //type: Inventory::Racks::Rack::Entity::Slot::Tsi1s::Tsi1::Tsi2s::Tsi2::Tsi3s::Tsi3::Tsi4s::Tsi4::Tsi5s::Tsi5::Tsi6s::Tsi6::Tsi7s::Tsi7::Tsi8s::Tsi8::Tsi9s::Tsi9::Tsi10s::Tsi10::Tsi11s::Tsi11::Attributes::Threshold::CriticalHi::ThreshBag

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_invmgr_oper::Inventory::Racks::Rack::Entity::Slot::Tsi1s::Tsi1::Tsi2s::Tsi2::Tsi3s::Tsi3::Tsi4s::Tsi4::Tsi5s::Tsi5::Tsi6s::Tsi6::Tsi7s::Tsi7::Tsi8s::Tsi8::Tsi9s::Tsi9::Tsi10s::Tsi10::Tsi11s::Tsi11::Attributes::Threshold::CriticalHi::ThreshBag> thresh_bag;
        
}; // Inventory::Racks::Rack::Entity::Slot::Tsi1s::Tsi1::Tsi2s::Tsi2::Tsi3s::Tsi3::Tsi4s::Tsi4::Tsi5s::Tsi5::Tsi6s::Tsi6::Tsi7s::Tsi7::Tsi8s::Tsi8::Tsi9s::Tsi9::Tsi10s::Tsi10::Tsi11s::Tsi11::Attributes::Threshold::CriticalHi


class Inventory::Racks::Rack::Entity::Slot::Tsi1s::Tsi1::Tsi2s::Tsi2::Tsi3s::Tsi3::Tsi4s::Tsi4::Tsi5s::Tsi5::Tsi6s::Tsi6::Tsi7s::Tsi7::Tsi8s::Tsi8::Tsi9s::Tsi9::Tsi10s::Tsi10::Tsi11s::Tsi11::Attributes::Threshold::CriticalHi::ThreshBag : public ydk::Entity
{
    public:
        ThreshBag();
        ~ThreshBag();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf threshold_severity; //type: uint32
        ydk::YLeaf threshold_relation; //type: uint32
        ydk::YLeaf threshold_value; //type: uint32
        ydk::YLeaf threshold_evaluation; //type: boolean
        ydk::YLeaf threshold_notification_enabled; //type: boolean

}; // Inventory::Racks::Rack::Entity::Slot::Tsi1s::Tsi1::Tsi2s::Tsi2::Tsi3s::Tsi3::Tsi4s::Tsi4::Tsi5s::Tsi5::Tsi6s::Tsi6::Tsi7s::Tsi7::Tsi8s::Tsi8::Tsi9s::Tsi9::Tsi10s::Tsi10::Tsi11s::Tsi11::Attributes::Threshold::CriticalHi::ThreshBag


class Inventory::Racks::Rack::Entity::Slot::Tsi1s::Tsi1::Tsi2s::Tsi2::Tsi3s::Tsi3::Tsi4s::Tsi4::Tsi5s::Tsi5::Tsi6s::Tsi6::Tsi7s::Tsi7::Tsi8s::Tsi8::Tsi9s::Tsi9::Tsi10s::Tsi10::Tsi11s::Tsi11::Attributes::Threshold::MinorHi : public ydk::Entity
{
    public:
        MinorHi();
        ~MinorHi();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class ThreshBag; //type: Inventory::Racks::Rack::Entity::Slot::Tsi1s::Tsi1::Tsi2s::Tsi2::Tsi3s::Tsi3::Tsi4s::Tsi4::Tsi5s::Tsi5::Tsi6s::Tsi6::Tsi7s::Tsi7::Tsi8s::Tsi8::Tsi9s::Tsi9::Tsi10s::Tsi10::Tsi11s::Tsi11::Attributes::Threshold::MinorHi::ThreshBag

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_invmgr_oper::Inventory::Racks::Rack::Entity::Slot::Tsi1s::Tsi1::Tsi2s::Tsi2::Tsi3s::Tsi3::Tsi4s::Tsi4::Tsi5s::Tsi5::Tsi6s::Tsi6::Tsi7s::Tsi7::Tsi8s::Tsi8::Tsi9s::Tsi9::Tsi10s::Tsi10::Tsi11s::Tsi11::Attributes::Threshold::MinorHi::ThreshBag> thresh_bag;
        
}; // Inventory::Racks::Rack::Entity::Slot::Tsi1s::Tsi1::Tsi2s::Tsi2::Tsi3s::Tsi3::Tsi4s::Tsi4::Tsi5s::Tsi5::Tsi6s::Tsi6::Tsi7s::Tsi7::Tsi8s::Tsi8::Tsi9s::Tsi9::Tsi10s::Tsi10::Tsi11s::Tsi11::Attributes::Threshold::MinorHi


class Inventory::Racks::Rack::Entity::Slot::Tsi1s::Tsi1::Tsi2s::Tsi2::Tsi3s::Tsi3::Tsi4s::Tsi4::Tsi5s::Tsi5::Tsi6s::Tsi6::Tsi7s::Tsi7::Tsi8s::Tsi8::Tsi9s::Tsi9::Tsi10s::Tsi10::Tsi11s::Tsi11::Attributes::Threshold::MinorHi::ThreshBag : public ydk::Entity
{
    public:
        ThreshBag();
        ~ThreshBag();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf threshold_severity; //type: uint32
        ydk::YLeaf threshold_relation; //type: uint32
        ydk::YLeaf threshold_value; //type: uint32
        ydk::YLeaf threshold_evaluation; //type: boolean
        ydk::YLeaf threshold_notification_enabled; //type: boolean

}; // Inventory::Racks::Rack::Entity::Slot::Tsi1s::Tsi1::Tsi2s::Tsi2::Tsi3s::Tsi3::Tsi4s::Tsi4::Tsi5s::Tsi5::Tsi6s::Tsi6::Tsi7s::Tsi7::Tsi8s::Tsi8::Tsi9s::Tsi9::Tsi10s::Tsi10::Tsi11s::Tsi11::Attributes::Threshold::MinorHi::ThreshBag


class Inventory::Racks::Rack::Entity::Slot::Tsi1s::Tsi1::Tsi2s::Tsi2::Tsi3s::Tsi3::Tsi4s::Tsi4::Tsi5s::Tsi5::Tsi6s::Tsi6::Tsi7s::Tsi7::Tsi8s::Tsi8::Tsi9s::Tsi9::Tsi10s::Tsi10::Tsi11s::Tsi11::Attributes::Threshold::MajorHi : public ydk::Entity
{
    public:
        MajorHi();
        ~MajorHi();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class ThreshBag; //type: Inventory::Racks::Rack::Entity::Slot::Tsi1s::Tsi1::Tsi2s::Tsi2::Tsi3s::Tsi3::Tsi4s::Tsi4::Tsi5s::Tsi5::Tsi6s::Tsi6::Tsi7s::Tsi7::Tsi8s::Tsi8::Tsi9s::Tsi9::Tsi10s::Tsi10::Tsi11s::Tsi11::Attributes::Threshold::MajorHi::ThreshBag

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_invmgr_oper::Inventory::Racks::Rack::Entity::Slot::Tsi1s::Tsi1::Tsi2s::Tsi2::Tsi3s::Tsi3::Tsi4s::Tsi4::Tsi5s::Tsi5::Tsi6s::Tsi6::Tsi7s::Tsi7::Tsi8s::Tsi8::Tsi9s::Tsi9::Tsi10s::Tsi10::Tsi11s::Tsi11::Attributes::Threshold::MajorHi::ThreshBag> thresh_bag;
        
}; // Inventory::Racks::Rack::Entity::Slot::Tsi1s::Tsi1::Tsi2s::Tsi2::Tsi3s::Tsi3::Tsi4s::Tsi4::Tsi5s::Tsi5::Tsi6s::Tsi6::Tsi7s::Tsi7::Tsi8s::Tsi8::Tsi9s::Tsi9::Tsi10s::Tsi10::Tsi11s::Tsi11::Attributes::Threshold::MajorHi


class Inventory::Racks::Rack::Entity::Slot::Tsi1s::Tsi1::Tsi2s::Tsi2::Tsi3s::Tsi3::Tsi4s::Tsi4::Tsi5s::Tsi5::Tsi6s::Tsi6::Tsi7s::Tsi7::Tsi8s::Tsi8::Tsi9s::Tsi9::Tsi10s::Tsi10::Tsi11s::Tsi11::Attributes::Threshold::MajorHi::ThreshBag : public ydk::Entity
{
    public:
        ThreshBag();
        ~ThreshBag();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf threshold_severity; //type: uint32
        ydk::YLeaf threshold_relation; //type: uint32
        ydk::YLeaf threshold_value; //type: uint32
        ydk::YLeaf threshold_evaluation; //type: boolean
        ydk::YLeaf threshold_notification_enabled; //type: boolean

}; // Inventory::Racks::Rack::Entity::Slot::Tsi1s::Tsi1::Tsi2s::Tsi2::Tsi3s::Tsi3::Tsi4s::Tsi4::Tsi5s::Tsi5::Tsi6s::Tsi6::Tsi7s::Tsi7::Tsi8s::Tsi8::Tsi9s::Tsi9::Tsi10s::Tsi10::Tsi11s::Tsi11::Attributes::Threshold::MajorHi::ThreshBag


class Inventory::Racks::Rack::Entity::Slot::Tsi1s::Tsi1::Tsi2s::Tsi2::Tsi3s::Tsi3::Tsi4s::Tsi4::Tsi5s::Tsi5::Tsi6s::Tsi6::Tsi7s::Tsi7::Tsi8s::Tsi8::Tsi9s::Tsi9::Tsi10s::Tsi10::Tsi11s::Tsi11::Attributes::Threshold::CriticalLo : public ydk::Entity
{
    public:
        CriticalLo();
        ~CriticalLo();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class ThreshBag; //type: Inventory::Racks::Rack::Entity::Slot::Tsi1s::Tsi1::Tsi2s::Tsi2::Tsi3s::Tsi3::Tsi4s::Tsi4::Tsi5s::Tsi5::Tsi6s::Tsi6::Tsi7s::Tsi7::Tsi8s::Tsi8::Tsi9s::Tsi9::Tsi10s::Tsi10::Tsi11s::Tsi11::Attributes::Threshold::CriticalLo::ThreshBag

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_invmgr_oper::Inventory::Racks::Rack::Entity::Slot::Tsi1s::Tsi1::Tsi2s::Tsi2::Tsi3s::Tsi3::Tsi4s::Tsi4::Tsi5s::Tsi5::Tsi6s::Tsi6::Tsi7s::Tsi7::Tsi8s::Tsi8::Tsi9s::Tsi9::Tsi10s::Tsi10::Tsi11s::Tsi11::Attributes::Threshold::CriticalLo::ThreshBag> thresh_bag;
        
}; // Inventory::Racks::Rack::Entity::Slot::Tsi1s::Tsi1::Tsi2s::Tsi2::Tsi3s::Tsi3::Tsi4s::Tsi4::Tsi5s::Tsi5::Tsi6s::Tsi6::Tsi7s::Tsi7::Tsi8s::Tsi8::Tsi9s::Tsi9::Tsi10s::Tsi10::Tsi11s::Tsi11::Attributes::Threshold::CriticalLo


class Inventory::Racks::Rack::Entity::Slot::Tsi1s::Tsi1::Tsi2s::Tsi2::Tsi3s::Tsi3::Tsi4s::Tsi4::Tsi5s::Tsi5::Tsi6s::Tsi6::Tsi7s::Tsi7::Tsi8s::Tsi8::Tsi9s::Tsi9::Tsi10s::Tsi10::Tsi11s::Tsi11::Attributes::Threshold::CriticalLo::ThreshBag : public ydk::Entity
{
    public:
        ThreshBag();
        ~ThreshBag();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf threshold_severity; //type: uint32
        ydk::YLeaf threshold_relation; //type: uint32
        ydk::YLeaf threshold_value; //type: uint32
        ydk::YLeaf threshold_evaluation; //type: boolean
        ydk::YLeaf threshold_notification_enabled; //type: boolean

}; // Inventory::Racks::Rack::Entity::Slot::Tsi1s::Tsi1::Tsi2s::Tsi2::Tsi3s::Tsi3::Tsi4s::Tsi4::Tsi5s::Tsi5::Tsi6s::Tsi6::Tsi7s::Tsi7::Tsi8s::Tsi8::Tsi9s::Tsi9::Tsi10s::Tsi10::Tsi11s::Tsi11::Attributes::Threshold::CriticalLo::ThreshBag


class Inventory::Racks::Rack::Entity::Slot::Tsi1s::Tsi1::Tsi2s::Tsi2::Tsi3s::Tsi3::Tsi4s::Tsi4::Tsi5s::Tsi5::Tsi6s::Tsi6::Tsi7s::Tsi7::Tsi8s::Tsi8::Tsi9s::Tsi9::Tsi10s::Tsi10::Tsi11s::Tsi11::Attributes::Threshold::MinorLo : public ydk::Entity
{
    public:
        MinorLo();
        ~MinorLo();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class ThreshBag; //type: Inventory::Racks::Rack::Entity::Slot::Tsi1s::Tsi1::Tsi2s::Tsi2::Tsi3s::Tsi3::Tsi4s::Tsi4::Tsi5s::Tsi5::Tsi6s::Tsi6::Tsi7s::Tsi7::Tsi8s::Tsi8::Tsi9s::Tsi9::Tsi10s::Tsi10::Tsi11s::Tsi11::Attributes::Threshold::MinorLo::ThreshBag

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_invmgr_oper::Inventory::Racks::Rack::Entity::Slot::Tsi1s::Tsi1::Tsi2s::Tsi2::Tsi3s::Tsi3::Tsi4s::Tsi4::Tsi5s::Tsi5::Tsi6s::Tsi6::Tsi7s::Tsi7::Tsi8s::Tsi8::Tsi9s::Tsi9::Tsi10s::Tsi10::Tsi11s::Tsi11::Attributes::Threshold::MinorLo::ThreshBag> thresh_bag;
        
}; // Inventory::Racks::Rack::Entity::Slot::Tsi1s::Tsi1::Tsi2s::Tsi2::Tsi3s::Tsi3::Tsi4s::Tsi4::Tsi5s::Tsi5::Tsi6s::Tsi6::Tsi7s::Tsi7::Tsi8s::Tsi8::Tsi9s::Tsi9::Tsi10s::Tsi10::Tsi11s::Tsi11::Attributes::Threshold::MinorLo


class Inventory::Racks::Rack::Entity::Slot::Tsi1s::Tsi1::Tsi2s::Tsi2::Tsi3s::Tsi3::Tsi4s::Tsi4::Tsi5s::Tsi5::Tsi6s::Tsi6::Tsi7s::Tsi7::Tsi8s::Tsi8::Tsi9s::Tsi9::Tsi10s::Tsi10::Tsi11s::Tsi11::Attributes::Threshold::MinorLo::ThreshBag : public ydk::Entity
{
    public:
        ThreshBag();
        ~ThreshBag();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf threshold_severity; //type: uint32
        ydk::YLeaf threshold_relation; //type: uint32
        ydk::YLeaf threshold_value; //type: uint32
        ydk::YLeaf threshold_evaluation; //type: boolean
        ydk::YLeaf threshold_notification_enabled; //type: boolean

}; // Inventory::Racks::Rack::Entity::Slot::Tsi1s::Tsi1::Tsi2s::Tsi2::Tsi3s::Tsi3::Tsi4s::Tsi4::Tsi5s::Tsi5::Tsi6s::Tsi6::Tsi7s::Tsi7::Tsi8s::Tsi8::Tsi9s::Tsi9::Tsi10s::Tsi10::Tsi11s::Tsi11::Attributes::Threshold::MinorLo::ThreshBag


class Inventory::Racks::Rack::Entity::Slot::Tsi1s::Tsi1::Tsi2s::Tsi2::Tsi3s::Tsi3::Tsi4s::Tsi4::Tsi5s::Tsi5::Tsi6s::Tsi6::Tsi7s::Tsi7::Tsi8s::Tsi8::Tsi9s::Tsi9::Tsi10s::Tsi10::Tsi11s::Tsi11::Attributes::FruInfo : public ydk::Entity
{
    public:
        FruInfo();
        ~FruInfo();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf card_administrative_state; //type: int32
        ydk::YLeaf power_administrative_state; //type: int32
        ydk::YLeaf card_operational_state; //type: int32
        ydk::YLeaf card_monitor_state; //type: int32
        ydk::YLeaf card_reset_reason; //type: CardResetReason
        ydk::YLeaf power_current_measurement; //type: int32
        ydk::YLeaf power_operational_state; //type: int32
        class LastOperationalStateChange; //type: Inventory::Racks::Rack::Entity::Slot::Tsi1s::Tsi1::Tsi2s::Tsi2::Tsi3s::Tsi3::Tsi4s::Tsi4::Tsi5s::Tsi5::Tsi6s::Tsi6::Tsi7s::Tsi7::Tsi8s::Tsi8::Tsi9s::Tsi9::Tsi10s::Tsi10::Tsi11s::Tsi11::Attributes::FruInfo::LastOperationalStateChange
        class CardUpTime; //type: Inventory::Racks::Rack::Entity::Slot::Tsi1s::Tsi1::Tsi2s::Tsi2::Tsi3s::Tsi3::Tsi4s::Tsi4::Tsi5s::Tsi5::Tsi6s::Tsi6::Tsi7s::Tsi7::Tsi8s::Tsi8::Tsi9s::Tsi9::Tsi10s::Tsi10::Tsi11s::Tsi11::Attributes::FruInfo::CardUpTime

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_invmgr_oper::Inventory::Racks::Rack::Entity::Slot::Tsi1s::Tsi1::Tsi2s::Tsi2::Tsi3s::Tsi3::Tsi4s::Tsi4::Tsi5s::Tsi5::Tsi6s::Tsi6::Tsi7s::Tsi7::Tsi8s::Tsi8::Tsi9s::Tsi9::Tsi10s::Tsi10::Tsi11s::Tsi11::Attributes::FruInfo::LastOperationalStateChange> last_operational_state_change;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_invmgr_oper::Inventory::Racks::Rack::Entity::Slot::Tsi1s::Tsi1::Tsi2s::Tsi2::Tsi3s::Tsi3::Tsi4s::Tsi4::Tsi5s::Tsi5::Tsi6s::Tsi6::Tsi7s::Tsi7::Tsi8s::Tsi8::Tsi9s::Tsi9::Tsi10s::Tsi10::Tsi11s::Tsi11::Attributes::FruInfo::CardUpTime> card_up_time;
        
}; // Inventory::Racks::Rack::Entity::Slot::Tsi1s::Tsi1::Tsi2s::Tsi2::Tsi3s::Tsi3::Tsi4s::Tsi4::Tsi5s::Tsi5::Tsi6s::Tsi6::Tsi7s::Tsi7::Tsi8s::Tsi8::Tsi9s::Tsi9::Tsi10s::Tsi10::Tsi11s::Tsi11::Attributes::FruInfo


class Inventory::Racks::Rack::Entity::Slot::Tsi1s::Tsi1::Tsi2s::Tsi2::Tsi3s::Tsi3::Tsi4s::Tsi4::Tsi5s::Tsi5::Tsi6s::Tsi6::Tsi7s::Tsi7::Tsi8s::Tsi8::Tsi9s::Tsi9::Tsi10s::Tsi10::Tsi11s::Tsi11::Attributes::FruInfo::LastOperationalStateChange : public ydk::Entity
{
    public:
        LastOperationalStateChange();
        ~LastOperationalStateChange();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf time_in_seconds; //type: int32
        ydk::YLeaf time_in_nano_seconds; //type: int32

}; // Inventory::Racks::Rack::Entity::Slot::Tsi1s::Tsi1::Tsi2s::Tsi2::Tsi3s::Tsi3::Tsi4s::Tsi4::Tsi5s::Tsi5::Tsi6s::Tsi6::Tsi7s::Tsi7::Tsi8s::Tsi8::Tsi9s::Tsi9::Tsi10s::Tsi10::Tsi11s::Tsi11::Attributes::FruInfo::LastOperationalStateChange


class Inventory::Racks::Rack::Entity::Slot::Tsi1s::Tsi1::Tsi2s::Tsi2::Tsi3s::Tsi3::Tsi4s::Tsi4::Tsi5s::Tsi5::Tsi6s::Tsi6::Tsi7s::Tsi7::Tsi8s::Tsi8::Tsi9s::Tsi9::Tsi10s::Tsi10::Tsi11s::Tsi11::Attributes::FruInfo::CardUpTime : public ydk::Entity
{
    public:
        CardUpTime();
        ~CardUpTime();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf time_in_seconds; //type: int32
        ydk::YLeaf time_in_nano_seconds; //type: int32

}; // Inventory::Racks::Rack::Entity::Slot::Tsi1s::Tsi1::Tsi2s::Tsi2::Tsi3s::Tsi3::Tsi4s::Tsi4::Tsi5s::Tsi5::Tsi6s::Tsi6::Tsi7s::Tsi7::Tsi8s::Tsi8::Tsi9s::Tsi9::Tsi10s::Tsi10::Tsi11s::Tsi11::Attributes::FruInfo::CardUpTime


class Inventory::Racks::Rack::Entity::Slot::Tsi1s::Tsi1::Tsi2s::Tsi2::Tsi3s::Tsi3::Tsi4s::Tsi4::Tsi5s::Tsi5::Tsi6s::Tsi6::Tsi7s::Tsi7::Tsi8s::Tsi8::Tsi9s::Tsi9::Tsi10s::Tsi10::Tsi11s::Tsi11::Attributes::InvEepromInfo : public ydk::Entity
{
    public:
        InvEepromInfo();
        ~InvEepromInfo();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf inv_card_type; //type: uint8
        ydk::YLeaf opaque_data; //type: string
        ydk::YLeaf opaque_data_size; //type: uint32
        ydk::YLeaf has_eeprom; //type: uint32
        ydk::YLeaf description; //type: string
        class Eeprom; //type: Inventory::Racks::Rack::Entity::Slot::Tsi1s::Tsi1::Tsi2s::Tsi2::Tsi3s::Tsi3::Tsi4s::Tsi4::Tsi5s::Tsi5::Tsi6s::Tsi6::Tsi7s::Tsi7::Tsi8s::Tsi8::Tsi9s::Tsi9::Tsi10s::Tsi10::Tsi11s::Tsi11::Attributes::InvEepromInfo::Eeprom

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_invmgr_oper::Inventory::Racks::Rack::Entity::Slot::Tsi1s::Tsi1::Tsi2s::Tsi2::Tsi3s::Tsi3::Tsi4s::Tsi4::Tsi5s::Tsi5::Tsi6s::Tsi6::Tsi7s::Tsi7::Tsi8s::Tsi8::Tsi9s::Tsi9::Tsi10s::Tsi10::Tsi11s::Tsi11::Attributes::InvEepromInfo::Eeprom> eeprom;
        
}; // Inventory::Racks::Rack::Entity::Slot::Tsi1s::Tsi1::Tsi2s::Tsi2::Tsi3s::Tsi3::Tsi4s::Tsi4::Tsi5s::Tsi5::Tsi6s::Tsi6::Tsi7s::Tsi7::Tsi8s::Tsi8::Tsi9s::Tsi9::Tsi10s::Tsi10::Tsi11s::Tsi11::Attributes::InvEepromInfo


class Inventory::Racks::Rack::Entity::Slot::Tsi1s::Tsi1::Tsi2s::Tsi2::Tsi3s::Tsi3::Tsi4s::Tsi4::Tsi5s::Tsi5::Tsi6s::Tsi6::Tsi7s::Tsi7::Tsi8s::Tsi8::Tsi9s::Tsi9::Tsi10s::Tsi10::Tsi11s::Tsi11::Attributes::InvEepromInfo::Eeprom : public ydk::Entity
{
    public:
        Eeprom();
        ~Eeprom();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf description; //type: string
        ydk::YLeaf idprom_format_rev; //type: string
        ydk::YLeaf controller_family; //type: string
        ydk::YLeaf controller_type; //type: string
        ydk::YLeaf vid; //type: string
        ydk::YLeaf hwid; //type: string
        ydk::YLeaf pid; //type: string
        ydk::YLeaf udi_description; //type: string
        ydk::YLeaf udi_name; //type: string
        ydk::YLeaf clei; //type: string
        ydk::YLeaf eci; //type: string
        ydk::YLeaf top_assem_part_num; //type: string
        ydk::YLeaf top_assem_vid; //type: string
        ydk::YLeaf pca_num; //type: string
        ydk::YLeaf pcavid; //type: string
        ydk::YLeaf chassis_sid; //type: string
        ydk::YLeaf dev_num1; //type: string
        ydk::YLeaf dev_num2; //type: string
        ydk::YLeaf dev_num3; //type: string
        ydk::YLeaf dev_num4; //type: string
        ydk::YLeaf dev_num5; //type: string
        ydk::YLeaf dev_num6; //type: string
        ydk::YLeaf dev_num7; //type: string
        ydk::YLeaf manu_test_data; //type: string
        ydk::YLeaf asset_id; //type: string
        ydk::YLeaf asset_alias; //type: string
        ydk::YLeaf base_mac_address1; //type: string
        ydk::YLeaf mac_add_blk_size1; //type: string
        ydk::YLeaf base_mac_address2; //type: string
        ydk::YLeaf mac_add_blk_size2; //type: string
        ydk::YLeaf base_mac_address3; //type: string
        ydk::YLeaf mac_add_blk_size3; //type: string
        ydk::YLeaf base_mac_address4; //type: string
        ydk::YLeaf mac_add_blk_size4; //type: string
        ydk::YLeaf pcb_serial_num; //type: string
        ydk::YLeaf power_supply_type; //type: string
        ydk::YLeaf power_consumption; //type: string
        ydk::YLeaf block_signature; //type: string
        ydk::YLeaf block_version; //type: string
        ydk::YLeaf block_length; //type: string
        ydk::YLeaf block_checksum; //type: string
        ydk::YLeaf eeprom_size; //type: string
        ydk::YLeaf block_count; //type: string
        ydk::YLeaf fru_major_type; //type: string
        ydk::YLeaf fru_minor_type; //type: string
        ydk::YLeaf oem_string; //type: string
        ydk::YLeaf product_id; //type: string
        ydk::YLeaf serial_number; //type: string
        ydk::YLeaf part_number; //type: string
        ydk::YLeaf part_revision; //type: string
        ydk::YLeaf mfg_deviation; //type: string
        ydk::YLeaf hw_version; //type: string
        ydk::YLeaf mfg_bits; //type: string
        ydk::YLeaf engineer_use; //type: string
        ydk::YLeaf snmpoid; //type: string
        ydk::YLeaf rma_code; //type: string
        class Rma; //type: Inventory::Racks::Rack::Entity::Slot::Tsi1s::Tsi1::Tsi2s::Tsi2::Tsi3s::Tsi3::Tsi4s::Tsi4::Tsi5s::Tsi5::Tsi6s::Tsi6::Tsi7s::Tsi7::Tsi8s::Tsi8::Tsi9s::Tsi9::Tsi10s::Tsi10::Tsi11s::Tsi11::Attributes::InvEepromInfo::Eeprom::Rma

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_invmgr_oper::Inventory::Racks::Rack::Entity::Slot::Tsi1s::Tsi1::Tsi2s::Tsi2::Tsi3s::Tsi3::Tsi4s::Tsi4::Tsi5s::Tsi5::Tsi6s::Tsi6::Tsi7s::Tsi7::Tsi8s::Tsi8::Tsi9s::Tsi9::Tsi10s::Tsi10::Tsi11s::Tsi11::Attributes::InvEepromInfo::Eeprom::Rma> rma;
        
}; // Inventory::Racks::Rack::Entity::Slot::Tsi1s::Tsi1::Tsi2s::Tsi2::Tsi3s::Tsi3::Tsi4s::Tsi4::Tsi5s::Tsi5::Tsi6s::Tsi6::Tsi7s::Tsi7::Tsi8s::Tsi8::Tsi9s::Tsi9::Tsi10s::Tsi10::Tsi11s::Tsi11::Attributes::InvEepromInfo::Eeprom


class Inventory::Racks::Rack::Entity::Slot::Tsi1s::Tsi1::Tsi2s::Tsi2::Tsi3s::Tsi3::Tsi4s::Tsi4::Tsi5s::Tsi5::Tsi6s::Tsi6::Tsi7s::Tsi7::Tsi8s::Tsi8::Tsi9s::Tsi9::Tsi10s::Tsi10::Tsi11s::Tsi11::Attributes::InvEepromInfo::Eeprom::Rma : public ydk::Entity
{
    public:
        Rma();
        ~Rma();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf test_history; //type: string
        ydk::YLeaf rma_number; //type: string
        ydk::YLeaf rma_history; //type: string

}; // Inventory::Racks::Rack::Entity::Slot::Tsi1s::Tsi1::Tsi2s::Tsi2::Tsi3s::Tsi3::Tsi4s::Tsi4::Tsi5s::Tsi5::Tsi6s::Tsi6::Tsi7s::Tsi7::Tsi8s::Tsi8::Tsi9s::Tsi9::Tsi10s::Tsi10::Tsi11s::Tsi11::Attributes::InvEepromInfo::Eeprom::Rma


class Inventory::Racks::Rack::Entity::Slot::Tsi1s::Tsi1::Tsi2s::Tsi2::Tsi3s::Tsi3::Tsi4s::Tsi4::Tsi5s::Tsi5::Tsi6s::Tsi6::Tsi7s::Tsi7::Tsi8s::Tsi8::Tsi9s::Tsi9::Tsi10s::Tsi10::Attributes : public ydk::Entity
{
    public:
        Attributes();
        ~Attributes();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class InvBasicBag; //type: Inventory::Racks::Rack::Entity::Slot::Tsi1s::Tsi1::Tsi2s::Tsi2::Tsi3s::Tsi3::Tsi4s::Tsi4::Tsi5s::Tsi5::Tsi6s::Tsi6::Tsi7s::Tsi7::Tsi8s::Tsi8::Tsi9s::Tsi9::Tsi10s::Tsi10::Attributes::InvBasicBag
        class EnvSensorInfo; //type: Inventory::Racks::Rack::Entity::Slot::Tsi1s::Tsi1::Tsi2s::Tsi2::Tsi3s::Tsi3::Tsi4s::Tsi4::Tsi5s::Tsi5::Tsi6s::Tsi6::Tsi7s::Tsi7::Tsi8s::Tsi8::Tsi9s::Tsi9::Tsi10s::Tsi10::Attributes::EnvSensorInfo
        class PwgInfo; //type: Inventory::Racks::Rack::Entity::Slot::Tsi1s::Tsi1::Tsi2s::Tsi2::Tsi3s::Tsi3::Tsi4s::Tsi4::Tsi5s::Tsi5::Tsi6s::Tsi6::Tsi7s::Tsi7::Tsi8s::Tsi8::Tsi9s::Tsi9::Tsi10s::Tsi10::Attributes::PwgInfo
        class EnvSensorInfoXml; //type: Inventory::Racks::Rack::Entity::Slot::Tsi1s::Tsi1::Tsi2s::Tsi2::Tsi3s::Tsi3::Tsi4s::Tsi4::Tsi5s::Tsi5::Tsi6s::Tsi6::Tsi7s::Tsi7::Tsi8s::Tsi8::Tsi9s::Tsi9::Tsi10s::Tsi10::Attributes::EnvSensorInfoXml
        class InvAssetBag; //type: Inventory::Racks::Rack::Entity::Slot::Tsi1s::Tsi1::Tsi2s::Tsi2::Tsi3s::Tsi3::Tsi4s::Tsi4::Tsi5s::Tsi5::Tsi6s::Tsi6::Tsi7s::Tsi7::Tsi8s::Tsi8::Tsi9s::Tsi9::Tsi10s::Tsi10::Attributes::InvAssetBag
        class Threshold; //type: Inventory::Racks::Rack::Entity::Slot::Tsi1s::Tsi1::Tsi2s::Tsi2::Tsi3s::Tsi3::Tsi4s::Tsi4::Tsi5s::Tsi5::Tsi6s::Tsi6::Tsi7s::Tsi7::Tsi8s::Tsi8::Tsi9s::Tsi9::Tsi10s::Tsi10::Attributes::Threshold
        class FruInfo; //type: Inventory::Racks::Rack::Entity::Slot::Tsi1s::Tsi1::Tsi2s::Tsi2::Tsi3s::Tsi3::Tsi4s::Tsi4::Tsi5s::Tsi5::Tsi6s::Tsi6::Tsi7s::Tsi7::Tsi8s::Tsi8::Tsi9s::Tsi9::Tsi10s::Tsi10::Attributes::FruInfo
        class InvEepromInfo; //type: Inventory::Racks::Rack::Entity::Slot::Tsi1s::Tsi1::Tsi2s::Tsi2::Tsi3s::Tsi3::Tsi4s::Tsi4::Tsi5s::Tsi5::Tsi6s::Tsi6::Tsi7s::Tsi7::Tsi8s::Tsi8::Tsi9s::Tsi9::Tsi10s::Tsi10::Attributes::InvEepromInfo

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_invmgr_oper::Inventory::Racks::Rack::Entity::Slot::Tsi1s::Tsi1::Tsi2s::Tsi2::Tsi3s::Tsi3::Tsi4s::Tsi4::Tsi5s::Tsi5::Tsi6s::Tsi6::Tsi7s::Tsi7::Tsi8s::Tsi8::Tsi9s::Tsi9::Tsi10s::Tsi10::Attributes::InvBasicBag> inv_basic_bag;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_invmgr_oper::Inventory::Racks::Rack::Entity::Slot::Tsi1s::Tsi1::Tsi2s::Tsi2::Tsi3s::Tsi3::Tsi4s::Tsi4::Tsi5s::Tsi5::Tsi6s::Tsi6::Tsi7s::Tsi7::Tsi8s::Tsi8::Tsi9s::Tsi9::Tsi10s::Tsi10::Attributes::EnvSensorInfo> env_sensor_info;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_invmgr_oper::Inventory::Racks::Rack::Entity::Slot::Tsi1s::Tsi1::Tsi2s::Tsi2::Tsi3s::Tsi3::Tsi4s::Tsi4::Tsi5s::Tsi5::Tsi6s::Tsi6::Tsi7s::Tsi7::Tsi8s::Tsi8::Tsi9s::Tsi9::Tsi10s::Tsi10::Attributes::PwgInfo> pwg_info;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_invmgr_oper::Inventory::Racks::Rack::Entity::Slot::Tsi1s::Tsi1::Tsi2s::Tsi2::Tsi3s::Tsi3::Tsi4s::Tsi4::Tsi5s::Tsi5::Tsi6s::Tsi6::Tsi7s::Tsi7::Tsi8s::Tsi8::Tsi9s::Tsi9::Tsi10s::Tsi10::Attributes::EnvSensorInfoXml> env_sensor_info_xml;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_invmgr_oper::Inventory::Racks::Rack::Entity::Slot::Tsi1s::Tsi1::Tsi2s::Tsi2::Tsi3s::Tsi3::Tsi4s::Tsi4::Tsi5s::Tsi5::Tsi6s::Tsi6::Tsi7s::Tsi7::Tsi8s::Tsi8::Tsi9s::Tsi9::Tsi10s::Tsi10::Attributes::InvAssetBag> inv_asset_bag;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_invmgr_oper::Inventory::Racks::Rack::Entity::Slot::Tsi1s::Tsi1::Tsi2s::Tsi2::Tsi3s::Tsi3::Tsi4s::Tsi4::Tsi5s::Tsi5::Tsi6s::Tsi6::Tsi7s::Tsi7::Tsi8s::Tsi8::Tsi9s::Tsi9::Tsi10s::Tsi10::Attributes::Threshold> threshold;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_invmgr_oper::Inventory::Racks::Rack::Entity::Slot::Tsi1s::Tsi1::Tsi2s::Tsi2::Tsi3s::Tsi3::Tsi4s::Tsi4::Tsi5s::Tsi5::Tsi6s::Tsi6::Tsi7s::Tsi7::Tsi8s::Tsi8::Tsi9s::Tsi9::Tsi10s::Tsi10::Attributes::FruInfo> fru_info;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_invmgr_oper::Inventory::Racks::Rack::Entity::Slot::Tsi1s::Tsi1::Tsi2s::Tsi2::Tsi3s::Tsi3::Tsi4s::Tsi4::Tsi5s::Tsi5::Tsi6s::Tsi6::Tsi7s::Tsi7::Tsi8s::Tsi8::Tsi9s::Tsi9::Tsi10s::Tsi10::Attributes::InvEepromInfo> inv_eeprom_info;
        
}; // Inventory::Racks::Rack::Entity::Slot::Tsi1s::Tsi1::Tsi2s::Tsi2::Tsi3s::Tsi3::Tsi4s::Tsi4::Tsi5s::Tsi5::Tsi6s::Tsi6::Tsi7s::Tsi7::Tsi8s::Tsi8::Tsi9s::Tsi9::Tsi10s::Tsi10::Attributes


class Inventory::Racks::Rack::Entity::Slot::Tsi1s::Tsi1::Tsi2s::Tsi2::Tsi3s::Tsi3::Tsi4s::Tsi4::Tsi5s::Tsi5::Tsi6s::Tsi6::Tsi7s::Tsi7::Tsi8s::Tsi8::Tsi9s::Tsi9::Tsi10s::Tsi10::Attributes::InvBasicBag : public ydk::Entity
{
    public:
        InvBasicBag();
        ~InvBasicBag();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf description; //type: string
        ydk::YLeaf vendor_type; //type: string
        ydk::YLeaf name; //type: string
        ydk::YLeaf hardware_revision; //type: string
        ydk::YLeaf firmware_revision; //type: string
        ydk::YLeaf software_revision; //type: string
        ydk::YLeaf chip_hardware_revision; //type: string
        ydk::YLeaf serial_number; //type: string
        ydk::YLeaf manufacturer_name; //type: string
        ydk::YLeaf model_name; //type: string
        ydk::YLeaf asset_id_str; //type: string
        ydk::YLeaf asset_identification; //type: int32
        ydk::YLeaf is_field_replaceable_unit; //type: boolean
        ydk::YLeaf manufacturer_asset_tags; //type: int32
        ydk::YLeaf composite_class_code; //type: int32
        ydk::YLeaf memory_size; //type: int32
        ydk::YLeaf environmental_monitor_path; //type: string
        ydk::YLeaf alias; //type: string
        ydk::YLeaf group_flag; //type: boolean
        ydk::YLeaf new_deviation_number; //type: int32
        ydk::YLeaf physical_layer_interface_module_type; //type: int32
        ydk::YLeaf unrecognized_fru; //type: boolean
        ydk::YLeaf redundancystate; //type: int32
        ydk::YLeaf ceport; //type: boolean
        ydk::YLeaf xr_scoped; //type: boolean
        ydk::YLeaf unique_id; //type: int32

}; // Inventory::Racks::Rack::Entity::Slot::Tsi1s::Tsi1::Tsi2s::Tsi2::Tsi3s::Tsi3::Tsi4s::Tsi4::Tsi5s::Tsi5::Tsi6s::Tsi6::Tsi7s::Tsi7::Tsi8s::Tsi8::Tsi9s::Tsi9::Tsi10s::Tsi10::Attributes::InvBasicBag


class Inventory::Racks::Rack::Entity::Slot::Tsi1s::Tsi1::Tsi2s::Tsi2::Tsi3s::Tsi3::Tsi4s::Tsi4::Tsi5s::Tsi5::Tsi6s::Tsi6::Tsi7s::Tsi7::Tsi8s::Tsi8::Tsi9s::Tsi9::Tsi10s::Tsi10::Attributes::EnvSensorInfo : public ydk::Entity
{
    public:
        EnvSensorInfo();
        ~EnvSensorInfo();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf field_validity_bitmap; //type: uint32
        ydk::YLeaf device_description; //type: string
        ydk::YLeaf units; //type: string
        ydk::YLeaf device_id; //type: uint32
        ydk::YLeaf value_; //type: uint32
        ydk::YLeaf alarm_type; //type: uint32
        ydk::YLeaf data_type; //type: uint32
        ydk::YLeaf scale; //type: uint32
        ydk::YLeaf precision; //type: uint32
        ydk::YLeaf status; //type: uint32
        ydk::YLeaf age_time_stamp; //type: uint32
        ydk::YLeaf update_rate; //type: uint32

}; // Inventory::Racks::Rack::Entity::Slot::Tsi1s::Tsi1::Tsi2s::Tsi2::Tsi3s::Tsi3::Tsi4s::Tsi4::Tsi5s::Tsi5::Tsi6s::Tsi6::Tsi7s::Tsi7::Tsi8s::Tsi8::Tsi9s::Tsi9::Tsi10s::Tsi10::Attributes::EnvSensorInfo


class Inventory::Racks::Rack::Entity::Slot::Tsi1s::Tsi1::Tsi2s::Tsi2::Tsi3s::Tsi3::Tsi4s::Tsi4::Tsi5s::Tsi5::Tsi6s::Tsi6::Tsi7s::Tsi7::Tsi8s::Tsi8::Tsi9s::Tsi9::Tsi10s::Tsi10::Attributes::PwgInfo : public ydk::Entity
{
    public:
        PwgInfo();
        ~PwgInfo();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf power_group_redundancy_mode; //type: int32
        ydk::YLeaf power_group_power_units; //type: string
        ydk::YLeaf power_group_available_current; //type: int32
        ydk::YLeaf power_group_drawn_current; //type: int32

}; // Inventory::Racks::Rack::Entity::Slot::Tsi1s::Tsi1::Tsi2s::Tsi2::Tsi3s::Tsi3::Tsi4s::Tsi4::Tsi5s::Tsi5::Tsi6s::Tsi6::Tsi7s::Tsi7::Tsi8s::Tsi8::Tsi9s::Tsi9::Tsi10s::Tsi10::Attributes::PwgInfo


class Inventory::Racks::Rack::Entity::Slot::Tsi1s::Tsi1::Tsi2s::Tsi2::Tsi3s::Tsi3::Tsi4s::Tsi4::Tsi5s::Tsi5::Tsi6s::Tsi6::Tsi7s::Tsi7::Tsi8s::Tsi8::Tsi9s::Tsi9::Tsi10s::Tsi10::Attributes::EnvSensorInfoXml : public ydk::Entity
{
    public:
        EnvSensorInfoXml();
        ~EnvSensorInfoXml();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf description; //type: string
        ydk::YLeaf units; //type: Unit
        ydk::YLeaf value_; //type: string
        ydk::YLeaf data_type; //type: SensorData
        ydk::YLeaf status; //type: SensorStatus
        ydk::YLeaf update_rate; //type: uint32
        class Threshold; //type: Inventory::Racks::Rack::Entity::Slot::Tsi1s::Tsi1::Tsi2s::Tsi2::Tsi3s::Tsi3::Tsi4s::Tsi4::Tsi5s::Tsi5::Tsi6s::Tsi6::Tsi7s::Tsi7::Tsi8s::Tsi8::Tsi9s::Tsi9::Tsi10s::Tsi10::Attributes::EnvSensorInfoXml::Threshold

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_invmgr_oper::Inventory::Racks::Rack::Entity::Slot::Tsi1s::Tsi1::Tsi2s::Tsi2::Tsi3s::Tsi3::Tsi4s::Tsi4::Tsi5s::Tsi5::Tsi6s::Tsi6::Tsi7s::Tsi7::Tsi8s::Tsi8::Tsi9s::Tsi9::Tsi10s::Tsi10::Attributes::EnvSensorInfoXml::Threshold> threshold;
        
}; // Inventory::Racks::Rack::Entity::Slot::Tsi1s::Tsi1::Tsi2s::Tsi2::Tsi3s::Tsi3::Tsi4s::Tsi4::Tsi5s::Tsi5::Tsi6s::Tsi6::Tsi7s::Tsi7::Tsi8s::Tsi8::Tsi9s::Tsi9::Tsi10s::Tsi10::Attributes::EnvSensorInfoXml


class Inventory::Racks::Rack::Entity::Slot::Tsi1s::Tsi1::Tsi2s::Tsi2::Tsi3s::Tsi3::Tsi4s::Tsi4::Tsi5s::Tsi5::Tsi6s::Tsi6::Tsi7s::Tsi7::Tsi8s::Tsi8::Tsi9s::Tsi9::Tsi10s::Tsi10::Attributes::EnvSensorInfoXml::Threshold : public ydk::Entity
{
    public:
        Threshold();
        ~Threshold();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class ThresholdArray; //type: Inventory::Racks::Rack::Entity::Slot::Tsi1s::Tsi1::Tsi2s::Tsi2::Tsi3s::Tsi3::Tsi4s::Tsi4::Tsi5s::Tsi5::Tsi6s::Tsi6::Tsi7s::Tsi7::Tsi8s::Tsi8::Tsi9s::Tsi9::Tsi10s::Tsi10::Attributes::EnvSensorInfoXml::Threshold::ThresholdArray

        ydk::YList threshold_array;
        
}; // Inventory::Racks::Rack::Entity::Slot::Tsi1s::Tsi1::Tsi2s::Tsi2::Tsi3s::Tsi3::Tsi4s::Tsi4::Tsi5s::Tsi5::Tsi6s::Tsi6::Tsi7s::Tsi7::Tsi8s::Tsi8::Tsi9s::Tsi9::Tsi10s::Tsi10::Attributes::EnvSensorInfoXml::Threshold


class Inventory::Racks::Rack::Entity::Slot::Tsi1s::Tsi1::Tsi2s::Tsi2::Tsi3s::Tsi3::Tsi4s::Tsi4::Tsi5s::Tsi5::Tsi6s::Tsi6::Tsi7s::Tsi7::Tsi8s::Tsi8::Tsi9s::Tsi9::Tsi10s::Tsi10::Attributes::EnvSensorInfoXml::Threshold::ThresholdArray : public ydk::Entity
{
    public:
        ThresholdArray();
        ~ThresholdArray();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf threshold_severity; //type: ThresholdSeverity
        ydk::YLeaf threshold_relation; //type: ThresholdRelation
        ydk::YLeaf threshold_value; //type: int32
        ydk::YLeaf threshold_name; //type: string

}; // Inventory::Racks::Rack::Entity::Slot::Tsi1s::Tsi1::Tsi2s::Tsi2::Tsi3s::Tsi3::Tsi4s::Tsi4::Tsi5s::Tsi5::Tsi6s::Tsi6::Tsi7s::Tsi7::Tsi8s::Tsi8::Tsi9s::Tsi9::Tsi10s::Tsi10::Attributes::EnvSensorInfoXml::Threshold::ThresholdArray


class Inventory::Racks::Rack::Entity::Slot::Tsi1s::Tsi1::Tsi2s::Tsi2::Tsi3s::Tsi3::Tsi4s::Tsi4::Tsi5s::Tsi5::Tsi6s::Tsi6::Tsi7s::Tsi7::Tsi8s::Tsi8::Tsi9s::Tsi9::Tsi10s::Tsi10::Attributes::InvAssetBag : public ydk::Entity
{
    public:
        InvAssetBag();
        ~InvAssetBag();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf part_number; //type: string
        ydk::YLeaf manufacturer_assembly_number; //type: string
        ydk::YLeaf manufacturer_assembly_revision; //type: string
        ydk::YLeaf manufacturer_firmware_identifier; //type: string
        ydk::YLeaf manufacturer_software_identifier; //type: string
        ydk::YLeaf manufacturer_common_language_equipment_identifier; //type: string
        ydk::YLeaf original_equipment_manufacturer_string; //type: string

}; // Inventory::Racks::Rack::Entity::Slot::Tsi1s::Tsi1::Tsi2s::Tsi2::Tsi3s::Tsi3::Tsi4s::Tsi4::Tsi5s::Tsi5::Tsi6s::Tsi6::Tsi7s::Tsi7::Tsi8s::Tsi8::Tsi9s::Tsi9::Tsi10s::Tsi10::Attributes::InvAssetBag


class Inventory::Racks::Rack::Entity::Slot::Tsi1s::Tsi1::Tsi2s::Tsi2::Tsi3s::Tsi3::Tsi4s::Tsi4::Tsi5s::Tsi5::Tsi6s::Tsi6::Tsi7s::Tsi7::Tsi8s::Tsi8::Tsi9s::Tsi9::Tsi10s::Tsi10::Attributes::Threshold : public ydk::Entity
{
    public:
        Threshold();
        ~Threshold();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class MajorLo; //type: Inventory::Racks::Rack::Entity::Slot::Tsi1s::Tsi1::Tsi2s::Tsi2::Tsi3s::Tsi3::Tsi4s::Tsi4::Tsi5s::Tsi5::Tsi6s::Tsi6::Tsi7s::Tsi7::Tsi8s::Tsi8::Tsi9s::Tsi9::Tsi10s::Tsi10::Attributes::Threshold::MajorLo
        class CriticalHi; //type: Inventory::Racks::Rack::Entity::Slot::Tsi1s::Tsi1::Tsi2s::Tsi2::Tsi3s::Tsi3::Tsi4s::Tsi4::Tsi5s::Tsi5::Tsi6s::Tsi6::Tsi7s::Tsi7::Tsi8s::Tsi8::Tsi9s::Tsi9::Tsi10s::Tsi10::Attributes::Threshold::CriticalHi
        class MinorHi; //type: Inventory::Racks::Rack::Entity::Slot::Tsi1s::Tsi1::Tsi2s::Tsi2::Tsi3s::Tsi3::Tsi4s::Tsi4::Tsi5s::Tsi5::Tsi6s::Tsi6::Tsi7s::Tsi7::Tsi8s::Tsi8::Tsi9s::Tsi9::Tsi10s::Tsi10::Attributes::Threshold::MinorHi
        class MajorHi; //type: Inventory::Racks::Rack::Entity::Slot::Tsi1s::Tsi1::Tsi2s::Tsi2::Tsi3s::Tsi3::Tsi4s::Tsi4::Tsi5s::Tsi5::Tsi6s::Tsi6::Tsi7s::Tsi7::Tsi8s::Tsi8::Tsi9s::Tsi9::Tsi10s::Tsi10::Attributes::Threshold::MajorHi
        class CriticalLo; //type: Inventory::Racks::Rack::Entity::Slot::Tsi1s::Tsi1::Tsi2s::Tsi2::Tsi3s::Tsi3::Tsi4s::Tsi4::Tsi5s::Tsi5::Tsi6s::Tsi6::Tsi7s::Tsi7::Tsi8s::Tsi8::Tsi9s::Tsi9::Tsi10s::Tsi10::Attributes::Threshold::CriticalLo
        class MinorLo; //type: Inventory::Racks::Rack::Entity::Slot::Tsi1s::Tsi1::Tsi2s::Tsi2::Tsi3s::Tsi3::Tsi4s::Tsi4::Tsi5s::Tsi5::Tsi6s::Tsi6::Tsi7s::Tsi7::Tsi8s::Tsi8::Tsi9s::Tsi9::Tsi10s::Tsi10::Attributes::Threshold::MinorLo

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_invmgr_oper::Inventory::Racks::Rack::Entity::Slot::Tsi1s::Tsi1::Tsi2s::Tsi2::Tsi3s::Tsi3::Tsi4s::Tsi4::Tsi5s::Tsi5::Tsi6s::Tsi6::Tsi7s::Tsi7::Tsi8s::Tsi8::Tsi9s::Tsi9::Tsi10s::Tsi10::Attributes::Threshold::MajorLo> major_lo;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_invmgr_oper::Inventory::Racks::Rack::Entity::Slot::Tsi1s::Tsi1::Tsi2s::Tsi2::Tsi3s::Tsi3::Tsi4s::Tsi4::Tsi5s::Tsi5::Tsi6s::Tsi6::Tsi7s::Tsi7::Tsi8s::Tsi8::Tsi9s::Tsi9::Tsi10s::Tsi10::Attributes::Threshold::CriticalHi> critical_hi;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_invmgr_oper::Inventory::Racks::Rack::Entity::Slot::Tsi1s::Tsi1::Tsi2s::Tsi2::Tsi3s::Tsi3::Tsi4s::Tsi4::Tsi5s::Tsi5::Tsi6s::Tsi6::Tsi7s::Tsi7::Tsi8s::Tsi8::Tsi9s::Tsi9::Tsi10s::Tsi10::Attributes::Threshold::MinorHi> minor_hi;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_invmgr_oper::Inventory::Racks::Rack::Entity::Slot::Tsi1s::Tsi1::Tsi2s::Tsi2::Tsi3s::Tsi3::Tsi4s::Tsi4::Tsi5s::Tsi5::Tsi6s::Tsi6::Tsi7s::Tsi7::Tsi8s::Tsi8::Tsi9s::Tsi9::Tsi10s::Tsi10::Attributes::Threshold::MajorHi> major_hi;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_invmgr_oper::Inventory::Racks::Rack::Entity::Slot::Tsi1s::Tsi1::Tsi2s::Tsi2::Tsi3s::Tsi3::Tsi4s::Tsi4::Tsi5s::Tsi5::Tsi6s::Tsi6::Tsi7s::Tsi7::Tsi8s::Tsi8::Tsi9s::Tsi9::Tsi10s::Tsi10::Attributes::Threshold::CriticalLo> critical_lo;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_invmgr_oper::Inventory::Racks::Rack::Entity::Slot::Tsi1s::Tsi1::Tsi2s::Tsi2::Tsi3s::Tsi3::Tsi4s::Tsi4::Tsi5s::Tsi5::Tsi6s::Tsi6::Tsi7s::Tsi7::Tsi8s::Tsi8::Tsi9s::Tsi9::Tsi10s::Tsi10::Attributes::Threshold::MinorLo> minor_lo;
        
}; // Inventory::Racks::Rack::Entity::Slot::Tsi1s::Tsi1::Tsi2s::Tsi2::Tsi3s::Tsi3::Tsi4s::Tsi4::Tsi5s::Tsi5::Tsi6s::Tsi6::Tsi7s::Tsi7::Tsi8s::Tsi8::Tsi9s::Tsi9::Tsi10s::Tsi10::Attributes::Threshold


class Inventory::Racks::Rack::Entity::Slot::Tsi1s::Tsi1::Tsi2s::Tsi2::Tsi3s::Tsi3::Tsi4s::Tsi4::Tsi5s::Tsi5::Tsi6s::Tsi6::Tsi7s::Tsi7::Tsi8s::Tsi8::Tsi9s::Tsi9::Tsi10s::Tsi10::Attributes::Threshold::MajorLo : public ydk::Entity
{
    public:
        MajorLo();
        ~MajorLo();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class ThreshBag; //type: Inventory::Racks::Rack::Entity::Slot::Tsi1s::Tsi1::Tsi2s::Tsi2::Tsi3s::Tsi3::Tsi4s::Tsi4::Tsi5s::Tsi5::Tsi6s::Tsi6::Tsi7s::Tsi7::Tsi8s::Tsi8::Tsi9s::Tsi9::Tsi10s::Tsi10::Attributes::Threshold::MajorLo::ThreshBag

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_invmgr_oper::Inventory::Racks::Rack::Entity::Slot::Tsi1s::Tsi1::Tsi2s::Tsi2::Tsi3s::Tsi3::Tsi4s::Tsi4::Tsi5s::Tsi5::Tsi6s::Tsi6::Tsi7s::Tsi7::Tsi8s::Tsi8::Tsi9s::Tsi9::Tsi10s::Tsi10::Attributes::Threshold::MajorLo::ThreshBag> thresh_bag;
        
}; // Inventory::Racks::Rack::Entity::Slot::Tsi1s::Tsi1::Tsi2s::Tsi2::Tsi3s::Tsi3::Tsi4s::Tsi4::Tsi5s::Tsi5::Tsi6s::Tsi6::Tsi7s::Tsi7::Tsi8s::Tsi8::Tsi9s::Tsi9::Tsi10s::Tsi10::Attributes::Threshold::MajorLo


class Inventory::Racks::Rack::Entity::Slot::Tsi1s::Tsi1::Tsi2s::Tsi2::Tsi3s::Tsi3::Tsi4s::Tsi4::Tsi5s::Tsi5::Tsi6s::Tsi6::Tsi7s::Tsi7::Tsi8s::Tsi8::Tsi9s::Tsi9::Tsi10s::Tsi10::Attributes::Threshold::MajorLo::ThreshBag : public ydk::Entity
{
    public:
        ThreshBag();
        ~ThreshBag();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf threshold_severity; //type: uint32
        ydk::YLeaf threshold_relation; //type: uint32
        ydk::YLeaf threshold_value; //type: uint32
        ydk::YLeaf threshold_evaluation; //type: boolean
        ydk::YLeaf threshold_notification_enabled; //type: boolean

}; // Inventory::Racks::Rack::Entity::Slot::Tsi1s::Tsi1::Tsi2s::Tsi2::Tsi3s::Tsi3::Tsi4s::Tsi4::Tsi5s::Tsi5::Tsi6s::Tsi6::Tsi7s::Tsi7::Tsi8s::Tsi8::Tsi9s::Tsi9::Tsi10s::Tsi10::Attributes::Threshold::MajorLo::ThreshBag


class Inventory::Racks::Rack::Entity::Slot::Tsi1s::Tsi1::Tsi2s::Tsi2::Tsi3s::Tsi3::Tsi4s::Tsi4::Tsi5s::Tsi5::Tsi6s::Tsi6::Tsi7s::Tsi7::Tsi8s::Tsi8::Tsi9s::Tsi9::Tsi10s::Tsi10::Attributes::Threshold::CriticalHi : public ydk::Entity
{
    public:
        CriticalHi();
        ~CriticalHi();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class ThreshBag; //type: Inventory::Racks::Rack::Entity::Slot::Tsi1s::Tsi1::Tsi2s::Tsi2::Tsi3s::Tsi3::Tsi4s::Tsi4::Tsi5s::Tsi5::Tsi6s::Tsi6::Tsi7s::Tsi7::Tsi8s::Tsi8::Tsi9s::Tsi9::Tsi10s::Tsi10::Attributes::Threshold::CriticalHi::ThreshBag

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_invmgr_oper::Inventory::Racks::Rack::Entity::Slot::Tsi1s::Tsi1::Tsi2s::Tsi2::Tsi3s::Tsi3::Tsi4s::Tsi4::Tsi5s::Tsi5::Tsi6s::Tsi6::Tsi7s::Tsi7::Tsi8s::Tsi8::Tsi9s::Tsi9::Tsi10s::Tsi10::Attributes::Threshold::CriticalHi::ThreshBag> thresh_bag;
        
}; // Inventory::Racks::Rack::Entity::Slot::Tsi1s::Tsi1::Tsi2s::Tsi2::Tsi3s::Tsi3::Tsi4s::Tsi4::Tsi5s::Tsi5::Tsi6s::Tsi6::Tsi7s::Tsi7::Tsi8s::Tsi8::Tsi9s::Tsi9::Tsi10s::Tsi10::Attributes::Threshold::CriticalHi


class Inventory::Racks::Rack::Entity::Slot::Tsi1s::Tsi1::Tsi2s::Tsi2::Tsi3s::Tsi3::Tsi4s::Tsi4::Tsi5s::Tsi5::Tsi6s::Tsi6::Tsi7s::Tsi7::Tsi8s::Tsi8::Tsi9s::Tsi9::Tsi10s::Tsi10::Attributes::Threshold::CriticalHi::ThreshBag : public ydk::Entity
{
    public:
        ThreshBag();
        ~ThreshBag();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf threshold_severity; //type: uint32
        ydk::YLeaf threshold_relation; //type: uint32
        ydk::YLeaf threshold_value; //type: uint32
        ydk::YLeaf threshold_evaluation; //type: boolean
        ydk::YLeaf threshold_notification_enabled; //type: boolean

}; // Inventory::Racks::Rack::Entity::Slot::Tsi1s::Tsi1::Tsi2s::Tsi2::Tsi3s::Tsi3::Tsi4s::Tsi4::Tsi5s::Tsi5::Tsi6s::Tsi6::Tsi7s::Tsi7::Tsi8s::Tsi8::Tsi9s::Tsi9::Tsi10s::Tsi10::Attributes::Threshold::CriticalHi::ThreshBag


class Inventory::Racks::Rack::Entity::Slot::Tsi1s::Tsi1::Tsi2s::Tsi2::Tsi3s::Tsi3::Tsi4s::Tsi4::Tsi5s::Tsi5::Tsi6s::Tsi6::Tsi7s::Tsi7::Tsi8s::Tsi8::Tsi9s::Tsi9::Tsi10s::Tsi10::Attributes::Threshold::MinorHi : public ydk::Entity
{
    public:
        MinorHi();
        ~MinorHi();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class ThreshBag; //type: Inventory::Racks::Rack::Entity::Slot::Tsi1s::Tsi1::Tsi2s::Tsi2::Tsi3s::Tsi3::Tsi4s::Tsi4::Tsi5s::Tsi5::Tsi6s::Tsi6::Tsi7s::Tsi7::Tsi8s::Tsi8::Tsi9s::Tsi9::Tsi10s::Tsi10::Attributes::Threshold::MinorHi::ThreshBag

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_invmgr_oper::Inventory::Racks::Rack::Entity::Slot::Tsi1s::Tsi1::Tsi2s::Tsi2::Tsi3s::Tsi3::Tsi4s::Tsi4::Tsi5s::Tsi5::Tsi6s::Tsi6::Tsi7s::Tsi7::Tsi8s::Tsi8::Tsi9s::Tsi9::Tsi10s::Tsi10::Attributes::Threshold::MinorHi::ThreshBag> thresh_bag;
        
}; // Inventory::Racks::Rack::Entity::Slot::Tsi1s::Tsi1::Tsi2s::Tsi2::Tsi3s::Tsi3::Tsi4s::Tsi4::Tsi5s::Tsi5::Tsi6s::Tsi6::Tsi7s::Tsi7::Tsi8s::Tsi8::Tsi9s::Tsi9::Tsi10s::Tsi10::Attributes::Threshold::MinorHi


class Inventory::Racks::Rack::Entity::Slot::Tsi1s::Tsi1::Tsi2s::Tsi2::Tsi3s::Tsi3::Tsi4s::Tsi4::Tsi5s::Tsi5::Tsi6s::Tsi6::Tsi7s::Tsi7::Tsi8s::Tsi8::Tsi9s::Tsi9::Tsi10s::Tsi10::Attributes::Threshold::MinorHi::ThreshBag : public ydk::Entity
{
    public:
        ThreshBag();
        ~ThreshBag();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf threshold_severity; //type: uint32
        ydk::YLeaf threshold_relation; //type: uint32
        ydk::YLeaf threshold_value; //type: uint32
        ydk::YLeaf threshold_evaluation; //type: boolean
        ydk::YLeaf threshold_notification_enabled; //type: boolean

}; // Inventory::Racks::Rack::Entity::Slot::Tsi1s::Tsi1::Tsi2s::Tsi2::Tsi3s::Tsi3::Tsi4s::Tsi4::Tsi5s::Tsi5::Tsi6s::Tsi6::Tsi7s::Tsi7::Tsi8s::Tsi8::Tsi9s::Tsi9::Tsi10s::Tsi10::Attributes::Threshold::MinorHi::ThreshBag


class Inventory::Racks::Rack::Entity::Slot::Tsi1s::Tsi1::Tsi2s::Tsi2::Tsi3s::Tsi3::Tsi4s::Tsi4::Tsi5s::Tsi5::Tsi6s::Tsi6::Tsi7s::Tsi7::Tsi8s::Tsi8::Tsi9s::Tsi9::Tsi10s::Tsi10::Attributes::Threshold::MajorHi : public ydk::Entity
{
    public:
        MajorHi();
        ~MajorHi();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class ThreshBag; //type: Inventory::Racks::Rack::Entity::Slot::Tsi1s::Tsi1::Tsi2s::Tsi2::Tsi3s::Tsi3::Tsi4s::Tsi4::Tsi5s::Tsi5::Tsi6s::Tsi6::Tsi7s::Tsi7::Tsi8s::Tsi8::Tsi9s::Tsi9::Tsi10s::Tsi10::Attributes::Threshold::MajorHi::ThreshBag

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_invmgr_oper::Inventory::Racks::Rack::Entity::Slot::Tsi1s::Tsi1::Tsi2s::Tsi2::Tsi3s::Tsi3::Tsi4s::Tsi4::Tsi5s::Tsi5::Tsi6s::Tsi6::Tsi7s::Tsi7::Tsi8s::Tsi8::Tsi9s::Tsi9::Tsi10s::Tsi10::Attributes::Threshold::MajorHi::ThreshBag> thresh_bag;
        
}; // Inventory::Racks::Rack::Entity::Slot::Tsi1s::Tsi1::Tsi2s::Tsi2::Tsi3s::Tsi3::Tsi4s::Tsi4::Tsi5s::Tsi5::Tsi6s::Tsi6::Tsi7s::Tsi7::Tsi8s::Tsi8::Tsi9s::Tsi9::Tsi10s::Tsi10::Attributes::Threshold::MajorHi


class Inventory::Racks::Rack::Entity::Slot::Tsi1s::Tsi1::Tsi2s::Tsi2::Tsi3s::Tsi3::Tsi4s::Tsi4::Tsi5s::Tsi5::Tsi6s::Tsi6::Tsi7s::Tsi7::Tsi8s::Tsi8::Tsi9s::Tsi9::Tsi10s::Tsi10::Attributes::Threshold::MajorHi::ThreshBag : public ydk::Entity
{
    public:
        ThreshBag();
        ~ThreshBag();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf threshold_severity; //type: uint32
        ydk::YLeaf threshold_relation; //type: uint32
        ydk::YLeaf threshold_value; //type: uint32
        ydk::YLeaf threshold_evaluation; //type: boolean
        ydk::YLeaf threshold_notification_enabled; //type: boolean

}; // Inventory::Racks::Rack::Entity::Slot::Tsi1s::Tsi1::Tsi2s::Tsi2::Tsi3s::Tsi3::Tsi4s::Tsi4::Tsi5s::Tsi5::Tsi6s::Tsi6::Tsi7s::Tsi7::Tsi8s::Tsi8::Tsi9s::Tsi9::Tsi10s::Tsi10::Attributes::Threshold::MajorHi::ThreshBag


class Inventory::Racks::Rack::Entity::Slot::Tsi1s::Tsi1::Tsi2s::Tsi2::Tsi3s::Tsi3::Tsi4s::Tsi4::Tsi5s::Tsi5::Tsi6s::Tsi6::Tsi7s::Tsi7::Tsi8s::Tsi8::Tsi9s::Tsi9::Tsi10s::Tsi10::Attributes::Threshold::CriticalLo : public ydk::Entity
{
    public:
        CriticalLo();
        ~CriticalLo();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class ThreshBag; //type: Inventory::Racks::Rack::Entity::Slot::Tsi1s::Tsi1::Tsi2s::Tsi2::Tsi3s::Tsi3::Tsi4s::Tsi4::Tsi5s::Tsi5::Tsi6s::Tsi6::Tsi7s::Tsi7::Tsi8s::Tsi8::Tsi9s::Tsi9::Tsi10s::Tsi10::Attributes::Threshold::CriticalLo::ThreshBag

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_invmgr_oper::Inventory::Racks::Rack::Entity::Slot::Tsi1s::Tsi1::Tsi2s::Tsi2::Tsi3s::Tsi3::Tsi4s::Tsi4::Tsi5s::Tsi5::Tsi6s::Tsi6::Tsi7s::Tsi7::Tsi8s::Tsi8::Tsi9s::Tsi9::Tsi10s::Tsi10::Attributes::Threshold::CriticalLo::ThreshBag> thresh_bag;
        
}; // Inventory::Racks::Rack::Entity::Slot::Tsi1s::Tsi1::Tsi2s::Tsi2::Tsi3s::Tsi3::Tsi4s::Tsi4::Tsi5s::Tsi5::Tsi6s::Tsi6::Tsi7s::Tsi7::Tsi8s::Tsi8::Tsi9s::Tsi9::Tsi10s::Tsi10::Attributes::Threshold::CriticalLo


class Inventory::Racks::Rack::Entity::Slot::Tsi1s::Tsi1::Tsi2s::Tsi2::Tsi3s::Tsi3::Tsi4s::Tsi4::Tsi5s::Tsi5::Tsi6s::Tsi6::Tsi7s::Tsi7::Tsi8s::Tsi8::Tsi9s::Tsi9::Tsi10s::Tsi10::Attributes::Threshold::CriticalLo::ThreshBag : public ydk::Entity
{
    public:
        ThreshBag();
        ~ThreshBag();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf threshold_severity; //type: uint32
        ydk::YLeaf threshold_relation; //type: uint32
        ydk::YLeaf threshold_value; //type: uint32
        ydk::YLeaf threshold_evaluation; //type: boolean
        ydk::YLeaf threshold_notification_enabled; //type: boolean

}; // Inventory::Racks::Rack::Entity::Slot::Tsi1s::Tsi1::Tsi2s::Tsi2::Tsi3s::Tsi3::Tsi4s::Tsi4::Tsi5s::Tsi5::Tsi6s::Tsi6::Tsi7s::Tsi7::Tsi8s::Tsi8::Tsi9s::Tsi9::Tsi10s::Tsi10::Attributes::Threshold::CriticalLo::ThreshBag


class Inventory::Racks::Rack::Entity::Slot::Tsi1s::Tsi1::Tsi2s::Tsi2::Tsi3s::Tsi3::Tsi4s::Tsi4::Tsi5s::Tsi5::Tsi6s::Tsi6::Tsi7s::Tsi7::Tsi8s::Tsi8::Tsi9s::Tsi9::Tsi10s::Tsi10::Attributes::Threshold::MinorLo : public ydk::Entity
{
    public:
        MinorLo();
        ~MinorLo();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class ThreshBag; //type: Inventory::Racks::Rack::Entity::Slot::Tsi1s::Tsi1::Tsi2s::Tsi2::Tsi3s::Tsi3::Tsi4s::Tsi4::Tsi5s::Tsi5::Tsi6s::Tsi6::Tsi7s::Tsi7::Tsi8s::Tsi8::Tsi9s::Tsi9::Tsi10s::Tsi10::Attributes::Threshold::MinorLo::ThreshBag

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_invmgr_oper::Inventory::Racks::Rack::Entity::Slot::Tsi1s::Tsi1::Tsi2s::Tsi2::Tsi3s::Tsi3::Tsi4s::Tsi4::Tsi5s::Tsi5::Tsi6s::Tsi6::Tsi7s::Tsi7::Tsi8s::Tsi8::Tsi9s::Tsi9::Tsi10s::Tsi10::Attributes::Threshold::MinorLo::ThreshBag> thresh_bag;
        
}; // Inventory::Racks::Rack::Entity::Slot::Tsi1s::Tsi1::Tsi2s::Tsi2::Tsi3s::Tsi3::Tsi4s::Tsi4::Tsi5s::Tsi5::Tsi6s::Tsi6::Tsi7s::Tsi7::Tsi8s::Tsi8::Tsi9s::Tsi9::Tsi10s::Tsi10::Attributes::Threshold::MinorLo


class Inventory::Racks::Rack::Entity::Slot::Tsi1s::Tsi1::Tsi2s::Tsi2::Tsi3s::Tsi3::Tsi4s::Tsi4::Tsi5s::Tsi5::Tsi6s::Tsi6::Tsi7s::Tsi7::Tsi8s::Tsi8::Tsi9s::Tsi9::Tsi10s::Tsi10::Attributes::Threshold::MinorLo::ThreshBag : public ydk::Entity
{
    public:
        ThreshBag();
        ~ThreshBag();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf threshold_severity; //type: uint32
        ydk::YLeaf threshold_relation; //type: uint32
        ydk::YLeaf threshold_value; //type: uint32
        ydk::YLeaf threshold_evaluation; //type: boolean
        ydk::YLeaf threshold_notification_enabled; //type: boolean

}; // Inventory::Racks::Rack::Entity::Slot::Tsi1s::Tsi1::Tsi2s::Tsi2::Tsi3s::Tsi3::Tsi4s::Tsi4::Tsi5s::Tsi5::Tsi6s::Tsi6::Tsi7s::Tsi7::Tsi8s::Tsi8::Tsi9s::Tsi9::Tsi10s::Tsi10::Attributes::Threshold::MinorLo::ThreshBag


class Inventory::Racks::Rack::Entity::Slot::Tsi1s::Tsi1::Tsi2s::Tsi2::Tsi3s::Tsi3::Tsi4s::Tsi4::Tsi5s::Tsi5::Tsi6s::Tsi6::Tsi7s::Tsi7::Tsi8s::Tsi8::Tsi9s::Tsi9::Tsi10s::Tsi10::Attributes::FruInfo : public ydk::Entity
{
    public:
        FruInfo();
        ~FruInfo();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf card_administrative_state; //type: int32
        ydk::YLeaf power_administrative_state; //type: int32
        ydk::YLeaf card_operational_state; //type: int32
        ydk::YLeaf card_monitor_state; //type: int32
        ydk::YLeaf card_reset_reason; //type: CardResetReason
        ydk::YLeaf power_current_measurement; //type: int32
        ydk::YLeaf power_operational_state; //type: int32
        class LastOperationalStateChange; //type: Inventory::Racks::Rack::Entity::Slot::Tsi1s::Tsi1::Tsi2s::Tsi2::Tsi3s::Tsi3::Tsi4s::Tsi4::Tsi5s::Tsi5::Tsi6s::Tsi6::Tsi7s::Tsi7::Tsi8s::Tsi8::Tsi9s::Tsi9::Tsi10s::Tsi10::Attributes::FruInfo::LastOperationalStateChange
        class CardUpTime; //type: Inventory::Racks::Rack::Entity::Slot::Tsi1s::Tsi1::Tsi2s::Tsi2::Tsi3s::Tsi3::Tsi4s::Tsi4::Tsi5s::Tsi5::Tsi6s::Tsi6::Tsi7s::Tsi7::Tsi8s::Tsi8::Tsi9s::Tsi9::Tsi10s::Tsi10::Attributes::FruInfo::CardUpTime

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_invmgr_oper::Inventory::Racks::Rack::Entity::Slot::Tsi1s::Tsi1::Tsi2s::Tsi2::Tsi3s::Tsi3::Tsi4s::Tsi4::Tsi5s::Tsi5::Tsi6s::Tsi6::Tsi7s::Tsi7::Tsi8s::Tsi8::Tsi9s::Tsi9::Tsi10s::Tsi10::Attributes::FruInfo::LastOperationalStateChange> last_operational_state_change;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_invmgr_oper::Inventory::Racks::Rack::Entity::Slot::Tsi1s::Tsi1::Tsi2s::Tsi2::Tsi3s::Tsi3::Tsi4s::Tsi4::Tsi5s::Tsi5::Tsi6s::Tsi6::Tsi7s::Tsi7::Tsi8s::Tsi8::Tsi9s::Tsi9::Tsi10s::Tsi10::Attributes::FruInfo::CardUpTime> card_up_time;
        
}; // Inventory::Racks::Rack::Entity::Slot::Tsi1s::Tsi1::Tsi2s::Tsi2::Tsi3s::Tsi3::Tsi4s::Tsi4::Tsi5s::Tsi5::Tsi6s::Tsi6::Tsi7s::Tsi7::Tsi8s::Tsi8::Tsi9s::Tsi9::Tsi10s::Tsi10::Attributes::FruInfo


class Inventory::Racks::Rack::Entity::Slot::Tsi1s::Tsi1::Tsi2s::Tsi2::Tsi3s::Tsi3::Tsi4s::Tsi4::Tsi5s::Tsi5::Tsi6s::Tsi6::Tsi7s::Tsi7::Tsi8s::Tsi8::Tsi9s::Tsi9::Tsi10s::Tsi10::Attributes::FruInfo::LastOperationalStateChange : public ydk::Entity
{
    public:
        LastOperationalStateChange();
        ~LastOperationalStateChange();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf time_in_seconds; //type: int32
        ydk::YLeaf time_in_nano_seconds; //type: int32

}; // Inventory::Racks::Rack::Entity::Slot::Tsi1s::Tsi1::Tsi2s::Tsi2::Tsi3s::Tsi3::Tsi4s::Tsi4::Tsi5s::Tsi5::Tsi6s::Tsi6::Tsi7s::Tsi7::Tsi8s::Tsi8::Tsi9s::Tsi9::Tsi10s::Tsi10::Attributes::FruInfo::LastOperationalStateChange


class Inventory::Racks::Rack::Entity::Slot::Tsi1s::Tsi1::Tsi2s::Tsi2::Tsi3s::Tsi3::Tsi4s::Tsi4::Tsi5s::Tsi5::Tsi6s::Tsi6::Tsi7s::Tsi7::Tsi8s::Tsi8::Tsi9s::Tsi9::Tsi10s::Tsi10::Attributes::FruInfo::CardUpTime : public ydk::Entity
{
    public:
        CardUpTime();
        ~CardUpTime();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf time_in_seconds; //type: int32
        ydk::YLeaf time_in_nano_seconds; //type: int32

}; // Inventory::Racks::Rack::Entity::Slot::Tsi1s::Tsi1::Tsi2s::Tsi2::Tsi3s::Tsi3::Tsi4s::Tsi4::Tsi5s::Tsi5::Tsi6s::Tsi6::Tsi7s::Tsi7::Tsi8s::Tsi8::Tsi9s::Tsi9::Tsi10s::Tsi10::Attributes::FruInfo::CardUpTime


class Inventory::Racks::Rack::Entity::Slot::Tsi1s::Tsi1::Tsi2s::Tsi2::Tsi3s::Tsi3::Tsi4s::Tsi4::Tsi5s::Tsi5::Tsi6s::Tsi6::Tsi7s::Tsi7::Tsi8s::Tsi8::Tsi9s::Tsi9::Tsi10s::Tsi10::Attributes::InvEepromInfo : public ydk::Entity
{
    public:
        InvEepromInfo();
        ~InvEepromInfo();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf inv_card_type; //type: uint8
        ydk::YLeaf opaque_data; //type: string
        ydk::YLeaf opaque_data_size; //type: uint32
        ydk::YLeaf has_eeprom; //type: uint32
        ydk::YLeaf description; //type: string
        class Eeprom; //type: Inventory::Racks::Rack::Entity::Slot::Tsi1s::Tsi1::Tsi2s::Tsi2::Tsi3s::Tsi3::Tsi4s::Tsi4::Tsi5s::Tsi5::Tsi6s::Tsi6::Tsi7s::Tsi7::Tsi8s::Tsi8::Tsi9s::Tsi9::Tsi10s::Tsi10::Attributes::InvEepromInfo::Eeprom

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_invmgr_oper::Inventory::Racks::Rack::Entity::Slot::Tsi1s::Tsi1::Tsi2s::Tsi2::Tsi3s::Tsi3::Tsi4s::Tsi4::Tsi5s::Tsi5::Tsi6s::Tsi6::Tsi7s::Tsi7::Tsi8s::Tsi8::Tsi9s::Tsi9::Tsi10s::Tsi10::Attributes::InvEepromInfo::Eeprom> eeprom;
        
}; // Inventory::Racks::Rack::Entity::Slot::Tsi1s::Tsi1::Tsi2s::Tsi2::Tsi3s::Tsi3::Tsi4s::Tsi4::Tsi5s::Tsi5::Tsi6s::Tsi6::Tsi7s::Tsi7::Tsi8s::Tsi8::Tsi9s::Tsi9::Tsi10s::Tsi10::Attributes::InvEepromInfo


class Inventory::Racks::Rack::Entity::Slot::Tsi1s::Tsi1::Tsi2s::Tsi2::Tsi3s::Tsi3::Tsi4s::Tsi4::Tsi5s::Tsi5::Tsi6s::Tsi6::Tsi7s::Tsi7::Tsi8s::Tsi8::Tsi9s::Tsi9::Tsi10s::Tsi10::Attributes::InvEepromInfo::Eeprom : public ydk::Entity
{
    public:
        Eeprom();
        ~Eeprom();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf description; //type: string
        ydk::YLeaf idprom_format_rev; //type: string
        ydk::YLeaf controller_family; //type: string
        ydk::YLeaf controller_type; //type: string
        ydk::YLeaf vid; //type: string
        ydk::YLeaf hwid; //type: string
        ydk::YLeaf pid; //type: string
        ydk::YLeaf udi_description; //type: string
        ydk::YLeaf udi_name; //type: string
        ydk::YLeaf clei; //type: string
        ydk::YLeaf eci; //type: string
        ydk::YLeaf top_assem_part_num; //type: string
        ydk::YLeaf top_assem_vid; //type: string
        ydk::YLeaf pca_num; //type: string
        ydk::YLeaf pcavid; //type: string
        ydk::YLeaf chassis_sid; //type: string
        ydk::YLeaf dev_num1; //type: string
        ydk::YLeaf dev_num2; //type: string
        ydk::YLeaf dev_num3; //type: string
        ydk::YLeaf dev_num4; //type: string
        ydk::YLeaf dev_num5; //type: string
        ydk::YLeaf dev_num6; //type: string
        ydk::YLeaf dev_num7; //type: string
        ydk::YLeaf manu_test_data; //type: string
        ydk::YLeaf asset_id; //type: string
        ydk::YLeaf asset_alias; //type: string
        ydk::YLeaf base_mac_address1; //type: string
        ydk::YLeaf mac_add_blk_size1; //type: string
        ydk::YLeaf base_mac_address2; //type: string
        ydk::YLeaf mac_add_blk_size2; //type: string
        ydk::YLeaf base_mac_address3; //type: string
        ydk::YLeaf mac_add_blk_size3; //type: string
        ydk::YLeaf base_mac_address4; //type: string
        ydk::YLeaf mac_add_blk_size4; //type: string
        ydk::YLeaf pcb_serial_num; //type: string
        ydk::YLeaf power_supply_type; //type: string
        ydk::YLeaf power_consumption; //type: string
        ydk::YLeaf block_signature; //type: string
        ydk::YLeaf block_version; //type: string
        ydk::YLeaf block_length; //type: string
        ydk::YLeaf block_checksum; //type: string
        ydk::YLeaf eeprom_size; //type: string
        ydk::YLeaf block_count; //type: string
        ydk::YLeaf fru_major_type; //type: string
        ydk::YLeaf fru_minor_type; //type: string
        ydk::YLeaf oem_string; //type: string
        ydk::YLeaf product_id; //type: string
        ydk::YLeaf serial_number; //type: string
        ydk::YLeaf part_number; //type: string
        ydk::YLeaf part_revision; //type: string
        ydk::YLeaf mfg_deviation; //type: string
        ydk::YLeaf hw_version; //type: string
        ydk::YLeaf mfg_bits; //type: string
        ydk::YLeaf engineer_use; //type: string
        ydk::YLeaf snmpoid; //type: string
        ydk::YLeaf rma_code; //type: string
        class Rma; //type: Inventory::Racks::Rack::Entity::Slot::Tsi1s::Tsi1::Tsi2s::Tsi2::Tsi3s::Tsi3::Tsi4s::Tsi4::Tsi5s::Tsi5::Tsi6s::Tsi6::Tsi7s::Tsi7::Tsi8s::Tsi8::Tsi9s::Tsi9::Tsi10s::Tsi10::Attributes::InvEepromInfo::Eeprom::Rma

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_invmgr_oper::Inventory::Racks::Rack::Entity::Slot::Tsi1s::Tsi1::Tsi2s::Tsi2::Tsi3s::Tsi3::Tsi4s::Tsi4::Tsi5s::Tsi5::Tsi6s::Tsi6::Tsi7s::Tsi7::Tsi8s::Tsi8::Tsi9s::Tsi9::Tsi10s::Tsi10::Attributes::InvEepromInfo::Eeprom::Rma> rma;
        
}; // Inventory::Racks::Rack::Entity::Slot::Tsi1s::Tsi1::Tsi2s::Tsi2::Tsi3s::Tsi3::Tsi4s::Tsi4::Tsi5s::Tsi5::Tsi6s::Tsi6::Tsi7s::Tsi7::Tsi8s::Tsi8::Tsi9s::Tsi9::Tsi10s::Tsi10::Attributes::InvEepromInfo::Eeprom


class Inventory::Racks::Rack::Entity::Slot::Tsi1s::Tsi1::Tsi2s::Tsi2::Tsi3s::Tsi3::Tsi4s::Tsi4::Tsi5s::Tsi5::Tsi6s::Tsi6::Tsi7s::Tsi7::Tsi8s::Tsi8::Tsi9s::Tsi9::Tsi10s::Tsi10::Attributes::InvEepromInfo::Eeprom::Rma : public ydk::Entity
{
    public:
        Rma();
        ~Rma();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf test_history; //type: string
        ydk::YLeaf rma_number; //type: string
        ydk::YLeaf rma_history; //type: string

}; // Inventory::Racks::Rack::Entity::Slot::Tsi1s::Tsi1::Tsi2s::Tsi2::Tsi3s::Tsi3::Tsi4s::Tsi4::Tsi5s::Tsi5::Tsi6s::Tsi6::Tsi7s::Tsi7::Tsi8s::Tsi8::Tsi9s::Tsi9::Tsi10s::Tsi10::Attributes::InvEepromInfo::Eeprom::Rma


class Inventory::Racks::Rack::Entity::Slot::Tsi1s::Tsi1::Tsi2s::Tsi2::Tsi3s::Tsi3::Tsi4s::Tsi4::Tsi5s::Tsi5::Tsi6s::Tsi6::Tsi7s::Tsi7::Tsi8s::Tsi8::Tsi9s::Tsi9::Attributes : public ydk::Entity
{
    public:
        Attributes();
        ~Attributes();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class InvBasicBag; //type: Inventory::Racks::Rack::Entity::Slot::Tsi1s::Tsi1::Tsi2s::Tsi2::Tsi3s::Tsi3::Tsi4s::Tsi4::Tsi5s::Tsi5::Tsi6s::Tsi6::Tsi7s::Tsi7::Tsi8s::Tsi8::Tsi9s::Tsi9::Attributes::InvBasicBag
        class EnvSensorInfo; //type: Inventory::Racks::Rack::Entity::Slot::Tsi1s::Tsi1::Tsi2s::Tsi2::Tsi3s::Tsi3::Tsi4s::Tsi4::Tsi5s::Tsi5::Tsi6s::Tsi6::Tsi7s::Tsi7::Tsi8s::Tsi8::Tsi9s::Tsi9::Attributes::EnvSensorInfo
        class PwgInfo; //type: Inventory::Racks::Rack::Entity::Slot::Tsi1s::Tsi1::Tsi2s::Tsi2::Tsi3s::Tsi3::Tsi4s::Tsi4::Tsi5s::Tsi5::Tsi6s::Tsi6::Tsi7s::Tsi7::Tsi8s::Tsi8::Tsi9s::Tsi9::Attributes::PwgInfo
        class EnvSensorInfoXml; //type: Inventory::Racks::Rack::Entity::Slot::Tsi1s::Tsi1::Tsi2s::Tsi2::Tsi3s::Tsi3::Tsi4s::Tsi4::Tsi5s::Tsi5::Tsi6s::Tsi6::Tsi7s::Tsi7::Tsi8s::Tsi8::Tsi9s::Tsi9::Attributes::EnvSensorInfoXml
        class InvAssetBag; //type: Inventory::Racks::Rack::Entity::Slot::Tsi1s::Tsi1::Tsi2s::Tsi2::Tsi3s::Tsi3::Tsi4s::Tsi4::Tsi5s::Tsi5::Tsi6s::Tsi6::Tsi7s::Tsi7::Tsi8s::Tsi8::Tsi9s::Tsi9::Attributes::InvAssetBag
        class Threshold; //type: Inventory::Racks::Rack::Entity::Slot::Tsi1s::Tsi1::Tsi2s::Tsi2::Tsi3s::Tsi3::Tsi4s::Tsi4::Tsi5s::Tsi5::Tsi6s::Tsi6::Tsi7s::Tsi7::Tsi8s::Tsi8::Tsi9s::Tsi9::Attributes::Threshold
        class FruInfo; //type: Inventory::Racks::Rack::Entity::Slot::Tsi1s::Tsi1::Tsi2s::Tsi2::Tsi3s::Tsi3::Tsi4s::Tsi4::Tsi5s::Tsi5::Tsi6s::Tsi6::Tsi7s::Tsi7::Tsi8s::Tsi8::Tsi9s::Tsi9::Attributes::FruInfo
        class InvEepromInfo; //type: Inventory::Racks::Rack::Entity::Slot::Tsi1s::Tsi1::Tsi2s::Tsi2::Tsi3s::Tsi3::Tsi4s::Tsi4::Tsi5s::Tsi5::Tsi6s::Tsi6::Tsi7s::Tsi7::Tsi8s::Tsi8::Tsi9s::Tsi9::Attributes::InvEepromInfo

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_invmgr_oper::Inventory::Racks::Rack::Entity::Slot::Tsi1s::Tsi1::Tsi2s::Tsi2::Tsi3s::Tsi3::Tsi4s::Tsi4::Tsi5s::Tsi5::Tsi6s::Tsi6::Tsi7s::Tsi7::Tsi8s::Tsi8::Tsi9s::Tsi9::Attributes::InvBasicBag> inv_basic_bag;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_invmgr_oper::Inventory::Racks::Rack::Entity::Slot::Tsi1s::Tsi1::Tsi2s::Tsi2::Tsi3s::Tsi3::Tsi4s::Tsi4::Tsi5s::Tsi5::Tsi6s::Tsi6::Tsi7s::Tsi7::Tsi8s::Tsi8::Tsi9s::Tsi9::Attributes::EnvSensorInfo> env_sensor_info;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_invmgr_oper::Inventory::Racks::Rack::Entity::Slot::Tsi1s::Tsi1::Tsi2s::Tsi2::Tsi3s::Tsi3::Tsi4s::Tsi4::Tsi5s::Tsi5::Tsi6s::Tsi6::Tsi7s::Tsi7::Tsi8s::Tsi8::Tsi9s::Tsi9::Attributes::PwgInfo> pwg_info;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_invmgr_oper::Inventory::Racks::Rack::Entity::Slot::Tsi1s::Tsi1::Tsi2s::Tsi2::Tsi3s::Tsi3::Tsi4s::Tsi4::Tsi5s::Tsi5::Tsi6s::Tsi6::Tsi7s::Tsi7::Tsi8s::Tsi8::Tsi9s::Tsi9::Attributes::EnvSensorInfoXml> env_sensor_info_xml;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_invmgr_oper::Inventory::Racks::Rack::Entity::Slot::Tsi1s::Tsi1::Tsi2s::Tsi2::Tsi3s::Tsi3::Tsi4s::Tsi4::Tsi5s::Tsi5::Tsi6s::Tsi6::Tsi7s::Tsi7::Tsi8s::Tsi8::Tsi9s::Tsi9::Attributes::InvAssetBag> inv_asset_bag;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_invmgr_oper::Inventory::Racks::Rack::Entity::Slot::Tsi1s::Tsi1::Tsi2s::Tsi2::Tsi3s::Tsi3::Tsi4s::Tsi4::Tsi5s::Tsi5::Tsi6s::Tsi6::Tsi7s::Tsi7::Tsi8s::Tsi8::Tsi9s::Tsi9::Attributes::Threshold> threshold;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_invmgr_oper::Inventory::Racks::Rack::Entity::Slot::Tsi1s::Tsi1::Tsi2s::Tsi2::Tsi3s::Tsi3::Tsi4s::Tsi4::Tsi5s::Tsi5::Tsi6s::Tsi6::Tsi7s::Tsi7::Tsi8s::Tsi8::Tsi9s::Tsi9::Attributes::FruInfo> fru_info;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_invmgr_oper::Inventory::Racks::Rack::Entity::Slot::Tsi1s::Tsi1::Tsi2s::Tsi2::Tsi3s::Tsi3::Tsi4s::Tsi4::Tsi5s::Tsi5::Tsi6s::Tsi6::Tsi7s::Tsi7::Tsi8s::Tsi8::Tsi9s::Tsi9::Attributes::InvEepromInfo> inv_eeprom_info;
        
}; // Inventory::Racks::Rack::Entity::Slot::Tsi1s::Tsi1::Tsi2s::Tsi2::Tsi3s::Tsi3::Tsi4s::Tsi4::Tsi5s::Tsi5::Tsi6s::Tsi6::Tsi7s::Tsi7::Tsi8s::Tsi8::Tsi9s::Tsi9::Attributes


class Inventory::Racks::Rack::Entity::Slot::Tsi1s::Tsi1::Tsi2s::Tsi2::Tsi3s::Tsi3::Tsi4s::Tsi4::Tsi5s::Tsi5::Tsi6s::Tsi6::Tsi7s::Tsi7::Tsi8s::Tsi8::Tsi9s::Tsi9::Attributes::InvBasicBag : public ydk::Entity
{
    public:
        InvBasicBag();
        ~InvBasicBag();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf description; //type: string
        ydk::YLeaf vendor_type; //type: string
        ydk::YLeaf name; //type: string
        ydk::YLeaf hardware_revision; //type: string
        ydk::YLeaf firmware_revision; //type: string
        ydk::YLeaf software_revision; //type: string
        ydk::YLeaf chip_hardware_revision; //type: string
        ydk::YLeaf serial_number; //type: string
        ydk::YLeaf manufacturer_name; //type: string
        ydk::YLeaf model_name; //type: string
        ydk::YLeaf asset_id_str; //type: string
        ydk::YLeaf asset_identification; //type: int32
        ydk::YLeaf is_field_replaceable_unit; //type: boolean
        ydk::YLeaf manufacturer_asset_tags; //type: int32
        ydk::YLeaf composite_class_code; //type: int32
        ydk::YLeaf memory_size; //type: int32
        ydk::YLeaf environmental_monitor_path; //type: string
        ydk::YLeaf alias; //type: string
        ydk::YLeaf group_flag; //type: boolean
        ydk::YLeaf new_deviation_number; //type: int32
        ydk::YLeaf physical_layer_interface_module_type; //type: int32
        ydk::YLeaf unrecognized_fru; //type: boolean
        ydk::YLeaf redundancystate; //type: int32
        ydk::YLeaf ceport; //type: boolean
        ydk::YLeaf xr_scoped; //type: boolean
        ydk::YLeaf unique_id; //type: int32

}; // Inventory::Racks::Rack::Entity::Slot::Tsi1s::Tsi1::Tsi2s::Tsi2::Tsi3s::Tsi3::Tsi4s::Tsi4::Tsi5s::Tsi5::Tsi6s::Tsi6::Tsi7s::Tsi7::Tsi8s::Tsi8::Tsi9s::Tsi9::Attributes::InvBasicBag


class Inventory::Racks::Rack::Entity::Slot::Tsi1s::Tsi1::Tsi2s::Tsi2::Tsi3s::Tsi3::Tsi4s::Tsi4::Tsi5s::Tsi5::Tsi6s::Tsi6::Tsi7s::Tsi7::Tsi8s::Tsi8::Tsi9s::Tsi9::Attributes::EnvSensorInfo : public ydk::Entity
{
    public:
        EnvSensorInfo();
        ~EnvSensorInfo();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf field_validity_bitmap; //type: uint32
        ydk::YLeaf device_description; //type: string
        ydk::YLeaf units; //type: string
        ydk::YLeaf device_id; //type: uint32
        ydk::YLeaf value_; //type: uint32
        ydk::YLeaf alarm_type; //type: uint32
        ydk::YLeaf data_type; //type: uint32
        ydk::YLeaf scale; //type: uint32
        ydk::YLeaf precision; //type: uint32
        ydk::YLeaf status; //type: uint32
        ydk::YLeaf age_time_stamp; //type: uint32
        ydk::YLeaf update_rate; //type: uint32

}; // Inventory::Racks::Rack::Entity::Slot::Tsi1s::Tsi1::Tsi2s::Tsi2::Tsi3s::Tsi3::Tsi4s::Tsi4::Tsi5s::Tsi5::Tsi6s::Tsi6::Tsi7s::Tsi7::Tsi8s::Tsi8::Tsi9s::Tsi9::Attributes::EnvSensorInfo


class Inventory::Racks::Rack::Entity::Slot::Tsi1s::Tsi1::Tsi2s::Tsi2::Tsi3s::Tsi3::Tsi4s::Tsi4::Tsi5s::Tsi5::Tsi6s::Tsi6::Tsi7s::Tsi7::Tsi8s::Tsi8::Tsi9s::Tsi9::Attributes::PwgInfo : public ydk::Entity
{
    public:
        PwgInfo();
        ~PwgInfo();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf power_group_redundancy_mode; //type: int32
        ydk::YLeaf power_group_power_units; //type: string
        ydk::YLeaf power_group_available_current; //type: int32
        ydk::YLeaf power_group_drawn_current; //type: int32

}; // Inventory::Racks::Rack::Entity::Slot::Tsi1s::Tsi1::Tsi2s::Tsi2::Tsi3s::Tsi3::Tsi4s::Tsi4::Tsi5s::Tsi5::Tsi6s::Tsi6::Tsi7s::Tsi7::Tsi8s::Tsi8::Tsi9s::Tsi9::Attributes::PwgInfo


class Inventory::Racks::Rack::Entity::Slot::Tsi1s::Tsi1::Tsi2s::Tsi2::Tsi3s::Tsi3::Tsi4s::Tsi4::Tsi5s::Tsi5::Tsi6s::Tsi6::Tsi7s::Tsi7::Tsi8s::Tsi8::Tsi9s::Tsi9::Attributes::EnvSensorInfoXml : public ydk::Entity
{
    public:
        EnvSensorInfoXml();
        ~EnvSensorInfoXml();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf description; //type: string
        ydk::YLeaf units; //type: Unit
        ydk::YLeaf value_; //type: string
        ydk::YLeaf data_type; //type: SensorData
        ydk::YLeaf status; //type: SensorStatus
        ydk::YLeaf update_rate; //type: uint32
        class Threshold; //type: Inventory::Racks::Rack::Entity::Slot::Tsi1s::Tsi1::Tsi2s::Tsi2::Tsi3s::Tsi3::Tsi4s::Tsi4::Tsi5s::Tsi5::Tsi6s::Tsi6::Tsi7s::Tsi7::Tsi8s::Tsi8::Tsi9s::Tsi9::Attributes::EnvSensorInfoXml::Threshold

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_invmgr_oper::Inventory::Racks::Rack::Entity::Slot::Tsi1s::Tsi1::Tsi2s::Tsi2::Tsi3s::Tsi3::Tsi4s::Tsi4::Tsi5s::Tsi5::Tsi6s::Tsi6::Tsi7s::Tsi7::Tsi8s::Tsi8::Tsi9s::Tsi9::Attributes::EnvSensorInfoXml::Threshold> threshold;
        
}; // Inventory::Racks::Rack::Entity::Slot::Tsi1s::Tsi1::Tsi2s::Tsi2::Tsi3s::Tsi3::Tsi4s::Tsi4::Tsi5s::Tsi5::Tsi6s::Tsi6::Tsi7s::Tsi7::Tsi8s::Tsi8::Tsi9s::Tsi9::Attributes::EnvSensorInfoXml


class Inventory::Racks::Rack::Entity::Slot::Tsi1s::Tsi1::Tsi2s::Tsi2::Tsi3s::Tsi3::Tsi4s::Tsi4::Tsi5s::Tsi5::Tsi6s::Tsi6::Tsi7s::Tsi7::Tsi8s::Tsi8::Tsi9s::Tsi9::Attributes::EnvSensorInfoXml::Threshold : public ydk::Entity
{
    public:
        Threshold();
        ~Threshold();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class ThresholdArray; //type: Inventory::Racks::Rack::Entity::Slot::Tsi1s::Tsi1::Tsi2s::Tsi2::Tsi3s::Tsi3::Tsi4s::Tsi4::Tsi5s::Tsi5::Tsi6s::Tsi6::Tsi7s::Tsi7::Tsi8s::Tsi8::Tsi9s::Tsi9::Attributes::EnvSensorInfoXml::Threshold::ThresholdArray

        ydk::YList threshold_array;
        
}; // Inventory::Racks::Rack::Entity::Slot::Tsi1s::Tsi1::Tsi2s::Tsi2::Tsi3s::Tsi3::Tsi4s::Tsi4::Tsi5s::Tsi5::Tsi6s::Tsi6::Tsi7s::Tsi7::Tsi8s::Tsi8::Tsi9s::Tsi9::Attributes::EnvSensorInfoXml::Threshold


class Inventory::Racks::Rack::Entity::Slot::Tsi1s::Tsi1::Tsi2s::Tsi2::Tsi3s::Tsi3::Tsi4s::Tsi4::Tsi5s::Tsi5::Tsi6s::Tsi6::Tsi7s::Tsi7::Tsi8s::Tsi8::Tsi9s::Tsi9::Attributes::EnvSensorInfoXml::Threshold::ThresholdArray : public ydk::Entity
{
    public:
        ThresholdArray();
        ~ThresholdArray();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf threshold_severity; //type: ThresholdSeverity
        ydk::YLeaf threshold_relation; //type: ThresholdRelation
        ydk::YLeaf threshold_value; //type: int32
        ydk::YLeaf threshold_name; //type: string

}; // Inventory::Racks::Rack::Entity::Slot::Tsi1s::Tsi1::Tsi2s::Tsi2::Tsi3s::Tsi3::Tsi4s::Tsi4::Tsi5s::Tsi5::Tsi6s::Tsi6::Tsi7s::Tsi7::Tsi8s::Tsi8::Tsi9s::Tsi9::Attributes::EnvSensorInfoXml::Threshold::ThresholdArray


class Inventory::Racks::Rack::Entity::Slot::Tsi1s::Tsi1::Tsi2s::Tsi2::Tsi3s::Tsi3::Tsi4s::Tsi4::Tsi5s::Tsi5::Tsi6s::Tsi6::Tsi7s::Tsi7::Tsi8s::Tsi8::Tsi9s::Tsi9::Attributes::InvAssetBag : public ydk::Entity
{
    public:
        InvAssetBag();
        ~InvAssetBag();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf part_number; //type: string
        ydk::YLeaf manufacturer_assembly_number; //type: string
        ydk::YLeaf manufacturer_assembly_revision; //type: string
        ydk::YLeaf manufacturer_firmware_identifier; //type: string
        ydk::YLeaf manufacturer_software_identifier; //type: string
        ydk::YLeaf manufacturer_common_language_equipment_identifier; //type: string
        ydk::YLeaf original_equipment_manufacturer_string; //type: string

}; // Inventory::Racks::Rack::Entity::Slot::Tsi1s::Tsi1::Tsi2s::Tsi2::Tsi3s::Tsi3::Tsi4s::Tsi4::Tsi5s::Tsi5::Tsi6s::Tsi6::Tsi7s::Tsi7::Tsi8s::Tsi8::Tsi9s::Tsi9::Attributes::InvAssetBag


class Inventory::Racks::Rack::Entity::Slot::Tsi1s::Tsi1::Tsi2s::Tsi2::Tsi3s::Tsi3::Tsi4s::Tsi4::Tsi5s::Tsi5::Tsi6s::Tsi6::Tsi7s::Tsi7::Tsi8s::Tsi8::Tsi9s::Tsi9::Attributes::Threshold : public ydk::Entity
{
    public:
        Threshold();
        ~Threshold();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class MajorLo; //type: Inventory::Racks::Rack::Entity::Slot::Tsi1s::Tsi1::Tsi2s::Tsi2::Tsi3s::Tsi3::Tsi4s::Tsi4::Tsi5s::Tsi5::Tsi6s::Tsi6::Tsi7s::Tsi7::Tsi8s::Tsi8::Tsi9s::Tsi9::Attributes::Threshold::MajorLo
        class CriticalHi; //type: Inventory::Racks::Rack::Entity::Slot::Tsi1s::Tsi1::Tsi2s::Tsi2::Tsi3s::Tsi3::Tsi4s::Tsi4::Tsi5s::Tsi5::Tsi6s::Tsi6::Tsi7s::Tsi7::Tsi8s::Tsi8::Tsi9s::Tsi9::Attributes::Threshold::CriticalHi
        class MinorHi; //type: Inventory::Racks::Rack::Entity::Slot::Tsi1s::Tsi1::Tsi2s::Tsi2::Tsi3s::Tsi3::Tsi4s::Tsi4::Tsi5s::Tsi5::Tsi6s::Tsi6::Tsi7s::Tsi7::Tsi8s::Tsi8::Tsi9s::Tsi9::Attributes::Threshold::MinorHi
        class MajorHi; //type: Inventory::Racks::Rack::Entity::Slot::Tsi1s::Tsi1::Tsi2s::Tsi2::Tsi3s::Tsi3::Tsi4s::Tsi4::Tsi5s::Tsi5::Tsi6s::Tsi6::Tsi7s::Tsi7::Tsi8s::Tsi8::Tsi9s::Tsi9::Attributes::Threshold::MajorHi
        class CriticalLo; //type: Inventory::Racks::Rack::Entity::Slot::Tsi1s::Tsi1::Tsi2s::Tsi2::Tsi3s::Tsi3::Tsi4s::Tsi4::Tsi5s::Tsi5::Tsi6s::Tsi6::Tsi7s::Tsi7::Tsi8s::Tsi8::Tsi9s::Tsi9::Attributes::Threshold::CriticalLo
        class MinorLo; //type: Inventory::Racks::Rack::Entity::Slot::Tsi1s::Tsi1::Tsi2s::Tsi2::Tsi3s::Tsi3::Tsi4s::Tsi4::Tsi5s::Tsi5::Tsi6s::Tsi6::Tsi7s::Tsi7::Tsi8s::Tsi8::Tsi9s::Tsi9::Attributes::Threshold::MinorLo

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_invmgr_oper::Inventory::Racks::Rack::Entity::Slot::Tsi1s::Tsi1::Tsi2s::Tsi2::Tsi3s::Tsi3::Tsi4s::Tsi4::Tsi5s::Tsi5::Tsi6s::Tsi6::Tsi7s::Tsi7::Tsi8s::Tsi8::Tsi9s::Tsi9::Attributes::Threshold::MajorLo> major_lo;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_invmgr_oper::Inventory::Racks::Rack::Entity::Slot::Tsi1s::Tsi1::Tsi2s::Tsi2::Tsi3s::Tsi3::Tsi4s::Tsi4::Tsi5s::Tsi5::Tsi6s::Tsi6::Tsi7s::Tsi7::Tsi8s::Tsi8::Tsi9s::Tsi9::Attributes::Threshold::CriticalHi> critical_hi;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_invmgr_oper::Inventory::Racks::Rack::Entity::Slot::Tsi1s::Tsi1::Tsi2s::Tsi2::Tsi3s::Tsi3::Tsi4s::Tsi4::Tsi5s::Tsi5::Tsi6s::Tsi6::Tsi7s::Tsi7::Tsi8s::Tsi8::Tsi9s::Tsi9::Attributes::Threshold::MinorHi> minor_hi;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_invmgr_oper::Inventory::Racks::Rack::Entity::Slot::Tsi1s::Tsi1::Tsi2s::Tsi2::Tsi3s::Tsi3::Tsi4s::Tsi4::Tsi5s::Tsi5::Tsi6s::Tsi6::Tsi7s::Tsi7::Tsi8s::Tsi8::Tsi9s::Tsi9::Attributes::Threshold::MajorHi> major_hi;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_invmgr_oper::Inventory::Racks::Rack::Entity::Slot::Tsi1s::Tsi1::Tsi2s::Tsi2::Tsi3s::Tsi3::Tsi4s::Tsi4::Tsi5s::Tsi5::Tsi6s::Tsi6::Tsi7s::Tsi7::Tsi8s::Tsi8::Tsi9s::Tsi9::Attributes::Threshold::CriticalLo> critical_lo;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_invmgr_oper::Inventory::Racks::Rack::Entity::Slot::Tsi1s::Tsi1::Tsi2s::Tsi2::Tsi3s::Tsi3::Tsi4s::Tsi4::Tsi5s::Tsi5::Tsi6s::Tsi6::Tsi7s::Tsi7::Tsi8s::Tsi8::Tsi9s::Tsi9::Attributes::Threshold::MinorLo> minor_lo;
        
}; // Inventory::Racks::Rack::Entity::Slot::Tsi1s::Tsi1::Tsi2s::Tsi2::Tsi3s::Tsi3::Tsi4s::Tsi4::Tsi5s::Tsi5::Tsi6s::Tsi6::Tsi7s::Tsi7::Tsi8s::Tsi8::Tsi9s::Tsi9::Attributes::Threshold


class Inventory::Racks::Rack::Entity::Slot::Tsi1s::Tsi1::Tsi2s::Tsi2::Tsi3s::Tsi3::Tsi4s::Tsi4::Tsi5s::Tsi5::Tsi6s::Tsi6::Tsi7s::Tsi7::Tsi8s::Tsi8::Tsi9s::Tsi9::Attributes::Threshold::MajorLo : public ydk::Entity
{
    public:
        MajorLo();
        ~MajorLo();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class ThreshBag; //type: Inventory::Racks::Rack::Entity::Slot::Tsi1s::Tsi1::Tsi2s::Tsi2::Tsi3s::Tsi3::Tsi4s::Tsi4::Tsi5s::Tsi5::Tsi6s::Tsi6::Tsi7s::Tsi7::Tsi8s::Tsi8::Tsi9s::Tsi9::Attributes::Threshold::MajorLo::ThreshBag

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_invmgr_oper::Inventory::Racks::Rack::Entity::Slot::Tsi1s::Tsi1::Tsi2s::Tsi2::Tsi3s::Tsi3::Tsi4s::Tsi4::Tsi5s::Tsi5::Tsi6s::Tsi6::Tsi7s::Tsi7::Tsi8s::Tsi8::Tsi9s::Tsi9::Attributes::Threshold::MajorLo::ThreshBag> thresh_bag;
        
}; // Inventory::Racks::Rack::Entity::Slot::Tsi1s::Tsi1::Tsi2s::Tsi2::Tsi3s::Tsi3::Tsi4s::Tsi4::Tsi5s::Tsi5::Tsi6s::Tsi6::Tsi7s::Tsi7::Tsi8s::Tsi8::Tsi9s::Tsi9::Attributes::Threshold::MajorLo


class Inventory::Racks::Rack::Entity::Slot::Tsi1s::Tsi1::Tsi2s::Tsi2::Tsi3s::Tsi3::Tsi4s::Tsi4::Tsi5s::Tsi5::Tsi6s::Tsi6::Tsi7s::Tsi7::Tsi8s::Tsi8::Tsi9s::Tsi9::Attributes::Threshold::MajorLo::ThreshBag : public ydk::Entity
{
    public:
        ThreshBag();
        ~ThreshBag();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf threshold_severity; //type: uint32
        ydk::YLeaf threshold_relation; //type: uint32
        ydk::YLeaf threshold_value; //type: uint32
        ydk::YLeaf threshold_evaluation; //type: boolean
        ydk::YLeaf threshold_notification_enabled; //type: boolean

}; // Inventory::Racks::Rack::Entity::Slot::Tsi1s::Tsi1::Tsi2s::Tsi2::Tsi3s::Tsi3::Tsi4s::Tsi4::Tsi5s::Tsi5::Tsi6s::Tsi6::Tsi7s::Tsi7::Tsi8s::Tsi8::Tsi9s::Tsi9::Attributes::Threshold::MajorLo::ThreshBag


class Inventory::Racks::Rack::Entity::Slot::Tsi1s::Tsi1::Tsi2s::Tsi2::Tsi3s::Tsi3::Tsi4s::Tsi4::Tsi5s::Tsi5::Tsi6s::Tsi6::Tsi7s::Tsi7::Tsi8s::Tsi8::Tsi9s::Tsi9::Attributes::Threshold::CriticalHi : public ydk::Entity
{
    public:
        CriticalHi();
        ~CriticalHi();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class ThreshBag; //type: Inventory::Racks::Rack::Entity::Slot::Tsi1s::Tsi1::Tsi2s::Tsi2::Tsi3s::Tsi3::Tsi4s::Tsi4::Tsi5s::Tsi5::Tsi6s::Tsi6::Tsi7s::Tsi7::Tsi8s::Tsi8::Tsi9s::Tsi9::Attributes::Threshold::CriticalHi::ThreshBag

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_invmgr_oper::Inventory::Racks::Rack::Entity::Slot::Tsi1s::Tsi1::Tsi2s::Tsi2::Tsi3s::Tsi3::Tsi4s::Tsi4::Tsi5s::Tsi5::Tsi6s::Tsi6::Tsi7s::Tsi7::Tsi8s::Tsi8::Tsi9s::Tsi9::Attributes::Threshold::CriticalHi::ThreshBag> thresh_bag;
        
}; // Inventory::Racks::Rack::Entity::Slot::Tsi1s::Tsi1::Tsi2s::Tsi2::Tsi3s::Tsi3::Tsi4s::Tsi4::Tsi5s::Tsi5::Tsi6s::Tsi6::Tsi7s::Tsi7::Tsi8s::Tsi8::Tsi9s::Tsi9::Attributes::Threshold::CriticalHi


class Inventory::Racks::Rack::Entity::Slot::Tsi1s::Tsi1::Tsi2s::Tsi2::Tsi3s::Tsi3::Tsi4s::Tsi4::Tsi5s::Tsi5::Tsi6s::Tsi6::Tsi7s::Tsi7::Tsi8s::Tsi8::Tsi9s::Tsi9::Attributes::Threshold::CriticalHi::ThreshBag : public ydk::Entity
{
    public:
        ThreshBag();
        ~ThreshBag();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf threshold_severity; //type: uint32
        ydk::YLeaf threshold_relation; //type: uint32
        ydk::YLeaf threshold_value; //type: uint32
        ydk::YLeaf threshold_evaluation; //type: boolean
        ydk::YLeaf threshold_notification_enabled; //type: boolean

}; // Inventory::Racks::Rack::Entity::Slot::Tsi1s::Tsi1::Tsi2s::Tsi2::Tsi3s::Tsi3::Tsi4s::Tsi4::Tsi5s::Tsi5::Tsi6s::Tsi6::Tsi7s::Tsi7::Tsi8s::Tsi8::Tsi9s::Tsi9::Attributes::Threshold::CriticalHi::ThreshBag


class Inventory::Racks::Rack::Entity::Slot::Tsi1s::Tsi1::Tsi2s::Tsi2::Tsi3s::Tsi3::Tsi4s::Tsi4::Tsi5s::Tsi5::Tsi6s::Tsi6::Tsi7s::Tsi7::Tsi8s::Tsi8::Tsi9s::Tsi9::Attributes::Threshold::MinorHi : public ydk::Entity
{
    public:
        MinorHi();
        ~MinorHi();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class ThreshBag; //type: Inventory::Racks::Rack::Entity::Slot::Tsi1s::Tsi1::Tsi2s::Tsi2::Tsi3s::Tsi3::Tsi4s::Tsi4::Tsi5s::Tsi5::Tsi6s::Tsi6::Tsi7s::Tsi7::Tsi8s::Tsi8::Tsi9s::Tsi9::Attributes::Threshold::MinorHi::ThreshBag

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_invmgr_oper::Inventory::Racks::Rack::Entity::Slot::Tsi1s::Tsi1::Tsi2s::Tsi2::Tsi3s::Tsi3::Tsi4s::Tsi4::Tsi5s::Tsi5::Tsi6s::Tsi6::Tsi7s::Tsi7::Tsi8s::Tsi8::Tsi9s::Tsi9::Attributes::Threshold::MinorHi::ThreshBag> thresh_bag;
        
}; // Inventory::Racks::Rack::Entity::Slot::Tsi1s::Tsi1::Tsi2s::Tsi2::Tsi3s::Tsi3::Tsi4s::Tsi4::Tsi5s::Tsi5::Tsi6s::Tsi6::Tsi7s::Tsi7::Tsi8s::Tsi8::Tsi9s::Tsi9::Attributes::Threshold::MinorHi


class Inventory::Racks::Rack::Entity::Slot::Tsi1s::Tsi1::Tsi2s::Tsi2::Tsi3s::Tsi3::Tsi4s::Tsi4::Tsi5s::Tsi5::Tsi6s::Tsi6::Tsi7s::Tsi7::Tsi8s::Tsi8::Tsi9s::Tsi9::Attributes::Threshold::MinorHi::ThreshBag : public ydk::Entity
{
    public:
        ThreshBag();
        ~ThreshBag();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf threshold_severity; //type: uint32
        ydk::YLeaf threshold_relation; //type: uint32
        ydk::YLeaf threshold_value; //type: uint32
        ydk::YLeaf threshold_evaluation; //type: boolean
        ydk::YLeaf threshold_notification_enabled; //type: boolean

}; // Inventory::Racks::Rack::Entity::Slot::Tsi1s::Tsi1::Tsi2s::Tsi2::Tsi3s::Tsi3::Tsi4s::Tsi4::Tsi5s::Tsi5::Tsi6s::Tsi6::Tsi7s::Tsi7::Tsi8s::Tsi8::Tsi9s::Tsi9::Attributes::Threshold::MinorHi::ThreshBag


class Inventory::Racks::Rack::Entity::Slot::Tsi1s::Tsi1::Tsi2s::Tsi2::Tsi3s::Tsi3::Tsi4s::Tsi4::Tsi5s::Tsi5::Tsi6s::Tsi6::Tsi7s::Tsi7::Tsi8s::Tsi8::Tsi9s::Tsi9::Attributes::Threshold::MajorHi : public ydk::Entity
{
    public:
        MajorHi();
        ~MajorHi();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class ThreshBag; //type: Inventory::Racks::Rack::Entity::Slot::Tsi1s::Tsi1::Tsi2s::Tsi2::Tsi3s::Tsi3::Tsi4s::Tsi4::Tsi5s::Tsi5::Tsi6s::Tsi6::Tsi7s::Tsi7::Tsi8s::Tsi8::Tsi9s::Tsi9::Attributes::Threshold::MajorHi::ThreshBag

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_invmgr_oper::Inventory::Racks::Rack::Entity::Slot::Tsi1s::Tsi1::Tsi2s::Tsi2::Tsi3s::Tsi3::Tsi4s::Tsi4::Tsi5s::Tsi5::Tsi6s::Tsi6::Tsi7s::Tsi7::Tsi8s::Tsi8::Tsi9s::Tsi9::Attributes::Threshold::MajorHi::ThreshBag> thresh_bag;
        
}; // Inventory::Racks::Rack::Entity::Slot::Tsi1s::Tsi1::Tsi2s::Tsi2::Tsi3s::Tsi3::Tsi4s::Tsi4::Tsi5s::Tsi5::Tsi6s::Tsi6::Tsi7s::Tsi7::Tsi8s::Tsi8::Tsi9s::Tsi9::Attributes::Threshold::MajorHi


class Inventory::Racks::Rack::Entity::Slot::Tsi1s::Tsi1::Tsi2s::Tsi2::Tsi3s::Tsi3::Tsi4s::Tsi4::Tsi5s::Tsi5::Tsi6s::Tsi6::Tsi7s::Tsi7::Tsi8s::Tsi8::Tsi9s::Tsi9::Attributes::Threshold::MajorHi::ThreshBag : public ydk::Entity
{
    public:
        ThreshBag();
        ~ThreshBag();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf threshold_severity; //type: uint32
        ydk::YLeaf threshold_relation; //type: uint32
        ydk::YLeaf threshold_value; //type: uint32
        ydk::YLeaf threshold_evaluation; //type: boolean
        ydk::YLeaf threshold_notification_enabled; //type: boolean

}; // Inventory::Racks::Rack::Entity::Slot::Tsi1s::Tsi1::Tsi2s::Tsi2::Tsi3s::Tsi3::Tsi4s::Tsi4::Tsi5s::Tsi5::Tsi6s::Tsi6::Tsi7s::Tsi7::Tsi8s::Tsi8::Tsi9s::Tsi9::Attributes::Threshold::MajorHi::ThreshBag


class Inventory::Racks::Rack::Entity::Slot::Tsi1s::Tsi1::Tsi2s::Tsi2::Tsi3s::Tsi3::Tsi4s::Tsi4::Tsi5s::Tsi5::Tsi6s::Tsi6::Tsi7s::Tsi7::Tsi8s::Tsi8::Tsi9s::Tsi9::Attributes::Threshold::CriticalLo : public ydk::Entity
{
    public:
        CriticalLo();
        ~CriticalLo();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class ThreshBag; //type: Inventory::Racks::Rack::Entity::Slot::Tsi1s::Tsi1::Tsi2s::Tsi2::Tsi3s::Tsi3::Tsi4s::Tsi4::Tsi5s::Tsi5::Tsi6s::Tsi6::Tsi7s::Tsi7::Tsi8s::Tsi8::Tsi9s::Tsi9::Attributes::Threshold::CriticalLo::ThreshBag

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_invmgr_oper::Inventory::Racks::Rack::Entity::Slot::Tsi1s::Tsi1::Tsi2s::Tsi2::Tsi3s::Tsi3::Tsi4s::Tsi4::Tsi5s::Tsi5::Tsi6s::Tsi6::Tsi7s::Tsi7::Tsi8s::Tsi8::Tsi9s::Tsi9::Attributes::Threshold::CriticalLo::ThreshBag> thresh_bag;
        
}; // Inventory::Racks::Rack::Entity::Slot::Tsi1s::Tsi1::Tsi2s::Tsi2::Tsi3s::Tsi3::Tsi4s::Tsi4::Tsi5s::Tsi5::Tsi6s::Tsi6::Tsi7s::Tsi7::Tsi8s::Tsi8::Tsi9s::Tsi9::Attributes::Threshold::CriticalLo


class Inventory::Racks::Rack::Entity::Slot::Tsi1s::Tsi1::Tsi2s::Tsi2::Tsi3s::Tsi3::Tsi4s::Tsi4::Tsi5s::Tsi5::Tsi6s::Tsi6::Tsi7s::Tsi7::Tsi8s::Tsi8::Tsi9s::Tsi9::Attributes::Threshold::CriticalLo::ThreshBag : public ydk::Entity
{
    public:
        ThreshBag();
        ~ThreshBag();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf threshold_severity; //type: uint32
        ydk::YLeaf threshold_relation; //type: uint32
        ydk::YLeaf threshold_value; //type: uint32
        ydk::YLeaf threshold_evaluation; //type: boolean
        ydk::YLeaf threshold_notification_enabled; //type: boolean

}; // Inventory::Racks::Rack::Entity::Slot::Tsi1s::Tsi1::Tsi2s::Tsi2::Tsi3s::Tsi3::Tsi4s::Tsi4::Tsi5s::Tsi5::Tsi6s::Tsi6::Tsi7s::Tsi7::Tsi8s::Tsi8::Tsi9s::Tsi9::Attributes::Threshold::CriticalLo::ThreshBag


class Inventory::Racks::Rack::Entity::Slot::Tsi1s::Tsi1::Tsi2s::Tsi2::Tsi3s::Tsi3::Tsi4s::Tsi4::Tsi5s::Tsi5::Tsi6s::Tsi6::Tsi7s::Tsi7::Tsi8s::Tsi8::Tsi9s::Tsi9::Attributes::Threshold::MinorLo : public ydk::Entity
{
    public:
        MinorLo();
        ~MinorLo();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class ThreshBag; //type: Inventory::Racks::Rack::Entity::Slot::Tsi1s::Tsi1::Tsi2s::Tsi2::Tsi3s::Tsi3::Tsi4s::Tsi4::Tsi5s::Tsi5::Tsi6s::Tsi6::Tsi7s::Tsi7::Tsi8s::Tsi8::Tsi9s::Tsi9::Attributes::Threshold::MinorLo::ThreshBag

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_invmgr_oper::Inventory::Racks::Rack::Entity::Slot::Tsi1s::Tsi1::Tsi2s::Tsi2::Tsi3s::Tsi3::Tsi4s::Tsi4::Tsi5s::Tsi5::Tsi6s::Tsi6::Tsi7s::Tsi7::Tsi8s::Tsi8::Tsi9s::Tsi9::Attributes::Threshold::MinorLo::ThreshBag> thresh_bag;
        
}; // Inventory::Racks::Rack::Entity::Slot::Tsi1s::Tsi1::Tsi2s::Tsi2::Tsi3s::Tsi3::Tsi4s::Tsi4::Tsi5s::Tsi5::Tsi6s::Tsi6::Tsi7s::Tsi7::Tsi8s::Tsi8::Tsi9s::Tsi9::Attributes::Threshold::MinorLo


class Inventory::Racks::Rack::Entity::Slot::Tsi1s::Tsi1::Tsi2s::Tsi2::Tsi3s::Tsi3::Tsi4s::Tsi4::Tsi5s::Tsi5::Tsi6s::Tsi6::Tsi7s::Tsi7::Tsi8s::Tsi8::Tsi9s::Tsi9::Attributes::Threshold::MinorLo::ThreshBag : public ydk::Entity
{
    public:
        ThreshBag();
        ~ThreshBag();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf threshold_severity; //type: uint32
        ydk::YLeaf threshold_relation; //type: uint32
        ydk::YLeaf threshold_value; //type: uint32
        ydk::YLeaf threshold_evaluation; //type: boolean
        ydk::YLeaf threshold_notification_enabled; //type: boolean

}; // Inventory::Racks::Rack::Entity::Slot::Tsi1s::Tsi1::Tsi2s::Tsi2::Tsi3s::Tsi3::Tsi4s::Tsi4::Tsi5s::Tsi5::Tsi6s::Tsi6::Tsi7s::Tsi7::Tsi8s::Tsi8::Tsi9s::Tsi9::Attributes::Threshold::MinorLo::ThreshBag


class Inventory::Racks::Rack::Entity::Slot::Tsi1s::Tsi1::Tsi2s::Tsi2::Tsi3s::Tsi3::Tsi4s::Tsi4::Tsi5s::Tsi5::Tsi6s::Tsi6::Tsi7s::Tsi7::Tsi8s::Tsi8::Tsi9s::Tsi9::Attributes::FruInfo : public ydk::Entity
{
    public:
        FruInfo();
        ~FruInfo();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf card_administrative_state; //type: int32
        ydk::YLeaf power_administrative_state; //type: int32
        ydk::YLeaf card_operational_state; //type: int32
        ydk::YLeaf card_monitor_state; //type: int32
        ydk::YLeaf card_reset_reason; //type: CardResetReason
        ydk::YLeaf power_current_measurement; //type: int32
        ydk::YLeaf power_operational_state; //type: int32
        class LastOperationalStateChange; //type: Inventory::Racks::Rack::Entity::Slot::Tsi1s::Tsi1::Tsi2s::Tsi2::Tsi3s::Tsi3::Tsi4s::Tsi4::Tsi5s::Tsi5::Tsi6s::Tsi6::Tsi7s::Tsi7::Tsi8s::Tsi8::Tsi9s::Tsi9::Attributes::FruInfo::LastOperationalStateChange
        class CardUpTime; //type: Inventory::Racks::Rack::Entity::Slot::Tsi1s::Tsi1::Tsi2s::Tsi2::Tsi3s::Tsi3::Tsi4s::Tsi4::Tsi5s::Tsi5::Tsi6s::Tsi6::Tsi7s::Tsi7::Tsi8s::Tsi8::Tsi9s::Tsi9::Attributes::FruInfo::CardUpTime

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_invmgr_oper::Inventory::Racks::Rack::Entity::Slot::Tsi1s::Tsi1::Tsi2s::Tsi2::Tsi3s::Tsi3::Tsi4s::Tsi4::Tsi5s::Tsi5::Tsi6s::Tsi6::Tsi7s::Tsi7::Tsi8s::Tsi8::Tsi9s::Tsi9::Attributes::FruInfo::LastOperationalStateChange> last_operational_state_change;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_invmgr_oper::Inventory::Racks::Rack::Entity::Slot::Tsi1s::Tsi1::Tsi2s::Tsi2::Tsi3s::Tsi3::Tsi4s::Tsi4::Tsi5s::Tsi5::Tsi6s::Tsi6::Tsi7s::Tsi7::Tsi8s::Tsi8::Tsi9s::Tsi9::Attributes::FruInfo::CardUpTime> card_up_time;
        
}; // Inventory::Racks::Rack::Entity::Slot::Tsi1s::Tsi1::Tsi2s::Tsi2::Tsi3s::Tsi3::Tsi4s::Tsi4::Tsi5s::Tsi5::Tsi6s::Tsi6::Tsi7s::Tsi7::Tsi8s::Tsi8::Tsi9s::Tsi9::Attributes::FruInfo


class Inventory::Racks::Rack::Entity::Slot::Tsi1s::Tsi1::Tsi2s::Tsi2::Tsi3s::Tsi3::Tsi4s::Tsi4::Tsi5s::Tsi5::Tsi6s::Tsi6::Tsi7s::Tsi7::Tsi8s::Tsi8::Tsi9s::Tsi9::Attributes::FruInfo::LastOperationalStateChange : public ydk::Entity
{
    public:
        LastOperationalStateChange();
        ~LastOperationalStateChange();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf time_in_seconds; //type: int32
        ydk::YLeaf time_in_nano_seconds; //type: int32

}; // Inventory::Racks::Rack::Entity::Slot::Tsi1s::Tsi1::Tsi2s::Tsi2::Tsi3s::Tsi3::Tsi4s::Tsi4::Tsi5s::Tsi5::Tsi6s::Tsi6::Tsi7s::Tsi7::Tsi8s::Tsi8::Tsi9s::Tsi9::Attributes::FruInfo::LastOperationalStateChange


class Inventory::Racks::Rack::Entity::Slot::Tsi1s::Tsi1::Tsi2s::Tsi2::Tsi3s::Tsi3::Tsi4s::Tsi4::Tsi5s::Tsi5::Tsi6s::Tsi6::Tsi7s::Tsi7::Tsi8s::Tsi8::Tsi9s::Tsi9::Attributes::FruInfo::CardUpTime : public ydk::Entity
{
    public:
        CardUpTime();
        ~CardUpTime();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf time_in_seconds; //type: int32
        ydk::YLeaf time_in_nano_seconds; //type: int32

}; // Inventory::Racks::Rack::Entity::Slot::Tsi1s::Tsi1::Tsi2s::Tsi2::Tsi3s::Tsi3::Tsi4s::Tsi4::Tsi5s::Tsi5::Tsi6s::Tsi6::Tsi7s::Tsi7::Tsi8s::Tsi8::Tsi9s::Tsi9::Attributes::FruInfo::CardUpTime


class Inventory::Racks::Rack::Entity::Slot::Tsi1s::Tsi1::Tsi2s::Tsi2::Tsi3s::Tsi3::Tsi4s::Tsi4::Tsi5s::Tsi5::Tsi6s::Tsi6::Tsi7s::Tsi7::Tsi8s::Tsi8::Tsi9s::Tsi9::Attributes::InvEepromInfo : public ydk::Entity
{
    public:
        InvEepromInfo();
        ~InvEepromInfo();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf inv_card_type; //type: uint8
        ydk::YLeaf opaque_data; //type: string
        ydk::YLeaf opaque_data_size; //type: uint32
        ydk::YLeaf has_eeprom; //type: uint32
        ydk::YLeaf description; //type: string
        class Eeprom; //type: Inventory::Racks::Rack::Entity::Slot::Tsi1s::Tsi1::Tsi2s::Tsi2::Tsi3s::Tsi3::Tsi4s::Tsi4::Tsi5s::Tsi5::Tsi6s::Tsi6::Tsi7s::Tsi7::Tsi8s::Tsi8::Tsi9s::Tsi9::Attributes::InvEepromInfo::Eeprom

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_invmgr_oper::Inventory::Racks::Rack::Entity::Slot::Tsi1s::Tsi1::Tsi2s::Tsi2::Tsi3s::Tsi3::Tsi4s::Tsi4::Tsi5s::Tsi5::Tsi6s::Tsi6::Tsi7s::Tsi7::Tsi8s::Tsi8::Tsi9s::Tsi9::Attributes::InvEepromInfo::Eeprom> eeprom;
        
}; // Inventory::Racks::Rack::Entity::Slot::Tsi1s::Tsi1::Tsi2s::Tsi2::Tsi3s::Tsi3::Tsi4s::Tsi4::Tsi5s::Tsi5::Tsi6s::Tsi6::Tsi7s::Tsi7::Tsi8s::Tsi8::Tsi9s::Tsi9::Attributes::InvEepromInfo


class Inventory::Racks::Rack::Entity::Slot::Tsi1s::Tsi1::Tsi2s::Tsi2::Tsi3s::Tsi3::Tsi4s::Tsi4::Tsi5s::Tsi5::Tsi6s::Tsi6::Tsi7s::Tsi7::Tsi8s::Tsi8::Tsi9s::Tsi9::Attributes::InvEepromInfo::Eeprom : public ydk::Entity
{
    public:
        Eeprom();
        ~Eeprom();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf description; //type: string
        ydk::YLeaf idprom_format_rev; //type: string
        ydk::YLeaf controller_family; //type: string
        ydk::YLeaf controller_type; //type: string
        ydk::YLeaf vid; //type: string
        ydk::YLeaf hwid; //type: string
        ydk::YLeaf pid; //type: string
        ydk::YLeaf udi_description; //type: string
        ydk::YLeaf udi_name; //type: string
        ydk::YLeaf clei; //type: string
        ydk::YLeaf eci; //type: string
        ydk::YLeaf top_assem_part_num; //type: string
        ydk::YLeaf top_assem_vid; //type: string
        ydk::YLeaf pca_num; //type: string
        ydk::YLeaf pcavid; //type: string
        ydk::YLeaf chassis_sid; //type: string
        ydk::YLeaf dev_num1; //type: string
        ydk::YLeaf dev_num2; //type: string
        ydk::YLeaf dev_num3; //type: string
        ydk::YLeaf dev_num4; //type: string
        ydk::YLeaf dev_num5; //type: string
        ydk::YLeaf dev_num6; //type: string
        ydk::YLeaf dev_num7; //type: string
        ydk::YLeaf manu_test_data; //type: string
        ydk::YLeaf asset_id; //type: string
        ydk::YLeaf asset_alias; //type: string
        ydk::YLeaf base_mac_address1; //type: string
        ydk::YLeaf mac_add_blk_size1; //type: string
        ydk::YLeaf base_mac_address2; //type: string
        ydk::YLeaf mac_add_blk_size2; //type: string
        ydk::YLeaf base_mac_address3; //type: string
        ydk::YLeaf mac_add_blk_size3; //type: string
        ydk::YLeaf base_mac_address4; //type: string
        ydk::YLeaf mac_add_blk_size4; //type: string
        ydk::YLeaf pcb_serial_num; //type: string
        ydk::YLeaf power_supply_type; //type: string
        ydk::YLeaf power_consumption; //type: string
        ydk::YLeaf block_signature; //type: string
        ydk::YLeaf block_version; //type: string
        ydk::YLeaf block_length; //type: string
        ydk::YLeaf block_checksum; //type: string
        ydk::YLeaf eeprom_size; //type: string
        ydk::YLeaf block_count; //type: string
        ydk::YLeaf fru_major_type; //type: string
        ydk::YLeaf fru_minor_type; //type: string
        ydk::YLeaf oem_string; //type: string
        ydk::YLeaf product_id; //type: string
        ydk::YLeaf serial_number; //type: string
        ydk::YLeaf part_number; //type: string
        ydk::YLeaf part_revision; //type: string
        ydk::YLeaf mfg_deviation; //type: string
        ydk::YLeaf hw_version; //type: string
        ydk::YLeaf mfg_bits; //type: string
        ydk::YLeaf engineer_use; //type: string
        ydk::YLeaf snmpoid; //type: string
        ydk::YLeaf rma_code; //type: string
        class Rma; //type: Inventory::Racks::Rack::Entity::Slot::Tsi1s::Tsi1::Tsi2s::Tsi2::Tsi3s::Tsi3::Tsi4s::Tsi4::Tsi5s::Tsi5::Tsi6s::Tsi6::Tsi7s::Tsi7::Tsi8s::Tsi8::Tsi9s::Tsi9::Attributes::InvEepromInfo::Eeprom::Rma

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_invmgr_oper::Inventory::Racks::Rack::Entity::Slot::Tsi1s::Tsi1::Tsi2s::Tsi2::Tsi3s::Tsi3::Tsi4s::Tsi4::Tsi5s::Tsi5::Tsi6s::Tsi6::Tsi7s::Tsi7::Tsi8s::Tsi8::Tsi9s::Tsi9::Attributes::InvEepromInfo::Eeprom::Rma> rma;
        
}; // Inventory::Racks::Rack::Entity::Slot::Tsi1s::Tsi1::Tsi2s::Tsi2::Tsi3s::Tsi3::Tsi4s::Tsi4::Tsi5s::Tsi5::Tsi6s::Tsi6::Tsi7s::Tsi7::Tsi8s::Tsi8::Tsi9s::Tsi9::Attributes::InvEepromInfo::Eeprom


class Inventory::Racks::Rack::Entity::Slot::Tsi1s::Tsi1::Tsi2s::Tsi2::Tsi3s::Tsi3::Tsi4s::Tsi4::Tsi5s::Tsi5::Tsi6s::Tsi6::Tsi7s::Tsi7::Tsi8s::Tsi8::Tsi9s::Tsi9::Attributes::InvEepromInfo::Eeprom::Rma : public ydk::Entity
{
    public:
        Rma();
        ~Rma();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf test_history; //type: string
        ydk::YLeaf rma_number; //type: string
        ydk::YLeaf rma_history; //type: string

}; // Inventory::Racks::Rack::Entity::Slot::Tsi1s::Tsi1::Tsi2s::Tsi2::Tsi3s::Tsi3::Tsi4s::Tsi4::Tsi5s::Tsi5::Tsi6s::Tsi6::Tsi7s::Tsi7::Tsi8s::Tsi8::Tsi9s::Tsi9::Attributes::InvEepromInfo::Eeprom::Rma


class Inventory::Racks::Rack::Entity::Slot::Tsi1s::Tsi1::Tsi2s::Tsi2::Tsi3s::Tsi3::Tsi4s::Tsi4::Tsi5s::Tsi5::Tsi6s::Tsi6::Tsi7s::Tsi7::Tsi8s::Tsi8::Attributes : public ydk::Entity
{
    public:
        Attributes();
        ~Attributes();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class InvBasicBag; //type: Inventory::Racks::Rack::Entity::Slot::Tsi1s::Tsi1::Tsi2s::Tsi2::Tsi3s::Tsi3::Tsi4s::Tsi4::Tsi5s::Tsi5::Tsi6s::Tsi6::Tsi7s::Tsi7::Tsi8s::Tsi8::Attributes::InvBasicBag
        class EnvSensorInfo; //type: Inventory::Racks::Rack::Entity::Slot::Tsi1s::Tsi1::Tsi2s::Tsi2::Tsi3s::Tsi3::Tsi4s::Tsi4::Tsi5s::Tsi5::Tsi6s::Tsi6::Tsi7s::Tsi7::Tsi8s::Tsi8::Attributes::EnvSensorInfo
        class PwgInfo; //type: Inventory::Racks::Rack::Entity::Slot::Tsi1s::Tsi1::Tsi2s::Tsi2::Tsi3s::Tsi3::Tsi4s::Tsi4::Tsi5s::Tsi5::Tsi6s::Tsi6::Tsi7s::Tsi7::Tsi8s::Tsi8::Attributes::PwgInfo
        class EnvSensorInfoXml; //type: Inventory::Racks::Rack::Entity::Slot::Tsi1s::Tsi1::Tsi2s::Tsi2::Tsi3s::Tsi3::Tsi4s::Tsi4::Tsi5s::Tsi5::Tsi6s::Tsi6::Tsi7s::Tsi7::Tsi8s::Tsi8::Attributes::EnvSensorInfoXml
        class InvAssetBag; //type: Inventory::Racks::Rack::Entity::Slot::Tsi1s::Tsi1::Tsi2s::Tsi2::Tsi3s::Tsi3::Tsi4s::Tsi4::Tsi5s::Tsi5::Tsi6s::Tsi6::Tsi7s::Tsi7::Tsi8s::Tsi8::Attributes::InvAssetBag
        class Threshold; //type: Inventory::Racks::Rack::Entity::Slot::Tsi1s::Tsi1::Tsi2s::Tsi2::Tsi3s::Tsi3::Tsi4s::Tsi4::Tsi5s::Tsi5::Tsi6s::Tsi6::Tsi7s::Tsi7::Tsi8s::Tsi8::Attributes::Threshold
        class FruInfo; //type: Inventory::Racks::Rack::Entity::Slot::Tsi1s::Tsi1::Tsi2s::Tsi2::Tsi3s::Tsi3::Tsi4s::Tsi4::Tsi5s::Tsi5::Tsi6s::Tsi6::Tsi7s::Tsi7::Tsi8s::Tsi8::Attributes::FruInfo
        class InvEepromInfo; //type: Inventory::Racks::Rack::Entity::Slot::Tsi1s::Tsi1::Tsi2s::Tsi2::Tsi3s::Tsi3::Tsi4s::Tsi4::Tsi5s::Tsi5::Tsi6s::Tsi6::Tsi7s::Tsi7::Tsi8s::Tsi8::Attributes::InvEepromInfo

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_invmgr_oper::Inventory::Racks::Rack::Entity::Slot::Tsi1s::Tsi1::Tsi2s::Tsi2::Tsi3s::Tsi3::Tsi4s::Tsi4::Tsi5s::Tsi5::Tsi6s::Tsi6::Tsi7s::Tsi7::Tsi8s::Tsi8::Attributes::InvBasicBag> inv_basic_bag;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_invmgr_oper::Inventory::Racks::Rack::Entity::Slot::Tsi1s::Tsi1::Tsi2s::Tsi2::Tsi3s::Tsi3::Tsi4s::Tsi4::Tsi5s::Tsi5::Tsi6s::Tsi6::Tsi7s::Tsi7::Tsi8s::Tsi8::Attributes::EnvSensorInfo> env_sensor_info;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_invmgr_oper::Inventory::Racks::Rack::Entity::Slot::Tsi1s::Tsi1::Tsi2s::Tsi2::Tsi3s::Tsi3::Tsi4s::Tsi4::Tsi5s::Tsi5::Tsi6s::Tsi6::Tsi7s::Tsi7::Tsi8s::Tsi8::Attributes::PwgInfo> pwg_info;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_invmgr_oper::Inventory::Racks::Rack::Entity::Slot::Tsi1s::Tsi1::Tsi2s::Tsi2::Tsi3s::Tsi3::Tsi4s::Tsi4::Tsi5s::Tsi5::Tsi6s::Tsi6::Tsi7s::Tsi7::Tsi8s::Tsi8::Attributes::EnvSensorInfoXml> env_sensor_info_xml;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_invmgr_oper::Inventory::Racks::Rack::Entity::Slot::Tsi1s::Tsi1::Tsi2s::Tsi2::Tsi3s::Tsi3::Tsi4s::Tsi4::Tsi5s::Tsi5::Tsi6s::Tsi6::Tsi7s::Tsi7::Tsi8s::Tsi8::Attributes::InvAssetBag> inv_asset_bag;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_invmgr_oper::Inventory::Racks::Rack::Entity::Slot::Tsi1s::Tsi1::Tsi2s::Tsi2::Tsi3s::Tsi3::Tsi4s::Tsi4::Tsi5s::Tsi5::Tsi6s::Tsi6::Tsi7s::Tsi7::Tsi8s::Tsi8::Attributes::Threshold> threshold;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_invmgr_oper::Inventory::Racks::Rack::Entity::Slot::Tsi1s::Tsi1::Tsi2s::Tsi2::Tsi3s::Tsi3::Tsi4s::Tsi4::Tsi5s::Tsi5::Tsi6s::Tsi6::Tsi7s::Tsi7::Tsi8s::Tsi8::Attributes::FruInfo> fru_info;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_invmgr_oper::Inventory::Racks::Rack::Entity::Slot::Tsi1s::Tsi1::Tsi2s::Tsi2::Tsi3s::Tsi3::Tsi4s::Tsi4::Tsi5s::Tsi5::Tsi6s::Tsi6::Tsi7s::Tsi7::Tsi8s::Tsi8::Attributes::InvEepromInfo> inv_eeprom_info;
        
}; // Inventory::Racks::Rack::Entity::Slot::Tsi1s::Tsi1::Tsi2s::Tsi2::Tsi3s::Tsi3::Tsi4s::Tsi4::Tsi5s::Tsi5::Tsi6s::Tsi6::Tsi7s::Tsi7::Tsi8s::Tsi8::Attributes


class Inventory::Racks::Rack::Entity::Slot::Tsi1s::Tsi1::Tsi2s::Tsi2::Tsi3s::Tsi3::Tsi4s::Tsi4::Tsi5s::Tsi5::Tsi6s::Tsi6::Tsi7s::Tsi7::Tsi8s::Tsi8::Attributes::InvBasicBag : public ydk::Entity
{
    public:
        InvBasicBag();
        ~InvBasicBag();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf description; //type: string
        ydk::YLeaf vendor_type; //type: string
        ydk::YLeaf name; //type: string
        ydk::YLeaf hardware_revision; //type: string
        ydk::YLeaf firmware_revision; //type: string
        ydk::YLeaf software_revision; //type: string
        ydk::YLeaf chip_hardware_revision; //type: string
        ydk::YLeaf serial_number; //type: string
        ydk::YLeaf manufacturer_name; //type: string
        ydk::YLeaf model_name; //type: string
        ydk::YLeaf asset_id_str; //type: string
        ydk::YLeaf asset_identification; //type: int32
        ydk::YLeaf is_field_replaceable_unit; //type: boolean
        ydk::YLeaf manufacturer_asset_tags; //type: int32
        ydk::YLeaf composite_class_code; //type: int32
        ydk::YLeaf memory_size; //type: int32
        ydk::YLeaf environmental_monitor_path; //type: string
        ydk::YLeaf alias; //type: string
        ydk::YLeaf group_flag; //type: boolean
        ydk::YLeaf new_deviation_number; //type: int32
        ydk::YLeaf physical_layer_interface_module_type; //type: int32
        ydk::YLeaf unrecognized_fru; //type: boolean
        ydk::YLeaf redundancystate; //type: int32
        ydk::YLeaf ceport; //type: boolean
        ydk::YLeaf xr_scoped; //type: boolean
        ydk::YLeaf unique_id; //type: int32

}; // Inventory::Racks::Rack::Entity::Slot::Tsi1s::Tsi1::Tsi2s::Tsi2::Tsi3s::Tsi3::Tsi4s::Tsi4::Tsi5s::Tsi5::Tsi6s::Tsi6::Tsi7s::Tsi7::Tsi8s::Tsi8::Attributes::InvBasicBag


class Inventory::Racks::Rack::Entity::Slot::Tsi1s::Tsi1::Tsi2s::Tsi2::Tsi3s::Tsi3::Tsi4s::Tsi4::Tsi5s::Tsi5::Tsi6s::Tsi6::Tsi7s::Tsi7::Tsi8s::Tsi8::Attributes::EnvSensorInfo : public ydk::Entity
{
    public:
        EnvSensorInfo();
        ~EnvSensorInfo();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf field_validity_bitmap; //type: uint32
        ydk::YLeaf device_description; //type: string
        ydk::YLeaf units; //type: string
        ydk::YLeaf device_id; //type: uint32
        ydk::YLeaf value_; //type: uint32
        ydk::YLeaf alarm_type; //type: uint32
        ydk::YLeaf data_type; //type: uint32
        ydk::YLeaf scale; //type: uint32
        ydk::YLeaf precision; //type: uint32
        ydk::YLeaf status; //type: uint32
        ydk::YLeaf age_time_stamp; //type: uint32
        ydk::YLeaf update_rate; //type: uint32

}; // Inventory::Racks::Rack::Entity::Slot::Tsi1s::Tsi1::Tsi2s::Tsi2::Tsi3s::Tsi3::Tsi4s::Tsi4::Tsi5s::Tsi5::Tsi6s::Tsi6::Tsi7s::Tsi7::Tsi8s::Tsi8::Attributes::EnvSensorInfo


class Inventory::Racks::Rack::Entity::Slot::Tsi1s::Tsi1::Tsi2s::Tsi2::Tsi3s::Tsi3::Tsi4s::Tsi4::Tsi5s::Tsi5::Tsi6s::Tsi6::Tsi7s::Tsi7::Tsi8s::Tsi8::Attributes::PwgInfo : public ydk::Entity
{
    public:
        PwgInfo();
        ~PwgInfo();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf power_group_redundancy_mode; //type: int32
        ydk::YLeaf power_group_power_units; //type: string
        ydk::YLeaf power_group_available_current; //type: int32
        ydk::YLeaf power_group_drawn_current; //type: int32

}; // Inventory::Racks::Rack::Entity::Slot::Tsi1s::Tsi1::Tsi2s::Tsi2::Tsi3s::Tsi3::Tsi4s::Tsi4::Tsi5s::Tsi5::Tsi6s::Tsi6::Tsi7s::Tsi7::Tsi8s::Tsi8::Attributes::PwgInfo


class Inventory::Racks::Rack::Entity::Slot::Tsi1s::Tsi1::Tsi2s::Tsi2::Tsi3s::Tsi3::Tsi4s::Tsi4::Tsi5s::Tsi5::Tsi6s::Tsi6::Tsi7s::Tsi7::Tsi8s::Tsi8::Attributes::EnvSensorInfoXml : public ydk::Entity
{
    public:
        EnvSensorInfoXml();
        ~EnvSensorInfoXml();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf description; //type: string
        ydk::YLeaf units; //type: Unit
        ydk::YLeaf value_; //type: string
        ydk::YLeaf data_type; //type: SensorData
        ydk::YLeaf status; //type: SensorStatus
        ydk::YLeaf update_rate; //type: uint32
        class Threshold; //type: Inventory::Racks::Rack::Entity::Slot::Tsi1s::Tsi1::Tsi2s::Tsi2::Tsi3s::Tsi3::Tsi4s::Tsi4::Tsi5s::Tsi5::Tsi6s::Tsi6::Tsi7s::Tsi7::Tsi8s::Tsi8::Attributes::EnvSensorInfoXml::Threshold

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_invmgr_oper::Inventory::Racks::Rack::Entity::Slot::Tsi1s::Tsi1::Tsi2s::Tsi2::Tsi3s::Tsi3::Tsi4s::Tsi4::Tsi5s::Tsi5::Tsi6s::Tsi6::Tsi7s::Tsi7::Tsi8s::Tsi8::Attributes::EnvSensorInfoXml::Threshold> threshold;
        
}; // Inventory::Racks::Rack::Entity::Slot::Tsi1s::Tsi1::Tsi2s::Tsi2::Tsi3s::Tsi3::Tsi4s::Tsi4::Tsi5s::Tsi5::Tsi6s::Tsi6::Tsi7s::Tsi7::Tsi8s::Tsi8::Attributes::EnvSensorInfoXml


class Inventory::Racks::Rack::Entity::Slot::Tsi1s::Tsi1::Tsi2s::Tsi2::Tsi3s::Tsi3::Tsi4s::Tsi4::Tsi5s::Tsi5::Tsi6s::Tsi6::Tsi7s::Tsi7::Tsi8s::Tsi8::Attributes::EnvSensorInfoXml::Threshold : public ydk::Entity
{
    public:
        Threshold();
        ~Threshold();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class ThresholdArray; //type: Inventory::Racks::Rack::Entity::Slot::Tsi1s::Tsi1::Tsi2s::Tsi2::Tsi3s::Tsi3::Tsi4s::Tsi4::Tsi5s::Tsi5::Tsi6s::Tsi6::Tsi7s::Tsi7::Tsi8s::Tsi8::Attributes::EnvSensorInfoXml::Threshold::ThresholdArray

        ydk::YList threshold_array;
        
}; // Inventory::Racks::Rack::Entity::Slot::Tsi1s::Tsi1::Tsi2s::Tsi2::Tsi3s::Tsi3::Tsi4s::Tsi4::Tsi5s::Tsi5::Tsi6s::Tsi6::Tsi7s::Tsi7::Tsi8s::Tsi8::Attributes::EnvSensorInfoXml::Threshold


class Inventory::Racks::Rack::Entity::Slot::Tsi1s::Tsi1::Tsi2s::Tsi2::Tsi3s::Tsi3::Tsi4s::Tsi4::Tsi5s::Tsi5::Tsi6s::Tsi6::Tsi7s::Tsi7::Tsi8s::Tsi8::Attributes::EnvSensorInfoXml::Threshold::ThresholdArray : public ydk::Entity
{
    public:
        ThresholdArray();
        ~ThresholdArray();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf threshold_severity; //type: ThresholdSeverity
        ydk::YLeaf threshold_relation; //type: ThresholdRelation
        ydk::YLeaf threshold_value; //type: int32
        ydk::YLeaf threshold_name; //type: string

}; // Inventory::Racks::Rack::Entity::Slot::Tsi1s::Tsi1::Tsi2s::Tsi2::Tsi3s::Tsi3::Tsi4s::Tsi4::Tsi5s::Tsi5::Tsi6s::Tsi6::Tsi7s::Tsi7::Tsi8s::Tsi8::Attributes::EnvSensorInfoXml::Threshold::ThresholdArray


class Inventory::Racks::Rack::Entity::Slot::Tsi1s::Tsi1::Tsi2s::Tsi2::Tsi3s::Tsi3::Tsi4s::Tsi4::Tsi5s::Tsi5::Tsi6s::Tsi6::Tsi7s::Tsi7::Tsi8s::Tsi8::Attributes::InvAssetBag : public ydk::Entity
{
    public:
        InvAssetBag();
        ~InvAssetBag();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf part_number; //type: string
        ydk::YLeaf manufacturer_assembly_number; //type: string
        ydk::YLeaf manufacturer_assembly_revision; //type: string
        ydk::YLeaf manufacturer_firmware_identifier; //type: string
        ydk::YLeaf manufacturer_software_identifier; //type: string
        ydk::YLeaf manufacturer_common_language_equipment_identifier; //type: string
        ydk::YLeaf original_equipment_manufacturer_string; //type: string

}; // Inventory::Racks::Rack::Entity::Slot::Tsi1s::Tsi1::Tsi2s::Tsi2::Tsi3s::Tsi3::Tsi4s::Tsi4::Tsi5s::Tsi5::Tsi6s::Tsi6::Tsi7s::Tsi7::Tsi8s::Tsi8::Attributes::InvAssetBag


class Inventory::Racks::Rack::Entity::Slot::Tsi1s::Tsi1::Tsi2s::Tsi2::Tsi3s::Tsi3::Tsi4s::Tsi4::Tsi5s::Tsi5::Tsi6s::Tsi6::Tsi7s::Tsi7::Tsi8s::Tsi8::Attributes::Threshold : public ydk::Entity
{
    public:
        Threshold();
        ~Threshold();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class MajorLo; //type: Inventory::Racks::Rack::Entity::Slot::Tsi1s::Tsi1::Tsi2s::Tsi2::Tsi3s::Tsi3::Tsi4s::Tsi4::Tsi5s::Tsi5::Tsi6s::Tsi6::Tsi7s::Tsi7::Tsi8s::Tsi8::Attributes::Threshold::MajorLo
        class CriticalHi; //type: Inventory::Racks::Rack::Entity::Slot::Tsi1s::Tsi1::Tsi2s::Tsi2::Tsi3s::Tsi3::Tsi4s::Tsi4::Tsi5s::Tsi5::Tsi6s::Tsi6::Tsi7s::Tsi7::Tsi8s::Tsi8::Attributes::Threshold::CriticalHi
        class MinorHi; //type: Inventory::Racks::Rack::Entity::Slot::Tsi1s::Tsi1::Tsi2s::Tsi2::Tsi3s::Tsi3::Tsi4s::Tsi4::Tsi5s::Tsi5::Tsi6s::Tsi6::Tsi7s::Tsi7::Tsi8s::Tsi8::Attributes::Threshold::MinorHi
        class MajorHi; //type: Inventory::Racks::Rack::Entity::Slot::Tsi1s::Tsi1::Tsi2s::Tsi2::Tsi3s::Tsi3::Tsi4s::Tsi4::Tsi5s::Tsi5::Tsi6s::Tsi6::Tsi7s::Tsi7::Tsi8s::Tsi8::Attributes::Threshold::MajorHi
        class CriticalLo; //type: Inventory::Racks::Rack::Entity::Slot::Tsi1s::Tsi1::Tsi2s::Tsi2::Tsi3s::Tsi3::Tsi4s::Tsi4::Tsi5s::Tsi5::Tsi6s::Tsi6::Tsi7s::Tsi7::Tsi8s::Tsi8::Attributes::Threshold::CriticalLo
        class MinorLo; //type: Inventory::Racks::Rack::Entity::Slot::Tsi1s::Tsi1::Tsi2s::Tsi2::Tsi3s::Tsi3::Tsi4s::Tsi4::Tsi5s::Tsi5::Tsi6s::Tsi6::Tsi7s::Tsi7::Tsi8s::Tsi8::Attributes::Threshold::MinorLo

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_invmgr_oper::Inventory::Racks::Rack::Entity::Slot::Tsi1s::Tsi1::Tsi2s::Tsi2::Tsi3s::Tsi3::Tsi4s::Tsi4::Tsi5s::Tsi5::Tsi6s::Tsi6::Tsi7s::Tsi7::Tsi8s::Tsi8::Attributes::Threshold::MajorLo> major_lo;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_invmgr_oper::Inventory::Racks::Rack::Entity::Slot::Tsi1s::Tsi1::Tsi2s::Tsi2::Tsi3s::Tsi3::Tsi4s::Tsi4::Tsi5s::Tsi5::Tsi6s::Tsi6::Tsi7s::Tsi7::Tsi8s::Tsi8::Attributes::Threshold::CriticalHi> critical_hi;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_invmgr_oper::Inventory::Racks::Rack::Entity::Slot::Tsi1s::Tsi1::Tsi2s::Tsi2::Tsi3s::Tsi3::Tsi4s::Tsi4::Tsi5s::Tsi5::Tsi6s::Tsi6::Tsi7s::Tsi7::Tsi8s::Tsi8::Attributes::Threshold::MinorHi> minor_hi;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_invmgr_oper::Inventory::Racks::Rack::Entity::Slot::Tsi1s::Tsi1::Tsi2s::Tsi2::Tsi3s::Tsi3::Tsi4s::Tsi4::Tsi5s::Tsi5::Tsi6s::Tsi6::Tsi7s::Tsi7::Tsi8s::Tsi8::Attributes::Threshold::MajorHi> major_hi;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_invmgr_oper::Inventory::Racks::Rack::Entity::Slot::Tsi1s::Tsi1::Tsi2s::Tsi2::Tsi3s::Tsi3::Tsi4s::Tsi4::Tsi5s::Tsi5::Tsi6s::Tsi6::Tsi7s::Tsi7::Tsi8s::Tsi8::Attributes::Threshold::CriticalLo> critical_lo;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_invmgr_oper::Inventory::Racks::Rack::Entity::Slot::Tsi1s::Tsi1::Tsi2s::Tsi2::Tsi3s::Tsi3::Tsi4s::Tsi4::Tsi5s::Tsi5::Tsi6s::Tsi6::Tsi7s::Tsi7::Tsi8s::Tsi8::Attributes::Threshold::MinorLo> minor_lo;
        
}; // Inventory::Racks::Rack::Entity::Slot::Tsi1s::Tsi1::Tsi2s::Tsi2::Tsi3s::Tsi3::Tsi4s::Tsi4::Tsi5s::Tsi5::Tsi6s::Tsi6::Tsi7s::Tsi7::Tsi8s::Tsi8::Attributes::Threshold


class Inventory::Racks::Rack::Entity::Slot::Tsi1s::Tsi1::Tsi2s::Tsi2::Tsi3s::Tsi3::Tsi4s::Tsi4::Tsi5s::Tsi5::Tsi6s::Tsi6::Tsi7s::Tsi7::Tsi8s::Tsi8::Attributes::Threshold::MajorLo : public ydk::Entity
{
    public:
        MajorLo();
        ~MajorLo();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class ThreshBag; //type: Inventory::Racks::Rack::Entity::Slot::Tsi1s::Tsi1::Tsi2s::Tsi2::Tsi3s::Tsi3::Tsi4s::Tsi4::Tsi5s::Tsi5::Tsi6s::Tsi6::Tsi7s::Tsi7::Tsi8s::Tsi8::Attributes::Threshold::MajorLo::ThreshBag

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_invmgr_oper::Inventory::Racks::Rack::Entity::Slot::Tsi1s::Tsi1::Tsi2s::Tsi2::Tsi3s::Tsi3::Tsi4s::Tsi4::Tsi5s::Tsi5::Tsi6s::Tsi6::Tsi7s::Tsi7::Tsi8s::Tsi8::Attributes::Threshold::MajorLo::ThreshBag> thresh_bag;
        
}; // Inventory::Racks::Rack::Entity::Slot::Tsi1s::Tsi1::Tsi2s::Tsi2::Tsi3s::Tsi3::Tsi4s::Tsi4::Tsi5s::Tsi5::Tsi6s::Tsi6::Tsi7s::Tsi7::Tsi8s::Tsi8::Attributes::Threshold::MajorLo


class Inventory::Racks::Rack::Entity::Slot::Tsi1s::Tsi1::Tsi2s::Tsi2::Tsi3s::Tsi3::Tsi4s::Tsi4::Tsi5s::Tsi5::Tsi6s::Tsi6::Tsi7s::Tsi7::Tsi8s::Tsi8::Attributes::Threshold::MajorLo::ThreshBag : public ydk::Entity
{
    public:
        ThreshBag();
        ~ThreshBag();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf threshold_severity; //type: uint32
        ydk::YLeaf threshold_relation; //type: uint32
        ydk::YLeaf threshold_value; //type: uint32
        ydk::YLeaf threshold_evaluation; //type: boolean
        ydk::YLeaf threshold_notification_enabled; //type: boolean

}; // Inventory::Racks::Rack::Entity::Slot::Tsi1s::Tsi1::Tsi2s::Tsi2::Tsi3s::Tsi3::Tsi4s::Tsi4::Tsi5s::Tsi5::Tsi6s::Tsi6::Tsi7s::Tsi7::Tsi8s::Tsi8::Attributes::Threshold::MajorLo::ThreshBag


class Inventory::Racks::Rack::Entity::Slot::Tsi1s::Tsi1::Tsi2s::Tsi2::Tsi3s::Tsi3::Tsi4s::Tsi4::Tsi5s::Tsi5::Tsi6s::Tsi6::Tsi7s::Tsi7::Tsi8s::Tsi8::Attributes::Threshold::CriticalHi : public ydk::Entity
{
    public:
        CriticalHi();
        ~CriticalHi();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class ThreshBag; //type: Inventory::Racks::Rack::Entity::Slot::Tsi1s::Tsi1::Tsi2s::Tsi2::Tsi3s::Tsi3::Tsi4s::Tsi4::Tsi5s::Tsi5::Tsi6s::Tsi6::Tsi7s::Tsi7::Tsi8s::Tsi8::Attributes::Threshold::CriticalHi::ThreshBag

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_invmgr_oper::Inventory::Racks::Rack::Entity::Slot::Tsi1s::Tsi1::Tsi2s::Tsi2::Tsi3s::Tsi3::Tsi4s::Tsi4::Tsi5s::Tsi5::Tsi6s::Tsi6::Tsi7s::Tsi7::Tsi8s::Tsi8::Attributes::Threshold::CriticalHi::ThreshBag> thresh_bag;
        
}; // Inventory::Racks::Rack::Entity::Slot::Tsi1s::Tsi1::Tsi2s::Tsi2::Tsi3s::Tsi3::Tsi4s::Tsi4::Tsi5s::Tsi5::Tsi6s::Tsi6::Tsi7s::Tsi7::Tsi8s::Tsi8::Attributes::Threshold::CriticalHi


class Inventory::Racks::Rack::Entity::Slot::Tsi1s::Tsi1::Tsi2s::Tsi2::Tsi3s::Tsi3::Tsi4s::Tsi4::Tsi5s::Tsi5::Tsi6s::Tsi6::Tsi7s::Tsi7::Tsi8s::Tsi8::Attributes::Threshold::CriticalHi::ThreshBag : public ydk::Entity
{
    public:
        ThreshBag();
        ~ThreshBag();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf threshold_severity; //type: uint32
        ydk::YLeaf threshold_relation; //type: uint32
        ydk::YLeaf threshold_value; //type: uint32
        ydk::YLeaf threshold_evaluation; //type: boolean
        ydk::YLeaf threshold_notification_enabled; //type: boolean

}; // Inventory::Racks::Rack::Entity::Slot::Tsi1s::Tsi1::Tsi2s::Tsi2::Tsi3s::Tsi3::Tsi4s::Tsi4::Tsi5s::Tsi5::Tsi6s::Tsi6::Tsi7s::Tsi7::Tsi8s::Tsi8::Attributes::Threshold::CriticalHi::ThreshBag


class Inventory::Racks::Rack::Entity::Slot::Tsi1s::Tsi1::Tsi2s::Tsi2::Tsi3s::Tsi3::Tsi4s::Tsi4::Tsi5s::Tsi5::Tsi6s::Tsi6::Tsi7s::Tsi7::Tsi8s::Tsi8::Attributes::Threshold::MinorHi : public ydk::Entity
{
    public:
        MinorHi();
        ~MinorHi();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class ThreshBag; //type: Inventory::Racks::Rack::Entity::Slot::Tsi1s::Tsi1::Tsi2s::Tsi2::Tsi3s::Tsi3::Tsi4s::Tsi4::Tsi5s::Tsi5::Tsi6s::Tsi6::Tsi7s::Tsi7::Tsi8s::Tsi8::Attributes::Threshold::MinorHi::ThreshBag

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_invmgr_oper::Inventory::Racks::Rack::Entity::Slot::Tsi1s::Tsi1::Tsi2s::Tsi2::Tsi3s::Tsi3::Tsi4s::Tsi4::Tsi5s::Tsi5::Tsi6s::Tsi6::Tsi7s::Tsi7::Tsi8s::Tsi8::Attributes::Threshold::MinorHi::ThreshBag> thresh_bag;
        
}; // Inventory::Racks::Rack::Entity::Slot::Tsi1s::Tsi1::Tsi2s::Tsi2::Tsi3s::Tsi3::Tsi4s::Tsi4::Tsi5s::Tsi5::Tsi6s::Tsi6::Tsi7s::Tsi7::Tsi8s::Tsi8::Attributes::Threshold::MinorHi


class Inventory::Racks::Rack::Entity::Slot::Tsi1s::Tsi1::Tsi2s::Tsi2::Tsi3s::Tsi3::Tsi4s::Tsi4::Tsi5s::Tsi5::Tsi6s::Tsi6::Tsi7s::Tsi7::Tsi8s::Tsi8::Attributes::Threshold::MinorHi::ThreshBag : public ydk::Entity
{
    public:
        ThreshBag();
        ~ThreshBag();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf threshold_severity; //type: uint32
        ydk::YLeaf threshold_relation; //type: uint32
        ydk::YLeaf threshold_value; //type: uint32
        ydk::YLeaf threshold_evaluation; //type: boolean
        ydk::YLeaf threshold_notification_enabled; //type: boolean

}; // Inventory::Racks::Rack::Entity::Slot::Tsi1s::Tsi1::Tsi2s::Tsi2::Tsi3s::Tsi3::Tsi4s::Tsi4::Tsi5s::Tsi5::Tsi6s::Tsi6::Tsi7s::Tsi7::Tsi8s::Tsi8::Attributes::Threshold::MinorHi::ThreshBag


class Inventory::Racks::Rack::Entity::Slot::Tsi1s::Tsi1::Tsi2s::Tsi2::Tsi3s::Tsi3::Tsi4s::Tsi4::Tsi5s::Tsi5::Tsi6s::Tsi6::Tsi7s::Tsi7::Tsi8s::Tsi8::Attributes::Threshold::MajorHi : public ydk::Entity
{
    public:
        MajorHi();
        ~MajorHi();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class ThreshBag; //type: Inventory::Racks::Rack::Entity::Slot::Tsi1s::Tsi1::Tsi2s::Tsi2::Tsi3s::Tsi3::Tsi4s::Tsi4::Tsi5s::Tsi5::Tsi6s::Tsi6::Tsi7s::Tsi7::Tsi8s::Tsi8::Attributes::Threshold::MajorHi::ThreshBag

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_invmgr_oper::Inventory::Racks::Rack::Entity::Slot::Tsi1s::Tsi1::Tsi2s::Tsi2::Tsi3s::Tsi3::Tsi4s::Tsi4::Tsi5s::Tsi5::Tsi6s::Tsi6::Tsi7s::Tsi7::Tsi8s::Tsi8::Attributes::Threshold::MajorHi::ThreshBag> thresh_bag;
        
}; // Inventory::Racks::Rack::Entity::Slot::Tsi1s::Tsi1::Tsi2s::Tsi2::Tsi3s::Tsi3::Tsi4s::Tsi4::Tsi5s::Tsi5::Tsi6s::Tsi6::Tsi7s::Tsi7::Tsi8s::Tsi8::Attributes::Threshold::MajorHi


class Inventory::Racks::Rack::Entity::Slot::Tsi1s::Tsi1::Tsi2s::Tsi2::Tsi3s::Tsi3::Tsi4s::Tsi4::Tsi5s::Tsi5::Tsi6s::Tsi6::Tsi7s::Tsi7::Tsi8s::Tsi8::Attributes::Threshold::MajorHi::ThreshBag : public ydk::Entity
{
    public:
        ThreshBag();
        ~ThreshBag();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf threshold_severity; //type: uint32
        ydk::YLeaf threshold_relation; //type: uint32
        ydk::YLeaf threshold_value; //type: uint32
        ydk::YLeaf threshold_evaluation; //type: boolean
        ydk::YLeaf threshold_notification_enabled; //type: boolean

}; // Inventory::Racks::Rack::Entity::Slot::Tsi1s::Tsi1::Tsi2s::Tsi2::Tsi3s::Tsi3::Tsi4s::Tsi4::Tsi5s::Tsi5::Tsi6s::Tsi6::Tsi7s::Tsi7::Tsi8s::Tsi8::Attributes::Threshold::MajorHi::ThreshBag


class Inventory::Racks::Rack::Entity::Slot::Tsi1s::Tsi1::Tsi2s::Tsi2::Tsi3s::Tsi3::Tsi4s::Tsi4::Tsi5s::Tsi5::Tsi6s::Tsi6::Tsi7s::Tsi7::Tsi8s::Tsi8::Attributes::Threshold::CriticalLo : public ydk::Entity
{
    public:
        CriticalLo();
        ~CriticalLo();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class ThreshBag; //type: Inventory::Racks::Rack::Entity::Slot::Tsi1s::Tsi1::Tsi2s::Tsi2::Tsi3s::Tsi3::Tsi4s::Tsi4::Tsi5s::Tsi5::Tsi6s::Tsi6::Tsi7s::Tsi7::Tsi8s::Tsi8::Attributes::Threshold::CriticalLo::ThreshBag

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_invmgr_oper::Inventory::Racks::Rack::Entity::Slot::Tsi1s::Tsi1::Tsi2s::Tsi2::Tsi3s::Tsi3::Tsi4s::Tsi4::Tsi5s::Tsi5::Tsi6s::Tsi6::Tsi7s::Tsi7::Tsi8s::Tsi8::Attributes::Threshold::CriticalLo::ThreshBag> thresh_bag;
        
}; // Inventory::Racks::Rack::Entity::Slot::Tsi1s::Tsi1::Tsi2s::Tsi2::Tsi3s::Tsi3::Tsi4s::Tsi4::Tsi5s::Tsi5::Tsi6s::Tsi6::Tsi7s::Tsi7::Tsi8s::Tsi8::Attributes::Threshold::CriticalLo


class Inventory::Racks::Rack::Entity::Slot::Tsi1s::Tsi1::Tsi2s::Tsi2::Tsi3s::Tsi3::Tsi4s::Tsi4::Tsi5s::Tsi5::Tsi6s::Tsi6::Tsi7s::Tsi7::Tsi8s::Tsi8::Attributes::Threshold::CriticalLo::ThreshBag : public ydk::Entity
{
    public:
        ThreshBag();
        ~ThreshBag();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf threshold_severity; //type: uint32
        ydk::YLeaf threshold_relation; //type: uint32
        ydk::YLeaf threshold_value; //type: uint32
        ydk::YLeaf threshold_evaluation; //type: boolean
        ydk::YLeaf threshold_notification_enabled; //type: boolean

}; // Inventory::Racks::Rack::Entity::Slot::Tsi1s::Tsi1::Tsi2s::Tsi2::Tsi3s::Tsi3::Tsi4s::Tsi4::Tsi5s::Tsi5::Tsi6s::Tsi6::Tsi7s::Tsi7::Tsi8s::Tsi8::Attributes::Threshold::CriticalLo::ThreshBag


class Inventory::Racks::Rack::Entity::Slot::Tsi1s::Tsi1::Tsi2s::Tsi2::Tsi3s::Tsi3::Tsi4s::Tsi4::Tsi5s::Tsi5::Tsi6s::Tsi6::Tsi7s::Tsi7::Tsi8s::Tsi8::Attributes::Threshold::MinorLo : public ydk::Entity
{
    public:
        MinorLo();
        ~MinorLo();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class ThreshBag; //type: Inventory::Racks::Rack::Entity::Slot::Tsi1s::Tsi1::Tsi2s::Tsi2::Tsi3s::Tsi3::Tsi4s::Tsi4::Tsi5s::Tsi5::Tsi6s::Tsi6::Tsi7s::Tsi7::Tsi8s::Tsi8::Attributes::Threshold::MinorLo::ThreshBag

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_invmgr_oper::Inventory::Racks::Rack::Entity::Slot::Tsi1s::Tsi1::Tsi2s::Tsi2::Tsi3s::Tsi3::Tsi4s::Tsi4::Tsi5s::Tsi5::Tsi6s::Tsi6::Tsi7s::Tsi7::Tsi8s::Tsi8::Attributes::Threshold::MinorLo::ThreshBag> thresh_bag;
        
}; // Inventory::Racks::Rack::Entity::Slot::Tsi1s::Tsi1::Tsi2s::Tsi2::Tsi3s::Tsi3::Tsi4s::Tsi4::Tsi5s::Tsi5::Tsi6s::Tsi6::Tsi7s::Tsi7::Tsi8s::Tsi8::Attributes::Threshold::MinorLo


class Inventory::Racks::Rack::Entity::Slot::Tsi1s::Tsi1::Tsi2s::Tsi2::Tsi3s::Tsi3::Tsi4s::Tsi4::Tsi5s::Tsi5::Tsi6s::Tsi6::Tsi7s::Tsi7::Tsi8s::Tsi8::Attributes::Threshold::MinorLo::ThreshBag : public ydk::Entity
{
    public:
        ThreshBag();
        ~ThreshBag();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf threshold_severity; //type: uint32
        ydk::YLeaf threshold_relation; //type: uint32
        ydk::YLeaf threshold_value; //type: uint32
        ydk::YLeaf threshold_evaluation; //type: boolean
        ydk::YLeaf threshold_notification_enabled; //type: boolean

}; // Inventory::Racks::Rack::Entity::Slot::Tsi1s::Tsi1::Tsi2s::Tsi2::Tsi3s::Tsi3::Tsi4s::Tsi4::Tsi5s::Tsi5::Tsi6s::Tsi6::Tsi7s::Tsi7::Tsi8s::Tsi8::Attributes::Threshold::MinorLo::ThreshBag


class Inventory::Racks::Rack::Entity::Slot::Tsi1s::Tsi1::Tsi2s::Tsi2::Tsi3s::Tsi3::Tsi4s::Tsi4::Tsi5s::Tsi5::Tsi6s::Tsi6::Tsi7s::Tsi7::Tsi8s::Tsi8::Attributes::FruInfo : public ydk::Entity
{
    public:
        FruInfo();
        ~FruInfo();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf card_administrative_state; //type: int32
        ydk::YLeaf power_administrative_state; //type: int32
        ydk::YLeaf card_operational_state; //type: int32
        ydk::YLeaf card_monitor_state; //type: int32
        ydk::YLeaf card_reset_reason; //type: CardResetReason
        ydk::YLeaf power_current_measurement; //type: int32
        ydk::YLeaf power_operational_state; //type: int32
        class LastOperationalStateChange; //type: Inventory::Racks::Rack::Entity::Slot::Tsi1s::Tsi1::Tsi2s::Tsi2::Tsi3s::Tsi3::Tsi4s::Tsi4::Tsi5s::Tsi5::Tsi6s::Tsi6::Tsi7s::Tsi7::Tsi8s::Tsi8::Attributes::FruInfo::LastOperationalStateChange
        class CardUpTime; //type: Inventory::Racks::Rack::Entity::Slot::Tsi1s::Tsi1::Tsi2s::Tsi2::Tsi3s::Tsi3::Tsi4s::Tsi4::Tsi5s::Tsi5::Tsi6s::Tsi6::Tsi7s::Tsi7::Tsi8s::Tsi8::Attributes::FruInfo::CardUpTime

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_invmgr_oper::Inventory::Racks::Rack::Entity::Slot::Tsi1s::Tsi1::Tsi2s::Tsi2::Tsi3s::Tsi3::Tsi4s::Tsi4::Tsi5s::Tsi5::Tsi6s::Tsi6::Tsi7s::Tsi7::Tsi8s::Tsi8::Attributes::FruInfo::LastOperationalStateChange> last_operational_state_change;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_invmgr_oper::Inventory::Racks::Rack::Entity::Slot::Tsi1s::Tsi1::Tsi2s::Tsi2::Tsi3s::Tsi3::Tsi4s::Tsi4::Tsi5s::Tsi5::Tsi6s::Tsi6::Tsi7s::Tsi7::Tsi8s::Tsi8::Attributes::FruInfo::CardUpTime> card_up_time;
        
}; // Inventory::Racks::Rack::Entity::Slot::Tsi1s::Tsi1::Tsi2s::Tsi2::Tsi3s::Tsi3::Tsi4s::Tsi4::Tsi5s::Tsi5::Tsi6s::Tsi6::Tsi7s::Tsi7::Tsi8s::Tsi8::Attributes::FruInfo


class Inventory::Racks::Rack::Entity::Slot::Tsi1s::Tsi1::Tsi2s::Tsi2::Tsi3s::Tsi3::Tsi4s::Tsi4::Tsi5s::Tsi5::Tsi6s::Tsi6::Tsi7s::Tsi7::Tsi8s::Tsi8::Attributes::FruInfo::LastOperationalStateChange : public ydk::Entity
{
    public:
        LastOperationalStateChange();
        ~LastOperationalStateChange();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf time_in_seconds; //type: int32
        ydk::YLeaf time_in_nano_seconds; //type: int32

}; // Inventory::Racks::Rack::Entity::Slot::Tsi1s::Tsi1::Tsi2s::Tsi2::Tsi3s::Tsi3::Tsi4s::Tsi4::Tsi5s::Tsi5::Tsi6s::Tsi6::Tsi7s::Tsi7::Tsi8s::Tsi8::Attributes::FruInfo::LastOperationalStateChange


class Inventory::Racks::Rack::Entity::Slot::Tsi1s::Tsi1::Tsi2s::Tsi2::Tsi3s::Tsi3::Tsi4s::Tsi4::Tsi5s::Tsi5::Tsi6s::Tsi6::Tsi7s::Tsi7::Tsi8s::Tsi8::Attributes::FruInfo::CardUpTime : public ydk::Entity
{
    public:
        CardUpTime();
        ~CardUpTime();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf time_in_seconds; //type: int32
        ydk::YLeaf time_in_nano_seconds; //type: int32

}; // Inventory::Racks::Rack::Entity::Slot::Tsi1s::Tsi1::Tsi2s::Tsi2::Tsi3s::Tsi3::Tsi4s::Tsi4::Tsi5s::Tsi5::Tsi6s::Tsi6::Tsi7s::Tsi7::Tsi8s::Tsi8::Attributes::FruInfo::CardUpTime


class Inventory::Racks::Rack::Entity::Slot::Tsi1s::Tsi1::Tsi2s::Tsi2::Tsi3s::Tsi3::Tsi4s::Tsi4::Tsi5s::Tsi5::Tsi6s::Tsi6::Tsi7s::Tsi7::Tsi8s::Tsi8::Attributes::InvEepromInfo : public ydk::Entity
{
    public:
        InvEepromInfo();
        ~InvEepromInfo();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf inv_card_type; //type: uint8
        ydk::YLeaf opaque_data; //type: string
        ydk::YLeaf opaque_data_size; //type: uint32
        ydk::YLeaf has_eeprom; //type: uint32
        ydk::YLeaf description; //type: string
        class Eeprom; //type: Inventory::Racks::Rack::Entity::Slot::Tsi1s::Tsi1::Tsi2s::Tsi2::Tsi3s::Tsi3::Tsi4s::Tsi4::Tsi5s::Tsi5::Tsi6s::Tsi6::Tsi7s::Tsi7::Tsi8s::Tsi8::Attributes::InvEepromInfo::Eeprom

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_invmgr_oper::Inventory::Racks::Rack::Entity::Slot::Tsi1s::Tsi1::Tsi2s::Tsi2::Tsi3s::Tsi3::Tsi4s::Tsi4::Tsi5s::Tsi5::Tsi6s::Tsi6::Tsi7s::Tsi7::Tsi8s::Tsi8::Attributes::InvEepromInfo::Eeprom> eeprom;
        
}; // Inventory::Racks::Rack::Entity::Slot::Tsi1s::Tsi1::Tsi2s::Tsi2::Tsi3s::Tsi3::Tsi4s::Tsi4::Tsi5s::Tsi5::Tsi6s::Tsi6::Tsi7s::Tsi7::Tsi8s::Tsi8::Attributes::InvEepromInfo


class Inventory::Racks::Rack::Entity::Slot::Tsi1s::Tsi1::Tsi2s::Tsi2::Tsi3s::Tsi3::Tsi4s::Tsi4::Tsi5s::Tsi5::Tsi6s::Tsi6::Tsi7s::Tsi7::Tsi8s::Tsi8::Attributes::InvEepromInfo::Eeprom : public ydk::Entity
{
    public:
        Eeprom();
        ~Eeprom();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf description; //type: string
        ydk::YLeaf idprom_format_rev; //type: string
        ydk::YLeaf controller_family; //type: string
        ydk::YLeaf controller_type; //type: string
        ydk::YLeaf vid; //type: string
        ydk::YLeaf hwid; //type: string
        ydk::YLeaf pid; //type: string
        ydk::YLeaf udi_description; //type: string
        ydk::YLeaf udi_name; //type: string
        ydk::YLeaf clei; //type: string
        ydk::YLeaf eci; //type: string
        ydk::YLeaf top_assem_part_num; //type: string
        ydk::YLeaf top_assem_vid; //type: string
        ydk::YLeaf pca_num; //type: string
        ydk::YLeaf pcavid; //type: string
        ydk::YLeaf chassis_sid; //type: string
        ydk::YLeaf dev_num1; //type: string
        ydk::YLeaf dev_num2; //type: string
        ydk::YLeaf dev_num3; //type: string
        ydk::YLeaf dev_num4; //type: string
        ydk::YLeaf dev_num5; //type: string
        ydk::YLeaf dev_num6; //type: string
        ydk::YLeaf dev_num7; //type: string
        ydk::YLeaf manu_test_data; //type: string
        ydk::YLeaf asset_id; //type: string
        ydk::YLeaf asset_alias; //type: string
        ydk::YLeaf base_mac_address1; //type: string
        ydk::YLeaf mac_add_blk_size1; //type: string
        ydk::YLeaf base_mac_address2; //type: string
        ydk::YLeaf mac_add_blk_size2; //type: string
        ydk::YLeaf base_mac_address3; //type: string
        ydk::YLeaf mac_add_blk_size3; //type: string
        ydk::YLeaf base_mac_address4; //type: string
        ydk::YLeaf mac_add_blk_size4; //type: string
        ydk::YLeaf pcb_serial_num; //type: string
        ydk::YLeaf power_supply_type; //type: string
        ydk::YLeaf power_consumption; //type: string
        ydk::YLeaf block_signature; //type: string
        ydk::YLeaf block_version; //type: string
        ydk::YLeaf block_length; //type: string
        ydk::YLeaf block_checksum; //type: string
        ydk::YLeaf eeprom_size; //type: string
        ydk::YLeaf block_count; //type: string
        ydk::YLeaf fru_major_type; //type: string
        ydk::YLeaf fru_minor_type; //type: string
        ydk::YLeaf oem_string; //type: string
        ydk::YLeaf product_id; //type: string
        ydk::YLeaf serial_number; //type: string
        ydk::YLeaf part_number; //type: string
        ydk::YLeaf part_revision; //type: string
        ydk::YLeaf mfg_deviation; //type: string
        ydk::YLeaf hw_version; //type: string
        ydk::YLeaf mfg_bits; //type: string
        ydk::YLeaf engineer_use; //type: string
        ydk::YLeaf snmpoid; //type: string
        ydk::YLeaf rma_code; //type: string
        class Rma; //type: Inventory::Racks::Rack::Entity::Slot::Tsi1s::Tsi1::Tsi2s::Tsi2::Tsi3s::Tsi3::Tsi4s::Tsi4::Tsi5s::Tsi5::Tsi6s::Tsi6::Tsi7s::Tsi7::Tsi8s::Tsi8::Attributes::InvEepromInfo::Eeprom::Rma

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_invmgr_oper::Inventory::Racks::Rack::Entity::Slot::Tsi1s::Tsi1::Tsi2s::Tsi2::Tsi3s::Tsi3::Tsi4s::Tsi4::Tsi5s::Tsi5::Tsi6s::Tsi6::Tsi7s::Tsi7::Tsi8s::Tsi8::Attributes::InvEepromInfo::Eeprom::Rma> rma;
        
}; // Inventory::Racks::Rack::Entity::Slot::Tsi1s::Tsi1::Tsi2s::Tsi2::Tsi3s::Tsi3::Tsi4s::Tsi4::Tsi5s::Tsi5::Tsi6s::Tsi6::Tsi7s::Tsi7::Tsi8s::Tsi8::Attributes::InvEepromInfo::Eeprom


class Inventory::Racks::Rack::Entity::Slot::Tsi1s::Tsi1::Tsi2s::Tsi2::Tsi3s::Tsi3::Tsi4s::Tsi4::Tsi5s::Tsi5::Tsi6s::Tsi6::Tsi7s::Tsi7::Tsi8s::Tsi8::Attributes::InvEepromInfo::Eeprom::Rma : public ydk::Entity
{
    public:
        Rma();
        ~Rma();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf test_history; //type: string
        ydk::YLeaf rma_number; //type: string
        ydk::YLeaf rma_history; //type: string

}; // Inventory::Racks::Rack::Entity::Slot::Tsi1s::Tsi1::Tsi2s::Tsi2::Tsi3s::Tsi3::Tsi4s::Tsi4::Tsi5s::Tsi5::Tsi6s::Tsi6::Tsi7s::Tsi7::Tsi8s::Tsi8::Attributes::InvEepromInfo::Eeprom::Rma


class Inventory::Racks::Rack::Entity::Slot::Tsi1s::Tsi1::Tsi2s::Tsi2::Tsi3s::Tsi3::Tsi4s::Tsi4::Tsi5s::Tsi5::Tsi6s::Tsi6::Tsi7s::Tsi7::Attributes : public ydk::Entity
{
    public:
        Attributes();
        ~Attributes();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class InvBasicBag; //type: Inventory::Racks::Rack::Entity::Slot::Tsi1s::Tsi1::Tsi2s::Tsi2::Tsi3s::Tsi3::Tsi4s::Tsi4::Tsi5s::Tsi5::Tsi6s::Tsi6::Tsi7s::Tsi7::Attributes::InvBasicBag
        class EnvSensorInfo; //type: Inventory::Racks::Rack::Entity::Slot::Tsi1s::Tsi1::Tsi2s::Tsi2::Tsi3s::Tsi3::Tsi4s::Tsi4::Tsi5s::Tsi5::Tsi6s::Tsi6::Tsi7s::Tsi7::Attributes::EnvSensorInfo
        class PwgInfo; //type: Inventory::Racks::Rack::Entity::Slot::Tsi1s::Tsi1::Tsi2s::Tsi2::Tsi3s::Tsi3::Tsi4s::Tsi4::Tsi5s::Tsi5::Tsi6s::Tsi6::Tsi7s::Tsi7::Attributes::PwgInfo
        class EnvSensorInfoXml; //type: Inventory::Racks::Rack::Entity::Slot::Tsi1s::Tsi1::Tsi2s::Tsi2::Tsi3s::Tsi3::Tsi4s::Tsi4::Tsi5s::Tsi5::Tsi6s::Tsi6::Tsi7s::Tsi7::Attributes::EnvSensorInfoXml
        class InvAssetBag; //type: Inventory::Racks::Rack::Entity::Slot::Tsi1s::Tsi1::Tsi2s::Tsi2::Tsi3s::Tsi3::Tsi4s::Tsi4::Tsi5s::Tsi5::Tsi6s::Tsi6::Tsi7s::Tsi7::Attributes::InvAssetBag
        class Threshold; //type: Inventory::Racks::Rack::Entity::Slot::Tsi1s::Tsi1::Tsi2s::Tsi2::Tsi3s::Tsi3::Tsi4s::Tsi4::Tsi5s::Tsi5::Tsi6s::Tsi6::Tsi7s::Tsi7::Attributes::Threshold
        class FruInfo; //type: Inventory::Racks::Rack::Entity::Slot::Tsi1s::Tsi1::Tsi2s::Tsi2::Tsi3s::Tsi3::Tsi4s::Tsi4::Tsi5s::Tsi5::Tsi6s::Tsi6::Tsi7s::Tsi7::Attributes::FruInfo
        class InvEepromInfo; //type: Inventory::Racks::Rack::Entity::Slot::Tsi1s::Tsi1::Tsi2s::Tsi2::Tsi3s::Tsi3::Tsi4s::Tsi4::Tsi5s::Tsi5::Tsi6s::Tsi6::Tsi7s::Tsi7::Attributes::InvEepromInfo

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_invmgr_oper::Inventory::Racks::Rack::Entity::Slot::Tsi1s::Tsi1::Tsi2s::Tsi2::Tsi3s::Tsi3::Tsi4s::Tsi4::Tsi5s::Tsi5::Tsi6s::Tsi6::Tsi7s::Tsi7::Attributes::InvBasicBag> inv_basic_bag;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_invmgr_oper::Inventory::Racks::Rack::Entity::Slot::Tsi1s::Tsi1::Tsi2s::Tsi2::Tsi3s::Tsi3::Tsi4s::Tsi4::Tsi5s::Tsi5::Tsi6s::Tsi6::Tsi7s::Tsi7::Attributes::EnvSensorInfo> env_sensor_info;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_invmgr_oper::Inventory::Racks::Rack::Entity::Slot::Tsi1s::Tsi1::Tsi2s::Tsi2::Tsi3s::Tsi3::Tsi4s::Tsi4::Tsi5s::Tsi5::Tsi6s::Tsi6::Tsi7s::Tsi7::Attributes::PwgInfo> pwg_info;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_invmgr_oper::Inventory::Racks::Rack::Entity::Slot::Tsi1s::Tsi1::Tsi2s::Tsi2::Tsi3s::Tsi3::Tsi4s::Tsi4::Tsi5s::Tsi5::Tsi6s::Tsi6::Tsi7s::Tsi7::Attributes::EnvSensorInfoXml> env_sensor_info_xml;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_invmgr_oper::Inventory::Racks::Rack::Entity::Slot::Tsi1s::Tsi1::Tsi2s::Tsi2::Tsi3s::Tsi3::Tsi4s::Tsi4::Tsi5s::Tsi5::Tsi6s::Tsi6::Tsi7s::Tsi7::Attributes::InvAssetBag> inv_asset_bag;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_invmgr_oper::Inventory::Racks::Rack::Entity::Slot::Tsi1s::Tsi1::Tsi2s::Tsi2::Tsi3s::Tsi3::Tsi4s::Tsi4::Tsi5s::Tsi5::Tsi6s::Tsi6::Tsi7s::Tsi7::Attributes::Threshold> threshold;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_invmgr_oper::Inventory::Racks::Rack::Entity::Slot::Tsi1s::Tsi1::Tsi2s::Tsi2::Tsi3s::Tsi3::Tsi4s::Tsi4::Tsi5s::Tsi5::Tsi6s::Tsi6::Tsi7s::Tsi7::Attributes::FruInfo> fru_info;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_invmgr_oper::Inventory::Racks::Rack::Entity::Slot::Tsi1s::Tsi1::Tsi2s::Tsi2::Tsi3s::Tsi3::Tsi4s::Tsi4::Tsi5s::Tsi5::Tsi6s::Tsi6::Tsi7s::Tsi7::Attributes::InvEepromInfo> inv_eeprom_info;
        
}; // Inventory::Racks::Rack::Entity::Slot::Tsi1s::Tsi1::Tsi2s::Tsi2::Tsi3s::Tsi3::Tsi4s::Tsi4::Tsi5s::Tsi5::Tsi6s::Tsi6::Tsi7s::Tsi7::Attributes


class Inventory::Racks::Rack::Entity::Slot::Tsi1s::Tsi1::Tsi2s::Tsi2::Tsi3s::Tsi3::Tsi4s::Tsi4::Tsi5s::Tsi5::Tsi6s::Tsi6::Tsi7s::Tsi7::Attributes::InvBasicBag : public ydk::Entity
{
    public:
        InvBasicBag();
        ~InvBasicBag();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf description; //type: string
        ydk::YLeaf vendor_type; //type: string
        ydk::YLeaf name; //type: string
        ydk::YLeaf hardware_revision; //type: string
        ydk::YLeaf firmware_revision; //type: string
        ydk::YLeaf software_revision; //type: string
        ydk::YLeaf chip_hardware_revision; //type: string
        ydk::YLeaf serial_number; //type: string
        ydk::YLeaf manufacturer_name; //type: string
        ydk::YLeaf model_name; //type: string
        ydk::YLeaf asset_id_str; //type: string
        ydk::YLeaf asset_identification; //type: int32
        ydk::YLeaf is_field_replaceable_unit; //type: boolean
        ydk::YLeaf manufacturer_asset_tags; //type: int32
        ydk::YLeaf composite_class_code; //type: int32
        ydk::YLeaf memory_size; //type: int32
        ydk::YLeaf environmental_monitor_path; //type: string
        ydk::YLeaf alias; //type: string
        ydk::YLeaf group_flag; //type: boolean
        ydk::YLeaf new_deviation_number; //type: int32
        ydk::YLeaf physical_layer_interface_module_type; //type: int32
        ydk::YLeaf unrecognized_fru; //type: boolean
        ydk::YLeaf redundancystate; //type: int32
        ydk::YLeaf ceport; //type: boolean
        ydk::YLeaf xr_scoped; //type: boolean
        ydk::YLeaf unique_id; //type: int32

}; // Inventory::Racks::Rack::Entity::Slot::Tsi1s::Tsi1::Tsi2s::Tsi2::Tsi3s::Tsi3::Tsi4s::Tsi4::Tsi5s::Tsi5::Tsi6s::Tsi6::Tsi7s::Tsi7::Attributes::InvBasicBag


class Inventory::Racks::Rack::Entity::Slot::Tsi1s::Tsi1::Tsi2s::Tsi2::Tsi3s::Tsi3::Tsi4s::Tsi4::Tsi5s::Tsi5::Tsi6s::Tsi6::Tsi7s::Tsi7::Attributes::EnvSensorInfo : public ydk::Entity
{
    public:
        EnvSensorInfo();
        ~EnvSensorInfo();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf field_validity_bitmap; //type: uint32
        ydk::YLeaf device_description; //type: string
        ydk::YLeaf units; //type: string
        ydk::YLeaf device_id; //type: uint32
        ydk::YLeaf value_; //type: uint32
        ydk::YLeaf alarm_type; //type: uint32
        ydk::YLeaf data_type; //type: uint32
        ydk::YLeaf scale; //type: uint32
        ydk::YLeaf precision; //type: uint32
        ydk::YLeaf status; //type: uint32
        ydk::YLeaf age_time_stamp; //type: uint32
        ydk::YLeaf update_rate; //type: uint32

}; // Inventory::Racks::Rack::Entity::Slot::Tsi1s::Tsi1::Tsi2s::Tsi2::Tsi3s::Tsi3::Tsi4s::Tsi4::Tsi5s::Tsi5::Tsi6s::Tsi6::Tsi7s::Tsi7::Attributes::EnvSensorInfo


class Inventory::Racks::Rack::Entity::Slot::Tsi1s::Tsi1::Tsi2s::Tsi2::Tsi3s::Tsi3::Tsi4s::Tsi4::Tsi5s::Tsi5::Tsi6s::Tsi6::Tsi7s::Tsi7::Attributes::PwgInfo : public ydk::Entity
{
    public:
        PwgInfo();
        ~PwgInfo();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf power_group_redundancy_mode; //type: int32
        ydk::YLeaf power_group_power_units; //type: string
        ydk::YLeaf power_group_available_current; //type: int32
        ydk::YLeaf power_group_drawn_current; //type: int32

}; // Inventory::Racks::Rack::Entity::Slot::Tsi1s::Tsi1::Tsi2s::Tsi2::Tsi3s::Tsi3::Tsi4s::Tsi4::Tsi5s::Tsi5::Tsi6s::Tsi6::Tsi7s::Tsi7::Attributes::PwgInfo


class Inventory::Racks::Rack::Entity::Slot::Tsi1s::Tsi1::Tsi2s::Tsi2::Tsi3s::Tsi3::Tsi4s::Tsi4::Tsi5s::Tsi5::Tsi6s::Tsi6::Tsi7s::Tsi7::Attributes::EnvSensorInfoXml : public ydk::Entity
{
    public:
        EnvSensorInfoXml();
        ~EnvSensorInfoXml();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf description; //type: string
        ydk::YLeaf units; //type: Unit
        ydk::YLeaf value_; //type: string
        ydk::YLeaf data_type; //type: SensorData
        ydk::YLeaf status; //type: SensorStatus
        ydk::YLeaf update_rate; //type: uint32
        class Threshold; //type: Inventory::Racks::Rack::Entity::Slot::Tsi1s::Tsi1::Tsi2s::Tsi2::Tsi3s::Tsi3::Tsi4s::Tsi4::Tsi5s::Tsi5::Tsi6s::Tsi6::Tsi7s::Tsi7::Attributes::EnvSensorInfoXml::Threshold

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_invmgr_oper::Inventory::Racks::Rack::Entity::Slot::Tsi1s::Tsi1::Tsi2s::Tsi2::Tsi3s::Tsi3::Tsi4s::Tsi4::Tsi5s::Tsi5::Tsi6s::Tsi6::Tsi7s::Tsi7::Attributes::EnvSensorInfoXml::Threshold> threshold;
        
}; // Inventory::Racks::Rack::Entity::Slot::Tsi1s::Tsi1::Tsi2s::Tsi2::Tsi3s::Tsi3::Tsi4s::Tsi4::Tsi5s::Tsi5::Tsi6s::Tsi6::Tsi7s::Tsi7::Attributes::EnvSensorInfoXml


class Inventory::Racks::Rack::Entity::Slot::Tsi1s::Tsi1::Tsi2s::Tsi2::Tsi3s::Tsi3::Tsi4s::Tsi4::Tsi5s::Tsi5::Tsi6s::Tsi6::Tsi7s::Tsi7::Attributes::EnvSensorInfoXml::Threshold : public ydk::Entity
{
    public:
        Threshold();
        ~Threshold();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class ThresholdArray; //type: Inventory::Racks::Rack::Entity::Slot::Tsi1s::Tsi1::Tsi2s::Tsi2::Tsi3s::Tsi3::Tsi4s::Tsi4::Tsi5s::Tsi5::Tsi6s::Tsi6::Tsi7s::Tsi7::Attributes::EnvSensorInfoXml::Threshold::ThresholdArray

        ydk::YList threshold_array;
        
}; // Inventory::Racks::Rack::Entity::Slot::Tsi1s::Tsi1::Tsi2s::Tsi2::Tsi3s::Tsi3::Tsi4s::Tsi4::Tsi5s::Tsi5::Tsi6s::Tsi6::Tsi7s::Tsi7::Attributes::EnvSensorInfoXml::Threshold


class Inventory::Racks::Rack::Entity::Slot::Tsi1s::Tsi1::Tsi2s::Tsi2::Tsi3s::Tsi3::Tsi4s::Tsi4::Tsi5s::Tsi5::Tsi6s::Tsi6::Tsi7s::Tsi7::Attributes::EnvSensorInfoXml::Threshold::ThresholdArray : public ydk::Entity
{
    public:
        ThresholdArray();
        ~ThresholdArray();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf threshold_severity; //type: ThresholdSeverity
        ydk::YLeaf threshold_relation; //type: ThresholdRelation
        ydk::YLeaf threshold_value; //type: int32
        ydk::YLeaf threshold_name; //type: string

}; // Inventory::Racks::Rack::Entity::Slot::Tsi1s::Tsi1::Tsi2s::Tsi2::Tsi3s::Tsi3::Tsi4s::Tsi4::Tsi5s::Tsi5::Tsi6s::Tsi6::Tsi7s::Tsi7::Attributes::EnvSensorInfoXml::Threshold::ThresholdArray


class Inventory::Racks::Rack::Entity::Slot::Tsi1s::Tsi1::Tsi2s::Tsi2::Tsi3s::Tsi3::Tsi4s::Tsi4::Tsi5s::Tsi5::Tsi6s::Tsi6::Tsi7s::Tsi7::Attributes::InvAssetBag : public ydk::Entity
{
    public:
        InvAssetBag();
        ~InvAssetBag();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf part_number; //type: string
        ydk::YLeaf manufacturer_assembly_number; //type: string
        ydk::YLeaf manufacturer_assembly_revision; //type: string
        ydk::YLeaf manufacturer_firmware_identifier; //type: string
        ydk::YLeaf manufacturer_software_identifier; //type: string
        ydk::YLeaf manufacturer_common_language_equipment_identifier; //type: string
        ydk::YLeaf original_equipment_manufacturer_string; //type: string

}; // Inventory::Racks::Rack::Entity::Slot::Tsi1s::Tsi1::Tsi2s::Tsi2::Tsi3s::Tsi3::Tsi4s::Tsi4::Tsi5s::Tsi5::Tsi6s::Tsi6::Tsi7s::Tsi7::Attributes::InvAssetBag

class CardResetReason : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf reset_unknown;
        static const ydk::Enum::YLeaf power_up;
        static const ydk::Enum::YLeaf parity_error;
        static const ydk::Enum::YLeaf clear_config_reset;
        static const ydk::Enum::YLeaf manual_reset;
        static const ydk::Enum::YLeaf watch_dog_timeout_reset;
        static const ydk::Enum::YLeaf resource_overflow_reset;
        static const ydk::Enum::YLeaf missing_task_reset;
        static const ydk::Enum::YLeaf low_voltage_reset;
        static const ydk::Enum::YLeaf controller_reset;
        static const ydk::Enum::YLeaf system_reset;
        static const ydk::Enum::YLeaf switchover_reset;
        static const ydk::Enum::YLeaf upgrade_reset;
        static const ydk::Enum::YLeaf downgrade_reset;
        static const ydk::Enum::YLeaf cache_error_reset;
        static const ydk::Enum::YLeaf device_driver_reset;
        static const ydk::Enum::YLeaf software_exception_reset;
        static const ydk::Enum::YLeaf restore_config_reset;
        static const ydk::Enum::YLeaf abort_rev_reset;
        static const ydk::Enum::YLeaf burn_boot_reset;
        static const ydk::Enum::YLeaf standby_cd_healthier_reset;
        static const ydk::Enum::YLeaf non_native_config_clear_reset;
        static const ydk::Enum::YLeaf memory_protection_error_reset;
        static const ydk::Enum::YLeaf card_reset_reason_max;

        static int get_enum_value(const std::string & name) {
            if (name == "reset-unknown") return 1;
            if (name == "power-up") return 2;
            if (name == "parity-error") return 3;
            if (name == "clear-config-reset") return 4;
            if (name == "manual-reset") return 5;
            if (name == "watch-dog-timeout-reset") return 6;
            if (name == "resource-overflow-reset") return 7;
            if (name == "missing-task-reset") return 8;
            if (name == "low-voltage-reset") return 9;
            if (name == "controller-reset") return 10;
            if (name == "system-reset") return 11;
            if (name == "switchover-reset") return 12;
            if (name == "upgrade-reset") return 13;
            if (name == "downgrade-reset") return 14;
            if (name == "cache-error-reset") return 15;
            if (name == "device-driver-reset") return 16;
            if (name == "software-exception-reset") return 17;
            if (name == "restore-config-reset") return 18;
            if (name == "abort-rev-reset") return 19;
            if (name == "burn-boot-reset") return 20;
            if (name == "standby-cd-healthier-reset") return 21;
            if (name == "non-native-config-clear-reset") return 22;
            if (name == "memory-protection-error-reset") return 23;
            if (name == "card-reset-reason-max") return 24;
            return -1;
        }
};

class ThresholdSeverity : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf other;
        static const ydk::Enum::YLeaf minor;
        static const ydk::Enum::YLeaf major_;
        static const ydk::Enum::YLeaf critical;

        static int get_enum_value(const std::string & name) {
            if (name == "other") return 1;
            if (name == "minor") return 10;
            if (name == "major") return 20;
            if (name == "critical") return 30;
            return -1;
        }
};

class SensorData : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf unknown;
        static const ydk::Enum::YLeaf ac_volts;
        static const ydk::Enum::YLeaf dc_volts;
        static const ydk::Enum::YLeaf amperes;
        static const ydk::Enum::YLeaf watts;
        static const ydk::Enum::YLeaf hertz;
        static const ydk::Enum::YLeaf celsius;
        static const ydk::Enum::YLeaf rpm;
        static const ydk::Enum::YLeaf dbm;
        static const ydk::Enum::YLeaf db;

        static int get_enum_value(const std::string & name) {
            if (name == "unknown") return 2;
            if (name == "ac-volts") return 3;
            if (name == "dc-volts") return 4;
            if (name == "amperes") return 5;
            if (name == "watts") return 6;
            if (name == "hertz") return 7;
            if (name == "celsius") return 8;
            if (name == "rpm") return 10;
            if (name == "dbm") return 14;
            if (name == "db") return 15;
            return -1;
        }
};

class SensorStatus : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf ok;
        static const ydk::Enum::YLeaf unavailable;
        static const ydk::Enum::YLeaf non_operational;

        static int get_enum_value(const std::string & name) {
            if (name == "ok") return 1;
            if (name == "unavailable") return 2;
            if (name == "non-operational") return 3;
            return -1;
        }
};

class ThresholdRelation : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf less_than;
        static const ydk::Enum::YLeaf less_or_equal;
        static const ydk::Enum::YLeaf greater_than;
        static const ydk::Enum::YLeaf greater_or_equal;
        static const ydk::Enum::YLeaf equal;
        static const ydk::Enum::YLeaf not_equal;

        static int get_enum_value(const std::string & name) {
            if (name == "less-than") return 1;
            if (name == "less-or-equal") return 2;
            if (name == "greater-than") return 3;
            if (name == "greater-or-equal") return 4;
            if (name == "equal") return 5;
            if (name == "not-equal") return 6;
            return -1;
        }
};

class Unit : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf celsius;
        static const ydk::Enum::YLeaf milli_volts;
        static const ydk::Enum::YLeaf milli_amperes;
        static const ydk::Enum::YLeaf rpm;
        static const ydk::Enum::YLeaf watts;
        static const ydk::Enum::YLeaf dbm;
        static const ydk::Enum::YLeaf db;

        static int get_enum_value(const std::string & name) {
            if (name == "celsius") return 0;
            if (name == "milli-volts") return 1;
            if (name == "milli-amperes") return 2;
            if (name == "rpm") return 3;
            if (name == "watts") return 4;
            if (name == "dbm") return 5;
            if (name == "db") return 6;
            return -1;
        }
};


}
}

#endif /* _CISCO_IOS_XR_INVMGR_OPER_0_ */


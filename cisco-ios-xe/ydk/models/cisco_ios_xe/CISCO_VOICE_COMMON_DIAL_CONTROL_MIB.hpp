#ifndef _CISCO_VOICE_COMMON_DIAL_CONTROL_MIB_
#define _CISCO_VOICE_COMMON_DIAL_CONTROL_MIB_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>

namespace cisco_ios_xe {
namespace CISCO_VOICE_COMMON_DIAL_CONTROL_MIB {

class CISCOVOICECOMMONDIALCONTROLMIB : public ydk::Entity
{
    public:
        CISCOVOICECOMMONDIALCONTROLMIB();
        ~CISCOVOICECOMMONDIALCONTROLMIB();

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

        class CvCommonDcCallActiveTable; //type: CISCOVOICECOMMONDIALCONTROLMIB::CvCommonDcCallActiveTable
        class CvCommonDcCallHistoryTable; //type: CISCOVOICECOMMONDIALCONTROLMIB::CvCommonDcCallHistoryTable

        std::shared_ptr<cisco_ios_xe::CISCO_VOICE_COMMON_DIAL_CONTROL_MIB::CISCOVOICECOMMONDIALCONTROLMIB::CvCommonDcCallActiveTable> cvcommondccallactivetable;
        std::shared_ptr<cisco_ios_xe::CISCO_VOICE_COMMON_DIAL_CONTROL_MIB::CISCOVOICECOMMONDIALCONTROLMIB::CvCommonDcCallHistoryTable> cvcommondccallhistorytable;
        
}; // CISCOVOICECOMMONDIALCONTROLMIB


class CISCOVOICECOMMONDIALCONTROLMIB::CvCommonDcCallActiveTable : public ydk::Entity
{
    public:
        CvCommonDcCallActiveTable();
        ~CvCommonDcCallActiveTable();

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

        class CvCommonDcCallActiveEntry; //type: CISCOVOICECOMMONDIALCONTROLMIB::CvCommonDcCallActiveTable::CvCommonDcCallActiveEntry

        ydk::YList cvcommondccallactiveentry;
        
}; // CISCOVOICECOMMONDIALCONTROLMIB::CvCommonDcCallActiveTable


class CISCOVOICECOMMONDIALCONTROLMIB::CvCommonDcCallActiveTable::CvCommonDcCallActiveEntry : public ydk::Entity
{
    public:
        CvCommonDcCallActiveEntry();
        ~CvCommonDcCallActiveEntry();

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

        //type: uint32 (refers to cisco_ios_xe::DIAL_CONTROL_MIB::DIALCONTROLMIB::CallActiveTable::CallActiveEntry::callactivesetuptime)
        ydk::YLeaf callactivesetuptime;
        //type: int32 (refers to cisco_ios_xe::DIAL_CONTROL_MIB::DIALCONTROLMIB::CallActiveTable::CallActiveEntry::callactiveindex)
        ydk::YLeaf callactiveindex;
        ydk::YLeaf cvcommondccallactiveconnectionid; //type: binary
        ydk::YLeaf cvcommondccallactivevadenable; //type: boolean
        ydk::YLeaf cvcommondccallactivecodertyperate; //type: CvcCoderTypeRate
        ydk::YLeaf cvcommondccallactivecodecbytes; //type: int32
        ydk::YLeaf cvcommondccallactiveinbandsignaling; //type: CvcInBandSignaling
        ydk::YLeaf cvcommondccallactivecallingname; //type: string
        ydk::YLeaf cvcommondccallactivecalleridblock; //type: boolean

}; // CISCOVOICECOMMONDIALCONTROLMIB::CvCommonDcCallActiveTable::CvCommonDcCallActiveEntry


class CISCOVOICECOMMONDIALCONTROLMIB::CvCommonDcCallHistoryTable : public ydk::Entity
{
    public:
        CvCommonDcCallHistoryTable();
        ~CvCommonDcCallHistoryTable();

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

        class CvCommonDcCallHistoryEntry; //type: CISCOVOICECOMMONDIALCONTROLMIB::CvCommonDcCallHistoryTable::CvCommonDcCallHistoryEntry

        ydk::YList cvcommondccallhistoryentry;
        
}; // CISCOVOICECOMMONDIALCONTROLMIB::CvCommonDcCallHistoryTable


class CISCOVOICECOMMONDIALCONTROLMIB::CvCommonDcCallHistoryTable::CvCommonDcCallHistoryEntry : public ydk::Entity
{
    public:
        CvCommonDcCallHistoryEntry();
        ~CvCommonDcCallHistoryEntry();

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

        //type: uint32 (refers to cisco_ios_xe::CISCO_DIAL_CONTROL_MIB::CISCODIALCONTROLMIB::CCallHistoryTable::CCallHistoryEntry::ccallhistoryindex)
        ydk::YLeaf ccallhistoryindex;
        ydk::YLeaf cvcommondccallhistoryconnectionid; //type: binary
        ydk::YLeaf cvcommondccallhistoryvadenable; //type: boolean
        ydk::YLeaf cvcommondccallhistorycodertyperate; //type: CvcCoderTypeRate
        ydk::YLeaf cvcommondccallhistorycodecbytes; //type: int32
        ydk::YLeaf cvcommondccallhistoryinbandsignaling; //type: CvcInBandSignaling
        ydk::YLeaf cvcommondccallhistorycallingname; //type: string
        ydk::YLeaf cvcommondccallhistorycalleridblock; //type: boolean

}; // CISCOVOICECOMMONDIALCONTROLMIB::CvCommonDcCallHistoryTable::CvCommonDcCallHistoryEntry

class CvcInBandSignaling : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf cas;
        static const ydk::Enum::YLeaf none;
        static const ydk::Enum::YLeaf cept;
        static const ydk::Enum::YLeaf transparent;
        static const ydk::Enum::YLeaf gr303;

        static int get_enum_value(const std::string & name) {
            if (name == "cas") return 1;
            if (name == "none") return 2;
            if (name == "cept") return 3;
            if (name == "transparent") return 4;
            if (name == "gr303") return 5;
            return -1;
        }
};

class CvcCoderTypeRate : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf other;
        static const ydk::Enum::YLeaf fax2400;
        static const ydk::Enum::YLeaf fax4800;
        static const ydk::Enum::YLeaf fax7200;
        static const ydk::Enum::YLeaf fax9600;
        static const ydk::Enum::YLeaf fax14400;
        static const ydk::Enum::YLeaf fax12000;
        static const ydk::Enum::YLeaf g729r8000;
        static const ydk::Enum::YLeaf g729Ar8000;
        static const ydk::Enum::YLeaf g726r16000;
        static const ydk::Enum::YLeaf g726r24000;
        static const ydk::Enum::YLeaf g726r32000;
        static const ydk::Enum::YLeaf g711ulawr64000;
        static const ydk::Enum::YLeaf g711Alawr64000;
        static const ydk::Enum::YLeaf g728r16000;
        static const ydk::Enum::YLeaf g723r6300;
        static const ydk::Enum::YLeaf g723r5300;
        static const ydk::Enum::YLeaf gsmr13200;
        static const ydk::Enum::YLeaf g729Br8000;
        static const ydk::Enum::YLeaf g729ABr8000;
        static const ydk::Enum::YLeaf g723Ar6300;
        static const ydk::Enum::YLeaf g723Ar5300;
        static const ydk::Enum::YLeaf ietfg729r8000;
        static const ydk::Enum::YLeaf gsmeEr12200;
        static const ydk::Enum::YLeaf clearChannel;
        static const ydk::Enum::YLeaf g726r40000;
        static const ydk::Enum::YLeaf llcc;
        static const ydk::Enum::YLeaf gsmAmrNb;
        static const ydk::Enum::YLeaf g722;
        static const ydk::Enum::YLeaf iLBC;
        static const ydk::Enum::YLeaf iLBCr15200;
        static const ydk::Enum::YLeaf iLBCr13330;
        static const ydk::Enum::YLeaf g722r4800;
        static const ydk::Enum::YLeaf g722r5600;
        static const ydk::Enum::YLeaf g722r6400;
        static const ydk::Enum::YLeaf iSAC;
        static const ydk::Enum::YLeaf aaclc;
        static const ydk::Enum::YLeaf aacld;

        static int get_enum_value(const std::string & name) {
            if (name == "other") return 1;
            if (name == "fax2400") return 2;
            if (name == "fax4800") return 3;
            if (name == "fax7200") return 4;
            if (name == "fax9600") return 5;
            if (name == "fax14400") return 6;
            if (name == "fax12000") return 7;
            if (name == "g729r8000") return 10;
            if (name == "g729Ar8000") return 11;
            if (name == "g726r16000") return 12;
            if (name == "g726r24000") return 13;
            if (name == "g726r32000") return 14;
            if (name == "g711ulawr64000") return 15;
            if (name == "g711Alawr64000") return 16;
            if (name == "g728r16000") return 17;
            if (name == "g723r6300") return 18;
            if (name == "g723r5300") return 19;
            if (name == "gsmr13200") return 20;
            if (name == "g729Br8000") return 21;
            if (name == "g729ABr8000") return 22;
            if (name == "g723Ar6300") return 23;
            if (name == "g723Ar5300") return 24;
            if (name == "ietfg729r8000") return 25;
            if (name == "gsmeEr12200") return 26;
            if (name == "clearChannel") return 27;
            if (name == "g726r40000") return 28;
            if (name == "llcc") return 29;
            if (name == "gsmAmrNb") return 30;
            if (name == "g722") return 31;
            if (name == "iLBC") return 32;
            if (name == "iLBCr15200") return 33;
            if (name == "iLBCr13330") return 34;
            if (name == "g722r4800") return 35;
            if (name == "g722r5600") return 36;
            if (name == "g722r6400") return 37;
            if (name == "iSAC") return 38;
            if (name == "aaclc") return 39;
            if (name == "aacld") return 40;
            return -1;
        }
};

class CvcVideoCoderRate : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf none;
        static const ydk::Enum::YLeaf h261;
        static const ydk::Enum::YLeaf h263;
        static const ydk::Enum::YLeaf h263plus;
        static const ydk::Enum::YLeaf h264;

        static int get_enum_value(const std::string & name) {
            if (name == "none") return 0;
            if (name == "h261") return 1;
            if (name == "h263") return 2;
            if (name == "h263plus") return 3;
            if (name == "h264") return 4;
            return -1;
        }
};

class CvcH320CallType : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf none;
        static const ydk::Enum::YLeaf primary;
        static const ydk::Enum::YLeaf secondary;

        static int get_enum_value(const std::string & name) {
            if (name == "none") return 0;
            if (name == "primary") return 1;
            if (name == "secondary") return 2;
            return -1;
        }
};

class CvcSpeechCoderRate : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf g729r8000;
        static const ydk::Enum::YLeaf g729Ar8000;
        static const ydk::Enum::YLeaf g726r16000;
        static const ydk::Enum::YLeaf g726r24000;
        static const ydk::Enum::YLeaf g726r32000;
        static const ydk::Enum::YLeaf g711ulawr64000;
        static const ydk::Enum::YLeaf g711Alawr64000;
        static const ydk::Enum::YLeaf g728r16000;
        static const ydk::Enum::YLeaf g723r6300;
        static const ydk::Enum::YLeaf g723r5300;
        static const ydk::Enum::YLeaf gsmr13200;
        static const ydk::Enum::YLeaf g729Br8000;
        static const ydk::Enum::YLeaf g729ABr8000;
        static const ydk::Enum::YLeaf g723Ar6300;
        static const ydk::Enum::YLeaf g723Ar5300;
        static const ydk::Enum::YLeaf g729IETFr8000;
        static const ydk::Enum::YLeaf gsmeEr12200;
        static const ydk::Enum::YLeaf clearChannel;
        static const ydk::Enum::YLeaf g726r40000;
        static const ydk::Enum::YLeaf llcc;
        static const ydk::Enum::YLeaf gsmAmrNb;
        static const ydk::Enum::YLeaf iLBC;
        static const ydk::Enum::YLeaf iLBCr15200;
        static const ydk::Enum::YLeaf iLBCr13330;
        static const ydk::Enum::YLeaf g722r4800;
        static const ydk::Enum::YLeaf g722r5600;
        static const ydk::Enum::YLeaf g722r6400;
        static const ydk::Enum::YLeaf iSAC;
        static const ydk::Enum::YLeaf aaclc;
        static const ydk::Enum::YLeaf aacld;

        static int get_enum_value(const std::string & name) {
            if (name == "g729r8000") return 1;
            if (name == "g729Ar8000") return 2;
            if (name == "g726r16000") return 3;
            if (name == "g726r24000") return 4;
            if (name == "g726r32000") return 5;
            if (name == "g711ulawr64000") return 6;
            if (name == "g711Alawr64000") return 7;
            if (name == "g728r16000") return 8;
            if (name == "g723r6300") return 9;
            if (name == "g723r5300") return 10;
            if (name == "gsmr13200") return 11;
            if (name == "g729Br8000") return 12;
            if (name == "g729ABr8000") return 13;
            if (name == "g723Ar6300") return 14;
            if (name == "g723Ar5300") return 15;
            if (name == "g729IETFr8000") return 16;
            if (name == "gsmeEr12200") return 17;
            if (name == "clearChannel") return 18;
            if (name == "g726r40000") return 19;
            if (name == "llcc") return 20;
            if (name == "gsmAmrNb") return 21;
            if (name == "iLBC") return 22;
            if (name == "iLBCr15200") return 23;
            if (name == "iLBCr13330") return 24;
            if (name == "g722r4800") return 25;
            if (name == "g722r5600") return 26;
            if (name == "g722r6400") return 27;
            if (name == "iSAC") return 28;
            if (name == "aaclc") return 29;
            if (name == "aacld") return 30;
            return -1;
        }
};

class CvcFaxTransmitRate : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf none;
        static const ydk::Enum::YLeaf voiceRate;
        static const ydk::Enum::YLeaf fax2400;
        static const ydk::Enum::YLeaf fax4800;
        static const ydk::Enum::YLeaf fax7200;
        static const ydk::Enum::YLeaf fax9600;
        static const ydk::Enum::YLeaf fax14400;
        static const ydk::Enum::YLeaf fax12000;

        static int get_enum_value(const std::string & name) {
            if (name == "none") return 1;
            if (name == "voiceRate") return 2;
            if (name == "fax2400") return 3;
            if (name == "fax4800") return 4;
            if (name == "fax7200") return 5;
            if (name == "fax9600") return 6;
            if (name == "fax14400") return 7;
            if (name == "fax12000") return 8;
            return -1;
        }
};


}
}

#endif /* _CISCO_VOICE_COMMON_DIAL_CONTROL_MIB_ */


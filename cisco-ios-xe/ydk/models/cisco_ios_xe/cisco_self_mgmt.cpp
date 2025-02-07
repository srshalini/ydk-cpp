
#include <sstream>
#include <iostream>
#include <ydk/entity_util.hpp>
#include "bundle_info.hpp"
#include "generated_entity_lookup.hpp"
#include "cisco_self_mgmt.hpp"

using namespace ydk;

namespace cisco_ios_xe {
namespace cisco_self_mgmt {

NetconfYang::NetconfYang()
    :
    cisco_ia(std::make_shared<NetconfYang::CiscoIa>())
{
    cisco_ia->parent = this;

    yang_name = "netconf-yang"; yang_parent_name = "cisco-self-mgmt"; is_top_level_class = true; has_list_ancestor = false; 
}

NetconfYang::~NetconfYang()
{
}

bool NetconfYang::has_data() const
{
    if (is_presence_container) return true;
    return (cisco_ia !=  nullptr && cisco_ia->has_data());
}

bool NetconfYang::has_operation() const
{
    return is_set(yfilter)
	|| (cisco_ia !=  nullptr && cisco_ia->has_operation());
}

std::string NetconfYang::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cisco-self-mgmt:netconf-yang";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > NetconfYang::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> NetconfYang::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "cisco-ia:cisco-ia")
    {
        if(cisco_ia == nullptr)
        {
            cisco_ia = std::make_shared<NetconfYang::CiscoIa>();
        }
        return cisco_ia;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> NetconfYang::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(cisco_ia != nullptr)
    {
        _children["cisco-ia:cisco-ia"] = cisco_ia;
    }

    return _children;
}

void NetconfYang::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void NetconfYang::set_filter(const std::string & value_path, YFilter yfilter)
{
}

std::shared_ptr<ydk::Entity> NetconfYang::clone_ptr() const
{
    return std::make_shared<NetconfYang>();
}

std::string NetconfYang::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xe_models_path;
}

std::string NetconfYang::get_bundle_name() const
{
    return "cisco_ios_xe";
}

augment_capabilities_function NetconfYang::get_augment_capabilities_function() const
{
    return cisco_ios_xe_augment_lookup_tables;
}

std::map<std::pair<std::string, std::string>, std::string> NetconfYang::get_namespace_identity_lookup() const
{
    return cisco_ios_xe_namespace_identity_lookup;
}

bool NetconfYang::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "cisco-ia")
        return true;
    return false;
}

NetconfYang::CiscoIa::CiscoIa()
    :
    auto_sync{YType::enumeration, "auto-sync"},
    init_sync{YType::enumeration, "init-sync"},
    intelligent_sync{YType::boolean, "intelligent-sync"},
    message_diag_level{YType::int16, "message-diag-level"},
    max_diag_messages_saved{YType::int16, "max-diag-messages-saved"},
    post_sync_acl_process{YType::boolean, "post-sync-acl-process"},
    config_change_delay{YType::int16, "config-change-delay"},
    process_missing_prc{YType::boolean, "process-missing-prc"},
    missing_prc_method{YType::enumeration, "missing-prc-method"},
    snmp_community_string{YType::str, "snmp-community-string"},
    preserve_paths_enabled{YType::boolean, "preserve-paths-enabled"},
    nes_ttynum{YType::int16, "nes-ttynum"},
    restored{YType::boolean, "restored"}
        ,
    snmp_trap_control(std::make_shared<NetconfYang::CiscoIa::SnmpTrapControl>())
    , preserve_ned_path(this, {"xpath"})
    , parser_msg_ignore(this, {"message"})
    , conf_parser_msg_ignore(this, {"message"})
    , parser_msg_error(this, {"message"})
    , conf_parser_msg_error(this, {"message"})
    , full_sync_cli(this, {"command"})
    , conf_full_sync_cli(this, {"command"})
    , logging(std::make_shared<NetconfYang::CiscoIa::Logging>())
    , blocking(std::make_shared<NetconfYang::CiscoIa::Blocking>())
    , pivot_commands(std::make_shared<NetconfYang::CiscoIa::PivotCommands>())
{
    snmp_trap_control->parent = this;
    logging->parent = this;
    blocking->parent = this;
    pivot_commands->parent = this;

    yang_name = "cisco-ia"; yang_parent_name = "netconf-yang"; is_top_level_class = false; has_list_ancestor = false; 
}

NetconfYang::CiscoIa::~CiscoIa()
{
}

bool NetconfYang::CiscoIa::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<preserve_ned_path.len(); index++)
    {
        if(preserve_ned_path[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<parser_msg_ignore.len(); index++)
    {
        if(parser_msg_ignore[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<conf_parser_msg_ignore.len(); index++)
    {
        if(conf_parser_msg_ignore[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<parser_msg_error.len(); index++)
    {
        if(parser_msg_error[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<conf_parser_msg_error.len(); index++)
    {
        if(conf_parser_msg_error[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<full_sync_cli.len(); index++)
    {
        if(full_sync_cli[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<conf_full_sync_cli.len(); index++)
    {
        if(conf_full_sync_cli[index]->has_data())
            return true;
    }
    return auto_sync.is_set
	|| init_sync.is_set
	|| intelligent_sync.is_set
	|| message_diag_level.is_set
	|| max_diag_messages_saved.is_set
	|| post_sync_acl_process.is_set
	|| config_change_delay.is_set
	|| process_missing_prc.is_set
	|| missing_prc_method.is_set
	|| snmp_community_string.is_set
	|| preserve_paths_enabled.is_set
	|| nes_ttynum.is_set
	|| restored.is_set
	|| (snmp_trap_control !=  nullptr && snmp_trap_control->has_data())
	|| (logging !=  nullptr && logging->has_data())
	|| (blocking !=  nullptr && blocking->has_data())
	|| (pivot_commands !=  nullptr && pivot_commands->has_data());
}

bool NetconfYang::CiscoIa::has_operation() const
{
    for (std::size_t index=0; index<preserve_ned_path.len(); index++)
    {
        if(preserve_ned_path[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<parser_msg_ignore.len(); index++)
    {
        if(parser_msg_ignore[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<conf_parser_msg_ignore.len(); index++)
    {
        if(conf_parser_msg_ignore[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<parser_msg_error.len(); index++)
    {
        if(parser_msg_error[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<conf_parser_msg_error.len(); index++)
    {
        if(conf_parser_msg_error[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<full_sync_cli.len(); index++)
    {
        if(full_sync_cli[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<conf_full_sync_cli.len(); index++)
    {
        if(conf_full_sync_cli[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(auto_sync.yfilter)
	|| ydk::is_set(init_sync.yfilter)
	|| ydk::is_set(intelligent_sync.yfilter)
	|| ydk::is_set(message_diag_level.yfilter)
	|| ydk::is_set(max_diag_messages_saved.yfilter)
	|| ydk::is_set(post_sync_acl_process.yfilter)
	|| ydk::is_set(config_change_delay.yfilter)
	|| ydk::is_set(process_missing_prc.yfilter)
	|| ydk::is_set(missing_prc_method.yfilter)
	|| ydk::is_set(snmp_community_string.yfilter)
	|| ydk::is_set(preserve_paths_enabled.yfilter)
	|| ydk::is_set(nes_ttynum.yfilter)
	|| ydk::is_set(restored.yfilter)
	|| (snmp_trap_control !=  nullptr && snmp_trap_control->has_operation())
	|| (logging !=  nullptr && logging->has_operation())
	|| (blocking !=  nullptr && blocking->has_operation())
	|| (pivot_commands !=  nullptr && pivot_commands->has_operation());
}

std::string NetconfYang::CiscoIa::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cisco-self-mgmt:netconf-yang/" << get_segment_path();
    return path_buffer.str();
}

std::string NetconfYang::CiscoIa::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cisco-ia:cisco-ia";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > NetconfYang::CiscoIa::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (auto_sync.is_set || is_set(auto_sync.yfilter)) leaf_name_data.push_back(auto_sync.get_name_leafdata());
    if (init_sync.is_set || is_set(init_sync.yfilter)) leaf_name_data.push_back(init_sync.get_name_leafdata());
    if (intelligent_sync.is_set || is_set(intelligent_sync.yfilter)) leaf_name_data.push_back(intelligent_sync.get_name_leafdata());
    if (message_diag_level.is_set || is_set(message_diag_level.yfilter)) leaf_name_data.push_back(message_diag_level.get_name_leafdata());
    if (max_diag_messages_saved.is_set || is_set(max_diag_messages_saved.yfilter)) leaf_name_data.push_back(max_diag_messages_saved.get_name_leafdata());
    if (post_sync_acl_process.is_set || is_set(post_sync_acl_process.yfilter)) leaf_name_data.push_back(post_sync_acl_process.get_name_leafdata());
    if (config_change_delay.is_set || is_set(config_change_delay.yfilter)) leaf_name_data.push_back(config_change_delay.get_name_leafdata());
    if (process_missing_prc.is_set || is_set(process_missing_prc.yfilter)) leaf_name_data.push_back(process_missing_prc.get_name_leafdata());
    if (missing_prc_method.is_set || is_set(missing_prc_method.yfilter)) leaf_name_data.push_back(missing_prc_method.get_name_leafdata());
    if (snmp_community_string.is_set || is_set(snmp_community_string.yfilter)) leaf_name_data.push_back(snmp_community_string.get_name_leafdata());
    if (preserve_paths_enabled.is_set || is_set(preserve_paths_enabled.yfilter)) leaf_name_data.push_back(preserve_paths_enabled.get_name_leafdata());
    if (nes_ttynum.is_set || is_set(nes_ttynum.yfilter)) leaf_name_data.push_back(nes_ttynum.get_name_leafdata());
    if (restored.is_set || is_set(restored.yfilter)) leaf_name_data.push_back(restored.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> NetconfYang::CiscoIa::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "snmp-trap-control")
    {
        if(snmp_trap_control == nullptr)
        {
            snmp_trap_control = std::make_shared<NetconfYang::CiscoIa::SnmpTrapControl>();
        }
        return snmp_trap_control;
    }

    if(child_yang_name == "preserve-ned-path")
    {
        auto ent_ = std::make_shared<NetconfYang::CiscoIa::PreserveNedPath>();
        ent_->parent = this;
        preserve_ned_path.append(ent_);
        return ent_;
    }

    if(child_yang_name == "parser-msg-ignore")
    {
        auto ent_ = std::make_shared<NetconfYang::CiscoIa::ParserMsgIgnore>();
        ent_->parent = this;
        parser_msg_ignore.append(ent_);
        return ent_;
    }

    if(child_yang_name == "conf-parser-msg-ignore")
    {
        auto ent_ = std::make_shared<NetconfYang::CiscoIa::ConfParserMsgIgnore>();
        ent_->parent = this;
        conf_parser_msg_ignore.append(ent_);
        return ent_;
    }

    if(child_yang_name == "parser-msg-error")
    {
        auto ent_ = std::make_shared<NetconfYang::CiscoIa::ParserMsgError>();
        ent_->parent = this;
        parser_msg_error.append(ent_);
        return ent_;
    }

    if(child_yang_name == "conf-parser-msg-error")
    {
        auto ent_ = std::make_shared<NetconfYang::CiscoIa::ConfParserMsgError>();
        ent_->parent = this;
        conf_parser_msg_error.append(ent_);
        return ent_;
    }

    if(child_yang_name == "full-sync-cli")
    {
        auto ent_ = std::make_shared<NetconfYang::CiscoIa::FullSyncCli>();
        ent_->parent = this;
        full_sync_cli.append(ent_);
        return ent_;
    }

    if(child_yang_name == "conf-full-sync-cli")
    {
        auto ent_ = std::make_shared<NetconfYang::CiscoIa::ConfFullSyncCli>();
        ent_->parent = this;
        conf_full_sync_cli.append(ent_);
        return ent_;
    }

    if(child_yang_name == "logging")
    {
        if(logging == nullptr)
        {
            logging = std::make_shared<NetconfYang::CiscoIa::Logging>();
        }
        return logging;
    }

    if(child_yang_name == "blocking")
    {
        if(blocking == nullptr)
        {
            blocking = std::make_shared<NetconfYang::CiscoIa::Blocking>();
        }
        return blocking;
    }

    if(child_yang_name == "pivot-commands")
    {
        if(pivot_commands == nullptr)
        {
            pivot_commands = std::make_shared<NetconfYang::CiscoIa::PivotCommands>();
        }
        return pivot_commands;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> NetconfYang::CiscoIa::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(snmp_trap_control != nullptr)
    {
        _children["snmp-trap-control"] = snmp_trap_control;
    }

    count_ = 0;
    for (auto ent_ : preserve_ned_path.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    count_ = 0;
    for (auto ent_ : parser_msg_ignore.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    count_ = 0;
    for (auto ent_ : conf_parser_msg_ignore.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    count_ = 0;
    for (auto ent_ : parser_msg_error.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    count_ = 0;
    for (auto ent_ : conf_parser_msg_error.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    count_ = 0;
    for (auto ent_ : full_sync_cli.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    count_ = 0;
    for (auto ent_ : conf_full_sync_cli.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    if(logging != nullptr)
    {
        _children["logging"] = logging;
    }

    if(blocking != nullptr)
    {
        _children["blocking"] = blocking;
    }

    if(pivot_commands != nullptr)
    {
        _children["pivot-commands"] = pivot_commands;
    }

    return _children;
}

void NetconfYang::CiscoIa::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "auto-sync")
    {
        auto_sync = value;
        auto_sync.value_namespace = name_space;
        auto_sync.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "init-sync")
    {
        init_sync = value;
        init_sync.value_namespace = name_space;
        init_sync.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "intelligent-sync")
    {
        intelligent_sync = value;
        intelligent_sync.value_namespace = name_space;
        intelligent_sync.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "message-diag-level")
    {
        message_diag_level = value;
        message_diag_level.value_namespace = name_space;
        message_diag_level.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "max-diag-messages-saved")
    {
        max_diag_messages_saved = value;
        max_diag_messages_saved.value_namespace = name_space;
        max_diag_messages_saved.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "post-sync-acl-process")
    {
        post_sync_acl_process = value;
        post_sync_acl_process.value_namespace = name_space;
        post_sync_acl_process.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "config-change-delay")
    {
        config_change_delay = value;
        config_change_delay.value_namespace = name_space;
        config_change_delay.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "process-missing-prc")
    {
        process_missing_prc = value;
        process_missing_prc.value_namespace = name_space;
        process_missing_prc.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "missing-prc-method")
    {
        missing_prc_method = value;
        missing_prc_method.value_namespace = name_space;
        missing_prc_method.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "snmp-community-string")
    {
        snmp_community_string = value;
        snmp_community_string.value_namespace = name_space;
        snmp_community_string.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "preserve-paths-enabled")
    {
        preserve_paths_enabled = value;
        preserve_paths_enabled.value_namespace = name_space;
        preserve_paths_enabled.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nes-ttynum")
    {
        nes_ttynum = value;
        nes_ttynum.value_namespace = name_space;
        nes_ttynum.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "restored")
    {
        restored = value;
        restored.value_namespace = name_space;
        restored.value_namespace_prefix = name_space_prefix;
    }
}

void NetconfYang::CiscoIa::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "auto-sync")
    {
        auto_sync.yfilter = yfilter;
    }
    if(value_path == "init-sync")
    {
        init_sync.yfilter = yfilter;
    }
    if(value_path == "intelligent-sync")
    {
        intelligent_sync.yfilter = yfilter;
    }
    if(value_path == "message-diag-level")
    {
        message_diag_level.yfilter = yfilter;
    }
    if(value_path == "max-diag-messages-saved")
    {
        max_diag_messages_saved.yfilter = yfilter;
    }
    if(value_path == "post-sync-acl-process")
    {
        post_sync_acl_process.yfilter = yfilter;
    }
    if(value_path == "config-change-delay")
    {
        config_change_delay.yfilter = yfilter;
    }
    if(value_path == "process-missing-prc")
    {
        process_missing_prc.yfilter = yfilter;
    }
    if(value_path == "missing-prc-method")
    {
        missing_prc_method.yfilter = yfilter;
    }
    if(value_path == "snmp-community-string")
    {
        snmp_community_string.yfilter = yfilter;
    }
    if(value_path == "preserve-paths-enabled")
    {
        preserve_paths_enabled.yfilter = yfilter;
    }
    if(value_path == "nes-ttynum")
    {
        nes_ttynum.yfilter = yfilter;
    }
    if(value_path == "restored")
    {
        restored.yfilter = yfilter;
    }
}

bool NetconfYang::CiscoIa::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "snmp-trap-control" || name == "preserve-ned-path" || name == "parser-msg-ignore" || name == "conf-parser-msg-ignore" || name == "parser-msg-error" || name == "conf-parser-msg-error" || name == "full-sync-cli" || name == "conf-full-sync-cli" || name == "logging" || name == "blocking" || name == "pivot-commands" || name == "auto-sync" || name == "init-sync" || name == "intelligent-sync" || name == "message-diag-level" || name == "max-diag-messages-saved" || name == "post-sync-acl-process" || name == "config-change-delay" || name == "process-missing-prc" || name == "missing-prc-method" || name == "snmp-community-string" || name == "preserve-paths-enabled" || name == "nes-ttynum" || name == "restored")
        return true;
    return false;
}

NetconfYang::CiscoIa::SnmpTrapControl::SnmpTrapControl()
    :
    global_forwarding{YType::boolean, "global-forwarding"}
        ,
    trap_list(this, {"trap_oid"})
{

    yang_name = "snmp-trap-control"; yang_parent_name = "cisco-ia"; is_top_level_class = false; has_list_ancestor = false; 
}

NetconfYang::CiscoIa::SnmpTrapControl::~SnmpTrapControl()
{
}

bool NetconfYang::CiscoIa::SnmpTrapControl::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<trap_list.len(); index++)
    {
        if(trap_list[index]->has_data())
            return true;
    }
    return global_forwarding.is_set;
}

bool NetconfYang::CiscoIa::SnmpTrapControl::has_operation() const
{
    for (std::size_t index=0; index<trap_list.len(); index++)
    {
        if(trap_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(global_forwarding.yfilter);
}

std::string NetconfYang::CiscoIa::SnmpTrapControl::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cisco-self-mgmt:netconf-yang/cisco-ia:cisco-ia/" << get_segment_path();
    return path_buffer.str();
}

std::string NetconfYang::CiscoIa::SnmpTrapControl::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "snmp-trap-control";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > NetconfYang::CiscoIa::SnmpTrapControl::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (global_forwarding.is_set || is_set(global_forwarding.yfilter)) leaf_name_data.push_back(global_forwarding.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> NetconfYang::CiscoIa::SnmpTrapControl::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "trap-list")
    {
        auto ent_ = std::make_shared<NetconfYang::CiscoIa::SnmpTrapControl::TrapList>();
        ent_->parent = this;
        trap_list.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> NetconfYang::CiscoIa::SnmpTrapControl::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : trap_list.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void NetconfYang::CiscoIa::SnmpTrapControl::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "global-forwarding")
    {
        global_forwarding = value;
        global_forwarding.value_namespace = name_space;
        global_forwarding.value_namespace_prefix = name_space_prefix;
    }
}

void NetconfYang::CiscoIa::SnmpTrapControl::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "global-forwarding")
    {
        global_forwarding.yfilter = yfilter;
    }
}

bool NetconfYang::CiscoIa::SnmpTrapControl::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "trap-list" || name == "global-forwarding")
        return true;
    return false;
}

NetconfYang::CiscoIa::SnmpTrapControl::TrapList::TrapList()
    :
    trap_oid{YType::str, "trap-oid"},
    description{YType::str, "description"},
    forward{YType::boolean, "forward"}
{

    yang_name = "trap-list"; yang_parent_name = "snmp-trap-control"; is_top_level_class = false; has_list_ancestor = false; 
}

NetconfYang::CiscoIa::SnmpTrapControl::TrapList::~TrapList()
{
}

bool NetconfYang::CiscoIa::SnmpTrapControl::TrapList::has_data() const
{
    if (is_presence_container) return true;
    return trap_oid.is_set
	|| description.is_set
	|| forward.is_set;
}

bool NetconfYang::CiscoIa::SnmpTrapControl::TrapList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(trap_oid.yfilter)
	|| ydk::is_set(description.yfilter)
	|| ydk::is_set(forward.yfilter);
}

std::string NetconfYang::CiscoIa::SnmpTrapControl::TrapList::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cisco-self-mgmt:netconf-yang/cisco-ia:cisco-ia/snmp-trap-control/" << get_segment_path();
    return path_buffer.str();
}

std::string NetconfYang::CiscoIa::SnmpTrapControl::TrapList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "trap-list";
    ADD_KEY_TOKEN(trap_oid, "trap-oid");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > NetconfYang::CiscoIa::SnmpTrapControl::TrapList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (trap_oid.is_set || is_set(trap_oid.yfilter)) leaf_name_data.push_back(trap_oid.get_name_leafdata());
    if (description.is_set || is_set(description.yfilter)) leaf_name_data.push_back(description.get_name_leafdata());
    if (forward.is_set || is_set(forward.yfilter)) leaf_name_data.push_back(forward.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> NetconfYang::CiscoIa::SnmpTrapControl::TrapList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> NetconfYang::CiscoIa::SnmpTrapControl::TrapList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void NetconfYang::CiscoIa::SnmpTrapControl::TrapList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "trap-oid")
    {
        trap_oid = value;
        trap_oid.value_namespace = name_space;
        trap_oid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "description")
    {
        description = value;
        description.value_namespace = name_space;
        description.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "forward")
    {
        forward = value;
        forward.value_namespace = name_space;
        forward.value_namespace_prefix = name_space_prefix;
    }
}

void NetconfYang::CiscoIa::SnmpTrapControl::TrapList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "trap-oid")
    {
        trap_oid.yfilter = yfilter;
    }
    if(value_path == "description")
    {
        description.yfilter = yfilter;
    }
    if(value_path == "forward")
    {
        forward.yfilter = yfilter;
    }
}

bool NetconfYang::CiscoIa::SnmpTrapControl::TrapList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "trap-oid" || name == "description" || name == "forward")
        return true;
    return false;
}

NetconfYang::CiscoIa::PreserveNedPath::PreserveNedPath()
    :
    xpath{YType::str, "xpath"}
{

    yang_name = "preserve-ned-path"; yang_parent_name = "cisco-ia"; is_top_level_class = false; has_list_ancestor = false; 
}

NetconfYang::CiscoIa::PreserveNedPath::~PreserveNedPath()
{
}

bool NetconfYang::CiscoIa::PreserveNedPath::has_data() const
{
    if (is_presence_container) return true;
    return xpath.is_set;
}

bool NetconfYang::CiscoIa::PreserveNedPath::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(xpath.yfilter);
}

std::string NetconfYang::CiscoIa::PreserveNedPath::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cisco-self-mgmt:netconf-yang/cisco-ia:cisco-ia/" << get_segment_path();
    return path_buffer.str();
}

std::string NetconfYang::CiscoIa::PreserveNedPath::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "preserve-ned-path";
    ADD_KEY_TOKEN(xpath, "xpath");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > NetconfYang::CiscoIa::PreserveNedPath::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (xpath.is_set || is_set(xpath.yfilter)) leaf_name_data.push_back(xpath.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> NetconfYang::CiscoIa::PreserveNedPath::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> NetconfYang::CiscoIa::PreserveNedPath::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void NetconfYang::CiscoIa::PreserveNedPath::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "xpath")
    {
        xpath = value;
        xpath.value_namespace = name_space;
        xpath.value_namespace_prefix = name_space_prefix;
    }
}

void NetconfYang::CiscoIa::PreserveNedPath::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "xpath")
    {
        xpath.yfilter = yfilter;
    }
}

bool NetconfYang::CiscoIa::PreserveNedPath::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "xpath")
        return true;
    return false;
}

NetconfYang::CiscoIa::ParserMsgIgnore::ParserMsgIgnore()
    :
    message{YType::str, "message"}
{

    yang_name = "parser-msg-ignore"; yang_parent_name = "cisco-ia"; is_top_level_class = false; has_list_ancestor = false; 
}

NetconfYang::CiscoIa::ParserMsgIgnore::~ParserMsgIgnore()
{
}

bool NetconfYang::CiscoIa::ParserMsgIgnore::has_data() const
{
    if (is_presence_container) return true;
    return message.is_set;
}

bool NetconfYang::CiscoIa::ParserMsgIgnore::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(message.yfilter);
}

std::string NetconfYang::CiscoIa::ParserMsgIgnore::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cisco-self-mgmt:netconf-yang/cisco-ia:cisco-ia/" << get_segment_path();
    return path_buffer.str();
}

std::string NetconfYang::CiscoIa::ParserMsgIgnore::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "parser-msg-ignore";
    ADD_KEY_TOKEN(message, "message");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > NetconfYang::CiscoIa::ParserMsgIgnore::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (message.is_set || is_set(message.yfilter)) leaf_name_data.push_back(message.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> NetconfYang::CiscoIa::ParserMsgIgnore::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> NetconfYang::CiscoIa::ParserMsgIgnore::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void NetconfYang::CiscoIa::ParserMsgIgnore::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "message")
    {
        message = value;
        message.value_namespace = name_space;
        message.value_namespace_prefix = name_space_prefix;
    }
}

void NetconfYang::CiscoIa::ParserMsgIgnore::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "message")
    {
        message.yfilter = yfilter;
    }
}

bool NetconfYang::CiscoIa::ParserMsgIgnore::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "message")
        return true;
    return false;
}

NetconfYang::CiscoIa::ConfParserMsgIgnore::ConfParserMsgIgnore()
    :
    message{YType::str, "message"}
{

    yang_name = "conf-parser-msg-ignore"; yang_parent_name = "cisco-ia"; is_top_level_class = false; has_list_ancestor = false; 
}

NetconfYang::CiscoIa::ConfParserMsgIgnore::~ConfParserMsgIgnore()
{
}

bool NetconfYang::CiscoIa::ConfParserMsgIgnore::has_data() const
{
    if (is_presence_container) return true;
    return message.is_set;
}

bool NetconfYang::CiscoIa::ConfParserMsgIgnore::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(message.yfilter);
}

std::string NetconfYang::CiscoIa::ConfParserMsgIgnore::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cisco-self-mgmt:netconf-yang/cisco-ia:cisco-ia/" << get_segment_path();
    return path_buffer.str();
}

std::string NetconfYang::CiscoIa::ConfParserMsgIgnore::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "conf-parser-msg-ignore";
    ADD_KEY_TOKEN(message, "message");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > NetconfYang::CiscoIa::ConfParserMsgIgnore::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (message.is_set || is_set(message.yfilter)) leaf_name_data.push_back(message.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> NetconfYang::CiscoIa::ConfParserMsgIgnore::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> NetconfYang::CiscoIa::ConfParserMsgIgnore::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void NetconfYang::CiscoIa::ConfParserMsgIgnore::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "message")
    {
        message = value;
        message.value_namespace = name_space;
        message.value_namespace_prefix = name_space_prefix;
    }
}

void NetconfYang::CiscoIa::ConfParserMsgIgnore::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "message")
    {
        message.yfilter = yfilter;
    }
}

bool NetconfYang::CiscoIa::ConfParserMsgIgnore::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "message")
        return true;
    return false;
}

NetconfYang::CiscoIa::ParserMsgError::ParserMsgError()
    :
    message{YType::str, "message"}
{

    yang_name = "parser-msg-error"; yang_parent_name = "cisco-ia"; is_top_level_class = false; has_list_ancestor = false; 
}

NetconfYang::CiscoIa::ParserMsgError::~ParserMsgError()
{
}

bool NetconfYang::CiscoIa::ParserMsgError::has_data() const
{
    if (is_presence_container) return true;
    return message.is_set;
}

bool NetconfYang::CiscoIa::ParserMsgError::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(message.yfilter);
}

std::string NetconfYang::CiscoIa::ParserMsgError::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cisco-self-mgmt:netconf-yang/cisco-ia:cisco-ia/" << get_segment_path();
    return path_buffer.str();
}

std::string NetconfYang::CiscoIa::ParserMsgError::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "parser-msg-error";
    ADD_KEY_TOKEN(message, "message");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > NetconfYang::CiscoIa::ParserMsgError::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (message.is_set || is_set(message.yfilter)) leaf_name_data.push_back(message.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> NetconfYang::CiscoIa::ParserMsgError::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> NetconfYang::CiscoIa::ParserMsgError::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void NetconfYang::CiscoIa::ParserMsgError::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "message")
    {
        message = value;
        message.value_namespace = name_space;
        message.value_namespace_prefix = name_space_prefix;
    }
}

void NetconfYang::CiscoIa::ParserMsgError::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "message")
    {
        message.yfilter = yfilter;
    }
}

bool NetconfYang::CiscoIa::ParserMsgError::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "message")
        return true;
    return false;
}

NetconfYang::CiscoIa::ConfParserMsgError::ConfParserMsgError()
    :
    message{YType::str, "message"}
{

    yang_name = "conf-parser-msg-error"; yang_parent_name = "cisco-ia"; is_top_level_class = false; has_list_ancestor = false; 
}

NetconfYang::CiscoIa::ConfParserMsgError::~ConfParserMsgError()
{
}

bool NetconfYang::CiscoIa::ConfParserMsgError::has_data() const
{
    if (is_presence_container) return true;
    return message.is_set;
}

bool NetconfYang::CiscoIa::ConfParserMsgError::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(message.yfilter);
}

std::string NetconfYang::CiscoIa::ConfParserMsgError::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cisco-self-mgmt:netconf-yang/cisco-ia:cisco-ia/" << get_segment_path();
    return path_buffer.str();
}

std::string NetconfYang::CiscoIa::ConfParserMsgError::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "conf-parser-msg-error";
    ADD_KEY_TOKEN(message, "message");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > NetconfYang::CiscoIa::ConfParserMsgError::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (message.is_set || is_set(message.yfilter)) leaf_name_data.push_back(message.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> NetconfYang::CiscoIa::ConfParserMsgError::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> NetconfYang::CiscoIa::ConfParserMsgError::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void NetconfYang::CiscoIa::ConfParserMsgError::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "message")
    {
        message = value;
        message.value_namespace = name_space;
        message.value_namespace_prefix = name_space_prefix;
    }
}

void NetconfYang::CiscoIa::ConfParserMsgError::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "message")
    {
        message.yfilter = yfilter;
    }
}

bool NetconfYang::CiscoIa::ConfParserMsgError::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "message")
        return true;
    return false;
}

NetconfYang::CiscoIa::FullSyncCli::FullSyncCli()
    :
    command{YType::str, "command"}
{

    yang_name = "full-sync-cli"; yang_parent_name = "cisco-ia"; is_top_level_class = false; has_list_ancestor = false; 
}

NetconfYang::CiscoIa::FullSyncCli::~FullSyncCli()
{
}

bool NetconfYang::CiscoIa::FullSyncCli::has_data() const
{
    if (is_presence_container) return true;
    return command.is_set;
}

bool NetconfYang::CiscoIa::FullSyncCli::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(command.yfilter);
}

std::string NetconfYang::CiscoIa::FullSyncCli::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cisco-self-mgmt:netconf-yang/cisco-ia:cisco-ia/" << get_segment_path();
    return path_buffer.str();
}

std::string NetconfYang::CiscoIa::FullSyncCli::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "full-sync-cli";
    ADD_KEY_TOKEN(command, "command");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > NetconfYang::CiscoIa::FullSyncCli::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (command.is_set || is_set(command.yfilter)) leaf_name_data.push_back(command.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> NetconfYang::CiscoIa::FullSyncCli::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> NetconfYang::CiscoIa::FullSyncCli::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void NetconfYang::CiscoIa::FullSyncCli::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "command")
    {
        command = value;
        command.value_namespace = name_space;
        command.value_namespace_prefix = name_space_prefix;
    }
}

void NetconfYang::CiscoIa::FullSyncCli::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "command")
    {
        command.yfilter = yfilter;
    }
}

bool NetconfYang::CiscoIa::FullSyncCli::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "command")
        return true;
    return false;
}

NetconfYang::CiscoIa::ConfFullSyncCli::ConfFullSyncCli()
    :
    command{YType::str, "command"}
{

    yang_name = "conf-full-sync-cli"; yang_parent_name = "cisco-ia"; is_top_level_class = false; has_list_ancestor = false; 
}

NetconfYang::CiscoIa::ConfFullSyncCli::~ConfFullSyncCli()
{
}

bool NetconfYang::CiscoIa::ConfFullSyncCli::has_data() const
{
    if (is_presence_container) return true;
    return command.is_set;
}

bool NetconfYang::CiscoIa::ConfFullSyncCli::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(command.yfilter);
}

std::string NetconfYang::CiscoIa::ConfFullSyncCli::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cisco-self-mgmt:netconf-yang/cisco-ia:cisco-ia/" << get_segment_path();
    return path_buffer.str();
}

std::string NetconfYang::CiscoIa::ConfFullSyncCli::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "conf-full-sync-cli";
    ADD_KEY_TOKEN(command, "command");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > NetconfYang::CiscoIa::ConfFullSyncCli::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (command.is_set || is_set(command.yfilter)) leaf_name_data.push_back(command.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> NetconfYang::CiscoIa::ConfFullSyncCli::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> NetconfYang::CiscoIa::ConfFullSyncCli::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void NetconfYang::CiscoIa::ConfFullSyncCli::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "command")
    {
        command = value;
        command.value_namespace = name_space;
        command.value_namespace_prefix = name_space_prefix;
    }
}

void NetconfYang::CiscoIa::ConfFullSyncCli::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "command")
    {
        command.yfilter = yfilter;
    }
}

bool NetconfYang::CiscoIa::ConfFullSyncCli::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "command")
        return true;
    return false;
}

NetconfYang::CiscoIa::Logging::Logging()
    :
    confd_log_level{YType::enumeration, "confd-log-level"},
    ciaauthd_log_level{YType::enumeration, "ciaauthd-log-level"},
    nes_log_level{YType::enumeration, "nes-log-level"},
    onep_log_level{YType::enumeration, "onep-log-level"},
    odm_log_level{YType::enumeration, "odm-log-level"},
    sync_log_level{YType::enumeration, "sync-log-level"}
{

    yang_name = "logging"; yang_parent_name = "cisco-ia"; is_top_level_class = false; has_list_ancestor = false; 
}

NetconfYang::CiscoIa::Logging::~Logging()
{
}

bool NetconfYang::CiscoIa::Logging::has_data() const
{
    if (is_presence_container) return true;
    return confd_log_level.is_set
	|| ciaauthd_log_level.is_set
	|| nes_log_level.is_set
	|| onep_log_level.is_set
	|| odm_log_level.is_set
	|| sync_log_level.is_set;
}

bool NetconfYang::CiscoIa::Logging::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(confd_log_level.yfilter)
	|| ydk::is_set(ciaauthd_log_level.yfilter)
	|| ydk::is_set(nes_log_level.yfilter)
	|| ydk::is_set(onep_log_level.yfilter)
	|| ydk::is_set(odm_log_level.yfilter)
	|| ydk::is_set(sync_log_level.yfilter);
}

std::string NetconfYang::CiscoIa::Logging::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cisco-self-mgmt:netconf-yang/cisco-ia:cisco-ia/" << get_segment_path();
    return path_buffer.str();
}

std::string NetconfYang::CiscoIa::Logging::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "logging";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > NetconfYang::CiscoIa::Logging::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (confd_log_level.is_set || is_set(confd_log_level.yfilter)) leaf_name_data.push_back(confd_log_level.get_name_leafdata());
    if (ciaauthd_log_level.is_set || is_set(ciaauthd_log_level.yfilter)) leaf_name_data.push_back(ciaauthd_log_level.get_name_leafdata());
    if (nes_log_level.is_set || is_set(nes_log_level.yfilter)) leaf_name_data.push_back(nes_log_level.get_name_leafdata());
    if (onep_log_level.is_set || is_set(onep_log_level.yfilter)) leaf_name_data.push_back(onep_log_level.get_name_leafdata());
    if (odm_log_level.is_set || is_set(odm_log_level.yfilter)) leaf_name_data.push_back(odm_log_level.get_name_leafdata());
    if (sync_log_level.is_set || is_set(sync_log_level.yfilter)) leaf_name_data.push_back(sync_log_level.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> NetconfYang::CiscoIa::Logging::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> NetconfYang::CiscoIa::Logging::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void NetconfYang::CiscoIa::Logging::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "confd-log-level")
    {
        confd_log_level = value;
        confd_log_level.value_namespace = name_space;
        confd_log_level.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ciaauthd-log-level")
    {
        ciaauthd_log_level = value;
        ciaauthd_log_level.value_namespace = name_space;
        ciaauthd_log_level.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nes-log-level")
    {
        nes_log_level = value;
        nes_log_level.value_namespace = name_space;
        nes_log_level.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "onep-log-level")
    {
        onep_log_level = value;
        onep_log_level.value_namespace = name_space;
        onep_log_level.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "odm-log-level")
    {
        odm_log_level = value;
        odm_log_level.value_namespace = name_space;
        odm_log_level.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sync-log-level")
    {
        sync_log_level = value;
        sync_log_level.value_namespace = name_space;
        sync_log_level.value_namespace_prefix = name_space_prefix;
    }
}

void NetconfYang::CiscoIa::Logging::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "confd-log-level")
    {
        confd_log_level.yfilter = yfilter;
    }
    if(value_path == "ciaauthd-log-level")
    {
        ciaauthd_log_level.yfilter = yfilter;
    }
    if(value_path == "nes-log-level")
    {
        nes_log_level.yfilter = yfilter;
    }
    if(value_path == "onep-log-level")
    {
        onep_log_level.yfilter = yfilter;
    }
    if(value_path == "odm-log-level")
    {
        odm_log_level.yfilter = yfilter;
    }
    if(value_path == "sync-log-level")
    {
        sync_log_level.yfilter = yfilter;
    }
}

bool NetconfYang::CiscoIa::Logging::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "confd-log-level" || name == "ciaauthd-log-level" || name == "nes-log-level" || name == "onep-log-level" || name == "odm-log-level" || name == "sync-log-level")
        return true;
    return false;
}

NetconfYang::CiscoIa::Blocking::Blocking()
    :
    cli_blocking_enabled{YType::boolean, "cli-blocking-enabled"},
    confd_cfg_blocking_enabled{YType::boolean, "confd-cfg-blocking-enabled"}
        ,
    network_element_command(this, {"command"})
    , confd_cfg_command(this, {"command"})
{

    yang_name = "blocking"; yang_parent_name = "cisco-ia"; is_top_level_class = false; has_list_ancestor = false; 
}

NetconfYang::CiscoIa::Blocking::~Blocking()
{
}

bool NetconfYang::CiscoIa::Blocking::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<network_element_command.len(); index++)
    {
        if(network_element_command[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<confd_cfg_command.len(); index++)
    {
        if(confd_cfg_command[index]->has_data())
            return true;
    }
    return cli_blocking_enabled.is_set
	|| confd_cfg_blocking_enabled.is_set;
}

bool NetconfYang::CiscoIa::Blocking::has_operation() const
{
    for (std::size_t index=0; index<network_element_command.len(); index++)
    {
        if(network_element_command[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<confd_cfg_command.len(); index++)
    {
        if(confd_cfg_command[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(cli_blocking_enabled.yfilter)
	|| ydk::is_set(confd_cfg_blocking_enabled.yfilter);
}

std::string NetconfYang::CiscoIa::Blocking::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cisco-self-mgmt:netconf-yang/cisco-ia:cisco-ia/" << get_segment_path();
    return path_buffer.str();
}

std::string NetconfYang::CiscoIa::Blocking::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "blocking";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > NetconfYang::CiscoIa::Blocking::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (cli_blocking_enabled.is_set || is_set(cli_blocking_enabled.yfilter)) leaf_name_data.push_back(cli_blocking_enabled.get_name_leafdata());
    if (confd_cfg_blocking_enabled.is_set || is_set(confd_cfg_blocking_enabled.yfilter)) leaf_name_data.push_back(confd_cfg_blocking_enabled.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> NetconfYang::CiscoIa::Blocking::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "network-element-command")
    {
        auto ent_ = std::make_shared<NetconfYang::CiscoIa::Blocking::NetworkElementCommand>();
        ent_->parent = this;
        network_element_command.append(ent_);
        return ent_;
    }

    if(child_yang_name == "confd-cfg-command")
    {
        auto ent_ = std::make_shared<NetconfYang::CiscoIa::Blocking::ConfdCfgCommand>();
        ent_->parent = this;
        confd_cfg_command.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> NetconfYang::CiscoIa::Blocking::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : network_element_command.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    count_ = 0;
    for (auto ent_ : confd_cfg_command.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void NetconfYang::CiscoIa::Blocking::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "cli-blocking-enabled")
    {
        cli_blocking_enabled = value;
        cli_blocking_enabled.value_namespace = name_space;
        cli_blocking_enabled.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "confd-cfg-blocking-enabled")
    {
        confd_cfg_blocking_enabled = value;
        confd_cfg_blocking_enabled.value_namespace = name_space;
        confd_cfg_blocking_enabled.value_namespace_prefix = name_space_prefix;
    }
}

void NetconfYang::CiscoIa::Blocking::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "cli-blocking-enabled")
    {
        cli_blocking_enabled.yfilter = yfilter;
    }
    if(value_path == "confd-cfg-blocking-enabled")
    {
        confd_cfg_blocking_enabled.yfilter = yfilter;
    }
}

bool NetconfYang::CiscoIa::Blocking::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "network-element-command" || name == "confd-cfg-command" || name == "cli-blocking-enabled" || name == "confd-cfg-blocking-enabled")
        return true;
    return false;
}

NetconfYang::CiscoIa::Blocking::NetworkElementCommand::NetworkElementCommand()
    :
    command{YType::str, "command"}
{

    yang_name = "network-element-command"; yang_parent_name = "blocking"; is_top_level_class = false; has_list_ancestor = false; 
}

NetconfYang::CiscoIa::Blocking::NetworkElementCommand::~NetworkElementCommand()
{
}

bool NetconfYang::CiscoIa::Blocking::NetworkElementCommand::has_data() const
{
    if (is_presence_container) return true;
    return command.is_set;
}

bool NetconfYang::CiscoIa::Blocking::NetworkElementCommand::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(command.yfilter);
}

std::string NetconfYang::CiscoIa::Blocking::NetworkElementCommand::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cisco-self-mgmt:netconf-yang/cisco-ia:cisco-ia/blocking/" << get_segment_path();
    return path_buffer.str();
}

std::string NetconfYang::CiscoIa::Blocking::NetworkElementCommand::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "network-element-command";
    ADD_KEY_TOKEN(command, "command");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > NetconfYang::CiscoIa::Blocking::NetworkElementCommand::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (command.is_set || is_set(command.yfilter)) leaf_name_data.push_back(command.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> NetconfYang::CiscoIa::Blocking::NetworkElementCommand::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> NetconfYang::CiscoIa::Blocking::NetworkElementCommand::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void NetconfYang::CiscoIa::Blocking::NetworkElementCommand::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "command")
    {
        command = value;
        command.value_namespace = name_space;
        command.value_namespace_prefix = name_space_prefix;
    }
}

void NetconfYang::CiscoIa::Blocking::NetworkElementCommand::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "command")
    {
        command.yfilter = yfilter;
    }
}

bool NetconfYang::CiscoIa::Blocking::NetworkElementCommand::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "command")
        return true;
    return false;
}

NetconfYang::CiscoIa::Blocking::ConfdCfgCommand::ConfdCfgCommand()
    :
    command{YType::str, "command"}
{

    yang_name = "confd-cfg-command"; yang_parent_name = "blocking"; is_top_level_class = false; has_list_ancestor = false; 
}

NetconfYang::CiscoIa::Blocking::ConfdCfgCommand::~ConfdCfgCommand()
{
}

bool NetconfYang::CiscoIa::Blocking::ConfdCfgCommand::has_data() const
{
    if (is_presence_container) return true;
    return command.is_set;
}

bool NetconfYang::CiscoIa::Blocking::ConfdCfgCommand::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(command.yfilter);
}

std::string NetconfYang::CiscoIa::Blocking::ConfdCfgCommand::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cisco-self-mgmt:netconf-yang/cisco-ia:cisco-ia/blocking/" << get_segment_path();
    return path_buffer.str();
}

std::string NetconfYang::CiscoIa::Blocking::ConfdCfgCommand::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "confd-cfg-command";
    ADD_KEY_TOKEN(command, "command");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > NetconfYang::CiscoIa::Blocking::ConfdCfgCommand::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (command.is_set || is_set(command.yfilter)) leaf_name_data.push_back(command.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> NetconfYang::CiscoIa::Blocking::ConfdCfgCommand::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> NetconfYang::CiscoIa::Blocking::ConfdCfgCommand::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void NetconfYang::CiscoIa::Blocking::ConfdCfgCommand::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "command")
    {
        command = value;
        command.value_namespace = name_space;
        command.value_namespace_prefix = name_space_prefix;
    }
}

void NetconfYang::CiscoIa::Blocking::ConfdCfgCommand::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "command")
    {
        command.yfilter = yfilter;
    }
}

bool NetconfYang::CiscoIa::Blocking::ConfdCfgCommand::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "command")
        return true;
    return false;
}

NetconfYang::CiscoIa::PivotCommands::PivotCommands()
    :
    pivot_command(this, {"command"})
{

    yang_name = "pivot-commands"; yang_parent_name = "cisco-ia"; is_top_level_class = false; has_list_ancestor = false; 
}

NetconfYang::CiscoIa::PivotCommands::~PivotCommands()
{
}

bool NetconfYang::CiscoIa::PivotCommands::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<pivot_command.len(); index++)
    {
        if(pivot_command[index]->has_data())
            return true;
    }
    return false;
}

bool NetconfYang::CiscoIa::PivotCommands::has_operation() const
{
    for (std::size_t index=0; index<pivot_command.len(); index++)
    {
        if(pivot_command[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string NetconfYang::CiscoIa::PivotCommands::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cisco-self-mgmt:netconf-yang/cisco-ia:cisco-ia/" << get_segment_path();
    return path_buffer.str();
}

std::string NetconfYang::CiscoIa::PivotCommands::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "pivot-commands";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > NetconfYang::CiscoIa::PivotCommands::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> NetconfYang::CiscoIa::PivotCommands::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "pivot-command")
    {
        auto ent_ = std::make_shared<NetconfYang::CiscoIa::PivotCommands::PivotCommand>();
        ent_->parent = this;
        pivot_command.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> NetconfYang::CiscoIa::PivotCommands::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : pivot_command.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void NetconfYang::CiscoIa::PivotCommands::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void NetconfYang::CiscoIa::PivotCommands::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool NetconfYang::CiscoIa::PivotCommands::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "pivot-command")
        return true;
    return false;
}

NetconfYang::CiscoIa::PivotCommands::PivotCommand::PivotCommand()
    :
    command{YType::str, "command"}
        ,
    retry(nullptr) // presence node
{

    yang_name = "pivot-command"; yang_parent_name = "pivot-commands"; is_top_level_class = false; has_list_ancestor = false; 
}

NetconfYang::CiscoIa::PivotCommands::PivotCommand::~PivotCommand()
{
}

bool NetconfYang::CiscoIa::PivotCommands::PivotCommand::has_data() const
{
    if (is_presence_container) return true;
    return command.is_set
	|| (retry !=  nullptr && retry->has_data());
}

bool NetconfYang::CiscoIa::PivotCommands::PivotCommand::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(command.yfilter)
	|| (retry !=  nullptr && retry->has_operation());
}

std::string NetconfYang::CiscoIa::PivotCommands::PivotCommand::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cisco-self-mgmt:netconf-yang/cisco-ia:cisco-ia/pivot-commands/" << get_segment_path();
    return path_buffer.str();
}

std::string NetconfYang::CiscoIa::PivotCommands::PivotCommand::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "pivot-command";
    ADD_KEY_TOKEN(command, "command");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > NetconfYang::CiscoIa::PivotCommands::PivotCommand::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (command.is_set || is_set(command.yfilter)) leaf_name_data.push_back(command.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> NetconfYang::CiscoIa::PivotCommands::PivotCommand::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "retry")
    {
        if(retry == nullptr)
        {
            retry = std::make_shared<NetconfYang::CiscoIa::PivotCommands::PivotCommand::Retry>();
        }
        return retry;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> NetconfYang::CiscoIa::PivotCommands::PivotCommand::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(retry != nullptr)
    {
        _children["retry"] = retry;
    }

    return _children;
}

void NetconfYang::CiscoIa::PivotCommands::PivotCommand::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "command")
    {
        command = value;
        command.value_namespace = name_space;
        command.value_namespace_prefix = name_space_prefix;
    }
}

void NetconfYang::CiscoIa::PivotCommands::PivotCommand::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "command")
    {
        command.yfilter = yfilter;
    }
}

bool NetconfYang::CiscoIa::PivotCommands::PivotCommand::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "retry" || name == "command")
        return true;
    return false;
}

NetconfYang::CiscoIa::PivotCommands::PivotCommand::Retry::Retry()
    :
    min_retry_time{YType::uint16, "min-retry-time"},
    max_retry_time{YType::uint16, "max-retry-time"}
{

    yang_name = "retry"; yang_parent_name = "pivot-command"; is_top_level_class = false; has_list_ancestor = true; is_presence_container = true;
}

NetconfYang::CiscoIa::PivotCommands::PivotCommand::Retry::~Retry()
{
}

bool NetconfYang::CiscoIa::PivotCommands::PivotCommand::Retry::has_data() const
{
    if (is_presence_container) return true;
    return min_retry_time.is_set
	|| max_retry_time.is_set;
}

bool NetconfYang::CiscoIa::PivotCommands::PivotCommand::Retry::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(min_retry_time.yfilter)
	|| ydk::is_set(max_retry_time.yfilter);
}

std::string NetconfYang::CiscoIa::PivotCommands::PivotCommand::Retry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "retry";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > NetconfYang::CiscoIa::PivotCommands::PivotCommand::Retry::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (min_retry_time.is_set || is_set(min_retry_time.yfilter)) leaf_name_data.push_back(min_retry_time.get_name_leafdata());
    if (max_retry_time.is_set || is_set(max_retry_time.yfilter)) leaf_name_data.push_back(max_retry_time.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> NetconfYang::CiscoIa::PivotCommands::PivotCommand::Retry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> NetconfYang::CiscoIa::PivotCommands::PivotCommand::Retry::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void NetconfYang::CiscoIa::PivotCommands::PivotCommand::Retry::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "min-retry-time")
    {
        min_retry_time = value;
        min_retry_time.value_namespace = name_space;
        min_retry_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "max-retry-time")
    {
        max_retry_time = value;
        max_retry_time.value_namespace = name_space;
        max_retry_time.value_namespace_prefix = name_space_prefix;
    }
}

void NetconfYang::CiscoIa::PivotCommands::PivotCommand::Retry::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "min-retry-time")
    {
        min_retry_time.yfilter = yfilter;
    }
    if(value_path == "max-retry-time")
    {
        max_retry_time.yfilter = yfilter;
    }
}

bool NetconfYang::CiscoIa::PivotCommands::PivotCommand::Retry::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "min-retry-time" || name == "max-retry-time")
        return true;
    return false;
}


}
}


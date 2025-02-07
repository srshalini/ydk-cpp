#ifndef _CISCO_IOS_XE_ACL_
#define _CISCO_IOS_XE_ACL_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>

namespace cisco_ios_xe {
namespace Cisco_IOS_XE_acl {

class AclPortType : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf bgp;
        static const ydk::Enum::YLeaf chargen;
        static const ydk::Enum::YLeaf daytime;
        static const ydk::Enum::YLeaf discard;
        static const ydk::Enum::YLeaf domain;
        static const ydk::Enum::YLeaf echo;
        static const ydk::Enum::YLeaf finger;
        static const ydk::Enum::YLeaf ftp;
        static const ydk::Enum::YLeaf ftp_data;
        static const ydk::Enum::YLeaf gopher;
        static const ydk::Enum::YLeaf hostname;
        static const ydk::Enum::YLeaf ident;
        static const ydk::Enum::YLeaf irc;
        static const ydk::Enum::YLeaf klogin;
        static const ydk::Enum::YLeaf kshell;
        static const ydk::Enum::YLeaf lpd;
        static const ydk::Enum::YLeaf msrpc;
        static const ydk::Enum::YLeaf nntp;
        static const ydk::Enum::YLeaf pim_auto_rp;
        static const ydk::Enum::YLeaf pop2;
        static const ydk::Enum::YLeaf pop3;
        static const ydk::Enum::YLeaf smtp;
        static const ydk::Enum::YLeaf sunrpc;
        static const ydk::Enum::YLeaf tacacs;
        static const ydk::Enum::YLeaf talk;
        static const ydk::Enum::YLeaf telnet;
        static const ydk::Enum::YLeaf time;
        static const ydk::Enum::YLeaf uucp;
        static const ydk::Enum::YLeaf whois;
        static const ydk::Enum::YLeaf www;
        static const ydk::Enum::YLeaf biff;
        static const ydk::Enum::YLeaf bootpc;
        static const ydk::Enum::YLeaf bootps;
        static const ydk::Enum::YLeaf dnsix;
        static const ydk::Enum::YLeaf isakmp;
        static const ydk::Enum::YLeaf mobile_ip;
        static const ydk::Enum::YLeaf nameserver;
        static const ydk::Enum::YLeaf netbios_dgm;
        static const ydk::Enum::YLeaf netbios_ns;
        static const ydk::Enum::YLeaf netbios_ss;
        static const ydk::Enum::YLeaf non500_isakmp;
        static const ydk::Enum::YLeaf ntp;
        static const ydk::Enum::YLeaf rip;
        static const ydk::Enum::YLeaf ripv6;
        static const ydk::Enum::YLeaf snmp;
        static const ydk::Enum::YLeaf snmptrap;
        static const ydk::Enum::YLeaf syslog;
        static const ydk::Enum::YLeaf tftp;
        static const ydk::Enum::YLeaf who;
        static const ydk::Enum::YLeaf xdmcp;

        static int get_enum_value(const std::string & name) {
            if (name == "bgp") return 179;
            if (name == "chargen") return 19;
            if (name == "daytime") return 13;
            if (name == "discard") return 9;
            if (name == "domain") return 53;
            if (name == "echo") return 7;
            if (name == "finger") return 79;
            if (name == "ftp") return 21;
            if (name == "ftp-data") return 20;
            if (name == "gopher") return 70;
            if (name == "hostname") return 101;
            if (name == "ident") return 113;
            if (name == "irc") return 194;
            if (name == "klogin") return 543;
            if (name == "kshell") return 544;
            if (name == "lpd") return 515;
            if (name == "msrpc") return 135;
            if (name == "nntp") return 119;
            if (name == "pim-auto-rp") return 496;
            if (name == "pop2") return 109;
            if (name == "pop3") return 110;
            if (name == "smtp") return 25;
            if (name == "sunrpc") return 111;
            if (name == "tacacs") return 49;
            if (name == "talk") return 517;
            if (name == "telnet") return 23;
            if (name == "time") return 37;
            if (name == "uucp") return 540;
            if (name == "whois") return 43;
            if (name == "www") return 80;
            if (name == "biff") return 512;
            if (name == "bootpc") return 68;
            if (name == "bootps") return 67;
            if (name == "dnsix") return 195;
            if (name == "isakmp") return 500;
            if (name == "mobile-ip") return 434;
            if (name == "nameserver") return 42;
            if (name == "netbios-dgm") return 138;
            if (name == "netbios-ns") return 137;
            if (name == "netbios-ss") return 139;
            if (name == "non500-isakmp") return 4500;
            if (name == "ntp") return 123;
            if (name == "rip") return 520;
            if (name == "ripv6") return 521;
            if (name == "snmp") return 161;
            if (name == "snmptrap") return 162;
            if (name == "syslog") return 514;
            if (name == "tftp") return 69;
            if (name == "who") return 513;
            if (name == "xdmcp") return 177;
            return -1;
        }
};


}
}

#endif /* _CISCO_IOS_XE_ACL_ */


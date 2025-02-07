#ifndef _CISCO_IOS_XR_TTY_MANAGEMENT_OPER_
#define _CISCO_IOS_XR_TTY_MANAGEMENT_OPER_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>

namespace cisco_ios_xr {
namespace Cisco_IOS_XR_tty_management_oper {

class HostAfIdBase : public virtual ydk::Identity
{
    public:
        HostAfIdBase();
        ~HostAfIdBase();


}; // HostAfIdBase

class Ipv4 : public cisco_ios_xr::Cisco_IOS_XR_tty_management_oper::HostAfIdBase, virtual ydk::Identity
{
    public:
        Ipv4();
        ~Ipv4();


}; // Ipv4

class Ipv6 : public cisco_ios_xr::Cisco_IOS_XR_tty_management_oper::HostAfIdBase, virtual ydk::Identity
{
    public:
        Ipv6();
        ~Ipv6();


}; // Ipv6

class TransportService : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf unknown;
        static const ydk::Enum::YLeaf telnet;
        static const ydk::Enum::YLeaf rlogin;
        static const ydk::Enum::YLeaf ssh;

        static int get_enum_value(const std::string & name) {
            if (name == "unknown") return 0;
            if (name == "telnet") return 1;
            if (name == "rlogin") return 2;
            if (name == "ssh") return 3;
            return -1;
        }
};


}
}

#endif /* _CISCO_IOS_XR_TTY_MANAGEMENT_OPER_ */


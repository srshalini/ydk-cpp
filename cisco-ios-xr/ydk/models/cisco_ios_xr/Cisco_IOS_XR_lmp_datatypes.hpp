#ifndef _CISCO_IOS_XR_LMP_DATATYPES_
#define _CISCO_IOS_XR_LMP_DATATYPES_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>

namespace cisco_ios_xr {
namespace Cisco_IOS_XR_lmp_datatypes {

class OlmSwitchingCap : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf lsc;
        static const ydk::Enum::YLeaf fsc;

        static int get_enum_value(const std::string & name) {
            if (name == "lsc") return 150;
            if (name == "fsc") return 200;
            return -1;
        }
};

class OlmAddr : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf ipv4;
        static const ydk::Enum::YLeaf ipv6;
        static const ydk::Enum::YLeaf unnumbered;
        static const ydk::Enum::YLeaf nsap;

        static int get_enum_value(const std::string & name) {
            if (name == "ipv4") return 101;
            if (name == "ipv6") return 102;
            if (name == "unnumbered") return 103;
            if (name == "nsap") return 104;
            return -1;
        }
};


}
}

#endif /* _CISCO_IOS_XR_LMP_DATATYPES_ */


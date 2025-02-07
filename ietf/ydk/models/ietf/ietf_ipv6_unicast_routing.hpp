#ifndef _IETF_IPV6_UNICAST_ROUTING_
#define _IETF_IPV6_UNICAST_ROUTING_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>

#include "ietf_routing.hpp"

namespace ietf {
namespace ietf_ipv6_unicast_routing {

class Ipv6Unicast : public ietf::ietf_routing::Ipv6, virtual ydk::Identity
{
    public:
        Ipv6Unicast();
        ~Ipv6Unicast();


}; // Ipv6Unicast


}
}

#endif /* _IETF_IPV6_UNICAST_ROUTING_ */


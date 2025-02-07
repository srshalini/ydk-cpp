/*  ----------------------------------------------------------------
 Copyright 2016 Cisco Systems

 Licensed under the Apache License, Version 2.0 (the "License");
 you may not use this file except in compliance with the License.
 You may obtain a copy of the License at

    http://www.apache.org/licenses/LICENSE-2.0

 Unless required by applicable law or agreed to in writing, software
 distributed under the License is distributed on an "AS IS" BASIS,
 WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 See the License for the specific language governing permissions and
 limitations under the License.
------------------------------------------------------------------*/
#include <iostream>

#include <ydk/types.hpp>
#include <ydk/netconf_provider.hpp>
#include <ydk/crud_service.hpp>

#include <ydk_cisco_ios_xr/Cisco_IOS_XR_ifmgr_cfg.hpp>
#include <spdlog/spdlog.h>

#include "args_parser.h"

using namespace ydk;
using namespace cisco_ios_xr::Cisco_IOS_XR_ifmgr_cfg;
using namespace std;

int main(int argc, char* argv[])
{
    vector<string> args = parse_args(argc, argv);
    if(args.empty()) return 1;
    string host, username, password;
    int port;

    username = args[0]; password = args[1]; host = args[2]; port = stoi(args[3]);

    bool verbose=(args[4]=="--verbose");
    if(verbose)
    {
            auto logger = spdlog::stdout_color_mt("ydk");
            logger->set_level(spdlog::level::debug);
    }

    NetconfServiceProvider provider{host, username, password, port};
    CrudService crud{};

    InterfaceConfigurations interface{};
    auto intf  = make_shared<InterfaceConfigurations::InterfaceConfiguration>();
    intf->active = "act";
    intf->description = "test";
    intf->interface_name = "GigabitEthernet0/0/0/0";
    intf->bandwidth = 10000;
    intf->parent = &interface;

	auto mtulist = make_shared<InterfaceConfigurations::InterfaceConfiguration::Mtus::Mtu>();
	mtulist->owner = "GigabitEthernet";
    mtulist->mtu = 1500;
    mtulist->parent = intf.get();

    intf->mtus->mtu.append(mtulist);
    interface.interface_configuration.append(intf);

    bool reply = crud.create(provider, interface);

    if(reply) cout << "Create operation success" << endl << endl; else cout << "Operation failed" << endl << endl;

}

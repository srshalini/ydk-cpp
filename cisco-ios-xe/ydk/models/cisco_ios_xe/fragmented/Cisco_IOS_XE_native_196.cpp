
#include <sstream>
#include <iostream>
#include <ydk/entity_util.hpp>
#include "bundle_info.hpp"
#include "generated_entity_lookup.hpp"
#include "Cisco_IOS_XE_native_196.hpp"
#include "Cisco_IOS_XE_native_197.hpp"
#include "Cisco_IOS_XE_native_199.hpp"
#include "Cisco_IOS_XE_native_200.hpp"

using namespace ydk;

namespace cisco_ios_xe {
namespace Cisco_IOS_XE_native {

Native::Router::LispList::Default::Service::Ipv6::Default_::MapResolver::MapRequest::Validate::Source::Source()
    :
    list(std::make_shared<Native::Router::LispList::Default::Service::Ipv6::Default_::MapResolver::MapRequest::Validate::Source::List>())
    , registered(std::make_shared<Native::Router::LispList::Default::Service::Ipv6::Default_::MapResolver::MapRequest::Validate::Source::Registered>())
{
    list->parent = this;
    registered->parent = this;

    yang_name = "source"; yang_parent_name = "validate"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Router::LispList::Default::Service::Ipv6::Default_::MapResolver::MapRequest::Validate::Source::~Source()
{
}

bool Native::Router::LispList::Default::Service::Ipv6::Default_::MapResolver::MapRequest::Validate::Source::has_data() const
{
    if (is_presence_container) return true;
    return (list !=  nullptr && list->has_data())
	|| (registered !=  nullptr && registered->has_data());
}

bool Native::Router::LispList::Default::Service::Ipv6::Default_::MapResolver::MapRequest::Validate::Source::has_operation() const
{
    return is_set(yfilter)
	|| (list !=  nullptr && list->has_operation())
	|| (registered !=  nullptr && registered->has_operation());
}

std::string Native::Router::LispList::Default::Service::Ipv6::Default_::MapResolver::MapRequest::Validate::Source::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "source";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::LispList::Default::Service::Ipv6::Default_::MapResolver::MapRequest::Validate::Source::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Router::LispList::Default::Service::Ipv6::Default_::MapResolver::MapRequest::Validate::Source::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "list")
    {
        if(list == nullptr)
        {
            list = std::make_shared<Native::Router::LispList::Default::Service::Ipv6::Default_::MapResolver::MapRequest::Validate::Source::List>();
        }
        return list;
    }

    if(child_yang_name == "registered")
    {
        if(registered == nullptr)
        {
            registered = std::make_shared<Native::Router::LispList::Default::Service::Ipv6::Default_::MapResolver::MapRequest::Validate::Source::Registered>();
        }
        return registered;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Router::LispList::Default::Service::Ipv6::Default_::MapResolver::MapRequest::Validate::Source::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(list != nullptr)
    {
        _children["list"] = list;
    }

    if(registered != nullptr)
    {
        _children["registered"] = registered;
    }

    return _children;
}

void Native::Router::LispList::Default::Service::Ipv6::Default_::MapResolver::MapRequest::Validate::Source::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Router::LispList::Default::Service::Ipv6::Default_::MapResolver::MapRequest::Validate::Source::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Router::LispList::Default::Service::Ipv6::Default_::MapResolver::MapRequest::Validate::Source::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "list" || name == "registered")
        return true;
    return false;
}

Native::Router::LispList::Default::Service::Ipv6::Default_::MapResolver::MapRequest::Validate::Source::List::List()
    :
    ipv4{YType::str, "ipv4"},
    ipv6{YType::str, "ipv6"}
{

    yang_name = "list"; yang_parent_name = "source"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Router::LispList::Default::Service::Ipv6::Default_::MapResolver::MapRequest::Validate::Source::List::~List()
{
}

bool Native::Router::LispList::Default::Service::Ipv6::Default_::MapResolver::MapRequest::Validate::Source::List::has_data() const
{
    if (is_presence_container) return true;
    return ipv4.is_set
	|| ipv6.is_set;
}

bool Native::Router::LispList::Default::Service::Ipv6::Default_::MapResolver::MapRequest::Validate::Source::List::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ipv4.yfilter)
	|| ydk::is_set(ipv6.yfilter);
}

std::string Native::Router::LispList::Default::Service::Ipv6::Default_::MapResolver::MapRequest::Validate::Source::List::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "list";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::LispList::Default::Service::Ipv6::Default_::MapResolver::MapRequest::Validate::Source::List::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ipv4.is_set || is_set(ipv4.yfilter)) leaf_name_data.push_back(ipv4.get_name_leafdata());
    if (ipv6.is_set || is_set(ipv6.yfilter)) leaf_name_data.push_back(ipv6.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Router::LispList::Default::Service::Ipv6::Default_::MapResolver::MapRequest::Validate::Source::List::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Router::LispList::Default::Service::Ipv6::Default_::MapResolver::MapRequest::Validate::Source::List::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Router::LispList::Default::Service::Ipv6::Default_::MapResolver::MapRequest::Validate::Source::List::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ipv4")
    {
        ipv4 = value;
        ipv4.value_namespace = name_space;
        ipv4.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv6")
    {
        ipv6 = value;
        ipv6.value_namespace = name_space;
        ipv6.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::LispList::Default::Service::Ipv6::Default_::MapResolver::MapRequest::Validate::Source::List::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ipv4")
    {
        ipv4.yfilter = yfilter;
    }
    if(value_path == "ipv6")
    {
        ipv6.yfilter = yfilter;
    }
}

bool Native::Router::LispList::Default::Service::Ipv6::Default_::MapResolver::MapRequest::Validate::Source::List::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ipv4" || name == "ipv6")
        return true;
    return false;
}

Native::Router::LispList::Default::Service::Ipv6::Default_::MapResolver::MapRequest::Validate::Source::Registered::Registered()
    :
    list(std::make_shared<Native::Router::LispList::Default::Service::Ipv6::Default_::MapResolver::MapRequest::Validate::Source::Registered::List>())
{
    list->parent = this;

    yang_name = "registered"; yang_parent_name = "source"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Router::LispList::Default::Service::Ipv6::Default_::MapResolver::MapRequest::Validate::Source::Registered::~Registered()
{
}

bool Native::Router::LispList::Default::Service::Ipv6::Default_::MapResolver::MapRequest::Validate::Source::Registered::has_data() const
{
    if (is_presence_container) return true;
    return (list !=  nullptr && list->has_data());
}

bool Native::Router::LispList::Default::Service::Ipv6::Default_::MapResolver::MapRequest::Validate::Source::Registered::has_operation() const
{
    return is_set(yfilter)
	|| (list !=  nullptr && list->has_operation());
}

std::string Native::Router::LispList::Default::Service::Ipv6::Default_::MapResolver::MapRequest::Validate::Source::Registered::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "registered";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::LispList::Default::Service::Ipv6::Default_::MapResolver::MapRequest::Validate::Source::Registered::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Router::LispList::Default::Service::Ipv6::Default_::MapResolver::MapRequest::Validate::Source::Registered::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "list")
    {
        if(list == nullptr)
        {
            list = std::make_shared<Native::Router::LispList::Default::Service::Ipv6::Default_::MapResolver::MapRequest::Validate::Source::Registered::List>();
        }
        return list;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Router::LispList::Default::Service::Ipv6::Default_::MapResolver::MapRequest::Validate::Source::Registered::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(list != nullptr)
    {
        _children["list"] = list;
    }

    return _children;
}

void Native::Router::LispList::Default::Service::Ipv6::Default_::MapResolver::MapRequest::Validate::Source::Registered::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Router::LispList::Default::Service::Ipv6::Default_::MapResolver::MapRequest::Validate::Source::Registered::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Router::LispList::Default::Service::Ipv6::Default_::MapResolver::MapRequest::Validate::Source::Registered::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "list")
        return true;
    return false;
}

Native::Router::LispList::Default::Service::Ipv6::Default_::MapResolver::MapRequest::Validate::Source::Registered::List::List()
    :
    ipv4{YType::str, "ipv4"},
    ipv6{YType::str, "ipv6"}
{

    yang_name = "list"; yang_parent_name = "registered"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Router::LispList::Default::Service::Ipv6::Default_::MapResolver::MapRequest::Validate::Source::Registered::List::~List()
{
}

bool Native::Router::LispList::Default::Service::Ipv6::Default_::MapResolver::MapRequest::Validate::Source::Registered::List::has_data() const
{
    if (is_presence_container) return true;
    return ipv4.is_set
	|| ipv6.is_set;
}

bool Native::Router::LispList::Default::Service::Ipv6::Default_::MapResolver::MapRequest::Validate::Source::Registered::List::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ipv4.yfilter)
	|| ydk::is_set(ipv6.yfilter);
}

std::string Native::Router::LispList::Default::Service::Ipv6::Default_::MapResolver::MapRequest::Validate::Source::Registered::List::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "list";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::LispList::Default::Service::Ipv6::Default_::MapResolver::MapRequest::Validate::Source::Registered::List::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ipv4.is_set || is_set(ipv4.yfilter)) leaf_name_data.push_back(ipv4.get_name_leafdata());
    if (ipv6.is_set || is_set(ipv6.yfilter)) leaf_name_data.push_back(ipv6.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Router::LispList::Default::Service::Ipv6::Default_::MapResolver::MapRequest::Validate::Source::Registered::List::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Router::LispList::Default::Service::Ipv6::Default_::MapResolver::MapRequest::Validate::Source::Registered::List::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Router::LispList::Default::Service::Ipv6::Default_::MapResolver::MapRequest::Validate::Source::Registered::List::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ipv4")
    {
        ipv4 = value;
        ipv4.value_namespace = name_space;
        ipv4.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv6")
    {
        ipv6 = value;
        ipv6.value_namespace = name_space;
        ipv6.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::LispList::Default::Service::Ipv6::Default_::MapResolver::MapRequest::Validate::Source::Registered::List::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ipv4")
    {
        ipv4.yfilter = yfilter;
    }
    if(value_path == "ipv6")
    {
        ipv6.yfilter = yfilter;
    }
}

bool Native::Router::LispList::Default::Service::Ipv6::Default_::MapResolver::MapRequest::Validate::Source::Registered::List::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ipv4" || name == "ipv6")
        return true;
    return false;
}

Native::Router::LispList::Default::Service::Ipv6::Default_::MapServer::MapServer()
    :
    map_register(std::make_shared<Native::Router::LispList::Default::Service::Ipv6::Default_::MapServer::MapRegister>())
{
    map_register->parent = this;

    yang_name = "map-server"; yang_parent_name = "default"; is_top_level_class = false; has_list_ancestor = true; is_presence_container = true;
}

Native::Router::LispList::Default::Service::Ipv6::Default_::MapServer::~MapServer()
{
}

bool Native::Router::LispList::Default::Service::Ipv6::Default_::MapServer::has_data() const
{
    if (is_presence_container) return true;
    return (map_register !=  nullptr && map_register->has_data());
}

bool Native::Router::LispList::Default::Service::Ipv6::Default_::MapServer::has_operation() const
{
    return is_set(yfilter)
	|| (map_register !=  nullptr && map_register->has_operation());
}

std::string Native::Router::LispList::Default::Service::Ipv6::Default_::MapServer::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "map-server";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::LispList::Default::Service::Ipv6::Default_::MapServer::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Router::LispList::Default::Service::Ipv6::Default_::MapServer::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "map-register")
    {
        if(map_register == nullptr)
        {
            map_register = std::make_shared<Native::Router::LispList::Default::Service::Ipv6::Default_::MapServer::MapRegister>();
        }
        return map_register;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Router::LispList::Default::Service::Ipv6::Default_::MapServer::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(map_register != nullptr)
    {
        _children["map-register"] = map_register;
    }

    return _children;
}

void Native::Router::LispList::Default::Service::Ipv6::Default_::MapServer::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Router::LispList::Default::Service::Ipv6::Default_::MapServer::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Router::LispList::Default::Service::Ipv6::Default_::MapServer::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "map-register")
        return true;
    return false;
}

Native::Router::LispList::Default::Service::Ipv6::Default_::MapServer::MapRegister::MapRegister()
    :
    validate(std::make_shared<Native::Router::LispList::Default::Service::Ipv6::Default_::MapServer::MapRegister::Validate>())
{
    validate->parent = this;

    yang_name = "map-register"; yang_parent_name = "map-server"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Router::LispList::Default::Service::Ipv6::Default_::MapServer::MapRegister::~MapRegister()
{
}

bool Native::Router::LispList::Default::Service::Ipv6::Default_::MapServer::MapRegister::has_data() const
{
    if (is_presence_container) return true;
    return (validate !=  nullptr && validate->has_data());
}

bool Native::Router::LispList::Default::Service::Ipv6::Default_::MapServer::MapRegister::has_operation() const
{
    return is_set(yfilter)
	|| (validate !=  nullptr && validate->has_operation());
}

std::string Native::Router::LispList::Default::Service::Ipv6::Default_::MapServer::MapRegister::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "map-register";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::LispList::Default::Service::Ipv6::Default_::MapServer::MapRegister::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Router::LispList::Default::Service::Ipv6::Default_::MapServer::MapRegister::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "validate")
    {
        if(validate == nullptr)
        {
            validate = std::make_shared<Native::Router::LispList::Default::Service::Ipv6::Default_::MapServer::MapRegister::Validate>();
        }
        return validate;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Router::LispList::Default::Service::Ipv6::Default_::MapServer::MapRegister::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(validate != nullptr)
    {
        _children["validate"] = validate;
    }

    return _children;
}

void Native::Router::LispList::Default::Service::Ipv6::Default_::MapServer::MapRegister::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Router::LispList::Default::Service::Ipv6::Default_::MapServer::MapRegister::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Router::LispList::Default::Service::Ipv6::Default_::MapServer::MapRegister::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "validate")
        return true;
    return false;
}

Native::Router::LispList::Default::Service::Ipv6::Default_::MapServer::MapRegister::Validate::Validate()
    :
    source(std::make_shared<Native::Router::LispList::Default::Service::Ipv6::Default_::MapServer::MapRegister::Validate::Source>())
{
    source->parent = this;

    yang_name = "validate"; yang_parent_name = "map-register"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Router::LispList::Default::Service::Ipv6::Default_::MapServer::MapRegister::Validate::~Validate()
{
}

bool Native::Router::LispList::Default::Service::Ipv6::Default_::MapServer::MapRegister::Validate::has_data() const
{
    if (is_presence_container) return true;
    return (source !=  nullptr && source->has_data());
}

bool Native::Router::LispList::Default::Service::Ipv6::Default_::MapServer::MapRegister::Validate::has_operation() const
{
    return is_set(yfilter)
	|| (source !=  nullptr && source->has_operation());
}

std::string Native::Router::LispList::Default::Service::Ipv6::Default_::MapServer::MapRegister::Validate::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "validate";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::LispList::Default::Service::Ipv6::Default_::MapServer::MapRegister::Validate::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Router::LispList::Default::Service::Ipv6::Default_::MapServer::MapRegister::Validate::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "source")
    {
        if(source == nullptr)
        {
            source = std::make_shared<Native::Router::LispList::Default::Service::Ipv6::Default_::MapServer::MapRegister::Validate::Source>();
        }
        return source;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Router::LispList::Default::Service::Ipv6::Default_::MapServer::MapRegister::Validate::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(source != nullptr)
    {
        _children["source"] = source;
    }

    return _children;
}

void Native::Router::LispList::Default::Service::Ipv6::Default_::MapServer::MapRegister::Validate::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Router::LispList::Default::Service::Ipv6::Default_::MapServer::MapRegister::Validate::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Router::LispList::Default::Service::Ipv6::Default_::MapServer::MapRegister::Validate::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "source")
        return true;
    return false;
}

Native::Router::LispList::Default::Service::Ipv6::Default_::MapServer::MapRegister::Validate::Source::Source()
    :
    allowed_locator{YType::empty, "allowed-locator"}
{

    yang_name = "source"; yang_parent_name = "validate"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Router::LispList::Default::Service::Ipv6::Default_::MapServer::MapRegister::Validate::Source::~Source()
{
}

bool Native::Router::LispList::Default::Service::Ipv6::Default_::MapServer::MapRegister::Validate::Source::has_data() const
{
    if (is_presence_container) return true;
    return allowed_locator.is_set;
}

bool Native::Router::LispList::Default::Service::Ipv6::Default_::MapServer::MapRegister::Validate::Source::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(allowed_locator.yfilter);
}

std::string Native::Router::LispList::Default::Service::Ipv6::Default_::MapServer::MapRegister::Validate::Source::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "source";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::LispList::Default::Service::Ipv6::Default_::MapServer::MapRegister::Validate::Source::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (allowed_locator.is_set || is_set(allowed_locator.yfilter)) leaf_name_data.push_back(allowed_locator.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Router::LispList::Default::Service::Ipv6::Default_::MapServer::MapRegister::Validate::Source::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Router::LispList::Default::Service::Ipv6::Default_::MapServer::MapRegister::Validate::Source::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Router::LispList::Default::Service::Ipv6::Default_::MapServer::MapRegister::Validate::Source::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "allowed-locator")
    {
        allowed_locator = value;
        allowed_locator.value_namespace = name_space;
        allowed_locator.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::LispList::Default::Service::Ipv6::Default_::MapServer::MapRegister::Validate::Source::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "allowed-locator")
    {
        allowed_locator.yfilter = yfilter;
    }
}

bool Native::Router::LispList::Default::Service::Ipv6::Default_::MapServer::MapRegister::Validate::Source::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "allowed-locator")
        return true;
    return false;
}

Native::Router::LispList::Default::Service::Ipv6::Default_::SiteRegistration::SiteRegistration()
    :
    limit{YType::uint32, "limit"},
    warning_threshold{YType::uint8, "warning-threshold"}
{

    yang_name = "site-registration"; yang_parent_name = "default"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Router::LispList::Default::Service::Ipv6::Default_::SiteRegistration::~SiteRegistration()
{
}

bool Native::Router::LispList::Default::Service::Ipv6::Default_::SiteRegistration::has_data() const
{
    if (is_presence_container) return true;
    return limit.is_set
	|| warning_threshold.is_set;
}

bool Native::Router::LispList::Default::Service::Ipv6::Default_::SiteRegistration::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(limit.yfilter)
	|| ydk::is_set(warning_threshold.yfilter);
}

std::string Native::Router::LispList::Default::Service::Ipv6::Default_::SiteRegistration::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "site-registration";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::LispList::Default::Service::Ipv6::Default_::SiteRegistration::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (limit.is_set || is_set(limit.yfilter)) leaf_name_data.push_back(limit.get_name_leafdata());
    if (warning_threshold.is_set || is_set(warning_threshold.yfilter)) leaf_name_data.push_back(warning_threshold.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Router::LispList::Default::Service::Ipv6::Default_::SiteRegistration::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Router::LispList::Default::Service::Ipv6::Default_::SiteRegistration::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Router::LispList::Default::Service::Ipv6::Default_::SiteRegistration::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "limit")
    {
        limit = value;
        limit.value_namespace = name_space;
        limit.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "warning-threshold")
    {
        warning_threshold = value;
        warning_threshold.value_namespace = name_space;
        warning_threshold.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::LispList::Default::Service::Ipv6::Default_::SiteRegistration::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "limit")
    {
        limit.yfilter = yfilter;
    }
    if(value_path == "warning-threshold")
    {
        warning_threshold.yfilter = yfilter;
    }
}

bool Native::Router::LispList::Default::Service::Ipv6::Default_::SiteRegistration::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "limit" || name == "warning-threshold")
        return true;
    return false;
}

Native::Router::LispList::Default::Service::Ipv6::Default_::SolicitMapRequest::SolicitMapRequest()
    :
    ignore{YType::empty, "ignore"},
    max_per_entry{YType::uint8, "max-per-entry"},
    suppression_time{YType::uint16, "suppression-time"}
{

    yang_name = "solicit-map-request"; yang_parent_name = "default"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Router::LispList::Default::Service::Ipv6::Default_::SolicitMapRequest::~SolicitMapRequest()
{
}

bool Native::Router::LispList::Default::Service::Ipv6::Default_::SolicitMapRequest::has_data() const
{
    if (is_presence_container) return true;
    return ignore.is_set
	|| max_per_entry.is_set
	|| suppression_time.is_set;
}

bool Native::Router::LispList::Default::Service::Ipv6::Default_::SolicitMapRequest::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ignore.yfilter)
	|| ydk::is_set(max_per_entry.yfilter)
	|| ydk::is_set(suppression_time.yfilter);
}

std::string Native::Router::LispList::Default::Service::Ipv6::Default_::SolicitMapRequest::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "solicit-map-request";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::LispList::Default::Service::Ipv6::Default_::SolicitMapRequest::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ignore.is_set || is_set(ignore.yfilter)) leaf_name_data.push_back(ignore.get_name_leafdata());
    if (max_per_entry.is_set || is_set(max_per_entry.yfilter)) leaf_name_data.push_back(max_per_entry.get_name_leafdata());
    if (suppression_time.is_set || is_set(suppression_time.yfilter)) leaf_name_data.push_back(suppression_time.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Router::LispList::Default::Service::Ipv6::Default_::SolicitMapRequest::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Router::LispList::Default::Service::Ipv6::Default_::SolicitMapRequest::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Router::LispList::Default::Service::Ipv6::Default_::SolicitMapRequest::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ignore")
    {
        ignore = value;
        ignore.value_namespace = name_space;
        ignore.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "max-per-entry")
    {
        max_per_entry = value;
        max_per_entry.value_namespace = name_space;
        max_per_entry.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "suppression-time")
    {
        suppression_time = value;
        suppression_time.value_namespace = name_space;
        suppression_time.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::LispList::Default::Service::Ipv6::Default_::SolicitMapRequest::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ignore")
    {
        ignore.yfilter = yfilter;
    }
    if(value_path == "max-per-entry")
    {
        max_per_entry.yfilter = yfilter;
    }
    if(value_path == "suppression-time")
    {
        suppression_time.yfilter = yfilter;
    }
}

bool Native::Router::LispList::Default::Service::Ipv6::Default_::SolicitMapRequest::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ignore" || name == "max-per-entry" || name == "suppression-time")
        return true;
    return false;
}

Native::Router::LispList::Default::Service::Ipv6::Default_::Distance::Distance()
    :
    alt{YType::uint8, "alt"},
    away{YType::uint8, "away"},
    dyn_eid{YType::uint8, "dyn-eid"},
    site_registrations{YType::uint8, "site-registrations"}
{

    yang_name = "distance"; yang_parent_name = "default"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Router::LispList::Default::Service::Ipv6::Default_::Distance::~Distance()
{
}

bool Native::Router::LispList::Default::Service::Ipv6::Default_::Distance::has_data() const
{
    if (is_presence_container) return true;
    return alt.is_set
	|| away.is_set
	|| dyn_eid.is_set
	|| site_registrations.is_set;
}

bool Native::Router::LispList::Default::Service::Ipv6::Default_::Distance::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(alt.yfilter)
	|| ydk::is_set(away.yfilter)
	|| ydk::is_set(dyn_eid.yfilter)
	|| ydk::is_set(site_registrations.yfilter);
}

std::string Native::Router::LispList::Default::Service::Ipv6::Default_::Distance::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "distance";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::LispList::Default::Service::Ipv6::Default_::Distance::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (alt.is_set || is_set(alt.yfilter)) leaf_name_data.push_back(alt.get_name_leafdata());
    if (away.is_set || is_set(away.yfilter)) leaf_name_data.push_back(away.get_name_leafdata());
    if (dyn_eid.is_set || is_set(dyn_eid.yfilter)) leaf_name_data.push_back(dyn_eid.get_name_leafdata());
    if (site_registrations.is_set || is_set(site_registrations.yfilter)) leaf_name_data.push_back(site_registrations.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Router::LispList::Default::Service::Ipv6::Default_::Distance::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Router::LispList::Default::Service::Ipv6::Default_::Distance::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Router::LispList::Default::Service::Ipv6::Default_::Distance::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "alt")
    {
        alt = value;
        alt.value_namespace = name_space;
        alt.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "away")
    {
        away = value;
        away.value_namespace = name_space;
        away.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dyn-eid")
    {
        dyn_eid = value;
        dyn_eid.value_namespace = name_space;
        dyn_eid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "site-registrations")
    {
        site_registrations = value;
        site_registrations.value_namespace = name_space;
        site_registrations.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::LispList::Default::Service::Ipv6::Default_::Distance::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "alt")
    {
        alt.yfilter = yfilter;
    }
    if(value_path == "away")
    {
        away.yfilter = yfilter;
    }
    if(value_path == "dyn-eid")
    {
        dyn_eid.yfilter = yfilter;
    }
    if(value_path == "site-registrations")
    {
        site_registrations.yfilter = yfilter;
    }
}

bool Native::Router::LispList::Default::Service::Ipv6::Default_::Distance::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "alt" || name == "away" || name == "dyn-eid" || name == "site-registrations")
        return true;
    return false;
}

Native::Router::LispList::Default::Service::Ipv6::Default_::MapCache::MapCache()
    :
    site_registration{YType::empty, "site-registration"}
        ,
    away_eids(std::make_shared<Native::Router::LispList::Default::Service::Ipv6::Default_::MapCache::AwayEids>())
{
    away_eids->parent = this;

    yang_name = "map-cache"; yang_parent_name = "default"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Router::LispList::Default::Service::Ipv6::Default_::MapCache::~MapCache()
{
}

bool Native::Router::LispList::Default::Service::Ipv6::Default_::MapCache::has_data() const
{
    if (is_presence_container) return true;
    return site_registration.is_set
	|| (away_eids !=  nullptr && away_eids->has_data());
}

bool Native::Router::LispList::Default::Service::Ipv6::Default_::MapCache::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(site_registration.yfilter)
	|| (away_eids !=  nullptr && away_eids->has_operation());
}

std::string Native::Router::LispList::Default::Service::Ipv6::Default_::MapCache::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "map-cache";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::LispList::Default::Service::Ipv6::Default_::MapCache::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (site_registration.is_set || is_set(site_registration.yfilter)) leaf_name_data.push_back(site_registration.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Router::LispList::Default::Service::Ipv6::Default_::MapCache::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "away-eids")
    {
        if(away_eids == nullptr)
        {
            away_eids = std::make_shared<Native::Router::LispList::Default::Service::Ipv6::Default_::MapCache::AwayEids>();
        }
        return away_eids;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Router::LispList::Default::Service::Ipv6::Default_::MapCache::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(away_eids != nullptr)
    {
        _children["away-eids"] = away_eids;
    }

    return _children;
}

void Native::Router::LispList::Default::Service::Ipv6::Default_::MapCache::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "site-registration")
    {
        site_registration = value;
        site_registration.value_namespace = name_space;
        site_registration.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::LispList::Default::Service::Ipv6::Default_::MapCache::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "site-registration")
    {
        site_registration.yfilter = yfilter;
    }
}

bool Native::Router::LispList::Default::Service::Ipv6::Default_::MapCache::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "away-eids" || name == "site-registration")
        return true;
    return false;
}

Native::Router::LispList::Default::Service::Ipv6::Default_::MapCache::AwayEids::AwayEids()
    :
    send_map_request{YType::empty, "send-map-request"}
{

    yang_name = "away-eids"; yang_parent_name = "map-cache"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Router::LispList::Default::Service::Ipv6::Default_::MapCache::AwayEids::~AwayEids()
{
}

bool Native::Router::LispList::Default::Service::Ipv6::Default_::MapCache::AwayEids::has_data() const
{
    if (is_presence_container) return true;
    return send_map_request.is_set;
}

bool Native::Router::LispList::Default::Service::Ipv6::Default_::MapCache::AwayEids::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(send_map_request.yfilter);
}

std::string Native::Router::LispList::Default::Service::Ipv6::Default_::MapCache::AwayEids::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "away-eids";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::LispList::Default::Service::Ipv6::Default_::MapCache::AwayEids::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (send_map_request.is_set || is_set(send_map_request.yfilter)) leaf_name_data.push_back(send_map_request.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Router::LispList::Default::Service::Ipv6::Default_::MapCache::AwayEids::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Router::LispList::Default::Service::Ipv6::Default_::MapCache::AwayEids::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Router::LispList::Default::Service::Ipv6::Default_::MapCache::AwayEids::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "send-map-request")
    {
        send_map_request = value;
        send_map_request.value_namespace = name_space;
        send_map_request.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::LispList::Default::Service::Ipv6::Default_::MapCache::AwayEids::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "send-map-request")
    {
        send_map_request.yfilter = yfilter;
    }
}

bool Native::Router::LispList::Default::Service::Ipv6::Default_::MapCache::AwayEids::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "send-map-request")
        return true;
    return false;
}

Native::Router::LispList::Default::Service::Ipv6::Default_::MapCachePersistent::MapCachePersistent()
    :
    interval{YType::uint16, "interval"}
{

    yang_name = "map-cache-persistent"; yang_parent_name = "default"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Router::LispList::Default::Service::Ipv6::Default_::MapCachePersistent::~MapCachePersistent()
{
}

bool Native::Router::LispList::Default::Service::Ipv6::Default_::MapCachePersistent::has_data() const
{
    if (is_presence_container) return true;
    return interval.is_set;
}

bool Native::Router::LispList::Default::Service::Ipv6::Default_::MapCachePersistent::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(interval.yfilter);
}

std::string Native::Router::LispList::Default::Service::Ipv6::Default_::MapCachePersistent::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "map-cache-persistent";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::LispList::Default::Service::Ipv6::Default_::MapCachePersistent::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interval.is_set || is_set(interval.yfilter)) leaf_name_data.push_back(interval.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Router::LispList::Default::Service::Ipv6::Default_::MapCachePersistent::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Router::LispList::Default::Service::Ipv6::Default_::MapCachePersistent::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Router::LispList::Default::Service::Ipv6::Default_::MapCachePersistent::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "interval")
    {
        interval = value;
        interval.value_namespace = name_space;
        interval.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::LispList::Default::Service::Ipv6::Default_::MapCachePersistent::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "interval")
    {
        interval.yfilter = yfilter;
    }
}

bool Native::Router::LispList::Default::Service::Ipv6::Default_::MapCachePersistent::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "interval")
        return true;
    return false;
}

Native::Router::LispList::Default::Service::Ipv6::Default_::ProxyItr::ProxyItr()
    :
    ipv4_addr{YType::str, "ipv4-addr"},
    ipv6_addr{YType::str, "ipv6-addr"}
{

    yang_name = "proxy-itr"; yang_parent_name = "default"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Router::LispList::Default::Service::Ipv6::Default_::ProxyItr::~ProxyItr()
{
}

bool Native::Router::LispList::Default::Service::Ipv6::Default_::ProxyItr::has_data() const
{
    if (is_presence_container) return true;
    return ipv4_addr.is_set
	|| ipv6_addr.is_set;
}

bool Native::Router::LispList::Default::Service::Ipv6::Default_::ProxyItr::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ipv4_addr.yfilter)
	|| ydk::is_set(ipv6_addr.yfilter);
}

std::string Native::Router::LispList::Default::Service::Ipv6::Default_::ProxyItr::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "proxy-itr";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::LispList::Default::Service::Ipv6::Default_::ProxyItr::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ipv4_addr.is_set || is_set(ipv4_addr.yfilter)) leaf_name_data.push_back(ipv4_addr.get_name_leafdata());
    if (ipv6_addr.is_set || is_set(ipv6_addr.yfilter)) leaf_name_data.push_back(ipv6_addr.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Router::LispList::Default::Service::Ipv6::Default_::ProxyItr::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Router::LispList::Default::Service::Ipv6::Default_::ProxyItr::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Router::LispList::Default::Service::Ipv6::Default_::ProxyItr::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ipv4-addr")
    {
        ipv4_addr = value;
        ipv4_addr.value_namespace = name_space;
        ipv4_addr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv6-addr")
    {
        ipv6_addr = value;
        ipv6_addr.value_namespace = name_space;
        ipv6_addr.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::LispList::Default::Service::Ipv6::Default_::ProxyItr::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ipv4-addr")
    {
        ipv4_addr.yfilter = yfilter;
    }
    if(value_path == "ipv6-addr")
    {
        ipv6_addr.yfilter = yfilter;
    }
}

bool Native::Router::LispList::Default::Service::Ipv6::Default_::ProxyItr::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ipv4-addr" || name == "ipv6-addr")
        return true;
    return false;
}

Native::Router::LispList::Default::Service::Ipv6::Default_::RouteExport::RouteExport()
    :
    site_registrations{YType::empty, "site-registrations"},
    away_eids{YType::empty, "away-eids"}
{

    yang_name = "route-export"; yang_parent_name = "default"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Router::LispList::Default::Service::Ipv6::Default_::RouteExport::~RouteExport()
{
}

bool Native::Router::LispList::Default::Service::Ipv6::Default_::RouteExport::has_data() const
{
    if (is_presence_container) return true;
    return site_registrations.is_set
	|| away_eids.is_set;
}

bool Native::Router::LispList::Default::Service::Ipv6::Default_::RouteExport::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(site_registrations.yfilter)
	|| ydk::is_set(away_eids.yfilter);
}

std::string Native::Router::LispList::Default::Service::Ipv6::Default_::RouteExport::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "route-export";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::LispList::Default::Service::Ipv6::Default_::RouteExport::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (site_registrations.is_set || is_set(site_registrations.yfilter)) leaf_name_data.push_back(site_registrations.get_name_leafdata());
    if (away_eids.is_set || is_set(away_eids.yfilter)) leaf_name_data.push_back(away_eids.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Router::LispList::Default::Service::Ipv6::Default_::RouteExport::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Router::LispList::Default::Service::Ipv6::Default_::RouteExport::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Router::LispList::Default::Service::Ipv6::Default_::RouteExport::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "site-registrations")
    {
        site_registrations = value;
        site_registrations.value_namespace = name_space;
        site_registrations.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "away-eids")
    {
        away_eids = value;
        away_eids.value_namespace = name_space;
        away_eids.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::LispList::Default::Service::Ipv6::Default_::RouteExport::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "site-registrations")
    {
        site_registrations.yfilter = yfilter;
    }
    if(value_path == "away-eids")
    {
        away_eids.yfilter = yfilter;
    }
}

bool Native::Router::LispList::Default::Service::Ipv6::Default_::RouteExport::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "site-registrations" || name == "away-eids")
        return true;
    return false;
}

Native::Router::LispList::Default::Service::Ipv6::Default_::UsePetr::UsePetr()
    :
    locator_address{YType::str, "locator-address"}
        ,
    priority(std::make_shared<Native::Router::LispList::Default::Service::Ipv6::Default_::UsePetr::Priority>())
{
    priority->parent = this;

    yang_name = "use-petr"; yang_parent_name = "default"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Router::LispList::Default::Service::Ipv6::Default_::UsePetr::~UsePetr()
{
}

bool Native::Router::LispList::Default::Service::Ipv6::Default_::UsePetr::has_data() const
{
    if (is_presence_container) return true;
    return locator_address.is_set
	|| (priority !=  nullptr && priority->has_data());
}

bool Native::Router::LispList::Default::Service::Ipv6::Default_::UsePetr::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(locator_address.yfilter)
	|| (priority !=  nullptr && priority->has_operation());
}

std::string Native::Router::LispList::Default::Service::Ipv6::Default_::UsePetr::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "use-petr";
    ADD_KEY_TOKEN(locator_address, "locator-address");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::LispList::Default::Service::Ipv6::Default_::UsePetr::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (locator_address.is_set || is_set(locator_address.yfilter)) leaf_name_data.push_back(locator_address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Router::LispList::Default::Service::Ipv6::Default_::UsePetr::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "priority")
    {
        if(priority == nullptr)
        {
            priority = std::make_shared<Native::Router::LispList::Default::Service::Ipv6::Default_::UsePetr::Priority>();
        }
        return priority;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Router::LispList::Default::Service::Ipv6::Default_::UsePetr::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(priority != nullptr)
    {
        _children["priority"] = priority;
    }

    return _children;
}

void Native::Router::LispList::Default::Service::Ipv6::Default_::UsePetr::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "locator-address")
    {
        locator_address = value;
        locator_address.value_namespace = name_space;
        locator_address.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::LispList::Default::Service::Ipv6::Default_::UsePetr::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "locator-address")
    {
        locator_address.yfilter = yfilter;
    }
}

bool Native::Router::LispList::Default::Service::Ipv6::Default_::UsePetr::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "priority" || name == "locator-address")
        return true;
    return false;
}

Native::Router::LispList::Default::Service::Ipv6::Default_::UsePetr::Priority::Priority()
    :
    priority_value{YType::uint8, "priority-value"},
    weight{YType::uint8, "weight"}
{

    yang_name = "priority"; yang_parent_name = "use-petr"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Router::LispList::Default::Service::Ipv6::Default_::UsePetr::Priority::~Priority()
{
}

bool Native::Router::LispList::Default::Service::Ipv6::Default_::UsePetr::Priority::has_data() const
{
    if (is_presence_container) return true;
    return priority_value.is_set
	|| weight.is_set;
}

bool Native::Router::LispList::Default::Service::Ipv6::Default_::UsePetr::Priority::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(priority_value.yfilter)
	|| ydk::is_set(weight.yfilter);
}

std::string Native::Router::LispList::Default::Service::Ipv6::Default_::UsePetr::Priority::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "priority";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::LispList::Default::Service::Ipv6::Default_::UsePetr::Priority::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (priority_value.is_set || is_set(priority_value.yfilter)) leaf_name_data.push_back(priority_value.get_name_leafdata());
    if (weight.is_set || is_set(weight.yfilter)) leaf_name_data.push_back(weight.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Router::LispList::Default::Service::Ipv6::Default_::UsePetr::Priority::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Router::LispList::Default::Service::Ipv6::Default_::UsePetr::Priority::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Router::LispList::Default::Service::Ipv6::Default_::UsePetr::Priority::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "priority-value")
    {
        priority_value = value;
        priority_value.value_namespace = name_space;
        priority_value.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "weight")
    {
        weight = value;
        weight.value_namespace = name_space;
        weight.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::LispList::Default::Service::Ipv6::Default_::UsePetr::Priority::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "priority-value")
    {
        priority_value.yfilter = yfilter;
    }
    if(value_path == "weight")
    {
        weight.yfilter = yfilter;
    }
}

bool Native::Router::LispList::Default::Service::Ipv6::Default_::UsePetr::Priority::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "priority-value" || name == "weight")
        return true;
    return false;
}

Native::Router::LispList::Default::Service::Ipv6::Default_::Import::Import()
    :
    database(std::make_shared<Native::Router::LispList::Default::Service::Ipv6::Default_::Import::Database>())
{
    database->parent = this;

    yang_name = "import"; yang_parent_name = "default"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Router::LispList::Default::Service::Ipv6::Default_::Import::~Import()
{
}

bool Native::Router::LispList::Default::Service::Ipv6::Default_::Import::has_data() const
{
    if (is_presence_container) return true;
    return (database !=  nullptr && database->has_data());
}

bool Native::Router::LispList::Default::Service::Ipv6::Default_::Import::has_operation() const
{
    return is_set(yfilter)
	|| (database !=  nullptr && database->has_operation());
}

std::string Native::Router::LispList::Default::Service::Ipv6::Default_::Import::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "import";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::LispList::Default::Service::Ipv6::Default_::Import::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Router::LispList::Default::Service::Ipv6::Default_::Import::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "database")
    {
        if(database == nullptr)
        {
            database = std::make_shared<Native::Router::LispList::Default::Service::Ipv6::Default_::Import::Database>();
        }
        return database;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Router::LispList::Default::Service::Ipv6::Default_::Import::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(database != nullptr)
    {
        _children["database"] = database;
    }

    return _children;
}

void Native::Router::LispList::Default::Service::Ipv6::Default_::Import::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Router::LispList::Default::Service::Ipv6::Default_::Import::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Router::LispList::Default::Service::Ipv6::Default_::Import::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "database")
        return true;
    return false;
}

Native::Router::LispList::Default::Service::Ipv6::Default_::Import::Database::Database()
    :
    site_registration{YType::empty, "site-registration"},
    locator_set{YType::str, "locator-set"}
{

    yang_name = "database"; yang_parent_name = "import"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Router::LispList::Default::Service::Ipv6::Default_::Import::Database::~Database()
{
}

bool Native::Router::LispList::Default::Service::Ipv6::Default_::Import::Database::has_data() const
{
    if (is_presence_container) return true;
    return site_registration.is_set
	|| locator_set.is_set;
}

bool Native::Router::LispList::Default::Service::Ipv6::Default_::Import::Database::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(site_registration.yfilter)
	|| ydk::is_set(locator_set.yfilter);
}

std::string Native::Router::LispList::Default::Service::Ipv6::Default_::Import::Database::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "database";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::LispList::Default::Service::Ipv6::Default_::Import::Database::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (site_registration.is_set || is_set(site_registration.yfilter)) leaf_name_data.push_back(site_registration.get_name_leafdata());
    if (locator_set.is_set || is_set(locator_set.yfilter)) leaf_name_data.push_back(locator_set.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Router::LispList::Default::Service::Ipv6::Default_::Import::Database::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Router::LispList::Default::Service::Ipv6::Default_::Import::Database::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Router::LispList::Default::Service::Ipv6::Default_::Import::Database::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "site-registration")
    {
        site_registration = value;
        site_registration.value_namespace = name_space;
        site_registration.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "locator-set")
    {
        locator_set = value;
        locator_set.value_namespace = name_space;
        locator_set.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::LispList::Default::Service::Ipv6::Default_::Import::Database::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "site-registration")
    {
        site_registration.yfilter = yfilter;
    }
    if(value_path == "locator-set")
    {
        locator_set.yfilter = yfilter;
    }
}

bool Native::Router::LispList::Default::Service::Ipv6::Default_::Import::Database::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "site-registration" || name == "locator-set")
        return true;
    return false;
}

Native::Router::LispList::Default::Service::Ipv6::DatabaseMapping::DatabaseMapping()
    :
    limit(std::make_shared<Native::Router::LispList::Default::Service::Ipv6::DatabaseMapping::Limit>())
{
    limit->parent = this;

    yang_name = "database-mapping"; yang_parent_name = "ipv6"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Router::LispList::Default::Service::Ipv6::DatabaseMapping::~DatabaseMapping()
{
}

bool Native::Router::LispList::Default::Service::Ipv6::DatabaseMapping::has_data() const
{
    if (is_presence_container) return true;
    return (limit !=  nullptr && limit->has_data());
}

bool Native::Router::LispList::Default::Service::Ipv6::DatabaseMapping::has_operation() const
{
    return is_set(yfilter)
	|| (limit !=  nullptr && limit->has_operation());
}

std::string Native::Router::LispList::Default::Service::Ipv6::DatabaseMapping::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "database-mapping";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::LispList::Default::Service::Ipv6::DatabaseMapping::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Router::LispList::Default::Service::Ipv6::DatabaseMapping::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "limit")
    {
        if(limit == nullptr)
        {
            limit = std::make_shared<Native::Router::LispList::Default::Service::Ipv6::DatabaseMapping::Limit>();
        }
        return limit;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Router::LispList::Default::Service::Ipv6::DatabaseMapping::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(limit != nullptr)
    {
        _children["limit"] = limit;
    }

    return _children;
}

void Native::Router::LispList::Default::Service::Ipv6::DatabaseMapping::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Router::LispList::Default::Service::Ipv6::DatabaseMapping::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Router::LispList::Default::Service::Ipv6::DatabaseMapping::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "limit")
        return true;
    return false;
}

Native::Router::LispList::Default::Service::Ipv6::DatabaseMapping::Limit::Limit()
    :
    dynamic{YType::uint32, "dynamic"},
    warning_threshold{YType::uint8, "warning-threshold"}
{

    yang_name = "limit"; yang_parent_name = "database-mapping"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Router::LispList::Default::Service::Ipv6::DatabaseMapping::Limit::~Limit()
{
}

bool Native::Router::LispList::Default::Service::Ipv6::DatabaseMapping::Limit::has_data() const
{
    if (is_presence_container) return true;
    return dynamic.is_set
	|| warning_threshold.is_set;
}

bool Native::Router::LispList::Default::Service::Ipv6::DatabaseMapping::Limit::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(dynamic.yfilter)
	|| ydk::is_set(warning_threshold.yfilter);
}

std::string Native::Router::LispList::Default::Service::Ipv6::DatabaseMapping::Limit::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "limit";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::LispList::Default::Service::Ipv6::DatabaseMapping::Limit::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (dynamic.is_set || is_set(dynamic.yfilter)) leaf_name_data.push_back(dynamic.get_name_leafdata());
    if (warning_threshold.is_set || is_set(warning_threshold.yfilter)) leaf_name_data.push_back(warning_threshold.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Router::LispList::Default::Service::Ipv6::DatabaseMapping::Limit::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Router::LispList::Default::Service::Ipv6::DatabaseMapping::Limit::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Router::LispList::Default::Service::Ipv6::DatabaseMapping::Limit::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "dynamic")
    {
        dynamic = value;
        dynamic.value_namespace = name_space;
        dynamic.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "warning-threshold")
    {
        warning_threshold = value;
        warning_threshold.value_namespace = name_space;
        warning_threshold.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::LispList::Default::Service::Ipv6::DatabaseMapping::Limit::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "dynamic")
    {
        dynamic.yfilter = yfilter;
    }
    if(value_path == "warning-threshold")
    {
        warning_threshold.yfilter = yfilter;
    }
}

bool Native::Router::LispList::Default::Service::Ipv6::DatabaseMapping::Limit::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "dynamic" || name == "warning-threshold")
        return true;
    return false;
}

Native::Router::LispList::Default::Service::Ipv6::Itr::Itr()
    :
    nmr_ttl{YType::uint16, "nmr-ttl"}
        ,
    map_resolver(this, {"ip_addr"})
{

    yang_name = "itr"; yang_parent_name = "ipv6"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Router::LispList::Default::Service::Ipv6::Itr::~Itr()
{
}

bool Native::Router::LispList::Default::Service::Ipv6::Itr::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<map_resolver.len(); index++)
    {
        if(map_resolver[index]->has_data())
            return true;
    }
    return nmr_ttl.is_set;
}

bool Native::Router::LispList::Default::Service::Ipv6::Itr::has_operation() const
{
    for (std::size_t index=0; index<map_resolver.len(); index++)
    {
        if(map_resolver[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(nmr_ttl.yfilter);
}

std::string Native::Router::LispList::Default::Service::Ipv6::Itr::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "itr";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::LispList::Default::Service::Ipv6::Itr::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (nmr_ttl.is_set || is_set(nmr_ttl.yfilter)) leaf_name_data.push_back(nmr_ttl.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Router::LispList::Default::Service::Ipv6::Itr::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "map-resolver")
    {
        auto ent_ = std::make_shared<Native::Router::LispList::Default::Service::Ipv6::Itr::MapResolver>();
        ent_->parent = this;
        map_resolver.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Router::LispList::Default::Service::Ipv6::Itr::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : map_resolver.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Native::Router::LispList::Default::Service::Ipv6::Itr::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "nmr-ttl")
    {
        nmr_ttl = value;
        nmr_ttl.value_namespace = name_space;
        nmr_ttl.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::LispList::Default::Service::Ipv6::Itr::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "nmr-ttl")
    {
        nmr_ttl.yfilter = yfilter;
    }
}

bool Native::Router::LispList::Default::Service::Ipv6::Itr::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "map-resolver" || name == "nmr-ttl")
        return true;
    return false;
}

Native::Router::LispList::Default::Service::Ipv6::Itr::MapResolver::MapResolver()
    :
    ip_addr{YType::str, "ip-addr"},
    prefix_list{YType::str, "prefix-list"}
{

    yang_name = "map-resolver"; yang_parent_name = "itr"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Router::LispList::Default::Service::Ipv6::Itr::MapResolver::~MapResolver()
{
}

bool Native::Router::LispList::Default::Service::Ipv6::Itr::MapResolver::has_data() const
{
    if (is_presence_container) return true;
    return ip_addr.is_set
	|| prefix_list.is_set;
}

bool Native::Router::LispList::Default::Service::Ipv6::Itr::MapResolver::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ip_addr.yfilter)
	|| ydk::is_set(prefix_list.yfilter);
}

std::string Native::Router::LispList::Default::Service::Ipv6::Itr::MapResolver::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "map-resolver";
    ADD_KEY_TOKEN(ip_addr, "ip-addr");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::LispList::Default::Service::Ipv6::Itr::MapResolver::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ip_addr.is_set || is_set(ip_addr.yfilter)) leaf_name_data.push_back(ip_addr.get_name_leafdata());
    if (prefix_list.is_set || is_set(prefix_list.yfilter)) leaf_name_data.push_back(prefix_list.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Router::LispList::Default::Service::Ipv6::Itr::MapResolver::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Router::LispList::Default::Service::Ipv6::Itr::MapResolver::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Router::LispList::Default::Service::Ipv6::Itr::MapResolver::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ip-addr")
    {
        ip_addr = value;
        ip_addr.value_namespace = name_space;
        ip_addr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "prefix-list")
    {
        prefix_list = value;
        prefix_list.value_namespace = name_space;
        prefix_list.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::LispList::Default::Service::Ipv6::Itr::MapResolver::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ip-addr")
    {
        ip_addr.yfilter = yfilter;
    }
    if(value_path == "prefix-list")
    {
        prefix_list.yfilter = yfilter;
    }
}

bool Native::Router::LispList::Default::Service::Ipv6::Itr::MapResolver::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ip-addr" || name == "prefix-list")
        return true;
    return false;
}

Native::Router::LispList::Default::Service::Ipv6::ItrEnable::ItrEnable()
    :
    itr{YType::empty, "itr"}
{

    yang_name = "itr-enable"; yang_parent_name = "ipv6"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Router::LispList::Default::Service::Ipv6::ItrEnable::~ItrEnable()
{
}

bool Native::Router::LispList::Default::Service::Ipv6::ItrEnable::has_data() const
{
    if (is_presence_container) return true;
    return itr.is_set;
}

bool Native::Router::LispList::Default::Service::Ipv6::ItrEnable::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(itr.yfilter);
}

std::string Native::Router::LispList::Default::Service::Ipv6::ItrEnable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "itr-enable";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::LispList::Default::Service::Ipv6::ItrEnable::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (itr.is_set || is_set(itr.yfilter)) leaf_name_data.push_back(itr.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Router::LispList::Default::Service::Ipv6::ItrEnable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Router::LispList::Default::Service::Ipv6::ItrEnable::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Router::LispList::Default::Service::Ipv6::ItrEnable::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "itr")
    {
        itr = value;
        itr.value_namespace = name_space;
        itr.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::LispList::Default::Service::Ipv6::ItrEnable::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "itr")
    {
        itr.yfilter = yfilter;
    }
}

bool Native::Router::LispList::Default::Service::Ipv6::ItrEnable::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "itr")
        return true;
    return false;
}

Native::Router::LispList::Default::Service::Ipv6::EtrEnable::EtrEnable()
    :
    etr{YType::empty, "etr"}
{

    yang_name = "etr-enable"; yang_parent_name = "ipv6"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Router::LispList::Default::Service::Ipv6::EtrEnable::~EtrEnable()
{
}

bool Native::Router::LispList::Default::Service::Ipv6::EtrEnable::has_data() const
{
    if (is_presence_container) return true;
    return etr.is_set;
}

bool Native::Router::LispList::Default::Service::Ipv6::EtrEnable::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(etr.yfilter);
}

std::string Native::Router::LispList::Default::Service::Ipv6::EtrEnable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "etr-enable";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::LispList::Default::Service::Ipv6::EtrEnable::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (etr.is_set || is_set(etr.yfilter)) leaf_name_data.push_back(etr.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Router::LispList::Default::Service::Ipv6::EtrEnable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Router::LispList::Default::Service::Ipv6::EtrEnable::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Router::LispList::Default::Service::Ipv6::EtrEnable::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "etr")
    {
        etr = value;
        etr.value_namespace = name_space;
        etr.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::LispList::Default::Service::Ipv6::EtrEnable::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "etr")
    {
        etr.yfilter = yfilter;
    }
}

bool Native::Router::LispList::Default::Service::Ipv6::EtrEnable::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "etr")
        return true;
    return false;
}

Native::Router::LispList::Default::Service::Ipv6::Etr::Etr()
    :
    map_cache_ttl{YType::uint16, "map-cache-ttl"}
        ,
    map_server(this, {"ip_addr"})
    , accept_map_request_mapping(std::make_shared<Native::Router::LispList::Default::Service::Ipv6::Etr::AcceptMapRequestMapping>())
{
    accept_map_request_mapping->parent = this;

    yang_name = "etr"; yang_parent_name = "ipv6"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Router::LispList::Default::Service::Ipv6::Etr::~Etr()
{
}

bool Native::Router::LispList::Default::Service::Ipv6::Etr::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<map_server.len(); index++)
    {
        if(map_server[index]->has_data())
            return true;
    }
    return map_cache_ttl.is_set
	|| (accept_map_request_mapping !=  nullptr && accept_map_request_mapping->has_data());
}

bool Native::Router::LispList::Default::Service::Ipv6::Etr::has_operation() const
{
    for (std::size_t index=0; index<map_server.len(); index++)
    {
        if(map_server[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(map_cache_ttl.yfilter)
	|| (accept_map_request_mapping !=  nullptr && accept_map_request_mapping->has_operation());
}

std::string Native::Router::LispList::Default::Service::Ipv6::Etr::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "etr";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::LispList::Default::Service::Ipv6::Etr::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (map_cache_ttl.is_set || is_set(map_cache_ttl.yfilter)) leaf_name_data.push_back(map_cache_ttl.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Router::LispList::Default::Service::Ipv6::Etr::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "map-server")
    {
        auto ent_ = std::make_shared<Native::Router::LispList::Default::Service::Ipv6::Etr::MapServer>();
        ent_->parent = this;
        map_server.append(ent_);
        return ent_;
    }

    if(child_yang_name == "accept-map-request-mapping")
    {
        if(accept_map_request_mapping == nullptr)
        {
            accept_map_request_mapping = std::make_shared<Native::Router::LispList::Default::Service::Ipv6::Etr::AcceptMapRequestMapping>();
        }
        return accept_map_request_mapping;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Router::LispList::Default::Service::Ipv6::Etr::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : map_server.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    if(accept_map_request_mapping != nullptr)
    {
        _children["accept-map-request-mapping"] = accept_map_request_mapping;
    }

    return _children;
}

void Native::Router::LispList::Default::Service::Ipv6::Etr::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "map-cache-ttl")
    {
        map_cache_ttl = value;
        map_cache_ttl.value_namespace = name_space;
        map_cache_ttl.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::LispList::Default::Service::Ipv6::Etr::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "map-cache-ttl")
    {
        map_cache_ttl.yfilter = yfilter;
    }
}

bool Native::Router::LispList::Default::Service::Ipv6::Etr::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "map-server" || name == "accept-map-request-mapping" || name == "map-cache-ttl")
        return true;
    return false;
}

Native::Router::LispList::Default::Service::Ipv6::Etr::MapServer::MapServer()
    :
    ip_addr{YType::str, "ip-addr"},
    proxy_reply{YType::empty, "proxy-reply"}
        ,
    key(std::make_shared<Native::Router::LispList::Default::Service::Ipv6::Etr::MapServer::Key>())
{
    key->parent = this;

    yang_name = "map-server"; yang_parent_name = "etr"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Router::LispList::Default::Service::Ipv6::Etr::MapServer::~MapServer()
{
}

bool Native::Router::LispList::Default::Service::Ipv6::Etr::MapServer::has_data() const
{
    if (is_presence_container) return true;
    return ip_addr.is_set
	|| proxy_reply.is_set
	|| (key !=  nullptr && key->has_data());
}

bool Native::Router::LispList::Default::Service::Ipv6::Etr::MapServer::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ip_addr.yfilter)
	|| ydk::is_set(proxy_reply.yfilter)
	|| (key !=  nullptr && key->has_operation());
}

std::string Native::Router::LispList::Default::Service::Ipv6::Etr::MapServer::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "map-server";
    ADD_KEY_TOKEN(ip_addr, "ip-addr");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::LispList::Default::Service::Ipv6::Etr::MapServer::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ip_addr.is_set || is_set(ip_addr.yfilter)) leaf_name_data.push_back(ip_addr.get_name_leafdata());
    if (proxy_reply.is_set || is_set(proxy_reply.yfilter)) leaf_name_data.push_back(proxy_reply.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Router::LispList::Default::Service::Ipv6::Etr::MapServer::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "key")
    {
        if(key == nullptr)
        {
            key = std::make_shared<Native::Router::LispList::Default::Service::Ipv6::Etr::MapServer::Key>();
        }
        return key;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Router::LispList::Default::Service::Ipv6::Etr::MapServer::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(key != nullptr)
    {
        _children["key"] = key;
    }

    return _children;
}

void Native::Router::LispList::Default::Service::Ipv6::Etr::MapServer::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ip-addr")
    {
        ip_addr = value;
        ip_addr.value_namespace = name_space;
        ip_addr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "proxy-reply")
    {
        proxy_reply = value;
        proxy_reply.value_namespace = name_space;
        proxy_reply.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::LispList::Default::Service::Ipv6::Etr::MapServer::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ip-addr")
    {
        ip_addr.yfilter = yfilter;
    }
    if(value_path == "proxy-reply")
    {
        proxy_reply.yfilter = yfilter;
    }
}

bool Native::Router::LispList::Default::Service::Ipv6::Etr::MapServer::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "key" || name == "ip-addr" || name == "proxy-reply")
        return true;
    return false;
}

Native::Router::LispList::Default::Service::Ipv6::Etr::MapServer::Key::Key()
    :
    key_pwd(std::make_shared<Native::Router::LispList::Default::Service::Ipv6::Etr::MapServer::Key::KeyPwd>())
    , key_0(std::make_shared<Native::Router::LispList::Default::Service::Ipv6::Etr::MapServer::Key::Key0>())
    , key_6(std::make_shared<Native::Router::LispList::Default::Service::Ipv6::Etr::MapServer::Key::Key6>())
    , key_7(std::make_shared<Native::Router::LispList::Default::Service::Ipv6::Etr::MapServer::Key::Key7>())
{
    key_pwd->parent = this;
    key_0->parent = this;
    key_6->parent = this;
    key_7->parent = this;

    yang_name = "key"; yang_parent_name = "map-server"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Router::LispList::Default::Service::Ipv6::Etr::MapServer::Key::~Key()
{
}

bool Native::Router::LispList::Default::Service::Ipv6::Etr::MapServer::Key::has_data() const
{
    if (is_presence_container) return true;
    return (key_pwd !=  nullptr && key_pwd->has_data())
	|| (key_0 !=  nullptr && key_0->has_data())
	|| (key_6 !=  nullptr && key_6->has_data())
	|| (key_7 !=  nullptr && key_7->has_data());
}

bool Native::Router::LispList::Default::Service::Ipv6::Etr::MapServer::Key::has_operation() const
{
    return is_set(yfilter)
	|| (key_pwd !=  nullptr && key_pwd->has_operation())
	|| (key_0 !=  nullptr && key_0->has_operation())
	|| (key_6 !=  nullptr && key_6->has_operation())
	|| (key_7 !=  nullptr && key_7->has_operation());
}

std::string Native::Router::LispList::Default::Service::Ipv6::Etr::MapServer::Key::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "key";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::LispList::Default::Service::Ipv6::Etr::MapServer::Key::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Router::LispList::Default::Service::Ipv6::Etr::MapServer::Key::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "key-pwd")
    {
        if(key_pwd == nullptr)
        {
            key_pwd = std::make_shared<Native::Router::LispList::Default::Service::Ipv6::Etr::MapServer::Key::KeyPwd>();
        }
        return key_pwd;
    }

    if(child_yang_name == "key-0")
    {
        if(key_0 == nullptr)
        {
            key_0 = std::make_shared<Native::Router::LispList::Default::Service::Ipv6::Etr::MapServer::Key::Key0>();
        }
        return key_0;
    }

    if(child_yang_name == "key-6")
    {
        if(key_6 == nullptr)
        {
            key_6 = std::make_shared<Native::Router::LispList::Default::Service::Ipv6::Etr::MapServer::Key::Key6>();
        }
        return key_6;
    }

    if(child_yang_name == "key-7")
    {
        if(key_7 == nullptr)
        {
            key_7 = std::make_shared<Native::Router::LispList::Default::Service::Ipv6::Etr::MapServer::Key::Key7>();
        }
        return key_7;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Router::LispList::Default::Service::Ipv6::Etr::MapServer::Key::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(key_pwd != nullptr)
    {
        _children["key-pwd"] = key_pwd;
    }

    if(key_0 != nullptr)
    {
        _children["key-0"] = key_0;
    }

    if(key_6 != nullptr)
    {
        _children["key-6"] = key_6;
    }

    if(key_7 != nullptr)
    {
        _children["key-7"] = key_7;
    }

    return _children;
}

void Native::Router::LispList::Default::Service::Ipv6::Etr::MapServer::Key::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Router::LispList::Default::Service::Ipv6::Etr::MapServer::Key::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Router::LispList::Default::Service::Ipv6::Etr::MapServer::Key::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "key-pwd" || name == "key-0" || name == "key-6" || name == "key-7")
        return true;
    return false;
}

Native::Router::LispList::Default::Service::Ipv6::Etr::MapServer::Key::KeyPwd::KeyPwd()
    :
    unc_pwd{YType::str, "unc-pwd"},
    hash_function{YType::enumeration, "hash-function"},
    prefix_list{YType::str, "prefix-list"}
{

    yang_name = "key-pwd"; yang_parent_name = "key"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Router::LispList::Default::Service::Ipv6::Etr::MapServer::Key::KeyPwd::~KeyPwd()
{
}

bool Native::Router::LispList::Default::Service::Ipv6::Etr::MapServer::Key::KeyPwd::has_data() const
{
    if (is_presence_container) return true;
    return unc_pwd.is_set
	|| hash_function.is_set
	|| prefix_list.is_set;
}

bool Native::Router::LispList::Default::Service::Ipv6::Etr::MapServer::Key::KeyPwd::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(unc_pwd.yfilter)
	|| ydk::is_set(hash_function.yfilter)
	|| ydk::is_set(prefix_list.yfilter);
}

std::string Native::Router::LispList::Default::Service::Ipv6::Etr::MapServer::Key::KeyPwd::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "key-pwd";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::LispList::Default::Service::Ipv6::Etr::MapServer::Key::KeyPwd::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (unc_pwd.is_set || is_set(unc_pwd.yfilter)) leaf_name_data.push_back(unc_pwd.get_name_leafdata());
    if (hash_function.is_set || is_set(hash_function.yfilter)) leaf_name_data.push_back(hash_function.get_name_leafdata());
    if (prefix_list.is_set || is_set(prefix_list.yfilter)) leaf_name_data.push_back(prefix_list.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Router::LispList::Default::Service::Ipv6::Etr::MapServer::Key::KeyPwd::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Router::LispList::Default::Service::Ipv6::Etr::MapServer::Key::KeyPwd::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Router::LispList::Default::Service::Ipv6::Etr::MapServer::Key::KeyPwd::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "unc-pwd")
    {
        unc_pwd = value;
        unc_pwd.value_namespace = name_space;
        unc_pwd.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "hash-function")
    {
        hash_function = value;
        hash_function.value_namespace = name_space;
        hash_function.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "prefix-list")
    {
        prefix_list = value;
        prefix_list.value_namespace = name_space;
        prefix_list.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::LispList::Default::Service::Ipv6::Etr::MapServer::Key::KeyPwd::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "unc-pwd")
    {
        unc_pwd.yfilter = yfilter;
    }
    if(value_path == "hash-function")
    {
        hash_function.yfilter = yfilter;
    }
    if(value_path == "prefix-list")
    {
        prefix_list.yfilter = yfilter;
    }
}

bool Native::Router::LispList::Default::Service::Ipv6::Etr::MapServer::Key::KeyPwd::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "unc-pwd" || name == "hash-function" || name == "prefix-list")
        return true;
    return false;
}

Native::Router::LispList::Default::Service::Ipv6::Etr::MapServer::Key::Key0::Key0()
    :
    ak_0{YType::str, "ak-0"},
    hash_function{YType::enumeration, "hash-function"},
    prefix_list{YType::str, "prefix-list"}
{

    yang_name = "key-0"; yang_parent_name = "key"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Router::LispList::Default::Service::Ipv6::Etr::MapServer::Key::Key0::~Key0()
{
}

bool Native::Router::LispList::Default::Service::Ipv6::Etr::MapServer::Key::Key0::has_data() const
{
    if (is_presence_container) return true;
    return ak_0.is_set
	|| hash_function.is_set
	|| prefix_list.is_set;
}

bool Native::Router::LispList::Default::Service::Ipv6::Etr::MapServer::Key::Key0::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ak_0.yfilter)
	|| ydk::is_set(hash_function.yfilter)
	|| ydk::is_set(prefix_list.yfilter);
}

std::string Native::Router::LispList::Default::Service::Ipv6::Etr::MapServer::Key::Key0::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "key-0";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::LispList::Default::Service::Ipv6::Etr::MapServer::Key::Key0::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ak_0.is_set || is_set(ak_0.yfilter)) leaf_name_data.push_back(ak_0.get_name_leafdata());
    if (hash_function.is_set || is_set(hash_function.yfilter)) leaf_name_data.push_back(hash_function.get_name_leafdata());
    if (prefix_list.is_set || is_set(prefix_list.yfilter)) leaf_name_data.push_back(prefix_list.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Router::LispList::Default::Service::Ipv6::Etr::MapServer::Key::Key0::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Router::LispList::Default::Service::Ipv6::Etr::MapServer::Key::Key0::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Router::LispList::Default::Service::Ipv6::Etr::MapServer::Key::Key0::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ak-0")
    {
        ak_0 = value;
        ak_0.value_namespace = name_space;
        ak_0.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "hash-function")
    {
        hash_function = value;
        hash_function.value_namespace = name_space;
        hash_function.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "prefix-list")
    {
        prefix_list = value;
        prefix_list.value_namespace = name_space;
        prefix_list.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::LispList::Default::Service::Ipv6::Etr::MapServer::Key::Key0::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ak-0")
    {
        ak_0.yfilter = yfilter;
    }
    if(value_path == "hash-function")
    {
        hash_function.yfilter = yfilter;
    }
    if(value_path == "prefix-list")
    {
        prefix_list.yfilter = yfilter;
    }
}

bool Native::Router::LispList::Default::Service::Ipv6::Etr::MapServer::Key::Key0::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ak-0" || name == "hash-function" || name == "prefix-list")
        return true;
    return false;
}

Native::Router::LispList::Default::Service::Ipv6::Etr::MapServer::Key::Key6::Key6()
    :
    ak_6{YType::str, "ak-6"},
    hash_function{YType::enumeration, "hash-function"},
    prefix_list{YType::str, "prefix-list"}
{

    yang_name = "key-6"; yang_parent_name = "key"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Router::LispList::Default::Service::Ipv6::Etr::MapServer::Key::Key6::~Key6()
{
}

bool Native::Router::LispList::Default::Service::Ipv6::Etr::MapServer::Key::Key6::has_data() const
{
    if (is_presence_container) return true;
    return ak_6.is_set
	|| hash_function.is_set
	|| prefix_list.is_set;
}

bool Native::Router::LispList::Default::Service::Ipv6::Etr::MapServer::Key::Key6::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ak_6.yfilter)
	|| ydk::is_set(hash_function.yfilter)
	|| ydk::is_set(prefix_list.yfilter);
}

std::string Native::Router::LispList::Default::Service::Ipv6::Etr::MapServer::Key::Key6::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "key-6";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::LispList::Default::Service::Ipv6::Etr::MapServer::Key::Key6::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ak_6.is_set || is_set(ak_6.yfilter)) leaf_name_data.push_back(ak_6.get_name_leafdata());
    if (hash_function.is_set || is_set(hash_function.yfilter)) leaf_name_data.push_back(hash_function.get_name_leafdata());
    if (prefix_list.is_set || is_set(prefix_list.yfilter)) leaf_name_data.push_back(prefix_list.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Router::LispList::Default::Service::Ipv6::Etr::MapServer::Key::Key6::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Router::LispList::Default::Service::Ipv6::Etr::MapServer::Key::Key6::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Router::LispList::Default::Service::Ipv6::Etr::MapServer::Key::Key6::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ak-6")
    {
        ak_6 = value;
        ak_6.value_namespace = name_space;
        ak_6.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "hash-function")
    {
        hash_function = value;
        hash_function.value_namespace = name_space;
        hash_function.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "prefix-list")
    {
        prefix_list = value;
        prefix_list.value_namespace = name_space;
        prefix_list.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::LispList::Default::Service::Ipv6::Etr::MapServer::Key::Key6::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ak-6")
    {
        ak_6.yfilter = yfilter;
    }
    if(value_path == "hash-function")
    {
        hash_function.yfilter = yfilter;
    }
    if(value_path == "prefix-list")
    {
        prefix_list.yfilter = yfilter;
    }
}

bool Native::Router::LispList::Default::Service::Ipv6::Etr::MapServer::Key::Key6::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ak-6" || name == "hash-function" || name == "prefix-list")
        return true;
    return false;
}

Native::Router::LispList::Default::Service::Ipv6::Etr::MapServer::Key::Key7::Key7()
    :
    ak_7{YType::str, "ak-7"},
    hash_function{YType::enumeration, "hash-function"},
    prefix_list{YType::str, "prefix-list"}
{

    yang_name = "key-7"; yang_parent_name = "key"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Router::LispList::Default::Service::Ipv6::Etr::MapServer::Key::Key7::~Key7()
{
}

bool Native::Router::LispList::Default::Service::Ipv6::Etr::MapServer::Key::Key7::has_data() const
{
    if (is_presence_container) return true;
    return ak_7.is_set
	|| hash_function.is_set
	|| prefix_list.is_set;
}

bool Native::Router::LispList::Default::Service::Ipv6::Etr::MapServer::Key::Key7::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ak_7.yfilter)
	|| ydk::is_set(hash_function.yfilter)
	|| ydk::is_set(prefix_list.yfilter);
}

std::string Native::Router::LispList::Default::Service::Ipv6::Etr::MapServer::Key::Key7::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "key-7";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::LispList::Default::Service::Ipv6::Etr::MapServer::Key::Key7::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ak_7.is_set || is_set(ak_7.yfilter)) leaf_name_data.push_back(ak_7.get_name_leafdata());
    if (hash_function.is_set || is_set(hash_function.yfilter)) leaf_name_data.push_back(hash_function.get_name_leafdata());
    if (prefix_list.is_set || is_set(prefix_list.yfilter)) leaf_name_data.push_back(prefix_list.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Router::LispList::Default::Service::Ipv6::Etr::MapServer::Key::Key7::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Router::LispList::Default::Service::Ipv6::Etr::MapServer::Key::Key7::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Router::LispList::Default::Service::Ipv6::Etr::MapServer::Key::Key7::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ak-7")
    {
        ak_7 = value;
        ak_7.value_namespace = name_space;
        ak_7.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "hash-function")
    {
        hash_function = value;
        hash_function.value_namespace = name_space;
        hash_function.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "prefix-list")
    {
        prefix_list = value;
        prefix_list.value_namespace = name_space;
        prefix_list.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::LispList::Default::Service::Ipv6::Etr::MapServer::Key::Key7::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ak-7")
    {
        ak_7.yfilter = yfilter;
    }
    if(value_path == "hash-function")
    {
        hash_function.yfilter = yfilter;
    }
    if(value_path == "prefix-list")
    {
        prefix_list.yfilter = yfilter;
    }
}

bool Native::Router::LispList::Default::Service::Ipv6::Etr::MapServer::Key::Key7::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ak-7" || name == "hash-function" || name == "prefix-list")
        return true;
    return false;
}

Native::Router::LispList::Default::Service::Ipv6::Etr::AcceptMapRequestMapping::AcceptMapRequestMapping()
    :
    accept_mappping{YType::empty, "accept-mappping"},
    verify{YType::empty, "verify"}
{

    yang_name = "accept-map-request-mapping"; yang_parent_name = "etr"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Router::LispList::Default::Service::Ipv6::Etr::AcceptMapRequestMapping::~AcceptMapRequestMapping()
{
}

bool Native::Router::LispList::Default::Service::Ipv6::Etr::AcceptMapRequestMapping::has_data() const
{
    if (is_presence_container) return true;
    return accept_mappping.is_set
	|| verify.is_set;
}

bool Native::Router::LispList::Default::Service::Ipv6::Etr::AcceptMapRequestMapping::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(accept_mappping.yfilter)
	|| ydk::is_set(verify.yfilter);
}

std::string Native::Router::LispList::Default::Service::Ipv6::Etr::AcceptMapRequestMapping::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "accept-map-request-mapping";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::LispList::Default::Service::Ipv6::Etr::AcceptMapRequestMapping::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (accept_mappping.is_set || is_set(accept_mappping.yfilter)) leaf_name_data.push_back(accept_mappping.get_name_leafdata());
    if (verify.is_set || is_set(verify.yfilter)) leaf_name_data.push_back(verify.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Router::LispList::Default::Service::Ipv6::Etr::AcceptMapRequestMapping::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Router::LispList::Default::Service::Ipv6::Etr::AcceptMapRequestMapping::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Router::LispList::Default::Service::Ipv6::Etr::AcceptMapRequestMapping::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "accept-mappping")
    {
        accept_mappping = value;
        accept_mappping.value_namespace = name_space;
        accept_mappping.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "verify")
    {
        verify = value;
        verify.value_namespace = name_space;
        verify.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::LispList::Default::Service::Ipv6::Etr::AcceptMapRequestMapping::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "accept-mappping")
    {
        accept_mappping.yfilter = yfilter;
    }
    if(value_path == "verify")
    {
        verify.yfilter = yfilter;
    }
}

bool Native::Router::LispList::Default::Service::Ipv6::Etr::AcceptMapRequestMapping::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "accept-mappping" || name == "verify")
        return true;
    return false;
}

Native::Router::LispList::Default::Service::Ipv6::MapCacheLimit::MapCacheLimit()
    :
    max_map_cache_entries{YType::uint32, "max-map-cache-entries"},
    reserve_list{YType::str, "reserve-list"},
    warning_threshold{YType::uint8, "warning-threshold"}
{

    yang_name = "map-cache-limit"; yang_parent_name = "ipv6"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Router::LispList::Default::Service::Ipv6::MapCacheLimit::~MapCacheLimit()
{
}

bool Native::Router::LispList::Default::Service::Ipv6::MapCacheLimit::has_data() const
{
    if (is_presence_container) return true;
    return max_map_cache_entries.is_set
	|| reserve_list.is_set
	|| warning_threshold.is_set;
}

bool Native::Router::LispList::Default::Service::Ipv6::MapCacheLimit::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(max_map_cache_entries.yfilter)
	|| ydk::is_set(reserve_list.yfilter)
	|| ydk::is_set(warning_threshold.yfilter);
}

std::string Native::Router::LispList::Default::Service::Ipv6::MapCacheLimit::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "map-cache-limit";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::LispList::Default::Service::Ipv6::MapCacheLimit::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (max_map_cache_entries.is_set || is_set(max_map_cache_entries.yfilter)) leaf_name_data.push_back(max_map_cache_entries.get_name_leafdata());
    if (reserve_list.is_set || is_set(reserve_list.yfilter)) leaf_name_data.push_back(reserve_list.get_name_leafdata());
    if (warning_threshold.is_set || is_set(warning_threshold.yfilter)) leaf_name_data.push_back(warning_threshold.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Router::LispList::Default::Service::Ipv6::MapCacheLimit::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Router::LispList::Default::Service::Ipv6::MapCacheLimit::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Router::LispList::Default::Service::Ipv6::MapCacheLimit::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "max-map-cache-entries")
    {
        max_map_cache_entries = value;
        max_map_cache_entries.value_namespace = name_space;
        max_map_cache_entries.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "reserve-list")
    {
        reserve_list = value;
        reserve_list.value_namespace = name_space;
        reserve_list.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "warning-threshold")
    {
        warning_threshold = value;
        warning_threshold.value_namespace = name_space;
        warning_threshold.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::LispList::Default::Service::Ipv6::MapCacheLimit::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "max-map-cache-entries")
    {
        max_map_cache_entries.yfilter = yfilter;
    }
    if(value_path == "reserve-list")
    {
        reserve_list.yfilter = yfilter;
    }
    if(value_path == "warning-threshold")
    {
        warning_threshold.yfilter = yfilter;
    }
}

bool Native::Router::LispList::Default::Service::Ipv6::MapCacheLimit::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "max-map-cache-entries" || name == "reserve-list" || name == "warning-threshold")
        return true;
    return false;
}

Native::Router::LispList::Default::Service::Ipv6::MapResolver::MapResolver()
    :
    map_request(std::make_shared<Native::Router::LispList::Default::Service::Ipv6::MapResolver::MapRequest>())
{
    map_request->parent = this;

    yang_name = "map-resolver"; yang_parent_name = "ipv6"; is_top_level_class = false; has_list_ancestor = true; is_presence_container = true;
}

Native::Router::LispList::Default::Service::Ipv6::MapResolver::~MapResolver()
{
}

bool Native::Router::LispList::Default::Service::Ipv6::MapResolver::has_data() const
{
    if (is_presence_container) return true;
    return (map_request !=  nullptr && map_request->has_data());
}

bool Native::Router::LispList::Default::Service::Ipv6::MapResolver::has_operation() const
{
    return is_set(yfilter)
	|| (map_request !=  nullptr && map_request->has_operation());
}

std::string Native::Router::LispList::Default::Service::Ipv6::MapResolver::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "map-resolver";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::LispList::Default::Service::Ipv6::MapResolver::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Router::LispList::Default::Service::Ipv6::MapResolver::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "map-request")
    {
        if(map_request == nullptr)
        {
            map_request = std::make_shared<Native::Router::LispList::Default::Service::Ipv6::MapResolver::MapRequest>();
        }
        return map_request;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Router::LispList::Default::Service::Ipv6::MapResolver::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(map_request != nullptr)
    {
        _children["map-request"] = map_request;
    }

    return _children;
}

void Native::Router::LispList::Default::Service::Ipv6::MapResolver::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Router::LispList::Default::Service::Ipv6::MapResolver::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Router::LispList::Default::Service::Ipv6::MapResolver::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "map-request")
        return true;
    return false;
}

Native::Router::LispList::Default::Service::Ipv6::MapResolver::MapRequest::MapRequest()
    :
    validate(std::make_shared<Native::Router::LispList::Default::Service::Ipv6::MapResolver::MapRequest::Validate>())
{
    validate->parent = this;

    yang_name = "map-request"; yang_parent_name = "map-resolver"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Router::LispList::Default::Service::Ipv6::MapResolver::MapRequest::~MapRequest()
{
}

bool Native::Router::LispList::Default::Service::Ipv6::MapResolver::MapRequest::has_data() const
{
    if (is_presence_container) return true;
    return (validate !=  nullptr && validate->has_data());
}

bool Native::Router::LispList::Default::Service::Ipv6::MapResolver::MapRequest::has_operation() const
{
    return is_set(yfilter)
	|| (validate !=  nullptr && validate->has_operation());
}

std::string Native::Router::LispList::Default::Service::Ipv6::MapResolver::MapRequest::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "map-request";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::LispList::Default::Service::Ipv6::MapResolver::MapRequest::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Router::LispList::Default::Service::Ipv6::MapResolver::MapRequest::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "validate")
    {
        if(validate == nullptr)
        {
            validate = std::make_shared<Native::Router::LispList::Default::Service::Ipv6::MapResolver::MapRequest::Validate>();
        }
        return validate;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Router::LispList::Default::Service::Ipv6::MapResolver::MapRequest::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(validate != nullptr)
    {
        _children["validate"] = validate;
    }

    return _children;
}

void Native::Router::LispList::Default::Service::Ipv6::MapResolver::MapRequest::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Router::LispList::Default::Service::Ipv6::MapResolver::MapRequest::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Router::LispList::Default::Service::Ipv6::MapResolver::MapRequest::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "validate")
        return true;
    return false;
}

Native::Router::LispList::Default::Service::Ipv6::MapResolver::MapRequest::Validate::Validate()
    :
    source(std::make_shared<Native::Router::LispList::Default::Service::Ipv6::MapResolver::MapRequest::Validate::Source>())
{
    source->parent = this;

    yang_name = "validate"; yang_parent_name = "map-request"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Router::LispList::Default::Service::Ipv6::MapResolver::MapRequest::Validate::~Validate()
{
}

bool Native::Router::LispList::Default::Service::Ipv6::MapResolver::MapRequest::Validate::has_data() const
{
    if (is_presence_container) return true;
    return (source !=  nullptr && source->has_data());
}

bool Native::Router::LispList::Default::Service::Ipv6::MapResolver::MapRequest::Validate::has_operation() const
{
    return is_set(yfilter)
	|| (source !=  nullptr && source->has_operation());
}

std::string Native::Router::LispList::Default::Service::Ipv6::MapResolver::MapRequest::Validate::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "validate";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::LispList::Default::Service::Ipv6::MapResolver::MapRequest::Validate::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Router::LispList::Default::Service::Ipv6::MapResolver::MapRequest::Validate::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "source")
    {
        if(source == nullptr)
        {
            source = std::make_shared<Native::Router::LispList::Default::Service::Ipv6::MapResolver::MapRequest::Validate::Source>();
        }
        return source;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Router::LispList::Default::Service::Ipv6::MapResolver::MapRequest::Validate::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(source != nullptr)
    {
        _children["source"] = source;
    }

    return _children;
}

void Native::Router::LispList::Default::Service::Ipv6::MapResolver::MapRequest::Validate::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Router::LispList::Default::Service::Ipv6::MapResolver::MapRequest::Validate::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Router::LispList::Default::Service::Ipv6::MapResolver::MapRequest::Validate::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "source")
        return true;
    return false;
}

Native::Router::LispList::Default::Service::Ipv6::MapResolver::MapRequest::Validate::Source::Source()
    :
    list(std::make_shared<Native::Router::LispList::Default::Service::Ipv6::MapResolver::MapRequest::Validate::Source::List>())
    , registered(std::make_shared<Native::Router::LispList::Default::Service::Ipv6::MapResolver::MapRequest::Validate::Source::Registered>())
{
    list->parent = this;
    registered->parent = this;

    yang_name = "source"; yang_parent_name = "validate"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Router::LispList::Default::Service::Ipv6::MapResolver::MapRequest::Validate::Source::~Source()
{
}

bool Native::Router::LispList::Default::Service::Ipv6::MapResolver::MapRequest::Validate::Source::has_data() const
{
    if (is_presence_container) return true;
    return (list !=  nullptr && list->has_data())
	|| (registered !=  nullptr && registered->has_data());
}

bool Native::Router::LispList::Default::Service::Ipv6::MapResolver::MapRequest::Validate::Source::has_operation() const
{
    return is_set(yfilter)
	|| (list !=  nullptr && list->has_operation())
	|| (registered !=  nullptr && registered->has_operation());
}

std::string Native::Router::LispList::Default::Service::Ipv6::MapResolver::MapRequest::Validate::Source::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "source";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::LispList::Default::Service::Ipv6::MapResolver::MapRequest::Validate::Source::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Router::LispList::Default::Service::Ipv6::MapResolver::MapRequest::Validate::Source::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "list")
    {
        if(list == nullptr)
        {
            list = std::make_shared<Native::Router::LispList::Default::Service::Ipv6::MapResolver::MapRequest::Validate::Source::List>();
        }
        return list;
    }

    if(child_yang_name == "registered")
    {
        if(registered == nullptr)
        {
            registered = std::make_shared<Native::Router::LispList::Default::Service::Ipv6::MapResolver::MapRequest::Validate::Source::Registered>();
        }
        return registered;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Router::LispList::Default::Service::Ipv6::MapResolver::MapRequest::Validate::Source::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(list != nullptr)
    {
        _children["list"] = list;
    }

    if(registered != nullptr)
    {
        _children["registered"] = registered;
    }

    return _children;
}

void Native::Router::LispList::Default::Service::Ipv6::MapResolver::MapRequest::Validate::Source::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Router::LispList::Default::Service::Ipv6::MapResolver::MapRequest::Validate::Source::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Router::LispList::Default::Service::Ipv6::MapResolver::MapRequest::Validate::Source::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "list" || name == "registered")
        return true;
    return false;
}

Native::Router::LispList::Default::Service::Ipv6::MapResolver::MapRequest::Validate::Source::List::List()
    :
    ipv4{YType::str, "ipv4"},
    ipv6{YType::str, "ipv6"}
{

    yang_name = "list"; yang_parent_name = "source"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Router::LispList::Default::Service::Ipv6::MapResolver::MapRequest::Validate::Source::List::~List()
{
}

bool Native::Router::LispList::Default::Service::Ipv6::MapResolver::MapRequest::Validate::Source::List::has_data() const
{
    if (is_presence_container) return true;
    return ipv4.is_set
	|| ipv6.is_set;
}

bool Native::Router::LispList::Default::Service::Ipv6::MapResolver::MapRequest::Validate::Source::List::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ipv4.yfilter)
	|| ydk::is_set(ipv6.yfilter);
}

std::string Native::Router::LispList::Default::Service::Ipv6::MapResolver::MapRequest::Validate::Source::List::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "list";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::LispList::Default::Service::Ipv6::MapResolver::MapRequest::Validate::Source::List::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ipv4.is_set || is_set(ipv4.yfilter)) leaf_name_data.push_back(ipv4.get_name_leafdata());
    if (ipv6.is_set || is_set(ipv6.yfilter)) leaf_name_data.push_back(ipv6.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Router::LispList::Default::Service::Ipv6::MapResolver::MapRequest::Validate::Source::List::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Router::LispList::Default::Service::Ipv6::MapResolver::MapRequest::Validate::Source::List::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Router::LispList::Default::Service::Ipv6::MapResolver::MapRequest::Validate::Source::List::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ipv4")
    {
        ipv4 = value;
        ipv4.value_namespace = name_space;
        ipv4.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv6")
    {
        ipv6 = value;
        ipv6.value_namespace = name_space;
        ipv6.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::LispList::Default::Service::Ipv6::MapResolver::MapRequest::Validate::Source::List::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ipv4")
    {
        ipv4.yfilter = yfilter;
    }
    if(value_path == "ipv6")
    {
        ipv6.yfilter = yfilter;
    }
}

bool Native::Router::LispList::Default::Service::Ipv6::MapResolver::MapRequest::Validate::Source::List::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ipv4" || name == "ipv6")
        return true;
    return false;
}

Native::Router::LispList::Default::Service::Ipv6::MapResolver::MapRequest::Validate::Source::Registered::Registered()
    :
    list(std::make_shared<Native::Router::LispList::Default::Service::Ipv6::MapResolver::MapRequest::Validate::Source::Registered::List>())
{
    list->parent = this;

    yang_name = "registered"; yang_parent_name = "source"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Router::LispList::Default::Service::Ipv6::MapResolver::MapRequest::Validate::Source::Registered::~Registered()
{
}

bool Native::Router::LispList::Default::Service::Ipv6::MapResolver::MapRequest::Validate::Source::Registered::has_data() const
{
    if (is_presence_container) return true;
    return (list !=  nullptr && list->has_data());
}

bool Native::Router::LispList::Default::Service::Ipv6::MapResolver::MapRequest::Validate::Source::Registered::has_operation() const
{
    return is_set(yfilter)
	|| (list !=  nullptr && list->has_operation());
}

std::string Native::Router::LispList::Default::Service::Ipv6::MapResolver::MapRequest::Validate::Source::Registered::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "registered";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::LispList::Default::Service::Ipv6::MapResolver::MapRequest::Validate::Source::Registered::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Router::LispList::Default::Service::Ipv6::MapResolver::MapRequest::Validate::Source::Registered::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "list")
    {
        if(list == nullptr)
        {
            list = std::make_shared<Native::Router::LispList::Default::Service::Ipv6::MapResolver::MapRequest::Validate::Source::Registered::List>();
        }
        return list;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Router::LispList::Default::Service::Ipv6::MapResolver::MapRequest::Validate::Source::Registered::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(list != nullptr)
    {
        _children["list"] = list;
    }

    return _children;
}

void Native::Router::LispList::Default::Service::Ipv6::MapResolver::MapRequest::Validate::Source::Registered::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Router::LispList::Default::Service::Ipv6::MapResolver::MapRequest::Validate::Source::Registered::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Router::LispList::Default::Service::Ipv6::MapResolver::MapRequest::Validate::Source::Registered::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "list")
        return true;
    return false;
}

Native::Router::LispList::Default::Service::Ipv6::MapResolver::MapRequest::Validate::Source::Registered::List::List()
    :
    ipv4{YType::str, "ipv4"},
    ipv6{YType::str, "ipv6"}
{

    yang_name = "list"; yang_parent_name = "registered"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Router::LispList::Default::Service::Ipv6::MapResolver::MapRequest::Validate::Source::Registered::List::~List()
{
}

bool Native::Router::LispList::Default::Service::Ipv6::MapResolver::MapRequest::Validate::Source::Registered::List::has_data() const
{
    if (is_presence_container) return true;
    return ipv4.is_set
	|| ipv6.is_set;
}

bool Native::Router::LispList::Default::Service::Ipv6::MapResolver::MapRequest::Validate::Source::Registered::List::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ipv4.yfilter)
	|| ydk::is_set(ipv6.yfilter);
}

std::string Native::Router::LispList::Default::Service::Ipv6::MapResolver::MapRequest::Validate::Source::Registered::List::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "list";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::LispList::Default::Service::Ipv6::MapResolver::MapRequest::Validate::Source::Registered::List::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ipv4.is_set || is_set(ipv4.yfilter)) leaf_name_data.push_back(ipv4.get_name_leafdata());
    if (ipv6.is_set || is_set(ipv6.yfilter)) leaf_name_data.push_back(ipv6.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Router::LispList::Default::Service::Ipv6::MapResolver::MapRequest::Validate::Source::Registered::List::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Router::LispList::Default::Service::Ipv6::MapResolver::MapRequest::Validate::Source::Registered::List::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Router::LispList::Default::Service::Ipv6::MapResolver::MapRequest::Validate::Source::Registered::List::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ipv4")
    {
        ipv4 = value;
        ipv4.value_namespace = name_space;
        ipv4.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv6")
    {
        ipv6 = value;
        ipv6.value_namespace = name_space;
        ipv6.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::LispList::Default::Service::Ipv6::MapResolver::MapRequest::Validate::Source::Registered::List::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ipv4")
    {
        ipv4.yfilter = yfilter;
    }
    if(value_path == "ipv6")
    {
        ipv6.yfilter = yfilter;
    }
}

bool Native::Router::LispList::Default::Service::Ipv6::MapResolver::MapRequest::Validate::Source::Registered::List::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ipv4" || name == "ipv6")
        return true;
    return false;
}

Native::Router::LispList::Default::Service::Ipv6::MapServer::MapServer()
    :
    map_register(std::make_shared<Native::Router::LispList::Default::Service::Ipv6::MapServer::MapRegister>())
{
    map_register->parent = this;

    yang_name = "map-server"; yang_parent_name = "ipv6"; is_top_level_class = false; has_list_ancestor = true; is_presence_container = true;
}

Native::Router::LispList::Default::Service::Ipv6::MapServer::~MapServer()
{
}

bool Native::Router::LispList::Default::Service::Ipv6::MapServer::has_data() const
{
    if (is_presence_container) return true;
    return (map_register !=  nullptr && map_register->has_data());
}

bool Native::Router::LispList::Default::Service::Ipv6::MapServer::has_operation() const
{
    return is_set(yfilter)
	|| (map_register !=  nullptr && map_register->has_operation());
}

std::string Native::Router::LispList::Default::Service::Ipv6::MapServer::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "map-server";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::LispList::Default::Service::Ipv6::MapServer::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Router::LispList::Default::Service::Ipv6::MapServer::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "map-register")
    {
        if(map_register == nullptr)
        {
            map_register = std::make_shared<Native::Router::LispList::Default::Service::Ipv6::MapServer::MapRegister>();
        }
        return map_register;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Router::LispList::Default::Service::Ipv6::MapServer::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(map_register != nullptr)
    {
        _children["map-register"] = map_register;
    }

    return _children;
}

void Native::Router::LispList::Default::Service::Ipv6::MapServer::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Router::LispList::Default::Service::Ipv6::MapServer::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Router::LispList::Default::Service::Ipv6::MapServer::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "map-register")
        return true;
    return false;
}

Native::Router::LispList::Default::Service::Ipv6::MapServer::MapRegister::MapRegister()
    :
    validate(std::make_shared<Native::Router::LispList::Default::Service::Ipv6::MapServer::MapRegister::Validate>())
{
    validate->parent = this;

    yang_name = "map-register"; yang_parent_name = "map-server"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Router::LispList::Default::Service::Ipv6::MapServer::MapRegister::~MapRegister()
{
}

bool Native::Router::LispList::Default::Service::Ipv6::MapServer::MapRegister::has_data() const
{
    if (is_presence_container) return true;
    return (validate !=  nullptr && validate->has_data());
}

bool Native::Router::LispList::Default::Service::Ipv6::MapServer::MapRegister::has_operation() const
{
    return is_set(yfilter)
	|| (validate !=  nullptr && validate->has_operation());
}

std::string Native::Router::LispList::Default::Service::Ipv6::MapServer::MapRegister::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "map-register";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::LispList::Default::Service::Ipv6::MapServer::MapRegister::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Router::LispList::Default::Service::Ipv6::MapServer::MapRegister::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "validate")
    {
        if(validate == nullptr)
        {
            validate = std::make_shared<Native::Router::LispList::Default::Service::Ipv6::MapServer::MapRegister::Validate>();
        }
        return validate;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Router::LispList::Default::Service::Ipv6::MapServer::MapRegister::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(validate != nullptr)
    {
        _children["validate"] = validate;
    }

    return _children;
}

void Native::Router::LispList::Default::Service::Ipv6::MapServer::MapRegister::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Router::LispList::Default::Service::Ipv6::MapServer::MapRegister::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Router::LispList::Default::Service::Ipv6::MapServer::MapRegister::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "validate")
        return true;
    return false;
}

Native::Router::LispList::Default::Service::Ipv6::MapServer::MapRegister::Validate::Validate()
    :
    source(std::make_shared<Native::Router::LispList::Default::Service::Ipv6::MapServer::MapRegister::Validate::Source>())
{
    source->parent = this;

    yang_name = "validate"; yang_parent_name = "map-register"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Router::LispList::Default::Service::Ipv6::MapServer::MapRegister::Validate::~Validate()
{
}

bool Native::Router::LispList::Default::Service::Ipv6::MapServer::MapRegister::Validate::has_data() const
{
    if (is_presence_container) return true;
    return (source !=  nullptr && source->has_data());
}

bool Native::Router::LispList::Default::Service::Ipv6::MapServer::MapRegister::Validate::has_operation() const
{
    return is_set(yfilter)
	|| (source !=  nullptr && source->has_operation());
}

std::string Native::Router::LispList::Default::Service::Ipv6::MapServer::MapRegister::Validate::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "validate";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::LispList::Default::Service::Ipv6::MapServer::MapRegister::Validate::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Router::LispList::Default::Service::Ipv6::MapServer::MapRegister::Validate::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "source")
    {
        if(source == nullptr)
        {
            source = std::make_shared<Native::Router::LispList::Default::Service::Ipv6::MapServer::MapRegister::Validate::Source>();
        }
        return source;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Router::LispList::Default::Service::Ipv6::MapServer::MapRegister::Validate::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(source != nullptr)
    {
        _children["source"] = source;
    }

    return _children;
}

void Native::Router::LispList::Default::Service::Ipv6::MapServer::MapRegister::Validate::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Router::LispList::Default::Service::Ipv6::MapServer::MapRegister::Validate::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Router::LispList::Default::Service::Ipv6::MapServer::MapRegister::Validate::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "source")
        return true;
    return false;
}

Native::Router::LispList::Default::Service::Ipv6::MapServer::MapRegister::Validate::Source::Source()
    :
    allowed_locator{YType::empty, "allowed-locator"}
{

    yang_name = "source"; yang_parent_name = "validate"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Router::LispList::Default::Service::Ipv6::MapServer::MapRegister::Validate::Source::~Source()
{
}

bool Native::Router::LispList::Default::Service::Ipv6::MapServer::MapRegister::Validate::Source::has_data() const
{
    if (is_presence_container) return true;
    return allowed_locator.is_set;
}

bool Native::Router::LispList::Default::Service::Ipv6::MapServer::MapRegister::Validate::Source::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(allowed_locator.yfilter);
}

std::string Native::Router::LispList::Default::Service::Ipv6::MapServer::MapRegister::Validate::Source::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "source";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::LispList::Default::Service::Ipv6::MapServer::MapRegister::Validate::Source::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (allowed_locator.is_set || is_set(allowed_locator.yfilter)) leaf_name_data.push_back(allowed_locator.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Router::LispList::Default::Service::Ipv6::MapServer::MapRegister::Validate::Source::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Router::LispList::Default::Service::Ipv6::MapServer::MapRegister::Validate::Source::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Router::LispList::Default::Service::Ipv6::MapServer::MapRegister::Validate::Source::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "allowed-locator")
    {
        allowed_locator = value;
        allowed_locator.value_namespace = name_space;
        allowed_locator.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::LispList::Default::Service::Ipv6::MapServer::MapRegister::Validate::Source::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "allowed-locator")
    {
        allowed_locator.yfilter = yfilter;
    }
}

bool Native::Router::LispList::Default::Service::Ipv6::MapServer::MapRegister::Validate::Source::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "allowed-locator")
        return true;
    return false;
}

Native::Router::LispList::Default::Service::Ipv6::SiteRegistration::SiteRegistration()
    :
    limit{YType::uint32, "limit"},
    warning_threshold{YType::uint8, "warning-threshold"}
{

    yang_name = "site-registration"; yang_parent_name = "ipv6"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Router::LispList::Default::Service::Ipv6::SiteRegistration::~SiteRegistration()
{
}

bool Native::Router::LispList::Default::Service::Ipv6::SiteRegistration::has_data() const
{
    if (is_presence_container) return true;
    return limit.is_set
	|| warning_threshold.is_set;
}

bool Native::Router::LispList::Default::Service::Ipv6::SiteRegistration::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(limit.yfilter)
	|| ydk::is_set(warning_threshold.yfilter);
}

std::string Native::Router::LispList::Default::Service::Ipv6::SiteRegistration::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "site-registration";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::LispList::Default::Service::Ipv6::SiteRegistration::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (limit.is_set || is_set(limit.yfilter)) leaf_name_data.push_back(limit.get_name_leafdata());
    if (warning_threshold.is_set || is_set(warning_threshold.yfilter)) leaf_name_data.push_back(warning_threshold.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Router::LispList::Default::Service::Ipv6::SiteRegistration::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Router::LispList::Default::Service::Ipv6::SiteRegistration::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Router::LispList::Default::Service::Ipv6::SiteRegistration::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "limit")
    {
        limit = value;
        limit.value_namespace = name_space;
        limit.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "warning-threshold")
    {
        warning_threshold = value;
        warning_threshold.value_namespace = name_space;
        warning_threshold.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::LispList::Default::Service::Ipv6::SiteRegistration::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "limit")
    {
        limit.yfilter = yfilter;
    }
    if(value_path == "warning-threshold")
    {
        warning_threshold.yfilter = yfilter;
    }
}

bool Native::Router::LispList::Default::Service::Ipv6::SiteRegistration::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "limit" || name == "warning-threshold")
        return true;
    return false;
}

Native::Router::LispList::Default::Service::Ipv6::SolicitMapRequest::SolicitMapRequest()
    :
    ignore{YType::empty, "ignore"},
    max_per_entry{YType::uint8, "max-per-entry"},
    suppression_time{YType::uint16, "suppression-time"}
{

    yang_name = "solicit-map-request"; yang_parent_name = "ipv6"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Router::LispList::Default::Service::Ipv6::SolicitMapRequest::~SolicitMapRequest()
{
}

bool Native::Router::LispList::Default::Service::Ipv6::SolicitMapRequest::has_data() const
{
    if (is_presence_container) return true;
    return ignore.is_set
	|| max_per_entry.is_set
	|| suppression_time.is_set;
}

bool Native::Router::LispList::Default::Service::Ipv6::SolicitMapRequest::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ignore.yfilter)
	|| ydk::is_set(max_per_entry.yfilter)
	|| ydk::is_set(suppression_time.yfilter);
}

std::string Native::Router::LispList::Default::Service::Ipv6::SolicitMapRequest::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "solicit-map-request";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::LispList::Default::Service::Ipv6::SolicitMapRequest::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ignore.is_set || is_set(ignore.yfilter)) leaf_name_data.push_back(ignore.get_name_leafdata());
    if (max_per_entry.is_set || is_set(max_per_entry.yfilter)) leaf_name_data.push_back(max_per_entry.get_name_leafdata());
    if (suppression_time.is_set || is_set(suppression_time.yfilter)) leaf_name_data.push_back(suppression_time.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Router::LispList::Default::Service::Ipv6::SolicitMapRequest::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Router::LispList::Default::Service::Ipv6::SolicitMapRequest::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Router::LispList::Default::Service::Ipv6::SolicitMapRequest::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ignore")
    {
        ignore = value;
        ignore.value_namespace = name_space;
        ignore.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "max-per-entry")
    {
        max_per_entry = value;
        max_per_entry.value_namespace = name_space;
        max_per_entry.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "suppression-time")
    {
        suppression_time = value;
        suppression_time.value_namespace = name_space;
        suppression_time.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::LispList::Default::Service::Ipv6::SolicitMapRequest::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ignore")
    {
        ignore.yfilter = yfilter;
    }
    if(value_path == "max-per-entry")
    {
        max_per_entry.yfilter = yfilter;
    }
    if(value_path == "suppression-time")
    {
        suppression_time.yfilter = yfilter;
    }
}

bool Native::Router::LispList::Default::Service::Ipv6::SolicitMapRequest::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ignore" || name == "max-per-entry" || name == "suppression-time")
        return true;
    return false;
}

Native::Router::LispList::Default::Service::Ipv6::Distance::Distance()
    :
    alt{YType::uint8, "alt"},
    away{YType::uint8, "away"},
    dyn_eid{YType::uint8, "dyn-eid"},
    site_registrations{YType::uint8, "site-registrations"}
{

    yang_name = "distance"; yang_parent_name = "ipv6"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Router::LispList::Default::Service::Ipv6::Distance::~Distance()
{
}

bool Native::Router::LispList::Default::Service::Ipv6::Distance::has_data() const
{
    if (is_presence_container) return true;
    return alt.is_set
	|| away.is_set
	|| dyn_eid.is_set
	|| site_registrations.is_set;
}

bool Native::Router::LispList::Default::Service::Ipv6::Distance::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(alt.yfilter)
	|| ydk::is_set(away.yfilter)
	|| ydk::is_set(dyn_eid.yfilter)
	|| ydk::is_set(site_registrations.yfilter);
}

std::string Native::Router::LispList::Default::Service::Ipv6::Distance::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "distance";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::LispList::Default::Service::Ipv6::Distance::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (alt.is_set || is_set(alt.yfilter)) leaf_name_data.push_back(alt.get_name_leafdata());
    if (away.is_set || is_set(away.yfilter)) leaf_name_data.push_back(away.get_name_leafdata());
    if (dyn_eid.is_set || is_set(dyn_eid.yfilter)) leaf_name_data.push_back(dyn_eid.get_name_leafdata());
    if (site_registrations.is_set || is_set(site_registrations.yfilter)) leaf_name_data.push_back(site_registrations.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Router::LispList::Default::Service::Ipv6::Distance::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Router::LispList::Default::Service::Ipv6::Distance::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Router::LispList::Default::Service::Ipv6::Distance::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "alt")
    {
        alt = value;
        alt.value_namespace = name_space;
        alt.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "away")
    {
        away = value;
        away.value_namespace = name_space;
        away.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dyn-eid")
    {
        dyn_eid = value;
        dyn_eid.value_namespace = name_space;
        dyn_eid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "site-registrations")
    {
        site_registrations = value;
        site_registrations.value_namespace = name_space;
        site_registrations.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::LispList::Default::Service::Ipv6::Distance::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "alt")
    {
        alt.yfilter = yfilter;
    }
    if(value_path == "away")
    {
        away.yfilter = yfilter;
    }
    if(value_path == "dyn-eid")
    {
        dyn_eid.yfilter = yfilter;
    }
    if(value_path == "site-registrations")
    {
        site_registrations.yfilter = yfilter;
    }
}

bool Native::Router::LispList::Default::Service::Ipv6::Distance::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "alt" || name == "away" || name == "dyn-eid" || name == "site-registrations")
        return true;
    return false;
}

Native::Router::LispList::Default::Service::Ipv6::MapCache::MapCache()
    :
    site_registration{YType::empty, "site-registration"}
        ,
    away_eids(std::make_shared<Native::Router::LispList::Default::Service::Ipv6::MapCache::AwayEids>())
{
    away_eids->parent = this;

    yang_name = "map-cache"; yang_parent_name = "ipv6"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Router::LispList::Default::Service::Ipv6::MapCache::~MapCache()
{
}

bool Native::Router::LispList::Default::Service::Ipv6::MapCache::has_data() const
{
    if (is_presence_container) return true;
    return site_registration.is_set
	|| (away_eids !=  nullptr && away_eids->has_data());
}

bool Native::Router::LispList::Default::Service::Ipv6::MapCache::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(site_registration.yfilter)
	|| (away_eids !=  nullptr && away_eids->has_operation());
}

std::string Native::Router::LispList::Default::Service::Ipv6::MapCache::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "map-cache";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::LispList::Default::Service::Ipv6::MapCache::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (site_registration.is_set || is_set(site_registration.yfilter)) leaf_name_data.push_back(site_registration.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Router::LispList::Default::Service::Ipv6::MapCache::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "away-eids")
    {
        if(away_eids == nullptr)
        {
            away_eids = std::make_shared<Native::Router::LispList::Default::Service::Ipv6::MapCache::AwayEids>();
        }
        return away_eids;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Router::LispList::Default::Service::Ipv6::MapCache::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(away_eids != nullptr)
    {
        _children["away-eids"] = away_eids;
    }

    return _children;
}

void Native::Router::LispList::Default::Service::Ipv6::MapCache::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "site-registration")
    {
        site_registration = value;
        site_registration.value_namespace = name_space;
        site_registration.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::LispList::Default::Service::Ipv6::MapCache::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "site-registration")
    {
        site_registration.yfilter = yfilter;
    }
}

bool Native::Router::LispList::Default::Service::Ipv6::MapCache::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "away-eids" || name == "site-registration")
        return true;
    return false;
}

Native::Router::LispList::Default::Service::Ipv6::MapCache::AwayEids::AwayEids()
    :
    send_map_request{YType::empty, "send-map-request"}
{

    yang_name = "away-eids"; yang_parent_name = "map-cache"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Router::LispList::Default::Service::Ipv6::MapCache::AwayEids::~AwayEids()
{
}

bool Native::Router::LispList::Default::Service::Ipv6::MapCache::AwayEids::has_data() const
{
    if (is_presence_container) return true;
    return send_map_request.is_set;
}

bool Native::Router::LispList::Default::Service::Ipv6::MapCache::AwayEids::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(send_map_request.yfilter);
}

std::string Native::Router::LispList::Default::Service::Ipv6::MapCache::AwayEids::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "away-eids";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::LispList::Default::Service::Ipv6::MapCache::AwayEids::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (send_map_request.is_set || is_set(send_map_request.yfilter)) leaf_name_data.push_back(send_map_request.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Router::LispList::Default::Service::Ipv6::MapCache::AwayEids::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Router::LispList::Default::Service::Ipv6::MapCache::AwayEids::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Router::LispList::Default::Service::Ipv6::MapCache::AwayEids::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "send-map-request")
    {
        send_map_request = value;
        send_map_request.value_namespace = name_space;
        send_map_request.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::LispList::Default::Service::Ipv6::MapCache::AwayEids::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "send-map-request")
    {
        send_map_request.yfilter = yfilter;
    }
}

bool Native::Router::LispList::Default::Service::Ipv6::MapCache::AwayEids::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "send-map-request")
        return true;
    return false;
}

Native::Router::LispList::Default::Service::Ipv6::MapCachePersistent::MapCachePersistent()
    :
    interval{YType::uint16, "interval"}
{

    yang_name = "map-cache-persistent"; yang_parent_name = "ipv6"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Router::LispList::Default::Service::Ipv6::MapCachePersistent::~MapCachePersistent()
{
}

bool Native::Router::LispList::Default::Service::Ipv6::MapCachePersistent::has_data() const
{
    if (is_presence_container) return true;
    return interval.is_set;
}

bool Native::Router::LispList::Default::Service::Ipv6::MapCachePersistent::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(interval.yfilter);
}

std::string Native::Router::LispList::Default::Service::Ipv6::MapCachePersistent::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "map-cache-persistent";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::LispList::Default::Service::Ipv6::MapCachePersistent::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interval.is_set || is_set(interval.yfilter)) leaf_name_data.push_back(interval.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Router::LispList::Default::Service::Ipv6::MapCachePersistent::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Router::LispList::Default::Service::Ipv6::MapCachePersistent::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Router::LispList::Default::Service::Ipv6::MapCachePersistent::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "interval")
    {
        interval = value;
        interval.value_namespace = name_space;
        interval.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::LispList::Default::Service::Ipv6::MapCachePersistent::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "interval")
    {
        interval.yfilter = yfilter;
    }
}

bool Native::Router::LispList::Default::Service::Ipv6::MapCachePersistent::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "interval")
        return true;
    return false;
}

Native::Router::LispList::Default::Service::Ipv6::ProxyItr::ProxyItr()
    :
    ipv4_addr{YType::str, "ipv4-addr"},
    ipv6_addr{YType::str, "ipv6-addr"}
{

    yang_name = "proxy-itr"; yang_parent_name = "ipv6"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Router::LispList::Default::Service::Ipv6::ProxyItr::~ProxyItr()
{
}

bool Native::Router::LispList::Default::Service::Ipv6::ProxyItr::has_data() const
{
    if (is_presence_container) return true;
    return ipv4_addr.is_set
	|| ipv6_addr.is_set;
}

bool Native::Router::LispList::Default::Service::Ipv6::ProxyItr::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ipv4_addr.yfilter)
	|| ydk::is_set(ipv6_addr.yfilter);
}

std::string Native::Router::LispList::Default::Service::Ipv6::ProxyItr::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "proxy-itr";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::LispList::Default::Service::Ipv6::ProxyItr::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ipv4_addr.is_set || is_set(ipv4_addr.yfilter)) leaf_name_data.push_back(ipv4_addr.get_name_leafdata());
    if (ipv6_addr.is_set || is_set(ipv6_addr.yfilter)) leaf_name_data.push_back(ipv6_addr.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Router::LispList::Default::Service::Ipv6::ProxyItr::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Router::LispList::Default::Service::Ipv6::ProxyItr::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Router::LispList::Default::Service::Ipv6::ProxyItr::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ipv4-addr")
    {
        ipv4_addr = value;
        ipv4_addr.value_namespace = name_space;
        ipv4_addr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv6-addr")
    {
        ipv6_addr = value;
        ipv6_addr.value_namespace = name_space;
        ipv6_addr.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::LispList::Default::Service::Ipv6::ProxyItr::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ipv4-addr")
    {
        ipv4_addr.yfilter = yfilter;
    }
    if(value_path == "ipv6-addr")
    {
        ipv6_addr.yfilter = yfilter;
    }
}

bool Native::Router::LispList::Default::Service::Ipv6::ProxyItr::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ipv4-addr" || name == "ipv6-addr")
        return true;
    return false;
}

Native::Router::LispList::Default::Service::Ipv6::RouteExport::RouteExport()
    :
    site_registrations{YType::empty, "site-registrations"},
    away_eids{YType::empty, "away-eids"}
{

    yang_name = "route-export"; yang_parent_name = "ipv6"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Router::LispList::Default::Service::Ipv6::RouteExport::~RouteExport()
{
}

bool Native::Router::LispList::Default::Service::Ipv6::RouteExport::has_data() const
{
    if (is_presence_container) return true;
    return site_registrations.is_set
	|| away_eids.is_set;
}

bool Native::Router::LispList::Default::Service::Ipv6::RouteExport::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(site_registrations.yfilter)
	|| ydk::is_set(away_eids.yfilter);
}

std::string Native::Router::LispList::Default::Service::Ipv6::RouteExport::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "route-export";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::LispList::Default::Service::Ipv6::RouteExport::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (site_registrations.is_set || is_set(site_registrations.yfilter)) leaf_name_data.push_back(site_registrations.get_name_leafdata());
    if (away_eids.is_set || is_set(away_eids.yfilter)) leaf_name_data.push_back(away_eids.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Router::LispList::Default::Service::Ipv6::RouteExport::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Router::LispList::Default::Service::Ipv6::RouteExport::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Router::LispList::Default::Service::Ipv6::RouteExport::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "site-registrations")
    {
        site_registrations = value;
        site_registrations.value_namespace = name_space;
        site_registrations.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "away-eids")
    {
        away_eids = value;
        away_eids.value_namespace = name_space;
        away_eids.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::LispList::Default::Service::Ipv6::RouteExport::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "site-registrations")
    {
        site_registrations.yfilter = yfilter;
    }
    if(value_path == "away-eids")
    {
        away_eids.yfilter = yfilter;
    }
}

bool Native::Router::LispList::Default::Service::Ipv6::RouteExport::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "site-registrations" || name == "away-eids")
        return true;
    return false;
}

Native::Router::LispList::Default::Service::Ipv6::UsePetr::UsePetr()
    :
    locator_address{YType::str, "locator-address"}
        ,
    priority(std::make_shared<Native::Router::LispList::Default::Service::Ipv6::UsePetr::Priority>())
{
    priority->parent = this;

    yang_name = "use-petr"; yang_parent_name = "ipv6"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Router::LispList::Default::Service::Ipv6::UsePetr::~UsePetr()
{
}

bool Native::Router::LispList::Default::Service::Ipv6::UsePetr::has_data() const
{
    if (is_presence_container) return true;
    return locator_address.is_set
	|| (priority !=  nullptr && priority->has_data());
}

bool Native::Router::LispList::Default::Service::Ipv6::UsePetr::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(locator_address.yfilter)
	|| (priority !=  nullptr && priority->has_operation());
}

std::string Native::Router::LispList::Default::Service::Ipv6::UsePetr::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "use-petr";
    ADD_KEY_TOKEN(locator_address, "locator-address");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::LispList::Default::Service::Ipv6::UsePetr::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (locator_address.is_set || is_set(locator_address.yfilter)) leaf_name_data.push_back(locator_address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Router::LispList::Default::Service::Ipv6::UsePetr::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "priority")
    {
        if(priority == nullptr)
        {
            priority = std::make_shared<Native::Router::LispList::Default::Service::Ipv6::UsePetr::Priority>();
        }
        return priority;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Router::LispList::Default::Service::Ipv6::UsePetr::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(priority != nullptr)
    {
        _children["priority"] = priority;
    }

    return _children;
}

void Native::Router::LispList::Default::Service::Ipv6::UsePetr::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "locator-address")
    {
        locator_address = value;
        locator_address.value_namespace = name_space;
        locator_address.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::LispList::Default::Service::Ipv6::UsePetr::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "locator-address")
    {
        locator_address.yfilter = yfilter;
    }
}

bool Native::Router::LispList::Default::Service::Ipv6::UsePetr::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "priority" || name == "locator-address")
        return true;
    return false;
}

Native::Router::LispList::Default::Service::Ipv6::UsePetr::Priority::Priority()
    :
    priority_value{YType::uint8, "priority-value"},
    weight{YType::uint8, "weight"}
{

    yang_name = "priority"; yang_parent_name = "use-petr"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Router::LispList::Default::Service::Ipv6::UsePetr::Priority::~Priority()
{
}

bool Native::Router::LispList::Default::Service::Ipv6::UsePetr::Priority::has_data() const
{
    if (is_presence_container) return true;
    return priority_value.is_set
	|| weight.is_set;
}

bool Native::Router::LispList::Default::Service::Ipv6::UsePetr::Priority::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(priority_value.yfilter)
	|| ydk::is_set(weight.yfilter);
}

std::string Native::Router::LispList::Default::Service::Ipv6::UsePetr::Priority::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "priority";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::LispList::Default::Service::Ipv6::UsePetr::Priority::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (priority_value.is_set || is_set(priority_value.yfilter)) leaf_name_data.push_back(priority_value.get_name_leafdata());
    if (weight.is_set || is_set(weight.yfilter)) leaf_name_data.push_back(weight.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Router::LispList::Default::Service::Ipv6::UsePetr::Priority::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Router::LispList::Default::Service::Ipv6::UsePetr::Priority::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Router::LispList::Default::Service::Ipv6::UsePetr::Priority::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "priority-value")
    {
        priority_value = value;
        priority_value.value_namespace = name_space;
        priority_value.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "weight")
    {
        weight = value;
        weight.value_namespace = name_space;
        weight.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::LispList::Default::Service::Ipv6::UsePetr::Priority::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "priority-value")
    {
        priority_value.yfilter = yfilter;
    }
    if(value_path == "weight")
    {
        weight.yfilter = yfilter;
    }
}

bool Native::Router::LispList::Default::Service::Ipv6::UsePetr::Priority::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "priority-value" || name == "weight")
        return true;
    return false;
}

Native::Router::LispList::Default::Service::Ipv6::Import::Import()
    :
    database(std::make_shared<Native::Router::LispList::Default::Service::Ipv6::Import::Database>())
{
    database->parent = this;

    yang_name = "import"; yang_parent_name = "ipv6"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Router::LispList::Default::Service::Ipv6::Import::~Import()
{
}

bool Native::Router::LispList::Default::Service::Ipv6::Import::has_data() const
{
    if (is_presence_container) return true;
    return (database !=  nullptr && database->has_data());
}

bool Native::Router::LispList::Default::Service::Ipv6::Import::has_operation() const
{
    return is_set(yfilter)
	|| (database !=  nullptr && database->has_operation());
}

std::string Native::Router::LispList::Default::Service::Ipv6::Import::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "import";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::LispList::Default::Service::Ipv6::Import::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Router::LispList::Default::Service::Ipv6::Import::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "database")
    {
        if(database == nullptr)
        {
            database = std::make_shared<Native::Router::LispList::Default::Service::Ipv6::Import::Database>();
        }
        return database;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Router::LispList::Default::Service::Ipv6::Import::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(database != nullptr)
    {
        _children["database"] = database;
    }

    return _children;
}

void Native::Router::LispList::Default::Service::Ipv6::Import::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Router::LispList::Default::Service::Ipv6::Import::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Router::LispList::Default::Service::Ipv6::Import::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "database")
        return true;
    return false;
}

Native::Router::LispList::Default::Service::Ipv6::Import::Database::Database()
    :
    site_registration{YType::empty, "site-registration"},
    locator_set{YType::str, "locator-set"}
{

    yang_name = "database"; yang_parent_name = "import"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Router::LispList::Default::Service::Ipv6::Import::Database::~Database()
{
}

bool Native::Router::LispList::Default::Service::Ipv6::Import::Database::has_data() const
{
    if (is_presence_container) return true;
    return site_registration.is_set
	|| locator_set.is_set;
}

bool Native::Router::LispList::Default::Service::Ipv6::Import::Database::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(site_registration.yfilter)
	|| ydk::is_set(locator_set.yfilter);
}

std::string Native::Router::LispList::Default::Service::Ipv6::Import::Database::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "database";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::LispList::Default::Service::Ipv6::Import::Database::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (site_registration.is_set || is_set(site_registration.yfilter)) leaf_name_data.push_back(site_registration.get_name_leafdata());
    if (locator_set.is_set || is_set(locator_set.yfilter)) leaf_name_data.push_back(locator_set.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Router::LispList::Default::Service::Ipv6::Import::Database::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Router::LispList::Default::Service::Ipv6::Import::Database::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Router::LispList::Default::Service::Ipv6::Import::Database::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "site-registration")
    {
        site_registration = value;
        site_registration.value_namespace = name_space;
        site_registration.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "locator-set")
    {
        locator_set = value;
        locator_set.value_namespace = name_space;
        locator_set.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::LispList::Default::Service::Ipv6::Import::Database::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "site-registration")
    {
        site_registration.yfilter = yfilter;
    }
    if(value_path == "locator-set")
    {
        locator_set.yfilter = yfilter;
    }
}

bool Native::Router::LispList::Default::Service::Ipv6::Import::Database::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "site-registration" || name == "locator-set")
        return true;
    return false;
}

Native::Router::LispList::Default::Service::Ethernet::Ethernet()
    :
    map_request_source{YType::str, "map-request-source"}
        ,
    default_(std::make_shared<Native::Router::LispList::Default::Service::Ethernet::Default_>())
    , encapsulation(std::make_shared<Native::Router::LispList::Default::Service::Ethernet::Encapsulation>())
    , database_mapping(std::make_shared<Native::Router::LispList::Default::Service::Ethernet::DatabaseMapping>())
    , itr(std::make_shared<Native::Router::LispList::Default::Service::Ethernet::Itr>())
    , itr_enable(std::make_shared<Native::Router::LispList::Default::Service::Ethernet::ItrEnable>())
    , etr_enable(std::make_shared<Native::Router::LispList::Default::Service::Ethernet::EtrEnable>())
    , etr(std::make_shared<Native::Router::LispList::Default::Service::Ethernet::Etr>())
    , map_cache_limit(std::make_shared<Native::Router::LispList::Default::Service::Ethernet::MapCacheLimit>())
    , map_resolver(nullptr) // presence node
    , map_server(nullptr) // presence node
    , site_registration(std::make_shared<Native::Router::LispList::Default::Service::Ethernet::SiteRegistration>())
    , solicit_map_request(std::make_shared<Native::Router::LispList::Default::Service::Ethernet::SolicitMapRequest>())
{
    default_->parent = this;
    encapsulation->parent = this;
    database_mapping->parent = this;
    itr->parent = this;
    itr_enable->parent = this;
    etr_enable->parent = this;
    etr->parent = this;
    map_cache_limit->parent = this;
    site_registration->parent = this;
    solicit_map_request->parent = this;

    yang_name = "ethernet"; yang_parent_name = "service"; is_top_level_class = false; has_list_ancestor = true; is_presence_container = true;
}

Native::Router::LispList::Default::Service::Ethernet::~Ethernet()
{
}

bool Native::Router::LispList::Default::Service::Ethernet::has_data() const
{
    if (is_presence_container) return true;
    return map_request_source.is_set
	|| (default_ !=  nullptr && default_->has_data())
	|| (encapsulation !=  nullptr && encapsulation->has_data())
	|| (database_mapping !=  nullptr && database_mapping->has_data())
	|| (itr !=  nullptr && itr->has_data())
	|| (itr_enable !=  nullptr && itr_enable->has_data())
	|| (etr_enable !=  nullptr && etr_enable->has_data())
	|| (etr !=  nullptr && etr->has_data())
	|| (map_cache_limit !=  nullptr && map_cache_limit->has_data())
	|| (map_resolver !=  nullptr && map_resolver->has_data())
	|| (map_server !=  nullptr && map_server->has_data())
	|| (site_registration !=  nullptr && site_registration->has_data())
	|| (solicit_map_request !=  nullptr && solicit_map_request->has_data());
}

bool Native::Router::LispList::Default::Service::Ethernet::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(map_request_source.yfilter)
	|| (default_ !=  nullptr && default_->has_operation())
	|| (encapsulation !=  nullptr && encapsulation->has_operation())
	|| (database_mapping !=  nullptr && database_mapping->has_operation())
	|| (itr !=  nullptr && itr->has_operation())
	|| (itr_enable !=  nullptr && itr_enable->has_operation())
	|| (etr_enable !=  nullptr && etr_enable->has_operation())
	|| (etr !=  nullptr && etr->has_operation())
	|| (map_cache_limit !=  nullptr && map_cache_limit->has_operation())
	|| (map_resolver !=  nullptr && map_resolver->has_operation())
	|| (map_server !=  nullptr && map_server->has_operation())
	|| (site_registration !=  nullptr && site_registration->has_operation())
	|| (solicit_map_request !=  nullptr && solicit_map_request->has_operation());
}

std::string Native::Router::LispList::Default::Service::Ethernet::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ethernet";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::LispList::Default::Service::Ethernet::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (map_request_source.is_set || is_set(map_request_source.yfilter)) leaf_name_data.push_back(map_request_source.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Router::LispList::Default::Service::Ethernet::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "default")
    {
        if(default_ == nullptr)
        {
            default_ = std::make_shared<Native::Router::LispList::Default::Service::Ethernet::Default_>();
        }
        return default_;
    }

    if(child_yang_name == "encapsulation")
    {
        if(encapsulation == nullptr)
        {
            encapsulation = std::make_shared<Native::Router::LispList::Default::Service::Ethernet::Encapsulation>();
        }
        return encapsulation;
    }

    if(child_yang_name == "database-mapping")
    {
        if(database_mapping == nullptr)
        {
            database_mapping = std::make_shared<Native::Router::LispList::Default::Service::Ethernet::DatabaseMapping>();
        }
        return database_mapping;
    }

    if(child_yang_name == "itr")
    {
        if(itr == nullptr)
        {
            itr = std::make_shared<Native::Router::LispList::Default::Service::Ethernet::Itr>();
        }
        return itr;
    }

    if(child_yang_name == "itr-enable")
    {
        if(itr_enable == nullptr)
        {
            itr_enable = std::make_shared<Native::Router::LispList::Default::Service::Ethernet::ItrEnable>();
        }
        return itr_enable;
    }

    if(child_yang_name == "etr-enable")
    {
        if(etr_enable == nullptr)
        {
            etr_enable = std::make_shared<Native::Router::LispList::Default::Service::Ethernet::EtrEnable>();
        }
        return etr_enable;
    }

    if(child_yang_name == "etr")
    {
        if(etr == nullptr)
        {
            etr = std::make_shared<Native::Router::LispList::Default::Service::Ethernet::Etr>();
        }
        return etr;
    }

    if(child_yang_name == "map-cache-limit")
    {
        if(map_cache_limit == nullptr)
        {
            map_cache_limit = std::make_shared<Native::Router::LispList::Default::Service::Ethernet::MapCacheLimit>();
        }
        return map_cache_limit;
    }

    if(child_yang_name == "map-resolver")
    {
        if(map_resolver == nullptr)
        {
            map_resolver = std::make_shared<Native::Router::LispList::Default::Service::Ethernet::MapResolver>();
        }
        return map_resolver;
    }

    if(child_yang_name == "map-server")
    {
        if(map_server == nullptr)
        {
            map_server = std::make_shared<Native::Router::LispList::Default::Service::Ethernet::MapServer>();
        }
        return map_server;
    }

    if(child_yang_name == "site-registration")
    {
        if(site_registration == nullptr)
        {
            site_registration = std::make_shared<Native::Router::LispList::Default::Service::Ethernet::SiteRegistration>();
        }
        return site_registration;
    }

    if(child_yang_name == "solicit-map-request")
    {
        if(solicit_map_request == nullptr)
        {
            solicit_map_request = std::make_shared<Native::Router::LispList::Default::Service::Ethernet::SolicitMapRequest>();
        }
        return solicit_map_request;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Router::LispList::Default::Service::Ethernet::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(default_ != nullptr)
    {
        _children["default"] = default_;
    }

    if(encapsulation != nullptr)
    {
        _children["encapsulation"] = encapsulation;
    }

    if(database_mapping != nullptr)
    {
        _children["database-mapping"] = database_mapping;
    }

    if(itr != nullptr)
    {
        _children["itr"] = itr;
    }

    if(itr_enable != nullptr)
    {
        _children["itr-enable"] = itr_enable;
    }

    if(etr_enable != nullptr)
    {
        _children["etr-enable"] = etr_enable;
    }

    if(etr != nullptr)
    {
        _children["etr"] = etr;
    }

    if(map_cache_limit != nullptr)
    {
        _children["map-cache-limit"] = map_cache_limit;
    }

    if(map_resolver != nullptr)
    {
        _children["map-resolver"] = map_resolver;
    }

    if(map_server != nullptr)
    {
        _children["map-server"] = map_server;
    }

    if(site_registration != nullptr)
    {
        _children["site-registration"] = site_registration;
    }

    if(solicit_map_request != nullptr)
    {
        _children["solicit-map-request"] = solicit_map_request;
    }

    return _children;
}

void Native::Router::LispList::Default::Service::Ethernet::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "map-request-source")
    {
        map_request_source = value;
        map_request_source.value_namespace = name_space;
        map_request_source.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::LispList::Default::Service::Ethernet::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "map-request-source")
    {
        map_request_source.yfilter = yfilter;
    }
}

bool Native::Router::LispList::Default::Service::Ethernet::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "default" || name == "encapsulation" || name == "database-mapping" || name == "itr" || name == "itr-enable" || name == "etr-enable" || name == "etr" || name == "map-cache-limit" || name == "map-resolver" || name == "map-server" || name == "site-registration" || name == "solicit-map-request" || name == "map-request-source")
        return true;
    return false;
}

Native::Router::LispList::Default::Service::Ethernet::Default_::Default_()
    :
    map_request_source{YType::str, "map-request-source"}
        ,
    encapsulation(std::make_shared<Native::Router::LispList::Default::Service::Ethernet::Default_::Encapsulation>())
    , database_mapping(std::make_shared<Native::Router::LispList::Default::Service::Ethernet::Default_::DatabaseMapping>())
    , itr(std::make_shared<Native::Router::LispList::Default::Service::Ethernet::Default_::Itr>())
    , itr_enable(std::make_shared<Native::Router::LispList::Default::Service::Ethernet::Default_::ItrEnable>())
    , etr_enable(std::make_shared<Native::Router::LispList::Default::Service::Ethernet::Default_::EtrEnable>())
    , etr(std::make_shared<Native::Router::LispList::Default::Service::Ethernet::Default_::Etr>())
    , map_cache_limit(std::make_shared<Native::Router::LispList::Default::Service::Ethernet::Default_::MapCacheLimit>())
    , map_resolver(nullptr) // presence node
    , map_server(nullptr) // presence node
    , site_registration(std::make_shared<Native::Router::LispList::Default::Service::Ethernet::Default_::SiteRegistration>())
    , solicit_map_request(std::make_shared<Native::Router::LispList::Default::Service::Ethernet::Default_::SolicitMapRequest>())
{
    encapsulation->parent = this;
    database_mapping->parent = this;
    itr->parent = this;
    itr_enable->parent = this;
    etr_enable->parent = this;
    etr->parent = this;
    map_cache_limit->parent = this;
    site_registration->parent = this;
    solicit_map_request->parent = this;

    yang_name = "default"; yang_parent_name = "ethernet"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Router::LispList::Default::Service::Ethernet::Default_::~Default_()
{
}

bool Native::Router::LispList::Default::Service::Ethernet::Default_::has_data() const
{
    if (is_presence_container) return true;
    return map_request_source.is_set
	|| (encapsulation !=  nullptr && encapsulation->has_data())
	|| (database_mapping !=  nullptr && database_mapping->has_data())
	|| (itr !=  nullptr && itr->has_data())
	|| (itr_enable !=  nullptr && itr_enable->has_data())
	|| (etr_enable !=  nullptr && etr_enable->has_data())
	|| (etr !=  nullptr && etr->has_data())
	|| (map_cache_limit !=  nullptr && map_cache_limit->has_data())
	|| (map_resolver !=  nullptr && map_resolver->has_data())
	|| (map_server !=  nullptr && map_server->has_data())
	|| (site_registration !=  nullptr && site_registration->has_data())
	|| (solicit_map_request !=  nullptr && solicit_map_request->has_data());
}

bool Native::Router::LispList::Default::Service::Ethernet::Default_::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(map_request_source.yfilter)
	|| (encapsulation !=  nullptr && encapsulation->has_operation())
	|| (database_mapping !=  nullptr && database_mapping->has_operation())
	|| (itr !=  nullptr && itr->has_operation())
	|| (itr_enable !=  nullptr && itr_enable->has_operation())
	|| (etr_enable !=  nullptr && etr_enable->has_operation())
	|| (etr !=  nullptr && etr->has_operation())
	|| (map_cache_limit !=  nullptr && map_cache_limit->has_operation())
	|| (map_resolver !=  nullptr && map_resolver->has_operation())
	|| (map_server !=  nullptr && map_server->has_operation())
	|| (site_registration !=  nullptr && site_registration->has_operation())
	|| (solicit_map_request !=  nullptr && solicit_map_request->has_operation());
}

std::string Native::Router::LispList::Default::Service::Ethernet::Default_::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "default";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::LispList::Default::Service::Ethernet::Default_::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (map_request_source.is_set || is_set(map_request_source.yfilter)) leaf_name_data.push_back(map_request_source.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Router::LispList::Default::Service::Ethernet::Default_::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "encapsulation")
    {
        if(encapsulation == nullptr)
        {
            encapsulation = std::make_shared<Native::Router::LispList::Default::Service::Ethernet::Default_::Encapsulation>();
        }
        return encapsulation;
    }

    if(child_yang_name == "database-mapping")
    {
        if(database_mapping == nullptr)
        {
            database_mapping = std::make_shared<Native::Router::LispList::Default::Service::Ethernet::Default_::DatabaseMapping>();
        }
        return database_mapping;
    }

    if(child_yang_name == "itr")
    {
        if(itr == nullptr)
        {
            itr = std::make_shared<Native::Router::LispList::Default::Service::Ethernet::Default_::Itr>();
        }
        return itr;
    }

    if(child_yang_name == "itr-enable")
    {
        if(itr_enable == nullptr)
        {
            itr_enable = std::make_shared<Native::Router::LispList::Default::Service::Ethernet::Default_::ItrEnable>();
        }
        return itr_enable;
    }

    if(child_yang_name == "etr-enable")
    {
        if(etr_enable == nullptr)
        {
            etr_enable = std::make_shared<Native::Router::LispList::Default::Service::Ethernet::Default_::EtrEnable>();
        }
        return etr_enable;
    }

    if(child_yang_name == "etr")
    {
        if(etr == nullptr)
        {
            etr = std::make_shared<Native::Router::LispList::Default::Service::Ethernet::Default_::Etr>();
        }
        return etr;
    }

    if(child_yang_name == "map-cache-limit")
    {
        if(map_cache_limit == nullptr)
        {
            map_cache_limit = std::make_shared<Native::Router::LispList::Default::Service::Ethernet::Default_::MapCacheLimit>();
        }
        return map_cache_limit;
    }

    if(child_yang_name == "map-resolver")
    {
        if(map_resolver == nullptr)
        {
            map_resolver = std::make_shared<Native::Router::LispList::Default::Service::Ethernet::Default_::MapResolver>();
        }
        return map_resolver;
    }

    if(child_yang_name == "map-server")
    {
        if(map_server == nullptr)
        {
            map_server = std::make_shared<Native::Router::LispList::Default::Service::Ethernet::Default_::MapServer>();
        }
        return map_server;
    }

    if(child_yang_name == "site-registration")
    {
        if(site_registration == nullptr)
        {
            site_registration = std::make_shared<Native::Router::LispList::Default::Service::Ethernet::Default_::SiteRegistration>();
        }
        return site_registration;
    }

    if(child_yang_name == "solicit-map-request")
    {
        if(solicit_map_request == nullptr)
        {
            solicit_map_request = std::make_shared<Native::Router::LispList::Default::Service::Ethernet::Default_::SolicitMapRequest>();
        }
        return solicit_map_request;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Router::LispList::Default::Service::Ethernet::Default_::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(encapsulation != nullptr)
    {
        _children["encapsulation"] = encapsulation;
    }

    if(database_mapping != nullptr)
    {
        _children["database-mapping"] = database_mapping;
    }

    if(itr != nullptr)
    {
        _children["itr"] = itr;
    }

    if(itr_enable != nullptr)
    {
        _children["itr-enable"] = itr_enable;
    }

    if(etr_enable != nullptr)
    {
        _children["etr-enable"] = etr_enable;
    }

    if(etr != nullptr)
    {
        _children["etr"] = etr;
    }

    if(map_cache_limit != nullptr)
    {
        _children["map-cache-limit"] = map_cache_limit;
    }

    if(map_resolver != nullptr)
    {
        _children["map-resolver"] = map_resolver;
    }

    if(map_server != nullptr)
    {
        _children["map-server"] = map_server;
    }

    if(site_registration != nullptr)
    {
        _children["site-registration"] = site_registration;
    }

    if(solicit_map_request != nullptr)
    {
        _children["solicit-map-request"] = solicit_map_request;
    }

    return _children;
}

void Native::Router::LispList::Default::Service::Ethernet::Default_::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "map-request-source")
    {
        map_request_source = value;
        map_request_source.value_namespace = name_space;
        map_request_source.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::LispList::Default::Service::Ethernet::Default_::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "map-request-source")
    {
        map_request_source.yfilter = yfilter;
    }
}

bool Native::Router::LispList::Default::Service::Ethernet::Default_::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "encapsulation" || name == "database-mapping" || name == "itr" || name == "itr-enable" || name == "etr-enable" || name == "etr" || name == "map-cache-limit" || name == "map-resolver" || name == "map-server" || name == "site-registration" || name == "solicit-map-request" || name == "map-request-source")
        return true;
    return false;
}

Native::Router::LispList::Default::Service::Ethernet::Default_::Encapsulation::Encapsulation()
    :
    vxlan{YType::empty, "vxlan"}
{

    yang_name = "encapsulation"; yang_parent_name = "default"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Router::LispList::Default::Service::Ethernet::Default_::Encapsulation::~Encapsulation()
{
}

bool Native::Router::LispList::Default::Service::Ethernet::Default_::Encapsulation::has_data() const
{
    if (is_presence_container) return true;
    return vxlan.is_set;
}

bool Native::Router::LispList::Default::Service::Ethernet::Default_::Encapsulation::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(vxlan.yfilter);
}

std::string Native::Router::LispList::Default::Service::Ethernet::Default_::Encapsulation::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "encapsulation";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::LispList::Default::Service::Ethernet::Default_::Encapsulation::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (vxlan.is_set || is_set(vxlan.yfilter)) leaf_name_data.push_back(vxlan.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Router::LispList::Default::Service::Ethernet::Default_::Encapsulation::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Router::LispList::Default::Service::Ethernet::Default_::Encapsulation::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Router::LispList::Default::Service::Ethernet::Default_::Encapsulation::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "vxlan")
    {
        vxlan = value;
        vxlan.value_namespace = name_space;
        vxlan.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::LispList::Default::Service::Ethernet::Default_::Encapsulation::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "vxlan")
    {
        vxlan.yfilter = yfilter;
    }
}

bool Native::Router::LispList::Default::Service::Ethernet::Default_::Encapsulation::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "vxlan")
        return true;
    return false;
}

Native::Router::LispList::Default::Service::Ethernet::Default_::DatabaseMapping::DatabaseMapping()
    :
    limit(std::make_shared<Native::Router::LispList::Default::Service::Ethernet::Default_::DatabaseMapping::Limit>())
{
    limit->parent = this;

    yang_name = "database-mapping"; yang_parent_name = "default"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Router::LispList::Default::Service::Ethernet::Default_::DatabaseMapping::~DatabaseMapping()
{
}

bool Native::Router::LispList::Default::Service::Ethernet::Default_::DatabaseMapping::has_data() const
{
    if (is_presence_container) return true;
    return (limit !=  nullptr && limit->has_data());
}

bool Native::Router::LispList::Default::Service::Ethernet::Default_::DatabaseMapping::has_operation() const
{
    return is_set(yfilter)
	|| (limit !=  nullptr && limit->has_operation());
}

std::string Native::Router::LispList::Default::Service::Ethernet::Default_::DatabaseMapping::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "database-mapping";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::LispList::Default::Service::Ethernet::Default_::DatabaseMapping::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Router::LispList::Default::Service::Ethernet::Default_::DatabaseMapping::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "limit")
    {
        if(limit == nullptr)
        {
            limit = std::make_shared<Native::Router::LispList::Default::Service::Ethernet::Default_::DatabaseMapping::Limit>();
        }
        return limit;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Router::LispList::Default::Service::Ethernet::Default_::DatabaseMapping::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(limit != nullptr)
    {
        _children["limit"] = limit;
    }

    return _children;
}

void Native::Router::LispList::Default::Service::Ethernet::Default_::DatabaseMapping::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Router::LispList::Default::Service::Ethernet::Default_::DatabaseMapping::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Router::LispList::Default::Service::Ethernet::Default_::DatabaseMapping::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "limit")
        return true;
    return false;
}

Native::Router::LispList::Default::Service::Ethernet::Default_::DatabaseMapping::Limit::Limit()
    :
    dynamic{YType::uint32, "dynamic"},
    warning_threshold{YType::uint8, "warning-threshold"}
{

    yang_name = "limit"; yang_parent_name = "database-mapping"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Router::LispList::Default::Service::Ethernet::Default_::DatabaseMapping::Limit::~Limit()
{
}

bool Native::Router::LispList::Default::Service::Ethernet::Default_::DatabaseMapping::Limit::has_data() const
{
    if (is_presence_container) return true;
    return dynamic.is_set
	|| warning_threshold.is_set;
}

bool Native::Router::LispList::Default::Service::Ethernet::Default_::DatabaseMapping::Limit::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(dynamic.yfilter)
	|| ydk::is_set(warning_threshold.yfilter);
}

std::string Native::Router::LispList::Default::Service::Ethernet::Default_::DatabaseMapping::Limit::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "limit";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::LispList::Default::Service::Ethernet::Default_::DatabaseMapping::Limit::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (dynamic.is_set || is_set(dynamic.yfilter)) leaf_name_data.push_back(dynamic.get_name_leafdata());
    if (warning_threshold.is_set || is_set(warning_threshold.yfilter)) leaf_name_data.push_back(warning_threshold.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Router::LispList::Default::Service::Ethernet::Default_::DatabaseMapping::Limit::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Router::LispList::Default::Service::Ethernet::Default_::DatabaseMapping::Limit::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Router::LispList::Default::Service::Ethernet::Default_::DatabaseMapping::Limit::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "dynamic")
    {
        dynamic = value;
        dynamic.value_namespace = name_space;
        dynamic.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "warning-threshold")
    {
        warning_threshold = value;
        warning_threshold.value_namespace = name_space;
        warning_threshold.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::LispList::Default::Service::Ethernet::Default_::DatabaseMapping::Limit::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "dynamic")
    {
        dynamic.yfilter = yfilter;
    }
    if(value_path == "warning-threshold")
    {
        warning_threshold.yfilter = yfilter;
    }
}

bool Native::Router::LispList::Default::Service::Ethernet::Default_::DatabaseMapping::Limit::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "dynamic" || name == "warning-threshold")
        return true;
    return false;
}

Native::Router::LispList::Default::Service::Ethernet::Default_::Itr::Itr()
    :
    nmr_ttl{YType::uint16, "nmr-ttl"}
        ,
    map_resolver(this, {"ip_addr"})
{

    yang_name = "itr"; yang_parent_name = "default"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Router::LispList::Default::Service::Ethernet::Default_::Itr::~Itr()
{
}

bool Native::Router::LispList::Default::Service::Ethernet::Default_::Itr::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<map_resolver.len(); index++)
    {
        if(map_resolver[index]->has_data())
            return true;
    }
    return nmr_ttl.is_set;
}

bool Native::Router::LispList::Default::Service::Ethernet::Default_::Itr::has_operation() const
{
    for (std::size_t index=0; index<map_resolver.len(); index++)
    {
        if(map_resolver[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(nmr_ttl.yfilter);
}

std::string Native::Router::LispList::Default::Service::Ethernet::Default_::Itr::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "itr";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::LispList::Default::Service::Ethernet::Default_::Itr::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (nmr_ttl.is_set || is_set(nmr_ttl.yfilter)) leaf_name_data.push_back(nmr_ttl.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Router::LispList::Default::Service::Ethernet::Default_::Itr::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "map-resolver")
    {
        auto ent_ = std::make_shared<Native::Router::LispList::Default::Service::Ethernet::Default_::Itr::MapResolver>();
        ent_->parent = this;
        map_resolver.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Router::LispList::Default::Service::Ethernet::Default_::Itr::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : map_resolver.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Native::Router::LispList::Default::Service::Ethernet::Default_::Itr::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "nmr-ttl")
    {
        nmr_ttl = value;
        nmr_ttl.value_namespace = name_space;
        nmr_ttl.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::LispList::Default::Service::Ethernet::Default_::Itr::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "nmr-ttl")
    {
        nmr_ttl.yfilter = yfilter;
    }
}

bool Native::Router::LispList::Default::Service::Ethernet::Default_::Itr::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "map-resolver" || name == "nmr-ttl")
        return true;
    return false;
}

Native::Router::LispList::Default::Service::Ethernet::Default_::Itr::MapResolver::MapResolver()
    :
    ip_addr{YType::str, "ip-addr"},
    prefix_list{YType::str, "prefix-list"}
{

    yang_name = "map-resolver"; yang_parent_name = "itr"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Router::LispList::Default::Service::Ethernet::Default_::Itr::MapResolver::~MapResolver()
{
}

bool Native::Router::LispList::Default::Service::Ethernet::Default_::Itr::MapResolver::has_data() const
{
    if (is_presence_container) return true;
    return ip_addr.is_set
	|| prefix_list.is_set;
}

bool Native::Router::LispList::Default::Service::Ethernet::Default_::Itr::MapResolver::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ip_addr.yfilter)
	|| ydk::is_set(prefix_list.yfilter);
}

std::string Native::Router::LispList::Default::Service::Ethernet::Default_::Itr::MapResolver::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "map-resolver";
    ADD_KEY_TOKEN(ip_addr, "ip-addr");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::LispList::Default::Service::Ethernet::Default_::Itr::MapResolver::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ip_addr.is_set || is_set(ip_addr.yfilter)) leaf_name_data.push_back(ip_addr.get_name_leafdata());
    if (prefix_list.is_set || is_set(prefix_list.yfilter)) leaf_name_data.push_back(prefix_list.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Router::LispList::Default::Service::Ethernet::Default_::Itr::MapResolver::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Router::LispList::Default::Service::Ethernet::Default_::Itr::MapResolver::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Router::LispList::Default::Service::Ethernet::Default_::Itr::MapResolver::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ip-addr")
    {
        ip_addr = value;
        ip_addr.value_namespace = name_space;
        ip_addr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "prefix-list")
    {
        prefix_list = value;
        prefix_list.value_namespace = name_space;
        prefix_list.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::LispList::Default::Service::Ethernet::Default_::Itr::MapResolver::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ip-addr")
    {
        ip_addr.yfilter = yfilter;
    }
    if(value_path == "prefix-list")
    {
        prefix_list.yfilter = yfilter;
    }
}

bool Native::Router::LispList::Default::Service::Ethernet::Default_::Itr::MapResolver::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ip-addr" || name == "prefix-list")
        return true;
    return false;
}

Native::Router::LispList::Default::Service::Ethernet::Default_::ItrEnable::ItrEnable()
    :
    itr{YType::empty, "itr"}
{

    yang_name = "itr-enable"; yang_parent_name = "default"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Router::LispList::Default::Service::Ethernet::Default_::ItrEnable::~ItrEnable()
{
}

bool Native::Router::LispList::Default::Service::Ethernet::Default_::ItrEnable::has_data() const
{
    if (is_presence_container) return true;
    return itr.is_set;
}

bool Native::Router::LispList::Default::Service::Ethernet::Default_::ItrEnable::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(itr.yfilter);
}

std::string Native::Router::LispList::Default::Service::Ethernet::Default_::ItrEnable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "itr-enable";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::LispList::Default::Service::Ethernet::Default_::ItrEnable::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (itr.is_set || is_set(itr.yfilter)) leaf_name_data.push_back(itr.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Router::LispList::Default::Service::Ethernet::Default_::ItrEnable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Router::LispList::Default::Service::Ethernet::Default_::ItrEnable::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Router::LispList::Default::Service::Ethernet::Default_::ItrEnable::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "itr")
    {
        itr = value;
        itr.value_namespace = name_space;
        itr.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::LispList::Default::Service::Ethernet::Default_::ItrEnable::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "itr")
    {
        itr.yfilter = yfilter;
    }
}

bool Native::Router::LispList::Default::Service::Ethernet::Default_::ItrEnable::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "itr")
        return true;
    return false;
}

Native::Router::LispList::Default::Service::Ethernet::Default_::EtrEnable::EtrEnable()
    :
    etr{YType::empty, "etr"}
{

    yang_name = "etr-enable"; yang_parent_name = "default"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Router::LispList::Default::Service::Ethernet::Default_::EtrEnable::~EtrEnable()
{
}

bool Native::Router::LispList::Default::Service::Ethernet::Default_::EtrEnable::has_data() const
{
    if (is_presence_container) return true;
    return etr.is_set;
}

bool Native::Router::LispList::Default::Service::Ethernet::Default_::EtrEnable::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(etr.yfilter);
}

std::string Native::Router::LispList::Default::Service::Ethernet::Default_::EtrEnable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "etr-enable";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::LispList::Default::Service::Ethernet::Default_::EtrEnable::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (etr.is_set || is_set(etr.yfilter)) leaf_name_data.push_back(etr.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Router::LispList::Default::Service::Ethernet::Default_::EtrEnable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Router::LispList::Default::Service::Ethernet::Default_::EtrEnable::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Router::LispList::Default::Service::Ethernet::Default_::EtrEnable::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "etr")
    {
        etr = value;
        etr.value_namespace = name_space;
        etr.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::LispList::Default::Service::Ethernet::Default_::EtrEnable::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "etr")
    {
        etr.yfilter = yfilter;
    }
}

bool Native::Router::LispList::Default::Service::Ethernet::Default_::EtrEnable::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "etr")
        return true;
    return false;
}

Native::Router::LispList::Default::Service::Ethernet::Default_::Etr::Etr()
    :
    map_cache_ttl{YType::uint16, "map-cache-ttl"}
        ,
    map_server(this, {"ip_addr"})
    , accept_map_request_mapping(std::make_shared<Native::Router::LispList::Default::Service::Ethernet::Default_::Etr::AcceptMapRequestMapping>())
{
    accept_map_request_mapping->parent = this;

    yang_name = "etr"; yang_parent_name = "default"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Router::LispList::Default::Service::Ethernet::Default_::Etr::~Etr()
{
}

bool Native::Router::LispList::Default::Service::Ethernet::Default_::Etr::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<map_server.len(); index++)
    {
        if(map_server[index]->has_data())
            return true;
    }
    return map_cache_ttl.is_set
	|| (accept_map_request_mapping !=  nullptr && accept_map_request_mapping->has_data());
}

bool Native::Router::LispList::Default::Service::Ethernet::Default_::Etr::has_operation() const
{
    for (std::size_t index=0; index<map_server.len(); index++)
    {
        if(map_server[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(map_cache_ttl.yfilter)
	|| (accept_map_request_mapping !=  nullptr && accept_map_request_mapping->has_operation());
}

std::string Native::Router::LispList::Default::Service::Ethernet::Default_::Etr::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "etr";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::LispList::Default::Service::Ethernet::Default_::Etr::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (map_cache_ttl.is_set || is_set(map_cache_ttl.yfilter)) leaf_name_data.push_back(map_cache_ttl.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Router::LispList::Default::Service::Ethernet::Default_::Etr::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "map-server")
    {
        auto ent_ = std::make_shared<Native::Router::LispList::Default::Service::Ethernet::Default_::Etr::MapServer>();
        ent_->parent = this;
        map_server.append(ent_);
        return ent_;
    }

    if(child_yang_name == "accept-map-request-mapping")
    {
        if(accept_map_request_mapping == nullptr)
        {
            accept_map_request_mapping = std::make_shared<Native::Router::LispList::Default::Service::Ethernet::Default_::Etr::AcceptMapRequestMapping>();
        }
        return accept_map_request_mapping;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Router::LispList::Default::Service::Ethernet::Default_::Etr::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : map_server.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    if(accept_map_request_mapping != nullptr)
    {
        _children["accept-map-request-mapping"] = accept_map_request_mapping;
    }

    return _children;
}

void Native::Router::LispList::Default::Service::Ethernet::Default_::Etr::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "map-cache-ttl")
    {
        map_cache_ttl = value;
        map_cache_ttl.value_namespace = name_space;
        map_cache_ttl.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::LispList::Default::Service::Ethernet::Default_::Etr::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "map-cache-ttl")
    {
        map_cache_ttl.yfilter = yfilter;
    }
}

bool Native::Router::LispList::Default::Service::Ethernet::Default_::Etr::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "map-server" || name == "accept-map-request-mapping" || name == "map-cache-ttl")
        return true;
    return false;
}

Native::Router::LispList::Default::Service::Ethernet::Default_::Etr::MapServer::MapServer()
    :
    ip_addr{YType::str, "ip-addr"},
    proxy_reply{YType::empty, "proxy-reply"}
        ,
    key(std::make_shared<Native::Router::LispList::Default::Service::Ethernet::Default_::Etr::MapServer::Key>())
{
    key->parent = this;

    yang_name = "map-server"; yang_parent_name = "etr"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Router::LispList::Default::Service::Ethernet::Default_::Etr::MapServer::~MapServer()
{
}

bool Native::Router::LispList::Default::Service::Ethernet::Default_::Etr::MapServer::has_data() const
{
    if (is_presence_container) return true;
    return ip_addr.is_set
	|| proxy_reply.is_set
	|| (key !=  nullptr && key->has_data());
}

bool Native::Router::LispList::Default::Service::Ethernet::Default_::Etr::MapServer::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ip_addr.yfilter)
	|| ydk::is_set(proxy_reply.yfilter)
	|| (key !=  nullptr && key->has_operation());
}

std::string Native::Router::LispList::Default::Service::Ethernet::Default_::Etr::MapServer::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "map-server";
    ADD_KEY_TOKEN(ip_addr, "ip-addr");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::LispList::Default::Service::Ethernet::Default_::Etr::MapServer::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ip_addr.is_set || is_set(ip_addr.yfilter)) leaf_name_data.push_back(ip_addr.get_name_leafdata());
    if (proxy_reply.is_set || is_set(proxy_reply.yfilter)) leaf_name_data.push_back(proxy_reply.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Router::LispList::Default::Service::Ethernet::Default_::Etr::MapServer::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "key")
    {
        if(key == nullptr)
        {
            key = std::make_shared<Native::Router::LispList::Default::Service::Ethernet::Default_::Etr::MapServer::Key>();
        }
        return key;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Router::LispList::Default::Service::Ethernet::Default_::Etr::MapServer::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(key != nullptr)
    {
        _children["key"] = key;
    }

    return _children;
}

void Native::Router::LispList::Default::Service::Ethernet::Default_::Etr::MapServer::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ip-addr")
    {
        ip_addr = value;
        ip_addr.value_namespace = name_space;
        ip_addr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "proxy-reply")
    {
        proxy_reply = value;
        proxy_reply.value_namespace = name_space;
        proxy_reply.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::LispList::Default::Service::Ethernet::Default_::Etr::MapServer::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ip-addr")
    {
        ip_addr.yfilter = yfilter;
    }
    if(value_path == "proxy-reply")
    {
        proxy_reply.yfilter = yfilter;
    }
}

bool Native::Router::LispList::Default::Service::Ethernet::Default_::Etr::MapServer::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "key" || name == "ip-addr" || name == "proxy-reply")
        return true;
    return false;
}

Native::Router::LispList::Default::Service::Ethernet::Default_::Etr::MapServer::Key::Key()
    :
    key_pwd(std::make_shared<Native::Router::LispList::Default::Service::Ethernet::Default_::Etr::MapServer::Key::KeyPwd>())
    , key_0(std::make_shared<Native::Router::LispList::Default::Service::Ethernet::Default_::Etr::MapServer::Key::Key0>())
    , key_6(std::make_shared<Native::Router::LispList::Default::Service::Ethernet::Default_::Etr::MapServer::Key::Key6>())
    , key_7(std::make_shared<Native::Router::LispList::Default::Service::Ethernet::Default_::Etr::MapServer::Key::Key7>())
{
    key_pwd->parent = this;
    key_0->parent = this;
    key_6->parent = this;
    key_7->parent = this;

    yang_name = "key"; yang_parent_name = "map-server"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Router::LispList::Default::Service::Ethernet::Default_::Etr::MapServer::Key::~Key()
{
}

bool Native::Router::LispList::Default::Service::Ethernet::Default_::Etr::MapServer::Key::has_data() const
{
    if (is_presence_container) return true;
    return (key_pwd !=  nullptr && key_pwd->has_data())
	|| (key_0 !=  nullptr && key_0->has_data())
	|| (key_6 !=  nullptr && key_6->has_data())
	|| (key_7 !=  nullptr && key_7->has_data());
}

bool Native::Router::LispList::Default::Service::Ethernet::Default_::Etr::MapServer::Key::has_operation() const
{
    return is_set(yfilter)
	|| (key_pwd !=  nullptr && key_pwd->has_operation())
	|| (key_0 !=  nullptr && key_0->has_operation())
	|| (key_6 !=  nullptr && key_6->has_operation())
	|| (key_7 !=  nullptr && key_7->has_operation());
}

std::string Native::Router::LispList::Default::Service::Ethernet::Default_::Etr::MapServer::Key::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "key";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::LispList::Default::Service::Ethernet::Default_::Etr::MapServer::Key::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Router::LispList::Default::Service::Ethernet::Default_::Etr::MapServer::Key::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "key-pwd")
    {
        if(key_pwd == nullptr)
        {
            key_pwd = std::make_shared<Native::Router::LispList::Default::Service::Ethernet::Default_::Etr::MapServer::Key::KeyPwd>();
        }
        return key_pwd;
    }

    if(child_yang_name == "key-0")
    {
        if(key_0 == nullptr)
        {
            key_0 = std::make_shared<Native::Router::LispList::Default::Service::Ethernet::Default_::Etr::MapServer::Key::Key0>();
        }
        return key_0;
    }

    if(child_yang_name == "key-6")
    {
        if(key_6 == nullptr)
        {
            key_6 = std::make_shared<Native::Router::LispList::Default::Service::Ethernet::Default_::Etr::MapServer::Key::Key6>();
        }
        return key_6;
    }

    if(child_yang_name == "key-7")
    {
        if(key_7 == nullptr)
        {
            key_7 = std::make_shared<Native::Router::LispList::Default::Service::Ethernet::Default_::Etr::MapServer::Key::Key7>();
        }
        return key_7;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Router::LispList::Default::Service::Ethernet::Default_::Etr::MapServer::Key::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(key_pwd != nullptr)
    {
        _children["key-pwd"] = key_pwd;
    }

    if(key_0 != nullptr)
    {
        _children["key-0"] = key_0;
    }

    if(key_6 != nullptr)
    {
        _children["key-6"] = key_6;
    }

    if(key_7 != nullptr)
    {
        _children["key-7"] = key_7;
    }

    return _children;
}

void Native::Router::LispList::Default::Service::Ethernet::Default_::Etr::MapServer::Key::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Router::LispList::Default::Service::Ethernet::Default_::Etr::MapServer::Key::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Router::LispList::Default::Service::Ethernet::Default_::Etr::MapServer::Key::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "key-pwd" || name == "key-0" || name == "key-6" || name == "key-7")
        return true;
    return false;
}

Native::Router::LispList::Default::Service::Ethernet::Default_::Etr::MapServer::Key::KeyPwd::KeyPwd()
    :
    unc_pwd{YType::str, "unc-pwd"},
    hash_function{YType::enumeration, "hash-function"},
    prefix_list{YType::str, "prefix-list"}
{

    yang_name = "key-pwd"; yang_parent_name = "key"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Router::LispList::Default::Service::Ethernet::Default_::Etr::MapServer::Key::KeyPwd::~KeyPwd()
{
}

bool Native::Router::LispList::Default::Service::Ethernet::Default_::Etr::MapServer::Key::KeyPwd::has_data() const
{
    if (is_presence_container) return true;
    return unc_pwd.is_set
	|| hash_function.is_set
	|| prefix_list.is_set;
}

bool Native::Router::LispList::Default::Service::Ethernet::Default_::Etr::MapServer::Key::KeyPwd::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(unc_pwd.yfilter)
	|| ydk::is_set(hash_function.yfilter)
	|| ydk::is_set(prefix_list.yfilter);
}

std::string Native::Router::LispList::Default::Service::Ethernet::Default_::Etr::MapServer::Key::KeyPwd::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "key-pwd";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::LispList::Default::Service::Ethernet::Default_::Etr::MapServer::Key::KeyPwd::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (unc_pwd.is_set || is_set(unc_pwd.yfilter)) leaf_name_data.push_back(unc_pwd.get_name_leafdata());
    if (hash_function.is_set || is_set(hash_function.yfilter)) leaf_name_data.push_back(hash_function.get_name_leafdata());
    if (prefix_list.is_set || is_set(prefix_list.yfilter)) leaf_name_data.push_back(prefix_list.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Router::LispList::Default::Service::Ethernet::Default_::Etr::MapServer::Key::KeyPwd::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Router::LispList::Default::Service::Ethernet::Default_::Etr::MapServer::Key::KeyPwd::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Router::LispList::Default::Service::Ethernet::Default_::Etr::MapServer::Key::KeyPwd::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "unc-pwd")
    {
        unc_pwd = value;
        unc_pwd.value_namespace = name_space;
        unc_pwd.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "hash-function")
    {
        hash_function = value;
        hash_function.value_namespace = name_space;
        hash_function.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "prefix-list")
    {
        prefix_list = value;
        prefix_list.value_namespace = name_space;
        prefix_list.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::LispList::Default::Service::Ethernet::Default_::Etr::MapServer::Key::KeyPwd::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "unc-pwd")
    {
        unc_pwd.yfilter = yfilter;
    }
    if(value_path == "hash-function")
    {
        hash_function.yfilter = yfilter;
    }
    if(value_path == "prefix-list")
    {
        prefix_list.yfilter = yfilter;
    }
}

bool Native::Router::LispList::Default::Service::Ethernet::Default_::Etr::MapServer::Key::KeyPwd::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "unc-pwd" || name == "hash-function" || name == "prefix-list")
        return true;
    return false;
}

Native::Router::LispList::Default::Service::Ethernet::Default_::Etr::MapServer::Key::Key0::Key0()
    :
    ak_0{YType::str, "ak-0"},
    hash_function{YType::enumeration, "hash-function"},
    prefix_list{YType::str, "prefix-list"}
{

    yang_name = "key-0"; yang_parent_name = "key"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Router::LispList::Default::Service::Ethernet::Default_::Etr::MapServer::Key::Key0::~Key0()
{
}

bool Native::Router::LispList::Default::Service::Ethernet::Default_::Etr::MapServer::Key::Key0::has_data() const
{
    if (is_presence_container) return true;
    return ak_0.is_set
	|| hash_function.is_set
	|| prefix_list.is_set;
}

bool Native::Router::LispList::Default::Service::Ethernet::Default_::Etr::MapServer::Key::Key0::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ak_0.yfilter)
	|| ydk::is_set(hash_function.yfilter)
	|| ydk::is_set(prefix_list.yfilter);
}

std::string Native::Router::LispList::Default::Service::Ethernet::Default_::Etr::MapServer::Key::Key0::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "key-0";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::LispList::Default::Service::Ethernet::Default_::Etr::MapServer::Key::Key0::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ak_0.is_set || is_set(ak_0.yfilter)) leaf_name_data.push_back(ak_0.get_name_leafdata());
    if (hash_function.is_set || is_set(hash_function.yfilter)) leaf_name_data.push_back(hash_function.get_name_leafdata());
    if (prefix_list.is_set || is_set(prefix_list.yfilter)) leaf_name_data.push_back(prefix_list.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Router::LispList::Default::Service::Ethernet::Default_::Etr::MapServer::Key::Key0::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Router::LispList::Default::Service::Ethernet::Default_::Etr::MapServer::Key::Key0::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Router::LispList::Default::Service::Ethernet::Default_::Etr::MapServer::Key::Key0::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ak-0")
    {
        ak_0 = value;
        ak_0.value_namespace = name_space;
        ak_0.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "hash-function")
    {
        hash_function = value;
        hash_function.value_namespace = name_space;
        hash_function.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "prefix-list")
    {
        prefix_list = value;
        prefix_list.value_namespace = name_space;
        prefix_list.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::LispList::Default::Service::Ethernet::Default_::Etr::MapServer::Key::Key0::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ak-0")
    {
        ak_0.yfilter = yfilter;
    }
    if(value_path == "hash-function")
    {
        hash_function.yfilter = yfilter;
    }
    if(value_path == "prefix-list")
    {
        prefix_list.yfilter = yfilter;
    }
}

bool Native::Router::LispList::Default::Service::Ethernet::Default_::Etr::MapServer::Key::Key0::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ak-0" || name == "hash-function" || name == "prefix-list")
        return true;
    return false;
}

Native::Router::LispList::Default::Service::Ethernet::Default_::Etr::MapServer::Key::Key6::Key6()
    :
    ak_6{YType::str, "ak-6"},
    hash_function{YType::enumeration, "hash-function"},
    prefix_list{YType::str, "prefix-list"}
{

    yang_name = "key-6"; yang_parent_name = "key"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Router::LispList::Default::Service::Ethernet::Default_::Etr::MapServer::Key::Key6::~Key6()
{
}

bool Native::Router::LispList::Default::Service::Ethernet::Default_::Etr::MapServer::Key::Key6::has_data() const
{
    if (is_presence_container) return true;
    return ak_6.is_set
	|| hash_function.is_set
	|| prefix_list.is_set;
}

bool Native::Router::LispList::Default::Service::Ethernet::Default_::Etr::MapServer::Key::Key6::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ak_6.yfilter)
	|| ydk::is_set(hash_function.yfilter)
	|| ydk::is_set(prefix_list.yfilter);
}

std::string Native::Router::LispList::Default::Service::Ethernet::Default_::Etr::MapServer::Key::Key6::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "key-6";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::LispList::Default::Service::Ethernet::Default_::Etr::MapServer::Key::Key6::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ak_6.is_set || is_set(ak_6.yfilter)) leaf_name_data.push_back(ak_6.get_name_leafdata());
    if (hash_function.is_set || is_set(hash_function.yfilter)) leaf_name_data.push_back(hash_function.get_name_leafdata());
    if (prefix_list.is_set || is_set(prefix_list.yfilter)) leaf_name_data.push_back(prefix_list.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Router::LispList::Default::Service::Ethernet::Default_::Etr::MapServer::Key::Key6::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Router::LispList::Default::Service::Ethernet::Default_::Etr::MapServer::Key::Key6::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Router::LispList::Default::Service::Ethernet::Default_::Etr::MapServer::Key::Key6::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ak-6")
    {
        ak_6 = value;
        ak_6.value_namespace = name_space;
        ak_6.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "hash-function")
    {
        hash_function = value;
        hash_function.value_namespace = name_space;
        hash_function.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "prefix-list")
    {
        prefix_list = value;
        prefix_list.value_namespace = name_space;
        prefix_list.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::LispList::Default::Service::Ethernet::Default_::Etr::MapServer::Key::Key6::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ak-6")
    {
        ak_6.yfilter = yfilter;
    }
    if(value_path == "hash-function")
    {
        hash_function.yfilter = yfilter;
    }
    if(value_path == "prefix-list")
    {
        prefix_list.yfilter = yfilter;
    }
}

bool Native::Router::LispList::Default::Service::Ethernet::Default_::Etr::MapServer::Key::Key6::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ak-6" || name == "hash-function" || name == "prefix-list")
        return true;
    return false;
}

Native::Router::LispList::Default::Service::Ethernet::Default_::Etr::MapServer::Key::Key7::Key7()
    :
    ak_7{YType::str, "ak-7"},
    hash_function{YType::enumeration, "hash-function"},
    prefix_list{YType::str, "prefix-list"}
{

    yang_name = "key-7"; yang_parent_name = "key"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Router::LispList::Default::Service::Ethernet::Default_::Etr::MapServer::Key::Key7::~Key7()
{
}

bool Native::Router::LispList::Default::Service::Ethernet::Default_::Etr::MapServer::Key::Key7::has_data() const
{
    if (is_presence_container) return true;
    return ak_7.is_set
	|| hash_function.is_set
	|| prefix_list.is_set;
}

bool Native::Router::LispList::Default::Service::Ethernet::Default_::Etr::MapServer::Key::Key7::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ak_7.yfilter)
	|| ydk::is_set(hash_function.yfilter)
	|| ydk::is_set(prefix_list.yfilter);
}

std::string Native::Router::LispList::Default::Service::Ethernet::Default_::Etr::MapServer::Key::Key7::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "key-7";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::LispList::Default::Service::Ethernet::Default_::Etr::MapServer::Key::Key7::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ak_7.is_set || is_set(ak_7.yfilter)) leaf_name_data.push_back(ak_7.get_name_leafdata());
    if (hash_function.is_set || is_set(hash_function.yfilter)) leaf_name_data.push_back(hash_function.get_name_leafdata());
    if (prefix_list.is_set || is_set(prefix_list.yfilter)) leaf_name_data.push_back(prefix_list.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Router::LispList::Default::Service::Ethernet::Default_::Etr::MapServer::Key::Key7::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Router::LispList::Default::Service::Ethernet::Default_::Etr::MapServer::Key::Key7::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Router::LispList::Default::Service::Ethernet::Default_::Etr::MapServer::Key::Key7::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ak-7")
    {
        ak_7 = value;
        ak_7.value_namespace = name_space;
        ak_7.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "hash-function")
    {
        hash_function = value;
        hash_function.value_namespace = name_space;
        hash_function.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "prefix-list")
    {
        prefix_list = value;
        prefix_list.value_namespace = name_space;
        prefix_list.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::LispList::Default::Service::Ethernet::Default_::Etr::MapServer::Key::Key7::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ak-7")
    {
        ak_7.yfilter = yfilter;
    }
    if(value_path == "hash-function")
    {
        hash_function.yfilter = yfilter;
    }
    if(value_path == "prefix-list")
    {
        prefix_list.yfilter = yfilter;
    }
}

bool Native::Router::LispList::Default::Service::Ethernet::Default_::Etr::MapServer::Key::Key7::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ak-7" || name == "hash-function" || name == "prefix-list")
        return true;
    return false;
}

Native::Router::LispList::Default::Service::Ethernet::Default_::Etr::AcceptMapRequestMapping::AcceptMapRequestMapping()
    :
    accept_mappping{YType::empty, "accept-mappping"},
    verify{YType::empty, "verify"}
{

    yang_name = "accept-map-request-mapping"; yang_parent_name = "etr"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Router::LispList::Default::Service::Ethernet::Default_::Etr::AcceptMapRequestMapping::~AcceptMapRequestMapping()
{
}

bool Native::Router::LispList::Default::Service::Ethernet::Default_::Etr::AcceptMapRequestMapping::has_data() const
{
    if (is_presence_container) return true;
    return accept_mappping.is_set
	|| verify.is_set;
}

bool Native::Router::LispList::Default::Service::Ethernet::Default_::Etr::AcceptMapRequestMapping::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(accept_mappping.yfilter)
	|| ydk::is_set(verify.yfilter);
}

std::string Native::Router::LispList::Default::Service::Ethernet::Default_::Etr::AcceptMapRequestMapping::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "accept-map-request-mapping";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::LispList::Default::Service::Ethernet::Default_::Etr::AcceptMapRequestMapping::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (accept_mappping.is_set || is_set(accept_mappping.yfilter)) leaf_name_data.push_back(accept_mappping.get_name_leafdata());
    if (verify.is_set || is_set(verify.yfilter)) leaf_name_data.push_back(verify.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Router::LispList::Default::Service::Ethernet::Default_::Etr::AcceptMapRequestMapping::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Router::LispList::Default::Service::Ethernet::Default_::Etr::AcceptMapRequestMapping::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Router::LispList::Default::Service::Ethernet::Default_::Etr::AcceptMapRequestMapping::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "accept-mappping")
    {
        accept_mappping = value;
        accept_mappping.value_namespace = name_space;
        accept_mappping.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "verify")
    {
        verify = value;
        verify.value_namespace = name_space;
        verify.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::LispList::Default::Service::Ethernet::Default_::Etr::AcceptMapRequestMapping::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "accept-mappping")
    {
        accept_mappping.yfilter = yfilter;
    }
    if(value_path == "verify")
    {
        verify.yfilter = yfilter;
    }
}

bool Native::Router::LispList::Default::Service::Ethernet::Default_::Etr::AcceptMapRequestMapping::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "accept-mappping" || name == "verify")
        return true;
    return false;
}

Native::Router::LispList::Default::Service::Ethernet::Default_::MapCacheLimit::MapCacheLimit()
    :
    max_map_cache_entries{YType::uint32, "max-map-cache-entries"},
    reserve_list{YType::str, "reserve-list"},
    warning_threshold{YType::uint8, "warning-threshold"}
{

    yang_name = "map-cache-limit"; yang_parent_name = "default"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Router::LispList::Default::Service::Ethernet::Default_::MapCacheLimit::~MapCacheLimit()
{
}

bool Native::Router::LispList::Default::Service::Ethernet::Default_::MapCacheLimit::has_data() const
{
    if (is_presence_container) return true;
    return max_map_cache_entries.is_set
	|| reserve_list.is_set
	|| warning_threshold.is_set;
}

bool Native::Router::LispList::Default::Service::Ethernet::Default_::MapCacheLimit::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(max_map_cache_entries.yfilter)
	|| ydk::is_set(reserve_list.yfilter)
	|| ydk::is_set(warning_threshold.yfilter);
}

std::string Native::Router::LispList::Default::Service::Ethernet::Default_::MapCacheLimit::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "map-cache-limit";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::LispList::Default::Service::Ethernet::Default_::MapCacheLimit::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (max_map_cache_entries.is_set || is_set(max_map_cache_entries.yfilter)) leaf_name_data.push_back(max_map_cache_entries.get_name_leafdata());
    if (reserve_list.is_set || is_set(reserve_list.yfilter)) leaf_name_data.push_back(reserve_list.get_name_leafdata());
    if (warning_threshold.is_set || is_set(warning_threshold.yfilter)) leaf_name_data.push_back(warning_threshold.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Router::LispList::Default::Service::Ethernet::Default_::MapCacheLimit::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Router::LispList::Default::Service::Ethernet::Default_::MapCacheLimit::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Router::LispList::Default::Service::Ethernet::Default_::MapCacheLimit::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "max-map-cache-entries")
    {
        max_map_cache_entries = value;
        max_map_cache_entries.value_namespace = name_space;
        max_map_cache_entries.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "reserve-list")
    {
        reserve_list = value;
        reserve_list.value_namespace = name_space;
        reserve_list.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "warning-threshold")
    {
        warning_threshold = value;
        warning_threshold.value_namespace = name_space;
        warning_threshold.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::LispList::Default::Service::Ethernet::Default_::MapCacheLimit::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "max-map-cache-entries")
    {
        max_map_cache_entries.yfilter = yfilter;
    }
    if(value_path == "reserve-list")
    {
        reserve_list.yfilter = yfilter;
    }
    if(value_path == "warning-threshold")
    {
        warning_threshold.yfilter = yfilter;
    }
}

bool Native::Router::LispList::Default::Service::Ethernet::Default_::MapCacheLimit::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "max-map-cache-entries" || name == "reserve-list" || name == "warning-threshold")
        return true;
    return false;
}

Native::Router::LispList::Default::Service::Ethernet::Default_::MapResolver::MapResolver()
    :
    map_request(std::make_shared<Native::Router::LispList::Default::Service::Ethernet::Default_::MapResolver::MapRequest>())
{
    map_request->parent = this;

    yang_name = "map-resolver"; yang_parent_name = "default"; is_top_level_class = false; has_list_ancestor = true; is_presence_container = true;
}

Native::Router::LispList::Default::Service::Ethernet::Default_::MapResolver::~MapResolver()
{
}

bool Native::Router::LispList::Default::Service::Ethernet::Default_::MapResolver::has_data() const
{
    if (is_presence_container) return true;
    return (map_request !=  nullptr && map_request->has_data());
}

bool Native::Router::LispList::Default::Service::Ethernet::Default_::MapResolver::has_operation() const
{
    return is_set(yfilter)
	|| (map_request !=  nullptr && map_request->has_operation());
}

std::string Native::Router::LispList::Default::Service::Ethernet::Default_::MapResolver::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "map-resolver";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::LispList::Default::Service::Ethernet::Default_::MapResolver::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Router::LispList::Default::Service::Ethernet::Default_::MapResolver::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "map-request")
    {
        if(map_request == nullptr)
        {
            map_request = std::make_shared<Native::Router::LispList::Default::Service::Ethernet::Default_::MapResolver::MapRequest>();
        }
        return map_request;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Router::LispList::Default::Service::Ethernet::Default_::MapResolver::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(map_request != nullptr)
    {
        _children["map-request"] = map_request;
    }

    return _children;
}

void Native::Router::LispList::Default::Service::Ethernet::Default_::MapResolver::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Router::LispList::Default::Service::Ethernet::Default_::MapResolver::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Router::LispList::Default::Service::Ethernet::Default_::MapResolver::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "map-request")
        return true;
    return false;
}

Native::Router::LispList::Default::Service::Ethernet::Default_::MapResolver::MapRequest::MapRequest()
    :
    validate(std::make_shared<Native::Router::LispList::Default::Service::Ethernet::Default_::MapResolver::MapRequest::Validate>())
{
    validate->parent = this;

    yang_name = "map-request"; yang_parent_name = "map-resolver"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Router::LispList::Default::Service::Ethernet::Default_::MapResolver::MapRequest::~MapRequest()
{
}

bool Native::Router::LispList::Default::Service::Ethernet::Default_::MapResolver::MapRequest::has_data() const
{
    if (is_presence_container) return true;
    return (validate !=  nullptr && validate->has_data());
}

bool Native::Router::LispList::Default::Service::Ethernet::Default_::MapResolver::MapRequest::has_operation() const
{
    return is_set(yfilter)
	|| (validate !=  nullptr && validate->has_operation());
}

std::string Native::Router::LispList::Default::Service::Ethernet::Default_::MapResolver::MapRequest::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "map-request";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::LispList::Default::Service::Ethernet::Default_::MapResolver::MapRequest::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Router::LispList::Default::Service::Ethernet::Default_::MapResolver::MapRequest::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "validate")
    {
        if(validate == nullptr)
        {
            validate = std::make_shared<Native::Router::LispList::Default::Service::Ethernet::Default_::MapResolver::MapRequest::Validate>();
        }
        return validate;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Router::LispList::Default::Service::Ethernet::Default_::MapResolver::MapRequest::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(validate != nullptr)
    {
        _children["validate"] = validate;
    }

    return _children;
}

void Native::Router::LispList::Default::Service::Ethernet::Default_::MapResolver::MapRequest::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Router::LispList::Default::Service::Ethernet::Default_::MapResolver::MapRequest::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Router::LispList::Default::Service::Ethernet::Default_::MapResolver::MapRequest::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "validate")
        return true;
    return false;
}

Native::Router::LispList::Default::Service::Ethernet::Default_::MapResolver::MapRequest::Validate::Validate()
    :
    source(std::make_shared<Native::Router::LispList::Default::Service::Ethernet::Default_::MapResolver::MapRequest::Validate::Source>())
{
    source->parent = this;

    yang_name = "validate"; yang_parent_name = "map-request"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Router::LispList::Default::Service::Ethernet::Default_::MapResolver::MapRequest::Validate::~Validate()
{
}

bool Native::Router::LispList::Default::Service::Ethernet::Default_::MapResolver::MapRequest::Validate::has_data() const
{
    if (is_presence_container) return true;
    return (source !=  nullptr && source->has_data());
}

bool Native::Router::LispList::Default::Service::Ethernet::Default_::MapResolver::MapRequest::Validate::has_operation() const
{
    return is_set(yfilter)
	|| (source !=  nullptr && source->has_operation());
}

std::string Native::Router::LispList::Default::Service::Ethernet::Default_::MapResolver::MapRequest::Validate::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "validate";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::LispList::Default::Service::Ethernet::Default_::MapResolver::MapRequest::Validate::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Router::LispList::Default::Service::Ethernet::Default_::MapResolver::MapRequest::Validate::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "source")
    {
        if(source == nullptr)
        {
            source = std::make_shared<Native::Router::LispList::Default::Service::Ethernet::Default_::MapResolver::MapRequest::Validate::Source>();
        }
        return source;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Router::LispList::Default::Service::Ethernet::Default_::MapResolver::MapRequest::Validate::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(source != nullptr)
    {
        _children["source"] = source;
    }

    return _children;
}

void Native::Router::LispList::Default::Service::Ethernet::Default_::MapResolver::MapRequest::Validate::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Router::LispList::Default::Service::Ethernet::Default_::MapResolver::MapRequest::Validate::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Router::LispList::Default::Service::Ethernet::Default_::MapResolver::MapRequest::Validate::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "source")
        return true;
    return false;
}

Native::Router::LispList::Default::Service::Ethernet::Default_::MapResolver::MapRequest::Validate::Source::Source()
    :
    list(std::make_shared<Native::Router::LispList::Default::Service::Ethernet::Default_::MapResolver::MapRequest::Validate::Source::List>())
    , registered(std::make_shared<Native::Router::LispList::Default::Service::Ethernet::Default_::MapResolver::MapRequest::Validate::Source::Registered>())
{
    list->parent = this;
    registered->parent = this;

    yang_name = "source"; yang_parent_name = "validate"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Router::LispList::Default::Service::Ethernet::Default_::MapResolver::MapRequest::Validate::Source::~Source()
{
}

bool Native::Router::LispList::Default::Service::Ethernet::Default_::MapResolver::MapRequest::Validate::Source::has_data() const
{
    if (is_presence_container) return true;
    return (list !=  nullptr && list->has_data())
	|| (registered !=  nullptr && registered->has_data());
}

bool Native::Router::LispList::Default::Service::Ethernet::Default_::MapResolver::MapRequest::Validate::Source::has_operation() const
{
    return is_set(yfilter)
	|| (list !=  nullptr && list->has_operation())
	|| (registered !=  nullptr && registered->has_operation());
}

std::string Native::Router::LispList::Default::Service::Ethernet::Default_::MapResolver::MapRequest::Validate::Source::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "source";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::LispList::Default::Service::Ethernet::Default_::MapResolver::MapRequest::Validate::Source::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Router::LispList::Default::Service::Ethernet::Default_::MapResolver::MapRequest::Validate::Source::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "list")
    {
        if(list == nullptr)
        {
            list = std::make_shared<Native::Router::LispList::Default::Service::Ethernet::Default_::MapResolver::MapRequest::Validate::Source::List>();
        }
        return list;
    }

    if(child_yang_name == "registered")
    {
        if(registered == nullptr)
        {
            registered = std::make_shared<Native::Router::LispList::Default::Service::Ethernet::Default_::MapResolver::MapRequest::Validate::Source::Registered>();
        }
        return registered;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Router::LispList::Default::Service::Ethernet::Default_::MapResolver::MapRequest::Validate::Source::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(list != nullptr)
    {
        _children["list"] = list;
    }

    if(registered != nullptr)
    {
        _children["registered"] = registered;
    }

    return _children;
}

void Native::Router::LispList::Default::Service::Ethernet::Default_::MapResolver::MapRequest::Validate::Source::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Router::LispList::Default::Service::Ethernet::Default_::MapResolver::MapRequest::Validate::Source::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Router::LispList::Default::Service::Ethernet::Default_::MapResolver::MapRequest::Validate::Source::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "list" || name == "registered")
        return true;
    return false;
}

Native::Router::LispList::Default::Service::Ethernet::Default_::MapResolver::MapRequest::Validate::Source::List::List()
    :
    ipv4{YType::str, "ipv4"},
    ipv6{YType::str, "ipv6"}
{

    yang_name = "list"; yang_parent_name = "source"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Router::LispList::Default::Service::Ethernet::Default_::MapResolver::MapRequest::Validate::Source::List::~List()
{
}

bool Native::Router::LispList::Default::Service::Ethernet::Default_::MapResolver::MapRequest::Validate::Source::List::has_data() const
{
    if (is_presence_container) return true;
    return ipv4.is_set
	|| ipv6.is_set;
}

bool Native::Router::LispList::Default::Service::Ethernet::Default_::MapResolver::MapRequest::Validate::Source::List::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ipv4.yfilter)
	|| ydk::is_set(ipv6.yfilter);
}

std::string Native::Router::LispList::Default::Service::Ethernet::Default_::MapResolver::MapRequest::Validate::Source::List::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "list";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::LispList::Default::Service::Ethernet::Default_::MapResolver::MapRequest::Validate::Source::List::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ipv4.is_set || is_set(ipv4.yfilter)) leaf_name_data.push_back(ipv4.get_name_leafdata());
    if (ipv6.is_set || is_set(ipv6.yfilter)) leaf_name_data.push_back(ipv6.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Router::LispList::Default::Service::Ethernet::Default_::MapResolver::MapRequest::Validate::Source::List::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Router::LispList::Default::Service::Ethernet::Default_::MapResolver::MapRequest::Validate::Source::List::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Router::LispList::Default::Service::Ethernet::Default_::MapResolver::MapRequest::Validate::Source::List::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ipv4")
    {
        ipv4 = value;
        ipv4.value_namespace = name_space;
        ipv4.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv6")
    {
        ipv6 = value;
        ipv6.value_namespace = name_space;
        ipv6.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::LispList::Default::Service::Ethernet::Default_::MapResolver::MapRequest::Validate::Source::List::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ipv4")
    {
        ipv4.yfilter = yfilter;
    }
    if(value_path == "ipv6")
    {
        ipv6.yfilter = yfilter;
    }
}

bool Native::Router::LispList::Default::Service::Ethernet::Default_::MapResolver::MapRequest::Validate::Source::List::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ipv4" || name == "ipv6")
        return true;
    return false;
}

Native::Router::LispList::Default::Service::Ethernet::Default_::MapResolver::MapRequest::Validate::Source::Registered::Registered()
    :
    list(std::make_shared<Native::Router::LispList::Default::Service::Ethernet::Default_::MapResolver::MapRequest::Validate::Source::Registered::List>())
{
    list->parent = this;

    yang_name = "registered"; yang_parent_name = "source"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Router::LispList::Default::Service::Ethernet::Default_::MapResolver::MapRequest::Validate::Source::Registered::~Registered()
{
}

bool Native::Router::LispList::Default::Service::Ethernet::Default_::MapResolver::MapRequest::Validate::Source::Registered::has_data() const
{
    if (is_presence_container) return true;
    return (list !=  nullptr && list->has_data());
}

bool Native::Router::LispList::Default::Service::Ethernet::Default_::MapResolver::MapRequest::Validate::Source::Registered::has_operation() const
{
    return is_set(yfilter)
	|| (list !=  nullptr && list->has_operation());
}

std::string Native::Router::LispList::Default::Service::Ethernet::Default_::MapResolver::MapRequest::Validate::Source::Registered::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "registered";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::LispList::Default::Service::Ethernet::Default_::MapResolver::MapRequest::Validate::Source::Registered::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Router::LispList::Default::Service::Ethernet::Default_::MapResolver::MapRequest::Validate::Source::Registered::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "list")
    {
        if(list == nullptr)
        {
            list = std::make_shared<Native::Router::LispList::Default::Service::Ethernet::Default_::MapResolver::MapRequest::Validate::Source::Registered::List>();
        }
        return list;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Router::LispList::Default::Service::Ethernet::Default_::MapResolver::MapRequest::Validate::Source::Registered::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(list != nullptr)
    {
        _children["list"] = list;
    }

    return _children;
}

void Native::Router::LispList::Default::Service::Ethernet::Default_::MapResolver::MapRequest::Validate::Source::Registered::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Router::LispList::Default::Service::Ethernet::Default_::MapResolver::MapRequest::Validate::Source::Registered::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Router::LispList::Default::Service::Ethernet::Default_::MapResolver::MapRequest::Validate::Source::Registered::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "list")
        return true;
    return false;
}

Native::Router::LispList::Default::Service::Ethernet::Default_::MapResolver::MapRequest::Validate::Source::Registered::List::List()
    :
    ipv4{YType::str, "ipv4"},
    ipv6{YType::str, "ipv6"}
{

    yang_name = "list"; yang_parent_name = "registered"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Router::LispList::Default::Service::Ethernet::Default_::MapResolver::MapRequest::Validate::Source::Registered::List::~List()
{
}

bool Native::Router::LispList::Default::Service::Ethernet::Default_::MapResolver::MapRequest::Validate::Source::Registered::List::has_data() const
{
    if (is_presence_container) return true;
    return ipv4.is_set
	|| ipv6.is_set;
}

bool Native::Router::LispList::Default::Service::Ethernet::Default_::MapResolver::MapRequest::Validate::Source::Registered::List::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ipv4.yfilter)
	|| ydk::is_set(ipv6.yfilter);
}

std::string Native::Router::LispList::Default::Service::Ethernet::Default_::MapResolver::MapRequest::Validate::Source::Registered::List::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "list";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::LispList::Default::Service::Ethernet::Default_::MapResolver::MapRequest::Validate::Source::Registered::List::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ipv4.is_set || is_set(ipv4.yfilter)) leaf_name_data.push_back(ipv4.get_name_leafdata());
    if (ipv6.is_set || is_set(ipv6.yfilter)) leaf_name_data.push_back(ipv6.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Router::LispList::Default::Service::Ethernet::Default_::MapResolver::MapRequest::Validate::Source::Registered::List::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Router::LispList::Default::Service::Ethernet::Default_::MapResolver::MapRequest::Validate::Source::Registered::List::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Router::LispList::Default::Service::Ethernet::Default_::MapResolver::MapRequest::Validate::Source::Registered::List::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ipv4")
    {
        ipv4 = value;
        ipv4.value_namespace = name_space;
        ipv4.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv6")
    {
        ipv6 = value;
        ipv6.value_namespace = name_space;
        ipv6.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::LispList::Default::Service::Ethernet::Default_::MapResolver::MapRequest::Validate::Source::Registered::List::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ipv4")
    {
        ipv4.yfilter = yfilter;
    }
    if(value_path == "ipv6")
    {
        ipv6.yfilter = yfilter;
    }
}

bool Native::Router::LispList::Default::Service::Ethernet::Default_::MapResolver::MapRequest::Validate::Source::Registered::List::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ipv4" || name == "ipv6")
        return true;
    return false;
}

Native::Router::LispList::Default::Service::Ethernet::Default_::MapServer::MapServer()
    :
    map_register(std::make_shared<Native::Router::LispList::Default::Service::Ethernet::Default_::MapServer::MapRegister>())
{
    map_register->parent = this;

    yang_name = "map-server"; yang_parent_name = "default"; is_top_level_class = false; has_list_ancestor = true; is_presence_container = true;
}

Native::Router::LispList::Default::Service::Ethernet::Default_::MapServer::~MapServer()
{
}

bool Native::Router::LispList::Default::Service::Ethernet::Default_::MapServer::has_data() const
{
    if (is_presence_container) return true;
    return (map_register !=  nullptr && map_register->has_data());
}

bool Native::Router::LispList::Default::Service::Ethernet::Default_::MapServer::has_operation() const
{
    return is_set(yfilter)
	|| (map_register !=  nullptr && map_register->has_operation());
}

std::string Native::Router::LispList::Default::Service::Ethernet::Default_::MapServer::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "map-server";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::LispList::Default::Service::Ethernet::Default_::MapServer::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Router::LispList::Default::Service::Ethernet::Default_::MapServer::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "map-register")
    {
        if(map_register == nullptr)
        {
            map_register = std::make_shared<Native::Router::LispList::Default::Service::Ethernet::Default_::MapServer::MapRegister>();
        }
        return map_register;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Router::LispList::Default::Service::Ethernet::Default_::MapServer::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(map_register != nullptr)
    {
        _children["map-register"] = map_register;
    }

    return _children;
}

void Native::Router::LispList::Default::Service::Ethernet::Default_::MapServer::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Router::LispList::Default::Service::Ethernet::Default_::MapServer::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Router::LispList::Default::Service::Ethernet::Default_::MapServer::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "map-register")
        return true;
    return false;
}

Native::Router::LispList::Default::Service::Ethernet::Default_::MapServer::MapRegister::MapRegister()
    :
    validate(std::make_shared<Native::Router::LispList::Default::Service::Ethernet::Default_::MapServer::MapRegister::Validate>())
{
    validate->parent = this;

    yang_name = "map-register"; yang_parent_name = "map-server"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Router::LispList::Default::Service::Ethernet::Default_::MapServer::MapRegister::~MapRegister()
{
}

bool Native::Router::LispList::Default::Service::Ethernet::Default_::MapServer::MapRegister::has_data() const
{
    if (is_presence_container) return true;
    return (validate !=  nullptr && validate->has_data());
}

bool Native::Router::LispList::Default::Service::Ethernet::Default_::MapServer::MapRegister::has_operation() const
{
    return is_set(yfilter)
	|| (validate !=  nullptr && validate->has_operation());
}

std::string Native::Router::LispList::Default::Service::Ethernet::Default_::MapServer::MapRegister::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "map-register";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::LispList::Default::Service::Ethernet::Default_::MapServer::MapRegister::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Router::LispList::Default::Service::Ethernet::Default_::MapServer::MapRegister::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "validate")
    {
        if(validate == nullptr)
        {
            validate = std::make_shared<Native::Router::LispList::Default::Service::Ethernet::Default_::MapServer::MapRegister::Validate>();
        }
        return validate;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Router::LispList::Default::Service::Ethernet::Default_::MapServer::MapRegister::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(validate != nullptr)
    {
        _children["validate"] = validate;
    }

    return _children;
}

void Native::Router::LispList::Default::Service::Ethernet::Default_::MapServer::MapRegister::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Router::LispList::Default::Service::Ethernet::Default_::MapServer::MapRegister::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Router::LispList::Default::Service::Ethernet::Default_::MapServer::MapRegister::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "validate")
        return true;
    return false;
}

Native::Router::LispList::Default::Service::Ethernet::Default_::MapServer::MapRegister::Validate::Validate()
    :
    source(std::make_shared<Native::Router::LispList::Default::Service::Ethernet::Default_::MapServer::MapRegister::Validate::Source>())
{
    source->parent = this;

    yang_name = "validate"; yang_parent_name = "map-register"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Router::LispList::Default::Service::Ethernet::Default_::MapServer::MapRegister::Validate::~Validate()
{
}

bool Native::Router::LispList::Default::Service::Ethernet::Default_::MapServer::MapRegister::Validate::has_data() const
{
    if (is_presence_container) return true;
    return (source !=  nullptr && source->has_data());
}

bool Native::Router::LispList::Default::Service::Ethernet::Default_::MapServer::MapRegister::Validate::has_operation() const
{
    return is_set(yfilter)
	|| (source !=  nullptr && source->has_operation());
}

std::string Native::Router::LispList::Default::Service::Ethernet::Default_::MapServer::MapRegister::Validate::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "validate";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::LispList::Default::Service::Ethernet::Default_::MapServer::MapRegister::Validate::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Router::LispList::Default::Service::Ethernet::Default_::MapServer::MapRegister::Validate::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "source")
    {
        if(source == nullptr)
        {
            source = std::make_shared<Native::Router::LispList::Default::Service::Ethernet::Default_::MapServer::MapRegister::Validate::Source>();
        }
        return source;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Router::LispList::Default::Service::Ethernet::Default_::MapServer::MapRegister::Validate::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(source != nullptr)
    {
        _children["source"] = source;
    }

    return _children;
}

void Native::Router::LispList::Default::Service::Ethernet::Default_::MapServer::MapRegister::Validate::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Router::LispList::Default::Service::Ethernet::Default_::MapServer::MapRegister::Validate::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Router::LispList::Default::Service::Ethernet::Default_::MapServer::MapRegister::Validate::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "source")
        return true;
    return false;
}

Native::Router::LispList::Default::Service::Ethernet::Default_::MapServer::MapRegister::Validate::Source::Source()
    :
    allowed_locator{YType::empty, "allowed-locator"}
{

    yang_name = "source"; yang_parent_name = "validate"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Router::LispList::Default::Service::Ethernet::Default_::MapServer::MapRegister::Validate::Source::~Source()
{
}

bool Native::Router::LispList::Default::Service::Ethernet::Default_::MapServer::MapRegister::Validate::Source::has_data() const
{
    if (is_presence_container) return true;
    return allowed_locator.is_set;
}

bool Native::Router::LispList::Default::Service::Ethernet::Default_::MapServer::MapRegister::Validate::Source::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(allowed_locator.yfilter);
}

std::string Native::Router::LispList::Default::Service::Ethernet::Default_::MapServer::MapRegister::Validate::Source::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "source";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::LispList::Default::Service::Ethernet::Default_::MapServer::MapRegister::Validate::Source::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (allowed_locator.is_set || is_set(allowed_locator.yfilter)) leaf_name_data.push_back(allowed_locator.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Router::LispList::Default::Service::Ethernet::Default_::MapServer::MapRegister::Validate::Source::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Router::LispList::Default::Service::Ethernet::Default_::MapServer::MapRegister::Validate::Source::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Router::LispList::Default::Service::Ethernet::Default_::MapServer::MapRegister::Validate::Source::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "allowed-locator")
    {
        allowed_locator = value;
        allowed_locator.value_namespace = name_space;
        allowed_locator.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::LispList::Default::Service::Ethernet::Default_::MapServer::MapRegister::Validate::Source::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "allowed-locator")
    {
        allowed_locator.yfilter = yfilter;
    }
}

bool Native::Router::LispList::Default::Service::Ethernet::Default_::MapServer::MapRegister::Validate::Source::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "allowed-locator")
        return true;
    return false;
}

Native::Router::LispList::Default::Service::Ethernet::Default_::SiteRegistration::SiteRegistration()
    :
    limit{YType::uint32, "limit"},
    warning_threshold{YType::uint8, "warning-threshold"}
{

    yang_name = "site-registration"; yang_parent_name = "default"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Router::LispList::Default::Service::Ethernet::Default_::SiteRegistration::~SiteRegistration()
{
}

bool Native::Router::LispList::Default::Service::Ethernet::Default_::SiteRegistration::has_data() const
{
    if (is_presence_container) return true;
    return limit.is_set
	|| warning_threshold.is_set;
}

bool Native::Router::LispList::Default::Service::Ethernet::Default_::SiteRegistration::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(limit.yfilter)
	|| ydk::is_set(warning_threshold.yfilter);
}

std::string Native::Router::LispList::Default::Service::Ethernet::Default_::SiteRegistration::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "site-registration";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::LispList::Default::Service::Ethernet::Default_::SiteRegistration::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (limit.is_set || is_set(limit.yfilter)) leaf_name_data.push_back(limit.get_name_leafdata());
    if (warning_threshold.is_set || is_set(warning_threshold.yfilter)) leaf_name_data.push_back(warning_threshold.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Router::LispList::Default::Service::Ethernet::Default_::SiteRegistration::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Router::LispList::Default::Service::Ethernet::Default_::SiteRegistration::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Router::LispList::Default::Service::Ethernet::Default_::SiteRegistration::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "limit")
    {
        limit = value;
        limit.value_namespace = name_space;
        limit.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "warning-threshold")
    {
        warning_threshold = value;
        warning_threshold.value_namespace = name_space;
        warning_threshold.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::LispList::Default::Service::Ethernet::Default_::SiteRegistration::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "limit")
    {
        limit.yfilter = yfilter;
    }
    if(value_path == "warning-threshold")
    {
        warning_threshold.yfilter = yfilter;
    }
}

bool Native::Router::LispList::Default::Service::Ethernet::Default_::SiteRegistration::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "limit" || name == "warning-threshold")
        return true;
    return false;
}

Native::Router::LispList::Default::Service::Ethernet::Default_::SolicitMapRequest::SolicitMapRequest()
    :
    ignore{YType::empty, "ignore"},
    max_per_entry{YType::uint8, "max-per-entry"},
    suppression_time{YType::uint16, "suppression-time"}
{

    yang_name = "solicit-map-request"; yang_parent_name = "default"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Router::LispList::Default::Service::Ethernet::Default_::SolicitMapRequest::~SolicitMapRequest()
{
}

bool Native::Router::LispList::Default::Service::Ethernet::Default_::SolicitMapRequest::has_data() const
{
    if (is_presence_container) return true;
    return ignore.is_set
	|| max_per_entry.is_set
	|| suppression_time.is_set;
}

bool Native::Router::LispList::Default::Service::Ethernet::Default_::SolicitMapRequest::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ignore.yfilter)
	|| ydk::is_set(max_per_entry.yfilter)
	|| ydk::is_set(suppression_time.yfilter);
}

std::string Native::Router::LispList::Default::Service::Ethernet::Default_::SolicitMapRequest::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "solicit-map-request";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::LispList::Default::Service::Ethernet::Default_::SolicitMapRequest::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ignore.is_set || is_set(ignore.yfilter)) leaf_name_data.push_back(ignore.get_name_leafdata());
    if (max_per_entry.is_set || is_set(max_per_entry.yfilter)) leaf_name_data.push_back(max_per_entry.get_name_leafdata());
    if (suppression_time.is_set || is_set(suppression_time.yfilter)) leaf_name_data.push_back(suppression_time.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Router::LispList::Default::Service::Ethernet::Default_::SolicitMapRequest::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Router::LispList::Default::Service::Ethernet::Default_::SolicitMapRequest::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Router::LispList::Default::Service::Ethernet::Default_::SolicitMapRequest::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ignore")
    {
        ignore = value;
        ignore.value_namespace = name_space;
        ignore.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "max-per-entry")
    {
        max_per_entry = value;
        max_per_entry.value_namespace = name_space;
        max_per_entry.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "suppression-time")
    {
        suppression_time = value;
        suppression_time.value_namespace = name_space;
        suppression_time.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::LispList::Default::Service::Ethernet::Default_::SolicitMapRequest::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ignore")
    {
        ignore.yfilter = yfilter;
    }
    if(value_path == "max-per-entry")
    {
        max_per_entry.yfilter = yfilter;
    }
    if(value_path == "suppression-time")
    {
        suppression_time.yfilter = yfilter;
    }
}

bool Native::Router::LispList::Default::Service::Ethernet::Default_::SolicitMapRequest::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ignore" || name == "max-per-entry" || name == "suppression-time")
        return true;
    return false;
}

Native::Router::LispList::Default::Service::Ethernet::Encapsulation::Encapsulation()
    :
    vxlan{YType::empty, "vxlan"}
{

    yang_name = "encapsulation"; yang_parent_name = "ethernet"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Router::LispList::Default::Service::Ethernet::Encapsulation::~Encapsulation()
{
}

bool Native::Router::LispList::Default::Service::Ethernet::Encapsulation::has_data() const
{
    if (is_presence_container) return true;
    return vxlan.is_set;
}

bool Native::Router::LispList::Default::Service::Ethernet::Encapsulation::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(vxlan.yfilter);
}

std::string Native::Router::LispList::Default::Service::Ethernet::Encapsulation::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "encapsulation";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::LispList::Default::Service::Ethernet::Encapsulation::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (vxlan.is_set || is_set(vxlan.yfilter)) leaf_name_data.push_back(vxlan.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Router::LispList::Default::Service::Ethernet::Encapsulation::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Router::LispList::Default::Service::Ethernet::Encapsulation::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Router::LispList::Default::Service::Ethernet::Encapsulation::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "vxlan")
    {
        vxlan = value;
        vxlan.value_namespace = name_space;
        vxlan.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::LispList::Default::Service::Ethernet::Encapsulation::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "vxlan")
    {
        vxlan.yfilter = yfilter;
    }
}

bool Native::Router::LispList::Default::Service::Ethernet::Encapsulation::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "vxlan")
        return true;
    return false;
}

Native::Router::LispList::Default::Service::Ethernet::DatabaseMapping::DatabaseMapping()
    :
    limit(std::make_shared<Native::Router::LispList::Default::Service::Ethernet::DatabaseMapping::Limit>())
{
    limit->parent = this;

    yang_name = "database-mapping"; yang_parent_name = "ethernet"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Router::LispList::Default::Service::Ethernet::DatabaseMapping::~DatabaseMapping()
{
}

bool Native::Router::LispList::Default::Service::Ethernet::DatabaseMapping::has_data() const
{
    if (is_presence_container) return true;
    return (limit !=  nullptr && limit->has_data());
}

bool Native::Router::LispList::Default::Service::Ethernet::DatabaseMapping::has_operation() const
{
    return is_set(yfilter)
	|| (limit !=  nullptr && limit->has_operation());
}

std::string Native::Router::LispList::Default::Service::Ethernet::DatabaseMapping::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "database-mapping";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::LispList::Default::Service::Ethernet::DatabaseMapping::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Router::LispList::Default::Service::Ethernet::DatabaseMapping::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "limit")
    {
        if(limit == nullptr)
        {
            limit = std::make_shared<Native::Router::LispList::Default::Service::Ethernet::DatabaseMapping::Limit>();
        }
        return limit;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Router::LispList::Default::Service::Ethernet::DatabaseMapping::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(limit != nullptr)
    {
        _children["limit"] = limit;
    }

    return _children;
}

void Native::Router::LispList::Default::Service::Ethernet::DatabaseMapping::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Router::LispList::Default::Service::Ethernet::DatabaseMapping::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Router::LispList::Default::Service::Ethernet::DatabaseMapping::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "limit")
        return true;
    return false;
}

Native::Router::LispList::Default::Service::Ethernet::DatabaseMapping::Limit::Limit()
    :
    dynamic{YType::uint32, "dynamic"},
    warning_threshold{YType::uint8, "warning-threshold"}
{

    yang_name = "limit"; yang_parent_name = "database-mapping"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Router::LispList::Default::Service::Ethernet::DatabaseMapping::Limit::~Limit()
{
}

bool Native::Router::LispList::Default::Service::Ethernet::DatabaseMapping::Limit::has_data() const
{
    if (is_presence_container) return true;
    return dynamic.is_set
	|| warning_threshold.is_set;
}

bool Native::Router::LispList::Default::Service::Ethernet::DatabaseMapping::Limit::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(dynamic.yfilter)
	|| ydk::is_set(warning_threshold.yfilter);
}

std::string Native::Router::LispList::Default::Service::Ethernet::DatabaseMapping::Limit::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "limit";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::LispList::Default::Service::Ethernet::DatabaseMapping::Limit::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (dynamic.is_set || is_set(dynamic.yfilter)) leaf_name_data.push_back(dynamic.get_name_leafdata());
    if (warning_threshold.is_set || is_set(warning_threshold.yfilter)) leaf_name_data.push_back(warning_threshold.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Router::LispList::Default::Service::Ethernet::DatabaseMapping::Limit::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Router::LispList::Default::Service::Ethernet::DatabaseMapping::Limit::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Router::LispList::Default::Service::Ethernet::DatabaseMapping::Limit::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "dynamic")
    {
        dynamic = value;
        dynamic.value_namespace = name_space;
        dynamic.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "warning-threshold")
    {
        warning_threshold = value;
        warning_threshold.value_namespace = name_space;
        warning_threshold.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::LispList::Default::Service::Ethernet::DatabaseMapping::Limit::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "dynamic")
    {
        dynamic.yfilter = yfilter;
    }
    if(value_path == "warning-threshold")
    {
        warning_threshold.yfilter = yfilter;
    }
}

bool Native::Router::LispList::Default::Service::Ethernet::DatabaseMapping::Limit::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "dynamic" || name == "warning-threshold")
        return true;
    return false;
}

Native::Router::LispList::Default::Service::Ethernet::Itr::Itr()
    :
    nmr_ttl{YType::uint16, "nmr-ttl"}
        ,
    map_resolver(this, {"ip_addr"})
{

    yang_name = "itr"; yang_parent_name = "ethernet"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Router::LispList::Default::Service::Ethernet::Itr::~Itr()
{
}

bool Native::Router::LispList::Default::Service::Ethernet::Itr::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<map_resolver.len(); index++)
    {
        if(map_resolver[index]->has_data())
            return true;
    }
    return nmr_ttl.is_set;
}

bool Native::Router::LispList::Default::Service::Ethernet::Itr::has_operation() const
{
    for (std::size_t index=0; index<map_resolver.len(); index++)
    {
        if(map_resolver[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(nmr_ttl.yfilter);
}

std::string Native::Router::LispList::Default::Service::Ethernet::Itr::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "itr";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::LispList::Default::Service::Ethernet::Itr::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (nmr_ttl.is_set || is_set(nmr_ttl.yfilter)) leaf_name_data.push_back(nmr_ttl.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Router::LispList::Default::Service::Ethernet::Itr::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "map-resolver")
    {
        auto ent_ = std::make_shared<Native::Router::LispList::Default::Service::Ethernet::Itr::MapResolver>();
        ent_->parent = this;
        map_resolver.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Router::LispList::Default::Service::Ethernet::Itr::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : map_resolver.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Native::Router::LispList::Default::Service::Ethernet::Itr::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "nmr-ttl")
    {
        nmr_ttl = value;
        nmr_ttl.value_namespace = name_space;
        nmr_ttl.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::LispList::Default::Service::Ethernet::Itr::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "nmr-ttl")
    {
        nmr_ttl.yfilter = yfilter;
    }
}

bool Native::Router::LispList::Default::Service::Ethernet::Itr::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "map-resolver" || name == "nmr-ttl")
        return true;
    return false;
}

Native::Router::LispList::Default::Service::Ethernet::Itr::MapResolver::MapResolver()
    :
    ip_addr{YType::str, "ip-addr"},
    prefix_list{YType::str, "prefix-list"}
{

    yang_name = "map-resolver"; yang_parent_name = "itr"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Router::LispList::Default::Service::Ethernet::Itr::MapResolver::~MapResolver()
{
}

bool Native::Router::LispList::Default::Service::Ethernet::Itr::MapResolver::has_data() const
{
    if (is_presence_container) return true;
    return ip_addr.is_set
	|| prefix_list.is_set;
}

bool Native::Router::LispList::Default::Service::Ethernet::Itr::MapResolver::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ip_addr.yfilter)
	|| ydk::is_set(prefix_list.yfilter);
}

std::string Native::Router::LispList::Default::Service::Ethernet::Itr::MapResolver::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "map-resolver";
    ADD_KEY_TOKEN(ip_addr, "ip-addr");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::LispList::Default::Service::Ethernet::Itr::MapResolver::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ip_addr.is_set || is_set(ip_addr.yfilter)) leaf_name_data.push_back(ip_addr.get_name_leafdata());
    if (prefix_list.is_set || is_set(prefix_list.yfilter)) leaf_name_data.push_back(prefix_list.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Router::LispList::Default::Service::Ethernet::Itr::MapResolver::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Router::LispList::Default::Service::Ethernet::Itr::MapResolver::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Router::LispList::Default::Service::Ethernet::Itr::MapResolver::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ip-addr")
    {
        ip_addr = value;
        ip_addr.value_namespace = name_space;
        ip_addr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "prefix-list")
    {
        prefix_list = value;
        prefix_list.value_namespace = name_space;
        prefix_list.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::LispList::Default::Service::Ethernet::Itr::MapResolver::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ip-addr")
    {
        ip_addr.yfilter = yfilter;
    }
    if(value_path == "prefix-list")
    {
        prefix_list.yfilter = yfilter;
    }
}

bool Native::Router::LispList::Default::Service::Ethernet::Itr::MapResolver::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ip-addr" || name == "prefix-list")
        return true;
    return false;
}

Native::Router::LispList::Default::Service::Ethernet::ItrEnable::ItrEnable()
    :
    itr{YType::empty, "itr"}
{

    yang_name = "itr-enable"; yang_parent_name = "ethernet"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Router::LispList::Default::Service::Ethernet::ItrEnable::~ItrEnable()
{
}

bool Native::Router::LispList::Default::Service::Ethernet::ItrEnable::has_data() const
{
    if (is_presence_container) return true;
    return itr.is_set;
}

bool Native::Router::LispList::Default::Service::Ethernet::ItrEnable::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(itr.yfilter);
}

std::string Native::Router::LispList::Default::Service::Ethernet::ItrEnable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "itr-enable";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::LispList::Default::Service::Ethernet::ItrEnable::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (itr.is_set || is_set(itr.yfilter)) leaf_name_data.push_back(itr.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Router::LispList::Default::Service::Ethernet::ItrEnable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Router::LispList::Default::Service::Ethernet::ItrEnable::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Router::LispList::Default::Service::Ethernet::ItrEnable::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "itr")
    {
        itr = value;
        itr.value_namespace = name_space;
        itr.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::LispList::Default::Service::Ethernet::ItrEnable::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "itr")
    {
        itr.yfilter = yfilter;
    }
}

bool Native::Router::LispList::Default::Service::Ethernet::ItrEnable::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "itr")
        return true;
    return false;
}

Native::Router::LispList::Default::Service::Ethernet::EtrEnable::EtrEnable()
    :
    etr{YType::empty, "etr"}
{

    yang_name = "etr-enable"; yang_parent_name = "ethernet"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Router::LispList::Default::Service::Ethernet::EtrEnable::~EtrEnable()
{
}

bool Native::Router::LispList::Default::Service::Ethernet::EtrEnable::has_data() const
{
    if (is_presence_container) return true;
    return etr.is_set;
}

bool Native::Router::LispList::Default::Service::Ethernet::EtrEnable::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(etr.yfilter);
}

std::string Native::Router::LispList::Default::Service::Ethernet::EtrEnable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "etr-enable";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::LispList::Default::Service::Ethernet::EtrEnable::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (etr.is_set || is_set(etr.yfilter)) leaf_name_data.push_back(etr.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Router::LispList::Default::Service::Ethernet::EtrEnable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Router::LispList::Default::Service::Ethernet::EtrEnable::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Router::LispList::Default::Service::Ethernet::EtrEnable::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "etr")
    {
        etr = value;
        etr.value_namespace = name_space;
        etr.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::LispList::Default::Service::Ethernet::EtrEnable::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "etr")
    {
        etr.yfilter = yfilter;
    }
}

bool Native::Router::LispList::Default::Service::Ethernet::EtrEnable::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "etr")
        return true;
    return false;
}

Native::Router::LispList::Default::Service::Ethernet::Etr::Etr()
    :
    map_cache_ttl{YType::uint16, "map-cache-ttl"}
        ,
    map_server(this, {"ip_addr"})
    , accept_map_request_mapping(std::make_shared<Native::Router::LispList::Default::Service::Ethernet::Etr::AcceptMapRequestMapping>())
{
    accept_map_request_mapping->parent = this;

    yang_name = "etr"; yang_parent_name = "ethernet"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Router::LispList::Default::Service::Ethernet::Etr::~Etr()
{
}

bool Native::Router::LispList::Default::Service::Ethernet::Etr::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<map_server.len(); index++)
    {
        if(map_server[index]->has_data())
            return true;
    }
    return map_cache_ttl.is_set
	|| (accept_map_request_mapping !=  nullptr && accept_map_request_mapping->has_data());
}

bool Native::Router::LispList::Default::Service::Ethernet::Etr::has_operation() const
{
    for (std::size_t index=0; index<map_server.len(); index++)
    {
        if(map_server[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(map_cache_ttl.yfilter)
	|| (accept_map_request_mapping !=  nullptr && accept_map_request_mapping->has_operation());
}

std::string Native::Router::LispList::Default::Service::Ethernet::Etr::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "etr";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::LispList::Default::Service::Ethernet::Etr::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (map_cache_ttl.is_set || is_set(map_cache_ttl.yfilter)) leaf_name_data.push_back(map_cache_ttl.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Router::LispList::Default::Service::Ethernet::Etr::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "map-server")
    {
        auto ent_ = std::make_shared<Native::Router::LispList::Default::Service::Ethernet::Etr::MapServer>();
        ent_->parent = this;
        map_server.append(ent_);
        return ent_;
    }

    if(child_yang_name == "accept-map-request-mapping")
    {
        if(accept_map_request_mapping == nullptr)
        {
            accept_map_request_mapping = std::make_shared<Native::Router::LispList::Default::Service::Ethernet::Etr::AcceptMapRequestMapping>();
        }
        return accept_map_request_mapping;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Router::LispList::Default::Service::Ethernet::Etr::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : map_server.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    if(accept_map_request_mapping != nullptr)
    {
        _children["accept-map-request-mapping"] = accept_map_request_mapping;
    }

    return _children;
}

void Native::Router::LispList::Default::Service::Ethernet::Etr::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "map-cache-ttl")
    {
        map_cache_ttl = value;
        map_cache_ttl.value_namespace = name_space;
        map_cache_ttl.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::LispList::Default::Service::Ethernet::Etr::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "map-cache-ttl")
    {
        map_cache_ttl.yfilter = yfilter;
    }
}

bool Native::Router::LispList::Default::Service::Ethernet::Etr::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "map-server" || name == "accept-map-request-mapping" || name == "map-cache-ttl")
        return true;
    return false;
}

Native::Router::LispList::Default::Service::Ethernet::Etr::MapServer::MapServer()
    :
    ip_addr{YType::str, "ip-addr"},
    proxy_reply{YType::empty, "proxy-reply"}
        ,
    key(std::make_shared<Native::Router::LispList::Default::Service::Ethernet::Etr::MapServer::Key>())
{
    key->parent = this;

    yang_name = "map-server"; yang_parent_name = "etr"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Router::LispList::Default::Service::Ethernet::Etr::MapServer::~MapServer()
{
}

bool Native::Router::LispList::Default::Service::Ethernet::Etr::MapServer::has_data() const
{
    if (is_presence_container) return true;
    return ip_addr.is_set
	|| proxy_reply.is_set
	|| (key !=  nullptr && key->has_data());
}

bool Native::Router::LispList::Default::Service::Ethernet::Etr::MapServer::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ip_addr.yfilter)
	|| ydk::is_set(proxy_reply.yfilter)
	|| (key !=  nullptr && key->has_operation());
}

std::string Native::Router::LispList::Default::Service::Ethernet::Etr::MapServer::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "map-server";
    ADD_KEY_TOKEN(ip_addr, "ip-addr");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::LispList::Default::Service::Ethernet::Etr::MapServer::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ip_addr.is_set || is_set(ip_addr.yfilter)) leaf_name_data.push_back(ip_addr.get_name_leafdata());
    if (proxy_reply.is_set || is_set(proxy_reply.yfilter)) leaf_name_data.push_back(proxy_reply.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Router::LispList::Default::Service::Ethernet::Etr::MapServer::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "key")
    {
        if(key == nullptr)
        {
            key = std::make_shared<Native::Router::LispList::Default::Service::Ethernet::Etr::MapServer::Key>();
        }
        return key;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Router::LispList::Default::Service::Ethernet::Etr::MapServer::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(key != nullptr)
    {
        _children["key"] = key;
    }

    return _children;
}

void Native::Router::LispList::Default::Service::Ethernet::Etr::MapServer::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ip-addr")
    {
        ip_addr = value;
        ip_addr.value_namespace = name_space;
        ip_addr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "proxy-reply")
    {
        proxy_reply = value;
        proxy_reply.value_namespace = name_space;
        proxy_reply.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::LispList::Default::Service::Ethernet::Etr::MapServer::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ip-addr")
    {
        ip_addr.yfilter = yfilter;
    }
    if(value_path == "proxy-reply")
    {
        proxy_reply.yfilter = yfilter;
    }
}

bool Native::Router::LispList::Default::Service::Ethernet::Etr::MapServer::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "key" || name == "ip-addr" || name == "proxy-reply")
        return true;
    return false;
}

Native::Router::LispList::Default::Service::Ethernet::Etr::MapServer::Key::Key()
    :
    key_pwd(std::make_shared<Native::Router::LispList::Default::Service::Ethernet::Etr::MapServer::Key::KeyPwd>())
    , key_0(std::make_shared<Native::Router::LispList::Default::Service::Ethernet::Etr::MapServer::Key::Key0>())
    , key_6(std::make_shared<Native::Router::LispList::Default::Service::Ethernet::Etr::MapServer::Key::Key6>())
    , key_7(std::make_shared<Native::Router::LispList::Default::Service::Ethernet::Etr::MapServer::Key::Key7>())
{
    key_pwd->parent = this;
    key_0->parent = this;
    key_6->parent = this;
    key_7->parent = this;

    yang_name = "key"; yang_parent_name = "map-server"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Router::LispList::Default::Service::Ethernet::Etr::MapServer::Key::~Key()
{
}

bool Native::Router::LispList::Default::Service::Ethernet::Etr::MapServer::Key::has_data() const
{
    if (is_presence_container) return true;
    return (key_pwd !=  nullptr && key_pwd->has_data())
	|| (key_0 !=  nullptr && key_0->has_data())
	|| (key_6 !=  nullptr && key_6->has_data())
	|| (key_7 !=  nullptr && key_7->has_data());
}

bool Native::Router::LispList::Default::Service::Ethernet::Etr::MapServer::Key::has_operation() const
{
    return is_set(yfilter)
	|| (key_pwd !=  nullptr && key_pwd->has_operation())
	|| (key_0 !=  nullptr && key_0->has_operation())
	|| (key_6 !=  nullptr && key_6->has_operation())
	|| (key_7 !=  nullptr && key_7->has_operation());
}

std::string Native::Router::LispList::Default::Service::Ethernet::Etr::MapServer::Key::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "key";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::LispList::Default::Service::Ethernet::Etr::MapServer::Key::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Router::LispList::Default::Service::Ethernet::Etr::MapServer::Key::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "key-pwd")
    {
        if(key_pwd == nullptr)
        {
            key_pwd = std::make_shared<Native::Router::LispList::Default::Service::Ethernet::Etr::MapServer::Key::KeyPwd>();
        }
        return key_pwd;
    }

    if(child_yang_name == "key-0")
    {
        if(key_0 == nullptr)
        {
            key_0 = std::make_shared<Native::Router::LispList::Default::Service::Ethernet::Etr::MapServer::Key::Key0>();
        }
        return key_0;
    }

    if(child_yang_name == "key-6")
    {
        if(key_6 == nullptr)
        {
            key_6 = std::make_shared<Native::Router::LispList::Default::Service::Ethernet::Etr::MapServer::Key::Key6>();
        }
        return key_6;
    }

    if(child_yang_name == "key-7")
    {
        if(key_7 == nullptr)
        {
            key_7 = std::make_shared<Native::Router::LispList::Default::Service::Ethernet::Etr::MapServer::Key::Key7>();
        }
        return key_7;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Router::LispList::Default::Service::Ethernet::Etr::MapServer::Key::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(key_pwd != nullptr)
    {
        _children["key-pwd"] = key_pwd;
    }

    if(key_0 != nullptr)
    {
        _children["key-0"] = key_0;
    }

    if(key_6 != nullptr)
    {
        _children["key-6"] = key_6;
    }

    if(key_7 != nullptr)
    {
        _children["key-7"] = key_7;
    }

    return _children;
}

void Native::Router::LispList::Default::Service::Ethernet::Etr::MapServer::Key::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Router::LispList::Default::Service::Ethernet::Etr::MapServer::Key::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Router::LispList::Default::Service::Ethernet::Etr::MapServer::Key::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "key-pwd" || name == "key-0" || name == "key-6" || name == "key-7")
        return true;
    return false;
}

Native::Router::LispList::Default::Service::Ethernet::Etr::MapServer::Key::KeyPwd::KeyPwd()
    :
    unc_pwd{YType::str, "unc-pwd"},
    hash_function{YType::enumeration, "hash-function"},
    prefix_list{YType::str, "prefix-list"}
{

    yang_name = "key-pwd"; yang_parent_name = "key"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Router::LispList::Default::Service::Ethernet::Etr::MapServer::Key::KeyPwd::~KeyPwd()
{
}

bool Native::Router::LispList::Default::Service::Ethernet::Etr::MapServer::Key::KeyPwd::has_data() const
{
    if (is_presence_container) return true;
    return unc_pwd.is_set
	|| hash_function.is_set
	|| prefix_list.is_set;
}

bool Native::Router::LispList::Default::Service::Ethernet::Etr::MapServer::Key::KeyPwd::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(unc_pwd.yfilter)
	|| ydk::is_set(hash_function.yfilter)
	|| ydk::is_set(prefix_list.yfilter);
}

std::string Native::Router::LispList::Default::Service::Ethernet::Etr::MapServer::Key::KeyPwd::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "key-pwd";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::LispList::Default::Service::Ethernet::Etr::MapServer::Key::KeyPwd::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (unc_pwd.is_set || is_set(unc_pwd.yfilter)) leaf_name_data.push_back(unc_pwd.get_name_leafdata());
    if (hash_function.is_set || is_set(hash_function.yfilter)) leaf_name_data.push_back(hash_function.get_name_leafdata());
    if (prefix_list.is_set || is_set(prefix_list.yfilter)) leaf_name_data.push_back(prefix_list.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Router::LispList::Default::Service::Ethernet::Etr::MapServer::Key::KeyPwd::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Router::LispList::Default::Service::Ethernet::Etr::MapServer::Key::KeyPwd::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Router::LispList::Default::Service::Ethernet::Etr::MapServer::Key::KeyPwd::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "unc-pwd")
    {
        unc_pwd = value;
        unc_pwd.value_namespace = name_space;
        unc_pwd.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "hash-function")
    {
        hash_function = value;
        hash_function.value_namespace = name_space;
        hash_function.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "prefix-list")
    {
        prefix_list = value;
        prefix_list.value_namespace = name_space;
        prefix_list.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::LispList::Default::Service::Ethernet::Etr::MapServer::Key::KeyPwd::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "unc-pwd")
    {
        unc_pwd.yfilter = yfilter;
    }
    if(value_path == "hash-function")
    {
        hash_function.yfilter = yfilter;
    }
    if(value_path == "prefix-list")
    {
        prefix_list.yfilter = yfilter;
    }
}

bool Native::Router::LispList::Default::Service::Ethernet::Etr::MapServer::Key::KeyPwd::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "unc-pwd" || name == "hash-function" || name == "prefix-list")
        return true;
    return false;
}

Native::Router::LispList::Default::Service::Ethernet::Etr::MapServer::Key::Key0::Key0()
    :
    ak_0{YType::str, "ak-0"},
    hash_function{YType::enumeration, "hash-function"},
    prefix_list{YType::str, "prefix-list"}
{

    yang_name = "key-0"; yang_parent_name = "key"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Router::LispList::Default::Service::Ethernet::Etr::MapServer::Key::Key0::~Key0()
{
}

bool Native::Router::LispList::Default::Service::Ethernet::Etr::MapServer::Key::Key0::has_data() const
{
    if (is_presence_container) return true;
    return ak_0.is_set
	|| hash_function.is_set
	|| prefix_list.is_set;
}

bool Native::Router::LispList::Default::Service::Ethernet::Etr::MapServer::Key::Key0::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ak_0.yfilter)
	|| ydk::is_set(hash_function.yfilter)
	|| ydk::is_set(prefix_list.yfilter);
}

std::string Native::Router::LispList::Default::Service::Ethernet::Etr::MapServer::Key::Key0::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "key-0";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::LispList::Default::Service::Ethernet::Etr::MapServer::Key::Key0::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ak_0.is_set || is_set(ak_0.yfilter)) leaf_name_data.push_back(ak_0.get_name_leafdata());
    if (hash_function.is_set || is_set(hash_function.yfilter)) leaf_name_data.push_back(hash_function.get_name_leafdata());
    if (prefix_list.is_set || is_set(prefix_list.yfilter)) leaf_name_data.push_back(prefix_list.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Router::LispList::Default::Service::Ethernet::Etr::MapServer::Key::Key0::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Router::LispList::Default::Service::Ethernet::Etr::MapServer::Key::Key0::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Router::LispList::Default::Service::Ethernet::Etr::MapServer::Key::Key0::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ak-0")
    {
        ak_0 = value;
        ak_0.value_namespace = name_space;
        ak_0.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "hash-function")
    {
        hash_function = value;
        hash_function.value_namespace = name_space;
        hash_function.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "prefix-list")
    {
        prefix_list = value;
        prefix_list.value_namespace = name_space;
        prefix_list.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::LispList::Default::Service::Ethernet::Etr::MapServer::Key::Key0::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ak-0")
    {
        ak_0.yfilter = yfilter;
    }
    if(value_path == "hash-function")
    {
        hash_function.yfilter = yfilter;
    }
    if(value_path == "prefix-list")
    {
        prefix_list.yfilter = yfilter;
    }
}

bool Native::Router::LispList::Default::Service::Ethernet::Etr::MapServer::Key::Key0::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ak-0" || name == "hash-function" || name == "prefix-list")
        return true;
    return false;
}

Native::Router::LispList::Default::Service::Ethernet::Etr::MapServer::Key::Key6::Key6()
    :
    ak_6{YType::str, "ak-6"},
    hash_function{YType::enumeration, "hash-function"},
    prefix_list{YType::str, "prefix-list"}
{

    yang_name = "key-6"; yang_parent_name = "key"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Router::LispList::Default::Service::Ethernet::Etr::MapServer::Key::Key6::~Key6()
{
}

bool Native::Router::LispList::Default::Service::Ethernet::Etr::MapServer::Key::Key6::has_data() const
{
    if (is_presence_container) return true;
    return ak_6.is_set
	|| hash_function.is_set
	|| prefix_list.is_set;
}

bool Native::Router::LispList::Default::Service::Ethernet::Etr::MapServer::Key::Key6::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ak_6.yfilter)
	|| ydk::is_set(hash_function.yfilter)
	|| ydk::is_set(prefix_list.yfilter);
}

std::string Native::Router::LispList::Default::Service::Ethernet::Etr::MapServer::Key::Key6::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "key-6";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::LispList::Default::Service::Ethernet::Etr::MapServer::Key::Key6::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ak_6.is_set || is_set(ak_6.yfilter)) leaf_name_data.push_back(ak_6.get_name_leafdata());
    if (hash_function.is_set || is_set(hash_function.yfilter)) leaf_name_data.push_back(hash_function.get_name_leafdata());
    if (prefix_list.is_set || is_set(prefix_list.yfilter)) leaf_name_data.push_back(prefix_list.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Router::LispList::Default::Service::Ethernet::Etr::MapServer::Key::Key6::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Router::LispList::Default::Service::Ethernet::Etr::MapServer::Key::Key6::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Router::LispList::Default::Service::Ethernet::Etr::MapServer::Key::Key6::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ak-6")
    {
        ak_6 = value;
        ak_6.value_namespace = name_space;
        ak_6.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "hash-function")
    {
        hash_function = value;
        hash_function.value_namespace = name_space;
        hash_function.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "prefix-list")
    {
        prefix_list = value;
        prefix_list.value_namespace = name_space;
        prefix_list.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::LispList::Default::Service::Ethernet::Etr::MapServer::Key::Key6::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ak-6")
    {
        ak_6.yfilter = yfilter;
    }
    if(value_path == "hash-function")
    {
        hash_function.yfilter = yfilter;
    }
    if(value_path == "prefix-list")
    {
        prefix_list.yfilter = yfilter;
    }
}

bool Native::Router::LispList::Default::Service::Ethernet::Etr::MapServer::Key::Key6::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ak-6" || name == "hash-function" || name == "prefix-list")
        return true;
    return false;
}

Native::Router::LispList::Default::Service::Ethernet::Etr::MapServer::Key::Key7::Key7()
    :
    ak_7{YType::str, "ak-7"},
    hash_function{YType::enumeration, "hash-function"},
    prefix_list{YType::str, "prefix-list"}
{

    yang_name = "key-7"; yang_parent_name = "key"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Router::LispList::Default::Service::Ethernet::Etr::MapServer::Key::Key7::~Key7()
{
}

bool Native::Router::LispList::Default::Service::Ethernet::Etr::MapServer::Key::Key7::has_data() const
{
    if (is_presence_container) return true;
    return ak_7.is_set
	|| hash_function.is_set
	|| prefix_list.is_set;
}

bool Native::Router::LispList::Default::Service::Ethernet::Etr::MapServer::Key::Key7::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ak_7.yfilter)
	|| ydk::is_set(hash_function.yfilter)
	|| ydk::is_set(prefix_list.yfilter);
}

std::string Native::Router::LispList::Default::Service::Ethernet::Etr::MapServer::Key::Key7::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "key-7";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::LispList::Default::Service::Ethernet::Etr::MapServer::Key::Key7::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ak_7.is_set || is_set(ak_7.yfilter)) leaf_name_data.push_back(ak_7.get_name_leafdata());
    if (hash_function.is_set || is_set(hash_function.yfilter)) leaf_name_data.push_back(hash_function.get_name_leafdata());
    if (prefix_list.is_set || is_set(prefix_list.yfilter)) leaf_name_data.push_back(prefix_list.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Router::LispList::Default::Service::Ethernet::Etr::MapServer::Key::Key7::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Router::LispList::Default::Service::Ethernet::Etr::MapServer::Key::Key7::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Router::LispList::Default::Service::Ethernet::Etr::MapServer::Key::Key7::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ak-7")
    {
        ak_7 = value;
        ak_7.value_namespace = name_space;
        ak_7.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "hash-function")
    {
        hash_function = value;
        hash_function.value_namespace = name_space;
        hash_function.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "prefix-list")
    {
        prefix_list = value;
        prefix_list.value_namespace = name_space;
        prefix_list.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::LispList::Default::Service::Ethernet::Etr::MapServer::Key::Key7::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ak-7")
    {
        ak_7.yfilter = yfilter;
    }
    if(value_path == "hash-function")
    {
        hash_function.yfilter = yfilter;
    }
    if(value_path == "prefix-list")
    {
        prefix_list.yfilter = yfilter;
    }
}

bool Native::Router::LispList::Default::Service::Ethernet::Etr::MapServer::Key::Key7::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ak-7" || name == "hash-function" || name == "prefix-list")
        return true;
    return false;
}

Native::Router::LispList::Default::Service::Ethernet::Etr::AcceptMapRequestMapping::AcceptMapRequestMapping()
    :
    accept_mappping{YType::empty, "accept-mappping"},
    verify{YType::empty, "verify"}
{

    yang_name = "accept-map-request-mapping"; yang_parent_name = "etr"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Router::LispList::Default::Service::Ethernet::Etr::AcceptMapRequestMapping::~AcceptMapRequestMapping()
{
}

bool Native::Router::LispList::Default::Service::Ethernet::Etr::AcceptMapRequestMapping::has_data() const
{
    if (is_presence_container) return true;
    return accept_mappping.is_set
	|| verify.is_set;
}

bool Native::Router::LispList::Default::Service::Ethernet::Etr::AcceptMapRequestMapping::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(accept_mappping.yfilter)
	|| ydk::is_set(verify.yfilter);
}

std::string Native::Router::LispList::Default::Service::Ethernet::Etr::AcceptMapRequestMapping::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "accept-map-request-mapping";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::LispList::Default::Service::Ethernet::Etr::AcceptMapRequestMapping::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (accept_mappping.is_set || is_set(accept_mappping.yfilter)) leaf_name_data.push_back(accept_mappping.get_name_leafdata());
    if (verify.is_set || is_set(verify.yfilter)) leaf_name_data.push_back(verify.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Router::LispList::Default::Service::Ethernet::Etr::AcceptMapRequestMapping::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Router::LispList::Default::Service::Ethernet::Etr::AcceptMapRequestMapping::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Router::LispList::Default::Service::Ethernet::Etr::AcceptMapRequestMapping::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "accept-mappping")
    {
        accept_mappping = value;
        accept_mappping.value_namespace = name_space;
        accept_mappping.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "verify")
    {
        verify = value;
        verify.value_namespace = name_space;
        verify.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::LispList::Default::Service::Ethernet::Etr::AcceptMapRequestMapping::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "accept-mappping")
    {
        accept_mappping.yfilter = yfilter;
    }
    if(value_path == "verify")
    {
        verify.yfilter = yfilter;
    }
}

bool Native::Router::LispList::Default::Service::Ethernet::Etr::AcceptMapRequestMapping::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "accept-mappping" || name == "verify")
        return true;
    return false;
}

Native::Router::LispList::Default::Service::Ethernet::MapCacheLimit::MapCacheLimit()
    :
    max_map_cache_entries{YType::uint32, "max-map-cache-entries"},
    reserve_list{YType::str, "reserve-list"},
    warning_threshold{YType::uint8, "warning-threshold"}
{

    yang_name = "map-cache-limit"; yang_parent_name = "ethernet"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Router::LispList::Default::Service::Ethernet::MapCacheLimit::~MapCacheLimit()
{
}

bool Native::Router::LispList::Default::Service::Ethernet::MapCacheLimit::has_data() const
{
    if (is_presence_container) return true;
    return max_map_cache_entries.is_set
	|| reserve_list.is_set
	|| warning_threshold.is_set;
}

bool Native::Router::LispList::Default::Service::Ethernet::MapCacheLimit::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(max_map_cache_entries.yfilter)
	|| ydk::is_set(reserve_list.yfilter)
	|| ydk::is_set(warning_threshold.yfilter);
}

std::string Native::Router::LispList::Default::Service::Ethernet::MapCacheLimit::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "map-cache-limit";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::LispList::Default::Service::Ethernet::MapCacheLimit::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (max_map_cache_entries.is_set || is_set(max_map_cache_entries.yfilter)) leaf_name_data.push_back(max_map_cache_entries.get_name_leafdata());
    if (reserve_list.is_set || is_set(reserve_list.yfilter)) leaf_name_data.push_back(reserve_list.get_name_leafdata());
    if (warning_threshold.is_set || is_set(warning_threshold.yfilter)) leaf_name_data.push_back(warning_threshold.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Router::LispList::Default::Service::Ethernet::MapCacheLimit::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Router::LispList::Default::Service::Ethernet::MapCacheLimit::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Router::LispList::Default::Service::Ethernet::MapCacheLimit::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "max-map-cache-entries")
    {
        max_map_cache_entries = value;
        max_map_cache_entries.value_namespace = name_space;
        max_map_cache_entries.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "reserve-list")
    {
        reserve_list = value;
        reserve_list.value_namespace = name_space;
        reserve_list.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "warning-threshold")
    {
        warning_threshold = value;
        warning_threshold.value_namespace = name_space;
        warning_threshold.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::LispList::Default::Service::Ethernet::MapCacheLimit::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "max-map-cache-entries")
    {
        max_map_cache_entries.yfilter = yfilter;
    }
    if(value_path == "reserve-list")
    {
        reserve_list.yfilter = yfilter;
    }
    if(value_path == "warning-threshold")
    {
        warning_threshold.yfilter = yfilter;
    }
}

bool Native::Router::LispList::Default::Service::Ethernet::MapCacheLimit::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "max-map-cache-entries" || name == "reserve-list" || name == "warning-threshold")
        return true;
    return false;
}

Native::Router::LispList::Default::Service::Ethernet::MapResolver::MapResolver()
    :
    map_request(std::make_shared<Native::Router::LispList::Default::Service::Ethernet::MapResolver::MapRequest>())
{
    map_request->parent = this;

    yang_name = "map-resolver"; yang_parent_name = "ethernet"; is_top_level_class = false; has_list_ancestor = true; is_presence_container = true;
}

Native::Router::LispList::Default::Service::Ethernet::MapResolver::~MapResolver()
{
}

bool Native::Router::LispList::Default::Service::Ethernet::MapResolver::has_data() const
{
    if (is_presence_container) return true;
    return (map_request !=  nullptr && map_request->has_data());
}

bool Native::Router::LispList::Default::Service::Ethernet::MapResolver::has_operation() const
{
    return is_set(yfilter)
	|| (map_request !=  nullptr && map_request->has_operation());
}

std::string Native::Router::LispList::Default::Service::Ethernet::MapResolver::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "map-resolver";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::LispList::Default::Service::Ethernet::MapResolver::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Router::LispList::Default::Service::Ethernet::MapResolver::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "map-request")
    {
        if(map_request == nullptr)
        {
            map_request = std::make_shared<Native::Router::LispList::Default::Service::Ethernet::MapResolver::MapRequest>();
        }
        return map_request;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Router::LispList::Default::Service::Ethernet::MapResolver::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(map_request != nullptr)
    {
        _children["map-request"] = map_request;
    }

    return _children;
}

void Native::Router::LispList::Default::Service::Ethernet::MapResolver::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Router::LispList::Default::Service::Ethernet::MapResolver::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Router::LispList::Default::Service::Ethernet::MapResolver::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "map-request")
        return true;
    return false;
}

Native::Router::LispList::Default::Service::Ethernet::MapResolver::MapRequest::MapRequest()
    :
    validate(std::make_shared<Native::Router::LispList::Default::Service::Ethernet::MapResolver::MapRequest::Validate>())
{
    validate->parent = this;

    yang_name = "map-request"; yang_parent_name = "map-resolver"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Router::LispList::Default::Service::Ethernet::MapResolver::MapRequest::~MapRequest()
{
}

bool Native::Router::LispList::Default::Service::Ethernet::MapResolver::MapRequest::has_data() const
{
    if (is_presence_container) return true;
    return (validate !=  nullptr && validate->has_data());
}

bool Native::Router::LispList::Default::Service::Ethernet::MapResolver::MapRequest::has_operation() const
{
    return is_set(yfilter)
	|| (validate !=  nullptr && validate->has_operation());
}

std::string Native::Router::LispList::Default::Service::Ethernet::MapResolver::MapRequest::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "map-request";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::LispList::Default::Service::Ethernet::MapResolver::MapRequest::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Router::LispList::Default::Service::Ethernet::MapResolver::MapRequest::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "validate")
    {
        if(validate == nullptr)
        {
            validate = std::make_shared<Native::Router::LispList::Default::Service::Ethernet::MapResolver::MapRequest::Validate>();
        }
        return validate;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Router::LispList::Default::Service::Ethernet::MapResolver::MapRequest::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(validate != nullptr)
    {
        _children["validate"] = validate;
    }

    return _children;
}

void Native::Router::LispList::Default::Service::Ethernet::MapResolver::MapRequest::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Router::LispList::Default::Service::Ethernet::MapResolver::MapRequest::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Router::LispList::Default::Service::Ethernet::MapResolver::MapRequest::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "validate")
        return true;
    return false;
}

Native::Router::LispList::Default::Service::Ethernet::MapResolver::MapRequest::Validate::Validate()
    :
    source(std::make_shared<Native::Router::LispList::Default::Service::Ethernet::MapResolver::MapRequest::Validate::Source>())
{
    source->parent = this;

    yang_name = "validate"; yang_parent_name = "map-request"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Router::LispList::Default::Service::Ethernet::MapResolver::MapRequest::Validate::~Validate()
{
}

bool Native::Router::LispList::Default::Service::Ethernet::MapResolver::MapRequest::Validate::has_data() const
{
    if (is_presence_container) return true;
    return (source !=  nullptr && source->has_data());
}

bool Native::Router::LispList::Default::Service::Ethernet::MapResolver::MapRequest::Validate::has_operation() const
{
    return is_set(yfilter)
	|| (source !=  nullptr && source->has_operation());
}

std::string Native::Router::LispList::Default::Service::Ethernet::MapResolver::MapRequest::Validate::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "validate";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::LispList::Default::Service::Ethernet::MapResolver::MapRequest::Validate::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Router::LispList::Default::Service::Ethernet::MapResolver::MapRequest::Validate::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "source")
    {
        if(source == nullptr)
        {
            source = std::make_shared<Native::Router::LispList::Default::Service::Ethernet::MapResolver::MapRequest::Validate::Source>();
        }
        return source;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Router::LispList::Default::Service::Ethernet::MapResolver::MapRequest::Validate::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(source != nullptr)
    {
        _children["source"] = source;
    }

    return _children;
}

void Native::Router::LispList::Default::Service::Ethernet::MapResolver::MapRequest::Validate::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Router::LispList::Default::Service::Ethernet::MapResolver::MapRequest::Validate::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Router::LispList::Default::Service::Ethernet::MapResolver::MapRequest::Validate::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "source")
        return true;
    return false;
}

Native::Router::LispList::Default::Service::Ethernet::MapResolver::MapRequest::Validate::Source::Source()
    :
    list(std::make_shared<Native::Router::LispList::Default::Service::Ethernet::MapResolver::MapRequest::Validate::Source::List>())
    , registered(std::make_shared<Native::Router::LispList::Default::Service::Ethernet::MapResolver::MapRequest::Validate::Source::Registered>())
{
    list->parent = this;
    registered->parent = this;

    yang_name = "source"; yang_parent_name = "validate"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Router::LispList::Default::Service::Ethernet::MapResolver::MapRequest::Validate::Source::~Source()
{
}

bool Native::Router::LispList::Default::Service::Ethernet::MapResolver::MapRequest::Validate::Source::has_data() const
{
    if (is_presence_container) return true;
    return (list !=  nullptr && list->has_data())
	|| (registered !=  nullptr && registered->has_data());
}

bool Native::Router::LispList::Default::Service::Ethernet::MapResolver::MapRequest::Validate::Source::has_operation() const
{
    return is_set(yfilter)
	|| (list !=  nullptr && list->has_operation())
	|| (registered !=  nullptr && registered->has_operation());
}

std::string Native::Router::LispList::Default::Service::Ethernet::MapResolver::MapRequest::Validate::Source::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "source";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::LispList::Default::Service::Ethernet::MapResolver::MapRequest::Validate::Source::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Router::LispList::Default::Service::Ethernet::MapResolver::MapRequest::Validate::Source::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "list")
    {
        if(list == nullptr)
        {
            list = std::make_shared<Native::Router::LispList::Default::Service::Ethernet::MapResolver::MapRequest::Validate::Source::List>();
        }
        return list;
    }

    if(child_yang_name == "registered")
    {
        if(registered == nullptr)
        {
            registered = std::make_shared<Native::Router::LispList::Default::Service::Ethernet::MapResolver::MapRequest::Validate::Source::Registered>();
        }
        return registered;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Router::LispList::Default::Service::Ethernet::MapResolver::MapRequest::Validate::Source::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(list != nullptr)
    {
        _children["list"] = list;
    }

    if(registered != nullptr)
    {
        _children["registered"] = registered;
    }

    return _children;
}

void Native::Router::LispList::Default::Service::Ethernet::MapResolver::MapRequest::Validate::Source::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Router::LispList::Default::Service::Ethernet::MapResolver::MapRequest::Validate::Source::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Router::LispList::Default::Service::Ethernet::MapResolver::MapRequest::Validate::Source::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "list" || name == "registered")
        return true;
    return false;
}

Native::Router::LispList::Default::Service::Ethernet::MapResolver::MapRequest::Validate::Source::List::List()
    :
    ipv4{YType::str, "ipv4"},
    ipv6{YType::str, "ipv6"}
{

    yang_name = "list"; yang_parent_name = "source"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Router::LispList::Default::Service::Ethernet::MapResolver::MapRequest::Validate::Source::List::~List()
{
}

bool Native::Router::LispList::Default::Service::Ethernet::MapResolver::MapRequest::Validate::Source::List::has_data() const
{
    if (is_presence_container) return true;
    return ipv4.is_set
	|| ipv6.is_set;
}

bool Native::Router::LispList::Default::Service::Ethernet::MapResolver::MapRequest::Validate::Source::List::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ipv4.yfilter)
	|| ydk::is_set(ipv6.yfilter);
}

std::string Native::Router::LispList::Default::Service::Ethernet::MapResolver::MapRequest::Validate::Source::List::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "list";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::LispList::Default::Service::Ethernet::MapResolver::MapRequest::Validate::Source::List::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ipv4.is_set || is_set(ipv4.yfilter)) leaf_name_data.push_back(ipv4.get_name_leafdata());
    if (ipv6.is_set || is_set(ipv6.yfilter)) leaf_name_data.push_back(ipv6.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Router::LispList::Default::Service::Ethernet::MapResolver::MapRequest::Validate::Source::List::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Router::LispList::Default::Service::Ethernet::MapResolver::MapRequest::Validate::Source::List::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Router::LispList::Default::Service::Ethernet::MapResolver::MapRequest::Validate::Source::List::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ipv4")
    {
        ipv4 = value;
        ipv4.value_namespace = name_space;
        ipv4.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv6")
    {
        ipv6 = value;
        ipv6.value_namespace = name_space;
        ipv6.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::LispList::Default::Service::Ethernet::MapResolver::MapRequest::Validate::Source::List::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ipv4")
    {
        ipv4.yfilter = yfilter;
    }
    if(value_path == "ipv6")
    {
        ipv6.yfilter = yfilter;
    }
}

bool Native::Router::LispList::Default::Service::Ethernet::MapResolver::MapRequest::Validate::Source::List::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ipv4" || name == "ipv6")
        return true;
    return false;
}

Native::Router::LispList::Default::Service::Ethernet::MapResolver::MapRequest::Validate::Source::Registered::Registered()
    :
    list(std::make_shared<Native::Router::LispList::Default::Service::Ethernet::MapResolver::MapRequest::Validate::Source::Registered::List>())
{
    list->parent = this;

    yang_name = "registered"; yang_parent_name = "source"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Router::LispList::Default::Service::Ethernet::MapResolver::MapRequest::Validate::Source::Registered::~Registered()
{
}

bool Native::Router::LispList::Default::Service::Ethernet::MapResolver::MapRequest::Validate::Source::Registered::has_data() const
{
    if (is_presence_container) return true;
    return (list !=  nullptr && list->has_data());
}

bool Native::Router::LispList::Default::Service::Ethernet::MapResolver::MapRequest::Validate::Source::Registered::has_operation() const
{
    return is_set(yfilter)
	|| (list !=  nullptr && list->has_operation());
}

std::string Native::Router::LispList::Default::Service::Ethernet::MapResolver::MapRequest::Validate::Source::Registered::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "registered";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::LispList::Default::Service::Ethernet::MapResolver::MapRequest::Validate::Source::Registered::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Router::LispList::Default::Service::Ethernet::MapResolver::MapRequest::Validate::Source::Registered::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "list")
    {
        if(list == nullptr)
        {
            list = std::make_shared<Native::Router::LispList::Default::Service::Ethernet::MapResolver::MapRequest::Validate::Source::Registered::List>();
        }
        return list;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Router::LispList::Default::Service::Ethernet::MapResolver::MapRequest::Validate::Source::Registered::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(list != nullptr)
    {
        _children["list"] = list;
    }

    return _children;
}

void Native::Router::LispList::Default::Service::Ethernet::MapResolver::MapRequest::Validate::Source::Registered::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Router::LispList::Default::Service::Ethernet::MapResolver::MapRequest::Validate::Source::Registered::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Router::LispList::Default::Service::Ethernet::MapResolver::MapRequest::Validate::Source::Registered::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "list")
        return true;
    return false;
}

Native::Router::LispList::Default::Service::Ethernet::MapResolver::MapRequest::Validate::Source::Registered::List::List()
    :
    ipv4{YType::str, "ipv4"},
    ipv6{YType::str, "ipv6"}
{

    yang_name = "list"; yang_parent_name = "registered"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Router::LispList::Default::Service::Ethernet::MapResolver::MapRequest::Validate::Source::Registered::List::~List()
{
}

bool Native::Router::LispList::Default::Service::Ethernet::MapResolver::MapRequest::Validate::Source::Registered::List::has_data() const
{
    if (is_presence_container) return true;
    return ipv4.is_set
	|| ipv6.is_set;
}

bool Native::Router::LispList::Default::Service::Ethernet::MapResolver::MapRequest::Validate::Source::Registered::List::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ipv4.yfilter)
	|| ydk::is_set(ipv6.yfilter);
}

std::string Native::Router::LispList::Default::Service::Ethernet::MapResolver::MapRequest::Validate::Source::Registered::List::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "list";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::LispList::Default::Service::Ethernet::MapResolver::MapRequest::Validate::Source::Registered::List::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ipv4.is_set || is_set(ipv4.yfilter)) leaf_name_data.push_back(ipv4.get_name_leafdata());
    if (ipv6.is_set || is_set(ipv6.yfilter)) leaf_name_data.push_back(ipv6.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Router::LispList::Default::Service::Ethernet::MapResolver::MapRequest::Validate::Source::Registered::List::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Router::LispList::Default::Service::Ethernet::MapResolver::MapRequest::Validate::Source::Registered::List::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Router::LispList::Default::Service::Ethernet::MapResolver::MapRequest::Validate::Source::Registered::List::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ipv4")
    {
        ipv4 = value;
        ipv4.value_namespace = name_space;
        ipv4.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv6")
    {
        ipv6 = value;
        ipv6.value_namespace = name_space;
        ipv6.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::LispList::Default::Service::Ethernet::MapResolver::MapRequest::Validate::Source::Registered::List::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ipv4")
    {
        ipv4.yfilter = yfilter;
    }
    if(value_path == "ipv6")
    {
        ipv6.yfilter = yfilter;
    }
}

bool Native::Router::LispList::Default::Service::Ethernet::MapResolver::MapRequest::Validate::Source::Registered::List::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ipv4" || name == "ipv6")
        return true;
    return false;
}

Native::Router::LispList::Default::Service::Ethernet::MapServer::MapServer()
    :
    map_register(std::make_shared<Native::Router::LispList::Default::Service::Ethernet::MapServer::MapRegister>())
{
    map_register->parent = this;

    yang_name = "map-server"; yang_parent_name = "ethernet"; is_top_level_class = false; has_list_ancestor = true; is_presence_container = true;
}

Native::Router::LispList::Default::Service::Ethernet::MapServer::~MapServer()
{
}

bool Native::Router::LispList::Default::Service::Ethernet::MapServer::has_data() const
{
    if (is_presence_container) return true;
    return (map_register !=  nullptr && map_register->has_data());
}

bool Native::Router::LispList::Default::Service::Ethernet::MapServer::has_operation() const
{
    return is_set(yfilter)
	|| (map_register !=  nullptr && map_register->has_operation());
}

std::string Native::Router::LispList::Default::Service::Ethernet::MapServer::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "map-server";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::LispList::Default::Service::Ethernet::MapServer::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Router::LispList::Default::Service::Ethernet::MapServer::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "map-register")
    {
        if(map_register == nullptr)
        {
            map_register = std::make_shared<Native::Router::LispList::Default::Service::Ethernet::MapServer::MapRegister>();
        }
        return map_register;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Router::LispList::Default::Service::Ethernet::MapServer::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(map_register != nullptr)
    {
        _children["map-register"] = map_register;
    }

    return _children;
}

void Native::Router::LispList::Default::Service::Ethernet::MapServer::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Router::LispList::Default::Service::Ethernet::MapServer::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Router::LispList::Default::Service::Ethernet::MapServer::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "map-register")
        return true;
    return false;
}

Native::Router::LispList::Default::Service::Ethernet::MapServer::MapRegister::MapRegister()
    :
    validate(std::make_shared<Native::Router::LispList::Default::Service::Ethernet::MapServer::MapRegister::Validate>())
{
    validate->parent = this;

    yang_name = "map-register"; yang_parent_name = "map-server"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Router::LispList::Default::Service::Ethernet::MapServer::MapRegister::~MapRegister()
{
}

bool Native::Router::LispList::Default::Service::Ethernet::MapServer::MapRegister::has_data() const
{
    if (is_presence_container) return true;
    return (validate !=  nullptr && validate->has_data());
}

bool Native::Router::LispList::Default::Service::Ethernet::MapServer::MapRegister::has_operation() const
{
    return is_set(yfilter)
	|| (validate !=  nullptr && validate->has_operation());
}

std::string Native::Router::LispList::Default::Service::Ethernet::MapServer::MapRegister::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "map-register";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::LispList::Default::Service::Ethernet::MapServer::MapRegister::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Router::LispList::Default::Service::Ethernet::MapServer::MapRegister::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "validate")
    {
        if(validate == nullptr)
        {
            validate = std::make_shared<Native::Router::LispList::Default::Service::Ethernet::MapServer::MapRegister::Validate>();
        }
        return validate;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Router::LispList::Default::Service::Ethernet::MapServer::MapRegister::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(validate != nullptr)
    {
        _children["validate"] = validate;
    }

    return _children;
}

void Native::Router::LispList::Default::Service::Ethernet::MapServer::MapRegister::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Router::LispList::Default::Service::Ethernet::MapServer::MapRegister::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Router::LispList::Default::Service::Ethernet::MapServer::MapRegister::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "validate")
        return true;
    return false;
}

Native::Router::LispList::Default::Service::Ethernet::MapServer::MapRegister::Validate::Validate()
    :
    source(std::make_shared<Native::Router::LispList::Default::Service::Ethernet::MapServer::MapRegister::Validate::Source>())
{
    source->parent = this;

    yang_name = "validate"; yang_parent_name = "map-register"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Router::LispList::Default::Service::Ethernet::MapServer::MapRegister::Validate::~Validate()
{
}

bool Native::Router::LispList::Default::Service::Ethernet::MapServer::MapRegister::Validate::has_data() const
{
    if (is_presence_container) return true;
    return (source !=  nullptr && source->has_data());
}

bool Native::Router::LispList::Default::Service::Ethernet::MapServer::MapRegister::Validate::has_operation() const
{
    return is_set(yfilter)
	|| (source !=  nullptr && source->has_operation());
}

std::string Native::Router::LispList::Default::Service::Ethernet::MapServer::MapRegister::Validate::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "validate";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::LispList::Default::Service::Ethernet::MapServer::MapRegister::Validate::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Router::LispList::Default::Service::Ethernet::MapServer::MapRegister::Validate::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "source")
    {
        if(source == nullptr)
        {
            source = std::make_shared<Native::Router::LispList::Default::Service::Ethernet::MapServer::MapRegister::Validate::Source>();
        }
        return source;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Router::LispList::Default::Service::Ethernet::MapServer::MapRegister::Validate::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(source != nullptr)
    {
        _children["source"] = source;
    }

    return _children;
}

void Native::Router::LispList::Default::Service::Ethernet::MapServer::MapRegister::Validate::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Router::LispList::Default::Service::Ethernet::MapServer::MapRegister::Validate::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Router::LispList::Default::Service::Ethernet::MapServer::MapRegister::Validate::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "source")
        return true;
    return false;
}

Native::Router::LispList::Default::Service::Ethernet::MapServer::MapRegister::Validate::Source::Source()
    :
    allowed_locator{YType::empty, "allowed-locator"}
{

    yang_name = "source"; yang_parent_name = "validate"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Router::LispList::Default::Service::Ethernet::MapServer::MapRegister::Validate::Source::~Source()
{
}

bool Native::Router::LispList::Default::Service::Ethernet::MapServer::MapRegister::Validate::Source::has_data() const
{
    if (is_presence_container) return true;
    return allowed_locator.is_set;
}

bool Native::Router::LispList::Default::Service::Ethernet::MapServer::MapRegister::Validate::Source::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(allowed_locator.yfilter);
}

std::string Native::Router::LispList::Default::Service::Ethernet::MapServer::MapRegister::Validate::Source::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "source";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::LispList::Default::Service::Ethernet::MapServer::MapRegister::Validate::Source::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (allowed_locator.is_set || is_set(allowed_locator.yfilter)) leaf_name_data.push_back(allowed_locator.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Router::LispList::Default::Service::Ethernet::MapServer::MapRegister::Validate::Source::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Router::LispList::Default::Service::Ethernet::MapServer::MapRegister::Validate::Source::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Router::LispList::Default::Service::Ethernet::MapServer::MapRegister::Validate::Source::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "allowed-locator")
    {
        allowed_locator = value;
        allowed_locator.value_namespace = name_space;
        allowed_locator.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::LispList::Default::Service::Ethernet::MapServer::MapRegister::Validate::Source::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "allowed-locator")
    {
        allowed_locator.yfilter = yfilter;
    }
}

bool Native::Router::LispList::Default::Service::Ethernet::MapServer::MapRegister::Validate::Source::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "allowed-locator")
        return true;
    return false;
}

Native::Router::LispList::Default::Service::Ethernet::SiteRegistration::SiteRegistration()
    :
    limit{YType::uint32, "limit"},
    warning_threshold{YType::uint8, "warning-threshold"}
{

    yang_name = "site-registration"; yang_parent_name = "ethernet"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Router::LispList::Default::Service::Ethernet::SiteRegistration::~SiteRegistration()
{
}

bool Native::Router::LispList::Default::Service::Ethernet::SiteRegistration::has_data() const
{
    if (is_presence_container) return true;
    return limit.is_set
	|| warning_threshold.is_set;
}

bool Native::Router::LispList::Default::Service::Ethernet::SiteRegistration::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(limit.yfilter)
	|| ydk::is_set(warning_threshold.yfilter);
}

std::string Native::Router::LispList::Default::Service::Ethernet::SiteRegistration::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "site-registration";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::LispList::Default::Service::Ethernet::SiteRegistration::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (limit.is_set || is_set(limit.yfilter)) leaf_name_data.push_back(limit.get_name_leafdata());
    if (warning_threshold.is_set || is_set(warning_threshold.yfilter)) leaf_name_data.push_back(warning_threshold.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Router::LispList::Default::Service::Ethernet::SiteRegistration::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Router::LispList::Default::Service::Ethernet::SiteRegistration::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Router::LispList::Default::Service::Ethernet::SiteRegistration::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "limit")
    {
        limit = value;
        limit.value_namespace = name_space;
        limit.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "warning-threshold")
    {
        warning_threshold = value;
        warning_threshold.value_namespace = name_space;
        warning_threshold.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::LispList::Default::Service::Ethernet::SiteRegistration::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "limit")
    {
        limit.yfilter = yfilter;
    }
    if(value_path == "warning-threshold")
    {
        warning_threshold.yfilter = yfilter;
    }
}

bool Native::Router::LispList::Default::Service::Ethernet::SiteRegistration::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "limit" || name == "warning-threshold")
        return true;
    return false;
}

Native::Router::LispList::Default::Service::Ethernet::SolicitMapRequest::SolicitMapRequest()
    :
    ignore{YType::empty, "ignore"},
    max_per_entry{YType::uint8, "max-per-entry"},
    suppression_time{YType::uint16, "suppression-time"}
{

    yang_name = "solicit-map-request"; yang_parent_name = "ethernet"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Router::LispList::Default::Service::Ethernet::SolicitMapRequest::~SolicitMapRequest()
{
}

bool Native::Router::LispList::Default::Service::Ethernet::SolicitMapRequest::has_data() const
{
    if (is_presence_container) return true;
    return ignore.is_set
	|| max_per_entry.is_set
	|| suppression_time.is_set;
}

bool Native::Router::LispList::Default::Service::Ethernet::SolicitMapRequest::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ignore.yfilter)
	|| ydk::is_set(max_per_entry.yfilter)
	|| ydk::is_set(suppression_time.yfilter);
}

std::string Native::Router::LispList::Default::Service::Ethernet::SolicitMapRequest::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "solicit-map-request";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::LispList::Default::Service::Ethernet::SolicitMapRequest::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ignore.is_set || is_set(ignore.yfilter)) leaf_name_data.push_back(ignore.get_name_leafdata());
    if (max_per_entry.is_set || is_set(max_per_entry.yfilter)) leaf_name_data.push_back(max_per_entry.get_name_leafdata());
    if (suppression_time.is_set || is_set(suppression_time.yfilter)) leaf_name_data.push_back(suppression_time.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Router::LispList::Default::Service::Ethernet::SolicitMapRequest::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Router::LispList::Default::Service::Ethernet::SolicitMapRequest::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Router::LispList::Default::Service::Ethernet::SolicitMapRequest::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ignore")
    {
        ignore = value;
        ignore.value_namespace = name_space;
        ignore.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "max-per-entry")
    {
        max_per_entry = value;
        max_per_entry.value_namespace = name_space;
        max_per_entry.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "suppression-time")
    {
        suppression_time = value;
        suppression_time.value_namespace = name_space;
        suppression_time.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::LispList::Default::Service::Ethernet::SolicitMapRequest::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ignore")
    {
        ignore.yfilter = yfilter;
    }
    if(value_path == "max-per-entry")
    {
        max_per_entry.yfilter = yfilter;
    }
    if(value_path == "suppression-time")
    {
        suppression_time.yfilter = yfilter;
    }
}

bool Native::Router::LispList::Default::Service::Ethernet::SolicitMapRequest::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ignore" || name == "max-per-entry" || name == "suppression-time")
        return true;
    return false;
}

Native::Router::LispList::Default::Encapsulation::Encapsulation()
    :
    vxlan{YType::empty, "vxlan"}
{

    yang_name = "encapsulation"; yang_parent_name = "default"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Router::LispList::Default::Encapsulation::~Encapsulation()
{
}

bool Native::Router::LispList::Default::Encapsulation::has_data() const
{
    if (is_presence_container) return true;
    return vxlan.is_set;
}

bool Native::Router::LispList::Default::Encapsulation::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(vxlan.yfilter);
}

std::string Native::Router::LispList::Default::Encapsulation::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "encapsulation";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::LispList::Default::Encapsulation::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (vxlan.is_set || is_set(vxlan.yfilter)) leaf_name_data.push_back(vxlan.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Router::LispList::Default::Encapsulation::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Router::LispList::Default::Encapsulation::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Router::LispList::Default::Encapsulation::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "vxlan")
    {
        vxlan = value;
        vxlan.value_namespace = name_space;
        vxlan.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::LispList::Default::Encapsulation::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "vxlan")
    {
        vxlan.yfilter = yfilter;
    }
}

bool Native::Router::LispList::Default::Encapsulation::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "vxlan")
        return true;
    return false;
}

Native::Router::LispList::Default::LocatorSet::LocatorSet()
    :
    name{YType::str, "name"},
    auto_discover_rlocs{YType::empty, "auto-discover-rlocs"}
        ,
    ipv4_interface(this, {"name"})
    , ipv6_interface(this, {"name"})
    , ip_address(this, {"ip"})
{

    yang_name = "locator-set"; yang_parent_name = "default"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Router::LispList::Default::LocatorSet::~LocatorSet()
{
}

bool Native::Router::LispList::Default::LocatorSet::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<ipv4_interface.len(); index++)
    {
        if(ipv4_interface[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<ipv6_interface.len(); index++)
    {
        if(ipv6_interface[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<ip_address.len(); index++)
    {
        if(ip_address[index]->has_data())
            return true;
    }
    return name.is_set
	|| auto_discover_rlocs.is_set;
}

bool Native::Router::LispList::Default::LocatorSet::has_operation() const
{
    for (std::size_t index=0; index<ipv4_interface.len(); index++)
    {
        if(ipv4_interface[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<ipv6_interface.len(); index++)
    {
        if(ipv6_interface[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<ip_address.len(); index++)
    {
        if(ip_address[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(auto_discover_rlocs.yfilter);
}

std::string Native::Router::LispList::Default::LocatorSet::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "locator-set";
    ADD_KEY_TOKEN(name, "name");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::LispList::Default::LocatorSet::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (auto_discover_rlocs.is_set || is_set(auto_discover_rlocs.yfilter)) leaf_name_data.push_back(auto_discover_rlocs.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Router::LispList::Default::LocatorSet::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "IPv4-interface")
    {
        auto ent_ = std::make_shared<Native::Router::LispList::Default::LocatorSet::IPv4Interface>();
        ent_->parent = this;
        ipv4_interface.append(ent_);
        return ent_;
    }

    if(child_yang_name == "IPv6-interface")
    {
        auto ent_ = std::make_shared<Native::Router::LispList::Default::LocatorSet::IPv6Interface>();
        ent_->parent = this;
        ipv6_interface.append(ent_);
        return ent_;
    }

    if(child_yang_name == "ip-address")
    {
        auto ent_ = std::make_shared<Native::Router::LispList::Default::LocatorSet::IpAddress>();
        ent_->parent = this;
        ip_address.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Router::LispList::Default::LocatorSet::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : ipv4_interface.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    count_ = 0;
    for (auto ent_ : ipv6_interface.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    count_ = 0;
    for (auto ent_ : ip_address.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Native::Router::LispList::Default::LocatorSet::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "auto-discover-rlocs")
    {
        auto_discover_rlocs = value;
        auto_discover_rlocs.value_namespace = name_space;
        auto_discover_rlocs.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::LispList::Default::LocatorSet::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "auto-discover-rlocs")
    {
        auto_discover_rlocs.yfilter = yfilter;
    }
}

bool Native::Router::LispList::Default::LocatorSet::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "IPv4-interface" || name == "IPv6-interface" || name == "ip-address" || name == "name" || name == "auto-discover-rlocs")
        return true;
    return false;
}

Native::Router::LispList::Default::LocatorSet::IPv4Interface::IPv4Interface()
    :
    name{YType::str, "name"},
    priority{YType::uint8, "priority"},
    weight{YType::uint8, "weight"}
{

    yang_name = "IPv4-interface"; yang_parent_name = "locator-set"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Router::LispList::Default::LocatorSet::IPv4Interface::~IPv4Interface()
{
}

bool Native::Router::LispList::Default::LocatorSet::IPv4Interface::has_data() const
{
    if (is_presence_container) return true;
    return name.is_set
	|| priority.is_set
	|| weight.is_set;
}

bool Native::Router::LispList::Default::LocatorSet::IPv4Interface::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(priority.yfilter)
	|| ydk::is_set(weight.yfilter);
}

std::string Native::Router::LispList::Default::LocatorSet::IPv4Interface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "IPv4-interface";
    ADD_KEY_TOKEN(name, "name");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::LispList::Default::LocatorSet::IPv4Interface::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (priority.is_set || is_set(priority.yfilter)) leaf_name_data.push_back(priority.get_name_leafdata());
    if (weight.is_set || is_set(weight.yfilter)) leaf_name_data.push_back(weight.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Router::LispList::Default::LocatorSet::IPv4Interface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Router::LispList::Default::LocatorSet::IPv4Interface::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Router::LispList::Default::LocatorSet::IPv4Interface::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "priority")
    {
        priority = value;
        priority.value_namespace = name_space;
        priority.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "weight")
    {
        weight = value;
        weight.value_namespace = name_space;
        weight.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::LispList::Default::LocatorSet::IPv4Interface::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "priority")
    {
        priority.yfilter = yfilter;
    }
    if(value_path == "weight")
    {
        weight.yfilter = yfilter;
    }
}

bool Native::Router::LispList::Default::LocatorSet::IPv4Interface::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "name" || name == "priority" || name == "weight")
        return true;
    return false;
}

Native::Router::LispList::Default::LocatorSet::IPv6Interface::IPv6Interface()
    :
    name{YType::str, "name"},
    priority{YType::uint8, "priority"},
    weight{YType::uint8, "weight"}
{

    yang_name = "IPv6-interface"; yang_parent_name = "locator-set"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Router::LispList::Default::LocatorSet::IPv6Interface::~IPv6Interface()
{
}

bool Native::Router::LispList::Default::LocatorSet::IPv6Interface::has_data() const
{
    if (is_presence_container) return true;
    return name.is_set
	|| priority.is_set
	|| weight.is_set;
}

bool Native::Router::LispList::Default::LocatorSet::IPv6Interface::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(priority.yfilter)
	|| ydk::is_set(weight.yfilter);
}

std::string Native::Router::LispList::Default::LocatorSet::IPv6Interface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "IPv6-interface";
    ADD_KEY_TOKEN(name, "name");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::LispList::Default::LocatorSet::IPv6Interface::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (priority.is_set || is_set(priority.yfilter)) leaf_name_data.push_back(priority.get_name_leafdata());
    if (weight.is_set || is_set(weight.yfilter)) leaf_name_data.push_back(weight.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Router::LispList::Default::LocatorSet::IPv6Interface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Router::LispList::Default::LocatorSet::IPv6Interface::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Router::LispList::Default::LocatorSet::IPv6Interface::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "priority")
    {
        priority = value;
        priority.value_namespace = name_space;
        priority.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "weight")
    {
        weight = value;
        weight.value_namespace = name_space;
        weight.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::LispList::Default::LocatorSet::IPv6Interface::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "priority")
    {
        priority.yfilter = yfilter;
    }
    if(value_path == "weight")
    {
        weight.yfilter = yfilter;
    }
}

bool Native::Router::LispList::Default::LocatorSet::IPv6Interface::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "name" || name == "priority" || name == "weight")
        return true;
    return false;
}

Native::Router::LispList::Default::LocatorSet::IpAddress::IpAddress()
    :
    ip{YType::str, "ip"},
    priority{YType::uint8, "priority"},
    weight{YType::uint8, "weight"}
{

    yang_name = "ip-address"; yang_parent_name = "locator-set"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Router::LispList::Default::LocatorSet::IpAddress::~IpAddress()
{
}

bool Native::Router::LispList::Default::LocatorSet::IpAddress::has_data() const
{
    if (is_presence_container) return true;
    return ip.is_set
	|| priority.is_set
	|| weight.is_set;
}

bool Native::Router::LispList::Default::LocatorSet::IpAddress::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ip.yfilter)
	|| ydk::is_set(priority.yfilter)
	|| ydk::is_set(weight.yfilter);
}

std::string Native::Router::LispList::Default::LocatorSet::IpAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ip-address";
    ADD_KEY_TOKEN(ip, "ip");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::LispList::Default::LocatorSet::IpAddress::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ip.is_set || is_set(ip.yfilter)) leaf_name_data.push_back(ip.get_name_leafdata());
    if (priority.is_set || is_set(priority.yfilter)) leaf_name_data.push_back(priority.get_name_leafdata());
    if (weight.is_set || is_set(weight.yfilter)) leaf_name_data.push_back(weight.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Router::LispList::Default::LocatorSet::IpAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Router::LispList::Default::LocatorSet::IpAddress::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Router::LispList::Default::LocatorSet::IpAddress::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ip")
    {
        ip = value;
        ip.value_namespace = name_space;
        ip.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "priority")
    {
        priority = value;
        priority.value_namespace = name_space;
        priority.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "weight")
    {
        weight = value;
        weight.value_namespace = name_space;
        weight.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::LispList::Default::LocatorSet::IpAddress::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ip")
    {
        ip.yfilter = yfilter;
    }
    if(value_path == "priority")
    {
        priority.yfilter = yfilter;
    }
    if(value_path == "weight")
    {
        weight.yfilter = yfilter;
    }
}

bool Native::Router::LispList::Default::LocatorSet::IpAddress::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ip" || name == "priority" || name == "weight")
        return true;
    return false;
}

Native::Router::LispList::Default::Locator::Locator()
    :
    default_set{YType::str, "default-set"}
{

    yang_name = "locator"; yang_parent_name = "default"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Router::LispList::Default::Locator::~Locator()
{
}

bool Native::Router::LispList::Default::Locator::has_data() const
{
    if (is_presence_container) return true;
    return default_set.is_set;
}

bool Native::Router::LispList::Default::Locator::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(default_set.yfilter);
}

std::string Native::Router::LispList::Default::Locator::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "locator";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::LispList::Default::Locator::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (default_set.is_set || is_set(default_set.yfilter)) leaf_name_data.push_back(default_set.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Router::LispList::Default::Locator::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Router::LispList::Default::Locator::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Router::LispList::Default::Locator::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "default-set")
    {
        default_set = value;
        default_set.value_namespace = name_space;
        default_set.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::LispList::Default::Locator::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "default-set")
    {
        default_set.yfilter = yfilter;
    }
}

bool Native::Router::LispList::Default::Locator::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "default-set")
        return true;
    return false;
}

Native::Router::LispList::Default::LocatorScope::LocatorScope()
    :
    name{YType::str, "name"},
    rloc_prefix{YType::str, "rloc-prefix"},
    rtr_locator_set{YType::str, "rtr-locator-set"}
{

    yang_name = "locator-scope"; yang_parent_name = "default"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Router::LispList::Default::LocatorScope::~LocatorScope()
{
}

bool Native::Router::LispList::Default::LocatorScope::has_data() const
{
    if (is_presence_container) return true;
    for (auto const & leaf : rloc_prefix.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    for (auto const & leaf : rtr_locator_set.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return name.is_set;
}

bool Native::Router::LispList::Default::LocatorScope::has_operation() const
{
    for (auto const & leaf : rloc_prefix.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    for (auto const & leaf : rtr_locator_set.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(rloc_prefix.yfilter)
	|| ydk::is_set(rtr_locator_set.yfilter);
}

std::string Native::Router::LispList::Default::LocatorScope::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "locator-scope";
    ADD_KEY_TOKEN(name, "name");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::LispList::Default::LocatorScope::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());

    auto rloc_prefix_name_datas = rloc_prefix.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), rloc_prefix_name_datas.begin(), rloc_prefix_name_datas.end());
    auto rtr_locator_set_name_datas = rtr_locator_set.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), rtr_locator_set_name_datas.begin(), rtr_locator_set_name_datas.end());
    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Router::LispList::Default::LocatorScope::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Router::LispList::Default::LocatorScope::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Router::LispList::Default::LocatorScope::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rloc-prefix")
    {
        rloc_prefix.append(value);
    }
    if(value_path == "rtr-locator-set")
    {
        rtr_locator_set.append(value);
    }
}

void Native::Router::LispList::Default::LocatorScope::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "rloc-prefix")
    {
        rloc_prefix.yfilter = yfilter;
    }
    if(value_path == "rtr-locator-set")
    {
        rtr_locator_set.yfilter = yfilter;
    }
}

bool Native::Router::LispList::Default::LocatorScope::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "name" || name == "rloc-prefix" || name == "rtr-locator-set")
        return true;
    return false;
}

Native::Router::LispList::Default::PrefixList::PrefixList()
    :
    name{YType::str, "name"}
        ,
    ipv4_prefix(this, {"prefix"})
    , ipv6_prefix(this, {"prefix"})
{

    yang_name = "prefix-list"; yang_parent_name = "default"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Router::LispList::Default::PrefixList::~PrefixList()
{
}

bool Native::Router::LispList::Default::PrefixList::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<ipv4_prefix.len(); index++)
    {
        if(ipv4_prefix[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<ipv6_prefix.len(); index++)
    {
        if(ipv6_prefix[index]->has_data())
            return true;
    }
    return name.is_set;
}

bool Native::Router::LispList::Default::PrefixList::has_operation() const
{
    for (std::size_t index=0; index<ipv4_prefix.len(); index++)
    {
        if(ipv4_prefix[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<ipv6_prefix.len(); index++)
    {
        if(ipv6_prefix[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter);
}

std::string Native::Router::LispList::Default::PrefixList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "prefix-list";
    ADD_KEY_TOKEN(name, "name");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::LispList::Default::PrefixList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Router::LispList::Default::PrefixList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ipv4-prefix")
    {
        auto ent_ = std::make_shared<Native::Router::LispList::Default::PrefixList::Ipv4Prefix>();
        ent_->parent = this;
        ipv4_prefix.append(ent_);
        return ent_;
    }

    if(child_yang_name == "ipv6-prefix")
    {
        auto ent_ = std::make_shared<Native::Router::LispList::Default::PrefixList::Ipv6Prefix>();
        ent_->parent = this;
        ipv6_prefix.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Router::LispList::Default::PrefixList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : ipv4_prefix.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    count_ = 0;
    for (auto ent_ : ipv6_prefix.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Native::Router::LispList::Default::PrefixList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::LispList::Default::PrefixList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
}

bool Native::Router::LispList::Default::PrefixList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ipv4-prefix" || name == "ipv6-prefix" || name == "name")
        return true;
    return false;
}

Native::Router::LispList::Default::PrefixList::Ipv4Prefix::Ipv4Prefix()
    :
    prefix{YType::str, "prefix"}
{

    yang_name = "ipv4-prefix"; yang_parent_name = "prefix-list"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Router::LispList::Default::PrefixList::Ipv4Prefix::~Ipv4Prefix()
{
}

bool Native::Router::LispList::Default::PrefixList::Ipv4Prefix::has_data() const
{
    if (is_presence_container) return true;
    return prefix.is_set;
}

bool Native::Router::LispList::Default::PrefixList::Ipv4Prefix::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(prefix.yfilter);
}

std::string Native::Router::LispList::Default::PrefixList::Ipv4Prefix::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv4-prefix";
    ADD_KEY_TOKEN(prefix, "prefix");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::LispList::Default::PrefixList::Ipv4Prefix::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (prefix.is_set || is_set(prefix.yfilter)) leaf_name_data.push_back(prefix.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Router::LispList::Default::PrefixList::Ipv4Prefix::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Router::LispList::Default::PrefixList::Ipv4Prefix::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Router::LispList::Default::PrefixList::Ipv4Prefix::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "prefix")
    {
        prefix = value;
        prefix.value_namespace = name_space;
        prefix.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::LispList::Default::PrefixList::Ipv4Prefix::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "prefix")
    {
        prefix.yfilter = yfilter;
    }
}

bool Native::Router::LispList::Default::PrefixList::Ipv4Prefix::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "prefix")
        return true;
    return false;
}

Native::Router::LispList::Default::PrefixList::Ipv6Prefix::Ipv6Prefix()
    :
    prefix{YType::str, "prefix"}
{

    yang_name = "ipv6-prefix"; yang_parent_name = "prefix-list"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Router::LispList::Default::PrefixList::Ipv6Prefix::~Ipv6Prefix()
{
}

bool Native::Router::LispList::Default::PrefixList::Ipv6Prefix::has_data() const
{
    if (is_presence_container) return true;
    return prefix.is_set;
}

bool Native::Router::LispList::Default::PrefixList::Ipv6Prefix::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(prefix.yfilter);
}

std::string Native::Router::LispList::Default::PrefixList::Ipv6Prefix::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv6-prefix";
    ADD_KEY_TOKEN(prefix, "prefix");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::LispList::Default::PrefixList::Ipv6Prefix::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (prefix.is_set || is_set(prefix.yfilter)) leaf_name_data.push_back(prefix.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Router::LispList::Default::PrefixList::Ipv6Prefix::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Router::LispList::Default::PrefixList::Ipv6Prefix::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Router::LispList::Default::PrefixList::Ipv6Prefix::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "prefix")
    {
        prefix = value;
        prefix.value_namespace = name_space;
        prefix.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::LispList::Default::PrefixList::Ipv6Prefix::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "prefix")
    {
        prefix.yfilter = yfilter;
    }
}

bool Native::Router::LispList::Default::PrefixList::Ipv6Prefix::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "prefix")
        return true;
    return false;
}

Native::Router::LispList::Default::InstanceContainer::InstanceContainer()
    :
    instance_list(this, {"instance_id"})
{

    yang_name = "instance-container"; yang_parent_name = "default"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Router::LispList::Default::InstanceContainer::~InstanceContainer()
{
}

bool Native::Router::LispList::Default::InstanceContainer::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<instance_list.len(); index++)
    {
        if(instance_list[index]->has_data())
            return true;
    }
    return false;
}

bool Native::Router::LispList::Default::InstanceContainer::has_operation() const
{
    for (std::size_t index=0; index<instance_list.len(); index++)
    {
        if(instance_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Native::Router::LispList::Default::InstanceContainer::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "instance-container";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::LispList::Default::InstanceContainer::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Router::LispList::Default::InstanceContainer::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "instance-list")
    {
        auto ent_ = std::make_shared<Native::Router::LispList::Default::InstanceContainer::InstanceList>();
        ent_->parent = this;
        instance_list.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Router::LispList::Default::InstanceContainer::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : instance_list.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Native::Router::LispList::Default::InstanceContainer::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Router::LispList::Default::InstanceContainer::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Router::LispList::Default::InstanceContainer::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "instance-list")
        return true;
    return false;
}

Native::Router::LispList::Default::InstanceContainer::InstanceList::InstanceList()
    :
    instance_id{YType::uint32, "instance-id"},
    disable_ttl_propagate{YType::empty, "disable-ttl-propagate"}
        ,
    default_(std::make_shared<Native::Router::LispList::Default::InstanceContainer::InstanceList::Default_>())
    , decapsulation(std::make_shared<Native::Router::LispList::Default::InstanceContainer::InstanceList::Decapsulation>())
    , dynamic_eid(this, {"name"})
    , loc_reach_algorithm(std::make_shared<Native::Router::LispList::Default::InstanceContainer::InstanceList::LocReachAlgorithm>())
    , map_server(std::make_shared<Native::Router::LispList::Default::InstanceContainer::InstanceList::MapServer>())
    , other_xtr_probe(std::make_shared<Native::Router::LispList::Default::InstanceContainer::InstanceList::OtherXtrProbe>())
    , remote_rloc_probe(std::make_shared<Native::Router::LispList::Default::InstanceContainer::InstanceList::RemoteRlocProbe>())
    , service(nullptr) // presence node
{
    default_->parent = this;
    decapsulation->parent = this;
    loc_reach_algorithm->parent = this;
    map_server->parent = this;
    other_xtr_probe->parent = this;
    remote_rloc_probe->parent = this;

    yang_name = "instance-list"; yang_parent_name = "instance-container"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Router::LispList::Default::InstanceContainer::InstanceList::~InstanceList()
{
}

bool Native::Router::LispList::Default::InstanceContainer::InstanceList::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<dynamic_eid.len(); index++)
    {
        if(dynamic_eid[index]->has_data())
            return true;
    }
    return instance_id.is_set
	|| disable_ttl_propagate.is_set
	|| (default_ !=  nullptr && default_->has_data())
	|| (decapsulation !=  nullptr && decapsulation->has_data())
	|| (loc_reach_algorithm !=  nullptr && loc_reach_algorithm->has_data())
	|| (map_server !=  nullptr && map_server->has_data())
	|| (other_xtr_probe !=  nullptr && other_xtr_probe->has_data())
	|| (remote_rloc_probe !=  nullptr && remote_rloc_probe->has_data())
	|| (service !=  nullptr && service->has_data());
}

bool Native::Router::LispList::Default::InstanceContainer::InstanceList::has_operation() const
{
    for (std::size_t index=0; index<dynamic_eid.len(); index++)
    {
        if(dynamic_eid[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(instance_id.yfilter)
	|| ydk::is_set(disable_ttl_propagate.yfilter)
	|| (default_ !=  nullptr && default_->has_operation())
	|| (decapsulation !=  nullptr && decapsulation->has_operation())
	|| (loc_reach_algorithm !=  nullptr && loc_reach_algorithm->has_operation())
	|| (map_server !=  nullptr && map_server->has_operation())
	|| (other_xtr_probe !=  nullptr && other_xtr_probe->has_operation())
	|| (remote_rloc_probe !=  nullptr && remote_rloc_probe->has_operation())
	|| (service !=  nullptr && service->has_operation());
}

std::string Native::Router::LispList::Default::InstanceContainer::InstanceList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "instance-list";
    ADD_KEY_TOKEN(instance_id, "instance-id");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::LispList::Default::InstanceContainer::InstanceList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (instance_id.is_set || is_set(instance_id.yfilter)) leaf_name_data.push_back(instance_id.get_name_leafdata());
    if (disable_ttl_propagate.is_set || is_set(disable_ttl_propagate.yfilter)) leaf_name_data.push_back(disable_ttl_propagate.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Router::LispList::Default::InstanceContainer::InstanceList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "default")
    {
        if(default_ == nullptr)
        {
            default_ = std::make_shared<Native::Router::LispList::Default::InstanceContainer::InstanceList::Default_>();
        }
        return default_;
    }

    if(child_yang_name == "decapsulation")
    {
        if(decapsulation == nullptr)
        {
            decapsulation = std::make_shared<Native::Router::LispList::Default::InstanceContainer::InstanceList::Decapsulation>();
        }
        return decapsulation;
    }

    if(child_yang_name == "dynamic-eid")
    {
        auto ent_ = std::make_shared<Native::Router::LispList::Default::InstanceContainer::InstanceList::DynamicEid>();
        ent_->parent = this;
        dynamic_eid.append(ent_);
        return ent_;
    }

    if(child_yang_name == "loc-reach-algorithm")
    {
        if(loc_reach_algorithm == nullptr)
        {
            loc_reach_algorithm = std::make_shared<Native::Router::LispList::Default::InstanceContainer::InstanceList::LocReachAlgorithm>();
        }
        return loc_reach_algorithm;
    }

    if(child_yang_name == "map-server")
    {
        if(map_server == nullptr)
        {
            map_server = std::make_shared<Native::Router::LispList::Default::InstanceContainer::InstanceList::MapServer>();
        }
        return map_server;
    }

    if(child_yang_name == "other-xtr-probe")
    {
        if(other_xtr_probe == nullptr)
        {
            other_xtr_probe = std::make_shared<Native::Router::LispList::Default::InstanceContainer::InstanceList::OtherXtrProbe>();
        }
        return other_xtr_probe;
    }

    if(child_yang_name == "remote-rloc-probe")
    {
        if(remote_rloc_probe == nullptr)
        {
            remote_rloc_probe = std::make_shared<Native::Router::LispList::Default::InstanceContainer::InstanceList::RemoteRlocProbe>();
        }
        return remote_rloc_probe;
    }

    if(child_yang_name == "service")
    {
        if(service == nullptr)
        {
            service = std::make_shared<Native::Router::LispList::Default::InstanceContainer::InstanceList::Service>();
        }
        return service;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Router::LispList::Default::InstanceContainer::InstanceList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(default_ != nullptr)
    {
        _children["default"] = default_;
    }

    if(decapsulation != nullptr)
    {
        _children["decapsulation"] = decapsulation;
    }

    count_ = 0;
    for (auto ent_ : dynamic_eid.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    if(loc_reach_algorithm != nullptr)
    {
        _children["loc-reach-algorithm"] = loc_reach_algorithm;
    }

    if(map_server != nullptr)
    {
        _children["map-server"] = map_server;
    }

    if(other_xtr_probe != nullptr)
    {
        _children["other-xtr-probe"] = other_xtr_probe;
    }

    if(remote_rloc_probe != nullptr)
    {
        _children["remote-rloc-probe"] = remote_rloc_probe;
    }

    if(service != nullptr)
    {
        _children["service"] = service;
    }

    return _children;
}

void Native::Router::LispList::Default::InstanceContainer::InstanceList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "instance-id")
    {
        instance_id = value;
        instance_id.value_namespace = name_space;
        instance_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "disable-ttl-propagate")
    {
        disable_ttl_propagate = value;
        disable_ttl_propagate.value_namespace = name_space;
        disable_ttl_propagate.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::LispList::Default::InstanceContainer::InstanceList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "instance-id")
    {
        instance_id.yfilter = yfilter;
    }
    if(value_path == "disable-ttl-propagate")
    {
        disable_ttl_propagate.yfilter = yfilter;
    }
}

bool Native::Router::LispList::Default::InstanceContainer::InstanceList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "default" || name == "decapsulation" || name == "dynamic-eid" || name == "loc-reach-algorithm" || name == "map-server" || name == "other-xtr-probe" || name == "remote-rloc-probe" || name == "service" || name == "instance-id" || name == "disable-ttl-propagate")
        return true;
    return false;
}

Native::Router::LispList::Default::InstanceContainer::InstanceList::Default_::Default_()
    :
    disable_ttl_propagate{YType::empty, "disable-ttl-propagate"}
        ,
    decapsulation(std::make_shared<Native::Router::LispList::Default::InstanceContainer::InstanceList::Default_::Decapsulation>())
    , dynamic_eid(this, {"name"})
    , loc_reach_algorithm(std::make_shared<Native::Router::LispList::Default::InstanceContainer::InstanceList::Default_::LocReachAlgorithm>())
    , map_server(std::make_shared<Native::Router::LispList::Default::InstanceContainer::InstanceList::Default_::MapServer>())
    , other_xtr_probe(std::make_shared<Native::Router::LispList::Default::InstanceContainer::InstanceList::Default_::OtherXtrProbe>())
    , remote_rloc_probe(std::make_shared<Native::Router::LispList::Default::InstanceContainer::InstanceList::Default_::RemoteRlocProbe>())
    , service(nullptr) // presence node
{
    decapsulation->parent = this;
    loc_reach_algorithm->parent = this;
    map_server->parent = this;
    other_xtr_probe->parent = this;
    remote_rloc_probe->parent = this;

    yang_name = "default"; yang_parent_name = "instance-list"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Router::LispList::Default::InstanceContainer::InstanceList::Default_::~Default_()
{
}

bool Native::Router::LispList::Default::InstanceContainer::InstanceList::Default_::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<dynamic_eid.len(); index++)
    {
        if(dynamic_eid[index]->has_data())
            return true;
    }
    return disable_ttl_propagate.is_set
	|| (decapsulation !=  nullptr && decapsulation->has_data())
	|| (loc_reach_algorithm !=  nullptr && loc_reach_algorithm->has_data())
	|| (map_server !=  nullptr && map_server->has_data())
	|| (other_xtr_probe !=  nullptr && other_xtr_probe->has_data())
	|| (remote_rloc_probe !=  nullptr && remote_rloc_probe->has_data())
	|| (service !=  nullptr && service->has_data());
}

bool Native::Router::LispList::Default::InstanceContainer::InstanceList::Default_::has_operation() const
{
    for (std::size_t index=0; index<dynamic_eid.len(); index++)
    {
        if(dynamic_eid[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(disable_ttl_propagate.yfilter)
	|| (decapsulation !=  nullptr && decapsulation->has_operation())
	|| (loc_reach_algorithm !=  nullptr && loc_reach_algorithm->has_operation())
	|| (map_server !=  nullptr && map_server->has_operation())
	|| (other_xtr_probe !=  nullptr && other_xtr_probe->has_operation())
	|| (remote_rloc_probe !=  nullptr && remote_rloc_probe->has_operation())
	|| (service !=  nullptr && service->has_operation());
}

std::string Native::Router::LispList::Default::InstanceContainer::InstanceList::Default_::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "default";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::LispList::Default::InstanceContainer::InstanceList::Default_::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (disable_ttl_propagate.is_set || is_set(disable_ttl_propagate.yfilter)) leaf_name_data.push_back(disable_ttl_propagate.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Router::LispList::Default::InstanceContainer::InstanceList::Default_::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "decapsulation")
    {
        if(decapsulation == nullptr)
        {
            decapsulation = std::make_shared<Native::Router::LispList::Default::InstanceContainer::InstanceList::Default_::Decapsulation>();
        }
        return decapsulation;
    }

    if(child_yang_name == "dynamic-eid")
    {
        auto ent_ = std::make_shared<Native::Router::LispList::Default::InstanceContainer::InstanceList::Default_::DynamicEid>();
        ent_->parent = this;
        dynamic_eid.append(ent_);
        return ent_;
    }

    if(child_yang_name == "loc-reach-algorithm")
    {
        if(loc_reach_algorithm == nullptr)
        {
            loc_reach_algorithm = std::make_shared<Native::Router::LispList::Default::InstanceContainer::InstanceList::Default_::LocReachAlgorithm>();
        }
        return loc_reach_algorithm;
    }

    if(child_yang_name == "map-server")
    {
        if(map_server == nullptr)
        {
            map_server = std::make_shared<Native::Router::LispList::Default::InstanceContainer::InstanceList::Default_::MapServer>();
        }
        return map_server;
    }

    if(child_yang_name == "other-xtr-probe")
    {
        if(other_xtr_probe == nullptr)
        {
            other_xtr_probe = std::make_shared<Native::Router::LispList::Default::InstanceContainer::InstanceList::Default_::OtherXtrProbe>();
        }
        return other_xtr_probe;
    }

    if(child_yang_name == "remote-rloc-probe")
    {
        if(remote_rloc_probe == nullptr)
        {
            remote_rloc_probe = std::make_shared<Native::Router::LispList::Default::InstanceContainer::InstanceList::Default_::RemoteRlocProbe>();
        }
        return remote_rloc_probe;
    }

    if(child_yang_name == "service")
    {
        if(service == nullptr)
        {
            service = std::make_shared<Native::Router::LispList::Default::InstanceContainer::InstanceList::Default_::Service>();
        }
        return service;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Router::LispList::Default::InstanceContainer::InstanceList::Default_::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(decapsulation != nullptr)
    {
        _children["decapsulation"] = decapsulation;
    }

    count_ = 0;
    for (auto ent_ : dynamic_eid.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    if(loc_reach_algorithm != nullptr)
    {
        _children["loc-reach-algorithm"] = loc_reach_algorithm;
    }

    if(map_server != nullptr)
    {
        _children["map-server"] = map_server;
    }

    if(other_xtr_probe != nullptr)
    {
        _children["other-xtr-probe"] = other_xtr_probe;
    }

    if(remote_rloc_probe != nullptr)
    {
        _children["remote-rloc-probe"] = remote_rloc_probe;
    }

    if(service != nullptr)
    {
        _children["service"] = service;
    }

    return _children;
}

void Native::Router::LispList::Default::InstanceContainer::InstanceList::Default_::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "disable-ttl-propagate")
    {
        disable_ttl_propagate = value;
        disable_ttl_propagate.value_namespace = name_space;
        disable_ttl_propagate.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::LispList::Default::InstanceContainer::InstanceList::Default_::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "disable-ttl-propagate")
    {
        disable_ttl_propagate.yfilter = yfilter;
    }
}

bool Native::Router::LispList::Default::InstanceContainer::InstanceList::Default_::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "decapsulation" || name == "dynamic-eid" || name == "loc-reach-algorithm" || name == "map-server" || name == "other-xtr-probe" || name == "remote-rloc-probe" || name == "service" || name == "disable-ttl-propagate")
        return true;
    return false;
}

Native::Router::LispList::Default::InstanceContainer::InstanceList::Default_::Decapsulation::Decapsulation()
    :
    filter(std::make_shared<Native::Router::LispList::Default::InstanceContainer::InstanceList::Default_::Decapsulation::Filter>())
{
    filter->parent = this;

    yang_name = "decapsulation"; yang_parent_name = "default"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Router::LispList::Default::InstanceContainer::InstanceList::Default_::Decapsulation::~Decapsulation()
{
}

bool Native::Router::LispList::Default::InstanceContainer::InstanceList::Default_::Decapsulation::has_data() const
{
    if (is_presence_container) return true;
    return (filter !=  nullptr && filter->has_data());
}

bool Native::Router::LispList::Default::InstanceContainer::InstanceList::Default_::Decapsulation::has_operation() const
{
    return is_set(yfilter)
	|| (filter !=  nullptr && filter->has_operation());
}

std::string Native::Router::LispList::Default::InstanceContainer::InstanceList::Default_::Decapsulation::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "decapsulation";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::LispList::Default::InstanceContainer::InstanceList::Default_::Decapsulation::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Router::LispList::Default::InstanceContainer::InstanceList::Default_::Decapsulation::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "filter")
    {
        if(filter == nullptr)
        {
            filter = std::make_shared<Native::Router::LispList::Default::InstanceContainer::InstanceList::Default_::Decapsulation::Filter>();
        }
        return filter;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Router::LispList::Default::InstanceContainer::InstanceList::Default_::Decapsulation::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(filter != nullptr)
    {
        _children["filter"] = filter;
    }

    return _children;
}

void Native::Router::LispList::Default::InstanceContainer::InstanceList::Default_::Decapsulation::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Router::LispList::Default::InstanceContainer::InstanceList::Default_::Decapsulation::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Router::LispList::Default::InstanceContainer::InstanceList::Default_::Decapsulation::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "filter")
        return true;
    return false;
}

Native::Router::LispList::Default::InstanceContainer::InstanceList::Default_::Decapsulation::Filter::Filter()
    :
    rloc(std::make_shared<Native::Router::LispList::Default::InstanceContainer::InstanceList::Default_::Decapsulation::Filter::Rloc>())
{
    rloc->parent = this;

    yang_name = "filter"; yang_parent_name = "decapsulation"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Router::LispList::Default::InstanceContainer::InstanceList::Default_::Decapsulation::Filter::~Filter()
{
}

bool Native::Router::LispList::Default::InstanceContainer::InstanceList::Default_::Decapsulation::Filter::has_data() const
{
    if (is_presence_container) return true;
    return (rloc !=  nullptr && rloc->has_data());
}

bool Native::Router::LispList::Default::InstanceContainer::InstanceList::Default_::Decapsulation::Filter::has_operation() const
{
    return is_set(yfilter)
	|| (rloc !=  nullptr && rloc->has_operation());
}

std::string Native::Router::LispList::Default::InstanceContainer::InstanceList::Default_::Decapsulation::Filter::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "filter";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::LispList::Default::InstanceContainer::InstanceList::Default_::Decapsulation::Filter::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Router::LispList::Default::InstanceContainer::InstanceList::Default_::Decapsulation::Filter::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "rloc")
    {
        if(rloc == nullptr)
        {
            rloc = std::make_shared<Native::Router::LispList::Default::InstanceContainer::InstanceList::Default_::Decapsulation::Filter::Rloc>();
        }
        return rloc;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Router::LispList::Default::InstanceContainer::InstanceList::Default_::Decapsulation::Filter::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(rloc != nullptr)
    {
        _children["rloc"] = rloc;
    }

    return _children;
}

void Native::Router::LispList::Default::InstanceContainer::InstanceList::Default_::Decapsulation::Filter::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Router::LispList::Default::InstanceContainer::InstanceList::Default_::Decapsulation::Filter::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Router::LispList::Default::InstanceContainer::InstanceList::Default_::Decapsulation::Filter::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "rloc")
        return true;
    return false;
}

Native::Router::LispList::Default::InstanceContainer::InstanceList::Default_::Decapsulation::Filter::Rloc::Rloc()
    :
    source(std::make_shared<Native::Router::LispList::Default::InstanceContainer::InstanceList::Default_::Decapsulation::Filter::Rloc::Source>())
{
    source->parent = this;

    yang_name = "rloc"; yang_parent_name = "filter"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Router::LispList::Default::InstanceContainer::InstanceList::Default_::Decapsulation::Filter::Rloc::~Rloc()
{
}

bool Native::Router::LispList::Default::InstanceContainer::InstanceList::Default_::Decapsulation::Filter::Rloc::has_data() const
{
    if (is_presence_container) return true;
    return (source !=  nullptr && source->has_data());
}

bool Native::Router::LispList::Default::InstanceContainer::InstanceList::Default_::Decapsulation::Filter::Rloc::has_operation() const
{
    return is_set(yfilter)
	|| (source !=  nullptr && source->has_operation());
}

std::string Native::Router::LispList::Default::InstanceContainer::InstanceList::Default_::Decapsulation::Filter::Rloc::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rloc";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::LispList::Default::InstanceContainer::InstanceList::Default_::Decapsulation::Filter::Rloc::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Router::LispList::Default::InstanceContainer::InstanceList::Default_::Decapsulation::Filter::Rloc::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "source")
    {
        if(source == nullptr)
        {
            source = std::make_shared<Native::Router::LispList::Default::InstanceContainer::InstanceList::Default_::Decapsulation::Filter::Rloc::Source>();
        }
        return source;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Router::LispList::Default::InstanceContainer::InstanceList::Default_::Decapsulation::Filter::Rloc::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(source != nullptr)
    {
        _children["source"] = source;
    }

    return _children;
}

void Native::Router::LispList::Default::InstanceContainer::InstanceList::Default_::Decapsulation::Filter::Rloc::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Router::LispList::Default::InstanceContainer::InstanceList::Default_::Decapsulation::Filter::Rloc::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Router::LispList::Default::InstanceContainer::InstanceList::Default_::Decapsulation::Filter::Rloc::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "source")
        return true;
    return false;
}

Native::Router::LispList::Default::InstanceContainer::InstanceList::Default_::Decapsulation::Filter::Rloc::Source::Source()
    :
    locator_set{YType::str, "locator-set"},
    member{YType::empty, "member"}
{

    yang_name = "source"; yang_parent_name = "rloc"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Router::LispList::Default::InstanceContainer::InstanceList::Default_::Decapsulation::Filter::Rloc::Source::~Source()
{
}

bool Native::Router::LispList::Default::InstanceContainer::InstanceList::Default_::Decapsulation::Filter::Rloc::Source::has_data() const
{
    if (is_presence_container) return true;
    return locator_set.is_set
	|| member.is_set;
}

bool Native::Router::LispList::Default::InstanceContainer::InstanceList::Default_::Decapsulation::Filter::Rloc::Source::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(locator_set.yfilter)
	|| ydk::is_set(member.yfilter);
}

std::string Native::Router::LispList::Default::InstanceContainer::InstanceList::Default_::Decapsulation::Filter::Rloc::Source::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "source";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::LispList::Default::InstanceContainer::InstanceList::Default_::Decapsulation::Filter::Rloc::Source::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (locator_set.is_set || is_set(locator_set.yfilter)) leaf_name_data.push_back(locator_set.get_name_leafdata());
    if (member.is_set || is_set(member.yfilter)) leaf_name_data.push_back(member.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Router::LispList::Default::InstanceContainer::InstanceList::Default_::Decapsulation::Filter::Rloc::Source::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Router::LispList::Default::InstanceContainer::InstanceList::Default_::Decapsulation::Filter::Rloc::Source::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Router::LispList::Default::InstanceContainer::InstanceList::Default_::Decapsulation::Filter::Rloc::Source::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "locator-set")
    {
        locator_set = value;
        locator_set.value_namespace = name_space;
        locator_set.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "member")
    {
        member = value;
        member.value_namespace = name_space;
        member.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::LispList::Default::InstanceContainer::InstanceList::Default_::Decapsulation::Filter::Rloc::Source::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "locator-set")
    {
        locator_set.yfilter = yfilter;
    }
    if(value_path == "member")
    {
        member.yfilter = yfilter;
    }
}

bool Native::Router::LispList::Default::InstanceContainer::InstanceList::Default_::Decapsulation::Filter::Rloc::Source::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "locator-set" || name == "member")
        return true;
    return false;
}

Native::Router::LispList::Default::InstanceContainer::InstanceList::Default_::DynamicEid::DynamicEid()
    :
    name{YType::str, "name"},
    map_notify_group{YType::str, "map-notify-group"}
        ,
    database_mapping(std::make_shared<Native::Router::LispList::Default::InstanceContainer::InstanceList::Default_::DynamicEid::DatabaseMapping>())
    , eid_notify(std::make_shared<Native::Router::LispList::Default::InstanceContainer::InstanceList::Default_::DynamicEid::EidNotify>())
    , map_server(this, {"ip_addr"})
{
    database_mapping->parent = this;
    eid_notify->parent = this;

    yang_name = "dynamic-eid"; yang_parent_name = "default"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Router::LispList::Default::InstanceContainer::InstanceList::Default_::DynamicEid::~DynamicEid()
{
}

bool Native::Router::LispList::Default::InstanceContainer::InstanceList::Default_::DynamicEid::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<map_server.len(); index++)
    {
        if(map_server[index]->has_data())
            return true;
    }
    return name.is_set
	|| map_notify_group.is_set
	|| (database_mapping !=  nullptr && database_mapping->has_data())
	|| (eid_notify !=  nullptr && eid_notify->has_data());
}

bool Native::Router::LispList::Default::InstanceContainer::InstanceList::Default_::DynamicEid::has_operation() const
{
    for (std::size_t index=0; index<map_server.len(); index++)
    {
        if(map_server[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(map_notify_group.yfilter)
	|| (database_mapping !=  nullptr && database_mapping->has_operation())
	|| (eid_notify !=  nullptr && eid_notify->has_operation());
}

std::string Native::Router::LispList::Default::InstanceContainer::InstanceList::Default_::DynamicEid::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "dynamic-eid";
    ADD_KEY_TOKEN(name, "name");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::LispList::Default::InstanceContainer::InstanceList::Default_::DynamicEid::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (map_notify_group.is_set || is_set(map_notify_group.yfilter)) leaf_name_data.push_back(map_notify_group.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Router::LispList::Default::InstanceContainer::InstanceList::Default_::DynamicEid::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "database-mapping")
    {
        if(database_mapping == nullptr)
        {
            database_mapping = std::make_shared<Native::Router::LispList::Default::InstanceContainer::InstanceList::Default_::DynamicEid::DatabaseMapping>();
        }
        return database_mapping;
    }

    if(child_yang_name == "eid-notify")
    {
        if(eid_notify == nullptr)
        {
            eid_notify = std::make_shared<Native::Router::LispList::Default::InstanceContainer::InstanceList::Default_::DynamicEid::EidNotify>();
        }
        return eid_notify;
    }

    if(child_yang_name == "map-server")
    {
        auto ent_ = std::make_shared<Native::Router::LispList::Default::InstanceContainer::InstanceList::Default_::DynamicEid::MapServer>();
        ent_->parent = this;
        map_server.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Router::LispList::Default::InstanceContainer::InstanceList::Default_::DynamicEid::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(database_mapping != nullptr)
    {
        _children["database-mapping"] = database_mapping;
    }

    if(eid_notify != nullptr)
    {
        _children["eid-notify"] = eid_notify;
    }

    count_ = 0;
    for (auto ent_ : map_server.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Native::Router::LispList::Default::InstanceContainer::InstanceList::Default_::DynamicEid::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "map-notify-group")
    {
        map_notify_group = value;
        map_notify_group.value_namespace = name_space;
        map_notify_group.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::LispList::Default::InstanceContainer::InstanceList::Default_::DynamicEid::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "map-notify-group")
    {
        map_notify_group.yfilter = yfilter;
    }
}

bool Native::Router::LispList::Default::InstanceContainer::InstanceList::Default_::DynamicEid::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "database-mapping" || name == "eid-notify" || name == "map-server" || name == "name" || name == "map-notify-group")
        return true;
    return false;
}

Native::Router::LispList::Default::InstanceContainer::InstanceList::Default_::DynamicEid::DatabaseMapping::DatabaseMapping()
    :
    ipv4_prefix(this, {"eid_prefix"})
{

    yang_name = "database-mapping"; yang_parent_name = "dynamic-eid"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Router::LispList::Default::InstanceContainer::InstanceList::Default_::DynamicEid::DatabaseMapping::~DatabaseMapping()
{
}

bool Native::Router::LispList::Default::InstanceContainer::InstanceList::Default_::DynamicEid::DatabaseMapping::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<ipv4_prefix.len(); index++)
    {
        if(ipv4_prefix[index]->has_data())
            return true;
    }
    return false;
}

bool Native::Router::LispList::Default::InstanceContainer::InstanceList::Default_::DynamicEid::DatabaseMapping::has_operation() const
{
    for (std::size_t index=0; index<ipv4_prefix.len(); index++)
    {
        if(ipv4_prefix[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Native::Router::LispList::Default::InstanceContainer::InstanceList::Default_::DynamicEid::DatabaseMapping::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "database-mapping";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::LispList::Default::InstanceContainer::InstanceList::Default_::DynamicEid::DatabaseMapping::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Router::LispList::Default::InstanceContainer::InstanceList::Default_::DynamicEid::DatabaseMapping::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ipv4-prefix")
    {
        auto ent_ = std::make_shared<Native::Router::LispList::Default::InstanceContainer::InstanceList::Default_::DynamicEid::DatabaseMapping::Ipv4Prefix>();
        ent_->parent = this;
        ipv4_prefix.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Router::LispList::Default::InstanceContainer::InstanceList::Default_::DynamicEid::DatabaseMapping::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : ipv4_prefix.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Native::Router::LispList::Default::InstanceContainer::InstanceList::Default_::DynamicEid::DatabaseMapping::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Router::LispList::Default::InstanceContainer::InstanceList::Default_::DynamicEid::DatabaseMapping::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Router::LispList::Default::InstanceContainer::InstanceList::Default_::DynamicEid::DatabaseMapping::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ipv4-prefix")
        return true;
    return false;
}

Native::Router::LispList::Default::InstanceContainer::InstanceList::Default_::DynamicEid::DatabaseMapping::Ipv4Prefix::Ipv4Prefix()
    :
    eid_prefix{YType::str, "eid-prefix"},
    locator_set{YType::str, "locator-set"}
{

    yang_name = "ipv4-prefix"; yang_parent_name = "database-mapping"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Router::LispList::Default::InstanceContainer::InstanceList::Default_::DynamicEid::DatabaseMapping::Ipv4Prefix::~Ipv4Prefix()
{
}

bool Native::Router::LispList::Default::InstanceContainer::InstanceList::Default_::DynamicEid::DatabaseMapping::Ipv4Prefix::has_data() const
{
    if (is_presence_container) return true;
    return eid_prefix.is_set
	|| locator_set.is_set;
}

bool Native::Router::LispList::Default::InstanceContainer::InstanceList::Default_::DynamicEid::DatabaseMapping::Ipv4Prefix::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(eid_prefix.yfilter)
	|| ydk::is_set(locator_set.yfilter);
}

std::string Native::Router::LispList::Default::InstanceContainer::InstanceList::Default_::DynamicEid::DatabaseMapping::Ipv4Prefix::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv4-prefix";
    ADD_KEY_TOKEN(eid_prefix, "eid-prefix");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::LispList::Default::InstanceContainer::InstanceList::Default_::DynamicEid::DatabaseMapping::Ipv4Prefix::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (eid_prefix.is_set || is_set(eid_prefix.yfilter)) leaf_name_data.push_back(eid_prefix.get_name_leafdata());
    if (locator_set.is_set || is_set(locator_set.yfilter)) leaf_name_data.push_back(locator_set.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Router::LispList::Default::InstanceContainer::InstanceList::Default_::DynamicEid::DatabaseMapping::Ipv4Prefix::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Router::LispList::Default::InstanceContainer::InstanceList::Default_::DynamicEid::DatabaseMapping::Ipv4Prefix::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Router::LispList::Default::InstanceContainer::InstanceList::Default_::DynamicEid::DatabaseMapping::Ipv4Prefix::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "eid-prefix")
    {
        eid_prefix = value;
        eid_prefix.value_namespace = name_space;
        eid_prefix.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "locator-set")
    {
        locator_set = value;
        locator_set.value_namespace = name_space;
        locator_set.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::LispList::Default::InstanceContainer::InstanceList::Default_::DynamicEid::DatabaseMapping::Ipv4Prefix::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "eid-prefix")
    {
        eid_prefix.yfilter = yfilter;
    }
    if(value_path == "locator-set")
    {
        locator_set.yfilter = yfilter;
    }
}

bool Native::Router::LispList::Default::InstanceContainer::InstanceList::Default_::DynamicEid::DatabaseMapping::Ipv4Prefix::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "eid-prefix" || name == "locator-set")
        return true;
    return false;
}

Native::Router::LispList::Default::InstanceContainer::InstanceList::Default_::DynamicEid::EidNotify::EidNotify()
    :
    authentication_key(std::make_shared<Native::Router::LispList::Default::InstanceContainer::InstanceList::Default_::DynamicEid::EidNotify::AuthenticationKey>())
    , gateway_key(this, {"gateway_ip"})
{
    authentication_key->parent = this;

    yang_name = "eid-notify"; yang_parent_name = "dynamic-eid"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Router::LispList::Default::InstanceContainer::InstanceList::Default_::DynamicEid::EidNotify::~EidNotify()
{
}

bool Native::Router::LispList::Default::InstanceContainer::InstanceList::Default_::DynamicEid::EidNotify::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<gateway_key.len(); index++)
    {
        if(gateway_key[index]->has_data())
            return true;
    }
    return (authentication_key !=  nullptr && authentication_key->has_data());
}

bool Native::Router::LispList::Default::InstanceContainer::InstanceList::Default_::DynamicEid::EidNotify::has_operation() const
{
    for (std::size_t index=0; index<gateway_key.len(); index++)
    {
        if(gateway_key[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| (authentication_key !=  nullptr && authentication_key->has_operation());
}

std::string Native::Router::LispList::Default::InstanceContainer::InstanceList::Default_::DynamicEid::EidNotify::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "eid-notify";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::LispList::Default::InstanceContainer::InstanceList::Default_::DynamicEid::EidNotify::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Router::LispList::Default::InstanceContainer::InstanceList::Default_::DynamicEid::EidNotify::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "authentication-key")
    {
        if(authentication_key == nullptr)
        {
            authentication_key = std::make_shared<Native::Router::LispList::Default::InstanceContainer::InstanceList::Default_::DynamicEid::EidNotify::AuthenticationKey>();
        }
        return authentication_key;
    }

    if(child_yang_name == "gateway-key")
    {
        auto ent_ = std::make_shared<Native::Router::LispList::Default::InstanceContainer::InstanceList::Default_::DynamicEid::EidNotify::GatewayKey>();
        ent_->parent = this;
        gateway_key.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Router::LispList::Default::InstanceContainer::InstanceList::Default_::DynamicEid::EidNotify::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(authentication_key != nullptr)
    {
        _children["authentication-key"] = authentication_key;
    }

    count_ = 0;
    for (auto ent_ : gateway_key.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Native::Router::LispList::Default::InstanceContainer::InstanceList::Default_::DynamicEid::EidNotify::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Router::LispList::Default::InstanceContainer::InstanceList::Default_::DynamicEid::EidNotify::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Router::LispList::Default::InstanceContainer::InstanceList::Default_::DynamicEid::EidNotify::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "authentication-key" || name == "gateway-key")
        return true;
    return false;
}

Native::Router::LispList::Default::InstanceContainer::InstanceList::Default_::DynamicEid::EidNotify::AuthenticationKey::AuthenticationKey()
    :
    unc_pwd{YType::str, "unc-pwd"},
    key_0{YType::str, "key-0"},
    key_6{YType::str, "key-6"},
    key_7{YType::str, "key-7"}
{

    yang_name = "authentication-key"; yang_parent_name = "eid-notify"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Router::LispList::Default::InstanceContainer::InstanceList::Default_::DynamicEid::EidNotify::AuthenticationKey::~AuthenticationKey()
{
}

bool Native::Router::LispList::Default::InstanceContainer::InstanceList::Default_::DynamicEid::EidNotify::AuthenticationKey::has_data() const
{
    if (is_presence_container) return true;
    return unc_pwd.is_set
	|| key_0.is_set
	|| key_6.is_set
	|| key_7.is_set;
}

bool Native::Router::LispList::Default::InstanceContainer::InstanceList::Default_::DynamicEid::EidNotify::AuthenticationKey::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(unc_pwd.yfilter)
	|| ydk::is_set(key_0.yfilter)
	|| ydk::is_set(key_6.yfilter)
	|| ydk::is_set(key_7.yfilter);
}

std::string Native::Router::LispList::Default::InstanceContainer::InstanceList::Default_::DynamicEid::EidNotify::AuthenticationKey::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "authentication-key";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::LispList::Default::InstanceContainer::InstanceList::Default_::DynamicEid::EidNotify::AuthenticationKey::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (unc_pwd.is_set || is_set(unc_pwd.yfilter)) leaf_name_data.push_back(unc_pwd.get_name_leafdata());
    if (key_0.is_set || is_set(key_0.yfilter)) leaf_name_data.push_back(key_0.get_name_leafdata());
    if (key_6.is_set || is_set(key_6.yfilter)) leaf_name_data.push_back(key_6.get_name_leafdata());
    if (key_7.is_set || is_set(key_7.yfilter)) leaf_name_data.push_back(key_7.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Router::LispList::Default::InstanceContainer::InstanceList::Default_::DynamicEid::EidNotify::AuthenticationKey::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Router::LispList::Default::InstanceContainer::InstanceList::Default_::DynamicEid::EidNotify::AuthenticationKey::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Router::LispList::Default::InstanceContainer::InstanceList::Default_::DynamicEid::EidNotify::AuthenticationKey::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "unc-pwd")
    {
        unc_pwd = value;
        unc_pwd.value_namespace = name_space;
        unc_pwd.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "key-0")
    {
        key_0 = value;
        key_0.value_namespace = name_space;
        key_0.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "key-6")
    {
        key_6 = value;
        key_6.value_namespace = name_space;
        key_6.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "key-7")
    {
        key_7 = value;
        key_7.value_namespace = name_space;
        key_7.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::LispList::Default::InstanceContainer::InstanceList::Default_::DynamicEid::EidNotify::AuthenticationKey::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "unc-pwd")
    {
        unc_pwd.yfilter = yfilter;
    }
    if(value_path == "key-0")
    {
        key_0.yfilter = yfilter;
    }
    if(value_path == "key-6")
    {
        key_6.yfilter = yfilter;
    }
    if(value_path == "key-7")
    {
        key_7.yfilter = yfilter;
    }
}

bool Native::Router::LispList::Default::InstanceContainer::InstanceList::Default_::DynamicEid::EidNotify::AuthenticationKey::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "unc-pwd" || name == "key-0" || name == "key-6" || name == "key-7")
        return true;
    return false;
}

Native::Router::LispList::Default::InstanceContainer::InstanceList::Default_::DynamicEid::EidNotify::GatewayKey::GatewayKey()
    :
    gateway_ip{YType::str, "gateway-ip"}
        ,
    key(std::make_shared<Native::Router::LispList::Default::InstanceContainer::InstanceList::Default_::DynamicEid::EidNotify::GatewayKey::Key>())
{
    key->parent = this;

    yang_name = "gateway-key"; yang_parent_name = "eid-notify"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Router::LispList::Default::InstanceContainer::InstanceList::Default_::DynamicEid::EidNotify::GatewayKey::~GatewayKey()
{
}

bool Native::Router::LispList::Default::InstanceContainer::InstanceList::Default_::DynamicEid::EidNotify::GatewayKey::has_data() const
{
    if (is_presence_container) return true;
    return gateway_ip.is_set
	|| (key !=  nullptr && key->has_data());
}

bool Native::Router::LispList::Default::InstanceContainer::InstanceList::Default_::DynamicEid::EidNotify::GatewayKey::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(gateway_ip.yfilter)
	|| (key !=  nullptr && key->has_operation());
}

std::string Native::Router::LispList::Default::InstanceContainer::InstanceList::Default_::DynamicEid::EidNotify::GatewayKey::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "gateway-key";
    ADD_KEY_TOKEN(gateway_ip, "gateway-ip");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::LispList::Default::InstanceContainer::InstanceList::Default_::DynamicEid::EidNotify::GatewayKey::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (gateway_ip.is_set || is_set(gateway_ip.yfilter)) leaf_name_data.push_back(gateway_ip.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Router::LispList::Default::InstanceContainer::InstanceList::Default_::DynamicEid::EidNotify::GatewayKey::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "key")
    {
        if(key == nullptr)
        {
            key = std::make_shared<Native::Router::LispList::Default::InstanceContainer::InstanceList::Default_::DynamicEid::EidNotify::GatewayKey::Key>();
        }
        return key;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Router::LispList::Default::InstanceContainer::InstanceList::Default_::DynamicEid::EidNotify::GatewayKey::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(key != nullptr)
    {
        _children["key"] = key;
    }

    return _children;
}

void Native::Router::LispList::Default::InstanceContainer::InstanceList::Default_::DynamicEid::EidNotify::GatewayKey::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "gateway-ip")
    {
        gateway_ip = value;
        gateway_ip.value_namespace = name_space;
        gateway_ip.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::LispList::Default::InstanceContainer::InstanceList::Default_::DynamicEid::EidNotify::GatewayKey::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "gateway-ip")
    {
        gateway_ip.yfilter = yfilter;
    }
}

bool Native::Router::LispList::Default::InstanceContainer::InstanceList::Default_::DynamicEid::EidNotify::GatewayKey::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "key" || name == "gateway-ip")
        return true;
    return false;
}

Native::Router::LispList::Default::InstanceContainer::InstanceList::Default_::DynamicEid::EidNotify::GatewayKey::Key::Key()
    :
    key_pwd(std::make_shared<Native::Router::LispList::Default::InstanceContainer::InstanceList::Default_::DynamicEid::EidNotify::GatewayKey::Key::KeyPwd>())
    , key_0(std::make_shared<Native::Router::LispList::Default::InstanceContainer::InstanceList::Default_::DynamicEid::EidNotify::GatewayKey::Key::Key0>())
    , key_6(std::make_shared<Native::Router::LispList::Default::InstanceContainer::InstanceList::Default_::DynamicEid::EidNotify::GatewayKey::Key::Key6>())
{
    key_pwd->parent = this;
    key_0->parent = this;
    key_6->parent = this;

    yang_name = "key"; yang_parent_name = "gateway-key"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Router::LispList::Default::InstanceContainer::InstanceList::Default_::DynamicEid::EidNotify::GatewayKey::Key::~Key()
{
}

bool Native::Router::LispList::Default::InstanceContainer::InstanceList::Default_::DynamicEid::EidNotify::GatewayKey::Key::has_data() const
{
    if (is_presence_container) return true;
    return (key_pwd !=  nullptr && key_pwd->has_data())
	|| (key_0 !=  nullptr && key_0->has_data())
	|| (key_6 !=  nullptr && key_6->has_data());
}

bool Native::Router::LispList::Default::InstanceContainer::InstanceList::Default_::DynamicEid::EidNotify::GatewayKey::Key::has_operation() const
{
    return is_set(yfilter)
	|| (key_pwd !=  nullptr && key_pwd->has_operation())
	|| (key_0 !=  nullptr && key_0->has_operation())
	|| (key_6 !=  nullptr && key_6->has_operation());
}

std::string Native::Router::LispList::Default::InstanceContainer::InstanceList::Default_::DynamicEid::EidNotify::GatewayKey::Key::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "key";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::LispList::Default::InstanceContainer::InstanceList::Default_::DynamicEid::EidNotify::GatewayKey::Key::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Router::LispList::Default::InstanceContainer::InstanceList::Default_::DynamicEid::EidNotify::GatewayKey::Key::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "key-pwd")
    {
        if(key_pwd == nullptr)
        {
            key_pwd = std::make_shared<Native::Router::LispList::Default::InstanceContainer::InstanceList::Default_::DynamicEid::EidNotify::GatewayKey::Key::KeyPwd>();
        }
        return key_pwd;
    }

    if(child_yang_name == "key-0")
    {
        if(key_0 == nullptr)
        {
            key_0 = std::make_shared<Native::Router::LispList::Default::InstanceContainer::InstanceList::Default_::DynamicEid::EidNotify::GatewayKey::Key::Key0>();
        }
        return key_0;
    }

    if(child_yang_name == "key-6")
    {
        if(key_6 == nullptr)
        {
            key_6 = std::make_shared<Native::Router::LispList::Default::InstanceContainer::InstanceList::Default_::DynamicEid::EidNotify::GatewayKey::Key::Key6>();
        }
        return key_6;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Router::LispList::Default::InstanceContainer::InstanceList::Default_::DynamicEid::EidNotify::GatewayKey::Key::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(key_pwd != nullptr)
    {
        _children["key-pwd"] = key_pwd;
    }

    if(key_0 != nullptr)
    {
        _children["key-0"] = key_0;
    }

    if(key_6 != nullptr)
    {
        _children["key-6"] = key_6;
    }

    return _children;
}

void Native::Router::LispList::Default::InstanceContainer::InstanceList::Default_::DynamicEid::EidNotify::GatewayKey::Key::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Router::LispList::Default::InstanceContainer::InstanceList::Default_::DynamicEid::EidNotify::GatewayKey::Key::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Router::LispList::Default::InstanceContainer::InstanceList::Default_::DynamicEid::EidNotify::GatewayKey::Key::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "key-pwd" || name == "key-0" || name == "key-6")
        return true;
    return false;
}

Native::Router::LispList::Default::InstanceContainer::InstanceList::Default_::DynamicEid::EidNotify::GatewayKey::Key::KeyPwd::KeyPwd()
    :
    unc_pwd{YType::str, "unc-pwd"},
    hash_function{YType::enumeration, "hash-function"}
{

    yang_name = "key-pwd"; yang_parent_name = "key"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Router::LispList::Default::InstanceContainer::InstanceList::Default_::DynamicEid::EidNotify::GatewayKey::Key::KeyPwd::~KeyPwd()
{
}

bool Native::Router::LispList::Default::InstanceContainer::InstanceList::Default_::DynamicEid::EidNotify::GatewayKey::Key::KeyPwd::has_data() const
{
    if (is_presence_container) return true;
    return unc_pwd.is_set
	|| hash_function.is_set;
}

bool Native::Router::LispList::Default::InstanceContainer::InstanceList::Default_::DynamicEid::EidNotify::GatewayKey::Key::KeyPwd::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(unc_pwd.yfilter)
	|| ydk::is_set(hash_function.yfilter);
}

std::string Native::Router::LispList::Default::InstanceContainer::InstanceList::Default_::DynamicEid::EidNotify::GatewayKey::Key::KeyPwd::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "key-pwd";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::LispList::Default::InstanceContainer::InstanceList::Default_::DynamicEid::EidNotify::GatewayKey::Key::KeyPwd::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (unc_pwd.is_set || is_set(unc_pwd.yfilter)) leaf_name_data.push_back(unc_pwd.get_name_leafdata());
    if (hash_function.is_set || is_set(hash_function.yfilter)) leaf_name_data.push_back(hash_function.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Router::LispList::Default::InstanceContainer::InstanceList::Default_::DynamicEid::EidNotify::GatewayKey::Key::KeyPwd::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Router::LispList::Default::InstanceContainer::InstanceList::Default_::DynamicEid::EidNotify::GatewayKey::Key::KeyPwd::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Router::LispList::Default::InstanceContainer::InstanceList::Default_::DynamicEid::EidNotify::GatewayKey::Key::KeyPwd::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "unc-pwd")
    {
        unc_pwd = value;
        unc_pwd.value_namespace = name_space;
        unc_pwd.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "hash-function")
    {
        hash_function = value;
        hash_function.value_namespace = name_space;
        hash_function.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::LispList::Default::InstanceContainer::InstanceList::Default_::DynamicEid::EidNotify::GatewayKey::Key::KeyPwd::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "unc-pwd")
    {
        unc_pwd.yfilter = yfilter;
    }
    if(value_path == "hash-function")
    {
        hash_function.yfilter = yfilter;
    }
}

bool Native::Router::LispList::Default::InstanceContainer::InstanceList::Default_::DynamicEid::EidNotify::GatewayKey::Key::KeyPwd::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "unc-pwd" || name == "hash-function")
        return true;
    return false;
}

Native::Router::LispList::Default::InstanceContainer::InstanceList::Default_::DynamicEid::EidNotify::GatewayKey::Key::Key0::Key0()
    :
    ak_0{YType::str, "ak-0"},
    hash_function{YType::enumeration, "hash-function"}
{

    yang_name = "key-0"; yang_parent_name = "key"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Router::LispList::Default::InstanceContainer::InstanceList::Default_::DynamicEid::EidNotify::GatewayKey::Key::Key0::~Key0()
{
}

bool Native::Router::LispList::Default::InstanceContainer::InstanceList::Default_::DynamicEid::EidNotify::GatewayKey::Key::Key0::has_data() const
{
    if (is_presence_container) return true;
    return ak_0.is_set
	|| hash_function.is_set;
}

bool Native::Router::LispList::Default::InstanceContainer::InstanceList::Default_::DynamicEid::EidNotify::GatewayKey::Key::Key0::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ak_0.yfilter)
	|| ydk::is_set(hash_function.yfilter);
}

std::string Native::Router::LispList::Default::InstanceContainer::InstanceList::Default_::DynamicEid::EidNotify::GatewayKey::Key::Key0::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "key-0";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::LispList::Default::InstanceContainer::InstanceList::Default_::DynamicEid::EidNotify::GatewayKey::Key::Key0::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ak_0.is_set || is_set(ak_0.yfilter)) leaf_name_data.push_back(ak_0.get_name_leafdata());
    if (hash_function.is_set || is_set(hash_function.yfilter)) leaf_name_data.push_back(hash_function.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Router::LispList::Default::InstanceContainer::InstanceList::Default_::DynamicEid::EidNotify::GatewayKey::Key::Key0::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Router::LispList::Default::InstanceContainer::InstanceList::Default_::DynamicEid::EidNotify::GatewayKey::Key::Key0::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Router::LispList::Default::InstanceContainer::InstanceList::Default_::DynamicEid::EidNotify::GatewayKey::Key::Key0::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ak-0")
    {
        ak_0 = value;
        ak_0.value_namespace = name_space;
        ak_0.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "hash-function")
    {
        hash_function = value;
        hash_function.value_namespace = name_space;
        hash_function.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::LispList::Default::InstanceContainer::InstanceList::Default_::DynamicEid::EidNotify::GatewayKey::Key::Key0::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ak-0")
    {
        ak_0.yfilter = yfilter;
    }
    if(value_path == "hash-function")
    {
        hash_function.yfilter = yfilter;
    }
}

bool Native::Router::LispList::Default::InstanceContainer::InstanceList::Default_::DynamicEid::EidNotify::GatewayKey::Key::Key0::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ak-0" || name == "hash-function")
        return true;
    return false;
}

Native::Router::LispList::Default::InstanceContainer::InstanceList::Default_::DynamicEid::EidNotify::GatewayKey::Key::Key6::Key6()
    :
    ak_6{YType::str, "ak-6"},
    hash_function{YType::enumeration, "hash-function"}
{

    yang_name = "key-6"; yang_parent_name = "key"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Router::LispList::Default::InstanceContainer::InstanceList::Default_::DynamicEid::EidNotify::GatewayKey::Key::Key6::~Key6()
{
}

bool Native::Router::LispList::Default::InstanceContainer::InstanceList::Default_::DynamicEid::EidNotify::GatewayKey::Key::Key6::has_data() const
{
    if (is_presence_container) return true;
    return ak_6.is_set
	|| hash_function.is_set;
}

bool Native::Router::LispList::Default::InstanceContainer::InstanceList::Default_::DynamicEid::EidNotify::GatewayKey::Key::Key6::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ak_6.yfilter)
	|| ydk::is_set(hash_function.yfilter);
}

std::string Native::Router::LispList::Default::InstanceContainer::InstanceList::Default_::DynamicEid::EidNotify::GatewayKey::Key::Key6::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "key-6";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::LispList::Default::InstanceContainer::InstanceList::Default_::DynamicEid::EidNotify::GatewayKey::Key::Key6::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ak_6.is_set || is_set(ak_6.yfilter)) leaf_name_data.push_back(ak_6.get_name_leafdata());
    if (hash_function.is_set || is_set(hash_function.yfilter)) leaf_name_data.push_back(hash_function.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Router::LispList::Default::InstanceContainer::InstanceList::Default_::DynamicEid::EidNotify::GatewayKey::Key::Key6::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Router::LispList::Default::InstanceContainer::InstanceList::Default_::DynamicEid::EidNotify::GatewayKey::Key::Key6::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Router::LispList::Default::InstanceContainer::InstanceList::Default_::DynamicEid::EidNotify::GatewayKey::Key::Key6::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ak-6")
    {
        ak_6 = value;
        ak_6.value_namespace = name_space;
        ak_6.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "hash-function")
    {
        hash_function = value;
        hash_function.value_namespace = name_space;
        hash_function.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::LispList::Default::InstanceContainer::InstanceList::Default_::DynamicEid::EidNotify::GatewayKey::Key::Key6::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ak-6")
    {
        ak_6.yfilter = yfilter;
    }
    if(value_path == "hash-function")
    {
        hash_function.yfilter = yfilter;
    }
}

bool Native::Router::LispList::Default::InstanceContainer::InstanceList::Default_::DynamicEid::EidNotify::GatewayKey::Key::Key6::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ak-6" || name == "hash-function")
        return true;
    return false;
}

Native::Router::LispList::Default::InstanceContainer::InstanceList::Default_::DynamicEid::MapServer::MapServer()
    :
    ip_addr{YType::str, "ip-addr"},
    proxy_reply{YType::empty, "proxy-reply"}
        ,
    key(std::make_shared<Native::Router::LispList::Default::InstanceContainer::InstanceList::Default_::DynamicEid::MapServer::Key>())
{
    key->parent = this;

    yang_name = "map-server"; yang_parent_name = "dynamic-eid"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Router::LispList::Default::InstanceContainer::InstanceList::Default_::DynamicEid::MapServer::~MapServer()
{
}

bool Native::Router::LispList::Default::InstanceContainer::InstanceList::Default_::DynamicEid::MapServer::has_data() const
{
    if (is_presence_container) return true;
    return ip_addr.is_set
	|| proxy_reply.is_set
	|| (key !=  nullptr && key->has_data());
}

bool Native::Router::LispList::Default::InstanceContainer::InstanceList::Default_::DynamicEid::MapServer::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ip_addr.yfilter)
	|| ydk::is_set(proxy_reply.yfilter)
	|| (key !=  nullptr && key->has_operation());
}

std::string Native::Router::LispList::Default::InstanceContainer::InstanceList::Default_::DynamicEid::MapServer::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "map-server";
    ADD_KEY_TOKEN(ip_addr, "ip-addr");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::LispList::Default::InstanceContainer::InstanceList::Default_::DynamicEid::MapServer::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ip_addr.is_set || is_set(ip_addr.yfilter)) leaf_name_data.push_back(ip_addr.get_name_leafdata());
    if (proxy_reply.is_set || is_set(proxy_reply.yfilter)) leaf_name_data.push_back(proxy_reply.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Router::LispList::Default::InstanceContainer::InstanceList::Default_::DynamicEid::MapServer::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "key")
    {
        if(key == nullptr)
        {
            key = std::make_shared<Native::Router::LispList::Default::InstanceContainer::InstanceList::Default_::DynamicEid::MapServer::Key>();
        }
        return key;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Router::LispList::Default::InstanceContainer::InstanceList::Default_::DynamicEid::MapServer::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(key != nullptr)
    {
        _children["key"] = key;
    }

    return _children;
}

void Native::Router::LispList::Default::InstanceContainer::InstanceList::Default_::DynamicEid::MapServer::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ip-addr")
    {
        ip_addr = value;
        ip_addr.value_namespace = name_space;
        ip_addr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "proxy-reply")
    {
        proxy_reply = value;
        proxy_reply.value_namespace = name_space;
        proxy_reply.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::LispList::Default::InstanceContainer::InstanceList::Default_::DynamicEid::MapServer::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ip-addr")
    {
        ip_addr.yfilter = yfilter;
    }
    if(value_path == "proxy-reply")
    {
        proxy_reply.yfilter = yfilter;
    }
}

bool Native::Router::LispList::Default::InstanceContainer::InstanceList::Default_::DynamicEid::MapServer::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "key" || name == "ip-addr" || name == "proxy-reply")
        return true;
    return false;
}

Native::Router::LispList::Default::InstanceContainer::InstanceList::Default_::DynamicEid::MapServer::Key::Key()
    :
    key_pwd(std::make_shared<Native::Router::LispList::Default::InstanceContainer::InstanceList::Default_::DynamicEid::MapServer::Key::KeyPwd>())
    , key_0(std::make_shared<Native::Router::LispList::Default::InstanceContainer::InstanceList::Default_::DynamicEid::MapServer::Key::Key0>())
    , key_6(std::make_shared<Native::Router::LispList::Default::InstanceContainer::InstanceList::Default_::DynamicEid::MapServer::Key::Key6>())
    , key_7(std::make_shared<Native::Router::LispList::Default::InstanceContainer::InstanceList::Default_::DynamicEid::MapServer::Key::Key7>())
{
    key_pwd->parent = this;
    key_0->parent = this;
    key_6->parent = this;
    key_7->parent = this;

    yang_name = "key"; yang_parent_name = "map-server"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Router::LispList::Default::InstanceContainer::InstanceList::Default_::DynamicEid::MapServer::Key::~Key()
{
}

bool Native::Router::LispList::Default::InstanceContainer::InstanceList::Default_::DynamicEid::MapServer::Key::has_data() const
{
    if (is_presence_container) return true;
    return (key_pwd !=  nullptr && key_pwd->has_data())
	|| (key_0 !=  nullptr && key_0->has_data())
	|| (key_6 !=  nullptr && key_6->has_data())
	|| (key_7 !=  nullptr && key_7->has_data());
}

bool Native::Router::LispList::Default::InstanceContainer::InstanceList::Default_::DynamicEid::MapServer::Key::has_operation() const
{
    return is_set(yfilter)
	|| (key_pwd !=  nullptr && key_pwd->has_operation())
	|| (key_0 !=  nullptr && key_0->has_operation())
	|| (key_6 !=  nullptr && key_6->has_operation())
	|| (key_7 !=  nullptr && key_7->has_operation());
}

std::string Native::Router::LispList::Default::InstanceContainer::InstanceList::Default_::DynamicEid::MapServer::Key::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "key";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::LispList::Default::InstanceContainer::InstanceList::Default_::DynamicEid::MapServer::Key::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Router::LispList::Default::InstanceContainer::InstanceList::Default_::DynamicEid::MapServer::Key::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "key-pwd")
    {
        if(key_pwd == nullptr)
        {
            key_pwd = std::make_shared<Native::Router::LispList::Default::InstanceContainer::InstanceList::Default_::DynamicEid::MapServer::Key::KeyPwd>();
        }
        return key_pwd;
    }

    if(child_yang_name == "key-0")
    {
        if(key_0 == nullptr)
        {
            key_0 = std::make_shared<Native::Router::LispList::Default::InstanceContainer::InstanceList::Default_::DynamicEid::MapServer::Key::Key0>();
        }
        return key_0;
    }

    if(child_yang_name == "key-6")
    {
        if(key_6 == nullptr)
        {
            key_6 = std::make_shared<Native::Router::LispList::Default::InstanceContainer::InstanceList::Default_::DynamicEid::MapServer::Key::Key6>();
        }
        return key_6;
    }

    if(child_yang_name == "key-7")
    {
        if(key_7 == nullptr)
        {
            key_7 = std::make_shared<Native::Router::LispList::Default::InstanceContainer::InstanceList::Default_::DynamicEid::MapServer::Key::Key7>();
        }
        return key_7;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Router::LispList::Default::InstanceContainer::InstanceList::Default_::DynamicEid::MapServer::Key::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(key_pwd != nullptr)
    {
        _children["key-pwd"] = key_pwd;
    }

    if(key_0 != nullptr)
    {
        _children["key-0"] = key_0;
    }

    if(key_6 != nullptr)
    {
        _children["key-6"] = key_6;
    }

    if(key_7 != nullptr)
    {
        _children["key-7"] = key_7;
    }

    return _children;
}

void Native::Router::LispList::Default::InstanceContainer::InstanceList::Default_::DynamicEid::MapServer::Key::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Router::LispList::Default::InstanceContainer::InstanceList::Default_::DynamicEid::MapServer::Key::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Router::LispList::Default::InstanceContainer::InstanceList::Default_::DynamicEid::MapServer::Key::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "key-pwd" || name == "key-0" || name == "key-6" || name == "key-7")
        return true;
    return false;
}

Native::Router::LispList::Default::InstanceContainer::InstanceList::Default_::DynamicEid::MapServer::Key::KeyPwd::KeyPwd()
    :
    unc_pwd{YType::str, "unc-pwd"},
    hash_function{YType::enumeration, "hash-function"},
    prefix_list{YType::str, "prefix-list"}
{

    yang_name = "key-pwd"; yang_parent_name = "key"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Router::LispList::Default::InstanceContainer::InstanceList::Default_::DynamicEid::MapServer::Key::KeyPwd::~KeyPwd()
{
}

bool Native::Router::LispList::Default::InstanceContainer::InstanceList::Default_::DynamicEid::MapServer::Key::KeyPwd::has_data() const
{
    if (is_presence_container) return true;
    return unc_pwd.is_set
	|| hash_function.is_set
	|| prefix_list.is_set;
}

bool Native::Router::LispList::Default::InstanceContainer::InstanceList::Default_::DynamicEid::MapServer::Key::KeyPwd::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(unc_pwd.yfilter)
	|| ydk::is_set(hash_function.yfilter)
	|| ydk::is_set(prefix_list.yfilter);
}

std::string Native::Router::LispList::Default::InstanceContainer::InstanceList::Default_::DynamicEid::MapServer::Key::KeyPwd::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "key-pwd";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::LispList::Default::InstanceContainer::InstanceList::Default_::DynamicEid::MapServer::Key::KeyPwd::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (unc_pwd.is_set || is_set(unc_pwd.yfilter)) leaf_name_data.push_back(unc_pwd.get_name_leafdata());
    if (hash_function.is_set || is_set(hash_function.yfilter)) leaf_name_data.push_back(hash_function.get_name_leafdata());
    if (prefix_list.is_set || is_set(prefix_list.yfilter)) leaf_name_data.push_back(prefix_list.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Router::LispList::Default::InstanceContainer::InstanceList::Default_::DynamicEid::MapServer::Key::KeyPwd::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Router::LispList::Default::InstanceContainer::InstanceList::Default_::DynamicEid::MapServer::Key::KeyPwd::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Router::LispList::Default::InstanceContainer::InstanceList::Default_::DynamicEid::MapServer::Key::KeyPwd::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "unc-pwd")
    {
        unc_pwd = value;
        unc_pwd.value_namespace = name_space;
        unc_pwd.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "hash-function")
    {
        hash_function = value;
        hash_function.value_namespace = name_space;
        hash_function.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "prefix-list")
    {
        prefix_list = value;
        prefix_list.value_namespace = name_space;
        prefix_list.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::LispList::Default::InstanceContainer::InstanceList::Default_::DynamicEid::MapServer::Key::KeyPwd::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "unc-pwd")
    {
        unc_pwd.yfilter = yfilter;
    }
    if(value_path == "hash-function")
    {
        hash_function.yfilter = yfilter;
    }
    if(value_path == "prefix-list")
    {
        prefix_list.yfilter = yfilter;
    }
}

bool Native::Router::LispList::Default::InstanceContainer::InstanceList::Default_::DynamicEid::MapServer::Key::KeyPwd::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "unc-pwd" || name == "hash-function" || name == "prefix-list")
        return true;
    return false;
}

Native::Router::LispList::Default::InstanceContainer::InstanceList::Default_::DynamicEid::MapServer::Key::Key0::Key0()
    :
    ak_0{YType::str, "ak-0"},
    hash_function{YType::enumeration, "hash-function"},
    prefix_list{YType::str, "prefix-list"}
{

    yang_name = "key-0"; yang_parent_name = "key"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Router::LispList::Default::InstanceContainer::InstanceList::Default_::DynamicEid::MapServer::Key::Key0::~Key0()
{
}

bool Native::Router::LispList::Default::InstanceContainer::InstanceList::Default_::DynamicEid::MapServer::Key::Key0::has_data() const
{
    if (is_presence_container) return true;
    return ak_0.is_set
	|| hash_function.is_set
	|| prefix_list.is_set;
}

bool Native::Router::LispList::Default::InstanceContainer::InstanceList::Default_::DynamicEid::MapServer::Key::Key0::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ak_0.yfilter)
	|| ydk::is_set(hash_function.yfilter)
	|| ydk::is_set(prefix_list.yfilter);
}

std::string Native::Router::LispList::Default::InstanceContainer::InstanceList::Default_::DynamicEid::MapServer::Key::Key0::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "key-0";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::LispList::Default::InstanceContainer::InstanceList::Default_::DynamicEid::MapServer::Key::Key0::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ak_0.is_set || is_set(ak_0.yfilter)) leaf_name_data.push_back(ak_0.get_name_leafdata());
    if (hash_function.is_set || is_set(hash_function.yfilter)) leaf_name_data.push_back(hash_function.get_name_leafdata());
    if (prefix_list.is_set || is_set(prefix_list.yfilter)) leaf_name_data.push_back(prefix_list.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Router::LispList::Default::InstanceContainer::InstanceList::Default_::DynamicEid::MapServer::Key::Key0::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Router::LispList::Default::InstanceContainer::InstanceList::Default_::DynamicEid::MapServer::Key::Key0::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Router::LispList::Default::InstanceContainer::InstanceList::Default_::DynamicEid::MapServer::Key::Key0::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ak-0")
    {
        ak_0 = value;
        ak_0.value_namespace = name_space;
        ak_0.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "hash-function")
    {
        hash_function = value;
        hash_function.value_namespace = name_space;
        hash_function.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "prefix-list")
    {
        prefix_list = value;
        prefix_list.value_namespace = name_space;
        prefix_list.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::LispList::Default::InstanceContainer::InstanceList::Default_::DynamicEid::MapServer::Key::Key0::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ak-0")
    {
        ak_0.yfilter = yfilter;
    }
    if(value_path == "hash-function")
    {
        hash_function.yfilter = yfilter;
    }
    if(value_path == "prefix-list")
    {
        prefix_list.yfilter = yfilter;
    }
}

bool Native::Router::LispList::Default::InstanceContainer::InstanceList::Default_::DynamicEid::MapServer::Key::Key0::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ak-0" || name == "hash-function" || name == "prefix-list")
        return true;
    return false;
}

Native::Router::LispList::Default::InstanceContainer::InstanceList::Default_::DynamicEid::MapServer::Key::Key6::Key6()
    :
    ak_6{YType::str, "ak-6"},
    hash_function{YType::enumeration, "hash-function"},
    prefix_list{YType::str, "prefix-list"}
{

    yang_name = "key-6"; yang_parent_name = "key"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Router::LispList::Default::InstanceContainer::InstanceList::Default_::DynamicEid::MapServer::Key::Key6::~Key6()
{
}

bool Native::Router::LispList::Default::InstanceContainer::InstanceList::Default_::DynamicEid::MapServer::Key::Key6::has_data() const
{
    if (is_presence_container) return true;
    return ak_6.is_set
	|| hash_function.is_set
	|| prefix_list.is_set;
}

bool Native::Router::LispList::Default::InstanceContainer::InstanceList::Default_::DynamicEid::MapServer::Key::Key6::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ak_6.yfilter)
	|| ydk::is_set(hash_function.yfilter)
	|| ydk::is_set(prefix_list.yfilter);
}

std::string Native::Router::LispList::Default::InstanceContainer::InstanceList::Default_::DynamicEid::MapServer::Key::Key6::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "key-6";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::LispList::Default::InstanceContainer::InstanceList::Default_::DynamicEid::MapServer::Key::Key6::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ak_6.is_set || is_set(ak_6.yfilter)) leaf_name_data.push_back(ak_6.get_name_leafdata());
    if (hash_function.is_set || is_set(hash_function.yfilter)) leaf_name_data.push_back(hash_function.get_name_leafdata());
    if (prefix_list.is_set || is_set(prefix_list.yfilter)) leaf_name_data.push_back(prefix_list.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Router::LispList::Default::InstanceContainer::InstanceList::Default_::DynamicEid::MapServer::Key::Key6::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Router::LispList::Default::InstanceContainer::InstanceList::Default_::DynamicEid::MapServer::Key::Key6::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Router::LispList::Default::InstanceContainer::InstanceList::Default_::DynamicEid::MapServer::Key::Key6::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ak-6")
    {
        ak_6 = value;
        ak_6.value_namespace = name_space;
        ak_6.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "hash-function")
    {
        hash_function = value;
        hash_function.value_namespace = name_space;
        hash_function.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "prefix-list")
    {
        prefix_list = value;
        prefix_list.value_namespace = name_space;
        prefix_list.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::LispList::Default::InstanceContainer::InstanceList::Default_::DynamicEid::MapServer::Key::Key6::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ak-6")
    {
        ak_6.yfilter = yfilter;
    }
    if(value_path == "hash-function")
    {
        hash_function.yfilter = yfilter;
    }
    if(value_path == "prefix-list")
    {
        prefix_list.yfilter = yfilter;
    }
}

bool Native::Router::LispList::Default::InstanceContainer::InstanceList::Default_::DynamicEid::MapServer::Key::Key6::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ak-6" || name == "hash-function" || name == "prefix-list")
        return true;
    return false;
}

const Enum::YLeaf Native::Router::LispList::Default::Service::Ipv6::Etr::MapServer::Key::KeyPwd::HashFunction::sha1 {0, "sha1"};
const Enum::YLeaf Native::Router::LispList::Default::Service::Ipv6::Etr::MapServer::Key::KeyPwd::HashFunction::sha2 {1, "sha2"};

const Enum::YLeaf Native::Router::LispList::Default::Service::Ipv6::Etr::MapServer::Key::Key0::HashFunction::sha1 {0, "sha1"};
const Enum::YLeaf Native::Router::LispList::Default::Service::Ipv6::Etr::MapServer::Key::Key0::HashFunction::sha2 {1, "sha2"};

const Enum::YLeaf Native::Router::LispList::Default::Service::Ipv6::Etr::MapServer::Key::Key6::HashFunction::sha1 {0, "sha1"};
const Enum::YLeaf Native::Router::LispList::Default::Service::Ipv6::Etr::MapServer::Key::Key6::HashFunction::sha2 {1, "sha2"};

const Enum::YLeaf Native::Router::LispList::Default::Service::Ipv6::Etr::MapServer::Key::Key7::HashFunction::sha1 {0, "sha1"};
const Enum::YLeaf Native::Router::LispList::Default::Service::Ipv6::Etr::MapServer::Key::Key7::HashFunction::sha2 {1, "sha2"};

const Enum::YLeaf Native::Router::LispList::Default::Service::Ethernet::Default_::Etr::MapServer::Key::KeyPwd::HashFunction::sha1 {0, "sha1"};
const Enum::YLeaf Native::Router::LispList::Default::Service::Ethernet::Default_::Etr::MapServer::Key::KeyPwd::HashFunction::sha2 {1, "sha2"};

const Enum::YLeaf Native::Router::LispList::Default::Service::Ethernet::Default_::Etr::MapServer::Key::Key0::HashFunction::sha1 {0, "sha1"};
const Enum::YLeaf Native::Router::LispList::Default::Service::Ethernet::Default_::Etr::MapServer::Key::Key0::HashFunction::sha2 {1, "sha2"};

const Enum::YLeaf Native::Router::LispList::Default::Service::Ethernet::Default_::Etr::MapServer::Key::Key6::HashFunction::sha1 {0, "sha1"};
const Enum::YLeaf Native::Router::LispList::Default::Service::Ethernet::Default_::Etr::MapServer::Key::Key6::HashFunction::sha2 {1, "sha2"};

const Enum::YLeaf Native::Router::LispList::Default::Service::Ethernet::Default_::Etr::MapServer::Key::Key7::HashFunction::sha1 {0, "sha1"};
const Enum::YLeaf Native::Router::LispList::Default::Service::Ethernet::Default_::Etr::MapServer::Key::Key7::HashFunction::sha2 {1, "sha2"};

const Enum::YLeaf Native::Router::LispList::Default::Service::Ethernet::Etr::MapServer::Key::KeyPwd::HashFunction::sha1 {0, "sha1"};
const Enum::YLeaf Native::Router::LispList::Default::Service::Ethernet::Etr::MapServer::Key::KeyPwd::HashFunction::sha2 {1, "sha2"};

const Enum::YLeaf Native::Router::LispList::Default::Service::Ethernet::Etr::MapServer::Key::Key0::HashFunction::sha1 {0, "sha1"};
const Enum::YLeaf Native::Router::LispList::Default::Service::Ethernet::Etr::MapServer::Key::Key0::HashFunction::sha2 {1, "sha2"};

const Enum::YLeaf Native::Router::LispList::Default::Service::Ethernet::Etr::MapServer::Key::Key6::HashFunction::sha1 {0, "sha1"};
const Enum::YLeaf Native::Router::LispList::Default::Service::Ethernet::Etr::MapServer::Key::Key6::HashFunction::sha2 {1, "sha2"};

const Enum::YLeaf Native::Router::LispList::Default::Service::Ethernet::Etr::MapServer::Key::Key7::HashFunction::sha1 {0, "sha1"};
const Enum::YLeaf Native::Router::LispList::Default::Service::Ethernet::Etr::MapServer::Key::Key7::HashFunction::sha2 {1, "sha2"};

const Enum::YLeaf Native::Router::LispList::Default::InstanceContainer::InstanceList::Default_::DynamicEid::EidNotify::GatewayKey::Key::KeyPwd::HashFunction::sha1 {0, "sha1"};
const Enum::YLeaf Native::Router::LispList::Default::InstanceContainer::InstanceList::Default_::DynamicEid::EidNotify::GatewayKey::Key::KeyPwd::HashFunction::sha2 {1, "sha2"};

const Enum::YLeaf Native::Router::LispList::Default::InstanceContainer::InstanceList::Default_::DynamicEid::EidNotify::GatewayKey::Key::Key0::HashFunction::sha1 {0, "sha1"};
const Enum::YLeaf Native::Router::LispList::Default::InstanceContainer::InstanceList::Default_::DynamicEid::EidNotify::GatewayKey::Key::Key0::HashFunction::sha2 {1, "sha2"};

const Enum::YLeaf Native::Router::LispList::Default::InstanceContainer::InstanceList::Default_::DynamicEid::EidNotify::GatewayKey::Key::Key6::HashFunction::sha1 {0, "sha1"};
const Enum::YLeaf Native::Router::LispList::Default::InstanceContainer::InstanceList::Default_::DynamicEid::EidNotify::GatewayKey::Key::Key6::HashFunction::sha2 {1, "sha2"};

const Enum::YLeaf Native::Router::LispList::Default::InstanceContainer::InstanceList::Default_::DynamicEid::MapServer::Key::KeyPwd::HashFunction::sha1 {0, "sha1"};
const Enum::YLeaf Native::Router::LispList::Default::InstanceContainer::InstanceList::Default_::DynamicEid::MapServer::Key::KeyPwd::HashFunction::sha2 {1, "sha2"};

const Enum::YLeaf Native::Router::LispList::Default::InstanceContainer::InstanceList::Default_::DynamicEid::MapServer::Key::Key0::HashFunction::sha1 {0, "sha1"};
const Enum::YLeaf Native::Router::LispList::Default::InstanceContainer::InstanceList::Default_::DynamicEid::MapServer::Key::Key0::HashFunction::sha2 {1, "sha2"};

const Enum::YLeaf Native::Router::LispList::Default::InstanceContainer::InstanceList::Default_::DynamicEid::MapServer::Key::Key6::HashFunction::sha1 {0, "sha1"};
const Enum::YLeaf Native::Router::LispList::Default::InstanceContainer::InstanceList::Default_::DynamicEid::MapServer::Key::Key6::HashFunction::sha2 {1, "sha2"};


}
}


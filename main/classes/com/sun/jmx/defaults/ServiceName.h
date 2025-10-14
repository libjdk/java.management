#ifndef _com_sun_jmx_defaults_ServiceName_h_
#define _com_sun_jmx_defaults_ServiceName_h_
//$ class com.sun.jmx.defaults.ServiceName
//$ extends java.lang.Object

#include <java/lang/Object.h>

#pragma push_macro("DELEGATE")
#undef DELEGATE
#pragma push_macro("DOMAIN")
#undef DOMAIN
#pragma push_macro("JMX_IMPL_NAME")
#undef JMX_IMPL_NAME
#pragma push_macro("JMX_IMPL_VENDOR")
#undef JMX_IMPL_VENDOR
#pragma push_macro("JMX_SPEC_NAME")
#undef JMX_SPEC_NAME
#pragma push_macro("JMX_SPEC_VENDOR")
#undef JMX_SPEC_VENDOR
#pragma push_macro("JMX_SPEC_VERSION")
#undef JMX_SPEC_VERSION
#pragma push_macro("MLET")
#undef MLET

namespace com {
	namespace sun {
		namespace jmx {
			namespace defaults {

class ServiceName : public ::java::lang::Object {
	$class(ServiceName, 0, ::java::lang::Object)
public:
	ServiceName();
	void init$();
	static $String* DELEGATE;
	static $String* MLET;
	static $String* DOMAIN;
	static $String* JMX_SPEC_NAME;
	static $String* JMX_SPEC_VERSION;
	static $String* JMX_SPEC_VENDOR;
	static $String* JMX_IMPL_NAME;
	static $String* JMX_IMPL_VENDOR;
};

			} // defaults
		} // jmx
	} // sun
} // com

#pragma pop_macro("DELEGATE")
#pragma pop_macro("DOMAIN")
#pragma pop_macro("JMX_IMPL_NAME")
#pragma pop_macro("JMX_IMPL_VENDOR")
#pragma pop_macro("JMX_SPEC_NAME")
#pragma pop_macro("JMX_SPEC_VENDOR")
#pragma pop_macro("JMX_SPEC_VERSION")
#pragma pop_macro("MLET")

#endif // _com_sun_jmx_defaults_ServiceName_h_
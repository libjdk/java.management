#ifndef _com_sun_jmx_defaults_JmxProperties_h_
#define _com_sun_jmx_defaults_JmxProperties_h_
//$ class com.sun.jmx.defaults.JmxProperties
//$ extends java.lang.Object

#include <java/lang/Object.h>

#pragma push_macro("JMX_IMPL_NAME")
#undef JMX_IMPL_NAME
#pragma push_macro("JMX_IMPL_VENDOR")
#undef JMX_IMPL_VENDOR
#pragma push_macro("JMX_IMPL_VERSION")
#undef JMX_IMPL_VERSION
#pragma push_macro("JMX_INITIAL_BUILDER")
#undef JMX_INITIAL_BUILDER
#pragma push_macro("JMX_SPEC_NAME")
#undef JMX_SPEC_NAME
#pragma push_macro("JMX_SPEC_VENDOR")
#undef JMX_SPEC_VENDOR
#pragma push_macro("JMX_SPEC_VERSION")
#undef JMX_SPEC_VERSION
#pragma push_macro("MBEANSERVER_LOGGER")
#undef MBEANSERVER_LOGGER
#pragma push_macro("MBEANSERVER_LOGGER_NAME")
#undef MBEANSERVER_LOGGER_NAME
#pragma push_macro("MISC_LOGGER")
#undef MISC_LOGGER
#pragma push_macro("MISC_LOGGER_NAME")
#undef MISC_LOGGER_NAME
#pragma push_macro("MLET_LIB_DIR")
#undef MLET_LIB_DIR
#pragma push_macro("MLET_LOGGER")
#undef MLET_LOGGER
#pragma push_macro("MLET_LOGGER_NAME")
#undef MLET_LOGGER_NAME
#pragma push_macro("MODELMBEAN_LOGGER")
#undef MODELMBEAN_LOGGER
#pragma push_macro("MODELMBEAN_LOGGER_NAME")
#undef MODELMBEAN_LOGGER_NAME
#pragma push_macro("MONITOR_LOGGER")
#undef MONITOR_LOGGER
#pragma push_macro("MONITOR_LOGGER_NAME")
#undef MONITOR_LOGGER_NAME
#pragma push_macro("NOTIFICATION_LOGGER")
#undef NOTIFICATION_LOGGER
#pragma push_macro("NOTIFICATION_LOGGER_NAME")
#undef NOTIFICATION_LOGGER_NAME
#pragma push_macro("RELATION_LOGGER")
#undef RELATION_LOGGER
#pragma push_macro("RELATION_LOGGER_NAME")
#undef RELATION_LOGGER_NAME
#pragma push_macro("TIMER_LOGGER")
#undef TIMER_LOGGER
#pragma push_macro("TIMER_LOGGER_NAME")
#undef TIMER_LOGGER_NAME

namespace java {
	namespace lang {
		class System$Logger;
	}
}

namespace com {
	namespace sun {
		namespace jmx {
			namespace defaults {

class JmxProperties : public ::java::lang::Object {
	$class(JmxProperties, 0, ::java::lang::Object)
public:
	JmxProperties();
	void init$();
	static $String* JMX_INITIAL_BUILDER;
	static $String* MLET_LIB_DIR;
	static $String* JMX_SPEC_NAME;
	static $String* JMX_SPEC_VERSION;
	static $String* JMX_SPEC_VENDOR;
	static $String* JMX_IMPL_NAME;
	static $String* JMX_IMPL_VENDOR;
	static $String* JMX_IMPL_VERSION;
	static $String* MBEANSERVER_LOGGER_NAME;
	static ::java::lang::System$Logger* MBEANSERVER_LOGGER;
	static $String* MLET_LOGGER_NAME;
	static ::java::lang::System$Logger* MLET_LOGGER;
	static $String* MONITOR_LOGGER_NAME;
	static ::java::lang::System$Logger* MONITOR_LOGGER;
	static $String* TIMER_LOGGER_NAME;
	static ::java::lang::System$Logger* TIMER_LOGGER;
	static $String* NOTIFICATION_LOGGER_NAME;
	static ::java::lang::System$Logger* NOTIFICATION_LOGGER;
	static $String* RELATION_LOGGER_NAME;
	static ::java::lang::System$Logger* RELATION_LOGGER;
	static $String* MODELMBEAN_LOGGER_NAME;
	static ::java::lang::System$Logger* MODELMBEAN_LOGGER;
	static $String* MISC_LOGGER_NAME;
	static ::java::lang::System$Logger* MISC_LOGGER;
};

			} // defaults
		} // jmx
	} // sun
} // com

#pragma pop_macro("JMX_IMPL_NAME")
#pragma pop_macro("JMX_IMPL_VENDOR")
#pragma pop_macro("JMX_IMPL_VERSION")
#pragma pop_macro("JMX_INITIAL_BUILDER")
#pragma pop_macro("JMX_SPEC_NAME")
#pragma pop_macro("JMX_SPEC_VENDOR")
#pragma pop_macro("JMX_SPEC_VERSION")
#pragma pop_macro("MBEANSERVER_LOGGER")
#pragma pop_macro("MBEANSERVER_LOGGER_NAME")
#pragma pop_macro("MISC_LOGGER")
#pragma pop_macro("MISC_LOGGER_NAME")
#pragma pop_macro("MLET_LIB_DIR")
#pragma pop_macro("MLET_LOGGER")
#pragma pop_macro("MLET_LOGGER_NAME")
#pragma pop_macro("MODELMBEAN_LOGGER")
#pragma pop_macro("MODELMBEAN_LOGGER_NAME")
#pragma pop_macro("MONITOR_LOGGER")
#pragma pop_macro("MONITOR_LOGGER_NAME")
#pragma pop_macro("NOTIFICATION_LOGGER")
#pragma pop_macro("NOTIFICATION_LOGGER_NAME")
#pragma pop_macro("RELATION_LOGGER")
#pragma pop_macro("RELATION_LOGGER_NAME")
#pragma pop_macro("TIMER_LOGGER")
#pragma pop_macro("TIMER_LOGGER_NAME")

#endif // _com_sun_jmx_defaults_JmxProperties_h_
#ifndef _com_sun_jmx_remote_util_EnvHelp_h_
#define _com_sun_jmx_remote_util_EnvHelp_h_
//$ class com.sun.jmx.remote.util.EnvHelp
//$ extends java.lang.Object

#include <javax/management/remote/JMXConnectorFactory.h>
#include <javax/management/remote/JMXConnectorServerFactory.h>

#pragma push_macro("BUFFER_SIZE_PROPERTY")
#undef BUFFER_SIZE_PROPERTY
#pragma push_macro("CLIENT_CONNECTION_CHECK_PERIOD")
#undef CLIENT_CONNECTION_CHECK_PERIOD
#pragma push_macro("DEFAULT_CLASS_LOADER")
#undef DEFAULT_CLASS_LOADER
#pragma push_macro("DEFAULT_CLASS_LOADER_NAME")
#undef DEFAULT_CLASS_LOADER_NAME
#pragma push_macro("DEFAULT_HIDDEN_ATTRIBUTES")
#undef DEFAULT_HIDDEN_ATTRIBUTES
#pragma push_macro("DEFAULT_ORB")
#undef DEFAULT_ORB
#pragma push_macro("FETCH_TIMEOUT")
#undef FETCH_TIMEOUT
#pragma push_macro("HIDDEN_ATTRIBUTES")
#undef HIDDEN_ATTRIBUTES
#pragma push_macro("JMX_SERVER_DAEMON")
#undef JMX_SERVER_DAEMON
#pragma push_macro("MAX_FETCH_NOTIFS")
#undef MAX_FETCH_NOTIFS
#pragma push_macro("NOTIF_ACCESS_CONTROLLER")
#undef NOTIF_ACCESS_CONTROLLER
#pragma push_macro("SERVER_CONNECTION_TIMEOUT")
#undef SERVER_CONNECTION_TIMEOUT

namespace com {
	namespace sun {
		namespace jmx {
			namespace remote {
				namespace security {
					class NotificationAccessController;
				}
			}
		}
	}
}
namespace com {
	namespace sun {
		namespace jmx {
			namespace remote {
				namespace util {
					class ClassLogger;
				}
			}
		}
	}
}
namespace java {
	namespace lang {
		class ClassLoader;
		class Throwable;
	}
}
namespace java {
	namespace util {
		class Collection;
		class Hashtable;
		class Map;
		class SortedMap;
		class SortedSet;
	}
}
namespace javax {
	namespace management {
		class MBeanServer;
	}
}

namespace com {
	namespace sun {
		namespace jmx {
			namespace remote {
				namespace util {

class $import EnvHelp : public ::java::lang::Object {
	$class(EnvHelp, 0, ::java::lang::Object)
public:
	EnvHelp();
	void init$();
	static void checkAttributes(::java::util::Map* attributes);
	static bool computeBooleanFromString($String* stringBoolean);
	static bool computeBooleanFromString($String* stringBoolean, bool defaultValue);
	static ::java::util::Map* filterAttributes(::java::util::Map* attributes);
	static $Throwable* getCause($Throwable* t);
	static int64_t getConnectionCheckPeriod(::java::util::Map* env);
	static int64_t getFetchTimeout(::java::util::Map* env);
	static int64_t getIntegerAttribute(::java::util::Map* env, $String* name, int64_t defaultValue, int64_t minValue, int64_t maxValue);
	static int32_t getMaxFetchNotifNumber(::java::util::Map* env);
	static int32_t getNotifBufferSize(::java::util::Map* env);
	static ::com::sun::jmx::remote::security::NotificationAccessController* getNotificationAccessController(::java::util::Map* env);
	static int64_t getServerConnectionTimeout(::java::util::Map* env);
	static void hideAttributes(::java::util::SortedMap* map);
	static $Throwable* initCause($Throwable* throwable, $Throwable* cause);
	static bool isServerDaemon(::java::util::Map* env);
	static ::java::util::Hashtable* mapToHashtable(::java::util::Map* map);
	static void parseHiddenAttributes($String* hide, ::java::util::SortedSet* hiddenStrings, ::java::util::SortedSet* hiddenPrefixes);
	static void purgeUnserializable(::java::util::Collection* objects);
	static ::java::lang::ClassLoader* resolveClientClassLoader(::java::util::Map* env);
	static ::java::lang::ClassLoader* resolveServerClassLoader(::java::util::Map* env, ::javax::management::MBeanServer* mbs);
	static $String* DEFAULT_CLASS_LOADER;
	static $String* DEFAULT_CLASS_LOADER_NAME;
	static $String* BUFFER_SIZE_PROPERTY;
	static $String* MAX_FETCH_NOTIFS;
	static $String* FETCH_TIMEOUT;
	static $String* NOTIF_ACCESS_CONTROLLER;
	static $String* DEFAULT_ORB;
	static $String* HIDDEN_ATTRIBUTES;
	static $String* DEFAULT_HIDDEN_ATTRIBUTES;
	static ::java::util::SortedSet* defaultHiddenStrings;
	static ::java::util::SortedSet* defaultHiddenPrefixes;
	static $String* SERVER_CONNECTION_TIMEOUT;
	static $String* CLIENT_CONNECTION_CHECK_PERIOD;
	static $String* JMX_SERVER_DAEMON;
	static ::com::sun::jmx::remote::util::ClassLogger* logger;
};

				} // util
			} // remote
		} // jmx
	} // sun
} // com

#pragma pop_macro("BUFFER_SIZE_PROPERTY")
#pragma pop_macro("CLIENT_CONNECTION_CHECK_PERIOD")
#pragma pop_macro("DEFAULT_CLASS_LOADER")
#pragma pop_macro("DEFAULT_CLASS_LOADER_NAME")
#pragma pop_macro("DEFAULT_HIDDEN_ATTRIBUTES")
#pragma pop_macro("DEFAULT_ORB")
#pragma pop_macro("FETCH_TIMEOUT")
#pragma pop_macro("HIDDEN_ATTRIBUTES")
#pragma pop_macro("JMX_SERVER_DAEMON")
#pragma pop_macro("MAX_FETCH_NOTIFS")
#pragma pop_macro("NOTIF_ACCESS_CONTROLLER")
#pragma pop_macro("SERVER_CONNECTION_TIMEOUT")

#endif // _com_sun_jmx_remote_util_EnvHelp_h_
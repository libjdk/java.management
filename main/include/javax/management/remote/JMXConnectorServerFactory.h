#ifndef _javax_management_remote_JMXConnectorServerFactory_h_
#define _javax_management_remote_JMXConnectorServerFactory_h_
//$ class javax.management.remote.JMXConnectorServerFactory
//$ extends java.lang.Object

#include <javax/management/remote/JMXConnectorFactory.h>

#pragma push_macro("DEFAULT_CLASS_LOADER")
#undef DEFAULT_CLASS_LOADER
#pragma push_macro("DEFAULT_CLASS_LOADER_NAME")
#undef DEFAULT_CLASS_LOADER_NAME
#pragma push_macro("PROTOCOL_PROVIDER_CLASS_LOADER")
#undef PROTOCOL_PROVIDER_CLASS_LOADER
#pragma push_macro("PROTOCOL_PROVIDER_DEFAULT_PACKAGE")
#undef PROTOCOL_PROVIDER_DEFAULT_PACKAGE
#pragma push_macro("PROTOCOL_PROVIDER_PACKAGES")
#undef PROTOCOL_PROVIDER_PACKAGES

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
	}
}
namespace java {
	namespace util {
		class Map;
	}
}
namespace java {
	namespace util {
		namespace function {
			class Predicate;
		}
	}
}
namespace javax {
	namespace management {
		class MBeanServer;
	}
}
namespace javax {
	namespace management {
		namespace remote {
			class JMXConnectorServer;
			class JMXConnectorServerProvider;
			class JMXServiceURL;
		}
	}
}

namespace javax {
	namespace management {
		namespace remote {

class $import JMXConnectorServerFactory : public ::java::lang::Object {
	$class(JMXConnectorServerFactory, 0, ::java::lang::Object)
public:
	JMXConnectorServerFactory();
	void init$();
	static ::javax::management::remote::JMXConnectorServer* getConnectorServerAsService(::java::lang::ClassLoader* loader, ::javax::management::remote::JMXServiceURL* url, ::java::util::Map* map, ::javax::management::MBeanServer* mbs, ::java::util::function::Predicate* filter);
	static ::javax::management::remote::JMXConnectorServer* lambda$getConnectorServerAsService$0(::javax::management::remote::JMXServiceURL* url, ::java::util::Map* map, ::javax::management::MBeanServer* mbs, ::javax::management::remote::JMXConnectorServerProvider* p);
	static ::javax::management::remote::JMXConnectorServer* newJMXConnectorServer(::javax::management::remote::JMXServiceURL* serviceURL, ::java::util::Map* environment, ::javax::management::MBeanServer* mbeanServer);
	static $String* DEFAULT_CLASS_LOADER;
	static $String* DEFAULT_CLASS_LOADER_NAME;
	static $String* PROTOCOL_PROVIDER_PACKAGES;
	static $String* PROTOCOL_PROVIDER_CLASS_LOADER;
	static $String* PROTOCOL_PROVIDER_DEFAULT_PACKAGE;
	static ::com::sun::jmx::remote::util::ClassLogger* logger;
};

		} // remote
	} // management
} // javax

#pragma pop_macro("DEFAULT_CLASS_LOADER")
#pragma pop_macro("DEFAULT_CLASS_LOADER_NAME")
#pragma pop_macro("PROTOCOL_PROVIDER_CLASS_LOADER")
#pragma pop_macro("PROTOCOL_PROVIDER_DEFAULT_PACKAGE")
#pragma pop_macro("PROTOCOL_PROVIDER_PACKAGES")

#endif // _javax_management_remote_JMXConnectorServerFactory_h_
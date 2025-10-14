#ifndef _javax_management_remote_JMXConnectorFactory_h_
#define _javax_management_remote_JMXConnectorFactory_h_
//$ class javax.management.remote.JMXConnectorFactory
//$ extends java.lang.Object

#include <java/lang/Object.h>

#pragma push_macro("DEFAULT_CLASS_LOADER")
#undef DEFAULT_CLASS_LOADER
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
		class ServiceLoader$Provider;
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
		namespace remote {
			class JMXConnector;
			class JMXConnectorFactory$ConnectorFactory;
			class JMXConnectorProvider;
			class JMXServiceURL;
		}
	}
}

namespace javax {
	namespace management {
		namespace remote {

class $import JMXConnectorFactory : public ::java::lang::Object {
	$class(JMXConnectorFactory, 0, ::java::lang::Object)
public:
	JMXConnectorFactory();
	void init$();
	static ::javax::management::remote::JMXConnector* connect(::javax::management::remote::JMXServiceURL* serviceURL);
	static ::javax::management::remote::JMXConnector* connect(::javax::management::remote::JMXServiceURL* serviceURL, ::java::util::Map* environment);
	static ::javax::management::remote::JMXConnector* getConnectorAsService(::java::lang::ClassLoader* loader, ::javax::management::remote::JMXServiceURL* url, ::java::util::Map* map, ::java::util::function::Predicate* filter);
	static $Object* getConnectorAsService($Class* providerClass, ::java::lang::ClassLoader* loader, ::javax::management::remote::JMXServiceURL* url, ::java::util::function::Predicate* filter, ::javax::management::remote::JMXConnectorFactory$ConnectorFactory* factory);
	static $Object* getProvider(::javax::management::remote::JMXServiceURL* serviceURL, ::java::util::Map* environment, $String* providerClassName, $Class* targetInterface, ::java::lang::ClassLoader* loader);
	static $Object* getProvider($String* protocol, $String* pkgs, ::java::lang::ClassLoader* loader, $String* providerClassName, $Class* targetInterface);
	static bool isSystemProvider(::java::util::ServiceLoader$Provider* provider);
	static ::javax::management::remote::JMXConnector* lambda$getConnectorAsService$0(::javax::management::remote::JMXServiceURL* url, ::java::util::Map* map, ::javax::management::remote::JMXConnectorProvider* p);
	static ::java::util::Map* newHashMap();
	static ::java::util::Map* newHashMap(::java::util::Map* map);
	static ::javax::management::remote::JMXConnector* newJMXConnector(::javax::management::remote::JMXServiceURL* serviceURL, ::java::util::Map* environment);
	static $String* protocol2package($String* protocol);
	static ::java::lang::ClassLoader* resolveClassLoader(::java::util::Map* environment);
	static $String* resolvePkgs(::java::util::Map* env);
	static ::java::lang::ClassLoader* wrap(::java::lang::ClassLoader* parent);
	static $String* DEFAULT_CLASS_LOADER;
	static $String* PROTOCOL_PROVIDER_PACKAGES;
	static $String* PROTOCOL_PROVIDER_CLASS_LOADER;
	static $String* PROTOCOL_PROVIDER_DEFAULT_PACKAGE;
	static ::com::sun::jmx::remote::util::ClassLogger* logger;
};

		} // remote
	} // management
} // javax

#pragma pop_macro("DEFAULT_CLASS_LOADER")
#pragma pop_macro("PROTOCOL_PROVIDER_CLASS_LOADER")
#pragma pop_macro("PROTOCOL_PROVIDER_DEFAULT_PACKAGE")
#pragma pop_macro("PROTOCOL_PROVIDER_PACKAGES")

#endif // _javax_management_remote_JMXConnectorFactory_h_
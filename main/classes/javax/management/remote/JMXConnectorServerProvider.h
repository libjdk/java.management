#ifndef _javax_management_remote_JMXConnectorServerProvider_h_
#define _javax_management_remote_JMXConnectorServerProvider_h_
//$ interface javax.management.remote.JMXConnectorServerProvider
//$ extends java.lang.Object

#include <java/lang/Object.h>

namespace java {
	namespace util {
		class Map;
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
			class JMXServiceURL;
		}
	}
}

namespace javax {
	namespace management {
		namespace remote {

class $export JMXConnectorServerProvider : public ::java::lang::Object {
	$interface(JMXConnectorServerProvider, $NO_CLASS_INIT, ::java::lang::Object)
public:
	virtual ::javax::management::remote::JMXConnectorServer* newJMXConnectorServer(::javax::management::remote::JMXServiceURL* serviceURL, ::java::util::Map* environment, ::javax::management::MBeanServer* mbeanServer) {return nullptr;}
};

		} // remote
	} // management
} // javax

#endif // _javax_management_remote_JMXConnectorServerProvider_h_
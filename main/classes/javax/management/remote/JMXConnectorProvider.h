#ifndef _javax_management_remote_JMXConnectorProvider_h_
#define _javax_management_remote_JMXConnectorProvider_h_
//$ interface javax.management.remote.JMXConnectorProvider
//$ extends java.lang.Object

#include <java/lang/Object.h>

namespace java {
	namespace util {
		class Map;
	}
}
namespace javax {
	namespace management {
		namespace remote {
			class JMXConnector;
			class JMXServiceURL;
		}
	}
}

namespace javax {
	namespace management {
		namespace remote {

class $export JMXConnectorProvider : public ::java::lang::Object {
	$interface(JMXConnectorProvider, $NO_CLASS_INIT, ::java::lang::Object)
public:
	virtual ::javax::management::remote::JMXConnector* newJMXConnector(::javax::management::remote::JMXServiceURL* serviceURL, ::java::util::Map* environment) {return nullptr;}
};

		} // remote
	} // management
} // javax

#endif // _javax_management_remote_JMXConnectorProvider_h_
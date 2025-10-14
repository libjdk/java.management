#ifndef _javax_management_remote_JMXConnectorFactory$ConnectorFactory_h_
#define _javax_management_remote_JMXConnectorFactory$ConnectorFactory_h_
//$ interface javax.management.remote.JMXConnectorFactory$ConnectorFactory
//$ extends java.lang.Object

#include <java/lang/Object.h>

namespace javax {
	namespace management {
		namespace remote {

class $import JMXConnectorFactory$ConnectorFactory : public ::java::lang::Object {
	$interface(JMXConnectorFactory$ConnectorFactory, $NO_CLASS_INIT, ::java::lang::Object)
public:
	virtual $Object* apply(Object$* provider) {return nullptr;}
};

		} // remote
	} // management
} // javax

#endif // _javax_management_remote_JMXConnectorFactory$ConnectorFactory_h_
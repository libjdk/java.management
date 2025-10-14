#ifndef _javax_management_remote_JMXConnectorServerMBean_h_
#define _javax_management_remote_JMXConnectorServerMBean_h_
//$ interface javax.management.remote.JMXConnectorServerMBean
//$ extends java.lang.Object

#include <java/lang/Array.h>

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
			class MBeanServerForwarder;
		}
	}
}

namespace javax {
	namespace management {
		namespace remote {

class $export JMXConnectorServerMBean : public ::java::lang::Object {
	$interface(JMXConnectorServerMBean, $NO_CLASS_INIT, ::java::lang::Object)
public:
	virtual ::javax::management::remote::JMXServiceURL* getAddress() {return nullptr;}
	virtual ::java::util::Map* getAttributes() {return nullptr;}
	virtual $StringArray* getConnectionIds() {return nullptr;}
	virtual bool isActive() {return false;}
	virtual void setMBeanServerForwarder(::javax::management::remote::MBeanServerForwarder* mbsf) {}
	virtual void start() {}
	virtual void stop() {}
	virtual ::javax::management::remote::JMXConnector* toJMXConnector(::java::util::Map* env) {return nullptr;}
};

		} // remote
	} // management
} // javax

#endif // _javax_management_remote_JMXConnectorServerMBean_h_
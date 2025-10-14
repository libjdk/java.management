#ifndef _javax_management_remote_JMXConnector_h_
#define _javax_management_remote_JMXConnector_h_
//$ interface javax.management.remote.JMXConnector
//$ extends java.io.Closeable

#include <java/io/Closeable.h>

#pragma push_macro("CREDENTIALS")
#undef CREDENTIALS

namespace java {
	namespace util {
		class Map;
	}
}
namespace javax {
	namespace management {
		class MBeanServerConnection;
		class NotificationFilter;
		class NotificationListener;
	}
}
namespace javax {
	namespace security {
		namespace auth {
			class Subject;
		}
	}
}

namespace javax {
	namespace management {
		namespace remote {

class $export JMXConnector : public ::java::io::Closeable {
	$interface(JMXConnector, 0, ::java::io::Closeable)
public:
	virtual void addConnectionNotificationListener(::javax::management::NotificationListener* listener, ::javax::management::NotificationFilter* filter, Object$* handback) {}
	virtual void close() override {}
	virtual void connect() {}
	virtual void connect(::java::util::Map* env) {}
	virtual $String* getConnectionId() {return nullptr;}
	virtual ::javax::management::MBeanServerConnection* getMBeanServerConnection() {return nullptr;}
	virtual ::javax::management::MBeanServerConnection* getMBeanServerConnection(::javax::security::auth::Subject* delegationSubject) {return nullptr;}
	virtual void removeConnectionNotificationListener(::javax::management::NotificationListener* listener) {}
	virtual void removeConnectionNotificationListener(::javax::management::NotificationListener* l, ::javax::management::NotificationFilter* f, Object$* handback) {}
	static $String* CREDENTIALS;
};

		} // remote
	} // management
} // javax

#pragma pop_macro("CREDENTIALS")

#endif // _javax_management_remote_JMXConnector_h_
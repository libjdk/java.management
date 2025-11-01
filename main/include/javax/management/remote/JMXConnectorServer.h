#ifndef _javax_management_remote_JMXConnectorServer_h_
#define _javax_management_remote_JMXConnectorServer_h_
//$ class javax.management.remote.JMXConnectorServer
//$ extends javax.management.NotificationBroadcasterSupport
//$ implements javax.management.remote.JMXConnectorServerMBean,javax.management.MBeanRegistration,javax.management.remote.JMXAddressable

#include <java/lang/Array.h>
#include <javax/management/MBeanRegistration.h>
#include <javax/management/NotificationBroadcasterSupport.h>
#include <javax/management/remote/JMXAddressable.h>
#include <javax/management/remote/JMXConnectorServerMBean.h>

#pragma push_macro("AUTHENTICATOR")
#undef AUTHENTICATOR

namespace java {
	namespace lang {
		class Boolean;
	}
}
namespace java {
	namespace util {
		class List;
		class Map;
	}
}
namespace javax {
	namespace management {
		class MBeanNotificationInfo;
		class MBeanServer;
		class ObjectName;
	}
}
namespace javax {
	namespace management {
		namespace remote {
			class JMXConnector;
			class MBeanServerForwarder;
		}
	}
}

namespace javax {
	namespace management {
		namespace remote {

class $import JMXConnectorServer : public ::javax::management::NotificationBroadcasterSupport, public ::javax::management::remote::JMXConnectorServerMBean, public ::javax::management::MBeanRegistration, public ::javax::management::remote::JMXAddressable {
	$class(JMXConnectorServer, 0, ::javax::management::NotificationBroadcasterSupport, ::javax::management::remote::JMXConnectorServerMBean, ::javax::management::MBeanRegistration, ::javax::management::remote::JMXAddressable)
public:
	JMXConnectorServer();
	virtual $Object* clone() override;
	virtual bool equals(Object$* arg0) override;
	virtual void finalize() override;
	virtual ::javax::management::remote::JMXServiceURL* getAddress() override {return nullptr;}
	virtual int32_t hashCode() override;
	void init$();
	void init$(::javax::management::MBeanServer* mbeanServer);
	virtual void connectionClosed($String* connectionId, $String* message, Object$* userData);
	virtual void connectionFailed($String* connectionId, $String* message, Object$* userData);
	virtual void connectionOpened($String* connectionId, $String* message, Object$* userData);
	virtual $StringArray* getConnectionIds() override;
	virtual ::javax::management::MBeanServer* getMBeanServer();
	virtual $Array<::javax::management::MBeanNotificationInfo>* getNotificationInfo() override;
	$Object* getNotificationSource();
	static int64_t nextSequenceNumber();
	virtual void postDeregister() override;
	virtual void postRegister(::java::lang::Boolean* registrationDone) override;
	virtual void preDeregister() override;
	virtual ::javax::management::ObjectName* preRegister(::javax::management::MBeanServer* mbs, ::javax::management::ObjectName* name) override;
	using ::javax::management::NotificationBroadcasterSupport::sendNotification;
	void sendNotification($String* type, $String* connectionId, $String* message, Object$* userData);
	virtual void setMBeanServerForwarder(::javax::management::remote::MBeanServerForwarder* mbsf) override;
	virtual ::javax::management::remote::JMXConnector* toJMXConnector(::java::util::Map* env) override;
	virtual $String* toString() override;
	static $String* AUTHENTICATOR;
	::javax::management::MBeanServer* mbeanServer = nullptr;
	::javax::management::ObjectName* myName = nullptr;
	::java::util::List* connectionIds = nullptr;
	static $ints* sequenceNumberLock;
	static int64_t sequenceNumber;
};

		} // remote
	} // management
} // javax

#pragma pop_macro("AUTHENTICATOR")

#endif // _javax_management_remote_JMXConnectorServer_h_
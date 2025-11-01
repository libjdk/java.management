#ifndef _javax_management_MBeanServerDelegate_h_
#define _javax_management_MBeanServerDelegate_h_
//$ class javax.management.MBeanServerDelegate
//$ extends javax.management.MBeanServerDelegateMBean
//$ implements javax.management.NotificationEmitter

#include <java/lang/Array.h>
#include <javax/management/MBeanServerDelegateMBean.h>
#include <javax/management/NotificationEmitter.h>

#pragma push_macro("DELEGATE_NAME")
#undef DELEGATE_NAME

namespace javax {
	namespace management {
		class MBeanNotificationInfo;
		class Notification;
		class NotificationBroadcasterSupport;
		class NotificationFilter;
		class NotificationListener;
		class ObjectName;
	}
}

namespace javax {
	namespace management {

class $import MBeanServerDelegate : public ::javax::management::MBeanServerDelegateMBean, public ::javax::management::NotificationEmitter {
	$class(MBeanServerDelegate, 0, ::javax::management::MBeanServerDelegateMBean, ::javax::management::NotificationEmitter)
public:
	MBeanServerDelegate();
	virtual $Object* clone() override;
	virtual bool equals(Object$* arg0) override;
	virtual void finalize() override;
	virtual int32_t hashCode() override;
	void init$();
	virtual void addNotificationListener(::javax::management::NotificationListener* listener, ::javax::management::NotificationFilter* filter, Object$* handback) override;
	virtual $String* getImplementationName() override;
	virtual $String* getImplementationVendor() override;
	virtual $String* getImplementationVersion() override;
	virtual $String* getMBeanServerId() override;
	virtual $Array<::javax::management::MBeanNotificationInfo>* getNotificationInfo() override;
	virtual $String* getSpecificationName() override;
	virtual $String* getSpecificationVendor() override;
	virtual $String* getSpecificationVersion() override;
	static int64_t getStamp();
	virtual void removeNotificationListener(::javax::management::NotificationListener* listener, ::javax::management::NotificationFilter* filter, Object$* handback) override;
	virtual void removeNotificationListener(::javax::management::NotificationListener* listener) override;
	virtual void sendNotification(::javax::management::Notification* notification);
	virtual $String* toString() override;
	$String* mbeanServerId = nullptr;
	::javax::management::NotificationBroadcasterSupport* broadcaster = nullptr;
	static int64_t oldStamp;
	int64_t stamp = 0;
	int64_t sequenceNumber = 0;
	static $Array<::javax::management::MBeanNotificationInfo>* notifsInfo;
	static ::javax::management::ObjectName* DELEGATE_NAME;
};

	} // management
} // javax

#pragma pop_macro("DELEGATE_NAME")

#endif // _javax_management_MBeanServerDelegate_h_
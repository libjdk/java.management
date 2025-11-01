#ifndef _javax_management_StandardEmitterMBean_h_
#define _javax_management_StandardEmitterMBean_h_
//$ class javax.management.StandardEmitterMBean
//$ extends javax.management.StandardMBean
//$ implements javax.management.NotificationEmitter

#include <java/lang/Array.h>
#include <javax/management/NotificationEmitter.h>
#include <javax/management/StandardMBean.h>

#pragma push_macro("NO_NOTIFICATION_INFO")
#undef NO_NOTIFICATION_INFO

namespace javax {
	namespace management {
		class MBeanInfo;
		class MBeanNotificationInfo;
		class Notification;
		class NotificationFilter;
		class NotificationListener;
	}
}

namespace javax {
	namespace management {

class $import StandardEmitterMBean : public ::javax::management::StandardMBean, public ::javax::management::NotificationEmitter {
	$class(StandardEmitterMBean, 0, ::javax::management::StandardMBean, ::javax::management::NotificationEmitter)
public:
	StandardEmitterMBean();
	virtual $Object* clone() override;
	virtual bool equals(Object$* arg0) override;
	virtual void finalize() override;
	virtual int32_t hashCode() override;
	void init$(Object$* implementation, $Class* mbeanInterface, ::javax::management::NotificationEmitter* emitter);
	void init$(Object$* implementation, $Class* mbeanInterface, bool isMXBean, ::javax::management::NotificationEmitter* emitter);
	void init$($Class* mbeanInterface, ::javax::management::NotificationEmitter* emitter);
	void init$($Class* mbeanInterface, bool isMXBean, ::javax::management::NotificationEmitter* emitter);
	virtual void addNotificationListener(::javax::management::NotificationListener* listener, ::javax::management::NotificationFilter* filter, Object$* handback) override;
	virtual $Array<::javax::management::MBeanNotificationInfo>* getNotificationInfo() override;
	virtual $Array<::javax::management::MBeanNotificationInfo>* getNotifications(::javax::management::MBeanInfo* info) override;
	virtual void removeNotificationListener(::javax::management::NotificationListener* listener) override;
	virtual void removeNotificationListener(::javax::management::NotificationListener* listener, ::javax::management::NotificationFilter* filter, Object$* handback) override;
	virtual void sendNotification(::javax::management::Notification* n);
	virtual $String* toString() override;
	static $Array<::javax::management::MBeanNotificationInfo>* NO_NOTIFICATION_INFO;
	::javax::management::NotificationEmitter* emitter = nullptr;
	$Array<::javax::management::MBeanNotificationInfo>* notificationInfo = nullptr;
};

	} // management
} // javax

#pragma pop_macro("NO_NOTIFICATION_INFO")

#endif // _javax_management_StandardEmitterMBean_h_
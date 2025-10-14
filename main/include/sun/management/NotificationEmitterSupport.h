#ifndef _sun_management_NotificationEmitterSupport_h_
#define _sun_management_NotificationEmitterSupport_h_
//$ class sun.management.NotificationEmitterSupport
//$ extends javax.management.NotificationEmitter

#include <javax/management/NotificationEmitter.h>

namespace java {
	namespace util {
		class List;
	}
}
namespace javax {
	namespace management {
		class Notification;
		class NotificationFilter;
		class NotificationListener;
	}
}

namespace sun {
	namespace management {

class $import NotificationEmitterSupport : public ::javax::management::NotificationEmitter {
	$class(NotificationEmitterSupport, $NO_CLASS_INIT, ::javax::management::NotificationEmitter)
public:
	NotificationEmitterSupport();
	virtual $Array<::javax::management::MBeanNotificationInfo>* getNotificationInfo() override {return nullptr;}
	void init$();
	virtual void addNotificationListener(::javax::management::NotificationListener* listener, ::javax::management::NotificationFilter* filter, Object$* handback) override;
	virtual bool hasListeners();
	virtual void removeNotificationListener(::javax::management::NotificationListener* listener) override;
	virtual void removeNotificationListener(::javax::management::NotificationListener* listener, ::javax::management::NotificationFilter* filter, Object$* handback) override;
	virtual void sendNotification(::javax::management::Notification* notification);
	$Object* listenerLock = nullptr;
	::java::util::List* listenerList = nullptr;
};

	} // management
} // sun

#endif // _sun_management_NotificationEmitterSupport_h_
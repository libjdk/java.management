#ifndef _javax_management_NotificationBroadcasterSupport_h_
#define _javax_management_NotificationBroadcasterSupport_h_
//$ class javax.management.NotificationBroadcasterSupport
//$ extends javax.management.NotificationEmitter

#include <java/lang/Array.h>
#include <javax/management/NotificationEmitter.h>

#pragma push_macro("NO_NOTIFICATION_INFO")
#undef NO_NOTIFICATION_INFO

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
	namespace util {
		class List;
	}
}
namespace java {
	namespace util {
		namespace concurrent {
			class Executor;
		}
	}
}
namespace javax {
	namespace management {
		class MBeanNotificationInfo;
		class Notification;
		class NotificationFilter;
		class NotificationListener;
	}
}

namespace javax {
	namespace management {

class $export NotificationBroadcasterSupport : public ::javax::management::NotificationEmitter {
	$class(NotificationBroadcasterSupport, 0, ::javax::management::NotificationEmitter)
public:
	NotificationBroadcasterSupport();
	void init$();
	void init$(::java::util::concurrent::Executor* executor);
	void init$($Array<::javax::management::MBeanNotificationInfo>* info);
	void init$(::java::util::concurrent::Executor* executor, $Array<::javax::management::MBeanNotificationInfo>* info);
	virtual void addNotificationListener(::javax::management::NotificationListener* listener, ::javax::management::NotificationFilter* filter, Object$* handback) override;
	virtual $Array<::javax::management::MBeanNotificationInfo>* getNotificationInfo() override;
	virtual void handleNotification(::javax::management::NotificationListener* listener, ::javax::management::Notification* notif, Object$* handback);
	virtual void removeNotificationListener(::javax::management::NotificationListener* listener) override;
	virtual void removeNotificationListener(::javax::management::NotificationListener* listener, ::javax::management::NotificationFilter* filter, Object$* handback) override;
	virtual void sendNotification(::javax::management::Notification* notification);
	::java::util::List* listenerList = nullptr;
	::java::util::concurrent::Executor* executor = nullptr;
	$Array<::javax::management::MBeanNotificationInfo>* notifInfo = nullptr;
	static ::java::util::concurrent::Executor* defaultExecutor;
	static $Array<::javax::management::MBeanNotificationInfo>* NO_NOTIFICATION_INFO;
	static ::com::sun::jmx::remote::util::ClassLogger* logger;
};

	} // management
} // javax

#pragma pop_macro("NO_NOTIFICATION_INFO")

#endif // _javax_management_NotificationBroadcasterSupport_h_
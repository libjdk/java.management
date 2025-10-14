#ifndef _javax_management_NotificationBroadcasterSupport$SendNotifJob_h_
#define _javax_management_NotificationBroadcasterSupport$SendNotifJob_h_
//$ class javax.management.NotificationBroadcasterSupport$SendNotifJob
//$ extends java.lang.Runnable

#include <java/lang/Runnable.h>

namespace javax {
	namespace management {
		class Notification;
		class NotificationBroadcasterSupport;
		class NotificationBroadcasterSupport$ListenerInfo;
	}
}

namespace javax {
	namespace management {

class NotificationBroadcasterSupport$SendNotifJob : public ::java::lang::Runnable {
	$class(NotificationBroadcasterSupport$SendNotifJob, $NO_CLASS_INIT, ::java::lang::Runnable)
public:
	NotificationBroadcasterSupport$SendNotifJob();
	void init$(::javax::management::NotificationBroadcasterSupport* this$0, ::javax::management::Notification* notif, ::javax::management::NotificationBroadcasterSupport$ListenerInfo* listenerInfo);
	virtual void run() override;
	::javax::management::NotificationBroadcasterSupport* this$0 = nullptr;
	::javax::management::Notification* notif = nullptr;
	::javax::management::NotificationBroadcasterSupport$ListenerInfo* listenerInfo = nullptr;
};

	} // management
} // javax

#endif // _javax_management_NotificationBroadcasterSupport$SendNotifJob_h_
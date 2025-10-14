#ifndef _javax_management_timer_TimerNotification_h_
#define _javax_management_timer_TimerNotification_h_
//$ class javax.management.timer.TimerNotification
//$ extends javax.management.Notification

#include <javax/management/Notification.h>

namespace java {
	namespace lang {
		class Integer;
	}
}

namespace javax {
	namespace management {
		namespace timer {

class $import TimerNotification : public ::javax::management::Notification {
	$class(TimerNotification, $NO_CLASS_INIT, ::javax::management::Notification)
public:
	TimerNotification();
	void init$($String* type, Object$* source, int64_t sequenceNumber, int64_t timeStamp, $String* msg, ::java::lang::Integer* id);
	virtual $Object* cloneTimerNotification();
	virtual ::java::lang::Integer* getNotificationID();
	static const int64_t serialVersionUID = (int64_t)0x18F586F8DBE84856;
	::java::lang::Integer* notificationID = nullptr;
};

		} // timer
	} // management
} // javax

#endif // _javax_management_timer_TimerNotification_h_
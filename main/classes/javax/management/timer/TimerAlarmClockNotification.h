#ifndef _javax_management_timer_TimerAlarmClockNotification_h_
#define _javax_management_timer_TimerAlarmClockNotification_h_
//$ class javax.management.timer.TimerAlarmClockNotification
//$ extends javax.management.Notification

#include <javax/management/Notification.h>

namespace javax {
	namespace management {
		namespace timer {
			class TimerAlarmClock;
		}
	}
}

namespace javax {
	namespace management {
		namespace timer {

class TimerAlarmClockNotification : public ::javax::management::Notification {
	$class(TimerAlarmClockNotification, $NO_CLASS_INIT, ::javax::management::Notification)
public:
	TimerAlarmClockNotification();
	void init$(::javax::management::timer::TimerAlarmClock* source);
	static const int64_t serialVersionUID = (int64_t)0xBCD1186B37930F5F;
};

		} // timer
	} // management
} // javax

#endif // _javax_management_timer_TimerAlarmClockNotification_h_
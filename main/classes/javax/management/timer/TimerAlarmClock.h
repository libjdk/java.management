#ifndef _javax_management_timer_TimerAlarmClock_h_
#define _javax_management_timer_TimerAlarmClock_h_
//$ class javax.management.timer.TimerAlarmClock
//$ extends java.util.TimerTask

#include <java/util/TimerTask.h>

namespace java {
	namespace util {
		class Date;
	}
}
namespace javax {
	namespace management {
		namespace timer {
			class Timer;
		}
	}
}

namespace javax {
	namespace management {
		namespace timer {

class TimerAlarmClock : public ::java::util::TimerTask {
	$class(TimerAlarmClock, $NO_CLASS_INIT, ::java::util::TimerTask)
public:
	TimerAlarmClock();
	void init$(::javax::management::timer::Timer* listener, int64_t timeout);
	void init$(::javax::management::timer::Timer* listener, ::java::util::Date* next);
	virtual void run() override;
	::javax::management::timer::Timer* listener = nullptr;
	int64_t timeout = 0;
	::java::util::Date* next = nullptr;
};

		} // timer
	} // management
} // javax

#endif // _javax_management_timer_TimerAlarmClock_h_
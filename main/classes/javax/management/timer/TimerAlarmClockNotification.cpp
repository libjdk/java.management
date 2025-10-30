#include <javax/management/timer/TimerAlarmClockNotification.h>

#include <javax/management/Notification.h>
#include <javax/management/timer/TimerAlarmClock.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Notification = ::javax::management::Notification;
using $TimerAlarmClock = ::javax::management::timer::TimerAlarmClock;

namespace javax {
	namespace management {
		namespace timer {

$FieldInfo _TimerAlarmClockNotification_FieldInfo_[] = {
	{"serialVersionUID", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(TimerAlarmClockNotification, serialVersionUID)},
	{}
};

$MethodInfo _TimerAlarmClockNotification_MethodInfo_[] = {
	{"<init>", "(Ljavax/management/timer/TimerAlarmClock;)V", nullptr, $PUBLIC, $method(static_cast<void(TimerAlarmClockNotification::*)($TimerAlarmClock*)>(&TimerAlarmClockNotification::init$))},
	{}
};

$ClassInfo _TimerAlarmClockNotification_ClassInfo_ = {
	$ACC_SUPER,
	"javax.management.timer.TimerAlarmClockNotification",
	"javax.management.Notification",
	nullptr,
	_TimerAlarmClockNotification_FieldInfo_,
	_TimerAlarmClockNotification_MethodInfo_
};

$Object* allocate$TimerAlarmClockNotification($Class* clazz) {
	return $of($alloc(TimerAlarmClockNotification));
}

void TimerAlarmClockNotification::init$($TimerAlarmClock* source) {
	$Notification::init$(""_s, source, 0);
}

TimerAlarmClockNotification::TimerAlarmClockNotification() {
}

$Class* TimerAlarmClockNotification::load$($String* name, bool initialize) {
	$loadClass(TimerAlarmClockNotification, name, initialize, &_TimerAlarmClockNotification_ClassInfo_, allocate$TimerAlarmClockNotification);
	return class$;
}

$Class* TimerAlarmClockNotification::class$ = nullptr;

		} // timer
	} // management
} // javax
#include <javax/management/timer/TimerAlarmClock.h>

#include <com/sun/jmx/defaults/JmxProperties.h>
#include <java/lang/Math.h>
#include <java/lang/System$Logger$Level.h>
#include <java/lang/System$Logger.h>
#include <java/util/Date.h>
#include <java/util/TimerTask.h>
#include <javax/management/timer/Timer.h>
#include <javax/management/timer/TimerAlarmClockNotification.h>
#include <jcpp.h>

#undef TIMER_LOGGER
#undef TRACE

using $JmxProperties = ::com::sun::jmx::defaults::JmxProperties;
using $ClassInfo = ::java::lang::ClassInfo;
using $Exception = ::java::lang::Exception;
using $FieldInfo = ::java::lang::FieldInfo;
using $Math = ::java::lang::Math;
using $MethodInfo = ::java::lang::MethodInfo;
using $System$Logger = ::java::lang::System$Logger;
using $System$Logger$Level = ::java::lang::System$Logger$Level;
using $Date = ::java::util::Date;
using $TimerTask = ::java::util::TimerTask;
using $Timer = ::javax::management::timer::Timer;
using $TimerAlarmClockNotification = ::javax::management::timer::TimerAlarmClockNotification;

namespace javax {
	namespace management {
		namespace timer {

$FieldInfo _TimerAlarmClock_FieldInfo_[] = {
	{"listener", "Ljavax/management/timer/Timer;", nullptr, 0, $field(TimerAlarmClock, listener)},
	{"timeout", "J", nullptr, 0, $field(TimerAlarmClock, timeout)},
	{"next", "Ljava/util/Date;", nullptr, 0, $field(TimerAlarmClock, next)},
	{}
};

$MethodInfo _TimerAlarmClock_MethodInfo_[] = {
	{"<init>", "(Ljavax/management/timer/Timer;J)V", nullptr, $PUBLIC, $method(static_cast<void(TimerAlarmClock::*)($Timer*,int64_t)>(&TimerAlarmClock::init$))},
	{"<init>", "(Ljavax/management/timer/Timer;Ljava/util/Date;)V", nullptr, $PUBLIC, $method(static_cast<void(TimerAlarmClock::*)($Timer*,$Date*)>(&TimerAlarmClock::init$))},
	{"run", "()V", nullptr, $PUBLIC},
	{}
};

$ClassInfo _TimerAlarmClock_ClassInfo_ = {
	$ACC_SUPER,
	"javax.management.timer.TimerAlarmClock",
	"java.util.TimerTask",
	nullptr,
	_TimerAlarmClock_FieldInfo_,
	_TimerAlarmClock_MethodInfo_
};

$Object* allocate$TimerAlarmClock($Class* clazz) {
	return $of($alloc(TimerAlarmClock));
}

void TimerAlarmClock::init$($Timer* listener, int64_t timeout) {
	$TimerTask::init$();
	$set(this, listener, nullptr);
	this->timeout = 10000;
	$set(this, next, nullptr);
	$set(this, listener, listener);
	this->timeout = $Math::max((int64_t)0, timeout);
}

void TimerAlarmClock::init$($Timer* listener, $Date* next) {
	$TimerTask::init$();
	$set(this, listener, nullptr);
	this->timeout = 10000;
	$set(this, next, nullptr);
	$set(this, listener, listener);
	$set(this, next, next);
}

void TimerAlarmClock::run() {
	try {
		$var($TimerAlarmClockNotification, notif, $new($TimerAlarmClockNotification, this));
		$nc(this->listener)->notifyAlarmClock(notif);
	} catch ($Exception& e) {
		$init($JmxProperties);
		$init($System$Logger$Level);
		$nc($JmxProperties::TIMER_LOGGER)->log($System$Logger$Level::TRACE, "Got unexpected exception when sending a notification"_s, static_cast<$Throwable*>(e));
	}
}

TimerAlarmClock::TimerAlarmClock() {
}

$Class* TimerAlarmClock::load$($String* name, bool initialize) {
	$loadClass(TimerAlarmClock, name, initialize, &_TimerAlarmClock_ClassInfo_, allocate$TimerAlarmClock);
	return class$;
}

$Class* TimerAlarmClock::class$ = nullptr;

		} // timer
	} // management
} // javax
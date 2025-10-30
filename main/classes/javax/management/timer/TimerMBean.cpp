#include <javax/management/timer/TimerMBean.h>

#include <java/util/Date.h>
#include <java/util/Vector.h>
#include <jcpp.h>

using $Boolean = ::java::lang::Boolean;
using $ClassInfo = ::java::lang::ClassInfo;
using $Integer = ::java::lang::Integer;
using $Long = ::java::lang::Long;
using $MethodInfo = ::java::lang::MethodInfo;
using $Date = ::java::util::Date;
using $Vector = ::java::util::Vector;

namespace javax {
	namespace management {
		namespace timer {

$MethodInfo _TimerMBean_MethodInfo_[] = {
	{"addNotification", "(Ljava/lang/String;Ljava/lang/String;Ljava/lang/Object;Ljava/util/Date;JJZ)Ljava/lang/Integer;", nullptr, $PUBLIC | $ABSTRACT, nullptr, "java.lang.IllegalArgumentException"},
	{"addNotification", "(Ljava/lang/String;Ljava/lang/String;Ljava/lang/Object;Ljava/util/Date;JJ)Ljava/lang/Integer;", nullptr, $PUBLIC | $ABSTRACT, nullptr, "java.lang.IllegalArgumentException"},
	{"addNotification", "(Ljava/lang/String;Ljava/lang/String;Ljava/lang/Object;Ljava/util/Date;J)Ljava/lang/Integer;", nullptr, $PUBLIC | $ABSTRACT, nullptr, "java.lang.IllegalArgumentException"},
	{"addNotification", "(Ljava/lang/String;Ljava/lang/String;Ljava/lang/Object;Ljava/util/Date;)Ljava/lang/Integer;", nullptr, $PUBLIC | $ABSTRACT, nullptr, "java.lang.IllegalArgumentException"},
	{"getAllNotificationIDs", "()Ljava/util/Vector;", "()Ljava/util/Vector<Ljava/lang/Integer;>;", $PUBLIC | $ABSTRACT},
	{"getDate", "(Ljava/lang/Integer;)Ljava/util/Date;", nullptr, $PUBLIC | $ABSTRACT},
	{"getFixedRate", "(Ljava/lang/Integer;)Ljava/lang/Boolean;", nullptr, $PUBLIC | $ABSTRACT},
	{"getNbNotifications", "()I", nullptr, $PUBLIC | $ABSTRACT},
	{"getNbOccurences", "(Ljava/lang/Integer;)Ljava/lang/Long;", nullptr, $PUBLIC | $ABSTRACT},
	{"getNotificationIDs", "(Ljava/lang/String;)Ljava/util/Vector;", "(Ljava/lang/String;)Ljava/util/Vector<Ljava/lang/Integer;>;", $PUBLIC | $ABSTRACT},
	{"getNotificationMessage", "(Ljava/lang/Integer;)Ljava/lang/String;", nullptr, $PUBLIC | $ABSTRACT},
	{"getNotificationType", "(Ljava/lang/Integer;)Ljava/lang/String;", nullptr, $PUBLIC | $ABSTRACT},
	{"getNotificationUserData", "(Ljava/lang/Integer;)Ljava/lang/Object;", nullptr, $PUBLIC | $ABSTRACT},
	{"getPeriod", "(Ljava/lang/Integer;)Ljava/lang/Long;", nullptr, $PUBLIC | $ABSTRACT},
	{"getSendPastNotifications", "()Z", nullptr, $PUBLIC | $ABSTRACT},
	{"isActive", "()Z", nullptr, $PUBLIC | $ABSTRACT},
	{"isEmpty", "()Z", nullptr, $PUBLIC | $ABSTRACT},
	{"removeAllNotifications", "()V", nullptr, $PUBLIC | $ABSTRACT},
	{"removeNotification", "(Ljava/lang/Integer;)V", nullptr, $PUBLIC | $ABSTRACT, nullptr, "javax.management.InstanceNotFoundException"},
	{"removeNotifications", "(Ljava/lang/String;)V", nullptr, $PUBLIC | $ABSTRACT, nullptr, "javax.management.InstanceNotFoundException"},
	{"setSendPastNotifications", "(Z)V", nullptr, $PUBLIC | $ABSTRACT},
	{"start", "()V", nullptr, $PUBLIC | $ABSTRACT},
	{"stop", "()V", nullptr, $PUBLIC | $ABSTRACT},
	{}
};

$ClassInfo _TimerMBean_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT,
	"javax.management.timer.TimerMBean",
	nullptr,
	nullptr,
	nullptr,
	_TimerMBean_MethodInfo_
};

$Object* allocate$TimerMBean($Class* clazz) {
	return $of($alloc(TimerMBean));
}

$Class* TimerMBean::load$($String* name, bool initialize) {
	$loadClass(TimerMBean, name, initialize, &_TimerMBean_ClassInfo_, allocate$TimerMBean);
	return class$;
}

$Class* TimerMBean::class$ = nullptr;

		} // timer
	} // management
} // javax
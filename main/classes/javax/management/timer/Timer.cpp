#include <javax/management/timer/Timer.h>

#include <com/sun/jmx/defaults/JmxProperties.h>
#include <java/io/Serializable.h>
#include <java/lang/Math.h>
#include <java/lang/System$Logger$Level.h>
#include <java/lang/System$Logger.h>
#include <java/lang/invoke/CallSite.h>
#include <java/lang/invoke/LambdaMetafactory.h>
#include <java/lang/invoke/MethodHandle.h>
#include <java/lang/invoke/MethodHandles$Lookup.h>
#include <java/lang/invoke/MethodType.h>
#include <java/util/AbstractMap.h>
#include <java/util/AbstractSet.h>
#include <java/util/ArrayList.h>
#include <java/util/Collection.h>
#include <java/util/Date.h>
#include <java/util/HashMap.h>
#include <java/util/Iterator.h>
#include <java/util/Map$Entry.h>
#include <java/util/Map.h>
#include <java/util/Set.h>
#include <java/util/Timer.h>
#include <java/util/TimerTask.h>
#include <java/util/TreeSet.h>
#include <java/util/Vector.h>
#include <java/util/function/Supplier.h>
#include <javax/management/InstanceNotFoundException.h>
#include <javax/management/MBeanNotificationInfo.h>
#include <javax/management/MBeanServer.h>
#include <javax/management/Notification.h>
#include <javax/management/NotificationBroadcasterSupport.h>
#include <javax/management/ObjectName.h>
#include <javax/management/timer/TimerAlarmClock.h>
#include <javax/management/timer/TimerAlarmClockNotification.h>
#include <javax/management/timer/TimerNotification.h>
#include <jcpp.h>

#undef ALARM_CLOCK_INDEX
#undef FIXED_RATE_INDEX
#undef ONE_DAY
#undef ONE_HOUR
#undef ONE_MINUTE
#undef ONE_SECOND
#undef ONE_WEEK
#undef TIMER_DATE_INDEX
#undef TIMER_LOGGER
#undef TIMER_NB_OCCUR_INDEX
#undef TIMER_NOTIF_INDEX
#undef TIMER_PERIOD_INDEX
#undef TRACE

using $MBeanNotificationInfoArray = $Array<::javax::management::MBeanNotificationInfo>;
using $JmxProperties = ::com::sun::jmx::defaults::JmxProperties;
using $Serializable = ::java::io::Serializable;
using $Boolean = ::java::lang::Boolean;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $IllegalArgumentException = ::java::lang::IllegalArgumentException;
using $Integer = ::java::lang::Integer;
using $Long = ::java::lang::Long;
using $Math = ::java::lang::Math;
using $MethodInfo = ::java::lang::MethodInfo;
using $System$Logger = ::java::lang::System$Logger;
using $System$Logger$Level = ::java::lang::System$Logger$Level;
using $CallSite = ::java::lang::invoke::CallSite;
using $LambdaMetafactory = ::java::lang::invoke::LambdaMetafactory;
using $MethodHandle = ::java::lang::invoke::MethodHandle;
using $MethodHandles$Lookup = ::java::lang::invoke::MethodHandles$Lookup;
using $MethodType = ::java::lang::invoke::MethodType;
using $AbstractMap = ::java::util::AbstractMap;
using $AbstractSet = ::java::util::AbstractSet;
using $ArrayList = ::java::util::ArrayList;
using $Collection = ::java::util::Collection;
using $Date = ::java::util::Date;
using $EventObject = ::java::util::EventObject;
using $HashMap = ::java::util::HashMap;
using $Iterator = ::java::util::Iterator;
using $Map = ::java::util::Map;
using $Map$Entry = ::java::util::Map$Entry;
using $Set = ::java::util::Set;
using $Timer = ::java::util::Timer;
using $TimerTask = ::java::util::TimerTask;
using $TreeSet = ::java::util::TreeSet;
using $Vector = ::java::util::Vector;
using $Supplier = ::java::util::function::Supplier;
using $InstanceNotFoundException = ::javax::management::InstanceNotFoundException;
using $MBeanNotificationInfo = ::javax::management::MBeanNotificationInfo;
using $MBeanRegistration = ::javax::management::MBeanRegistration;
using $MBeanServer = ::javax::management::MBeanServer;
using $Notification = ::javax::management::Notification;
using $NotificationBroadcasterSupport = ::javax::management::NotificationBroadcasterSupport;
using $ObjectName = ::javax::management::ObjectName;
using $TimerAlarmClock = ::javax::management::timer::TimerAlarmClock;
using $TimerAlarmClockNotification = ::javax::management::timer::TimerAlarmClockNotification;
using $TimerMBean = ::javax::management::timer::TimerMBean;
using $TimerNotification = ::javax::management::timer::TimerNotification;

namespace javax {
	namespace management {
		namespace timer {

class Timer$$Lambda$toString : public $Supplier {
	$class(Timer$$Lambda$toString, $NO_CLASS_INIT, $Supplier)
public:
	void init$($StringBuilder* inst) {
		$set(this, inst$, inst);
	}
	virtual $Object* get() override {
		 return $of($nc(inst$)->toString());
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<Timer$$Lambda$toString>());
	}
	$StringBuilder* inst$ = nullptr;
	static $FieldInfo fieldInfos[2];
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$FieldInfo Timer$$Lambda$toString::fieldInfos[2] = {
	{"inst$", "Ljava/lang/Object;", nullptr, $PUBLIC, $field(Timer$$Lambda$toString, inst$)},
	{}
};
$MethodInfo Timer$$Lambda$toString::methodInfos[3] = {
	{"<init>", "(Ljava/lang/StringBuilder;)V", nullptr, $PUBLIC, $method(static_cast<void(Timer$$Lambda$toString::*)($StringBuilder*)>(&Timer$$Lambda$toString::init$))},
	{"get", "()Ljava/lang/Object;", nullptr, $PUBLIC},
	{}
};
$ClassInfo Timer$$Lambda$toString::classInfo$ = {
	$PUBLIC | $FINAL,
	"javax.management.timer.Timer$$Lambda$toString",
	"java.lang.Object",
	"java.util.function.Supplier",
	fieldInfos,
	methodInfos
};
$Class* Timer$$Lambda$toString::load$($String* name, bool initialize) {
	$loadClass(Timer$$Lambda$toString, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* Timer$$Lambda$toString::class$ = nullptr;

$FieldInfo _Timer_FieldInfo_[] = {
	{"ONE_SECOND", "J", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(Timer, ONE_SECOND)},
	{"ONE_MINUTE", "J", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(Timer, ONE_MINUTE)},
	{"ONE_HOUR", "J", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(Timer, ONE_HOUR)},
	{"ONE_DAY", "J", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(Timer, ONE_DAY)},
	{"ONE_WEEK", "J", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(Timer, ONE_WEEK)},
	{"timerTable", "Ljava/util/Map;", "Ljava/util/Map<Ljava/lang/Integer;[Ljava/lang/Object;>;", $PRIVATE | $FINAL, $field(Timer, timerTable)},
	{"sendPastNotifications", "Z", nullptr, $PRIVATE, $field(Timer, sendPastNotifications$)},
	{"isActive", "Z", nullptr, $PRIVATE | $TRANSIENT, $field(Timer, isActive$)},
	{"sequenceNumber", "J", nullptr, $PRIVATE | $TRANSIENT, $field(Timer, sequenceNumber)},
	{"TIMER_NOTIF_INDEX", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(Timer, TIMER_NOTIF_INDEX)},
	{"TIMER_DATE_INDEX", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(Timer, TIMER_DATE_INDEX)},
	{"TIMER_PERIOD_INDEX", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(Timer, TIMER_PERIOD_INDEX)},
	{"TIMER_NB_OCCUR_INDEX", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(Timer, TIMER_NB_OCCUR_INDEX)},
	{"ALARM_CLOCK_INDEX", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(Timer, ALARM_CLOCK_INDEX)},
	{"FIXED_RATE_INDEX", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(Timer, FIXED_RATE_INDEX)},
	{"counterID", "I", nullptr, $PRIVATE | $VOLATILE, $field(Timer, counterID)},
	{"timer", "Ljava/util/Timer;", nullptr, $PRIVATE, $field(Timer, timer)},
	{}
};

$MethodInfo _Timer_MethodInfo_[] = {
	{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
	{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"*hashCode", "()I", nullptr, $PUBLIC | $NATIVE},
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(Timer::*)()>(&Timer::init$))},
	{"addNotification", "(Ljava/lang/String;Ljava/lang/String;Ljava/lang/Object;Ljava/util/Date;JJZ)Ljava/lang/Integer;", nullptr, $PUBLIC | $SYNCHRONIZED, nullptr, "java.lang.IllegalArgumentException"},
	{"addNotification", "(Ljava/lang/String;Ljava/lang/String;Ljava/lang/Object;Ljava/util/Date;JJ)Ljava/lang/Integer;", nullptr, $PUBLIC | $SYNCHRONIZED, nullptr, "java.lang.IllegalArgumentException"},
	{"addNotification", "(Ljava/lang/String;Ljava/lang/String;Ljava/lang/Object;Ljava/util/Date;J)Ljava/lang/Integer;", nullptr, $PUBLIC | $SYNCHRONIZED, nullptr, "java.lang.IllegalArgumentException"},
	{"addNotification", "(Ljava/lang/String;Ljava/lang/String;Ljava/lang/Object;Ljava/util/Date;)Ljava/lang/Integer;", nullptr, $PUBLIC | $SYNCHRONIZED, nullptr, "java.lang.IllegalArgumentException"},
	{"getAllNotificationIDs", "()Ljava/util/Vector;", "()Ljava/util/Vector<Ljava/lang/Integer;>;", $PUBLIC | $SYNCHRONIZED},
	{"getDate", "(Ljava/lang/Integer;)Ljava/util/Date;", nullptr, $PUBLIC | $SYNCHRONIZED},
	{"getFixedRate", "(Ljava/lang/Integer;)Ljava/lang/Boolean;", nullptr, $PUBLIC | $SYNCHRONIZED},
	{"getNbNotifications", "()I", nullptr, $PUBLIC | $SYNCHRONIZED},
	{"getNbOccurences", "(Ljava/lang/Integer;)Ljava/lang/Long;", nullptr, $PUBLIC | $SYNCHRONIZED},
	{"getNotificationIDs", "(Ljava/lang/String;)Ljava/util/Vector;", "(Ljava/lang/String;)Ljava/util/Vector<Ljava/lang/Integer;>;", $PUBLIC | $SYNCHRONIZED},
	{"getNotificationInfo", "()[Ljavax/management/MBeanNotificationInfo;", nullptr, $PUBLIC | $SYNCHRONIZED},
	{"getNotificationMessage", "(Ljava/lang/Integer;)Ljava/lang/String;", nullptr, $PUBLIC | $SYNCHRONIZED},
	{"getNotificationType", "(Ljava/lang/Integer;)Ljava/lang/String;", nullptr, $PUBLIC | $SYNCHRONIZED},
	{"getNotificationUserData", "(Ljava/lang/Integer;)Ljava/lang/Object;", nullptr, $PUBLIC | $SYNCHRONIZED},
	{"getPeriod", "(Ljava/lang/Integer;)Ljava/lang/Long;", nullptr, $PUBLIC | $SYNCHRONIZED},
	{"getSendPastNotifications", "()Z", nullptr, $PUBLIC},
	{"isActive", "()Z", nullptr, $PUBLIC},
	{"isEmpty", "()Z", nullptr, $PUBLIC | $SYNCHRONIZED},
	{"notifyAlarmClock", "(Ljavax/management/timer/TimerAlarmClockNotification;)V", nullptr, 0},
	{"postDeregister", "()V", nullptr, $PUBLIC},
	{"postRegister", "(Ljava/lang/Boolean;)V", nullptr, $PUBLIC},
	{"preDeregister", "()V", nullptr, $PUBLIC, nullptr, "java.lang.Exception"},
	{"preRegister", "(Ljavax/management/MBeanServer;Ljavax/management/ObjectName;)Ljavax/management/ObjectName;", nullptr, $PUBLIC, nullptr, "java.lang.Exception"},
	{"removeAllNotifications", "()V", nullptr, $PUBLIC | $SYNCHRONIZED},
	{"removeNotification", "(Ljava/lang/Integer;)V", nullptr, $PUBLIC | $SYNCHRONIZED, nullptr, "javax.management.InstanceNotFoundException"},
	{"removeNotifications", "(Ljava/lang/String;)V", nullptr, $PUBLIC | $SYNCHRONIZED, nullptr, "javax.management.InstanceNotFoundException"},
	{"sendNotification", "(Ljava/util/Date;Ljavax/management/timer/TimerNotification;)V", nullptr, 0},
	{"sendPastNotifications", "(Ljava/util/Date;Z)V", nullptr, $PRIVATE | $SYNCHRONIZED, $method(static_cast<void(Timer::*)($Date*,bool)>(&Timer::sendPastNotifications))},
	{"setSendPastNotifications", "(Z)V", nullptr, $PUBLIC},
	{"start", "()V", nullptr, $PUBLIC | $SYNCHRONIZED},
	{"stop", "()V", nullptr, $PUBLIC | $SYNCHRONIZED},
	{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"updateTimerTable", "(Ljava/lang/Integer;)V", nullptr, $PRIVATE | $SYNCHRONIZED, $method(static_cast<void(Timer::*)($Integer*)>(&Timer::updateTimerTable))},
	{}
};

$ClassInfo _Timer_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"javax.management.timer.Timer",
	"javax.management.NotificationBroadcasterSupport",
	"javax.management.timer.TimerMBean,javax.management.MBeanRegistration",
	_Timer_FieldInfo_,
	_Timer_MethodInfo_
};

$Object* allocate$Timer($Class* clazz) {
	return $of($alloc(Timer));
}

int32_t Timer::hashCode() {
	 return this->$NotificationBroadcasterSupport::hashCode();
}

bool Timer::equals(Object$* arg0) {
	 return this->$NotificationBroadcasterSupport::equals(arg0);
}

$Object* Timer::clone() {
	 return this->$NotificationBroadcasterSupport::clone();
}

$String* Timer::toString() {
	 return this->$NotificationBroadcasterSupport::toString();
}

void Timer::finalize() {
	this->$NotificationBroadcasterSupport::finalize();
}

void Timer::init$() {
	$NotificationBroadcasterSupport::init$();
	$set(this, timerTable, $new($HashMap));
	this->sendPastNotifications$ = false;
	this->isActive$ = false;
	this->sequenceNumber = 0;
	this->counterID = 0;
}

$ObjectName* Timer::preRegister($MBeanServer* server, $ObjectName* name) {
	return name;
}

void Timer::postRegister($Boolean* registrationDone) {
}

void Timer::preDeregister() {
	$init($JmxProperties);
	$init($System$Logger$Level);
	$nc($JmxProperties::TIMER_LOGGER)->log($System$Logger$Level::TRACE, "stop the timer"_s);
	stop();
}

void Timer::postDeregister() {
}

$MBeanNotificationInfoArray* Timer::getNotificationInfo() {
	$synchronized(this) {
		$useLocalCurrentObjectStackCache();
		$var($Set, notifTypes, static_cast<$Set*>(static_cast<$AbstractSet*>($new($TreeSet))));
		{
			$var($Iterator, i$, $nc($($nc(this->timerTable)->values()))->iterator());
			for (; $nc(i$)->hasNext();) {
				$var($ObjectArray, entry, $cast($ObjectArray, i$->next()));
				{
					$var($TimerNotification, notif, $cast($TimerNotification, $nc(entry)->get(Timer::TIMER_NOTIF_INDEX)));
					notifTypes->add($($nc(notif)->getType()));
				}
			}
		}
		$var($StringArray, notifTypesArray, $fcast($StringArray, notifTypes->toArray($$new($StringArray, 0))));
		$load($TimerNotification);
		return $new($MBeanNotificationInfoArray, {$$new($MBeanNotificationInfo, notifTypesArray, $($TimerNotification::class$->getName()), "Notification sent by Timer MBean"_s)});
	}
}

void Timer::start() {
	$synchronized(this) {
		$useLocalCurrentObjectStackCache();
		$init($JmxProperties);
		$init($System$Logger$Level);
		$nc($JmxProperties::TIMER_LOGGER)->log($System$Logger$Level::TRACE, "starting the timer"_s);
		if (this->isActive$ == false) {
			$set(this, timer, $new($Timer));
			$var($TimerAlarmClock, alarmClock, nullptr);
			$var($Date, date, nullptr);
			$var($Date, currentDate, $new($Date));
			sendPastNotifications(currentDate, this->sendPastNotifications$);
			{
				$var($Iterator, i$, $nc($($nc(this->timerTable)->values()))->iterator());
				for (; $nc(i$)->hasNext();) {
					$var($ObjectArray, obj, $cast($ObjectArray, i$->next()));
					{
						$assign(date, $cast($Date, $nc(obj)->get(Timer::TIMER_DATE_INDEX)));
						bool fixedRate = $nc(($cast($Boolean, obj->get(Timer::FIXED_RATE_INDEX))))->booleanValue();
						if (fixedRate) {
							$assign(alarmClock, $new($TimerAlarmClock, this, date));
							obj->set(Timer::ALARM_CLOCK_INDEX, $of(alarmClock));
							$nc(this->timer)->schedule(static_cast<$TimerTask*>(alarmClock), alarmClock->next);
						} else {
							int64_t var$0 = $nc(date)->getTime();
							$assign(alarmClock, $new($TimerAlarmClock, this, (var$0 - currentDate->getTime())));
							obj->set(Timer::ALARM_CLOCK_INDEX, $of(alarmClock));
							$nc(this->timer)->schedule(static_cast<$TimerTask*>(alarmClock), alarmClock->timeout);
						}
					}
				}
			}
			this->isActive$ = true;
			$nc($JmxProperties::TIMER_LOGGER)->log($System$Logger$Level::TRACE, "timer started"_s);
		} else {
			$nc($JmxProperties::TIMER_LOGGER)->log($System$Logger$Level::TRACE, "the timer is already activated"_s);
		}
	}
}

void Timer::stop() {
	$synchronized(this) {
		$useLocalCurrentObjectStackCache();
		$init($JmxProperties);
		$init($System$Logger$Level);
		$nc($JmxProperties::TIMER_LOGGER)->log($System$Logger$Level::TRACE, "stopping the timer"_s);
		if (this->isActive$ == true) {
			{
				$var($Iterator, i$, $nc($($nc(this->timerTable)->values()))->iterator());
				for (; $nc(i$)->hasNext();) {
					$var($ObjectArray, obj, $cast($ObjectArray, i$->next()));
					{
						$var($TimerAlarmClock, alarmClock, $cast($TimerAlarmClock, $nc(obj)->get(Timer::ALARM_CLOCK_INDEX)));
						if (alarmClock != nullptr) {
							alarmClock->cancel();
						}
					}
				}
			}
			$nc(this->timer)->cancel();
			this->isActive$ = false;
			$nc($JmxProperties::TIMER_LOGGER)->log($System$Logger$Level::TRACE, "timer stopped"_s);
		} else {
			$nc($JmxProperties::TIMER_LOGGER)->log($System$Logger$Level::TRACE, "the timer is already deactivated"_s);
		}
	}
}

$Integer* Timer::addNotification($String* type, $String* message, Object$* userData, $Date* date, int64_t period, int64_t nbOccurences, bool fixedRate) {
	$synchronized(this) {
		$useLocalCurrentObjectStackCache();
		if (date == nullptr) {
			$throwNew($IllegalArgumentException, "Timer notification date cannot be null."_s);
		}
		if ((period < 0) || (nbOccurences < 0)) {
			$throwNew($IllegalArgumentException, "Negative values for the periodicity"_s);
		}
		$var($Date, currentDate, $new($Date));
		if (currentDate->after(date)) {
			$nc(date)->setTime(currentDate->getTime());
			$init($JmxProperties);
			$init($System$Logger$Level);
			if ($nc($JmxProperties::TIMER_LOGGER)->isLoggable($System$Logger$Level::TRACE)) {
				$nc($JmxProperties::TIMER_LOGGER)->log($System$Logger$Level::TRACE, $$str({"update timer notification to add with:\n\tNotification date = "_s, date}));
			}
		}
		$var($Integer, notifID, $Integer::valueOf(++this->counterID));
		$var($TimerNotification, notif, $new($TimerNotification, type, this, 0, 0, message, notifID));
		notif->setUserData(userData);
		$var($ObjectArray, obj, $new($ObjectArray, 6));
		$var($TimerAlarmClock, alarmClock, nullptr);
		if (fixedRate) {
			$assign(alarmClock, $new($TimerAlarmClock, this, date));
		} else {
			int64_t var$0 = $nc(date)->getTime();
			$assign(alarmClock, $new($TimerAlarmClock, this, (var$0 - currentDate->getTime())));
		}
		$var($Date, d, $new($Date, $nc(date)->getTime()));
		obj->set(Timer::TIMER_NOTIF_INDEX, $of(notif));
		obj->set(Timer::TIMER_DATE_INDEX, $of(d));
		obj->set(Timer::TIMER_PERIOD_INDEX, $of($($Long::valueOf(period))));
		obj->set(Timer::TIMER_NB_OCCUR_INDEX, $of($($Long::valueOf(nbOccurences))));
		obj->set(Timer::ALARM_CLOCK_INDEX, $of(alarmClock));
		obj->set(Timer::FIXED_RATE_INDEX, $($Boolean::valueOf(fixedRate)));
		$init($JmxProperties);
		$init($System$Logger$Level);
		if ($nc($JmxProperties::TIMER_LOGGER)->isLoggable($System$Logger$Level::TRACE)) {
			$var($StringBuilder, strb, $$new($StringBuilder)->append("adding timer notification:\n\t"_s)->append("Notification source = "_s)->append($(notif->getSource()))->append("\n\tNotification type = "_s)->append($(notif->getType()))->append("\n\tNotification ID = "_s)->append($of(notifID))->append("\n\tNotification date = "_s)->append($of(d))->append("\n\tNotification period = "_s)->append(period)->append("\n\tNotification nb of occurrences = "_s)->append(nbOccurences)->append("\n\tNotification executes at fixed rate = "_s)->append(fixedRate));
			$nc($JmxProperties::TIMER_LOGGER)->log($System$Logger$Level::TRACE, static_cast<$Supplier*>($$new(Timer$$Lambda$toString, static_cast<$StringBuilder*>(strb))));
		}
		$nc(this->timerTable)->put(notifID, obj);
		if (this->isActive$ == true) {
			if (fixedRate) {
				$nc(this->timer)->schedule(static_cast<$TimerTask*>(alarmClock), $nc(alarmClock)->next);
			} else {
				$nc(this->timer)->schedule(static_cast<$TimerTask*>(alarmClock), $nc(alarmClock)->timeout);
			}
		}
		$nc($JmxProperties::TIMER_LOGGER)->log($System$Logger$Level::TRACE, "timer notification added"_s);
		return notifID;
	}
}

$Integer* Timer::addNotification($String* type, $String* message, Object$* userData, $Date* date, int64_t period, int64_t nbOccurences) {
	$synchronized(this) {
		return addNotification(type, message, userData, date, period, nbOccurences, false);
	}
}

$Integer* Timer::addNotification($String* type, $String* message, Object$* userData, $Date* date, int64_t period) {
	$synchronized(this) {
		return (addNotification(type, message, userData, date, period, 0));
	}
}

$Integer* Timer::addNotification($String* type, $String* message, Object$* userData, $Date* date) {
	$synchronized(this) {
		return (addNotification(type, message, userData, date, 0, 0));
	}
}

void Timer::removeNotification($Integer* id) {
	$synchronized(this) {
		$useLocalCurrentObjectStackCache();
		if ($nc(this->timerTable)->containsKey(id) == false) {
			$throwNew($InstanceNotFoundException, "Timer notification to remove not in the list of notifications"_s);
		}
		$var($ObjectArray, obj, $cast($ObjectArray, $nc(this->timerTable)->get(id)));
		$var($TimerAlarmClock, alarmClock, $cast($TimerAlarmClock, $nc(obj)->get(Timer::ALARM_CLOCK_INDEX)));
		if (alarmClock != nullptr) {
			alarmClock->cancel();
		}
		$init($JmxProperties);
		$init($System$Logger$Level);
		if ($nc($JmxProperties::TIMER_LOGGER)->isLoggable($System$Logger$Level::TRACE)) {
			$var($StringBuilder, strb, $$new($StringBuilder)->append("removing timer notification:"_s)->append("\n\tNotification source = "_s)->append($($nc(($cast($TimerNotification, obj->get(Timer::TIMER_NOTIF_INDEX))))->getSource()))->append("\n\tNotification type = "_s)->append($($nc(($cast($TimerNotification, obj->get(Timer::TIMER_NOTIF_INDEX))))->getType()))->append("\n\tNotification ID = "_s)->append($($of($nc(($cast($TimerNotification, obj->get(Timer::TIMER_NOTIF_INDEX))))->getNotificationID())))->append("\n\tNotification date = "_s)->append(obj->get(Timer::TIMER_DATE_INDEX))->append("\n\tNotification period = "_s)->append(obj->get(Timer::TIMER_PERIOD_INDEX))->append("\n\tNotification nb of occurrences = "_s)->append(obj->get(Timer::TIMER_NB_OCCUR_INDEX))->append("\n\tNotification executes at fixed rate = "_s)->append(obj->get(Timer::FIXED_RATE_INDEX)));
			$nc($JmxProperties::TIMER_LOGGER)->log($System$Logger$Level::TRACE, static_cast<$Supplier*>($$new(Timer$$Lambda$toString, static_cast<$StringBuilder*>(strb))));
		}
		$nc(this->timerTable)->remove(id);
		$nc($JmxProperties::TIMER_LOGGER)->log($System$Logger$Level::TRACE, "timer notification removed"_s);
	}
}

void Timer::removeNotifications($String* type) {
	$synchronized(this) {
		$useLocalCurrentObjectStackCache();
		$var($Vector, v, getNotificationIDs(type));
		if ($nc(v)->isEmpty()) {
			$throwNew($InstanceNotFoundException, "Timer notifications to remove not in the list of notifications"_s);
		}
		{
			$var($Iterator, i$, $nc(v)->iterator());
			for (; $nc(i$)->hasNext();) {
				$var($Integer, i, $cast($Integer, i$->next()));
				removeNotification(i);
			}
		}
	}
}

void Timer::removeAllNotifications() {
	$synchronized(this) {
		$useLocalCurrentObjectStackCache();
		$var($TimerAlarmClock, alarmClock, nullptr);
		{
			$var($Iterator, i$, $nc($($nc(this->timerTable)->values()))->iterator());
			for (; $nc(i$)->hasNext();) {
				$var($ObjectArray, obj, $cast($ObjectArray, i$->next()));
				{
					$assign(alarmClock, $cast($TimerAlarmClock, $nc(obj)->get(Timer::ALARM_CLOCK_INDEX)));
					$nc(alarmClock)->cancel();
				}
			}
		}
		$init($JmxProperties);
		$init($System$Logger$Level);
		$nc($JmxProperties::TIMER_LOGGER)->log($System$Logger$Level::TRACE, "removing all timer notifications"_s);
		$nc(this->timerTable)->clear();
		$nc($JmxProperties::TIMER_LOGGER)->log($System$Logger$Level::TRACE, "all timer notifications removed"_s);
		this->counterID = 0;
		$nc($JmxProperties::TIMER_LOGGER)->log($System$Logger$Level::TRACE, "timer notification counter ID reset"_s);
	}
}

int32_t Timer::getNbNotifications() {
	$synchronized(this) {
		return $nc(this->timerTable)->size();
	}
}

$Vector* Timer::getAllNotificationIDs() {
	$synchronized(this) {
		return $new($Vector, $(static_cast<$Collection*>($nc(this->timerTable)->keySet())));
	}
}

$Vector* Timer::getNotificationIDs($String* type) {
	$synchronized(this) {
		$useLocalCurrentObjectStackCache();
		$var($String, s, nullptr);
		$var($Vector, v, $new($Vector));
		{
			$var($Iterator, i$, $nc($($nc(this->timerTable)->entrySet()))->iterator());
			for (; $nc(i$)->hasNext();) {
				$var($Map$Entry, entry, $cast($Map$Entry, i$->next()));
				{
					$var($ObjectArray, obj, $cast($ObjectArray, $nc(entry)->getValue()));
					$assign(s, $nc(($cast($TimerNotification, $nc(obj)->get(Timer::TIMER_NOTIF_INDEX))))->getType());
					if ((type == nullptr) ? s == nullptr : $nc(type)->equals(s)) {
						v->addElement($cast($Integer, $(entry->getKey())));
					}
				}
			}
		}
		return v;
	}
}

$String* Timer::getNotificationType($Integer* id) {
	$synchronized(this) {
		$var($ObjectArray, obj, $cast($ObjectArray, $nc(this->timerTable)->get(id)));
		if (obj != nullptr) {
			return ($nc(($cast($TimerNotification, obj->get(Timer::TIMER_NOTIF_INDEX))))->getType());
		}
		return nullptr;
	}
}

$String* Timer::getNotificationMessage($Integer* id) {
	$synchronized(this) {
		$var($ObjectArray, obj, $cast($ObjectArray, $nc(this->timerTable)->get(id)));
		if (obj != nullptr) {
			return ($nc(($cast($TimerNotification, obj->get(Timer::TIMER_NOTIF_INDEX))))->getMessage());
		}
		return nullptr;
	}
}

$Object* Timer::getNotificationUserData($Integer* id) {
	$synchronized(this) {
		$var($ObjectArray, obj, $cast($ObjectArray, $nc(this->timerTable)->get(id)));
		if (obj != nullptr) {
			return $of(($nc(($cast($TimerNotification, obj->get(Timer::TIMER_NOTIF_INDEX))))->getUserData()));
		}
		return $of(nullptr);
	}
}

$Date* Timer::getDate($Integer* id) {
	$synchronized(this) {
		$useLocalCurrentObjectStackCache();
		$var($ObjectArray, obj, $cast($ObjectArray, $nc(this->timerTable)->get(id)));
		if (obj != nullptr) {
			$var($Date, date, $cast($Date, obj->get(Timer::TIMER_DATE_INDEX)));
			return ($new($Date, $nc(date)->getTime()));
		}
		return nullptr;
	}
}

$Long* Timer::getPeriod($Integer* id) {
	$synchronized(this) {
		$var($ObjectArray, obj, $cast($ObjectArray, $nc(this->timerTable)->get(id)));
		if (obj != nullptr) {
			return $cast($Long, obj->get(Timer::TIMER_PERIOD_INDEX));
		}
		return nullptr;
	}
}

$Long* Timer::getNbOccurences($Integer* id) {
	$synchronized(this) {
		$var($ObjectArray, obj, $cast($ObjectArray, $nc(this->timerTable)->get(id)));
		if (obj != nullptr) {
			return $cast($Long, obj->get(Timer::TIMER_NB_OCCUR_INDEX));
		}
		return nullptr;
	}
}

$Boolean* Timer::getFixedRate($Integer* id) {
	$synchronized(this) {
		$useLocalCurrentObjectStackCache();
		$var($ObjectArray, obj, $cast($ObjectArray, $nc(this->timerTable)->get(id)));
		if (obj != nullptr) {
			$var($Boolean, fixedRate, $cast($Boolean, obj->get(Timer::FIXED_RATE_INDEX)));
			return ($Boolean::valueOf($nc(fixedRate)->booleanValue()));
		}
		return nullptr;
	}
}

bool Timer::getSendPastNotifications() {
	return this->sendPastNotifications$;
}

void Timer::setSendPastNotifications(bool value) {
	this->sendPastNotifications$ = value;
}

bool Timer::isActive() {
	return this->isActive$;
}

bool Timer::isEmpty() {
	$synchronized(this) {
		return ($nc(this->timerTable)->isEmpty());
	}
}

void Timer::sendPastNotifications($Date* currentDate, bool currentFlag) {
	$synchronized(this) {
		$useLocalCurrentObjectStackCache();
		$var($TimerNotification, notif, nullptr);
		$var($Integer, notifID, nullptr);
		$var($Date, date, nullptr);
		$var($ArrayList, values, $new($ArrayList, $($nc(this->timerTable)->values())));
		{
			$var($Iterator, i$, values->iterator());
			for (; $nc(i$)->hasNext();) {
				$var($ObjectArray, obj, $cast($ObjectArray, i$->next()));
				{
					$assign(notif, $cast($TimerNotification, $nc(obj)->get(Timer::TIMER_NOTIF_INDEX)));
					$assign(notifID, $nc(notif)->getNotificationID());
					$assign(date, $cast($Date, obj->get(Timer::TIMER_DATE_INDEX)));
					while (true) {
						bool var$0 = ($nc(currentDate)->after(date));
						if (!(var$0 && ($nc(this->timerTable)->containsKey(notifID)))) {
							break;
						}
						{
							if (currentFlag == true) {
								$init($JmxProperties);
								$init($System$Logger$Level);
								if ($nc($JmxProperties::TIMER_LOGGER)->isLoggable($System$Logger$Level::TRACE)) {
									$var($StringBuilder, strb, $$new($StringBuilder)->append("sending past timer notification:"_s)->append("\n\tNotification source = "_s)->append($(notif->getSource()))->append("\n\tNotification type = "_s)->append($(notif->getType()))->append("\n\tNotification ID = "_s)->append($($of(notif->getNotificationID())))->append("\n\tNotification date = "_s)->append($of(date))->append("\n\tNotification period = "_s)->append(obj->get(Timer::TIMER_PERIOD_INDEX))->append("\n\tNotification nb of occurrences = "_s)->append(obj->get(Timer::TIMER_NB_OCCUR_INDEX))->append("\n\tNotification executes at fixed rate = "_s)->append(obj->get(Timer::FIXED_RATE_INDEX)));
									$nc($JmxProperties::TIMER_LOGGER)->log($System$Logger$Level::TRACE, static_cast<$Supplier*>($$new(Timer$$Lambda$toString, static_cast<$StringBuilder*>(strb))));
								}
								sendNotification(date, notif);
								$nc($JmxProperties::TIMER_LOGGER)->log($System$Logger$Level::TRACE, "past timer notification sent"_s);
							}
							updateTimerTable($(notif->getNotificationID()));
						}
					}
				}
			}
		}
	}
}

void Timer::updateTimerTable($Integer* notifID) {
	$synchronized(this) {
		$useLocalCurrentObjectStackCache();
		$var($ObjectArray, obj, $cast($ObjectArray, $nc(this->timerTable)->get(notifID)));
		$var($Date, date, $cast($Date, $nc(obj)->get(Timer::TIMER_DATE_INDEX)));
		$var($Long, period, $cast($Long, obj->get(Timer::TIMER_PERIOD_INDEX)));
		$var($Long, nbOccurences, $cast($Long, obj->get(Timer::TIMER_NB_OCCUR_INDEX)));
		$var($Boolean, fixedRate, $cast($Boolean, obj->get(Timer::FIXED_RATE_INDEX)));
		$var($TimerAlarmClock, alarmClock, $cast($TimerAlarmClock, obj->get(Timer::ALARM_CLOCK_INDEX)));
		if ($nc(period)->longValue() != 0) {
			bool var$0 = ($nc(nbOccurences)->longValue() == 0);
			if (var$0 || ($nc(nbOccurences)->longValue() > 1)) {
				int64_t var$1 = date->getTime();
				$nc(date)->setTime(var$1 + period->longValue());
				obj->set(Timer::TIMER_NB_OCCUR_INDEX, $($Long::valueOf($Math::max((int64_t)0, (nbOccurences->longValue() - 1)))));
				$assign(nbOccurences, $cast($Long, obj->get(Timer::TIMER_NB_OCCUR_INDEX)));
				if (this->isActive$ == true) {
					if ($nc(fixedRate)->booleanValue()) {
						$assign(alarmClock, $new($TimerAlarmClock, this, date));
						obj->set(Timer::ALARM_CLOCK_INDEX, $of(alarmClock));
						$nc(this->timer)->schedule(static_cast<$TimerTask*>(alarmClock), alarmClock->next);
					} else {
						$assign(alarmClock, $new($TimerAlarmClock, this, period->longValue()));
						obj->set(Timer::ALARM_CLOCK_INDEX, $of(alarmClock));
						$nc(this->timer)->schedule(static_cast<$TimerTask*>(alarmClock), alarmClock->timeout);
					}
				}
				$init($JmxProperties);
				$init($System$Logger$Level);
				if ($nc($JmxProperties::TIMER_LOGGER)->isLoggable($System$Logger$Level::TRACE)) {
					$var($TimerNotification, notif, $cast($TimerNotification, obj->get(Timer::TIMER_NOTIF_INDEX)));
					$var($StringBuilder, strb, $$new($StringBuilder)->append("update timer notification with:"_s)->append("\n\tNotification source = "_s)->append($($nc(notif)->getSource()))->append("\n\tNotification type = "_s)->append($($nc(notif)->getType()))->append("\n\tNotification ID = "_s)->append($of(notifID))->append("\n\tNotification date = "_s)->append($of(date))->append("\n\tNotification period = "_s)->append($of(period))->append("\n\tNotification nb of occurrences = "_s)->append($of(nbOccurences))->append("\n\tNotification executes at fixed rate = "_s)->append($of(fixedRate)));
					$nc($JmxProperties::TIMER_LOGGER)->log($System$Logger$Level::TRACE, static_cast<$Supplier*>($$new(Timer$$Lambda$toString, static_cast<$StringBuilder*>(strb))));
				}
			} else {
				if (alarmClock != nullptr) {
					alarmClock->cancel();
				}
				$nc(this->timerTable)->remove(notifID);
			}
		} else {
			if (alarmClock != nullptr) {
				alarmClock->cancel();
			}
			$nc(this->timerTable)->remove(notifID);
		}
	}
}

void Timer::notifyAlarmClock($TimerAlarmClockNotification* notification) {
	$useLocalCurrentObjectStackCache();
	$var($TimerNotification, timerNotification, nullptr);
	$var($Date, timerDate, nullptr);
	$var($TimerAlarmClock, alarmClock, $cast($TimerAlarmClock, $nc(notification)->getSource()));
	$synchronized(this) {
		{
			$var($Iterator, i$, $nc($($nc(this->timerTable)->values()))->iterator());
			for (; $nc(i$)->hasNext();) {
				$var($ObjectArray, obj, $cast($ObjectArray, i$->next()));
				{
					if ($equals($nc(obj)->get(Timer::ALARM_CLOCK_INDEX), alarmClock)) {
						$assign(timerNotification, $cast($TimerNotification, obj->get(Timer::TIMER_NOTIF_INDEX)));
						$assign(timerDate, $cast($Date, obj->get(Timer::TIMER_DATE_INDEX)));
						break;
					}
				}
			}
		}
	}
	sendNotification(timerDate, timerNotification);
	updateTimerTable($($nc(timerNotification)->getNotificationID()));
}

void Timer::sendNotification($Date* timeStamp, $TimerNotification* notification) {
	$useLocalCurrentObjectStackCache();
	$init($JmxProperties);
	$init($System$Logger$Level);
	if ($nc($JmxProperties::TIMER_LOGGER)->isLoggable($System$Logger$Level::TRACE)) {
		$var($StringBuilder, strb, $$new($StringBuilder)->append("sending timer notification:"_s)->append("\n\tNotification source = "_s)->append($($nc(notification)->getSource()))->append("\n\tNotification type = "_s)->append($($nc(notification)->getType()))->append("\n\tNotification ID = "_s)->append($($of($nc(notification)->getNotificationID())))->append("\n\tNotification date = "_s)->append($of(timeStamp)));
		$nc($JmxProperties::TIMER_LOGGER)->log($System$Logger$Level::TRACE, static_cast<$Supplier*>($$new(Timer$$Lambda$toString, static_cast<$StringBuilder*>(strb))));
	}
	int64_t curSeqNumber = 0;
	$synchronized(this) {
		this->sequenceNumber = this->sequenceNumber + 1;
		curSeqNumber = this->sequenceNumber;
	}
	$synchronized(notification) {
		$nc(notification)->setTimeStamp($nc(timeStamp)->getTime());
		notification->setSequenceNumber(curSeqNumber);
		this->sendNotification($cast($TimerNotification, $(notification->cloneTimerNotification())));
	}
	$nc($JmxProperties::TIMER_LOGGER)->log($System$Logger$Level::TRACE, "timer notification sent"_s);
}

Timer::Timer() {
}

$Class* Timer::load$($String* name, bool initialize) {
	if (name != nullptr) {
		if (name->equals(Timer$$Lambda$toString::classInfo$.name)) {
			return Timer$$Lambda$toString::load$(name, initialize);
		}
	}
	$loadClass(Timer, name, initialize, &_Timer_ClassInfo_, allocate$Timer);
	return class$;
}

$Class* Timer::class$ = nullptr;

		} // timer
	} // management
} // javax
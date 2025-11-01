#ifndef _javax_management_timer_Timer_h_
#define _javax_management_timer_Timer_h_
//$ class javax.management.timer.Timer
//$ extends javax.management.NotificationBroadcasterSupport
//$ implements javax.management.timer.TimerMBean,javax.management.MBeanRegistration

#include <java/lang/Array.h>
#include <javax/management/MBeanRegistration.h>
#include <javax/management/NotificationBroadcasterSupport.h>
#include <javax/management/timer/TimerMBean.h>

#pragma push_macro("ALARM_CLOCK_INDEX")
#undef ALARM_CLOCK_INDEX
#pragma push_macro("FIXED_RATE_INDEX")
#undef FIXED_RATE_INDEX
#pragma push_macro("ONE_DAY")
#undef ONE_DAY
#pragma push_macro("ONE_HOUR")
#undef ONE_HOUR
#pragma push_macro("ONE_MINUTE")
#undef ONE_MINUTE
#pragma push_macro("ONE_SECOND")
#undef ONE_SECOND
#pragma push_macro("ONE_WEEK")
#undef ONE_WEEK
#pragma push_macro("TIMER_DATE_INDEX")
#undef TIMER_DATE_INDEX
#pragma push_macro("TIMER_NB_OCCUR_INDEX")
#undef TIMER_NB_OCCUR_INDEX
#pragma push_macro("TIMER_NOTIF_INDEX")
#undef TIMER_NOTIF_INDEX
#pragma push_macro("TIMER_PERIOD_INDEX")
#undef TIMER_PERIOD_INDEX

namespace java {
	namespace lang {
		class Boolean;
		class Integer;
		class Long;
	}
}
namespace java {
	namespace util {
		class Date;
		class Map;
		class Timer;
		class Vector;
	}
}
namespace javax {
	namespace management {
		class MBeanNotificationInfo;
		class MBeanServer;
		class ObjectName;
	}
}
namespace javax {
	namespace management {
		namespace timer {
			class TimerAlarmClockNotification;
			class TimerNotification;
		}
	}
}

namespace javax {
	namespace management {
		namespace timer {

class $export Timer : public ::javax::management::NotificationBroadcasterSupport, public ::javax::management::timer::TimerMBean, public ::javax::management::MBeanRegistration {
	$class(Timer, $NO_CLASS_INIT, ::javax::management::NotificationBroadcasterSupport, ::javax::management::timer::TimerMBean, ::javax::management::MBeanRegistration)
public:
	Timer();
	virtual $Object* clone() override;
	virtual bool equals(Object$* arg0) override;
	virtual void finalize() override;
	virtual int32_t hashCode() override;
	void init$();
	virtual ::java::lang::Integer* addNotification($String* type, $String* message, Object$* userData, ::java::util::Date* date, int64_t period, int64_t nbOccurences, bool fixedRate) override;
	virtual ::java::lang::Integer* addNotification($String* type, $String* message, Object$* userData, ::java::util::Date* date, int64_t period, int64_t nbOccurences) override;
	virtual ::java::lang::Integer* addNotification($String* type, $String* message, Object$* userData, ::java::util::Date* date, int64_t period) override;
	virtual ::java::lang::Integer* addNotification($String* type, $String* message, Object$* userData, ::java::util::Date* date) override;
	virtual ::java::util::Vector* getAllNotificationIDs() override;
	virtual ::java::util::Date* getDate(::java::lang::Integer* id) override;
	virtual ::java::lang::Boolean* getFixedRate(::java::lang::Integer* id) override;
	virtual int32_t getNbNotifications() override;
	virtual ::java::lang::Long* getNbOccurences(::java::lang::Integer* id) override;
	virtual ::java::util::Vector* getNotificationIDs($String* type) override;
	virtual $Array<::javax::management::MBeanNotificationInfo>* getNotificationInfo() override;
	virtual $String* getNotificationMessage(::java::lang::Integer* id) override;
	virtual $String* getNotificationType(::java::lang::Integer* id) override;
	virtual $Object* getNotificationUserData(::java::lang::Integer* id) override;
	virtual ::java::lang::Long* getPeriod(::java::lang::Integer* id) override;
	virtual bool getSendPastNotifications() override;
	virtual bool isActive() override;
	virtual bool isEmpty() override;
	virtual void notifyAlarmClock(::javax::management::timer::TimerAlarmClockNotification* notification);
	virtual void postDeregister() override;
	virtual void postRegister(::java::lang::Boolean* registrationDone) override;
	virtual void preDeregister() override;
	virtual ::javax::management::ObjectName* preRegister(::javax::management::MBeanServer* server, ::javax::management::ObjectName* name) override;
	virtual void removeAllNotifications() override;
	virtual void removeNotification(::java::lang::Integer* id) override;
	virtual void removeNotifications($String* type) override;
	using ::javax::management::NotificationBroadcasterSupport::sendNotification;
	virtual void sendNotification(::java::util::Date* timeStamp, ::javax::management::timer::TimerNotification* notification);
	void sendPastNotifications(::java::util::Date* currentDate, bool currentFlag);
	virtual void setSendPastNotifications(bool value) override;
	virtual void start() override;
	virtual void stop() override;
	virtual $String* toString() override;
	void updateTimerTable(::java::lang::Integer* notifID);
	static const int64_t ONE_SECOND = 1000;
	static const int64_t ONE_MINUTE = 60000; // 60 * ONE_SECOND
	static const int64_t ONE_HOUR = 3600000; // 60 * ONE_MINUTE
	static const int64_t ONE_DAY = 86400000; // 24 * ONE_HOUR
	static const int64_t ONE_WEEK = 604800000; // 7 * ONE_DAY
	::java::util::Map* timerTable = nullptr;
	bool sendPastNotifications$ = false;
	bool isActive$ = false;
	int64_t sequenceNumber = 0;
	static const int32_t TIMER_NOTIF_INDEX = 0;
	static const int32_t TIMER_DATE_INDEX = 1;
	static const int32_t TIMER_PERIOD_INDEX = 2;
	static const int32_t TIMER_NB_OCCUR_INDEX = 3;
	static const int32_t ALARM_CLOCK_INDEX = 4;
	static const int32_t FIXED_RATE_INDEX = 5;
	$volatile(int32_t) counterID = 0;
	::java::util::Timer* timer = nullptr;
};

		} // timer
	} // management
} // javax

#pragma pop_macro("ALARM_CLOCK_INDEX")
#pragma pop_macro("FIXED_RATE_INDEX")
#pragma pop_macro("ONE_DAY")
#pragma pop_macro("ONE_HOUR")
#pragma pop_macro("ONE_MINUTE")
#pragma pop_macro("ONE_SECOND")
#pragma pop_macro("ONE_WEEK")
#pragma pop_macro("TIMER_DATE_INDEX")
#pragma pop_macro("TIMER_NB_OCCUR_INDEX")
#pragma pop_macro("TIMER_NOTIF_INDEX")
#pragma pop_macro("TIMER_PERIOD_INDEX")

#endif // _javax_management_timer_Timer_h_
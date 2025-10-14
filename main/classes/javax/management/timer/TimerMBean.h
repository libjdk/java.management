#ifndef _javax_management_timer_TimerMBean_h_
#define _javax_management_timer_TimerMBean_h_
//$ interface javax.management.timer.TimerMBean
//$ extends java.lang.Object

#include <java/lang/Object.h>

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
		class Vector;
	}
}

namespace javax {
	namespace management {
		namespace timer {

class $export TimerMBean : public ::java::lang::Object {
	$interface(TimerMBean, $NO_CLASS_INIT, ::java::lang::Object)
public:
	virtual ::java::lang::Integer* addNotification($String* type, $String* message, Object$* userData, ::java::util::Date* date, int64_t period, int64_t nbOccurences, bool fixedRate) {return nullptr;}
	virtual ::java::lang::Integer* addNotification($String* type, $String* message, Object$* userData, ::java::util::Date* date, int64_t period, int64_t nbOccurences) {return nullptr;}
	virtual ::java::lang::Integer* addNotification($String* type, $String* message, Object$* userData, ::java::util::Date* date, int64_t period) {return nullptr;}
	virtual ::java::lang::Integer* addNotification($String* type, $String* message, Object$* userData, ::java::util::Date* date) {return nullptr;}
	virtual ::java::util::Vector* getAllNotificationIDs() {return nullptr;}
	virtual ::java::util::Date* getDate(::java::lang::Integer* id) {return nullptr;}
	virtual ::java::lang::Boolean* getFixedRate(::java::lang::Integer* id) {return nullptr;}
	virtual int32_t getNbNotifications() {return 0;}
	virtual ::java::lang::Long* getNbOccurences(::java::lang::Integer* id) {return nullptr;}
	virtual ::java::util::Vector* getNotificationIDs($String* type) {return nullptr;}
	virtual $String* getNotificationMessage(::java::lang::Integer* id) {return nullptr;}
	virtual $String* getNotificationType(::java::lang::Integer* id) {return nullptr;}
	virtual $Object* getNotificationUserData(::java::lang::Integer* id) {return nullptr;}
	virtual ::java::lang::Long* getPeriod(::java::lang::Integer* id) {return nullptr;}
	virtual bool getSendPastNotifications() {return false;}
	virtual bool isActive() {return false;}
	virtual bool isEmpty() {return false;}
	virtual void removeAllNotifications() {}
	virtual void removeNotification(::java::lang::Integer* id) {}
	virtual void removeNotifications($String* type) {}
	virtual void setSendPastNotifications(bool value) {}
	virtual void start() {}
	virtual void stop() {}
};

		} // timer
	} // management
} // javax

#endif // _javax_management_timer_TimerMBean_h_
#ifndef _javax_management_monitor_CounterMonitor_h_
#define _javax_management_monitor_CounterMonitor_h_
//$ class javax.management.monitor.CounterMonitor
//$ extends javax.management.monitor.Monitor
//$ implements javax.management.monitor.CounterMonitorMBean

#include <java/lang/Array.h>
#include <javax/management/monitor/CounterMonitorMBean.h>
#include <javax/management/monitor/Monitor.h>

namespace java {
	namespace lang {
		class Comparable;
		class Number;
	}
}
namespace javax {
	namespace management {
		class MBeanNotificationInfo;
		class ObjectName;
	}
}
namespace javax {
	namespace management {
		namespace monitor {
			class CounterMonitor$CounterMonitorObservedObject;
			class Monitor$ObservedObject;
			class MonitorNotification;
		}
	}
}

namespace javax {
	namespace management {
		namespace monitor {

class $export CounterMonitor : public ::javax::management::monitor::Monitor {
	$class(CounterMonitor, 0, ::javax::management::monitor::Monitor, ::javax::management::monitor::CounterMonitorMBean)
public:
	CounterMonitor();
	using ::javax::management::monitor::Monitor::getObservedObject;
	virtual void addObservedObject(::javax::management::ObjectName* object) override;
	virtual $Object* clone() override;
	virtual bool containsObservedObject(::javax::management::ObjectName* object) override;
	virtual bool equals(Object$* arg0) override;
	virtual void finalize() override;
	virtual int64_t getGranularityPeriod() override;
	virtual $String* getObservedAttribute() override;
	virtual ::javax::management::ObjectName* getObservedObject() override;
	virtual $Array<::javax::management::ObjectName>* getObservedObjects() override;
	virtual int32_t hashCode() override;
	virtual bool isActive() override;
	void init$();
	virtual ::javax::management::monitor::MonitorNotification* buildAlarmNotification(::javax::management::ObjectName* object, $String* attribute, ::java::lang::Comparable* value) override;
	virtual ::javax::management::monitor::Monitor$ObservedObject* createObservedObject(::javax::management::ObjectName* object) override;
	virtual $Object* getDerivedGauge(::javax::management::ObjectName* object) override;
	virtual ::java::lang::Number* getDerivedGauge();
	virtual ::java::lang::Comparable* getDerivedGaugeFromComparable(::javax::management::ObjectName* object, $String* attribute, ::java::lang::Comparable* value) override;
	virtual int64_t getDerivedGaugeTimeStamp(::javax::management::ObjectName* object) override;
	virtual int64_t getDerivedGaugeTimeStamp();
	virtual bool getDifferenceMode();
	virtual ::java::lang::Number* getInitThreshold();
	virtual ::java::lang::Number* getModulus();
	virtual $Array<::javax::management::MBeanNotificationInfo>* getNotificationInfo() override;
	virtual bool getNotify();
	virtual ::java::lang::Number* getOffset();
	virtual ::java::lang::Number* getThreshold(::javax::management::ObjectName* object);
	virtual ::java::lang::Number* getThreshold();
	virtual bool isComparableTypeValid(::javax::management::ObjectName* object, $String* attribute, ::java::lang::Comparable* value) override;
	virtual bool isThresholdTypeValid(::javax::management::ObjectName* object, $String* attribute, ::java::lang::Comparable* value) override;
	virtual void onErrorNotification(::javax::management::monitor::MonitorNotification* notification) override;
	virtual void removeObservedObject(::javax::management::ObjectName* object) override;
	void setDerivedGaugeWithDifference(::java::lang::Number* scanCounter, ::java::lang::Number* mod, ::javax::management::monitor::CounterMonitor$CounterMonitorObservedObject* o);
	virtual void setDifferenceMode(bool value);
	virtual void setGranularityPeriod(int64_t period) override;
	virtual void setInitThreshold(::java::lang::Number* value);
	virtual void setModulus(::java::lang::Number* value);
	virtual void setNotify(bool value);
	virtual void setObservedAttribute($String* attribute) override;
	virtual void setObservedObject(::javax::management::ObjectName* object) override;
	virtual void setOffset(::java::lang::Number* value);
	virtual void setThreshold(::java::lang::Number* value);
	virtual void start() override;
	virtual void stop() override;
	virtual $String* toString() override;
	bool updateDerivedGauge(Object$* scanCounter, ::javax::management::monitor::CounterMonitor$CounterMonitorObservedObject* o);
	::javax::management::monitor::MonitorNotification* updateNotifications(::javax::management::monitor::CounterMonitor$CounterMonitorObservedObject* o);
	void updateThreshold(::javax::management::monitor::CounterMonitor$CounterMonitorObservedObject* o);
	class $export MemberClass0$ : public ::javax::management::monitor::CounterMonitorMBean {
	public:
		MemberClass0$();
		virtual ::java::lang::Number* getDerivedGauge() override;
		virtual int64_t getDerivedGaugeTimeStamp() override;
		virtual ::java::lang::Number* getThreshold() override;
		virtual void setThreshold(::java::lang::Number* value) override;
		virtual ::java::lang::Number* getDerivedGauge(::javax::management::ObjectName* object) override;
		virtual int64_t getDerivedGaugeTimeStamp(::javax::management::ObjectName* object) override;
		virtual ::java::lang::Number* getThreshold(::javax::management::ObjectName* object) override;
		virtual ::java::lang::Number* getInitThreshold() override;
		virtual void setInitThreshold(::java::lang::Number* value) override;
		virtual ::java::lang::Number* getOffset() override;
		virtual void setOffset(::java::lang::Number* value) override;
		virtual ::java::lang::Number* getModulus() override;
		virtual void setModulus(::java::lang::Number* value) override;
		virtual bool getNotify() override;
		virtual void setNotify(bool value) override;
		virtual bool getDifferenceMode() override;
		virtual void setDifferenceMode(bool value) override;
		virtual void start() override;
		virtual void stop() override;
		virtual void addObservedObject(::javax::management::ObjectName* object) override;
		virtual void removeObservedObject(::javax::management::ObjectName* object) override;
		virtual bool containsObservedObject(::javax::management::ObjectName* object) override;
		virtual $Array<::javax::management::ObjectName>* getObservedObjects() override;
		virtual ::javax::management::ObjectName* getObservedObject() override;
		virtual void setObservedObject(::javax::management::ObjectName* object) override;
		virtual $String* getObservedAttribute() override;
		virtual void setObservedAttribute($String* attribute) override;
		virtual int64_t getGranularityPeriod() override;
		virtual void setGranularityPeriod(int64_t period) override;
		virtual bool isActive() override;
		virtual int32_t hashCode() override;
		virtual bool equals(Object$* arg0) override;
		virtual $Object* clone() override;
		virtual $String* toString() override;
		virtual void finalize() override;
	};
	MemberClass0$ memberClass0$;
	::javax::management::monitor::CounterMonitorMBean* as$(::javax::management::monitor::CounterMonitorMBean**) {
		return &memberClass0$;
	}
	::java::lang::Number* modulus = nullptr;
	::java::lang::Number* offset = nullptr;
	bool notify$ = false;
	bool differenceMode = false;
	::java::lang::Number* initThreshold = nullptr;
	static $StringArray* types;
	static $Array<::javax::management::MBeanNotificationInfo>* notifsInfo;
};

		} // monitor
	} // management
} // javax

#endif // _javax_management_monitor_CounterMonitor_h_
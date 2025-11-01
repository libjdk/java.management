#ifndef _javax_management_monitor_GaugeMonitor_h_
#define _javax_management_monitor_GaugeMonitor_h_
//$ class javax.management.monitor.GaugeMonitor
//$ extends javax.management.monitor.Monitor
//$ implements javax.management.monitor.GaugeMonitorMBean

#include <java/lang/Array.h>
#include <javax/management/monitor/GaugeMonitorMBean.h>
#include <javax/management/monitor/Monitor.h>

#pragma push_macro("FALLING")
#undef FALLING
#pragma push_macro("RISING")
#undef RISING
#pragma push_macro("RISING_OR_FALLING")
#undef RISING_OR_FALLING

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
			class GaugeMonitor$GaugeMonitorObservedObject;
			class Monitor$NumericalType;
			class Monitor$ObservedObject;
			class MonitorNotification;
		}
	}
}

namespace javax {
	namespace management {
		namespace monitor {

class $export GaugeMonitor : public ::javax::management::monitor::Monitor {
	$class(GaugeMonitor, 0, ::javax::management::monitor::Monitor, ::javax::management::monitor::GaugeMonitorMBean)
public:
	GaugeMonitor();
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
	virtual ::java::lang::Number* getHighThreshold();
	virtual ::java::lang::Number* getLowThreshold();
	virtual $Array<::javax::management::MBeanNotificationInfo>* getNotificationInfo() override;
	virtual bool getNotifyHigh();
	virtual bool getNotifyLow();
	virtual bool isComparableTypeValid(::javax::management::ObjectName* object, $String* attribute, ::java::lang::Comparable* value) override;
	bool isFirstGreaterThanLast(::java::lang::Number* greater, ::java::lang::Number* less, ::javax::management::monitor::Monitor$NumericalType* type);
	bool isFirstStrictlyGreaterThanLast(::java::lang::Number* greater, ::java::lang::Number* less, $String* className);
	virtual bool isThresholdTypeValid(::javax::management::ObjectName* object, $String* attribute, ::java::lang::Comparable* value) override;
	virtual void onErrorNotification(::javax::management::monitor::MonitorNotification* notification) override;
	virtual void removeObservedObject(::javax::management::ObjectName* object) override;
	void setDerivedGaugeWithDifference(::java::lang::Number* scanGauge, ::javax::management::monitor::GaugeMonitor$GaugeMonitorObservedObject* o);
	virtual void setDifferenceMode(bool value);
	virtual void setGranularityPeriod(int64_t period) override;
	virtual void setNotifyHigh(bool value);
	virtual void setNotifyLow(bool value);
	virtual void setObservedAttribute($String* attribute) override;
	virtual void setObservedObject(::javax::management::ObjectName* object) override;
	virtual void setThresholds(::java::lang::Number* highValue, ::java::lang::Number* lowValue);
	virtual void start() override;
	virtual void stop() override;
	virtual $String* toString() override;
	bool updateDerivedGauge(Object$* scanGauge, ::javax::management::monitor::GaugeMonitor$GaugeMonitorObservedObject* o);
	::javax::management::monitor::MonitorNotification* updateNotifications(::javax::management::monitor::GaugeMonitor$GaugeMonitorObservedObject* o);
	class $export MemberClass0$ : public ::javax::management::monitor::GaugeMonitorMBean {
	public:
		MemberClass0$();
		virtual ::java::lang::Number* getDerivedGauge() override;
		virtual int64_t getDerivedGaugeTimeStamp() override;
		virtual ::java::lang::Number* getDerivedGauge(::javax::management::ObjectName* object) override;
		virtual int64_t getDerivedGaugeTimeStamp(::javax::management::ObjectName* object) override;
		virtual ::java::lang::Number* getHighThreshold() override;
		virtual ::java::lang::Number* getLowThreshold() override;
		virtual void setThresholds(::java::lang::Number* highValue, ::java::lang::Number* lowValue) override;
		virtual bool getNotifyHigh() override;
		virtual void setNotifyHigh(bool value) override;
		virtual bool getNotifyLow() override;
		virtual void setNotifyLow(bool value) override;
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
	::javax::management::monitor::GaugeMonitorMBean* as$(::javax::management::monitor::GaugeMonitorMBean**) {
		return &memberClass0$;
	}
	::java::lang::Number* highThreshold = nullptr;
	::java::lang::Number* lowThreshold = nullptr;
	bool notifyHigh = false;
	bool notifyLow = false;
	bool differenceMode = false;
	static $StringArray* types;
	static $Array<::javax::management::MBeanNotificationInfo>* notifsInfo;
	static const int32_t RISING = 0;
	static const int32_t FALLING = 1;
	static const int32_t RISING_OR_FALLING = 2;
};

		} // monitor
	} // management
} // javax

#pragma pop_macro("FALLING")
#pragma pop_macro("RISING")
#pragma pop_macro("RISING_OR_FALLING")

#endif // _javax_management_monitor_GaugeMonitor_h_
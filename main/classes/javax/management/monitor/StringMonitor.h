#ifndef _javax_management_monitor_StringMonitor_h_
#define _javax_management_monitor_StringMonitor_h_
//$ class javax.management.monitor.StringMonitor
//$ extends javax.management.monitor.Monitor
//$ implements javax.management.monitor.StringMonitorMBean

#include <java/lang/Array.h>
#include <javax/management/monitor/Monitor.h>
#include <javax/management/monitor/StringMonitorMBean.h>

#pragma push_macro("DIFFERING")
#undef DIFFERING
#pragma push_macro("MATCHING")
#undef MATCHING
#pragma push_macro("MATCHING_OR_DIFFERING")
#undef MATCHING_OR_DIFFERING

namespace java {
	namespace lang {
		class Comparable;
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
			class Monitor$ObservedObject;
			class MonitorNotification;
		}
	}
}

namespace javax {
	namespace management {
		namespace monitor {

class $export StringMonitor : public ::javax::management::monitor::Monitor {
	$class(StringMonitor, 0, ::javax::management::monitor::Monitor, ::javax::management::monitor::StringMonitorMBean)
public:
	StringMonitor();
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
	virtual $String* getDerivedGauge();
	virtual int64_t getDerivedGaugeTimeStamp(::javax::management::ObjectName* object) override;
	virtual int64_t getDerivedGaugeTimeStamp();
	virtual $Array<::javax::management::MBeanNotificationInfo>* getNotificationInfo() override;
	virtual bool getNotifyDiffer();
	virtual bool getNotifyMatch();
	virtual $String* getStringToCompare();
	virtual bool isComparableTypeValid(::javax::management::ObjectName* object, $String* attribute, ::java::lang::Comparable* value) override;
	virtual void onErrorNotification(::javax::management::monitor::MonitorNotification* notification) override;
	virtual void removeObservedObject(::javax::management::ObjectName* object) override;
	virtual void setGranularityPeriod(int64_t period) override;
	virtual void setNotifyDiffer(bool value);
	virtual void setNotifyMatch(bool value);
	virtual void setObservedAttribute($String* attribute) override;
	virtual void setObservedObject(::javax::management::ObjectName* object) override;
	virtual void setStringToCompare($String* value);
	virtual void start() override;
	virtual void stop() override;
	virtual $String* toString() override;
	class $export MemberClass0$ : public ::javax::management::monitor::StringMonitorMBean {
	public:
		MemberClass0$();
		virtual $String* getDerivedGauge() override;
		virtual int64_t getDerivedGaugeTimeStamp() override;
		virtual $String* getDerivedGauge(::javax::management::ObjectName* object) override;
		virtual int64_t getDerivedGaugeTimeStamp(::javax::management::ObjectName* object) override;
		virtual $String* getStringToCompare() override;
		virtual void setStringToCompare($String* value) override;
		virtual bool getNotifyMatch() override;
		virtual void setNotifyMatch(bool value) override;
		virtual bool getNotifyDiffer() override;
		virtual void setNotifyDiffer(bool value) override;
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
	::javax::management::monitor::StringMonitorMBean* as$(::javax::management::monitor::StringMonitorMBean**) {
		return &memberClass0$;
	}
	$String* stringToCompare = nullptr;
	bool notifyMatch = false;
	bool notifyDiffer = false;
	static $StringArray* types;
	static $Array<::javax::management::MBeanNotificationInfo>* notifsInfo;
	static const int32_t MATCHING = 0;
	static const int32_t DIFFERING = 1;
	static const int32_t MATCHING_OR_DIFFERING = 2;
};

		} // monitor
	} // management
} // javax

#pragma pop_macro("DIFFERING")
#pragma pop_macro("MATCHING")
#pragma pop_macro("MATCHING_OR_DIFFERING")

#endif // _javax_management_monitor_StringMonitor_h_
#ifndef _javax_management_monitor_Monitor_h_
#define _javax_management_monitor_Monitor_h_
//$ class javax.management.monitor.Monitor
//$ extends javax.management.NotificationBroadcasterSupport
//$ implements javax.management.monitor.MonitorMBean,javax.management.MBeanRegistration

#include <java/lang/Array.h>
#include <javax/management/MBeanRegistration.h>
#include <javax/management/NotificationBroadcasterSupport.h>
#include <javax/management/monitor/MonitorMBean.h>

#pragma push_macro("INTEGER_ZERO")
#undef INTEGER_ZERO
#pragma push_macro("OBSERVED_ATTRIBUTE_ERROR_NOTIFIED")
#undef OBSERVED_ATTRIBUTE_ERROR_NOTIFIED
#pragma push_macro("OBSERVED_ATTRIBUTE_TYPE_ERROR_NOTIFIED")
#undef OBSERVED_ATTRIBUTE_TYPE_ERROR_NOTIFIED
#pragma push_macro("OBSERVED_OBJECT_ERROR_NOTIFIED")
#undef OBSERVED_OBJECT_ERROR_NOTIFIED
#pragma push_macro("RESET_FLAGS_ALREADY_NOTIFIED")
#undef RESET_FLAGS_ALREADY_NOTIFIED
#pragma push_macro("RUNTIME_ERROR_NOTIFIED")
#undef RUNTIME_ERROR_NOTIFIED
#pragma push_macro("THRESHOLD_ERROR_NOTIFIED")
#undef THRESHOLD_ERROR_NOTIFIED

namespace java {
	namespace lang {
		class Boolean;
		class Comparable;
		class Integer;
	}
}
namespace java {
	namespace security {
		class AccessControlContext;
	}
}
namespace java {
	namespace util {
		class List;
		class Map;
	}
}
namespace java {
	namespace util {
		namespace concurrent {
			class Future;
			class ScheduledExecutorService;
			class ScheduledFuture;
		}
	}
}
namespace java {
	namespace util {
		namespace concurrent {
			namespace atomic {
				class AtomicLong;
			}
		}
	}
}
namespace javax {
	namespace management {
		class MBeanServer;
		class MBeanServerConnection;
		class ObjectName;
	}
}
namespace javax {
	namespace management {
		namespace monitor {
			class Monitor$NumericalType;
			class Monitor$ObservedObject;
			class Monitor$SchedulerTask;
			class MonitorNotification;
		}
	}
}

namespace javax {
	namespace management {
		namespace monitor {

class $import Monitor : public ::javax::management::NotificationBroadcasterSupport, public ::javax::management::monitor::MonitorMBean, public ::javax::management::MBeanRegistration {
	$class(Monitor, 0, ::javax::management::NotificationBroadcasterSupport, ::javax::management::monitor::MonitorMBean, ::javax::management::MBeanRegistration)
public:
	Monitor();
	virtual $Object* clone() override;
	virtual bool equals(Object$* arg0) override;
	virtual void finalize() override;
	virtual int32_t hashCode() override;
	void init$();
	virtual void addObservedObject(::javax::management::ObjectName* object) override;
	virtual ::javax::management::monitor::MonitorNotification* buildAlarmNotification(::javax::management::ObjectName* object, $String* attribute, ::java::lang::Comparable* value);
	virtual $String* buildErrorNotification(::javax::management::ObjectName* object, $String* attribute, ::java::lang::Comparable* value);
	static $Class* classForType(::javax::management::monitor::Monitor$NumericalType* type);
	void cleanupFutures();
	void cleanupIsComplexTypeAttribute();
	virtual int32_t computeAlreadyNotifiedIndex(::javax::management::monitor::Monitor$ObservedObject* o, int32_t index, $ints* an);
	virtual bool containsObservedObject(::javax::management::ObjectName* object) override;
	virtual void createAlreadyNotified();
	virtual ::javax::management::monitor::Monitor$ObservedObject* createObservedObject(::javax::management::ObjectName* object);
	virtual void doStart();
	virtual void doStop();
	virtual $Object* getAttribute(::javax::management::MBeanServerConnection* mbsc, ::javax::management::ObjectName* object, $String* attribute);
	virtual ::java::lang::Comparable* getComparableFromAttribute(::javax::management::ObjectName* object, $String* attribute, Object$* value);
	virtual $Object* getDerivedGauge(::javax::management::ObjectName* object);
	virtual ::java::lang::Comparable* getDerivedGaugeFromComparable(::javax::management::ObjectName* object, $String* attribute, ::java::lang::Comparable* value);
	virtual int64_t getDerivedGaugeTimeStamp(::javax::management::ObjectName* object);
	virtual int64_t getGranularityPeriod() override;
	virtual $String* getObservedAttribute() override;
	virtual ::javax::management::ObjectName* getObservedObject() override;
	virtual ::javax::management::monitor::Monitor$ObservedObject* getObservedObject(::javax::management::ObjectName* object);
	virtual $Array<::javax::management::ObjectName>* getObservedObjects() override;
	virtual bool isActive() override;
	virtual bool isAlreadyNotified(::javax::management::monitor::Monitor$ObservedObject* o, int32_t mask);
	virtual bool isComparableTypeValid(::javax::management::ObjectName* object, $String* attribute, ::java::lang::Comparable* value);
	virtual bool isThresholdTypeValid(::javax::management::ObjectName* object, $String* attribute, ::java::lang::Comparable* value);
	static bool isValidForType(Object$* value, $Class* c);
	void monitor(::javax::management::monitor::Monitor$ObservedObject* o, int32_t index, $ints* an);
	virtual void onErrorNotification(::javax::management::monitor::MonitorNotification* notification);
	virtual void postDeregister() override;
	virtual void postRegister(::java::lang::Boolean* registrationDone) override;
	virtual void preDeregister() override;
	virtual ::javax::management::ObjectName* preRegister(::javax::management::MBeanServer* server, ::javax::management::ObjectName* name) override;
	virtual void removeObservedObject(::javax::management::ObjectName* object) override;
	virtual void resetAllAlreadyNotified(::javax::management::monitor::Monitor$ObservedObject* o, int32_t index, $ints* an);
	virtual void resetAlreadyNotified(::javax::management::monitor::Monitor$ObservedObject* o, int32_t index, int32_t mask);
	using ::javax::management::NotificationBroadcasterSupport::sendNotification;
	void sendNotification($String* type, int64_t timeStamp, $String* msg, Object$* derGauge, Object$* trigger, ::javax::management::ObjectName* object, bool onError);
	virtual void setAlreadyNotified(::javax::management::monitor::Monitor$ObservedObject* o, int32_t index, int32_t mask, $ints* an);
	virtual void setGranularityPeriod(int64_t period) override;
	virtual void setObservedAttribute($String* attribute) override;
	virtual void setObservedObject(::javax::management::ObjectName* object) override;
	virtual void start() override {}
	virtual void stop() override {}
	virtual $String* toString() override;
	virtual void updateAlreadyNotified(::javax::management::monitor::Monitor$ObservedObject* o, int32_t index);
	virtual void updateDeprecatedAlreadyNotified();
	$String* observedAttribute = nullptr;
	int64_t granularityPeriod = 0;
	bool isActive$ = false;
	::java::util::concurrent::atomic::AtomicLong* sequenceNumber = nullptr;
	bool isComplexTypeAttribute = false;
	$String* firstAttribute = nullptr;
	::java::util::List* remainingAttributes = nullptr;
	static ::java::security::AccessControlContext* noPermissionsACC;
	$volatile(::java::security::AccessControlContext*) acc = nullptr;
	static ::java::util::concurrent::ScheduledExecutorService* scheduler;
	static ::java::util::Map* executors;
	static $Object* executorsLock;
	static int32_t maximumPoolSize;
	::java::util::concurrent::Future* monitorFuture = nullptr;
	::javax::management::monitor::Monitor$SchedulerTask* schedulerTask = nullptr;
	::java::util::concurrent::ScheduledFuture* schedulerFuture = nullptr;
	static const int32_t capacityIncrement = 16;
	int32_t elementCount = 0;
	int32_t alreadyNotified = 0;
	$ints* alreadyNotifieds = nullptr;
	::javax::management::MBeanServer* server = nullptr;
	static const int32_t RESET_FLAGS_ALREADY_NOTIFIED = 0;
	static const int32_t OBSERVED_OBJECT_ERROR_NOTIFIED = 1;
	static const int32_t OBSERVED_ATTRIBUTE_ERROR_NOTIFIED = 2;
	static const int32_t OBSERVED_ATTRIBUTE_TYPE_ERROR_NOTIFIED = 4;
	static const int32_t RUNTIME_ERROR_NOTIFIED = 8;
	$String* dbgTag = nullptr;
	::java::util::List* observedObjects = nullptr;
	static const int32_t THRESHOLD_ERROR_NOTIFIED = 16;
	static ::java::lang::Integer* INTEGER_ZERO;
};

		} // monitor
	} // management
} // javax

#pragma pop_macro("INTEGER_ZERO")
#pragma pop_macro("OBSERVED_ATTRIBUTE_ERROR_NOTIFIED")
#pragma pop_macro("OBSERVED_ATTRIBUTE_TYPE_ERROR_NOTIFIED")
#pragma pop_macro("OBSERVED_OBJECT_ERROR_NOTIFIED")
#pragma pop_macro("RESET_FLAGS_ALREADY_NOTIFIED")
#pragma pop_macro("RUNTIME_ERROR_NOTIFIED")
#pragma pop_macro("THRESHOLD_ERROR_NOTIFIED")

#endif // _javax_management_monitor_Monitor_h_
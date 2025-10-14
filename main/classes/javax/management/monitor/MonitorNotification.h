#ifndef _javax_management_monitor_MonitorNotification_h_
#define _javax_management_monitor_MonitorNotification_h_
//$ class javax.management.monitor.MonitorNotification
//$ extends javax.management.Notification

#include <javax/management/Notification.h>

#pragma push_macro("OBSERVED_ATTRIBUTE_ERROR")
#undef OBSERVED_ATTRIBUTE_ERROR
#pragma push_macro("OBSERVED_ATTRIBUTE_TYPE_ERROR")
#undef OBSERVED_ATTRIBUTE_TYPE_ERROR
#pragma push_macro("OBSERVED_OBJECT_ERROR")
#undef OBSERVED_OBJECT_ERROR
#pragma push_macro("RUNTIME_ERROR")
#undef RUNTIME_ERROR
#pragma push_macro("STRING_TO_COMPARE_VALUE_DIFFERED")
#undef STRING_TO_COMPARE_VALUE_DIFFERED
#pragma push_macro("STRING_TO_COMPARE_VALUE_MATCHED")
#undef STRING_TO_COMPARE_VALUE_MATCHED
#pragma push_macro("THRESHOLD_ERROR")
#undef THRESHOLD_ERROR
#pragma push_macro("THRESHOLD_HIGH_VALUE_EXCEEDED")
#undef THRESHOLD_HIGH_VALUE_EXCEEDED
#pragma push_macro("THRESHOLD_LOW_VALUE_EXCEEDED")
#undef THRESHOLD_LOW_VALUE_EXCEEDED
#pragma push_macro("THRESHOLD_VALUE_EXCEEDED")
#undef THRESHOLD_VALUE_EXCEEDED

namespace javax {
	namespace management {
		class ObjectName;
	}
}

namespace javax {
	namespace management {
		namespace monitor {

class $export MonitorNotification : public ::javax::management::Notification {
	$class(MonitorNotification, 0, ::javax::management::Notification)
public:
	MonitorNotification();
	void init$($String* type, Object$* source, int64_t sequenceNumber, int64_t timeStamp, $String* msg, ::javax::management::ObjectName* obsObj, $String* obsAtt, Object$* derGauge, Object$* trigger);
	virtual $Object* getDerivedGauge();
	virtual $String* getObservedAttribute();
	virtual ::javax::management::ObjectName* getObservedObject();
	virtual $Object* getTrigger();
	static $String* OBSERVED_OBJECT_ERROR;
	static $String* OBSERVED_ATTRIBUTE_ERROR;
	static $String* OBSERVED_ATTRIBUTE_TYPE_ERROR;
	static $String* THRESHOLD_ERROR;
	static $String* RUNTIME_ERROR;
	static $String* THRESHOLD_VALUE_EXCEEDED;
	static $String* THRESHOLD_HIGH_VALUE_EXCEEDED;
	static $String* THRESHOLD_LOW_VALUE_EXCEEDED;
	static $String* STRING_TO_COMPARE_VALUE_MATCHED;
	static $String* STRING_TO_COMPARE_VALUE_DIFFERED;
	static const int64_t serialVersionUID = (int64_t)0xC00C6BEA87CDCD0C;
	::javax::management::ObjectName* observedObject = nullptr;
	$String* observedAttribute = nullptr;
	$Object* derivedGauge = nullptr;
	$Object* trigger = nullptr;
};

		} // monitor
	} // management
} // javax

#pragma pop_macro("OBSERVED_ATTRIBUTE_ERROR")
#pragma pop_macro("OBSERVED_ATTRIBUTE_TYPE_ERROR")
#pragma pop_macro("OBSERVED_OBJECT_ERROR")
#pragma pop_macro("RUNTIME_ERROR")
#pragma pop_macro("STRING_TO_COMPARE_VALUE_DIFFERED")
#pragma pop_macro("STRING_TO_COMPARE_VALUE_MATCHED")
#pragma pop_macro("THRESHOLD_ERROR")
#pragma pop_macro("THRESHOLD_HIGH_VALUE_EXCEEDED")
#pragma pop_macro("THRESHOLD_LOW_VALUE_EXCEEDED")
#pragma pop_macro("THRESHOLD_VALUE_EXCEEDED")

#endif // _javax_management_monitor_MonitorNotification_h_
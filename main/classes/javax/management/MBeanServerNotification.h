#ifndef _javax_management_MBeanServerNotification_h_
#define _javax_management_MBeanServerNotification_h_
//$ class javax.management.MBeanServerNotification
//$ extends javax.management.Notification

#include <javax/management/Notification.h>

#pragma push_macro("REGISTRATION_NOTIFICATION")
#undef REGISTRATION_NOTIFICATION
#pragma push_macro("UNREGISTRATION_NOTIFICATION")
#undef UNREGISTRATION_NOTIFICATION

namespace javax {
	namespace management {
		class ObjectName;
	}
}

namespace javax {
	namespace management {

class $export MBeanServerNotification : public ::javax::management::Notification {
	$class(MBeanServerNotification, 0, ::javax::management::Notification)
public:
	MBeanServerNotification();
	void init$($String* type, Object$* source, int64_t sequenceNumber, ::javax::management::ObjectName* objectName);
	virtual ::javax::management::ObjectName* getMBeanName();
	virtual $String* toString() override;
	static const int64_t serialVersionUID = (int64_t)0x27EB4D0BE446108D;
	static $String* REGISTRATION_NOTIFICATION;
	static $String* UNREGISTRATION_NOTIFICATION;
	::javax::management::ObjectName* objectName = nullptr;
};

	} // management
} // javax

#pragma pop_macro("REGISTRATION_NOTIFICATION")
#pragma pop_macro("UNREGISTRATION_NOTIFICATION")

#endif // _javax_management_MBeanServerNotification_h_
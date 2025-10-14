#ifndef _javax_management_NotificationBroadcaster_h_
#define _javax_management_NotificationBroadcaster_h_
//$ interface javax.management.NotificationBroadcaster
//$ extends java.lang.Object

#include <java/lang/Array.h>

namespace javax {
	namespace management {
		class MBeanNotificationInfo;
		class NotificationFilter;
		class NotificationListener;
	}
}

namespace javax {
	namespace management {

class $import NotificationBroadcaster : public ::java::lang::Object {
	$interface(NotificationBroadcaster, $NO_CLASS_INIT, ::java::lang::Object)
public:
	virtual void addNotificationListener(::javax::management::NotificationListener* listener, ::javax::management::NotificationFilter* filter, Object$* handback) {}
	virtual $Array<::javax::management::MBeanNotificationInfo>* getNotificationInfo() {return nullptr;}
	virtual void removeNotificationListener(::javax::management::NotificationListener* listener) {}
};

	} // management
} // javax

#endif // _javax_management_NotificationBroadcaster_h_
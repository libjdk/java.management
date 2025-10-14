#ifndef _javax_management_NotificationEmitter_h_
#define _javax_management_NotificationEmitter_h_
//$ interface javax.management.NotificationEmitter
//$ extends javax.management.NotificationBroadcaster

#include <javax/management/NotificationBroadcaster.h>

namespace javax {
	namespace management {
		class NotificationFilter;
		class NotificationListener;
	}
}

namespace javax {
	namespace management {

class $import NotificationEmitter : public ::javax::management::NotificationBroadcaster {
	$interface(NotificationEmitter, $NO_CLASS_INIT, ::javax::management::NotificationBroadcaster)
public:
	using ::javax::management::NotificationBroadcaster::removeNotificationListener;
	virtual void removeNotificationListener(::javax::management::NotificationListener* listener, ::javax::management::NotificationFilter* filter, Object$* handback) {}
};

	} // management
} // javax

#endif // _javax_management_NotificationEmitter_h_
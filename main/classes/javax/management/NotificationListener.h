#ifndef _javax_management_NotificationListener_h_
#define _javax_management_NotificationListener_h_
//$ interface javax.management.NotificationListener
//$ extends java.util.EventListener

#include <java/util/EventListener.h>

namespace javax {
	namespace management {
		class Notification;
	}
}

namespace javax {
	namespace management {

class $export NotificationListener : public ::java::util::EventListener {
	$interface(NotificationListener, $NO_CLASS_INIT, ::java::util::EventListener)
public:
	virtual void handleNotification(::javax::management::Notification* notification, Object$* handback) {}
};

	} // management
} // javax

#endif // _javax_management_NotificationListener_h_
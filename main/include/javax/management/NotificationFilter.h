#ifndef _javax_management_NotificationFilter_h_
#define _javax_management_NotificationFilter_h_
//$ interface javax.management.NotificationFilter
//$ extends java.io.Serializable

#include <java/io/Serializable.h>

namespace javax {
	namespace management {
		class Notification;
	}
}

namespace javax {
	namespace management {

class $import NotificationFilter : public ::java::io::Serializable {
	$interface(NotificationFilter, $NO_CLASS_INIT, ::java::io::Serializable)
public:
	virtual bool isNotificationEnabled(::javax::management::Notification* notification) {return false;}
};

	} // management
} // javax

#endif // _javax_management_NotificationFilter_h_
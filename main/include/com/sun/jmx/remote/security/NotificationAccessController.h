#ifndef _com_sun_jmx_remote_security_NotificationAccessController_h_
#define _com_sun_jmx_remote_security_NotificationAccessController_h_
//$ interface com.sun.jmx.remote.security.NotificationAccessController
//$ extends java.lang.Object

#include <java/lang/Object.h>

namespace javax {
	namespace management {
		class Notification;
		class ObjectName;
	}
}
namespace javax {
	namespace security {
		namespace auth {
			class Subject;
		}
	}
}

namespace com {
	namespace sun {
		namespace jmx {
			namespace remote {
				namespace security {

class $import NotificationAccessController : public ::java::lang::Object {
	$interface(NotificationAccessController, $NO_CLASS_INIT, ::java::lang::Object)
public:
	virtual void addNotificationListener($String* connectionId, ::javax::management::ObjectName* name, ::javax::security::auth::Subject* subject) {}
	virtual void fetchNotification($String* connectionId, ::javax::management::ObjectName* name, ::javax::management::Notification* notification, ::javax::security::auth::Subject* subject) {}
	virtual void removeNotificationListener($String* connectionId, ::javax::management::ObjectName* name, ::javax::security::auth::Subject* subject) {}
};

				} // security
			} // remote
		} // jmx
	} // sun
} // com

#endif // _com_sun_jmx_remote_security_NotificationAccessController_h_
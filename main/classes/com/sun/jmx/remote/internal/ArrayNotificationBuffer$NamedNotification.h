#ifndef _com_sun_jmx_remote_internal_ArrayNotificationBuffer$NamedNotification_h_
#define _com_sun_jmx_remote_internal_ArrayNotificationBuffer$NamedNotification_h_
//$ class com.sun.jmx.remote.internal.ArrayNotificationBuffer$NamedNotification
//$ extends java.lang.Object

#include <java/lang/Object.h>

namespace javax {
	namespace management {
		class Notification;
		class ObjectName;
	}
}

namespace com {
	namespace sun {
		namespace jmx {
			namespace remote {
				namespace internal {

class ArrayNotificationBuffer$NamedNotification : public ::java::lang::Object {
	$class(ArrayNotificationBuffer$NamedNotification, $NO_CLASS_INIT, ::java::lang::Object)
public:
	ArrayNotificationBuffer$NamedNotification();
	void init$(::javax::management::ObjectName* sender, ::javax::management::Notification* notif);
	virtual ::javax::management::Notification* getNotification();
	virtual ::javax::management::ObjectName* getObjectName();
	virtual $String* toString() override;
	::javax::management::ObjectName* sender = nullptr;
	::javax::management::Notification* notification = nullptr;
};

				} // internal
			} // remote
		} // jmx
	} // sun
} // com

#endif // _com_sun_jmx_remote_internal_ArrayNotificationBuffer$NamedNotification_h_
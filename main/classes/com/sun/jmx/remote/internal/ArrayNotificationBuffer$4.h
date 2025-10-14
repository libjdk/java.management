#ifndef _com_sun_jmx_remote_internal_ArrayNotificationBuffer$4_h_
#define _com_sun_jmx_remote_internal_ArrayNotificationBuffer$4_h_
//$ class com.sun.jmx.remote.internal.ArrayNotificationBuffer$4
//$ extends java.security.PrivilegedExceptionAction

#include <java/security/PrivilegedExceptionAction.h>

namespace javax {
	namespace management {
		class MBeanServer;
		class ObjectName;
	}
}

namespace com {
	namespace sun {
		namespace jmx {
			namespace remote {
				namespace internal {

class ArrayNotificationBuffer$4 : public ::java::security::PrivilegedExceptionAction {
	$class(ArrayNotificationBuffer$4, $NO_CLASS_INIT, ::java::security::PrivilegedExceptionAction)
public:
	ArrayNotificationBuffer$4();
	void init$(::javax::management::MBeanServer* val$mbs, ::javax::management::ObjectName* val$name, $String* val$className);
	virtual $Object* run() override;
	$String* val$className = nullptr;
	::javax::management::ObjectName* val$name = nullptr;
	::javax::management::MBeanServer* val$mbs = nullptr;
};

				} // internal
			} // remote
		} // jmx
	} // sun
} // com

#endif // _com_sun_jmx_remote_internal_ArrayNotificationBuffer$4_h_
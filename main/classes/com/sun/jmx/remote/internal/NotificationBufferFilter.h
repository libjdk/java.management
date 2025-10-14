#ifndef _com_sun_jmx_remote_internal_NotificationBufferFilter_h_
#define _com_sun_jmx_remote_internal_NotificationBufferFilter_h_
//$ interface com.sun.jmx.remote.internal.NotificationBufferFilter
//$ extends java.lang.Object

#include <java/lang/Object.h>

namespace java {
	namespace util {
		class List;
	}
}
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

class $export NotificationBufferFilter : public ::java::lang::Object {
	$interface(NotificationBufferFilter, $NO_CLASS_INIT, ::java::lang::Object)
public:
	virtual void apply(::java::util::List* targetedNotifs, ::javax::management::ObjectName* source, ::javax::management::Notification* notif) {}
};

				} // internal
			} // remote
		} // jmx
	} // sun
} // com

#endif // _com_sun_jmx_remote_internal_NotificationBufferFilter_h_
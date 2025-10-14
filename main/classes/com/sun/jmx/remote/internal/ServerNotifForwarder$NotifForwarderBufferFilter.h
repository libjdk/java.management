#ifndef _com_sun_jmx_remote_internal_ServerNotifForwarder$NotifForwarderBufferFilter_h_
#define _com_sun_jmx_remote_internal_ServerNotifForwarder$NotifForwarderBufferFilter_h_
//$ class com.sun.jmx.remote.internal.ServerNotifForwarder$NotifForwarderBufferFilter
//$ extends com.sun.jmx.remote.internal.NotificationBufferFilter

#include <com/sun/jmx/remote/internal/NotificationBufferFilter.h>

namespace com {
	namespace sun {
		namespace jmx {
			namespace remote {
				namespace internal {
					class ServerNotifForwarder;
				}
			}
		}
	}
}
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

class $export ServerNotifForwarder$NotifForwarderBufferFilter : public ::com::sun::jmx::remote::internal::NotificationBufferFilter {
	$class(ServerNotifForwarder$NotifForwarderBufferFilter, $NO_CLASS_INIT, ::com::sun::jmx::remote::internal::NotificationBufferFilter)
public:
	ServerNotifForwarder$NotifForwarderBufferFilter();
	void init$(::com::sun::jmx::remote::internal::ServerNotifForwarder* this$0);
	virtual void apply(::java::util::List* targetedNotifs, ::javax::management::ObjectName* source, ::javax::management::Notification* notif) override;
	::com::sun::jmx::remote::internal::ServerNotifForwarder* this$0 = nullptr;
};

				} // internal
			} // remote
		} // jmx
	} // sun
} // com

#endif // _com_sun_jmx_remote_internal_ServerNotifForwarder$NotifForwarderBufferFilter_h_
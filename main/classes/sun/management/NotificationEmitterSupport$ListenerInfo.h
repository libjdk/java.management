#ifndef _sun_management_NotificationEmitterSupport$ListenerInfo_h_
#define _sun_management_NotificationEmitterSupport$ListenerInfo_h_
//$ class sun.management.NotificationEmitterSupport$ListenerInfo
//$ extends java.lang.Object

#include <java/lang/Object.h>

namespace javax {
	namespace management {
		class NotificationFilter;
		class NotificationListener;
	}
}
namespace sun {
	namespace management {
		class NotificationEmitterSupport;
	}
}

namespace sun {
	namespace management {

class NotificationEmitterSupport$ListenerInfo : public ::java::lang::Object {
	$class(NotificationEmitterSupport$ListenerInfo, $NO_CLASS_INIT, ::java::lang::Object)
public:
	NotificationEmitterSupport$ListenerInfo();
	void init$(::sun::management::NotificationEmitterSupport* this$0, ::javax::management::NotificationListener* listener, ::javax::management::NotificationFilter* filter, Object$* handback);
	::sun::management::NotificationEmitterSupport* this$0 = nullptr;
	::javax::management::NotificationListener* listener = nullptr;
	::javax::management::NotificationFilter* filter = nullptr;
	$Object* handback = nullptr;
};

	} // management
} // sun

#endif // _sun_management_NotificationEmitterSupport$ListenerInfo_h_
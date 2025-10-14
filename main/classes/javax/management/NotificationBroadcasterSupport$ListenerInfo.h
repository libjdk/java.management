#ifndef _javax_management_NotificationBroadcasterSupport$ListenerInfo_h_
#define _javax_management_NotificationBroadcasterSupport$ListenerInfo_h_
//$ class javax.management.NotificationBroadcasterSupport$ListenerInfo
//$ extends java.lang.Object

#include <java/lang/Object.h>

namespace javax {
	namespace management {
		class NotificationFilter;
		class NotificationListener;
	}
}

namespace javax {
	namespace management {

class NotificationBroadcasterSupport$ListenerInfo : public ::java::lang::Object {
	$class(NotificationBroadcasterSupport$ListenerInfo, $NO_CLASS_INIT, ::java::lang::Object)
public:
	NotificationBroadcasterSupport$ListenerInfo();
	void init$(::javax::management::NotificationListener* listener, ::javax::management::NotificationFilter* filter, Object$* handback);
	virtual bool equals(Object$* o) override;
	virtual int32_t hashCode() override;
	::javax::management::NotificationListener* listener = nullptr;
	::javax::management::NotificationFilter* filter = nullptr;
	$Object* handback = nullptr;
};

	} // management
} // javax

#endif // _javax_management_NotificationBroadcasterSupport$ListenerInfo_h_
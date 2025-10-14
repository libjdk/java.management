#ifndef _javax_management_NotificationBroadcasterSupport$WildcardListenerInfo_h_
#define _javax_management_NotificationBroadcasterSupport$WildcardListenerInfo_h_
//$ class javax.management.NotificationBroadcasterSupport$WildcardListenerInfo
//$ extends javax.management.NotificationBroadcasterSupport$ListenerInfo

#include <javax/management/NotificationBroadcasterSupport$ListenerInfo.h>

namespace javax {
	namespace management {
		class NotificationListener;
	}
}

namespace javax {
	namespace management {

class NotificationBroadcasterSupport$WildcardListenerInfo : public ::javax::management::NotificationBroadcasterSupport$ListenerInfo {
	$class(NotificationBroadcasterSupport$WildcardListenerInfo, 0, ::javax::management::NotificationBroadcasterSupport$ListenerInfo)
public:
	NotificationBroadcasterSupport$WildcardListenerInfo();
	void init$(::javax::management::NotificationListener* listener);
	virtual bool equals(Object$* o) override;
	virtual int32_t hashCode() override;
	static bool $assertionsDisabled;
};

	} // management
} // javax

#endif // _javax_management_NotificationBroadcasterSupport$WildcardListenerInfo_h_
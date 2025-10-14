#ifndef _com_sun_jmx_interceptor_DefaultMBeanServerInterceptor$ListenerWrapper_h_
#define _com_sun_jmx_interceptor_DefaultMBeanServerInterceptor$ListenerWrapper_h_
//$ class com.sun.jmx.interceptor.DefaultMBeanServerInterceptor$ListenerWrapper
//$ extends javax.management.NotificationListener

#include <javax/management/NotificationListener.h>

namespace javax {
	namespace management {
		class Notification;
		class ObjectName;
	}
}

namespace com {
	namespace sun {
		namespace jmx {
			namespace interceptor {

class DefaultMBeanServerInterceptor$ListenerWrapper : public ::javax::management::NotificationListener {
	$class(DefaultMBeanServerInterceptor$ListenerWrapper, $NO_CLASS_INIT, ::javax::management::NotificationListener)
public:
	DefaultMBeanServerInterceptor$ListenerWrapper();
	void init$(::javax::management::NotificationListener* l, ::javax::management::ObjectName* name, Object$* mbean);
	virtual bool equals(Object$* o) override;
	virtual void handleNotification(::javax::management::Notification* notification, Object$* handback) override;
	virtual int32_t hashCode() override;
	::javax::management::NotificationListener* listener = nullptr;
	::javax::management::ObjectName* name = nullptr;
	$Object* mbean = nullptr;
};

			} // interceptor
		} // jmx
	} // sun
} // com

#endif // _com_sun_jmx_interceptor_DefaultMBeanServerInterceptor$ListenerWrapper_h_
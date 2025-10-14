#ifndef _javax_management_modelmbean_ModelMBeanNotificationBroadcaster_h_
#define _javax_management_modelmbean_ModelMBeanNotificationBroadcaster_h_
//$ interface javax.management.modelmbean.ModelMBeanNotificationBroadcaster
//$ extends javax.management.NotificationBroadcaster

#include <javax/management/NotificationBroadcaster.h>

namespace javax {
	namespace management {
		class Attribute;
		class AttributeChangeNotification;
		class Notification;
		class NotificationListener;
	}
}

namespace javax {
	namespace management {
		namespace modelmbean {

class $import ModelMBeanNotificationBroadcaster : public ::javax::management::NotificationBroadcaster {
	$interface(ModelMBeanNotificationBroadcaster, $NO_CLASS_INIT, ::javax::management::NotificationBroadcaster)
public:
	virtual void addAttributeChangeNotificationListener(::javax::management::NotificationListener* listener, $String* attributeName, Object$* handback) {}
	virtual void removeAttributeChangeNotificationListener(::javax::management::NotificationListener* listener, $String* attributeName) {}
	virtual void sendAttributeChangeNotification(::javax::management::AttributeChangeNotification* notification) {}
	virtual void sendAttributeChangeNotification(::javax::management::Attribute* oldValue, ::javax::management::Attribute* newValue) {}
	virtual void sendNotification(::javax::management::Notification* ntfyObj) {}
	virtual void sendNotification($String* ntfyText) {}
};

		} // modelmbean
	} // management
} // javax

#endif // _javax_management_modelmbean_ModelMBeanNotificationBroadcaster_h_
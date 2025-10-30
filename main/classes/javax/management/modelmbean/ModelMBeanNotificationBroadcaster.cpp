#include <javax/management/modelmbean/ModelMBeanNotificationBroadcaster.h>

#include <javax/management/Attribute.h>
#include <javax/management/AttributeChangeNotification.h>
#include <javax/management/NotificationListener.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Attribute = ::javax::management::Attribute;
using $AttributeChangeNotification = ::javax::management::AttributeChangeNotification;
using $Notification = ::javax::management::Notification;
using $NotificationBroadcaster = ::javax::management::NotificationBroadcaster;
using $NotificationListener = ::javax::management::NotificationListener;

namespace javax {
	namespace management {
		namespace modelmbean {

$MethodInfo _ModelMBeanNotificationBroadcaster_MethodInfo_[] = {
	{"addAttributeChangeNotificationListener", "(Ljavax/management/NotificationListener;Ljava/lang/String;Ljava/lang/Object;)V", nullptr, $PUBLIC | $ABSTRACT, nullptr, "javax.management.MBeanException,javax.management.RuntimeOperationsException,java.lang.IllegalArgumentException"},
	{"removeAttributeChangeNotificationListener", "(Ljavax/management/NotificationListener;Ljava/lang/String;)V", nullptr, $PUBLIC | $ABSTRACT, nullptr, "javax.management.MBeanException,javax.management.RuntimeOperationsException,javax.management.ListenerNotFoundException"},
	{"sendAttributeChangeNotification", "(Ljavax/management/AttributeChangeNotification;)V", nullptr, $PUBLIC | $ABSTRACT, nullptr, "javax.management.MBeanException,javax.management.RuntimeOperationsException"},
	{"sendAttributeChangeNotification", "(Ljavax/management/Attribute;Ljavax/management/Attribute;)V", nullptr, $PUBLIC | $ABSTRACT, nullptr, "javax.management.MBeanException,javax.management.RuntimeOperationsException"},
	{"sendNotification", "(Ljavax/management/Notification;)V", nullptr, $PUBLIC | $ABSTRACT, nullptr, "javax.management.MBeanException,javax.management.RuntimeOperationsException"},
	{"sendNotification", "(Ljava/lang/String;)V", nullptr, $PUBLIC | $ABSTRACT, nullptr, "javax.management.MBeanException,javax.management.RuntimeOperationsException"},
	{}
};

$ClassInfo _ModelMBeanNotificationBroadcaster_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT,
	"javax.management.modelmbean.ModelMBeanNotificationBroadcaster",
	nullptr,
	"javax.management.NotificationBroadcaster",
	nullptr,
	_ModelMBeanNotificationBroadcaster_MethodInfo_
};

$Object* allocate$ModelMBeanNotificationBroadcaster($Class* clazz) {
	return $of($alloc(ModelMBeanNotificationBroadcaster));
}

$Class* ModelMBeanNotificationBroadcaster::load$($String* name, bool initialize) {
	$loadClass(ModelMBeanNotificationBroadcaster, name, initialize, &_ModelMBeanNotificationBroadcaster_ClassInfo_, allocate$ModelMBeanNotificationBroadcaster);
	return class$;
}

$Class* ModelMBeanNotificationBroadcaster::class$ = nullptr;

		} // modelmbean
	} // management
} // javax
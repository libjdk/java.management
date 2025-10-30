#include <com/sun/jmx/interceptor/DefaultMBeanServerInterceptor$ListenerWrapper.h>

#include <com/sun/jmx/interceptor/DefaultMBeanServerInterceptor.h>
#include <javax/management/Notification.h>
#include <javax/management/NotificationListener.h>
#include <javax/management/ObjectName.h>
#include <jcpp.h>

using $DefaultMBeanServerInterceptor = ::com::sun::jmx::interceptor::DefaultMBeanServerInterceptor;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $EventObject = ::java::util::EventObject;
using $Notification = ::javax::management::Notification;
using $NotificationListener = ::javax::management::NotificationListener;
using $ObjectName = ::javax::management::ObjectName;

namespace com {
	namespace sun {
		namespace jmx {
			namespace interceptor {

$FieldInfo _DefaultMBeanServerInterceptor$ListenerWrapper_FieldInfo_[] = {
	{"listener", "Ljavax/management/NotificationListener;", nullptr, $PRIVATE, $field(DefaultMBeanServerInterceptor$ListenerWrapper, listener)},
	{"name", "Ljavax/management/ObjectName;", nullptr, $PRIVATE, $field(DefaultMBeanServerInterceptor$ListenerWrapper, name)},
	{"mbean", "Ljava/lang/Object;", nullptr, $PRIVATE, $field(DefaultMBeanServerInterceptor$ListenerWrapper, mbean)},
	{}
};

$MethodInfo _DefaultMBeanServerInterceptor$ListenerWrapper_MethodInfo_[] = {
	{"<init>", "(Ljavax/management/NotificationListener;Ljavax/management/ObjectName;Ljava/lang/Object;)V", nullptr, 0, $method(static_cast<void(DefaultMBeanServerInterceptor$ListenerWrapper::*)($NotificationListener*,$ObjectName*,Object$*)>(&DefaultMBeanServerInterceptor$ListenerWrapper::init$))},
	{"equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"handleNotification", "(Ljavax/management/Notification;Ljava/lang/Object;)V", nullptr, $PUBLIC},
	{"hashCode", "()I", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _DefaultMBeanServerInterceptor$ListenerWrapper_InnerClassesInfo_[] = {
	{"com.sun.jmx.interceptor.DefaultMBeanServerInterceptor$ListenerWrapper", "com.sun.jmx.interceptor.DefaultMBeanServerInterceptor", "ListenerWrapper", $PRIVATE | $STATIC},
	{}
};

$ClassInfo _DefaultMBeanServerInterceptor$ListenerWrapper_ClassInfo_ = {
	$ACC_SUPER,
	"com.sun.jmx.interceptor.DefaultMBeanServerInterceptor$ListenerWrapper",
	"java.lang.Object",
	"javax.management.NotificationListener",
	_DefaultMBeanServerInterceptor$ListenerWrapper_FieldInfo_,
	_DefaultMBeanServerInterceptor$ListenerWrapper_MethodInfo_,
	nullptr,
	nullptr,
	_DefaultMBeanServerInterceptor$ListenerWrapper_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.jmx.interceptor.DefaultMBeanServerInterceptor"
};

$Object* allocate$DefaultMBeanServerInterceptor$ListenerWrapper($Class* clazz) {
	return $of($alloc(DefaultMBeanServerInterceptor$ListenerWrapper));
}

void DefaultMBeanServerInterceptor$ListenerWrapper::init$($NotificationListener* l, $ObjectName* name, Object$* mbean) {
	$set(this, listener, l);
	$set(this, name, name);
	$set(this, mbean, mbean);
}

void DefaultMBeanServerInterceptor$ListenerWrapper::handleNotification($Notification* notification, Object$* handback) {
	if (notification != nullptr) {
		if ($equals(notification->getSource(), this->mbean)) {
			notification->setSource(this->name);
		}
	}
	$nc(this->listener)->handleNotification(notification, handback);
}

bool DefaultMBeanServerInterceptor$ListenerWrapper::equals(Object$* o) {
	if (!($instanceOf(DefaultMBeanServerInterceptor$ListenerWrapper, o))) {
		return false;
	}
	$var(DefaultMBeanServerInterceptor$ListenerWrapper, w, $cast(DefaultMBeanServerInterceptor$ListenerWrapper, o));
	return ($nc(w)->listener == this->listener && $equals(w->mbean, this->mbean) && $nc(w->name)->equals(this->name));
}

int32_t DefaultMBeanServerInterceptor$ListenerWrapper::hashCode() {
	int32_t var$0 = $System::identityHashCode(this->listener);
	return (var$0 ^ $System::identityHashCode(this->mbean));
}

DefaultMBeanServerInterceptor$ListenerWrapper::DefaultMBeanServerInterceptor$ListenerWrapper() {
}

$Class* DefaultMBeanServerInterceptor$ListenerWrapper::load$($String* name, bool initialize) {
	$loadClass(DefaultMBeanServerInterceptor$ListenerWrapper, name, initialize, &_DefaultMBeanServerInterceptor$ListenerWrapper_ClassInfo_, allocate$DefaultMBeanServerInterceptor$ListenerWrapper);
	return class$;
}

$Class* DefaultMBeanServerInterceptor$ListenerWrapper::class$ = nullptr;

			} // interceptor
		} // jmx
	} // sun
} // com
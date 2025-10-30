#include <com/sun/jmx/mbeanserver/StandardMBeanSupport.h>

#include <com/sun/jmx/mbeanserver/MBeanIntrospector.h>
#include <com/sun/jmx/mbeanserver/MBeanSupport.h>
#include <com/sun/jmx/mbeanserver/StandardMBeanIntrospector.h>
#include <javax/management/Descriptor.h>
#include <javax/management/MBeanAttributeInfo.h>
#include <javax/management/MBeanConstructorInfo.h>
#include <javax/management/MBeanInfo.h>
#include <javax/management/MBeanNotificationInfo.h>
#include <javax/management/MBeanOperationInfo.h>
#include <javax/management/MBeanServer.h>
#include <javax/management/ObjectName.h>
#include <jcpp.h>

using $MBeanAttributeInfoArray = $Array<::javax::management::MBeanAttributeInfo>;
using $MBeanConstructorInfoArray = $Array<::javax::management::MBeanConstructorInfo>;
using $MBeanNotificationInfoArray = $Array<::javax::management::MBeanNotificationInfo>;
using $MBeanOperationInfoArray = $Array<::javax::management::MBeanOperationInfo>;
using $MBeanIntrospector = ::com::sun::jmx::mbeanserver::MBeanIntrospector;
using $MBeanSupport = ::com::sun::jmx::mbeanserver::MBeanSupport;
using $StandardMBeanIntrospector = ::com::sun::jmx::mbeanserver::StandardMBeanIntrospector;
using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Descriptor = ::javax::management::Descriptor;
using $MBeanInfo = ::javax::management::MBeanInfo;
using $MBeanServer = ::javax::management::MBeanServer;
using $ObjectName = ::javax::management::ObjectName;

namespace com {
	namespace sun {
		namespace jmx {
			namespace mbeanserver {

$MethodInfo _StandardMBeanSupport_MethodInfo_[] = {
	{"<init>", "(Ljava/lang/Object;Ljava/lang/Class;)V", "<T:Ljava/lang/Object;>(TT;Ljava/lang/Class<TT;>;)V", $PUBLIC, $method(static_cast<void(StandardMBeanSupport::*)(Object$*,$Class*)>(&StandardMBeanSupport::init$)), "javax.management.NotCompliantMBeanException"},
	{"getCookie", "()Ljava/lang/Object;", nullptr, 0},
	{"getMBeanInfo", "()Ljavax/management/MBeanInfo;", nullptr, $PUBLIC},
	{"getMBeanIntrospector", "()Lcom/sun/jmx/mbeanserver/MBeanIntrospector;", "()Lcom/sun/jmx/mbeanserver/MBeanIntrospector<Ljava/lang/reflect/Method;>;", 0},
	{"register", "(Ljavax/management/MBeanServer;Ljavax/management/ObjectName;)V", nullptr, $PUBLIC},
	{"unregister", "()V", nullptr, $PUBLIC},
	{}
};

$ClassInfo _StandardMBeanSupport_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"com.sun.jmx.mbeanserver.StandardMBeanSupport",
	"com.sun.jmx.mbeanserver.MBeanSupport",
	nullptr,
	nullptr,
	_StandardMBeanSupport_MethodInfo_,
	"Lcom/sun/jmx/mbeanserver/MBeanSupport<Ljava/lang/reflect/Method;>;"
};

$Object* allocate$StandardMBeanSupport($Class* clazz) {
	return $of($alloc(StandardMBeanSupport));
}

void StandardMBeanSupport::init$(Object$* resource, $Class* mbeanInterfaceType) {
	$MBeanSupport::init$(resource, mbeanInterfaceType);
}

$MBeanIntrospector* StandardMBeanSupport::getMBeanIntrospector() {
	return $StandardMBeanIntrospector::getInstance();
}

$Object* StandardMBeanSupport::getCookie() {
	return $of(nullptr);
}

void StandardMBeanSupport::register$($MBeanServer* mbs, $ObjectName* name) {
}

void StandardMBeanSupport::unregister() {
}

$MBeanInfo* StandardMBeanSupport::getMBeanInfo() {
	$useLocalCurrentObjectStackCache();
	$var($MBeanInfo, mbi, $MBeanSupport::getMBeanInfo());
	$Class* resourceClass = $nc($of($(getResource())))->getClass();
	if ($StandardMBeanIntrospector::isDefinitelyImmutableInfo(resourceClass)) {
		return mbi;
	}
	$var($String, var$0, $nc(mbi)->getClassName());
	$var($String, var$1, mbi->getDescription());
	$var($MBeanAttributeInfoArray, var$2, mbi->getAttributes());
	$var($MBeanConstructorInfoArray, var$3, mbi->getConstructors());
	$var($MBeanOperationInfoArray, var$4, mbi->getOperations());
	$var($MBeanNotificationInfoArray, var$5, $MBeanIntrospector::findNotifications($(getResource())));
	return $new($MBeanInfo, var$0, var$1, var$2, var$3, var$4, var$5, $(mbi->getDescriptor()));
}

StandardMBeanSupport::StandardMBeanSupport() {
}

$Class* StandardMBeanSupport::load$($String* name, bool initialize) {
	$loadClass(StandardMBeanSupport, name, initialize, &_StandardMBeanSupport_ClassInfo_, allocate$StandardMBeanSupport);
	return class$;
}

$Class* StandardMBeanSupport::class$ = nullptr;

			} // mbeanserver
		} // jmx
	} // sun
} // com
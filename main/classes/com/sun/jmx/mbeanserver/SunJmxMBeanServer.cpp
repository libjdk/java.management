#include <com/sun/jmx/mbeanserver/SunJmxMBeanServer.h>

#include <com/sun/jmx/mbeanserver/MBeanInstantiator.h>
#include <javax/management/MBeanServerDelegate.h>
#include <jcpp.h>

using $MBeanInstantiator = ::com::sun::jmx::mbeanserver::MBeanInstantiator;
using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $MBeanServer = ::javax::management::MBeanServer;
using $MBeanServerDelegate = ::javax::management::MBeanServerDelegate;

namespace com {
	namespace sun {
		namespace jmx {
			namespace mbeanserver {

$MethodInfo _SunJmxMBeanServer_MethodInfo_[] = {
	{"getMBeanInstantiator", "()Lcom/sun/jmx/mbeanserver/MBeanInstantiator;", nullptr, $PUBLIC | $ABSTRACT},
	{"getMBeanServerDelegate", "()Ljavax/management/MBeanServerDelegate;", nullptr, $PUBLIC | $ABSTRACT},
	{"getMBeanServerInterceptor", "()Ljavax/management/MBeanServer;", nullptr, $PUBLIC | $ABSTRACT},
	{"interceptorsEnabled", "()Z", nullptr, $PUBLIC | $ABSTRACT},
	{"setMBeanServerInterceptor", "(Ljavax/management/MBeanServer;)V", nullptr, $PUBLIC | $ABSTRACT},
	{}
};

$ClassInfo _SunJmxMBeanServer_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT,
	"com.sun.jmx.mbeanserver.SunJmxMBeanServer",
	nullptr,
	"javax.management.MBeanServer",
	nullptr,
	_SunJmxMBeanServer_MethodInfo_
};

$Object* allocate$SunJmxMBeanServer($Class* clazz) {
	return $of($alloc(SunJmxMBeanServer));
}

$Class* SunJmxMBeanServer::load$($String* name, bool initialize) {
	$loadClass(SunJmxMBeanServer, name, initialize, &_SunJmxMBeanServer_ClassInfo_, allocate$SunJmxMBeanServer);
	return class$;
}

$Class* SunJmxMBeanServer::class$ = nullptr;

			} // mbeanserver
		} // jmx
	} // sun
} // com
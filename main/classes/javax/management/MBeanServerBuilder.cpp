#include <javax/management/MBeanServerBuilder.h>

#include <com/sun/jmx/mbeanserver/JmxMBeanServer.h>
#include <javax/management/MBeanServer.h>
#include <javax/management/MBeanServerDelegate.h>
#include <jcpp.h>

using $JmxMBeanServer = ::com::sun::jmx::mbeanserver::JmxMBeanServer;
using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $MBeanServer = ::javax::management::MBeanServer;
using $MBeanServerDelegate = ::javax::management::MBeanServerDelegate;

namespace javax {
	namespace management {

$MethodInfo _MBeanServerBuilder_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(MBeanServerBuilder::*)()>(&MBeanServerBuilder::init$))},
	{"newMBeanServer", "(Ljava/lang/String;Ljavax/management/MBeanServer;Ljavax/management/MBeanServerDelegate;)Ljavax/management/MBeanServer;", nullptr, $PUBLIC},
	{"newMBeanServerDelegate", "()Ljavax/management/MBeanServerDelegate;", nullptr, $PUBLIC},
	{}
};

$ClassInfo _MBeanServerBuilder_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"javax.management.MBeanServerBuilder",
	"java.lang.Object",
	nullptr,
	nullptr,
	_MBeanServerBuilder_MethodInfo_
};

$Object* allocate$MBeanServerBuilder($Class* clazz) {
	return $of($alloc(MBeanServerBuilder));
}

void MBeanServerBuilder::init$() {
}

$MBeanServerDelegate* MBeanServerBuilder::newMBeanServerDelegate() {
	return $JmxMBeanServer::newMBeanServerDelegate();
}

$MBeanServer* MBeanServerBuilder::newMBeanServer($String* defaultDomain, $MBeanServer* outer, $MBeanServerDelegate* delegate) {
	return $JmxMBeanServer::newMBeanServer(defaultDomain, outer, delegate, false);
}

MBeanServerBuilder::MBeanServerBuilder() {
}

$Class* MBeanServerBuilder::load$($String* name, bool initialize) {
	$loadClass(MBeanServerBuilder, name, initialize, &_MBeanServerBuilder_ClassInfo_, allocate$MBeanServerBuilder);
	return class$;
}

$Class* MBeanServerBuilder::class$ = nullptr;

	} // management
} // javax
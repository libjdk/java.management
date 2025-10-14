#include <javax/management/remote/MBeanServerForwarder.h>

#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $MBeanServer = ::javax::management::MBeanServer;

namespace javax {
	namespace management {
		namespace remote {

$MethodInfo _MBeanServerForwarder_MethodInfo_[] = {
	{"getMBeanServer", "()Ljavax/management/MBeanServer;", nullptr, $PUBLIC | $ABSTRACT},
	{"setMBeanServer", "(Ljavax/management/MBeanServer;)V", nullptr, $PUBLIC | $ABSTRACT},
	{}
};

$ClassInfo _MBeanServerForwarder_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT,
	"javax.management.remote.MBeanServerForwarder",
	nullptr,
	"javax.management.MBeanServer",
	nullptr,
	_MBeanServerForwarder_MethodInfo_
};

$Object* allocate$MBeanServerForwarder($Class* clazz) {
	return $of($alloc(MBeanServerForwarder));
}

$Class* MBeanServerForwarder::load$($String* name, bool initialize) {
	$loadClass(MBeanServerForwarder, name, initialize, &_MBeanServerForwarder_ClassInfo_, allocate$MBeanServerForwarder);
	return class$;
}

$Class* MBeanServerForwarder::class$ = nullptr;

		} // remote
	} // management
} // javax
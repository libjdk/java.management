#include <com/sun/jmx/mbeanserver/DynamicMBean2.h>

#include <javax/management/MBeanServer.h>
#include <javax/management/ObjectName.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $DynamicMBean = ::javax::management::DynamicMBean;
using $MBeanServer = ::javax::management::MBeanServer;
using $ObjectName = ::javax::management::ObjectName;

namespace com {
	namespace sun {
		namespace jmx {
			namespace mbeanserver {

$MethodInfo _DynamicMBean2_MethodInfo_[] = {
	{"getClassName", "()Ljava/lang/String;", nullptr, $PUBLIC | $ABSTRACT},
	{"getResource", "()Ljava/lang/Object;", nullptr, $PUBLIC | $ABSTRACT},
	{"preRegister2", "(Ljavax/management/MBeanServer;Ljavax/management/ObjectName;)V", nullptr, $PUBLIC | $ABSTRACT, nullptr, "java.lang.Exception"},
	{"registerFailed", "()V", nullptr, $PUBLIC | $ABSTRACT},
	{}
};

$ClassInfo _DynamicMBean2_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT,
	"com.sun.jmx.mbeanserver.DynamicMBean2",
	nullptr,
	"javax.management.DynamicMBean",
	nullptr,
	_DynamicMBean2_MethodInfo_
};

$Object* allocate$DynamicMBean2($Class* clazz) {
	return $of($alloc(DynamicMBean2));
}

$Class* DynamicMBean2::load$($String* name, bool initialize) {
	$loadClass(DynamicMBean2, name, initialize, &_DynamicMBean2_ClassInfo_, allocate$DynamicMBean2);
	return class$;
}

$Class* DynamicMBean2::class$ = nullptr;

			} // mbeanserver
		} // jmx
	} // sun
} // com
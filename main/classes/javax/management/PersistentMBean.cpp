#include <javax/management/PersistentMBean.h>

#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace javax {
	namespace management {

$MethodInfo _PersistentMBean_MethodInfo_[] = {
	{"load", "()V", nullptr, $PUBLIC | $ABSTRACT, nullptr, "javax.management.MBeanException,javax.management.RuntimeOperationsException,javax.management.InstanceNotFoundException"},
	{"store", "()V", nullptr, $PUBLIC | $ABSTRACT, nullptr, "javax.management.MBeanException,javax.management.RuntimeOperationsException,javax.management.InstanceNotFoundException"},
	{}
};

$ClassInfo _PersistentMBean_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT,
	"javax.management.PersistentMBean",
	nullptr,
	nullptr,
	nullptr,
	_PersistentMBean_MethodInfo_
};

$Object* allocate$PersistentMBean($Class* clazz) {
	return $of($alloc(PersistentMBean));
}

$Class* PersistentMBean::load$($String* name, bool initialize) {
	$loadClass(PersistentMBean, name, initialize, &_PersistentMBean_ClassInfo_, allocate$PersistentMBean);
	return class$;
}

$Class* PersistentMBean::class$ = nullptr;

	} // management
} // javax
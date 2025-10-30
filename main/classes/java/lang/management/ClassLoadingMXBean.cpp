#include <java/lang/management/ClassLoadingMXBean.h>

#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $PlatformManagedObject = ::java::lang::management::PlatformManagedObject;

namespace java {
	namespace lang {
		namespace management {

$MethodInfo _ClassLoadingMXBean_MethodInfo_[] = {
	{"getLoadedClassCount", "()I", nullptr, $PUBLIC | $ABSTRACT},
	{"getTotalLoadedClassCount", "()J", nullptr, $PUBLIC | $ABSTRACT},
	{"getUnloadedClassCount", "()J", nullptr, $PUBLIC | $ABSTRACT},
	{"isVerbose", "()Z", nullptr, $PUBLIC | $ABSTRACT},
	{"setVerbose", "(Z)V", nullptr, $PUBLIC | $ABSTRACT},
	{}
};

$ClassInfo _ClassLoadingMXBean_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT,
	"java.lang.management.ClassLoadingMXBean",
	nullptr,
	"java.lang.management.PlatformManagedObject",
	nullptr,
	_ClassLoadingMXBean_MethodInfo_
};

$Object* allocate$ClassLoadingMXBean($Class* clazz) {
	return $of($alloc(ClassLoadingMXBean));
}

$Class* ClassLoadingMXBean::load$($String* name, bool initialize) {
	$loadClass(ClassLoadingMXBean, name, initialize, &_ClassLoadingMXBean_ClassInfo_, allocate$ClassLoadingMXBean);
	return class$;
}

$Class* ClassLoadingMXBean::class$ = nullptr;

		} // management
	} // lang
} // java
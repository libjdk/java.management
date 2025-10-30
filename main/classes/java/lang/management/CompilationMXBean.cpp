#include <java/lang/management/CompilationMXBean.h>

#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $PlatformManagedObject = ::java::lang::management::PlatformManagedObject;

namespace java {
	namespace lang {
		namespace management {

$MethodInfo _CompilationMXBean_MethodInfo_[] = {
	{"getName", "()Ljava/lang/String;", nullptr, $PUBLIC | $ABSTRACT},
	{"getTotalCompilationTime", "()J", nullptr, $PUBLIC | $ABSTRACT},
	{"isCompilationTimeMonitoringSupported", "()Z", nullptr, $PUBLIC | $ABSTRACT},
	{}
};

$ClassInfo _CompilationMXBean_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT,
	"java.lang.management.CompilationMXBean",
	nullptr,
	"java.lang.management.PlatformManagedObject",
	nullptr,
	_CompilationMXBean_MethodInfo_
};

$Object* allocate$CompilationMXBean($Class* clazz) {
	return $of($alloc(CompilationMXBean));
}

$Class* CompilationMXBean::load$($String* name, bool initialize) {
	$loadClass(CompilationMXBean, name, initialize, &_CompilationMXBean_ClassInfo_, allocate$CompilationMXBean);
	return class$;
}

$Class* CompilationMXBean::class$ = nullptr;

		} // management
	} // lang
} // java
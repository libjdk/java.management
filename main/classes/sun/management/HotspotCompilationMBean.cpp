#include <sun/management/HotspotCompilationMBean.h>

#include <java/util/List.h>
#include <sun/management/MethodInfo.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $CompoundAttribute = ::java::lang::CompoundAttribute;
using $1MethodInfo = ::java::lang::MethodInfo;
using $List = ::java::util::List;
using $MethodInfo = ::sun::management::MethodInfo;

namespace sun {
	namespace management {

$CompoundAttribute _HotspotCompilationMBean_MethodAnnotations_getCompilerThreadStats4[] = {
	{"Ljava/lang/Deprecated;", nullptr},
	{}
};

$1MethodInfo _HotspotCompilationMBean_MethodInfo_[] = {
	{"getBailoutCompileCount", "()J", nullptr, $PUBLIC | $ABSTRACT},
	{"getCompiledMethodCodeSize", "()J", nullptr, $PUBLIC | $ABSTRACT},
	{"getCompiledMethodSize", "()J", nullptr, $PUBLIC | $ABSTRACT},
	{"getCompilerThreadCount", "()I", nullptr, $PUBLIC | $ABSTRACT},
	{"getCompilerThreadStats", "()Ljava/util/List;", "()Ljava/util/List<Lsun/management/CompilerThreadStat;>;", $PUBLIC | $ABSTRACT | $DEPRECATED, nullptr, nullptr, nullptr, _HotspotCompilationMBean_MethodAnnotations_getCompilerThreadStats4},
	{"getFailedCompile", "()Lsun/management/MethodInfo;", nullptr, $PUBLIC | $ABSTRACT},
	{"getInternalCompilerCounters", "()Ljava/util/List;", "()Ljava/util/List<Lsun/management/counter/Counter;>;", $PUBLIC | $ABSTRACT},
	{"getInvalidatedCompile", "()Lsun/management/MethodInfo;", nullptr, $PUBLIC | $ABSTRACT},
	{"getInvalidatedCompileCount", "()J", nullptr, $PUBLIC | $ABSTRACT},
	{"getLastCompile", "()Lsun/management/MethodInfo;", nullptr, $PUBLIC | $ABSTRACT},
	{"getTotalCompileCount", "()J", nullptr, $PUBLIC | $ABSTRACT},
	{}
};

$ClassInfo _HotspotCompilationMBean_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT,
	"sun.management.HotspotCompilationMBean",
	nullptr,
	nullptr,
	nullptr,
	_HotspotCompilationMBean_MethodInfo_
};

$Object* allocate$HotspotCompilationMBean($Class* clazz) {
	return $of($alloc(HotspotCompilationMBean));
}

$Class* HotspotCompilationMBean::load$($String* name, bool initialize) {
	$loadClass(HotspotCompilationMBean, name, initialize, &_HotspotCompilationMBean_ClassInfo_, allocate$HotspotCompilationMBean);
	return class$;
}

$Class* HotspotCompilationMBean::class$ = nullptr;

	} // management
} // sun
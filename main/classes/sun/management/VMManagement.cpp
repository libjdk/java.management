#include <sun/management/VMManagement.h>

#include <java/util/List.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $List = ::java::util::List;

namespace sun {
	namespace management {

$MethodInfo _VMManagement_MethodInfo_[] = {
	{"getAvailableProcessors", "()I", nullptr, $PUBLIC | $ABSTRACT},
	{"getBootClassPath", "()Ljava/lang/String;", nullptr, $PUBLIC | $ABSTRACT},
	{"getClassInitializationTime", "()J", nullptr, $PUBLIC | $ABSTRACT},
	{"getClassLoadingTime", "()J", nullptr, $PUBLIC | $ABSTRACT},
	{"getClassPath", "()Ljava/lang/String;", nullptr, $PUBLIC | $ABSTRACT},
	{"getClassVerificationTime", "()J", nullptr, $PUBLIC | $ABSTRACT},
	{"getCompilerName", "()Ljava/lang/String;", nullptr, $PUBLIC | $ABSTRACT},
	{"getDaemonThreadCount", "()I", nullptr, $PUBLIC | $ABSTRACT},
	{"getInitializedClassCount", "()J", nullptr, $PUBLIC | $ABSTRACT},
	{"getInternalCounters", "(Ljava/lang/String;)Ljava/util/List;", "(Ljava/lang/String;)Ljava/util/List<Lsun/management/counter/Counter;>;", $PUBLIC | $ABSTRACT},
	{"getLibraryPath", "()Ljava/lang/String;", nullptr, $PUBLIC | $ABSTRACT},
	{"getLiveThreadCount", "()I", nullptr, $PUBLIC | $ABSTRACT},
	{"getLoadedClassCount", "()I", nullptr, $PUBLIC | $ABSTRACT},
	{"getLoadedClassSize", "()J", nullptr, $PUBLIC | $ABSTRACT},
	{"getManagementVersion", "()Ljava/lang/String;", nullptr, $PUBLIC | $ABSTRACT},
	{"getMethodDataSize", "()J", nullptr, $PUBLIC | $ABSTRACT},
	{"getOsArch", "()Ljava/lang/String;", nullptr, $PUBLIC | $ABSTRACT},
	{"getOsName", "()Ljava/lang/String;", nullptr, $PUBLIC | $ABSTRACT},
	{"getOsVersion", "()Ljava/lang/String;", nullptr, $PUBLIC | $ABSTRACT},
	{"getPeakThreadCount", "()I", nullptr, $PUBLIC | $ABSTRACT},
	{"getSafepointCount", "()J", nullptr, $PUBLIC | $ABSTRACT},
	{"getSafepointSyncTime", "()J", nullptr, $PUBLIC | $ABSTRACT},
	{"getStartupTime", "()J", nullptr, $PUBLIC | $ABSTRACT},
	{"getTotalApplicationNonStoppedTime", "()J", nullptr, $PUBLIC | $ABSTRACT},
	{"getTotalClassCount", "()J", nullptr, $PUBLIC | $ABSTRACT},
	{"getTotalCompileTime", "()J", nullptr, $PUBLIC | $ABSTRACT},
	{"getTotalSafepointTime", "()J", nullptr, $PUBLIC | $ABSTRACT},
	{"getTotalThreadCount", "()J", nullptr, $PUBLIC | $ABSTRACT},
	{"getUnloadedClassCount", "()J", nullptr, $PUBLIC | $ABSTRACT},
	{"getUnloadedClassSize", "()J", nullptr, $PUBLIC | $ABSTRACT},
	{"getUptime", "()J", nullptr, $PUBLIC | $ABSTRACT},
	{"getVerboseClass", "()Z", nullptr, $PUBLIC | $ABSTRACT},
	{"getVerboseGC", "()Z", nullptr, $PUBLIC | $ABSTRACT},
	{"getVmArguments", "()Ljava/util/List;", "()Ljava/util/List<Ljava/lang/String;>;", $PUBLIC | $ABSTRACT},
	{"getVmId", "()Ljava/lang/String;", nullptr, $PUBLIC | $ABSTRACT},
	{"getVmName", "()Ljava/lang/String;", nullptr, $PUBLIC | $ABSTRACT},
	{"getVmSpecName", "()Ljava/lang/String;", nullptr, $PUBLIC | $ABSTRACT},
	{"getVmSpecVendor", "()Ljava/lang/String;", nullptr, $PUBLIC | $ABSTRACT},
	{"getVmSpecVersion", "()Ljava/lang/String;", nullptr, $PUBLIC | $ABSTRACT},
	{"getVmVendor", "()Ljava/lang/String;", nullptr, $PUBLIC | $ABSTRACT},
	{"getVmVersion", "()Ljava/lang/String;", nullptr, $PUBLIC | $ABSTRACT},
	{"isBootClassPathSupported", "()Z", nullptr, $PUBLIC | $ABSTRACT},
	{"isCompilationTimeMonitoringSupported", "()Z", nullptr, $PUBLIC | $ABSTRACT},
	{"isCurrentThreadCpuTimeSupported", "()Z", nullptr, $PUBLIC | $ABSTRACT},
	{"isGcNotificationSupported", "()Z", nullptr, $PUBLIC | $ABSTRACT},
	{"isObjectMonitorUsageSupported", "()Z", nullptr, $PUBLIC | $ABSTRACT},
	{"isOtherThreadCpuTimeSupported", "()Z", nullptr, $PUBLIC | $ABSTRACT},
	{"isRemoteDiagnosticCommandsSupported", "()Z", nullptr, $PUBLIC | $ABSTRACT},
	{"isSynchronizerUsageSupported", "()Z", nullptr, $PUBLIC | $ABSTRACT},
	{"isThreadAllocatedMemoryEnabled", "()Z", nullptr, $PUBLIC | $ABSTRACT},
	{"isThreadAllocatedMemorySupported", "()Z", nullptr, $PUBLIC | $ABSTRACT},
	{"isThreadContentionMonitoringEnabled", "()Z", nullptr, $PUBLIC | $ABSTRACT},
	{"isThreadContentionMonitoringSupported", "()Z", nullptr, $PUBLIC | $ABSTRACT},
	{"isThreadCpuTimeEnabled", "()Z", nullptr, $PUBLIC | $ABSTRACT},
	{}
};

$ClassInfo _VMManagement_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT,
	"sun.management.VMManagement",
	nullptr,
	nullptr,
	nullptr,
	_VMManagement_MethodInfo_
};

$Object* allocate$VMManagement($Class* clazz) {
	return $of($alloc(VMManagement));
}

$Class* VMManagement::load$($String* name, bool initialize) {
	$loadClass(VMManagement, name, initialize, &_VMManagement_ClassInfo_, allocate$VMManagement);
	return class$;
}

$Class* VMManagement::class$ = nullptr;

	} // management
} // sun
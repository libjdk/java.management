#include <sun/management/VMManagementImpl.h>

#include <java/io/IOException.h>
#include <java/lang/AssertionError.h>
#include <java/lang/ClassNotFoundException.h>
#include <java/lang/UnsupportedOperationException.h>
#include <java/net/InetAddress.h>
#include <java/net/UnknownHostException.h>
#include <java/nio/ByteBuffer.h>
#include <java/security/AccessController.h>
#include <java/security/PrivilegedAction.h>
#include <java/util/Arrays.h>
#include <java/util/Collections.h>
#include <java/util/List.h>
#include <jdk/internal/perf/Perf$GetPerfAction.h>
#include <jdk/internal/perf/Perf.h>
#include <sun/management/VMManagementImpl$1.h>
#include <sun/management/counter/perf/PerfInstrumentation.h>
#include <jcpp.h>

using $IOException = ::java::io::IOException;
using $AssertionError = ::java::lang::AssertionError;
using $ClassInfo = ::java::lang::ClassInfo;
using $ClassNotFoundException = ::java::lang::ClassNotFoundException;
using $FieldInfo = ::java::lang::FieldInfo;
using $IllegalArgumentException = ::java::lang::IllegalArgumentException;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $UnsupportedOperationException = ::java::lang::UnsupportedOperationException;
using $InetAddress = ::java::net::InetAddress;
using $UnknownHostException = ::java::net::UnknownHostException;
using $Buffer = ::java::nio::Buffer;
using $ByteBuffer = ::java::nio::ByteBuffer;
using $AccessController = ::java::security::AccessController;
using $PrivilegedAction = ::java::security::PrivilegedAction;
using $Arrays = ::java::util::Arrays;
using $Collections = ::java::util::Collections;
using $List = ::java::util::List;
using $Perf = ::jdk::internal::perf::Perf;
using $Perf$GetPerfAction = ::jdk::internal::perf::Perf$GetPerfAction;
using $VMManagement = ::sun::management::VMManagement;
using $VMManagementImpl$1 = ::sun::management::VMManagementImpl$1;
using $PerfInstrumentation = ::sun::management::counter::perf::PerfInstrumentation;

namespace sun {
	namespace management {

$FieldInfo _VMManagementImpl_FieldInfo_[] = {
	{"version", "Ljava/lang/String;", nullptr, $PRIVATE | $STATIC, $staticField(VMManagementImpl, version)},
	{"compTimeMonitoringSupport", "Z", nullptr, $PRIVATE | $STATIC, $staticField(VMManagementImpl, compTimeMonitoringSupport)},
	{"threadContentionMonitoringSupport", "Z", nullptr, $PRIVATE | $STATIC, $staticField(VMManagementImpl, threadContentionMonitoringSupport)},
	{"currentThreadCpuTimeSupport", "Z", nullptr, $PRIVATE | $STATIC, $staticField(VMManagementImpl, currentThreadCpuTimeSupport)},
	{"otherThreadCpuTimeSupport", "Z", nullptr, $PRIVATE | $STATIC, $staticField(VMManagementImpl, otherThreadCpuTimeSupport)},
	{"objectMonitorUsageSupport", "Z", nullptr, $PRIVATE | $STATIC, $staticField(VMManagementImpl, objectMonitorUsageSupport)},
	{"synchronizerUsageSupport", "Z", nullptr, $PRIVATE | $STATIC, $staticField(VMManagementImpl, synchronizerUsageSupport)},
	{"threadAllocatedMemorySupport", "Z", nullptr, $PRIVATE | $STATIC, $staticField(VMManagementImpl, threadAllocatedMemorySupport)},
	{"gcNotificationSupport", "Z", nullptr, $PRIVATE | $STATIC, $staticField(VMManagementImpl, gcNotificationSupport)},
	{"remoteDiagnosticCommandsSupport", "Z", nullptr, $PRIVATE | $STATIC, $staticField(VMManagementImpl, remoteDiagnosticCommandsSupport)},
	{"vmArgs", "Ljava/util/List;", "Ljava/util/List<Ljava/lang/String;>;", $PRIVATE, $field(VMManagementImpl, vmArgs)},
	{"perfInstr", "Lsun/management/counter/perf/PerfInstrumentation;", nullptr, $PRIVATE, $field(VMManagementImpl, perfInstr)},
	{"noPerfData", "Z", nullptr, $PRIVATE, $field(VMManagementImpl, noPerfData)},
	{}
};

$MethodInfo _VMManagementImpl_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(VMManagementImpl::*)()>(&VMManagementImpl::init$))},
	{"getAvailableProcessors", "()I", nullptr, $PUBLIC | $NATIVE},
	{"getBootClassPath", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"getClassInitializationTime", "()J", nullptr, $PUBLIC | $NATIVE},
	{"getClassLoadingTime", "()J", nullptr, $PUBLIC | $NATIVE},
	{"getClassPath", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"getClassVerificationTime", "()J", nullptr, $PUBLIC | $NATIVE},
	{"getCompilerName", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"getDaemonThreadCount", "()I", nullptr, $PUBLIC | $NATIVE},
	{"getInitializedClassCount", "()J", nullptr, $PUBLIC | $NATIVE},
	{"getInternalCounters", "(Ljava/lang/String;)Ljava/util/List;", "(Ljava/lang/String;)Ljava/util/List<Lsun/management/counter/Counter;>;", $PUBLIC},
	{"getLibraryPath", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"getLiveThreadCount", "()I", nullptr, $PUBLIC | $NATIVE},
	{"getLoadedClassCount", "()I", nullptr, $PUBLIC},
	{"getLoadedClassSize", "()J", nullptr, $PUBLIC | $NATIVE},
	{"getManagementVersion", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"getMethodDataSize", "()J", nullptr, $PUBLIC | $NATIVE},
	{"getOsArch", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"getOsName", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"getOsVersion", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"getPeakThreadCount", "()I", nullptr, $PUBLIC | $NATIVE},
	{"getPerfInstrumentation", "()Lsun/management/counter/perf/PerfInstrumentation;", nullptr, $PRIVATE | $SYNCHRONIZED, $method(static_cast<$PerfInstrumentation*(VMManagementImpl::*)()>(&VMManagementImpl::getPerfInstrumentation))},
	{"getProcessId", "()I", nullptr, $PRIVATE | $NATIVE, $method(static_cast<int32_t(VMManagementImpl::*)()>(&VMManagementImpl::getProcessId))},
	{"getSafepointCount", "()J", nullptr, $PUBLIC | $NATIVE},
	{"getSafepointSyncTime", "()J", nullptr, $PUBLIC | $NATIVE},
	{"getStartupTime", "()J", nullptr, $PUBLIC | $NATIVE},
	{"getTotalApplicationNonStoppedTime", "()J", nullptr, $PUBLIC | $NATIVE},
	{"getTotalClassCount", "()J", nullptr, $PUBLIC | $NATIVE},
	{"getTotalCompileTime", "()J", nullptr, $PUBLIC | $NATIVE},
	{"getTotalSafepointTime", "()J", nullptr, $PUBLIC | $NATIVE},
	{"getTotalThreadCount", "()J", nullptr, $PUBLIC | $NATIVE},
	{"getUnloadedClassCount", "()J", nullptr, $PUBLIC | $NATIVE},
	{"getUnloadedClassSize", "()J", nullptr, $PUBLIC | $NATIVE},
	{"getUptime", "()J", nullptr, $PUBLIC},
	{"getUptime0", "()J", nullptr, $PRIVATE | $NATIVE, $method(static_cast<int64_t(VMManagementImpl::*)()>(&VMManagementImpl::getUptime0))},
	{"getVerboseClass", "()Z", nullptr, $PUBLIC | $NATIVE},
	{"getVerboseGC", "()Z", nullptr, $PUBLIC | $NATIVE},
	{"getVersion0", "()Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $NATIVE, $method(static_cast<$String*(*)()>(&VMManagementImpl::getVersion0))},
	{"getVmArguments", "()Ljava/util/List;", "()Ljava/util/List<Ljava/lang/String;>;", $PUBLIC | $SYNCHRONIZED},
	{"getVmArguments0", "()[Ljava/lang/String;", nullptr, $PUBLIC | $NATIVE},
	{"getVmId", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"getVmName", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"getVmSpecName", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"getVmSpecVendor", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"getVmSpecVersion", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"getVmVendor", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"getVmVersion", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"initOptionalSupportFields", "()V", nullptr, $PRIVATE | $STATIC | $NATIVE, $method(static_cast<void(*)()>(&VMManagementImpl::initOptionalSupportFields))},
	{"isBootClassPathSupported", "()Z", nullptr, $PUBLIC},
	{"isCompilationTimeMonitoringSupported", "()Z", nullptr, $PUBLIC},
	{"isCurrentThreadCpuTimeSupported", "()Z", nullptr, $PUBLIC},
	{"isGcNotificationSupported", "()Z", nullptr, $PUBLIC},
	{"isObjectMonitorUsageSupported", "()Z", nullptr, $PUBLIC},
	{"isOtherThreadCpuTimeSupported", "()Z", nullptr, $PUBLIC},
	{"isRemoteDiagnosticCommandsSupported", "()Z", nullptr, $PUBLIC},
	{"isSynchronizerUsageSupported", "()Z", nullptr, $PUBLIC},
	{"isThreadAllocatedMemoryEnabled", "()Z", nullptr, $PUBLIC | $NATIVE},
	{"isThreadAllocatedMemorySupported", "()Z", nullptr, $PUBLIC},
	{"isThreadContentionMonitoringEnabled", "()Z", nullptr, $PUBLIC | $NATIVE},
	{"isThreadContentionMonitoringSupported", "()Z", nullptr, $PUBLIC},
	{"isThreadCpuTimeEnabled", "()Z", nullptr, $PUBLIC | $NATIVE},
	{}
};

#define _METHOD_INDEX_getAvailableProcessors 1
#define _METHOD_INDEX_getClassInitializationTime 3
#define _METHOD_INDEX_getClassLoadingTime 4
#define _METHOD_INDEX_getClassVerificationTime 6
#define _METHOD_INDEX_getDaemonThreadCount 8
#define _METHOD_INDEX_getInitializedClassCount 9
#define _METHOD_INDEX_getLiveThreadCount 12
#define _METHOD_INDEX_getLoadedClassSize 14
#define _METHOD_INDEX_getMethodDataSize 16
#define _METHOD_INDEX_getPeakThreadCount 20
#define _METHOD_INDEX_getProcessId 22
#define _METHOD_INDEX_getSafepointCount 23
#define _METHOD_INDEX_getSafepointSyncTime 24
#define _METHOD_INDEX_getStartupTime 25
#define _METHOD_INDEX_getTotalApplicationNonStoppedTime 26
#define _METHOD_INDEX_getTotalClassCount 27
#define _METHOD_INDEX_getTotalCompileTime 28
#define _METHOD_INDEX_getTotalSafepointTime 29
#define _METHOD_INDEX_getTotalThreadCount 30
#define _METHOD_INDEX_getUnloadedClassCount 31
#define _METHOD_INDEX_getUnloadedClassSize 32
#define _METHOD_INDEX_getUptime0 34
#define _METHOD_INDEX_getVerboseClass 35
#define _METHOD_INDEX_getVerboseGC 36
#define _METHOD_INDEX_getVersion0 37
#define _METHOD_INDEX_getVmArguments0 39
#define _METHOD_INDEX_initOptionalSupportFields 47
#define _METHOD_INDEX_isThreadAllocatedMemoryEnabled 56
#define _METHOD_INDEX_isThreadContentionMonitoringEnabled 58
#define _METHOD_INDEX_isThreadCpuTimeEnabled 60

$InnerClassInfo _VMManagementImpl_InnerClassesInfo_[] = {
	{"sun.management.VMManagementImpl$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _VMManagementImpl_ClassInfo_ = {
	$ACC_SUPER,
	"sun.management.VMManagementImpl",
	"java.lang.Object",
	"sun.management.VMManagement",
	_VMManagementImpl_FieldInfo_,
	_VMManagementImpl_MethodInfo_,
	nullptr,
	nullptr,
	_VMManagementImpl_InnerClassesInfo_,
	nullptr,
	nullptr,
	"sun.management.VMManagementImpl$1"
};

$Object* allocate$VMManagementImpl($Class* clazz) {
	return $of($alloc(VMManagementImpl));
}

$String* VMManagementImpl::version = nullptr;
bool VMManagementImpl::compTimeMonitoringSupport = false;
bool VMManagementImpl::threadContentionMonitoringSupport = false;
bool VMManagementImpl::currentThreadCpuTimeSupport = false;
bool VMManagementImpl::otherThreadCpuTimeSupport = false;
bool VMManagementImpl::objectMonitorUsageSupport = false;
bool VMManagementImpl::synchronizerUsageSupport = false;
bool VMManagementImpl::threadAllocatedMemorySupport = false;
bool VMManagementImpl::gcNotificationSupport = false;
bool VMManagementImpl::remoteDiagnosticCommandsSupport = false;

void VMManagementImpl::init$() {
	$set(this, vmArgs, nullptr);
	$set(this, perfInstr, nullptr);
	this->noPerfData = false;
}

$String* VMManagementImpl::getVersion0() {
	$init(VMManagementImpl);
	$var($String, $ret, nullptr);
	$prepareNativeStatic(VMManagementImpl, getVersion0, $String*);
	$assign($ret, $invokeNativeStatic(VMManagementImpl, getVersion0));
	$finishNativeStatic();
	return $ret;
}

void VMManagementImpl::initOptionalSupportFields() {
	$init(VMManagementImpl);
	$prepareNativeStatic(VMManagementImpl, initOptionalSupportFields, void);
	$invokeNativeStatic(VMManagementImpl, initOptionalSupportFields);
	$finishNativeStatic();
}

bool VMManagementImpl::isCompilationTimeMonitoringSupported() {
	return VMManagementImpl::compTimeMonitoringSupport;
}

bool VMManagementImpl::isThreadContentionMonitoringSupported() {
	return VMManagementImpl::threadContentionMonitoringSupport;
}

bool VMManagementImpl::isCurrentThreadCpuTimeSupported() {
	return VMManagementImpl::currentThreadCpuTimeSupport;
}

bool VMManagementImpl::isOtherThreadCpuTimeSupported() {
	return VMManagementImpl::otherThreadCpuTimeSupport;
}

bool VMManagementImpl::isBootClassPathSupported() {
	return false;
}

bool VMManagementImpl::isObjectMonitorUsageSupported() {
	return VMManagementImpl::objectMonitorUsageSupport;
}

bool VMManagementImpl::isSynchronizerUsageSupported() {
	return VMManagementImpl::synchronizerUsageSupport;
}

bool VMManagementImpl::isThreadAllocatedMemorySupported() {
	return VMManagementImpl::threadAllocatedMemorySupport;
}

bool VMManagementImpl::isGcNotificationSupported() {
	$beforeCallerSensitive();
	bool isSupported = true;
	try {
		$Class::forName("com.sun.management.GarbageCollectorMXBean"_s);
	} catch ($ClassNotFoundException& x) {
		isSupported = false;
	}
	return isSupported;
}

bool VMManagementImpl::isRemoteDiagnosticCommandsSupported() {
	return VMManagementImpl::remoteDiagnosticCommandsSupport;
}

bool VMManagementImpl::isThreadContentionMonitoringEnabled() {
	bool $ret = false;
	$prepareNative(VMManagementImpl, isThreadContentionMonitoringEnabled, bool);
	$ret = $invokeNative(VMManagementImpl, isThreadContentionMonitoringEnabled);
	$finishNative();
	return $ret;
}

bool VMManagementImpl::isThreadCpuTimeEnabled() {
	bool $ret = false;
	$prepareNative(VMManagementImpl, isThreadCpuTimeEnabled, bool);
	$ret = $invokeNative(VMManagementImpl, isThreadCpuTimeEnabled);
	$finishNative();
	return $ret;
}

bool VMManagementImpl::isThreadAllocatedMemoryEnabled() {
	bool $ret = false;
	$prepareNative(VMManagementImpl, isThreadAllocatedMemoryEnabled, bool);
	$ret = $invokeNative(VMManagementImpl, isThreadAllocatedMemoryEnabled);
	$finishNative();
	return $ret;
}

int32_t VMManagementImpl::getLoadedClassCount() {
	int64_t var$0 = getTotalClassCount();
	int64_t count = var$0 - getUnloadedClassCount();
	return (int32_t)count;
}

int64_t VMManagementImpl::getTotalClassCount() {
	int64_t $ret = 0;
	$prepareNative(VMManagementImpl, getTotalClassCount, int64_t);
	$ret = $invokeNative(VMManagementImpl, getTotalClassCount);
	$finishNative();
	return $ret;
}

int64_t VMManagementImpl::getUnloadedClassCount() {
	int64_t $ret = 0;
	$prepareNative(VMManagementImpl, getUnloadedClassCount, int64_t);
	$ret = $invokeNative(VMManagementImpl, getUnloadedClassCount);
	$finishNative();
	return $ret;
}

bool VMManagementImpl::getVerboseClass() {
	bool $ret = false;
	$prepareNative(VMManagementImpl, getVerboseClass, bool);
	$ret = $invokeNative(VMManagementImpl, getVerboseClass);
	$finishNative();
	return $ret;
}

bool VMManagementImpl::getVerboseGC() {
	bool $ret = false;
	$prepareNative(VMManagementImpl, getVerboseGC, bool);
	$ret = $invokeNative(VMManagementImpl, getVerboseGC);
	$finishNative();
	return $ret;
}

$String* VMManagementImpl::getManagementVersion() {
	return VMManagementImpl::version;
}

$String* VMManagementImpl::getVmId() {
	$useLocalCurrentObjectStackCache();
	int32_t pid = getProcessId();
	$var($String, hostname, "localhost"_s);
	try {
		$assign(hostname, $nc($($InetAddress::getLocalHost()))->getHostName());
	} catch ($UnknownHostException& e) {
	}
	return $str({$$str(pid), "@"_s, hostname});
}

int32_t VMManagementImpl::getProcessId() {
	int32_t $ret = 0;
	$prepareNative(VMManagementImpl, getProcessId, int32_t);
	$ret = $invokeNative(VMManagementImpl, getProcessId);
	$finishNative();
	return $ret;
}

$String* VMManagementImpl::getVmName() {
	return $System::getProperty("java.vm.name"_s);
}

$String* VMManagementImpl::getVmVendor() {
	return $System::getProperty("java.vm.vendor"_s);
}

$String* VMManagementImpl::getVmVersion() {
	return $System::getProperty("java.vm.version"_s);
}

$String* VMManagementImpl::getVmSpecName() {
	return $System::getProperty("java.vm.specification.name"_s);
}

$String* VMManagementImpl::getVmSpecVendor() {
	return $System::getProperty("java.vm.specification.vendor"_s);
}

$String* VMManagementImpl::getVmSpecVersion() {
	return $System::getProperty("java.vm.specification.version"_s);
}

$String* VMManagementImpl::getClassPath() {
	return $System::getProperty("java.class.path"_s);
}

$String* VMManagementImpl::getLibraryPath() {
	return $System::getProperty("java.library.path"_s);
}

$String* VMManagementImpl::getBootClassPath() {
	$throwNew($UnsupportedOperationException, "Boot class path mechanism is not supported"_s);
	$shouldNotReachHere();
}

int64_t VMManagementImpl::getUptime() {
	return getUptime0();
}

$List* VMManagementImpl::getVmArguments() {
	$synchronized(this) {
		$useLocalCurrentObjectStackCache();
		if (this->vmArgs == nullptr) {
			$var($StringArray, args, getVmArguments0());
			$var($List, l, (args != nullptr && args->length != 0) ? $Arrays::asList(args) : $Collections::emptyList());
			$set(this, vmArgs, $Collections::unmodifiableList(l));
		}
		return this->vmArgs;
	}
}

$StringArray* VMManagementImpl::getVmArguments0() {
	$var($StringArray, $ret, nullptr);
	$prepareNative(VMManagementImpl, getVmArguments0, $StringArray*);
	$assign($ret, $invokeNative(VMManagementImpl, getVmArguments0));
	$finishNative();
	return $ret;
}

int64_t VMManagementImpl::getStartupTime() {
	int64_t $ret = 0;
	$prepareNative(VMManagementImpl, getStartupTime, int64_t);
	$ret = $invokeNative(VMManagementImpl, getStartupTime);
	$finishNative();
	return $ret;
}

int64_t VMManagementImpl::getUptime0() {
	int64_t $ret = 0;
	$prepareNative(VMManagementImpl, getUptime0, int64_t);
	$ret = $invokeNative(VMManagementImpl, getUptime0);
	$finishNative();
	return $ret;
}

int32_t VMManagementImpl::getAvailableProcessors() {
	int32_t $ret = 0;
	$prepareNative(VMManagementImpl, getAvailableProcessors, int32_t);
	$ret = $invokeNative(VMManagementImpl, getAvailableProcessors);
	$finishNative();
	return $ret;
}

$String* VMManagementImpl::getCompilerName() {
	$useLocalCurrentObjectStackCache();
	$beforeCallerSensitive();
	$var($String, name, $cast($String, $AccessController::doPrivileged(static_cast<$PrivilegedAction*>($$new($VMManagementImpl$1, this)))));
	return name;
}

int64_t VMManagementImpl::getTotalCompileTime() {
	int64_t $ret = 0;
	$prepareNative(VMManagementImpl, getTotalCompileTime, int64_t);
	$ret = $invokeNative(VMManagementImpl, getTotalCompileTime);
	$finishNative();
	return $ret;
}

int64_t VMManagementImpl::getTotalThreadCount() {
	int64_t $ret = 0;
	$prepareNative(VMManagementImpl, getTotalThreadCount, int64_t);
	$ret = $invokeNative(VMManagementImpl, getTotalThreadCount);
	$finishNative();
	return $ret;
}

int32_t VMManagementImpl::getLiveThreadCount() {
	int32_t $ret = 0;
	$prepareNative(VMManagementImpl, getLiveThreadCount, int32_t);
	$ret = $invokeNative(VMManagementImpl, getLiveThreadCount);
	$finishNative();
	return $ret;
}

int32_t VMManagementImpl::getPeakThreadCount() {
	int32_t $ret = 0;
	$prepareNative(VMManagementImpl, getPeakThreadCount, int32_t);
	$ret = $invokeNative(VMManagementImpl, getPeakThreadCount);
	$finishNative();
	return $ret;
}

int32_t VMManagementImpl::getDaemonThreadCount() {
	int32_t $ret = 0;
	$prepareNative(VMManagementImpl, getDaemonThreadCount, int32_t);
	$ret = $invokeNative(VMManagementImpl, getDaemonThreadCount);
	$finishNative();
	return $ret;
}

$String* VMManagementImpl::getOsName() {
	return $System::getProperty("os.name"_s);
}

$String* VMManagementImpl::getOsArch() {
	return $System::getProperty("os.arch"_s);
}

$String* VMManagementImpl::getOsVersion() {
	return $System::getProperty("os.version"_s);
}

int64_t VMManagementImpl::getSafepointCount() {
	int64_t $ret = 0;
	$prepareNative(VMManagementImpl, getSafepointCount, int64_t);
	$ret = $invokeNative(VMManagementImpl, getSafepointCount);
	$finishNative();
	return $ret;
}

int64_t VMManagementImpl::getTotalSafepointTime() {
	int64_t $ret = 0;
	$prepareNative(VMManagementImpl, getTotalSafepointTime, int64_t);
	$ret = $invokeNative(VMManagementImpl, getTotalSafepointTime);
	$finishNative();
	return $ret;
}

int64_t VMManagementImpl::getSafepointSyncTime() {
	int64_t $ret = 0;
	$prepareNative(VMManagementImpl, getSafepointSyncTime, int64_t);
	$ret = $invokeNative(VMManagementImpl, getSafepointSyncTime);
	$finishNative();
	return $ret;
}

int64_t VMManagementImpl::getTotalApplicationNonStoppedTime() {
	int64_t $ret = 0;
	$prepareNative(VMManagementImpl, getTotalApplicationNonStoppedTime, int64_t);
	$ret = $invokeNative(VMManagementImpl, getTotalApplicationNonStoppedTime);
	$finishNative();
	return $ret;
}

int64_t VMManagementImpl::getLoadedClassSize() {
	int64_t $ret = 0;
	$prepareNative(VMManagementImpl, getLoadedClassSize, int64_t);
	$ret = $invokeNative(VMManagementImpl, getLoadedClassSize);
	$finishNative();
	return $ret;
}

int64_t VMManagementImpl::getUnloadedClassSize() {
	int64_t $ret = 0;
	$prepareNative(VMManagementImpl, getUnloadedClassSize, int64_t);
	$ret = $invokeNative(VMManagementImpl, getUnloadedClassSize);
	$finishNative();
	return $ret;
}

int64_t VMManagementImpl::getClassLoadingTime() {
	int64_t $ret = 0;
	$prepareNative(VMManagementImpl, getClassLoadingTime, int64_t);
	$ret = $invokeNative(VMManagementImpl, getClassLoadingTime);
	$finishNative();
	return $ret;
}

int64_t VMManagementImpl::getMethodDataSize() {
	int64_t $ret = 0;
	$prepareNative(VMManagementImpl, getMethodDataSize, int64_t);
	$ret = $invokeNative(VMManagementImpl, getMethodDataSize);
	$finishNative();
	return $ret;
}

int64_t VMManagementImpl::getInitializedClassCount() {
	int64_t $ret = 0;
	$prepareNative(VMManagementImpl, getInitializedClassCount, int64_t);
	$ret = $invokeNative(VMManagementImpl, getInitializedClassCount);
	$finishNative();
	return $ret;
}

int64_t VMManagementImpl::getClassInitializationTime() {
	int64_t $ret = 0;
	$prepareNative(VMManagementImpl, getClassInitializationTime, int64_t);
	$ret = $invokeNative(VMManagementImpl, getClassInitializationTime);
	$finishNative();
	return $ret;
}

int64_t VMManagementImpl::getClassVerificationTime() {
	int64_t $ret = 0;
	$prepareNative(VMManagementImpl, getClassVerificationTime, int64_t);
	$ret = $invokeNative(VMManagementImpl, getClassVerificationTime);
	$finishNative();
	return $ret;
}

$PerfInstrumentation* VMManagementImpl::getPerfInstrumentation() {
	$synchronized(this) {
		$useLocalCurrentObjectStackCache();
		$beforeCallerSensitive();
		if (this->noPerfData || this->perfInstr != nullptr) {
			return this->perfInstr;
		}
		$var($Perf, perf, $cast($Perf, $AccessController::doPrivileged(static_cast<$PrivilegedAction*>($$new($Perf$GetPerfAction)))));
		try {
			$var($ByteBuffer, bb, $nc(perf)->attach(0, "r"_s));
			if ($nc(bb)->capacity() == 0) {
				this->noPerfData = true;
				return nullptr;
			}
			$set(this, perfInstr, $new($PerfInstrumentation, bb));
		} catch ($IllegalArgumentException& e) {
			this->noPerfData = true;
		} catch ($IOException& e) {
			$throwNew($AssertionError, $of(e));
		}
		return this->perfInstr;
	}
}

$List* VMManagementImpl::getInternalCounters($String* pattern) {
	$var($PerfInstrumentation, perf, getPerfInstrumentation());
	if (perf != nullptr) {
		return perf->findByPattern(pattern);
	} else {
		return $Collections::emptyList();
	}
}

void clinit$VMManagementImpl($Class* class$) {
	{
		$assignStatic(VMManagementImpl::version, VMManagementImpl::getVersion0());
		if (VMManagementImpl::version == nullptr) {
			$throwNew($AssertionError, $of("Invalid Management Version"_s));
		}
		VMManagementImpl::initOptionalSupportFields();
	}
}

VMManagementImpl::VMManagementImpl() {
}

$Class* VMManagementImpl::load$($String* name, bool initialize) {
	$loadClass(VMManagementImpl, name, initialize, &_VMManagementImpl_ClassInfo_, clinit$VMManagementImpl, allocate$VMManagementImpl);
	return class$;
}

$Class* VMManagementImpl::class$ = nullptr;

	} // management
} // sun
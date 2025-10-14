#ifndef _sun_management_VMManagement_h_
#define _sun_management_VMManagement_h_
//$ interface sun.management.VMManagement
//$ extends java.lang.Object

#include <java/lang/Object.h>

namespace java {
	namespace util {
		class List;
	}
}

namespace sun {
	namespace management {

class $export VMManagement : public ::java::lang::Object {
	$interface(VMManagement, $NO_CLASS_INIT, ::java::lang::Object)
public:
	virtual int32_t getAvailableProcessors() {return 0;}
	virtual $String* getBootClassPath() {return nullptr;}
	virtual int64_t getClassInitializationTime() {return 0;}
	virtual int64_t getClassLoadingTime() {return 0;}
	virtual $String* getClassPath() {return nullptr;}
	virtual int64_t getClassVerificationTime() {return 0;}
	virtual $String* getCompilerName() {return nullptr;}
	virtual int32_t getDaemonThreadCount() {return 0;}
	virtual int64_t getInitializedClassCount() {return 0;}
	virtual ::java::util::List* getInternalCounters($String* pattern) {return nullptr;}
	virtual $String* getLibraryPath() {return nullptr;}
	virtual int32_t getLiveThreadCount() {return 0;}
	virtual int32_t getLoadedClassCount() {return 0;}
	virtual int64_t getLoadedClassSize() {return 0;}
	virtual $String* getManagementVersion() {return nullptr;}
	virtual int64_t getMethodDataSize() {return 0;}
	virtual $String* getOsArch() {return nullptr;}
	virtual $String* getOsName() {return nullptr;}
	virtual $String* getOsVersion() {return nullptr;}
	virtual int32_t getPeakThreadCount() {return 0;}
	virtual int64_t getSafepointCount() {return 0;}
	virtual int64_t getSafepointSyncTime() {return 0;}
	virtual int64_t getStartupTime() {return 0;}
	virtual int64_t getTotalApplicationNonStoppedTime() {return 0;}
	virtual int64_t getTotalClassCount() {return 0;}
	virtual int64_t getTotalCompileTime() {return 0;}
	virtual int64_t getTotalSafepointTime() {return 0;}
	virtual int64_t getTotalThreadCount() {return 0;}
	virtual int64_t getUnloadedClassCount() {return 0;}
	virtual int64_t getUnloadedClassSize() {return 0;}
	virtual int64_t getUptime() {return 0;}
	virtual bool getVerboseClass() {return false;}
	virtual bool getVerboseGC() {return false;}
	virtual ::java::util::List* getVmArguments() {return nullptr;}
	virtual $String* getVmId() {return nullptr;}
	virtual $String* getVmName() {return nullptr;}
	virtual $String* getVmSpecName() {return nullptr;}
	virtual $String* getVmSpecVendor() {return nullptr;}
	virtual $String* getVmSpecVersion() {return nullptr;}
	virtual $String* getVmVendor() {return nullptr;}
	virtual $String* getVmVersion() {return nullptr;}
	virtual bool isBootClassPathSupported() {return false;}
	virtual bool isCompilationTimeMonitoringSupported() {return false;}
	virtual bool isCurrentThreadCpuTimeSupported() {return false;}
	virtual bool isGcNotificationSupported() {return false;}
	virtual bool isObjectMonitorUsageSupported() {return false;}
	virtual bool isOtherThreadCpuTimeSupported() {return false;}
	virtual bool isRemoteDiagnosticCommandsSupported() {return false;}
	virtual bool isSynchronizerUsageSupported() {return false;}
	virtual bool isThreadAllocatedMemoryEnabled() {return false;}
	virtual bool isThreadAllocatedMemorySupported() {return false;}
	virtual bool isThreadContentionMonitoringEnabled() {return false;}
	virtual bool isThreadContentionMonitoringSupported() {return false;}
	virtual bool isThreadCpuTimeEnabled() {return false;}
};

	} // management
} // sun

#endif // _sun_management_VMManagement_h_
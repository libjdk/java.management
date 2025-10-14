#ifndef _sun_management_VMManagementImpl_h_
#define _sun_management_VMManagementImpl_h_
//$ class sun.management.VMManagementImpl
//$ extends sun.management.VMManagement

#include <java/lang/Array.h>
#include <sun/management/VMManagement.h>

namespace java {
	namespace util {
		class List;
	}
}
namespace sun {
	namespace management {
		namespace counter {
			namespace perf {
				class PerfInstrumentation;
			}
		}
	}
}

namespace sun {
	namespace management {

class VMManagementImpl : public ::sun::management::VMManagement {
	$class(VMManagementImpl, 0, ::sun::management::VMManagement)
public:
	VMManagementImpl();
	void init$();
	virtual int32_t getAvailableProcessors() override;
	virtual $String* getBootClassPath() override;
	virtual int64_t getClassInitializationTime() override;
	virtual int64_t getClassLoadingTime() override;
	virtual $String* getClassPath() override;
	virtual int64_t getClassVerificationTime() override;
	virtual $String* getCompilerName() override;
	virtual int32_t getDaemonThreadCount() override;
	virtual int64_t getInitializedClassCount() override;
	virtual ::java::util::List* getInternalCounters($String* pattern) override;
	virtual $String* getLibraryPath() override;
	virtual int32_t getLiveThreadCount() override;
	virtual int32_t getLoadedClassCount() override;
	virtual int64_t getLoadedClassSize() override;
	virtual $String* getManagementVersion() override;
	virtual int64_t getMethodDataSize() override;
	virtual $String* getOsArch() override;
	virtual $String* getOsName() override;
	virtual $String* getOsVersion() override;
	virtual int32_t getPeakThreadCount() override;
	::sun::management::counter::perf::PerfInstrumentation* getPerfInstrumentation();
	int32_t getProcessId();
	virtual int64_t getSafepointCount() override;
	virtual int64_t getSafepointSyncTime() override;
	virtual int64_t getStartupTime() override;
	virtual int64_t getTotalApplicationNonStoppedTime() override;
	virtual int64_t getTotalClassCount() override;
	virtual int64_t getTotalCompileTime() override;
	virtual int64_t getTotalSafepointTime() override;
	virtual int64_t getTotalThreadCount() override;
	virtual int64_t getUnloadedClassCount() override;
	virtual int64_t getUnloadedClassSize() override;
	virtual int64_t getUptime() override;
	int64_t getUptime0();
	virtual bool getVerboseClass() override;
	virtual bool getVerboseGC() override;
	static $String* getVersion0();
	virtual ::java::util::List* getVmArguments() override;
	virtual $StringArray* getVmArguments0();
	virtual $String* getVmId() override;
	virtual $String* getVmName() override;
	virtual $String* getVmSpecName() override;
	virtual $String* getVmSpecVendor() override;
	virtual $String* getVmSpecVersion() override;
	virtual $String* getVmVendor() override;
	virtual $String* getVmVersion() override;
	static void initOptionalSupportFields();
	virtual bool isBootClassPathSupported() override;
	virtual bool isCompilationTimeMonitoringSupported() override;
	virtual bool isCurrentThreadCpuTimeSupported() override;
	virtual bool isGcNotificationSupported() override;
	virtual bool isObjectMonitorUsageSupported() override;
	virtual bool isOtherThreadCpuTimeSupported() override;
	virtual bool isRemoteDiagnosticCommandsSupported() override;
	virtual bool isSynchronizerUsageSupported() override;
	virtual bool isThreadAllocatedMemoryEnabled() override;
	virtual bool isThreadAllocatedMemorySupported() override;
	virtual bool isThreadContentionMonitoringEnabled() override;
	virtual bool isThreadContentionMonitoringSupported() override;
	virtual bool isThreadCpuTimeEnabled() override;
	static $String* version;
	static bool compTimeMonitoringSupport;
	static bool threadContentionMonitoringSupport;
	static bool currentThreadCpuTimeSupport;
	static bool otherThreadCpuTimeSupport;
	static bool objectMonitorUsageSupport;
	static bool synchronizerUsageSupport;
	static bool threadAllocatedMemorySupport;
	static bool gcNotificationSupport;
	static bool remoteDiagnosticCommandsSupport;
	::java::util::List* vmArgs = nullptr;
	::sun::management::counter::perf::PerfInstrumentation* perfInstr = nullptr;
	bool noPerfData = false;
};

	} // management
} // sun

#endif // _sun_management_VMManagementImpl_h_
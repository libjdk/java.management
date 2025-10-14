#ifndef _sun_management_ManagementFactoryHelper_h_
#define _sun_management_ManagementFactoryHelper_h_
//$ class sun.management.ManagementFactoryHelper
//$ extends java.lang.Object

#include <java/lang/Array.h>

#pragma push_macro("BUFFER_POOL_MXBEAN_NAME")
#undef BUFFER_POOL_MXBEAN_NAME
#pragma push_macro("HOTSPOT_CLASS_LOADING_MBEAN_NAME")
#undef HOTSPOT_CLASS_LOADING_MBEAN_NAME
#pragma push_macro("HOTSPOT_COMPILATION_MBEAN_NAME")
#undef HOTSPOT_COMPILATION_MBEAN_NAME
#pragma push_macro("HOTSPOT_MEMORY_MBEAN_NAME")
#undef HOTSPOT_MEMORY_MBEAN_NAME
#pragma push_macro("HOTSPOT_RUNTIME_MBEAN_NAME")
#undef HOTSPOT_RUNTIME_MBEAN_NAME
#pragma push_macro("HOTSPOT_THREAD_MBEAN_NAME")
#undef HOTSPOT_THREAD_MBEAN_NAME
#pragma push_macro("JMM_THREAD_STATE_FLAG_MASK")
#undef JMM_THREAD_STATE_FLAG_MASK
#pragma push_macro("JMM_THREAD_STATE_FLAG_NATIVE")
#undef JMM_THREAD_STATE_FLAG_NATIVE
#pragma push_macro("JMM_THREAD_STATE_FLAG_SUSPENDED")
#undef JMM_THREAD_STATE_FLAG_SUSPENDED
#pragma push_macro("LOGGING_MXBEAN_NAME")
#undef LOGGING_MXBEAN_NAME

namespace java {
	namespace lang {
		class Thread$State;
	}
}
namespace java {
	namespace lang {
		namespace management {
			class BufferPoolMXBean;
			class ClassLoadingMXBean;
			class CompilationMXBean;
			class GarbageCollectorMXBean;
			class MemoryMXBean;
			class MemoryManagerMXBean;
			class MemoryPoolMXBean;
			class OperatingSystemMXBean;
			class PlatformLoggingMXBean;
			class RuntimeMXBean;
			class ThreadMXBean;
		}
	}
}
namespace java {
	namespace util {
		class List;
	}
}
namespace javax {
	namespace management {
		class MBeanServer;
	}
}
namespace jdk {
	namespace internal {
		namespace misc {
			class VM$BufferPool;
		}
	}
}
namespace sun {
	namespace management {
		class BaseOperatingSystemImpl;
		class ClassLoadingImpl;
		class CompilationImpl;
		class HotspotClassLoading;
		class HotspotClassLoadingMBean;
		class HotspotCompilation;
		class HotspotCompilationMBean;
		class HotspotMemory;
		class HotspotMemoryMBean;
		class HotspotRuntime;
		class HotspotRuntimeMBean;
		class HotspotThread;
		class HotspotThreadMBean;
		class MemoryImpl;
		class RuntimeImpl;
		class ThreadImpl;
		class VMManagement;
	}
}

namespace sun {
	namespace management {

class $import ManagementFactoryHelper : public ::java::lang::Object {
	$class(ManagementFactoryHelper, 0, ::java::lang::Object)
public:
	ManagementFactoryHelper();
	void init$();
	static void addMBean(::javax::management::MBeanServer* mbs, Object$* mbean, $String* mbeanName);
	static ::java::lang::management::BufferPoolMXBean* createBufferPoolMXBean(::jdk::internal::misc::VM$BufferPool* pool);
	static ::java::lang::management::GarbageCollectorMXBean* createGarbageCollector($String* name, $String* type);
	static ::java::lang::management::MemoryManagerMXBean* createMemoryManager($String* name);
	static ::java::lang::management::MemoryPoolMXBean* createMemoryPool($String* name, bool isHeap, int64_t uThreshold, int64_t gcThreshold);
	static $StringArray* getAllMemoryPoolNames();
	static ::java::util::List* getBufferPoolMXBeans();
	static ::java::lang::management::ClassLoadingMXBean* getClassLoadingMXBean();
	static ::java::lang::management::CompilationMXBean* getCompilationMXBean();
	static ::java::util::List* getGarbageCollectorMXBeans();
	static ::sun::management::HotspotClassLoadingMBean* getHotspotClassLoadingMBean();
	static ::sun::management::HotspotCompilationMBean* getHotspotCompilationMBean();
	static ::sun::management::HotspotMemoryMBean* getHotspotMemoryMBean();
	static ::sun::management::HotspotRuntimeMBean* getHotspotRuntimeMBean();
	static ::sun::management::HotspotThreadMBean* getHotspotThreadMBean();
	static ::java::lang::management::MemoryMXBean* getMemoryMXBean();
	static ::java::util::List* getMemoryManagerMXBeans();
	static ::java::util::List* getMemoryPoolMXBeans();
	static ::java::lang::management::OperatingSystemMXBean* getOperatingSystemMXBean();
	static ::java::lang::management::PlatformLoggingMXBean* getPlatformLoggingMXBean();
	static ::java::lang::management::RuntimeMXBean* getRuntimeMXBean();
	static ::java::lang::management::ThreadMXBean* getThreadMXBean();
	static ::sun::management::VMManagement* getVMManagement();
	static bool isPlatformLoggingMXBeanAvailable();
	static bool isThreadRunningNative(int32_t state);
	static bool isThreadSuspended(int32_t state);
	static $StringArray* lambda$getAllMemoryPoolNames$0(int32_t x$0);
	static void registerInternalMBeans(::javax::management::MBeanServer* mbs);
	static ::java::lang::Thread$State* toThreadState(int32_t state);
	static void unregisterInternalMBeans(::javax::management::MBeanServer* mbs);
	static void unregisterMBean(::javax::management::MBeanServer* mbs, $String* mbeanName);
	static ::sun::management::VMManagement* jvm;
	static $String* LOGGING_MXBEAN_NAME;
	static ::sun::management::ClassLoadingImpl* classMBean;
	static ::sun::management::MemoryImpl* memoryMBean;
	static ::sun::management::ThreadImpl* threadMBean;
	static ::sun::management::RuntimeImpl* runtimeMBean;
	static ::sun::management::CompilationImpl* compileMBean;
	static ::sun::management::BaseOperatingSystemImpl* osMBean;
	static $volatile(::java::util::List*) bufferPools;
	static $String* BUFFER_POOL_MXBEAN_NAME;
	static ::sun::management::HotspotRuntime* hsRuntimeMBean;
	static ::sun::management::HotspotClassLoading* hsClassMBean;
	static ::sun::management::HotspotThread* hsThreadMBean;
	static ::sun::management::HotspotCompilation* hsCompileMBean;
	static ::sun::management::HotspotMemory* hsMemoryMBean;
	static $String* HOTSPOT_CLASS_LOADING_MBEAN_NAME;
	static $String* HOTSPOT_COMPILATION_MBEAN_NAME;
	static $String* HOTSPOT_MEMORY_MBEAN_NAME;
	static $String* HOTSPOT_RUNTIME_MBEAN_NAME;
	static $String* HOTSPOT_THREAD_MBEAN_NAME;
	static const int32_t JMM_THREAD_STATE_FLAG_MASK = 0xFFF00000;
	static const int32_t JMM_THREAD_STATE_FLAG_SUSPENDED = 0x00100000;
	static const int32_t JMM_THREAD_STATE_FLAG_NATIVE = 0x00400000;
};

	} // management
} // sun

#pragma pop_macro("BUFFER_POOL_MXBEAN_NAME")
#pragma pop_macro("HOTSPOT_CLASS_LOADING_MBEAN_NAME")
#pragma pop_macro("HOTSPOT_COMPILATION_MBEAN_NAME")
#pragma pop_macro("HOTSPOT_MEMORY_MBEAN_NAME")
#pragma pop_macro("HOTSPOT_RUNTIME_MBEAN_NAME")
#pragma pop_macro("HOTSPOT_THREAD_MBEAN_NAME")
#pragma pop_macro("JMM_THREAD_STATE_FLAG_MASK")
#pragma pop_macro("JMM_THREAD_STATE_FLAG_NATIVE")
#pragma pop_macro("JMM_THREAD_STATE_FLAG_SUSPENDED")
#pragma pop_macro("LOGGING_MXBEAN_NAME")

#endif // _sun_management_ManagementFactoryHelper_h_
#include <sun/management/ManagementFactoryHelper.h>

#include <java/io/Serializable.h>
#include <java/lang/IllegalAccessException.h>
#include <java/lang/Thread$State.h>
#include <java/lang/invoke/CallSite.h>
#include <java/lang/invoke/LambdaMetafactory.h>
#include <java/lang/invoke/MethodHandle.h>
#include <java/lang/invoke/MethodHandles$Lookup.h>
#include <java/lang/invoke/MethodHandles.h>
#include <java/lang/invoke/MethodType.h>
#include <java/lang/management/BufferPoolMXBean.h>
#include <java/lang/management/ClassLoadingMXBean.h>
#include <java/lang/management/CompilationMXBean.h>
#include <java/lang/management/GarbageCollectorMXBean.h>
#include <java/lang/management/ManagementFactory.h>
#include <java/lang/management/MemoryMXBean.h>
#include <java/lang/management/MemoryManagerMXBean.h>
#include <java/lang/management/MemoryPoolMXBean.h>
#include <java/lang/management/OperatingSystemMXBean.h>
#include <java/lang/management/PlatformLoggingMXBean.h>
#include <java/lang/management/RuntimeMXBean.h>
#include <java/lang/management/ThreadMXBean.h>
#include <java/security/AccessController.h>
#include <java/security/PrivilegedActionException.h>
#include <java/security/PrivilegedExceptionAction.h>
#include <java/util/AbstractList.h>
#include <java/util/ArrayList.h>
#include <java/util/Arrays.h>
#include <java/util/List.h>
#include <java/util/function/Function.h>
#include <java/util/function/IntFunction.h>
#include <java/util/stream/Collector.h>
#include <java/util/stream/Collectors.h>
#include <java/util/stream/Stream.h>
#include <javax/management/MBeanServer.h>
#include <javax/management/ObjectName.h>
#include <jdk/internal/misc/VM$BufferPool.h>
#include <jdk/internal/misc/VM.h>
#include <sun/management/BaseOperatingSystemImpl.h>
#include <sun/management/ClassLoadingImpl.h>
#include <sun/management/CompilationImpl.h>
#include <sun/management/GarbageCollectorImpl.h>
#include <sun/management/HotspotClassLoading.h>
#include <sun/management/HotspotClassLoadingMBean.h>
#include <sun/management/HotspotCompilation.h>
#include <sun/management/HotspotCompilationMBean.h>
#include <sun/management/HotspotMemory.h>
#include <sun/management/HotspotMemoryMBean.h>
#include <sun/management/HotspotRuntime.h>
#include <sun/management/HotspotRuntimeMBean.h>
#include <sun/management/HotspotThread.h>
#include <sun/management/HotspotThreadMBean.h>
#include <sun/management/ManagementFactoryHelper$1.h>
#include <sun/management/ManagementFactoryHelper$2.h>
#include <sun/management/ManagementFactoryHelper$3.h>
#include <sun/management/ManagementFactoryHelper$LoggingMXBeanAccess.h>
#include <sun/management/ManagementFactoryHelper$PlatformLoggingImpl.h>
#include <sun/management/MemoryImpl.h>
#include <sun/management/MemoryManagerImpl.h>
#include <sun/management/MemoryPoolImpl.h>
#include <sun/management/RuntimeImpl.h>
#include <sun/management/ThreadImpl.h>
#include <sun/management/Util.h>
#include <sun/management/VMManagement.h>
#include <sun/management/VMManagementImpl.h>
#include <jcpp.h>

#undef BUFFER_POOL_MXBEAN_NAME
#undef HOTSPOT_CLASS_LOADING_MBEAN_NAME
#undef HOTSPOT_COMPILATION_MBEAN_NAME
#undef HOTSPOT_MEMORY_MBEAN_NAME
#undef HOTSPOT_RUNTIME_MBEAN_NAME
#undef HOTSPOT_THREAD_MBEAN_NAME
#undef JMM_THREAD_STATE_FLAG_MASK
#undef JMM_THREAD_STATE_FLAG_NATIVE
#undef JMM_THREAD_STATE_FLAG_SUSPENDED
#undef LOGGING_MXBEAN_NAME
#undef MBEAN

using $MemoryManagerMXBeanArray = $Array<::java::lang::management::MemoryManagerMXBean>;
using $MemoryPoolMXBeanArray = $Array<::java::lang::management::MemoryPoolMXBean>;
using $Serializable = ::java::io::Serializable;
using $ClassInfo = ::java::lang::ClassInfo;
using $Exception = ::java::lang::Exception;
using $FieldInfo = ::java::lang::FieldInfo;
using $IllegalAccessException = ::java::lang::IllegalAccessException;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $Integer = ::java::lang::Integer;
using $MethodInfo = ::java::lang::MethodInfo;
using $NullPointerException = ::java::lang::NullPointerException;
using $RuntimeException = ::java::lang::RuntimeException;
using $Thread$State = ::java::lang::Thread$State;
using $CallSite = ::java::lang::invoke::CallSite;
using $LambdaMetafactory = ::java::lang::invoke::LambdaMetafactory;
using $MethodHandle = ::java::lang::invoke::MethodHandle;
using $MethodHandles = ::java::lang::invoke::MethodHandles;
using $MethodHandles$Lookup = ::java::lang::invoke::MethodHandles$Lookup;
using $MethodType = ::java::lang::invoke::MethodType;
using $BufferPoolMXBean = ::java::lang::management::BufferPoolMXBean;
using $ClassLoadingMXBean = ::java::lang::management::ClassLoadingMXBean;
using $CompilationMXBean = ::java::lang::management::CompilationMXBean;
using $GarbageCollectorMXBean = ::java::lang::management::GarbageCollectorMXBean;
using $ManagementFactory = ::java::lang::management::ManagementFactory;
using $MemoryMXBean = ::java::lang::management::MemoryMXBean;
using $MemoryManagerMXBean = ::java::lang::management::MemoryManagerMXBean;
using $MemoryPoolMXBean = ::java::lang::management::MemoryPoolMXBean;
using $OperatingSystemMXBean = ::java::lang::management::OperatingSystemMXBean;
using $PlatformLoggingMXBean = ::java::lang::management::PlatformLoggingMXBean;
using $RuntimeMXBean = ::java::lang::management::RuntimeMXBean;
using $ThreadMXBean = ::java::lang::management::ThreadMXBean;
using $AccessController = ::java::security::AccessController;
using $PrivilegedActionException = ::java::security::PrivilegedActionException;
using $PrivilegedExceptionAction = ::java::security::PrivilegedExceptionAction;
using $AbstractList = ::java::util::AbstractList;
using $ArrayList = ::java::util::ArrayList;
using $Arrays = ::java::util::Arrays;
using $Collection = ::java::util::Collection;
using $List = ::java::util::List;
using $Function = ::java::util::function::Function;
using $IntFunction = ::java::util::function::IntFunction;
using $Collector = ::java::util::stream::Collector;
using $Collectors = ::java::util::stream::Collectors;
using $Stream = ::java::util::stream::Stream;
using $MBeanServer = ::javax::management::MBeanServer;
using $ObjectName = ::javax::management::ObjectName;
using $VM = ::jdk::internal::misc::VM;
using $VM$BufferPool = ::jdk::internal::misc::VM$BufferPool;
using $BaseOperatingSystemImpl = ::sun::management::BaseOperatingSystemImpl;
using $ClassLoadingImpl = ::sun::management::ClassLoadingImpl;
using $CompilationImpl = ::sun::management::CompilationImpl;
using $GarbageCollectorImpl = ::sun::management::GarbageCollectorImpl;
using $HotspotClassLoading = ::sun::management::HotspotClassLoading;
using $HotspotClassLoadingMBean = ::sun::management::HotspotClassLoadingMBean;
using $HotspotCompilation = ::sun::management::HotspotCompilation;
using $HotspotCompilationMBean = ::sun::management::HotspotCompilationMBean;
using $HotspotMemory = ::sun::management::HotspotMemory;
using $HotspotMemoryMBean = ::sun::management::HotspotMemoryMBean;
using $HotspotRuntime = ::sun::management::HotspotRuntime;
using $HotspotRuntimeMBean = ::sun::management::HotspotRuntimeMBean;
using $HotspotThread = ::sun::management::HotspotThread;
using $HotspotThreadMBean = ::sun::management::HotspotThreadMBean;
using $ManagementFactoryHelper$1 = ::sun::management::ManagementFactoryHelper$1;
using $ManagementFactoryHelper$2 = ::sun::management::ManagementFactoryHelper$2;
using $ManagementFactoryHelper$3 = ::sun::management::ManagementFactoryHelper$3;
using $ManagementFactoryHelper$LoggingMXBeanAccess = ::sun::management::ManagementFactoryHelper$LoggingMXBeanAccess;
using $ManagementFactoryHelper$PlatformLoggingImpl = ::sun::management::ManagementFactoryHelper$PlatformLoggingImpl;
using $MemoryImpl = ::sun::management::MemoryImpl;
using $MemoryManagerImpl = ::sun::management::MemoryManagerImpl;
using $MemoryPoolImpl = ::sun::management::MemoryPoolImpl;
using $RuntimeImpl = ::sun::management::RuntimeImpl;
using $ThreadImpl = ::sun::management::ThreadImpl;
using $Util = ::sun::management::Util;
using $VMManagement = ::sun::management::VMManagement;
using $VMManagementImpl = ::sun::management::VMManagementImpl;

namespace sun {
	namespace management {

class ManagementFactoryHelper$$Lambda$getName : public $Function {
	$class(ManagementFactoryHelper$$Lambda$getName, $NO_CLASS_INIT, $Function)
public:
	void init$() {
	}
	virtual $Object* apply(Object$* inst$) override {
		 return $of($sure($MemoryPoolMXBean, inst$)->getName());
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<ManagementFactoryHelper$$Lambda$getName>());
	}
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$MethodInfo ManagementFactoryHelper$$Lambda$getName::methodInfos[3] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(ManagementFactoryHelper$$Lambda$getName::*)()>(&ManagementFactoryHelper$$Lambda$getName::init$))},
	{"apply", "(Ljava/lang/Object;)Ljava/lang/Object;", nullptr, $PUBLIC},
	{}
};
$ClassInfo ManagementFactoryHelper$$Lambda$getName::classInfo$ = {
	$PUBLIC | $FINAL,
	"sun.management.ManagementFactoryHelper$$Lambda$getName",
	"java.lang.Object",
	"java.util.function.Function",
	nullptr,
	methodInfos
};
$Class* ManagementFactoryHelper$$Lambda$getName::load$($String* name, bool initialize) {
	$loadClass(ManagementFactoryHelper$$Lambda$getName, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* ManagementFactoryHelper$$Lambda$getName::class$ = nullptr;

class ManagementFactoryHelper$$Lambda$lambda$getAllMemoryPoolNames$0$1 : public $IntFunction {
	$class(ManagementFactoryHelper$$Lambda$lambda$getAllMemoryPoolNames$0$1, $NO_CLASS_INIT, $IntFunction)
public:
	void init$() {
	}
	virtual $Object* apply(int32_t x$0) override {
		 return $of(ManagementFactoryHelper::lambda$getAllMemoryPoolNames$0(x$0));
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<ManagementFactoryHelper$$Lambda$lambda$getAllMemoryPoolNames$0$1>());
	}
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$MethodInfo ManagementFactoryHelper$$Lambda$lambda$getAllMemoryPoolNames$0$1::methodInfos[3] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(ManagementFactoryHelper$$Lambda$lambda$getAllMemoryPoolNames$0$1::*)()>(&ManagementFactoryHelper$$Lambda$lambda$getAllMemoryPoolNames$0$1::init$))},
	{"apply", "(I)Ljava/lang/Object;", nullptr, $PUBLIC},
	{}
};
$ClassInfo ManagementFactoryHelper$$Lambda$lambda$getAllMemoryPoolNames$0$1::classInfo$ = {
	$PUBLIC | $FINAL,
	"sun.management.ManagementFactoryHelper$$Lambda$lambda$getAllMemoryPoolNames$0$1",
	"java.lang.Object",
	"java.util.function.IntFunction",
	nullptr,
	methodInfos
};
$Class* ManagementFactoryHelper$$Lambda$lambda$getAllMemoryPoolNames$0$1::load$($String* name, bool initialize) {
	$loadClass(ManagementFactoryHelper$$Lambda$lambda$getAllMemoryPoolNames$0$1, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* ManagementFactoryHelper$$Lambda$lambda$getAllMemoryPoolNames$0$1::class$ = nullptr;

class ManagementFactoryHelper$$Lambda$createBufferPoolMXBean$2 : public $Function {
	$class(ManagementFactoryHelper$$Lambda$createBufferPoolMXBean$2, $NO_CLASS_INIT, $Function)
public:
	void init$() {
	}
	virtual $Object* apply(Object$* pool) override {
		 return $of(ManagementFactoryHelper::createBufferPoolMXBean($cast($VM$BufferPool, pool)));
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<ManagementFactoryHelper$$Lambda$createBufferPoolMXBean$2>());
	}
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$MethodInfo ManagementFactoryHelper$$Lambda$createBufferPoolMXBean$2::methodInfos[3] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(ManagementFactoryHelper$$Lambda$createBufferPoolMXBean$2::*)()>(&ManagementFactoryHelper$$Lambda$createBufferPoolMXBean$2::init$))},
	{"apply", "(Ljava/lang/Object;)Ljava/lang/Object;", nullptr, $PUBLIC},
	{}
};
$ClassInfo ManagementFactoryHelper$$Lambda$createBufferPoolMXBean$2::classInfo$ = {
	$PUBLIC | $FINAL,
	"sun.management.ManagementFactoryHelper$$Lambda$createBufferPoolMXBean$2",
	"java.lang.Object",
	"java.util.function.Function",
	nullptr,
	methodInfos
};
$Class* ManagementFactoryHelper$$Lambda$createBufferPoolMXBean$2::load$($String* name, bool initialize) {
	$loadClass(ManagementFactoryHelper$$Lambda$createBufferPoolMXBean$2, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* ManagementFactoryHelper$$Lambda$createBufferPoolMXBean$2::class$ = nullptr;

$FieldInfo _ManagementFactoryHelper_FieldInfo_[] = {
	{"jvm", "Lsun/management/VMManagement;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(ManagementFactoryHelper, jvm)},
	{"LOGGING_MXBEAN_NAME", "Ljava/lang/String;", nullptr, $STATIC | $FINAL, $staticField(ManagementFactoryHelper, LOGGING_MXBEAN_NAME)},
	{"classMBean", "Lsun/management/ClassLoadingImpl;", nullptr, $PRIVATE | $STATIC, $staticField(ManagementFactoryHelper, classMBean)},
	{"memoryMBean", "Lsun/management/MemoryImpl;", nullptr, $PRIVATE | $STATIC, $staticField(ManagementFactoryHelper, memoryMBean)},
	{"threadMBean", "Lsun/management/ThreadImpl;", nullptr, $PRIVATE | $STATIC, $staticField(ManagementFactoryHelper, threadMBean)},
	{"runtimeMBean", "Lsun/management/RuntimeImpl;", nullptr, $PRIVATE | $STATIC, $staticField(ManagementFactoryHelper, runtimeMBean)},
	{"compileMBean", "Lsun/management/CompilationImpl;", nullptr, $PRIVATE | $STATIC, $staticField(ManagementFactoryHelper, compileMBean)},
	{"osMBean", "Lsun/management/BaseOperatingSystemImpl;", nullptr, $PRIVATE | $STATIC, $staticField(ManagementFactoryHelper, osMBean)},
	{"bufferPools", "Ljava/util/List;", "Ljava/util/List<Ljava/lang/management/BufferPoolMXBean;>;", $PRIVATE | $STATIC | $VOLATILE, $staticField(ManagementFactoryHelper, bufferPools)},
	{"BUFFER_POOL_MXBEAN_NAME", "Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(ManagementFactoryHelper, BUFFER_POOL_MXBEAN_NAME)},
	{"hsRuntimeMBean", "Lsun/management/HotspotRuntime;", nullptr, $PRIVATE | $STATIC, $staticField(ManagementFactoryHelper, hsRuntimeMBean)},
	{"hsClassMBean", "Lsun/management/HotspotClassLoading;", nullptr, $PRIVATE | $STATIC, $staticField(ManagementFactoryHelper, hsClassMBean)},
	{"hsThreadMBean", "Lsun/management/HotspotThread;", nullptr, $PRIVATE | $STATIC, $staticField(ManagementFactoryHelper, hsThreadMBean)},
	{"hsCompileMBean", "Lsun/management/HotspotCompilation;", nullptr, $PRIVATE | $STATIC, $staticField(ManagementFactoryHelper, hsCompileMBean)},
	{"hsMemoryMBean", "Lsun/management/HotspotMemory;", nullptr, $PRIVATE | $STATIC, $staticField(ManagementFactoryHelper, hsMemoryMBean)},
	{"HOTSPOT_CLASS_LOADING_MBEAN_NAME", "Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(ManagementFactoryHelper, HOTSPOT_CLASS_LOADING_MBEAN_NAME)},
	{"HOTSPOT_COMPILATION_MBEAN_NAME", "Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(ManagementFactoryHelper, HOTSPOT_COMPILATION_MBEAN_NAME)},
	{"HOTSPOT_MEMORY_MBEAN_NAME", "Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(ManagementFactoryHelper, HOTSPOT_MEMORY_MBEAN_NAME)},
	{"HOTSPOT_RUNTIME_MBEAN_NAME", "Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(ManagementFactoryHelper, HOTSPOT_RUNTIME_MBEAN_NAME)},
	{"HOTSPOT_THREAD_MBEAN_NAME", "Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(ManagementFactoryHelper, HOTSPOT_THREAD_MBEAN_NAME)},
	{"JMM_THREAD_STATE_FLAG_MASK", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(ManagementFactoryHelper, JMM_THREAD_STATE_FLAG_MASK)},
	{"JMM_THREAD_STATE_FLAG_SUSPENDED", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(ManagementFactoryHelper, JMM_THREAD_STATE_FLAG_SUSPENDED)},
	{"JMM_THREAD_STATE_FLAG_NATIVE", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(ManagementFactoryHelper, JMM_THREAD_STATE_FLAG_NATIVE)},
	{}
};

$MethodInfo _ManagementFactoryHelper_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PRIVATE, $method(static_cast<void(ManagementFactoryHelper::*)()>(&ManagementFactoryHelper::init$))},
	{"addMBean", "(Ljavax/management/MBeanServer;Ljava/lang/Object;Ljava/lang/String;)V", nullptr, $PRIVATE | $STATIC, $method(static_cast<void(*)($MBeanServer*,Object$*,$String*)>(&ManagementFactoryHelper::addMBean))},
	{"createBufferPoolMXBean", "(Ljdk/internal/misc/VM$BufferPool;)Ljava/lang/management/BufferPoolMXBean;", nullptr, $PRIVATE | $STATIC, $method(static_cast<$BufferPoolMXBean*(*)($VM$BufferPool*)>(&ManagementFactoryHelper::createBufferPoolMXBean))},
	{"createGarbageCollector", "(Ljava/lang/String;Ljava/lang/String;)Ljava/lang/management/GarbageCollectorMXBean;", nullptr, $PRIVATE | $STATIC, $method(static_cast<$GarbageCollectorMXBean*(*)($String*,$String*)>(&ManagementFactoryHelper::createGarbageCollector))},
	{"createMemoryManager", "(Ljava/lang/String;)Ljava/lang/management/MemoryManagerMXBean;", nullptr, $PRIVATE | $STATIC, $method(static_cast<$MemoryManagerMXBean*(*)($String*)>(&ManagementFactoryHelper::createMemoryManager))},
	{"createMemoryPool", "(Ljava/lang/String;ZJJ)Ljava/lang/management/MemoryPoolMXBean;", nullptr, $PRIVATE | $STATIC, $method(static_cast<$MemoryPoolMXBean*(*)($String*,bool,int64_t,int64_t)>(&ManagementFactoryHelper::createMemoryPool))},
	{"getAllMemoryPoolNames", "()[Ljava/lang/String;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$StringArray*(*)()>(&ManagementFactoryHelper::getAllMemoryPoolNames))},
	{"getBufferPoolMXBeans", "()Ljava/util/List;", "()Ljava/util/List<Ljava/lang/management/BufferPoolMXBean;>;", $PUBLIC | $STATIC, $method(static_cast<$List*(*)()>(&ManagementFactoryHelper::getBufferPoolMXBeans))},
	{"getClassLoadingMXBean", "()Ljava/lang/management/ClassLoadingMXBean;", nullptr, $PUBLIC | $STATIC | $SYNCHRONIZED, $method(static_cast<$ClassLoadingMXBean*(*)()>(&ManagementFactoryHelper::getClassLoadingMXBean))},
	{"getCompilationMXBean", "()Ljava/lang/management/CompilationMXBean;", nullptr, $PUBLIC | $STATIC | $SYNCHRONIZED, $method(static_cast<$CompilationMXBean*(*)()>(&ManagementFactoryHelper::getCompilationMXBean))},
	{"getGarbageCollectorMXBeans", "()Ljava/util/List;", "()Ljava/util/List<Ljava/lang/management/GarbageCollectorMXBean;>;", $PUBLIC | $STATIC, $method(static_cast<$List*(*)()>(&ManagementFactoryHelper::getGarbageCollectorMXBeans))},
	{"getHotspotClassLoadingMBean", "()Lsun/management/HotspotClassLoadingMBean;", nullptr, $PUBLIC | $STATIC | $SYNCHRONIZED, $method(static_cast<$HotspotClassLoadingMBean*(*)()>(&ManagementFactoryHelper::getHotspotClassLoadingMBean))},
	{"getHotspotCompilationMBean", "()Lsun/management/HotspotCompilationMBean;", nullptr, $PUBLIC | $STATIC | $SYNCHRONIZED, $method(static_cast<$HotspotCompilationMBean*(*)()>(&ManagementFactoryHelper::getHotspotCompilationMBean))},
	{"getHotspotMemoryMBean", "()Lsun/management/HotspotMemoryMBean;", nullptr, $PUBLIC | $STATIC | $SYNCHRONIZED, $method(static_cast<$HotspotMemoryMBean*(*)()>(&ManagementFactoryHelper::getHotspotMemoryMBean))},
	{"getHotspotRuntimeMBean", "()Lsun/management/HotspotRuntimeMBean;", nullptr, $PUBLIC | $STATIC | $SYNCHRONIZED, $method(static_cast<$HotspotRuntimeMBean*(*)()>(&ManagementFactoryHelper::getHotspotRuntimeMBean))},
	{"getHotspotThreadMBean", "()Lsun/management/HotspotThreadMBean;", nullptr, $PUBLIC | $STATIC | $SYNCHRONIZED, $method(static_cast<$HotspotThreadMBean*(*)()>(&ManagementFactoryHelper::getHotspotThreadMBean))},
	{"getMemoryMXBean", "()Ljava/lang/management/MemoryMXBean;", nullptr, $PUBLIC | $STATIC | $SYNCHRONIZED, $method(static_cast<$MemoryMXBean*(*)()>(&ManagementFactoryHelper::getMemoryMXBean))},
	{"getMemoryManagerMXBeans", "()Ljava/util/List;", "()Ljava/util/List<Ljava/lang/management/MemoryManagerMXBean;>;", $PUBLIC | $STATIC, $method(static_cast<$List*(*)()>(&ManagementFactoryHelper::getMemoryManagerMXBeans))},
	{"getMemoryPoolMXBeans", "()Ljava/util/List;", "()Ljava/util/List<Ljava/lang/management/MemoryPoolMXBean;>;", $PUBLIC | $STATIC, $method(static_cast<$List*(*)()>(&ManagementFactoryHelper::getMemoryPoolMXBeans))},
	{"getOperatingSystemMXBean", "()Ljava/lang/management/OperatingSystemMXBean;", nullptr, $PUBLIC | $STATIC | $SYNCHRONIZED, $method(static_cast<$OperatingSystemMXBean*(*)()>(&ManagementFactoryHelper::getOperatingSystemMXBean))},
	{"getPlatformLoggingMXBean", "()Ljava/lang/management/PlatformLoggingMXBean;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$PlatformLoggingMXBean*(*)()>(&ManagementFactoryHelper::getPlatformLoggingMXBean))},
	{"getRuntimeMXBean", "()Ljava/lang/management/RuntimeMXBean;", nullptr, $PUBLIC | $STATIC | $SYNCHRONIZED, $method(static_cast<$RuntimeMXBean*(*)()>(&ManagementFactoryHelper::getRuntimeMXBean))},
	{"getThreadMXBean", "()Ljava/lang/management/ThreadMXBean;", nullptr, $PUBLIC | $STATIC | $SYNCHRONIZED, $method(static_cast<$ThreadMXBean*(*)()>(&ManagementFactoryHelper::getThreadMXBean))},
	{"getVMManagement", "()Lsun/management/VMManagement;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$VMManagement*(*)()>(&ManagementFactoryHelper::getVMManagement))},
	{"isPlatformLoggingMXBeanAvailable", "()Z", nullptr, $PUBLIC | $STATIC, $method(static_cast<bool(*)()>(&ManagementFactoryHelper::isPlatformLoggingMXBeanAvailable))},
	{"isThreadRunningNative", "(I)Z", nullptr, $PUBLIC | $STATIC, $method(static_cast<bool(*)(int32_t)>(&ManagementFactoryHelper::isThreadRunningNative))},
	{"isThreadSuspended", "(I)Z", nullptr, $PUBLIC | $STATIC, $method(static_cast<bool(*)(int32_t)>(&ManagementFactoryHelper::isThreadSuspended))},
	{"lambda$getAllMemoryPoolNames$0", "(I)[Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $method(static_cast<$StringArray*(*)(int32_t)>(&ManagementFactoryHelper::lambda$getAllMemoryPoolNames$0))},
	{"registerInternalMBeans", "(Ljavax/management/MBeanServer;)V", nullptr, $STATIC, $method(static_cast<void(*)($MBeanServer*)>(&ManagementFactoryHelper::registerInternalMBeans))},
	{"toThreadState", "(I)Ljava/lang/Thread$State;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$Thread$State*(*)(int32_t)>(&ManagementFactoryHelper::toThreadState))},
	{"unregisterInternalMBeans", "(Ljavax/management/MBeanServer;)V", nullptr, $STATIC, $method(static_cast<void(*)($MBeanServer*)>(&ManagementFactoryHelper::unregisterInternalMBeans))},
	{"unregisterMBean", "(Ljavax/management/MBeanServer;Ljava/lang/String;)V", nullptr, $PRIVATE | $STATIC, $method(static_cast<void(*)($MBeanServer*,$String*)>(&ManagementFactoryHelper::unregisterMBean))},
	{}
};

$InnerClassInfo _ManagementFactoryHelper_InnerClassesInfo_[] = {
	{"sun.management.ManagementFactoryHelper$PlatformLoggingImpl", "sun.management.ManagementFactoryHelper", "PlatformLoggingImpl", $STATIC | $FINAL},
	{"sun.management.ManagementFactoryHelper$LoggingMXBeanAccess", "sun.management.ManagementFactoryHelper", "LoggingMXBeanAccess", $STATIC | $FINAL},
	{"sun.management.ManagementFactoryHelper$3", nullptr, nullptr, 0},
	{"sun.management.ManagementFactoryHelper$2", nullptr, nullptr, 0},
	{"sun.management.ManagementFactoryHelper$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _ManagementFactoryHelper_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.management.ManagementFactoryHelper",
	"java.lang.Object",
	nullptr,
	_ManagementFactoryHelper_FieldInfo_,
	_ManagementFactoryHelper_MethodInfo_,
	nullptr,
	nullptr,
	_ManagementFactoryHelper_InnerClassesInfo_,
	nullptr,
	nullptr,
	"sun.management.ManagementFactoryHelper$PlatformLoggingImpl,sun.management.ManagementFactoryHelper$LoggingMXBeanAccess,sun.management.ManagementFactoryHelper$LoggingMXBeanAccess$1,sun.management.ManagementFactoryHelper$3,sun.management.ManagementFactoryHelper$2,sun.management.ManagementFactoryHelper$1"
};

$Object* allocate$ManagementFactoryHelper($Class* clazz) {
	return $of($alloc(ManagementFactoryHelper));
}

$VMManagement* ManagementFactoryHelper::jvm = nullptr;
$String* ManagementFactoryHelper::LOGGING_MXBEAN_NAME = nullptr;
$ClassLoadingImpl* ManagementFactoryHelper::classMBean = nullptr;
$MemoryImpl* ManagementFactoryHelper::memoryMBean = nullptr;
$ThreadImpl* ManagementFactoryHelper::threadMBean = nullptr;
$RuntimeImpl* ManagementFactoryHelper::runtimeMBean = nullptr;
$CompilationImpl* ManagementFactoryHelper::compileMBean = nullptr;
$BaseOperatingSystemImpl* ManagementFactoryHelper::osMBean = nullptr;
$volatile($List*) ManagementFactoryHelper::bufferPools = nullptr;
$String* ManagementFactoryHelper::BUFFER_POOL_MXBEAN_NAME = nullptr;
$HotspotRuntime* ManagementFactoryHelper::hsRuntimeMBean = nullptr;
$HotspotClassLoading* ManagementFactoryHelper::hsClassMBean = nullptr;
$HotspotThread* ManagementFactoryHelper::hsThreadMBean = nullptr;
$HotspotCompilation* ManagementFactoryHelper::hsCompileMBean = nullptr;
$HotspotMemory* ManagementFactoryHelper::hsMemoryMBean = nullptr;
$String* ManagementFactoryHelper::HOTSPOT_CLASS_LOADING_MBEAN_NAME = nullptr;
$String* ManagementFactoryHelper::HOTSPOT_COMPILATION_MBEAN_NAME = nullptr;
$String* ManagementFactoryHelper::HOTSPOT_MEMORY_MBEAN_NAME = nullptr;
$String* ManagementFactoryHelper::HOTSPOT_RUNTIME_MBEAN_NAME = nullptr;
$String* ManagementFactoryHelper::HOTSPOT_THREAD_MBEAN_NAME = nullptr;

void ManagementFactoryHelper::init$() {
}

$VMManagement* ManagementFactoryHelper::getVMManagement() {
	$init(ManagementFactoryHelper);
	return ManagementFactoryHelper::jvm;
}

$ClassLoadingMXBean* ManagementFactoryHelper::getClassLoadingMXBean() {
	$load(ManagementFactoryHelper);
	$synchronized(class$) {
		$init(ManagementFactoryHelper);
		if (ManagementFactoryHelper::classMBean == nullptr) {
			$assignStatic(ManagementFactoryHelper::classMBean, $new($ClassLoadingImpl, ManagementFactoryHelper::jvm));
		}
		return ManagementFactoryHelper::classMBean;
	}
}

$MemoryMXBean* ManagementFactoryHelper::getMemoryMXBean() {
	$load(ManagementFactoryHelper);
	$synchronized(class$) {
		$init(ManagementFactoryHelper);
		if (ManagementFactoryHelper::memoryMBean == nullptr) {
			$assignStatic(ManagementFactoryHelper::memoryMBean, $new($MemoryImpl, ManagementFactoryHelper::jvm));
		}
		return ManagementFactoryHelper::memoryMBean;
	}
}

$ThreadMXBean* ManagementFactoryHelper::getThreadMXBean() {
	$load(ManagementFactoryHelper);
	$synchronized(class$) {
		$init(ManagementFactoryHelper);
		if (ManagementFactoryHelper::threadMBean == nullptr) {
			$assignStatic(ManagementFactoryHelper::threadMBean, $new($ThreadImpl, ManagementFactoryHelper::jvm));
		}
		return ManagementFactoryHelper::threadMBean;
	}
}

$RuntimeMXBean* ManagementFactoryHelper::getRuntimeMXBean() {
	$load(ManagementFactoryHelper);
	$synchronized(class$) {
		$init(ManagementFactoryHelper);
		if (ManagementFactoryHelper::runtimeMBean == nullptr) {
			$assignStatic(ManagementFactoryHelper::runtimeMBean, $new($RuntimeImpl, ManagementFactoryHelper::jvm));
		}
		return ManagementFactoryHelper::runtimeMBean;
	}
}

$CompilationMXBean* ManagementFactoryHelper::getCompilationMXBean() {
	$load(ManagementFactoryHelper);
	$synchronized(class$) {
		$init(ManagementFactoryHelper);
		if (ManagementFactoryHelper::compileMBean == nullptr && $nc(ManagementFactoryHelper::jvm)->getCompilerName() != nullptr) {
			$assignStatic(ManagementFactoryHelper::compileMBean, $new($CompilationImpl, ManagementFactoryHelper::jvm));
		}
		return ManagementFactoryHelper::compileMBean;
	}
}

$OperatingSystemMXBean* ManagementFactoryHelper::getOperatingSystemMXBean() {
	$load(ManagementFactoryHelper);
	$synchronized(class$) {
		$init(ManagementFactoryHelper);
		if (ManagementFactoryHelper::osMBean == nullptr) {
			$assignStatic(ManagementFactoryHelper::osMBean, $new($BaseOperatingSystemImpl, ManagementFactoryHelper::jvm));
		}
		return ManagementFactoryHelper::osMBean;
	}
}

$List* ManagementFactoryHelper::getMemoryPoolMXBeans() {
	$init(ManagementFactoryHelper);
	$useLocalCurrentObjectStackCache();
	$var($MemoryPoolMXBeanArray, pools, $MemoryImpl::getMemoryPools());
	$var($List, list, $new($ArrayList, $nc(pools)->length));
	{
		$var($MemoryPoolMXBeanArray, arr$, pools);
		int32_t len$ = $nc(arr$)->length;
		int32_t i$ = 0;
		for (; i$ < len$; ++i$) {
			$var($MemoryPoolMXBean, p, arr$->get(i$));
			{
				list->add(p);
			}
		}
	}
	return list;
}

$List* ManagementFactoryHelper::getMemoryManagerMXBeans() {
	$init(ManagementFactoryHelper);
	$useLocalCurrentObjectStackCache();
	$var($MemoryManagerMXBeanArray, mgrs, $MemoryImpl::getMemoryManagers());
	$var($List, result, $new($ArrayList, $nc(mgrs)->length));
	{
		$var($MemoryManagerMXBeanArray, arr$, mgrs);
		int32_t len$ = $nc(arr$)->length;
		int32_t i$ = 0;
		for (; i$ < len$; ++i$) {
			$var($MemoryManagerMXBean, m, arr$->get(i$));
			{
				result->add(m);
			}
		}
	}
	return result;
}

$List* ManagementFactoryHelper::getGarbageCollectorMXBeans() {
	$init(ManagementFactoryHelper);
	$useLocalCurrentObjectStackCache();
	$var($MemoryManagerMXBeanArray, mgrs, $MemoryImpl::getMemoryManagers());
	$var($List, result, $new($ArrayList, $nc(mgrs)->length));
	{
		$var($MemoryManagerMXBeanArray, arr$, mgrs);
		int32_t len$ = $nc(arr$)->length;
		int32_t i$ = 0;
		for (; i$ < len$; ++i$) {
			$var($MemoryManagerMXBean, m, arr$->get(i$));
			{
				$load($GarbageCollectorMXBean);
				if ($GarbageCollectorMXBean::class$->isInstance(m)) {
					result->add($cast($GarbageCollectorMXBean, $($GarbageCollectorMXBean::class$->cast(m))));
				}
			}
		}
	}
	return result;
}

$PlatformLoggingMXBean* ManagementFactoryHelper::getPlatformLoggingMXBean() {
	$init(ManagementFactoryHelper);
	if ($ManagementFactoryHelper$LoggingMXBeanAccess::isAvailable()) {
		$init($ManagementFactoryHelper$PlatformLoggingImpl);
		return $ManagementFactoryHelper$PlatformLoggingImpl::MBEAN;
	} else {
		return nullptr;
	}
}

bool ManagementFactoryHelper::isPlatformLoggingMXBeanAvailable() {
	$init(ManagementFactoryHelper);
	return $ManagementFactoryHelper$LoggingMXBeanAccess::isAvailable();
}

$StringArray* ManagementFactoryHelper::getAllMemoryPoolNames() {
	$init(ManagementFactoryHelper);
	$useLocalCurrentObjectStackCache();
	return $fcast($StringArray, $nc($($nc($($Arrays::stream($($MemoryImpl::getMemoryPools()))))->map(static_cast<$Function*>($$new(ManagementFactoryHelper$$Lambda$getName)))))->toArray(static_cast<$IntFunction*>($$new(ManagementFactoryHelper$$Lambda$lambda$getAllMemoryPoolNames$0$1))));
}

$List* ManagementFactoryHelper::getBufferPoolMXBeans() {
	$init(ManagementFactoryHelper);
	$useLocalCurrentObjectStackCache();
	if (ManagementFactoryHelper::bufferPools == nullptr) {
		$synchronized(ManagementFactoryHelper::class$) {
			if (ManagementFactoryHelper::bufferPools == nullptr) {
				$assignStatic(ManagementFactoryHelper::bufferPools, $cast($List, $nc($($nc($($nc($($VM::getBufferPools()))->stream()))->map(static_cast<$Function*>($$new(ManagementFactoryHelper$$Lambda$createBufferPoolMXBean$2)))))->collect($($Collectors::toList()))));
			}
		}
	}
	return ManagementFactoryHelper::bufferPools;
}

$BufferPoolMXBean* ManagementFactoryHelper::createBufferPoolMXBean($VM$BufferPool* pool) {
	$init(ManagementFactoryHelper);
	return $new($ManagementFactoryHelper$1, pool);
}

$HotspotRuntimeMBean* ManagementFactoryHelper::getHotspotRuntimeMBean() {
	$load(ManagementFactoryHelper);
	$synchronized(class$) {
		$init(ManagementFactoryHelper);
		if (ManagementFactoryHelper::hsRuntimeMBean == nullptr) {
			$assignStatic(ManagementFactoryHelper::hsRuntimeMBean, $new($HotspotRuntime, ManagementFactoryHelper::jvm));
		}
		return ManagementFactoryHelper::hsRuntimeMBean;
	}
}

$HotspotClassLoadingMBean* ManagementFactoryHelper::getHotspotClassLoadingMBean() {
	$load(ManagementFactoryHelper);
	$synchronized(class$) {
		$init(ManagementFactoryHelper);
		if (ManagementFactoryHelper::hsClassMBean == nullptr) {
			$assignStatic(ManagementFactoryHelper::hsClassMBean, $new($HotspotClassLoading, ManagementFactoryHelper::jvm));
		}
		return ManagementFactoryHelper::hsClassMBean;
	}
}

$HotspotThreadMBean* ManagementFactoryHelper::getHotspotThreadMBean() {
	$load(ManagementFactoryHelper);
	$synchronized(class$) {
		$init(ManagementFactoryHelper);
		if (ManagementFactoryHelper::hsThreadMBean == nullptr) {
			$assignStatic(ManagementFactoryHelper::hsThreadMBean, $new($HotspotThread, ManagementFactoryHelper::jvm));
		}
		return ManagementFactoryHelper::hsThreadMBean;
	}
}

$HotspotMemoryMBean* ManagementFactoryHelper::getHotspotMemoryMBean() {
	$load(ManagementFactoryHelper);
	$synchronized(class$) {
		$init(ManagementFactoryHelper);
		if (ManagementFactoryHelper::hsMemoryMBean == nullptr) {
			$assignStatic(ManagementFactoryHelper::hsMemoryMBean, $new($HotspotMemory, ManagementFactoryHelper::jvm));
		}
		return ManagementFactoryHelper::hsMemoryMBean;
	}
}

$HotspotCompilationMBean* ManagementFactoryHelper::getHotspotCompilationMBean() {
	$load(ManagementFactoryHelper);
	$synchronized(class$) {
		$init(ManagementFactoryHelper);
		if (ManagementFactoryHelper::hsCompileMBean == nullptr) {
			$assignStatic(ManagementFactoryHelper::hsCompileMBean, $new($HotspotCompilation, ManagementFactoryHelper::jvm));
		}
		return ManagementFactoryHelper::hsCompileMBean;
	}
}

void ManagementFactoryHelper::addMBean($MBeanServer* mbs, Object$* mbean, $String* mbeanName) {
	$init(ManagementFactoryHelper);
	$useLocalCurrentObjectStackCache();
	$beforeCallerSensitive();
	try {
		$var($ObjectName, objName, $Util::newObjectName(mbeanName));
		$var($MBeanServer, mbs0, mbs);
		$var($Object, mbean0, mbean);
		$AccessController::doPrivileged(static_cast<$PrivilegedExceptionAction*>($$new($ManagementFactoryHelper$2, mbs0, mbean0, objName)));
	} catch ($PrivilegedActionException& e) {
		$throw($($Util::newException($(e->getException()))));
	}
}

void ManagementFactoryHelper::registerInternalMBeans($MBeanServer* mbs) {
	$init(ManagementFactoryHelper);
	$useLocalCurrentObjectStackCache();
	addMBean(mbs, $(getHotspotClassLoadingMBean()), ManagementFactoryHelper::HOTSPOT_CLASS_LOADING_MBEAN_NAME);
	addMBean(mbs, $(getHotspotMemoryMBean()), ManagementFactoryHelper::HOTSPOT_MEMORY_MBEAN_NAME);
	addMBean(mbs, $(getHotspotRuntimeMBean()), ManagementFactoryHelper::HOTSPOT_RUNTIME_MBEAN_NAME);
	addMBean(mbs, $(getHotspotThreadMBean()), ManagementFactoryHelper::HOTSPOT_THREAD_MBEAN_NAME);
	if (getCompilationMXBean() != nullptr) {
		addMBean(mbs, $(getHotspotCompilationMBean()), ManagementFactoryHelper::HOTSPOT_COMPILATION_MBEAN_NAME);
	}
}

void ManagementFactoryHelper::unregisterMBean($MBeanServer* mbs, $String* mbeanName) {
	$init(ManagementFactoryHelper);
	$useLocalCurrentObjectStackCache();
	$beforeCallerSensitive();
	try {
		$var($ObjectName, objName, $Util::newObjectName(mbeanName));
		$var($MBeanServer, mbs0, mbs);
		$AccessController::doPrivileged(static_cast<$PrivilegedExceptionAction*>($$new($ManagementFactoryHelper$3, mbs0, objName)));
	} catch ($PrivilegedActionException& e) {
		$throw($($Util::newException($(e->getException()))));
	}
}

void ManagementFactoryHelper::unregisterInternalMBeans($MBeanServer* mbs) {
	$init(ManagementFactoryHelper);
	unregisterMBean(mbs, ManagementFactoryHelper::HOTSPOT_CLASS_LOADING_MBEAN_NAME);
	unregisterMBean(mbs, ManagementFactoryHelper::HOTSPOT_MEMORY_MBEAN_NAME);
	unregisterMBean(mbs, ManagementFactoryHelper::HOTSPOT_RUNTIME_MBEAN_NAME);
	unregisterMBean(mbs, ManagementFactoryHelper::HOTSPOT_THREAD_MBEAN_NAME);
	if (getCompilationMXBean() != nullptr) {
		unregisterMBean(mbs, ManagementFactoryHelper::HOTSPOT_COMPILATION_MBEAN_NAME);
	}
}

bool ManagementFactoryHelper::isThreadSuspended(int32_t state) {
	$init(ManagementFactoryHelper);
	return (((int32_t)(state & (uint32_t)ManagementFactoryHelper::JMM_THREAD_STATE_FLAG_SUSPENDED)) != 0);
}

bool ManagementFactoryHelper::isThreadRunningNative(int32_t state) {
	$init(ManagementFactoryHelper);
	return (((int32_t)(state & (uint32_t)ManagementFactoryHelper::JMM_THREAD_STATE_FLAG_NATIVE)) != 0);
}

$Thread$State* ManagementFactoryHelper::toThreadState(int32_t state) {
	$init(ManagementFactoryHelper);
	int32_t threadStatus = (int32_t)(state & (uint32_t)~ManagementFactoryHelper::JMM_THREAD_STATE_FLAG_MASK);
	return $VM::toThreadState(threadStatus);
}

$MemoryPoolMXBean* ManagementFactoryHelper::createMemoryPool($String* name, bool isHeap, int64_t uThreshold, int64_t gcThreshold) {
	$init(ManagementFactoryHelper);
	return $new($MemoryPoolImpl, name, isHeap, uThreshold, gcThreshold);
}

$MemoryManagerMXBean* ManagementFactoryHelper::createMemoryManager($String* name) {
	$init(ManagementFactoryHelper);
	return $new($MemoryManagerImpl, name);
}

$GarbageCollectorMXBean* ManagementFactoryHelper::createGarbageCollector($String* name, $String* type) {
	$init(ManagementFactoryHelper);
	return $new($GarbageCollectorImpl, name);
}

$StringArray* ManagementFactoryHelper::lambda$getAllMemoryPoolNames$0(int32_t x$0) {
	$init(ManagementFactoryHelper);
	return $new($StringArray, x$0);
}

void clinit$ManagementFactoryHelper($Class* class$) {
	$assignStatic(ManagementFactoryHelper::LOGGING_MXBEAN_NAME, "java.util.logging:type=Logging"_s);
	$assignStatic(ManagementFactoryHelper::BUFFER_POOL_MXBEAN_NAME, "java.nio:type=BufferPool"_s);
	$assignStatic(ManagementFactoryHelper::HOTSPOT_CLASS_LOADING_MBEAN_NAME, "sun.management:type=HotspotClassLoading"_s);
	$assignStatic(ManagementFactoryHelper::HOTSPOT_COMPILATION_MBEAN_NAME, "sun.management:type=HotspotCompilation"_s);
	$assignStatic(ManagementFactoryHelper::HOTSPOT_MEMORY_MBEAN_NAME, "sun.management:type=HotspotMemory"_s);
	$assignStatic(ManagementFactoryHelper::HOTSPOT_RUNTIME_MBEAN_NAME, "sun.management:type=HotspotRuntime"_s);
	$assignStatic(ManagementFactoryHelper::HOTSPOT_THREAD_MBEAN_NAME, "sun.management:type=HotspotThreading"_s);
	$beforeCallerSensitive();
	{
		try {
			$load($ManagementFactory);
			$nc($($MethodHandles::lookup()))->ensureInitialized($ManagementFactory::class$);
		} catch ($IllegalAccessException& e) {
		}
	}
	$assignStatic(ManagementFactoryHelper::jvm, $new($VMManagementImpl));
	$assignStatic(ManagementFactoryHelper::classMBean, nullptr);
	$assignStatic(ManagementFactoryHelper::memoryMBean, nullptr);
	$assignStatic(ManagementFactoryHelper::threadMBean, nullptr);
	$assignStatic(ManagementFactoryHelper::runtimeMBean, nullptr);
	$assignStatic(ManagementFactoryHelper::compileMBean, nullptr);
	$assignStatic(ManagementFactoryHelper::osMBean, nullptr);
	$assignStatic(ManagementFactoryHelper::hsRuntimeMBean, nullptr);
	$assignStatic(ManagementFactoryHelper::hsClassMBean, nullptr);
	$assignStatic(ManagementFactoryHelper::hsThreadMBean, nullptr);
	$assignStatic(ManagementFactoryHelper::hsCompileMBean, nullptr);
	$assignStatic(ManagementFactoryHelper::hsMemoryMBean, nullptr);
}

ManagementFactoryHelper::ManagementFactoryHelper() {
}

$Class* ManagementFactoryHelper::load$($String* name, bool initialize) {
	if (name != nullptr) {
		if (name->equals(ManagementFactoryHelper$$Lambda$getName::classInfo$.name)) {
			return ManagementFactoryHelper$$Lambda$getName::load$(name, initialize);
		}
		if (name->equals(ManagementFactoryHelper$$Lambda$lambda$getAllMemoryPoolNames$0$1::classInfo$.name)) {
			return ManagementFactoryHelper$$Lambda$lambda$getAllMemoryPoolNames$0$1::load$(name, initialize);
		}
		if (name->equals(ManagementFactoryHelper$$Lambda$createBufferPoolMXBean$2::classInfo$.name)) {
			return ManagementFactoryHelper$$Lambda$createBufferPoolMXBean$2::load$(name, initialize);
		}
	}
	$loadClass(ManagementFactoryHelper, name, initialize, &_ManagementFactoryHelper_ClassInfo_, clinit$ManagementFactoryHelper, allocate$ManagementFactoryHelper);
	return class$;
}

$Class* ManagementFactoryHelper::class$ = nullptr;

	} // management
} // sun
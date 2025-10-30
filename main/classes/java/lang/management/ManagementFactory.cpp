#include <java/lang/management/ManagementFactory.h>

#include <java/io/Serializable.h>
#include <java/lang/AssertionError.h>
#include <java/lang/ClassLoader.h>
#include <java/lang/SecurityManager.h>
#include <java/lang/invoke/CallSite.h>
#include <java/lang/invoke/LambdaMetafactory.h>
#include <java/lang/invoke/MethodHandle.h>
#include <java/lang/invoke/MethodHandles$Lookup.h>
#include <java/lang/invoke/MethodType.h>
#include <java/lang/management/ClassLoadingMXBean.h>
#include <java/lang/management/CompilationMXBean.h>
#include <java/lang/management/GarbageCollectorMXBean.h>
#include <java/lang/management/ManagementFactory$PlatformMBeanFinder.h>
#include <java/lang/management/MemoryMXBean.h>
#include <java/lang/management/MemoryManagerMXBean.h>
#include <java/lang/management/MemoryPoolMXBean.h>
#include <java/lang/management/OperatingSystemMXBean.h>
#include <java/lang/management/PlatformLoggingMXBean.h>
#include <java/lang/management/PlatformManagedObject.h>
#include <java/lang/management/RuntimeMXBean.h>
#include <java/lang/management/ThreadMXBean.h>
#include <java/security/AccessController.h>
#include <java/security/BasicPermission.h>
#include <java/security/Permission.h>
#include <java/security/PrivilegedAction.h>
#include <java/security/PrivilegedActionException.h>
#include <java/security/PrivilegedExceptionAction.h>
#include <java/util/AbstractList.h>
#include <java/util/ArrayList.h>
#include <java/util/Collection.h>
#include <java/util/Collections.h>
#include <java/util/Iterator.h>
#include <java/util/List.h>
#include <java/util/Map$Entry.h>
#include <java/util/Map.h>
#include <java/util/Set.h>
#include <java/util/function/Consumer.h>
#include <java/util/function/Function.h>
#include <java/util/function/Predicate.h>
#include <java/util/stream/Collector.h>
#include <java/util/stream/Collectors.h>
#include <java/util/stream/Stream.h>
#include <javax/management/DynamicMBean.h>
#include <javax/management/InstanceNotFoundException.h>
#include <javax/management/JMException.h>
#include <javax/management/JMX.h>
#include <javax/management/MBeanServer.h>
#include <javax/management/MBeanServerConnection.h>
#include <javax/management/MBeanServerFactory.h>
#include <javax/management/MBeanServerPermission.h>
#include <javax/management/MalformedObjectNameException.h>
#include <javax/management/NotificationEmitter.h>
#include <javax/management/ObjectInstance.h>
#include <javax/management/ObjectName.h>
#include <javax/management/OperationsException.h>
#include <javax/management/QueryExp.h>
#include <javax/management/StandardEmitterMBean.h>
#include <javax/management/StandardMBean.h>
#include <jdk/internal/misc/VM.h>
#include <sun/management/Util.h>
#include <sun/management/spi/PlatformMBeanProvider$PlatformComponent.h>
#include <jcpp.h>

#undef CLASS_LOADING_MXBEAN_NAME
#undef COMPILATION_MXBEAN_NAME
#undef GARBAGE_COLLECTOR_MXBEAN_DOMAIN_TYPE
#undef MEMORY_MANAGER_MXBEAN_DOMAIN_TYPE
#undef MEMORY_MXBEAN_NAME
#undef MEMORY_POOL_MXBEAN_DOMAIN_TYPE
#undef NOTIF_EMITTER
#undef OPERATING_SYSTEM_MXBEAN_NAME
#undef RUNTIME_MXBEAN_NAME
#undef THREAD_MXBEAN_NAME

using $Serializable = ::java::io::Serializable;
using $AssertionError = ::java::lang::AssertionError;
using $Boolean = ::java::lang::Boolean;
using $ClassInfo = ::java::lang::ClassInfo;
using $ClassLoader = ::java::lang::ClassLoader;
using $Exception = ::java::lang::Exception;
using $FieldInfo = ::java::lang::FieldInfo;
using $IllegalArgumentException = ::java::lang::IllegalArgumentException;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $RuntimeException = ::java::lang::RuntimeException;
using $SecurityManager = ::java::lang::SecurityManager;
using $Void = ::java::lang::Void;
using $CallSite = ::java::lang::invoke::CallSite;
using $LambdaMetafactory = ::java::lang::invoke::LambdaMetafactory;
using $MethodHandle = ::java::lang::invoke::MethodHandle;
using $MethodHandles$Lookup = ::java::lang::invoke::MethodHandles$Lookup;
using $MethodType = ::java::lang::invoke::MethodType;
using $ClassLoadingMXBean = ::java::lang::management::ClassLoadingMXBean;
using $CompilationMXBean = ::java::lang::management::CompilationMXBean;
using $GarbageCollectorMXBean = ::java::lang::management::GarbageCollectorMXBean;
using $ManagementFactory$PlatformMBeanFinder = ::java::lang::management::ManagementFactory$PlatformMBeanFinder;
using $MemoryMXBean = ::java::lang::management::MemoryMXBean;
using $MemoryManagerMXBean = ::java::lang::management::MemoryManagerMXBean;
using $MemoryPoolMXBean = ::java::lang::management::MemoryPoolMXBean;
using $OperatingSystemMXBean = ::java::lang::management::OperatingSystemMXBean;
using $PlatformLoggingMXBean = ::java::lang::management::PlatformLoggingMXBean;
using $PlatformManagedObject = ::java::lang::management::PlatformManagedObject;
using $RuntimeMXBean = ::java::lang::management::RuntimeMXBean;
using $ThreadMXBean = ::java::lang::management::ThreadMXBean;
using $AccessController = ::java::security::AccessController;
using $BasicPermission = ::java::security::BasicPermission;
using $Permission = ::java::security::Permission;
using $PrivilegedAction = ::java::security::PrivilegedAction;
using $PrivilegedActionException = ::java::security::PrivilegedActionException;
using $PrivilegedExceptionAction = ::java::security::PrivilegedExceptionAction;
using $AbstractList = ::java::util::AbstractList;
using $ArrayList = ::java::util::ArrayList;
using $Collection = ::java::util::Collection;
using $Collections = ::java::util::Collections;
using $Iterator = ::java::util::Iterator;
using $List = ::java::util::List;
using $Map = ::java::util::Map;
using $Map$Entry = ::java::util::Map$Entry;
using $Set = ::java::util::Set;
using $Consumer = ::java::util::function::Consumer;
using $Function = ::java::util::function::Function;
using $Predicate = ::java::util::function::Predicate;
using $Collector = ::java::util::stream::Collector;
using $Collectors = ::java::util::stream::Collectors;
using $Stream = ::java::util::stream::Stream;
using $DynamicMBean = ::javax::management::DynamicMBean;
using $InstanceNotFoundException = ::javax::management::InstanceNotFoundException;
using $JMException = ::javax::management::JMException;
using $JMX = ::javax::management::JMX;
using $MBeanServer = ::javax::management::MBeanServer;
using $MBeanServerConnection = ::javax::management::MBeanServerConnection;
using $MBeanServerFactory = ::javax::management::MBeanServerFactory;
using $MBeanServerPermission = ::javax::management::MBeanServerPermission;
using $MalformedObjectNameException = ::javax::management::MalformedObjectNameException;
using $NotificationEmitter = ::javax::management::NotificationEmitter;
using $ObjectInstance = ::javax::management::ObjectInstance;
using $ObjectName = ::javax::management::ObjectName;
using $OperationsException = ::javax::management::OperationsException;
using $QueryExp = ::javax::management::QueryExp;
using $StandardEmitterMBean = ::javax::management::StandardEmitterMBean;
using $StandardMBean = ::javax::management::StandardMBean;
using $VM = ::jdk::internal::misc::VM;
using $Util = ::sun::management::Util;
using $PlatformMBeanProvider$PlatformComponent = ::sun::management::spi::PlatformMBeanProvider$PlatformComponent;

namespace java {
	namespace lang {
		namespace management {

class ManagementFactory$$Lambda$shouldRegister : public $Predicate {
	$class(ManagementFactory$$Lambda$shouldRegister, $NO_CLASS_INIT, $Predicate)
public:
	void init$() {
	}
	virtual bool test(Object$* inst$) override {
		 return $sure($PlatformMBeanProvider$PlatformComponent, inst$)->shouldRegister();
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<ManagementFactory$$Lambda$shouldRegister>());
	}
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$MethodInfo ManagementFactory$$Lambda$shouldRegister::methodInfos[3] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(ManagementFactory$$Lambda$shouldRegister::*)()>(&ManagementFactory$$Lambda$shouldRegister::init$))},
	{"test", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{}
};
$ClassInfo ManagementFactory$$Lambda$shouldRegister::classInfo$ = {
	$PUBLIC | $FINAL,
	"java.lang.management.ManagementFactory$$Lambda$shouldRegister",
	"java.lang.Object",
	"java.util.function.Predicate",
	nullptr,
	methodInfos
};
$Class* ManagementFactory$$Lambda$shouldRegister::load$($String* name, bool initialize) {
	$loadClass(ManagementFactory$$Lambda$shouldRegister, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* ManagementFactory$$Lambda$shouldRegister::class$ = nullptr;

class ManagementFactory$$Lambda$lambda$getPlatformMBeanServer$0$1 : public $Function {
	$class(ManagementFactory$$Lambda$lambda$getPlatformMBeanServer$0$1, $NO_CLASS_INIT, $Function)
public:
	void init$() {
	}
	virtual $Object* apply(Object$* pc) override {
		 return $of(ManagementFactory::lambda$getPlatformMBeanServer$0($cast($PlatformMBeanProvider$PlatformComponent, pc)));
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<ManagementFactory$$Lambda$lambda$getPlatformMBeanServer$0$1>());
	}
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$MethodInfo ManagementFactory$$Lambda$lambda$getPlatformMBeanServer$0$1::methodInfos[3] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(ManagementFactory$$Lambda$lambda$getPlatformMBeanServer$0$1::*)()>(&ManagementFactory$$Lambda$lambda$getPlatformMBeanServer$0$1::init$))},
	{"apply", "(Ljava/lang/Object;)Ljava/lang/Object;", nullptr, $PUBLIC},
	{}
};
$ClassInfo ManagementFactory$$Lambda$lambda$getPlatformMBeanServer$0$1::classInfo$ = {
	$PUBLIC | $FINAL,
	"java.lang.management.ManagementFactory$$Lambda$lambda$getPlatformMBeanServer$0$1",
	"java.lang.Object",
	"java.util.function.Function",
	nullptr,
	methodInfos
};
$Class* ManagementFactory$$Lambda$lambda$getPlatformMBeanServer$0$1::load$($String* name, bool initialize) {
	$loadClass(ManagementFactory$$Lambda$lambda$getPlatformMBeanServer$0$1, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* ManagementFactory$$Lambda$lambda$getPlatformMBeanServer$0$1::class$ = nullptr;

class ManagementFactory$$Lambda$lambda$getPlatformMBeanServer$1$2 : public $Consumer {
	$class(ManagementFactory$$Lambda$lambda$getPlatformMBeanServer$1$2, $NO_CLASS_INIT, $Consumer)
public:
	void init$() {
	}
	virtual void accept(Object$* entry) override {
		ManagementFactory::lambda$getPlatformMBeanServer$1($cast($Map$Entry, entry));
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<ManagementFactory$$Lambda$lambda$getPlatformMBeanServer$1$2>());
	}
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$MethodInfo ManagementFactory$$Lambda$lambda$getPlatformMBeanServer$1$2::methodInfos[3] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(ManagementFactory$$Lambda$lambda$getPlatformMBeanServer$1$2::*)()>(&ManagementFactory$$Lambda$lambda$getPlatformMBeanServer$1$2::init$))},
	{"accept", "(Ljava/lang/Object;)V", nullptr, $PUBLIC},
	{}
};
$ClassInfo ManagementFactory$$Lambda$lambda$getPlatformMBeanServer$1$2::classInfo$ = {
	$PUBLIC | $FINAL,
	"java.lang.management.ManagementFactory$$Lambda$lambda$getPlatformMBeanServer$1$2",
	"java.lang.Object",
	"java.util.function.Consumer",
	nullptr,
	methodInfos
};
$Class* ManagementFactory$$Lambda$lambda$getPlatformMBeanServer$1$2::load$($String* name, bool initialize) {
	$loadClass(ManagementFactory$$Lambda$lambda$getPlatformMBeanServer$1$2, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* ManagementFactory$$Lambda$lambda$getPlatformMBeanServer$1$2::class$ = nullptr;

class ManagementFactory$$Lambda$lambda$newPlatformMXBeanProxy$2$3 : public $PrivilegedAction {
	$class(ManagementFactory$$Lambda$lambda$newPlatformMXBeanProxy$2$3, $NO_CLASS_INIT, $PrivilegedAction)
public:
	void init$($Class* cls) {
		this->cls = cls;
	}
	virtual $Object* run() override {
		 return $of(ManagementFactory::lambda$newPlatformMXBeanProxy$2(cls));
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<ManagementFactory$$Lambda$lambda$newPlatformMXBeanProxy$2$3>());
	}
	$Class* cls = nullptr;
	static $FieldInfo fieldInfos[2];
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$FieldInfo ManagementFactory$$Lambda$lambda$newPlatformMXBeanProxy$2$3::fieldInfos[2] = {
	{"cls", "Ljava/lang/Class;", nullptr, $PUBLIC, $field(ManagementFactory$$Lambda$lambda$newPlatformMXBeanProxy$2$3, cls)},
	{}
};
$MethodInfo ManagementFactory$$Lambda$lambda$newPlatformMXBeanProxy$2$3::methodInfos[3] = {
	{"<init>", "(Ljava/lang/Class;)V", nullptr, $PUBLIC, $method(static_cast<void(ManagementFactory$$Lambda$lambda$newPlatformMXBeanProxy$2$3::*)($Class*)>(&ManagementFactory$$Lambda$lambda$newPlatformMXBeanProxy$2$3::init$))},
	{"run", "()Ljava/lang/Object;", nullptr, $PUBLIC},
	{}
};
$ClassInfo ManagementFactory$$Lambda$lambda$newPlatformMXBeanProxy$2$3::classInfo$ = {
	$PUBLIC | $FINAL,
	"java.lang.management.ManagementFactory$$Lambda$lambda$newPlatformMXBeanProxy$2$3",
	"java.lang.Object",
	"java.security.PrivilegedAction",
	fieldInfos,
	methodInfos
};
$Class* ManagementFactory$$Lambda$lambda$newPlatformMXBeanProxy$2$3::load$($String* name, bool initialize) {
	$loadClass(ManagementFactory$$Lambda$lambda$newPlatformMXBeanProxy$2$3, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* ManagementFactory$$Lambda$lambda$newPlatformMXBeanProxy$2$3::class$ = nullptr;

class ManagementFactory$$Lambda$lambda$getPlatformMXBeans$3$4 : public $Function {
	$class(ManagementFactory$$Lambda$lambda$getPlatformMXBeans$3$4, $NO_CLASS_INIT, $Function)
public:
	void init$($Class* mxbeanInterface) {
		this->mxbeanInterface = mxbeanInterface;
	}
	virtual $Object* apply(Object$* p) override {
		 return $of(ManagementFactory::lambda$getPlatformMXBeans$3(mxbeanInterface, $cast($PlatformMBeanProvider$PlatformComponent, p)));
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<ManagementFactory$$Lambda$lambda$getPlatformMXBeans$3$4>());
	}
	$Class* mxbeanInterface = nullptr;
	static $FieldInfo fieldInfos[2];
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$FieldInfo ManagementFactory$$Lambda$lambda$getPlatformMXBeans$3$4::fieldInfos[2] = {
	{"mxbeanInterface", "Ljava/lang/Class;", nullptr, $PUBLIC, $field(ManagementFactory$$Lambda$lambda$getPlatformMXBeans$3$4, mxbeanInterface)},
	{}
};
$MethodInfo ManagementFactory$$Lambda$lambda$getPlatformMXBeans$3$4::methodInfos[3] = {
	{"<init>", "(Ljava/lang/Class;)V", nullptr, $PUBLIC, $method(static_cast<void(ManagementFactory$$Lambda$lambda$getPlatformMXBeans$3$4::*)($Class*)>(&ManagementFactory$$Lambda$lambda$getPlatformMXBeans$3$4::init$))},
	{"apply", "(Ljava/lang/Object;)Ljava/lang/Object;", nullptr, $PUBLIC},
	{}
};
$ClassInfo ManagementFactory$$Lambda$lambda$getPlatformMXBeans$3$4::classInfo$ = {
	$PUBLIC | $FINAL,
	"java.lang.management.ManagementFactory$$Lambda$lambda$getPlatformMXBeans$3$4",
	"java.lang.Object",
	"java.util.function.Function",
	fieldInfos,
	methodInfos
};
$Class* ManagementFactory$$Lambda$lambda$getPlatformMXBeans$3$4::load$($String* name, bool initialize) {
	$loadClass(ManagementFactory$$Lambda$lambda$getPlatformMXBeans$3$4, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* ManagementFactory$$Lambda$lambda$getPlatformMXBeans$3$4::class$ = nullptr;

class ManagementFactory$$Lambda$getCanonicalName$5 : public $Function {
	$class(ManagementFactory$$Lambda$getCanonicalName$5, $NO_CLASS_INIT, $Function)
public:
	void init$() {
	}
	virtual $Object* apply(Object$* inst$) override {
		 return $of($sure($ObjectName, inst$)->getCanonicalName());
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<ManagementFactory$$Lambda$getCanonicalName$5>());
	}
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$MethodInfo ManagementFactory$$Lambda$getCanonicalName$5::methodInfos[3] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(ManagementFactory$$Lambda$getCanonicalName$5::*)()>(&ManagementFactory$$Lambda$getCanonicalName$5::init$))},
	{"apply", "(Ljava/lang/Object;)Ljava/lang/Object;", nullptr, $PUBLIC},
	{}
};
$ClassInfo ManagementFactory$$Lambda$getCanonicalName$5::classInfo$ = {
	$PUBLIC | $FINAL,
	"java.lang.management.ManagementFactory$$Lambda$getCanonicalName$5",
	"java.lang.Object",
	"java.util.function.Function",
	nullptr,
	methodInfos
};
$Class* ManagementFactory$$Lambda$getCanonicalName$5::load$($String* name, bool initialize) {
	$loadClass(ManagementFactory$$Lambda$getCanonicalName$5, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* ManagementFactory$$Lambda$getCanonicalName$5::class$ = nullptr;

class ManagementFactory$$Lambda$lambda$getPlatformManagementInterfaces$4$6 : public $Function {
	$class(ManagementFactory$$Lambda$lambda$getPlatformManagementInterfaces$4$6, $NO_CLASS_INIT, $Function)
public:
	void init$() {
	}
	virtual $Object* apply(Object$* pc) override {
		 return $of(ManagementFactory::lambda$getPlatformManagementInterfaces$4($cast($PlatformMBeanProvider$PlatformComponent, pc)));
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<ManagementFactory$$Lambda$lambda$getPlatformManagementInterfaces$4$6>());
	}
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$MethodInfo ManagementFactory$$Lambda$lambda$getPlatformManagementInterfaces$4$6::methodInfos[3] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(ManagementFactory$$Lambda$lambda$getPlatformManagementInterfaces$4$6::*)()>(&ManagementFactory$$Lambda$lambda$getPlatformManagementInterfaces$4$6::init$))},
	{"apply", "(Ljava/lang/Object;)Ljava/lang/Object;", nullptr, $PUBLIC},
	{}
};
$ClassInfo ManagementFactory$$Lambda$lambda$getPlatformManagementInterfaces$4$6::classInfo$ = {
	$PUBLIC | $FINAL,
	"java.lang.management.ManagementFactory$$Lambda$lambda$getPlatformManagementInterfaces$4$6",
	"java.lang.Object",
	"java.util.function.Function",
	nullptr,
	methodInfos
};
$Class* ManagementFactory$$Lambda$lambda$getPlatformManagementInterfaces$4$6::load$($String* name, bool initialize) {
	$loadClass(ManagementFactory$$Lambda$lambda$getPlatformManagementInterfaces$4$6, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* ManagementFactory$$Lambda$lambda$getPlatformManagementInterfaces$4$6::class$ = nullptr;

class ManagementFactory$$Lambda$lambda$getPlatformManagementInterfaces$5$7 : public $Predicate {
	$class(ManagementFactory$$Lambda$lambda$getPlatformManagementInterfaces$5$7, $NO_CLASS_INIT, $Predicate)
public:
	void init$() {
	}
	virtual bool test(Object$* clazz) override {
		 return ManagementFactory::lambda$getPlatformManagementInterfaces$5($cast($Class, clazz));
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<ManagementFactory$$Lambda$lambda$getPlatformManagementInterfaces$5$7>());
	}
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$MethodInfo ManagementFactory$$Lambda$lambda$getPlatformManagementInterfaces$5$7::methodInfos[3] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(ManagementFactory$$Lambda$lambda$getPlatformManagementInterfaces$5$7::*)()>(&ManagementFactory$$Lambda$lambda$getPlatformManagementInterfaces$5$7::init$))},
	{"test", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{}
};
$ClassInfo ManagementFactory$$Lambda$lambda$getPlatformManagementInterfaces$5$7::classInfo$ = {
	$PUBLIC | $FINAL,
	"java.lang.management.ManagementFactory$$Lambda$lambda$getPlatformManagementInterfaces$5$7",
	"java.lang.Object",
	"java.util.function.Predicate",
	nullptr,
	methodInfos
};
$Class* ManagementFactory$$Lambda$lambda$getPlatformManagementInterfaces$5$7::load$($String* name, bool initialize) {
	$loadClass(ManagementFactory$$Lambda$lambda$getPlatformManagementInterfaces$5$7, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* ManagementFactory$$Lambda$lambda$getPlatformManagementInterfaces$5$7::class$ = nullptr;

class ManagementFactory$$Lambda$lambda$getPlatformManagementInterfaces$6$8 : public $Function {
	$class(ManagementFactory$$Lambda$lambda$getPlatformManagementInterfaces$6$8, $NO_CLASS_INIT, $Function)
public:
	void init$() {
	}
	virtual $Object* apply(Object$* clazz) override {
		 return $of(ManagementFactory::lambda$getPlatformManagementInterfaces$6($cast($Class, clazz)));
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<ManagementFactory$$Lambda$lambda$getPlatformManagementInterfaces$6$8>());
	}
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$MethodInfo ManagementFactory$$Lambda$lambda$getPlatformManagementInterfaces$6$8::methodInfos[3] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(ManagementFactory$$Lambda$lambda$getPlatformManagementInterfaces$6$8::*)()>(&ManagementFactory$$Lambda$lambda$getPlatformManagementInterfaces$6$8::init$))},
	{"apply", "(Ljava/lang/Object;)Ljava/lang/Object;", nullptr, $PUBLIC},
	{}
};
$ClassInfo ManagementFactory$$Lambda$lambda$getPlatformManagementInterfaces$6$8::classInfo$ = {
	$PUBLIC | $FINAL,
	"java.lang.management.ManagementFactory$$Lambda$lambda$getPlatformManagementInterfaces$6$8",
	"java.lang.Object",
	"java.util.function.Function",
	nullptr,
	methodInfos
};
$Class* ManagementFactory$$Lambda$lambda$getPlatformManagementInterfaces$6$8::load$($String* name, bool initialize) {
	$loadClass(ManagementFactory$$Lambda$lambda$getPlatformManagementInterfaces$6$8, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* ManagementFactory$$Lambda$lambda$getPlatformManagementInterfaces$6$8::class$ = nullptr;

class ManagementFactory$$Lambda$lambda$addMXBean$7$9 : public $PrivilegedExceptionAction {
	$class(ManagementFactory$$Lambda$lambda$addMXBean$7$9, $NO_CLASS_INIT, $PrivilegedExceptionAction)
public:
	void init$(Object$* pmo, $MBeanServer* mbs, $ObjectName* oname) {
		$set(this, pmo, pmo);
		$set(this, mbs, mbs);
		$set(this, oname, oname);
	}
	virtual $Object* run() override {
		 return $of(ManagementFactory::lambda$addMXBean$7(pmo, mbs, oname));
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<ManagementFactory$$Lambda$lambda$addMXBean$7$9>());
	}
	$Object* pmo = nullptr;
	$MBeanServer* mbs = nullptr;
	$ObjectName* oname = nullptr;
	static $FieldInfo fieldInfos[4];
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$FieldInfo ManagementFactory$$Lambda$lambda$addMXBean$7$9::fieldInfos[4] = {
	{"pmo", "Ljava/lang/Object;", nullptr, $PUBLIC, $field(ManagementFactory$$Lambda$lambda$addMXBean$7$9, pmo)},
	{"mbs", "Ljavax/management/MBeanServer;", nullptr, $PUBLIC, $field(ManagementFactory$$Lambda$lambda$addMXBean$7$9, mbs)},
	{"oname", "Ljavax/management/ObjectName;", nullptr, $PUBLIC, $field(ManagementFactory$$Lambda$lambda$addMXBean$7$9, oname)},
	{}
};
$MethodInfo ManagementFactory$$Lambda$lambda$addMXBean$7$9::methodInfos[3] = {
	{"<init>", "(Ljava/lang/Object;Ljavax/management/MBeanServer;Ljavax/management/ObjectName;)V", nullptr, $PUBLIC, $method(static_cast<void(ManagementFactory$$Lambda$lambda$addMXBean$7$9::*)(Object$*,$MBeanServer*,$ObjectName*)>(&ManagementFactory$$Lambda$lambda$addMXBean$7$9::init$))},
	{"run", "()Ljava/lang/Object;", nullptr, $PUBLIC},
	{}
};
$ClassInfo ManagementFactory$$Lambda$lambda$addMXBean$7$9::classInfo$ = {
	$PUBLIC | $FINAL,
	"java.lang.management.ManagementFactory$$Lambda$lambda$addMXBean$7$9",
	"java.lang.Object",
	"java.security.PrivilegedExceptionAction",
	fieldInfos,
	methodInfos
};
$Class* ManagementFactory$$Lambda$lambda$addMXBean$7$9::load$($String* name, bool initialize) {
	$loadClass(ManagementFactory$$Lambda$lambda$addMXBean$7$9, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* ManagementFactory$$Lambda$lambda$addMXBean$7$9::class$ = nullptr;

class ManagementFactory$$Lambda$lambda$static$8$10 : public $PrivilegedAction {
	$class(ManagementFactory$$Lambda$lambda$static$8$10, $NO_CLASS_INIT, $PrivilegedAction)
public:
	void init$() {
	}
	virtual $Object* run() override {
		 return $of(ManagementFactory::lambda$static$8());
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<ManagementFactory$$Lambda$lambda$static$8$10>());
	}
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$MethodInfo ManagementFactory$$Lambda$lambda$static$8$10::methodInfos[3] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(ManagementFactory$$Lambda$lambda$static$8$10::*)()>(&ManagementFactory$$Lambda$lambda$static$8$10::init$))},
	{"run", "()Ljava/lang/Object;", nullptr, $PUBLIC},
	{}
};
$ClassInfo ManagementFactory$$Lambda$lambda$static$8$10::classInfo$ = {
	$PUBLIC | $FINAL,
	"java.lang.management.ManagementFactory$$Lambda$lambda$static$8$10",
	"java.lang.Object",
	"java.security.PrivilegedAction",
	nullptr,
	methodInfos
};
$Class* ManagementFactory$$Lambda$lambda$static$8$10::load$($String* name, bool initialize) {
	$loadClass(ManagementFactory$$Lambda$lambda$static$8$10, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* ManagementFactory$$Lambda$lambda$static$8$10::class$ = nullptr;

$FieldInfo _ManagementFactory_FieldInfo_[] = {
	{"$assertionsDisabled", "Z", nullptr, $STATIC | $FINAL | $SYNTHETIC, $staticField(ManagementFactory, $assertionsDisabled)},
	{"CLASS_LOADING_MXBEAN_NAME", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(ManagementFactory, CLASS_LOADING_MXBEAN_NAME)},
	{"COMPILATION_MXBEAN_NAME", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(ManagementFactory, COMPILATION_MXBEAN_NAME)},
	{"MEMORY_MXBEAN_NAME", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(ManagementFactory, MEMORY_MXBEAN_NAME)},
	{"OPERATING_SYSTEM_MXBEAN_NAME", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(ManagementFactory, OPERATING_SYSTEM_MXBEAN_NAME)},
	{"RUNTIME_MXBEAN_NAME", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(ManagementFactory, RUNTIME_MXBEAN_NAME)},
	{"THREAD_MXBEAN_NAME", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(ManagementFactory, THREAD_MXBEAN_NAME)},
	{"GARBAGE_COLLECTOR_MXBEAN_DOMAIN_TYPE", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(ManagementFactory, GARBAGE_COLLECTOR_MXBEAN_DOMAIN_TYPE)},
	{"MEMORY_MANAGER_MXBEAN_DOMAIN_TYPE", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(ManagementFactory, MEMORY_MANAGER_MXBEAN_DOMAIN_TYPE)},
	{"MEMORY_POOL_MXBEAN_DOMAIN_TYPE", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(ManagementFactory, MEMORY_POOL_MXBEAN_DOMAIN_TYPE)},
	{"platformMBeanServer", "Ljavax/management/MBeanServer;", nullptr, $PRIVATE | $STATIC, $staticField(ManagementFactory, platformMBeanServer)},
	{"NOTIF_EMITTER", "Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(ManagementFactory, NOTIF_EMITTER)},
	{}
};

$MethodInfo _ManagementFactory_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PRIVATE, $method(static_cast<void(ManagementFactory::*)()>(&ManagementFactory::init$))},
	{"addMXBean", "(Ljavax/management/MBeanServer;Ljava/lang/String;Ljava/lang/Object;)V", nullptr, $PRIVATE | $STATIC, $method(static_cast<void(*)($MBeanServer*,$String*,Object$*)>(&ManagementFactory::addMXBean))},
	{"getClassLoadingMXBean", "()Ljava/lang/management/ClassLoadingMXBean;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$ClassLoadingMXBean*(*)()>(&ManagementFactory::getClassLoadingMXBean))},
	{"getCompilationMXBean", "()Ljava/lang/management/CompilationMXBean;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$CompilationMXBean*(*)()>(&ManagementFactory::getCompilationMXBean))},
	{"getGarbageCollectorMXBeans", "()Ljava/util/List;", "()Ljava/util/List<Ljava/lang/management/GarbageCollectorMXBean;>;", $PUBLIC | $STATIC, $method(static_cast<$List*(*)()>(&ManagementFactory::getGarbageCollectorMXBeans))},
	{"getMemoryMXBean", "()Ljava/lang/management/MemoryMXBean;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$MemoryMXBean*(*)()>(&ManagementFactory::getMemoryMXBean))},
	{"getMemoryManagerMXBeans", "()Ljava/util/List;", "()Ljava/util/List<Ljava/lang/management/MemoryManagerMXBean;>;", $PUBLIC | $STATIC, $method(static_cast<$List*(*)()>(&ManagementFactory::getMemoryManagerMXBeans))},
	{"getMemoryPoolMXBeans", "()Ljava/util/List;", "()Ljava/util/List<Ljava/lang/management/MemoryPoolMXBean;>;", $PUBLIC | $STATIC, $method(static_cast<$List*(*)()>(&ManagementFactory::getMemoryPoolMXBeans))},
	{"getOperatingSystemMXBean", "()Ljava/lang/management/OperatingSystemMXBean;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$OperatingSystemMXBean*(*)()>(&ManagementFactory::getOperatingSystemMXBean))},
	{"getPlatformMBeanServer", "()Ljavax/management/MBeanServer;", nullptr, $PUBLIC | $STATIC | $SYNCHRONIZED, $method(static_cast<$MBeanServer*(*)()>(&ManagementFactory::getPlatformMBeanServer))},
	{"getPlatformMXBean", "(Ljava/lang/Class;)Ljava/lang/management/PlatformManagedObject;", "<T::Ljava/lang/management/PlatformManagedObject;>(Ljava/lang/Class<TT;>;)TT;", $PUBLIC | $STATIC, $method(static_cast<$PlatformManagedObject*(*)($Class*)>(&ManagementFactory::getPlatformMXBean))},
	{"getPlatformMXBean", "(Ljavax/management/MBeanServerConnection;Ljava/lang/Class;)Ljava/lang/management/PlatformManagedObject;", "<T::Ljava/lang/management/PlatformManagedObject;>(Ljavax/management/MBeanServerConnection;Ljava/lang/Class<TT;>;)TT;", $PUBLIC | $STATIC, $method(static_cast<$PlatformManagedObject*(*)($MBeanServerConnection*,$Class*)>(&ManagementFactory::getPlatformMXBean)), "java.io.IOException"},
	{"getPlatformMXBeans", "(Ljava/lang/Class;)Ljava/util/List;", "<T::Ljava/lang/management/PlatformManagedObject;>(Ljava/lang/Class<TT;>;)Ljava/util/List<TT;>;", $PUBLIC | $STATIC, $method(static_cast<$List*(*)($Class*)>(&ManagementFactory::getPlatformMXBeans))},
	{"getPlatformMXBeans", "(Ljavax/management/MBeanServerConnection;Ljava/lang/Class;)Ljava/util/List;", "<T::Ljava/lang/management/PlatformManagedObject;>(Ljavax/management/MBeanServerConnection;Ljava/lang/Class<TT;>;)Ljava/util/List<TT;>;", $PUBLIC | $STATIC, $method(static_cast<$List*(*)($MBeanServerConnection*,$Class*)>(&ManagementFactory::getPlatformMXBeans)), "java.io.IOException"},
	{"getPlatformManagementInterfaces", "()Ljava/util/Set;", "()Ljava/util/Set<Ljava/lang/Class<+Ljava/lang/management/PlatformManagedObject;>;>;", $PUBLIC | $STATIC, $method(static_cast<$Set*(*)()>(&ManagementFactory::getPlatformManagementInterfaces))},
	{"getProxyNames", "(Lsun/management/spi/PlatformMBeanProvider$PlatformComponent;Ljavax/management/MBeanServerConnection;Ljava/lang/Class;)Ljava/util/stream/Stream;", "(Lsun/management/spi/PlatformMBeanProvider$PlatformComponent<*>;Ljavax/management/MBeanServerConnection;Ljava/lang/Class<*>;)Ljava/util/stream/Stream<Ljava/lang/String;>;", $PRIVATE | $STATIC, $method(static_cast<$Stream*(*)($PlatformMBeanProvider$PlatformComponent*,$MBeanServerConnection*,$Class*)>(&ManagementFactory::getProxyNames)), "java.io.IOException"},
	{"getRuntimeMXBean", "()Ljava/lang/management/RuntimeMXBean;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$RuntimeMXBean*(*)()>(&ManagementFactory::getRuntimeMXBean))},
	{"getThreadMXBean", "()Ljava/lang/management/ThreadMXBean;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$ThreadMXBean*(*)()>(&ManagementFactory::getThreadMXBean))},
	{"isInstanceOf", "(Ljavax/management/MBeanServerConnection;Ljavax/management/ObjectName;Ljava/lang/String;)Z", nullptr, $PRIVATE | $STATIC, $method(static_cast<bool(*)($MBeanServerConnection*,$ObjectName*,$String*)>(&ManagementFactory::isInstanceOf)), "javax.management.InstanceNotFoundException,java.io.IOException"},
	{"lambda$addMXBean$7", "(Ljava/lang/Object;Ljavax/management/MBeanServer;Ljavax/management/ObjectName;)Ljava/lang/Void;", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $method(static_cast<$Void*(*)(Object$*,$MBeanServer*,$ObjectName*)>(&ManagementFactory::lambda$addMXBean$7)), "java.lang.Exception"},
	{"lambda$getPlatformMBeanServer$0", "(Lsun/management/spi/PlatformMBeanProvider$PlatformComponent;)Ljava/util/stream/Stream;", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $method(static_cast<$Stream*(*)($PlatformMBeanProvider$PlatformComponent*)>(&ManagementFactory::lambda$getPlatformMBeanServer$0))},
	{"lambda$getPlatformMBeanServer$1", "(Ljava/util/Map$Entry;)V", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $method(static_cast<void(*)($Map$Entry*)>(&ManagementFactory::lambda$getPlatformMBeanServer$1))},
	{"lambda$getPlatformMXBeans$3", "(Ljava/lang/Class;Lsun/management/spi/PlatformMBeanProvider$PlatformComponent;)Ljava/util/stream/Stream;", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $method(static_cast<$Stream*(*)($Class*,$PlatformMBeanProvider$PlatformComponent*)>(&ManagementFactory::lambda$getPlatformMXBeans$3))},
	{"lambda$getPlatformManagementInterfaces$4", "(Lsun/management/spi/PlatformMBeanProvider$PlatformComponent;)Ljava/util/stream/Stream;", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $method(static_cast<$Stream*(*)($PlatformMBeanProvider$PlatformComponent*)>(&ManagementFactory::lambda$getPlatformManagementInterfaces$4))},
	{"lambda$getPlatformManagementInterfaces$5", "(Ljava/lang/Class;)Z", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $method(static_cast<bool(*)($Class*)>(&ManagementFactory::lambda$getPlatformManagementInterfaces$5))},
	{"lambda$getPlatformManagementInterfaces$6", "(Ljava/lang/Class;)Ljava/lang/Class;", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $method(static_cast<$Class*(*)($Class*)>(&ManagementFactory::lambda$getPlatformManagementInterfaces$6))},
	{"lambda$newPlatformMXBeanProxy$2", "(Ljava/lang/Class;)Ljava/lang/ClassLoader;", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $method(static_cast<$ClassLoader*(*)($Class*)>(&ManagementFactory::lambda$newPlatformMXBeanProxy$2))},
	{"lambda$static$8", "()Ljava/lang/Void;", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $method(static_cast<$Void*(*)()>(&ManagementFactory::lambda$static$8))},
	{"newPlatformMXBeanProxy", "(Ljavax/management/MBeanServerConnection;Ljava/lang/String;Ljava/lang/Class;)Ljava/lang/Object;", "<T:Ljava/lang/Object;>(Ljavax/management/MBeanServerConnection;Ljava/lang/String;Ljava/lang/Class<TT;>;)TT;", $PUBLIC | $STATIC, $method(static_cast<$Object*(*)($MBeanServerConnection*,$String*,$Class*)>(&ManagementFactory::newPlatformMXBeanProxy)), "java.io.IOException"},
	{"platformComponents", "()Ljava/util/Collection;", "()Ljava/util/Collection<Lsun/management/spi/PlatformMBeanProvider$PlatformComponent<*>;>;", $PRIVATE | $STATIC, $method(static_cast<$Collection*(*)()>(&ManagementFactory::platformComponents))},
	{}
};

$InnerClassInfo _ManagementFactory_InnerClassesInfo_[] = {
	{"java.lang.management.ManagementFactory$PlatformMBeanFinder", "java.lang.management.ManagementFactory", "PlatformMBeanFinder", $PRIVATE | $STATIC},
	{}
};

$ClassInfo _ManagementFactory_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"java.lang.management.ManagementFactory",
	"java.lang.Object",
	nullptr,
	_ManagementFactory_FieldInfo_,
	_ManagementFactory_MethodInfo_,
	nullptr,
	nullptr,
	_ManagementFactory_InnerClassesInfo_,
	nullptr,
	nullptr,
	"java.lang.management.ManagementFactory$PlatformMBeanFinder,java.lang.management.ManagementFactory$PlatformMBeanFinder$1"
};

$Object* allocate$ManagementFactory($Class* clazz) {
	return $of($alloc(ManagementFactory));
}

bool ManagementFactory::$assertionsDisabled = false;
$String* ManagementFactory::CLASS_LOADING_MXBEAN_NAME = nullptr;
$String* ManagementFactory::COMPILATION_MXBEAN_NAME = nullptr;
$String* ManagementFactory::MEMORY_MXBEAN_NAME = nullptr;
$String* ManagementFactory::OPERATING_SYSTEM_MXBEAN_NAME = nullptr;
$String* ManagementFactory::RUNTIME_MXBEAN_NAME = nullptr;
$String* ManagementFactory::THREAD_MXBEAN_NAME = nullptr;
$String* ManagementFactory::GARBAGE_COLLECTOR_MXBEAN_DOMAIN_TYPE = nullptr;
$String* ManagementFactory::MEMORY_MANAGER_MXBEAN_DOMAIN_TYPE = nullptr;
$String* ManagementFactory::MEMORY_POOL_MXBEAN_DOMAIN_TYPE = nullptr;
$MBeanServer* ManagementFactory::platformMBeanServer = nullptr;
$String* ManagementFactory::NOTIF_EMITTER = nullptr;

void ManagementFactory::init$() {
}

$ClassLoadingMXBean* ManagementFactory::getClassLoadingMXBean() {
	$init(ManagementFactory);
	$load($ClassLoadingMXBean);
	return $cast($ClassLoadingMXBean, getPlatformMXBean($ClassLoadingMXBean::class$));
}

$MemoryMXBean* ManagementFactory::getMemoryMXBean() {
	$init(ManagementFactory);
	$load($MemoryMXBean);
	return $cast($MemoryMXBean, getPlatformMXBean($MemoryMXBean::class$));
}

$ThreadMXBean* ManagementFactory::getThreadMXBean() {
	$init(ManagementFactory);
	$load($ThreadMXBean);
	return $cast($ThreadMXBean, getPlatformMXBean($ThreadMXBean::class$));
}

$RuntimeMXBean* ManagementFactory::getRuntimeMXBean() {
	$init(ManagementFactory);
	$load($RuntimeMXBean);
	return $cast($RuntimeMXBean, getPlatformMXBean($RuntimeMXBean::class$));
}

$CompilationMXBean* ManagementFactory::getCompilationMXBean() {
	$init(ManagementFactory);
	$load($CompilationMXBean);
	return $cast($CompilationMXBean, getPlatformMXBean($CompilationMXBean::class$));
}

$OperatingSystemMXBean* ManagementFactory::getOperatingSystemMXBean() {
	$init(ManagementFactory);
	$load($OperatingSystemMXBean);
	return $cast($OperatingSystemMXBean, getPlatformMXBean($OperatingSystemMXBean::class$));
}

$List* ManagementFactory::getMemoryPoolMXBeans() {
	$init(ManagementFactory);
	$load($MemoryPoolMXBean);
	return getPlatformMXBeans($MemoryPoolMXBean::class$);
}

$List* ManagementFactory::getMemoryManagerMXBeans() {
	$init(ManagementFactory);
	$load($MemoryManagerMXBean);
	return getPlatformMXBeans($MemoryManagerMXBean::class$);
}

$List* ManagementFactory::getGarbageCollectorMXBeans() {
	$init(ManagementFactory);
	$load($GarbageCollectorMXBean);
	return getPlatformMXBeans($GarbageCollectorMXBean::class$);
}

$MBeanServer* ManagementFactory::getPlatformMBeanServer() {
	$load(ManagementFactory);
	$synchronized(class$) {
		$init(ManagementFactory);
		$useLocalCurrentObjectStackCache();
		$var($SecurityManager, sm, $System::getSecurityManager());
		if (sm != nullptr) {
			$var($Permission, perm, $new($MBeanServerPermission, "createMBeanServer"_s));
			sm->checkPermission(perm);
		}
		if (ManagementFactory::platformMBeanServer == nullptr) {
			$assignStatic(ManagementFactory::platformMBeanServer, $MBeanServerFactory::createMBeanServer());
			$nc($($nc($($nc($($nc($(platformComponents()))->stream()))->filter(static_cast<$Predicate*>($$new(ManagementFactory$$Lambda$shouldRegister)))))->flatMap(static_cast<$Function*>($$new(ManagementFactory$$Lambda$lambda$getPlatformMBeanServer$0$1)))))->forEach(static_cast<$Consumer*>($$new(ManagementFactory$$Lambda$lambda$getPlatformMBeanServer$1$2)));
		}
		return ManagementFactory::platformMBeanServer;
	}
}

$Object* ManagementFactory::newPlatformMXBeanProxy($MBeanServerConnection* connection, $String* mxbeanName, $Class* mxbeanInterface) {
	$init(ManagementFactory);
	$useLocalCurrentObjectStackCache();
	$beforeCallerSensitive();
	$Class* cls = mxbeanInterface;
	$var($ClassLoader, loader, $cast($ClassLoader, $AccessController::doPrivileged(static_cast<$PrivilegedAction*>($$new(ManagementFactory$$Lambda$lambda$newPlatformMXBeanProxy$2$3, cls)))));
	if (!$VM::isSystemDomainLoader(loader)) {
		$throwNew($IllegalArgumentException, $$str({mxbeanName, " is not a platform MXBean"_s}));
	}
	try {
		$var($ObjectName, objName, $new($ObjectName, mxbeanName));
		$var($String, intfName, $nc(mxbeanInterface)->getName());
		if (!isInstanceOf(connection, objName, intfName)) {
			$throwNew($IllegalArgumentException, $$str({mxbeanName, " is not an instance of "_s, mxbeanInterface}));
		}
		bool emitter = $nc(connection)->isInstanceOf(objName, ManagementFactory::NOTIF_EMITTER);
		return $of($JMX::newMXBeanProxy(connection, objName, mxbeanInterface, emitter));
	} catch ($InstanceNotFoundException& e) {
		$throwNew($IllegalArgumentException, static_cast<$Throwable*>(e));
	} catch ($MalformedObjectNameException& e) {
		$throwNew($IllegalArgumentException, static_cast<$Throwable*>(e));
	}
	$shouldNotReachHere();
}

bool ManagementFactory::isInstanceOf($MBeanServerConnection* connection, $ObjectName* objName, $String* intfName) {
	$init(ManagementFactory);
	if ("java.util.logging.LoggingMXBean"_s->equals(intfName)) {
		$load($PlatformLoggingMXBean);
		if ($nc(connection)->isInstanceOf(objName, $($PlatformLoggingMXBean::class$->getName()))) {
			return true;
		}
	}
	return $nc(connection)->isInstanceOf(objName, intfName);
}

$PlatformManagedObject* ManagementFactory::getPlatformMXBean($Class* mxbeanInterface) {
	$init(ManagementFactory);
	$useLocalCurrentObjectStackCache();
	$var($PlatformMBeanProvider$PlatformComponent, pc, $ManagementFactory$PlatformMBeanFinder::findSingleton(mxbeanInterface));
	$var($List, mbeans, $nc(pc)->getMBeans(mxbeanInterface));
	bool var$0 = !ManagementFactory::$assertionsDisabled;
	if (var$0) {
		bool var$1 = $nc(mbeans)->isEmpty();
		var$0 = !(var$1 || $nc(mbeans)->size() == 1);
	}
	if (var$0) {
		$throwNew($AssertionError);
	}
	return $nc(mbeans)->isEmpty() ? ($PlatformManagedObject*)nullptr : $cast($PlatformManagedObject, $nc(mbeans)->get(0));
}

$List* ManagementFactory::getPlatformMXBeans($Class* mxbeanInterface) {
	$init(ManagementFactory);
	$useLocalCurrentObjectStackCache();
	$var($PlatformMBeanProvider$PlatformComponent, pc, $ManagementFactory$PlatformMBeanFinder::findFirst(mxbeanInterface));
	if (pc == nullptr) {
		$throwNew($IllegalArgumentException, $$str({$($nc(mxbeanInterface)->getName()), " is not a platform management interface"_s}));
	}
	return $cast($List, $nc($($nc($($nc($(platformComponents()))->stream()))->flatMap(static_cast<$Function*>($$new(ManagementFactory$$Lambda$lambda$getPlatformMXBeans$3$4, mxbeanInterface)))))->collect($($Collectors::toList())));
}

$PlatformManagedObject* ManagementFactory::getPlatformMXBean($MBeanServerConnection* connection, $Class* mxbeanInterface) {
	$init(ManagementFactory);
	$useLocalCurrentObjectStackCache();
	$var($PlatformMBeanProvider$PlatformComponent, pc, $ManagementFactory$PlatformMBeanFinder::findSingleton(mxbeanInterface));
	return $cast($PlatformManagedObject, newPlatformMXBeanProxy(connection, $($nc(pc)->getObjectNamePattern()), mxbeanInterface));
}

$List* ManagementFactory::getPlatformMXBeans($MBeanServerConnection* connection, $Class* mxbeanInterface) {
	$init(ManagementFactory);
	$useLocalCurrentObjectStackCache();
	$var($PlatformMBeanProvider$PlatformComponent, pc, $ManagementFactory$PlatformMBeanFinder::findFirst(mxbeanInterface));
	if (pc == nullptr) {
		$throwNew($IllegalArgumentException, $$str({$($nc(mxbeanInterface)->getName()), " is not a platform management interface"_s}));
	}
	$var($Stream, names, $Stream::empty());
	{
		$var($Iterator, i$, $nc($(platformComponents()))->iterator());
		for (; $nc(i$)->hasNext();) {
			$var($PlatformMBeanProvider$PlatformComponent, p, $cast($PlatformMBeanProvider$PlatformComponent, i$->next()));
			{
				$assign(names, $Stream::concat(names, $(getProxyNames(p, connection, mxbeanInterface))));
			}
		}
	}
	$var($Set, objectNames, $cast($Set, $nc(names)->collect($($Collectors::toSet()))));
	if ($nc(objectNames)->isEmpty()) {
		return $Collections::emptyList();
	}
	$var($List, proxies, $new($ArrayList));
	{
		$var($Iterator, i$, $nc(objectNames)->iterator());
		for (; $nc(i$)->hasNext();) {
			$var($String, name, $cast($String, i$->next()));
			{
				proxies->add($cast($PlatformManagedObject, $(newPlatformMXBeanProxy(connection, name, mxbeanInterface))));
			}
		}
	}
	return proxies;
}

$Stream* ManagementFactory::getProxyNames($PlatformMBeanProvider$PlatformComponent* pc, $MBeanServerConnection* conn, $Class* intf) {
	$init(ManagementFactory);
	$useLocalCurrentObjectStackCache();
	if ($nc($($nc(pc)->mbeanInterfaceNames()))->contains($($nc(intf)->getName()))) {
		if (pc->isSingleton()) {
			return $Stream::of($($of(pc->getObjectNamePattern())));
		} else {
			return $nc($($nc($($nc(conn)->queryNames($($Util::newObjectName($(pc->getObjectNamePattern()))), nullptr)))->stream()))->map(static_cast<$Function*>($$new(ManagementFactory$$Lambda$getCanonicalName$5)));
		}
	}
	return $Stream::empty();
}

$Set* ManagementFactory::getPlatformManagementInterfaces() {
	$init(ManagementFactory);
	$useLocalCurrentObjectStackCache();
	$var($Stream, pmos, $nc($($nc($($nc($($nc($(platformComponents()))->stream()))->flatMap(static_cast<$Function*>($$new(ManagementFactory$$Lambda$lambda$getPlatformManagementInterfaces$4$6)))))->filter(static_cast<$Predicate*>($$new(ManagementFactory$$Lambda$lambda$getPlatformManagementInterfaces$5$7)))))->map(static_cast<$Function*>($$new(ManagementFactory$$Lambda$lambda$getPlatformManagementInterfaces$6$8))));
	return $cast($Set, $nc(pmos)->collect($($Collectors::toSet())));
}

void ManagementFactory::addMXBean($MBeanServer* mbs, $String* name, Object$* pmo) {
	$init(ManagementFactory);
	$useLocalCurrentObjectStackCache();
	$beforeCallerSensitive();
	try {
		$var($ObjectName, oname, $ObjectName::getInstance(name));
		$AccessController::doPrivileged(static_cast<$PrivilegedExceptionAction*>($$new(ManagementFactory$$Lambda$lambda$addMXBean$7$9, pmo, mbs, oname)));
	} catch ($MalformedObjectNameException& mone) {
		$throwNew($IllegalArgumentException, static_cast<$Throwable*>(mone));
	} catch ($PrivilegedActionException& e) {
		$throwNew($RuntimeException, $(static_cast<$Throwable*>(e->getException())));
	}
}

$Collection* ManagementFactory::platformComponents() {
	$init(ManagementFactory);
	return $nc($($ManagementFactory$PlatformMBeanFinder::getMap()))->values();
}

$Void* ManagementFactory::lambda$static$8() {
	$init(ManagementFactory);
	$beforeCallerSensitive();
	$System::loadLibrary("management"_s);
	return nullptr;
}

$Void* ManagementFactory::lambda$addMXBean$7(Object$* pmo, $MBeanServer* mbs, $ObjectName* oname) {
	$init(ManagementFactory);
	$var($DynamicMBean, dmbean, nullptr);
	if ($instanceOf($DynamicMBean, pmo)) {
		$load($DynamicMBean);
		$assign(dmbean, $cast($DynamicMBean, $DynamicMBean::class$->cast(pmo)));
	} else if ($instanceOf($NotificationEmitter, pmo)) {
		$assign(dmbean, $new($StandardEmitterMBean, pmo, nullptr, true, $cast($NotificationEmitter, pmo)));
	} else {
		$assign(dmbean, $new($StandardMBean, pmo, nullptr, true));
	}
	$nc(mbs)->registerMBean(dmbean, oname);
	return nullptr;
}

$Class* ManagementFactory::lambda$getPlatformManagementInterfaces$6($Class* clazz) {
	$init(ManagementFactory);
	$load($PlatformManagedObject);
	return $nc(clazz)->asSubclass($PlatformManagedObject::class$);
}

bool ManagementFactory::lambda$getPlatformManagementInterfaces$5($Class* clazz) {
	$init(ManagementFactory);
	$load($PlatformManagedObject);
	return $PlatformManagedObject::class$->isAssignableFrom(clazz);
}

$Stream* ManagementFactory::lambda$getPlatformManagementInterfaces$4($PlatformMBeanProvider$PlatformComponent* pc) {
	$init(ManagementFactory);
	return $nc($($nc(pc)->mbeanInterfaces()))->stream();
}

$Stream* ManagementFactory::lambda$getPlatformMXBeans$3($Class* mxbeanInterface, $PlatformMBeanProvider$PlatformComponent* p) {
	$init(ManagementFactory);
	return $nc($($nc(p)->getMBeans(mxbeanInterface)))->stream();
}

$ClassLoader* ManagementFactory::lambda$newPlatformMXBeanProxy$2($Class* cls) {
	$init(ManagementFactory);
	$beforeCallerSensitive();
	return $nc(cls)->getClassLoader();
}

void ManagementFactory::lambda$getPlatformMBeanServer$1($Map$Entry* entry) {
	$init(ManagementFactory);
	$useLocalCurrentObjectStackCache();
	$var($MBeanServer, var$0, ManagementFactory::platformMBeanServer);
	$var($String, var$1, $cast($String, $nc(entry)->getKey()));
	addMXBean(var$0, var$1, $(entry->getValue()));
}

$Stream* ManagementFactory::lambda$getPlatformMBeanServer$0($PlatformMBeanProvider$PlatformComponent* pc) {
	$init(ManagementFactory);
	$useLocalCurrentObjectStackCache();
	return $nc($($nc($($nc(pc)->nameToMBeanMap()))->entrySet()))->stream();
}

void clinit$ManagementFactory($Class* class$) {
	$assignStatic(ManagementFactory::CLASS_LOADING_MXBEAN_NAME, "java.lang:type=ClassLoading"_s);
	$assignStatic(ManagementFactory::COMPILATION_MXBEAN_NAME, "java.lang:type=Compilation"_s);
	$assignStatic(ManagementFactory::MEMORY_MXBEAN_NAME, "java.lang:type=Memory"_s);
	$assignStatic(ManagementFactory::OPERATING_SYSTEM_MXBEAN_NAME, "java.lang:type=OperatingSystem"_s);
	$assignStatic(ManagementFactory::RUNTIME_MXBEAN_NAME, "java.lang:type=Runtime"_s);
	$assignStatic(ManagementFactory::THREAD_MXBEAN_NAME, "java.lang:type=Threading"_s);
	$assignStatic(ManagementFactory::GARBAGE_COLLECTOR_MXBEAN_DOMAIN_TYPE, "java.lang:type=GarbageCollector"_s);
	$assignStatic(ManagementFactory::MEMORY_MANAGER_MXBEAN_DOMAIN_TYPE, "java.lang:type=MemoryManager"_s);
	$assignStatic(ManagementFactory::MEMORY_POOL_MXBEAN_DOMAIN_TYPE, "java.lang:type=MemoryPool"_s);
	$assignStatic(ManagementFactory::NOTIF_EMITTER, "javax.management.NotificationEmitter"_s);
	$beforeCallerSensitive();
	ManagementFactory::$assertionsDisabled = !ManagementFactory::class$->desiredAssertionStatus();
	{
		$AccessController::doPrivileged(static_cast<$PrivilegedAction*>($$new(ManagementFactory$$Lambda$lambda$static$8$10)));
	}
}

ManagementFactory::ManagementFactory() {
}

$Class* ManagementFactory::load$($String* name, bool initialize) {
	if (name != nullptr) {
		if (name->equals(ManagementFactory$$Lambda$shouldRegister::classInfo$.name)) {
			return ManagementFactory$$Lambda$shouldRegister::load$(name, initialize);
		}
		if (name->equals(ManagementFactory$$Lambda$lambda$getPlatformMBeanServer$0$1::classInfo$.name)) {
			return ManagementFactory$$Lambda$lambda$getPlatformMBeanServer$0$1::load$(name, initialize);
		}
		if (name->equals(ManagementFactory$$Lambda$lambda$getPlatformMBeanServer$1$2::classInfo$.name)) {
			return ManagementFactory$$Lambda$lambda$getPlatformMBeanServer$1$2::load$(name, initialize);
		}
		if (name->equals(ManagementFactory$$Lambda$lambda$newPlatformMXBeanProxy$2$3::classInfo$.name)) {
			return ManagementFactory$$Lambda$lambda$newPlatformMXBeanProxy$2$3::load$(name, initialize);
		}
		if (name->equals(ManagementFactory$$Lambda$lambda$getPlatformMXBeans$3$4::classInfo$.name)) {
			return ManagementFactory$$Lambda$lambda$getPlatformMXBeans$3$4::load$(name, initialize);
		}
		if (name->equals(ManagementFactory$$Lambda$getCanonicalName$5::classInfo$.name)) {
			return ManagementFactory$$Lambda$getCanonicalName$5::load$(name, initialize);
		}
		if (name->equals(ManagementFactory$$Lambda$lambda$getPlatformManagementInterfaces$4$6::classInfo$.name)) {
			return ManagementFactory$$Lambda$lambda$getPlatformManagementInterfaces$4$6::load$(name, initialize);
		}
		if (name->equals(ManagementFactory$$Lambda$lambda$getPlatformManagementInterfaces$5$7::classInfo$.name)) {
			return ManagementFactory$$Lambda$lambda$getPlatformManagementInterfaces$5$7::load$(name, initialize);
		}
		if (name->equals(ManagementFactory$$Lambda$lambda$getPlatformManagementInterfaces$6$8::classInfo$.name)) {
			return ManagementFactory$$Lambda$lambda$getPlatformManagementInterfaces$6$8::load$(name, initialize);
		}
		if (name->equals(ManagementFactory$$Lambda$lambda$addMXBean$7$9::classInfo$.name)) {
			return ManagementFactory$$Lambda$lambda$addMXBean$7$9::load$(name, initialize);
		}
		if (name->equals(ManagementFactory$$Lambda$lambda$static$8$10::classInfo$.name)) {
			return ManagementFactory$$Lambda$lambda$static$8$10::load$(name, initialize);
		}
	}
	$loadClass(ManagementFactory, name, initialize, &_ManagementFactory_ClassInfo_, clinit$ManagementFactory, allocate$ManagementFactory);
	return class$;
}

$Class* ManagementFactory::class$ = nullptr;

		} // management
	} // lang
} // java
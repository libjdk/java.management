#include <java/lang/management/DefaultPlatformMBeanProvider$5.h>

#include <java/io/Serializable.h>
#include <java/lang/CharSequence.h>
#include <java/lang/invoke/CallSite.h>
#include <java/lang/invoke/LambdaMetafactory.h>
#include <java/lang/invoke/MethodHandle.h>
#include <java/lang/invoke/MethodHandles$Lookup.h>
#include <java/lang/invoke/MethodType.h>
#include <java/lang/management/DefaultPlatformMBeanProvider.h>
#include <java/lang/management/ManagementFactory.h>
#include <java/lang/management/MemoryManagerMXBean.h>
#include <java/util/Collections.h>
#include <java/util/List.h>
#include <java/util/Map.h>
#include <java/util/Set.h>
#include <java/util/function/Function.h>
#include <java/util/function/Predicate.h>
#include <java/util/stream/Collector.h>
#include <java/util/stream/Collectors.h>
#include <java/util/stream/Stream.h>
#include <javax/management/ObjectName.h>
#include <sun/management/ManagementFactoryHelper.h>
#include <jcpp.h>

#undef MEMORY_MANAGER_MXBEAN_DOMAIN_TYPE

using $Serializable = ::java::io::Serializable;
using $Boolean = ::java::lang::Boolean;
using $CharSequence = ::java::lang::CharSequence;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $CallSite = ::java::lang::invoke::CallSite;
using $LambdaMetafactory = ::java::lang::invoke::LambdaMetafactory;
using $MethodHandle = ::java::lang::invoke::MethodHandle;
using $MethodHandles$Lookup = ::java::lang::invoke::MethodHandles$Lookup;
using $MethodType = ::java::lang::invoke::MethodType;
using $DefaultPlatformMBeanProvider = ::java::lang::management::DefaultPlatformMBeanProvider;
using $ManagementFactory = ::java::lang::management::ManagementFactory;
using $MemoryManagerMXBean = ::java::lang::management::MemoryManagerMXBean;
using $PlatformManagedObject = ::java::lang::management::PlatformManagedObject;
using $Collection = ::java::util::Collection;
using $Collections = ::java::util::Collections;
using $List = ::java::util::List;
using $Map = ::java::util::Map;
using $Set = ::java::util::Set;
using $Function = ::java::util::function::Function;
using $Predicate = ::java::util::function::Predicate;
using $Collector = ::java::util::stream::Collector;
using $Collectors = ::java::util::stream::Collectors;
using $Stream = ::java::util::stream::Stream;
using $ObjectName = ::javax::management::ObjectName;
using $ManagementFactoryHelper = ::sun::management::ManagementFactoryHelper;
using $PlatformMBeanProvider$PlatformComponent = ::sun::management::spi::PlatformMBeanProvider$PlatformComponent;

namespace java {
	namespace lang {
		namespace management {

class DefaultPlatformMBeanProvider$5$$Lambda$isMemoryManager : public $Predicate {
	$class(DefaultPlatformMBeanProvider$5$$Lambda$isMemoryManager, $NO_CLASS_INIT, $Predicate)
public:
	void init$(DefaultPlatformMBeanProvider$5* inst) {
		$set(this, inst$, inst);
	}
	virtual bool test(Object$* mbean) override {
		 return $nc(inst$)->isMemoryManager($cast($MemoryManagerMXBean, mbean));
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<DefaultPlatformMBeanProvider$5$$Lambda$isMemoryManager>());
	}
	DefaultPlatformMBeanProvider$5* inst$ = nullptr;
	static $FieldInfo fieldInfos[2];
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$FieldInfo DefaultPlatformMBeanProvider$5$$Lambda$isMemoryManager::fieldInfos[2] = {
	{"inst$", "Ljava/lang/Object;", nullptr, $PUBLIC, $field(DefaultPlatformMBeanProvider$5$$Lambda$isMemoryManager, inst$)},
	{}
};
$MethodInfo DefaultPlatformMBeanProvider$5$$Lambda$isMemoryManager::methodInfos[3] = {
	{"<init>", "(Ljava/lang/management/DefaultPlatformMBeanProvider$5;)V", nullptr, $PUBLIC, $method(static_cast<void(DefaultPlatformMBeanProvider$5$$Lambda$isMemoryManager::*)(DefaultPlatformMBeanProvider$5*)>(&DefaultPlatformMBeanProvider$5$$Lambda$isMemoryManager::init$))},
	{"test", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{}
};
$ClassInfo DefaultPlatformMBeanProvider$5$$Lambda$isMemoryManager::classInfo$ = {
	$PUBLIC | $FINAL,
	"java.lang.management.DefaultPlatformMBeanProvider$5$$Lambda$isMemoryManager",
	"java.lang.Object",
	"java.util.function.Predicate",
	fieldInfos,
	methodInfos
};
$Class* DefaultPlatformMBeanProvider$5$$Lambda$isMemoryManager::load$($String* name, bool initialize) {
	$loadClass(DefaultPlatformMBeanProvider$5$$Lambda$isMemoryManager, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* DefaultPlatformMBeanProvider$5$$Lambda$isMemoryManager::class$ = nullptr;

class DefaultPlatformMBeanProvider$5$$Lambda$lambda$nameToMBeanMap$0$1 : public $Function {
	$class(DefaultPlatformMBeanProvider$5$$Lambda$lambda$nameToMBeanMap$0$1, $NO_CLASS_INIT, $Function)
public:
	void init$() {
	}
	virtual $Object* apply(Object$* pmo) override {
		 return $of(DefaultPlatformMBeanProvider$5::lambda$nameToMBeanMap$0($cast($MemoryManagerMXBean, pmo)));
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<DefaultPlatformMBeanProvider$5$$Lambda$lambda$nameToMBeanMap$0$1>());
	}
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$MethodInfo DefaultPlatformMBeanProvider$5$$Lambda$lambda$nameToMBeanMap$0$1::methodInfos[3] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(DefaultPlatformMBeanProvider$5$$Lambda$lambda$nameToMBeanMap$0$1::*)()>(&DefaultPlatformMBeanProvider$5$$Lambda$lambda$nameToMBeanMap$0$1::init$))},
	{"apply", "(Ljava/lang/Object;)Ljava/lang/Object;", nullptr, $PUBLIC},
	{}
};
$ClassInfo DefaultPlatformMBeanProvider$5$$Lambda$lambda$nameToMBeanMap$0$1::classInfo$ = {
	$PUBLIC | $FINAL,
	"java.lang.management.DefaultPlatformMBeanProvider$5$$Lambda$lambda$nameToMBeanMap$0$1",
	"java.lang.Object",
	"java.util.function.Function",
	nullptr,
	methodInfos
};
$Class* DefaultPlatformMBeanProvider$5$$Lambda$lambda$nameToMBeanMap$0$1::load$($String* name, bool initialize) {
	$loadClass(DefaultPlatformMBeanProvider$5$$Lambda$lambda$nameToMBeanMap$0$1, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* DefaultPlatformMBeanProvider$5$$Lambda$lambda$nameToMBeanMap$0$1::class$ = nullptr;

$FieldInfo _DefaultPlatformMBeanProvider$5_FieldInfo_[] = {
	{"this$0", "Ljava/lang/management/DefaultPlatformMBeanProvider;", nullptr, $FINAL | $SYNTHETIC, $field(DefaultPlatformMBeanProvider$5, this$0)},
	{"memoryManagerMXBeanInterfaceNames", "Ljava/util/Set;", "Ljava/util/Set<Ljava/lang/String;>;", $PRIVATE | $FINAL, $field(DefaultPlatformMBeanProvider$5, memoryManagerMXBeanInterfaceNames)},
	{}
};

$MethodInfo _DefaultPlatformMBeanProvider$5_MethodInfo_[] = {
	{"<init>", "(Ljava/lang/management/DefaultPlatformMBeanProvider;)V", nullptr, 0, $method(static_cast<void(DefaultPlatformMBeanProvider$5::*)($DefaultPlatformMBeanProvider*)>(&DefaultPlatformMBeanProvider$5::init$))},
	{"getObjectNamePattern", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"isMemoryManager", "(Ljava/lang/management/MemoryManagerMXBean;)Z", nullptr, $PRIVATE, $method(static_cast<bool(DefaultPlatformMBeanProvider$5::*)($MemoryManagerMXBean*)>(&DefaultPlatformMBeanProvider$5::isMemoryManager))},
	{"isSingleton", "()Z", nullptr, $PUBLIC},
	{"lambda$nameToMBeanMap$0", "(Ljava/lang/management/MemoryManagerMXBean;)Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $method(static_cast<$String*(*)($MemoryManagerMXBean*)>(&DefaultPlatformMBeanProvider$5::lambda$nameToMBeanMap$0))},
	{"mbeanInterfaceNames", "()Ljava/util/Set;", "()Ljava/util/Set<Ljava/lang/String;>;", $PUBLIC},
	{"mbeanInterfaces", "()Ljava/util/Set;", "()Ljava/util/Set<Ljava/lang/Class<+Ljava/lang/management/MemoryManagerMXBean;>;>;", $PUBLIC},
	{"nameToMBeanMap", "()Ljava/util/Map;", "()Ljava/util/Map<Ljava/lang/String;Ljava/lang/management/MemoryManagerMXBean;>;", $PUBLIC},
	{}
};

$EnclosingMethodInfo _DefaultPlatformMBeanProvider$5_EnclosingMethodInfo_ = {
	"java.lang.management.DefaultPlatformMBeanProvider",
	"init",
	"()Ljava/util/List;"
};

$InnerClassInfo _DefaultPlatformMBeanProvider$5_InnerClassesInfo_[] = {
	{"java.lang.management.DefaultPlatformMBeanProvider$5", nullptr, nullptr, 0},
	{"sun.management.spi.PlatformMBeanProvider$PlatformComponent", "sun.management.spi.PlatformMBeanProvider", "PlatformComponent", $PUBLIC | $STATIC | $INTERFACE | $ABSTRACT},
	{}
};

$ClassInfo _DefaultPlatformMBeanProvider$5_ClassInfo_ = {
	$ACC_SUPER,
	"java.lang.management.DefaultPlatformMBeanProvider$5",
	"java.lang.Object",
	"sun.management.spi.PlatformMBeanProvider$PlatformComponent",
	_DefaultPlatformMBeanProvider$5_FieldInfo_,
	_DefaultPlatformMBeanProvider$5_MethodInfo_,
	"Ljava/lang/Object;Lsun/management/spi/PlatformMBeanProvider$PlatformComponent<Ljava/lang/management/MemoryManagerMXBean;>;",
	&_DefaultPlatformMBeanProvider$5_EnclosingMethodInfo_,
	_DefaultPlatformMBeanProvider$5_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"java.lang.management.DefaultPlatformMBeanProvider"
};

$Object* allocate$DefaultPlatformMBeanProvider$5($Class* clazz) {
	return $of($alloc(DefaultPlatformMBeanProvider$5));
}

void DefaultPlatformMBeanProvider$5::init$($DefaultPlatformMBeanProvider* this$0) {
	$set(this, this$0, this$0);
	$set(this, memoryManagerMXBeanInterfaceNames, $Collections::singleton("java.lang.management.MemoryManagerMXBean"_s));
}

$Set* DefaultPlatformMBeanProvider$5::mbeanInterfaces() {
	$load($MemoryManagerMXBean);
	return $Collections::singleton($MemoryManagerMXBean::class$);
}

$Set* DefaultPlatformMBeanProvider$5::mbeanInterfaceNames() {
	return this->memoryManagerMXBeanInterfaceNames;
}

$String* DefaultPlatformMBeanProvider$5::getObjectNamePattern() {
	$init($ManagementFactory);
	return $str({$ManagementFactory::MEMORY_MANAGER_MXBEAN_DOMAIN_TYPE, ",name=*"_s});
}

bool DefaultPlatformMBeanProvider$5::isSingleton() {
	return false;
}

$Map* DefaultPlatformMBeanProvider$5::nameToMBeanMap() {
	$useLocalCurrentObjectStackCache();
	$var($List, list, $ManagementFactoryHelper::getMemoryManagerMXBeans());
	$var($Function, var$0, static_cast<$Function*>($new(DefaultPlatformMBeanProvider$5$$Lambda$lambda$nameToMBeanMap$0$1)));
	return $cast($Map, $nc($($nc($($nc(list)->stream()))->filter(static_cast<$Predicate*>($$new(DefaultPlatformMBeanProvider$5$$Lambda$isMemoryManager, this)))))->collect($($Collectors::toMap(var$0, $($Function::identity())))));
}

bool DefaultPlatformMBeanProvider$5::isMemoryManager($MemoryManagerMXBean* mbean) {
	$useLocalCurrentObjectStackCache();
	$var($ObjectName, name, $nc(mbean)->getObjectName());
	$init($ManagementFactory);
	bool var$0 = $nc($ManagementFactory::MEMORY_MANAGER_MXBEAN_DOMAIN_TYPE)->startsWith($($nc(name)->getDomain()));
	return var$0 && $nc($ManagementFactory::MEMORY_MANAGER_MXBEAN_DOMAIN_TYPE)->contains($$str({"type="_s, $($nc(name)->getKeyProperty("type"_s))}));
}

$String* DefaultPlatformMBeanProvider$5::lambda$nameToMBeanMap$0($MemoryManagerMXBean* pmo) {
	$init(DefaultPlatformMBeanProvider$5);
	return $nc($($nc(pmo)->getObjectName()))->getCanonicalName();
}

DefaultPlatformMBeanProvider$5::DefaultPlatformMBeanProvider$5() {
}

$Class* DefaultPlatformMBeanProvider$5::load$($String* name, bool initialize) {
	if (name != nullptr) {
		if (name->equals(DefaultPlatformMBeanProvider$5$$Lambda$isMemoryManager::classInfo$.name)) {
			return DefaultPlatformMBeanProvider$5$$Lambda$isMemoryManager::load$(name, initialize);
		}
		if (name->equals(DefaultPlatformMBeanProvider$5$$Lambda$lambda$nameToMBeanMap$0$1::classInfo$.name)) {
			return DefaultPlatformMBeanProvider$5$$Lambda$lambda$nameToMBeanMap$0$1::load$(name, initialize);
		}
	}
	$loadClass(DefaultPlatformMBeanProvider$5, name, initialize, &_DefaultPlatformMBeanProvider$5_ClassInfo_, allocate$DefaultPlatformMBeanProvider$5);
	return class$;
}

$Class* DefaultPlatformMBeanProvider$5::class$ = nullptr;

		} // management
	} // lang
} // java
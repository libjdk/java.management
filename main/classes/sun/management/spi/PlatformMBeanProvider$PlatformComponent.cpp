#include <sun/management/spi/PlatformMBeanProvider$PlatformComponent.h>

#include <java/io/Serializable.h>
#include <java/lang/invoke/CallSite.h>
#include <java/lang/invoke/LambdaMetafactory.h>
#include <java/lang/invoke/MethodHandle.h>
#include <java/lang/invoke/MethodHandles$Lookup.h>
#include <java/lang/invoke/MethodType.h>
#include <java/util/Collection.h>
#include <java/util/Collections.h>
#include <java/util/List.h>
#include <java/util/Map.h>
#include <java/util/Set.h>
#include <java/util/function/Function.h>
#include <java/util/function/Predicate.h>
#include <java/util/stream/Collector.h>
#include <java/util/stream/Collectors.h>
#include <java/util/stream/Stream.h>
#include <sun/management/spi/PlatformMBeanProvider.h>
#include <jcpp.h>

using $Serializable = ::java::io::Serializable;
using $Boolean = ::java::lang::Boolean;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $CallSite = ::java::lang::invoke::CallSite;
using $LambdaMetafactory = ::java::lang::invoke::LambdaMetafactory;
using $MethodHandle = ::java::lang::invoke::MethodHandle;
using $MethodHandles$Lookup = ::java::lang::invoke::MethodHandles$Lookup;
using $MethodType = ::java::lang::invoke::MethodType;
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
using $PlatformMBeanProvider = ::sun::management::spi::PlatformMBeanProvider;

namespace sun {
	namespace management {
		namespace spi {

class PlatformMBeanProvider$PlatformComponent$$Lambda$isInstance : public $Predicate {
	$class(PlatformMBeanProvider$PlatformComponent$$Lambda$isInstance, $NO_CLASS_INIT, $Predicate)
public:
	void init$($Class* inst) {
		$set(this, inst$, inst);
	}
	virtual bool test(Object$* arg0) override {
		 return $nc(inst$)->isInstance(arg0);
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<PlatformMBeanProvider$PlatformComponent$$Lambda$isInstance>());
	}
	$Class* inst$ = nullptr;
	static $FieldInfo fieldInfos[2];
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$FieldInfo PlatformMBeanProvider$PlatformComponent$$Lambda$isInstance::fieldInfos[2] = {
	{"inst$", "Ljava/lang/Object;", nullptr, $PUBLIC, $field(PlatformMBeanProvider$PlatformComponent$$Lambda$isInstance, inst$)},
	{}
};
$MethodInfo PlatformMBeanProvider$PlatformComponent$$Lambda$isInstance::methodInfos[3] = {
	{"<init>", "(Ljava/lang/Class;)V", nullptr, $PUBLIC, $method(static_cast<void(PlatformMBeanProvider$PlatformComponent$$Lambda$isInstance::*)($Class*)>(&PlatformMBeanProvider$PlatformComponent$$Lambda$isInstance::init$))},
	{"test", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{}
};
$ClassInfo PlatformMBeanProvider$PlatformComponent$$Lambda$isInstance::classInfo$ = {
	$PUBLIC | $FINAL,
	"sun.management.spi.PlatformMBeanProvider$PlatformComponent$$Lambda$isInstance",
	"java.lang.Object",
	"java.util.function.Predicate",
	fieldInfos,
	methodInfos
};
$Class* PlatformMBeanProvider$PlatformComponent$$Lambda$isInstance::load$($String* name, bool initialize) {
	$loadClass(PlatformMBeanProvider$PlatformComponent$$Lambda$isInstance, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* PlatformMBeanProvider$PlatformComponent$$Lambda$isInstance::class$ = nullptr;

class PlatformMBeanProvider$PlatformComponent$$Lambda$cast$1 : public $Function {
	$class(PlatformMBeanProvider$PlatformComponent$$Lambda$cast$1, $NO_CLASS_INIT, $Function)
public:
	void init$($Class* inst) {
		$set(this, inst$, inst);
	}
	virtual $Object* apply(Object$* arg0) override {
		 return $nc(inst$)->cast(arg0);
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<PlatformMBeanProvider$PlatformComponent$$Lambda$cast$1>());
	}
	$Class* inst$ = nullptr;
	static $FieldInfo fieldInfos[2];
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$FieldInfo PlatformMBeanProvider$PlatformComponent$$Lambda$cast$1::fieldInfos[2] = {
	{"inst$", "Ljava/lang/Object;", nullptr, $PUBLIC, $field(PlatformMBeanProvider$PlatformComponent$$Lambda$cast$1, inst$)},
	{}
};
$MethodInfo PlatformMBeanProvider$PlatformComponent$$Lambda$cast$1::methodInfos[3] = {
	{"<init>", "(Ljava/lang/Class;)V", nullptr, $PUBLIC, $method(static_cast<void(PlatformMBeanProvider$PlatformComponent$$Lambda$cast$1::*)($Class*)>(&PlatformMBeanProvider$PlatformComponent$$Lambda$cast$1::init$))},
	{"apply", "(Ljava/lang/Object;)Ljava/lang/Object;", nullptr, $PUBLIC},
	{}
};
$ClassInfo PlatformMBeanProvider$PlatformComponent$$Lambda$cast$1::classInfo$ = {
	$PUBLIC | $FINAL,
	"sun.management.spi.PlatformMBeanProvider$PlatformComponent$$Lambda$cast$1",
	"java.lang.Object",
	"java.util.function.Function",
	fieldInfos,
	methodInfos
};
$Class* PlatformMBeanProvider$PlatformComponent$$Lambda$cast$1::load$($String* name, bool initialize) {
	$loadClass(PlatformMBeanProvider$PlatformComponent$$Lambda$cast$1, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* PlatformMBeanProvider$PlatformComponent$$Lambda$cast$1::class$ = nullptr;

$MethodInfo _PlatformMBeanProvider$PlatformComponent_MethodInfo_[] = {
	{"getMBeans", "(Ljava/lang/Class;)Ljava/util/List;", "<I:Ljava/lang/Object;>(Ljava/lang/Class<TI;>;)Ljava/util/List<+TI;>;", $PUBLIC},
	{"getObjectNamePattern", "()Ljava/lang/String;", nullptr, $PUBLIC | $ABSTRACT},
	{"isSingleton", "()Z", nullptr, $PUBLIC},
	{"mbeanInterfaceNames", "()Ljava/util/Set;", "()Ljava/util/Set<Ljava/lang/String;>;", $PUBLIC | $ABSTRACT},
	{"mbeanInterfaces", "()Ljava/util/Set;", "()Ljava/util/Set<Ljava/lang/Class<+TT;>;>;", $PUBLIC | $ABSTRACT},
	{"nameToMBeanMap", "()Ljava/util/Map;", "()Ljava/util/Map<Ljava/lang/String;TT;>;", $PUBLIC | $ABSTRACT},
	{"shouldRegister", "()Z", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _PlatformMBeanProvider$PlatformComponent_InnerClassesInfo_[] = {
	{"sun.management.spi.PlatformMBeanProvider$PlatformComponent", "sun.management.spi.PlatformMBeanProvider", "PlatformComponent", $PUBLIC | $STATIC | $INTERFACE | $ABSTRACT},
	{}
};

$ClassInfo _PlatformMBeanProvider$PlatformComponent_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT,
	"sun.management.spi.PlatformMBeanProvider$PlatformComponent",
	nullptr,
	nullptr,
	nullptr,
	_PlatformMBeanProvider$PlatformComponent_MethodInfo_,
	"<T:Ljava/lang/Object;>Ljava/lang/Object;",
	nullptr,
	_PlatformMBeanProvider$PlatformComponent_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.management.spi.PlatformMBeanProvider"
};

$Object* allocate$PlatformMBeanProvider$PlatformComponent($Class* clazz) {
	return $of($alloc(PlatformMBeanProvider$PlatformComponent));
}

bool PlatformMBeanProvider$PlatformComponent::isSingleton() {
	return true;
}

bool PlatformMBeanProvider$PlatformComponent::shouldRegister() {
	return true;
}

$List* PlatformMBeanProvider$PlatformComponent::getMBeans($Class* mbeanIntf) {
	$useLocalCurrentObjectStackCache();
	$var($List, list, nullptr);
	if (!$nc($(mbeanInterfaceNames()))->contains($($nc(mbeanIntf)->getName()))) {
		$assign(list, $Collections::emptyList());
	} else {
		$assign(list, $cast($List, $nc($($nc($($nc($($nc($($nc($(nameToMBeanMap()))->values()))->stream()))->filter(static_cast<$Predicate*>($$new(PlatformMBeanProvider$PlatformComponent$$Lambda$isInstance, static_cast<$Class*>($nc(mbeanIntf)))))))->map(static_cast<$Function*>($$new(PlatformMBeanProvider$PlatformComponent$$Lambda$cast$1, static_cast<$Class*>($nc(mbeanIntf)))))))->collect($($Collectors::toList()))));
	}
	return list;
}

$Class* PlatformMBeanProvider$PlatformComponent::load$($String* name, bool initialize) {
	if (name != nullptr) {
		if (name->equals(PlatformMBeanProvider$PlatformComponent$$Lambda$isInstance::classInfo$.name)) {
			return PlatformMBeanProvider$PlatformComponent$$Lambda$isInstance::load$(name, initialize);
		}
		if (name->equals(PlatformMBeanProvider$PlatformComponent$$Lambda$cast$1::classInfo$.name)) {
			return PlatformMBeanProvider$PlatformComponent$$Lambda$cast$1::load$(name, initialize);
		}
	}
	$loadClass(PlatformMBeanProvider$PlatformComponent, name, initialize, &_PlatformMBeanProvider$PlatformComponent_ClassInfo_, allocate$PlatformMBeanProvider$PlatformComponent);
	return class$;
}

$Class* PlatformMBeanProvider$PlatformComponent::class$ = nullptr;

		} // spi
	} // management
} // sun
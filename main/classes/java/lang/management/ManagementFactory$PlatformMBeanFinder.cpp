#include <java/lang/management/ManagementFactory$PlatformMBeanFinder.h>

#include <java/io/FilePermission.h>
#include <java/io/Serializable.h>
#include <java/lang/InternalError.h>
#include <java/lang/RuntimePermission.h>
#include <java/lang/invoke/CallSite.h>
#include <java/lang/invoke/LambdaMetafactory.h>
#include <java/lang/invoke/MethodHandle.h>
#include <java/lang/invoke/MethodHandles$Lookup.h>
#include <java/lang/invoke/MethodType.h>
#include <java/lang/management/ManagementFactory$PlatformMBeanFinder$1.h>
#include <java/lang/management/ManagementFactory.h>
#include <java/security/AccessControlContext.h>
#include <java/security/AccessController.h>
#include <java/security/BasicPermission.h>
#include <java/security/Permission.h>
#include <java/security/PrivilegedAction.h>
#include <java/util/AbstractMap.h>
#include <java/util/Collection.h>
#include <java/util/HashMap.h>
#include <java/util/HashSet.h>
#include <java/util/Iterator.h>
#include <java/util/List.h>
#include <java/util/Map.h>
#include <java/util/Optional.h>
#include <java/util/Set.h>
#include <java/util/function/BinaryOperator.h>
#include <java/util/function/Predicate.h>
#include <java/util/stream/Stream.h>
#include <sun/management/spi/PlatformMBeanProvider$PlatformComponent.h>
#include <sun/management/spi/PlatformMBeanProvider.h>
#include <jcpp.h>

using $PermissionArray = $Array<::java::security::Permission>;
using $FilePermission = ::java::io::FilePermission;
using $Serializable = ::java::io::Serializable;
using $Boolean = ::java::lang::Boolean;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $IllegalArgumentException = ::java::lang::IllegalArgumentException;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $InternalError = ::java::lang::InternalError;
using $MethodInfo = ::java::lang::MethodInfo;
using $RuntimePermission = ::java::lang::RuntimePermission;
using $CallSite = ::java::lang::invoke::CallSite;
using $LambdaMetafactory = ::java::lang::invoke::LambdaMetafactory;
using $MethodHandle = ::java::lang::invoke::MethodHandle;
using $MethodHandles$Lookup = ::java::lang::invoke::MethodHandles$Lookup;
using $MethodType = ::java::lang::invoke::MethodType;
using $ManagementFactory = ::java::lang::management::ManagementFactory;
using $ManagementFactory$PlatformMBeanFinder$1 = ::java::lang::management::ManagementFactory$PlatformMBeanFinder$1;
using $AccessControlContext = ::java::security::AccessControlContext;
using $AccessController = ::java::security::AccessController;
using $BasicPermission = ::java::security::BasicPermission;
using $Permission = ::java::security::Permission;
using $PrivilegedAction = ::java::security::PrivilegedAction;
using $AbstractMap = ::java::util::AbstractMap;
using $Collection = ::java::util::Collection;
using $HashMap = ::java::util::HashMap;
using $HashSet = ::java::util::HashSet;
using $Iterator = ::java::util::Iterator;
using $List = ::java::util::List;
using $Map = ::java::util::Map;
using $Optional = ::java::util::Optional;
using $Set = ::java::util::Set;
using $BinaryOperator = ::java::util::function::BinaryOperator;
using $Predicate = ::java::util::function::Predicate;
using $Stream = ::java::util::stream::Stream;
using $PlatformMBeanProvider = ::sun::management::spi::PlatformMBeanProvider;
using $PlatformMBeanProvider$PlatformComponent = ::sun::management::spi::PlatformMBeanProvider$PlatformComponent;

namespace java {
	namespace lang {
		namespace management {

class ManagementFactory$PlatformMBeanFinder$$Lambda$lambda$findFirst$0 : public $Predicate {
	$class(ManagementFactory$PlatformMBeanFinder$$Lambda$lambda$findFirst$0, $NO_CLASS_INIT, $Predicate)
public:
	void init$($String* name) {
		$set(this, name, name);
	}
	virtual bool test(Object$* pc) override {
		 return ManagementFactory$PlatformMBeanFinder::lambda$findFirst$0(name, $cast($PlatformMBeanProvider$PlatformComponent, pc));
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<ManagementFactory$PlatformMBeanFinder$$Lambda$lambda$findFirst$0>());
	}
	$String* name = nullptr;
	static $FieldInfo fieldInfos[2];
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$FieldInfo ManagementFactory$PlatformMBeanFinder$$Lambda$lambda$findFirst$0::fieldInfos[2] = {
	{"name", "Ljava/lang/String;", nullptr, $PUBLIC, $field(ManagementFactory$PlatformMBeanFinder$$Lambda$lambda$findFirst$0, name)},
	{}
};
$MethodInfo ManagementFactory$PlatformMBeanFinder$$Lambda$lambda$findFirst$0::methodInfos[3] = {
	{"<init>", "(Ljava/lang/String;)V", nullptr, $PUBLIC, $method(static_cast<void(ManagementFactory$PlatformMBeanFinder$$Lambda$lambda$findFirst$0::*)($String*)>(&ManagementFactory$PlatformMBeanFinder$$Lambda$lambda$findFirst$0::init$))},
	{"test", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{}
};
$ClassInfo ManagementFactory$PlatformMBeanFinder$$Lambda$lambda$findFirst$0::classInfo$ = {
	$PUBLIC | $FINAL,
	"java.lang.management.ManagementFactory$PlatformMBeanFinder$$Lambda$lambda$findFirst$0",
	"java.lang.Object",
	"java.util.function.Predicate",
	fieldInfos,
	methodInfos
};
$Class* ManagementFactory$PlatformMBeanFinder$$Lambda$lambda$findFirst$0::load$($String* name, bool initialize) {
	$loadClass(ManagementFactory$PlatformMBeanFinder$$Lambda$lambda$findFirst$0, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* ManagementFactory$PlatformMBeanFinder$$Lambda$lambda$findFirst$0::class$ = nullptr;

class ManagementFactory$PlatformMBeanFinder$$Lambda$lambda$findSingleton$2$1 : public $BinaryOperator {
	$class(ManagementFactory$PlatformMBeanFinder$$Lambda$lambda$findSingleton$2$1, $NO_CLASS_INIT, $BinaryOperator)
public:
	void init$($Class* mbeanIntf) {
		this->mbeanIntf = mbeanIntf;
	}
	virtual $Object* apply(Object$* p1, Object$* p2) override {
		 return $of(ManagementFactory$PlatformMBeanFinder::lambda$findSingleton$2(mbeanIntf, $cast($PlatformMBeanProvider$PlatformComponent, p1), $cast($PlatformMBeanProvider$PlatformComponent, p2)));
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<ManagementFactory$PlatformMBeanFinder$$Lambda$lambda$findSingleton$2$1>());
	}
	$Class* mbeanIntf = nullptr;
	static $FieldInfo fieldInfos[2];
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$FieldInfo ManagementFactory$PlatformMBeanFinder$$Lambda$lambda$findSingleton$2$1::fieldInfos[2] = {
	{"mbeanIntf", "Ljava/lang/Class;", nullptr, $PUBLIC, $field(ManagementFactory$PlatformMBeanFinder$$Lambda$lambda$findSingleton$2$1, mbeanIntf)},
	{}
};
$MethodInfo ManagementFactory$PlatformMBeanFinder$$Lambda$lambda$findSingleton$2$1::methodInfos[3] = {
	{"<init>", "(Ljava/lang/Class;)V", nullptr, $PUBLIC, $method(static_cast<void(ManagementFactory$PlatformMBeanFinder$$Lambda$lambda$findSingleton$2$1::*)($Class*)>(&ManagementFactory$PlatformMBeanFinder$$Lambda$lambda$findSingleton$2$1::init$))},
	{"apply", "(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;", nullptr, $PUBLIC},
	{}
};
$ClassInfo ManagementFactory$PlatformMBeanFinder$$Lambda$lambda$findSingleton$2$1::classInfo$ = {
	$PUBLIC | $FINAL,
	"java.lang.management.ManagementFactory$PlatformMBeanFinder$$Lambda$lambda$findSingleton$2$1",
	"java.lang.Object",
	"java.util.function.BinaryOperator",
	fieldInfos,
	methodInfos
};
$Class* ManagementFactory$PlatformMBeanFinder$$Lambda$lambda$findSingleton$2$1::load$($String* name, bool initialize) {
	$loadClass(ManagementFactory$PlatformMBeanFinder$$Lambda$lambda$findSingleton$2$1, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* ManagementFactory$PlatformMBeanFinder$$Lambda$lambda$findSingleton$2$1::class$ = nullptr;

$FieldInfo _ManagementFactory$PlatformMBeanFinder_FieldInfo_[] = {
	{"componentMap", "Ljava/util/Map;", "Ljava/util/Map<Ljava/lang/String;Lsun/management/spi/PlatformMBeanProvider$PlatformComponent<*>;>;", $PRIVATE | $STATIC | $FINAL, $staticField(ManagementFactory$PlatformMBeanFinder, componentMap)},
	{}
};

$MethodInfo _ManagementFactory$PlatformMBeanFinder_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PRIVATE, $method(static_cast<void(ManagementFactory$PlatformMBeanFinder::*)()>(&ManagementFactory$PlatformMBeanFinder::init$))},
	{"findFirst", "(Ljava/lang/Class;)Lsun/management/spi/PlatformMBeanProvider$PlatformComponent;", "(Ljava/lang/Class<*>;)Lsun/management/spi/PlatformMBeanProvider$PlatformComponent<*>;", $STATIC, $method(static_cast<$PlatformMBeanProvider$PlatformComponent*(*)($Class*)>(&ManagementFactory$PlatformMBeanFinder::findFirst))},
	{"findSingleton", "(Ljava/lang/Class;)Lsun/management/spi/PlatformMBeanProvider$PlatformComponent;", "(Ljava/lang/Class<*>;)Lsun/management/spi/PlatformMBeanProvider$PlatformComponent<*>;", $STATIC, $method(static_cast<$PlatformMBeanProvider$PlatformComponent*(*)($Class*)>(&ManagementFactory$PlatformMBeanFinder::findSingleton))},
	{"getMap", "()Ljava/util/Map;", "()Ljava/util/Map<Ljava/lang/String;Lsun/management/spi/PlatformMBeanProvider$PlatformComponent<*>;>;", $STATIC, $method(static_cast<$Map*(*)()>(&ManagementFactory$PlatformMBeanFinder::getMap))},
	{"lambda$findFirst$0", "(Ljava/lang/String;Lsun/management/spi/PlatformMBeanProvider$PlatformComponent;)Z", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $method(static_cast<bool(*)($String*,$PlatformMBeanProvider$PlatformComponent*)>(&ManagementFactory$PlatformMBeanFinder::lambda$findFirst$0))},
	{"lambda$findSingleton$2", "(Ljava/lang/Class;Lsun/management/spi/PlatformMBeanProvider$PlatformComponent;Lsun/management/spi/PlatformMBeanProvider$PlatformComponent;)Lsun/management/spi/PlatformMBeanProvider$PlatformComponent;", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $method(static_cast<$PlatformMBeanProvider$PlatformComponent*(*)($Class*,$PlatformMBeanProvider$PlatformComponent*,$PlatformMBeanProvider$PlatformComponent*)>(&ManagementFactory$PlatformMBeanFinder::lambda$findSingleton$2))},
	{}
};

$InnerClassInfo _ManagementFactory$PlatformMBeanFinder_InnerClassesInfo_[] = {
	{"java.lang.management.ManagementFactory$PlatformMBeanFinder", "java.lang.management.ManagementFactory", "PlatformMBeanFinder", $PRIVATE | $STATIC},
	{"java.lang.management.ManagementFactory$PlatformMBeanFinder$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _ManagementFactory$PlatformMBeanFinder_ClassInfo_ = {
	$ACC_SUPER,
	"java.lang.management.ManagementFactory$PlatformMBeanFinder",
	"java.lang.Object",
	nullptr,
	_ManagementFactory$PlatformMBeanFinder_FieldInfo_,
	_ManagementFactory$PlatformMBeanFinder_MethodInfo_,
	nullptr,
	nullptr,
	_ManagementFactory$PlatformMBeanFinder_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"java.lang.management.ManagementFactory"
};

$Object* allocate$ManagementFactory$PlatformMBeanFinder($Class* clazz) {
	return $of($alloc(ManagementFactory$PlatformMBeanFinder));
}

$Map* ManagementFactory$PlatformMBeanFinder::componentMap = nullptr;

void ManagementFactory$PlatformMBeanFinder::init$() {
}

$Map* ManagementFactory$PlatformMBeanFinder::getMap() {
	$init(ManagementFactory$PlatformMBeanFinder);
	return ManagementFactory$PlatformMBeanFinder::componentMap;
}

$PlatformMBeanProvider$PlatformComponent* ManagementFactory$PlatformMBeanFinder::findFirst($Class* mbeanIntf) {
	$init(ManagementFactory$PlatformMBeanFinder);
	$useLocalCurrentObjectStackCache();
	$var($String, name, $nc(mbeanIntf)->getName());
	$var($Optional, op, $nc($($nc($($nc($($nc($(getMap()))->values()))->stream()))->filter(static_cast<$Predicate*>($$new(ManagementFactory$PlatformMBeanFinder$$Lambda$lambda$findFirst$0, name)))))->findFirst());
	if ($nc(op)->isPresent()) {
		return $cast($PlatformMBeanProvider$PlatformComponent, op->get());
	} else {
		return nullptr;
	}
}

$PlatformMBeanProvider$PlatformComponent* ManagementFactory$PlatformMBeanFinder::findSingleton($Class* mbeanIntf) {
	$init(ManagementFactory$PlatformMBeanFinder);
	$useLocalCurrentObjectStackCache();
	$var($String, name, $nc(mbeanIntf)->getName());
	$var($Optional, op, $nc($($nc($($nc($($nc($(getMap()))->values()))->stream()))->filter(static_cast<$Predicate*>($$new(ManagementFactory$PlatformMBeanFinder$$Lambda$lambda$findFirst$0, name)))))->reduce(static_cast<$BinaryOperator*>($$new(ManagementFactory$PlatformMBeanFinder$$Lambda$lambda$findSingleton$2$1, mbeanIntf))));
	$var($PlatformMBeanProvider$PlatformComponent, singleton, $nc(op)->isPresent() ? $cast($PlatformMBeanProvider$PlatformComponent, $nc(op)->get()) : ($PlatformMBeanProvider$PlatformComponent*)nullptr);
	if (singleton == nullptr) {
		$throwNew($IllegalArgumentException, $$str({$(mbeanIntf->getName()), " is not a platform management interface"_s}));
	}
	if (!$nc(singleton)->isSingleton()) {
		$throwNew($IllegalArgumentException, $$str({$(mbeanIntf->getName()), " can have more than one instance"_s}));
	}
	return singleton;
}

$PlatformMBeanProvider$PlatformComponent* ManagementFactory$PlatformMBeanFinder::lambda$findSingleton$2($Class* mbeanIntf, $PlatformMBeanProvider$PlatformComponent* p1, $PlatformMBeanProvider$PlatformComponent* p2) {
	$init(ManagementFactory$PlatformMBeanFinder);
	$useLocalCurrentObjectStackCache();
	if (p2 != nullptr) {
		$throwNew($IllegalArgumentException, $$str({$($nc(mbeanIntf)->getName()), " can have more than one instance"_s}));
	} else {
		return p1;
	}
}

bool ManagementFactory$PlatformMBeanFinder::lambda$findFirst$0($String* name, $PlatformMBeanProvider$PlatformComponent* pc) {
	$init(ManagementFactory$PlatformMBeanFinder);
	return $nc($($nc(pc)->mbeanInterfaceNames()))->contains(name);
}

void clinit$ManagementFactory$PlatformMBeanFinder($Class* class$) {
	$useLocalCurrentObjectStackCache();
	$beforeCallerSensitive();
	{
		$var($PrivilegedAction, var$0, static_cast<$PrivilegedAction*>($new($ManagementFactory$PlatformMBeanFinder$1)));
		$var($List, providers, $cast($List, $AccessController::doPrivileged(var$0, ($AccessControlContext*)nullptr, $$new($PermissionArray, {
			static_cast<$Permission*>($$new($FilePermission, "<<ALL FILES>>"_s, "read"_s)),
			static_cast<$Permission*>($$new($RuntimePermission, "sun.management.spi.PlatformMBeanProvider.subclass"_s))
		}))));
		$var($HashMap, map, $new($HashMap));
		{
			$var($Iterator, i$, $nc(providers)->iterator());
			for (; $nc(i$)->hasNext();) {
				$var($PlatformMBeanProvider, provider, $cast($PlatformMBeanProvider, i$->next()));
				{
					$var($HashSet, names, $new($HashSet));
					{
						$var($Iterator, i$, $nc($($nc(provider)->getPlatformComponentList()))->iterator());
						for (; $nc(i$)->hasNext();) {
							$var($PlatformMBeanProvider$PlatformComponent, component, $cast($PlatformMBeanProvider$PlatformComponent, i$->next()));
							{
								$var($String, name, $nc(component)->getObjectNamePattern());
								if (!names->add(name)) {
									$throwNew($InternalError, $$str({name, " has been used as key by this provider, it cannot be reused for "_s, component}));
								}
								map->putIfAbsent(name, component);
							}
						}
					}
				}
			}
		}
		$assignStatic(ManagementFactory$PlatformMBeanFinder::componentMap, map);
	}
}

ManagementFactory$PlatformMBeanFinder::ManagementFactory$PlatformMBeanFinder() {
}

$Class* ManagementFactory$PlatformMBeanFinder::load$($String* name, bool initialize) {
	if (name != nullptr) {
		if (name->equals(ManagementFactory$PlatformMBeanFinder$$Lambda$lambda$findFirst$0::classInfo$.name)) {
			return ManagementFactory$PlatformMBeanFinder$$Lambda$lambda$findFirst$0::load$(name, initialize);
		}
		if (name->equals(ManagementFactory$PlatformMBeanFinder$$Lambda$lambda$findSingleton$2$1::classInfo$.name)) {
			return ManagementFactory$PlatformMBeanFinder$$Lambda$lambda$findSingleton$2$1::load$(name, initialize);
		}
	}
	$loadClass(ManagementFactory$PlatformMBeanFinder, name, initialize, &_ManagementFactory$PlatformMBeanFinder_ClassInfo_, clinit$ManagementFactory$PlatformMBeanFinder, allocate$ManagementFactory$PlatformMBeanFinder);
	return class$;
}

$Class* ManagementFactory$PlatformMBeanFinder::class$ = nullptr;

		} // management
	} // lang
} // java
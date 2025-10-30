#include <java/lang/management/DefaultPlatformMBeanProvider$6.h>

#include <java/lang/management/DefaultPlatformMBeanProvider.h>
#include <java/lang/management/ManagementFactory.h>
#include <java/lang/management/MemoryPoolMXBean.h>
#include <java/util/AbstractMap.h>
#include <java/util/Collections.h>
#include <java/util/HashMap.h>
#include <java/util/Iterator.h>
#include <java/util/List.h>
#include <java/util/Map.h>
#include <java/util/Set.h>
#include <javax/management/ObjectName.h>
#include <sun/management/ManagementFactoryHelper.h>
#include <jcpp.h>

#undef MEMORY_POOL_MXBEAN_DOMAIN_TYPE

using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $DefaultPlatformMBeanProvider = ::java::lang::management::DefaultPlatformMBeanProvider;
using $ManagementFactory = ::java::lang::management::ManagementFactory;
using $MemoryPoolMXBean = ::java::lang::management::MemoryPoolMXBean;
using $PlatformManagedObject = ::java::lang::management::PlatformManagedObject;
using $AbstractMap = ::java::util::AbstractMap;
using $Collections = ::java::util::Collections;
using $HashMap = ::java::util::HashMap;
using $Iterator = ::java::util::Iterator;
using $List = ::java::util::List;
using $Map = ::java::util::Map;
using $Set = ::java::util::Set;
using $ObjectName = ::javax::management::ObjectName;
using $ManagementFactoryHelper = ::sun::management::ManagementFactoryHelper;
using $PlatformMBeanProvider$PlatformComponent = ::sun::management::spi::PlatformMBeanProvider$PlatformComponent;

namespace java {
	namespace lang {
		namespace management {

$FieldInfo _DefaultPlatformMBeanProvider$6_FieldInfo_[] = {
	{"this$0", "Ljava/lang/management/DefaultPlatformMBeanProvider;", nullptr, $FINAL | $SYNTHETIC, $field(DefaultPlatformMBeanProvider$6, this$0)},
	{"memoryPoolMXBeanInterfaceNames", "Ljava/util/Set;", "Ljava/util/Set<Ljava/lang/String;>;", $PRIVATE | $FINAL, $field(DefaultPlatformMBeanProvider$6, memoryPoolMXBeanInterfaceNames)},
	{}
};

$MethodInfo _DefaultPlatformMBeanProvider$6_MethodInfo_[] = {
	{"<init>", "(Ljava/lang/management/DefaultPlatformMBeanProvider;)V", nullptr, 0, $method(static_cast<void(DefaultPlatformMBeanProvider$6::*)($DefaultPlatformMBeanProvider*)>(&DefaultPlatformMBeanProvider$6::init$))},
	{"getObjectNamePattern", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"isSingleton", "()Z", nullptr, $PUBLIC},
	{"mbeanInterfaceNames", "()Ljava/util/Set;", "()Ljava/util/Set<Ljava/lang/String;>;", $PUBLIC},
	{"mbeanInterfaces", "()Ljava/util/Set;", "()Ljava/util/Set<Ljava/lang/Class<+Ljava/lang/management/MemoryPoolMXBean;>;>;", $PUBLIC},
	{"nameToMBeanMap", "()Ljava/util/Map;", "()Ljava/util/Map<Ljava/lang/String;Ljava/lang/management/MemoryPoolMXBean;>;", $PUBLIC},
	{}
};

$EnclosingMethodInfo _DefaultPlatformMBeanProvider$6_EnclosingMethodInfo_ = {
	"java.lang.management.DefaultPlatformMBeanProvider",
	"init",
	"()Ljava/util/List;"
};

$InnerClassInfo _DefaultPlatformMBeanProvider$6_InnerClassesInfo_[] = {
	{"java.lang.management.DefaultPlatformMBeanProvider$6", nullptr, nullptr, 0},
	{"sun.management.spi.PlatformMBeanProvider$PlatformComponent", "sun.management.spi.PlatformMBeanProvider", "PlatformComponent", $PUBLIC | $STATIC | $INTERFACE | $ABSTRACT},
	{}
};

$ClassInfo _DefaultPlatformMBeanProvider$6_ClassInfo_ = {
	$ACC_SUPER,
	"java.lang.management.DefaultPlatformMBeanProvider$6",
	"java.lang.Object",
	"sun.management.spi.PlatformMBeanProvider$PlatformComponent",
	_DefaultPlatformMBeanProvider$6_FieldInfo_,
	_DefaultPlatformMBeanProvider$6_MethodInfo_,
	"Ljava/lang/Object;Lsun/management/spi/PlatformMBeanProvider$PlatformComponent<Ljava/lang/management/MemoryPoolMXBean;>;",
	&_DefaultPlatformMBeanProvider$6_EnclosingMethodInfo_,
	_DefaultPlatformMBeanProvider$6_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"java.lang.management.DefaultPlatformMBeanProvider"
};

$Object* allocate$DefaultPlatformMBeanProvider$6($Class* clazz) {
	return $of($alloc(DefaultPlatformMBeanProvider$6));
}

void DefaultPlatformMBeanProvider$6::init$($DefaultPlatformMBeanProvider* this$0) {
	$set(this, this$0, this$0);
	$set(this, memoryPoolMXBeanInterfaceNames, $Collections::singleton("java.lang.management.MemoryPoolMXBean"_s));
}

$Set* DefaultPlatformMBeanProvider$6::mbeanInterfaces() {
	$load($MemoryPoolMXBean);
	return $Collections::singleton($MemoryPoolMXBean::class$);
}

$Set* DefaultPlatformMBeanProvider$6::mbeanInterfaceNames() {
	return this->memoryPoolMXBeanInterfaceNames;
}

$String* DefaultPlatformMBeanProvider$6::getObjectNamePattern() {
	$init($ManagementFactory);
	return $str({$ManagementFactory::MEMORY_POOL_MXBEAN_DOMAIN_TYPE, ",name=*"_s});
}

bool DefaultPlatformMBeanProvider$6::isSingleton() {
	return false;
}

$Map* DefaultPlatformMBeanProvider$6::nameToMBeanMap() {
	$useLocalCurrentObjectStackCache();
	$var($List, list, $ManagementFactoryHelper::getMemoryPoolMXBeans());
	$var($Map, map, nullptr);
	if ($nc(list)->isEmpty()) {
		$assign(map, $Collections::emptyMap());
	} else {
		$assign(map, $new($HashMap, list->size()));
		{
			$var($Iterator, i$, list->iterator());
			for (; $nc(i$)->hasNext();) {
				$var($MemoryPoolMXBean, mpm, $cast($MemoryPoolMXBean, i$->next()));
				{
					map->put($($nc($($nc(mpm)->getObjectName()))->getCanonicalName()), mpm);
				}
			}
		}
	}
	return map;
}

DefaultPlatformMBeanProvider$6::DefaultPlatformMBeanProvider$6() {
}

$Class* DefaultPlatformMBeanProvider$6::load$($String* name, bool initialize) {
	$loadClass(DefaultPlatformMBeanProvider$6, name, initialize, &_DefaultPlatformMBeanProvider$6_ClassInfo_, allocate$DefaultPlatformMBeanProvider$6);
	return class$;
}

$Class* DefaultPlatformMBeanProvider$6::class$ = nullptr;

		} // management
	} // lang
} // java
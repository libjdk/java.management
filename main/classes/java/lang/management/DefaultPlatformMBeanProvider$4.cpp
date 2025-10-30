#include <java/lang/management/DefaultPlatformMBeanProvider$4.h>

#include <java/lang/management/DefaultPlatformMBeanProvider.h>
#include <java/lang/management/GarbageCollectorMXBean.h>
#include <java/lang/management/ManagementFactory.h>
#include <java/lang/management/MemoryManagerMXBean.h>
#include <java/util/AbstractMap.h>
#include <java/util/Collections.h>
#include <java/util/HashMap.h>
#include <java/util/Iterator.h>
#include <java/util/List.h>
#include <java/util/Map.h>
#include <java/util/Set.h>
#include <java/util/stream/Collector.h>
#include <java/util/stream/Collectors.h>
#include <java/util/stream/Stream.h>
#include <javax/management/ObjectName.h>
#include <sun/management/ManagementFactoryHelper.h>
#include <jcpp.h>

#undef GARBAGE_COLLECTOR_MXBEAN_DOMAIN_TYPE

using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $DefaultPlatformMBeanProvider = ::java::lang::management::DefaultPlatformMBeanProvider;
using $GarbageCollectorMXBean = ::java::lang::management::GarbageCollectorMXBean;
using $ManagementFactory = ::java::lang::management::ManagementFactory;
using $MemoryManagerMXBean = ::java::lang::management::MemoryManagerMXBean;
using $PlatformManagedObject = ::java::lang::management::PlatformManagedObject;
using $AbstractMap = ::java::util::AbstractMap;
using $Collections = ::java::util::Collections;
using $HashMap = ::java::util::HashMap;
using $Iterator = ::java::util::Iterator;
using $List = ::java::util::List;
using $Map = ::java::util::Map;
using $Set = ::java::util::Set;
using $Collector = ::java::util::stream::Collector;
using $Collectors = ::java::util::stream::Collectors;
using $Stream = ::java::util::stream::Stream;
using $ObjectName = ::javax::management::ObjectName;
using $ManagementFactoryHelper = ::sun::management::ManagementFactoryHelper;
using $PlatformMBeanProvider$PlatformComponent = ::sun::management::spi::PlatformMBeanProvider$PlatformComponent;

namespace java {
	namespace lang {
		namespace management {

$FieldInfo _DefaultPlatformMBeanProvider$4_FieldInfo_[] = {
	{"this$0", "Ljava/lang/management/DefaultPlatformMBeanProvider;", nullptr, $FINAL | $SYNTHETIC, $field(DefaultPlatformMBeanProvider$4, this$0)},
	{"garbageCollectorMXBeanInterfaceNames", "Ljava/util/Set;", "Ljava/util/Set<Ljava/lang/String;>;", $PRIVATE | $FINAL, $field(DefaultPlatformMBeanProvider$4, garbageCollectorMXBeanInterfaceNames)},
	{}
};

$MethodInfo _DefaultPlatformMBeanProvider$4_MethodInfo_[] = {
	{"<init>", "(Ljava/lang/management/DefaultPlatformMBeanProvider;)V", nullptr, 0, $method(static_cast<void(DefaultPlatformMBeanProvider$4::*)($DefaultPlatformMBeanProvider*)>(&DefaultPlatformMBeanProvider$4::init$))},
	{"getObjectNamePattern", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"isSingleton", "()Z", nullptr, $PUBLIC},
	{"mbeanInterfaceNames", "()Ljava/util/Set;", "()Ljava/util/Set<Ljava/lang/String;>;", $PUBLIC},
	{"mbeanInterfaces", "()Ljava/util/Set;", "()Ljava/util/Set<Ljava/lang/Class<+Ljava/lang/management/MemoryManagerMXBean;>;>;", $PUBLIC},
	{"nameToMBeanMap", "()Ljava/util/Map;", "()Ljava/util/Map<Ljava/lang/String;Ljava/lang/management/MemoryManagerMXBean;>;", $PUBLIC},
	{}
};

$EnclosingMethodInfo _DefaultPlatformMBeanProvider$4_EnclosingMethodInfo_ = {
	"java.lang.management.DefaultPlatformMBeanProvider",
	"init",
	"()Ljava/util/List;"
};

$InnerClassInfo _DefaultPlatformMBeanProvider$4_InnerClassesInfo_[] = {
	{"java.lang.management.DefaultPlatformMBeanProvider$4", nullptr, nullptr, 0},
	{"sun.management.spi.PlatformMBeanProvider$PlatformComponent", "sun.management.spi.PlatformMBeanProvider", "PlatformComponent", $PUBLIC | $STATIC | $INTERFACE | $ABSTRACT},
	{}
};

$ClassInfo _DefaultPlatformMBeanProvider$4_ClassInfo_ = {
	$ACC_SUPER,
	"java.lang.management.DefaultPlatformMBeanProvider$4",
	"java.lang.Object",
	"sun.management.spi.PlatformMBeanProvider$PlatformComponent",
	_DefaultPlatformMBeanProvider$4_FieldInfo_,
	_DefaultPlatformMBeanProvider$4_MethodInfo_,
	"Ljava/lang/Object;Lsun/management/spi/PlatformMBeanProvider$PlatformComponent<Ljava/lang/management/MemoryManagerMXBean;>;",
	&_DefaultPlatformMBeanProvider$4_EnclosingMethodInfo_,
	_DefaultPlatformMBeanProvider$4_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"java.lang.management.DefaultPlatformMBeanProvider"
};

$Object* allocate$DefaultPlatformMBeanProvider$4($Class* clazz) {
	return $of($alloc(DefaultPlatformMBeanProvider$4));
}

void DefaultPlatformMBeanProvider$4::init$($DefaultPlatformMBeanProvider* this$0) {
	$useLocalCurrentObjectStackCache();
	$set(this, this$0, this$0);
	$set(this, garbageCollectorMXBeanInterfaceNames, $Collections::unmodifiableSet($cast($Set, $($nc($($Stream::of($$new($StringArray, {
		"java.lang.management.MemoryManagerMXBean"_s,
		"java.lang.management.GarbageCollectorMXBean"_s
	}))))->collect($($Collectors::toSet()))))));
}

$Set* DefaultPlatformMBeanProvider$4::mbeanInterfaces() {
	$useLocalCurrentObjectStackCache();
	$load($MemoryManagerMXBean);
	$load($GarbageCollectorMXBean);
	return $cast($Set, $nc($($Stream::of($$new($ClassArray, {
		$MemoryManagerMXBean::class$,
		$GarbageCollectorMXBean::class$
	}))))->collect($($Collectors::toSet())));
}

$Set* DefaultPlatformMBeanProvider$4::mbeanInterfaceNames() {
	return this->garbageCollectorMXBeanInterfaceNames;
}

$String* DefaultPlatformMBeanProvider$4::getObjectNamePattern() {
	$init($ManagementFactory);
	return $str({$ManagementFactory::GARBAGE_COLLECTOR_MXBEAN_DOMAIN_TYPE, ",name=*"_s});
}

bool DefaultPlatformMBeanProvider$4::isSingleton() {
	return false;
}

$Map* DefaultPlatformMBeanProvider$4::nameToMBeanMap() {
	$useLocalCurrentObjectStackCache();
	$var($List, list, $ManagementFactoryHelper::getGarbageCollectorMXBeans());
	$var($Map, map, nullptr);
	if ($nc(list)->isEmpty()) {
		$assign(map, $Collections::emptyMap());
	} else {
		$assign(map, $new($HashMap, list->size()));
		{
			$var($Iterator, i$, list->iterator());
			for (; $nc(i$)->hasNext();) {
				$var($MemoryManagerMXBean, gcm, $cast($MemoryManagerMXBean, i$->next()));
				{
					map->put($($nc($($nc(gcm)->getObjectName()))->getCanonicalName()), gcm);
				}
			}
		}
	}
	return map;
}

DefaultPlatformMBeanProvider$4::DefaultPlatformMBeanProvider$4() {
}

$Class* DefaultPlatformMBeanProvider$4::load$($String* name, bool initialize) {
	$loadClass(DefaultPlatformMBeanProvider$4, name, initialize, &_DefaultPlatformMBeanProvider$4_ClassInfo_, allocate$DefaultPlatformMBeanProvider$4);
	return class$;
}

$Class* DefaultPlatformMBeanProvider$4::class$ = nullptr;

		} // management
	} // lang
} // java
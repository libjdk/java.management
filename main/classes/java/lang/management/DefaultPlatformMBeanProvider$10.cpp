#include <java/lang/management/DefaultPlatformMBeanProvider$10.h>

#include <java/io/Serializable.h>
#include <java/lang/invoke/CallSite.h>
#include <java/lang/invoke/LambdaMetafactory.h>
#include <java/lang/invoke/MethodHandle.h>
#include <java/lang/invoke/MethodHandles$Lookup.h>
#include <java/lang/invoke/MethodType.h>
#include <java/lang/management/BufferPoolMXBean.h>
#include <java/lang/management/DefaultPlatformMBeanProvider.h>
#include <java/util/AbstractMap.h>
#include <java/util/Collections.h>
#include <java/util/HashMap.h>
#include <java/util/List.h>
#include <java/util/Map.h>
#include <java/util/Set.h>
#include <java/util/function/Consumer.h>
#include <java/util/stream/Stream.h>
#include <javax/management/ObjectName.h>
#include <sun/management/ManagementFactoryHelper.h>
#include <jcpp.h>

using $Serializable = ::java::io::Serializable;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Void = ::java::lang::Void;
using $CallSite = ::java::lang::invoke::CallSite;
using $LambdaMetafactory = ::java::lang::invoke::LambdaMetafactory;
using $MethodHandle = ::java::lang::invoke::MethodHandle;
using $MethodHandles$Lookup = ::java::lang::invoke::MethodHandles$Lookup;
using $MethodType = ::java::lang::invoke::MethodType;
using $BufferPoolMXBean = ::java::lang::management::BufferPoolMXBean;
using $DefaultPlatformMBeanProvider = ::java::lang::management::DefaultPlatformMBeanProvider;
using $PlatformManagedObject = ::java::lang::management::PlatformManagedObject;
using $AbstractMap = ::java::util::AbstractMap;
using $Collection = ::java::util::Collection;
using $Collections = ::java::util::Collections;
using $HashMap = ::java::util::HashMap;
using $List = ::java::util::List;
using $Map = ::java::util::Map;
using $Set = ::java::util::Set;
using $Consumer = ::java::util::function::Consumer;
using $Stream = ::java::util::stream::Stream;
using $ObjectName = ::javax::management::ObjectName;
using $ManagementFactoryHelper = ::sun::management::ManagementFactoryHelper;
using $PlatformMBeanProvider$PlatformComponent = ::sun::management::spi::PlatformMBeanProvider$PlatformComponent;

namespace java {
	namespace lang {
		namespace management {

class DefaultPlatformMBeanProvider$10$$Lambda$lambda$nameToMBeanMap$0 : public $Consumer {
	$class(DefaultPlatformMBeanProvider$10$$Lambda$lambda$nameToMBeanMap$0, $NO_CLASS_INIT, $Consumer)
public:
	void init$($Map* map) {
		$set(this, map, map);
	}
	virtual void accept(Object$* mbean) override {
		DefaultPlatformMBeanProvider$10::lambda$nameToMBeanMap$0(map, $cast($BufferPoolMXBean, mbean));
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<DefaultPlatformMBeanProvider$10$$Lambda$lambda$nameToMBeanMap$0>());
	}
	$Map* map = nullptr;
	static $FieldInfo fieldInfos[2];
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$FieldInfo DefaultPlatformMBeanProvider$10$$Lambda$lambda$nameToMBeanMap$0::fieldInfos[2] = {
	{"map", "Ljava/util/Map;", nullptr, $PUBLIC, $field(DefaultPlatformMBeanProvider$10$$Lambda$lambda$nameToMBeanMap$0, map)},
	{}
};
$MethodInfo DefaultPlatformMBeanProvider$10$$Lambda$lambda$nameToMBeanMap$0::methodInfos[3] = {
	{"<init>", "(Ljava/util/Map;)V", nullptr, $PUBLIC, $method(static_cast<void(DefaultPlatformMBeanProvider$10$$Lambda$lambda$nameToMBeanMap$0::*)($Map*)>(&DefaultPlatformMBeanProvider$10$$Lambda$lambda$nameToMBeanMap$0::init$))},
	{"accept", "(Ljava/lang/Object;)V", nullptr, $PUBLIC},
	{}
};
$ClassInfo DefaultPlatformMBeanProvider$10$$Lambda$lambda$nameToMBeanMap$0::classInfo$ = {
	$PUBLIC | $FINAL,
	"java.lang.management.DefaultPlatformMBeanProvider$10$$Lambda$lambda$nameToMBeanMap$0",
	"java.lang.Object",
	"java.util.function.Consumer",
	fieldInfos,
	methodInfos
};
$Class* DefaultPlatformMBeanProvider$10$$Lambda$lambda$nameToMBeanMap$0::load$($String* name, bool initialize) {
	$loadClass(DefaultPlatformMBeanProvider$10$$Lambda$lambda$nameToMBeanMap$0, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* DefaultPlatformMBeanProvider$10$$Lambda$lambda$nameToMBeanMap$0::class$ = nullptr;

$FieldInfo _DefaultPlatformMBeanProvider$10_FieldInfo_[] = {
	{"this$0", "Ljava/lang/management/DefaultPlatformMBeanProvider;", nullptr, $FINAL | $SYNTHETIC, $field(DefaultPlatformMBeanProvider$10, this$0)},
	{"bufferPoolMXBeanInterfaceNames", "Ljava/util/Set;", "Ljava/util/Set<Ljava/lang/String;>;", $PRIVATE | $FINAL, $field(DefaultPlatformMBeanProvider$10, bufferPoolMXBeanInterfaceNames)},
	{}
};

$MethodInfo _DefaultPlatformMBeanProvider$10_MethodInfo_[] = {
	{"<init>", "(Ljava/lang/management/DefaultPlatformMBeanProvider;)V", nullptr, 0, $method(static_cast<void(DefaultPlatformMBeanProvider$10::*)($DefaultPlatformMBeanProvider*)>(&DefaultPlatformMBeanProvider$10::init$))},
	{"getObjectNamePattern", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"isSingleton", "()Z", nullptr, $PUBLIC},
	{"lambda$nameToMBeanMap$0", "(Ljava/util/Map;Ljava/lang/management/BufferPoolMXBean;)V", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $method(static_cast<void(*)($Map*,$BufferPoolMXBean*)>(&DefaultPlatformMBeanProvider$10::lambda$nameToMBeanMap$0))},
	{"mbeanInterfaceNames", "()Ljava/util/Set;", "()Ljava/util/Set<Ljava/lang/String;>;", $PUBLIC},
	{"mbeanInterfaces", "()Ljava/util/Set;", "()Ljava/util/Set<Ljava/lang/Class<+Ljava/lang/management/BufferPoolMXBean;>;>;", $PUBLIC},
	{"nameToMBeanMap", "()Ljava/util/Map;", "()Ljava/util/Map<Ljava/lang/String;Ljava/lang/management/BufferPoolMXBean;>;", $PUBLIC},
	{}
};

$EnclosingMethodInfo _DefaultPlatformMBeanProvider$10_EnclosingMethodInfo_ = {
	"java.lang.management.DefaultPlatformMBeanProvider",
	"init",
	"()Ljava/util/List;"
};

$InnerClassInfo _DefaultPlatformMBeanProvider$10_InnerClassesInfo_[] = {
	{"java.lang.management.DefaultPlatformMBeanProvider$10", nullptr, nullptr, 0},
	{"sun.management.spi.PlatformMBeanProvider$PlatformComponent", "sun.management.spi.PlatformMBeanProvider", "PlatformComponent", $PUBLIC | $STATIC | $INTERFACE | $ABSTRACT},
	{}
};

$ClassInfo _DefaultPlatformMBeanProvider$10_ClassInfo_ = {
	$ACC_SUPER,
	"java.lang.management.DefaultPlatformMBeanProvider$10",
	"java.lang.Object",
	"sun.management.spi.PlatformMBeanProvider$PlatformComponent",
	_DefaultPlatformMBeanProvider$10_FieldInfo_,
	_DefaultPlatformMBeanProvider$10_MethodInfo_,
	"Ljava/lang/Object;Lsun/management/spi/PlatformMBeanProvider$PlatformComponent<Ljava/lang/management/BufferPoolMXBean;>;",
	&_DefaultPlatformMBeanProvider$10_EnclosingMethodInfo_,
	_DefaultPlatformMBeanProvider$10_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"java.lang.management.DefaultPlatformMBeanProvider"
};

$Object* allocate$DefaultPlatformMBeanProvider$10($Class* clazz) {
	return $of($alloc(DefaultPlatformMBeanProvider$10));
}

void DefaultPlatformMBeanProvider$10::init$($DefaultPlatformMBeanProvider* this$0) {
	$set(this, this$0, this$0);
	$set(this, bufferPoolMXBeanInterfaceNames, $Collections::singleton("java.lang.management.BufferPoolMXBean"_s));
}

$Set* DefaultPlatformMBeanProvider$10::mbeanInterfaces() {
	$load($BufferPoolMXBean);
	return $Collections::singleton($BufferPoolMXBean::class$);
}

$Set* DefaultPlatformMBeanProvider$10::mbeanInterfaceNames() {
	return this->bufferPoolMXBeanInterfaceNames;
}

$String* DefaultPlatformMBeanProvider$10::getObjectNamePattern() {
	return "java.nio:type=BufferPool,name=*"_s;
}

bool DefaultPlatformMBeanProvider$10::isSingleton() {
	return false;
}

$Map* DefaultPlatformMBeanProvider$10::nameToMBeanMap() {
	$useLocalCurrentObjectStackCache();
	$var($List, list, $ManagementFactoryHelper::getBufferPoolMXBeans());
	$var($Map, map, nullptr);
	if ($nc(list)->isEmpty()) {
		$assign(map, $Collections::emptyMap());
	} else {
		$assign(map, $new($HashMap, list->size()));
		$nc($(list->stream()))->forEach(static_cast<$Consumer*>($$new(DefaultPlatformMBeanProvider$10$$Lambda$lambda$nameToMBeanMap$0, map)));
	}
	return map;
}

void DefaultPlatformMBeanProvider$10::lambda$nameToMBeanMap$0($Map* map, $BufferPoolMXBean* mbean) {
	$init(DefaultPlatformMBeanProvider$10);
	$useLocalCurrentObjectStackCache();
	$nc(map)->put($($nc($($nc(mbean)->getObjectName()))->getCanonicalName()), mbean);
}

DefaultPlatformMBeanProvider$10::DefaultPlatformMBeanProvider$10() {
}

$Class* DefaultPlatformMBeanProvider$10::load$($String* name, bool initialize) {
	if (name != nullptr) {
		if (name->equals(DefaultPlatformMBeanProvider$10$$Lambda$lambda$nameToMBeanMap$0::classInfo$.name)) {
			return DefaultPlatformMBeanProvider$10$$Lambda$lambda$nameToMBeanMap$0::load$(name, initialize);
		}
	}
	$loadClass(DefaultPlatformMBeanProvider$10, name, initialize, &_DefaultPlatformMBeanProvider$10_ClassInfo_, allocate$DefaultPlatformMBeanProvider$10);
	return class$;
}

$Class* DefaultPlatformMBeanProvider$10::class$ = nullptr;

		} // management
	} // lang
} // java
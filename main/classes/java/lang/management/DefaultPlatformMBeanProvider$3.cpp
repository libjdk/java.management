#include <java/lang/management/DefaultPlatformMBeanProvider$3.h>

#include <java/lang/management/DefaultPlatformMBeanProvider.h>
#include <java/lang/management/ManagementFactory.h>
#include <java/lang/management/MemoryMXBean.h>
#include <java/util/Collections.h>
#include <java/util/Map.h>
#include <java/util/Set.h>
#include <sun/management/ManagementFactoryHelper.h>
#include <jcpp.h>

#undef MEMORY_MXBEAN_NAME

using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $DefaultPlatformMBeanProvider = ::java::lang::management::DefaultPlatformMBeanProvider;
using $ManagementFactory = ::java::lang::management::ManagementFactory;
using $MemoryMXBean = ::java::lang::management::MemoryMXBean;
using $Collections = ::java::util::Collections;
using $Map = ::java::util::Map;
using $Set = ::java::util::Set;
using $ManagementFactoryHelper = ::sun::management::ManagementFactoryHelper;
using $PlatformMBeanProvider$PlatformComponent = ::sun::management::spi::PlatformMBeanProvider$PlatformComponent;

namespace java {
	namespace lang {
		namespace management {

$FieldInfo _DefaultPlatformMBeanProvider$3_FieldInfo_[] = {
	{"this$0", "Ljava/lang/management/DefaultPlatformMBeanProvider;", nullptr, $FINAL | $SYNTHETIC, $field(DefaultPlatformMBeanProvider$3, this$0)},
	{"memoryMXBeanInterfaceNames", "Ljava/util/Set;", "Ljava/util/Set<Ljava/lang/String;>;", $PRIVATE | $FINAL, $field(DefaultPlatformMBeanProvider$3, memoryMXBeanInterfaceNames)},
	{}
};

$MethodInfo _DefaultPlatformMBeanProvider$3_MethodInfo_[] = {
	{"<init>", "(Ljava/lang/management/DefaultPlatformMBeanProvider;)V", nullptr, 0, $method(static_cast<void(DefaultPlatformMBeanProvider$3::*)($DefaultPlatformMBeanProvider*)>(&DefaultPlatformMBeanProvider$3::init$))},
	{"getObjectNamePattern", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"mbeanInterfaceNames", "()Ljava/util/Set;", "()Ljava/util/Set<Ljava/lang/String;>;", $PUBLIC},
	{"mbeanInterfaces", "()Ljava/util/Set;", "()Ljava/util/Set<Ljava/lang/Class<+Ljava/lang/management/MemoryMXBean;>;>;", $PUBLIC},
	{"nameToMBeanMap", "()Ljava/util/Map;", "()Ljava/util/Map<Ljava/lang/String;Ljava/lang/management/MemoryMXBean;>;", $PUBLIC},
	{}
};

$EnclosingMethodInfo _DefaultPlatformMBeanProvider$3_EnclosingMethodInfo_ = {
	"java.lang.management.DefaultPlatformMBeanProvider",
	"init",
	"()Ljava/util/List;"
};

$InnerClassInfo _DefaultPlatformMBeanProvider$3_InnerClassesInfo_[] = {
	{"java.lang.management.DefaultPlatformMBeanProvider$3", nullptr, nullptr, 0},
	{"sun.management.spi.PlatformMBeanProvider$PlatformComponent", "sun.management.spi.PlatformMBeanProvider", "PlatformComponent", $PUBLIC | $STATIC | $INTERFACE | $ABSTRACT},
	{}
};

$ClassInfo _DefaultPlatformMBeanProvider$3_ClassInfo_ = {
	$ACC_SUPER,
	"java.lang.management.DefaultPlatformMBeanProvider$3",
	"java.lang.Object",
	"sun.management.spi.PlatformMBeanProvider$PlatformComponent",
	_DefaultPlatformMBeanProvider$3_FieldInfo_,
	_DefaultPlatformMBeanProvider$3_MethodInfo_,
	"Ljava/lang/Object;Lsun/management/spi/PlatformMBeanProvider$PlatformComponent<Ljava/lang/management/MemoryMXBean;>;",
	&_DefaultPlatformMBeanProvider$3_EnclosingMethodInfo_,
	_DefaultPlatformMBeanProvider$3_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"java.lang.management.DefaultPlatformMBeanProvider"
};

$Object* allocate$DefaultPlatformMBeanProvider$3($Class* clazz) {
	return $of($alloc(DefaultPlatformMBeanProvider$3));
}

void DefaultPlatformMBeanProvider$3::init$($DefaultPlatformMBeanProvider* this$0) {
	$set(this, this$0, this$0);
	$set(this, memoryMXBeanInterfaceNames, $Collections::singleton("java.lang.management.MemoryMXBean"_s));
}

$Set* DefaultPlatformMBeanProvider$3::mbeanInterfaces() {
	$load($MemoryMXBean);
	return $Collections::singleton($MemoryMXBean::class$);
}

$Set* DefaultPlatformMBeanProvider$3::mbeanInterfaceNames() {
	return this->memoryMXBeanInterfaceNames;
}

$String* DefaultPlatformMBeanProvider$3::getObjectNamePattern() {
	$init($ManagementFactory);
	return $ManagementFactory::MEMORY_MXBEAN_NAME;
}

$Map* DefaultPlatformMBeanProvider$3::nameToMBeanMap() {
	$init($ManagementFactory);
	return $Collections::singletonMap($ManagementFactory::MEMORY_MXBEAN_NAME, $($ManagementFactoryHelper::getMemoryMXBean()));
}

DefaultPlatformMBeanProvider$3::DefaultPlatformMBeanProvider$3() {
}

$Class* DefaultPlatformMBeanProvider$3::load$($String* name, bool initialize) {
	$loadClass(DefaultPlatformMBeanProvider$3, name, initialize, &_DefaultPlatformMBeanProvider$3_ClassInfo_, allocate$DefaultPlatformMBeanProvider$3);
	return class$;
}

$Class* DefaultPlatformMBeanProvider$3::class$ = nullptr;

		} // management
	} // lang
} // java
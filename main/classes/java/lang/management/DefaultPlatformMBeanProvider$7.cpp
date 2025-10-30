#include <java/lang/management/DefaultPlatformMBeanProvider$7.h>

#include <java/lang/management/DefaultPlatformMBeanProvider.h>
#include <java/lang/management/ManagementFactory.h>
#include <java/lang/management/RuntimeMXBean.h>
#include <java/util/Collections.h>
#include <java/util/Map.h>
#include <java/util/Set.h>
#include <sun/management/ManagementFactoryHelper.h>
#include <jcpp.h>

#undef RUNTIME_MXBEAN_NAME

using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $DefaultPlatformMBeanProvider = ::java::lang::management::DefaultPlatformMBeanProvider;
using $ManagementFactory = ::java::lang::management::ManagementFactory;
using $RuntimeMXBean = ::java::lang::management::RuntimeMXBean;
using $Collections = ::java::util::Collections;
using $Map = ::java::util::Map;
using $Set = ::java::util::Set;
using $ManagementFactoryHelper = ::sun::management::ManagementFactoryHelper;
using $PlatformMBeanProvider$PlatformComponent = ::sun::management::spi::PlatformMBeanProvider$PlatformComponent;

namespace java {
	namespace lang {
		namespace management {

$FieldInfo _DefaultPlatformMBeanProvider$7_FieldInfo_[] = {
	{"this$0", "Ljava/lang/management/DefaultPlatformMBeanProvider;", nullptr, $FINAL | $SYNTHETIC, $field(DefaultPlatformMBeanProvider$7, this$0)},
	{"runtimeMXBeanInterfaceNames", "Ljava/util/Set;", "Ljava/util/Set<Ljava/lang/String;>;", $PRIVATE | $FINAL, $field(DefaultPlatformMBeanProvider$7, runtimeMXBeanInterfaceNames)},
	{}
};

$MethodInfo _DefaultPlatformMBeanProvider$7_MethodInfo_[] = {
	{"<init>", "(Ljava/lang/management/DefaultPlatformMBeanProvider;)V", nullptr, 0, $method(static_cast<void(DefaultPlatformMBeanProvider$7::*)($DefaultPlatformMBeanProvider*)>(&DefaultPlatformMBeanProvider$7::init$))},
	{"getObjectNamePattern", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"mbeanInterfaceNames", "()Ljava/util/Set;", "()Ljava/util/Set<Ljava/lang/String;>;", $PUBLIC},
	{"mbeanInterfaces", "()Ljava/util/Set;", "()Ljava/util/Set<Ljava/lang/Class<+Ljava/lang/management/RuntimeMXBean;>;>;", $PUBLIC},
	{"nameToMBeanMap", "()Ljava/util/Map;", "()Ljava/util/Map<Ljava/lang/String;Ljava/lang/management/RuntimeMXBean;>;", $PUBLIC},
	{}
};

$EnclosingMethodInfo _DefaultPlatformMBeanProvider$7_EnclosingMethodInfo_ = {
	"java.lang.management.DefaultPlatformMBeanProvider",
	"init",
	"()Ljava/util/List;"
};

$InnerClassInfo _DefaultPlatformMBeanProvider$7_InnerClassesInfo_[] = {
	{"java.lang.management.DefaultPlatformMBeanProvider$7", nullptr, nullptr, 0},
	{"sun.management.spi.PlatformMBeanProvider$PlatformComponent", "sun.management.spi.PlatformMBeanProvider", "PlatformComponent", $PUBLIC | $STATIC | $INTERFACE | $ABSTRACT},
	{}
};

$ClassInfo _DefaultPlatformMBeanProvider$7_ClassInfo_ = {
	$ACC_SUPER,
	"java.lang.management.DefaultPlatformMBeanProvider$7",
	"java.lang.Object",
	"sun.management.spi.PlatformMBeanProvider$PlatformComponent",
	_DefaultPlatformMBeanProvider$7_FieldInfo_,
	_DefaultPlatformMBeanProvider$7_MethodInfo_,
	"Ljava/lang/Object;Lsun/management/spi/PlatformMBeanProvider$PlatformComponent<Ljava/lang/management/RuntimeMXBean;>;",
	&_DefaultPlatformMBeanProvider$7_EnclosingMethodInfo_,
	_DefaultPlatformMBeanProvider$7_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"java.lang.management.DefaultPlatformMBeanProvider"
};

$Object* allocate$DefaultPlatformMBeanProvider$7($Class* clazz) {
	return $of($alloc(DefaultPlatformMBeanProvider$7));
}

void DefaultPlatformMBeanProvider$7::init$($DefaultPlatformMBeanProvider* this$0) {
	$set(this, this$0, this$0);
	$set(this, runtimeMXBeanInterfaceNames, $Collections::singleton("java.lang.management.RuntimeMXBean"_s));
}

$Set* DefaultPlatformMBeanProvider$7::mbeanInterfaces() {
	$load($RuntimeMXBean);
	return $Collections::singleton($RuntimeMXBean::class$);
}

$Set* DefaultPlatformMBeanProvider$7::mbeanInterfaceNames() {
	return this->runtimeMXBeanInterfaceNames;
}

$String* DefaultPlatformMBeanProvider$7::getObjectNamePattern() {
	$init($ManagementFactory);
	return $ManagementFactory::RUNTIME_MXBEAN_NAME;
}

$Map* DefaultPlatformMBeanProvider$7::nameToMBeanMap() {
	$init($ManagementFactory);
	return $Collections::singletonMap($ManagementFactory::RUNTIME_MXBEAN_NAME, $($ManagementFactoryHelper::getRuntimeMXBean()));
}

DefaultPlatformMBeanProvider$7::DefaultPlatformMBeanProvider$7() {
}

$Class* DefaultPlatformMBeanProvider$7::load$($String* name, bool initialize) {
	$loadClass(DefaultPlatformMBeanProvider$7, name, initialize, &_DefaultPlatformMBeanProvider$7_ClassInfo_, allocate$DefaultPlatformMBeanProvider$7);
	return class$;
}

$Class* DefaultPlatformMBeanProvider$7::class$ = nullptr;

		} // management
	} // lang
} // java
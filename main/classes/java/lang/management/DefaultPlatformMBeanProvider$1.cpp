#include <java/lang/management/DefaultPlatformMBeanProvider$1.h>

#include <java/lang/management/ClassLoadingMXBean.h>
#include <java/lang/management/DefaultPlatformMBeanProvider.h>
#include <java/lang/management/ManagementFactory.h>
#include <java/util/Collections.h>
#include <java/util/Map.h>
#include <java/util/Set.h>
#include <sun/management/ManagementFactoryHelper.h>
#include <jcpp.h>

#undef CLASS_LOADING_MXBEAN_NAME

using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $ClassLoadingMXBean = ::java::lang::management::ClassLoadingMXBean;
using $DefaultPlatformMBeanProvider = ::java::lang::management::DefaultPlatformMBeanProvider;
using $ManagementFactory = ::java::lang::management::ManagementFactory;
using $Collections = ::java::util::Collections;
using $Map = ::java::util::Map;
using $Set = ::java::util::Set;
using $ManagementFactoryHelper = ::sun::management::ManagementFactoryHelper;
using $PlatformMBeanProvider$PlatformComponent = ::sun::management::spi::PlatformMBeanProvider$PlatformComponent;

namespace java {
	namespace lang {
		namespace management {

$FieldInfo _DefaultPlatformMBeanProvider$1_FieldInfo_[] = {
	{"this$0", "Ljava/lang/management/DefaultPlatformMBeanProvider;", nullptr, $FINAL | $SYNTHETIC, $field(DefaultPlatformMBeanProvider$1, this$0)},
	{"classLoadingInterfaceNames", "Ljava/util/Set;", "Ljava/util/Set<Ljava/lang/String;>;", $PRIVATE | $FINAL, $field(DefaultPlatformMBeanProvider$1, classLoadingInterfaceNames)},
	{}
};

$MethodInfo _DefaultPlatformMBeanProvider$1_MethodInfo_[] = {
	{"<init>", "(Ljava/lang/management/DefaultPlatformMBeanProvider;)V", nullptr, 0, $method(static_cast<void(DefaultPlatformMBeanProvider$1::*)($DefaultPlatformMBeanProvider*)>(&DefaultPlatformMBeanProvider$1::init$))},
	{"getObjectNamePattern", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"mbeanInterfaceNames", "()Ljava/util/Set;", "()Ljava/util/Set<Ljava/lang/String;>;", $PUBLIC},
	{"mbeanInterfaces", "()Ljava/util/Set;", "()Ljava/util/Set<Ljava/lang/Class<+Ljava/lang/management/ClassLoadingMXBean;>;>;", $PUBLIC},
	{"nameToMBeanMap", "()Ljava/util/Map;", "()Ljava/util/Map<Ljava/lang/String;Ljava/lang/management/ClassLoadingMXBean;>;", $PUBLIC},
	{}
};

$EnclosingMethodInfo _DefaultPlatformMBeanProvider$1_EnclosingMethodInfo_ = {
	"java.lang.management.DefaultPlatformMBeanProvider",
	"init",
	"()Ljava/util/List;"
};

$InnerClassInfo _DefaultPlatformMBeanProvider$1_InnerClassesInfo_[] = {
	{"java.lang.management.DefaultPlatformMBeanProvider$1", nullptr, nullptr, 0},
	{"sun.management.spi.PlatformMBeanProvider$PlatformComponent", "sun.management.spi.PlatformMBeanProvider", "PlatformComponent", $PUBLIC | $STATIC | $INTERFACE | $ABSTRACT},
	{}
};

$ClassInfo _DefaultPlatformMBeanProvider$1_ClassInfo_ = {
	$ACC_SUPER,
	"java.lang.management.DefaultPlatformMBeanProvider$1",
	"java.lang.Object",
	"sun.management.spi.PlatformMBeanProvider$PlatformComponent",
	_DefaultPlatformMBeanProvider$1_FieldInfo_,
	_DefaultPlatformMBeanProvider$1_MethodInfo_,
	"Ljava/lang/Object;Lsun/management/spi/PlatformMBeanProvider$PlatformComponent<Ljava/lang/management/ClassLoadingMXBean;>;",
	&_DefaultPlatformMBeanProvider$1_EnclosingMethodInfo_,
	_DefaultPlatformMBeanProvider$1_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"java.lang.management.DefaultPlatformMBeanProvider"
};

$Object* allocate$DefaultPlatformMBeanProvider$1($Class* clazz) {
	return $of($alloc(DefaultPlatformMBeanProvider$1));
}

void DefaultPlatformMBeanProvider$1::init$($DefaultPlatformMBeanProvider* this$0) {
	$set(this, this$0, this$0);
	$set(this, classLoadingInterfaceNames, $Collections::singleton("java.lang.management.ClassLoadingMXBean"_s));
}

$Set* DefaultPlatformMBeanProvider$1::mbeanInterfaces() {
	$load($ClassLoadingMXBean);
	return $Collections::singleton($ClassLoadingMXBean::class$);
}

$Set* DefaultPlatformMBeanProvider$1::mbeanInterfaceNames() {
	return this->classLoadingInterfaceNames;
}

$String* DefaultPlatformMBeanProvider$1::getObjectNamePattern() {
	$init($ManagementFactory);
	return $ManagementFactory::CLASS_LOADING_MXBEAN_NAME;
}

$Map* DefaultPlatformMBeanProvider$1::nameToMBeanMap() {
	$init($ManagementFactory);
	return $Collections::singletonMap($ManagementFactory::CLASS_LOADING_MXBEAN_NAME, $($ManagementFactoryHelper::getClassLoadingMXBean()));
}

DefaultPlatformMBeanProvider$1::DefaultPlatformMBeanProvider$1() {
}

$Class* DefaultPlatformMBeanProvider$1::load$($String* name, bool initialize) {
	$loadClass(DefaultPlatformMBeanProvider$1, name, initialize, &_DefaultPlatformMBeanProvider$1_ClassInfo_, allocate$DefaultPlatformMBeanProvider$1);
	return class$;
}

$Class* DefaultPlatformMBeanProvider$1::class$ = nullptr;

		} // management
	} // lang
} // java
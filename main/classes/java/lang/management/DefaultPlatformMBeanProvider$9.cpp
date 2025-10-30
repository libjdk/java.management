#include <java/lang/management/DefaultPlatformMBeanProvider$9.h>

#include <java/lang/management/DefaultPlatformMBeanProvider.h>
#include <java/lang/management/PlatformLoggingMXBean.h>
#include <java/util/Collections.h>
#include <java/util/Map.h>
#include <java/util/Set.h>
#include <sun/management/ManagementFactoryHelper.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $DefaultPlatformMBeanProvider = ::java::lang::management::DefaultPlatformMBeanProvider;
using $PlatformLoggingMXBean = ::java::lang::management::PlatformLoggingMXBean;
using $Collections = ::java::util::Collections;
using $Map = ::java::util::Map;
using $Set = ::java::util::Set;
using $ManagementFactoryHelper = ::sun::management::ManagementFactoryHelper;
using $PlatformMBeanProvider$PlatformComponent = ::sun::management::spi::PlatformMBeanProvider$PlatformComponent;

namespace java {
	namespace lang {
		namespace management {

$FieldInfo _DefaultPlatformMBeanProvider$9_FieldInfo_[] = {
	{"this$0", "Ljava/lang/management/DefaultPlatformMBeanProvider;", nullptr, $FINAL | $SYNTHETIC, $field(DefaultPlatformMBeanProvider$9, this$0)},
	{"platformLoggingMXBeanInterfaceNames", "Ljava/util/Set;", "Ljava/util/Set<Ljava/lang/String;>;", $PRIVATE | $FINAL, $field(DefaultPlatformMBeanProvider$9, platformLoggingMXBeanInterfaceNames)},
	{}
};

$MethodInfo _DefaultPlatformMBeanProvider$9_MethodInfo_[] = {
	{"<init>", "(Ljava/lang/management/DefaultPlatformMBeanProvider;)V", nullptr, 0, $method(static_cast<void(DefaultPlatformMBeanProvider$9::*)($DefaultPlatformMBeanProvider*)>(&DefaultPlatformMBeanProvider$9::init$))},
	{"getObjectNamePattern", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"mbeanInterfaceNames", "()Ljava/util/Set;", "()Ljava/util/Set<Ljava/lang/String;>;", $PUBLIC},
	{"mbeanInterfaces", "()Ljava/util/Set;", "()Ljava/util/Set<Ljava/lang/Class<+Ljava/lang/management/PlatformLoggingMXBean;>;>;", $PUBLIC},
	{"nameToMBeanMap", "()Ljava/util/Map;", "()Ljava/util/Map<Ljava/lang/String;Ljava/lang/management/PlatformLoggingMXBean;>;", $PUBLIC},
	{}
};

$EnclosingMethodInfo _DefaultPlatformMBeanProvider$9_EnclosingMethodInfo_ = {
	"java.lang.management.DefaultPlatformMBeanProvider",
	"init",
	"()Ljava/util/List;"
};

$InnerClassInfo _DefaultPlatformMBeanProvider$9_InnerClassesInfo_[] = {
	{"java.lang.management.DefaultPlatformMBeanProvider$9", nullptr, nullptr, 0},
	{"sun.management.spi.PlatformMBeanProvider$PlatformComponent", "sun.management.spi.PlatformMBeanProvider", "PlatformComponent", $PUBLIC | $STATIC | $INTERFACE | $ABSTRACT},
	{}
};

$ClassInfo _DefaultPlatformMBeanProvider$9_ClassInfo_ = {
	$ACC_SUPER,
	"java.lang.management.DefaultPlatformMBeanProvider$9",
	"java.lang.Object",
	"sun.management.spi.PlatformMBeanProvider$PlatformComponent",
	_DefaultPlatformMBeanProvider$9_FieldInfo_,
	_DefaultPlatformMBeanProvider$9_MethodInfo_,
	"Ljava/lang/Object;Lsun/management/spi/PlatformMBeanProvider$PlatformComponent<Ljava/lang/management/PlatformLoggingMXBean;>;",
	&_DefaultPlatformMBeanProvider$9_EnclosingMethodInfo_,
	_DefaultPlatformMBeanProvider$9_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"java.lang.management.DefaultPlatformMBeanProvider"
};

$Object* allocate$DefaultPlatformMBeanProvider$9($Class* clazz) {
	return $of($alloc(DefaultPlatformMBeanProvider$9));
}

void DefaultPlatformMBeanProvider$9::init$($DefaultPlatformMBeanProvider* this$0) {
	$set(this, this$0, this$0);
	$set(this, platformLoggingMXBeanInterfaceNames, $Collections::singleton("java.lang.management.PlatformLoggingMXBean"_s));
}

$Set* DefaultPlatformMBeanProvider$9::mbeanInterfaces() {
	$load($PlatformLoggingMXBean);
	return $Collections::singleton($PlatformLoggingMXBean::class$);
}

$Set* DefaultPlatformMBeanProvider$9::mbeanInterfaceNames() {
	return this->platformLoggingMXBeanInterfaceNames;
}

$String* DefaultPlatformMBeanProvider$9::getObjectNamePattern() {
	return "java.util.logging:type=Logging"_s;
}

$Map* DefaultPlatformMBeanProvider$9::nameToMBeanMap() {
	return $Collections::singletonMap("java.util.logging:type=Logging"_s, $($ManagementFactoryHelper::getPlatformLoggingMXBean()));
}

DefaultPlatformMBeanProvider$9::DefaultPlatformMBeanProvider$9() {
}

$Class* DefaultPlatformMBeanProvider$9::load$($String* name, bool initialize) {
	$loadClass(DefaultPlatformMBeanProvider$9, name, initialize, &_DefaultPlatformMBeanProvider$9_ClassInfo_, allocate$DefaultPlatformMBeanProvider$9);
	return class$;
}

$Class* DefaultPlatformMBeanProvider$9::class$ = nullptr;

		} // management
	} // lang
} // java
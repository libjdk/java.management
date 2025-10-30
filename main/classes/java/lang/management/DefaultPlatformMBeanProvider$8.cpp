#include <java/lang/management/DefaultPlatformMBeanProvider$8.h>

#include <java/lang/management/DefaultPlatformMBeanProvider.h>
#include <java/lang/management/ManagementFactory.h>
#include <java/lang/management/ThreadMXBean.h>
#include <java/util/Collections.h>
#include <java/util/Map.h>
#include <java/util/Set.h>
#include <sun/management/ManagementFactoryHelper.h>
#include <jcpp.h>

#undef THREAD_MXBEAN_NAME

using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $DefaultPlatformMBeanProvider = ::java::lang::management::DefaultPlatformMBeanProvider;
using $ManagementFactory = ::java::lang::management::ManagementFactory;
using $ThreadMXBean = ::java::lang::management::ThreadMXBean;
using $Collections = ::java::util::Collections;
using $Map = ::java::util::Map;
using $Set = ::java::util::Set;
using $ManagementFactoryHelper = ::sun::management::ManagementFactoryHelper;
using $PlatformMBeanProvider$PlatformComponent = ::sun::management::spi::PlatformMBeanProvider$PlatformComponent;

namespace java {
	namespace lang {
		namespace management {

$FieldInfo _DefaultPlatformMBeanProvider$8_FieldInfo_[] = {
	{"this$0", "Ljava/lang/management/DefaultPlatformMBeanProvider;", nullptr, $FINAL | $SYNTHETIC, $field(DefaultPlatformMBeanProvider$8, this$0)},
	{"threadMXBeanInterfaceNames", "Ljava/util/Set;", "Ljava/util/Set<Ljava/lang/String;>;", $PRIVATE | $FINAL, $field(DefaultPlatformMBeanProvider$8, threadMXBeanInterfaceNames)},
	{}
};

$MethodInfo _DefaultPlatformMBeanProvider$8_MethodInfo_[] = {
	{"<init>", "(Ljava/lang/management/DefaultPlatformMBeanProvider;)V", nullptr, 0, $method(static_cast<void(DefaultPlatformMBeanProvider$8::*)($DefaultPlatformMBeanProvider*)>(&DefaultPlatformMBeanProvider$8::init$))},
	{"getObjectNamePattern", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"mbeanInterfaceNames", "()Ljava/util/Set;", "()Ljava/util/Set<Ljava/lang/String;>;", $PUBLIC},
	{"mbeanInterfaces", "()Ljava/util/Set;", "()Ljava/util/Set<Ljava/lang/Class<+Ljava/lang/management/ThreadMXBean;>;>;", $PUBLIC},
	{"nameToMBeanMap", "()Ljava/util/Map;", "()Ljava/util/Map<Ljava/lang/String;Ljava/lang/management/ThreadMXBean;>;", $PUBLIC},
	{}
};

$EnclosingMethodInfo _DefaultPlatformMBeanProvider$8_EnclosingMethodInfo_ = {
	"java.lang.management.DefaultPlatformMBeanProvider",
	"init",
	"()Ljava/util/List;"
};

$InnerClassInfo _DefaultPlatformMBeanProvider$8_InnerClassesInfo_[] = {
	{"java.lang.management.DefaultPlatformMBeanProvider$8", nullptr, nullptr, 0},
	{"sun.management.spi.PlatformMBeanProvider$PlatformComponent", "sun.management.spi.PlatformMBeanProvider", "PlatformComponent", $PUBLIC | $STATIC | $INTERFACE | $ABSTRACT},
	{}
};

$ClassInfo _DefaultPlatformMBeanProvider$8_ClassInfo_ = {
	$ACC_SUPER,
	"java.lang.management.DefaultPlatformMBeanProvider$8",
	"java.lang.Object",
	"sun.management.spi.PlatformMBeanProvider$PlatformComponent",
	_DefaultPlatformMBeanProvider$8_FieldInfo_,
	_DefaultPlatformMBeanProvider$8_MethodInfo_,
	"Ljava/lang/Object;Lsun/management/spi/PlatformMBeanProvider$PlatformComponent<Ljava/lang/management/ThreadMXBean;>;",
	&_DefaultPlatformMBeanProvider$8_EnclosingMethodInfo_,
	_DefaultPlatformMBeanProvider$8_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"java.lang.management.DefaultPlatformMBeanProvider"
};

$Object* allocate$DefaultPlatformMBeanProvider$8($Class* clazz) {
	return $of($alloc(DefaultPlatformMBeanProvider$8));
}

void DefaultPlatformMBeanProvider$8::init$($DefaultPlatformMBeanProvider* this$0) {
	$set(this, this$0, this$0);
	$set(this, threadMXBeanInterfaceNames, $Collections::singleton("java.lang.management.ThreadMXBean"_s));
}

$Set* DefaultPlatformMBeanProvider$8::mbeanInterfaces() {
	$load($ThreadMXBean);
	return $Collections::singleton($ThreadMXBean::class$);
}

$Set* DefaultPlatformMBeanProvider$8::mbeanInterfaceNames() {
	return this->threadMXBeanInterfaceNames;
}

$String* DefaultPlatformMBeanProvider$8::getObjectNamePattern() {
	$init($ManagementFactory);
	return $ManagementFactory::THREAD_MXBEAN_NAME;
}

$Map* DefaultPlatformMBeanProvider$8::nameToMBeanMap() {
	$init($ManagementFactory);
	return $Collections::singletonMap($ManagementFactory::THREAD_MXBEAN_NAME, $($ManagementFactoryHelper::getThreadMXBean()));
}

DefaultPlatformMBeanProvider$8::DefaultPlatformMBeanProvider$8() {
}

$Class* DefaultPlatformMBeanProvider$8::load$($String* name, bool initialize) {
	$loadClass(DefaultPlatformMBeanProvider$8, name, initialize, &_DefaultPlatformMBeanProvider$8_ClassInfo_, allocate$DefaultPlatformMBeanProvider$8);
	return class$;
}

$Class* DefaultPlatformMBeanProvider$8::class$ = nullptr;

		} // management
	} // lang
} // java
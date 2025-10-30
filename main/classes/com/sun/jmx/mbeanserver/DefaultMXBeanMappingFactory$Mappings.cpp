#include <com/sun/jmx/mbeanserver/DefaultMXBeanMappingFactory$Mappings.h>

#include <com/sun/jmx/mbeanserver/DefaultMXBeanMappingFactory.h>
#include <java/util/WeakHashMap.h>
#include <jcpp.h>

using $DefaultMXBeanMappingFactory = ::com::sun::jmx::mbeanserver::DefaultMXBeanMappingFactory;
using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $WeakHashMap = ::java::util::WeakHashMap;

namespace com {
	namespace sun {
		namespace jmx {
			namespace mbeanserver {

$MethodInfo _DefaultMXBeanMappingFactory$Mappings_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PRIVATE, $method(static_cast<void(DefaultMXBeanMappingFactory$Mappings::*)()>(&DefaultMXBeanMappingFactory$Mappings::init$))},
	{}
};

$InnerClassInfo _DefaultMXBeanMappingFactory$Mappings_InnerClassesInfo_[] = {
	{"com.sun.jmx.mbeanserver.DefaultMXBeanMappingFactory$Mappings", "com.sun.jmx.mbeanserver.DefaultMXBeanMappingFactory", "Mappings", $PRIVATE | $STATIC | $FINAL},
	{}
};

$ClassInfo _DefaultMXBeanMappingFactory$Mappings_ClassInfo_ = {
	$FINAL | $ACC_SUPER,
	"com.sun.jmx.mbeanserver.DefaultMXBeanMappingFactory$Mappings",
	"java.util.WeakHashMap",
	nullptr,
	nullptr,
	_DefaultMXBeanMappingFactory$Mappings_MethodInfo_,
	"Ljava/util/WeakHashMap<Ljava/lang/reflect/Type;Ljava/lang/ref/WeakReference<Lcom/sun/jmx/mbeanserver/MXBeanMapping;>;>;",
	nullptr,
	_DefaultMXBeanMappingFactory$Mappings_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.jmx.mbeanserver.DefaultMXBeanMappingFactory"
};

$Object* allocate$DefaultMXBeanMappingFactory$Mappings($Class* clazz) {
	return $of($alloc(DefaultMXBeanMappingFactory$Mappings));
}

void DefaultMXBeanMappingFactory$Mappings::init$() {
	$WeakHashMap::init$();
}

DefaultMXBeanMappingFactory$Mappings::DefaultMXBeanMappingFactory$Mappings() {
}

$Class* DefaultMXBeanMappingFactory$Mappings::load$($String* name, bool initialize) {
	$loadClass(DefaultMXBeanMappingFactory$Mappings, name, initialize, &_DefaultMXBeanMappingFactory$Mappings_ClassInfo_, allocate$DefaultMXBeanMappingFactory$Mappings);
	return class$;
}

$Class* DefaultMXBeanMappingFactory$Mappings::class$ = nullptr;

			} // mbeanserver
		} // jmx
	} // sun
} // com
#include <com/sun/jmx/mbeanserver/MBeanIntrospector$PerInterfaceMap.h>

#include <com/sun/jmx/mbeanserver/MBeanIntrospector.h>
#include <java/util/WeakHashMap.h>
#include <jcpp.h>

using $MBeanIntrospector = ::com::sun::jmx::mbeanserver::MBeanIntrospector;
using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $WeakHashMap = ::java::util::WeakHashMap;

namespace com {
	namespace sun {
		namespace jmx {
			namespace mbeanserver {

$MethodInfo _MBeanIntrospector$PerInterfaceMap_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(MBeanIntrospector$PerInterfaceMap::*)()>(&MBeanIntrospector$PerInterfaceMap::init$))},
	{}
};

$InnerClassInfo _MBeanIntrospector$PerInterfaceMap_InnerClassesInfo_[] = {
	{"com.sun.jmx.mbeanserver.MBeanIntrospector$PerInterfaceMap", "com.sun.jmx.mbeanserver.MBeanIntrospector", "PerInterfaceMap", $STATIC | $FINAL},
	{}
};

$ClassInfo _MBeanIntrospector$PerInterfaceMap_ClassInfo_ = {
	$FINAL | $ACC_SUPER,
	"com.sun.jmx.mbeanserver.MBeanIntrospector$PerInterfaceMap",
	"java.util.WeakHashMap",
	nullptr,
	nullptr,
	_MBeanIntrospector$PerInterfaceMap_MethodInfo_,
	"<M:Ljava/lang/Object;>Ljava/util/WeakHashMap<Ljava/lang/Class<*>;Ljava/lang/ref/WeakReference<Lcom/sun/jmx/mbeanserver/PerInterface<TM;>;>;>;",
	nullptr,
	_MBeanIntrospector$PerInterfaceMap_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.jmx.mbeanserver.MBeanIntrospector"
};

$Object* allocate$MBeanIntrospector$PerInterfaceMap($Class* clazz) {
	return $of($alloc(MBeanIntrospector$PerInterfaceMap));
}

void MBeanIntrospector$PerInterfaceMap::init$() {
	$WeakHashMap::init$();
}

MBeanIntrospector$PerInterfaceMap::MBeanIntrospector$PerInterfaceMap() {
}

$Class* MBeanIntrospector$PerInterfaceMap::load$($String* name, bool initialize) {
	$loadClass(MBeanIntrospector$PerInterfaceMap, name, initialize, &_MBeanIntrospector$PerInterfaceMap_ClassInfo_, allocate$MBeanIntrospector$PerInterfaceMap);
	return class$;
}

$Class* MBeanIntrospector$PerInterfaceMap::class$ = nullptr;

			} // mbeanserver
		} // jmx
	} // sun
} // com
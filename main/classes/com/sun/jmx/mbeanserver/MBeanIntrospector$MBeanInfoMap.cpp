#include <com/sun/jmx/mbeanserver/MBeanIntrospector$MBeanInfoMap.h>

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

$MethodInfo _MBeanIntrospector$MBeanInfoMap_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(MBeanIntrospector$MBeanInfoMap::*)()>(&MBeanIntrospector$MBeanInfoMap::init$))},
	{}
};

$InnerClassInfo _MBeanIntrospector$MBeanInfoMap_InnerClassesInfo_[] = {
	{"com.sun.jmx.mbeanserver.MBeanIntrospector$MBeanInfoMap", "com.sun.jmx.mbeanserver.MBeanIntrospector", "MBeanInfoMap", $STATIC},
	{}
};

$ClassInfo _MBeanIntrospector$MBeanInfoMap_ClassInfo_ = {
	$ACC_SUPER,
	"com.sun.jmx.mbeanserver.MBeanIntrospector$MBeanInfoMap",
	"java.util.WeakHashMap",
	nullptr,
	nullptr,
	_MBeanIntrospector$MBeanInfoMap_MethodInfo_,
	"Ljava/util/WeakHashMap<Ljava/lang/Class<*>;Ljava/util/WeakHashMap<Ljava/lang/Class<*>;Ljavax/management/MBeanInfo;>;>;",
	nullptr,
	_MBeanIntrospector$MBeanInfoMap_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.jmx.mbeanserver.MBeanIntrospector"
};

$Object* allocate$MBeanIntrospector$MBeanInfoMap($Class* clazz) {
	return $of($alloc(MBeanIntrospector$MBeanInfoMap));
}

void MBeanIntrospector$MBeanInfoMap::init$() {
	$WeakHashMap::init$();
}

MBeanIntrospector$MBeanInfoMap::MBeanIntrospector$MBeanInfoMap() {
}

$Class* MBeanIntrospector$MBeanInfoMap::load$($String* name, bool initialize) {
	$loadClass(MBeanIntrospector$MBeanInfoMap, name, initialize, &_MBeanIntrospector$MBeanInfoMap_ClassInfo_, allocate$MBeanIntrospector$MBeanInfoMap);
	return class$;
}

$Class* MBeanIntrospector$MBeanInfoMap::class$ = nullptr;

			} // mbeanserver
		} // jmx
	} // sun
} // com
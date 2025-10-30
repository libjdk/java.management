#include <com/sun/jmx/mbeanserver/DefaultMXBeanMappingFactory$CompositeBuilderViaProxy.h>

#include <com/sun/jmx/mbeanserver/DefaultMXBeanMappingFactory$CompositeBuilder.h>
#include <com/sun/jmx/mbeanserver/DefaultMXBeanMappingFactory.h>
#include <com/sun/jmx/mbeanserver/MXBeanMapping.h>
#include <com/sun/jmx/mbeanserver/Util.h>
#include <java/lang/ClassLoader.h>
#include <java/lang/NoSuchMethodException.h>
#include <java/lang/reflect/InvocationHandler.h>
#include <java/lang/reflect/Method.h>
#include <java/lang/reflect/Modifier.h>
#include <java/lang/reflect/Proxy.h>
#include <java/util/Arrays.h>
#include <java/util/Collection.h>
#include <java/util/Iterator.h>
#include <java/util/List.h>
#include <java/util/Set.h>
#include <javax/management/openmbean/CompositeData.h>
#include <javax/management/openmbean/CompositeDataInvocationHandler.h>
#include <jcpp.h>

using $MXBeanMappingArray = $Array<::com::sun::jmx::mbeanserver::MXBeanMapping>;
using $MethodArray = $Array<::java::lang::reflect::Method>;
using $DefaultMXBeanMappingFactory = ::com::sun::jmx::mbeanserver::DefaultMXBeanMappingFactory;
using $DefaultMXBeanMappingFactory$CompositeBuilder = ::com::sun::jmx::mbeanserver::DefaultMXBeanMappingFactory$CompositeBuilder;
using $Util = ::com::sun::jmx::mbeanserver::Util;
using $ClassInfo = ::java::lang::ClassInfo;
using $ClassLoader = ::java::lang::ClassLoader;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $NoSuchMethodException = ::java::lang::NoSuchMethodException;
using $InvocationHandler = ::java::lang::reflect::InvocationHandler;
using $Method = ::java::lang::reflect::Method;
using $Modifier = ::java::lang::reflect::Modifier;
using $Proxy = ::java::lang::reflect::Proxy;
using $Arrays = ::java::util::Arrays;
using $Collection = ::java::util::Collection;
using $Iterator = ::java::util::Iterator;
using $List = ::java::util::List;
using $Set = ::java::util::Set;
using $CompositeData = ::javax::management::openmbean::CompositeData;
using $CompositeDataInvocationHandler = ::javax::management::openmbean::CompositeDataInvocationHandler;

namespace com {
	namespace sun {
		namespace jmx {
			namespace mbeanserver {

$MethodInfo _DefaultMXBeanMappingFactory$CompositeBuilderViaProxy_MethodInfo_[] = {
	{"<init>", "(Ljava/lang/Class;[Ljava/lang/String;)V", "(Ljava/lang/Class<*>;[Ljava/lang/String;)V", 0, $method(static_cast<void(DefaultMXBeanMappingFactory$CompositeBuilderViaProxy::*)($Class*,$StringArray*)>(&DefaultMXBeanMappingFactory$CompositeBuilderViaProxy::init$))},
	{"applicable", "([Ljava/lang/reflect/Method;)Ljava/lang/String;", nullptr, 0},
	{"fromCompositeData", "(Ljavax/management/openmbean/CompositeData;[Ljava/lang/String;[Lcom/sun/jmx/mbeanserver/MXBeanMapping;)Ljava/lang/Object;", nullptr, $FINAL},
	{}
};

$InnerClassInfo _DefaultMXBeanMappingFactory$CompositeBuilderViaProxy_InnerClassesInfo_[] = {
	{"com.sun.jmx.mbeanserver.DefaultMXBeanMappingFactory$CompositeBuilderViaProxy", "com.sun.jmx.mbeanserver.DefaultMXBeanMappingFactory", "CompositeBuilderViaProxy", $PRIVATE | $STATIC | $FINAL},
	{"com.sun.jmx.mbeanserver.DefaultMXBeanMappingFactory$CompositeBuilder", "com.sun.jmx.mbeanserver.DefaultMXBeanMappingFactory", "CompositeBuilder", $PRIVATE | $STATIC | $ABSTRACT},
	{}
};

$ClassInfo _DefaultMXBeanMappingFactory$CompositeBuilderViaProxy_ClassInfo_ = {
	$FINAL | $ACC_SUPER,
	"com.sun.jmx.mbeanserver.DefaultMXBeanMappingFactory$CompositeBuilderViaProxy",
	"com.sun.jmx.mbeanserver.DefaultMXBeanMappingFactory$CompositeBuilder",
	nullptr,
	nullptr,
	_DefaultMXBeanMappingFactory$CompositeBuilderViaProxy_MethodInfo_,
	nullptr,
	nullptr,
	_DefaultMXBeanMappingFactory$CompositeBuilderViaProxy_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.jmx.mbeanserver.DefaultMXBeanMappingFactory"
};

$Object* allocate$DefaultMXBeanMappingFactory$CompositeBuilderViaProxy($Class* clazz) {
	return $of($alloc(DefaultMXBeanMappingFactory$CompositeBuilderViaProxy));
}

void DefaultMXBeanMappingFactory$CompositeBuilderViaProxy::init$($Class* targetClass, $StringArray* itemNames) {
	$DefaultMXBeanMappingFactory$CompositeBuilder::init$(targetClass, itemNames);
}

$String* DefaultMXBeanMappingFactory$CompositeBuilderViaProxy::applicable($MethodArray* getters) {
	$useLocalCurrentObjectStackCache();
	$beforeCallerSensitive();
	$Class* targetClass = getTargetClass();
	if (!$nc(targetClass)->isInterface()) {
		return "not an interface"_s;
	}
	$var($Set, methods, $Util::newSet($($Arrays::asList($($nc(targetClass)->getMethods())))));
	$nc(methods)->removeAll($($Arrays::asList(getters)));
	$var($String, bad, nullptr);
	{
		$var($Iterator, i$, methods->iterator());
		for (; $nc(i$)->hasNext();) {
			$var($Method, m, $cast($Method, i$->next()));
			{
				$var($String, mname, $nc(m)->getName());
				$var($ClassArray, mparams, m->getParameterTypes());
				try {
					$var($Method, om, $Object::class$->getMethod(mname, mparams));
					if (!$Modifier::isPublic($nc(om)->getModifiers())) {
						$assign(bad, mname);
					}
				} catch ($NoSuchMethodException& e) {
					$assign(bad, mname);
				}
			}
		}
	}
	if (bad != nullptr) {
		return $str({"contains methods other than getters ("_s, bad, ")"_s});
	}
	return nullptr;
}

$Object* DefaultMXBeanMappingFactory$CompositeBuilderViaProxy::fromCompositeData($CompositeData* cd, $StringArray* itemNames, $MXBeanMappingArray* converters) {
	$useLocalCurrentObjectStackCache();
	$beforeCallerSensitive();
	$Class* targetClass = getTargetClass();
	$var($ClassLoader, var$0, $nc(targetClass)->getClassLoader());
	$var($ClassArray, var$1, $new($ClassArray, {targetClass}));
	return $of($Proxy::newProxyInstance(var$0, var$1, static_cast<$InvocationHandler*>($$new($CompositeDataInvocationHandler, cd))));
}

DefaultMXBeanMappingFactory$CompositeBuilderViaProxy::DefaultMXBeanMappingFactory$CompositeBuilderViaProxy() {
}

$Class* DefaultMXBeanMappingFactory$CompositeBuilderViaProxy::load$($String* name, bool initialize) {
	$loadClass(DefaultMXBeanMappingFactory$CompositeBuilderViaProxy, name, initialize, &_DefaultMXBeanMappingFactory$CompositeBuilderViaProxy_ClassInfo_, allocate$DefaultMXBeanMappingFactory$CompositeBuilderViaProxy);
	return class$;
}

$Class* DefaultMXBeanMappingFactory$CompositeBuilderViaProxy::class$ = nullptr;

			} // mbeanserver
		} // jmx
	} // sun
} // com
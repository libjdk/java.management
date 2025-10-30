#include <com/sun/jmx/mbeanserver/DefaultMXBeanMappingFactory$CompositeBuilderViaFrom.h>

#include <com/sun/jmx/mbeanserver/DefaultMXBeanMappingFactory$CompositeBuilder.h>
#include <com/sun/jmx/mbeanserver/DefaultMXBeanMappingFactory.h>
#include <com/sun/jmx/mbeanserver/MXBeanIntrospector.h>
#include <com/sun/jmx/mbeanserver/MXBeanMapping.h>
#include <java/io/InvalidObjectException.h>
#include <java/lang/reflect/Method.h>
#include <java/lang/reflect/Modifier.h>
#include <java/lang/reflect/Type.h>
#include <javax/management/openmbean/CompositeData.h>
#include <sun/reflect/misc/MethodUtil.h>
#include <jcpp.h>

using $MXBeanMappingArray = $Array<::com::sun::jmx::mbeanserver::MXBeanMapping>;
using $MethodArray = $Array<::java::lang::reflect::Method>;
using $DefaultMXBeanMappingFactory = ::com::sun::jmx::mbeanserver::DefaultMXBeanMappingFactory;
using $DefaultMXBeanMappingFactory$CompositeBuilder = ::com::sun::jmx::mbeanserver::DefaultMXBeanMappingFactory$CompositeBuilder;
using $MXBeanIntrospector = ::com::sun::jmx::mbeanserver::MXBeanIntrospector;
using $InvalidObjectException = ::java::io::InvalidObjectException;
using $ClassInfo = ::java::lang::ClassInfo;
using $Exception = ::java::lang::Exception;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $NullPointerException = ::java::lang::NullPointerException;
using $Method = ::java::lang::reflect::Method;
using $Modifier = ::java::lang::reflect::Modifier;
using $Type = ::java::lang::reflect::Type;
using $CompositeData = ::javax::management::openmbean::CompositeData;
using $MethodUtil = ::sun::reflect::misc::MethodUtil;

namespace com {
	namespace sun {
		namespace jmx {
			namespace mbeanserver {

$FieldInfo _DefaultMXBeanMappingFactory$CompositeBuilderViaFrom_FieldInfo_[] = {
	{"fromMethod", "Ljava/lang/reflect/Method;", nullptr, $PRIVATE, $field(DefaultMXBeanMappingFactory$CompositeBuilderViaFrom, fromMethod)},
	{}
};

$MethodInfo _DefaultMXBeanMappingFactory$CompositeBuilderViaFrom_MethodInfo_[] = {
	{"<init>", "(Ljava/lang/Class;[Ljava/lang/String;)V", "(Ljava/lang/Class<*>;[Ljava/lang/String;)V", 0, $method(static_cast<void(DefaultMXBeanMappingFactory$CompositeBuilderViaFrom::*)($Class*,$StringArray*)>(&DefaultMXBeanMappingFactory$CompositeBuilderViaFrom::init$))},
	{"applicable", "([Ljava/lang/reflect/Method;)Ljava/lang/String;", nullptr, 0, nullptr, "java.io.InvalidObjectException"},
	{"fromCompositeData", "(Ljavax/management/openmbean/CompositeData;[Ljava/lang/String;[Lcom/sun/jmx/mbeanserver/MXBeanMapping;)Ljava/lang/Object;", nullptr, $FINAL, nullptr, "java.io.InvalidObjectException"},
	{}
};

$InnerClassInfo _DefaultMXBeanMappingFactory$CompositeBuilderViaFrom_InnerClassesInfo_[] = {
	{"com.sun.jmx.mbeanserver.DefaultMXBeanMappingFactory$CompositeBuilderViaFrom", "com.sun.jmx.mbeanserver.DefaultMXBeanMappingFactory", "CompositeBuilderViaFrom", $PRIVATE | $STATIC | $FINAL},
	{"com.sun.jmx.mbeanserver.DefaultMXBeanMappingFactory$CompositeBuilder", "com.sun.jmx.mbeanserver.DefaultMXBeanMappingFactory", "CompositeBuilder", $PRIVATE | $STATIC | $ABSTRACT},
	{}
};

$ClassInfo _DefaultMXBeanMappingFactory$CompositeBuilderViaFrom_ClassInfo_ = {
	$FINAL | $ACC_SUPER,
	"com.sun.jmx.mbeanserver.DefaultMXBeanMappingFactory$CompositeBuilderViaFrom",
	"com.sun.jmx.mbeanserver.DefaultMXBeanMappingFactory$CompositeBuilder",
	nullptr,
	_DefaultMXBeanMappingFactory$CompositeBuilderViaFrom_FieldInfo_,
	_DefaultMXBeanMappingFactory$CompositeBuilderViaFrom_MethodInfo_,
	nullptr,
	nullptr,
	_DefaultMXBeanMappingFactory$CompositeBuilderViaFrom_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.jmx.mbeanserver.DefaultMXBeanMappingFactory"
};

$Object* allocate$DefaultMXBeanMappingFactory$CompositeBuilderViaFrom($Class* clazz) {
	return $of($alloc(DefaultMXBeanMappingFactory$CompositeBuilderViaFrom));
}

void DefaultMXBeanMappingFactory$CompositeBuilderViaFrom::init$($Class* targetClass, $StringArray* itemNames) {
	$DefaultMXBeanMappingFactory$CompositeBuilder::init$(targetClass, itemNames);
}

$String* DefaultMXBeanMappingFactory$CompositeBuilderViaFrom::applicable($MethodArray* getters) {
	$useLocalCurrentObjectStackCache();
	$beforeCallerSensitive();
	$Class* targetClass = getTargetClass();
	try {
		$load($CompositeData);
		$var($Method, fromMethod, $nc(targetClass)->getMethod("from"_s, $$new($ClassArray, {$CompositeData::class$})));
		if (!$Modifier::isStatic($nc(fromMethod)->getModifiers())) {
			$var($String, msg, "Method from(CompositeData) is not static"_s);
			$throwNew($InvalidObjectException, msg);
		}
		if ($nc(fromMethod)->getReturnType() != getTargetClass()) {
			$var($String, var$0, $$str({"Method from(CompositeData) returns "_s, $($MXBeanIntrospector::typeName(fromMethod->getReturnType())), " not "_s}));
			$var($String, msg, $concat(var$0, $($MXBeanIntrospector::typeName(targetClass))));
			$throwNew($InvalidObjectException, msg);
		}
		$set(this, fromMethod, fromMethod);
		return nullptr;
	} catch ($InvalidObjectException& e) {
		$throw(e);
	} catch ($Exception& e) {
		return "no method from(CompositeData)"_s;
	}
	$shouldNotReachHere();
}

$Object* DefaultMXBeanMappingFactory$CompositeBuilderViaFrom::fromCompositeData($CompositeData* cd, $StringArray* itemNames, $MXBeanMappingArray* converters) {
	$useLocalCurrentObjectStackCache();
	try {
		return $of($MethodUtil::invoke(this->fromMethod, nullptr, $$new($ObjectArray, {$of(cd)})));
	} catch ($Exception& e) {
		$var($String, msg, "Failed to invoke from(CompositeData)"_s);
		$throw($($DefaultMXBeanMappingFactory::invalidObjectException(msg, e)));
	}
	$shouldNotReachHere();
}

DefaultMXBeanMappingFactory$CompositeBuilderViaFrom::DefaultMXBeanMappingFactory$CompositeBuilderViaFrom() {
}

$Class* DefaultMXBeanMappingFactory$CompositeBuilderViaFrom::load$($String* name, bool initialize) {
	$loadClass(DefaultMXBeanMappingFactory$CompositeBuilderViaFrom, name, initialize, &_DefaultMXBeanMappingFactory$CompositeBuilderViaFrom_ClassInfo_, allocate$DefaultMXBeanMappingFactory$CompositeBuilderViaFrom);
	return class$;
}

$Class* DefaultMXBeanMappingFactory$CompositeBuilderViaFrom::class$ = nullptr;

			} // mbeanserver
		} // jmx
	} // sun
} // com
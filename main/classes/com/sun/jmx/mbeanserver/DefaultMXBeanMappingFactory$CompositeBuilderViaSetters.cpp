#include <com/sun/jmx/mbeanserver/DefaultMXBeanMappingFactory$CompositeBuilderViaSetters.h>

#include <com/sun/jmx/mbeanserver/DefaultMXBeanMappingFactory$CompositeBuilder.h>
#include <com/sun/jmx/mbeanserver/DefaultMXBeanMappingFactory.h>
#include <com/sun/jmx/mbeanserver/MXBeanMapping.h>
#include <java/io/InvalidObjectException.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <javax/management/openmbean/CompositeData.h>
#include <sun/reflect/misc/MethodUtil.h>
#include <sun/reflect/misc/ReflectUtil.h>
#include <jcpp.h>

#undef TYPE

using $MXBeanMappingArray = $Array<::com::sun::jmx::mbeanserver::MXBeanMapping>;
using $MethodArray = $Array<::java::lang::reflect::Method>;
using $DefaultMXBeanMappingFactory = ::com::sun::jmx::mbeanserver::DefaultMXBeanMappingFactory;
using $DefaultMXBeanMappingFactory$CompositeBuilder = ::com::sun::jmx::mbeanserver::DefaultMXBeanMappingFactory$CompositeBuilder;
using $MXBeanMapping = ::com::sun::jmx::mbeanserver::MXBeanMapping;
using $InvalidObjectException = ::java::io::InvalidObjectException;
using $ClassInfo = ::java::lang::ClassInfo;
using $Exception = ::java::lang::Exception;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $NullPointerException = ::java::lang::NullPointerException;
using $Void = ::java::lang::Void;
using $Constructor = ::java::lang::reflect::Constructor;
using $Method = ::java::lang::reflect::Method;
using $CompositeData = ::javax::management::openmbean::CompositeData;
using $MethodUtil = ::sun::reflect::misc::MethodUtil;
using $ReflectUtil = ::sun::reflect::misc::ReflectUtil;

namespace com {
	namespace sun {
		namespace jmx {
			namespace mbeanserver {

$FieldInfo _DefaultMXBeanMappingFactory$CompositeBuilderViaSetters_FieldInfo_[] = {
	{"setters", "[Ljava/lang/reflect/Method;", nullptr, $PRIVATE, $field(DefaultMXBeanMappingFactory$CompositeBuilderViaSetters, setters)},
	{}
};

$MethodInfo _DefaultMXBeanMappingFactory$CompositeBuilderViaSetters_MethodInfo_[] = {
	{"<init>", "(Ljava/lang/Class;[Ljava/lang/String;)V", "(Ljava/lang/Class<*>;[Ljava/lang/String;)V", 0, $method(static_cast<void(DefaultMXBeanMappingFactory$CompositeBuilderViaSetters::*)($Class*,$StringArray*)>(&DefaultMXBeanMappingFactory$CompositeBuilderViaSetters::init$))},
	{"applicable", "([Ljava/lang/reflect/Method;)Ljava/lang/String;", nullptr, 0},
	{"fromCompositeData", "(Ljavax/management/openmbean/CompositeData;[Ljava/lang/String;[Lcom/sun/jmx/mbeanserver/MXBeanMapping;)Ljava/lang/Object;", nullptr, 0, nullptr, "java.io.InvalidObjectException"},
	{}
};

$InnerClassInfo _DefaultMXBeanMappingFactory$CompositeBuilderViaSetters_InnerClassesInfo_[] = {
	{"com.sun.jmx.mbeanserver.DefaultMXBeanMappingFactory$CompositeBuilderViaSetters", "com.sun.jmx.mbeanserver.DefaultMXBeanMappingFactory", "CompositeBuilderViaSetters", $PRIVATE | $STATIC},
	{"com.sun.jmx.mbeanserver.DefaultMXBeanMappingFactory$CompositeBuilder", "com.sun.jmx.mbeanserver.DefaultMXBeanMappingFactory", "CompositeBuilder", $PRIVATE | $STATIC | $ABSTRACT},
	{}
};

$ClassInfo _DefaultMXBeanMappingFactory$CompositeBuilderViaSetters_ClassInfo_ = {
	$ACC_SUPER,
	"com.sun.jmx.mbeanserver.DefaultMXBeanMappingFactory$CompositeBuilderViaSetters",
	"com.sun.jmx.mbeanserver.DefaultMXBeanMappingFactory$CompositeBuilder",
	nullptr,
	_DefaultMXBeanMappingFactory$CompositeBuilderViaSetters_FieldInfo_,
	_DefaultMXBeanMappingFactory$CompositeBuilderViaSetters_MethodInfo_,
	nullptr,
	nullptr,
	_DefaultMXBeanMappingFactory$CompositeBuilderViaSetters_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.jmx.mbeanserver.DefaultMXBeanMappingFactory"
};

$Object* allocate$DefaultMXBeanMappingFactory$CompositeBuilderViaSetters($Class* clazz) {
	return $of($alloc(DefaultMXBeanMappingFactory$CompositeBuilderViaSetters));
}

void DefaultMXBeanMappingFactory$CompositeBuilderViaSetters::init$($Class* targetClass, $StringArray* itemNames) {
	$DefaultMXBeanMappingFactory$CompositeBuilder::init$(targetClass, itemNames);
}

$String* DefaultMXBeanMappingFactory$CompositeBuilderViaSetters::applicable($MethodArray* getters) {
	$useLocalCurrentObjectStackCache();
	$beforeCallerSensitive();
	try {
		$var($Constructor, c, $nc(getTargetClass())->getConstructor($$new($ClassArray, 0)));
	} catch ($Exception& e) {
		return "does not have a public no-arg constructor"_s;
	}
	$var($MethodArray, setters, $new($MethodArray, $nc(getters)->length));
	for (int32_t i = 0; i < getters->length; ++i) {
		$var($Method, getter, getters->get(i));
		$Class* returnType = $nc(getter)->getReturnType();
		$var($String, name, $DefaultMXBeanMappingFactory::propertyName(getter));
		$var($String, setterName, $str({"set"_s, name}));
		$var($Method, setter, nullptr);
		try {
			$assign(setter, $nc(getTargetClass())->getMethod(setterName, $$new($ClassArray, {returnType})));
			$init($Void);
			if ($nc(setter)->getReturnType() != $Void::TYPE) {
				$throwNew($Exception);
			}
		} catch ($Exception& e) {
			return $str({"not all getters have corresponding setters ("_s, getter, ")"_s});
		}
		setters->set(i, setter);
	}
	$set(this, setters, setters);
	return nullptr;
}

$Object* DefaultMXBeanMappingFactory$CompositeBuilderViaSetters::fromCompositeData($CompositeData* cd, $StringArray* itemNames, $MXBeanMappingArray* converters) {
	$useLocalCurrentObjectStackCache();
	$beforeCallerSensitive();
	$var($Object, o, nullptr);
	try {
		$Class* targetClass = getTargetClass();
		$ReflectUtil::checkPackageAccess(targetClass);
		$var($Object, tmp, $nc(targetClass)->newInstance());
		$assign(o, tmp);
		for (int32_t i = 0; i < $nc(itemNames)->length; ++i) {
			if ($nc(cd)->containsKey(itemNames->get(i))) {
				$var($Object, openItem, cd->get(itemNames->get(i)));
				$var($Object, javaItem, $nc($nc(converters)->get(i))->fromOpenValue(openItem));
				$MethodUtil::invoke($nc(this->setters)->get(i), o, $$new($ObjectArray, {javaItem}));
			}
		}
	} catch ($Exception& e) {
		$throw($($DefaultMXBeanMappingFactory::invalidObjectException(e)));
	}
	return $of(o);
}

DefaultMXBeanMappingFactory$CompositeBuilderViaSetters::DefaultMXBeanMappingFactory$CompositeBuilderViaSetters() {
}

$Class* DefaultMXBeanMappingFactory$CompositeBuilderViaSetters::load$($String* name, bool initialize) {
	$loadClass(DefaultMXBeanMappingFactory$CompositeBuilderViaSetters, name, initialize, &_DefaultMXBeanMappingFactory$CompositeBuilderViaSetters_ClassInfo_, allocate$DefaultMXBeanMappingFactory$CompositeBuilderViaSetters);
	return class$;
}

$Class* DefaultMXBeanMappingFactory$CompositeBuilderViaSetters::class$ = nullptr;

			} // mbeanserver
		} // jmx
	} // sun
} // com
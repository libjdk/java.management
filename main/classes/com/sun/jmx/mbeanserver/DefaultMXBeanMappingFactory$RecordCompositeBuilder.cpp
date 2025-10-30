#include <com/sun/jmx/mbeanserver/DefaultMXBeanMappingFactory$RecordCompositeBuilder.h>

#include <com/sun/jmx/mbeanserver/DefaultMXBeanMappingFactory$CompositeBuilder.h>
#include <com/sun/jmx/mbeanserver/DefaultMXBeanMappingFactory$CompositeBuilderViaConstructor.h>
#include <com/sun/jmx/mbeanserver/DefaultMXBeanMappingFactory.h>
#include <com/sun/jmx/mbeanserver/MXBeanMapping.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/lang/reflect/RecordComponent.h>
#include <java/lang/reflect/Type.h>
#include <java/util/Arrays.h>
#include <java/util/Set.h>
#include <javax/management/openmbean/CompositeData.h>
#include <jcpp.h>

using $MXBeanMappingArray = $Array<::com::sun::jmx::mbeanserver::MXBeanMapping>;
using $MethodArray = $Array<::java::lang::reflect::Method>;
using $RecordComponentArray = $Array<::java::lang::reflect::RecordComponent>;
using $TypeArray = $Array<::java::lang::reflect::Type>;
using $DefaultMXBeanMappingFactory = ::com::sun::jmx::mbeanserver::DefaultMXBeanMappingFactory;
using $DefaultMXBeanMappingFactory$CompositeBuilder = ::com::sun::jmx::mbeanserver::DefaultMXBeanMappingFactory$CompositeBuilder;
using $DefaultMXBeanMappingFactory$CompositeBuilderViaConstructor = ::com::sun::jmx::mbeanserver::DefaultMXBeanMappingFactory$CompositeBuilderViaConstructor;
using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Constructor = ::java::lang::reflect::Constructor;
using $RecordComponent = ::java::lang::reflect::RecordComponent;
using $Type = ::java::lang::reflect::Type;
using $Arrays = ::java::util::Arrays;
using $Set = ::java::util::Set;
using $CompositeData = ::javax::management::openmbean::CompositeData;

namespace com {
	namespace sun {
		namespace jmx {
			namespace mbeanserver {

$MethodInfo _DefaultMXBeanMappingFactory$RecordCompositeBuilder_MethodInfo_[] = {
	{"<init>", "(Ljava/lang/Class;[Ljava/lang/String;)V", "(Ljava/lang/Class<*>;[Ljava/lang/String;)V", 0, $method(static_cast<void(DefaultMXBeanMappingFactory$RecordCompositeBuilder::*)($Class*,$StringArray*)>(&DefaultMXBeanMappingFactory$RecordCompositeBuilder::init$))},
	{"applicable", "([Ljava/lang/reflect/Method;)Ljava/lang/String;", nullptr, 0, nullptr, "java.io.InvalidObjectException"},
	{"fromCompositeData", "(Ljavax/management/openmbean/CompositeData;[Ljava/lang/String;[Lcom/sun/jmx/mbeanserver/MXBeanMapping;)Ljava/lang/Object;", nullptr, 0, nullptr, "java.io.InvalidObjectException"},
	{"getConstPropValues", "(Ljava/lang/reflect/Constructor;)[Ljava/lang/String;", "(Ljava/lang/reflect/Constructor<*>;)[Ljava/lang/String;", 0},
	{"matchingMechanism", "(Ljava/lang/reflect/Constructor;)Ljava/lang/String;", "(Ljava/lang/reflect/Constructor<*>;)Ljava/lang/String;", 0},
	{"referenceMechannism", "(Ljava/lang/String;)Ljava/lang/String;", nullptr, 0},
	{"reportConstructorsAmbiguousFor", "(Ljava/util/Set;)Ljava/lang/String;", "(Ljava/util/Set<Ljava/lang/String;>;)Ljava/lang/String;", 0},
	{"reportMultipleConstructorsFoundFor", "([Ljava/lang/String;)Ljava/lang/String;", nullptr, $TRANSIENT},
	{"reportNoConstructor", "()Ljava/lang/String;", nullptr, 0},
	{"reportNoConstructorFoundFor", "(Ljava/util/Set;)Ljava/lang/String;", "(Ljava/util/Set<Ljava/lang/String;>;)Ljava/lang/String;", 0},
	{}
};

$InnerClassInfo _DefaultMXBeanMappingFactory$RecordCompositeBuilder_InnerClassesInfo_[] = {
	{"com.sun.jmx.mbeanserver.DefaultMXBeanMappingFactory$RecordCompositeBuilder", "com.sun.jmx.mbeanserver.DefaultMXBeanMappingFactory", "RecordCompositeBuilder", $PRIVATE | $STATIC | $FINAL},
	{"com.sun.jmx.mbeanserver.DefaultMXBeanMappingFactory$CompositeBuilderViaConstructor", "com.sun.jmx.mbeanserver.DefaultMXBeanMappingFactory", "CompositeBuilderViaConstructor", $PRIVATE | $STATIC},
	{}
};

$ClassInfo _DefaultMXBeanMappingFactory$RecordCompositeBuilder_ClassInfo_ = {
	$FINAL | $ACC_SUPER,
	"com.sun.jmx.mbeanserver.DefaultMXBeanMappingFactory$RecordCompositeBuilder",
	"com.sun.jmx.mbeanserver.DefaultMXBeanMappingFactory$CompositeBuilderViaConstructor",
	nullptr,
	nullptr,
	_DefaultMXBeanMappingFactory$RecordCompositeBuilder_MethodInfo_,
	nullptr,
	nullptr,
	_DefaultMXBeanMappingFactory$RecordCompositeBuilder_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.jmx.mbeanserver.DefaultMXBeanMappingFactory"
};

$Object* allocate$DefaultMXBeanMappingFactory$RecordCompositeBuilder($Class* clazz) {
	return $of($alloc(DefaultMXBeanMappingFactory$RecordCompositeBuilder));
}

void DefaultMXBeanMappingFactory$RecordCompositeBuilder::init$($Class* targetClass, $StringArray* itemNames) {
	$DefaultMXBeanMappingFactory$CompositeBuilderViaConstructor::init$(targetClass, itemNames);
}

$StringArray* DefaultMXBeanMappingFactory$RecordCompositeBuilder::getConstPropValues($Constructor* ctor) {
	$useLocalCurrentObjectStackCache();
	$beforeCallerSensitive();
	$var($RecordComponentArray, components, $nc(getTargetClass())->getRecordComponents());
	$var($TypeArray, ptypes, $nc(ctor)->getGenericParameterTypes());
	if ($nc(components)->length != $nc(ptypes)->length) {
		return $DefaultMXBeanMappingFactory$CompositeBuilderViaConstructor::getConstPropValues(ctor);
	}
	int32_t len = $nc(components)->length;
	$var($StringArray, res, $new($StringArray, len));
	for (int32_t i = 0; i < len; ++i) {
		if (!$nc($of($nc(ptypes)->get(i)))->equals($($nc(components->get(i))->getGenericType()))) {
			return $DefaultMXBeanMappingFactory$CompositeBuilderViaConstructor::getConstPropValues(ctor);
		}
		res->set(i, $($nc(components->get(i))->getName()));
	}
	return res;
}

$String* DefaultMXBeanMappingFactory$RecordCompositeBuilder::applicable($MethodArray* getters) {
	$Class* targetClass = getTargetClass();
	if (!$nc(targetClass)->isRecord()) {
		return "class is not a record"_s;
	}
	return $DefaultMXBeanMappingFactory$CompositeBuilderViaConstructor::applicable(getters);
}

$Object* DefaultMXBeanMappingFactory$RecordCompositeBuilder::fromCompositeData($CompositeData* cd, $StringArray* itemNames, $MXBeanMappingArray* mappings) {
	return $of($DefaultMXBeanMappingFactory$CompositeBuilderViaConstructor::fromCompositeData(cd, itemNames, mappings));
}

$String* DefaultMXBeanMappingFactory$RecordCompositeBuilder::reportNoConstructor() {
	return "canonical constructor for record not found"_s;
}

$String* DefaultMXBeanMappingFactory$RecordCompositeBuilder::matchingMechanism($Constructor* constr) {
	return "canonical constructor"_s;
}

$String* DefaultMXBeanMappingFactory$RecordCompositeBuilder::referenceMechannism($String* matchingMechanism) {
	return matchingMechanism;
}

$String* DefaultMXBeanMappingFactory$RecordCompositeBuilder::reportMultipleConstructorsFoundFor($StringArray* propertyNames) {
	return $str({"More than one constructor has this set of names: "_s, $($Arrays::toString(propertyNames))});
}

$String* DefaultMXBeanMappingFactory$RecordCompositeBuilder::reportConstructorsAmbiguousFor($Set* names) {
	return $str({"Constructors would be ambiguous for these items: "_s, names});
}

$String* DefaultMXBeanMappingFactory$RecordCompositeBuilder::reportNoConstructorFoundFor($Set* names) {
	return $str({"No constructor has this set of items: "_s, names});
}

DefaultMXBeanMappingFactory$RecordCompositeBuilder::DefaultMXBeanMappingFactory$RecordCompositeBuilder() {
}

$Class* DefaultMXBeanMappingFactory$RecordCompositeBuilder::load$($String* name, bool initialize) {
	$loadClass(DefaultMXBeanMappingFactory$RecordCompositeBuilder, name, initialize, &_DefaultMXBeanMappingFactory$RecordCompositeBuilder_ClassInfo_, allocate$DefaultMXBeanMappingFactory$RecordCompositeBuilder);
	return class$;
}

$Class* DefaultMXBeanMappingFactory$RecordCompositeBuilder::class$ = nullptr;

			} // mbeanserver
		} // jmx
	} // sun
} // com
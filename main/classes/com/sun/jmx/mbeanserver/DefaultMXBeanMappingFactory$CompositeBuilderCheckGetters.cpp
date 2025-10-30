#include <com/sun/jmx/mbeanserver/DefaultMXBeanMappingFactory$CompositeBuilderCheckGetters.h>

#include <com/sun/jmx/mbeanserver/DefaultMXBeanMappingFactory$CompositeBuilder.h>
#include <com/sun/jmx/mbeanserver/DefaultMXBeanMappingFactory.h>
#include <com/sun/jmx/mbeanserver/MXBeanMapping.h>
#include <java/io/IOException.h>
#include <java/io/InvalidObjectException.h>
#include <java/io/ObjectStreamException.h>
#include <java/lang/Error.h>
#include <java/lang/reflect/Method.h>
#include <javax/management/openmbean/CompositeData.h>
#include <jcpp.h>

using $MXBeanMappingArray = $Array<::com::sun::jmx::mbeanserver::MXBeanMapping>;
using $MethodArray = $Array<::java::lang::reflect::Method>;
using $DefaultMXBeanMappingFactory = ::com::sun::jmx::mbeanserver::DefaultMXBeanMappingFactory;
using $DefaultMXBeanMappingFactory$CompositeBuilder = ::com::sun::jmx::mbeanserver::DefaultMXBeanMappingFactory$CompositeBuilder;
using $MXBeanMapping = ::com::sun::jmx::mbeanserver::MXBeanMapping;
using $IOException = ::java::io::IOException;
using $InvalidObjectException = ::java::io::InvalidObjectException;
using $ObjectStreamException = ::java::io::ObjectStreamException;
using $ClassInfo = ::java::lang::ClassInfo;
using $Error = ::java::lang::Error;
using $Exception = ::java::lang::Exception;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Method = ::java::lang::reflect::Method;
using $CompositeData = ::javax::management::openmbean::CompositeData;

namespace com {
	namespace sun {
		namespace jmx {
			namespace mbeanserver {

$FieldInfo _DefaultMXBeanMappingFactory$CompositeBuilderCheckGetters_FieldInfo_[] = {
	{"getterConverters", "[Lcom/sun/jmx/mbeanserver/MXBeanMapping;", nullptr, $PRIVATE | $FINAL, $field(DefaultMXBeanMappingFactory$CompositeBuilderCheckGetters, getterConverters)},
	{"possibleCause", "Ljava/lang/Throwable;", nullptr, $PRIVATE, $field(DefaultMXBeanMappingFactory$CompositeBuilderCheckGetters, possibleCause$)},
	{}
};

$MethodInfo _DefaultMXBeanMappingFactory$CompositeBuilderCheckGetters_MethodInfo_[] = {
	{"<init>", "(Ljava/lang/Class;[Ljava/lang/String;[Lcom/sun/jmx/mbeanserver/MXBeanMapping;)V", "(Ljava/lang/Class<*>;[Ljava/lang/String;[Lcom/sun/jmx/mbeanserver/MXBeanMapping;)V", 0, $method(static_cast<void(DefaultMXBeanMappingFactory$CompositeBuilderCheckGetters::*)($Class*,$StringArray*,$MXBeanMappingArray*)>(&DefaultMXBeanMappingFactory$CompositeBuilderCheckGetters::init$))},
	{"applicable", "([Ljava/lang/reflect/Method;)Ljava/lang/String;", nullptr, 0},
	{"fromCompositeData", "(Ljavax/management/openmbean/CompositeData;[Ljava/lang/String;[Lcom/sun/jmx/mbeanserver/MXBeanMapping;)Ljava/lang/Object;", nullptr, $FINAL},
	{"possibleCause", "()Ljava/lang/Throwable;", nullptr, 0},
	{}
};

$InnerClassInfo _DefaultMXBeanMappingFactory$CompositeBuilderCheckGetters_InnerClassesInfo_[] = {
	{"com.sun.jmx.mbeanserver.DefaultMXBeanMappingFactory$CompositeBuilderCheckGetters", "com.sun.jmx.mbeanserver.DefaultMXBeanMappingFactory", "CompositeBuilderCheckGetters", $PRIVATE | $STATIC},
	{"com.sun.jmx.mbeanserver.DefaultMXBeanMappingFactory$CompositeBuilder", "com.sun.jmx.mbeanserver.DefaultMXBeanMappingFactory", "CompositeBuilder", $PRIVATE | $STATIC | $ABSTRACT},
	{}
};

$ClassInfo _DefaultMXBeanMappingFactory$CompositeBuilderCheckGetters_ClassInfo_ = {
	$ACC_SUPER,
	"com.sun.jmx.mbeanserver.DefaultMXBeanMappingFactory$CompositeBuilderCheckGetters",
	"com.sun.jmx.mbeanserver.DefaultMXBeanMappingFactory$CompositeBuilder",
	nullptr,
	_DefaultMXBeanMappingFactory$CompositeBuilderCheckGetters_FieldInfo_,
	_DefaultMXBeanMappingFactory$CompositeBuilderCheckGetters_MethodInfo_,
	nullptr,
	nullptr,
	_DefaultMXBeanMappingFactory$CompositeBuilderCheckGetters_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.jmx.mbeanserver.DefaultMXBeanMappingFactory"
};

$Object* allocate$DefaultMXBeanMappingFactory$CompositeBuilderCheckGetters($Class* clazz) {
	return $of($alloc(DefaultMXBeanMappingFactory$CompositeBuilderCheckGetters));
}

void DefaultMXBeanMappingFactory$CompositeBuilderCheckGetters::init$($Class* targetClass, $StringArray* itemNames, $MXBeanMappingArray* getterConverters) {
	$DefaultMXBeanMappingFactory$CompositeBuilder::init$(targetClass, itemNames);
	$set(this, getterConverters, getterConverters);
}

$String* DefaultMXBeanMappingFactory$CompositeBuilderCheckGetters::applicable($MethodArray* getters) {
	$useLocalCurrentObjectStackCache();
	for (int32_t i = 0; i < $nc(getters)->length; ++i) {
		try {
			$nc($nc(this->getterConverters)->get(i))->checkReconstructible();
		} catch ($InvalidObjectException& e) {
			$set(this, possibleCause$, e);
			return $str({"method "_s, $($nc(getters->get(i))->getName()), " returns type that cannot be mapped back from OpenData"_s});
		}
	}
	return ""_s;
}

$Throwable* DefaultMXBeanMappingFactory$CompositeBuilderCheckGetters::possibleCause() {
	return this->possibleCause$;
}

$Object* DefaultMXBeanMappingFactory$CompositeBuilderCheckGetters::fromCompositeData($CompositeData* cd, $StringArray* itemNames, $MXBeanMappingArray* converters) {
	$throwNew($Error);
	$shouldNotReachHere();
}

DefaultMXBeanMappingFactory$CompositeBuilderCheckGetters::DefaultMXBeanMappingFactory$CompositeBuilderCheckGetters() {
}

$Class* DefaultMXBeanMappingFactory$CompositeBuilderCheckGetters::load$($String* name, bool initialize) {
	$loadClass(DefaultMXBeanMappingFactory$CompositeBuilderCheckGetters, name, initialize, &_DefaultMXBeanMappingFactory$CompositeBuilderCheckGetters_ClassInfo_, allocate$DefaultMXBeanMappingFactory$CompositeBuilderCheckGetters);
	return class$;
}

$Class* DefaultMXBeanMappingFactory$CompositeBuilderCheckGetters::class$ = nullptr;

			} // mbeanserver
		} // jmx
	} // sun
} // com
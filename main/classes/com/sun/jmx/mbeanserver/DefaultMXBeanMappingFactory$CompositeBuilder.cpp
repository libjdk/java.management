#include <com/sun/jmx/mbeanserver/DefaultMXBeanMappingFactory$CompositeBuilder.h>

#include <com/sun/jmx/mbeanserver/DefaultMXBeanMappingFactory.h>
#include <com/sun/jmx/mbeanserver/MXBeanMapping.h>
#include <java/lang/reflect/Method.h>
#include <javax/management/openmbean/CompositeData.h>
#include <jcpp.h>

using $MXBeanMappingArray = $Array<::com::sun::jmx::mbeanserver::MXBeanMapping>;
using $MethodArray = $Array<::java::lang::reflect::Method>;
using $DefaultMXBeanMappingFactory = ::com::sun::jmx::mbeanserver::DefaultMXBeanMappingFactory;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $CompositeData = ::javax::management::openmbean::CompositeData;

namespace com {
	namespace sun {
		namespace jmx {
			namespace mbeanserver {

$FieldInfo _DefaultMXBeanMappingFactory$CompositeBuilder_FieldInfo_[] = {
	{"targetClass", "Ljava/lang/Class;", "Ljava/lang/Class<*>;", $PRIVATE | $FINAL, $field(DefaultMXBeanMappingFactory$CompositeBuilder, targetClass)},
	{"itemNames", "[Ljava/lang/String;", nullptr, $PRIVATE | $FINAL, $field(DefaultMXBeanMappingFactory$CompositeBuilder, itemNames)},
	{}
};

$MethodInfo _DefaultMXBeanMappingFactory$CompositeBuilder_MethodInfo_[] = {
	{"<init>", "(Ljava/lang/Class;[Ljava/lang/String;)V", "(Ljava/lang/Class<*>;[Ljava/lang/String;)V", 0, $method(static_cast<void(DefaultMXBeanMappingFactory$CompositeBuilder::*)($Class*,$StringArray*)>(&DefaultMXBeanMappingFactory$CompositeBuilder::init$))},
	{"applicable", "([Ljava/lang/reflect/Method;)Ljava/lang/String;", nullptr, $ABSTRACT, nullptr, "java.io.InvalidObjectException"},
	{"fromCompositeData", "(Ljavax/management/openmbean/CompositeData;[Ljava/lang/String;[Lcom/sun/jmx/mbeanserver/MXBeanMapping;)Ljava/lang/Object;", nullptr, $ABSTRACT, nullptr, "java.io.InvalidObjectException"},
	{"getItemNames", "()[Ljava/lang/String;", nullptr, 0},
	{"getTargetClass", "()Ljava/lang/Class;", "()Ljava/lang/Class<*>;", 0},
	{"possibleCause", "()Ljava/lang/Throwable;", nullptr, 0},
	{}
};

$InnerClassInfo _DefaultMXBeanMappingFactory$CompositeBuilder_InnerClassesInfo_[] = {
	{"com.sun.jmx.mbeanserver.DefaultMXBeanMappingFactory$CompositeBuilder", "com.sun.jmx.mbeanserver.DefaultMXBeanMappingFactory", "CompositeBuilder", $PRIVATE | $STATIC | $ABSTRACT},
	{}
};

$ClassInfo _DefaultMXBeanMappingFactory$CompositeBuilder_ClassInfo_ = {
	$ACC_SUPER | $ABSTRACT,
	"com.sun.jmx.mbeanserver.DefaultMXBeanMappingFactory$CompositeBuilder",
	"java.lang.Object",
	nullptr,
	_DefaultMXBeanMappingFactory$CompositeBuilder_FieldInfo_,
	_DefaultMXBeanMappingFactory$CompositeBuilder_MethodInfo_,
	nullptr,
	nullptr,
	_DefaultMXBeanMappingFactory$CompositeBuilder_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.jmx.mbeanserver.DefaultMXBeanMappingFactory"
};

$Object* allocate$DefaultMXBeanMappingFactory$CompositeBuilder($Class* clazz) {
	return $of($alloc(DefaultMXBeanMappingFactory$CompositeBuilder));
}

void DefaultMXBeanMappingFactory$CompositeBuilder::init$($Class* targetClass, $StringArray* itemNames) {
	$set(this, targetClass, targetClass);
	$set(this, itemNames, itemNames);
}

$Class* DefaultMXBeanMappingFactory$CompositeBuilder::getTargetClass() {
	return this->targetClass;
}

$StringArray* DefaultMXBeanMappingFactory$CompositeBuilder::getItemNames() {
	return this->itemNames;
}

$Throwable* DefaultMXBeanMappingFactory$CompositeBuilder::possibleCause() {
	return nullptr;
}

DefaultMXBeanMappingFactory$CompositeBuilder::DefaultMXBeanMappingFactory$CompositeBuilder() {
}

$Class* DefaultMXBeanMappingFactory$CompositeBuilder::load$($String* name, bool initialize) {
	$loadClass(DefaultMXBeanMappingFactory$CompositeBuilder, name, initialize, &_DefaultMXBeanMappingFactory$CompositeBuilder_ClassInfo_, allocate$DefaultMXBeanMappingFactory$CompositeBuilder);
	return class$;
}

$Class* DefaultMXBeanMappingFactory$CompositeBuilder::class$ = nullptr;

			} // mbeanserver
		} // jmx
	} // sun
} // com
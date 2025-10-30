#include <com/sun/jmx/mbeanserver/DefaultMXBeanMappingFactory$NonNullMXBeanMapping.h>

#include <com/sun/jmx/mbeanserver/DefaultMXBeanMappingFactory.h>
#include <com/sun/jmx/mbeanserver/MXBeanMapping.h>
#include <java/lang/reflect/Type.h>
#include <javax/management/openmbean/OpenType.h>
#include <jcpp.h>

using $DefaultMXBeanMappingFactory = ::com::sun::jmx::mbeanserver::DefaultMXBeanMappingFactory;
using $MXBeanMapping = ::com::sun::jmx::mbeanserver::MXBeanMapping;
using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Type = ::java::lang::reflect::Type;
using $OpenType = ::javax::management::openmbean::OpenType;

namespace com {
	namespace sun {
		namespace jmx {
			namespace mbeanserver {

$MethodInfo _DefaultMXBeanMappingFactory$NonNullMXBeanMapping_MethodInfo_[] = {
	{"<init>", "(Ljava/lang/reflect/Type;Ljavax/management/openmbean/OpenType;)V", "(Ljava/lang/reflect/Type;Ljavax/management/openmbean/OpenType<*>;)V", 0, $method(static_cast<void(DefaultMXBeanMappingFactory$NonNullMXBeanMapping::*)($Type*,$OpenType*)>(&DefaultMXBeanMappingFactory$NonNullMXBeanMapping::init$))},
	{"fromNonNullOpenValue", "(Ljava/lang/Object;)Ljava/lang/Object;", nullptr, $ABSTRACT, nullptr, "java.io.InvalidObjectException"},
	{"fromOpenValue", "(Ljava/lang/Object;)Ljava/lang/Object;", nullptr, $PUBLIC | $FINAL, nullptr, "java.io.InvalidObjectException"},
	{"isIdentity", "()Z", nullptr, 0},
	{"toNonNullOpenValue", "(Ljava/lang/Object;)Ljava/lang/Object;", nullptr, $ABSTRACT, nullptr, "javax.management.openmbean.OpenDataException"},
	{"toOpenValue", "(Ljava/lang/Object;)Ljava/lang/Object;", nullptr, $PUBLIC | $FINAL, nullptr, "javax.management.openmbean.OpenDataException"},
	{}
};

$InnerClassInfo _DefaultMXBeanMappingFactory$NonNullMXBeanMapping_InnerClassesInfo_[] = {
	{"com.sun.jmx.mbeanserver.DefaultMXBeanMappingFactory$NonNullMXBeanMapping", "com.sun.jmx.mbeanserver.DefaultMXBeanMappingFactory", "NonNullMXBeanMapping", $STATIC | $ABSTRACT},
	{}
};

$ClassInfo _DefaultMXBeanMappingFactory$NonNullMXBeanMapping_ClassInfo_ = {
	$ACC_SUPER | $ABSTRACT,
	"com.sun.jmx.mbeanserver.DefaultMXBeanMappingFactory$NonNullMXBeanMapping",
	"com.sun.jmx.mbeanserver.MXBeanMapping",
	nullptr,
	nullptr,
	_DefaultMXBeanMappingFactory$NonNullMXBeanMapping_MethodInfo_,
	nullptr,
	nullptr,
	_DefaultMXBeanMappingFactory$NonNullMXBeanMapping_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.jmx.mbeanserver.DefaultMXBeanMappingFactory"
};

$Object* allocate$DefaultMXBeanMappingFactory$NonNullMXBeanMapping($Class* clazz) {
	return $of($alloc(DefaultMXBeanMappingFactory$NonNullMXBeanMapping));
}

void DefaultMXBeanMappingFactory$NonNullMXBeanMapping::init$($Type* javaType, $OpenType* openType) {
	$MXBeanMapping::init$(javaType, openType);
}

$Object* DefaultMXBeanMappingFactory$NonNullMXBeanMapping::fromOpenValue(Object$* openValue) {
	if (openValue == nullptr) {
		return $of(nullptr);
	} else {
		return $of(fromNonNullOpenValue(openValue));
	}
}

$Object* DefaultMXBeanMappingFactory$NonNullMXBeanMapping::toOpenValue(Object$* javaValue) {
	if (javaValue == nullptr) {
		return $of(nullptr);
	} else {
		return $of(toNonNullOpenValue(javaValue));
	}
}

bool DefaultMXBeanMappingFactory$NonNullMXBeanMapping::isIdentity() {
	return false;
}

DefaultMXBeanMappingFactory$NonNullMXBeanMapping::DefaultMXBeanMappingFactory$NonNullMXBeanMapping() {
}

$Class* DefaultMXBeanMappingFactory$NonNullMXBeanMapping::load$($String* name, bool initialize) {
	$loadClass(DefaultMXBeanMappingFactory$NonNullMXBeanMapping, name, initialize, &_DefaultMXBeanMappingFactory$NonNullMXBeanMapping_ClassInfo_, allocate$DefaultMXBeanMappingFactory$NonNullMXBeanMapping);
	return class$;
}

$Class* DefaultMXBeanMappingFactory$NonNullMXBeanMapping::class$ = nullptr;

			} // mbeanserver
		} // jmx
	} // sun
} // com
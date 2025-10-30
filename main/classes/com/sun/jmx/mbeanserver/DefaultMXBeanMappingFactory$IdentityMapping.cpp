#include <com/sun/jmx/mbeanserver/DefaultMXBeanMappingFactory$IdentityMapping.h>

#include <com/sun/jmx/mbeanserver/DefaultMXBeanMappingFactory$NonNullMXBeanMapping.h>
#include <com/sun/jmx/mbeanserver/DefaultMXBeanMappingFactory.h>
#include <java/lang/reflect/Type.h>
#include <javax/management/openmbean/OpenType.h>
#include <jcpp.h>

using $DefaultMXBeanMappingFactory = ::com::sun::jmx::mbeanserver::DefaultMXBeanMappingFactory;
using $DefaultMXBeanMappingFactory$NonNullMXBeanMapping = ::com::sun::jmx::mbeanserver::DefaultMXBeanMappingFactory$NonNullMXBeanMapping;
using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Type = ::java::lang::reflect::Type;
using $OpenType = ::javax::management::openmbean::OpenType;

namespace com {
	namespace sun {
		namespace jmx {
			namespace mbeanserver {

$MethodInfo _DefaultMXBeanMappingFactory$IdentityMapping_MethodInfo_[] = {
	{"<init>", "(Ljava/lang/reflect/Type;Ljavax/management/openmbean/OpenType;)V", "(Ljava/lang/reflect/Type;Ljavax/management/openmbean/OpenType<*>;)V", 0, $method(static_cast<void(DefaultMXBeanMappingFactory$IdentityMapping::*)($Type*,$OpenType*)>(&DefaultMXBeanMappingFactory$IdentityMapping::init$))},
	{"fromNonNullOpenValue", "(Ljava/lang/Object;)Ljava/lang/Object;", nullptr, 0, nullptr, "java.io.InvalidObjectException"},
	{"isIdentity", "()Z", nullptr, 0},
	{"toNonNullOpenValue", "(Ljava/lang/Object;)Ljava/lang/Object;", nullptr, 0, nullptr, "javax.management.openmbean.OpenDataException"},
	{}
};

$InnerClassInfo _DefaultMXBeanMappingFactory$IdentityMapping_InnerClassesInfo_[] = {
	{"com.sun.jmx.mbeanserver.DefaultMXBeanMappingFactory$IdentityMapping", "com.sun.jmx.mbeanserver.DefaultMXBeanMappingFactory", "IdentityMapping", $PRIVATE | $STATIC | $FINAL},
	{"com.sun.jmx.mbeanserver.DefaultMXBeanMappingFactory$NonNullMXBeanMapping", "com.sun.jmx.mbeanserver.DefaultMXBeanMappingFactory", "NonNullMXBeanMapping", $STATIC | $ABSTRACT},
	{}
};

$ClassInfo _DefaultMXBeanMappingFactory$IdentityMapping_ClassInfo_ = {
	$FINAL | $ACC_SUPER,
	"com.sun.jmx.mbeanserver.DefaultMXBeanMappingFactory$IdentityMapping",
	"com.sun.jmx.mbeanserver.DefaultMXBeanMappingFactory$NonNullMXBeanMapping",
	nullptr,
	nullptr,
	_DefaultMXBeanMappingFactory$IdentityMapping_MethodInfo_,
	nullptr,
	nullptr,
	_DefaultMXBeanMappingFactory$IdentityMapping_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.jmx.mbeanserver.DefaultMXBeanMappingFactory"
};

$Object* allocate$DefaultMXBeanMappingFactory$IdentityMapping($Class* clazz) {
	return $of($alloc(DefaultMXBeanMappingFactory$IdentityMapping));
}

void DefaultMXBeanMappingFactory$IdentityMapping::init$($Type* targetType, $OpenType* openType) {
	$DefaultMXBeanMappingFactory$NonNullMXBeanMapping::init$(targetType, openType);
}

bool DefaultMXBeanMappingFactory$IdentityMapping::isIdentity() {
	return true;
}

$Object* DefaultMXBeanMappingFactory$IdentityMapping::fromNonNullOpenValue(Object$* openValue) {
	return $of(openValue);
}

$Object* DefaultMXBeanMappingFactory$IdentityMapping::toNonNullOpenValue(Object$* javaValue) {
	return $of(javaValue);
}

DefaultMXBeanMappingFactory$IdentityMapping::DefaultMXBeanMappingFactory$IdentityMapping() {
}

$Class* DefaultMXBeanMappingFactory$IdentityMapping::load$($String* name, bool initialize) {
	$loadClass(DefaultMXBeanMappingFactory$IdentityMapping, name, initialize, &_DefaultMXBeanMappingFactory$IdentityMapping_ClassInfo_, allocate$DefaultMXBeanMappingFactory$IdentityMapping);
	return class$;
}

$Class* DefaultMXBeanMappingFactory$IdentityMapping::class$ = nullptr;

			} // mbeanserver
		} // jmx
	} // sun
} // com
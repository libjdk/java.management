#include <com/sun/jmx/mbeanserver/MXBeanMappingFactory.h>

#include <com/sun/jmx/mbeanserver/DefaultMXBeanMappingFactory.h>
#include <com/sun/jmx/mbeanserver/MXBeanMapping.h>
#include <java/lang/reflect/Type.h>
#include <jcpp.h>

#undef DEFAULT

using $DefaultMXBeanMappingFactory = ::com::sun::jmx::mbeanserver::DefaultMXBeanMappingFactory;
using $MXBeanMapping = ::com::sun::jmx::mbeanserver::MXBeanMapping;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Type = ::java::lang::reflect::Type;

namespace com {
	namespace sun {
		namespace jmx {
			namespace mbeanserver {

$FieldInfo _MXBeanMappingFactory_FieldInfo_[] = {
	{"DEFAULT", "Lcom/sun/jmx/mbeanserver/MXBeanMappingFactory;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(MXBeanMappingFactory, DEFAULT)},
	{}
};

$MethodInfo _MXBeanMappingFactory_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PROTECTED, $method(static_cast<void(MXBeanMappingFactory::*)()>(&MXBeanMappingFactory::init$))},
	{"mappingForType", "(Ljava/lang/reflect/Type;Lcom/sun/jmx/mbeanserver/MXBeanMappingFactory;)Lcom/sun/jmx/mbeanserver/MXBeanMapping;", nullptr, $PUBLIC | $ABSTRACT, nullptr, "javax.management.openmbean.OpenDataException"},
	{}
};

$ClassInfo _MXBeanMappingFactory_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER | $ABSTRACT,
	"com.sun.jmx.mbeanserver.MXBeanMappingFactory",
	"java.lang.Object",
	nullptr,
	_MXBeanMappingFactory_FieldInfo_,
	_MXBeanMappingFactory_MethodInfo_
};

$Object* allocate$MXBeanMappingFactory($Class* clazz) {
	return $of($alloc(MXBeanMappingFactory));
}

MXBeanMappingFactory* MXBeanMappingFactory::DEFAULT = nullptr;

void MXBeanMappingFactory::init$() {
}

void clinit$MXBeanMappingFactory($Class* class$) {
	$assignStatic(MXBeanMappingFactory::DEFAULT, $new($DefaultMXBeanMappingFactory));
}

MXBeanMappingFactory::MXBeanMappingFactory() {
}

$Class* MXBeanMappingFactory::load$($String* name, bool initialize) {
	$loadClass(MXBeanMappingFactory, name, initialize, &_MXBeanMappingFactory_ClassInfo_, clinit$MXBeanMappingFactory, allocate$MXBeanMappingFactory);
	return class$;
}

$Class* MXBeanMappingFactory::class$ = nullptr;

			} // mbeanserver
		} // jmx
	} // sun
} // com
#include <com/sun/jmx/mbeanserver/DefaultMXBeanMappingFactory$MXBeanRefMapping.h>

#include <com/sun/jmx/mbeanserver/DefaultMXBeanMappingFactory$NonNullMXBeanMapping.h>
#include <com/sun/jmx/mbeanserver/DefaultMXBeanMappingFactory.h>
#include <com/sun/jmx/mbeanserver/MXBeanLookup.h>
#include <com/sun/jmx/mbeanserver/MXBeanMapping.h>
#include <java/io/InvalidObjectException.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Type.h>
#include <javax/management/ObjectName.h>
#include <javax/management/openmbean/OpenDataException.h>
#include <javax/management/openmbean/OpenType.h>
#include <javax/management/openmbean/SimpleType.h>
#include <jcpp.h>

#undef OBJECTNAME

using $DefaultMXBeanMappingFactory = ::com::sun::jmx::mbeanserver::DefaultMXBeanMappingFactory;
using $DefaultMXBeanMappingFactory$NonNullMXBeanMapping = ::com::sun::jmx::mbeanserver::DefaultMXBeanMappingFactory$NonNullMXBeanMapping;
using $MXBeanLookup = ::com::sun::jmx::mbeanserver::MXBeanLookup;
using $MXBeanMapping = ::com::sun::jmx::mbeanserver::MXBeanMapping;
using $InvalidObjectException = ::java::io::InvalidObjectException;
using $ClassInfo = ::java::lang::ClassInfo;
using $Exception = ::java::lang::Exception;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $NullPointerException = ::java::lang::NullPointerException;
using $RuntimeException = ::java::lang::RuntimeException;
using $Constructor = ::java::lang::reflect::Constructor;
using $Type = ::java::lang::reflect::Type;
using $ObjectName = ::javax::management::ObjectName;
using $OpenDataException = ::javax::management::openmbean::OpenDataException;
using $OpenType = ::javax::management::openmbean::OpenType;
using $SimpleType = ::javax::management::openmbean::SimpleType;

namespace com {
	namespace sun {
		namespace jmx {
			namespace mbeanserver {

$MethodInfo _DefaultMXBeanMappingFactory$MXBeanRefMapping_MethodInfo_[] = {
	{"<init>", "(Ljava/lang/reflect/Type;)V", nullptr, 0, $method(static_cast<void(DefaultMXBeanMappingFactory$MXBeanRefMapping::*)($Type*)>(&DefaultMXBeanMappingFactory$MXBeanRefMapping::init$))},
	{"fromNonNullOpenValue", "(Ljava/lang/Object;)Ljava/lang/Object;", nullptr, $FINAL, nullptr, "java.io.InvalidObjectException"},
	{"lookupNotNull", "(Ljava/lang/Class;)Lcom/sun/jmx/mbeanserver/MXBeanLookup;", "<T:Ljava/lang/Exception;>(Ljava/lang/Class<TT;>;)Lcom/sun/jmx/mbeanserver/MXBeanLookup;^TT;", $PRIVATE, $method(static_cast<$MXBeanLookup*(DefaultMXBeanMappingFactory$MXBeanRefMapping::*)($Class*)>(&DefaultMXBeanMappingFactory$MXBeanRefMapping::lookupNotNull)), "java.lang.Exception"},
	{"toNonNullOpenValue", "(Ljava/lang/Object;)Ljava/lang/Object;", nullptr, $FINAL, nullptr, "javax.management.openmbean.OpenDataException"},
	{}
};

$InnerClassInfo _DefaultMXBeanMappingFactory$MXBeanRefMapping_InnerClassesInfo_[] = {
	{"com.sun.jmx.mbeanserver.DefaultMXBeanMappingFactory$MXBeanRefMapping", "com.sun.jmx.mbeanserver.DefaultMXBeanMappingFactory", "MXBeanRefMapping", $PRIVATE | $STATIC | $FINAL},
	{"com.sun.jmx.mbeanserver.DefaultMXBeanMappingFactory$NonNullMXBeanMapping", "com.sun.jmx.mbeanserver.DefaultMXBeanMappingFactory", "NonNullMXBeanMapping", $STATIC | $ABSTRACT},
	{}
};

$ClassInfo _DefaultMXBeanMappingFactory$MXBeanRefMapping_ClassInfo_ = {
	$FINAL | $ACC_SUPER,
	"com.sun.jmx.mbeanserver.DefaultMXBeanMappingFactory$MXBeanRefMapping",
	"com.sun.jmx.mbeanserver.DefaultMXBeanMappingFactory$NonNullMXBeanMapping",
	nullptr,
	nullptr,
	_DefaultMXBeanMappingFactory$MXBeanRefMapping_MethodInfo_,
	nullptr,
	nullptr,
	_DefaultMXBeanMappingFactory$MXBeanRefMapping_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.jmx.mbeanserver.DefaultMXBeanMappingFactory"
};

$Object* allocate$DefaultMXBeanMappingFactory$MXBeanRefMapping($Class* clazz) {
	return $of($alloc(DefaultMXBeanMappingFactory$MXBeanRefMapping));
}

void DefaultMXBeanMappingFactory$MXBeanRefMapping::init$($Type* intf) {
	$init($SimpleType);
	$DefaultMXBeanMappingFactory$NonNullMXBeanMapping::init$(intf, $SimpleType::OBJECTNAME);
}

$Object* DefaultMXBeanMappingFactory$MXBeanRefMapping::toNonNullOpenValue(Object$* javaValue) {
	$useLocalCurrentObjectStackCache();
	$load($OpenDataException);
	$var($MXBeanLookup, lookup, lookupNotNull($OpenDataException::class$));
	$var($ObjectName, name, $nc(lookup)->mxbeanToObjectName(javaValue));
	if (name == nullptr) {
		$throwNew($OpenDataException, $$str({"No name for object: "_s, javaValue}));
	}
	return $of(name);
}

$Object* DefaultMXBeanMappingFactory$MXBeanRefMapping::fromNonNullOpenValue(Object$* openValue) {
	$useLocalCurrentObjectStackCache();
	$load($InvalidObjectException);
	$var($MXBeanLookup, lookup, lookupNotNull($InvalidObjectException::class$));
	$var($ObjectName, name, $cast($ObjectName, openValue));
	$var($Object, mxbean, $nc(lookup)->objectNameToMXBean(name, $cast($Class, $(getJavaType()))));
	if (mxbean == nullptr) {
		$var($String, msg, $str({"No MXBean for name: "_s, name}));
		$throwNew($InvalidObjectException, msg);
	}
	return $of(mxbean);
}

$MXBeanLookup* DefaultMXBeanMappingFactory$MXBeanRefMapping::lookupNotNull($Class* excClass) {
	$useLocalCurrentObjectStackCache();
	$beforeCallerSensitive();
	$var($MXBeanLookup, lookup, $MXBeanLookup::getLookup());
	if (lookup == nullptr) {
		$var($String, msg, "Cannot convert MXBean interface in this context"_s);
		$var($Exception, exc, nullptr);
		try {
			$var($Constructor, con, $nc(excClass)->getConstructor($$new($ClassArray, {$String::class$})));
			$assign(exc, $cast($Exception, $nc(con)->newInstance($$new($ObjectArray, {$of(msg)}))));
		} catch ($Exception& e) {
			$throwNew($RuntimeException, static_cast<$Throwable*>(e));
		}
		$throw(exc);
	}
	return lookup;
}

DefaultMXBeanMappingFactory$MXBeanRefMapping::DefaultMXBeanMappingFactory$MXBeanRefMapping() {
}

$Class* DefaultMXBeanMappingFactory$MXBeanRefMapping::load$($String* name, bool initialize) {
	$loadClass(DefaultMXBeanMappingFactory$MXBeanRefMapping, name, initialize, &_DefaultMXBeanMappingFactory$MXBeanRefMapping_ClassInfo_, allocate$DefaultMXBeanMappingFactory$MXBeanRefMapping);
	return class$;
}

$Class* DefaultMXBeanMappingFactory$MXBeanRefMapping::class$ = nullptr;

			} // mbeanserver
		} // jmx
	} // sun
} // com
#include <com/sun/jmx/mbeanserver/ConvertingMethod.h>

#include <com/sun/jmx/mbeanserver/DefaultMXBeanMappingFactory.h>
#include <com/sun/jmx/mbeanserver/Introspector.h>
#include <com/sun/jmx/mbeanserver/MXBeanLookup.h>
#include <com/sun/jmx/mbeanserver/MXBeanMapping.h>
#include <com/sun/jmx/mbeanserver/MXBeanMappingFactory.h>
#include <java/io/IOException.h>
#include <java/io/InvalidObjectException.h>
#include <java/io/ObjectStreamException.h>
#include <java/lang/reflect/AccessibleObject.h>
#include <java/lang/reflect/AnnotatedElement.h>
#include <java/lang/reflect/Executable.h>
#include <java/lang/reflect/Method.h>
#include <java/lang/reflect/Type.h>
#include <javax/management/Descriptor.h>
#include <javax/management/JMException.h>
#include <javax/management/MBeanException.h>
#include <javax/management/openmbean/OpenDataException.h>
#include <javax/management/openmbean/OpenType.h>
#include <sun/reflect/misc/MethodUtil.h>
#include <jcpp.h>

#undef DEFAULT

using $MXBeanMappingArray = $Array<::com::sun::jmx::mbeanserver::MXBeanMapping>;
using $TypeArray = $Array<::java::lang::reflect::Type>;
using $OpenTypeArray = $Array<::javax::management::openmbean::OpenType>;
using $DefaultMXBeanMappingFactory = ::com::sun::jmx::mbeanserver::DefaultMXBeanMappingFactory;
using $Introspector = ::com::sun::jmx::mbeanserver::Introspector;
using $MXBeanLookup = ::com::sun::jmx::mbeanserver::MXBeanLookup;
using $MXBeanMapping = ::com::sun::jmx::mbeanserver::MXBeanMapping;
using $MXBeanMappingFactory = ::com::sun::jmx::mbeanserver::MXBeanMappingFactory;
using $IOException = ::java::io::IOException;
using $InvalidObjectException = ::java::io::InvalidObjectException;
using $ObjectStreamException = ::java::io::ObjectStreamException;
using $ClassInfo = ::java::lang::ClassInfo;
using $Exception = ::java::lang::Exception;
using $FieldInfo = ::java::lang::FieldInfo;
using $IllegalArgumentException = ::java::lang::IllegalArgumentException;
using $MethodInfo = ::java::lang::MethodInfo;
using $AccessibleObject = ::java::lang::reflect::AccessibleObject;
using $AnnotatedElement = ::java::lang::reflect::AnnotatedElement;
using $Executable = ::java::lang::reflect::Executable;
using $Method = ::java::lang::reflect::Method;
using $Type = ::java::lang::reflect::Type;
using $Descriptor = ::javax::management::Descriptor;
using $JMException = ::javax::management::JMException;
using $MBeanException = ::javax::management::MBeanException;
using $OpenDataException = ::javax::management::openmbean::OpenDataException;
using $OpenType = ::javax::management::openmbean::OpenType;
using $MethodUtil = ::sun::reflect::misc::MethodUtil;

namespace com {
	namespace sun {
		namespace jmx {
			namespace mbeanserver {

$FieldInfo _ConvertingMethod_FieldInfo_[] = {
	{"noStrings", "[Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(ConvertingMethod, noStrings)},
	{"method", "Ljava/lang/reflect/Method;", nullptr, $PRIVATE | $FINAL, $field(ConvertingMethod, method)},
	{"returnMapping", "Lcom/sun/jmx/mbeanserver/MXBeanMapping;", nullptr, $PRIVATE | $FINAL, $field(ConvertingMethod, returnMapping)},
	{"paramMappings", "[Lcom/sun/jmx/mbeanserver/MXBeanMapping;", nullptr, $PRIVATE | $FINAL, $field(ConvertingMethod, paramMappings)},
	{"paramConversionIsIdentity", "Z", nullptr, $PRIVATE | $FINAL, $field(ConvertingMethod, paramConversionIsIdentity)},
	{}
};

$MethodInfo _ConvertingMethod_MethodInfo_[] = {
	{"<init>", "(Ljava/lang/reflect/Method;)V", nullptr, $PRIVATE, $method(static_cast<void(ConvertingMethod::*)($Method*)>(&ConvertingMethod::init$)), "javax.management.openmbean.OpenDataException"},
	{"checkCallFromOpen", "()V", nullptr, 0, $method(static_cast<void(ConvertingMethod::*)()>(&ConvertingMethod::checkCallFromOpen))},
	{"checkCallToOpen", "()V", nullptr, 0, $method(static_cast<void(ConvertingMethod::*)()>(&ConvertingMethod::checkCallToOpen))},
	{"from", "(Ljava/lang/reflect/Method;)Lcom/sun/jmx/mbeanserver/ConvertingMethod;", nullptr, $STATIC, $method(static_cast<ConvertingMethod*(*)($Method*)>(&ConvertingMethod::from))},
	{"fromOpenParameter", "(Lcom/sun/jmx/mbeanserver/MXBeanLookup;Ljava/lang/Object;I)Ljava/lang/Object;", nullptr, $FINAL, $method(static_cast<$Object*(ConvertingMethod::*)($MXBeanLookup*,Object$*,int32_t)>(&ConvertingMethod::fromOpenParameter)), "java.io.InvalidObjectException"},
	{"fromOpenParameters", "([Ljava/lang/Object;)[Ljava/lang/Object;", nullptr, $FINAL, $method(static_cast<$ObjectArray*(ConvertingMethod::*)($ObjectArray*)>(&ConvertingMethod::fromOpenParameters)), "java.io.InvalidObjectException"},
	{"fromOpenReturnValue", "(Lcom/sun/jmx/mbeanserver/MXBeanLookup;Ljava/lang/Object;)Ljava/lang/Object;", nullptr, $FINAL, $method(static_cast<$Object*(ConvertingMethod::*)($MXBeanLookup*,Object$*)>(&ConvertingMethod::fromOpenReturnValue)), "java.io.InvalidObjectException"},
	{"getDescriptor", "()Ljavax/management/Descriptor;", nullptr, 0, $method(static_cast<$Descriptor*(ConvertingMethod::*)()>(&ConvertingMethod::getDescriptor))},
	{"getGenericParameterTypes", "()[Ljava/lang/reflect/Type;", nullptr, 0, $method(static_cast<$TypeArray*(ConvertingMethod::*)()>(&ConvertingMethod::getGenericParameterTypes))},
	{"getGenericReturnType", "()Ljava/lang/reflect/Type;", nullptr, 0, $method(static_cast<$Type*(ConvertingMethod::*)()>(&ConvertingMethod::getGenericReturnType))},
	{"getMethod", "()Ljava/lang/reflect/Method;", nullptr, 0, $method(static_cast<$Method*(ConvertingMethod::*)()>(&ConvertingMethod::getMethod))},
	{"getName", "()Ljava/lang/String;", nullptr, 0, $method(static_cast<$String*(ConvertingMethod::*)()>(&ConvertingMethod::getName))},
	{"getOpenParameterTypes", "()[Ljavax/management/openmbean/OpenType;", "()[Ljavax/management/openmbean/OpenType<*>;", 0, $method(static_cast<$OpenTypeArray*(ConvertingMethod::*)()>(&ConvertingMethod::getOpenParameterTypes))},
	{"getOpenReturnType", "()Ljavax/management/openmbean/OpenType;", "()Ljavax/management/openmbean/OpenType<*>;", 0, $method(static_cast<$OpenType*(ConvertingMethod::*)()>(&ConvertingMethod::getOpenReturnType))},
	{"getOpenSignature", "()[Ljava/lang/String;", nullptr, 0, $method(static_cast<$StringArray*(ConvertingMethod::*)()>(&ConvertingMethod::getOpenSignature))},
	{"invokeWithOpenReturn", "(Lcom/sun/jmx/mbeanserver/MXBeanLookup;Ljava/lang/Object;[Ljava/lang/Object;)Ljava/lang/Object;", nullptr, 0, $method(static_cast<$Object*(ConvertingMethod::*)($MXBeanLookup*,Object$*,$ObjectArray*)>(&ConvertingMethod::invokeWithOpenReturn)), "javax.management.MBeanException,java.lang.IllegalAccessException,java.lang.reflect.InvocationTargetException"},
	{"invokeWithOpenReturn", "(Ljava/lang/Object;[Ljava/lang/Object;)Ljava/lang/Object;", nullptr, $PRIVATE, $method(static_cast<$Object*(ConvertingMethod::*)(Object$*,$ObjectArray*)>(&ConvertingMethod::invokeWithOpenReturn)), "javax.management.MBeanException,java.lang.IllegalAccessException,java.lang.reflect.InvocationTargetException"},
	{"methodName", "()Ljava/lang/String;", nullptr, $PRIVATE, $method(static_cast<$String*(ConvertingMethod::*)()>(&ConvertingMethod::methodName))},
	{"toOpenParameter", "(Lcom/sun/jmx/mbeanserver/MXBeanLookup;Ljava/lang/Object;I)Ljava/lang/Object;", nullptr, $FINAL, $method(static_cast<$Object*(ConvertingMethod::*)($MXBeanLookup*,Object$*,int32_t)>(&ConvertingMethod::toOpenParameter)), "javax.management.openmbean.OpenDataException"},
	{"toOpenParameters", "(Lcom/sun/jmx/mbeanserver/MXBeanLookup;[Ljava/lang/Object;)[Ljava/lang/Object;", nullptr, $FINAL, $method(static_cast<$ObjectArray*(ConvertingMethod::*)($MXBeanLookup*,$ObjectArray*)>(&ConvertingMethod::toOpenParameters)), "javax.management.openmbean.OpenDataException"},
	{"toOpenReturnValue", "(Lcom/sun/jmx/mbeanserver/MXBeanLookup;Ljava/lang/Object;)Ljava/lang/Object;", nullptr, $FINAL, $method(static_cast<$Object*(ConvertingMethod::*)($MXBeanLookup*,Object$*)>(&ConvertingMethod::toOpenReturnValue)), "javax.management.openmbean.OpenDataException"},
	{}
};

$ClassInfo _ConvertingMethod_ClassInfo_ = {
	$FINAL | $ACC_SUPER,
	"com.sun.jmx.mbeanserver.ConvertingMethod",
	"java.lang.Object",
	nullptr,
	_ConvertingMethod_FieldInfo_,
	_ConvertingMethod_MethodInfo_
};

$Object* allocate$ConvertingMethod($Class* clazz) {
	return $of($alloc(ConvertingMethod));
}

$StringArray* ConvertingMethod::noStrings = nullptr;

ConvertingMethod* ConvertingMethod::from($Method* m) {
	$init(ConvertingMethod);
	$useLocalCurrentObjectStackCache();
	try {
		return $new(ConvertingMethod, m);
	} catch ($OpenDataException& ode) {
		$var($String, var$1, $$str({"Method "_s, $($nc($nc(m)->getDeclaringClass())->getName()), "."_s}));
		$var($String, var$0, $$concat(var$1, $(m->getName())));
		$var($String, msg, $concat(var$0, " has parameter or return type that cannot be translated into an open type"));
		$throwNew($IllegalArgumentException, msg, ode);
	}
	$shouldNotReachHere();
}

$Method* ConvertingMethod::getMethod() {
	return this->method;
}

$Descriptor* ConvertingMethod::getDescriptor() {
	return $Introspector::descriptorForElement(static_cast<$AnnotatedElement*>(static_cast<$AccessibleObject*>(static_cast<$Executable*>(this->method))));
}

$Type* ConvertingMethod::getGenericReturnType() {
	return $nc(this->method)->getGenericReturnType();
}

$TypeArray* ConvertingMethod::getGenericParameterTypes() {
	return $nc(this->method)->getGenericParameterTypes();
}

$String* ConvertingMethod::getName() {
	return $nc(this->method)->getName();
}

$OpenType* ConvertingMethod::getOpenReturnType() {
	return $nc(this->returnMapping)->getOpenType();
}

$OpenTypeArray* ConvertingMethod::getOpenParameterTypes() {
	$useLocalCurrentObjectStackCache();
	$var($OpenTypeArray, types, $new($OpenTypeArray, $nc(this->paramMappings)->length));
	for (int32_t i = 0; i < $nc(this->paramMappings)->length; ++i) {
		types->set(i, $($nc($nc(this->paramMappings)->get(i))->getOpenType()));
	}
	return types;
}

void ConvertingMethod::checkCallFromOpen() {
	$useLocalCurrentObjectStackCache();
	try {
		{
			$var($MXBeanMappingArray, arr$, this->paramMappings);
			int32_t len$ = $nc(arr$)->length;
			int32_t i$ = 0;
			for (; i$ < len$; ++i$) {
				$var($MXBeanMapping, paramConverter, arr$->get(i$));
				$nc(paramConverter)->checkReconstructible();
			}
		}
	} catch ($InvalidObjectException& e) {
		$throwNew($IllegalArgumentException, static_cast<$Throwable*>(e));
	}
}

void ConvertingMethod::checkCallToOpen() {
	try {
		$nc(this->returnMapping)->checkReconstructible();
	} catch ($InvalidObjectException& e) {
		$throwNew($IllegalArgumentException, static_cast<$Throwable*>(e));
	}
}

$StringArray* ConvertingMethod::getOpenSignature() {
	$useLocalCurrentObjectStackCache();
	if ($nc(this->paramMappings)->length == 0) {
		return ConvertingMethod::noStrings;
	}
	$var($StringArray, sig, $new($StringArray, $nc(this->paramMappings)->length));
	for (int32_t i = 0; i < $nc(this->paramMappings)->length; ++i) {
		sig->set(i, $($nc($nc($nc(this->paramMappings)->get(i))->getOpenClass())->getName()));
	}
	return sig;
}

$Object* ConvertingMethod::toOpenReturnValue($MXBeanLookup* lookup, Object$* ret) {
	return $of($nc(this->returnMapping)->toOpenValue(ret));
}

$Object* ConvertingMethod::fromOpenReturnValue($MXBeanLookup* lookup, Object$* ret) {
	return $of($nc(this->returnMapping)->fromOpenValue(ret));
}

$ObjectArray* ConvertingMethod::toOpenParameters($MXBeanLookup* lookup, $ObjectArray* params) {
	$useLocalCurrentObjectStackCache();
	if (this->paramConversionIsIdentity || params == nullptr) {
		return params;
	}
	$var($ObjectArray, oparams, $new($ObjectArray, $nc(params)->length));
	for (int32_t i = 0; i < params->length; ++i) {
		oparams->set(i, $($nc($nc(this->paramMappings)->get(i))->toOpenValue(params->get(i))));
	}
	return oparams;
}

$ObjectArray* ConvertingMethod::fromOpenParameters($ObjectArray* params) {
	$useLocalCurrentObjectStackCache();
	if (this->paramConversionIsIdentity || params == nullptr) {
		return params;
	}
	$var($ObjectArray, jparams, $new($ObjectArray, $nc(params)->length));
	for (int32_t i = 0; i < params->length; ++i) {
		jparams->set(i, $($nc($nc(this->paramMappings)->get(i))->fromOpenValue(params->get(i))));
	}
	return jparams;
}

$Object* ConvertingMethod::toOpenParameter($MXBeanLookup* lookup, Object$* param, int32_t paramNo) {
	return $of($nc($nc(this->paramMappings)->get(paramNo))->toOpenValue(param));
}

$Object* ConvertingMethod::fromOpenParameter($MXBeanLookup* lookup, Object$* param, int32_t paramNo) {
	return $of($nc($nc(this->paramMappings)->get(paramNo))->fromOpenValue(param));
}

$Object* ConvertingMethod::invokeWithOpenReturn($MXBeanLookup* lookup, Object$* obj, $ObjectArray* params) {
	$useLocalCurrentObjectStackCache();
	$var($MXBeanLookup, old, $MXBeanLookup::getLookup());
	{
		$var($Throwable, var$0, nullptr);
		$var($Object, var$2, nullptr);
		bool return$1 = false;
		try {
			$MXBeanLookup::setLookup(lookup);
			$assign(var$2, invokeWithOpenReturn(obj, params));
			return$1 = true;
			goto $finally;
		} catch ($Throwable& var$3) {
			$assign(var$0, var$3);
		} $finally: {
			$MXBeanLookup::setLookup(old);
		}
		if (var$0 != nullptr) {
			$throw(var$0);
		}
		if (return$1) {
			return var$2;
		}
	}
	$shouldNotReachHere();
}

$Object* ConvertingMethod::invokeWithOpenReturn(Object$* obj, $ObjectArray* params) {
	$useLocalCurrentObjectStackCache();
	$var($ObjectArray, javaParams, nullptr);
	try {
		$assign(javaParams, fromOpenParameters(params));
	} catch ($InvalidObjectException& e) {
		$var($String, msg, $str({$(methodName()), ": cannot convert parameters from open values: "_s, e}));
		$throwNew($MBeanException, e, msg);
	}
	$var($Object, javaReturn, $MethodUtil::invoke(this->method, obj, javaParams));
	try {
		return $of($nc(this->returnMapping)->toOpenValue(javaReturn));
	} catch ($OpenDataException& e) {
		$var($String, msg, $str({$(methodName()), ": cannot convert return value to open value: "_s, e}));
		$throwNew($MBeanException, e, msg);
	}
	$shouldNotReachHere();
}

$String* ConvertingMethod::methodName() {
	$useLocalCurrentObjectStackCache();
	$var($String, var$0, $$str({$nc(this->method)->getDeclaringClass(), "."_s}));
	return $concat(var$0, $($nc(this->method)->getName()));
}

void ConvertingMethod::init$($Method* m) {
	$useLocalCurrentObjectStackCache();
	$set(this, method, m);
	$init($MXBeanMappingFactory);
	$var($MXBeanMappingFactory, mappingFactory, $MXBeanMappingFactory::DEFAULT);
	$set(this, returnMapping, $nc(mappingFactory)->mappingForType($($nc(m)->getGenericReturnType()), mappingFactory));
	$var($TypeArray, params, $nc(m)->getGenericParameterTypes());
	$set(this, paramMappings, $new($MXBeanMappingArray, $nc(params)->length));
	bool identity = true;
	for (int32_t i = 0; i < params->length; ++i) {
		$nc(this->paramMappings)->set(i, $(mappingFactory->mappingForType(params->get(i), mappingFactory)));
		identity &= $DefaultMXBeanMappingFactory::isIdentity($nc(this->paramMappings)->get(i));
	}
	this->paramConversionIsIdentity = identity;
}

void clinit$ConvertingMethod($Class* class$) {
	$assignStatic(ConvertingMethod::noStrings, $new($StringArray, 0));
}

ConvertingMethod::ConvertingMethod() {
}

$Class* ConvertingMethod::load$($String* name, bool initialize) {
	$loadClass(ConvertingMethod, name, initialize, &_ConvertingMethod_ClassInfo_, clinit$ConvertingMethod, allocate$ConvertingMethod);
	return class$;
}

$Class* ConvertingMethod::class$ = nullptr;

			} // mbeanserver
		} // jmx
	} // sun
} // com
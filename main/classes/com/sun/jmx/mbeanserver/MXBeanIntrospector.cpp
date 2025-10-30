#include <com/sun/jmx/mbeanserver/MXBeanIntrospector.h>

#include <com/sun/jmx/mbeanserver/ConvertingMethod.h>
#include <com/sun/jmx/mbeanserver/Introspector.h>
#include <com/sun/jmx/mbeanserver/MBeanAnalyzer.h>
#include <com/sun/jmx/mbeanserver/MBeanIntrospector$MBeanInfoMap.h>
#include <com/sun/jmx/mbeanserver/MBeanIntrospector$PerInterfaceMap.h>
#include <com/sun/jmx/mbeanserver/MBeanIntrospector.h>
#include <com/sun/jmx/mbeanserver/MXBeanLookup.h>
#include <java/lang/annotation/Annotation.h>
#include <java/lang/reflect/AccessibleObject.h>
#include <java/lang/reflect/AnnotatedElement.h>
#include <java/lang/reflect/Executable.h>
#include <java/lang/reflect/GenericArrayType.h>
#include <java/lang/reflect/Method.h>
#include <java/lang/reflect/ParameterizedType.h>
#include <java/lang/reflect/Type.h>
#include <javax/management/Descriptor.h>
#include <javax/management/ImmutableDescriptor.h>
#include <javax/management/MBeanAttributeInfo.h>
#include <javax/management/MBeanOperationInfo.h>
#include <javax/management/MBeanParameterInfo.h>
#include <javax/management/openmbean/OpenMBeanAttributeInfoSupport.h>
#include <javax/management/openmbean/OpenMBeanOperationInfoSupport.h>
#include <javax/management/openmbean/OpenMBeanParameterInfo.h>
#include <javax/management/openmbean/OpenMBeanParameterInfoSupport.h>
#include <javax/management/openmbean/OpenType.h>
#include <jcpp.h>

#undef EMPTY_DESCRIPTOR
#undef UNKNOWN

using $AnnotationArray = $Array<::java::lang::annotation::Annotation>;
using $TypeArray = $Array<::java::lang::reflect::Type>;
using $DescriptorArray = $Array<::javax::management::Descriptor>;
using $MBeanParameterInfoArray = $Array<::javax::management::MBeanParameterInfo>;
using $OpenMBeanParameterInfoArray = $Array<::javax::management::openmbean::OpenMBeanParameterInfo>;
using $OpenTypeArray = $Array<::javax::management::openmbean::OpenType>;
using $AnnotationArray2 = $Array<::java::lang::annotation::Annotation, 2>;
using $ConvertingMethod = ::com::sun::jmx::mbeanserver::ConvertingMethod;
using $Introspector = ::com::sun::jmx::mbeanserver::Introspector;
using $MBeanAnalyzer = ::com::sun::jmx::mbeanserver::MBeanAnalyzer;
using $MBeanIntrospector = ::com::sun::jmx::mbeanserver::MBeanIntrospector;
using $MBeanIntrospector$MBeanInfoMap = ::com::sun::jmx::mbeanserver::MBeanIntrospector$MBeanInfoMap;
using $MBeanIntrospector$PerInterfaceMap = ::com::sun::jmx::mbeanserver::MBeanIntrospector$PerInterfaceMap;
using $MXBeanLookup = ::com::sun::jmx::mbeanserver::MXBeanLookup;
using $ClassInfo = ::java::lang::ClassInfo;
using $Exception = ::java::lang::Exception;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Annotation = ::java::lang::annotation::Annotation;
using $AccessibleObject = ::java::lang::reflect::AccessibleObject;
using $AnnotatedElement = ::java::lang::reflect::AnnotatedElement;
using $Executable = ::java::lang::reflect::Executable;
using $GenericArrayType = ::java::lang::reflect::GenericArrayType;
using $Method = ::java::lang::reflect::Method;
using $ParameterizedType = ::java::lang::reflect::ParameterizedType;
using $Type = ::java::lang::reflect::Type;
using $Descriptor = ::javax::management::Descriptor;
using $ImmutableDescriptor = ::javax::management::ImmutableDescriptor;
using $MBeanAttributeInfo = ::javax::management::MBeanAttributeInfo;
using $MBeanOperationInfo = ::javax::management::MBeanOperationInfo;
using $MBeanParameterInfo = ::javax::management::MBeanParameterInfo;
using $OpenMBeanAttributeInfoSupport = ::javax::management::openmbean::OpenMBeanAttributeInfoSupport;
using $OpenMBeanOperationInfoSupport = ::javax::management::openmbean::OpenMBeanOperationInfoSupport;
using $OpenMBeanParameterInfo = ::javax::management::openmbean::OpenMBeanParameterInfo;
using $OpenMBeanParameterInfoSupport = ::javax::management::openmbean::OpenMBeanParameterInfoSupport;
using $OpenType = ::javax::management::openmbean::OpenType;

namespace com {
	namespace sun {
		namespace jmx {
			namespace mbeanserver {

$FieldInfo _MXBeanIntrospector_FieldInfo_[] = {
	{"instance", "Lcom/sun/jmx/mbeanserver/MXBeanIntrospector;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(MXBeanIntrospector, instance)},
	{"perInterfaceMap", "Lcom/sun/jmx/mbeanserver/MBeanIntrospector$PerInterfaceMap;", "Lcom/sun/jmx/mbeanserver/MBeanIntrospector$PerInterfaceMap<Lcom/sun/jmx/mbeanserver/ConvertingMethod;>;", $PRIVATE | $FINAL, $field(MXBeanIntrospector, perInterfaceMap)},
	{"mbeanInfoMap", "Lcom/sun/jmx/mbeanserver/MBeanIntrospector$MBeanInfoMap;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(MXBeanIntrospector, mbeanInfoMap)},
	{}
};

$MethodInfo _MXBeanIntrospector_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(MXBeanIntrospector::*)()>(&MXBeanIntrospector::init$))},
	{"canUseOpenInfo", "(Ljava/lang/reflect/Type;)Z", nullptr, $PRIVATE | $STATIC, $method(static_cast<bool(*)($Type*)>(&MXBeanIntrospector::canUseOpenInfo))},
	{"checkMethod", "(Lcom/sun/jmx/mbeanserver/ConvertingMethod;)V", nullptr, 0},
	{"checkMethod", "(Ljava/lang/Object;)V", nullptr, $VOLATILE | $SYNTHETIC},
	{"getAnalyzer", "(Ljava/lang/Class;)Lcom/sun/jmx/mbeanserver/MBeanAnalyzer;", "(Ljava/lang/Class<*>;)Lcom/sun/jmx/mbeanserver/MBeanAnalyzer<Lcom/sun/jmx/mbeanserver/ConvertingMethod;>;", 0, nullptr, "javax.management.NotCompliantMBeanException"},
	{"getBasicMBeanDescriptor", "()Ljavax/management/Descriptor;", nullptr, 0},
	{"getGenericParameterTypes", "(Lcom/sun/jmx/mbeanserver/ConvertingMethod;)[Ljava/lang/reflect/Type;", nullptr, 0},
	{"getGenericParameterTypes", "(Ljava/lang/Object;)[Ljava/lang/reflect/Type;", nullptr, $VOLATILE | $SYNTHETIC},
	{"getGenericReturnType", "(Lcom/sun/jmx/mbeanserver/ConvertingMethod;)Ljava/lang/reflect/Type;", nullptr, 0},
	{"getGenericReturnType", "(Ljava/lang/Object;)Ljava/lang/reflect/Type;", nullptr, $VOLATILE | $SYNTHETIC},
	{"getInstance", "()Lcom/sun/jmx/mbeanserver/MXBeanIntrospector;", nullptr, $STATIC, $method(static_cast<MXBeanIntrospector*(*)()>(&MXBeanIntrospector::getInstance))},
	{"getMBeanAttributeInfo", "(Ljava/lang/String;Lcom/sun/jmx/mbeanserver/ConvertingMethod;Lcom/sun/jmx/mbeanserver/ConvertingMethod;)Ljavax/management/MBeanAttributeInfo;", nullptr, 0},
	{"getMBeanAttributeInfo", "(Ljava/lang/String;Ljava/lang/Object;Ljava/lang/Object;)Ljavax/management/MBeanAttributeInfo;", nullptr, $VOLATILE | $SYNTHETIC},
	{"getMBeanDescriptor", "(Ljava/lang/Class;)Ljavax/management/Descriptor;", "(Ljava/lang/Class<*>;)Ljavax/management/Descriptor;", 0},
	{"getMBeanInfoMap", "()Lcom/sun/jmx/mbeanserver/MBeanIntrospector$MBeanInfoMap;", nullptr, 0},
	{"getMBeanOperationInfo", "(Ljava/lang/String;Lcom/sun/jmx/mbeanserver/ConvertingMethod;)Ljavax/management/MBeanOperationInfo;", nullptr, 0},
	{"getMBeanOperationInfo", "(Ljava/lang/String;Ljava/lang/Object;)Ljavax/management/MBeanOperationInfo;", nullptr, $VOLATILE | $SYNTHETIC},
	{"getName", "(Lcom/sun/jmx/mbeanserver/ConvertingMethod;)Ljava/lang/String;", nullptr, 0},
	{"getName", "(Ljava/lang/Object;)Ljava/lang/String;", nullptr, $VOLATILE | $SYNTHETIC},
	{"getPerInterfaceMap", "()Lcom/sun/jmx/mbeanserver/MBeanIntrospector$PerInterfaceMap;", "()Lcom/sun/jmx/mbeanserver/MBeanIntrospector$PerInterfaceMap<Lcom/sun/jmx/mbeanserver/ConvertingMethod;>;", 0},
	{"getSignature", "(Lcom/sun/jmx/mbeanserver/ConvertingMethod;)[Ljava/lang/String;", nullptr, 0},
	{"getSignature", "(Ljava/lang/Object;)[Ljava/lang/String;", nullptr, $VOLATILE | $SYNTHETIC},
	{"invokeM2", "(Lcom/sun/jmx/mbeanserver/ConvertingMethod;Ljava/lang/Object;[Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;", nullptr, 0, nullptr, "java.lang.reflect.InvocationTargetException,java.lang.IllegalAccessException,javax.management.MBeanException"},
	{"invokeM2", "(Ljava/lang/Object;Ljava/lang/Object;[Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;", nullptr, $VOLATILE | $SYNTHETIC, nullptr, "java.lang.reflect.InvocationTargetException,java.lang.IllegalAccessException,javax.management.MBeanException"},
	{"isMXBean", "()Z", nullptr, 0},
	{"mFrom", "(Ljava/lang/reflect/Method;)Lcom/sun/jmx/mbeanserver/ConvertingMethod;", nullptr, 0},
	{"originalTypeString", "(Ljava/lang/reflect/Type;)Ljava/lang/String;", nullptr, $PRIVATE | $STATIC, $method(static_cast<$String*(*)($Type*)>(&MXBeanIntrospector::originalTypeString))},
	{"typeDescriptor", "(Ljavax/management/openmbean/OpenType;Ljava/lang/reflect/Type;)Ljavax/management/Descriptor;", "(Ljavax/management/openmbean/OpenType<*>;Ljava/lang/reflect/Type;)Ljavax/management/Descriptor;", $PRIVATE | $STATIC, $method(static_cast<$Descriptor*(*)($OpenType*,$Type*)>(&MXBeanIntrospector::typeDescriptor))},
	{"typeName", "(Ljava/lang/reflect/Type;)Ljava/lang/String;", nullptr, $STATIC, $method(static_cast<$String*(*)($Type*)>(&MXBeanIntrospector::typeName))},
	{"validParameter", "(Lcom/sun/jmx/mbeanserver/ConvertingMethod;Ljava/lang/Object;ILjava/lang/Object;)Z", nullptr, 0},
	{"validParameter", "(Ljava/lang/Object;Ljava/lang/Object;ILjava/lang/Object;)Z", nullptr, $VOLATILE | $SYNTHETIC},
	{}
};

$ClassInfo _MXBeanIntrospector_ClassInfo_ = {
	$ACC_SUPER,
	"com.sun.jmx.mbeanserver.MXBeanIntrospector",
	"com.sun.jmx.mbeanserver.MBeanIntrospector",
	nullptr,
	_MXBeanIntrospector_FieldInfo_,
	_MXBeanIntrospector_MethodInfo_,
	"Lcom/sun/jmx/mbeanserver/MBeanIntrospector<Lcom/sun/jmx/mbeanserver/ConvertingMethod;>;"
};

$Object* allocate$MXBeanIntrospector($Class* clazz) {
	return $of($alloc(MXBeanIntrospector));
}

MXBeanIntrospector* MXBeanIntrospector::instance = nullptr;
$MBeanIntrospector$MBeanInfoMap* MXBeanIntrospector::mbeanInfoMap = nullptr;

void MXBeanIntrospector::init$() {
	$MBeanIntrospector::init$();
	$set(this, perInterfaceMap, $new($MBeanIntrospector$PerInterfaceMap));
}

MXBeanIntrospector* MXBeanIntrospector::getInstance() {
	$init(MXBeanIntrospector);
	return MXBeanIntrospector::instance;
}

$MBeanIntrospector$PerInterfaceMap* MXBeanIntrospector::getPerInterfaceMap() {
	return this->perInterfaceMap;
}

$MBeanIntrospector$MBeanInfoMap* MXBeanIntrospector::getMBeanInfoMap() {
	return MXBeanIntrospector::mbeanInfoMap;
}

$MBeanAnalyzer* MXBeanIntrospector::getAnalyzer($Class* mbeanInterface) {
	return $MBeanAnalyzer::analyzer(mbeanInterface, this);
}

bool MXBeanIntrospector::isMXBean() {
	return true;
}

$Object* MXBeanIntrospector::mFrom($Method* m) {
	return $of($ConvertingMethod::from(m));
}

$String* MXBeanIntrospector::getName($ConvertingMethod* m) {
	return $nc(m)->getName();
}

$Type* MXBeanIntrospector::getGenericReturnType($ConvertingMethod* m) {
	return $nc(m)->getGenericReturnType();
}

$TypeArray* MXBeanIntrospector::getGenericParameterTypes($ConvertingMethod* m) {
	return $nc(m)->getGenericParameterTypes();
}

$StringArray* MXBeanIntrospector::getSignature($ConvertingMethod* m) {
	return $nc(m)->getOpenSignature();
}

void MXBeanIntrospector::checkMethod($ConvertingMethod* m) {
	$nc(m)->checkCallFromOpen();
}

$Object* MXBeanIntrospector::invokeM2($ConvertingMethod* m, Object$* target, $ObjectArray* args, Object$* cookie) {
	return $of($nc(m)->invokeWithOpenReturn($cast($MXBeanLookup, cookie), target, args));
}

bool MXBeanIntrospector::validParameter($ConvertingMethod* m, Object$* value, int32_t paramNo, Object$* cookie) {
	$useLocalCurrentObjectStackCache();
	if (value == nullptr) {
		$var($Type, t, $nc($($nc(m)->getGenericParameterTypes()))->get(paramNo));
		return (!($instanceOf($Class, t)) || !$nc(($cast($Class, t)))->isPrimitive());
	} else {
		$var($Object, v, nullptr);
		try {
			$assign(v, $nc(m)->fromOpenParameter($cast($MXBeanLookup, cookie), value, paramNo));
		} catch ($Exception& e) {
			return true;
		}
		return isValidParameter($($nc(m)->getMethod()), v, paramNo);
	}
}

$MBeanAttributeInfo* MXBeanIntrospector::getMBeanAttributeInfo($String* attributeName, $ConvertingMethod* getter, $ConvertingMethod* setter) {
	$useLocalCurrentObjectStackCache();
	bool isReadable = (getter != nullptr);
	bool isWritable = (setter != nullptr);
	bool isIs = isReadable && $nc($(getName(getter)))->startsWith("is"_s);
	$var($String, description, attributeName);
	$var($OpenType, openType, nullptr);
	$var($Type, originalType, nullptr);
	if (isReadable) {
		$assign(openType, getter->getOpenReturnType());
		$assign(originalType, getter->getGenericReturnType());
	} else {
		$assign(openType, $nc($(setter->getOpenParameterTypes()))->get(0));
		$assign(originalType, $nc($(setter->getGenericParameterTypes()))->get(0));
	}
	$var($Descriptor, descriptor, typeDescriptor(openType, originalType));
	if (isReadable) {
		$assign(descriptor, $ImmutableDescriptor::union$($$new($DescriptorArray, {
			descriptor,
			$(getter->getDescriptor())
		})));
	}
	if (isWritable) {
		$assign(descriptor, $ImmutableDescriptor::union$($$new($DescriptorArray, {
			descriptor,
			$(setter->getDescriptor())
		})));
	}
	$var($MBeanAttributeInfo, ai, nullptr);
	if (canUseOpenInfo(originalType)) {
		$assign(ai, $new($OpenMBeanAttributeInfoSupport, attributeName, description, openType, isReadable, isWritable, isIs, descriptor));
	} else {
		$assign(ai, $new($MBeanAttributeInfo, attributeName, $(originalTypeString(originalType)), description, isReadable, isWritable, isIs, descriptor));
	}
	return ai;
}

$MBeanOperationInfo* MXBeanIntrospector::getMBeanOperationInfo($String* operationName, $ConvertingMethod* operation) {
	$useLocalCurrentObjectStackCache();
	$var($Method, method, $nc(operation)->getMethod());
	$var($String, description, operationName);
	int32_t impact = $MBeanOperationInfo::UNKNOWN;
	$var($OpenType, returnType, operation->getOpenReturnType());
	$var($Type, originalReturnType, operation->getGenericReturnType());
	$var($OpenTypeArray, paramTypes, operation->getOpenParameterTypes());
	$var($TypeArray, originalParamTypes, operation->getGenericParameterTypes());
	$var($MBeanParameterInfoArray, params, $new($MBeanParameterInfoArray, $nc(paramTypes)->length));
	bool openReturnType = canUseOpenInfo(originalReturnType);
	bool openParameterTypes = true;
	$var($AnnotationArray2, annots, $nc(method)->getParameterAnnotations());
	for (int32_t i = 0; i < paramTypes->length; ++i) {
		$var($String, paramName, $str({"p"_s, $$str(i)}));
		$var($String, paramDescription, paramName);
		$var($OpenType, openType, paramTypes->get(i));
		$var($Type, originalType, $nc(originalParamTypes)->get(i));
		$var($Descriptor, descriptor, typeDescriptor(openType, originalType));
		$assign(descriptor, $ImmutableDescriptor::union$($$new($DescriptorArray, {
			descriptor,
			$($Introspector::descriptorForAnnotations($nc(annots)->get(i)))
		})));
		$var($MBeanParameterInfo, pi, nullptr);
		if (canUseOpenInfo(originalType)) {
			$assign(pi, $new($OpenMBeanParameterInfoSupport, paramName, paramDescription, openType, descriptor));
		} else {
			openParameterTypes = false;
			$assign(pi, $new($MBeanParameterInfo, paramName, $(originalTypeString(originalType)), paramDescription, descriptor));
		}
		params->set(i, pi);
	}
	$var($Descriptor, descriptor, typeDescriptor(returnType, originalReturnType));
	$assign(descriptor, $ImmutableDescriptor::union$($$new($DescriptorArray, {
		descriptor,
		$($Introspector::descriptorForElement(static_cast<$AnnotatedElement*>(static_cast<$AccessibleObject*>(static_cast<$Executable*>(method)))))
	})));
	$var($MBeanOperationInfo, oi, nullptr);
	if (openReturnType && openParameterTypes) {
		$var($OpenMBeanParameterInfoArray, oparams, $new($OpenMBeanParameterInfoArray, params->length));
		$System::arraycopy(params, 0, oparams, 0, params->length);
		$assign(oi, $new($OpenMBeanOperationInfoSupport, operationName, description, oparams, returnType, impact, descriptor));
	} else {
		$assign(oi, $new($MBeanOperationInfo, operationName, description, params, openReturnType ? $($nc(returnType)->getClassName()) : $(originalTypeString(originalReturnType)), impact, descriptor));
	}
	return oi;
}

$Descriptor* MXBeanIntrospector::getBasicMBeanDescriptor() {
	return $new($ImmutableDescriptor, $$new($StringArray, {
		"mxbean=true"_s,
		"immutableInfo=true"_s
	}));
}

$Descriptor* MXBeanIntrospector::getMBeanDescriptor($Class* resourceClass) {
	$init($ImmutableDescriptor);
	return $ImmutableDescriptor::EMPTY_DESCRIPTOR;
}

$Descriptor* MXBeanIntrospector::typeDescriptor($OpenType* openType, $Type* originalType) {
	$init(MXBeanIntrospector);
	$useLocalCurrentObjectStackCache();
	return $new($ImmutableDescriptor, $$new($StringArray, {
		"openType"_s,
		"originalType"_s
	}), $$new($ObjectArray, {
		$of(openType),
		$($of(originalTypeString(originalType)))
	}));
}

bool MXBeanIntrospector::canUseOpenInfo($Type* type) {
	$init(MXBeanIntrospector);
	if ($instanceOf($GenericArrayType, type)) {
		return canUseOpenInfo($($nc(($cast($GenericArrayType, type)))->getGenericComponentType()));
	} else if ($instanceOf($Class, type) && $nc(($cast($Class, type)))->isArray()) {
		return canUseOpenInfo(($cast($Class, type))->getComponentType());
	}
	return (!($instanceOf($Class, type) && $nc(($cast($Class, type)))->isPrimitive()));
}

$String* MXBeanIntrospector::originalTypeString($Type* type) {
	$init(MXBeanIntrospector);
	if ($instanceOf($Class, type)) {
		return $nc(($cast($Class, type)))->getName();
	} else {
		return typeName(type);
	}
}

$String* MXBeanIntrospector::typeName($Type* type) {
	$init(MXBeanIntrospector);
	$useLocalCurrentObjectStackCache();
	if ($instanceOf($Class, type)) {
		$Class* c = $cast($Class, type);
		if ($nc(c)->isArray()) {
			return $str({$(typeName(c->getComponentType())), "[]"_s});
		} else {
			return c->getName();
		}
	} else if ($instanceOf($GenericArrayType, type)) {
		$var($GenericArrayType, gat, $cast($GenericArrayType, type));
		return $str({$(typeName($($nc(gat)->getGenericComponentType()))), "[]"_s});
	} else if ($instanceOf($ParameterizedType, type)) {
		$var($ParameterizedType, pt, $cast($ParameterizedType, type));
		$var($StringBuilder, sb, $new($StringBuilder));
		sb->append($(typeName($($nc(pt)->getRawType()))))->append("<"_s);
		$var($String, sep, ""_s);
		{
			$var($TypeArray, arr$, $nc(pt)->getActualTypeArguments());
			int32_t len$ = $nc(arr$)->length;
			int32_t i$ = 0;
			for (; i$ < len$; ++i$) {
				$var($Type, t, arr$->get(i$));
				{
					sb->append(sep)->append($(typeName(t)));
					$assign(sep, ", "_s);
				}
			}
		}
		return sb->append(">"_s)->toString();
	} else {
		return "???"_s;
	}
}

$MBeanOperationInfo* MXBeanIntrospector::getMBeanOperationInfo($String* operationName, Object$* operation) {
	return this->getMBeanOperationInfo(operationName, $cast($ConvertingMethod, operation));
}

$MBeanAttributeInfo* MXBeanIntrospector::getMBeanAttributeInfo($String* attributeName, Object$* getter, Object$* setter) {
	return this->getMBeanAttributeInfo(attributeName, $cast($ConvertingMethod, getter), $cast($ConvertingMethod, setter));
}

bool MXBeanIntrospector::validParameter(Object$* m, Object$* value, int32_t paramNo, Object$* cookie) {
	return this->validParameter($cast($ConvertingMethod, m), value, paramNo, cookie);
}

$Object* MXBeanIntrospector::invokeM2(Object$* m, Object$* target, $ObjectArray* args, Object$* cookie) {
	return $of(this->invokeM2($cast($ConvertingMethod, m), target, args, cookie));
}

void MXBeanIntrospector::checkMethod(Object$* m) {
	this->checkMethod($cast($ConvertingMethod, m));
}

$StringArray* MXBeanIntrospector::getSignature(Object$* m) {
	return this->getSignature($cast($ConvertingMethod, m));
}

$TypeArray* MXBeanIntrospector::getGenericParameterTypes(Object$* m) {
	return this->getGenericParameterTypes($cast($ConvertingMethod, m));
}

$Type* MXBeanIntrospector::getGenericReturnType(Object$* m) {
	return this->getGenericReturnType($cast($ConvertingMethod, m));
}

$String* MXBeanIntrospector::getName(Object$* m) {
	return this->getName($cast($ConvertingMethod, m));
}

void clinit$MXBeanIntrospector($Class* class$) {
	$assignStatic(MXBeanIntrospector::instance, $new(MXBeanIntrospector));
	$assignStatic(MXBeanIntrospector::mbeanInfoMap, $new($MBeanIntrospector$MBeanInfoMap));
}

MXBeanIntrospector::MXBeanIntrospector() {
}

$Class* MXBeanIntrospector::load$($String* name, bool initialize) {
	$loadClass(MXBeanIntrospector, name, initialize, &_MXBeanIntrospector_ClassInfo_, clinit$MXBeanIntrospector, allocate$MXBeanIntrospector);
	return class$;
}

$Class* MXBeanIntrospector::class$ = nullptr;

			} // mbeanserver
		} // jmx
	} // sun
} // com
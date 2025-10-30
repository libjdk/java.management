#include <javax/management/MBeanConstructorInfo.h>

#include <com/sun/jmx/mbeanserver/Introspector.h>
#include <java/lang/CloneNotSupportedException.h>
#include <java/lang/annotation/Annotation.h>
#include <java/lang/reflect/AccessibleObject.h>
#include <java/lang/reflect/AnnotatedElement.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Executable.h>
#include <java/util/Arrays.h>
#include <java/util/List.h>
#include <java/util/Objects.h>
#include <javax/management/Descriptor.h>
#include <javax/management/MBeanFeatureInfo.h>
#include <javax/management/MBeanInfo.h>
#include <javax/management/MBeanOperationInfo.h>
#include <javax/management/MBeanParameterInfo.h>
#include <jcpp.h>

#undef NO_CONSTRUCTORS
#undef NO_PARAMS

using $MBeanConstructorInfoArray = $Array<::javax::management::MBeanConstructorInfo>;
using $MBeanParameterInfoArray = $Array<::javax::management::MBeanParameterInfo>;
using $AnnotationArray2 = $Array<::java::lang::annotation::Annotation, 2>;
using $Introspector = ::com::sun::jmx::mbeanserver::Introspector;
using $ClassInfo = ::java::lang::ClassInfo;
using $CloneNotSupportedException = ::java::lang::CloneNotSupportedException;
using $Cloneable = ::java::lang::Cloneable;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Annotation = ::java::lang::annotation::Annotation;
using $AccessibleObject = ::java::lang::reflect::AccessibleObject;
using $AnnotatedElement = ::java::lang::reflect::AnnotatedElement;
using $Constructor = ::java::lang::reflect::Constructor;
using $Executable = ::java::lang::reflect::Executable;
using $Arrays = ::java::util::Arrays;
using $List = ::java::util::List;
using $Objects = ::java::util::Objects;
using $Descriptor = ::javax::management::Descriptor;
using $MBeanFeatureInfo = ::javax::management::MBeanFeatureInfo;
using $MBeanInfo = ::javax::management::MBeanInfo;
using $MBeanOperationInfo = ::javax::management::MBeanOperationInfo;
using $MBeanParameterInfo = ::javax::management::MBeanParameterInfo;

namespace javax {
	namespace management {

$FieldInfo _MBeanConstructorInfo_FieldInfo_[] = {
	{"serialVersionUID", "J", nullptr, $STATIC | $FINAL, $constField(MBeanConstructorInfo, serialVersionUID)},
	{"NO_CONSTRUCTORS", "[Ljavax/management/MBeanConstructorInfo;", nullptr, $STATIC | $FINAL, $staticField(MBeanConstructorInfo, NO_CONSTRUCTORS)},
	{"arrayGettersSafe", "Z", nullptr, $PRIVATE | $FINAL | $TRANSIENT, $field(MBeanConstructorInfo, arrayGettersSafe)},
	{"signature", "[Ljavax/management/MBeanParameterInfo;", nullptr, $PRIVATE | $FINAL, $field(MBeanConstructorInfo, signature)},
	{}
};

$MethodInfo _MBeanConstructorInfo_MethodInfo_[] = {
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"<init>", "(Ljava/lang/String;Ljava/lang/reflect/Constructor;)V", "(Ljava/lang/String;Ljava/lang/reflect/Constructor<*>;)V", $PUBLIC, $method(static_cast<void(MBeanConstructorInfo::*)($String*,$Constructor*)>(&MBeanConstructorInfo::init$))},
	{"<init>", "(Ljava/lang/String;Ljava/lang/String;[Ljavax/management/MBeanParameterInfo;)V", nullptr, $PUBLIC, $method(static_cast<void(MBeanConstructorInfo::*)($String*,$String*,$MBeanParameterInfoArray*)>(&MBeanConstructorInfo::init$))},
	{"<init>", "(Ljava/lang/String;Ljava/lang/String;[Ljavax/management/MBeanParameterInfo;Ljavax/management/Descriptor;)V", nullptr, $PUBLIC, $method(static_cast<void(MBeanConstructorInfo::*)($String*,$String*,$MBeanParameterInfoArray*,$Descriptor*)>(&MBeanConstructorInfo::init$))},
	{"clone", "()Ljava/lang/Object;", nullptr, $PUBLIC},
	{"constructorSignature", "(Ljava/lang/reflect/Constructor;)[Ljavax/management/MBeanParameterInfo;", "(Ljava/lang/reflect/Constructor<*>;)[Ljavax/management/MBeanParameterInfo;", $PRIVATE | $STATIC, $method(static_cast<$MBeanParameterInfoArray*(*)($Constructor*)>(&MBeanConstructorInfo::constructorSignature))},
	{"equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"fastGetSignature", "()[Ljavax/management/MBeanParameterInfo;", nullptr, $PRIVATE, $method(static_cast<$MBeanParameterInfoArray*(MBeanConstructorInfo::*)()>(&MBeanConstructorInfo::fastGetSignature))},
	{"getSignature", "()[Ljavax/management/MBeanParameterInfo;", nullptr, $PUBLIC},
	{"hashCode", "()I", nullptr, $PUBLIC},
	{"toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

$ClassInfo _MBeanConstructorInfo_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"javax.management.MBeanConstructorInfo",
	"javax.management.MBeanFeatureInfo",
	"java.lang.Cloneable",
	_MBeanConstructorInfo_FieldInfo_,
	_MBeanConstructorInfo_MethodInfo_
};

$Object* allocate$MBeanConstructorInfo($Class* clazz) {
	return $of($alloc(MBeanConstructorInfo));
}

void MBeanConstructorInfo::finalize() {
	this->$MBeanFeatureInfo::finalize();
}

$MBeanConstructorInfoArray* MBeanConstructorInfo::NO_CONSTRUCTORS = nullptr;

void MBeanConstructorInfo::init$($String* description, $Constructor* constructor) {
	$useLocalCurrentObjectStackCache();
	$var($String, var$0, $nc(constructor)->getName());
	$var($String, var$1, description);
	$var($MBeanParameterInfoArray, var$2, constructorSignature(constructor));
	MBeanConstructorInfo::init$(var$0, var$1, var$2, $($Introspector::descriptorForElement(static_cast<$AnnotatedElement*>(static_cast<$AccessibleObject*>(static_cast<$Executable*>(constructor))))));
}

void MBeanConstructorInfo::init$($String* name, $String* description, $MBeanParameterInfoArray* signature) {
	MBeanConstructorInfo::init$(name, description, signature, nullptr);
}

void MBeanConstructorInfo::init$($String* name, $String* description, $MBeanParameterInfoArray* signature$renamed, $Descriptor* descriptor) {
	$var($MBeanParameterInfoArray, signature, signature$renamed);
	$MBeanFeatureInfo::init$(name, description, descriptor);
	if (signature == nullptr || $nc(signature)->length == 0) {
		$init($MBeanParameterInfo);
		$assign(signature, $MBeanParameterInfo::NO_PARAMS);
	} else {
		$assign(signature, $cast($MBeanParameterInfoArray, signature->clone()));
	}
	$set(this, signature, signature);
	this->arrayGettersSafe = $MBeanInfo::arrayGettersSafe($of(this)->getClass(), MBeanConstructorInfo::class$);
}

$Object* MBeanConstructorInfo::clone() {
	try {
		return $of($MBeanFeatureInfo::clone());
	} catch ($CloneNotSupportedException& e) {
		return $of(nullptr);
	}
	$shouldNotReachHere();
}

$MBeanParameterInfoArray* MBeanConstructorInfo::getSignature() {
	if ($nc(this->signature)->length == 0) {
		return this->signature;
	} else {
		return $cast($MBeanParameterInfoArray, $nc(this->signature)->clone());
	}
}

$MBeanParameterInfoArray* MBeanConstructorInfo::fastGetSignature() {
	if (this->arrayGettersSafe) {
		return this->signature;
	} else {
		return getSignature();
	}
}

$String* MBeanConstructorInfo::toString() {
	$useLocalCurrentObjectStackCache();
	$var($String, var$7, $$str({$($of(this)->getClass()->getName()), "[description="_s}));
	$var($String, var$6, $$concat(var$7, $(getDescription())));
	$var($String, var$5, $$concat(var$6, ", name="));
	$var($String, var$4, $$concat(var$5, $(getName())));
	$var($String, var$3, $$concat(var$4, ", signature="));
	$var($String, var$2, $$concat(var$3, $($Arrays::asList($(fastGetSignature())))));
	$var($String, var$1, $$concat(var$2, ", descriptor="));
	$var($String, var$0, $$concat(var$1, $(getDescriptor())));
	return $concat(var$0, "]");
}

bool MBeanConstructorInfo::equals(Object$* o) {
	$useLocalCurrentObjectStackCache();
	if ($equals(o, this)) {
		return true;
	}
	if (!($instanceOf(MBeanConstructorInfo, o))) {
		return false;
	}
	$var(MBeanConstructorInfo, p, $cast(MBeanConstructorInfo, o));
	$var($Object, var$3, $of($nc(p)->getName()));
	bool var$2 = $Objects::equals(var$3, $(getName()));
	if (var$2) {
		$var($Object, var$4, $of($nc(p)->getDescription()));
		var$2 = $Objects::equals(var$4, $(getDescription()));
	}
	bool var$1 = var$2;
	if (var$1) {
		$var($ObjectArray, var$5, $nc(p)->fastGetSignature());
		var$1 = $Arrays::equals(var$5, $(fastGetSignature()));
	}
	bool var$0 = var$1;
	if (var$0) {
		$var($Object, var$6, $of($nc(p)->getDescriptor()));
		var$0 = $Objects::equals(var$6, $(getDescriptor()));
	}
	return (var$0);
}

int32_t MBeanConstructorInfo::hashCode() {
	$useLocalCurrentObjectStackCache();
	int32_t var$0 = $Objects::hash($$new($ObjectArray, {$($of(getName()))}));
	return var$0 ^ $Arrays::hashCode($(fastGetSignature()));
}

$MBeanParameterInfoArray* MBeanConstructorInfo::constructorSignature($Constructor* cn) {
	$init(MBeanConstructorInfo);
	$useLocalCurrentObjectStackCache();
	$var($ClassArray, classes, $nc(cn)->getParameterTypes());
	$var($AnnotationArray2, annots, cn->getParameterAnnotations());
	return $MBeanOperationInfo::parameters(classes, annots);
}

void clinit$MBeanConstructorInfo($Class* class$) {
	$assignStatic(MBeanConstructorInfo::NO_CONSTRUCTORS, $new($MBeanConstructorInfoArray, 0));
}

MBeanConstructorInfo::MBeanConstructorInfo() {
}

$Class* MBeanConstructorInfo::load$($String* name, bool initialize) {
	$loadClass(MBeanConstructorInfo, name, initialize, &_MBeanConstructorInfo_ClassInfo_, clinit$MBeanConstructorInfo, allocate$MBeanConstructorInfo);
	return class$;
}

$Class* MBeanConstructorInfo::class$ = nullptr;

	} // management
} // javax
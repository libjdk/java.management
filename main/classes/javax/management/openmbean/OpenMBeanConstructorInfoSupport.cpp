#include <javax/management/openmbean/OpenMBeanConstructorInfoSupport.h>

#include <java/lang/ClassCastException.h>
#include <java/util/Arrays.h>
#include <java/util/List.h>
#include <javax/management/Descriptor.h>
#include <javax/management/MBeanConstructorInfo.h>
#include <javax/management/MBeanParameterInfo.h>
#include <javax/management/openmbean/OpenMBeanConstructorInfo.h>
#include <javax/management/openmbean/OpenMBeanParameterInfo.h>
#include <jcpp.h>

using $MBeanParameterInfoArray = $Array<::javax::management::MBeanParameterInfo>;
using $OpenMBeanParameterInfoArray = $Array<::javax::management::openmbean::OpenMBeanParameterInfo>;
using $ClassCastException = ::java::lang::ClassCastException;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $IllegalArgumentException = ::java::lang::IllegalArgumentException;
using $Integer = ::java::lang::Integer;
using $MethodInfo = ::java::lang::MethodInfo;
using $Arrays = ::java::util::Arrays;
using $List = ::java::util::List;
using $Descriptor = ::javax::management::Descriptor;
using $MBeanConstructorInfo = ::javax::management::MBeanConstructorInfo;
using $MBeanFeatureInfo = ::javax::management::MBeanFeatureInfo;
using $MBeanParameterInfo = ::javax::management::MBeanParameterInfo;
using $OpenMBeanConstructorInfo = ::javax::management::openmbean::OpenMBeanConstructorInfo;

namespace javax {
	namespace management {
		namespace openmbean {

$FieldInfo _OpenMBeanConstructorInfoSupport_FieldInfo_[] = {
	{"serialVersionUID", "J", nullptr, $STATIC | $FINAL, $constField(OpenMBeanConstructorInfoSupport, serialVersionUID)},
	{"myHashCode", "Ljava/lang/Integer;", nullptr, $PRIVATE | $TRANSIENT, $field(OpenMBeanConstructorInfoSupport, myHashCode)},
	{"myToString", "Ljava/lang/String;", nullptr, $PRIVATE | $TRANSIENT, $field(OpenMBeanConstructorInfoSupport, myToString)},
	{}
};

$MethodInfo _OpenMBeanConstructorInfoSupport_MethodInfo_[] = {
	{"*clone", "()Ljava/lang/Object;", nullptr, $PUBLIC},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"*getDescription", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"*getName", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"*getSignature", "()[Ljavax/management/MBeanParameterInfo;", nullptr, $PUBLIC},
	{"<init>", "(Ljava/lang/String;Ljava/lang/String;[Ljavax/management/openmbean/OpenMBeanParameterInfo;)V", nullptr, $PUBLIC, $method(static_cast<void(OpenMBeanConstructorInfoSupport::*)($String*,$String*,$OpenMBeanParameterInfoArray*)>(&OpenMBeanConstructorInfoSupport::init$))},
	{"<init>", "(Ljava/lang/String;Ljava/lang/String;[Ljavax/management/openmbean/OpenMBeanParameterInfo;Ljavax/management/Descriptor;)V", nullptr, $PUBLIC, $method(static_cast<void(OpenMBeanConstructorInfoSupport::*)($String*,$String*,$OpenMBeanParameterInfoArray*,$Descriptor*)>(&OpenMBeanConstructorInfoSupport::init$))},
	{"arrayCopyCast", "([Ljavax/management/openmbean/OpenMBeanParameterInfo;)[Ljavax/management/MBeanParameterInfo;", nullptr, $PRIVATE | $STATIC, $method(static_cast<$MBeanParameterInfoArray*(*)($OpenMBeanParameterInfoArray*)>(&OpenMBeanConstructorInfoSupport::arrayCopyCast))},
	{"equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"hashCode", "()I", nullptr, $PUBLIC},
	{"toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

$ClassInfo _OpenMBeanConstructorInfoSupport_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"javax.management.openmbean.OpenMBeanConstructorInfoSupport",
	"javax.management.MBeanConstructorInfo",
	"javax.management.openmbean.OpenMBeanConstructorInfo",
	_OpenMBeanConstructorInfoSupport_FieldInfo_,
	_OpenMBeanConstructorInfoSupport_MethodInfo_
};

$Object* allocate$OpenMBeanConstructorInfoSupport($Class* clazz) {
	return $of($alloc(OpenMBeanConstructorInfoSupport));
}

$Object* OpenMBeanConstructorInfoSupport::clone() {
	 return this->$MBeanConstructorInfo::clone();
}

$MBeanParameterInfoArray* OpenMBeanConstructorInfoSupport::getSignature() {
	 return this->$MBeanConstructorInfo::getSignature();
}

$String* OpenMBeanConstructorInfoSupport::getName() {
	 return this->$MBeanConstructorInfo::getName();
}

$String* OpenMBeanConstructorInfoSupport::getDescription() {
	 return this->$MBeanConstructorInfo::getDescription();
}

void OpenMBeanConstructorInfoSupport::finalize() {
	this->$MBeanConstructorInfo::finalize();
}

void OpenMBeanConstructorInfoSupport::init$($String* name, $String* description, $OpenMBeanParameterInfoArray* signature) {
	OpenMBeanConstructorInfoSupport::init$(name, description, signature, ($Descriptor*)nullptr);
}

void OpenMBeanConstructorInfoSupport::init$($String* name, $String* description, $OpenMBeanParameterInfoArray* signature, $Descriptor* descriptor) {
	$useLocalCurrentObjectStackCache();
	$MBeanConstructorInfo::init$(name, description, $(arrayCopyCast(signature)), descriptor);
	$set(this, myHashCode, nullptr);
	$set(this, myToString, nullptr);
	if (name == nullptr || $($nc(name)->trim())->isEmpty()) {
		$throwNew($IllegalArgumentException, "Argument name cannot be null or empty"_s);
	}
	if (description == nullptr || $($nc(description)->trim())->isEmpty()) {
		$throwNew($IllegalArgumentException, "Argument description cannot be null or empty"_s);
	}
}

$MBeanParameterInfoArray* OpenMBeanConstructorInfoSupport::arrayCopyCast($OpenMBeanParameterInfoArray* src) {
	$init(OpenMBeanConstructorInfoSupport);
	if (src == nullptr) {
		return nullptr;
	}
	$var($MBeanParameterInfoArray, dst, $new($MBeanParameterInfoArray, $nc(src)->length));
	$System::arraycopy(src, 0, dst, 0, src->length);
	return dst;
}

bool OpenMBeanConstructorInfoSupport::equals(Object$* obj) {
	$useLocalCurrentObjectStackCache();
	if (obj == nullptr) {
		return false;
	}
	$var($OpenMBeanConstructorInfo, other, nullptr);
	try {
		$assign(other, $cast($OpenMBeanConstructorInfo, obj));
	} catch ($ClassCastException& e) {
		return false;
	}
	if (!$nc($(this->getName()))->equals($($nc(other)->getName()))) {
		return false;
	}
	$var($ObjectArray, var$0, this->getSignature());
	if (!$Arrays::equals(var$0, $($nc(other)->getSignature()))) {
		return false;
	}
	return true;
}

int32_t OpenMBeanConstructorInfoSupport::hashCode() {
	$useLocalCurrentObjectStackCache();
	if (this->myHashCode == nullptr) {
		int32_t value = 0;
		value += $nc($(this->getName()))->hashCode();
		value += $nc($($Arrays::asList($(this->getSignature()))))->hashCode();
		$set(this, myHashCode, $Integer::valueOf(value));
	}
	return $nc(this->myHashCode)->intValue();
}

$String* OpenMBeanConstructorInfoSupport::toString() {
	$useLocalCurrentObjectStackCache();
	if (this->myToString == nullptr) {
		$set(this, myToString, $$new($StringBuilder)->append($($of(this)->getClass()->getName()))->append("(name="_s)->append($(this->getName()))->append(",signature="_s)->append($($nc($of($($Arrays::asList($(this->getSignature())))))->toString()))->append(",descriptor="_s)->append($($of(this->getDescriptor())))->append(")"_s)->toString());
	}
	return this->myToString;
}

OpenMBeanConstructorInfoSupport::OpenMBeanConstructorInfoSupport() {
}

$Class* OpenMBeanConstructorInfoSupport::load$($String* name, bool initialize) {
	$loadClass(OpenMBeanConstructorInfoSupport, name, initialize, &_OpenMBeanConstructorInfoSupport_ClassInfo_, allocate$OpenMBeanConstructorInfoSupport);
	return class$;
}

$Class* OpenMBeanConstructorInfoSupport::class$ = nullptr;

		} // openmbean
	} // management
} // javax
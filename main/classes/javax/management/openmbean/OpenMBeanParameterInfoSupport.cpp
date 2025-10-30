#include <javax/management/openmbean/OpenMBeanParameterInfoSupport.h>

#include <java/lang/Comparable.h>
#include <java/util/Set.h>
#include <javax/management/Descriptor.h>
#include <javax/management/ImmutableDescriptor.h>
#include <javax/management/JMException.h>
#include <javax/management/MBeanFeatureInfo.h>
#include <javax/management/MBeanParameterInfo.h>
#include <javax/management/openmbean/OpenDataException.h>
#include <javax/management/openmbean/OpenMBeanAttributeInfoSupport.h>
#include <javax/management/openmbean/OpenMBeanParameterInfo.h>
#include <javax/management/openmbean/OpenType.h>
#include <jcpp.h>

using $DescriptorArray = $Array<::javax::management::Descriptor>;
using $ClassInfo = ::java::lang::ClassInfo;
using $Comparable = ::java::lang::Comparable;
using $Exception = ::java::lang::Exception;
using $FieldInfo = ::java::lang::FieldInfo;
using $IllegalArgumentException = ::java::lang::IllegalArgumentException;
using $Integer = ::java::lang::Integer;
using $MethodInfo = ::java::lang::MethodInfo;
using $Set = ::java::util::Set;
using $Descriptor = ::javax::management::Descriptor;
using $ImmutableDescriptor = ::javax::management::ImmutableDescriptor;
using $JMException = ::javax::management::JMException;
using $MBeanFeatureInfo = ::javax::management::MBeanFeatureInfo;
using $MBeanParameterInfo = ::javax::management::MBeanParameterInfo;
using $OpenDataException = ::javax::management::openmbean::OpenDataException;
using $OpenMBeanAttributeInfoSupport = ::javax::management::openmbean::OpenMBeanAttributeInfoSupport;
using $OpenMBeanParameterInfo = ::javax::management::openmbean::OpenMBeanParameterInfo;
using $OpenType = ::javax::management::openmbean::OpenType;

namespace javax {
	namespace management {
		namespace openmbean {

$FieldInfo _OpenMBeanParameterInfoSupport_FieldInfo_[] = {
	{"serialVersionUID", "J", nullptr, $STATIC | $FINAL, $constField(OpenMBeanParameterInfoSupport, serialVersionUID)},
	{"openType", "Ljavax/management/openmbean/OpenType;", "Ljavax/management/openmbean/OpenType<*>;", $PRIVATE, $field(OpenMBeanParameterInfoSupport, openType)},
	{"defaultValue", "Ljava/lang/Object;", nullptr, $PRIVATE, $field(OpenMBeanParameterInfoSupport, defaultValue)},
	{"legalValues", "Ljava/util/Set;", "Ljava/util/Set<*>;", $PRIVATE, $field(OpenMBeanParameterInfoSupport, legalValues)},
	{"minValue", "Ljava/lang/Comparable;", "Ljava/lang/Comparable<*>;", $PRIVATE, $field(OpenMBeanParameterInfoSupport, minValue)},
	{"maxValue", "Ljava/lang/Comparable;", "Ljava/lang/Comparable<*>;", $PRIVATE, $field(OpenMBeanParameterInfoSupport, maxValue)},
	{"myHashCode", "Ljava/lang/Integer;", nullptr, $PRIVATE | $TRANSIENT, $field(OpenMBeanParameterInfoSupport, myHashCode)},
	{"myToString", "Ljava/lang/String;", nullptr, $PRIVATE | $TRANSIENT, $field(OpenMBeanParameterInfoSupport, myToString)},
	{}
};

$MethodInfo _OpenMBeanParameterInfoSupport_MethodInfo_[] = {
	{"*clone", "()Ljava/lang/Object;", nullptr, $PUBLIC},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"*getDescription", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"*getName", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"<init>", "(Ljava/lang/String;Ljava/lang/String;Ljavax/management/openmbean/OpenType;)V", "(Ljava/lang/String;Ljava/lang/String;Ljavax/management/openmbean/OpenType<*>;)V", $PUBLIC, $method(static_cast<void(OpenMBeanParameterInfoSupport::*)($String*,$String*,$OpenType*)>(&OpenMBeanParameterInfoSupport::init$))},
	{"<init>", "(Ljava/lang/String;Ljava/lang/String;Ljavax/management/openmbean/OpenType;Ljavax/management/Descriptor;)V", "(Ljava/lang/String;Ljava/lang/String;Ljavax/management/openmbean/OpenType<*>;Ljavax/management/Descriptor;)V", $PUBLIC, $method(static_cast<void(OpenMBeanParameterInfoSupport::*)($String*,$String*,$OpenType*,$Descriptor*)>(&OpenMBeanParameterInfoSupport::init$))},
	{"<init>", "(Ljava/lang/String;Ljava/lang/String;Ljavax/management/openmbean/OpenType;Ljava/lang/Object;)V", "<T:Ljava/lang/Object;>(Ljava/lang/String;Ljava/lang/String;Ljavax/management/openmbean/OpenType<TT;>;TT;)V", $PUBLIC, $method(static_cast<void(OpenMBeanParameterInfoSupport::*)($String*,$String*,$OpenType*,Object$*)>(&OpenMBeanParameterInfoSupport::init$)), "javax.management.openmbean.OpenDataException"},
	{"<init>", "(Ljava/lang/String;Ljava/lang/String;Ljavax/management/openmbean/OpenType;Ljava/lang/Object;[Ljava/lang/Object;)V", "<T:Ljava/lang/Object;>(Ljava/lang/String;Ljava/lang/String;Ljavax/management/openmbean/OpenType<TT;>;TT;[TT;)V", $PUBLIC, $method(static_cast<void(OpenMBeanParameterInfoSupport::*)($String*,$String*,$OpenType*,Object$*,$ObjectArray*)>(&OpenMBeanParameterInfoSupport::init$)), "javax.management.openmbean.OpenDataException"},
	{"<init>", "(Ljava/lang/String;Ljava/lang/String;Ljavax/management/openmbean/OpenType;Ljava/lang/Object;Ljava/lang/Comparable;Ljava/lang/Comparable;)V", "<T:Ljava/lang/Object;>(Ljava/lang/String;Ljava/lang/String;Ljavax/management/openmbean/OpenType<TT;>;TT;Ljava/lang/Comparable<TT;>;Ljava/lang/Comparable<TT;>;)V", $PUBLIC, $method(static_cast<void(OpenMBeanParameterInfoSupport::*)($String*,$String*,$OpenType*,Object$*,$Comparable*,$Comparable*)>(&OpenMBeanParameterInfoSupport::init$)), "javax.management.openmbean.OpenDataException"},
	{"<init>", "(Ljava/lang/String;Ljava/lang/String;Ljavax/management/openmbean/OpenType;Ljava/lang/Object;[Ljava/lang/Object;Ljava/lang/Comparable;Ljava/lang/Comparable;)V", "<T:Ljava/lang/Object;>(Ljava/lang/String;Ljava/lang/String;Ljavax/management/openmbean/OpenType<TT;>;TT;[TT;Ljava/lang/Comparable<TT;>;Ljava/lang/Comparable<TT;>;)V", $PRIVATE, $method(static_cast<void(OpenMBeanParameterInfoSupport::*)($String*,$String*,$OpenType*,Object$*,$ObjectArray*,$Comparable*,$Comparable*)>(&OpenMBeanParameterInfoSupport::init$)), "javax.management.openmbean.OpenDataException"},
	{"equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"getDefaultValue", "()Ljava/lang/Object;", nullptr, $PUBLIC},
	{"getLegalValues", "()Ljava/util/Set;", "()Ljava/util/Set<*>;", $PUBLIC},
	{"getMaxValue", "()Ljava/lang/Comparable;", "()Ljava/lang/Comparable<*>;", $PUBLIC},
	{"getMinValue", "()Ljava/lang/Comparable;", "()Ljava/lang/Comparable<*>;", $PUBLIC},
	{"getOpenType", "()Ljavax/management/openmbean/OpenType;", "()Ljavax/management/openmbean/OpenType<*>;", $PUBLIC},
	{"hasDefaultValue", "()Z", nullptr, $PUBLIC},
	{"hasLegalValues", "()Z", nullptr, $PUBLIC},
	{"hasMaxValue", "()Z", nullptr, $PUBLIC},
	{"hasMinValue", "()Z", nullptr, $PUBLIC},
	{"hashCode", "()I", nullptr, $PUBLIC},
	{"isValue", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"readResolve", "()Ljava/lang/Object;", nullptr, $PRIVATE, $method(static_cast<$Object*(OpenMBeanParameterInfoSupport::*)()>(&OpenMBeanParameterInfoSupport::readResolve))},
	{"toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

$ClassInfo _OpenMBeanParameterInfoSupport_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"javax.management.openmbean.OpenMBeanParameterInfoSupport",
	"javax.management.MBeanParameterInfo",
	"javax.management.openmbean.OpenMBeanParameterInfo",
	_OpenMBeanParameterInfoSupport_FieldInfo_,
	_OpenMBeanParameterInfoSupport_MethodInfo_
};

$Object* allocate$OpenMBeanParameterInfoSupport($Class* clazz) {
	return $of($alloc(OpenMBeanParameterInfoSupport));
}

$Object* OpenMBeanParameterInfoSupport::clone() {
	 return this->$MBeanParameterInfo::clone();
}

$String* OpenMBeanParameterInfoSupport::getName() {
	 return this->$MBeanParameterInfo::getName();
}

$String* OpenMBeanParameterInfoSupport::getDescription() {
	 return this->$MBeanParameterInfo::getDescription();
}

void OpenMBeanParameterInfoSupport::finalize() {
	this->$MBeanParameterInfo::finalize();
}

void OpenMBeanParameterInfoSupport::init$($String* name, $String* description, $OpenType* openType) {
	OpenMBeanParameterInfoSupport::init$(name, description, openType, ($Descriptor*)nullptr);
}

void OpenMBeanParameterInfoSupport::init$($String* name, $String* description, $OpenType* openType, $Descriptor* descriptor$renamed) {
	$useLocalCurrentObjectStackCache();
	$var($Descriptor, descriptor, descriptor$renamed);
	$var($String, var$0, name);
	$var($String, var$1, (openType == nullptr) ? ($String*)nullptr : $nc(openType)->getClassName());
	$var($String, var$2, description);
	$MBeanParameterInfo::init$(var$0, var$1, var$2, $($ImmutableDescriptor::union$($$new($DescriptorArray, {
		descriptor,
		(openType == nullptr) ? ($Descriptor*)nullptr : $(openType->getDescriptor())
	}))));
	$set(this, defaultValue, nullptr);
	$set(this, legalValues, nullptr);
	$set(this, minValue, nullptr);
	$set(this, maxValue, nullptr);
	$set(this, myHashCode, nullptr);
	$set(this, myToString, nullptr);
	$set(this, openType, openType);
	$assign(descriptor, getDescriptor());
	$set(this, defaultValue, $OpenMBeanAttributeInfoSupport::valueFrom(descriptor, "defaultValue"_s, openType));
	$set(this, legalValues, $OpenMBeanAttributeInfoSupport::valuesFrom(descriptor, "legalValues"_s, openType));
	$set(this, minValue, $OpenMBeanAttributeInfoSupport::comparableValueFrom(descriptor, "minValue"_s, openType));
	$set(this, maxValue, $OpenMBeanAttributeInfoSupport::comparableValueFrom(descriptor, "maxValue"_s, openType));
	try {
		$OpenMBeanAttributeInfoSupport::check(this);
	} catch ($OpenDataException& e) {
		$throwNew($IllegalArgumentException, $(e->getMessage()), e);
	}
}

void OpenMBeanParameterInfoSupport::init$($String* name, $String* description, $OpenType* openType, Object$* defaultValue) {
	OpenMBeanParameterInfoSupport::init$(name, description, openType, defaultValue, ($ObjectArray*)nullptr);
}

void OpenMBeanParameterInfoSupport::init$($String* name, $String* description, $OpenType* openType, Object$* defaultValue, $ObjectArray* legalValues) {
	OpenMBeanParameterInfoSupport::init$(name, description, openType, defaultValue, legalValues, nullptr, nullptr);
}

void OpenMBeanParameterInfoSupport::init$($String* name, $String* description, $OpenType* openType, Object$* defaultValue, $Comparable* minValue, $Comparable* maxValue) {
	OpenMBeanParameterInfoSupport::init$(name, description, openType, defaultValue, nullptr, minValue, maxValue);
}

void OpenMBeanParameterInfoSupport::init$($String* name, $String* description, $OpenType* openType, Object$* defaultValue, $ObjectArray* legalValues, $Comparable* minValue, $Comparable* maxValue) {
	$useLocalCurrentObjectStackCache();
	$var($String, var$0, name);
	$var($String, var$1, (openType == nullptr) ? ($String*)nullptr : $nc(openType)->getClassName());
	$var($String, var$2, description);
	$MBeanParameterInfo::init$(var$0, var$1, var$2, $($OpenMBeanAttributeInfoSupport::makeDescriptor(openType, defaultValue, legalValues, minValue, maxValue)));
	$set(this, defaultValue, nullptr);
	$set(this, legalValues, nullptr);
	$set(this, minValue, nullptr);
	$set(this, maxValue, nullptr);
	$set(this, myHashCode, nullptr);
	$set(this, myToString, nullptr);
	$set(this, openType, openType);
	$var($Descriptor, d, getDescriptor());
	$set(this, defaultValue, defaultValue);
	$set(this, minValue, minValue);
	$set(this, maxValue, maxValue);
	$set(this, legalValues, $cast($Set, $nc(d)->getFieldValue("legalValues"_s)));
	$OpenMBeanAttributeInfoSupport::check(this);
}

$Object* OpenMBeanParameterInfoSupport::readResolve() {
	$useLocalCurrentObjectStackCache();
	if ($nc($($nc($(getDescriptor()))->getFieldNames()))->length == 0) {
		$var($OpenType, xopenType, $cast($OpenType, $OpenMBeanAttributeInfoSupport::cast(this->openType)));
		$var($Set, xlegalValues, $cast($Set, $OpenMBeanAttributeInfoSupport::cast(this->legalValues)));
		$var($Comparable, xminValue, $cast($Comparable, $OpenMBeanAttributeInfoSupport::cast(this->minValue)));
		$var($Comparable, xmaxValue, $cast($Comparable, $OpenMBeanAttributeInfoSupport::cast(this->maxValue)));
		return $of($new(OpenMBeanParameterInfoSupport, this->name, this->description, this->openType, $($OpenMBeanAttributeInfoSupport::makeDescriptor(xopenType, this->defaultValue, xlegalValues, xminValue, xmaxValue))));
	} else {
		return $of(this);
	}
}

$OpenType* OpenMBeanParameterInfoSupport::getOpenType() {
	return this->openType;
}

$Object* OpenMBeanParameterInfoSupport::getDefaultValue() {
	return $of(this->defaultValue);
}

$Set* OpenMBeanParameterInfoSupport::getLegalValues() {
	return (this->legalValues);
}

$Comparable* OpenMBeanParameterInfoSupport::getMinValue() {
	return this->minValue;
}

$Comparable* OpenMBeanParameterInfoSupport::getMaxValue() {
	return this->maxValue;
}

bool OpenMBeanParameterInfoSupport::hasDefaultValue() {
	return (this->defaultValue != nullptr);
}

bool OpenMBeanParameterInfoSupport::hasLegalValues() {
	return (this->legalValues != nullptr);
}

bool OpenMBeanParameterInfoSupport::hasMinValue() {
	return (this->minValue != nullptr);
}

bool OpenMBeanParameterInfoSupport::hasMaxValue() {
	return (this->maxValue != nullptr);
}

bool OpenMBeanParameterInfoSupport::isValue(Object$* obj) {
	return $OpenMBeanAttributeInfoSupport::isValue(this, obj);
}

bool OpenMBeanParameterInfoSupport::equals(Object$* obj) {
	if (!($instanceOf($OpenMBeanParameterInfo, obj))) {
		return false;
	}
	$var($OpenMBeanParameterInfo, other, $cast($OpenMBeanParameterInfo, obj));
	return $OpenMBeanAttributeInfoSupport::equal(this, other);
}

int32_t OpenMBeanParameterInfoSupport::hashCode() {
	if (this->myHashCode == nullptr) {
		$set(this, myHashCode, $Integer::valueOf($OpenMBeanAttributeInfoSupport::hashCode(this)));
	}
	return $nc(this->myHashCode)->intValue();
}

$String* OpenMBeanParameterInfoSupport::toString() {
	if (this->myToString == nullptr) {
		$set(this, myToString, $OpenMBeanAttributeInfoSupport::toString(this));
	}
	return this->myToString;
}

OpenMBeanParameterInfoSupport::OpenMBeanParameterInfoSupport() {
}

$Class* OpenMBeanParameterInfoSupport::load$($String* name, bool initialize) {
	$loadClass(OpenMBeanParameterInfoSupport, name, initialize, &_OpenMBeanParameterInfoSupport_ClassInfo_, allocate$OpenMBeanParameterInfoSupport);
	return class$;
}

$Class* OpenMBeanParameterInfoSupport::class$ = nullptr;

		} // openmbean
	} // management
} // javax
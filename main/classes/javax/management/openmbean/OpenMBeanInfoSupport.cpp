#include <javax/management/openmbean/OpenMBeanInfoSupport.h>

#include <java/lang/ClassCastException.h>
#include <java/util/Arrays.h>
#include <java/util/Collection.h>
#include <java/util/HashSet.h>
#include <java/util/List.h>
#include <java/util/Objects.h>
#include <javax/management/Descriptor.h>
#include <javax/management/MBeanAttributeInfo.h>
#include <javax/management/MBeanConstructorInfo.h>
#include <javax/management/MBeanInfo.h>
#include <javax/management/MBeanNotificationInfo.h>
#include <javax/management/MBeanOperationInfo.h>
#include <javax/management/openmbean/OpenMBeanAttributeInfo.h>
#include <javax/management/openmbean/OpenMBeanConstructorInfo.h>
#include <javax/management/openmbean/OpenMBeanInfo.h>
#include <javax/management/openmbean/OpenMBeanOperationInfo.h>
#include <jcpp.h>

using $MBeanAttributeInfoArray = $Array<::javax::management::MBeanAttributeInfo>;
using $MBeanConstructorInfoArray = $Array<::javax::management::MBeanConstructorInfo>;
using $MBeanNotificationInfoArray = $Array<::javax::management::MBeanNotificationInfo>;
using $MBeanOperationInfoArray = $Array<::javax::management::MBeanOperationInfo>;
using $OpenMBeanAttributeInfoArray = $Array<::javax::management::openmbean::OpenMBeanAttributeInfo>;
using $OpenMBeanConstructorInfoArray = $Array<::javax::management::openmbean::OpenMBeanConstructorInfo>;
using $OpenMBeanOperationInfoArray = $Array<::javax::management::openmbean::OpenMBeanOperationInfo>;
using $ClassCastException = ::java::lang::ClassCastException;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $Integer = ::java::lang::Integer;
using $MethodInfo = ::java::lang::MethodInfo;
using $AbstractSet = ::java::util::AbstractSet;
using $Arrays = ::java::util::Arrays;
using $Collection = ::java::util::Collection;
using $HashSet = ::java::util::HashSet;
using $List = ::java::util::List;
using $Objects = ::java::util::Objects;
using $Descriptor = ::javax::management::Descriptor;
using $MBeanAttributeInfo = ::javax::management::MBeanAttributeInfo;
using $MBeanConstructorInfo = ::javax::management::MBeanConstructorInfo;
using $MBeanInfo = ::javax::management::MBeanInfo;
using $MBeanNotificationInfo = ::javax::management::MBeanNotificationInfo;
using $MBeanOperationInfo = ::javax::management::MBeanOperationInfo;
using $OpenMBeanInfo = ::javax::management::openmbean::OpenMBeanInfo;

namespace javax {
	namespace management {
		namespace openmbean {

$FieldInfo _OpenMBeanInfoSupport_FieldInfo_[] = {
	{"serialVersionUID", "J", nullptr, $STATIC | $FINAL, $constField(OpenMBeanInfoSupport, serialVersionUID)},
	{"myHashCode", "Ljava/lang/Integer;", nullptr, $PRIVATE | $TRANSIENT, $field(OpenMBeanInfoSupport, myHashCode)},
	{"myToString", "Ljava/lang/String;", nullptr, $PRIVATE | $TRANSIENT, $field(OpenMBeanInfoSupport, myToString)},
	{}
};

$MethodInfo _OpenMBeanInfoSupport_MethodInfo_[] = {
	{"*clone", "()Ljava/lang/Object;", nullptr, $PUBLIC},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"*getAttributes", "()[Ljavax/management/MBeanAttributeInfo;", nullptr, $PUBLIC},
	{"*getClassName", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"*getConstructors", "()[Ljavax/management/MBeanConstructorInfo;", nullptr, $PUBLIC},
	{"*getDescription", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"*getNotifications", "()[Ljavax/management/MBeanNotificationInfo;", nullptr, $PUBLIC},
	{"*getOperations", "()[Ljavax/management/MBeanOperationInfo;", nullptr, $PUBLIC},
	{"<init>", "(Ljava/lang/String;Ljava/lang/String;[Ljavax/management/openmbean/OpenMBeanAttributeInfo;[Ljavax/management/openmbean/OpenMBeanConstructorInfo;[Ljavax/management/openmbean/OpenMBeanOperationInfo;[Ljavax/management/MBeanNotificationInfo;)V", nullptr, $PUBLIC, $method(static_cast<void(OpenMBeanInfoSupport::*)($String*,$String*,$OpenMBeanAttributeInfoArray*,$OpenMBeanConstructorInfoArray*,$OpenMBeanOperationInfoArray*,$MBeanNotificationInfoArray*)>(&OpenMBeanInfoSupport::init$))},
	{"<init>", "(Ljava/lang/String;Ljava/lang/String;[Ljavax/management/openmbean/OpenMBeanAttributeInfo;[Ljavax/management/openmbean/OpenMBeanConstructorInfo;[Ljavax/management/openmbean/OpenMBeanOperationInfo;[Ljavax/management/MBeanNotificationInfo;Ljavax/management/Descriptor;)V", nullptr, $PUBLIC, $method(static_cast<void(OpenMBeanInfoSupport::*)($String*,$String*,$OpenMBeanAttributeInfoArray*,$OpenMBeanConstructorInfoArray*,$OpenMBeanOperationInfoArray*,$MBeanNotificationInfoArray*,$Descriptor*)>(&OpenMBeanInfoSupport::init$))},
	{"arraySetHash", "([Ljava/lang/Object;)I", "<T:Ljava/lang/Object;>([TT;)I", $PRIVATE | $STATIC, $method(static_cast<int32_t(*)($ObjectArray*)>(&OpenMBeanInfoSupport::arraySetHash))},
	{"attributeArray", "([Ljavax/management/openmbean/OpenMBeanAttributeInfo;)[Ljavax/management/MBeanAttributeInfo;", nullptr, $PRIVATE | $STATIC, $method(static_cast<$MBeanAttributeInfoArray*(*)($OpenMBeanAttributeInfoArray*)>(&OpenMBeanInfoSupport::attributeArray))},
	{"constructorArray", "([Ljavax/management/openmbean/OpenMBeanConstructorInfo;)[Ljavax/management/MBeanConstructorInfo;", nullptr, $PRIVATE | $STATIC, $method(static_cast<$MBeanConstructorInfoArray*(*)($OpenMBeanConstructorInfoArray*)>(&OpenMBeanInfoSupport::constructorArray))},
	{"equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"hashCode", "()I", nullptr, $PUBLIC},
	{"operationArray", "([Ljavax/management/openmbean/OpenMBeanOperationInfo;)[Ljavax/management/MBeanOperationInfo;", nullptr, $PRIVATE | $STATIC, $method(static_cast<$MBeanOperationInfoArray*(*)($OpenMBeanOperationInfoArray*)>(&OpenMBeanInfoSupport::operationArray))},
	{"sameArrayContents", "([Ljava/lang/Object;[Ljava/lang/Object;)Z", "<T:Ljava/lang/Object;>([TT;[TT;)Z", $PRIVATE | $STATIC, $method(static_cast<bool(*)($ObjectArray*,$ObjectArray*)>(&OpenMBeanInfoSupport::sameArrayContents))},
	{"toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

$ClassInfo _OpenMBeanInfoSupport_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"javax.management.openmbean.OpenMBeanInfoSupport",
	"javax.management.MBeanInfo",
	"javax.management.openmbean.OpenMBeanInfo",
	_OpenMBeanInfoSupport_FieldInfo_,
	_OpenMBeanInfoSupport_MethodInfo_
};

$Object* allocate$OpenMBeanInfoSupport($Class* clazz) {
	return $of($alloc(OpenMBeanInfoSupport));
}

$Object* OpenMBeanInfoSupport::clone() {
	 return this->$MBeanInfo::clone();
}

$String* OpenMBeanInfoSupport::getClassName() {
	 return this->$MBeanInfo::getClassName();
}

$String* OpenMBeanInfoSupport::getDescription() {
	 return this->$MBeanInfo::getDescription();
}

$MBeanAttributeInfoArray* OpenMBeanInfoSupport::getAttributes() {
	 return this->$MBeanInfo::getAttributes();
}

$MBeanOperationInfoArray* OpenMBeanInfoSupport::getOperations() {
	 return this->$MBeanInfo::getOperations();
}

$MBeanConstructorInfoArray* OpenMBeanInfoSupport::getConstructors() {
	 return this->$MBeanInfo::getConstructors();
}

$MBeanNotificationInfoArray* OpenMBeanInfoSupport::getNotifications() {
	 return this->$MBeanInfo::getNotifications();
}

void OpenMBeanInfoSupport::finalize() {
	this->$MBeanInfo::finalize();
}

void OpenMBeanInfoSupport::init$($String* className, $String* description, $OpenMBeanAttributeInfoArray* openAttributes, $OpenMBeanConstructorInfoArray* openConstructors, $OpenMBeanOperationInfoArray* openOperations, $MBeanNotificationInfoArray* notifications) {
	OpenMBeanInfoSupport::init$(className, description, openAttributes, openConstructors, openOperations, notifications, ($Descriptor*)nullptr);
}

void OpenMBeanInfoSupport::init$($String* className, $String* description, $OpenMBeanAttributeInfoArray* openAttributes, $OpenMBeanConstructorInfoArray* openConstructors, $OpenMBeanOperationInfoArray* openOperations, $MBeanNotificationInfoArray* notifications, $Descriptor* descriptor) {
	$useLocalCurrentObjectStackCache();
	$var($String, var$0, className);
	$var($String, var$1, description);
	$var($MBeanAttributeInfoArray, var$2, attributeArray(openAttributes));
	$var($MBeanConstructorInfoArray, var$3, constructorArray(openConstructors));
	$var($MBeanOperationInfoArray, var$4, operationArray(openOperations));
	$MBeanInfo::init$(var$0, var$1, var$2, var$3, var$4, (notifications == nullptr) ? ($MBeanNotificationInfoArray*)nullptr : $cast($MBeanNotificationInfoArray, $($nc(notifications)->clone())), descriptor);
	$set(this, myHashCode, nullptr);
	$set(this, myToString, nullptr);
}

$MBeanAttributeInfoArray* OpenMBeanInfoSupport::attributeArray($OpenMBeanAttributeInfoArray* src) {
	$init(OpenMBeanInfoSupport);
	if (src == nullptr) {
		return nullptr;
	}
	$var($MBeanAttributeInfoArray, dst, $new($MBeanAttributeInfoArray, $nc(src)->length));
	$System::arraycopy(src, 0, dst, 0, src->length);
	return dst;
}

$MBeanConstructorInfoArray* OpenMBeanInfoSupport::constructorArray($OpenMBeanConstructorInfoArray* src) {
	$init(OpenMBeanInfoSupport);
	if (src == nullptr) {
		return nullptr;
	}
	$var($MBeanConstructorInfoArray, dst, $new($MBeanConstructorInfoArray, $nc(src)->length));
	$System::arraycopy(src, 0, dst, 0, src->length);
	return dst;
}

$MBeanOperationInfoArray* OpenMBeanInfoSupport::operationArray($OpenMBeanOperationInfoArray* src) {
	$init(OpenMBeanInfoSupport);
	if (src == nullptr) {
		return nullptr;
	}
	$var($MBeanOperationInfoArray, dst, $new($MBeanOperationInfoArray, $nc(src)->length));
	$System::arraycopy(src, 0, dst, 0, src->length);
	return dst;
}

bool OpenMBeanInfoSupport::equals(Object$* obj) {
	$useLocalCurrentObjectStackCache();
	if (obj == nullptr) {
		return false;
	}
	$var($OpenMBeanInfo, other, nullptr);
	try {
		$assign(other, $cast($OpenMBeanInfo, obj));
	} catch ($ClassCastException& e) {
		return false;
	}
	$var($Object, var$0, $of(this->getClassName()));
	if (!$Objects::equals(var$0, $($nc(other)->getClassName()))) {
		return false;
	}
	$var($ObjectArray, var$1, this->getAttributes());
	if (!sameArrayContents(var$1, $($nc(other)->getAttributes()))) {
		return false;
	}
	$var($ObjectArray, var$2, this->getConstructors());
	if (!sameArrayContents(var$2, $($nc(other)->getConstructors()))) {
		return false;
	}
	$var($ObjectArray, var$3, this->getOperations());
	if (!sameArrayContents(var$3, $($nc(other)->getOperations()))) {
		return false;
	}
	$var($ObjectArray, var$4, this->getNotifications());
	if (!sameArrayContents(var$4, $($nc(other)->getNotifications()))) {
		return false;
	}
	return true;
}

bool OpenMBeanInfoSupport::sameArrayContents($ObjectArray* a1, $ObjectArray* a2) {
	$init(OpenMBeanInfoSupport);
	$useLocalCurrentObjectStackCache();
	return ($$new($HashSet, $(static_cast<$Collection*>($Arrays::asList(a1))))->equals($$new($HashSet, $(static_cast<$Collection*>($Arrays::asList(a2))))));
}

int32_t OpenMBeanInfoSupport::hashCode() {
	$useLocalCurrentObjectStackCache();
	if (this->myHashCode == nullptr) {
		int32_t value = 0;
		if (this->getClassName() != nullptr) {
			value += $nc($(this->getClassName()))->hashCode();
		}
		value += arraySetHash($(this->getAttributes()));
		value += arraySetHash($(this->getConstructors()));
		value += arraySetHash($(this->getOperations()));
		value += arraySetHash($(this->getNotifications()));
		$set(this, myHashCode, $Integer::valueOf(value));
	}
	return $nc(this->myHashCode)->intValue();
}

int32_t OpenMBeanInfoSupport::arraySetHash($ObjectArray* a) {
	$init(OpenMBeanInfoSupport);
	$useLocalCurrentObjectStackCache();
	return $$new($HashSet, $(static_cast<$Collection*>($Arrays::asList(a))))->hashCode();
}

$String* OpenMBeanInfoSupport::toString() {
	$useLocalCurrentObjectStackCache();
	if (this->myToString == nullptr) {
		$set(this, myToString, $$new($StringBuilder)->append($($of(this)->getClass()->getName()))->append("(mbean_class_name="_s)->append($(this->getClassName()))->append(",attributes="_s)->append($($nc($of($($Arrays::asList($(this->getAttributes())))))->toString()))->append(",constructors="_s)->append($($nc($of($($Arrays::asList($(this->getConstructors())))))->toString()))->append(",operations="_s)->append($($nc($of($($Arrays::asList($(this->getOperations())))))->toString()))->append(",notifications="_s)->append($($nc($of($($Arrays::asList($(this->getNotifications())))))->toString()))->append(",descriptor="_s)->append($($of(this->getDescriptor())))->append(")"_s)->toString());
	}
	return this->myToString;
}

OpenMBeanInfoSupport::OpenMBeanInfoSupport() {
}

$Class* OpenMBeanInfoSupport::load$($String* name, bool initialize) {
	$loadClass(OpenMBeanInfoSupport, name, initialize, &_OpenMBeanInfoSupport_ClassInfo_, allocate$OpenMBeanInfoSupport);
	return class$;
}

$Class* OpenMBeanInfoSupport::class$ = nullptr;

		} // openmbean
	} // management
} // javax
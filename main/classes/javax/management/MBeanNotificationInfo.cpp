#include <javax/management/MBeanNotificationInfo.h>

#include <java/io/ObjectInputStream$GetField.h>
#include <java/io/ObjectInputStream.h>
#include <java/lang/CloneNotSupportedException.h>
#include <java/util/Arrays.h>
#include <java/util/List.h>
#include <java/util/Objects.h>
#include <javax/management/Descriptor.h>
#include <javax/management/MBeanFeatureInfo.h>
#include <javax/management/MBeanInfo.h>
#include <jcpp.h>

#undef NO_NOTIFICATIONS
#undef NO_TYPES

using $MBeanNotificationInfoArray = $Array<::javax::management::MBeanNotificationInfo>;
using $ObjectInputStream = ::java::io::ObjectInputStream;
using $ObjectInputStream$GetField = ::java::io::ObjectInputStream$GetField;
using $ClassInfo = ::java::lang::ClassInfo;
using $CloneNotSupportedException = ::java::lang::CloneNotSupportedException;
using $Cloneable = ::java::lang::Cloneable;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Arrays = ::java::util::Arrays;
using $List = ::java::util::List;
using $Objects = ::java::util::Objects;
using $Descriptor = ::javax::management::Descriptor;
using $MBeanFeatureInfo = ::javax::management::MBeanFeatureInfo;
using $MBeanInfo = ::javax::management::MBeanInfo;

namespace javax {
	namespace management {

$FieldInfo _MBeanNotificationInfo_FieldInfo_[] = {
	{"serialVersionUID", "J", nullptr, $STATIC | $FINAL, $constField(MBeanNotificationInfo, serialVersionUID)},
	{"NO_TYPES", "[Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(MBeanNotificationInfo, NO_TYPES)},
	{"NO_NOTIFICATIONS", "[Ljavax/management/MBeanNotificationInfo;", nullptr, $STATIC | $FINAL, $staticField(MBeanNotificationInfo, NO_NOTIFICATIONS)},
	{"types", "[Ljava/lang/String;", nullptr, $PRIVATE, $field(MBeanNotificationInfo, types)},
	{"arrayGettersSafe", "Z", nullptr, $PRIVATE | $FINAL | $TRANSIENT, $field(MBeanNotificationInfo, arrayGettersSafe)},
	{}
};

$MethodInfo _MBeanNotificationInfo_MethodInfo_[] = {
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"<init>", "([Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)V", nullptr, $PUBLIC, $method(static_cast<void(MBeanNotificationInfo::*)($StringArray*,$String*,$String*)>(&MBeanNotificationInfo::init$))},
	{"<init>", "([Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljavax/management/Descriptor;)V", nullptr, $PUBLIC, $method(static_cast<void(MBeanNotificationInfo::*)($StringArray*,$String*,$String*,$Descriptor*)>(&MBeanNotificationInfo::init$))},
	{"clone", "()Ljava/lang/Object;", nullptr, $PUBLIC},
	{"equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"fastGetNotifTypes", "()[Ljava/lang/String;", nullptr, $PRIVATE, $method(static_cast<$StringArray*(MBeanNotificationInfo::*)()>(&MBeanNotificationInfo::fastGetNotifTypes))},
	{"getNotifTypes", "()[Ljava/lang/String;", nullptr, $PUBLIC},
	{"hashCode", "()I", nullptr, $PUBLIC},
	{"readObject", "(Ljava/io/ObjectInputStream;)V", nullptr, $PRIVATE, $method(static_cast<void(MBeanNotificationInfo::*)($ObjectInputStream*)>(&MBeanNotificationInfo::readObject)), "java.io.IOException,java.lang.ClassNotFoundException"},
	{"toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

$ClassInfo _MBeanNotificationInfo_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"javax.management.MBeanNotificationInfo",
	"javax.management.MBeanFeatureInfo",
	"java.lang.Cloneable",
	_MBeanNotificationInfo_FieldInfo_,
	_MBeanNotificationInfo_MethodInfo_
};

$Object* allocate$MBeanNotificationInfo($Class* clazz) {
	return $of($alloc(MBeanNotificationInfo));
}

void MBeanNotificationInfo::finalize() {
	this->$MBeanFeatureInfo::finalize();
}

$StringArray* MBeanNotificationInfo::NO_TYPES = nullptr;
$MBeanNotificationInfoArray* MBeanNotificationInfo::NO_NOTIFICATIONS = nullptr;

void MBeanNotificationInfo::init$($StringArray* notifTypes, $String* name, $String* description) {
	MBeanNotificationInfo::init$(notifTypes, name, description, nullptr);
}

void MBeanNotificationInfo::init$($StringArray* notifTypes, $String* name, $String* description, $Descriptor* descriptor) {
	$MBeanFeatureInfo::init$(name, description, descriptor);
	$set(this, types, (notifTypes != nullptr && notifTypes->length > 0) ? $cast($StringArray, $nc(notifTypes)->clone()) : MBeanNotificationInfo::NO_TYPES);
	this->arrayGettersSafe = $MBeanInfo::arrayGettersSafe($of(this)->getClass(), MBeanNotificationInfo::class$);
}

$Object* MBeanNotificationInfo::clone() {
	try {
		return $of($MBeanFeatureInfo::clone());
	} catch ($CloneNotSupportedException& e) {
		return $of(nullptr);
	}
	$shouldNotReachHere();
}

$StringArray* MBeanNotificationInfo::getNotifTypes() {
	if ($nc(this->types)->length == 0) {
		return MBeanNotificationInfo::NO_TYPES;
	} else {
		return $cast($StringArray, $nc(this->types)->clone());
	}
}

$StringArray* MBeanNotificationInfo::fastGetNotifTypes() {
	if (this->arrayGettersSafe) {
		return this->types;
	} else {
		return getNotifTypes();
	}
}

$String* MBeanNotificationInfo::toString() {
	$useLocalCurrentObjectStackCache();
	$var($String, var$7, $$str({$($of(this)->getClass()->getName()), "[description="_s}));
	$var($String, var$6, $$concat(var$7, $(getDescription())));
	$var($String, var$5, $$concat(var$6, ", name="));
	$var($String, var$4, $$concat(var$5, $(getName())));
	$var($String, var$3, $$concat(var$4, ", notifTypes="));
	$var($String, var$2, $$concat(var$3, $($Arrays::asList($(fastGetNotifTypes())))));
	$var($String, var$1, $$concat(var$2, ", descriptor="));
	$var($String, var$0, $$concat(var$1, $(getDescriptor())));
	return $concat(var$0, "]");
}

bool MBeanNotificationInfo::equals(Object$* o) {
	$useLocalCurrentObjectStackCache();
	if ($equals(o, this)) {
		return true;
	}
	if (!($instanceOf(MBeanNotificationInfo, o))) {
		return false;
	}
	$var(MBeanNotificationInfo, p, $cast(MBeanNotificationInfo, o));
	$var($Object, var$3, $of($nc(p)->getName()));
	bool var$2 = $Objects::equals(var$3, $(getName()));
	if (var$2) {
		$var($Object, var$4, $of($nc(p)->getDescription()));
		var$2 = $Objects::equals(var$4, $(getDescription()));
	}
	bool var$1 = var$2;
	if (var$1) {
		$var($Object, var$5, $of($nc(p)->getDescriptor()));
		var$1 = $Objects::equals(var$5, $(getDescriptor()));
	}
	bool var$0 = var$1;
	if (var$0) {
		$var($ObjectArray, var$6, $nc(p)->fastGetNotifTypes());
		var$0 = $Arrays::equals(var$6, $(fastGetNotifTypes()));
	}
	return (var$0);
}

int32_t MBeanNotificationInfo::hashCode() {
	int32_t hash = $nc($(getName()))->hashCode();
	for (int32_t i = 0; i < $nc(this->types)->length; ++i) {
		hash ^= $nc($nc(this->types)->get(i))->hashCode();
	}
	return hash;
}

void MBeanNotificationInfo::readObject($ObjectInputStream* ois) {
	$useLocalCurrentObjectStackCache();
	$var($ObjectInputStream$GetField, gf, $nc(ois)->readFields());
	$var($StringArray, t, $cast($StringArray, $nc(gf)->get("types"_s, ($Object*)nullptr)));
	$set(this, types, (t != nullptr && t->length != 0) ? $cast($StringArray, $nc(t)->clone()) : MBeanNotificationInfo::NO_TYPES);
}

void clinit$MBeanNotificationInfo($Class* class$) {
	$assignStatic(MBeanNotificationInfo::NO_TYPES, $new($StringArray, 0));
	$assignStatic(MBeanNotificationInfo::NO_NOTIFICATIONS, $new($MBeanNotificationInfoArray, 0));
}

MBeanNotificationInfo::MBeanNotificationInfo() {
}

$Class* MBeanNotificationInfo::load$($String* name, bool initialize) {
	$loadClass(MBeanNotificationInfo, name, initialize, &_MBeanNotificationInfo_ClassInfo_, clinit$MBeanNotificationInfo, allocate$MBeanNotificationInfo);
	return class$;
}

$Class* MBeanNotificationInfo::class$ = nullptr;

	} // management
} // javax
#include <javax/management/MBeanInfo.h>

#include <java/io/ObjectInputStream.h>
#include <java/io/ObjectOutputStream.h>
#include <java/io/StreamCorruptedException.h>
#include <java/lang/CloneNotSupportedException.h>
#include <java/lang/Cloneable.h>
#include <java/security/AccessController.h>
#include <java/security/PrivilegedAction.h>
#include <java/util/AbstractMap.h>
#include <java/util/Arrays.h>
#include <java/util/List.h>
#include <java/util/Map.h>
#include <java/util/Objects.h>
#include <java/util/WeakHashMap.h>
#include <javax/management/Descriptor.h>
#include <javax/management/ImmutableDescriptor.h>
#include <javax/management/MBeanAttributeInfo.h>
#include <javax/management/MBeanConstructorInfo.h>
#include <javax/management/MBeanInfo$ArrayGettersSafeAction.h>
#include <javax/management/MBeanNotificationInfo.h>
#include <javax/management/MBeanOperationInfo.h>
#include <jcpp.h>

#undef EMPTY_DESCRIPTOR
#undef NO_ATTRIBUTES
#undef NO_CONSTRUCTORS
#undef NO_NOTIFICATIONS
#undef NO_OPERATIONS

using $MBeanAttributeInfoArray = $Array<::javax::management::MBeanAttributeInfo>;
using $MBeanConstructorInfoArray = $Array<::javax::management::MBeanConstructorInfo>;
using $MBeanNotificationInfoArray = $Array<::javax::management::MBeanNotificationInfo>;
using $MBeanOperationInfoArray = $Array<::javax::management::MBeanOperationInfo>;
using $ObjectInputStream = ::java::io::ObjectInputStream;
using $ObjectOutputStream = ::java::io::ObjectOutputStream;
using $Serializable = ::java::io::Serializable;
using $StreamCorruptedException = ::java::io::StreamCorruptedException;
using $Boolean = ::java::lang::Boolean;
using $ClassInfo = ::java::lang::ClassInfo;
using $CloneNotSupportedException = ::java::lang::CloneNotSupportedException;
using $Cloneable = ::java::lang::Cloneable;
using $Exception = ::java::lang::Exception;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $AccessController = ::java::security::AccessController;
using $PrivilegedAction = ::java::security::PrivilegedAction;
using $AbstractMap = ::java::util::AbstractMap;
using $Arrays = ::java::util::Arrays;
using $List = ::java::util::List;
using $Map = ::java::util::Map;
using $Objects = ::java::util::Objects;
using $WeakHashMap = ::java::util::WeakHashMap;
using $Descriptor = ::javax::management::Descriptor;
using $DescriptorRead = ::javax::management::DescriptorRead;
using $ImmutableDescriptor = ::javax::management::ImmutableDescriptor;
using $MBeanAttributeInfo = ::javax::management::MBeanAttributeInfo;
using $MBeanConstructorInfo = ::javax::management::MBeanConstructorInfo;
using $MBeanInfo$ArrayGettersSafeAction = ::javax::management::MBeanInfo$ArrayGettersSafeAction;
using $MBeanNotificationInfo = ::javax::management::MBeanNotificationInfo;
using $MBeanOperationInfo = ::javax::management::MBeanOperationInfo;

namespace javax {
	namespace management {

$FieldInfo _MBeanInfo_FieldInfo_[] = {
	{"serialVersionUID", "J", nullptr, $STATIC | $FINAL, $constField(MBeanInfo, serialVersionUID)},
	{"descriptor", "Ljavax/management/Descriptor;", nullptr, $PRIVATE | $TRANSIENT, $field(MBeanInfo, descriptor)},
	{"description", "Ljava/lang/String;", nullptr, $PRIVATE | $FINAL, $field(MBeanInfo, description)},
	{"className", "Ljava/lang/String;", nullptr, $PRIVATE | $FINAL, $field(MBeanInfo, className)},
	{"attributes", "[Ljavax/management/MBeanAttributeInfo;", nullptr, $PRIVATE | $FINAL, $field(MBeanInfo, attributes)},
	{"operations", "[Ljavax/management/MBeanOperationInfo;", nullptr, $PRIVATE | $FINAL, $field(MBeanInfo, operations)},
	{"constructors", "[Ljavax/management/MBeanConstructorInfo;", nullptr, $PRIVATE | $FINAL, $field(MBeanInfo, constructors)},
	{"notifications", "[Ljavax/management/MBeanNotificationInfo;", nullptr, $PRIVATE | $FINAL, $field(MBeanInfo, notifications)},
	{"hashCode", "I", nullptr, $PRIVATE | $TRANSIENT, $field(MBeanInfo, hashCode$)},
	{"arrayGettersSafe", "Z", nullptr, $PRIVATE | $FINAL | $TRANSIENT, $field(MBeanInfo, arrayGettersSafe$)},
	{"arrayGettersSafeMap", "Ljava/util/Map;", "Ljava/util/Map<Ljava/lang/Class<*>;Ljava/lang/Boolean;>;", $PRIVATE | $STATIC | $FINAL, $staticField(MBeanInfo, arrayGettersSafeMap)},
	{}
};

$MethodInfo _MBeanInfo_MethodInfo_[] = {
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"<init>", "(Ljava/lang/String;Ljava/lang/String;[Ljavax/management/MBeanAttributeInfo;[Ljavax/management/MBeanConstructorInfo;[Ljavax/management/MBeanOperationInfo;[Ljavax/management/MBeanNotificationInfo;)V", nullptr, $PUBLIC, $method(static_cast<void(MBeanInfo::*)($String*,$String*,$MBeanAttributeInfoArray*,$MBeanConstructorInfoArray*,$MBeanOperationInfoArray*,$MBeanNotificationInfoArray*)>(&MBeanInfo::init$)), "java.lang.IllegalArgumentException"},
	{"<init>", "(Ljava/lang/String;Ljava/lang/String;[Ljavax/management/MBeanAttributeInfo;[Ljavax/management/MBeanConstructorInfo;[Ljavax/management/MBeanOperationInfo;[Ljavax/management/MBeanNotificationInfo;Ljavax/management/Descriptor;)V", nullptr, $PUBLIC, $method(static_cast<void(MBeanInfo::*)($String*,$String*,$MBeanAttributeInfoArray*,$MBeanConstructorInfoArray*,$MBeanOperationInfoArray*,$MBeanNotificationInfoArray*,$Descriptor*)>(&MBeanInfo::init$)), "java.lang.IllegalArgumentException"},
	{"arrayGettersSafe", "(Ljava/lang/Class;Ljava/lang/Class;)Z", "(Ljava/lang/Class<*>;Ljava/lang/Class<*>;)Z", $STATIC, $method(static_cast<bool(*)($Class*,$Class*)>(&MBeanInfo::arrayGettersSafe))},
	{"clone", "()Ljava/lang/Object;", nullptr, $PUBLIC},
	{"equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"fastGetAttributes", "()[Ljavax/management/MBeanAttributeInfo;", nullptr, $PRIVATE, $method(static_cast<$MBeanAttributeInfoArray*(MBeanInfo::*)()>(&MBeanInfo::fastGetAttributes))},
	{"fastGetConstructors", "()[Ljavax/management/MBeanConstructorInfo;", nullptr, $PRIVATE, $method(static_cast<$MBeanConstructorInfoArray*(MBeanInfo::*)()>(&MBeanInfo::fastGetConstructors))},
	{"fastGetNotifications", "()[Ljavax/management/MBeanNotificationInfo;", nullptr, $PRIVATE, $method(static_cast<$MBeanNotificationInfoArray*(MBeanInfo::*)()>(&MBeanInfo::fastGetNotifications))},
	{"fastGetOperations", "()[Ljavax/management/MBeanOperationInfo;", nullptr, $PRIVATE, $method(static_cast<$MBeanOperationInfoArray*(MBeanInfo::*)()>(&MBeanInfo::fastGetOperations))},
	{"getAttributes", "()[Ljavax/management/MBeanAttributeInfo;", nullptr, $PUBLIC},
	{"getClassName", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"getConstructors", "()[Ljavax/management/MBeanConstructorInfo;", nullptr, $PUBLIC},
	{"getDescription", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"getDescriptor", "()Ljavax/management/Descriptor;", nullptr, $PUBLIC},
	{"getNotifications", "()[Ljavax/management/MBeanNotificationInfo;", nullptr, $PUBLIC},
	{"getOperations", "()[Ljavax/management/MBeanOperationInfo;", nullptr, $PUBLIC},
	{"hashCode", "()I", nullptr, $PUBLIC},
	{"isEqual", "(Ljava/lang/String;Ljava/lang/String;)Z", nullptr, $PRIVATE | $STATIC, $method(static_cast<bool(*)($String*,$String*)>(&MBeanInfo::isEqual))},
	{"nonNullAttributes", "()[Ljavax/management/MBeanAttributeInfo;", nullptr, $PRIVATE, $method(static_cast<$MBeanAttributeInfoArray*(MBeanInfo::*)()>(&MBeanInfo::nonNullAttributes))},
	{"nonNullConstructors", "()[Ljavax/management/MBeanConstructorInfo;", nullptr, $PRIVATE, $method(static_cast<$MBeanConstructorInfoArray*(MBeanInfo::*)()>(&MBeanInfo::nonNullConstructors))},
	{"nonNullNotifications", "()[Ljavax/management/MBeanNotificationInfo;", nullptr, $PRIVATE, $method(static_cast<$MBeanNotificationInfoArray*(MBeanInfo::*)()>(&MBeanInfo::nonNullNotifications))},
	{"nonNullOperations", "()[Ljavax/management/MBeanOperationInfo;", nullptr, $PRIVATE, $method(static_cast<$MBeanOperationInfoArray*(MBeanInfo::*)()>(&MBeanInfo::nonNullOperations))},
	{"readObject", "(Ljava/io/ObjectInputStream;)V", nullptr, $PRIVATE, $method(static_cast<void(MBeanInfo::*)($ObjectInputStream*)>(&MBeanInfo::readObject)), "java.io.IOException,java.lang.ClassNotFoundException"},
	{"toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"writeObject", "(Ljava/io/ObjectOutputStream;)V", nullptr, $PRIVATE, $method(static_cast<void(MBeanInfo::*)($ObjectOutputStream*)>(&MBeanInfo::writeObject)), "java.io.IOException"},
	{}
};

$InnerClassInfo _MBeanInfo_InnerClassesInfo_[] = {
	{"javax.management.MBeanInfo$ArrayGettersSafeAction", "javax.management.MBeanInfo", "ArrayGettersSafeAction", $PRIVATE | $STATIC},
	{}
};

$ClassInfo _MBeanInfo_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"javax.management.MBeanInfo",
	"java.lang.Object",
	"java.lang.Cloneable,java.io.Serializable,javax.management.DescriptorRead",
	_MBeanInfo_FieldInfo_,
	_MBeanInfo_MethodInfo_,
	nullptr,
	nullptr,
	_MBeanInfo_InnerClassesInfo_,
	nullptr,
	nullptr,
	"javax.management.MBeanInfo$ArrayGettersSafeAction"
};

$Object* allocate$MBeanInfo($Class* clazz) {
	return $of($alloc(MBeanInfo));
}

void MBeanInfo::finalize() {
	this->$Cloneable::finalize();
}

$Map* MBeanInfo::arrayGettersSafeMap = nullptr;

void MBeanInfo::init$($String* className, $String* description, $MBeanAttributeInfoArray* attributes, $MBeanConstructorInfoArray* constructors, $MBeanOperationInfoArray* operations, $MBeanNotificationInfoArray* notifications) {
	MBeanInfo::init$(className, description, attributes, constructors, operations, notifications, nullptr);
}

void MBeanInfo::init$($String* className, $String* description, $MBeanAttributeInfoArray* attributes$renamed, $MBeanConstructorInfoArray* constructors$renamed, $MBeanOperationInfoArray* operations$renamed, $MBeanNotificationInfoArray* notifications$renamed, $Descriptor* descriptor$renamed) {
	$useLocalCurrentObjectStackCache();
	$var($MBeanConstructorInfoArray, constructors, constructors$renamed);
	$var($MBeanOperationInfoArray, operations, operations$renamed);
	$var($MBeanAttributeInfoArray, attributes, attributes$renamed);
	$var($Descriptor, descriptor, descriptor$renamed);
	$var($MBeanNotificationInfoArray, notifications, notifications$renamed);
	$set(this, className, className);
	$set(this, description, description);
	if (attributes == nullptr) {
		$init($MBeanAttributeInfo);
		$assign(attributes, $MBeanAttributeInfo::NO_ATTRIBUTES);
	}
	$set(this, attributes, attributes);
	if (operations == nullptr) {
		$init($MBeanOperationInfo);
		$assign(operations, $MBeanOperationInfo::NO_OPERATIONS);
	}
	$set(this, operations, operations);
	if (constructors == nullptr) {
		$init($MBeanConstructorInfo);
		$assign(constructors, $MBeanConstructorInfo::NO_CONSTRUCTORS);
	}
	$set(this, constructors, constructors);
	if (notifications == nullptr) {
		$init($MBeanNotificationInfo);
		$assign(notifications, $MBeanNotificationInfo::NO_NOTIFICATIONS);
	}
	$set(this, notifications, notifications);
	if (descriptor == nullptr) {
		$init($ImmutableDescriptor);
		$assign(descriptor, $ImmutableDescriptor::EMPTY_DESCRIPTOR);
	}
	$set(this, descriptor, descriptor);
	this->arrayGettersSafe$ = arrayGettersSafe($of(this)->getClass(), MBeanInfo::class$);
}

$Object* MBeanInfo::clone() {
	try {
		return $of($Cloneable::clone());
	} catch ($CloneNotSupportedException& e) {
		return $of(nullptr);
	}
	$shouldNotReachHere();
}

$String* MBeanInfo::getClassName() {
	return this->className;
}

$String* MBeanInfo::getDescription() {
	return this->description;
}

$MBeanAttributeInfoArray* MBeanInfo::getAttributes() {
	$var($MBeanAttributeInfoArray, as, nonNullAttributes());
	if ($nc(as)->length == 0) {
		return as;
	} else {
		return $cast($MBeanAttributeInfoArray, as->clone());
	}
}

$MBeanAttributeInfoArray* MBeanInfo::fastGetAttributes() {
	if (this->arrayGettersSafe$) {
		return nonNullAttributes();
	} else {
		return getAttributes();
	}
}

$MBeanAttributeInfoArray* MBeanInfo::nonNullAttributes() {
	$init($MBeanAttributeInfo);
	return (this->attributes == nullptr) ? $MBeanAttributeInfo::NO_ATTRIBUTES : this->attributes;
}

$MBeanOperationInfoArray* MBeanInfo::getOperations() {
	$var($MBeanOperationInfoArray, os, nonNullOperations());
	if ($nc(os)->length == 0) {
		return os;
	} else {
		return $cast($MBeanOperationInfoArray, os->clone());
	}
}

$MBeanOperationInfoArray* MBeanInfo::fastGetOperations() {
	if (this->arrayGettersSafe$) {
		return nonNullOperations();
	} else {
		return getOperations();
	}
}

$MBeanOperationInfoArray* MBeanInfo::nonNullOperations() {
	$init($MBeanOperationInfo);
	return (this->operations == nullptr) ? $MBeanOperationInfo::NO_OPERATIONS : this->operations;
}

$MBeanConstructorInfoArray* MBeanInfo::getConstructors() {
	$var($MBeanConstructorInfoArray, cs, nonNullConstructors());
	if ($nc(cs)->length == 0) {
		return cs;
	} else {
		return $cast($MBeanConstructorInfoArray, cs->clone());
	}
}

$MBeanConstructorInfoArray* MBeanInfo::fastGetConstructors() {
	if (this->arrayGettersSafe$) {
		return nonNullConstructors();
	} else {
		return getConstructors();
	}
}

$MBeanConstructorInfoArray* MBeanInfo::nonNullConstructors() {
	$init($MBeanConstructorInfo);
	return (this->constructors == nullptr) ? $MBeanConstructorInfo::NO_CONSTRUCTORS : this->constructors;
}

$MBeanNotificationInfoArray* MBeanInfo::getNotifications() {
	$var($MBeanNotificationInfoArray, ns, nonNullNotifications());
	if ($nc(ns)->length == 0) {
		return ns;
	} else {
		return $cast($MBeanNotificationInfoArray, ns->clone());
	}
}

$MBeanNotificationInfoArray* MBeanInfo::fastGetNotifications() {
	if (this->arrayGettersSafe$) {
		return nonNullNotifications();
	} else {
		return getNotifications();
	}
}

$MBeanNotificationInfoArray* MBeanInfo::nonNullNotifications() {
	$init($MBeanNotificationInfo);
	return (this->notifications == nullptr) ? $MBeanNotificationInfo::NO_NOTIFICATIONS : this->notifications;
}

$Descriptor* MBeanInfo::getDescriptor() {
	return $cast($Descriptor, $nc($($ImmutableDescriptor::nonNullDescriptor(this->descriptor)))->clone());
}

$String* MBeanInfo::toString() {
	$useLocalCurrentObjectStackCache();
	$var($String, var$11, $$str({$($of(this)->getClass()->getName()), "[description="_s}));
	$var($String, var$10, $$concat(var$11, $(getDescription())));
	$var($String, var$9, $$concat(var$10, ", attributes="));
	$var($String, var$8, $$concat(var$9, $($Arrays::asList($(fastGetAttributes())))));
	$var($String, var$7, $$concat(var$8, ", constructors="));
	$var($String, var$6, $$concat(var$7, $($Arrays::asList($(fastGetConstructors())))));
	$var($String, var$5, $$concat(var$6, ", operations="));
	$var($String, var$4, $$concat(var$5, $($Arrays::asList($(fastGetOperations())))));
	$var($String, var$3, $$concat(var$4, ", notifications="));
	$var($String, var$2, $$concat(var$3, $($Arrays::asList($(fastGetNotifications())))));
	$var($String, var$1, $$concat(var$2, ", descriptor="));
	$var($String, var$0, $$concat(var$1, $(getDescriptor())));
	return $concat(var$0, "]");
}

bool MBeanInfo::equals(Object$* o) {
	$useLocalCurrentObjectStackCache();
	if ($equals(o, this)) {
		return true;
	}
	if (!($instanceOf(MBeanInfo, o))) {
		return false;
	}
	$var(MBeanInfo, p, $cast(MBeanInfo, o));
	$var($String, var$2, getClassName());
	bool var$1 = !isEqual(var$2, $($nc(p)->getClassName()));
	if (!var$1) {
		$var($String, var$3, getDescription());
		var$1 = !isEqual(var$3, $($nc(p)->getDescription()));
	}
	bool var$0 = var$1;
	if (var$0 || !$nc($(getDescriptor()))->equals($($nc(p)->getDescriptor()))) {
		return false;
	}
	$var($ObjectArray, var$7, $nc(p)->fastGetAttributes());
	bool var$6 = $Arrays::equals(var$7, $(fastGetAttributes()));
	if (var$6) {
		$var($ObjectArray, var$8, $nc(p)->fastGetOperations());
		var$6 = $Arrays::equals(var$8, $(fastGetOperations()));
	}
	bool var$5 = var$6;
	if (var$5) {
		$var($ObjectArray, var$9, $nc(p)->fastGetConstructors());
		var$5 = $Arrays::equals(var$9, $(fastGetConstructors()));
	}
	bool var$4 = var$5;
	if (var$4) {
		$var($ObjectArray, var$10, $nc(p)->fastGetNotifications());
		var$4 = $Arrays::equals(var$10, $(fastGetNotifications()));
	}
	return (var$4);
}

int32_t MBeanInfo::hashCode() {
	$useLocalCurrentObjectStackCache();
	if (this->hashCode$ != 0) {
		return this->hashCode$;
	}
	int32_t var$3 = $Objects::hash($$new($ObjectArray, {
		$($of(getClassName())),
		$($of(getDescriptor()))
	}));
	int32_t var$2 = var$3 ^ $Arrays::hashCode($(fastGetAttributes()));
	int32_t var$1 = var$2 ^ $Arrays::hashCode($(fastGetOperations()));
	int32_t var$0 = var$1 ^ $Arrays::hashCode($(fastGetConstructors()));
	this->hashCode$ = var$0 ^ $Arrays::hashCode($(fastGetNotifications()));
	return this->hashCode$;
}

bool MBeanInfo::arrayGettersSafe($Class* subclass, $Class* immutableClass) {
	$init(MBeanInfo);
	$useLocalCurrentObjectStackCache();
	$beforeCallerSensitive();
	if (subclass == immutableClass) {
		return true;
	}
	$synchronized(MBeanInfo::arrayGettersSafeMap) {
		$var($Boolean, safe, $cast($Boolean, $nc(MBeanInfo::arrayGettersSafeMap)->get(subclass)));
		if (safe == nullptr) {
			try {
				$var($MBeanInfo$ArrayGettersSafeAction, action, $new($MBeanInfo$ArrayGettersSafeAction, subclass, immutableClass));
				$assign(safe, $cast($Boolean, $AccessController::doPrivileged(static_cast<$PrivilegedAction*>(action))));
			} catch ($Exception& e) {
				$assign(safe, $Boolean::valueOf(false));
			}
			$nc(MBeanInfo::arrayGettersSafeMap)->put(subclass, safe);
		}
		return $nc(safe)->booleanValue();
	}
}

bool MBeanInfo::isEqual($String* s1, $String* s2) {
	$init(MBeanInfo);
	bool ret = false;
	if (s1 == nullptr) {
		ret = (s2 == nullptr);
	} else {
		ret = $nc(s1)->equals(s2);
	}
	return ret;
}

void MBeanInfo::writeObject($ObjectOutputStream* out) {
	$useLocalCurrentObjectStackCache();
	$nc(out)->defaultWriteObject();
	$load($ImmutableDescriptor);
	if ($nc($of(this->descriptor))->getClass() == $ImmutableDescriptor::class$) {
		out->write(1);
		$var($StringArray, names, $nc(this->descriptor)->getFieldNames());
		out->writeObject(names);
		out->writeObject($($nc(this->descriptor)->getFieldValues(names)));
	} else {
		out->write(0);
		out->writeObject(this->descriptor);
	}
}

void MBeanInfo::readObject($ObjectInputStream* in) {
	$useLocalCurrentObjectStackCache();
	$nc(in)->defaultReadObject();
	{
		$var($StringArray, names, nullptr)
		$var($ObjectArray, values, nullptr)
		switch (in->read()) {
		case 1:
			{
				$assign(names, $cast($StringArray, in->readObject()));
				$assign(values, $cast($ObjectArray, in->readObject()));
				$init($ImmutableDescriptor);
				$set(this, descriptor, ($nc(names)->length == 0) ? static_cast<$Descriptor*>($ImmutableDescriptor::EMPTY_DESCRIPTOR) : static_cast<$Descriptor*>($new($ImmutableDescriptor, names, values)));
				break;
			}
		case 0:
			{
				$set(this, descriptor, $cast($Descriptor, in->readObject()));
				if (this->descriptor == nullptr) {
					$init($ImmutableDescriptor);
					$set(this, descriptor, $ImmutableDescriptor::EMPTY_DESCRIPTOR);
				}
				break;
			}
		case -1:
			{
				$init($ImmutableDescriptor);
				$set(this, descriptor, $ImmutableDescriptor::EMPTY_DESCRIPTOR);
				break;
			}
		default:
			{
				$throwNew($StreamCorruptedException, "Got unexpected byte."_s);
			}
		}
	}
}

void clinit$MBeanInfo($Class* class$) {
	$assignStatic(MBeanInfo::arrayGettersSafeMap, $new($WeakHashMap));
}

MBeanInfo::MBeanInfo() {
}

$Class* MBeanInfo::load$($String* name, bool initialize) {
	$loadClass(MBeanInfo, name, initialize, &_MBeanInfo_ClassInfo_, clinit$MBeanInfo, allocate$MBeanInfo);
	return class$;
}

$Class* MBeanInfo::class$ = nullptr;

	} // management
} // javax
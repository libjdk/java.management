#include <javax/management/relation/Role.h>

#include <com/sun/jmx/mbeanserver/GetPropertyAction.h>
#include <com/sun/jmx/mbeanserver/Util.h>
#include <java/io/ObjectInputStream$GetField.h>
#include <java/io/ObjectInputStream.h>
#include <java/io/ObjectOutputStream$PutField.h>
#include <java/io/ObjectOutputStream.h>
#include <java/io/ObjectStreamField.h>
#include <java/security/AccessController.h>
#include <java/security/PrivilegedAction.h>
#include <java/util/AbstractList.h>
#include <java/util/ArrayList.h>
#include <java/util/Collection.h>
#include <java/util/Iterator.h>
#include <java/util/List.h>
#include <javax/management/ObjectName.h>
#include <jcpp.h>

using $ObjectStreamFieldArray = $Array<::java::io::ObjectStreamField>;
using $GetPropertyAction = ::com::sun::jmx::mbeanserver::GetPropertyAction;
using $Util = ::com::sun::jmx::mbeanserver::Util;
using $ObjectInputStream = ::java::io::ObjectInputStream;
using $ObjectInputStream$GetField = ::java::io::ObjectInputStream$GetField;
using $ObjectOutputStream = ::java::io::ObjectOutputStream;
using $ObjectOutputStream$PutField = ::java::io::ObjectOutputStream$PutField;
using $ObjectStreamField = ::java::io::ObjectStreamField;
using $Serializable = ::java::io::Serializable;
using $AbstractStringBuilder = ::java::lang::AbstractStringBuilder;
using $ClassInfo = ::java::lang::ClassInfo;
using $Exception = ::java::lang::Exception;
using $FieldInfo = ::java::lang::FieldInfo;
using $IllegalArgumentException = ::java::lang::IllegalArgumentException;
using $MethodInfo = ::java::lang::MethodInfo;
using $NullPointerException = ::java::lang::NullPointerException;
using $AccessController = ::java::security::AccessController;
using $PrivilegedAction = ::java::security::PrivilegedAction;
using $AbstractList = ::java::util::AbstractList;
using $ArrayList = ::java::util::ArrayList;
using $Collection = ::java::util::Collection;
using $Iterator = ::java::util::Iterator;
using $List = ::java::util::List;
using $ObjectName = ::javax::management::ObjectName;

namespace javax {
	namespace management {
		namespace relation {

$FieldInfo _Role_FieldInfo_[] = {
	{"oldSerialVersionUID", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(Role, oldSerialVersionUID)},
	{"newSerialVersionUID", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(Role, newSerialVersionUID)},
	{"oldSerialPersistentFields", "[Ljava/io/ObjectStreamField;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(Role, oldSerialPersistentFields)},
	{"newSerialPersistentFields", "[Ljava/io/ObjectStreamField;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(Role, newSerialPersistentFields)},
	{"serialVersionUID", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(Role, serialVersionUID)},
	{"serialPersistentFields", "[Ljava/io/ObjectStreamField;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(Role, serialPersistentFields)},
	{"compat", "Z", nullptr, $PRIVATE | $STATIC, $staticField(Role, compat)},
	{"name", "Ljava/lang/String;", nullptr, $PRIVATE, $field(Role, name)},
	{"objectNameList", "Ljava/util/List;", "Ljava/util/List<Ljavax/management/ObjectName;>;", $PRIVATE, $field(Role, objectNameList)},
	{}
};

$MethodInfo _Role_MethodInfo_[] = {
	{"<init>", "(Ljava/lang/String;Ljava/util/List;)V", "(Ljava/lang/String;Ljava/util/List<Ljavax/management/ObjectName;>;)V", $PUBLIC, $method(static_cast<void(Role::*)($String*,$List*)>(&Role::init$)), "java.lang.IllegalArgumentException"},
	{"clone", "()Ljava/lang/Object;", nullptr, $PUBLIC},
	{"getRoleName", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"getRoleValue", "()Ljava/util/List;", "()Ljava/util/List<Ljavax/management/ObjectName;>;", $PUBLIC},
	{"readObject", "(Ljava/io/ObjectInputStream;)V", nullptr, $PRIVATE, $method(static_cast<void(Role::*)($ObjectInputStream*)>(&Role::readObject)), "java.io.IOException,java.lang.ClassNotFoundException"},
	{"roleValueToString", "(Ljava/util/List;)Ljava/lang/String;", "(Ljava/util/List<Ljavax/management/ObjectName;>;)Ljava/lang/String;", $PUBLIC | $STATIC, $method(static_cast<$String*(*)($List*)>(&Role::roleValueToString)), "java.lang.IllegalArgumentException"},
	{"setRoleName", "(Ljava/lang/String;)V", nullptr, $PUBLIC, nullptr, "java.lang.IllegalArgumentException"},
	{"setRoleValue", "(Ljava/util/List;)V", "(Ljava/util/List<Ljavax/management/ObjectName;>;)V", $PUBLIC, nullptr, "java.lang.IllegalArgumentException"},
	{"toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"writeObject", "(Ljava/io/ObjectOutputStream;)V", nullptr, $PRIVATE, $method(static_cast<void(Role::*)($ObjectOutputStream*)>(&Role::writeObject)), "java.io.IOException"},
	{}
};

$ClassInfo _Role_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"javax.management.relation.Role",
	"java.lang.Object",
	"java.io.Serializable",
	_Role_FieldInfo_,
	_Role_MethodInfo_
};

$Object* allocate$Role($Class* clazz) {
	return $of($alloc(Role));
}

$ObjectStreamFieldArray* Role::oldSerialPersistentFields = nullptr;
$ObjectStreamFieldArray* Role::newSerialPersistentFields = nullptr;
int64_t Role::serialVersionUID = 0;
$ObjectStreamFieldArray* Role::serialPersistentFields = nullptr;
bool Role::compat = false;

void Role::init$($String* roleName, $List* roleValue) {
	$set(this, name, nullptr);
	$set(this, objectNameList, $new($ArrayList));
	if (roleName == nullptr || roleValue == nullptr) {
		$var($String, excMsg, "Invalid parameter"_s);
		$throwNew($IllegalArgumentException, excMsg);
	}
	setRoleName(roleName);
	setRoleValue(roleValue);
	return;
}

$String* Role::getRoleName() {
	return this->name;
}

$List* Role::getRoleValue() {
	return this->objectNameList;
}

void Role::setRoleName($String* roleName) {
	if (roleName == nullptr) {
		$var($String, excMsg, "Invalid parameter."_s);
		$throwNew($IllegalArgumentException, excMsg);
	}
	$set(this, name, roleName);
	return;
}

void Role::setRoleValue($List* roleValue) {
	if (roleValue == nullptr) {
		$var($String, excMsg, "Invalid parameter."_s);
		$throwNew($IllegalArgumentException, excMsg);
	}
	$set(this, objectNameList, $new($ArrayList, static_cast<$Collection*>(roleValue)));
	return;
}

$String* Role::toString() {
	$useLocalCurrentObjectStackCache();
	$var($StringBuilder, result, $new($StringBuilder));
	result->append($$str({"role name: "_s, this->name, "; role value: "_s}));
	{
		$var($Iterator, objNameIter, $nc(this->objectNameList)->iterator());
		for (; $nc(objNameIter)->hasNext();) {
			$var($ObjectName, currObjName, $cast($ObjectName, objNameIter->next()));
			result->append($($nc(currObjName)->toString()));
			if (objNameIter->hasNext()) {
				result->append(", "_s);
			}
		}
	}
	return result->toString();
}

$Object* Role::clone() {
	try {
		return $of($new(Role, this->name, this->objectNameList));
	} catch ($IllegalArgumentException& exc) {
		return $of(nullptr);
	}
	$shouldNotReachHere();
}

$String* Role::roleValueToString($List* roleValue) {
	$init(Role);
	$useLocalCurrentObjectStackCache();
	if (roleValue == nullptr) {
		$var($String, excMsg, "Invalid parameter"_s);
		$throwNew($IllegalArgumentException, excMsg);
	}
	$var($StringBuilder, result, $new($StringBuilder));
	{
		$var($Iterator, i$, $nc(roleValue)->iterator());
		for (; $nc(i$)->hasNext();) {
			$var($ObjectName, currObjName, $cast($ObjectName, i$->next()));
			{
				if (result->length() > 0) {
					result->append("\n"_s);
				}
				result->append($($nc(currObjName)->toString()));
			}
		}
	}
	return result->toString();
}

void Role::readObject($ObjectInputStream* in) {
	$useLocalCurrentObjectStackCache();
	if (Role::compat) {
		$var($ObjectInputStream$GetField, fields, $nc(in)->readFields());
		$set(this, name, $cast($String, $nc(fields)->get("myName"_s, ($Object*)nullptr)));
		if (fields->defaulted("myName"_s)) {
			$throwNew($NullPointerException, "myName"_s);
		}
		$set(this, objectNameList, $cast($List, $Util::cast($(fields->get("myObjNameList"_s, ($Object*)nullptr)))));
		if (fields->defaulted("myObjNameList"_s)) {
			$throwNew($NullPointerException, "myObjNameList"_s);
		}
	} else {
		$nc(in)->defaultReadObject();
	}
}

void Role::writeObject($ObjectOutputStream* out) {
	if (Role::compat) {
		$var($ObjectOutputStream$PutField, fields, $nc(out)->putFields());
		$nc(fields)->put("myName"_s, $of(this->name));
		fields->put("myObjNameList"_s, $of(this->objectNameList));
		out->writeFields();
	} else {
		$nc(out)->defaultWriteObject();
	}
}

void clinit$Role($Class* class$) {
	$useLocalCurrentObjectStackCache();
	$beforeCallerSensitive();
	$load($ArrayList);
	$assignStatic(Role::oldSerialPersistentFields, $new($ObjectStreamFieldArray, {
		$$new($ObjectStreamField, "myName"_s, $String::class$),
		$$new($ObjectStreamField, "myObjNameList"_s, $ArrayList::class$)
	}));
	$load($List);
	$assignStatic(Role::newSerialPersistentFields, $new($ObjectStreamFieldArray, {
		$$new($ObjectStreamField, "name"_s, $String::class$),
		$$new($ObjectStreamField, "objectNameList"_s, $List::class$)
	}));
	Role::compat = false;
	{
		try {
			$var($GetPropertyAction, act, $new($GetPropertyAction, "jmx.serial.form"_s));
			$var($String, form, $cast($String, $AccessController::doPrivileged(static_cast<$PrivilegedAction*>(act))));
			Role::compat = (form != nullptr && form->equals("1.0"_s));
		} catch ($Exception& e) {
		}
		if (Role::compat) {
			$assignStatic(Role::serialPersistentFields, Role::oldSerialPersistentFields);
			Role::serialVersionUID = Role::oldSerialVersionUID;
		} else {
			$assignStatic(Role::serialPersistentFields, Role::newSerialPersistentFields);
			Role::serialVersionUID = Role::newSerialVersionUID;
		}
	}
}

Role::Role() {
}

$Class* Role::load$($String* name, bool initialize) {
	$loadClass(Role, name, initialize, &_Role_ClassInfo_, clinit$Role, allocate$Role);
	return class$;
}

$Class* Role::class$ = nullptr;

		} // relation
	} // management
} // javax
#include <javax/management/relation/RoleUnresolved.h>

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
#include <javax/management/relation/RoleStatus.h>
#include <jcpp.h>

#undef TYPE

using $ObjectStreamFieldArray = $Array<::java::io::ObjectStreamField>;
using $GetPropertyAction = ::com::sun::jmx::mbeanserver::GetPropertyAction;
using $Util = ::com::sun::jmx::mbeanserver::Util;
using $ObjectInputStream = ::java::io::ObjectInputStream;
using $ObjectInputStream$GetField = ::java::io::ObjectInputStream$GetField;
using $ObjectOutputStream = ::java::io::ObjectOutputStream;
using $ObjectOutputStream$PutField = ::java::io::ObjectOutputStream$PutField;
using $ObjectStreamField = ::java::io::ObjectStreamField;
using $Serializable = ::java::io::Serializable;
using $ClassInfo = ::java::lang::ClassInfo;
using $Exception = ::java::lang::Exception;
using $FieldInfo = ::java::lang::FieldInfo;
using $IllegalArgumentException = ::java::lang::IllegalArgumentException;
using $Integer = ::java::lang::Integer;
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
using $RoleStatus = ::javax::management::relation::RoleStatus;

namespace javax {
	namespace management {
		namespace relation {

$FieldInfo _RoleUnresolved_FieldInfo_[] = {
	{"oldSerialVersionUID", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(RoleUnresolved, oldSerialVersionUID)},
	{"newSerialVersionUID", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(RoleUnresolved, newSerialVersionUID)},
	{"oldSerialPersistentFields", "[Ljava/io/ObjectStreamField;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(RoleUnresolved, oldSerialPersistentFields)},
	{"newSerialPersistentFields", "[Ljava/io/ObjectStreamField;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(RoleUnresolved, newSerialPersistentFields)},
	{"serialVersionUID", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(RoleUnresolved, serialVersionUID)},
	{"serialPersistentFields", "[Ljava/io/ObjectStreamField;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(RoleUnresolved, serialPersistentFields)},
	{"compat", "Z", nullptr, $PRIVATE | $STATIC, $staticField(RoleUnresolved, compat)},
	{"roleName", "Ljava/lang/String;", nullptr, $PRIVATE, $field(RoleUnresolved, roleName)},
	{"roleValue", "Ljava/util/List;", "Ljava/util/List<Ljavax/management/ObjectName;>;", $PRIVATE, $field(RoleUnresolved, roleValue)},
	{"problemType", "I", nullptr, $PRIVATE, $field(RoleUnresolved, problemType)},
	{}
};

$MethodInfo _RoleUnresolved_MethodInfo_[] = {
	{"<init>", "(Ljava/lang/String;Ljava/util/List;I)V", "(Ljava/lang/String;Ljava/util/List<Ljavax/management/ObjectName;>;I)V", $PUBLIC, $method(static_cast<void(RoleUnresolved::*)($String*,$List*,int32_t)>(&RoleUnresolved::init$)), "java.lang.IllegalArgumentException"},
	{"clone", "()Ljava/lang/Object;", nullptr, $PUBLIC},
	{"getProblemType", "()I", nullptr, $PUBLIC},
	{"getRoleName", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"getRoleValue", "()Ljava/util/List;", "()Ljava/util/List<Ljavax/management/ObjectName;>;", $PUBLIC},
	{"readObject", "(Ljava/io/ObjectInputStream;)V", nullptr, $PRIVATE, $method(static_cast<void(RoleUnresolved::*)($ObjectInputStream*)>(&RoleUnresolved::readObject)), "java.io.IOException,java.lang.ClassNotFoundException"},
	{"setProblemType", "(I)V", nullptr, $PUBLIC, nullptr, "java.lang.IllegalArgumentException"},
	{"setRoleName", "(Ljava/lang/String;)V", nullptr, $PUBLIC, nullptr, "java.lang.IllegalArgumentException"},
	{"setRoleValue", "(Ljava/util/List;)V", "(Ljava/util/List<Ljavax/management/ObjectName;>;)V", $PUBLIC},
	{"toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"writeObject", "(Ljava/io/ObjectOutputStream;)V", nullptr, $PRIVATE, $method(static_cast<void(RoleUnresolved::*)($ObjectOutputStream*)>(&RoleUnresolved::writeObject)), "java.io.IOException"},
	{}
};

$ClassInfo _RoleUnresolved_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"javax.management.relation.RoleUnresolved",
	"java.lang.Object",
	"java.io.Serializable",
	_RoleUnresolved_FieldInfo_,
	_RoleUnresolved_MethodInfo_
};

$Object* allocate$RoleUnresolved($Class* clazz) {
	return $of($alloc(RoleUnresolved));
}

$ObjectStreamFieldArray* RoleUnresolved::oldSerialPersistentFields = nullptr;
$ObjectStreamFieldArray* RoleUnresolved::newSerialPersistentFields = nullptr;
int64_t RoleUnresolved::serialVersionUID = 0;
$ObjectStreamFieldArray* RoleUnresolved::serialPersistentFields = nullptr;
bool RoleUnresolved::compat = false;

void RoleUnresolved::init$($String* name, $List* value, int32_t pbType) {
	$set(this, roleName, nullptr);
	$set(this, roleValue, nullptr);
	if (name == nullptr) {
		$var($String, excMsg, "Invalid parameter."_s);
		$throwNew($IllegalArgumentException, excMsg);
	}
	setRoleName(name);
	setRoleValue(value);
	setProblemType(pbType);
	return;
}

$String* RoleUnresolved::getRoleName() {
	return this->roleName;
}

$List* RoleUnresolved::getRoleValue() {
	return this->roleValue;
}

int32_t RoleUnresolved::getProblemType() {
	return this->problemType;
}

void RoleUnresolved::setRoleName($String* name) {
	if (name == nullptr) {
		$var($String, excMsg, "Invalid parameter."_s);
		$throwNew($IllegalArgumentException, excMsg);
	}
	$set(this, roleName, name);
	return;
}

void RoleUnresolved::setRoleValue($List* value) {
	if (value != nullptr) {
		$set(this, roleValue, $new($ArrayList, static_cast<$Collection*>(value)));
	} else {
		$set(this, roleValue, nullptr);
	}
	return;
}

void RoleUnresolved::setProblemType(int32_t pbType) {
	if (!($RoleStatus::isRoleStatus(pbType))) {
		$var($String, excMsg, "Incorrect problem type."_s);
		$throwNew($IllegalArgumentException, excMsg);
	}
	this->problemType = pbType;
	return;
}

$Object* RoleUnresolved::clone() {
	try {
		return $of($new(RoleUnresolved, this->roleName, this->roleValue, this->problemType));
	} catch ($IllegalArgumentException& exc) {
		return $of(nullptr);
	}
	$shouldNotReachHere();
}

$String* RoleUnresolved::toString() {
	$useLocalCurrentObjectStackCache();
	$var($StringBuilder, result, $new($StringBuilder));
	result->append($$str({"role name: "_s, this->roleName}));
	if (this->roleValue != nullptr) {
		result->append("; value: "_s);
		{
			$var($Iterator, objNameIter, $nc(this->roleValue)->iterator());
			for (; $nc(objNameIter)->hasNext();) {
				$var($ObjectName, currObjName, $cast($ObjectName, objNameIter->next()));
				result->append($($nc(currObjName)->toString()));
				if (objNameIter->hasNext()) {
					result->append(", "_s);
				}
			}
		}
	}
	result->append($$str({"; problem type: "_s, $$str(this->problemType)}));
	return result->toString();
}

void RoleUnresolved::readObject($ObjectInputStream* in) {
	$useLocalCurrentObjectStackCache();
	if (RoleUnresolved::compat) {
		$var($ObjectInputStream$GetField, fields, $nc(in)->readFields());
		$set(this, roleName, $cast($String, $nc(fields)->get("myRoleName"_s, ($Object*)nullptr)));
		if (fields->defaulted("myRoleName"_s)) {
			$throwNew($NullPointerException, "myRoleName"_s);
		}
		$set(this, roleValue, $cast($List, $Util::cast($(fields->get("myRoleValue"_s, ($Object*)nullptr)))));
		if (fields->defaulted("myRoleValue"_s)) {
			$throwNew($NullPointerException, "myRoleValue"_s);
		}
		this->problemType = fields->get("myPbType"_s, 0);
		if (fields->defaulted("myPbType"_s)) {
			$throwNew($NullPointerException, "myPbType"_s);
		}
	} else {
		$nc(in)->defaultReadObject();
	}
}

void RoleUnresolved::writeObject($ObjectOutputStream* out) {
	if (RoleUnresolved::compat) {
		$var($ObjectOutputStream$PutField, fields, $nc(out)->putFields());
		$nc(fields)->put("myRoleName"_s, $of(this->roleName));
		fields->put("myRoleValue"_s, $of(this->roleValue));
		fields->put("myPbType"_s, this->problemType);
		out->writeFields();
	} else {
		$nc(out)->defaultWriteObject();
	}
}

void clinit$RoleUnresolved($Class* class$) {
	$useLocalCurrentObjectStackCache();
	$beforeCallerSensitive();
	$load($ArrayList);
	$init($Integer);
	$assignStatic(RoleUnresolved::oldSerialPersistentFields, $new($ObjectStreamFieldArray, {
		$$new($ObjectStreamField, "myRoleName"_s, $String::class$),
		$$new($ObjectStreamField, "myRoleValue"_s, $ArrayList::class$),
		$$new($ObjectStreamField, "myPbType"_s, $Integer::TYPE)
	}));
	$load($List);
	$assignStatic(RoleUnresolved::newSerialPersistentFields, $new($ObjectStreamFieldArray, {
		$$new($ObjectStreamField, "roleName"_s, $String::class$),
		$$new($ObjectStreamField, "roleValue"_s, $List::class$),
		$$new($ObjectStreamField, "problemType"_s, $Integer::TYPE)
	}));
	RoleUnresolved::compat = false;
	{
		try {
			$var($GetPropertyAction, act, $new($GetPropertyAction, "jmx.serial.form"_s));
			$var($String, form, $cast($String, $AccessController::doPrivileged(static_cast<$PrivilegedAction*>(act))));
			RoleUnresolved::compat = (form != nullptr && form->equals("1.0"_s));
		} catch ($Exception& e) {
		}
		if (RoleUnresolved::compat) {
			$assignStatic(RoleUnresolved::serialPersistentFields, RoleUnresolved::oldSerialPersistentFields);
			RoleUnresolved::serialVersionUID = RoleUnresolved::oldSerialVersionUID;
		} else {
			$assignStatic(RoleUnresolved::serialPersistentFields, RoleUnresolved::newSerialPersistentFields);
			RoleUnresolved::serialVersionUID = RoleUnresolved::newSerialVersionUID;
		}
	}
}

RoleUnresolved::RoleUnresolved() {
}

$Class* RoleUnresolved::load$($String* name, bool initialize) {
	$loadClass(RoleUnresolved, name, initialize, &_RoleUnresolved_ClassInfo_, clinit$RoleUnresolved, allocate$RoleUnresolved);
	return class$;
}

$Class* RoleUnresolved::class$ = nullptr;

		} // relation
	} // management
} // javax
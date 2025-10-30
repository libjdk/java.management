#include <javax/management/relation/RoleResult.h>

#include <com/sun/jmx/mbeanserver/GetPropertyAction.h>
#include <java/io/ObjectInputStream$GetField.h>
#include <java/io/ObjectInputStream.h>
#include <java/io/ObjectOutputStream$PutField.h>
#include <java/io/ObjectOutputStream.h>
#include <java/io/ObjectStreamField.h>
#include <java/security/AccessController.h>
#include <java/security/PrivilegedAction.h>
#include <java/util/Iterator.h>
#include <javax/management/relation/Role.h>
#include <javax/management/relation/RoleList.h>
#include <javax/management/relation/RoleUnresolved.h>
#include <javax/management/relation/RoleUnresolvedList.h>
#include <jcpp.h>

using $ObjectStreamFieldArray = $Array<::java::io::ObjectStreamField>;
using $GetPropertyAction = ::com::sun::jmx::mbeanserver::GetPropertyAction;
using $ObjectInputStream = ::java::io::ObjectInputStream;
using $ObjectInputStream$GetField = ::java::io::ObjectInputStream$GetField;
using $ObjectOutputStream = ::java::io::ObjectOutputStream;
using $ObjectOutputStream$PutField = ::java::io::ObjectOutputStream$PutField;
using $ObjectStreamField = ::java::io::ObjectStreamField;
using $Serializable = ::java::io::Serializable;
using $ClassInfo = ::java::lang::ClassInfo;
using $Exception = ::java::lang::Exception;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $NullPointerException = ::java::lang::NullPointerException;
using $AccessController = ::java::security::AccessController;
using $PrivilegedAction = ::java::security::PrivilegedAction;
using $ArrayList = ::java::util::ArrayList;
using $Iterator = ::java::util::Iterator;
using $Role = ::javax::management::relation::Role;
using $RoleList = ::javax::management::relation::RoleList;
using $RoleUnresolved = ::javax::management::relation::RoleUnresolved;
using $RoleUnresolvedList = ::javax::management::relation::RoleUnresolvedList;

namespace javax {
	namespace management {
		namespace relation {

$FieldInfo _RoleResult_FieldInfo_[] = {
	{"oldSerialVersionUID", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(RoleResult, oldSerialVersionUID)},
	{"newSerialVersionUID", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(RoleResult, newSerialVersionUID)},
	{"oldSerialPersistentFields", "[Ljava/io/ObjectStreamField;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(RoleResult, oldSerialPersistentFields)},
	{"newSerialPersistentFields", "[Ljava/io/ObjectStreamField;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(RoleResult, newSerialPersistentFields)},
	{"serialVersionUID", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(RoleResult, serialVersionUID)},
	{"serialPersistentFields", "[Ljava/io/ObjectStreamField;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(RoleResult, serialPersistentFields)},
	{"compat", "Z", nullptr, $PRIVATE | $STATIC, $staticField(RoleResult, compat)},
	{"roleList", "Ljavax/management/relation/RoleList;", nullptr, $PRIVATE, $field(RoleResult, roleList)},
	{"unresolvedRoleList", "Ljavax/management/relation/RoleUnresolvedList;", nullptr, $PRIVATE, $field(RoleResult, unresolvedRoleList)},
	{}
};

$MethodInfo _RoleResult_MethodInfo_[] = {
	{"<init>", "(Ljavax/management/relation/RoleList;Ljavax/management/relation/RoleUnresolvedList;)V", nullptr, $PUBLIC, $method(static_cast<void(RoleResult::*)($RoleList*,$RoleUnresolvedList*)>(&RoleResult::init$))},
	{"getRoles", "()Ljavax/management/relation/RoleList;", nullptr, $PUBLIC},
	{"getRolesUnresolved", "()Ljavax/management/relation/RoleUnresolvedList;", nullptr, $PUBLIC},
	{"readObject", "(Ljava/io/ObjectInputStream;)V", nullptr, $PRIVATE, $method(static_cast<void(RoleResult::*)($ObjectInputStream*)>(&RoleResult::readObject)), "java.io.IOException,java.lang.ClassNotFoundException"},
	{"setRoles", "(Ljavax/management/relation/RoleList;)V", nullptr, $PUBLIC},
	{"setRolesUnresolved", "(Ljavax/management/relation/RoleUnresolvedList;)V", nullptr, $PUBLIC},
	{"writeObject", "(Ljava/io/ObjectOutputStream;)V", nullptr, $PRIVATE, $method(static_cast<void(RoleResult::*)($ObjectOutputStream*)>(&RoleResult::writeObject)), "java.io.IOException"},
	{}
};

$ClassInfo _RoleResult_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"javax.management.relation.RoleResult",
	"java.lang.Object",
	"java.io.Serializable",
	_RoleResult_FieldInfo_,
	_RoleResult_MethodInfo_
};

$Object* allocate$RoleResult($Class* clazz) {
	return $of($alloc(RoleResult));
}

$ObjectStreamFieldArray* RoleResult::oldSerialPersistentFields = nullptr;
$ObjectStreamFieldArray* RoleResult::newSerialPersistentFields = nullptr;
int64_t RoleResult::serialVersionUID = 0;
$ObjectStreamFieldArray* RoleResult::serialPersistentFields = nullptr;
bool RoleResult::compat = false;

void RoleResult::init$($RoleList* list, $RoleUnresolvedList* unresolvedList) {
	$set(this, roleList, nullptr);
	$set(this, unresolvedRoleList, nullptr);
	setRoles(list);
	setRolesUnresolved(unresolvedList);
	return;
}

$RoleList* RoleResult::getRoles() {
	return this->roleList;
}

$RoleUnresolvedList* RoleResult::getRolesUnresolved() {
	return this->unresolvedRoleList;
}

void RoleResult::setRoles($RoleList* list) {
	$useLocalCurrentObjectStackCache();
	if (list != nullptr) {
		$set(this, roleList, $new($RoleList));
		{
			$var($Iterator, roleIter, list->iterator());
			for (; $nc(roleIter)->hasNext();) {
				$var($Role, currRole, ($cast($Role, roleIter->next())));
				$nc(this->roleList)->add(($cast($Role, $($nc(currRole)->clone()))));
			}
		}
	} else {
		$set(this, roleList, nullptr);
	}
	return;
}

void RoleResult::setRolesUnresolved($RoleUnresolvedList* unresolvedList) {
	$useLocalCurrentObjectStackCache();
	if (unresolvedList != nullptr) {
		$set(this, unresolvedRoleList, $new($RoleUnresolvedList));
		{
			$var($Iterator, roleUnresIter, unresolvedList->iterator());
			for (; $nc(roleUnresIter)->hasNext();) {
				$var($RoleUnresolved, currRoleUnres, ($cast($RoleUnresolved, roleUnresIter->next())));
				$nc(this->unresolvedRoleList)->add(($cast($RoleUnresolved, $($nc(currRoleUnres)->clone()))));
			}
		}
	} else {
		$set(this, unresolvedRoleList, nullptr);
	}
	return;
}

void RoleResult::readObject($ObjectInputStream* in) {
	if (RoleResult::compat) {
		$var($ObjectInputStream$GetField, fields, $nc(in)->readFields());
		$set(this, roleList, $cast($RoleList, $nc(fields)->get("myRoleList"_s, ($Object*)nullptr)));
		if (fields->defaulted("myRoleList"_s)) {
			$throwNew($NullPointerException, "myRoleList"_s);
		}
		$set(this, unresolvedRoleList, $cast($RoleUnresolvedList, fields->get("myRoleUnresList"_s, ($Object*)nullptr)));
		if (fields->defaulted("myRoleUnresList"_s)) {
			$throwNew($NullPointerException, "myRoleUnresList"_s);
		}
	} else {
		$nc(in)->defaultReadObject();
	}
}

void RoleResult::writeObject($ObjectOutputStream* out) {
	if (RoleResult::compat) {
		$var($ObjectOutputStream$PutField, fields, $nc(out)->putFields());
		$nc(fields)->put("myRoleList"_s, $of(this->roleList));
		fields->put("myRoleUnresList"_s, $of(this->unresolvedRoleList));
		out->writeFields();
	} else {
		$nc(out)->defaultWriteObject();
	}
}

void clinit$RoleResult($Class* class$) {
	$useLocalCurrentObjectStackCache();
	$beforeCallerSensitive();
	$load($RoleList);
	$load($RoleUnresolvedList);
	$assignStatic(RoleResult::oldSerialPersistentFields, $new($ObjectStreamFieldArray, {
		$$new($ObjectStreamField, "myRoleList"_s, $RoleList::class$),
		$$new($ObjectStreamField, "myRoleUnresList"_s, $RoleUnresolvedList::class$)
	}));
	$assignStatic(RoleResult::newSerialPersistentFields, $new($ObjectStreamFieldArray, {
		$$new($ObjectStreamField, "roleList"_s, $RoleList::class$),
		$$new($ObjectStreamField, "unresolvedRoleList"_s, $RoleUnresolvedList::class$)
	}));
	RoleResult::compat = false;
	{
		try {
			$var($GetPropertyAction, act, $new($GetPropertyAction, "jmx.serial.form"_s));
			$var($String, form, $cast($String, $AccessController::doPrivileged(static_cast<$PrivilegedAction*>(act))));
			RoleResult::compat = (form != nullptr && form->equals("1.0"_s));
		} catch ($Exception& e) {
		}
		if (RoleResult::compat) {
			$assignStatic(RoleResult::serialPersistentFields, RoleResult::oldSerialPersistentFields);
			RoleResult::serialVersionUID = RoleResult::oldSerialVersionUID;
		} else {
			$assignStatic(RoleResult::serialPersistentFields, RoleResult::newSerialPersistentFields);
			RoleResult::serialVersionUID = RoleResult::newSerialVersionUID;
		}
	}
}

RoleResult::RoleResult() {
}

$Class* RoleResult::load$($String* name, bool initialize) {
	$loadClass(RoleResult, name, initialize, &_RoleResult_ClassInfo_, clinit$RoleResult, allocate$RoleResult);
	return class$;
}

$Class* RoleResult::class$ = nullptr;

		} // relation
	} // management
} // javax
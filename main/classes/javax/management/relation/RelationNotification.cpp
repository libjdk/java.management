#include <javax/management/relation/RelationNotification.h>

#include <com/sun/jmx/mbeanserver/GetPropertyAction.h>
#include <com/sun/jmx/mbeanserver/Util.h>
#include <java/io/InvalidObjectException.h>
#include <java/io/ObjectInputStream$GetField.h>
#include <java/io/ObjectInputStream.h>
#include <java/io/ObjectOutputStream$PutField.h>
#include <java/io/ObjectOutputStream.h>
#include <java/io/ObjectStreamField.h>
#include <java/security/AccessController.h>
#include <java/security/PrivilegedAction.h>
#include <java/util/AbstractList.h>
#include <java/util/AbstractSet.h>
#include <java/util/ArrayList.h>
#include <java/util/Arrays.h>
#include <java/util/Collection.h>
#include <java/util/Collections.h>
#include <java/util/EventObject.h>
#include <java/util/HashSet.h>
#include <java/util/Iterator.h>
#include <java/util/List.h>
#include <java/util/Set.h>
#include <javax/management/Notification.h>
#include <javax/management/ObjectName.h>
#include <javax/management/relation/RelationService.h>
#include <jcpp.h>

#undef RELATION_BASIC_CREATION
#undef RELATION_BASIC_REMOVAL
#undef RELATION_BASIC_UPDATE
#undef RELATION_MBEAN_CREATION
#undef RELATION_MBEAN_REMOVAL
#undef RELATION_MBEAN_UPDATE

using $ObjectStreamFieldArray = $Array<::java::io::ObjectStreamField>;
using $GetPropertyAction = ::com::sun::jmx::mbeanserver::GetPropertyAction;
using $Util = ::com::sun::jmx::mbeanserver::Util;
using $InvalidObjectException = ::java::io::InvalidObjectException;
using $ObjectInputStream = ::java::io::ObjectInputStream;
using $ObjectInputStream$GetField = ::java::io::ObjectInputStream$GetField;
using $ObjectOutputStream = ::java::io::ObjectOutputStream;
using $ObjectOutputStream$PutField = ::java::io::ObjectOutputStream$PutField;
using $ObjectStreamField = ::java::io::ObjectStreamField;
using $ClassInfo = ::java::lang::ClassInfo;
using $Exception = ::java::lang::Exception;
using $FieldInfo = ::java::lang::FieldInfo;
using $IllegalArgumentException = ::java::lang::IllegalArgumentException;
using $MethodInfo = ::java::lang::MethodInfo;
using $AccessController = ::java::security::AccessController;
using $PrivilegedAction = ::java::security::PrivilegedAction;
using $AbstractList = ::java::util::AbstractList;
using $AbstractSet = ::java::util::AbstractSet;
using $ArrayList = ::java::util::ArrayList;
using $Arrays = ::java::util::Arrays;
using $Collection = ::java::util::Collection;
using $Collections = ::java::util::Collections;
using $EventObject = ::java::util::EventObject;
using $HashSet = ::java::util::HashSet;
using $Iterator = ::java::util::Iterator;
using $List = ::java::util::List;
using $Set = ::java::util::Set;
using $Notification = ::javax::management::Notification;
using $ObjectName = ::javax::management::ObjectName;
using $RelationService = ::javax::management::relation::RelationService;

namespace javax {
	namespace management {
		namespace relation {

$FieldInfo _RelationNotification_FieldInfo_[] = {
	{"oldSerialVersionUID", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(RelationNotification, oldSerialVersionUID)},
	{"newSerialVersionUID", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(RelationNotification, newSerialVersionUID)},
	{"oldSerialPersistentFields", "[Ljava/io/ObjectStreamField;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(RelationNotification, oldSerialPersistentFields)},
	{"newSerialPersistentFields", "[Ljava/io/ObjectStreamField;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(RelationNotification, newSerialPersistentFields)},
	{"serialVersionUID", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(RelationNotification, serialVersionUID)},
	{"serialPersistentFields", "[Ljava/io/ObjectStreamField;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(RelationNotification, serialPersistentFields)},
	{"compat", "Z", nullptr, $PRIVATE | $STATIC, $staticField(RelationNotification, compat)},
	{"RELATION_BASIC_CREATION", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(RelationNotification, RELATION_BASIC_CREATION)},
	{"RELATION_MBEAN_CREATION", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(RelationNotification, RELATION_MBEAN_CREATION)},
	{"RELATION_BASIC_UPDATE", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(RelationNotification, RELATION_BASIC_UPDATE)},
	{"RELATION_MBEAN_UPDATE", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(RelationNotification, RELATION_MBEAN_UPDATE)},
	{"RELATION_BASIC_REMOVAL", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(RelationNotification, RELATION_BASIC_REMOVAL)},
	{"RELATION_MBEAN_REMOVAL", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(RelationNotification, RELATION_MBEAN_REMOVAL)},
	{"relationId", "Ljava/lang/String;", nullptr, $PRIVATE, $field(RelationNotification, relationId)},
	{"relationTypeName", "Ljava/lang/String;", nullptr, $PRIVATE, $field(RelationNotification, relationTypeName)},
	{"relationObjName", "Ljavax/management/ObjectName;", nullptr, $PRIVATE, $field(RelationNotification, relationObjName)},
	{"unregisterMBeanList", "Ljava/util/List;", "Ljava/util/List<Ljavax/management/ObjectName;>;", $PRIVATE, $field(RelationNotification, unregisterMBeanList)},
	{"roleName", "Ljava/lang/String;", nullptr, $PRIVATE, $field(RelationNotification, roleName)},
	{"oldRoleValue", "Ljava/util/List;", "Ljava/util/List<Ljavax/management/ObjectName;>;", $PRIVATE, $field(RelationNotification, oldRoleValue)},
	{"newRoleValue", "Ljava/util/List;", "Ljava/util/List<Ljavax/management/ObjectName;>;", $PRIVATE, $field(RelationNotification, newRoleValue)},
	{}
};

$MethodInfo _RelationNotification_MethodInfo_[] = {
	{"<init>", "(Ljava/lang/String;Ljava/lang/Object;JJLjava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljavax/management/ObjectName;Ljava/util/List;)V", "(Ljava/lang/String;Ljava/lang/Object;JJLjava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljavax/management/ObjectName;Ljava/util/List<Ljavax/management/ObjectName;>;)V", $PUBLIC, $method(static_cast<void(RelationNotification::*)($String*,Object$*,int64_t,int64_t,$String*,$String*,$String*,$ObjectName*,$List*)>(&RelationNotification::init$)), "java.lang.IllegalArgumentException"},
	{"<init>", "(Ljava/lang/String;Ljava/lang/Object;JJLjava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljavax/management/ObjectName;Ljava/lang/String;Ljava/util/List;Ljava/util/List;)V", "(Ljava/lang/String;Ljava/lang/Object;JJLjava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljavax/management/ObjectName;Ljava/lang/String;Ljava/util/List<Ljavax/management/ObjectName;>;Ljava/util/List<Ljavax/management/ObjectName;>;)V", $PUBLIC, $method(static_cast<void(RelationNotification::*)($String*,Object$*,int64_t,int64_t,$String*,$String*,$String*,$ObjectName*,$String*,$List*,$List*)>(&RelationNotification::init$)), "java.lang.IllegalArgumentException"},
	{"getMBeansToUnregister", "()Ljava/util/List;", "()Ljava/util/List<Ljavax/management/ObjectName;>;", $PUBLIC},
	{"getNewRoleValue", "()Ljava/util/List;", "()Ljava/util/List<Ljavax/management/ObjectName;>;", $PUBLIC},
	{"getObjectName", "()Ljavax/management/ObjectName;", nullptr, $PUBLIC},
	{"getOldRoleValue", "()Ljava/util/List;", "()Ljava/util/List<Ljavax/management/ObjectName;>;", $PUBLIC},
	{"getRelationId", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"getRelationTypeName", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"getRoleName", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"isValidBasic", "(Ljava/lang/String;Ljava/lang/Object;Ljava/lang/String;Ljava/lang/String;)Z", nullptr, $PRIVATE, $method(static_cast<bool(RelationNotification::*)($String*,Object$*,$String*,$String*)>(&RelationNotification::isValidBasic))},
	{"isValidBasicStrict", "(Ljava/lang/String;Ljava/lang/Object;Ljava/lang/String;Ljava/lang/String;)Z", nullptr, $PRIVATE, $method(static_cast<bool(RelationNotification::*)($String*,Object$*,$String*,$String*)>(&RelationNotification::isValidBasicStrict))},
	{"isValidCreate", "(Ljava/lang/String;)Z", nullptr, $PRIVATE, $method(static_cast<bool(RelationNotification::*)($String*)>(&RelationNotification::isValidCreate))},
	{"isValidUpdate", "(Ljava/lang/String;Ljava/lang/String;Ljava/util/List;Ljava/util/List;)Z", "(Ljava/lang/String;Ljava/lang/String;Ljava/util/List<Ljavax/management/ObjectName;>;Ljava/util/List<Ljavax/management/ObjectName;>;)Z", $PRIVATE, $method(static_cast<bool(RelationNotification::*)($String*,$String*,$List*,$List*)>(&RelationNotification::isValidUpdate))},
	{"readObject", "(Ljava/io/ObjectInputStream;)V", nullptr, $PRIVATE, $method(static_cast<void(RelationNotification::*)($ObjectInputStream*)>(&RelationNotification::readObject)), "java.io.IOException,java.lang.ClassNotFoundException"},
	{"safeGetObjectName", "(Ljavax/management/ObjectName;)Ljavax/management/ObjectName;", nullptr, $PRIVATE, $method(static_cast<$ObjectName*(RelationNotification::*)($ObjectName*)>(&RelationNotification::safeGetObjectName))},
	{"safeGetObjectNameList", "(Ljava/util/List;)Ljava/util/ArrayList;", "(Ljava/util/List<Ljavax/management/ObjectName;>;)Ljava/util/ArrayList<Ljavax/management/ObjectName;>;", $PRIVATE, $method(static_cast<$ArrayList*(RelationNotification::*)($List*)>(&RelationNotification::safeGetObjectNameList))},
	{"writeObject", "(Ljava/io/ObjectOutputStream;)V", nullptr, $PRIVATE, $method(static_cast<void(RelationNotification::*)($ObjectOutputStream*)>(&RelationNotification::writeObject)), "java.io.IOException"},
	{}
};

$ClassInfo _RelationNotification_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"javax.management.relation.RelationNotification",
	"javax.management.Notification",
	nullptr,
	_RelationNotification_FieldInfo_,
	_RelationNotification_MethodInfo_
};

$Object* allocate$RelationNotification($Class* clazz) {
	return $of($alloc(RelationNotification));
}

$ObjectStreamFieldArray* RelationNotification::oldSerialPersistentFields = nullptr;
$ObjectStreamFieldArray* RelationNotification::newSerialPersistentFields = nullptr;
int64_t RelationNotification::serialVersionUID = 0;
$ObjectStreamFieldArray* RelationNotification::serialPersistentFields = nullptr;
bool RelationNotification::compat = false;
$String* RelationNotification::RELATION_BASIC_CREATION = nullptr;
$String* RelationNotification::RELATION_MBEAN_CREATION = nullptr;
$String* RelationNotification::RELATION_BASIC_UPDATE = nullptr;
$String* RelationNotification::RELATION_MBEAN_UPDATE = nullptr;
$String* RelationNotification::RELATION_BASIC_REMOVAL = nullptr;
$String* RelationNotification::RELATION_MBEAN_REMOVAL = nullptr;

void RelationNotification::init$($String* notifType, Object$* sourceObj, int64_t sequence, int64_t timeStamp, $String* message, $String* id, $String* typeName, $ObjectName* objectName, $List* unregMBeanList) {
	$Notification::init$(notifType, sourceObj, sequence, timeStamp, message);
	$set(this, relationId, nullptr);
	$set(this, relationTypeName, nullptr);
	$set(this, relationObjName, nullptr);
	$set(this, unregisterMBeanList, nullptr);
	$set(this, roleName, nullptr);
	$set(this, oldRoleValue, nullptr);
	$set(this, newRoleValue, nullptr);
	bool var$0 = !isValidBasicStrict(notifType, sourceObj, id, typeName);
	if (var$0 || !isValidCreate(notifType)) {
		$throwNew($IllegalArgumentException, "Invalid parameter."_s);
	}
	$set(this, relationId, id);
	$set(this, relationTypeName, typeName);
	$set(this, relationObjName, safeGetObjectName(objectName));
	$set(this, unregisterMBeanList, safeGetObjectNameList(unregMBeanList));
}

void RelationNotification::init$($String* notifType, Object$* sourceObj, int64_t sequence, int64_t timeStamp, $String* message, $String* id, $String* typeName, $ObjectName* objectName, $String* name, $List* newValue, $List* oldValue) {
	$Notification::init$(notifType, sourceObj, sequence, timeStamp, message);
	$set(this, relationId, nullptr);
	$set(this, relationTypeName, nullptr);
	$set(this, relationObjName, nullptr);
	$set(this, unregisterMBeanList, nullptr);
	$set(this, roleName, nullptr);
	$set(this, oldRoleValue, nullptr);
	$set(this, newRoleValue, nullptr);
	bool var$0 = !isValidBasicStrict(notifType, sourceObj, id, typeName);
	if (var$0 || !isValidUpdate(notifType, name, newValue, oldValue)) {
		$throwNew($IllegalArgumentException, "Invalid parameter."_s);
	}
	$set(this, relationId, id);
	$set(this, relationTypeName, typeName);
	$set(this, relationObjName, safeGetObjectName(objectName));
	$set(this, roleName, name);
	$set(this, oldRoleValue, safeGetObjectNameList(oldValue));
	$set(this, newRoleValue, safeGetObjectNameList(newValue));
}

$String* RelationNotification::getRelationId() {
	return this->relationId;
}

$String* RelationNotification::getRelationTypeName() {
	return this->relationTypeName;
}

$ObjectName* RelationNotification::getObjectName() {
	return this->relationObjName;
}

$List* RelationNotification::getMBeansToUnregister() {
	$var($List, result, nullptr);
	if (this->unregisterMBeanList != nullptr) {
		$assign(result, $new($ArrayList, static_cast<$Collection*>(this->unregisterMBeanList)));
	} else {
		$assign(result, $Collections::emptyList());
	}
	return result;
}

$String* RelationNotification::getRoleName() {
	$var($String, result, nullptr);
	if (this->roleName != nullptr) {
		$assign(result, this->roleName);
	}
	return result;
}

$List* RelationNotification::getOldRoleValue() {
	$var($List, result, nullptr);
	if (this->oldRoleValue != nullptr) {
		$assign(result, $new($ArrayList, static_cast<$Collection*>(this->oldRoleValue)));
	} else {
		$assign(result, $Collections::emptyList());
	}
	return result;
}

$List* RelationNotification::getNewRoleValue() {
	$var($List, result, nullptr);
	if (this->newRoleValue != nullptr) {
		$assign(result, $new($ArrayList, static_cast<$Collection*>(this->newRoleValue)));
	} else {
		$assign(result, $Collections::emptyList());
	}
	return result;
}

bool RelationNotification::isValidBasicStrict($String* notifType, Object$* sourceObj, $String* id, $String* typeName) {
	if (sourceObj == nullptr) {
		return false;
	}
	return isValidBasic(notifType, sourceObj, id, typeName);
}

bool RelationNotification::isValidBasic($String* notifType, Object$* sourceObj, $String* id, $String* typeName) {
	if (notifType == nullptr || id == nullptr || typeName == nullptr) {
		return false;
	}
	if (sourceObj != nullptr && (!($instanceOf($RelationService, sourceObj)) && !($instanceOf($ObjectName, sourceObj)))) {
		return false;
	}
	return true;
}

bool RelationNotification::isValidCreate($String* notifType) {
	$useLocalCurrentObjectStackCache();
	$var($StringArray, validTypes, $new($StringArray, {
		RelationNotification::RELATION_BASIC_CREATION,
		RelationNotification::RELATION_MBEAN_CREATION,
		RelationNotification::RELATION_BASIC_REMOVAL,
		RelationNotification::RELATION_MBEAN_REMOVAL
	}));
	$var($Set, ctSet, $new($HashSet, $(static_cast<$Collection*>($Arrays::asList(validTypes)))));
	return ctSet->contains(notifType);
}

bool RelationNotification::isValidUpdate($String* notifType, $String* name, $List* newValue, $List* oldValue) {
	bool var$0 = !($nc(notifType)->equals(RelationNotification::RELATION_BASIC_UPDATE));
	if (var$0 && !(notifType->equals(RelationNotification::RELATION_MBEAN_UPDATE))) {
		return false;
	}
	if (name == nullptr || oldValue == nullptr || newValue == nullptr) {
		return false;
	}
	return true;
}

$ArrayList* RelationNotification::safeGetObjectNameList($List* src) {
	$useLocalCurrentObjectStackCache();
	$var($ArrayList, dest, nullptr);
	if (src != nullptr) {
		$assign(dest, $new($ArrayList));
		{
			$var($Iterator, i$, src->iterator());
			for (; $nc(i$)->hasNext();) {
				$var($ObjectName, item, $cast($ObjectName, i$->next()));
				{
					dest->add($($ObjectName::getInstance(item)));
				}
			}
		}
	}
	return dest;
}

$ObjectName* RelationNotification::safeGetObjectName($ObjectName* src) {
	$var($ObjectName, dest, nullptr);
	if (src != nullptr) {
		$assign(dest, $ObjectName::getInstance(src));
	}
	return dest;
}

void RelationNotification::readObject($ObjectInputStream* in) {
	$useLocalCurrentObjectStackCache();
	$var($String, tmpRelationId, nullptr);
	$var($String, tmpRelationTypeName, nullptr);
	$var($String, tmpRoleName, nullptr);
	$var($ObjectName, tmpRelationObjName, nullptr);
	$var($List, tmpNewRoleValue, nullptr);
	$var($List, tmpOldRoleValue, nullptr);
	$var($List, tmpUnregMBeanList, nullptr);
	$var($ObjectInputStream$GetField, fields, $nc(in)->readFields());
	if (RelationNotification::compat) {
		$assign(tmpRelationId, $cast($String, $nc(fields)->get("myRelId"_s, ($Object*)nullptr)));
		$assign(tmpRelationTypeName, $cast($String, fields->get("myRelTypeName"_s, ($Object*)nullptr)));
		$assign(tmpRoleName, $cast($String, fields->get("myRoleName"_s, ($Object*)nullptr)));
		$assign(tmpRelationObjName, $cast($ObjectName, fields->get("myRelObjName"_s, ($Object*)nullptr)));
		$assign(tmpNewRoleValue, $cast($List, $Util::cast($(fields->get("myNewRoleValue"_s, ($Object*)nullptr)))));
		$assign(tmpOldRoleValue, $cast($List, $Util::cast($(fields->get("myOldRoleValue"_s, ($Object*)nullptr)))));
		$assign(tmpUnregMBeanList, $cast($List, $Util::cast($(fields->get("myUnregMBeanList"_s, ($Object*)nullptr)))));
	} else {
		$assign(tmpRelationId, $cast($String, $nc(fields)->get("relationId"_s, ($Object*)nullptr)));
		$assign(tmpRelationTypeName, $cast($String, fields->get("relationTypeName"_s, ($Object*)nullptr)));
		$assign(tmpRoleName, $cast($String, fields->get("roleName"_s, ($Object*)nullptr)));
		$assign(tmpRelationObjName, $cast($ObjectName, fields->get("relationObjName"_s, ($Object*)nullptr)));
		$assign(tmpNewRoleValue, $cast($List, $Util::cast($(fields->get("newRoleValue"_s, ($Object*)nullptr)))));
		$assign(tmpOldRoleValue, $cast($List, $Util::cast($(fields->get("oldRoleValue"_s, ($Object*)nullptr)))));
		$assign(tmpUnregMBeanList, $cast($List, $Util::cast($(fields->get("unregisterMBeanList"_s, ($Object*)nullptr)))));
	}
	$var($String, notifType, $Notification::getType());
	bool var$0 = !isValidBasic(notifType, $($Notification::getSource()), tmpRelationId, tmpRelationTypeName);
	if (!var$0) {
		bool var$1 = !isValidCreate(notifType);
		var$0 = (var$1 && !isValidUpdate(notifType, tmpRoleName, tmpNewRoleValue, tmpOldRoleValue));
	}
	if (var$0) {
		$Notification::setSource(nullptr);
		$throwNew($InvalidObjectException, "Invalid object read"_s);
	}
	$set(this, relationObjName, safeGetObjectName(tmpRelationObjName));
	$set(this, newRoleValue, safeGetObjectNameList(tmpNewRoleValue));
	$set(this, oldRoleValue, safeGetObjectNameList(tmpOldRoleValue));
	$set(this, unregisterMBeanList, safeGetObjectNameList(tmpUnregMBeanList));
	$set(this, relationId, tmpRelationId);
	$set(this, relationTypeName, tmpRelationTypeName);
	$set(this, roleName, tmpRoleName);
}

void RelationNotification::writeObject($ObjectOutputStream* out) {
	if (RelationNotification::compat) {
		$var($ObjectOutputStream$PutField, fields, $nc(out)->putFields());
		$nc(fields)->put("myNewRoleValue"_s, $of(this->newRoleValue));
		fields->put("myOldRoleValue"_s, $of(this->oldRoleValue));
		fields->put("myRelId"_s, $of(this->relationId));
		fields->put("myRelObjName"_s, $of(this->relationObjName));
		fields->put("myRelTypeName"_s, $of(this->relationTypeName));
		fields->put("myRoleName"_s, $of(this->roleName));
		fields->put("myUnregMBeanList"_s, $of(this->unregisterMBeanList));
		out->writeFields();
	} else {
		$nc(out)->defaultWriteObject();
	}
}

void clinit$RelationNotification($Class* class$) {
	$useLocalCurrentObjectStackCache();
	$assignStatic(RelationNotification::RELATION_BASIC_CREATION, "jmx.relation.creation.basic"_s);
	$assignStatic(RelationNotification::RELATION_MBEAN_CREATION, "jmx.relation.creation.mbean"_s);
	$assignStatic(RelationNotification::RELATION_BASIC_UPDATE, "jmx.relation.update.basic"_s);
	$assignStatic(RelationNotification::RELATION_MBEAN_UPDATE, "jmx.relation.update.mbean"_s);
	$assignStatic(RelationNotification::RELATION_BASIC_REMOVAL, "jmx.relation.removal.basic"_s);
	$assignStatic(RelationNotification::RELATION_MBEAN_REMOVAL, "jmx.relation.removal.mbean"_s);
	$beforeCallerSensitive();
	$load($ArrayList);
	$load($ObjectName);
	$assignStatic(RelationNotification::oldSerialPersistentFields, $new($ObjectStreamFieldArray, {
		$$new($ObjectStreamField, "myNewRoleValue"_s, $ArrayList::class$),
		$$new($ObjectStreamField, "myOldRoleValue"_s, $ArrayList::class$),
		$$new($ObjectStreamField, "myRelId"_s, $String::class$),
		$$new($ObjectStreamField, "myRelObjName"_s, $ObjectName::class$),
		$$new($ObjectStreamField, "myRelTypeName"_s, $String::class$),
		$$new($ObjectStreamField, "myRoleName"_s, $String::class$),
		$$new($ObjectStreamField, "myUnregMBeanList"_s, $ArrayList::class$)
	}));
	$load($List);
	$assignStatic(RelationNotification::newSerialPersistentFields, $new($ObjectStreamFieldArray, {
		$$new($ObjectStreamField, "newRoleValue"_s, $List::class$),
		$$new($ObjectStreamField, "oldRoleValue"_s, $List::class$),
		$$new($ObjectStreamField, "relationId"_s, $String::class$),
		$$new($ObjectStreamField, "relationObjName"_s, $ObjectName::class$),
		$$new($ObjectStreamField, "relationTypeName"_s, $String::class$),
		$$new($ObjectStreamField, "roleName"_s, $String::class$),
		$$new($ObjectStreamField, "unregisterMBeanList"_s, $List::class$)
	}));
	RelationNotification::compat = false;
	{
		try {
			$var($GetPropertyAction, act, $new($GetPropertyAction, "jmx.serial.form"_s));
			$var($String, form, $cast($String, $AccessController::doPrivileged(static_cast<$PrivilegedAction*>(act))));
			RelationNotification::compat = (form != nullptr && form->equals("1.0"_s));
		} catch ($Exception& e) {
		}
		if (RelationNotification::compat) {
			$assignStatic(RelationNotification::serialPersistentFields, RelationNotification::oldSerialPersistentFields);
			RelationNotification::serialVersionUID = RelationNotification::oldSerialVersionUID;
		} else {
			$assignStatic(RelationNotification::serialPersistentFields, RelationNotification::newSerialPersistentFields);
			RelationNotification::serialVersionUID = RelationNotification::newSerialVersionUID;
		}
	}
}

RelationNotification::RelationNotification() {
}

$Class* RelationNotification::load$($String* name, bool initialize) {
	$loadClass(RelationNotification, name, initialize, &_RelationNotification_ClassInfo_, clinit$RelationNotification, allocate$RelationNotification);
	return class$;
}

$Class* RelationNotification::class$ = nullptr;

		} // relation
	} // management
} // javax
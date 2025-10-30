#include <javax/management/relation/RelationTypeSupport.h>

#include <com/sun/jmx/defaults/JmxProperties.h>
#include <com/sun/jmx/mbeanserver/GetPropertyAction.h>
#include <com/sun/jmx/mbeanserver/Util.h>
#include <java/io/ObjectInputStream$GetField.h>
#include <java/io/ObjectInputStream.h>
#include <java/io/ObjectOutputStream$PutField.h>
#include <java/io/ObjectOutputStream.h>
#include <java/io/ObjectStreamField.h>
#include <java/lang/System$Logger$Level.h>
#include <java/lang/System$Logger.h>
#include <java/security/AccessController.h>
#include <java/security/PrivilegedAction.h>
#include <java/util/AbstractList.h>
#include <java/util/AbstractMap.h>
#include <java/util/AbstractSet.h>
#include <java/util/ArrayList.h>
#include <java/util/Collection.h>
#include <java/util/HashMap.h>
#include <java/util/HashSet.h>
#include <java/util/List.h>
#include <java/util/Map.h>
#include <java/util/Set.h>
#include <javax/management/relation/InvalidRelationTypeException.h>
#include <javax/management/relation/RoleInfo.h>
#include <javax/management/relation/RoleInfoNotFoundException.h>
#include <jcpp.h>

#undef RELATION_LOGGER
#undef TRACE
#undef TYPE

using $ObjectStreamFieldArray = $Array<::java::io::ObjectStreamField>;
using $RoleInfoArray = $Array<::javax::management::relation::RoleInfo>;
using $JmxProperties = ::com::sun::jmx::defaults::JmxProperties;
using $GetPropertyAction = ::com::sun::jmx::mbeanserver::GetPropertyAction;
using $Util = ::com::sun::jmx::mbeanserver::Util;
using $ObjectInputStream = ::java::io::ObjectInputStream;
using $ObjectInputStream$GetField = ::java::io::ObjectInputStream$GetField;
using $ObjectOutputStream = ::java::io::ObjectOutputStream;
using $ObjectOutputStream$PutField = ::java::io::ObjectOutputStream$PutField;
using $ObjectStreamField = ::java::io::ObjectStreamField;
using $Boolean = ::java::lang::Boolean;
using $ClassInfo = ::java::lang::ClassInfo;
using $Exception = ::java::lang::Exception;
using $FieldInfo = ::java::lang::FieldInfo;
using $IllegalArgumentException = ::java::lang::IllegalArgumentException;
using $MethodInfo = ::java::lang::MethodInfo;
using $NullPointerException = ::java::lang::NullPointerException;
using $RuntimeException = ::java::lang::RuntimeException;
using $System$Logger = ::java::lang::System$Logger;
using $System$Logger$Level = ::java::lang::System$Logger$Level;
using $AccessController = ::java::security::AccessController;
using $PrivilegedAction = ::java::security::PrivilegedAction;
using $AbstractList = ::java::util::AbstractList;
using $AbstractMap = ::java::util::AbstractMap;
using $AbstractSet = ::java::util::AbstractSet;
using $ArrayList = ::java::util::ArrayList;
using $Collection = ::java::util::Collection;
using $HashMap = ::java::util::HashMap;
using $HashSet = ::java::util::HashSet;
using $List = ::java::util::List;
using $Map = ::java::util::Map;
using $Set = ::java::util::Set;
using $InvalidRelationTypeException = ::javax::management::relation::InvalidRelationTypeException;
using $RelationType = ::javax::management::relation::RelationType;
using $RoleInfo = ::javax::management::relation::RoleInfo;
using $RoleInfoNotFoundException = ::javax::management::relation::RoleInfoNotFoundException;

namespace javax {
	namespace management {
		namespace relation {

$FieldInfo _RelationTypeSupport_FieldInfo_[] = {
	{"oldSerialVersionUID", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(RelationTypeSupport, oldSerialVersionUID)},
	{"newSerialVersionUID", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(RelationTypeSupport, newSerialVersionUID)},
	{"oldSerialPersistentFields", "[Ljava/io/ObjectStreamField;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(RelationTypeSupport, oldSerialPersistentFields)},
	{"newSerialPersistentFields", "[Ljava/io/ObjectStreamField;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(RelationTypeSupport, newSerialPersistentFields)},
	{"serialVersionUID", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(RelationTypeSupport, serialVersionUID)},
	{"serialPersistentFields", "[Ljava/io/ObjectStreamField;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(RelationTypeSupport, serialPersistentFields)},
	{"compat", "Z", nullptr, $PRIVATE | $STATIC, $staticField(RelationTypeSupport, compat)},
	{"typeName", "Ljava/lang/String;", nullptr, $PRIVATE, $field(RelationTypeSupport, typeName)},
	{"roleName2InfoMap", "Ljava/util/Map;", "Ljava/util/Map<Ljava/lang/String;Ljavax/management/relation/RoleInfo;>;", $PRIVATE, $field(RelationTypeSupport, roleName2InfoMap)},
	{"isInRelationService", "Z", nullptr, $PRIVATE, $field(RelationTypeSupport, isInRelationService)},
	{}
};

$MethodInfo _RelationTypeSupport_MethodInfo_[] = {
	{"<init>", "(Ljava/lang/String;[Ljavax/management/relation/RoleInfo;)V", nullptr, $PUBLIC, $method(static_cast<void(RelationTypeSupport::*)($String*,$RoleInfoArray*)>(&RelationTypeSupport::init$)), "java.lang.IllegalArgumentException,javax.management.relation.InvalidRelationTypeException"},
	{"<init>", "(Ljava/lang/String;)V", nullptr, $PROTECTED, $method(static_cast<void(RelationTypeSupport::*)($String*)>(&RelationTypeSupport::init$))},
	{"addRoleInfo", "(Ljavax/management/relation/RoleInfo;)V", nullptr, $PROTECTED, nullptr, "java.lang.IllegalArgumentException,javax.management.relation.InvalidRelationTypeException"},
	{"checkRoleInfos", "([Ljavax/management/relation/RoleInfo;)V", nullptr, $STATIC, $method(static_cast<void(*)($RoleInfoArray*)>(&RelationTypeSupport::checkRoleInfos)), "java.lang.IllegalArgumentException,javax.management.relation.InvalidRelationTypeException"},
	{"getRelationTypeName", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"getRoleInfo", "(Ljava/lang/String;)Ljavax/management/relation/RoleInfo;", nullptr, $PUBLIC, nullptr, "java.lang.IllegalArgumentException,javax.management.relation.RoleInfoNotFoundException"},
	{"getRoleInfos", "()Ljava/util/List;", "()Ljava/util/List<Ljavax/management/relation/RoleInfo;>;", $PUBLIC},
	{"initMembers", "(Ljava/lang/String;[Ljavax/management/relation/RoleInfo;)V", nullptr, $PRIVATE, $method(static_cast<void(RelationTypeSupport::*)($String*,$RoleInfoArray*)>(&RelationTypeSupport::initMembers)), "java.lang.IllegalArgumentException,javax.management.relation.InvalidRelationTypeException"},
	{"readObject", "(Ljava/io/ObjectInputStream;)V", nullptr, $PRIVATE, $method(static_cast<void(RelationTypeSupport::*)($ObjectInputStream*)>(&RelationTypeSupport::readObject)), "java.io.IOException,java.lang.ClassNotFoundException"},
	{"setRelationServiceFlag", "(Z)V", nullptr, 0},
	{"writeObject", "(Ljava/io/ObjectOutputStream;)V", nullptr, $PRIVATE, $method(static_cast<void(RelationTypeSupport::*)($ObjectOutputStream*)>(&RelationTypeSupport::writeObject)), "java.io.IOException"},
	{}
};

$ClassInfo _RelationTypeSupport_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"javax.management.relation.RelationTypeSupport",
	"java.lang.Object",
	"javax.management.relation.RelationType",
	_RelationTypeSupport_FieldInfo_,
	_RelationTypeSupport_MethodInfo_
};

$Object* allocate$RelationTypeSupport($Class* clazz) {
	return $of($alloc(RelationTypeSupport));
}

$ObjectStreamFieldArray* RelationTypeSupport::oldSerialPersistentFields = nullptr;
$ObjectStreamFieldArray* RelationTypeSupport::newSerialPersistentFields = nullptr;
int64_t RelationTypeSupport::serialVersionUID = 0;
$ObjectStreamFieldArray* RelationTypeSupport::serialPersistentFields = nullptr;
bool RelationTypeSupport::compat = false;

void RelationTypeSupport::init$($String* relationTypeName, $RoleInfoArray* roleInfoArray) {
	$useLocalCurrentObjectStackCache();
	$set(this, typeName, nullptr);
	$set(this, roleName2InfoMap, $new($HashMap));
	this->isInRelationService = false;
	if (relationTypeName == nullptr || roleInfoArray == nullptr) {
		$var($String, excMsg, "Invalid parameter."_s);
		$throwNew($IllegalArgumentException, excMsg);
	}
	$init($JmxProperties);
	$init($System$Logger$Level);
	$nc($JmxProperties::RELATION_LOGGER)->log($System$Logger$Level::TRACE, "ENTRY {0}"_s, $$new($ObjectArray, {$of(relationTypeName)}));
	initMembers(relationTypeName, roleInfoArray);
	$nc($JmxProperties::RELATION_LOGGER)->log($System$Logger$Level::TRACE, "RETURN"_s);
	return;
}

void RelationTypeSupport::init$($String* relationTypeName) {
	$useLocalCurrentObjectStackCache();
	$set(this, typeName, nullptr);
	$set(this, roleName2InfoMap, $new($HashMap));
	this->isInRelationService = false;
	if (relationTypeName == nullptr) {
		$var($String, excMsg, "Invalid parameter."_s);
		$throwNew($IllegalArgumentException, excMsg);
	}
	$init($JmxProperties);
	$init($System$Logger$Level);
	$nc($JmxProperties::RELATION_LOGGER)->log($System$Logger$Level::TRACE, "ENTRY {0}"_s, $$new($ObjectArray, {$of(relationTypeName)}));
	$set(this, typeName, relationTypeName);
	$nc($JmxProperties::RELATION_LOGGER)->log($System$Logger$Level::TRACE, "RETURN"_s);
	return;
}

$String* RelationTypeSupport::getRelationTypeName() {
	return this->typeName;
}

$List* RelationTypeSupport::getRoleInfos() {
	return $new($ArrayList, $($nc(this->roleName2InfoMap)->values()));
}

$RoleInfo* RelationTypeSupport::getRoleInfo($String* roleInfoName) {
	$useLocalCurrentObjectStackCache();
	if (roleInfoName == nullptr) {
		$var($String, excMsg, "Invalid parameter."_s);
		$throwNew($IllegalArgumentException, excMsg);
	}
	$init($JmxProperties);
	$init($System$Logger$Level);
	$nc($JmxProperties::RELATION_LOGGER)->log($System$Logger$Level::TRACE, "ENTRY {0}"_s, $$new($ObjectArray, {$of(roleInfoName)}));
	$var($RoleInfo, result, $cast($RoleInfo, $nc(this->roleName2InfoMap)->get(roleInfoName)));
	if (result == nullptr) {
		$var($StringBuilder, excMsgStrB, $new($StringBuilder));
		$var($String, excMsg, "No role info for role "_s);
		excMsgStrB->append(excMsg);
		excMsgStrB->append(roleInfoName);
		$throwNew($RoleInfoNotFoundException, $(excMsgStrB->toString()));
	}
	$nc($JmxProperties::RELATION_LOGGER)->log($System$Logger$Level::TRACE, "RETURN"_s);
	return result;
}

void RelationTypeSupport::addRoleInfo($RoleInfo* roleInfo) {
	$useLocalCurrentObjectStackCache();
	if (roleInfo == nullptr) {
		$var($String, excMsg, "Invalid parameter."_s);
		$throwNew($IllegalArgumentException, excMsg);
	}
	$init($JmxProperties);
	$init($System$Logger$Level);
	$nc($JmxProperties::RELATION_LOGGER)->log($System$Logger$Level::TRACE, "ENTRY {0}"_s, $$new($ObjectArray, {$of(roleInfo)}));
	if (this->isInRelationService) {
		$var($String, excMsg, "Relation type cannot be updated as it is declared in the Relation Service."_s);
		$throwNew($RuntimeException, excMsg);
	}
	$var($String, roleName, $nc(roleInfo)->getName());
	if ($nc(this->roleName2InfoMap)->containsKey(roleName)) {
		$var($StringBuilder, excMsgStrB, $new($StringBuilder));
		$var($String, excMsg, "Two role infos provided for role "_s);
		excMsgStrB->append(excMsg);
		excMsgStrB->append(roleName);
		$throwNew($InvalidRelationTypeException, $(excMsgStrB->toString()));
	}
	$nc(this->roleName2InfoMap)->put(roleName, $$new($RoleInfo, roleInfo));
	$nc($JmxProperties::RELATION_LOGGER)->log($System$Logger$Level::TRACE, "RETURN"_s);
	return;
}

void RelationTypeSupport::setRelationServiceFlag(bool flag) {
	this->isInRelationService = flag;
	return;
}

void RelationTypeSupport::initMembers($String* relationTypeName, $RoleInfoArray* roleInfoArray) {
	$useLocalCurrentObjectStackCache();
	if (relationTypeName == nullptr || roleInfoArray == nullptr) {
		$var($String, excMsg, "Invalid parameter."_s);
		$throwNew($IllegalArgumentException, excMsg);
	}
	$init($JmxProperties);
	$init($System$Logger$Level);
	$nc($JmxProperties::RELATION_LOGGER)->log($System$Logger$Level::TRACE, "ENTRY {0}"_s, $$new($ObjectArray, {$of(relationTypeName)}));
	$set(this, typeName, relationTypeName);
	checkRoleInfos(roleInfoArray);
	for (int32_t i = 0; i < $nc(roleInfoArray)->length; ++i) {
		$var($RoleInfo, currRoleInfo, roleInfoArray->get(i));
		$var($Object, var$0, $of($nc(currRoleInfo)->getName()));
		$nc(this->roleName2InfoMap)->put(var$0, $$new($RoleInfo, currRoleInfo));
	}
	$nc($JmxProperties::RELATION_LOGGER)->log($System$Logger$Level::TRACE, "RETURN"_s);
	return;
}

void RelationTypeSupport::checkRoleInfos($RoleInfoArray* roleInfoArray) {
	$init(RelationTypeSupport);
	$useLocalCurrentObjectStackCache();
	if (roleInfoArray == nullptr) {
		$var($String, excMsg, "Invalid parameter."_s);
		$throwNew($IllegalArgumentException, excMsg);
	}
	if ($nc(roleInfoArray)->length == 0) {
		$var($String, excMsg, "No role info provided."_s);
		$throwNew($InvalidRelationTypeException, excMsg);
	}
	$var($Set, roleNames, $new($HashSet));
	for (int32_t i = 0; i < $nc(roleInfoArray)->length; ++i) {
		$var($RoleInfo, currRoleInfo, roleInfoArray->get(i));
		if (currRoleInfo == nullptr) {
			$var($String, excMsg, "Null role info provided."_s);
			$throwNew($InvalidRelationTypeException, excMsg);
		}
		$var($String, roleName, $nc(currRoleInfo)->getName());
		if (roleNames->contains(roleName)) {
			$var($StringBuilder, excMsgStrB, $new($StringBuilder));
			$var($String, excMsg, "Two role infos provided for role "_s);
			excMsgStrB->append(excMsg);
			excMsgStrB->append(roleName);
			$throwNew($InvalidRelationTypeException, $(excMsgStrB->toString()));
		}
		roleNames->add(roleName);
	}
	return;
}

void RelationTypeSupport::readObject($ObjectInputStream* in) {
	$useLocalCurrentObjectStackCache();
	if (RelationTypeSupport::compat) {
		$var($ObjectInputStream$GetField, fields, $nc(in)->readFields());
		$set(this, typeName, $cast($String, $nc(fields)->get("myTypeName"_s, ($Object*)nullptr)));
		if (fields->defaulted("myTypeName"_s)) {
			$throwNew($NullPointerException, "myTypeName"_s);
		}
		$set(this, roleName2InfoMap, $cast($Map, $Util::cast($(fields->get("myRoleName2InfoMap"_s, ($Object*)nullptr)))));
		if (fields->defaulted("myRoleName2InfoMap"_s)) {
			$throwNew($NullPointerException, "myRoleName2InfoMap"_s);
		}
		this->isInRelationService = fields->get("myIsInRelServFlg"_s, false);
		if (fields->defaulted("myIsInRelServFlg"_s)) {
			$throwNew($NullPointerException, "myIsInRelServFlg"_s);
		}
	} else {
		$nc(in)->defaultReadObject();
	}
}

void RelationTypeSupport::writeObject($ObjectOutputStream* out) {
	if (RelationTypeSupport::compat) {
		$var($ObjectOutputStream$PutField, fields, $nc(out)->putFields());
		$nc(fields)->put("myTypeName"_s, $of(this->typeName));
		fields->put("myRoleName2InfoMap"_s, $of(this->roleName2InfoMap));
		fields->put("myIsInRelServFlg"_s, this->isInRelationService);
		out->writeFields();
	} else {
		$nc(out)->defaultWriteObject();
	}
}

void clinit$RelationTypeSupport($Class* class$) {
	$useLocalCurrentObjectStackCache();
	$beforeCallerSensitive();
	$load($HashMap);
	$init($Boolean);
	$assignStatic(RelationTypeSupport::oldSerialPersistentFields, $new($ObjectStreamFieldArray, {
		$$new($ObjectStreamField, "myTypeName"_s, $String::class$),
		$$new($ObjectStreamField, "myRoleName2InfoMap"_s, $HashMap::class$),
		$$new($ObjectStreamField, "myIsInRelServFlg"_s, $Boolean::TYPE)
	}));
	$load($Map);
	$assignStatic(RelationTypeSupport::newSerialPersistentFields, $new($ObjectStreamFieldArray, {
		$$new($ObjectStreamField, "typeName"_s, $String::class$),
		$$new($ObjectStreamField, "roleName2InfoMap"_s, $Map::class$),
		$$new($ObjectStreamField, "isInRelationService"_s, $Boolean::TYPE)
	}));
	RelationTypeSupport::compat = false;
	{
		try {
			$var($GetPropertyAction, act, $new($GetPropertyAction, "jmx.serial.form"_s));
			$var($String, form, $cast($String, $AccessController::doPrivileged(static_cast<$PrivilegedAction*>(act))));
			RelationTypeSupport::compat = (form != nullptr && form->equals("1.0"_s));
		} catch ($Exception& e) {
		}
		if (RelationTypeSupport::compat) {
			$assignStatic(RelationTypeSupport::serialPersistentFields, RelationTypeSupport::oldSerialPersistentFields);
			RelationTypeSupport::serialVersionUID = RelationTypeSupport::oldSerialVersionUID;
		} else {
			$assignStatic(RelationTypeSupport::serialPersistentFields, RelationTypeSupport::newSerialPersistentFields);
			RelationTypeSupport::serialVersionUID = RelationTypeSupport::newSerialVersionUID;
		}
	}
}

RelationTypeSupport::RelationTypeSupport() {
}

$Class* RelationTypeSupport::load$($String* name, bool initialize) {
	$loadClass(RelationTypeSupport, name, initialize, &_RelationTypeSupport_ClassInfo_, clinit$RelationTypeSupport, allocate$RelationTypeSupport);
	return class$;
}

$Class* RelationTypeSupport::class$ = nullptr;

		} // relation
	} // management
} // javax
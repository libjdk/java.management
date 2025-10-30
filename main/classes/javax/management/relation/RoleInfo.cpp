#include <javax/management/relation/RoleInfo.h>

#include <com/sun/jmx/mbeanserver/GetPropertyAction.h>
#include <java/io/ObjectInputStream$GetField.h>
#include <java/io/ObjectInputStream.h>
#include <java/io/ObjectOutputStream$PutField.h>
#include <java/io/ObjectOutputStream.h>
#include <java/io/ObjectStreamField.h>
#include <java/security/AccessController.h>
#include <java/security/PrivilegedAction.h>
#include <javax/management/relation/InvalidRoleInfoException.h>
#include <jcpp.h>

#undef ROLE_CARDINALITY_INFINITY
#undef TYPE

using $ObjectStreamFieldArray = $Array<::java::io::ObjectStreamField>;
using $GetPropertyAction = ::com::sun::jmx::mbeanserver::GetPropertyAction;
using $ObjectInputStream = ::java::io::ObjectInputStream;
using $ObjectInputStream$GetField = ::java::io::ObjectInputStream$GetField;
using $ObjectOutputStream = ::java::io::ObjectOutputStream;
using $ObjectOutputStream$PutField = ::java::io::ObjectOutputStream$PutField;
using $ObjectStreamField = ::java::io::ObjectStreamField;
using $Serializable = ::java::io::Serializable;
using $Boolean = ::java::lang::Boolean;
using $ClassInfo = ::java::lang::ClassInfo;
using $Exception = ::java::lang::Exception;
using $FieldInfo = ::java::lang::FieldInfo;
using $IllegalArgumentException = ::java::lang::IllegalArgumentException;
using $Integer = ::java::lang::Integer;
using $MethodInfo = ::java::lang::MethodInfo;
using $NullPointerException = ::java::lang::NullPointerException;
using $AccessController = ::java::security::AccessController;
using $PrivilegedAction = ::java::security::PrivilegedAction;
using $InvalidRoleInfoException = ::javax::management::relation::InvalidRoleInfoException;

namespace javax {
	namespace management {
		namespace relation {

$FieldInfo _RoleInfo_FieldInfo_[] = {
	{"oldSerialVersionUID", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(RoleInfo, oldSerialVersionUID)},
	{"newSerialVersionUID", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(RoleInfo, newSerialVersionUID)},
	{"oldSerialPersistentFields", "[Ljava/io/ObjectStreamField;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(RoleInfo, oldSerialPersistentFields)},
	{"newSerialPersistentFields", "[Ljava/io/ObjectStreamField;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(RoleInfo, newSerialPersistentFields)},
	{"serialVersionUID", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(RoleInfo, serialVersionUID)},
	{"serialPersistentFields", "[Ljava/io/ObjectStreamField;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(RoleInfo, serialPersistentFields)},
	{"compat", "Z", nullptr, $PRIVATE | $STATIC, $staticField(RoleInfo, compat)},
	{"ROLE_CARDINALITY_INFINITY", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(RoleInfo, ROLE_CARDINALITY_INFINITY)},
	{"name", "Ljava/lang/String;", nullptr, $PRIVATE, $field(RoleInfo, name)},
	{"isReadable", "Z", nullptr, $PRIVATE, $field(RoleInfo, isReadable$)},
	{"isWritable", "Z", nullptr, $PRIVATE, $field(RoleInfo, isWritable$)},
	{"description", "Ljava/lang/String;", nullptr, $PRIVATE, $field(RoleInfo, description)},
	{"minDegree", "I", nullptr, $PRIVATE, $field(RoleInfo, minDegree)},
	{"maxDegree", "I", nullptr, $PRIVATE, $field(RoleInfo, maxDegree)},
	{"referencedMBeanClassName", "Ljava/lang/String;", nullptr, $PRIVATE, $field(RoleInfo, referencedMBeanClassName)},
	{}
};

$MethodInfo _RoleInfo_MethodInfo_[] = {
	{"<init>", "(Ljava/lang/String;Ljava/lang/String;ZZIILjava/lang/String;)V", nullptr, $PUBLIC, $method(static_cast<void(RoleInfo::*)($String*,$String*,bool,bool,int32_t,int32_t,$String*)>(&RoleInfo::init$)), "java.lang.IllegalArgumentException,javax.management.relation.InvalidRoleInfoException,java.lang.ClassNotFoundException,javax.management.NotCompliantMBeanException"},
	{"<init>", "(Ljava/lang/String;Ljava/lang/String;ZZ)V", nullptr, $PUBLIC, $method(static_cast<void(RoleInfo::*)($String*,$String*,bool,bool)>(&RoleInfo::init$)), "java.lang.IllegalArgumentException,java.lang.ClassNotFoundException,javax.management.NotCompliantMBeanException"},
	{"<init>", "(Ljava/lang/String;Ljava/lang/String;)V", nullptr, $PUBLIC, $method(static_cast<void(RoleInfo::*)($String*,$String*)>(&RoleInfo::init$)), "java.lang.IllegalArgumentException,java.lang.ClassNotFoundException,javax.management.NotCompliantMBeanException"},
	{"<init>", "(Ljavax/management/relation/RoleInfo;)V", nullptr, $PUBLIC, $method(static_cast<void(RoleInfo::*)(RoleInfo*)>(&RoleInfo::init$)), "java.lang.IllegalArgumentException"},
	{"checkMaxDegree", "(I)Z", nullptr, $PUBLIC},
	{"checkMinDegree", "(I)Z", nullptr, $PUBLIC},
	{"getDescription", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"getMaxDegree", "()I", nullptr, $PUBLIC},
	{"getMinDegree", "()I", nullptr, $PUBLIC},
	{"getName", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"getRefMBeanClassName", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"init", "(Ljava/lang/String;Ljava/lang/String;ZZIILjava/lang/String;)V", nullptr, $PRIVATE, $method(static_cast<void(RoleInfo::*)($String*,$String*,bool,bool,int32_t,int32_t,$String*)>(&RoleInfo::init)), "java.lang.IllegalArgumentException,javax.management.relation.InvalidRoleInfoException"},
	{"isReadable", "()Z", nullptr, $PUBLIC},
	{"isWritable", "()Z", nullptr, $PUBLIC},
	{"readObject", "(Ljava/io/ObjectInputStream;)V", nullptr, $PRIVATE, $method(static_cast<void(RoleInfo::*)($ObjectInputStream*)>(&RoleInfo::readObject)), "java.io.IOException,java.lang.ClassNotFoundException"},
	{"toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"writeObject", "(Ljava/io/ObjectOutputStream;)V", nullptr, $PRIVATE, $method(static_cast<void(RoleInfo::*)($ObjectOutputStream*)>(&RoleInfo::writeObject)), "java.io.IOException"},
	{}
};

$ClassInfo _RoleInfo_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"javax.management.relation.RoleInfo",
	"java.lang.Object",
	"java.io.Serializable",
	_RoleInfo_FieldInfo_,
	_RoleInfo_MethodInfo_
};

$Object* allocate$RoleInfo($Class* clazz) {
	return $of($alloc(RoleInfo));
}

$ObjectStreamFieldArray* RoleInfo::oldSerialPersistentFields = nullptr;
$ObjectStreamFieldArray* RoleInfo::newSerialPersistentFields = nullptr;
int64_t RoleInfo::serialVersionUID = 0;
$ObjectStreamFieldArray* RoleInfo::serialPersistentFields = nullptr;
bool RoleInfo::compat = false;

void RoleInfo::init$($String* roleName, $String* mbeanClassName, bool read, bool write, int32_t min, int32_t max, $String* descr) {
	$set(this, name, nullptr);
	$set(this, description, nullptr);
	$set(this, referencedMBeanClassName, nullptr);
	init(roleName, mbeanClassName, read, write, min, max, descr);
	return;
}

void RoleInfo::init$($String* roleName, $String* mbeanClassName, bool read, bool write) {
	$set(this, name, nullptr);
	$set(this, description, nullptr);
	$set(this, referencedMBeanClassName, nullptr);
	try {
		init(roleName, mbeanClassName, read, write, 1, 1, nullptr);
	} catch ($InvalidRoleInfoException& exc) {
	}
	return;
}

void RoleInfo::init$($String* roleName, $String* mbeanClassName) {
	$set(this, name, nullptr);
	$set(this, description, nullptr);
	$set(this, referencedMBeanClassName, nullptr);
	try {
		init(roleName, mbeanClassName, true, true, 1, 1, nullptr);
	} catch ($InvalidRoleInfoException& exc) {
	}
	return;
}

void RoleInfo::init$(RoleInfo* roleInfo) {
	$useLocalCurrentObjectStackCache();
	$set(this, name, nullptr);
	$set(this, description, nullptr);
	$set(this, referencedMBeanClassName, nullptr);
	if (roleInfo == nullptr) {
		$var($String, excMsg, "Invalid parameter."_s);
		$throwNew($IllegalArgumentException, excMsg);
	}
	try {
		$var($String, var$0, $nc(roleInfo)->getName());
		$var($String, var$1, roleInfo->getRefMBeanClassName());
		bool var$2 = roleInfo->isReadable();
		bool var$3 = roleInfo->isWritable();
		int32_t var$4 = roleInfo->getMinDegree();
		int32_t var$5 = roleInfo->getMaxDegree();
		init(var$0, var$1, var$2, var$3, var$4, var$5, $(roleInfo->getDescription()));
	} catch ($InvalidRoleInfoException& exc3) {
	}
}

$String* RoleInfo::getName() {
	return this->name;
}

bool RoleInfo::isReadable() {
	return this->isReadable$;
}

bool RoleInfo::isWritable() {
	return this->isWritable$;
}

$String* RoleInfo::getDescription() {
	return this->description;
}

int32_t RoleInfo::getMinDegree() {
	return this->minDegree;
}

int32_t RoleInfo::getMaxDegree() {
	return this->maxDegree;
}

$String* RoleInfo::getRefMBeanClassName() {
	return this->referencedMBeanClassName;
}

bool RoleInfo::checkMinDegree(int32_t value) {
	if (value >= RoleInfo::ROLE_CARDINALITY_INFINITY && (this->minDegree == RoleInfo::ROLE_CARDINALITY_INFINITY || value >= this->minDegree)) {
		return true;
	} else {
		return false;
	}
}

bool RoleInfo::checkMaxDegree(int32_t value) {
	if (value >= RoleInfo::ROLE_CARDINALITY_INFINITY && (this->maxDegree == RoleInfo::ROLE_CARDINALITY_INFINITY || (value != RoleInfo::ROLE_CARDINALITY_INFINITY && value <= this->maxDegree))) {
		return true;
	} else {
		return false;
	}
}

$String* RoleInfo::toString() {
	$useLocalCurrentObjectStackCache();
	$var($StringBuilder, result, $new($StringBuilder));
	result->append($$str({"role info name: "_s, this->name}));
	result->append($$str({"; isReadable: "_s, $$str(this->isReadable$)}));
	result->append($$str({"; isWritable: "_s, $$str(this->isWritable$)}));
	result->append($$str({"; description: "_s, this->description}));
	result->append($$str({"; minimum degree: "_s, $$str(this->minDegree)}));
	result->append($$str({"; maximum degree: "_s, $$str(this->maxDegree)}));
	result->append($$str({"; MBean class: "_s, this->referencedMBeanClassName}));
	return result->toString();
}

void RoleInfo::init($String* roleName, $String* mbeanClassName, bool read, bool write, int32_t min, int32_t max, $String* descr) {
	$useLocalCurrentObjectStackCache();
	if (roleName == nullptr || mbeanClassName == nullptr) {
		$var($String, excMsg, "Invalid parameter."_s);
		$throwNew($IllegalArgumentException, excMsg);
	}
	$set(this, name, roleName);
	this->isReadable$ = read;
	this->isWritable$ = write;
	if (descr != nullptr) {
		$set(this, description, descr);
	}
	bool invalidRoleInfoFlg = false;
	$var($StringBuilder, excMsgStrB, $new($StringBuilder));
	if (max != RoleInfo::ROLE_CARDINALITY_INFINITY && (min == RoleInfo::ROLE_CARDINALITY_INFINITY || min > max)) {
		excMsgStrB->append("Minimum degree "_s);
		excMsgStrB->append(min);
		excMsgStrB->append(" is greater than maximum degree "_s);
		excMsgStrB->append(max);
		invalidRoleInfoFlg = true;
	} else if (min < RoleInfo::ROLE_CARDINALITY_INFINITY || max < RoleInfo::ROLE_CARDINALITY_INFINITY) {
		excMsgStrB->append("Minimum or maximum degree has an illegal value, must be [0, ROLE_CARDINALITY_INFINITY]."_s);
		invalidRoleInfoFlg = true;
	}
	if (invalidRoleInfoFlg) {
		$throwNew($InvalidRoleInfoException, $(excMsgStrB->toString()));
	}
	this->minDegree = min;
	this->maxDegree = max;
	$set(this, referencedMBeanClassName, mbeanClassName);
	return;
}

void RoleInfo::readObject($ObjectInputStream* in) {
	if (RoleInfo::compat) {
		$var($ObjectInputStream$GetField, fields, $nc(in)->readFields());
		$set(this, name, $cast($String, $nc(fields)->get("myName"_s, ($Object*)nullptr)));
		if (fields->defaulted("myName"_s)) {
			$throwNew($NullPointerException, "myName"_s);
		}
		this->isReadable$ = fields->get("myIsReadableFlg"_s, false);
		if (fields->defaulted("myIsReadableFlg"_s)) {
			$throwNew($NullPointerException, "myIsReadableFlg"_s);
		}
		this->isWritable$ = fields->get("myIsWritableFlg"_s, false);
		if (fields->defaulted("myIsWritableFlg"_s)) {
			$throwNew($NullPointerException, "myIsWritableFlg"_s);
		}
		$set(this, description, $cast($String, fields->get("myDescription"_s, ($Object*)nullptr)));
		if (fields->defaulted("myDescription"_s)) {
			$throwNew($NullPointerException, "myDescription"_s);
		}
		this->minDegree = fields->get("myMinDegree"_s, 0);
		if (fields->defaulted("myMinDegree"_s)) {
			$throwNew($NullPointerException, "myMinDegree"_s);
		}
		this->maxDegree = fields->get("myMaxDegree"_s, 0);
		if (fields->defaulted("myMaxDegree"_s)) {
			$throwNew($NullPointerException, "myMaxDegree"_s);
		}
		$set(this, referencedMBeanClassName, $cast($String, fields->get("myRefMBeanClassName"_s, ($Object*)nullptr)));
		if (fields->defaulted("myRefMBeanClassName"_s)) {
			$throwNew($NullPointerException, "myRefMBeanClassName"_s);
		}
	} else {
		$nc(in)->defaultReadObject();
	}
}

void RoleInfo::writeObject($ObjectOutputStream* out) {
	if (RoleInfo::compat) {
		$var($ObjectOutputStream$PutField, fields, $nc(out)->putFields());
		$nc(fields)->put("myName"_s, $of(this->name));
		fields->put("myIsReadableFlg"_s, this->isReadable$);
		fields->put("myIsWritableFlg"_s, this->isWritable$);
		fields->put("myDescription"_s, $of(this->description));
		fields->put("myMinDegree"_s, this->minDegree);
		fields->put("myMaxDegree"_s, this->maxDegree);
		fields->put("myRefMBeanClassName"_s, $of(this->referencedMBeanClassName));
		out->writeFields();
	} else {
		$nc(out)->defaultWriteObject();
	}
}

void clinit$RoleInfo($Class* class$) {
	$useLocalCurrentObjectStackCache();
	$beforeCallerSensitive();
	$init($Boolean);
	$init($Integer);
	$assignStatic(RoleInfo::oldSerialPersistentFields, $new($ObjectStreamFieldArray, {
		$$new($ObjectStreamField, "myName"_s, $String::class$),
		$$new($ObjectStreamField, "myIsReadableFlg"_s, $Boolean::TYPE),
		$$new($ObjectStreamField, "myIsWritableFlg"_s, $Boolean::TYPE),
		$$new($ObjectStreamField, "myDescription"_s, $String::class$),
		$$new($ObjectStreamField, "myMinDegree"_s, $Integer::TYPE),
		$$new($ObjectStreamField, "myMaxDegree"_s, $Integer::TYPE),
		$$new($ObjectStreamField, "myRefMBeanClassName"_s, $String::class$)
	}));
	$assignStatic(RoleInfo::newSerialPersistentFields, $new($ObjectStreamFieldArray, {
		$$new($ObjectStreamField, "name"_s, $String::class$),
		$$new($ObjectStreamField, "isReadable"_s, $Boolean::TYPE),
		$$new($ObjectStreamField, "isWritable"_s, $Boolean::TYPE),
		$$new($ObjectStreamField, "description"_s, $String::class$),
		$$new($ObjectStreamField, "minDegree"_s, $Integer::TYPE),
		$$new($ObjectStreamField, "maxDegree"_s, $Integer::TYPE),
		$$new($ObjectStreamField, "referencedMBeanClassName"_s, $String::class$)
	}));
	RoleInfo::compat = false;
	{
		try {
			$var($GetPropertyAction, act, $new($GetPropertyAction, "jmx.serial.form"_s));
			$var($String, form, $cast($String, $AccessController::doPrivileged(static_cast<$PrivilegedAction*>(act))));
			RoleInfo::compat = (form != nullptr && form->equals("1.0"_s));
		} catch ($Exception& e) {
		}
		if (RoleInfo::compat) {
			$assignStatic(RoleInfo::serialPersistentFields, RoleInfo::oldSerialPersistentFields);
			RoleInfo::serialVersionUID = RoleInfo::oldSerialVersionUID;
		} else {
			$assignStatic(RoleInfo::serialPersistentFields, RoleInfo::newSerialPersistentFields);
			RoleInfo::serialVersionUID = RoleInfo::newSerialVersionUID;
		}
	}
}

RoleInfo::RoleInfo() {
}

$Class* RoleInfo::load$($String* name, bool initialize) {
	$loadClass(RoleInfo, name, initialize, &_RoleInfo_ClassInfo_, clinit$RoleInfo, allocate$RoleInfo);
	return class$;
}

$Class* RoleInfo::class$ = nullptr;

		} // relation
	} // management
} // javax
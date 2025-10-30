#include <javax/management/ObjectInstance.h>

#include <javax/management/ObjectName.h>
#include <javax/management/RuntimeOperationsException.h>
#include <jcpp.h>

using $Serializable = ::java::io::Serializable;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $IllegalArgumentException = ::java::lang::IllegalArgumentException;
using $MethodInfo = ::java::lang::MethodInfo;
using $RuntimeException = ::java::lang::RuntimeException;
using $ObjectName = ::javax::management::ObjectName;
using $RuntimeOperationsException = ::javax::management::RuntimeOperationsException;

namespace javax {
	namespace management {

$FieldInfo _ObjectInstance_FieldInfo_[] = {
	{"serialVersionUID", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(ObjectInstance, serialVersionUID)},
	{"name", "Ljavax/management/ObjectName;", nullptr, $PRIVATE, $field(ObjectInstance, name)},
	{"className", "Ljava/lang/String;", nullptr, $PRIVATE, $field(ObjectInstance, className)},
	{}
};

$MethodInfo _ObjectInstance_MethodInfo_[] = {
	{"<init>", "(Ljava/lang/String;Ljava/lang/String;)V", nullptr, $PUBLIC, $method(static_cast<void(ObjectInstance::*)($String*,$String*)>(&ObjectInstance::init$)), "javax.management.MalformedObjectNameException"},
	{"<init>", "(Ljavax/management/ObjectName;Ljava/lang/String;)V", nullptr, $PUBLIC, $method(static_cast<void(ObjectInstance::*)($ObjectName*,$String*)>(&ObjectInstance::init$))},
	{"equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"getClassName", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"getObjectName", "()Ljavax/management/ObjectName;", nullptr, $PUBLIC},
	{"hashCode", "()I", nullptr, $PUBLIC},
	{"toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

$ClassInfo _ObjectInstance_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"javax.management.ObjectInstance",
	"java.lang.Object",
	"java.io.Serializable",
	_ObjectInstance_FieldInfo_,
	_ObjectInstance_MethodInfo_
};

$Object* allocate$ObjectInstance($Class* clazz) {
	return $of($alloc(ObjectInstance));
}

void ObjectInstance::init$($String* objectName, $String* className) {
	ObjectInstance::init$($$new($ObjectName, objectName), className);
}

void ObjectInstance::init$($ObjectName* objectName, $String* className) {
	$useLocalCurrentObjectStackCache();
	if ($nc(objectName)->isPattern()) {
		$var($IllegalArgumentException, iae, $new($IllegalArgumentException, $$str({"Invalid name->"_s, $(objectName->toString())})));
		$throwNew($RuntimeOperationsException, iae);
	}
	$set(this, name, objectName);
	$set(this, className, className);
}

bool ObjectInstance::equals(Object$* object) {
	$useLocalCurrentObjectStackCache();
	if (!($instanceOf(ObjectInstance, object))) {
		return false;
	}
	$var(ObjectInstance, val, $cast(ObjectInstance, object));
	if (!$nc(this->name)->equals($($nc(val)->getObjectName()))) {
		return false;
	}
	if (this->className == nullptr) {
		return ($nc(val)->getClassName() == nullptr);
	}
	return $nc(this->className)->equals($($nc(val)->getClassName()));
}

int32_t ObjectInstance::hashCode() {
	int32_t classHash = ((this->className == nullptr) ? 0 : $nc(this->className)->hashCode());
	return $nc(this->name)->hashCode() ^ classHash;
}

$ObjectName* ObjectInstance::getObjectName() {
	return this->name;
}

$String* ObjectInstance::getClassName() {
	return this->className;
}

$String* ObjectInstance::toString() {
	$useLocalCurrentObjectStackCache();
	$var($String, var$1, $$str({$(getClassName()), "["_s}));
	$var($String, var$0, $$concat(var$1, $(getObjectName())));
	return $concat(var$0, "]");
}

ObjectInstance::ObjectInstance() {
}

$Class* ObjectInstance::load$($String* name, bool initialize) {
	$loadClass(ObjectInstance, name, initialize, &_ObjectInstance_ClassInfo_, allocate$ObjectInstance);
	return class$;
}

$Class* ObjectInstance::class$ = nullptr;

	} // management
} // javax
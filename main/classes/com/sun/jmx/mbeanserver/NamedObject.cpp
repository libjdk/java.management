#include <com/sun/jmx/mbeanserver/NamedObject.h>

#include <javax/management/DynamicMBean.h>
#include <javax/management/ObjectName.h>
#include <javax/management/RuntimeOperationsException.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $IllegalArgumentException = ::java::lang::IllegalArgumentException;
using $MethodInfo = ::java::lang::MethodInfo;
using $RuntimeException = ::java::lang::RuntimeException;
using $DynamicMBean = ::javax::management::DynamicMBean;
using $ObjectName = ::javax::management::ObjectName;
using $RuntimeOperationsException = ::javax::management::RuntimeOperationsException;

namespace com {
	namespace sun {
		namespace jmx {
			namespace mbeanserver {

$FieldInfo _NamedObject_FieldInfo_[] = {
	{"name", "Ljavax/management/ObjectName;", nullptr, $PRIVATE | $FINAL, $field(NamedObject, name)},
	{"object", "Ljavax/management/DynamicMBean;", nullptr, $PRIVATE | $FINAL, $field(NamedObject, object)},
	{}
};

$MethodInfo _NamedObject_MethodInfo_[] = {
	{"<init>", "(Ljavax/management/ObjectName;Ljavax/management/DynamicMBean;)V", nullptr, $PUBLIC, $method(static_cast<void(NamedObject::*)($ObjectName*,$DynamicMBean*)>(&NamedObject::init$))},
	{"<init>", "(Ljava/lang/String;Ljavax/management/DynamicMBean;)V", nullptr, $PUBLIC, $method(static_cast<void(NamedObject::*)($String*,$DynamicMBean*)>(&NamedObject::init$)), "javax.management.MalformedObjectNameException"},
	{"equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"getName", "()Ljavax/management/ObjectName;", nullptr, $PUBLIC},
	{"getObject", "()Ljavax/management/DynamicMBean;", nullptr, $PUBLIC},
	{"hashCode", "()I", nullptr, $PUBLIC},
	{}
};

$ClassInfo _NamedObject_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"com.sun.jmx.mbeanserver.NamedObject",
	"java.lang.Object",
	nullptr,
	_NamedObject_FieldInfo_,
	_NamedObject_MethodInfo_
};

$Object* allocate$NamedObject($Class* clazz) {
	return $of($alloc(NamedObject));
}

void NamedObject::init$($ObjectName* objectName, $DynamicMBean* object) {
	$useLocalCurrentObjectStackCache();
	if ($nc(objectName)->isPattern()) {
		$throwNew($RuntimeOperationsException, $$new($IllegalArgumentException, $$str({"Invalid name->"_s, $(objectName->toString())})));
	}
	$set(this, name, objectName);
	$set(this, object, object);
}

void NamedObject::init$($String* objectName, $DynamicMBean* object) {
	$useLocalCurrentObjectStackCache();
	$var($ObjectName, objName, $new($ObjectName, objectName));
	if (objName->isPattern()) {
		$throwNew($RuntimeOperationsException, $$new($IllegalArgumentException, $$str({"Invalid name->"_s, $(objName->toString())})));
	}
	$set(this, name, objName);
	$set(this, object, object);
}

bool NamedObject::equals(Object$* object) {
	$useLocalCurrentObjectStackCache();
	if ($equals(this, object)) {
		return true;
	}
	if (object == nullptr) {
		return false;
	}
	if (!($instanceOf(NamedObject, object))) {
		return false;
	}
	$var(NamedObject, no, $cast(NamedObject, object));
	return $nc(this->name)->equals($($nc(no)->getName()));
}

int32_t NamedObject::hashCode() {
	return $nc(this->name)->hashCode();
}

$ObjectName* NamedObject::getName() {
	return this->name;
}

$DynamicMBean* NamedObject::getObject() {
	return this->object;
}

NamedObject::NamedObject() {
}

$Class* NamedObject::load$($String* name, bool initialize) {
	$loadClass(NamedObject, name, initialize, &_NamedObject_ClassInfo_, allocate$NamedObject);
	return class$;
}

$Class* NamedObject::class$ = nullptr;

			} // mbeanserver
		} // jmx
	} // sun
} // com
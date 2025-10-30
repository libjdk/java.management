#include <javax/management/ClassAttributeValueExp.h>

#include <com/sun/jmx/mbeanserver/GetPropertyAction.h>
#include <java/security/AccessController.h>
#include <java/security/PrivilegedAction.h>
#include <javax/management/AttributeValueExp.h>
#include <javax/management/BadAttributeValueExpException.h>
#include <javax/management/MBeanServer.h>
#include <javax/management/ObjectInstance.h>
#include <javax/management/ObjectName.h>
#include <javax/management/QueryEval.h>
#include <javax/management/StringValueExp.h>
#include <javax/management/ValueExp.h>
#include <jcpp.h>

using $GetPropertyAction = ::com::sun::jmx::mbeanserver::GetPropertyAction;
using $ClassInfo = ::java::lang::ClassInfo;
using $Exception = ::java::lang::Exception;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $AccessController = ::java::security::AccessController;
using $PrivilegedAction = ::java::security::PrivilegedAction;
using $AttributeValueExp = ::javax::management::AttributeValueExp;
using $BadAttributeValueExpException = ::javax::management::BadAttributeValueExpException;
using $MBeanServer = ::javax::management::MBeanServer;
using $ObjectInstance = ::javax::management::ObjectInstance;
using $ObjectName = ::javax::management::ObjectName;
using $QueryEval = ::javax::management::QueryEval;
using $StringValueExp = ::javax::management::StringValueExp;
using $ValueExp = ::javax::management::ValueExp;

namespace javax {
	namespace management {

$FieldInfo _ClassAttributeValueExp_FieldInfo_[] = {
	{"oldSerialVersionUID", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(ClassAttributeValueExp, oldSerialVersionUID)},
	{"newSerialVersionUID", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(ClassAttributeValueExp, newSerialVersionUID)},
	{"serialVersionUID", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(ClassAttributeValueExp, serialVersionUID)},
	{"attr", "Ljava/lang/String;", nullptr, $PRIVATE, $field(ClassAttributeValueExp, attr)},
	{}
};

$MethodInfo _ClassAttributeValueExp_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(ClassAttributeValueExp::*)()>(&ClassAttributeValueExp::init$))},
	{"apply", "(Ljavax/management/ObjectName;)Ljavax/management/ValueExp;", nullptr, $PUBLIC, nullptr, "javax.management.BadStringOperationException,javax.management.BadBinaryOpValueExpException,javax.management.BadAttributeValueExpException,javax.management.InvalidApplicationException"},
	{"getValue", "(Ljavax/management/ObjectName;)Ljava/lang/Object;", nullptr, $PROTECTED},
	{"toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

$ClassInfo _ClassAttributeValueExp_ClassInfo_ = {
	$ACC_SUPER,
	"javax.management.ClassAttributeValueExp",
	"javax.management.AttributeValueExp",
	nullptr,
	_ClassAttributeValueExp_FieldInfo_,
	_ClassAttributeValueExp_MethodInfo_
};

$Object* allocate$ClassAttributeValueExp($Class* clazz) {
	return $of($alloc(ClassAttributeValueExp));
}

int64_t ClassAttributeValueExp::serialVersionUID = 0;

void ClassAttributeValueExp::init$() {
	$AttributeValueExp::init$("Class"_s);
	$set(this, attr, "Class"_s);
}

$ValueExp* ClassAttributeValueExp::apply($ObjectName* name) {
	$var($Object, result, getValue(name));
	if ($instanceOf($String, result)) {
		return $new($StringValueExp, $cast($String, result));
	} else {
		$throwNew($BadAttributeValueExpException, result);
	}
}

$String* ClassAttributeValueExp::toString() {
	return this->attr;
}

$Object* ClassAttributeValueExp::getValue($ObjectName* name) {
	$useLocalCurrentObjectStackCache();
	try {
		$var($MBeanServer, server, $QueryEval::getMBeanServer());
		return $of($nc($($nc(server)->getObjectInstance(name)))->getClassName());
	} catch ($Exception& re) {
		return $of(nullptr);
	}
	$shouldNotReachHere();
}

void clinit$ClassAttributeValueExp($Class* class$) {
	$useLocalCurrentObjectStackCache();
	$beforeCallerSensitive();
	{
		bool compat = false;
		try {
			$var($GetPropertyAction, act, $new($GetPropertyAction, "jmx.serial.form"_s));
			$var($String, form, $cast($String, $AccessController::doPrivileged(static_cast<$PrivilegedAction*>(act))));
			compat = (form != nullptr && form->equals("1.0"_s));
		} catch ($Exception& e) {
		}
		if (compat) {
			ClassAttributeValueExp::serialVersionUID = ClassAttributeValueExp::oldSerialVersionUID;
		} else {
			ClassAttributeValueExp::serialVersionUID = ClassAttributeValueExp::newSerialVersionUID;
		}
	}
}

ClassAttributeValueExp::ClassAttributeValueExp() {
}

$Class* ClassAttributeValueExp::load$($String* name, bool initialize) {
	$loadClass(ClassAttributeValueExp, name, initialize, &_ClassAttributeValueExp_ClassInfo_, clinit$ClassAttributeValueExp, allocate$ClassAttributeValueExp);
	return class$;
}

$Class* ClassAttributeValueExp::class$ = nullptr;

	} // management
} // javax
#include <javax/management/NumericValueExp.h>

#include <com/sun/jmx/mbeanserver/GetPropertyAction.h>
#include <java/io/ObjectInputStream$GetField.h>
#include <java/io/ObjectInputStream.h>
#include <java/io/ObjectOutputStream$PutField.h>
#include <java/io/ObjectOutputStream.h>
#include <java/io/ObjectStreamField.h>
#include <java/lang/Number.h>
#include <java/security/AccessController.h>
#include <java/security/PrivilegedAction.h>
#include <javax/management/MBeanServer.h>
#include <javax/management/ObjectName.h>
#include <javax/management/QueryEval.h>
#include <javax/management/ValueExp.h>
#include <jcpp.h>

#undef TYPE

using $ObjectStreamFieldArray = $Array<::java::io::ObjectStreamField>;
using $GetPropertyAction = ::com::sun::jmx::mbeanserver::GetPropertyAction;
using $ObjectInputStream = ::java::io::ObjectInputStream;
using $ObjectInputStream$GetField = ::java::io::ObjectInputStream$GetField;
using $ObjectOutputStream = ::java::io::ObjectOutputStream;
using $ObjectOutputStream$PutField = ::java::io::ObjectOutputStream$PutField;
using $ObjectStreamField = ::java::io::ObjectStreamField;
using $Boolean = ::java::lang::Boolean;
using $ClassInfo = ::java::lang::ClassInfo;
using $CompoundAttribute = ::java::lang::CompoundAttribute;
using $Double = ::java::lang::Double;
using $Exception = ::java::lang::Exception;
using $FieldInfo = ::java::lang::FieldInfo;
using $Integer = ::java::lang::Integer;
using $Long = ::java::lang::Long;
using $MethodInfo = ::java::lang::MethodInfo;
using $NullPointerException = ::java::lang::NullPointerException;
using $Number = ::java::lang::Number;
using $AccessController = ::java::security::AccessController;
using $PrivilegedAction = ::java::security::PrivilegedAction;
using $MBeanServer = ::javax::management::MBeanServer;
using $ObjectName = ::javax::management::ObjectName;
using $QueryEval = ::javax::management::QueryEval;
using $ValueExp = ::javax::management::ValueExp;

namespace javax {
	namespace management {

$CompoundAttribute _NumericValueExp_MethodAnnotations_setMBeanServer7[] = {
	{"Ljava/lang/Deprecated;", nullptr},
	{}
};

$FieldInfo _NumericValueExp_FieldInfo_[] = {
	{"oldSerialVersionUID", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(NumericValueExp, oldSerialVersionUID)},
	{"newSerialVersionUID", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(NumericValueExp, newSerialVersionUID)},
	{"oldSerialPersistentFields", "[Ljava/io/ObjectStreamField;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(NumericValueExp, oldSerialPersistentFields)},
	{"newSerialPersistentFields", "[Ljava/io/ObjectStreamField;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(NumericValueExp, newSerialPersistentFields)},
	{"serialVersionUID", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(NumericValueExp, serialVersionUID)},
	{"serialPersistentFields", "[Ljava/io/ObjectStreamField;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(NumericValueExp, serialPersistentFields)},
	{"val", "Ljava/lang/Number;", nullptr, $PRIVATE, $field(NumericValueExp, val)},
	{"compat", "Z", nullptr, $PRIVATE | $STATIC, $staticField(NumericValueExp, compat)},
	{}
};

$MethodInfo _NumericValueExp_MethodInfo_[] = {
	{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
	{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"*hashCode", "()I", nullptr, $PUBLIC | $NATIVE},
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(NumericValueExp::*)()>(&NumericValueExp::init$))},
	{"<init>", "(Ljava/lang/Number;)V", nullptr, 0, $method(static_cast<void(NumericValueExp::*)($Number*)>(&NumericValueExp::init$))},
	{"apply", "(Ljavax/management/ObjectName;)Ljavax/management/ValueExp;", nullptr, $PUBLIC, nullptr, "javax.management.BadStringOperationException,javax.management.BadBinaryOpValueExpException,javax.management.BadAttributeValueExpException,javax.management.InvalidApplicationException"},
	{"doubleValue", "()D", nullptr, $PUBLIC},
	{"isLong", "()Z", nullptr, $PUBLIC},
	{"longValue", "()J", nullptr, $PUBLIC},
	{"readObject", "(Ljava/io/ObjectInputStream;)V", nullptr, $PRIVATE, $method(static_cast<void(NumericValueExp::*)($ObjectInputStream*)>(&NumericValueExp::readObject)), "java.io.IOException,java.lang.ClassNotFoundException"},
	{"setMBeanServer", "(Ljavax/management/MBeanServer;)V", nullptr, $PUBLIC | $DEPRECATED, nullptr, nullptr, nullptr, _NumericValueExp_MethodAnnotations_setMBeanServer7},
	{"toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"writeObject", "(Ljava/io/ObjectOutputStream;)V", nullptr, $PRIVATE, $method(static_cast<void(NumericValueExp::*)($ObjectOutputStream*)>(&NumericValueExp::writeObject)), "java.io.IOException"},
	{}
};

$ClassInfo _NumericValueExp_ClassInfo_ = {
	$ACC_SUPER,
	"javax.management.NumericValueExp",
	"javax.management.QueryEval",
	"javax.management.ValueExp",
	_NumericValueExp_FieldInfo_,
	_NumericValueExp_MethodInfo_
};

$Object* allocate$NumericValueExp($Class* clazz) {
	return $of($alloc(NumericValueExp));
}

int32_t NumericValueExp::hashCode() {
	 return this->$QueryEval::hashCode();
}

bool NumericValueExp::equals(Object$* arg0) {
	 return this->$QueryEval::equals(arg0);
}

$Object* NumericValueExp::clone() {
	 return this->$QueryEval::clone();
}

void NumericValueExp::finalize() {
	this->$QueryEval::finalize();
}

$ObjectStreamFieldArray* NumericValueExp::oldSerialPersistentFields = nullptr;
$ObjectStreamFieldArray* NumericValueExp::newSerialPersistentFields = nullptr;
int64_t NumericValueExp::serialVersionUID = 0;
$ObjectStreamFieldArray* NumericValueExp::serialPersistentFields = nullptr;
bool NumericValueExp::compat = false;

void NumericValueExp::init$() {
	$QueryEval::init$();
	$set(this, val, $Double::valueOf(0.0));
}

void NumericValueExp::init$($Number* val) {
	$QueryEval::init$();
	$set(this, val, $Double::valueOf(0.0));
	$set(this, val, val);
}

double NumericValueExp::doubleValue() {
	if ($instanceOf($Long, this->val) || $instanceOf($Integer, this->val)) {
		return (double)($nc(this->val)->longValue());
	}
	return $nc(this->val)->doubleValue();
}

int64_t NumericValueExp::longValue() {
	if ($instanceOf($Long, this->val) || $instanceOf($Integer, this->val)) {
		return $nc(this->val)->longValue();
	}
	return $cast(int64_t, ($nc(this->val)->doubleValue()));
}

bool NumericValueExp::isLong() {
	return ($instanceOf($Long, this->val) || $instanceOf($Integer, this->val));
}

$String* NumericValueExp::toString() {
	if (this->val == nullptr) {
		return "null"_s;
	}
	if ($instanceOf($Long, this->val) || $instanceOf($Integer, this->val)) {
		return $Long::toString($nc(this->val)->longValue());
	}
	double d = $nc(this->val)->doubleValue();
	if ($Double::isInfinite(d)) {
		return (d > 0) ? "(1.0 / 0.0)"_s : "(-1.0 / 0.0)"_s;
	}
	if ($Double::isNaN(d)) {
		return "(0.0 / 0.0)"_s;
	}
	return $Double::toString(d);
}

$ValueExp* NumericValueExp::apply($ObjectName* name) {
	return this;
}

void NumericValueExp::readObject($ObjectInputStream* in) {
	if (NumericValueExp::compat) {
		double doubleVal = 0.0;
		int64_t longVal = 0;
		bool isLong = false;
		$var($ObjectInputStream$GetField, fields, $nc(in)->readFields());
		doubleVal = $nc(fields)->get("doubleVal"_s, (double)0);
		if (fields->defaulted("doubleVal"_s)) {
			$throwNew($NullPointerException, "doubleVal"_s);
		}
		longVal = fields->get("longVal"_s, (int64_t)0);
		if (fields->defaulted("longVal"_s)) {
			$throwNew($NullPointerException, "longVal"_s);
		}
		isLong = fields->get("valIsLong"_s, false);
		if (fields->defaulted("valIsLong"_s)) {
			$throwNew($NullPointerException, "valIsLong"_s);
		}
		if (isLong) {
			$set(this, val, $Long::valueOf(longVal));
		} else {
			$set(this, val, $Double::valueOf(doubleVal));
		}
	} else {
		$nc(in)->defaultReadObject();
	}
}

void NumericValueExp::writeObject($ObjectOutputStream* out) {
	if (NumericValueExp::compat) {
		$var($ObjectOutputStream$PutField, fields, $nc(out)->putFields());
		$nc(fields)->put("doubleVal"_s, doubleValue());
		fields->put("longVal"_s, longValue());
		fields->put("valIsLong"_s, isLong());
		out->writeFields();
	} else {
		$nc(out)->defaultWriteObject();
	}
}

void NumericValueExp::setMBeanServer($MBeanServer* s) {
	$QueryEval::setMBeanServer(s);
}

void clinit$NumericValueExp($Class* class$) {
	$useLocalCurrentObjectStackCache();
	$beforeCallerSensitive();
	$init($Long);
	$init($Double);
	$init($Boolean);
	$assignStatic(NumericValueExp::oldSerialPersistentFields, $new($ObjectStreamFieldArray, {
		$$new($ObjectStreamField, "longVal"_s, $Long::TYPE),
		$$new($ObjectStreamField, "doubleVal"_s, $Double::TYPE),
		$$new($ObjectStreamField, "valIsLong"_s, $Boolean::TYPE)
	}));
	$load($Number);
	$assignStatic(NumericValueExp::newSerialPersistentFields, $new($ObjectStreamFieldArray, {$$new($ObjectStreamField, "val"_s, $Number::class$)}));
	NumericValueExp::compat = false;
	{
		try {
			$var($GetPropertyAction, act, $new($GetPropertyAction, "jmx.serial.form"_s));
			$var($String, form, $cast($String, $AccessController::doPrivileged(static_cast<$PrivilegedAction*>(act))));
			NumericValueExp::compat = (form != nullptr && form->equals("1.0"_s));
		} catch ($Exception& e) {
		}
		if (NumericValueExp::compat) {
			$assignStatic(NumericValueExp::serialPersistentFields, NumericValueExp::oldSerialPersistentFields);
			NumericValueExp::serialVersionUID = NumericValueExp::oldSerialVersionUID;
		} else {
			$assignStatic(NumericValueExp::serialPersistentFields, NumericValueExp::newSerialPersistentFields);
			NumericValueExp::serialVersionUID = NumericValueExp::newSerialVersionUID;
		}
	}
}

NumericValueExp::NumericValueExp() {
}

$Class* NumericValueExp::load$($String* name, bool initialize) {
	$loadClass(NumericValueExp, name, initialize, &_NumericValueExp_ClassInfo_, clinit$NumericValueExp, allocate$NumericValueExp);
	return class$;
}

$Class* NumericValueExp::class$ = nullptr;

	} // management
} // javax
#include <javax/management/StringValueExp.h>

#include <java/lang/CharSequence.h>
#include <javax/management/MBeanServer.h>
#include <javax/management/ObjectName.h>
#include <javax/management/ValueExp.h>
#include <jcpp.h>

using $CharSequence = ::java::lang::CharSequence;
using $ClassInfo = ::java::lang::ClassInfo;
using $CompoundAttribute = ::java::lang::CompoundAttribute;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $MBeanServer = ::javax::management::MBeanServer;
using $ObjectName = ::javax::management::ObjectName;
using $ValueExp = ::javax::management::ValueExp;

namespace javax {
	namespace management {

$CompoundAttribute _StringValueExp_MethodAnnotations_setMBeanServer4[] = {
	{"Ljava/lang/Deprecated;", nullptr},
	{}
};

$FieldInfo _StringValueExp_FieldInfo_[] = {
	{"serialVersionUID", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(StringValueExp, serialVersionUID)},
	{"val", "Ljava/lang/String;", nullptr, $PRIVATE, $field(StringValueExp, val)},
	{}
};

$MethodInfo _StringValueExp_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(StringValueExp::*)()>(&StringValueExp::init$))},
	{"<init>", "(Ljava/lang/String;)V", nullptr, $PUBLIC, $method(static_cast<void(StringValueExp::*)($String*)>(&StringValueExp::init$))},
	{"apply", "(Ljavax/management/ObjectName;)Ljavax/management/ValueExp;", nullptr, $PUBLIC, nullptr, "javax.management.BadStringOperationException,javax.management.BadBinaryOpValueExpException,javax.management.BadAttributeValueExpException,javax.management.InvalidApplicationException"},
	{"getValue", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"setMBeanServer", "(Ljavax/management/MBeanServer;)V", nullptr, $PUBLIC | $DEPRECATED, nullptr, nullptr, nullptr, _StringValueExp_MethodAnnotations_setMBeanServer4},
	{"toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

$ClassInfo _StringValueExp_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"javax.management.StringValueExp",
	"java.lang.Object",
	"javax.management.ValueExp",
	_StringValueExp_FieldInfo_,
	_StringValueExp_MethodInfo_
};

$Object* allocate$StringValueExp($Class* clazz) {
	return $of($alloc(StringValueExp));
}

void StringValueExp::init$() {
}

void StringValueExp::init$($String* val) {
	$set(this, val, val);
}

$String* StringValueExp::getValue() {
	return this->val;
}

$String* StringValueExp::toString() {
	return $str({"\'"_s, $($nc(this->val)->replace(static_cast<$CharSequence*>("\'"_s), static_cast<$CharSequence*>("\'\'"_s))), "\'"_s});
}

void StringValueExp::setMBeanServer($MBeanServer* s) {
}

$ValueExp* StringValueExp::apply($ObjectName* name) {
	return this;
}

StringValueExp::StringValueExp() {
}

$Class* StringValueExp::load$($String* name, bool initialize) {
	$loadClass(StringValueExp, name, initialize, &_StringValueExp_ClassInfo_, allocate$StringValueExp);
	return class$;
}

$Class* StringValueExp::class$ = nullptr;

	} // management
} // javax
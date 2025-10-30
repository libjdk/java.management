#include <javax/management/ObjectName$Property.h>

#include <javax/management/ObjectName.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $ObjectName = ::javax::management::ObjectName;

namespace javax {
	namespace management {

$FieldInfo _ObjectName$Property_FieldInfo_[] = {
	{"_key_index", "I", nullptr, 0, $field(ObjectName$Property, _key_index)},
	{"_key_length", "I", nullptr, 0, $field(ObjectName$Property, _key_length)},
	{"_value_length", "I", nullptr, 0, $field(ObjectName$Property, _value_length)},
	{}
};

$MethodInfo _ObjectName$Property_MethodInfo_[] = {
	{"<init>", "(III)V", nullptr, 0, $method(static_cast<void(ObjectName$Property::*)(int32_t,int32_t,int32_t)>(&ObjectName$Property::init$))},
	{"getKeyString", "(Ljava/lang/String;)Ljava/lang/String;", nullptr, 0},
	{"getValueString", "(Ljava/lang/String;)Ljava/lang/String;", nullptr, 0},
	{"setKeyIndex", "(I)V", nullptr, 0},
	{}
};

$InnerClassInfo _ObjectName$Property_InnerClassesInfo_[] = {
	{"javax.management.ObjectName$Property", "javax.management.ObjectName", "Property", $PRIVATE | $STATIC},
	{}
};

$ClassInfo _ObjectName$Property_ClassInfo_ = {
	$ACC_SUPER,
	"javax.management.ObjectName$Property",
	"java.lang.Object",
	nullptr,
	_ObjectName$Property_FieldInfo_,
	_ObjectName$Property_MethodInfo_,
	nullptr,
	nullptr,
	_ObjectName$Property_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"javax.management.ObjectName"
};

$Object* allocate$ObjectName$Property($Class* clazz) {
	return $of($alloc(ObjectName$Property));
}

void ObjectName$Property::init$(int32_t key_index, int32_t key_length, int32_t value_length) {
	this->_key_index = key_index;
	this->_key_length = key_length;
	this->_value_length = value_length;
}

void ObjectName$Property::setKeyIndex(int32_t key_index) {
	this->_key_index = key_index;
}

$String* ObjectName$Property::getKeyString($String* name) {
	return $nc(name)->substring(this->_key_index, this->_key_index + this->_key_length);
}

$String* ObjectName$Property::getValueString($String* name) {
	int32_t in_begin = this->_key_index + this->_key_length + 1;
	int32_t out_end = in_begin + this->_value_length;
	return $nc(name)->substring(in_begin, out_end);
}

ObjectName$Property::ObjectName$Property() {
}

$Class* ObjectName$Property::load$($String* name, bool initialize) {
	$loadClass(ObjectName$Property, name, initialize, &_ObjectName$Property_ClassInfo_, allocate$ObjectName$Property);
	return class$;
}

$Class* ObjectName$Property::class$ = nullptr;

	} // management
} // javax
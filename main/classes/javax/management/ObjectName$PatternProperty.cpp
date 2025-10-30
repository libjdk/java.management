#include <javax/management/ObjectName$PatternProperty.h>

#include <javax/management/ObjectName$Property.h>
#include <javax/management/ObjectName.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $ObjectName = ::javax::management::ObjectName;
using $ObjectName$Property = ::javax::management::ObjectName$Property;

namespace javax {
	namespace management {

$MethodInfo _ObjectName$PatternProperty_MethodInfo_[] = {
	{"<init>", "(III)V", nullptr, 0, $method(static_cast<void(ObjectName$PatternProperty::*)(int32_t,int32_t,int32_t)>(&ObjectName$PatternProperty::init$))},
	{}
};

$InnerClassInfo _ObjectName$PatternProperty_InnerClassesInfo_[] = {
	{"javax.management.ObjectName$PatternProperty", "javax.management.ObjectName", "PatternProperty", $PRIVATE | $STATIC},
	{"javax.management.ObjectName$Property", "javax.management.ObjectName", "Property", $PRIVATE | $STATIC},
	{}
};

$ClassInfo _ObjectName$PatternProperty_ClassInfo_ = {
	$ACC_SUPER,
	"javax.management.ObjectName$PatternProperty",
	"javax.management.ObjectName$Property",
	nullptr,
	nullptr,
	_ObjectName$PatternProperty_MethodInfo_,
	nullptr,
	nullptr,
	_ObjectName$PatternProperty_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"javax.management.ObjectName"
};

$Object* allocate$ObjectName$PatternProperty($Class* clazz) {
	return $of($alloc(ObjectName$PatternProperty));
}

void ObjectName$PatternProperty::init$(int32_t key_index, int32_t key_length, int32_t value_length) {
	$ObjectName$Property::init$(key_index, key_length, value_length);
}

ObjectName$PatternProperty::ObjectName$PatternProperty() {
}

$Class* ObjectName$PatternProperty::load$($String* name, bool initialize) {
	$loadClass(ObjectName$PatternProperty, name, initialize, &_ObjectName$PatternProperty_ClassInfo_, allocate$ObjectName$PatternProperty);
	return class$;
}

$Class* ObjectName$PatternProperty::class$ = nullptr;

	} // management
} // javax
#include <javax/management/DynamicMBean.h>

#include <javax/management/Attribute.h>
#include <javax/management/AttributeList.h>
#include <javax/management/MBeanInfo.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Attribute = ::javax::management::Attribute;
using $AttributeList = ::javax::management::AttributeList;
using $MBeanInfo = ::javax::management::MBeanInfo;

namespace javax {
	namespace management {

$MethodInfo _DynamicMBean_MethodInfo_[] = {
	{"getAttribute", "(Ljava/lang/String;)Ljava/lang/Object;", nullptr, $PUBLIC | $ABSTRACT, nullptr, "javax.management.AttributeNotFoundException,javax.management.MBeanException,javax.management.ReflectionException"},
	{"getAttributes", "([Ljava/lang/String;)Ljavax/management/AttributeList;", nullptr, $PUBLIC | $ABSTRACT},
	{"getMBeanInfo", "()Ljavax/management/MBeanInfo;", nullptr, $PUBLIC | $ABSTRACT},
	{"invoke", "(Ljava/lang/String;[Ljava/lang/Object;[Ljava/lang/String;)Ljava/lang/Object;", nullptr, $PUBLIC | $ABSTRACT, nullptr, "javax.management.MBeanException,javax.management.ReflectionException"},
	{"setAttribute", "(Ljavax/management/Attribute;)V", nullptr, $PUBLIC | $ABSTRACT, nullptr, "javax.management.AttributeNotFoundException,javax.management.InvalidAttributeValueException,javax.management.MBeanException,javax.management.ReflectionException"},
	{"setAttributes", "(Ljavax/management/AttributeList;)Ljavax/management/AttributeList;", nullptr, $PUBLIC | $ABSTRACT},
	{}
};

$ClassInfo _DynamicMBean_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT,
	"javax.management.DynamicMBean",
	nullptr,
	nullptr,
	nullptr,
	_DynamicMBean_MethodInfo_
};

$Object* allocate$DynamicMBean($Class* clazz) {
	return $of($alloc(DynamicMBean));
}

$Class* DynamicMBean::load$($String* name, bool initialize) {
	$loadClass(DynamicMBean, name, initialize, &_DynamicMBean_ClassInfo_, allocate$DynamicMBean);
	return class$;
}

$Class* DynamicMBean::class$ = nullptr;

	} // management
} // javax
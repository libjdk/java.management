#include <javax/management/modelmbean/ModelMBeanInfo.h>

#include <javax/management/Descriptor.h>
#include <javax/management/MBeanAttributeInfo.h>
#include <javax/management/MBeanConstructorInfo.h>
#include <javax/management/MBeanNotificationInfo.h>
#include <javax/management/MBeanOperationInfo.h>
#include <javax/management/modelmbean/ModelMBeanAttributeInfo.h>
#include <javax/management/modelmbean/ModelMBeanNotificationInfo.h>
#include <javax/management/modelmbean/ModelMBeanOperationInfo.h>
#include <jcpp.h>

using $DescriptorArray = $Array<::javax::management::Descriptor>;
using $MBeanAttributeInfoArray = $Array<::javax::management::MBeanAttributeInfo>;
using $MBeanConstructorInfoArray = $Array<::javax::management::MBeanConstructorInfo>;
using $MBeanNotificationInfoArray = $Array<::javax::management::MBeanNotificationInfo>;
using $MBeanOperationInfoArray = $Array<::javax::management::MBeanOperationInfo>;
using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Descriptor = ::javax::management::Descriptor;
using $ModelMBeanAttributeInfo = ::javax::management::modelmbean::ModelMBeanAttributeInfo;
using $ModelMBeanNotificationInfo = ::javax::management::modelmbean::ModelMBeanNotificationInfo;
using $ModelMBeanOperationInfo = ::javax::management::modelmbean::ModelMBeanOperationInfo;

namespace javax {
	namespace management {
		namespace modelmbean {

$MethodInfo _ModelMBeanInfo_MethodInfo_[] = {
	{"clone", "()Ljava/lang/Object;", nullptr, $PUBLIC | $ABSTRACT},
	{"getAttribute", "(Ljava/lang/String;)Ljavax/management/modelmbean/ModelMBeanAttributeInfo;", nullptr, $PUBLIC | $ABSTRACT, nullptr, "javax.management.MBeanException,javax.management.RuntimeOperationsException"},
	{"getAttributes", "()[Ljavax/management/MBeanAttributeInfo;", nullptr, $PUBLIC | $ABSTRACT},
	{"getClassName", "()Ljava/lang/String;", nullptr, $PUBLIC | $ABSTRACT},
	{"getConstructors", "()[Ljavax/management/MBeanConstructorInfo;", nullptr, $PUBLIC | $ABSTRACT},
	{"getDescription", "()Ljava/lang/String;", nullptr, $PUBLIC | $ABSTRACT},
	{"getDescriptor", "(Ljava/lang/String;Ljava/lang/String;)Ljavax/management/Descriptor;", nullptr, $PUBLIC | $ABSTRACT, nullptr, "javax.management.MBeanException,javax.management.RuntimeOperationsException"},
	{"getDescriptors", "(Ljava/lang/String;)[Ljavax/management/Descriptor;", nullptr, $PUBLIC | $ABSTRACT, nullptr, "javax.management.MBeanException,javax.management.RuntimeOperationsException"},
	{"getMBeanDescriptor", "()Ljavax/management/Descriptor;", nullptr, $PUBLIC | $ABSTRACT, nullptr, "javax.management.MBeanException,javax.management.RuntimeOperationsException"},
	{"getNotification", "(Ljava/lang/String;)Ljavax/management/modelmbean/ModelMBeanNotificationInfo;", nullptr, $PUBLIC | $ABSTRACT, nullptr, "javax.management.MBeanException,javax.management.RuntimeOperationsException"},
	{"getNotifications", "()[Ljavax/management/MBeanNotificationInfo;", nullptr, $PUBLIC | $ABSTRACT},
	{"getOperation", "(Ljava/lang/String;)Ljavax/management/modelmbean/ModelMBeanOperationInfo;", nullptr, $PUBLIC | $ABSTRACT, nullptr, "javax.management.MBeanException,javax.management.RuntimeOperationsException"},
	{"getOperations", "()[Ljavax/management/MBeanOperationInfo;", nullptr, $PUBLIC | $ABSTRACT},
	{"setDescriptor", "(Ljavax/management/Descriptor;Ljava/lang/String;)V", nullptr, $PUBLIC | $ABSTRACT, nullptr, "javax.management.MBeanException,javax.management.RuntimeOperationsException"},
	{"setDescriptors", "([Ljavax/management/Descriptor;)V", nullptr, $PUBLIC | $ABSTRACT, nullptr, "javax.management.MBeanException,javax.management.RuntimeOperationsException"},
	{"setMBeanDescriptor", "(Ljavax/management/Descriptor;)V", nullptr, $PUBLIC | $ABSTRACT, nullptr, "javax.management.MBeanException,javax.management.RuntimeOperationsException"},
	{}
};

$ClassInfo _ModelMBeanInfo_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT,
	"javax.management.modelmbean.ModelMBeanInfo",
	nullptr,
	nullptr,
	nullptr,
	_ModelMBeanInfo_MethodInfo_
};

$Object* allocate$ModelMBeanInfo($Class* clazz) {
	return $of($alloc(ModelMBeanInfo));
}

$Object* ModelMBeanInfo::clone() {
	 return this->$Object::clone();
}

$Class* ModelMBeanInfo::load$($String* name, bool initialize) {
	$loadClass(ModelMBeanInfo, name, initialize, &_ModelMBeanInfo_ClassInfo_, allocate$ModelMBeanInfo);
	return class$;
}

$Class* ModelMBeanInfo::class$ = nullptr;

		} // modelmbean
	} // management
} // javax
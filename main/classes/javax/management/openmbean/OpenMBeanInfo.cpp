#include <javax/management/openmbean/OpenMBeanInfo.h>

#include <javax/management/MBeanAttributeInfo.h>
#include <javax/management/MBeanConstructorInfo.h>
#include <javax/management/MBeanNotificationInfo.h>
#include <javax/management/MBeanOperationInfo.h>
#include <jcpp.h>

using $MBeanAttributeInfoArray = $Array<::javax::management::MBeanAttributeInfo>;
using $MBeanConstructorInfoArray = $Array<::javax::management::MBeanConstructorInfo>;
using $MBeanNotificationInfoArray = $Array<::javax::management::MBeanNotificationInfo>;
using $MBeanOperationInfoArray = $Array<::javax::management::MBeanOperationInfo>;
using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace javax {
	namespace management {
		namespace openmbean {

$MethodInfo _OpenMBeanInfo_MethodInfo_[] = {
	{"equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC | $ABSTRACT},
	{"getAttributes", "()[Ljavax/management/MBeanAttributeInfo;", nullptr, $PUBLIC | $ABSTRACT},
	{"getClassName", "()Ljava/lang/String;", nullptr, $PUBLIC | $ABSTRACT},
	{"getConstructors", "()[Ljavax/management/MBeanConstructorInfo;", nullptr, $PUBLIC | $ABSTRACT},
	{"getDescription", "()Ljava/lang/String;", nullptr, $PUBLIC | $ABSTRACT},
	{"getNotifications", "()[Ljavax/management/MBeanNotificationInfo;", nullptr, $PUBLIC | $ABSTRACT},
	{"getOperations", "()[Ljavax/management/MBeanOperationInfo;", nullptr, $PUBLIC | $ABSTRACT},
	{"hashCode", "()I", nullptr, $PUBLIC | $ABSTRACT},
	{"toString", "()Ljava/lang/String;", nullptr, $PUBLIC | $ABSTRACT},
	{}
};

$ClassInfo _OpenMBeanInfo_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT,
	"javax.management.openmbean.OpenMBeanInfo",
	nullptr,
	nullptr,
	nullptr,
	_OpenMBeanInfo_MethodInfo_
};

$Object* allocate$OpenMBeanInfo($Class* clazz) {
	return $of($alloc(OpenMBeanInfo));
}

bool OpenMBeanInfo::equals(Object$* obj) {
	 return this->$Object::equals(obj);
}

int32_t OpenMBeanInfo::hashCode() {
	 return this->$Object::hashCode();
}

$String* OpenMBeanInfo::toString() {
	 return this->$Object::toString();
}

$Class* OpenMBeanInfo::load$($String* name, bool initialize) {
	$loadClass(OpenMBeanInfo, name, initialize, &_OpenMBeanInfo_ClassInfo_, allocate$OpenMBeanInfo);
	return class$;
}

$Class* OpenMBeanInfo::class$ = nullptr;

		} // openmbean
	} // management
} // javax
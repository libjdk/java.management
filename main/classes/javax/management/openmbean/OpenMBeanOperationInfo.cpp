#include <javax/management/openmbean/OpenMBeanOperationInfo.h>

#include <javax/management/MBeanParameterInfo.h>
#include <javax/management/openmbean/OpenType.h>
#include <jcpp.h>

using $MBeanParameterInfoArray = $Array<::javax::management::MBeanParameterInfo>;
using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $OpenType = ::javax::management::openmbean::OpenType;

namespace javax {
	namespace management {
		namespace openmbean {

$MethodInfo _OpenMBeanOperationInfo_MethodInfo_[] = {
	{"equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC | $ABSTRACT},
	{"getDescription", "()Ljava/lang/String;", nullptr, $PUBLIC | $ABSTRACT},
	{"getImpact", "()I", nullptr, $PUBLIC | $ABSTRACT},
	{"getName", "()Ljava/lang/String;", nullptr, $PUBLIC | $ABSTRACT},
	{"getReturnOpenType", "()Ljavax/management/openmbean/OpenType;", "()Ljavax/management/openmbean/OpenType<*>;", $PUBLIC | $ABSTRACT},
	{"getReturnType", "()Ljava/lang/String;", nullptr, $PUBLIC | $ABSTRACT},
	{"getSignature", "()[Ljavax/management/MBeanParameterInfo;", nullptr, $PUBLIC | $ABSTRACT},
	{"hashCode", "()I", nullptr, $PUBLIC | $ABSTRACT},
	{"toString", "()Ljava/lang/String;", nullptr, $PUBLIC | $ABSTRACT},
	{}
};

$ClassInfo _OpenMBeanOperationInfo_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT,
	"javax.management.openmbean.OpenMBeanOperationInfo",
	nullptr,
	nullptr,
	nullptr,
	_OpenMBeanOperationInfo_MethodInfo_
};

$Object* allocate$OpenMBeanOperationInfo($Class* clazz) {
	return $of($alloc(OpenMBeanOperationInfo));
}

bool OpenMBeanOperationInfo::equals(Object$* obj) {
	 return this->$Object::equals(obj);
}

int32_t OpenMBeanOperationInfo::hashCode() {
	 return this->$Object::hashCode();
}

$String* OpenMBeanOperationInfo::toString() {
	 return this->$Object::toString();
}

$Class* OpenMBeanOperationInfo::load$($String* name, bool initialize) {
	$loadClass(OpenMBeanOperationInfo, name, initialize, &_OpenMBeanOperationInfo_ClassInfo_, allocate$OpenMBeanOperationInfo);
	return class$;
}

$Class* OpenMBeanOperationInfo::class$ = nullptr;

		} // openmbean
	} // management
} // javax
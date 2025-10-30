#include <javax/management/openmbean/OpenMBeanConstructorInfo.h>

#include <javax/management/MBeanParameterInfo.h>
#include <jcpp.h>

using $MBeanParameterInfoArray = $Array<::javax::management::MBeanParameterInfo>;
using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace javax {
	namespace management {
		namespace openmbean {

$MethodInfo _OpenMBeanConstructorInfo_MethodInfo_[] = {
	{"equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC | $ABSTRACT},
	{"getDescription", "()Ljava/lang/String;", nullptr, $PUBLIC | $ABSTRACT},
	{"getName", "()Ljava/lang/String;", nullptr, $PUBLIC | $ABSTRACT},
	{"getSignature", "()[Ljavax/management/MBeanParameterInfo;", nullptr, $PUBLIC | $ABSTRACT},
	{"hashCode", "()I", nullptr, $PUBLIC | $ABSTRACT},
	{"toString", "()Ljava/lang/String;", nullptr, $PUBLIC | $ABSTRACT},
	{}
};

$ClassInfo _OpenMBeanConstructorInfo_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT,
	"javax.management.openmbean.OpenMBeanConstructorInfo",
	nullptr,
	nullptr,
	nullptr,
	_OpenMBeanConstructorInfo_MethodInfo_
};

$Object* allocate$OpenMBeanConstructorInfo($Class* clazz) {
	return $of($alloc(OpenMBeanConstructorInfo));
}

bool OpenMBeanConstructorInfo::equals(Object$* obj) {
	 return this->$Object::equals(obj);
}

int32_t OpenMBeanConstructorInfo::hashCode() {
	 return this->$Object::hashCode();
}

$String* OpenMBeanConstructorInfo::toString() {
	 return this->$Object::toString();
}

$Class* OpenMBeanConstructorInfo::load$($String* name, bool initialize) {
	$loadClass(OpenMBeanConstructorInfo, name, initialize, &_OpenMBeanConstructorInfo_ClassInfo_, allocate$OpenMBeanConstructorInfo);
	return class$;
}

$Class* OpenMBeanConstructorInfo::class$ = nullptr;

		} // openmbean
	} // management
} // javax
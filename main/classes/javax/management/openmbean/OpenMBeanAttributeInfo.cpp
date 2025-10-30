#include <javax/management/openmbean/OpenMBeanAttributeInfo.h>

#include <javax/management/openmbean/OpenMBeanParameterInfo.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $OpenMBeanParameterInfo = ::javax::management::openmbean::OpenMBeanParameterInfo;

namespace javax {
	namespace management {
		namespace openmbean {

$MethodInfo _OpenMBeanAttributeInfo_MethodInfo_[] = {
	{"equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC | $ABSTRACT},
	{"hashCode", "()I", nullptr, $PUBLIC | $ABSTRACT},
	{"isIs", "()Z", nullptr, $PUBLIC | $ABSTRACT},
	{"isReadable", "()Z", nullptr, $PUBLIC | $ABSTRACT},
	{"isWritable", "()Z", nullptr, $PUBLIC | $ABSTRACT},
	{"toString", "()Ljava/lang/String;", nullptr, $PUBLIC | $ABSTRACT},
	{}
};

$ClassInfo _OpenMBeanAttributeInfo_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT,
	"javax.management.openmbean.OpenMBeanAttributeInfo",
	nullptr,
	"javax.management.openmbean.OpenMBeanParameterInfo",
	nullptr,
	_OpenMBeanAttributeInfo_MethodInfo_
};

$Object* allocate$OpenMBeanAttributeInfo($Class* clazz) {
	return $of($alloc(OpenMBeanAttributeInfo));
}

bool OpenMBeanAttributeInfo::equals(Object$* obj) {
	 return this->$OpenMBeanParameterInfo::equals(obj);
}

int32_t OpenMBeanAttributeInfo::hashCode() {
	 return this->$OpenMBeanParameterInfo::hashCode();
}

$String* OpenMBeanAttributeInfo::toString() {
	 return this->$OpenMBeanParameterInfo::toString();
}

$Class* OpenMBeanAttributeInfo::load$($String* name, bool initialize) {
	$loadClass(OpenMBeanAttributeInfo, name, initialize, &_OpenMBeanAttributeInfo_ClassInfo_, allocate$OpenMBeanAttributeInfo);
	return class$;
}

$Class* OpenMBeanAttributeInfo::class$ = nullptr;

		} // openmbean
	} // management
} // javax
#include <javax/management/DescriptorAccess.h>

#include <javax/management/Descriptor.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Descriptor = ::javax::management::Descriptor;
using $DescriptorRead = ::javax::management::DescriptorRead;

namespace javax {
	namespace management {

$MethodInfo _DescriptorAccess_MethodInfo_[] = {
	{"setDescriptor", "(Ljavax/management/Descriptor;)V", nullptr, $PUBLIC | $ABSTRACT},
	{}
};

$ClassInfo _DescriptorAccess_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT,
	"javax.management.DescriptorAccess",
	nullptr,
	"javax.management.DescriptorRead",
	nullptr,
	_DescriptorAccess_MethodInfo_
};

$Object* allocate$DescriptorAccess($Class* clazz) {
	return $of($alloc(DescriptorAccess));
}

$Class* DescriptorAccess::load$($String* name, bool initialize) {
	$loadClass(DescriptorAccess, name, initialize, &_DescriptorAccess_ClassInfo_, allocate$DescriptorAccess);
	return class$;
}

$Class* DescriptorAccess::class$ = nullptr;

	} // management
} // javax
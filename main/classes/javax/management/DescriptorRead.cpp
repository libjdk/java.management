#include <javax/management/DescriptorRead.h>

#include <javax/management/Descriptor.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Descriptor = ::javax::management::Descriptor;

namespace javax {
	namespace management {

$MethodInfo _DescriptorRead_MethodInfo_[] = {
	{"getDescriptor", "()Ljavax/management/Descriptor;", nullptr, $PUBLIC | $ABSTRACT},
	{}
};

$ClassInfo _DescriptorRead_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT,
	"javax.management.DescriptorRead",
	nullptr,
	nullptr,
	nullptr,
	_DescriptorRead_MethodInfo_
};

$Object* allocate$DescriptorRead($Class* clazz) {
	return $of($alloc(DescriptorRead));
}

$Class* DescriptorRead::load$($String* name, bool initialize) {
	$loadClass(DescriptorRead, name, initialize, &_DescriptorRead_ClassInfo_, allocate$DescriptorRead);
	return class$;
}

$Class* DescriptorRead::class$ = nullptr;

	} // management
} // javax
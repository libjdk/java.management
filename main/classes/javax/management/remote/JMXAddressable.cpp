#include <javax/management/remote/JMXAddressable.h>

#include <javax/management/remote/JMXServiceURL.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $JMXServiceURL = ::javax::management::remote::JMXServiceURL;

namespace javax {
	namespace management {
		namespace remote {

$MethodInfo _JMXAddressable_MethodInfo_[] = {
	{"getAddress", "()Ljavax/management/remote/JMXServiceURL;", nullptr, $PUBLIC | $ABSTRACT},
	{}
};

$ClassInfo _JMXAddressable_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT,
	"javax.management.remote.JMXAddressable",
	nullptr,
	nullptr,
	nullptr,
	_JMXAddressable_MethodInfo_
};

$Object* allocate$JMXAddressable($Class* clazz) {
	return $of($alloc(JMXAddressable));
}

$Class* JMXAddressable::load$($String* name, bool initialize) {
	$loadClass(JMXAddressable, name, initialize, &_JMXAddressable_ClassInfo_, allocate$JMXAddressable);
	return class$;
}

$Class* JMXAddressable::class$ = nullptr;

		} // remote
	} // management
} // javax
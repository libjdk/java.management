#include <javax/management/remote/JMXAuthenticator.h>

#include <javax/security/auth/Subject.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Subject = ::javax::security::auth::Subject;

namespace javax {
	namespace management {
		namespace remote {

$MethodInfo _JMXAuthenticator_MethodInfo_[] = {
	{"authenticate", "(Ljava/lang/Object;)Ljavax/security/auth/Subject;", nullptr, $PUBLIC | $ABSTRACT},
	{}
};

$ClassInfo _JMXAuthenticator_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT,
	"javax.management.remote.JMXAuthenticator",
	nullptr,
	nullptr,
	nullptr,
	_JMXAuthenticator_MethodInfo_
};

$Object* allocate$JMXAuthenticator($Class* clazz) {
	return $of($alloc(JMXAuthenticator));
}

$Class* JMXAuthenticator::load$($String* name, bool initialize) {
	$loadClass(JMXAuthenticator, name, initialize, &_JMXAuthenticator_ClassInfo_, allocate$JMXAuthenticator);
	return class$;
}

$Class* JMXAuthenticator::class$ = nullptr;

		} // remote
	} // management
} // javax
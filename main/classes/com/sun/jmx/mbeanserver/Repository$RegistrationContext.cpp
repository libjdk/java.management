#include <com/sun/jmx/mbeanserver/Repository$RegistrationContext.h>

#include <com/sun/jmx/mbeanserver/Repository.h>
#include <jcpp.h>

using $Repository = ::com::sun::jmx::mbeanserver::Repository;
using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace com {
	namespace sun {
		namespace jmx {
			namespace mbeanserver {

$MethodInfo _Repository$RegistrationContext_MethodInfo_[] = {
	{"registering", "()V", nullptr, $PUBLIC | $ABSTRACT},
	{"unregistered", "()V", nullptr, $PUBLIC | $ABSTRACT},
	{}
};

$InnerClassInfo _Repository$RegistrationContext_InnerClassesInfo_[] = {
	{"com.sun.jmx.mbeanserver.Repository$RegistrationContext", "com.sun.jmx.mbeanserver.Repository", "RegistrationContext", $PUBLIC | $STATIC | $INTERFACE | $ABSTRACT},
	{}
};

$ClassInfo _Repository$RegistrationContext_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT,
	"com.sun.jmx.mbeanserver.Repository$RegistrationContext",
	nullptr,
	nullptr,
	nullptr,
	_Repository$RegistrationContext_MethodInfo_,
	nullptr,
	nullptr,
	_Repository$RegistrationContext_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.jmx.mbeanserver.Repository"
};

$Object* allocate$Repository$RegistrationContext($Class* clazz) {
	return $of($alloc(Repository$RegistrationContext));
}

$Class* Repository$RegistrationContext::load$($String* name, bool initialize) {
	$loadClass(Repository$RegistrationContext, name, initialize, &_Repository$RegistrationContext_ClassInfo_, allocate$Repository$RegistrationContext);
	return class$;
}

$Class* Repository$RegistrationContext::class$ = nullptr;

			} // mbeanserver
		} // jmx
	} // sun
} // com
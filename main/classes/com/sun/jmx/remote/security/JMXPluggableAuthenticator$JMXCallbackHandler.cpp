#include <com/sun/jmx/remote/security/JMXPluggableAuthenticator$JMXCallbackHandler.h>

#include <com/sun/jmx/remote/security/JMXPluggableAuthenticator.h>
#include <javax/security/auth/callback/Callback.h>
#include <javax/security/auth/callback/NameCallback.h>
#include <javax/security/auth/callback/PasswordCallback.h>
#include <javax/security/auth/callback/UnsupportedCallbackException.h>
#include <jcpp.h>

using $CallbackArray = $Array<::javax::security::auth::callback::Callback>;
using $JMXPluggableAuthenticator = ::com::sun::jmx::remote::security::JMXPluggableAuthenticator;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Callback = ::javax::security::auth::callback::Callback;
using $CallbackHandler = ::javax::security::auth::callback::CallbackHandler;
using $NameCallback = ::javax::security::auth::callback::NameCallback;
using $PasswordCallback = ::javax::security::auth::callback::PasswordCallback;
using $UnsupportedCallbackException = ::javax::security::auth::callback::UnsupportedCallbackException;

namespace com {
	namespace sun {
		namespace jmx {
			namespace remote {
				namespace security {

$FieldInfo _JMXPluggableAuthenticator$JMXCallbackHandler_FieldInfo_[] = {
	{"this$0", "Lcom/sun/jmx/remote/security/JMXPluggableAuthenticator;", nullptr, $FINAL | $SYNTHETIC, $field(JMXPluggableAuthenticator$JMXCallbackHandler, this$0)},
	{}
};

$MethodInfo _JMXPluggableAuthenticator$JMXCallbackHandler_MethodInfo_[] = {
	{"<init>", "(Lcom/sun/jmx/remote/security/JMXPluggableAuthenticator;)V", nullptr, $PRIVATE, $method(static_cast<void(JMXPluggableAuthenticator$JMXCallbackHandler::*)($JMXPluggableAuthenticator*)>(&JMXPluggableAuthenticator$JMXCallbackHandler::init$))},
	{"handle", "([Ljavax/security/auth/callback/Callback;)V", nullptr, $PUBLIC, nullptr, "java.io.IOException,javax.security.auth.callback.UnsupportedCallbackException"},
	{}
};

$InnerClassInfo _JMXPluggableAuthenticator$JMXCallbackHandler_InnerClassesInfo_[] = {
	{"com.sun.jmx.remote.security.JMXPluggableAuthenticator$JMXCallbackHandler", "com.sun.jmx.remote.security.JMXPluggableAuthenticator", "JMXCallbackHandler", $PRIVATE | $FINAL},
	{}
};

$ClassInfo _JMXPluggableAuthenticator$JMXCallbackHandler_ClassInfo_ = {
	$FINAL | $ACC_SUPER,
	"com.sun.jmx.remote.security.JMXPluggableAuthenticator$JMXCallbackHandler",
	"java.lang.Object",
	"javax.security.auth.callback.CallbackHandler",
	_JMXPluggableAuthenticator$JMXCallbackHandler_FieldInfo_,
	_JMXPluggableAuthenticator$JMXCallbackHandler_MethodInfo_,
	nullptr,
	nullptr,
	_JMXPluggableAuthenticator$JMXCallbackHandler_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.jmx.remote.security.JMXPluggableAuthenticator"
};

$Object* allocate$JMXPluggableAuthenticator$JMXCallbackHandler($Class* clazz) {
	return $of($alloc(JMXPluggableAuthenticator$JMXCallbackHandler));
}

void JMXPluggableAuthenticator$JMXCallbackHandler::init$($JMXPluggableAuthenticator* this$0) {
	$set(this, this$0, this$0);
}

void JMXPluggableAuthenticator$JMXCallbackHandler::handle($CallbackArray* callbacks) {
	$useLocalCurrentObjectStackCache();
	for (int32_t i = 0; i < $nc(callbacks)->length; ++i) {
		if ($instanceOf($NameCallback, callbacks->get(i))) {
			$nc(($cast($NameCallback, callbacks->get(i))))->setName(this->this$0->username);
		} else if ($instanceOf($PasswordCallback, callbacks->get(i))) {
			$nc(($cast($PasswordCallback, callbacks->get(i))))->setPassword($($nc(this->this$0->password)->toCharArray()));
		} else {
			$throwNew($UnsupportedCallbackException, callbacks->get(i), "Unrecognized Callback"_s);
		}
	}
}

JMXPluggableAuthenticator$JMXCallbackHandler::JMXPluggableAuthenticator$JMXCallbackHandler() {
}

$Class* JMXPluggableAuthenticator$JMXCallbackHandler::load$($String* name, bool initialize) {
	$loadClass(JMXPluggableAuthenticator$JMXCallbackHandler, name, initialize, &_JMXPluggableAuthenticator$JMXCallbackHandler_ClassInfo_, allocate$JMXPluggableAuthenticator$JMXCallbackHandler);
	return class$;
}

$Class* JMXPluggableAuthenticator$JMXCallbackHandler::class$ = nullptr;

				} // security
			} // remote
		} // jmx
	} // sun
} // com
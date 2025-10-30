#include <com/sun/jmx/remote/security/JMXPluggableAuthenticator.h>

#include <com/sun/jmx/remote/security/JMXPluggableAuthenticator$1.h>
#include <com/sun/jmx/remote/security/JMXPluggableAuthenticator$2.h>
#include <com/sun/jmx/remote/security/JMXPluggableAuthenticator$JMXCallbackHandler.h>
#include <com/sun/jmx/remote/util/ClassLogger.h>
#include <com/sun/jmx/remote/util/EnvHelp.h>
#include <java/lang/SecurityException.h>
#include <java/lang/SecurityManager.h>
#include <java/security/AccessController.h>
#include <java/security/BasicPermission.h>
#include <java/security/GeneralSecurityException.h>
#include <java/security/Permission.h>
#include <java/security/PrivilegedAction.h>
#include <java/security/PrivilegedActionException.h>
#include <java/security/PrivilegedExceptionAction.h>
#include <java/util/Map.h>
#include <javax/security/auth/AuthPermission.h>
#include <javax/security/auth/Subject.h>
#include <javax/security/auth/callback/CallbackHandler.h>
#include <javax/security/auth/login/LoginContext.h>
#include <javax/security/auth/login/LoginException.h>
#include <jcpp.h>

#undef HASH_PASSWORDS
#undef LOGIN_CONFIG_NAME
#undef LOGIN_CONFIG_PROP
#undef PASSWORD_FILE_PROP

using $JMXPluggableAuthenticator$1 = ::com::sun::jmx::remote::security::JMXPluggableAuthenticator$1;
using $JMXPluggableAuthenticator$2 = ::com::sun::jmx::remote::security::JMXPluggableAuthenticator$2;
using $JMXPluggableAuthenticator$JMXCallbackHandler = ::com::sun::jmx::remote::security::JMXPluggableAuthenticator$JMXCallbackHandler;
using $ClassLogger = ::com::sun::jmx::remote::util::ClassLogger;
using $EnvHelp = ::com::sun::jmx::remote::util::EnvHelp;
using $ClassInfo = ::java::lang::ClassInfo;
using $Exception = ::java::lang::Exception;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $NullPointerException = ::java::lang::NullPointerException;
using $RuntimeException = ::java::lang::RuntimeException;
using $SecurityException = ::java::lang::SecurityException;
using $SecurityManager = ::java::lang::SecurityManager;
using $Void = ::java::lang::Void;
using $AccessController = ::java::security::AccessController;
using $BasicPermission = ::java::security::BasicPermission;
using $GeneralSecurityException = ::java::security::GeneralSecurityException;
using $Permission = ::java::security::Permission;
using $PrivilegedAction = ::java::security::PrivilegedAction;
using $PrivilegedActionException = ::java::security::PrivilegedActionException;
using $PrivilegedExceptionAction = ::java::security::PrivilegedExceptionAction;
using $Map = ::java::util::Map;
using $JMXAuthenticator = ::javax::management::remote::JMXAuthenticator;
using $AuthPermission = ::javax::security::auth::AuthPermission;
using $Subject = ::javax::security::auth::Subject;
using $CallbackHandler = ::javax::security::auth::callback::CallbackHandler;
using $LoginContext = ::javax::security::auth::login::LoginContext;
using $LoginException = ::javax::security::auth::login::LoginException;

namespace com {
	namespace sun {
		namespace jmx {
			namespace remote {
				namespace security {

$FieldInfo _JMXPluggableAuthenticator_FieldInfo_[] = {
	{"loginContext", "Ljavax/security/auth/login/LoginContext;", nullptr, $PRIVATE, $field(JMXPluggableAuthenticator, loginContext)},
	{"username", "Ljava/lang/String;", nullptr, $PRIVATE, $field(JMXPluggableAuthenticator, username)},
	{"password", "Ljava/lang/String;", nullptr, $PRIVATE, $field(JMXPluggableAuthenticator, password)},
	{"LOGIN_CONFIG_PROP", "Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(JMXPluggableAuthenticator, LOGIN_CONFIG_PROP)},
	{"LOGIN_CONFIG_NAME", "Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(JMXPluggableAuthenticator, LOGIN_CONFIG_NAME)},
	{"PASSWORD_FILE_PROP", "Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(JMXPluggableAuthenticator, PASSWORD_FILE_PROP)},
	{"HASH_PASSWORDS", "Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(JMXPluggableAuthenticator, HASH_PASSWORDS)},
	{"logger", "Lcom/sun/jmx/remote/util/ClassLogger;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(JMXPluggableAuthenticator, logger)},
	{}
};

$MethodInfo _JMXPluggableAuthenticator_MethodInfo_[] = {
	{"<init>", "(Ljava/util/Map;)V", "(Ljava/util/Map<**>;)V", $PUBLIC, $method(static_cast<void(JMXPluggableAuthenticator::*)($Map*)>(&JMXPluggableAuthenticator::init$))},
	{"authenticate", "(Ljava/lang/Object;)Ljavax/security/auth/Subject;", nullptr, $PUBLIC},
	{"authenticationFailure", "(Ljava/lang/String;Ljava/lang/String;)V", nullptr, $PRIVATE | $STATIC, $method(static_cast<void(*)($String*,$String*)>(&JMXPluggableAuthenticator::authenticationFailure)), "java.lang.SecurityException"},
	{"authenticationFailure", "(Ljava/lang/String;Ljava/lang/Exception;)V", nullptr, $PRIVATE | $STATIC, $method(static_cast<void(*)($String*,$Exception*)>(&JMXPluggableAuthenticator::authenticationFailure)), "java.lang.SecurityException"},
	{"logException", "(Ljava/lang/String;Ljava/lang/String;Ljava/lang/Exception;)V", nullptr, $PRIVATE | $STATIC, $method(static_cast<void(*)($String*,$String*,$Exception*)>(&JMXPluggableAuthenticator::logException))},
	{}
};

$InnerClassInfo _JMXPluggableAuthenticator_InnerClassesInfo_[] = {
	{"com.sun.jmx.remote.security.JMXPluggableAuthenticator$FileLoginConfig", "com.sun.jmx.remote.security.JMXPluggableAuthenticator", "FileLoginConfig", $PRIVATE | $STATIC},
	{"com.sun.jmx.remote.security.JMXPluggableAuthenticator$JMXCallbackHandler", "com.sun.jmx.remote.security.JMXPluggableAuthenticator", "JMXCallbackHandler", $PRIVATE | $FINAL},
	{"com.sun.jmx.remote.security.JMXPluggableAuthenticator$2", nullptr, nullptr, 0},
	{"com.sun.jmx.remote.security.JMXPluggableAuthenticator$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _JMXPluggableAuthenticator_ClassInfo_ = {
	$PUBLIC | $FINAL | $ACC_SUPER,
	"com.sun.jmx.remote.security.JMXPluggableAuthenticator",
	"java.lang.Object",
	"javax.management.remote.JMXAuthenticator",
	_JMXPluggableAuthenticator_FieldInfo_,
	_JMXPluggableAuthenticator_MethodInfo_,
	nullptr,
	nullptr,
	_JMXPluggableAuthenticator_InnerClassesInfo_,
	nullptr,
	nullptr,
	"com.sun.jmx.remote.security.JMXPluggableAuthenticator$FileLoginConfig,com.sun.jmx.remote.security.JMXPluggableAuthenticator$JMXCallbackHandler,com.sun.jmx.remote.security.JMXPluggableAuthenticator$2,com.sun.jmx.remote.security.JMXPluggableAuthenticator$1"
};

$Object* allocate$JMXPluggableAuthenticator($Class* clazz) {
	return $of($alloc(JMXPluggableAuthenticator));
}

$String* JMXPluggableAuthenticator::LOGIN_CONFIG_PROP = nullptr;
$String* JMXPluggableAuthenticator::LOGIN_CONFIG_NAME = nullptr;
$String* JMXPluggableAuthenticator::PASSWORD_FILE_PROP = nullptr;
$String* JMXPluggableAuthenticator::HASH_PASSWORDS = nullptr;
$ClassLogger* JMXPluggableAuthenticator::logger = nullptr;

void JMXPluggableAuthenticator::init$($Map* env) {
	$useLocalCurrentObjectStackCache();
	$beforeCallerSensitive();
	$var($String, loginConfigName, nullptr);
	$var($String, passwordFile, nullptr);
	$var($String, hashPasswords, nullptr);
	if (env != nullptr) {
		$assign(loginConfigName, $cast($String, env->get(JMXPluggableAuthenticator::LOGIN_CONFIG_PROP)));
		$assign(passwordFile, $cast($String, env->get(JMXPluggableAuthenticator::PASSWORD_FILE_PROP)));
		$assign(hashPasswords, $cast($String, env->get(JMXPluggableAuthenticator::HASH_PASSWORDS)));
	}
	try {
		if (loginConfigName != nullptr) {
			$set(this, loginContext, $new($LoginContext, loginConfigName, static_cast<$CallbackHandler*>($$new($JMXPluggableAuthenticator$JMXCallbackHandler, this))));
		} else {
			$var($SecurityManager, sm, $System::getSecurityManager());
			if (sm != nullptr) {
				sm->checkPermission($$new($AuthPermission, $$str({"createLoginContext."_s, JMXPluggableAuthenticator::LOGIN_CONFIG_NAME})));
			}
			$var($String, pf, passwordFile);
			$var($String, hashPass, hashPasswords);
			try {
				$var($LoginContext, tmp, $cast($LoginContext, $AccessController::doPrivileged(static_cast<$PrivilegedExceptionAction*>($$new($JMXPluggableAuthenticator$1, this, pf, hashPass)))));
				$set(this, loginContext, tmp);
			} catch ($PrivilegedActionException& pae) {
				$throw($cast($LoginException, $(pae->getException())));
			}
		}
	} catch ($LoginException& le) {
		authenticationFailure("authenticate"_s, static_cast<$Exception*>(le));
	} catch ($SecurityException& se) {
		authenticationFailure("authenticate"_s, static_cast<$Exception*>(se));
	}
}

$Subject* JMXPluggableAuthenticator::authenticate(Object$* credentials) {
	$useLocalCurrentObjectStackCache();
	$beforeCallerSensitive();
	if (!($instanceOf($StringArray, credentials))) {
		if (credentials == nullptr) {
			authenticationFailure("authenticate"_s, "Credentials required"_s);
		}
		$var($String, message, $str({"Credentials should be String[] instead of "_s, $($nc($of(credentials))->getClass()->getName())}));
		authenticationFailure("authenticate"_s, message);
	}
	$var($StringArray, aCredentials, $cast($StringArray, credentials));
	if ($nc(aCredentials)->length != 2) {
		$var($String, message, $str({"Credentials should have 2 elements not "_s, $$str(aCredentials->length)}));
		authenticationFailure("authenticate"_s, message);
	}
	$set(this, username, $nc(aCredentials)->get(0));
	$set(this, password, aCredentials->get(1));
	if (this->username == nullptr || this->password == nullptr) {
		$var($String, message, "Username or password is null"_s);
		authenticationFailure("authenticate"_s, message);
	}
	try {
		$nc(this->loginContext)->login();
		$var($Subject, subject, $nc(this->loginContext)->getSubject());
		$var($Void, dummy, $cast($Void, $AccessController::doPrivileged(static_cast<$PrivilegedAction*>($$new($JMXPluggableAuthenticator$2, this, subject)))));
		return subject;
	} catch ($LoginException& le) {
		authenticationFailure("authenticate"_s, static_cast<$Exception*>(le));
	}
	return nullptr;
}

void JMXPluggableAuthenticator::authenticationFailure($String* method, $String* message) {
	$init(JMXPluggableAuthenticator);
	$useLocalCurrentObjectStackCache();
	$var($String, msg, $str({"Authentication failed! "_s, message}));
	$var($SecurityException, e, $new($SecurityException, msg));
	logException(method, msg, e);
	$throw(e);
}

void JMXPluggableAuthenticator::authenticationFailure($String* method, $Exception* exception) {
	$init(JMXPluggableAuthenticator);
	$useLocalCurrentObjectStackCache();
	$var($String, msg, nullptr);
	$var($SecurityException, se, nullptr);
	if ($instanceOf($SecurityException, exception)) {
		$assign(msg, $nc(exception)->getMessage());
		$assign(se, $cast($SecurityException, exception));
	} else {
		$assign(msg, $str({"Authentication failed! "_s, $($nc(exception)->getMessage())}));
		$var($SecurityException, e, $new($SecurityException, msg));
		$EnvHelp::initCause(e, exception);
		$assign(se, e);
	}
	logException(method, msg, se);
	$throw(se);
}

void JMXPluggableAuthenticator::logException($String* method, $String* message, $Exception* e) {
	$init(JMXPluggableAuthenticator);
	if ($nc(JMXPluggableAuthenticator::logger)->traceOn()) {
		$nc(JMXPluggableAuthenticator::logger)->trace(method, message);
	}
	if ($nc(JMXPluggableAuthenticator::logger)->debugOn()) {
		$nc(JMXPluggableAuthenticator::logger)->debug(method, static_cast<$Throwable*>(e));
	}
}

void clinit$JMXPluggableAuthenticator($Class* class$) {
	$assignStatic(JMXPluggableAuthenticator::LOGIN_CONFIG_PROP, "jmx.remote.x.login.config"_s);
	$assignStatic(JMXPluggableAuthenticator::LOGIN_CONFIG_NAME, "JMXPluggableAuthenticator"_s);
	$assignStatic(JMXPluggableAuthenticator::PASSWORD_FILE_PROP, "jmx.remote.x.password.file"_s);
	$assignStatic(JMXPluggableAuthenticator::HASH_PASSWORDS, "jmx.remote.x.password.toHashes"_s);
	$assignStatic(JMXPluggableAuthenticator::logger, $new($ClassLogger, "javax.management.remote.misc"_s, JMXPluggableAuthenticator::LOGIN_CONFIG_NAME));
}

JMXPluggableAuthenticator::JMXPluggableAuthenticator() {
}

$Class* JMXPluggableAuthenticator::load$($String* name, bool initialize) {
	$loadClass(JMXPluggableAuthenticator, name, initialize, &_JMXPluggableAuthenticator_ClassInfo_, clinit$JMXPluggableAuthenticator, allocate$JMXPluggableAuthenticator);
	return class$;
}

$Class* JMXPluggableAuthenticator::class$ = nullptr;

				} // security
			} // remote
		} // jmx
	} // sun
} // com
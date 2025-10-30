#include <com/sun/jmx/remote/security/FileLoginModule.h>

#include <com/sun/jmx/mbeanserver/GetPropertyAction.h>
#include <com/sun/jmx/mbeanserver/Util.h>
#include <com/sun/jmx/remote/security/HashedPasswordManager.h>
#include <com/sun/jmx/remote/util/ClassLogger.h>
#include <com/sun/jmx/remote/util/EnvHelp.h>
#include <java/io/File.h>
#include <java/io/FilePermission.h>
#include <java/io/IOException.h>
#include <java/lang/SecurityException.h>
#include <java/security/AccessControlException.h>
#include <java/security/AccessController.h>
#include <java/security/GeneralSecurityException.h>
#include <java/security/PrivilegedAction.h>
#include <java/util/Arrays.h>
#include <java/util/Map.h>
#include <java/util/Set.h>
#include <javax/management/remote/JMXPrincipal.h>
#include <javax/security/auth/Subject.h>
#include <javax/security/auth/callback/Callback.h>
#include <javax/security/auth/callback/CallbackHandler.h>
#include <javax/security/auth/callback/NameCallback.h>
#include <javax/security/auth/callback/PasswordCallback.h>
#include <javax/security/auth/callback/UnsupportedCallbackException.h>
#include <javax/security/auth/login/FailedLoginException.h>
#include <javax/security/auth/login/LoginException.h>
#include <jcpp.h>

#undef DEFAULT_PASSWORD_FILE_NAME
#undef PASSWORD_FILE_NAME
#undef PASSWORD_KEY
#undef USERNAME_KEY

using $CallbackArray = $Array<::javax::security::auth::callback::Callback>;
using $GetPropertyAction = ::com::sun::jmx::mbeanserver::GetPropertyAction;
using $Util = ::com::sun::jmx::mbeanserver::Util;
using $HashedPasswordManager = ::com::sun::jmx::remote::security::HashedPasswordManager;
using $ClassLogger = ::com::sun::jmx::remote::util::ClassLogger;
using $EnvHelp = ::com::sun::jmx::remote::util::EnvHelp;
using $File = ::java::io::File;
using $FilePermission = ::java::io::FilePermission;
using $IOException = ::java::io::IOException;
using $ClassInfo = ::java::lang::ClassInfo;
using $Exception = ::java::lang::Exception;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $NullPointerException = ::java::lang::NullPointerException;
using $RuntimeException = ::java::lang::RuntimeException;
using $SecurityException = ::java::lang::SecurityException;
using $AccessControlException = ::java::security::AccessControlException;
using $AccessController = ::java::security::AccessController;
using $GeneralSecurityException = ::java::security::GeneralSecurityException;
using $Permission = ::java::security::Permission;
using $PrivilegedAction = ::java::security::PrivilegedAction;
using $Arrays = ::java::util::Arrays;
using $Map = ::java::util::Map;
using $Set = ::java::util::Set;
using $JMXPrincipal = ::javax::management::remote::JMXPrincipal;
using $Subject = ::javax::security::auth::Subject;
using $Callback = ::javax::security::auth::callback::Callback;
using $CallbackHandler = ::javax::security::auth::callback::CallbackHandler;
using $NameCallback = ::javax::security::auth::callback::NameCallback;
using $PasswordCallback = ::javax::security::auth::callback::PasswordCallback;
using $UnsupportedCallbackException = ::javax::security::auth::callback::UnsupportedCallbackException;
using $FailedLoginException = ::javax::security::auth::login::FailedLoginException;
using $LoginException = ::javax::security::auth::login::LoginException;
using $LoginModule = ::javax::security::auth::spi::LoginModule;

namespace com {
	namespace sun {
		namespace jmx {
			namespace remote {
				namespace security {

$FieldInfo _FileLoginModule_FieldInfo_[] = {
	{"PASSWORD_FILE_NAME", "Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(FileLoginModule, PASSWORD_FILE_NAME)},
	{"DEFAULT_PASSWORD_FILE_NAME", "Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(FileLoginModule, DEFAULT_PASSWORD_FILE_NAME)},
	{"USERNAME_KEY", "Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(FileLoginModule, USERNAME_KEY)},
	{"PASSWORD_KEY", "Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(FileLoginModule, PASSWORD_KEY)},
	{"logger", "Lcom/sun/jmx/remote/util/ClassLogger;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(FileLoginModule, logger)},
	{"useFirstPass", "Z", nullptr, $PRIVATE, $field(FileLoginModule, useFirstPass)},
	{"tryFirstPass", "Z", nullptr, $PRIVATE, $field(FileLoginModule, tryFirstPass)},
	{"storePass", "Z", nullptr, $PRIVATE, $field(FileLoginModule, storePass)},
	{"clearPass", "Z", nullptr, $PRIVATE, $field(FileLoginModule, clearPass)},
	{"hashPasswords", "Z", nullptr, $PRIVATE, $field(FileLoginModule, hashPasswords)},
	{"succeeded", "Z", nullptr, $PRIVATE, $field(FileLoginModule, succeeded)},
	{"commitSucceeded", "Z", nullptr, $PRIVATE, $field(FileLoginModule, commitSucceeded)},
	{"username", "Ljava/lang/String;", nullptr, $PRIVATE, $field(FileLoginModule, username)},
	{"password", "[C", nullptr, $PRIVATE, $field(FileLoginModule, password)},
	{"user", "Ljavax/management/remote/JMXPrincipal;", nullptr, $PRIVATE, $field(FileLoginModule, user)},
	{"subject", "Ljavax/security/auth/Subject;", nullptr, $PRIVATE, $field(FileLoginModule, subject)},
	{"callbackHandler", "Ljavax/security/auth/callback/CallbackHandler;", nullptr, $PRIVATE, $field(FileLoginModule, callbackHandler)},
	{"sharedState", "Ljava/util/Map;", "Ljava/util/Map<Ljava/lang/String;Ljava/lang/Object;>;", $PRIVATE, $field(FileLoginModule, sharedState)},
	{"options", "Ljava/util/Map;", "Ljava/util/Map<Ljava/lang/String;*>;", $PRIVATE, $field(FileLoginModule, options)},
	{"passwordFile", "Ljava/lang/String;", nullptr, $PRIVATE, $field(FileLoginModule, passwordFile)},
	{"passwordFileDisplayName", "Ljava/lang/String;", nullptr, $PRIVATE, $field(FileLoginModule, passwordFileDisplayName)},
	{"userSuppliedPasswordFile", "Z", nullptr, $PRIVATE, $field(FileLoginModule, userSuppliedPasswordFile)},
	{"hasJavaHomePermission", "Z", nullptr, $PRIVATE, $field(FileLoginModule, hasJavaHomePermission)},
	{"hashPwdMgr", "Lcom/sun/jmx/remote/security/HashedPasswordManager;", nullptr, $PRIVATE, $field(FileLoginModule, hashPwdMgr)},
	{}
};

$MethodInfo _FileLoginModule_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(FileLoginModule::*)()>(&FileLoginModule::init$))},
	{"abort", "()Z", nullptr, $PUBLIC, nullptr, "javax.security.auth.login.LoginException"},
	{"attemptAuthentication", "(Z)V", nullptr, $PRIVATE, $method(static_cast<void(FileLoginModule::*)(bool)>(&FileLoginModule::attemptAuthentication)), "javax.security.auth.login.LoginException"},
	{"cleanState", "()V", nullptr, $PRIVATE, $method(static_cast<void(FileLoginModule::*)()>(&FileLoginModule::cleanState))},
	{"commit", "()Z", nullptr, $PUBLIC, nullptr, "javax.security.auth.login.LoginException"},
	{"getUsernamePassword", "(Z)V", nullptr, $PRIVATE, $method(static_cast<void(FileLoginModule::*)(bool)>(&FileLoginModule::getUsernamePassword)), "javax.security.auth.login.LoginException"},
	{"initialize", "(Ljavax/security/auth/Subject;Ljavax/security/auth/callback/CallbackHandler;Ljava/util/Map;Ljava/util/Map;)V", "(Ljavax/security/auth/Subject;Ljavax/security/auth/callback/CallbackHandler;Ljava/util/Map<Ljava/lang/String;*>;Ljava/util/Map<Ljava/lang/String;*>;)V", $PUBLIC},
	{"login", "()Z", nullptr, $PUBLIC, nullptr, "javax.security.auth.login.LoginException"},
	{"logout", "()Z", nullptr, $PUBLIC, nullptr, "javax.security.auth.login.LoginException"},
	{}
};

$ClassInfo _FileLoginModule_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"com.sun.jmx.remote.security.FileLoginModule",
	"java.lang.Object",
	"javax.security.auth.spi.LoginModule",
	_FileLoginModule_FieldInfo_,
	_FileLoginModule_MethodInfo_
};

$Object* allocate$FileLoginModule($Class* clazz) {
	return $of($alloc(FileLoginModule));
}

$String* FileLoginModule::PASSWORD_FILE_NAME = nullptr;
$String* FileLoginModule::DEFAULT_PASSWORD_FILE_NAME = nullptr;
$String* FileLoginModule::USERNAME_KEY = nullptr;
$String* FileLoginModule::PASSWORD_KEY = nullptr;
$ClassLogger* FileLoginModule::logger = nullptr;

void FileLoginModule::init$() {
	this->useFirstPass = false;
	this->tryFirstPass = false;
	this->storePass = false;
	this->clearPass = false;
	this->hashPasswords = false;
	this->succeeded = false;
	this->commitSucceeded = false;
}

void FileLoginModule::initialize($Subject* subject, $CallbackHandler* callbackHandler, $Map* sharedState, $Map* options) {
	$useLocalCurrentObjectStackCache();
	$set(this, subject, subject);
	$set(this, callbackHandler, callbackHandler);
	$set(this, sharedState, $cast($Map, $Util::cast(sharedState)));
	$set(this, options, options);
	this->tryFirstPass = "true"_s->equalsIgnoreCase($cast($String, $($nc(options)->get("tryFirstPass"_s))));
	this->useFirstPass = "true"_s->equalsIgnoreCase($cast($String, $($nc(options)->get("useFirstPass"_s))));
	this->storePass = "true"_s->equalsIgnoreCase($cast($String, $($nc(options)->get("storePass"_s))));
	this->clearPass = "true"_s->equalsIgnoreCase($cast($String, $($nc(options)->get("clearPass"_s))));
	this->hashPasswords = "true"_s->equalsIgnoreCase($cast($String, $($nc(options)->get("hashPasswords"_s))));
	$set(this, passwordFile, $cast($String, $nc(options)->get("passwordFile"_s)));
	$set(this, passwordFileDisplayName, this->passwordFile);
	this->userSuppliedPasswordFile = true;
	if (this->passwordFile == nullptr) {
		$set(this, passwordFile, FileLoginModule::DEFAULT_PASSWORD_FILE_NAME);
		this->userSuppliedPasswordFile = false;
		try {
			$System::getProperty("java.home"_s);
			this->hasJavaHomePermission = true;
			$set(this, passwordFileDisplayName, this->passwordFile);
		} catch ($SecurityException& e) {
			this->hasJavaHomePermission = false;
			$set(this, passwordFileDisplayName, FileLoginModule::PASSWORD_FILE_NAME);
		}
	}
}

bool FileLoginModule::login() {
	$useLocalCurrentObjectStackCache();
	try {
		$synchronized(this) {
			if (this->hashPwdMgr == nullptr) {
				$set(this, hashPwdMgr, $new($HashedPasswordManager, this->passwordFile, this->hashPasswords));
			}
		}
		$nc(this->hashPwdMgr)->loadPasswords();
	} catch ($IOException& ioe) {
		$var($LoginException, le, $new($LoginException, $$str({"Error: unable to load the password file: "_s, this->passwordFileDisplayName})));
		$throw($cast($LoginException, $($EnvHelp::initCause(le, ioe))));
	} catch ($SecurityException& e) {
		if (this->userSuppliedPasswordFile || this->hasJavaHomePermission) {
			$throw(e);
		} else {
			$var($FilePermission, fp, $new($FilePermission, this->passwordFileDisplayName, "read"_s));
			$var($AccessControlException, ace, $new($AccessControlException, $$str({"access denied "_s, $(fp->toString())})));
			ace->initCause(e);
			$throw(ace);
		}
	}
	if ($nc(FileLoginModule::logger)->debugOn()) {
		$nc(FileLoginModule::logger)->debug("login"_s, $$str({"Using password file: "_s, this->passwordFileDisplayName}));
	}
	if (this->tryFirstPass) {
		try {
			attemptAuthentication(true);
			this->succeeded = true;
			if ($nc(FileLoginModule::logger)->debugOn()) {
				$nc(FileLoginModule::logger)->debug("login"_s, "Authentication using cached password has succeeded"_s);
			}
			return true;
		} catch ($LoginException& le) {
			cleanState();
			$nc(FileLoginModule::logger)->debug("login"_s, "Authentication using cached password has failed"_s);
		}
	} else if (this->useFirstPass) {
		try {
			attemptAuthentication(true);
			this->succeeded = true;
			if ($nc(FileLoginModule::logger)->debugOn()) {
				$nc(FileLoginModule::logger)->debug("login"_s, "Authentication using cached password has succeeded"_s);
			}
			return true;
		} catch ($LoginException& le) {
			cleanState();
			$nc(FileLoginModule::logger)->debug("login"_s, "Authentication using cached password has failed"_s);
			$throw(le);
		}
	}
	if ($nc(FileLoginModule::logger)->debugOn()) {
		$nc(FileLoginModule::logger)->debug("login"_s, "Acquiring password"_s);
	}
	try {
		attemptAuthentication(false);
		this->succeeded = true;
		if ($nc(FileLoginModule::logger)->debugOn()) {
			$nc(FileLoginModule::logger)->debug("login"_s, "Authentication has succeeded"_s);
		}
		return true;
	} catch ($LoginException& le) {
		cleanState();
		$nc(FileLoginModule::logger)->debug("login"_s, "Authentication has failed"_s);
		$throw(le);
	}
	$shouldNotReachHere();
}

bool FileLoginModule::commit() {
	$useLocalCurrentObjectStackCache();
	if (this->succeeded == false) {
		return false;
	} else {
		if ($nc(this->subject)->isReadOnly()) {
			cleanState();
			$throwNew($LoginException, "Subject is read-only"_s);
		}
		if (!$nc($($nc(this->subject)->getPrincipals()))->contains(this->user)) {
			$nc($($nc(this->subject)->getPrincipals()))->add(this->user);
		}
		if ($nc(FileLoginModule::logger)->debugOn()) {
			$nc(FileLoginModule::logger)->debug("commit"_s, "Authentication has completed successfully"_s);
		}
	}
	cleanState();
	this->commitSucceeded = true;
	return true;
}

bool FileLoginModule::abort() {
	if ($nc(FileLoginModule::logger)->debugOn()) {
		$nc(FileLoginModule::logger)->debug("abort"_s, "Authentication has not completed successfully"_s);
	}
	if (this->succeeded == false) {
		return false;
	} else if (this->succeeded == true && this->commitSucceeded == false) {
		this->succeeded = false;
		cleanState();
		$set(this, user, nullptr);
	} else {
		logout();
	}
	return true;
}

bool FileLoginModule::logout() {
	if ($nc(this->subject)->isReadOnly()) {
		cleanState();
		$throwNew($LoginException, "Subject is read-only"_s);
	}
	$nc($($nc(this->subject)->getPrincipals()))->remove(this->user);
	cleanState();
	this->succeeded = false;
	this->commitSucceeded = false;
	$set(this, user, nullptr);
	if ($nc(FileLoginModule::logger)->debugOn()) {
		$nc(FileLoginModule::logger)->debug("logout"_s, "Subject is being logged out"_s);
	}
	return true;
}

void FileLoginModule::attemptAuthentication(bool usePasswdFromSharedState) {
	getUsernamePassword(usePasswdFromSharedState);
	if (!$nc(this->hashPwdMgr)->authenticate(this->username, this->password)) {
		if ($nc(FileLoginModule::logger)->debugOn()) {
			$nc(FileLoginModule::logger)->debug("login"_s, "Invalid username or password"_s);
		}
		$throwNew($FailedLoginException, "Invalid username or password"_s);
	}
	bool var$0 = this->storePass && !$nc(this->sharedState)->containsKey(FileLoginModule::USERNAME_KEY);
	if (var$0 && !$nc(this->sharedState)->containsKey(FileLoginModule::PASSWORD_KEY)) {
		$nc(this->sharedState)->put(FileLoginModule::USERNAME_KEY, this->username);
		$nc(this->sharedState)->put(FileLoginModule::PASSWORD_KEY, this->password);
	}
	$set(this, user, $new($JMXPrincipal, this->username));
	if ($nc(FileLoginModule::logger)->debugOn()) {
		$nc(FileLoginModule::logger)->debug("login"_s, $$str({"User \'"_s, this->username, "\' successfully validated"_s}));
	}
}

void FileLoginModule::getUsernamePassword(bool usePasswdFromSharedState) {
	$useLocalCurrentObjectStackCache();
	if (usePasswdFromSharedState) {
		$set(this, username, $cast($String, $nc(this->sharedState)->get(FileLoginModule::USERNAME_KEY)));
		$set(this, password, $cast($chars, $nc(this->sharedState)->get(FileLoginModule::PASSWORD_KEY)));
		return;
	}
	if (this->callbackHandler == nullptr) {
		$throwNew($LoginException, "Error: no CallbackHandler available to garner authentication information from the user"_s);
	}
	$var($CallbackArray, callbacks, $new($CallbackArray, 2));
	callbacks->set(0, $$new($NameCallback, "username"_s));
	callbacks->set(1, $$new($PasswordCallback, "password"_s, false));
	try {
		$nc(this->callbackHandler)->handle(callbacks);
		$set(this, username, $nc(($cast($NameCallback, callbacks->get(0))))->getName());
		$var($chars, tmpPassword, $nc(($cast($PasswordCallback, callbacks->get(1))))->getPassword());
		$set(this, password, $new($chars, $nc(tmpPassword)->length));
		$System::arraycopy(tmpPassword, 0, this->password, 0, tmpPassword->length);
		$nc(($cast($PasswordCallback, callbacks->get(1))))->clearPassword();
	} catch ($IOException& ioe) {
		$var($LoginException, le, $new($LoginException, $(ioe->toString())));
		$throw($cast($LoginException, $($EnvHelp::initCause(le, ioe))));
	} catch ($UnsupportedCallbackException& uce) {
		$var($LoginException, le, $new($LoginException, $$str({"Error: "_s, $($nc($of($(uce->getCallback())))->toString()), " not available to garner authentication information from the user"_s})));
		$throw($cast($LoginException, $($EnvHelp::initCause(le, uce))));
	}
}

void FileLoginModule::cleanState() {
	$set(this, username, nullptr);
	if (this->password != nullptr) {
		$Arrays::fill(this->password, u' ');
		$set(this, password, nullptr);
	}
	if (this->clearPass) {
		$nc(this->sharedState)->remove(FileLoginModule::USERNAME_KEY);
		$nc(this->sharedState)->remove(FileLoginModule::PASSWORD_KEY);
	}
}

void clinit$FileLoginModule($Class* class$) {
	$useLocalCurrentObjectStackCache();
	$assignStatic(FileLoginModule::PASSWORD_FILE_NAME, "jmxremote.password"_s);
	$assignStatic(FileLoginModule::USERNAME_KEY, "javax.security.auth.login.name"_s);
	$assignStatic(FileLoginModule::PASSWORD_KEY, "javax.security.auth.login.password"_s);
	$beforeCallerSensitive();
	$init($File);
	$assignStatic(FileLoginModule::DEFAULT_PASSWORD_FILE_NAME, $str({$cast($String, $($AccessController::doPrivileged(static_cast<$PrivilegedAction*>($$new($GetPropertyAction, "java.home"_s))))), $$str($File::separatorChar), "conf"_s, $$str($File::separatorChar), "management"_s, $$str($File::separatorChar), FileLoginModule::PASSWORD_FILE_NAME}));
	$assignStatic(FileLoginModule::logger, $new($ClassLogger, "javax.management.remote.misc"_s, "FileLoginModule"_s));
}

FileLoginModule::FileLoginModule() {
}

$Class* FileLoginModule::load$($String* name, bool initialize) {
	$loadClass(FileLoginModule, name, initialize, &_FileLoginModule_ClassInfo_, clinit$FileLoginModule, allocate$FileLoginModule);
	return class$;
}

$Class* FileLoginModule::class$ = nullptr;

				} // security
			} // remote
		} // jmx
	} // sun
} // com
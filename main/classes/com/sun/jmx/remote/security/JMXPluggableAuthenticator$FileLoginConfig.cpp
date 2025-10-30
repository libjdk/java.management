#include <com/sun/jmx/remote/security/JMXPluggableAuthenticator$FileLoginConfig.h>

#include <com/sun/jmx/remote/security/FileLoginModule.h>
#include <com/sun/jmx/remote/security/JMXPluggableAuthenticator.h>
#include <java/util/AbstractMap.h>
#include <java/util/Collections.h>
#include <java/util/HashMap.h>
#include <java/util/Map.h>
#include <javax/security/auth/login/AppConfigurationEntry$LoginModuleControlFlag.h>
#include <javax/security/auth/login/AppConfigurationEntry.h>
#include <javax/security/auth/login/Configuration.h>
#include <jcpp.h>

#undef FILE_LOGIN_MODULE
#undef HASH_PASSWORDS
#undef PASSWORD_FILE_OPTION
#undef REQUIRED

using $AppConfigurationEntryArray = $Array<::javax::security::auth::login::AppConfigurationEntry>;
using $FileLoginModule = ::com::sun::jmx::remote::security::FileLoginModule;
using $JMXPluggableAuthenticator = ::com::sun::jmx::remote::security::JMXPluggableAuthenticator;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $AbstractMap = ::java::util::AbstractMap;
using $Collections = ::java::util::Collections;
using $HashMap = ::java::util::HashMap;
using $Map = ::java::util::Map;
using $AppConfigurationEntry = ::javax::security::auth::login::AppConfigurationEntry;
using $AppConfigurationEntry$LoginModuleControlFlag = ::javax::security::auth::login::AppConfigurationEntry$LoginModuleControlFlag;
using $Configuration = ::javax::security::auth::login::Configuration;

namespace com {
	namespace sun {
		namespace jmx {
			namespace remote {
				namespace security {

$FieldInfo _JMXPluggableAuthenticator$FileLoginConfig_FieldInfo_[] = {
	{"entries", "[Ljavax/security/auth/login/AppConfigurationEntry;", nullptr, $PRIVATE, $field(JMXPluggableAuthenticator$FileLoginConfig, entries)},
	{"FILE_LOGIN_MODULE", "Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(JMXPluggableAuthenticator$FileLoginConfig, FILE_LOGIN_MODULE)},
	{"PASSWORD_FILE_OPTION", "Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(JMXPluggableAuthenticator$FileLoginConfig, PASSWORD_FILE_OPTION)},
	{"HASH_PASSWORDS", "Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(JMXPluggableAuthenticator$FileLoginConfig, HASH_PASSWORDS)},
	{}
};

$MethodInfo _JMXPluggableAuthenticator$FileLoginConfig_MethodInfo_[] = {
	{"<init>", "(Ljava/lang/String;Ljava/lang/String;)V", nullptr, $PUBLIC, $method(static_cast<void(JMXPluggableAuthenticator$FileLoginConfig::*)($String*,$String*)>(&JMXPluggableAuthenticator$FileLoginConfig::init$))},
	{"getAppConfigurationEntry", "(Ljava/lang/String;)[Ljavax/security/auth/login/AppConfigurationEntry;", nullptr, $PUBLIC},
	{"refresh", "()V", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _JMXPluggableAuthenticator$FileLoginConfig_InnerClassesInfo_[] = {
	{"com.sun.jmx.remote.security.JMXPluggableAuthenticator$FileLoginConfig", "com.sun.jmx.remote.security.JMXPluggableAuthenticator", "FileLoginConfig", $PRIVATE | $STATIC},
	{}
};

$ClassInfo _JMXPluggableAuthenticator$FileLoginConfig_ClassInfo_ = {
	$ACC_SUPER,
	"com.sun.jmx.remote.security.JMXPluggableAuthenticator$FileLoginConfig",
	"javax.security.auth.login.Configuration",
	nullptr,
	_JMXPluggableAuthenticator$FileLoginConfig_FieldInfo_,
	_JMXPluggableAuthenticator$FileLoginConfig_MethodInfo_,
	nullptr,
	nullptr,
	_JMXPluggableAuthenticator$FileLoginConfig_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.jmx.remote.security.JMXPluggableAuthenticator"
};

$Object* allocate$JMXPluggableAuthenticator$FileLoginConfig($Class* clazz) {
	return $of($alloc(JMXPluggableAuthenticator$FileLoginConfig));
}

$String* JMXPluggableAuthenticator$FileLoginConfig::FILE_LOGIN_MODULE = nullptr;
$String* JMXPluggableAuthenticator$FileLoginConfig::PASSWORD_FILE_OPTION = nullptr;
$String* JMXPluggableAuthenticator$FileLoginConfig::HASH_PASSWORDS = nullptr;

void JMXPluggableAuthenticator$FileLoginConfig::init$($String* passwordFile, $String* hashPasswords) {
	$useLocalCurrentObjectStackCache();
	$Configuration::init$();
	$var($Map, options, nullptr);
	if (passwordFile != nullptr) {
		$assign(options, $new($HashMap, 1));
		options->put(JMXPluggableAuthenticator$FileLoginConfig::PASSWORD_FILE_OPTION, passwordFile);
		options->put(JMXPluggableAuthenticator$FileLoginConfig::HASH_PASSWORDS, hashPasswords);
	} else {
		$assign(options, $Collections::emptyMap());
	}
	$init($AppConfigurationEntry$LoginModuleControlFlag);
	$set(this, entries, $new($AppConfigurationEntryArray, {$$new($AppConfigurationEntry, JMXPluggableAuthenticator$FileLoginConfig::FILE_LOGIN_MODULE, $AppConfigurationEntry$LoginModuleControlFlag::REQUIRED, options)}));
}

$AppConfigurationEntryArray* JMXPluggableAuthenticator$FileLoginConfig::getAppConfigurationEntry($String* name) {
	return $nc(name)->equals("JMXPluggableAuthenticator"_s) ? this->entries : ($AppConfigurationEntryArray*)nullptr;
}

void JMXPluggableAuthenticator$FileLoginConfig::refresh() {
}

void clinit$JMXPluggableAuthenticator$FileLoginConfig($Class* class$) {
	$assignStatic(JMXPluggableAuthenticator$FileLoginConfig::PASSWORD_FILE_OPTION, "passwordFile"_s);
	$assignStatic(JMXPluggableAuthenticator$FileLoginConfig::HASH_PASSWORDS, "hashPasswords"_s);
	$load($FileLoginModule);
	$assignStatic(JMXPluggableAuthenticator$FileLoginConfig::FILE_LOGIN_MODULE, $FileLoginModule::class$->getName());
}

JMXPluggableAuthenticator$FileLoginConfig::JMXPluggableAuthenticator$FileLoginConfig() {
}

$Class* JMXPluggableAuthenticator$FileLoginConfig::load$($String* name, bool initialize) {
	$loadClass(JMXPluggableAuthenticator$FileLoginConfig, name, initialize, &_JMXPluggableAuthenticator$FileLoginConfig_ClassInfo_, clinit$JMXPluggableAuthenticator$FileLoginConfig, allocate$JMXPluggableAuthenticator$FileLoginConfig);
	return class$;
}

$Class* JMXPluggableAuthenticator$FileLoginConfig::class$ = nullptr;

				} // security
			} // remote
		} // jmx
	} // sun
} // com
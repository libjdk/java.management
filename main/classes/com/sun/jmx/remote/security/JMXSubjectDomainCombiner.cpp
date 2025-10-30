#include <com/sun/jmx/remote/security/JMXSubjectDomainCombiner.h>

#include <java/lang/ClassLoader.h>
#include <java/net/URL.h>
#include <java/security/AccessControlContext.h>
#include <java/security/AccessController.h>
#include <java/security/CodeSource.h>
#include <java/security/DomainCombiner.h>
#include <java/security/PermissionCollection.h>
#include <java/security/Permissions.h>
#include <java/security/Principal.h>
#include <java/security/ProtectionDomain.h>
#include <java/security/cert/Certificate.h>
#include <javax/security/auth/Subject.h>
#include <javax/security/auth/SubjectDomainCombiner.h>
#include <jcpp.h>

using $PrincipalArray = $Array<::java::security::Principal>;
using $ProtectionDomainArray = $Array<::java::security::ProtectionDomain>;
using $CertificateArray = $Array<::java::security::cert::Certificate>;
using $ClassInfo = ::java::lang::ClassInfo;
using $ClassLoader = ::java::lang::ClassLoader;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $URL = ::java::net::URL;
using $AccessControlContext = ::java::security::AccessControlContext;
using $AccessController = ::java::security::AccessController;
using $CodeSource = ::java::security::CodeSource;
using $DomainCombiner = ::java::security::DomainCombiner;
using $PermissionCollection = ::java::security::PermissionCollection;
using $Permissions = ::java::security::Permissions;
using $ProtectionDomain = ::java::security::ProtectionDomain;
using $Certificate = ::java::security::cert::Certificate;
using $Subject = ::javax::security::auth::Subject;
using $SubjectDomainCombiner = ::javax::security::auth::SubjectDomainCombiner;

namespace com {
	namespace sun {
		namespace jmx {
			namespace remote {
				namespace security {

$FieldInfo _JMXSubjectDomainCombiner_FieldInfo_[] = {
	{"nullCodeSource", "Ljava/security/CodeSource;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(JMXSubjectDomainCombiner, nullCodeSource)},
	{"pdNoPerms", "Ljava/security/ProtectionDomain;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(JMXSubjectDomainCombiner, pdNoPerms)},
	{}
};

$MethodInfo _JMXSubjectDomainCombiner_MethodInfo_[] = {
	{"<init>", "(Ljavax/security/auth/Subject;)V", nullptr, $PUBLIC, $method(static_cast<void(JMXSubjectDomainCombiner::*)($Subject*)>(&JMXSubjectDomainCombiner::init$))},
	{"combine", "([Ljava/security/ProtectionDomain;[Ljava/security/ProtectionDomain;)[Ljava/security/ProtectionDomain;", nullptr, $PUBLIC},
	{"getContext", "(Ljavax/security/auth/Subject;)Ljava/security/AccessControlContext;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$AccessControlContext*(*)($Subject*)>(&JMXSubjectDomainCombiner::getContext))},
	{"getDomainCombinerContext", "(Ljavax/security/auth/Subject;)Ljava/security/AccessControlContext;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$AccessControlContext*(*)($Subject*)>(&JMXSubjectDomainCombiner::getDomainCombinerContext))},
	{}
};

$ClassInfo _JMXSubjectDomainCombiner_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"com.sun.jmx.remote.security.JMXSubjectDomainCombiner",
	"javax.security.auth.SubjectDomainCombiner",
	nullptr,
	_JMXSubjectDomainCombiner_FieldInfo_,
	_JMXSubjectDomainCombiner_MethodInfo_
};

$Object* allocate$JMXSubjectDomainCombiner($Class* clazz) {
	return $of($alloc(JMXSubjectDomainCombiner));
}

$CodeSource* JMXSubjectDomainCombiner::nullCodeSource = nullptr;
$ProtectionDomain* JMXSubjectDomainCombiner::pdNoPerms = nullptr;

void JMXSubjectDomainCombiner::init$($Subject* s) {
	$SubjectDomainCombiner::init$(s);
}

$ProtectionDomainArray* JMXSubjectDomainCombiner::combine($ProtectionDomainArray* current, $ProtectionDomainArray* assigned) {
	$var($ProtectionDomainArray, newCurrent, nullptr);
	if (current == nullptr || $nc(current)->length == 0) {
		$assign(newCurrent, $new($ProtectionDomainArray, 1));
		newCurrent->set(0, JMXSubjectDomainCombiner::pdNoPerms);
	} else {
		$assign(newCurrent, $new($ProtectionDomainArray, current->length + 1));
		for (int32_t i = 0; i < current->length; ++i) {
			newCurrent->set(i, current->get(i));
		}
		newCurrent->set(current->length, JMXSubjectDomainCombiner::pdNoPerms);
	}
	return $SubjectDomainCombiner::combine(newCurrent, assigned);
}

$AccessControlContext* JMXSubjectDomainCombiner::getContext($Subject* subject) {
	$init(JMXSubjectDomainCombiner);
	$useLocalCurrentObjectStackCache();
	$var($AccessControlContext, var$0, $AccessController::getContext());
	return $new($AccessControlContext, var$0, static_cast<$DomainCombiner*>($$new(JMXSubjectDomainCombiner, subject)));
}

$AccessControlContext* JMXSubjectDomainCombiner::getDomainCombinerContext($Subject* subject) {
	$init(JMXSubjectDomainCombiner);
	$useLocalCurrentObjectStackCache();
	$var($AccessControlContext, var$0, $new($AccessControlContext, $$new($ProtectionDomainArray, 0)));
	return $new($AccessControlContext, var$0, static_cast<$DomainCombiner*>($$new(JMXSubjectDomainCombiner, subject)));
}

void clinit$JMXSubjectDomainCombiner($Class* class$) {
	$assignStatic(JMXSubjectDomainCombiner::nullCodeSource, $new($CodeSource, ($URL*)nullptr, ($CertificateArray*)nullptr));
	$assignStatic(JMXSubjectDomainCombiner::pdNoPerms, $new($ProtectionDomain, JMXSubjectDomainCombiner::nullCodeSource, $$new($Permissions), nullptr, nullptr));
}

JMXSubjectDomainCombiner::JMXSubjectDomainCombiner() {
}

$Class* JMXSubjectDomainCombiner::load$($String* name, bool initialize) {
	$loadClass(JMXSubjectDomainCombiner, name, initialize, &_JMXSubjectDomainCombiner_ClassInfo_, clinit$JMXSubjectDomainCombiner, allocate$JMXSubjectDomainCombiner);
	return class$;
}

$Class* JMXSubjectDomainCombiner::class$ = nullptr;

				} // security
			} // remote
		} // jmx
	} // sun
} // com
#include <com/sun/jmx/remote/security/SubjectDelegator.h>

#include <com/sun/jmx/remote/security/JMXSubjectDomainCombiner.h>
#include <com/sun/jmx/remote/security/SubjectDelegator$1.h>
#include <java/lang/SecurityException.h>
#include <java/lang/SecurityManager.h>
#include <java/security/AccessControlContext.h>
#include <java/security/AccessController.h>
#include <java/security/BasicPermission.h>
#include <java/security/Permission.h>
#include <java/security/Principal.h>
#include <java/security/PrivilegedAction.h>
#include <java/util/AbstractCollection.h>
#include <java/util/AbstractList.h>
#include <java/util/ArrayList.h>
#include <java/util/Arrays.h>
#include <java/util/Collection.h>
#include <java/util/Collections.h>
#include <java/util/Iterator.h>
#include <java/util/List.h>
#include <java/util/Set.h>
#include <javax/management/remote/SubjectDelegationPermission.h>
#include <javax/security/auth/Subject.h>
#include <jcpp.h>

using $PrincipalArray = $Array<::java::security::Principal>;
using $JMXSubjectDomainCombiner = ::com::sun::jmx::remote::security::JMXSubjectDomainCombiner;
using $SubjectDelegator$1 = ::com::sun::jmx::remote::security::SubjectDelegator$1;
using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $SecurityException = ::java::lang::SecurityException;
using $SecurityManager = ::java::lang::SecurityManager;
using $AccessControlContext = ::java::security::AccessControlContext;
using $AccessController = ::java::security::AccessController;
using $BasicPermission = ::java::security::BasicPermission;
using $Permission = ::java::security::Permission;
using $Principal = ::java::security::Principal;
using $PrivilegedAction = ::java::security::PrivilegedAction;
using $AbstractCollection = ::java::util::AbstractCollection;
using $AbstractList = ::java::util::AbstractList;
using $ArrayList = ::java::util::ArrayList;
using $Arrays = ::java::util::Arrays;
using $Collection = ::java::util::Collection;
using $Collections = ::java::util::Collections;
using $Iterator = ::java::util::Iterator;
using $List = ::java::util::List;
using $Set = ::java::util::Set;
using $SubjectDelegationPermission = ::javax::management::remote::SubjectDelegationPermission;
using $Subject = ::javax::security::auth::Subject;

namespace com {
	namespace sun {
		namespace jmx {
			namespace remote {
				namespace security {

$MethodInfo _SubjectDelegator_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(SubjectDelegator::*)()>(&SubjectDelegator::init$))},
	{"checkRemoveCallerContext", "(Ljavax/security/auth/Subject;)Z", nullptr, $PUBLIC | $STATIC | $SYNCHRONIZED, $method(static_cast<bool(*)($Subject*)>(&SubjectDelegator::checkRemoveCallerContext))},
	{"delegatedContext", "(Ljava/security/AccessControlContext;Ljavax/security/auth/Subject;Z)Ljava/security/AccessControlContext;", nullptr, $PUBLIC, nullptr, "java.lang.SecurityException"},
	{"getDelegatedAcc", "(Ljavax/security/auth/Subject;Z)Ljava/security/AccessControlContext;", nullptr, $PRIVATE, $method(static_cast<$AccessControlContext*(SubjectDelegator::*)($Subject*,bool)>(&SubjectDelegator::getDelegatedAcc))},
	{"getSubjectPrincipals", "(Ljavax/security/auth/Subject;)Ljava/util/Collection;", "(Ljavax/security/auth/Subject;)Ljava/util/Collection<Ljava/security/Principal;>;", $PRIVATE | $STATIC, $method(static_cast<$Collection*(*)($Subject*)>(&SubjectDelegator::getSubjectPrincipals))},
	{}
};

$InnerClassInfo _SubjectDelegator_InnerClassesInfo_[] = {
	{"com.sun.jmx.remote.security.SubjectDelegator$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _SubjectDelegator_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"com.sun.jmx.remote.security.SubjectDelegator",
	"java.lang.Object",
	nullptr,
	nullptr,
	_SubjectDelegator_MethodInfo_,
	nullptr,
	nullptr,
	_SubjectDelegator_InnerClassesInfo_,
	nullptr,
	nullptr,
	"com.sun.jmx.remote.security.SubjectDelegator$1"
};

$Object* allocate$SubjectDelegator($Class* clazz) {
	return $of($alloc(SubjectDelegator));
}

void SubjectDelegator::init$() {
}

$AccessControlContext* SubjectDelegator::delegatedContext($AccessControlContext* authenticatedACC, $Subject* delegatedSubject, bool removeCallerContext) {
	$useLocalCurrentObjectStackCache();
	$beforeCallerSensitive();
	if ($System::getSecurityManager() != nullptr && authenticatedACC == nullptr) {
		$throwNew($SecurityException, "Illegal AccessControlContext: null"_s);
	}
	$var($Collection, ps, getSubjectPrincipals(delegatedSubject));
	$var($Collection, permissions, static_cast<$Collection*>(static_cast<$AbstractCollection*>(static_cast<$AbstractList*>($new($ArrayList, $nc(ps)->size())))));
	{
		$var($Iterator, i$, $nc(ps)->iterator());
		for (; $nc(i$)->hasNext();) {
			$var($Principal, p, $cast($Principal, i$->next()));
			{
				$var($String, var$0, $$str({$($nc($of(p))->getClass()->getName()), "."_s}));
				$var($String, pname, $concat(var$0, $(p->getName())));
				permissions->add($$new($SubjectDelegationPermission, pname));
			}
		}
	}
	$var($PrivilegedAction, action, $new($SubjectDelegator$1, this, permissions));
	$AccessController::doPrivileged(action, authenticatedACC);
	return getDelegatedAcc(delegatedSubject, removeCallerContext);
}

$AccessControlContext* SubjectDelegator::getDelegatedAcc($Subject* delegatedSubject, bool removeCallerContext) {
	if (removeCallerContext) {
		return $JMXSubjectDomainCombiner::getDomainCombinerContext(delegatedSubject);
	} else {
		return $JMXSubjectDomainCombiner::getContext(delegatedSubject);
	}
}

bool SubjectDelegator::checkRemoveCallerContext($Subject* subject) {
	$load(SubjectDelegator);
	$synchronized(class$) {
		$useLocalCurrentObjectStackCache();
		try {
			{
				$var($Iterator, i$, $nc($(getSubjectPrincipals(subject)))->iterator());
				for (; $nc(i$)->hasNext();) {
					$var($Principal, p, $cast($Principal, i$->next()));
					{
						$var($String, var$0, $$str({$($nc($of(p))->getClass()->getName()), "."_s}));
						$var($String, pname, $concat(var$0, $(p->getName())));
						$var($Permission, sdp, $new($SubjectDelegationPermission, pname));
						$AccessController::checkPermission(sdp);
					}
				}
			}
		} catch ($SecurityException& e) {
			return false;
		}
		return true;
	}
}

$Collection* SubjectDelegator::getSubjectPrincipals($Subject* subject) {
	$useLocalCurrentObjectStackCache();
	if ($nc(subject)->isReadOnly()) {
		return subject->getPrincipals();
	}
	$var($List, principals, $Arrays::asList($fcast($PrincipalArray, $($nc($($nc(subject)->getPrincipals()))->toArray($$new($PrincipalArray, 0))))));
	return $Collections::unmodifiableList(principals);
}

SubjectDelegator::SubjectDelegator() {
}

$Class* SubjectDelegator::load$($String* name, bool initialize) {
	$loadClass(SubjectDelegator, name, initialize, &_SubjectDelegator_ClassInfo_, allocate$SubjectDelegator);
	return class$;
}

$Class* SubjectDelegator::class$ = nullptr;

				} // security
			} // remote
		} // jmx
	} // sun
} // com
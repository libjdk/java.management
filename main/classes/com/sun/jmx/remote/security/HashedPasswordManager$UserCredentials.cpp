#include <com/sun/jmx/remote/security/HashedPasswordManager$UserCredentials.h>

#include <com/sun/jmx/remote/security/HashedPasswordManager.h>
#include <jcpp.h>

using $HashedPasswordManager = ::com::sun::jmx::remote::security::HashedPasswordManager;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace com {
	namespace sun {
		namespace jmx {
			namespace remote {
				namespace security {

$FieldInfo _HashedPasswordManager$UserCredentials_FieldInfo_[] = {
	{"userName", "Ljava/lang/String;", nullptr, $PRIVATE | $FINAL, $field(HashedPasswordManager$UserCredentials, userName)},
	{"hashAlgorithm", "Ljava/lang/String;", nullptr, $PRIVATE | $FINAL, $field(HashedPasswordManager$UserCredentials, hashAlgorithm)},
	{"b64Salt", "Ljava/lang/String;", nullptr, $PRIVATE | $FINAL, $field(HashedPasswordManager$UserCredentials, b64Salt)},
	{"b64Hash", "Ljava/lang/String;", nullptr, $PRIVATE | $FINAL, $field(HashedPasswordManager$UserCredentials, b64Hash)},
	{}
};

$MethodInfo _HashedPasswordManager$UserCredentials_MethodInfo_[] = {
	{"<init>", "(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)V", nullptr, $PUBLIC, $method(static_cast<void(HashedPasswordManager$UserCredentials::*)($String*,$String*,$String*,$String*)>(&HashedPasswordManager$UserCredentials::init$))},
	{"toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _HashedPasswordManager$UserCredentials_InnerClassesInfo_[] = {
	{"com.sun.jmx.remote.security.HashedPasswordManager$UserCredentials", "com.sun.jmx.remote.security.HashedPasswordManager", "UserCredentials", $PRIVATE | $STATIC | $FINAL},
	{}
};

$ClassInfo _HashedPasswordManager$UserCredentials_ClassInfo_ = {
	$FINAL | $ACC_SUPER,
	"com.sun.jmx.remote.security.HashedPasswordManager$UserCredentials",
	"java.lang.Object",
	nullptr,
	_HashedPasswordManager$UserCredentials_FieldInfo_,
	_HashedPasswordManager$UserCredentials_MethodInfo_,
	nullptr,
	nullptr,
	_HashedPasswordManager$UserCredentials_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.jmx.remote.security.HashedPasswordManager"
};

$Object* allocate$HashedPasswordManager$UserCredentials($Class* clazz) {
	return $of($alloc(HashedPasswordManager$UserCredentials));
}

void HashedPasswordManager$UserCredentials::init$($String* userName, $String* hashAlgorithm, $String* b64Salt, $String* b64Hash) {
	$set(this, userName, userName);
	$set(this, hashAlgorithm, hashAlgorithm);
	$set(this, b64Salt, b64Salt);
	$set(this, b64Hash, b64Hash);
}

$String* HashedPasswordManager$UserCredentials::toString() {
	return $str({this->userName, " "_s, this->b64Salt, " "_s, this->b64Hash, " "_s, this->hashAlgorithm});
}

HashedPasswordManager$UserCredentials::HashedPasswordManager$UserCredentials() {
}

$Class* HashedPasswordManager$UserCredentials::load$($String* name, bool initialize) {
	$loadClass(HashedPasswordManager$UserCredentials, name, initialize, &_HashedPasswordManager$UserCredentials_ClassInfo_, allocate$HashedPasswordManager$UserCredentials);
	return class$;
}

$Class* HashedPasswordManager$UserCredentials::class$ = nullptr;

				} // security
			} // remote
		} // jmx
	} // sun
} // com
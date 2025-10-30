#include <com/sun/jmx/mbeanserver/GetPropertyAction.h>

#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $PrivilegedAction = ::java::security::PrivilegedAction;

namespace com {
	namespace sun {
		namespace jmx {
			namespace mbeanserver {

$FieldInfo _GetPropertyAction_FieldInfo_[] = {
	{"key", "Ljava/lang/String;", nullptr, $PRIVATE | $FINAL, $field(GetPropertyAction, key)},
	{}
};

$MethodInfo _GetPropertyAction_MethodInfo_[] = {
	{"<init>", "(Ljava/lang/String;)V", nullptr, $PUBLIC, $method(static_cast<void(GetPropertyAction::*)($String*)>(&GetPropertyAction::init$))},
	{"run", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

$ClassInfo _GetPropertyAction_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"com.sun.jmx.mbeanserver.GetPropertyAction",
	"java.lang.Object",
	"java.security.PrivilegedAction",
	_GetPropertyAction_FieldInfo_,
	_GetPropertyAction_MethodInfo_,
	"Ljava/lang/Object;Ljava/security/PrivilegedAction<Ljava/lang/String;>;"
};

$Object* allocate$GetPropertyAction($Class* clazz) {
	return $of($alloc(GetPropertyAction));
}

void GetPropertyAction::init$($String* key) {
	$set(this, key, key);
}

$Object* GetPropertyAction::run() {
	return $of($System::getProperty(this->key));
}

GetPropertyAction::GetPropertyAction() {
}

$Class* GetPropertyAction::load$($String* name, bool initialize) {
	$loadClass(GetPropertyAction, name, initialize, &_GetPropertyAction_ClassInfo_, allocate$GetPropertyAction);
	return class$;
}

$Class* GetPropertyAction::class$ = nullptr;

			} // mbeanserver
		} // jmx
	} // sun
} // com
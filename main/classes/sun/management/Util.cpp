#include <sun/management/Util.h>

#include <java/lang/SecurityManager.h>
#include <java/lang/management/ManagementPermission.h>
#include <java/security/BasicPermission.h>
#include <java/security/Permission.h>
#include <java/util/List.h>
#include <javax/management/JMException.h>
#include <javax/management/MalformedObjectNameException.h>
#include <javax/management/ObjectName.h>
#include <javax/management/OperationsException.h>
#include <jcpp.h>

#undef EMPTY_STRING_ARRAY

using $ClassInfo = ::java::lang::ClassInfo;
using $Exception = ::java::lang::Exception;
using $FieldInfo = ::java::lang::FieldInfo;
using $IllegalArgumentException = ::java::lang::IllegalArgumentException;
using $MethodInfo = ::java::lang::MethodInfo;
using $RuntimeException = ::java::lang::RuntimeException;
using $SecurityManager = ::java::lang::SecurityManager;
using $ManagementPermission = ::java::lang::management::ManagementPermission;
using $BasicPermission = ::java::security::BasicPermission;
using $Permission = ::java::security::Permission;
using $List = ::java::util::List;
using $JMException = ::javax::management::JMException;
using $MalformedObjectNameException = ::javax::management::MalformedObjectNameException;
using $ObjectName = ::javax::management::ObjectName;
using $OperationsException = ::javax::management::OperationsException;

namespace sun {
	namespace management {

$FieldInfo _Util_FieldInfo_[] = {
	{"EMPTY_STRING_ARRAY", "[Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(Util, EMPTY_STRING_ARRAY)},
	{"monitorPermission", "Ljava/lang/management/ManagementPermission;", nullptr, $PRIVATE | $STATIC, $staticField(Util, monitorPermission)},
	{"controlPermission", "Ljava/lang/management/ManagementPermission;", nullptr, $PRIVATE | $STATIC, $staticField(Util, controlPermission)},
	{}
};

$MethodInfo _Util_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PRIVATE, $method(static_cast<void(Util::*)()>(&Util::init$))},
	{"checkAccess", "(Ljava/lang/management/ManagementPermission;)V", nullptr, $STATIC, $method(static_cast<void(*)($ManagementPermission*)>(&Util::checkAccess)), "java.lang.SecurityException"},
	{"checkControlAccess", "()V", nullptr, $PUBLIC | $STATIC, $method(static_cast<void(*)()>(&Util::checkControlAccess)), "java.lang.SecurityException"},
	{"checkMonitorAccess", "()V", nullptr, $STATIC, $method(static_cast<void(*)()>(&Util::checkMonitorAccess)), "java.lang.SecurityException"},
	{"newException", "(Ljava/lang/Exception;)Ljava/lang/RuntimeException;", nullptr, $STATIC, $method(static_cast<$RuntimeException*(*)($Exception*)>(&Util::newException))},
	{"newObjectName", "(Ljava/lang/String;Ljava/lang/String;)Ljavax/management/ObjectName;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$ObjectName*(*)($String*,$String*)>(&Util::newObjectName))},
	{"newObjectName", "(Ljava/lang/String;)Ljavax/management/ObjectName;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$ObjectName*(*)($String*)>(&Util::newObjectName))},
	{"toStringArray", "(Ljava/util/List;)[Ljava/lang/String;", "(Ljava/util/List<Ljava/lang/String;>;)[Ljava/lang/String;", $STATIC, $method(static_cast<$StringArray*(*)($List*)>(&Util::toStringArray))},
	{}
};

$ClassInfo _Util_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.management.Util",
	"java.lang.Object",
	nullptr,
	_Util_FieldInfo_,
	_Util_MethodInfo_
};

$Object* allocate$Util($Class* clazz) {
	return $of($alloc(Util));
}

$StringArray* Util::EMPTY_STRING_ARRAY = nullptr;
$ManagementPermission* Util::monitorPermission = nullptr;
$ManagementPermission* Util::controlPermission = nullptr;

void Util::init$() {
}

$RuntimeException* Util::newException($Exception* e) {
	$init(Util);
	$throwNew($RuntimeException, static_cast<$Throwable*>(e));
	$shouldNotReachHere();
}

$StringArray* Util::toStringArray($List* list) {
	$init(Util);
	return $fcast($StringArray, $nc(list)->toArray(Util::EMPTY_STRING_ARRAY));
}

$ObjectName* Util::newObjectName($String* domainAndType, $String* name) {
	$init(Util);
	return newObjectName($$str({domainAndType, ",name="_s, name}));
}

$ObjectName* Util::newObjectName($String* name) {
	$init(Util);
	try {
		return $ObjectName::getInstance(name);
	} catch ($MalformedObjectNameException& e) {
		$throwNew($IllegalArgumentException, static_cast<$Throwable*>(e));
	}
	$shouldNotReachHere();
}

void Util::checkAccess($ManagementPermission* p) {
	$init(Util);
	$var($SecurityManager, sm, $System::getSecurityManager());
	if (sm != nullptr) {
		sm->checkPermission(p);
	}
}

void Util::checkMonitorAccess() {
	$init(Util);
	checkAccess(Util::monitorPermission);
}

void Util::checkControlAccess() {
	$init(Util);
	checkAccess(Util::controlPermission);
}

void clinit$Util($Class* class$) {
	$assignStatic(Util::EMPTY_STRING_ARRAY, $new($StringArray, 0));
	$assignStatic(Util::monitorPermission, $new($ManagementPermission, "monitor"_s));
	$assignStatic(Util::controlPermission, $new($ManagementPermission, "control"_s));
}

Util::Util() {
}

$Class* Util::load$($String* name, bool initialize) {
	$loadClass(Util, name, initialize, &_Util_ClassInfo_, clinit$Util, allocate$Util);
	return class$;
}

$Class* Util::class$ = nullptr;

	} // management
} // sun
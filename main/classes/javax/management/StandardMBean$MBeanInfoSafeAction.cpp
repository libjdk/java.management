#include <javax/management/StandardMBean$MBeanInfoSafeAction.h>

#include <javax/management/MBeanInfo.h>
#include <javax/management/StandardEmitterMBean.h>
#include <javax/management/StandardMBean.h>
#include <jcpp.h>

using $Boolean = ::java::lang::Boolean;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $PrivilegedAction = ::java::security::PrivilegedAction;
using $MBeanInfo = ::javax::management::MBeanInfo;
using $StandardEmitterMBean = ::javax::management::StandardEmitterMBean;
using $StandardMBean = ::javax::management::StandardMBean;

namespace javax {
	namespace management {

$FieldInfo _StandardMBean$MBeanInfoSafeAction_FieldInfo_[] = {
	{"subclass", "Ljava/lang/Class;", "Ljava/lang/Class<*>;", $PRIVATE | $FINAL, $field(StandardMBean$MBeanInfoSafeAction, subclass)},
	{}
};

$MethodInfo _StandardMBean$MBeanInfoSafeAction_MethodInfo_[] = {
	{"<init>", "(Ljava/lang/Class;)V", "(Ljava/lang/Class<*>;)V", 0, $method(static_cast<void(StandardMBean$MBeanInfoSafeAction::*)($Class*)>(&StandardMBean$MBeanInfoSafeAction::init$))},
	{"run", "()Ljava/lang/Boolean;", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _StandardMBean$MBeanInfoSafeAction_InnerClassesInfo_[] = {
	{"javax.management.StandardMBean$MBeanInfoSafeAction", "javax.management.StandardMBean", "MBeanInfoSafeAction", $PRIVATE | $STATIC},
	{}
};

$ClassInfo _StandardMBean$MBeanInfoSafeAction_ClassInfo_ = {
	$ACC_SUPER,
	"javax.management.StandardMBean$MBeanInfoSafeAction",
	"java.lang.Object",
	"java.security.PrivilegedAction",
	_StandardMBean$MBeanInfoSafeAction_FieldInfo_,
	_StandardMBean$MBeanInfoSafeAction_MethodInfo_,
	"Ljava/lang/Object;Ljava/security/PrivilegedAction<Ljava/lang/Boolean;>;",
	nullptr,
	_StandardMBean$MBeanInfoSafeAction_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"javax.management.StandardMBean"
};

$Object* allocate$StandardMBean$MBeanInfoSafeAction($Class* clazz) {
	return $of($alloc(StandardMBean$MBeanInfoSafeAction));
}

void StandardMBean$MBeanInfoSafeAction::init$($Class* subclass) {
	$set(this, subclass, subclass);
}

$Object* StandardMBean$MBeanInfoSafeAction::run() {
	$load($StandardMBean);
	$load($MBeanInfo);
	if ($StandardMBean::overrides(this->subclass, $StandardMBean::class$, "cacheMBeanInfo"_s, $$new($ClassArray, {$MBeanInfo::class$}))) {
		return $of($Boolean::valueOf(false));
	}
	if ($StandardMBean::overrides(this->subclass, $StandardMBean::class$, "getCachedMBeanInfo"_s, ($ClassArray*)nullptr)) {
		return $of($Boolean::valueOf(false));
	}
	if ($StandardMBean::overrides(this->subclass, $StandardMBean::class$, "getMBeanInfo"_s, ($ClassArray*)nullptr)) {
		return $of($Boolean::valueOf(false));
	}
	$load($StandardEmitterMBean);
	if ($StandardEmitterMBean::class$->isAssignableFrom(this->subclass)) {
		if ($StandardMBean::overrides(this->subclass, $StandardEmitterMBean::class$, "getNotificationInfo"_s, ($ClassArray*)nullptr)) {
			return $of($Boolean::valueOf(false));
		}
	}
	return $of($Boolean::valueOf(true));
}

StandardMBean$MBeanInfoSafeAction::StandardMBean$MBeanInfoSafeAction() {
}

$Class* StandardMBean$MBeanInfoSafeAction::load$($String* name, bool initialize) {
	$loadClass(StandardMBean$MBeanInfoSafeAction, name, initialize, &_StandardMBean$MBeanInfoSafeAction_ClassInfo_, allocate$StandardMBean$MBeanInfoSafeAction);
	return class$;
}

$Class* StandardMBean$MBeanInfoSafeAction::class$ = nullptr;

	} // management
} // javax
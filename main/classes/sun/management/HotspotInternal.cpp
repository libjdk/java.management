#include <sun/management/HotspotInternal.h>

#include <javax/management/MBeanServer.h>
#include <javax/management/ObjectName.h>
#include <sun/management/HotspotInternalMBean.h>
#include <sun/management/ManagementFactoryHelper.h>
#include <sun/management/Util.h>
#include <jcpp.h>

#undef HOTSPOT_INTERNAL_MBEAN_NAME

using $Boolean = ::java::lang::Boolean;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $MBeanRegistration = ::javax::management::MBeanRegistration;
using $MBeanServer = ::javax::management::MBeanServer;
using $ObjectName = ::javax::management::ObjectName;
using $HotspotInternalMBean = ::sun::management::HotspotInternalMBean;
using $ManagementFactoryHelper = ::sun::management::ManagementFactoryHelper;
using $Util = ::sun::management::Util;

namespace sun {
	namespace management {

$FieldInfo _HotspotInternal_FieldInfo_[] = {
	{"HOTSPOT_INTERNAL_MBEAN_NAME", "Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(HotspotInternal, HOTSPOT_INTERNAL_MBEAN_NAME)},
	{"objName", "Ljavax/management/ObjectName;", nullptr, $PRIVATE | $STATIC, $staticField(HotspotInternal, objName)},
	{"server", "Ljavax/management/MBeanServer;", nullptr, $PRIVATE, $field(HotspotInternal, server)},
	{}
};

$MethodInfo _HotspotInternal_MethodInfo_[] = {
	{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
	{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"*hashCode", "()I", nullptr, $PUBLIC | $NATIVE},
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(HotspotInternal::*)()>(&HotspotInternal::init$))},
	{"postDeregister", "()V", nullptr, $PUBLIC},
	{"postRegister", "(Ljava/lang/Boolean;)V", nullptr, $PUBLIC},
	{"preDeregister", "()V", nullptr, $PUBLIC, nullptr, "java.lang.Exception"},
	{"preRegister", "(Ljavax/management/MBeanServer;Ljavax/management/ObjectName;)Ljavax/management/ObjectName;", nullptr, $PUBLIC, nullptr, "java.lang.Exception"},
	{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

$ClassInfo _HotspotInternal_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.management.HotspotInternal",
	"java.lang.Object",
	"sun.management.HotspotInternalMBean,javax.management.MBeanRegistration",
	_HotspotInternal_FieldInfo_,
	_HotspotInternal_MethodInfo_
};

$Object* allocate$HotspotInternal($Class* clazz) {
	return $of($alloc(HotspotInternal));
}

int32_t HotspotInternal::hashCode() {
	 return this->$HotspotInternalMBean::hashCode();
}

bool HotspotInternal::equals(Object$* arg0) {
	 return this->$HotspotInternalMBean::equals(arg0);
}

$Object* HotspotInternal::clone() {
	 return this->$HotspotInternalMBean::clone();
}

$String* HotspotInternal::toString() {
	 return this->$HotspotInternalMBean::toString();
}

void HotspotInternal::finalize() {
	this->$HotspotInternalMBean::finalize();
}

$String* HotspotInternal::HOTSPOT_INTERNAL_MBEAN_NAME = nullptr;
$ObjectName* HotspotInternal::objName = nullptr;

void HotspotInternal::init$() {
	$set(this, server, nullptr);
}

$ObjectName* HotspotInternal::preRegister($MBeanServer* server, $ObjectName* name) {
	$ManagementFactoryHelper::registerInternalMBeans(server);
	$set(this, server, server);
	return HotspotInternal::objName;
}

void HotspotInternal::postRegister($Boolean* registrationDone) {
}

void HotspotInternal::preDeregister() {
	$ManagementFactoryHelper::unregisterInternalMBeans(this->server);
}

void HotspotInternal::postDeregister() {
}

void clinit$HotspotInternal($Class* class$) {
	$assignStatic(HotspotInternal::HOTSPOT_INTERNAL_MBEAN_NAME, "sun.management:type=HotspotInternal"_s);
	$assignStatic(HotspotInternal::objName, $Util::newObjectName(HotspotInternal::HOTSPOT_INTERNAL_MBEAN_NAME));
}

HotspotInternal::HotspotInternal() {
}

$Class* HotspotInternal::load$($String* name, bool initialize) {
	$loadClass(HotspotInternal, name, initialize, &_HotspotInternal_ClassInfo_, clinit$HotspotInternal, allocate$HotspotInternal);
	return class$;
}

$Class* HotspotInternal::class$ = nullptr;

	} // management
} // sun
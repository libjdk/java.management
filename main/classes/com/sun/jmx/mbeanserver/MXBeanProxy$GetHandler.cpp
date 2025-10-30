#include <com/sun/jmx/mbeanserver/MXBeanProxy$GetHandler.h>

#include <com/sun/jmx/mbeanserver/ConvertingMethod.h>
#include <com/sun/jmx/mbeanserver/MXBeanProxy$Handler.h>
#include <com/sun/jmx/mbeanserver/MXBeanProxy.h>
#include <java/lang/AssertionError.h>
#include <javax/management/MBeanServerConnection.h>
#include <javax/management/ObjectName.h>
#include <jcpp.h>

using $ConvertingMethod = ::com::sun::jmx::mbeanserver::ConvertingMethod;
using $MXBeanProxy = ::com::sun::jmx::mbeanserver::MXBeanProxy;
using $MXBeanProxy$Handler = ::com::sun::jmx::mbeanserver::MXBeanProxy$Handler;
using $AssertionError = ::java::lang::AssertionError;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $MBeanServerConnection = ::javax::management::MBeanServerConnection;
using $ObjectName = ::javax::management::ObjectName;

namespace com {
	namespace sun {
		namespace jmx {
			namespace mbeanserver {

$FieldInfo _MXBeanProxy$GetHandler_FieldInfo_[] = {
	{"$assertionsDisabled", "Z", nullptr, $STATIC | $FINAL | $SYNTHETIC, $staticField(MXBeanProxy$GetHandler, $assertionsDisabled)},
	{}
};

$MethodInfo _MXBeanProxy$GetHandler_MethodInfo_[] = {
	{"<init>", "(Ljava/lang/String;Lcom/sun/jmx/mbeanserver/ConvertingMethod;)V", nullptr, 0, $method(static_cast<void(MXBeanProxy$GetHandler::*)($String*,$ConvertingMethod*)>(&MXBeanProxy$GetHandler::init$))},
	{"invoke", "(Ljavax/management/MBeanServerConnection;Ljavax/management/ObjectName;[Ljava/lang/Object;)Ljava/lang/Object;", nullptr, 0, nullptr, "java.lang.Exception"},
	{}
};

$InnerClassInfo _MXBeanProxy$GetHandler_InnerClassesInfo_[] = {
	{"com.sun.jmx.mbeanserver.MXBeanProxy$GetHandler", "com.sun.jmx.mbeanserver.MXBeanProxy", "GetHandler", $PRIVATE | $STATIC},
	{"com.sun.jmx.mbeanserver.MXBeanProxy$Handler", "com.sun.jmx.mbeanserver.MXBeanProxy", "Handler", $PRIVATE | $STATIC | $ABSTRACT},
	{}
};

$ClassInfo _MXBeanProxy$GetHandler_ClassInfo_ = {
	$ACC_SUPER,
	"com.sun.jmx.mbeanserver.MXBeanProxy$GetHandler",
	"com.sun.jmx.mbeanserver.MXBeanProxy$Handler",
	nullptr,
	_MXBeanProxy$GetHandler_FieldInfo_,
	_MXBeanProxy$GetHandler_MethodInfo_,
	nullptr,
	nullptr,
	_MXBeanProxy$GetHandler_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.jmx.mbeanserver.MXBeanProxy"
};

$Object* allocate$MXBeanProxy$GetHandler($Class* clazz) {
	return $of($alloc(MXBeanProxy$GetHandler));
}

bool MXBeanProxy$GetHandler::$assertionsDisabled = false;

void MXBeanProxy$GetHandler::init$($String* attributeName, $ConvertingMethod* cm) {
	$MXBeanProxy$Handler::init$(attributeName, cm);
}

$Object* MXBeanProxy$GetHandler::invoke($MBeanServerConnection* mbsc, $ObjectName* name, $ObjectArray* args) {
	if (!MXBeanProxy$GetHandler::$assertionsDisabled && !(args == nullptr || $nc(args)->length == 0)) {
		$throwNew($AssertionError);
	}
	return $of($nc(mbsc)->getAttribute(name, $(getName())));
}

void clinit$MXBeanProxy$GetHandler($Class* class$) {
	$load($MXBeanProxy);
	MXBeanProxy$GetHandler::$assertionsDisabled = !$MXBeanProxy::class$->desiredAssertionStatus();
}

MXBeanProxy$GetHandler::MXBeanProxy$GetHandler() {
}

$Class* MXBeanProxy$GetHandler::load$($String* name, bool initialize) {
	$loadClass(MXBeanProxy$GetHandler, name, initialize, &_MXBeanProxy$GetHandler_ClassInfo_, clinit$MXBeanProxy$GetHandler, allocate$MXBeanProxy$GetHandler);
	return class$;
}

$Class* MXBeanProxy$GetHandler::class$ = nullptr;

			} // mbeanserver
		} // jmx
	} // sun
} // com
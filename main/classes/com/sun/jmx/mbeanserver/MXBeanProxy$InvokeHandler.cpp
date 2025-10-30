#include <com/sun/jmx/mbeanserver/MXBeanProxy$InvokeHandler.h>

#include <com/sun/jmx/mbeanserver/ConvertingMethod.h>
#include <com/sun/jmx/mbeanserver/MXBeanProxy$Handler.h>
#include <com/sun/jmx/mbeanserver/MXBeanProxy.h>
#include <javax/management/MBeanServerConnection.h>
#include <javax/management/ObjectName.h>
#include <jcpp.h>

using $ConvertingMethod = ::com::sun::jmx::mbeanserver::ConvertingMethod;
using $MXBeanProxy = ::com::sun::jmx::mbeanserver::MXBeanProxy;
using $MXBeanProxy$Handler = ::com::sun::jmx::mbeanserver::MXBeanProxy$Handler;
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

$FieldInfo _MXBeanProxy$InvokeHandler_FieldInfo_[] = {
	{"signature", "[Ljava/lang/String;", nullptr, $PRIVATE | $FINAL, $field(MXBeanProxy$InvokeHandler, signature)},
	{}
};

$MethodInfo _MXBeanProxy$InvokeHandler_MethodInfo_[] = {
	{"<init>", "(Ljava/lang/String;[Ljava/lang/String;Lcom/sun/jmx/mbeanserver/ConvertingMethod;)V", nullptr, 0, $method(static_cast<void(MXBeanProxy$InvokeHandler::*)($String*,$StringArray*,$ConvertingMethod*)>(&MXBeanProxy$InvokeHandler::init$))},
	{"invoke", "(Ljavax/management/MBeanServerConnection;Ljavax/management/ObjectName;[Ljava/lang/Object;)Ljava/lang/Object;", nullptr, 0, nullptr, "java.lang.Exception"},
	{}
};

$InnerClassInfo _MXBeanProxy$InvokeHandler_InnerClassesInfo_[] = {
	{"com.sun.jmx.mbeanserver.MXBeanProxy$InvokeHandler", "com.sun.jmx.mbeanserver.MXBeanProxy", "InvokeHandler", $PRIVATE | $STATIC},
	{"com.sun.jmx.mbeanserver.MXBeanProxy$Handler", "com.sun.jmx.mbeanserver.MXBeanProxy", "Handler", $PRIVATE | $STATIC | $ABSTRACT},
	{}
};

$ClassInfo _MXBeanProxy$InvokeHandler_ClassInfo_ = {
	$ACC_SUPER,
	"com.sun.jmx.mbeanserver.MXBeanProxy$InvokeHandler",
	"com.sun.jmx.mbeanserver.MXBeanProxy$Handler",
	nullptr,
	_MXBeanProxy$InvokeHandler_FieldInfo_,
	_MXBeanProxy$InvokeHandler_MethodInfo_,
	nullptr,
	nullptr,
	_MXBeanProxy$InvokeHandler_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.jmx.mbeanserver.MXBeanProxy"
};

$Object* allocate$MXBeanProxy$InvokeHandler($Class* clazz) {
	return $of($alloc(MXBeanProxy$InvokeHandler));
}

void MXBeanProxy$InvokeHandler::init$($String* operationName, $StringArray* signature, $ConvertingMethod* cm) {
	$MXBeanProxy$Handler::init$(operationName, cm);
	$set(this, signature, signature);
}

$Object* MXBeanProxy$InvokeHandler::invoke($MBeanServerConnection* mbsc, $ObjectName* name, $ObjectArray* args) {
	return $of($nc(mbsc)->invoke(name, $(getName()), args, this->signature));
}

MXBeanProxy$InvokeHandler::MXBeanProxy$InvokeHandler() {
}

$Class* MXBeanProxy$InvokeHandler::load$($String* name, bool initialize) {
	$loadClass(MXBeanProxy$InvokeHandler, name, initialize, &_MXBeanProxy$InvokeHandler_ClassInfo_, allocate$MXBeanProxy$InvokeHandler);
	return class$;
}

$Class* MXBeanProxy$InvokeHandler::class$ = nullptr;

			} // mbeanserver
		} // jmx
	} // sun
} // com
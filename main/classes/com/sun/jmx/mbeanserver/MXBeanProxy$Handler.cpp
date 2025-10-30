#include <com/sun/jmx/mbeanserver/MXBeanProxy$Handler.h>

#include <com/sun/jmx/mbeanserver/ConvertingMethod.h>
#include <com/sun/jmx/mbeanserver/MXBeanProxy.h>
#include <javax/management/MBeanServerConnection.h>
#include <javax/management/ObjectName.h>
#include <jcpp.h>

using $ConvertingMethod = ::com::sun::jmx::mbeanserver::ConvertingMethod;
using $MXBeanProxy = ::com::sun::jmx::mbeanserver::MXBeanProxy;
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

$FieldInfo _MXBeanProxy$Handler_FieldInfo_[] = {
	{"name", "Ljava/lang/String;", nullptr, $PRIVATE | $FINAL, $field(MXBeanProxy$Handler, name)},
	{"convertingMethod", "Lcom/sun/jmx/mbeanserver/ConvertingMethod;", nullptr, $PRIVATE | $FINAL, $field(MXBeanProxy$Handler, convertingMethod)},
	{}
};

$MethodInfo _MXBeanProxy$Handler_MethodInfo_[] = {
	{"<init>", "(Ljava/lang/String;Lcom/sun/jmx/mbeanserver/ConvertingMethod;)V", nullptr, 0, $method(static_cast<void(MXBeanProxy$Handler::*)($String*,$ConvertingMethod*)>(&MXBeanProxy$Handler::init$))},
	{"getConvertingMethod", "()Lcom/sun/jmx/mbeanserver/ConvertingMethod;", nullptr, 0},
	{"getName", "()Ljava/lang/String;", nullptr, 0},
	{"invoke", "(Ljavax/management/MBeanServerConnection;Ljavax/management/ObjectName;[Ljava/lang/Object;)Ljava/lang/Object;", nullptr, $ABSTRACT, nullptr, "java.lang.Exception"},
	{}
};

$InnerClassInfo _MXBeanProxy$Handler_InnerClassesInfo_[] = {
	{"com.sun.jmx.mbeanserver.MXBeanProxy$Handler", "com.sun.jmx.mbeanserver.MXBeanProxy", "Handler", $PRIVATE | $STATIC | $ABSTRACT},
	{}
};

$ClassInfo _MXBeanProxy$Handler_ClassInfo_ = {
	$ACC_SUPER | $ABSTRACT,
	"com.sun.jmx.mbeanserver.MXBeanProxy$Handler",
	"java.lang.Object",
	nullptr,
	_MXBeanProxy$Handler_FieldInfo_,
	_MXBeanProxy$Handler_MethodInfo_,
	nullptr,
	nullptr,
	_MXBeanProxy$Handler_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.jmx.mbeanserver.MXBeanProxy"
};

$Object* allocate$MXBeanProxy$Handler($Class* clazz) {
	return $of($alloc(MXBeanProxy$Handler));
}

void MXBeanProxy$Handler::init$($String* name, $ConvertingMethod* cm) {
	$set(this, name, name);
	$set(this, convertingMethod, cm);
}

$String* MXBeanProxy$Handler::getName() {
	return this->name;
}

$ConvertingMethod* MXBeanProxy$Handler::getConvertingMethod() {
	return this->convertingMethod;
}

MXBeanProxy$Handler::MXBeanProxy$Handler() {
}

$Class* MXBeanProxy$Handler::load$($String* name, bool initialize) {
	$loadClass(MXBeanProxy$Handler, name, initialize, &_MXBeanProxy$Handler_ClassInfo_, allocate$MXBeanProxy$Handler);
	return class$;
}

$Class* MXBeanProxy$Handler::class$ = nullptr;

			} // mbeanserver
		} // jmx
	} // sun
} // com
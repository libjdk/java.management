#include <com/sun/jmx/mbeanserver/MXBeanProxy.h>

#include <com/sun/jmx/mbeanserver/ConvertingMethod.h>
#include <com/sun/jmx/mbeanserver/MBeanAnalyzer$MBeanVisitor.h>
#include <com/sun/jmx/mbeanserver/MBeanAnalyzer.h>
#include <com/sun/jmx/mbeanserver/MXBeanIntrospector.h>
#include <com/sun/jmx/mbeanserver/MXBeanLookup.h>
#include <com/sun/jmx/mbeanserver/MXBeanProxy$Handler.h>
#include <com/sun/jmx/mbeanserver/MXBeanProxy$Visitor.h>
#include <com/sun/jmx/mbeanserver/Util.h>
#include <java/lang/reflect/Method.h>
#include <java/util/Map.h>
#include <javax/management/JMException.h>
#include <javax/management/MBeanServerConnection.h>
#include <javax/management/NotCompliantMBeanException.h>
#include <javax/management/ObjectName.h>
#include <javax/management/OperationsException.h>
#include <jcpp.h>

using $ConvertingMethod = ::com::sun::jmx::mbeanserver::ConvertingMethod;
using $MBeanAnalyzer = ::com::sun::jmx::mbeanserver::MBeanAnalyzer;
using $MBeanAnalyzer$MBeanVisitor = ::com::sun::jmx::mbeanserver::MBeanAnalyzer$MBeanVisitor;
using $MXBeanIntrospector = ::com::sun::jmx::mbeanserver::MXBeanIntrospector;
using $MXBeanLookup = ::com::sun::jmx::mbeanserver::MXBeanLookup;
using $MXBeanProxy$Handler = ::com::sun::jmx::mbeanserver::MXBeanProxy$Handler;
using $MXBeanProxy$Visitor = ::com::sun::jmx::mbeanserver::MXBeanProxy$Visitor;
using $Util = ::com::sun::jmx::mbeanserver::Util;
using $ClassInfo = ::java::lang::ClassInfo;
using $Exception = ::java::lang::Exception;
using $FieldInfo = ::java::lang::FieldInfo;
using $IllegalArgumentException = ::java::lang::IllegalArgumentException;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Method = ::java::lang::reflect::Method;
using $Map = ::java::util::Map;
using $JMException = ::javax::management::JMException;
using $MBeanServerConnection = ::javax::management::MBeanServerConnection;
using $NotCompliantMBeanException = ::javax::management::NotCompliantMBeanException;
using $ObjectName = ::javax::management::ObjectName;
using $OperationsException = ::javax::management::OperationsException;

namespace com {
	namespace sun {
		namespace jmx {
			namespace mbeanserver {

$FieldInfo _MXBeanProxy_FieldInfo_[] = {
	{"handlerMap", "Ljava/util/Map;", "Ljava/util/Map<Ljava/lang/reflect/Method;Lcom/sun/jmx/mbeanserver/MXBeanProxy$Handler;>;", $PRIVATE | $FINAL, $field(MXBeanProxy, handlerMap)},
	{}
};

$MethodInfo _MXBeanProxy_MethodInfo_[] = {
	{"<init>", "(Ljava/lang/Class;)V", "(Ljava/lang/Class<*>;)V", $PUBLIC, $method(static_cast<void(MXBeanProxy::*)($Class*)>(&MXBeanProxy::init$))},
	{"invoke", "(Ljavax/management/MBeanServerConnection;Ljavax/management/ObjectName;Ljava/lang/reflect/Method;[Ljava/lang/Object;)Ljava/lang/Object;", nullptr, $PUBLIC, nullptr, "java.lang.Throwable"},
	{}
};

$InnerClassInfo _MXBeanProxy_InnerClassesInfo_[] = {
	{"com.sun.jmx.mbeanserver.MXBeanProxy$InvokeHandler", "com.sun.jmx.mbeanserver.MXBeanProxy", "InvokeHandler", $PRIVATE | $STATIC},
	{"com.sun.jmx.mbeanserver.MXBeanProxy$SetHandler", "com.sun.jmx.mbeanserver.MXBeanProxy", "SetHandler", $PRIVATE | $STATIC},
	{"com.sun.jmx.mbeanserver.MXBeanProxy$GetHandler", "com.sun.jmx.mbeanserver.MXBeanProxy", "GetHandler", $PRIVATE | $STATIC},
	{"com.sun.jmx.mbeanserver.MXBeanProxy$Handler", "com.sun.jmx.mbeanserver.MXBeanProxy", "Handler", $PRIVATE | $STATIC | $ABSTRACT},
	{"com.sun.jmx.mbeanserver.MXBeanProxy$Visitor", "com.sun.jmx.mbeanserver.MXBeanProxy", "Visitor", $PRIVATE},
	{}
};

$ClassInfo _MXBeanProxy_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"com.sun.jmx.mbeanserver.MXBeanProxy",
	"java.lang.Object",
	nullptr,
	_MXBeanProxy_FieldInfo_,
	_MXBeanProxy_MethodInfo_,
	nullptr,
	nullptr,
	_MXBeanProxy_InnerClassesInfo_,
	nullptr,
	nullptr,
	"com.sun.jmx.mbeanserver.MXBeanProxy$InvokeHandler,com.sun.jmx.mbeanserver.MXBeanProxy$SetHandler,com.sun.jmx.mbeanserver.MXBeanProxy$GetHandler,com.sun.jmx.mbeanserver.MXBeanProxy$Handler,com.sun.jmx.mbeanserver.MXBeanProxy$Visitor"
};

$Object* allocate$MXBeanProxy($Class* clazz) {
	return $of($alloc(MXBeanProxy));
}

void MXBeanProxy::init$($Class* mxbeanInterface) {
	$useLocalCurrentObjectStackCache();
	$set(this, handlerMap, $Util::newMap());
	if (mxbeanInterface == nullptr) {
		$throwNew($IllegalArgumentException, "Null parameter"_s);
	}
	$var($MBeanAnalyzer, analyzer, nullptr);
	try {
		$assign(analyzer, $nc($($MXBeanIntrospector::getInstance()))->getAnalyzer(mxbeanInterface));
	} catch ($NotCompliantMBeanException& e) {
		$throwNew($IllegalArgumentException, static_cast<$Throwable*>(e));
	}
	$nc(analyzer)->visit($$new($MXBeanProxy$Visitor, this));
}

$Object* MXBeanProxy::invoke($MBeanServerConnection* mbsc, $ObjectName* name, $Method* method, $ObjectArray* args) {
	$useLocalCurrentObjectStackCache();
	$var($MXBeanProxy$Handler, handler, $cast($MXBeanProxy$Handler, $nc(this->handlerMap)->get(method)));
	$var($ConvertingMethod, cm, $nc(handler)->getConvertingMethod());
	$var($MXBeanLookup, lookup, $MXBeanLookup::lookupFor(mbsc));
	$var($MXBeanLookup, oldLookup, $MXBeanLookup::getLookup());
	{
		$var($Throwable, var$0, nullptr);
		$var($Object, var$2, nullptr);
		bool return$1 = false;
		try {
			$MXBeanLookup::setLookup(lookup);
			$var($ObjectArray, openArgs, $nc(cm)->toOpenParameters(lookup, args));
			$var($Object, result, handler->invoke(mbsc, name, openArgs));
			$assign(var$2, cm->fromOpenReturnValue(lookup, result));
			return$1 = true;
			goto $finally;
		} catch ($Throwable& var$3) {
			$assign(var$0, var$3);
		} $finally: {
			$MXBeanLookup::setLookup(oldLookup);
		}
		if (var$0 != nullptr) {
			$throw(var$0);
		}
		if (return$1) {
			return var$2;
		}
	}
	$shouldNotReachHere();
}

MXBeanProxy::MXBeanProxy() {
}

$Class* MXBeanProxy::load$($String* name, bool initialize) {
	$loadClass(MXBeanProxy, name, initialize, &_MXBeanProxy_ClassInfo_, allocate$MXBeanProxy);
	return class$;
}

$Class* MXBeanProxy::class$ = nullptr;

			} // mbeanserver
		} // jmx
	} // sun
} // com
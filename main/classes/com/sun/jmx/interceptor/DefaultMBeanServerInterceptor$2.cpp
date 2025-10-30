#include <com/sun/jmx/interceptor/DefaultMBeanServerInterceptor$2.h>

#include <com/sun/jmx/interceptor/DefaultMBeanServerInterceptor.h>
#include <java/lang/ClassLoader.h>
#include <javax/management/ObjectName.h>
#include <jcpp.h>

using $DefaultMBeanServerInterceptor = ::com::sun::jmx::interceptor::DefaultMBeanServerInterceptor;
using $DefaultMBeanServerInterceptor$ResourceContext = ::com::sun::jmx::interceptor::DefaultMBeanServerInterceptor$ResourceContext;
using $ClassInfo = ::java::lang::ClassInfo;
using $ClassLoader = ::java::lang::ClassLoader;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $ObjectName = ::javax::management::ObjectName;

namespace com {
	namespace sun {
		namespace jmx {
			namespace interceptor {

$FieldInfo _DefaultMBeanServerInterceptor$2_FieldInfo_[] = {
	{"this$0", "Lcom/sun/jmx/interceptor/DefaultMBeanServerInterceptor;", nullptr, $FINAL | $SYNTHETIC, $field(DefaultMBeanServerInterceptor$2, this$0)},
	{"val$logicalName", "Ljavax/management/ObjectName;", nullptr, $FINAL | $SYNTHETIC, $field(DefaultMBeanServerInterceptor$2, val$logicalName)},
	{"val$loader", "Ljava/lang/ClassLoader;", nullptr, $FINAL | $SYNTHETIC, $field(DefaultMBeanServerInterceptor$2, val$loader)},
	{}
};

$MethodInfo _DefaultMBeanServerInterceptor$2_MethodInfo_[] = {
	{"<init>", "(Lcom/sun/jmx/interceptor/DefaultMBeanServerInterceptor;Ljava/lang/ClassLoader;Ljavax/management/ObjectName;)V", "()V", 0, $method(static_cast<void(DefaultMBeanServerInterceptor$2::*)($DefaultMBeanServerInterceptor*,$ClassLoader*,$ObjectName*)>(&DefaultMBeanServerInterceptor$2::init$))},
	{"done", "()V", nullptr, $PUBLIC},
	{"registering", "()V", nullptr, $PUBLIC},
	{"unregistered", "()V", nullptr, $PUBLIC},
	{}
};

$EnclosingMethodInfo _DefaultMBeanServerInterceptor$2_EnclosingMethodInfo_ = {
	"com.sun.jmx.interceptor.DefaultMBeanServerInterceptor",
	"createClassLoaderContext",
	"(Ljava/lang/ClassLoader;Ljavax/management/ObjectName;)Lcom/sun/jmx/interceptor/DefaultMBeanServerInterceptor$ResourceContext;"
};

$InnerClassInfo _DefaultMBeanServerInterceptor$2_InnerClassesInfo_[] = {
	{"com.sun.jmx.interceptor.DefaultMBeanServerInterceptor$2", nullptr, nullptr, 0},
	{"com.sun.jmx.interceptor.DefaultMBeanServerInterceptor$ResourceContext", "com.sun.jmx.interceptor.DefaultMBeanServerInterceptor", "ResourceContext", $PRIVATE | $STATIC | $INTERFACE | $ABSTRACT},
	{}
};

$ClassInfo _DefaultMBeanServerInterceptor$2_ClassInfo_ = {
	$ACC_SUPER,
	"com.sun.jmx.interceptor.DefaultMBeanServerInterceptor$2",
	"java.lang.Object",
	"com.sun.jmx.interceptor.DefaultMBeanServerInterceptor$ResourceContext",
	_DefaultMBeanServerInterceptor$2_FieldInfo_,
	_DefaultMBeanServerInterceptor$2_MethodInfo_,
	nullptr,
	&_DefaultMBeanServerInterceptor$2_EnclosingMethodInfo_,
	_DefaultMBeanServerInterceptor$2_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.jmx.interceptor.DefaultMBeanServerInterceptor"
};

$Object* allocate$DefaultMBeanServerInterceptor$2($Class* clazz) {
	return $of($alloc(DefaultMBeanServerInterceptor$2));
}

void DefaultMBeanServerInterceptor$2::init$($DefaultMBeanServerInterceptor* this$0, $ClassLoader* val$loader, $ObjectName* val$logicalName) {
	$set(this, this$0, this$0);
	$set(this, val$loader, val$loader);
	$set(this, val$logicalName, val$logicalName);
}

void DefaultMBeanServerInterceptor$2::registering() {
	this->this$0->addClassLoader(this->val$loader, this->val$logicalName);
}

void DefaultMBeanServerInterceptor$2::unregistered() {
	this->this$0->removeClassLoader(this->val$loader, this->val$logicalName);
}

void DefaultMBeanServerInterceptor$2::done() {
}

DefaultMBeanServerInterceptor$2::DefaultMBeanServerInterceptor$2() {
}

$Class* DefaultMBeanServerInterceptor$2::load$($String* name, bool initialize) {
	$loadClass(DefaultMBeanServerInterceptor$2, name, initialize, &_DefaultMBeanServerInterceptor$2_ClassInfo_, allocate$DefaultMBeanServerInterceptor$2);
	return class$;
}

$Class* DefaultMBeanServerInterceptor$2::class$ = nullptr;

			} // interceptor
		} // jmx
	} // sun
} // com
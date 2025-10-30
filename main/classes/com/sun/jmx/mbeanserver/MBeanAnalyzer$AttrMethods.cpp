#include <com/sun/jmx/mbeanserver/MBeanAnalyzer$AttrMethods.h>

#include <com/sun/jmx/mbeanserver/MBeanAnalyzer.h>
#include <jcpp.h>

using $MBeanAnalyzer = ::com::sun::jmx::mbeanserver::MBeanAnalyzer;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace com {
	namespace sun {
		namespace jmx {
			namespace mbeanserver {

$FieldInfo _MBeanAnalyzer$AttrMethods_FieldInfo_[] = {
	{"getter", "Ljava/lang/Object;", "TM;", 0, $field(MBeanAnalyzer$AttrMethods, getter)},
	{"setter", "Ljava/lang/Object;", "TM;", 0, $field(MBeanAnalyzer$AttrMethods, setter)},
	{}
};

$MethodInfo _MBeanAnalyzer$AttrMethods_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PRIVATE, $method(static_cast<void(MBeanAnalyzer$AttrMethods::*)()>(&MBeanAnalyzer$AttrMethods::init$))},
	{}
};

$InnerClassInfo _MBeanAnalyzer$AttrMethods_InnerClassesInfo_[] = {
	{"com.sun.jmx.mbeanserver.MBeanAnalyzer$AttrMethods", "com.sun.jmx.mbeanserver.MBeanAnalyzer", "AttrMethods", $PRIVATE | $STATIC},
	{}
};

$ClassInfo _MBeanAnalyzer$AttrMethods_ClassInfo_ = {
	$ACC_SUPER,
	"com.sun.jmx.mbeanserver.MBeanAnalyzer$AttrMethods",
	"java.lang.Object",
	nullptr,
	_MBeanAnalyzer$AttrMethods_FieldInfo_,
	_MBeanAnalyzer$AttrMethods_MethodInfo_,
	"<M:Ljava/lang/Object;>Ljava/lang/Object;",
	nullptr,
	_MBeanAnalyzer$AttrMethods_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.jmx.mbeanserver.MBeanAnalyzer"
};

$Object* allocate$MBeanAnalyzer$AttrMethods($Class* clazz) {
	return $of($alloc(MBeanAnalyzer$AttrMethods));
}

void MBeanAnalyzer$AttrMethods::init$() {
}

MBeanAnalyzer$AttrMethods::MBeanAnalyzer$AttrMethods() {
}

$Class* MBeanAnalyzer$AttrMethods::load$($String* name, bool initialize) {
	$loadClass(MBeanAnalyzer$AttrMethods, name, initialize, &_MBeanAnalyzer$AttrMethods_ClassInfo_, allocate$MBeanAnalyzer$AttrMethods);
	return class$;
}

$Class* MBeanAnalyzer$AttrMethods::class$ = nullptr;

			} // mbeanserver
		} // jmx
	} // sun
} // com
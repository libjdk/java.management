#include <com/sun/jmx/mbeanserver/MBeanAnalyzer$MBeanVisitor.h>

#include <com/sun/jmx/mbeanserver/MBeanAnalyzer.h>
#include <jcpp.h>

using $MBeanAnalyzer = ::com::sun::jmx::mbeanserver::MBeanAnalyzer;
using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace com {
	namespace sun {
		namespace jmx {
			namespace mbeanserver {

$MethodInfo _MBeanAnalyzer$MBeanVisitor_MethodInfo_[] = {
	{"visitAttribute", "(Ljava/lang/String;Ljava/lang/Object;Ljava/lang/Object;)V", "(Ljava/lang/String;TM;TM;)V", $PUBLIC | $ABSTRACT},
	{"visitOperation", "(Ljava/lang/String;Ljava/lang/Object;)V", "(Ljava/lang/String;TM;)V", $PUBLIC | $ABSTRACT},
	{}
};

$InnerClassInfo _MBeanAnalyzer$MBeanVisitor_InnerClassesInfo_[] = {
	{"com.sun.jmx.mbeanserver.MBeanAnalyzer$MBeanVisitor", "com.sun.jmx.mbeanserver.MBeanAnalyzer", "MBeanVisitor", $STATIC | $INTERFACE | $ABSTRACT},
	{}
};

$ClassInfo _MBeanAnalyzer$MBeanVisitor_ClassInfo_ = {
	$INTERFACE | $ABSTRACT,
	"com.sun.jmx.mbeanserver.MBeanAnalyzer$MBeanVisitor",
	nullptr,
	nullptr,
	nullptr,
	_MBeanAnalyzer$MBeanVisitor_MethodInfo_,
	"<M:Ljava/lang/Object;>Ljava/lang/Object;",
	nullptr,
	_MBeanAnalyzer$MBeanVisitor_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.jmx.mbeanserver.MBeanAnalyzer"
};

$Object* allocate$MBeanAnalyzer$MBeanVisitor($Class* clazz) {
	return $of($alloc(MBeanAnalyzer$MBeanVisitor));
}

$Class* MBeanAnalyzer$MBeanVisitor::load$($String* name, bool initialize) {
	$loadClass(MBeanAnalyzer$MBeanVisitor, name, initialize, &_MBeanAnalyzer$MBeanVisitor_ClassInfo_, allocate$MBeanAnalyzer$MBeanVisitor);
	return class$;
}

$Class* MBeanAnalyzer$MBeanVisitor::class$ = nullptr;

			} // mbeanserver
		} // jmx
	} // sun
} // com
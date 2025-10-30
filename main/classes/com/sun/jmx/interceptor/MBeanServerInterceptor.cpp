#include <com/sun/jmx/interceptor/MBeanServerInterceptor.h>

#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $MBeanServer = ::javax::management::MBeanServer;

namespace com {
	namespace sun {
		namespace jmx {
			namespace interceptor {

$MethodInfo _MBeanServerInterceptor_MethodInfo_[] = {
	{"instantiate", "(Ljava/lang/String;)Ljava/lang/Object;", nullptr, $PUBLIC | $ABSTRACT},
	{"instantiate", "(Ljava/lang/String;Ljavax/management/ObjectName;)Ljava/lang/Object;", nullptr, $PUBLIC | $ABSTRACT},
	{"instantiate", "(Ljava/lang/String;[Ljava/lang/Object;[Ljava/lang/String;)Ljava/lang/Object;", nullptr, $PUBLIC | $ABSTRACT},
	{"instantiate", "(Ljava/lang/String;Ljavax/management/ObjectName;[Ljava/lang/Object;[Ljava/lang/String;)Ljava/lang/Object;", nullptr, $PUBLIC | $ABSTRACT},
	{"getClassLoaderRepository", "()Ljavax/management/loading/ClassLoaderRepository;", nullptr, $PUBLIC | $ABSTRACT},
	{}
};

$ClassInfo _MBeanServerInterceptor_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT,
	"com.sun.jmx.interceptor.MBeanServerInterceptor",
	nullptr,
	"javax.management.MBeanServer",
	nullptr,
	_MBeanServerInterceptor_MethodInfo_
};

$Object* allocate$MBeanServerInterceptor($Class* clazz) {
	return $of($alloc(MBeanServerInterceptor));
}

$Class* MBeanServerInterceptor::load$($String* name, bool initialize) {
	$loadClass(MBeanServerInterceptor, name, initialize, &_MBeanServerInterceptor_ClassInfo_, allocate$MBeanServerInterceptor);
	return class$;
}

$Class* MBeanServerInterceptor::class$ = nullptr;

			} // interceptor
		} // jmx
	} // sun
} // com
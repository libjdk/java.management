#include <javax/management/monitor/MonitorMBean.h>

#include <javax/management/ObjectName.h>
#include <jcpp.h>

using $ObjectNameArray = $Array<::javax::management::ObjectName>;
using $ClassInfo = ::java::lang::ClassInfo;
using $CompoundAttribute = ::java::lang::CompoundAttribute;
using $MethodInfo = ::java::lang::MethodInfo;
using $ObjectName = ::javax::management::ObjectName;

namespace javax {
	namespace management {
		namespace monitor {

$CompoundAttribute _MonitorMBean_MethodAnnotations_getObservedObject4[] = {
	{"Ljava/lang/Deprecated;", nullptr},
	{}
};

$CompoundAttribute _MonitorMBean_MethodAnnotations_setObservedObject10[] = {
	{"Ljava/lang/Deprecated;", nullptr},
	{}
};

$MethodInfo _MonitorMBean_MethodInfo_[] = {
	{"addObservedObject", "(Ljavax/management/ObjectName;)V", nullptr, $PUBLIC | $ABSTRACT, nullptr, "java.lang.IllegalArgumentException"},
	{"containsObservedObject", "(Ljavax/management/ObjectName;)Z", nullptr, $PUBLIC | $ABSTRACT},
	{"getGranularityPeriod", "()J", nullptr, $PUBLIC | $ABSTRACT},
	{"getObservedAttribute", "()Ljava/lang/String;", nullptr, $PUBLIC | $ABSTRACT},
	{"getObservedObject", "()Ljavax/management/ObjectName;", nullptr, $PUBLIC | $ABSTRACT | $DEPRECATED, nullptr, nullptr, nullptr, _MonitorMBean_MethodAnnotations_getObservedObject4},
	{"getObservedObjects", "()[Ljavax/management/ObjectName;", nullptr, $PUBLIC | $ABSTRACT},
	{"isActive", "()Z", nullptr, $PUBLIC | $ABSTRACT},
	{"removeObservedObject", "(Ljavax/management/ObjectName;)V", nullptr, $PUBLIC | $ABSTRACT},
	{"setGranularityPeriod", "(J)V", nullptr, $PUBLIC | $ABSTRACT, nullptr, "java.lang.IllegalArgumentException"},
	{"setObservedAttribute", "(Ljava/lang/String;)V", nullptr, $PUBLIC | $ABSTRACT},
	{"setObservedObject", "(Ljavax/management/ObjectName;)V", nullptr, $PUBLIC | $ABSTRACT | $DEPRECATED, nullptr, nullptr, nullptr, _MonitorMBean_MethodAnnotations_setObservedObject10},
	{"start", "()V", nullptr, $PUBLIC | $ABSTRACT},
	{"stop", "()V", nullptr, $PUBLIC | $ABSTRACT},
	{}
};

$ClassInfo _MonitorMBean_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT,
	"javax.management.monitor.MonitorMBean",
	nullptr,
	nullptr,
	nullptr,
	_MonitorMBean_MethodInfo_
};

$Object* allocate$MonitorMBean($Class* clazz) {
	return $of($alloc(MonitorMBean));
}

$Class* MonitorMBean::load$($String* name, bool initialize) {
	$loadClass(MonitorMBean, name, initialize, &_MonitorMBean_ClassInfo_, allocate$MonitorMBean);
	return class$;
}

$Class* MonitorMBean::class$ = nullptr;

		} // monitor
	} // management
} // javax
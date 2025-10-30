#include <javax/management/monitor/StringMonitorMBean.h>

#include <javax/management/ObjectName.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $CompoundAttribute = ::java::lang::CompoundAttribute;
using $MethodInfo = ::java::lang::MethodInfo;
using $ObjectName = ::javax::management::ObjectName;
using $MonitorMBean = ::javax::management::monitor::MonitorMBean;

namespace javax {
	namespace management {
		namespace monitor {

$CompoundAttribute _StringMonitorMBean_MethodAnnotations_getDerivedGauge0[] = {
	{"Ljava/lang/Deprecated;", nullptr},
	{}
};

$CompoundAttribute _StringMonitorMBean_MethodAnnotations_getDerivedGaugeTimeStamp2[] = {
	{"Ljava/lang/Deprecated;", nullptr},
	{}
};

$MethodInfo _StringMonitorMBean_MethodInfo_[] = {
	{"getDerivedGauge", "()Ljava/lang/String;", nullptr, $PUBLIC | $ABSTRACT | $DEPRECATED, nullptr, nullptr, nullptr, _StringMonitorMBean_MethodAnnotations_getDerivedGauge0},
	{"getDerivedGauge", "(Ljavax/management/ObjectName;)Ljava/lang/String;", nullptr, $PUBLIC | $ABSTRACT},
	{"getDerivedGaugeTimeStamp", "()J", nullptr, $PUBLIC | $ABSTRACT | $DEPRECATED, nullptr, nullptr, nullptr, _StringMonitorMBean_MethodAnnotations_getDerivedGaugeTimeStamp2},
	{"getDerivedGaugeTimeStamp", "(Ljavax/management/ObjectName;)J", nullptr, $PUBLIC | $ABSTRACT},
	{"getNotifyDiffer", "()Z", nullptr, $PUBLIC | $ABSTRACT},
	{"getNotifyMatch", "()Z", nullptr, $PUBLIC | $ABSTRACT},
	{"getStringToCompare", "()Ljava/lang/String;", nullptr, $PUBLIC | $ABSTRACT},
	{"setNotifyDiffer", "(Z)V", nullptr, $PUBLIC | $ABSTRACT},
	{"setNotifyMatch", "(Z)V", nullptr, $PUBLIC | $ABSTRACT},
	{"setStringToCompare", "(Ljava/lang/String;)V", nullptr, $PUBLIC | $ABSTRACT, nullptr, "java.lang.IllegalArgumentException"},
	{}
};

$ClassInfo _StringMonitorMBean_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT,
	"javax.management.monitor.StringMonitorMBean",
	nullptr,
	"javax.management.monitor.MonitorMBean",
	nullptr,
	_StringMonitorMBean_MethodInfo_
};

$Object* allocate$StringMonitorMBean($Class* clazz) {
	return $of($alloc(StringMonitorMBean));
}

$Class* StringMonitorMBean::load$($String* name, bool initialize) {
	$loadClass(StringMonitorMBean, name, initialize, &_StringMonitorMBean_ClassInfo_, allocate$StringMonitorMBean);
	return class$;
}

$Class* StringMonitorMBean::class$ = nullptr;

		} // monitor
	} // management
} // javax
#include <javax/management/monitor/GaugeMonitorMBean.h>

#include <java/lang/Number.h>
#include <javax/management/ObjectName.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $CompoundAttribute = ::java::lang::CompoundAttribute;
using $MethodInfo = ::java::lang::MethodInfo;
using $Number = ::java::lang::Number;
using $ObjectName = ::javax::management::ObjectName;
using $MonitorMBean = ::javax::management::monitor::MonitorMBean;

namespace javax {
	namespace management {
		namespace monitor {

$CompoundAttribute _GaugeMonitorMBean_MethodAnnotations_getDerivedGauge0[] = {
	{"Ljava/lang/Deprecated;", nullptr},
	{}
};

$CompoundAttribute _GaugeMonitorMBean_MethodAnnotations_getDerivedGaugeTimeStamp2[] = {
	{"Ljava/lang/Deprecated;", nullptr},
	{}
};

$MethodInfo _GaugeMonitorMBean_MethodInfo_[] = {
	{"getDerivedGauge", "()Ljava/lang/Number;", nullptr, $PUBLIC | $ABSTRACT | $DEPRECATED, nullptr, nullptr, nullptr, _GaugeMonitorMBean_MethodAnnotations_getDerivedGauge0},
	{"getDerivedGauge", "(Ljavax/management/ObjectName;)Ljava/lang/Number;", nullptr, $PUBLIC | $ABSTRACT},
	{"getDerivedGaugeTimeStamp", "()J", nullptr, $PUBLIC | $ABSTRACT | $DEPRECATED, nullptr, nullptr, nullptr, _GaugeMonitorMBean_MethodAnnotations_getDerivedGaugeTimeStamp2},
	{"getDerivedGaugeTimeStamp", "(Ljavax/management/ObjectName;)J", nullptr, $PUBLIC | $ABSTRACT},
	{"getDifferenceMode", "()Z", nullptr, $PUBLIC | $ABSTRACT},
	{"getHighThreshold", "()Ljava/lang/Number;", nullptr, $PUBLIC | $ABSTRACT},
	{"getLowThreshold", "()Ljava/lang/Number;", nullptr, $PUBLIC | $ABSTRACT},
	{"getNotifyHigh", "()Z", nullptr, $PUBLIC | $ABSTRACT},
	{"getNotifyLow", "()Z", nullptr, $PUBLIC | $ABSTRACT},
	{"setDifferenceMode", "(Z)V", nullptr, $PUBLIC | $ABSTRACT},
	{"setNotifyHigh", "(Z)V", nullptr, $PUBLIC | $ABSTRACT},
	{"setNotifyLow", "(Z)V", nullptr, $PUBLIC | $ABSTRACT},
	{"setThresholds", "(Ljava/lang/Number;Ljava/lang/Number;)V", nullptr, $PUBLIC | $ABSTRACT, nullptr, "java.lang.IllegalArgumentException"},
	{}
};

$ClassInfo _GaugeMonitorMBean_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT,
	"javax.management.monitor.GaugeMonitorMBean",
	nullptr,
	"javax.management.monitor.MonitorMBean",
	nullptr,
	_GaugeMonitorMBean_MethodInfo_
};

$Object* allocate$GaugeMonitorMBean($Class* clazz) {
	return $of($alloc(GaugeMonitorMBean));
}

$Class* GaugeMonitorMBean::load$($String* name, bool initialize) {
	$loadClass(GaugeMonitorMBean, name, initialize, &_GaugeMonitorMBean_ClassInfo_, allocate$GaugeMonitorMBean);
	return class$;
}

$Class* GaugeMonitorMBean::class$ = nullptr;

		} // monitor
	} // management
} // javax
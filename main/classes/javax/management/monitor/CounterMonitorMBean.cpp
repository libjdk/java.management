#include <javax/management/monitor/CounterMonitorMBean.h>

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

$CompoundAttribute _CounterMonitorMBean_MethodAnnotations_getDerivedGauge0[] = {
	{"Ljava/lang/Deprecated;", nullptr},
	{}
};

$CompoundAttribute _CounterMonitorMBean_MethodAnnotations_getDerivedGaugeTimeStamp2[] = {
	{"Ljava/lang/Deprecated;", nullptr},
	{}
};

$CompoundAttribute _CounterMonitorMBean_MethodAnnotations_getThreshold9[] = {
	{"Ljava/lang/Deprecated;", nullptr},
	{}
};

$CompoundAttribute _CounterMonitorMBean_MethodAnnotations_setThreshold16[] = {
	{"Ljava/lang/Deprecated;", nullptr},
	{}
};

$MethodInfo _CounterMonitorMBean_MethodInfo_[] = {
	{"getDerivedGauge", "()Ljava/lang/Number;", nullptr, $PUBLIC | $ABSTRACT | $DEPRECATED, nullptr, nullptr, nullptr, _CounterMonitorMBean_MethodAnnotations_getDerivedGauge0},
	{"getDerivedGauge", "(Ljavax/management/ObjectName;)Ljava/lang/Number;", nullptr, $PUBLIC | $ABSTRACT},
	{"getDerivedGaugeTimeStamp", "()J", nullptr, $PUBLIC | $ABSTRACT | $DEPRECATED, nullptr, nullptr, nullptr, _CounterMonitorMBean_MethodAnnotations_getDerivedGaugeTimeStamp2},
	{"getDerivedGaugeTimeStamp", "(Ljavax/management/ObjectName;)J", nullptr, $PUBLIC | $ABSTRACT},
	{"getDifferenceMode", "()Z", nullptr, $PUBLIC | $ABSTRACT},
	{"getInitThreshold", "()Ljava/lang/Number;", nullptr, $PUBLIC | $ABSTRACT},
	{"getModulus", "()Ljava/lang/Number;", nullptr, $PUBLIC | $ABSTRACT},
	{"getNotify", "()Z", nullptr, $PUBLIC | $ABSTRACT},
	{"getOffset", "()Ljava/lang/Number;", nullptr, $PUBLIC | $ABSTRACT},
	{"getThreshold", "()Ljava/lang/Number;", nullptr, $PUBLIC | $ABSTRACT | $DEPRECATED, nullptr, nullptr, nullptr, _CounterMonitorMBean_MethodAnnotations_getThreshold9},
	{"getThreshold", "(Ljavax/management/ObjectName;)Ljava/lang/Number;", nullptr, $PUBLIC | $ABSTRACT},
	{"setDifferenceMode", "(Z)V", nullptr, $PUBLIC | $ABSTRACT},
	{"setInitThreshold", "(Ljava/lang/Number;)V", nullptr, $PUBLIC | $ABSTRACT, nullptr, "java.lang.IllegalArgumentException"},
	{"setModulus", "(Ljava/lang/Number;)V", nullptr, $PUBLIC | $ABSTRACT, nullptr, "java.lang.IllegalArgumentException"},
	{"setNotify", "(Z)V", nullptr, $PUBLIC | $ABSTRACT},
	{"setOffset", "(Ljava/lang/Number;)V", nullptr, $PUBLIC | $ABSTRACT, nullptr, "java.lang.IllegalArgumentException"},
	{"setThreshold", "(Ljava/lang/Number;)V", nullptr, $PUBLIC | $ABSTRACT | $DEPRECATED, nullptr, "java.lang.IllegalArgumentException", nullptr, _CounterMonitorMBean_MethodAnnotations_setThreshold16},
	{}
};

$ClassInfo _CounterMonitorMBean_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT,
	"javax.management.monitor.CounterMonitorMBean",
	nullptr,
	"javax.management.monitor.MonitorMBean",
	nullptr,
	_CounterMonitorMBean_MethodInfo_
};

$Object* allocate$CounterMonitorMBean($Class* clazz) {
	return $of($alloc(CounterMonitorMBean));
}

$Class* CounterMonitorMBean::load$($String* name, bool initialize) {
	$loadClass(CounterMonitorMBean, name, initialize, &_CounterMonitorMBean_ClassInfo_, allocate$CounterMonitorMBean);
	return class$;
}

$Class* CounterMonitorMBean::class$ = nullptr;

		} // monitor
	} // management
} // javax
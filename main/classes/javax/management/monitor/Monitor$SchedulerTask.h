#ifndef _javax_management_monitor_Monitor$SchedulerTask_h_
#define _javax_management_monitor_Monitor$SchedulerTask_h_
//$ class javax.management.monitor.Monitor$SchedulerTask
//$ extends java.lang.Runnable

#include <java/lang/Runnable.h>

namespace javax {
	namespace management {
		namespace monitor {
			class Monitor;
			class Monitor$MonitorTask;
		}
	}
}

namespace javax {
	namespace management {
		namespace monitor {

class Monitor$SchedulerTask : public ::java::lang::Runnable {
	$class(Monitor$SchedulerTask, $NO_CLASS_INIT, ::java::lang::Runnable)
public:
	Monitor$SchedulerTask();
	void init$(::javax::management::monitor::Monitor* this$0);
	virtual void run() override;
	virtual void setMonitorTask(::javax::management::monitor::Monitor$MonitorTask* task);
	::javax::management::monitor::Monitor* this$0 = nullptr;
	::javax::management::monitor::Monitor$MonitorTask* task = nullptr;
};

		} // monitor
	} // management
} // javax

#endif // _javax_management_monitor_Monitor$SchedulerTask_h_
#ifndef _javax_management_monitor_Monitor$MonitorTask_h_
#define _javax_management_monitor_Monitor$MonitorTask_h_
//$ class javax.management.monitor.Monitor$MonitorTask
//$ extends java.lang.Runnable

#include <java/lang/Runnable.h>

namespace java {
	namespace util {
		namespace concurrent {
			class Future;
			class ThreadPoolExecutor;
		}
	}
}
namespace javax {
	namespace management {
		namespace monitor {
			class Monitor;
		}
	}
}

namespace javax {
	namespace management {
		namespace monitor {

class Monitor$MonitorTask : public ::java::lang::Runnable {
	$class(Monitor$MonitorTask, $NO_CLASS_INIT, ::java::lang::Runnable)
public:
	Monitor$MonitorTask();
	void init$(::javax::management::monitor::Monitor* this$0);
	virtual void run() override;
	virtual ::java::util::concurrent::Future* submit();
	::javax::management::monitor::Monitor* this$0 = nullptr;
	::java::util::concurrent::ThreadPoolExecutor* executor = nullptr;
};

		} // monitor
	} // management
} // javax

#endif // _javax_management_monitor_Monitor$MonitorTask_h_
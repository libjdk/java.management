#ifndef _javax_management_monitor_Monitor$MonitorTask$1_h_
#define _javax_management_monitor_Monitor$MonitorTask$1_h_
//$ class javax.management.monitor.Monitor$MonitorTask$1
//$ extends java.security.PrivilegedAction

#include <java/security/PrivilegedAction.h>

namespace javax {
	namespace management {
		namespace monitor {
			class Monitor$MonitorTask;
		}
	}
}

namespace javax {
	namespace management {
		namespace monitor {

class Monitor$MonitorTask$1 : public ::java::security::PrivilegedAction {
	$class(Monitor$MonitorTask$1, $NO_CLASS_INIT, ::java::security::PrivilegedAction)
public:
	Monitor$MonitorTask$1();
	void init$(::javax::management::monitor::Monitor$MonitorTask* this$1);
	virtual $Object* run() override;
	::javax::management::monitor::Monitor$MonitorTask* this$1 = nullptr;
};

		} // monitor
	} // management
} // javax

#endif // _javax_management_monitor_Monitor$MonitorTask$1_h_
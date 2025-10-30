#ifndef _javax_management_monitor_MonitorSettingException_h_
#define _javax_management_monitor_MonitorSettingException_h_
//$ class javax.management.monitor.MonitorSettingException
//$ extends javax.management.JMRuntimeException

#include <javax/management/JMRuntimeException.h>

namespace javax {
	namespace management {
		namespace monitor {

class $import MonitorSettingException : public ::javax::management::JMRuntimeException {
	$class(MonitorSettingException, $NO_CLASS_INIT, ::javax::management::JMRuntimeException)
public:
	MonitorSettingException();
	void init$();
	void init$($String* message);
	static const int64_t serialVersionUID = (int64_t)0x85C4016998605B69;
	MonitorSettingException(const MonitorSettingException& e);
	virtual void throw$() override;
	inline MonitorSettingException* operator ->() {
		return (MonitorSettingException*)throwing$;
	}
};

		} // monitor
	} // management
} // javax

#endif // _javax_management_monitor_MonitorSettingException_h_
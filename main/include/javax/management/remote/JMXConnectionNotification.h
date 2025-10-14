#ifndef _javax_management_remote_JMXConnectionNotification_h_
#define _javax_management_remote_JMXConnectionNotification_h_
//$ class javax.management.remote.JMXConnectionNotification
//$ extends javax.management.Notification

#include <javax/management/Notification.h>

#pragma push_macro("CLOSED")
#undef CLOSED
#pragma push_macro("FAILED")
#undef FAILED
#pragma push_macro("NOTIFS_LOST")
#undef NOTIFS_LOST
#pragma push_macro("OPENED")
#undef OPENED

namespace javax {
	namespace management {
		namespace remote {

class $import JMXConnectionNotification : public ::javax::management::Notification {
	$class(JMXConnectionNotification, 0, ::javax::management::Notification)
public:
	JMXConnectionNotification();
	void init$($String* type, Object$* source, $String* connectionId, int64_t sequenceNumber, $String* message, Object$* userData);
	virtual $String* getConnectionId();
	static $Object* nonNull(Object$* arg);
	static const int64_t serialVersionUID = (int64_t)0xDFA58710C7D33CAE;
	static $String* OPENED;
	static $String* CLOSED;
	static $String* FAILED;
	static $String* NOTIFS_LOST;
	$String* connectionId = nullptr;
};

		} // remote
	} // management
} // javax

#pragma pop_macro("CLOSED")
#pragma pop_macro("FAILED")
#pragma pop_macro("NOTIFS_LOST")
#pragma pop_macro("OPENED")

#endif // _javax_management_remote_JMXConnectionNotification_h_
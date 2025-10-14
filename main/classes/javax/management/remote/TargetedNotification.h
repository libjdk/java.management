#ifndef _javax_management_remote_TargetedNotification_h_
#define _javax_management_remote_TargetedNotification_h_
//$ class javax.management.remote.TargetedNotification
//$ extends java.io.Serializable

#include <java/io/Serializable.h>

namespace java {
	namespace io {
		class ObjectInputStream;
	}
}
namespace java {
	namespace lang {
		class Integer;
	}
}
namespace javax {
	namespace management {
		class Notification;
	}
}

namespace javax {
	namespace management {
		namespace remote {

class $export TargetedNotification : public ::java::io::Serializable {
	$class(TargetedNotification, $NO_CLASS_INIT, ::java::io::Serializable)
public:
	TargetedNotification();
	void init$(::javax::management::Notification* notification, ::java::lang::Integer* listenerID);
	virtual ::java::lang::Integer* getListenerID();
	virtual ::javax::management::Notification* getNotification();
	void readObject(::java::io::ObjectInputStream* ois);
	virtual $String* toString() override;
	static void validate(::javax::management::Notification* notif, ::java::lang::Integer* id);
	static const int64_t serialVersionUID = (int64_t)0x6A8719773C45AA3E;
	::javax::management::Notification* notif = nullptr;
	::java::lang::Integer* id = nullptr;
};

		} // remote
	} // management
} // javax

#endif // _javax_management_remote_TargetedNotification_h_
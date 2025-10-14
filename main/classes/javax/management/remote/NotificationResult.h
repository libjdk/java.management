#ifndef _javax_management_remote_NotificationResult_h_
#define _javax_management_remote_NotificationResult_h_
//$ class javax.management.remote.NotificationResult
//$ extends java.io.Serializable

#include <java/io/Serializable.h>
#include <java/lang/Array.h>

namespace java {
	namespace io {
		class ObjectInputStream;
	}
}
namespace javax {
	namespace management {
		namespace remote {
			class TargetedNotification;
		}
	}
}

namespace javax {
	namespace management {
		namespace remote {

class $export NotificationResult : public ::java::io::Serializable {
	$class(NotificationResult, $NO_CLASS_INIT, ::java::io::Serializable)
public:
	NotificationResult();
	void init$(int64_t earliestSequenceNumber, int64_t nextSequenceNumber, $Array<::javax::management::remote::TargetedNotification>* targetedNotifications);
	virtual int64_t getEarliestSequenceNumber();
	virtual int64_t getNextSequenceNumber();
	virtual $Array<::javax::management::remote::TargetedNotification>* getTargetedNotifications();
	void readObject(::java::io::ObjectInputStream* ois);
	virtual $String* toString() override;
	static void validate($Array<::javax::management::remote::TargetedNotification>* targetedNotifications, int64_t earliestSequenceNumber, int64_t nextSequenceNumber);
	static const int64_t serialVersionUID = (int64_t)0x108A1FFE5C2B064F;
	int64_t earliestSequenceNumber = 0;
	int64_t nextSequenceNumber = 0;
	$Array<::javax::management::remote::TargetedNotification>* targetedNotifications = nullptr;
};

		} // remote
	} // management
} // javax

#endif // _javax_management_remote_NotificationResult_h_
#ifndef _javax_management_Notification_h_
#define _javax_management_Notification_h_
//$ class javax.management.Notification
//$ extends java.util.EventObject

#include <java/lang/Array.h>
#include <java/util/EventObject.h>

namespace java {
	namespace io {
		class ObjectInputStream;
		class ObjectOutputStream;
		class ObjectStreamField;
	}
}

namespace javax {
	namespace management {

class $export Notification : public ::java::util::EventObject {
	$class(Notification, 0, ::java::util::EventObject)
public:
	Notification();
	void init$($String* type, Object$* source, int64_t sequenceNumber);
	void init$($String* type, Object$* source, int64_t sequenceNumber, $String* message);
	void init$($String* type, Object$* source, int64_t sequenceNumber, int64_t timeStamp);
	void init$($String* type, Object$* source, int64_t sequenceNumber, int64_t timeStamp, $String* message);
	virtual $String* getMessage();
	virtual int64_t getSequenceNumber();
	virtual int64_t getTimeStamp();
	virtual $String* getType();
	virtual $Object* getUserData();
	void readObject(::java::io::ObjectInputStream* in);
	virtual void setSequenceNumber(int64_t sequenceNumber);
	virtual void setSource(Object$* source);
	virtual void setTimeStamp(int64_t timeStamp);
	virtual void setUserData(Object$* userData);
	virtual $String* toString() override;
	void writeObject(::java::io::ObjectOutputStream* out);
	static const int64_t oldSerialVersionUID = (int64_t)0x17D3EE5E24233430;
	static const int64_t newSerialVersionUID = (int64_t)0x97B17A196C1D108B;
	static $Array<::java::io::ObjectStreamField>* oldSerialPersistentFields;
	static $Array<::java::io::ObjectStreamField>* newSerialPersistentFields;
	static int64_t serialVersionUID;
	static $Array<::java::io::ObjectStreamField>* serialPersistentFields;
	static bool compat;
	$String* type = nullptr;
	int64_t sequenceNumber = 0;
	int64_t timeStamp = 0;
	$Object* userData = nullptr;
	$String* message = nullptr;
	$Object* source = nullptr;
};

	} // management
} // javax

#endif // _javax_management_Notification_h_
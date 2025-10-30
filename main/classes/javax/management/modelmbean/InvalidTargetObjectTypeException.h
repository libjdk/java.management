#ifndef _javax_management_modelmbean_InvalidTargetObjectTypeException_h_
#define _javax_management_modelmbean_InvalidTargetObjectTypeException_h_
//$ class javax.management.modelmbean.InvalidTargetObjectTypeException
//$ extends java.lang.Exception

#include <java/lang/Array.h>
#include <java/lang/Exception.h>

namespace java {
	namespace io {
		class ObjectInputStream;
		class ObjectOutputStream;
		class ObjectStreamField;
	}
}

namespace javax {
	namespace management {
		namespace modelmbean {

class $export InvalidTargetObjectTypeException : public ::java::lang::Exception {
	$class(InvalidTargetObjectTypeException, 0, ::java::lang::Exception)
public:
	InvalidTargetObjectTypeException();
	void init$();
	void init$($String* s);
	void init$(::java::lang::Exception* e, $String* s);
	void readObject(::java::io::ObjectInputStream* in);
	void writeObject(::java::io::ObjectOutputStream* out);
	static const int64_t oldSerialVersionUID = (int64_t)0x3382B1D4CE42548A;
	static const int64_t newSerialVersionUID = (int64_t)0x1085A26FF64F1351;
	static $Array<::java::io::ObjectStreamField>* oldSerialPersistentFields;
	static $Array<::java::io::ObjectStreamField>* newSerialPersistentFields;
	static int64_t serialVersionUID;
	static $Array<::java::io::ObjectStreamField>* serialPersistentFields;
	static bool compat;
	::java::lang::Exception* exception = nullptr;
	InvalidTargetObjectTypeException(const InvalidTargetObjectTypeException& e);
	virtual void throw$() override;
	inline InvalidTargetObjectTypeException* operator ->() {
		return (InvalidTargetObjectTypeException*)throwing$;
	}
};

		} // modelmbean
	} // management
} // javax

#endif // _javax_management_modelmbean_InvalidTargetObjectTypeException_h_
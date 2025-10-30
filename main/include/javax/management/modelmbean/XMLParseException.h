#ifndef _javax_management_modelmbean_XMLParseException_h_
#define _javax_management_modelmbean_XMLParseException_h_
//$ class javax.management.modelmbean.XMLParseException
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

class $import XMLParseException : public ::java::lang::Exception {
	$class(XMLParseException, 0, ::java::lang::Exception)
public:
	XMLParseException();
	void init$();
	void init$($String* s);
	void init$(::java::lang::Exception* e, $String* s);
	void readObject(::java::io::ObjectInputStream* in);
	void writeObject(::java::io::ObjectOutputStream* out);
	static const int64_t oldSerialVersionUID = (int64_t)0x9407B65DF1B479F8;
	static const int64_t newSerialVersionUID = (int64_t)0x2C15C79A5801029D;
	static $Array<::java::io::ObjectStreamField>* oldSerialPersistentFields;
	static $Array<::java::io::ObjectStreamField>* newSerialPersistentFields;
	static int64_t serialVersionUID;
	static $Array<::java::io::ObjectStreamField>* serialPersistentFields;
	static bool compat;
	XMLParseException(const XMLParseException& e);
	virtual void throw$() override;
	inline XMLParseException* operator ->() {
		return (XMLParseException*)throwing$;
	}
};

		} // modelmbean
	} // management
} // javax

#endif // _javax_management_modelmbean_XMLParseException_h_
#ifndef _javax_management_NumericValueExp_h_
#define _javax_management_NumericValueExp_h_
//$ class javax.management.NumericValueExp
//$ extends javax.management.QueryEval
//$ implements javax.management.ValueExp

#include <java/lang/Array.h>
#include <javax/management/QueryEval.h>
#include <javax/management/ValueExp.h>

namespace java {
	namespace io {
		class ObjectInputStream;
		class ObjectOutputStream;
		class ObjectStreamField;
	}
}
namespace java {
	namespace lang {
		class Number;
	}
}
namespace javax {
	namespace management {
		class MBeanServer;
		class ObjectName;
	}
}

namespace javax {
	namespace management {

class NumericValueExp : public ::javax::management::QueryEval, public ::javax::management::ValueExp {
	$class(NumericValueExp, 0, ::javax::management::QueryEval, ::javax::management::ValueExp)
public:
	NumericValueExp();
	virtual $Object* clone() override;
	virtual bool equals(Object$* arg0) override;
	virtual void finalize() override;
	virtual int32_t hashCode() override;
	void init$();
	void init$(::java::lang::Number* val);
	virtual ::javax::management::ValueExp* apply(::javax::management::ObjectName* name) override;
	virtual double doubleValue();
	virtual bool isLong();
	virtual int64_t longValue();
	void readObject(::java::io::ObjectInputStream* in);
	virtual void setMBeanServer(::javax::management::MBeanServer* s) override;
	virtual $String* toString() override;
	void writeObject(::java::io::ObjectOutputStream* out);
	static const int64_t oldSerialVersionUID = (int64_t)0xA99223860C6D2A40;
	static const int64_t newSerialVersionUID = (int64_t)0xBF0E39BB8D1ABDC0;
	static $Array<::java::io::ObjectStreamField>* oldSerialPersistentFields;
	static $Array<::java::io::ObjectStreamField>* newSerialPersistentFields;
	static int64_t serialVersionUID;
	static $Array<::java::io::ObjectStreamField>* serialPersistentFields;
	::java::lang::Number* val = nullptr;
	static bool compat;
};

	} // management
} // javax

#endif // _javax_management_NumericValueExp_h_
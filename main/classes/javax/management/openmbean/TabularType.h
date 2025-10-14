#ifndef _javax_management_openmbean_TabularType_h_
#define _javax_management_openmbean_TabularType_h_
//$ class javax.management.openmbean.TabularType
//$ extends javax.management.openmbean.OpenType

#include <java/lang/Array.h>
#include <javax/management/openmbean/OpenType.h>

namespace java {
	namespace lang {
		class Integer;
	}
}
namespace java {
	namespace util {
		class List;
	}
}
namespace javax {
	namespace management {
		namespace openmbean {
			class CompositeType;
		}
	}
}

namespace javax {
	namespace management {
		namespace openmbean {

class $export TabularType : public ::javax::management::openmbean::OpenType {
	$class(TabularType, $NO_CLASS_INIT, ::javax::management::openmbean::OpenType)
public:
	TabularType();
	void init$($String* typeName, $String* description, ::javax::management::openmbean::CompositeType* rowType, $StringArray* indexNames);
	static void checkForEmptyString($StringArray* arg, $String* argName);
	static void checkForNullElement($ObjectArray* arg, $String* argName);
	virtual bool equals(Object$* obj) override;
	virtual ::java::util::List* getIndexNames();
	virtual ::javax::management::openmbean::CompositeType* getRowType();
	virtual int32_t hashCode() override;
	virtual bool isAssignableFrom(::javax::management::openmbean::OpenType* ot) override;
	virtual bool isValue(Object$* obj) override;
	virtual $String* toString() override;
	static const int64_t serialVersionUID = (int64_t)0x5AF4BDA1C4D6063D;
	::javax::management::openmbean::CompositeType* rowType = nullptr;
	::java::util::List* indexNames = nullptr;
	::java::lang::Integer* myHashCode = nullptr;
	$String* myToString = nullptr;
};

		} // openmbean
	} // management
} // javax

#endif // _javax_management_openmbean_TabularType_h_
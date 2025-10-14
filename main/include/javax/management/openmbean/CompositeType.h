#ifndef _javax_management_openmbean_CompositeType_h_
#define _javax_management_openmbean_CompositeType_h_
//$ class javax.management.openmbean.CompositeType
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
		class Set;
		class TreeMap;
	}
}

namespace javax {
	namespace management {
		namespace openmbean {

class $import CompositeType : public ::javax::management::openmbean::OpenType {
	$class(CompositeType, $NO_CLASS_INIT, ::javax::management::openmbean::OpenType)
public:
	CompositeType();
	using ::javax::management::openmbean::OpenType::getDescription;
	void init$($String* typeName, $String* description, $StringArray* itemNames, $StringArray* itemDescriptions, $Array<::javax::management::openmbean::OpenType>* itemTypes);
	static void checkForEmptyString($StringArray* arg, $String* argName);
	static void checkForNullElement($ObjectArray* arg, $String* argName);
	virtual bool containsKey($String* itemName);
	virtual bool equals(Object$* obj) override;
	virtual $String* getDescription($String* itemName);
	virtual ::javax::management::openmbean::OpenType* getType($String* itemName);
	virtual int32_t hashCode() override;
	virtual bool isAssignableFrom(::javax::management::openmbean::OpenType* ot) override;
	virtual bool isValue(Object$* obj) override;
	virtual ::java::util::Set* keySet();
	virtual $String* toString() override;
	static const int64_t serialVersionUID = (int64_t)0xB58746EB5A079F42;
	::java::util::TreeMap* nameToDescription = nullptr;
	::java::util::TreeMap* nameToType = nullptr;
	::java::lang::Integer* myHashCode = nullptr;
	$String* myToString = nullptr;
	::java::util::Set* myNamesSet = nullptr;
};

		} // openmbean
	} // management
} // javax

#endif // _javax_management_openmbean_CompositeType_h_
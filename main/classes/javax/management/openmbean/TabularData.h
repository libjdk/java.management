#ifndef _javax_management_openmbean_TabularData_h_
#define _javax_management_openmbean_TabularData_h_
//$ interface javax.management.openmbean.TabularData
//$ extends java.lang.Object

#include <java/lang/Array.h>

namespace java {
	namespace util {
		class Collection;
		class Set;
	}
}
namespace javax {
	namespace management {
		namespace openmbean {
			class CompositeData;
			class TabularType;
		}
	}
}

namespace javax {
	namespace management {
		namespace openmbean {

class $export TabularData : public ::java::lang::Object {
	$interface(TabularData, $NO_CLASS_INIT, ::java::lang::Object)
public:
	virtual $ObjectArray* calculateIndex(::javax::management::openmbean::CompositeData* value) {return nullptr;}
	virtual void clear() {}
	virtual bool containsKey($ObjectArray* key) {return false;}
	virtual bool containsValue(::javax::management::openmbean::CompositeData* value) {return false;}
	virtual bool equals(Object$* obj) override;
	virtual ::javax::management::openmbean::CompositeData* get($ObjectArray* key) {return nullptr;}
	virtual ::javax::management::openmbean::TabularType* getTabularType() {return nullptr;}
	virtual int32_t hashCode() override;
	virtual bool isEmpty() {return false;}
	virtual ::java::util::Set* keySet() {return nullptr;}
	virtual void put(::javax::management::openmbean::CompositeData* value) {}
	virtual void putAll($Array<::javax::management::openmbean::CompositeData>* values) {}
	virtual ::javax::management::openmbean::CompositeData* remove($ObjectArray* key) {return nullptr;}
	virtual int32_t size() {return 0;}
	virtual $String* toString() override;
	virtual ::java::util::Collection* values() {return nullptr;}
};

		} // openmbean
	} // management
} // javax

#endif // _javax_management_openmbean_TabularData_h_
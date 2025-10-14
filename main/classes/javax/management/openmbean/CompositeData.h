#ifndef _javax_management_openmbean_CompositeData_h_
#define _javax_management_openmbean_CompositeData_h_
//$ interface javax.management.openmbean.CompositeData
//$ extends java.lang.Object

#include <java/lang/Array.h>

namespace java {
	namespace util {
		class Collection;
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

class $export CompositeData : public ::java::lang::Object {
	$interface(CompositeData, $NO_CLASS_INIT, ::java::lang::Object)
public:
	virtual bool containsKey($String* key) {return false;}
	virtual bool containsValue(Object$* value) {return false;}
	virtual bool equals(Object$* obj) override;
	virtual $Object* get($String* key) {return nullptr;}
	virtual $ObjectArray* getAll($StringArray* keys) {return nullptr;}
	virtual ::javax::management::openmbean::CompositeType* getCompositeType() {return nullptr;}
	virtual int32_t hashCode() override;
	virtual $String* toString() override;
	virtual ::java::util::Collection* values() {return nullptr;}
};

		} // openmbean
	} // management
} // javax

#endif // _javax_management_openmbean_CompositeData_h_
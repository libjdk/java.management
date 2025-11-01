#ifndef _javax_management_openmbean_CompositeDataSupport_h_
#define _javax_management_openmbean_CompositeDataSupport_h_
//$ class javax.management.openmbean.CompositeDataSupport
//$ extends javax.management.openmbean.CompositeData
//$ implements java.io.Serializable

#include <java/io/Serializable.h>
#include <java/lang/Array.h>
#include <javax/management/openmbean/CompositeData.h>

namespace java {
	namespace util {
		class Collection;
		class Map;
		class SortedMap;
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

class $import CompositeDataSupport : public ::javax::management::openmbean::CompositeData, public ::java::io::Serializable {
	$class(CompositeDataSupport, $NO_CLASS_INIT, ::javax::management::openmbean::CompositeData, ::java::io::Serializable)
public:
	CompositeDataSupport();
	virtual $Object* clone() override;
	virtual void finalize() override;
	void init$(::javax::management::openmbean::CompositeType* compositeType, $StringArray* itemNames, $ObjectArray* itemValues);
	void init$(::javax::management::openmbean::CompositeType* compositeType, ::java::util::Map* items);
	void init$(::java::util::SortedMap* items, ::javax::management::openmbean::CompositeType* compositeType);
	virtual bool containsKey($String* key) override;
	virtual bool containsValue(Object$* value) override;
	$String* contentString();
	virtual bool equals(Object$* obj) override;
	virtual $Object* get($String* key) override;
	virtual $ObjectArray* getAll($StringArray* keys) override;
	virtual ::javax::management::openmbean::CompositeType* getCompositeType() override;
	virtual int32_t hashCode() override;
	static ::java::util::SortedMap* makeMap($StringArray* itemNames, $ObjectArray* itemValues);
	static ::java::util::SortedMap* makeMap(::java::util::Map* items);
	virtual $String* toString() override;
	virtual ::java::util::Collection* values() override;
	static const int64_t serialVersionUID = (int64_t)0x6F12361AD2285A64;
	::java::util::SortedMap* contents = nullptr;
	::javax::management::openmbean::CompositeType* compositeType = nullptr;
};

		} // openmbean
	} // management
} // javax

#endif // _javax_management_openmbean_CompositeDataSupport_h_
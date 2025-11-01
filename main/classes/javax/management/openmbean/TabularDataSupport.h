#ifndef _javax_management_openmbean_TabularDataSupport_h_
#define _javax_management_openmbean_TabularDataSupport_h_
//$ class javax.management.openmbean.TabularDataSupport
//$ extends javax.management.openmbean.TabularData
//$ implements java.util.Map,java.lang.Cloneable,java.io.Serializable

#include <java/io/Serializable.h>
#include <java/lang/Array.h>
#include <java/lang/Cloneable.h>
#include <java/util/Map.h>
#include <javax/management/openmbean/TabularData.h>

namespace java {
	namespace io {
		class ObjectInputStream;
	}
}
namespace java {
	namespace util {
		class Collection;
		class List;
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

class $export TabularDataSupport : public ::javax::management::openmbean::TabularData, public ::java::util::Map, public ::java::lang::Cloneable, public ::java::io::Serializable {
	$class(TabularDataSupport, $NO_CLASS_INIT, ::javax::management::openmbean::TabularData, ::java::util::Map, ::java::lang::Cloneable, ::java::io::Serializable)
public:
	TabularDataSupport();
	virtual void finalize() override;
	void init$(::javax::management::openmbean::TabularType* tabularType);
	void init$(::javax::management::openmbean::TabularType* tabularType, int32_t initialCapacity, float loadFactor);
	virtual $ObjectArray* calculateIndex(::javax::management::openmbean::CompositeData* value) override;
	void checkKeyType($ObjectArray* key);
	::java::util::List* checkValueAndIndex(::javax::management::openmbean::CompositeData* value);
	void checkValueType(::javax::management::openmbean::CompositeData* value);
	virtual void clear() override;
	virtual $Object* clone() override;
	virtual bool containsKey(Object$* key) override;
	virtual bool containsKey($ObjectArray* key) override;
	virtual bool containsValue(::javax::management::openmbean::CompositeData* value) override;
	virtual bool containsValue(Object$* value) override;
	virtual ::java::util::Set* entrySet() override;
	virtual bool equals(Object$* obj) override;
	virtual $Object* get(Object$* key) override;
	virtual ::javax::management::openmbean::CompositeData* get($ObjectArray* key) override;
	virtual ::javax::management::openmbean::TabularType* getTabularType() override;
	virtual int32_t hashCode() override;
	::java::util::List* internalCalculateIndex(::javax::management::openmbean::CompositeData* value);
	::javax::management::openmbean::CompositeData* internalPut(::javax::management::openmbean::CompositeData* value);
	virtual bool isEmpty() override;
	virtual ::java::util::Set* keySet() override;
	virtual $Object* put(Object$* key, Object$* value) override;
	virtual void put(::javax::management::openmbean::CompositeData* value) override;
	virtual void putAll(::java::util::Map* t) override;
	virtual void putAll($Array<::javax::management::openmbean::CompositeData>* values) override;
	void readObject(::java::io::ObjectInputStream* in);
	using ::java::util::Map::remove;
	virtual $Object* remove(Object$* key) override;
	virtual ::javax::management::openmbean::CompositeData* remove($ObjectArray* key) override;
	virtual int32_t size() override;
	virtual $String* toString() override;
	virtual ::java::util::Collection* values() override;
	static const int64_t serialVersionUID = (int64_t)0x4F620EA86B971743;
	::java::util::Map* dataMap = nullptr;
	::javax::management::openmbean::TabularType* tabularType = nullptr;
	$StringArray* indexNamesArray = nullptr;
};

		} // openmbean
	} // management
} // javax

#endif // _javax_management_openmbean_TabularDataSupport_h_
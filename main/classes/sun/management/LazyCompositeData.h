#ifndef _sun_management_LazyCompositeData_h_
#define _sun_management_LazyCompositeData_h_
//$ class sun.management.LazyCompositeData
//$ extends javax.management.openmbean.CompositeData
//$ implements java.io.Serializable

#include <java/io/Serializable.h>
#include <java/lang/Array.h>
#include <javax/management/openmbean/CompositeData.h>

namespace java {
	namespace util {
		class Collection;
	}
}
namespace javax {
	namespace management {
		namespace openmbean {
			class ArrayType;
			class CompositeType;
			class OpenType;
			class TabularType;
		}
	}
}

namespace sun {
	namespace management {

class $export LazyCompositeData : public ::javax::management::openmbean::CompositeData, public ::java::io::Serializable {
	$class(LazyCompositeData, $NO_CLASS_INIT, ::javax::management::openmbean::CompositeData, ::java::io::Serializable)
public:
	LazyCompositeData();
	virtual $Object* clone() override;
	virtual void finalize() override;
	void init$();
	::javax::management::openmbean::CompositeData* compositeData();
	virtual bool containsKey($String* key) override;
	virtual bool containsValue(Object$* value) override;
	virtual bool equals(Object$* obj) override;
	virtual $Object* get($String* key) override;
	virtual $ObjectArray* getAll($StringArray* keys) override;
	static bool getBoolean(::javax::management::openmbean::CompositeData* cd, $String* itemName);
	virtual ::javax::management::openmbean::CompositeData* getCompositeData() {return nullptr;}
	virtual ::javax::management::openmbean::CompositeType* getCompositeType() override;
	static int32_t getInt(::javax::management::openmbean::CompositeData* cd, $String* itemName);
	static int64_t getLong(::javax::management::openmbean::CompositeData* cd, $String* itemName);
	static $String* getString(::javax::management::openmbean::CompositeData* cd, $String* itemName);
	virtual int32_t hashCode() override;
	static bool isTypeMatched(::javax::management::openmbean::CompositeType* type1, ::javax::management::openmbean::CompositeType* type2);
	static bool isTypeMatched(::javax::management::openmbean::TabularType* type1, ::javax::management::openmbean::TabularType* type2);
	static bool isTypeMatched(::javax::management::openmbean::ArrayType* type1, ::javax::management::openmbean::ArrayType* type2);
	static bool isTypeMatched(::javax::management::openmbean::OpenType* ot1, ::javax::management::openmbean::OpenType* ot2);
	static bool lambda$isTypeMatched$0(::javax::management::openmbean::CompositeType* type1, ::javax::management::openmbean::CompositeType* type2, $String* item);
	virtual $String* toString() override;
	virtual ::java::util::Collection* values() override;
	virtual $Object* writeReplace();
	::javax::management::openmbean::CompositeData* compositeData$ = nullptr;
	static const int64_t serialVersionUID = (int64_t)0xE19A17F36DFB01A6;
};

	} // management
} // sun

#endif // _sun_management_LazyCompositeData_h_
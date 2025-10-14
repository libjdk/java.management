#ifndef _javax_management_AttributeList_h_
#define _javax_management_AttributeList_h_
//$ class javax.management.AttributeList
//$ extends java.util.ArrayList

#include <java/util/ArrayList.h>

namespace java {
	namespace util {
		class Collection;
		class List;
	}
}
namespace javax {
	namespace management {
		class Attribute;
	}
}

namespace javax {
	namespace management {

class $export AttributeList : public ::java::util::ArrayList {
	$class(AttributeList, $NO_CLASS_INIT, ::java::util::ArrayList)
public:
	AttributeList();
	void init$();
	void init$(int32_t initialCapacity);
	void init$(::javax::management::AttributeList* list);
	void init$(::java::util::List* list);
	virtual void add(::javax::management::Attribute* object);
	virtual void add(int32_t index, ::javax::management::Attribute* object);
	virtual bool add(Object$* element) override;
	virtual void add(int32_t index, Object$* element) override;
	virtual bool addAll(::javax::management::AttributeList* list);
	virtual bool addAll(int32_t index, ::javax::management::AttributeList* list);
	virtual bool addAll(::java::util::Collection* c) override;
	virtual bool addAll(int32_t index, ::java::util::Collection* c) override;
	void adding(Object$* x);
	void adding(::java::util::Collection* c);
	virtual ::java::util::List* asList();
	virtual void set(int32_t index, ::javax::management::Attribute* object);
	virtual $Object* set(int32_t index, Object$* element) override;
	using ::java::util::ArrayList::toArray;
	$volatile(bool) typeSafe = false;
	$volatile(bool) tainted = false;
	static const int64_t serialVersionUID = (int64_t)0xC76B48181B48606C;
};

	} // management
} // javax

#endif // _javax_management_AttributeList_h_
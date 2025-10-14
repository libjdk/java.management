#ifndef _javax_management_relation_RoleUnresolvedList_h_
#define _javax_management_relation_RoleUnresolvedList_h_
//$ class javax.management.relation.RoleUnresolvedList
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
		namespace relation {
			class RoleUnresolved;
		}
	}
}

namespace javax {
	namespace management {
		namespace relation {

class $import RoleUnresolvedList : public ::java::util::ArrayList {
	$class(RoleUnresolvedList, $NO_CLASS_INIT, ::java::util::ArrayList)
public:
	RoleUnresolvedList();
	void init$();
	void init$(int32_t initialCapacity);
	void init$(::java::util::List* list);
	virtual void add(::javax::management::relation::RoleUnresolved* role);
	virtual void add(int32_t index, ::javax::management::relation::RoleUnresolved* role);
	virtual bool add(Object$* o) override;
	virtual void add(int32_t index, Object$* element) override;
	virtual bool addAll(::javax::management::relation::RoleUnresolvedList* roleList);
	virtual bool addAll(int32_t index, ::javax::management::relation::RoleUnresolvedList* roleList);
	virtual bool addAll(::java::util::Collection* c) override;
	virtual bool addAll(int32_t index, ::java::util::Collection* c) override;
	virtual ::java::util::List* asList();
	static void checkTypeSafe(Object$* o);
	static void checkTypeSafe(::java::util::Collection* c);
	static bool isTainted(Object$* o);
	static bool isTainted(::java::util::Collection* c);
	virtual void set(int32_t index, ::javax::management::relation::RoleUnresolved* role);
	virtual $Object* set(int32_t index, Object$* element) override;
	using ::java::util::ArrayList::toArray;
	bool typeSafe = false;
	bool tainted = false;
	static const int64_t serialVersionUID = (int64_t)0x3845E89D9900276C;
};

		} // relation
	} // management
} // javax

#endif // _javax_management_relation_RoleUnresolvedList_h_
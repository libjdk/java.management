#include <javax/management/relation/RoleList.h>

#include <com/sun/jmx/mbeanserver/Util.h>
#include <java/lang/ClassCastException.h>
#include <java/util/AbstractCollection.h>
#include <java/util/AbstractList.h>
#include <java/util/ArrayList.h>
#include <java/util/Collection.h>
#include <java/util/Iterator.h>
#include <java/util/List.h>
#include <javax/management/relation/Role.h>
#include <jcpp.h>

using $Util = ::com::sun::jmx::mbeanserver::Util;
using $ClassCastException = ::java::lang::ClassCastException;
using $ClassInfo = ::java::lang::ClassInfo;
using $Exception = ::java::lang::Exception;
using $FieldInfo = ::java::lang::FieldInfo;
using $IllegalArgumentException = ::java::lang::IllegalArgumentException;
using $MethodInfo = ::java::lang::MethodInfo;
using $RuntimeException = ::java::lang::RuntimeException;
using $AbstractCollection = ::java::util::AbstractCollection;
using $AbstractList = ::java::util::AbstractList;
using $ArrayList = ::java::util::ArrayList;
using $Collection = ::java::util::Collection;
using $Iterator = ::java::util::Iterator;
using $List = ::java::util::List;
using $Role = ::javax::management::relation::Role;

namespace javax {
	namespace management {
		namespace relation {

$FieldInfo _RoleList_FieldInfo_[] = {
	{"typeSafe", "Z", nullptr, $PRIVATE | $TRANSIENT, $field(RoleList, typeSafe)},
	{"tainted", "Z", nullptr, $PRIVATE | $TRANSIENT, $field(RoleList, tainted)},
	{"serialVersionUID", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(RoleList, serialVersionUID)},
	{}
};

$MethodInfo _RoleList_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(RoleList::*)()>(&RoleList::init$))},
	{"<init>", "(I)V", nullptr, $PUBLIC, $method(static_cast<void(RoleList::*)(int32_t)>(&RoleList::init$))},
	{"<init>", "(Ljava/util/List;)V", "(Ljava/util/List<Ljavax/management/relation/Role;>;)V", $PUBLIC, $method(static_cast<void(RoleList::*)($List*)>(&RoleList::init$)), "java.lang.IllegalArgumentException"},
	{"add", "(Ljavax/management/relation/Role;)V", nullptr, $PUBLIC, nullptr, "java.lang.IllegalArgumentException"},
	{"add", "(ILjavax/management/relation/Role;)V", nullptr, $PUBLIC, nullptr, "java.lang.IllegalArgumentException,java.lang.IndexOutOfBoundsException"},
	{"add", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"add", "(ILjava/lang/Object;)V", nullptr, $PUBLIC},
	{"addAll", "(Ljavax/management/relation/RoleList;)Z", nullptr, $PUBLIC, nullptr, "java.lang.IndexOutOfBoundsException"},
	{"addAll", "(ILjavax/management/relation/RoleList;)Z", nullptr, $PUBLIC, nullptr, "java.lang.IllegalArgumentException,java.lang.IndexOutOfBoundsException"},
	{"addAll", "(Ljava/util/Collection;)Z", "(Ljava/util/Collection<*>;)Z", $PUBLIC},
	{"addAll", "(ILjava/util/Collection;)Z", "(ILjava/util/Collection<*>;)Z", $PUBLIC},
	{"asList", "()Ljava/util/List;", "()Ljava/util/List<Ljavax/management/relation/Role;>;", $PUBLIC},
	{"checkTypeSafe", "(Ljava/lang/Object;)V", nullptr, $PRIVATE | $STATIC, $method(static_cast<void(*)(Object$*)>(&RoleList::checkTypeSafe))},
	{"checkTypeSafe", "(Ljava/util/Collection;)V", "(Ljava/util/Collection<*>;)V", $PRIVATE | $STATIC, $method(static_cast<void(*)($Collection*)>(&RoleList::checkTypeSafe))},
	{"isTainted", "(Ljava/lang/Object;)Z", nullptr, $PRIVATE | $STATIC, $method(static_cast<bool(*)(Object$*)>(&RoleList::isTainted))},
	{"isTainted", "(Ljava/util/Collection;)Z", "(Ljava/util/Collection<*>;)Z", $PRIVATE | $STATIC, $method(static_cast<bool(*)($Collection*)>(&RoleList::isTainted))},
	{"set", "(ILjavax/management/relation/Role;)V", nullptr, $PUBLIC, nullptr, "java.lang.IllegalArgumentException,java.lang.IndexOutOfBoundsException"},
	{"set", "(ILjava/lang/Object;)Ljava/lang/Object;", nullptr, $PUBLIC},
	{}
};

$ClassInfo _RoleList_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"javax.management.relation.RoleList",
	"java.util.ArrayList",
	nullptr,
	_RoleList_FieldInfo_,
	_RoleList_MethodInfo_,
	"Ljava/util/ArrayList<Ljava/lang/Object;>;"
};

$Object* allocate$RoleList($Class* clazz) {
	return $of($alloc(RoleList));
}

void RoleList::init$() {
	$ArrayList::init$();
}

void RoleList::init$(int32_t initialCapacity) {
	$ArrayList::init$(initialCapacity);
}

void RoleList::init$($List* list) {
	$ArrayList::init$();
	if (list == nullptr) {
		$throwNew($IllegalArgumentException, "Null parameter"_s);
	}
	checkTypeSafe(static_cast<$Collection*>(list));
	$ArrayList::addAll(list);
}

$List* RoleList::asList() {
	if (!this->typeSafe) {
		if (this->tainted) {
			checkTypeSafe(static_cast<$Collection*>(static_cast<$AbstractCollection*>(static_cast<$AbstractList*>(static_cast<$ArrayList*>(this)))));
		}
		this->typeSafe = true;
	}
	return $cast($List, $Util::cast(this));
}

void RoleList::add($Role* role) {
	if (role == nullptr) {
		$var($String, excMsg, "Invalid parameter"_s);
		$throwNew($IllegalArgumentException, excMsg);
	}
	$ArrayList::add(role);
}

void RoleList::add(int32_t index, $Role* role) {
	if (role == nullptr) {
		$var($String, excMsg, "Invalid parameter"_s);
		$throwNew($IllegalArgumentException, excMsg);
	}
	$ArrayList::add(index, role);
}

void RoleList::set(int32_t index, $Role* role) {
	if (role == nullptr) {
		$var($String, excMsg, "Invalid parameter."_s);
		$throwNew($IllegalArgumentException, excMsg);
	}
	$ArrayList::set(index, role);
}

bool RoleList::addAll(RoleList* roleList) {
	if (roleList == nullptr) {
		return true;
	}
	return ($ArrayList::addAll(static_cast<$Collection*>(static_cast<$AbstractCollection*>(static_cast<$AbstractList*>(static_cast<$ArrayList*>(roleList))))));
}

bool RoleList::addAll(int32_t index, RoleList* roleList) {
	if (roleList == nullptr) {
		$var($String, excMsg, "Invalid parameter."_s);
		$throwNew($IllegalArgumentException, excMsg);
	}
	return ($ArrayList::addAll(index, static_cast<$Collection*>(static_cast<$AbstractCollection*>(static_cast<$AbstractList*>(static_cast<$ArrayList*>(roleList))))));
}

bool RoleList::add(Object$* o) {
	if (!this->tainted) {
		this->tainted = isTainted(o);
	}
	if (this->typeSafe) {
		checkTypeSafe(o);
	}
	return $ArrayList::add(o);
}

void RoleList::add(int32_t index, Object$* element) {
	if (!this->tainted) {
		this->tainted = isTainted(element);
	}
	if (this->typeSafe) {
		checkTypeSafe(element);
	}
	$ArrayList::add(index, element);
}

bool RoleList::addAll($Collection* c) {
	if (!this->tainted) {
		this->tainted = isTainted(c);
	}
	if (this->typeSafe) {
		checkTypeSafe(c);
	}
	return $ArrayList::addAll(c);
}

bool RoleList::addAll(int32_t index, $Collection* c) {
	if (!this->tainted) {
		this->tainted = isTainted(c);
	}
	if (this->typeSafe) {
		checkTypeSafe(c);
	}
	return $ArrayList::addAll(index, c);
}

$Object* RoleList::set(int32_t index, Object$* element) {
	if (!this->tainted) {
		this->tainted = isTainted(element);
	}
	if (this->typeSafe) {
		checkTypeSafe(element);
	}
	return $of($ArrayList::set(index, element));
}

void RoleList::checkTypeSafe(Object$* o$renamed) {
	$init(RoleList);
	$var($Object, o, o$renamed);
	try {
		$assign(o, $cast($Role, o));
	} catch ($ClassCastException& e) {
		$throwNew($IllegalArgumentException, static_cast<$Throwable*>(e));
	}
}

void RoleList::checkTypeSafe($Collection* c) {
	$init(RoleList);
	$useLocalCurrentObjectStackCache();
	try {
		$var($Role, r, nullptr);
		{
			$var($Iterator, i$, $nc(c)->iterator());
			for (; $nc(i$)->hasNext();) {
				$var($Object, o, i$->next());
				$assign(r, $cast($Role, o));
			}
		}
	} catch ($ClassCastException& e) {
		$throwNew($IllegalArgumentException, static_cast<$Throwable*>(e));
	}
}

bool RoleList::isTainted(Object$* o) {
	$init(RoleList);
	try {
		checkTypeSafe(o);
	} catch ($IllegalArgumentException& e) {
		return true;
	}
	return false;
}

bool RoleList::isTainted($Collection* c) {
	$init(RoleList);
	try {
		checkTypeSafe(c);
	} catch ($IllegalArgumentException& e) {
		return true;
	}
	return false;
}

RoleList::RoleList() {
}

$Class* RoleList::load$($String* name, bool initialize) {
	$loadClass(RoleList, name, initialize, &_RoleList_ClassInfo_, allocate$RoleList);
	return class$;
}

$Class* RoleList::class$ = nullptr;

		} // relation
	} // management
} // javax
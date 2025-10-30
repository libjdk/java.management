#include <javax/management/relation/RoleUnresolvedList.h>

#include <com/sun/jmx/mbeanserver/Util.h>
#include <java/lang/ClassCastException.h>
#include <java/util/AbstractCollection.h>
#include <java/util/AbstractList.h>
#include <java/util/ArrayList.h>
#include <java/util/Collection.h>
#include <java/util/Iterator.h>
#include <java/util/List.h>
#include <javax/management/relation/RoleUnresolved.h>
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
using $RoleUnresolved = ::javax::management::relation::RoleUnresolved;

namespace javax {
	namespace management {
		namespace relation {

$FieldInfo _RoleUnresolvedList_FieldInfo_[] = {
	{"typeSafe", "Z", nullptr, $PRIVATE | $TRANSIENT, $field(RoleUnresolvedList, typeSafe)},
	{"tainted", "Z", nullptr, $PRIVATE | $TRANSIENT, $field(RoleUnresolvedList, tainted)},
	{"serialVersionUID", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(RoleUnresolvedList, serialVersionUID)},
	{}
};

$MethodInfo _RoleUnresolvedList_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(RoleUnresolvedList::*)()>(&RoleUnresolvedList::init$))},
	{"<init>", "(I)V", nullptr, $PUBLIC, $method(static_cast<void(RoleUnresolvedList::*)(int32_t)>(&RoleUnresolvedList::init$))},
	{"<init>", "(Ljava/util/List;)V", "(Ljava/util/List<Ljavax/management/relation/RoleUnresolved;>;)V", $PUBLIC, $method(static_cast<void(RoleUnresolvedList::*)($List*)>(&RoleUnresolvedList::init$)), "java.lang.IllegalArgumentException"},
	{"add", "(Ljavax/management/relation/RoleUnresolved;)V", nullptr, $PUBLIC, nullptr, "java.lang.IllegalArgumentException"},
	{"add", "(ILjavax/management/relation/RoleUnresolved;)V", nullptr, $PUBLIC, nullptr, "java.lang.IllegalArgumentException,java.lang.IndexOutOfBoundsException"},
	{"add", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"add", "(ILjava/lang/Object;)V", nullptr, $PUBLIC},
	{"addAll", "(Ljavax/management/relation/RoleUnresolvedList;)Z", nullptr, $PUBLIC, nullptr, "java.lang.IndexOutOfBoundsException"},
	{"addAll", "(ILjavax/management/relation/RoleUnresolvedList;)Z", nullptr, $PUBLIC, nullptr, "java.lang.IllegalArgumentException,java.lang.IndexOutOfBoundsException"},
	{"addAll", "(Ljava/util/Collection;)Z", "(Ljava/util/Collection<*>;)Z", $PUBLIC},
	{"addAll", "(ILjava/util/Collection;)Z", "(ILjava/util/Collection<*>;)Z", $PUBLIC},
	{"asList", "()Ljava/util/List;", "()Ljava/util/List<Ljavax/management/relation/RoleUnresolved;>;", $PUBLIC},
	{"checkTypeSafe", "(Ljava/lang/Object;)V", nullptr, $PRIVATE | $STATIC, $method(static_cast<void(*)(Object$*)>(&RoleUnresolvedList::checkTypeSafe))},
	{"checkTypeSafe", "(Ljava/util/Collection;)V", "(Ljava/util/Collection<*>;)V", $PRIVATE | $STATIC, $method(static_cast<void(*)($Collection*)>(&RoleUnresolvedList::checkTypeSafe))},
	{"isTainted", "(Ljava/lang/Object;)Z", nullptr, $PRIVATE | $STATIC, $method(static_cast<bool(*)(Object$*)>(&RoleUnresolvedList::isTainted))},
	{"isTainted", "(Ljava/util/Collection;)Z", "(Ljava/util/Collection<*>;)Z", $PRIVATE | $STATIC, $method(static_cast<bool(*)($Collection*)>(&RoleUnresolvedList::isTainted))},
	{"set", "(ILjavax/management/relation/RoleUnresolved;)V", nullptr, $PUBLIC, nullptr, "java.lang.IllegalArgumentException,java.lang.IndexOutOfBoundsException"},
	{"set", "(ILjava/lang/Object;)Ljava/lang/Object;", nullptr, $PUBLIC},
	{}
};

$ClassInfo _RoleUnresolvedList_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"javax.management.relation.RoleUnresolvedList",
	"java.util.ArrayList",
	nullptr,
	_RoleUnresolvedList_FieldInfo_,
	_RoleUnresolvedList_MethodInfo_,
	"Ljava/util/ArrayList<Ljava/lang/Object;>;"
};

$Object* allocate$RoleUnresolvedList($Class* clazz) {
	return $of($alloc(RoleUnresolvedList));
}

void RoleUnresolvedList::init$() {
	$ArrayList::init$();
}

void RoleUnresolvedList::init$(int32_t initialCapacity) {
	$ArrayList::init$(initialCapacity);
}

void RoleUnresolvedList::init$($List* list) {
	$ArrayList::init$();
	if (list == nullptr) {
		$throwNew($IllegalArgumentException, "Null parameter"_s);
	}
	checkTypeSafe(static_cast<$Collection*>(list));
	$ArrayList::addAll(list);
}

$List* RoleUnresolvedList::asList() {
	if (!this->typeSafe) {
		if (this->tainted) {
			checkTypeSafe(static_cast<$Collection*>(static_cast<$AbstractCollection*>(static_cast<$AbstractList*>(static_cast<$ArrayList*>(this)))));
		}
		this->typeSafe = true;
	}
	return $cast($List, $Util::cast(this));
}

void RoleUnresolvedList::add($RoleUnresolved* role) {
	if (role == nullptr) {
		$var($String, excMsg, "Invalid parameter"_s);
		$throwNew($IllegalArgumentException, excMsg);
	}
	$ArrayList::add(role);
}

void RoleUnresolvedList::add(int32_t index, $RoleUnresolved* role) {
	if (role == nullptr) {
		$var($String, excMsg, "Invalid parameter"_s);
		$throwNew($IllegalArgumentException, excMsg);
	}
	$ArrayList::add(index, role);
}

void RoleUnresolvedList::set(int32_t index, $RoleUnresolved* role) {
	if (role == nullptr) {
		$var($String, excMsg, "Invalid parameter"_s);
		$throwNew($IllegalArgumentException, excMsg);
	}
	$ArrayList::set(index, role);
}

bool RoleUnresolvedList::addAll(RoleUnresolvedList* roleList) {
	if (roleList == nullptr) {
		return true;
	}
	return ($ArrayList::addAll(static_cast<$Collection*>(static_cast<$AbstractCollection*>(static_cast<$AbstractList*>(static_cast<$ArrayList*>(roleList))))));
}

bool RoleUnresolvedList::addAll(int32_t index, RoleUnresolvedList* roleList) {
	if (roleList == nullptr) {
		$var($String, excMsg, "Invalid parameter"_s);
		$throwNew($IllegalArgumentException, excMsg);
	}
	return ($ArrayList::addAll(index, static_cast<$Collection*>(static_cast<$AbstractCollection*>(static_cast<$AbstractList*>(static_cast<$ArrayList*>(roleList))))));
}

bool RoleUnresolvedList::add(Object$* o) {
	if (!this->tainted) {
		this->tainted = isTainted(o);
	}
	if (this->typeSafe) {
		checkTypeSafe(o);
	}
	return $ArrayList::add(o);
}

void RoleUnresolvedList::add(int32_t index, Object$* element) {
	if (!this->tainted) {
		this->tainted = isTainted(element);
	}
	if (this->typeSafe) {
		checkTypeSafe(element);
	}
	$ArrayList::add(index, element);
}

bool RoleUnresolvedList::addAll($Collection* c) {
	if (!this->tainted) {
		this->tainted = isTainted(c);
	}
	if (this->typeSafe) {
		checkTypeSafe(c);
	}
	return $ArrayList::addAll(c);
}

bool RoleUnresolvedList::addAll(int32_t index, $Collection* c) {
	if (!this->tainted) {
		this->tainted = isTainted(c);
	}
	if (this->typeSafe) {
		checkTypeSafe(c);
	}
	return $ArrayList::addAll(index, c);
}

$Object* RoleUnresolvedList::set(int32_t index, Object$* element) {
	if (!this->tainted) {
		this->tainted = isTainted(element);
	}
	if (this->typeSafe) {
		checkTypeSafe(element);
	}
	return $of($ArrayList::set(index, element));
}

void RoleUnresolvedList::checkTypeSafe(Object$* o$renamed) {
	$init(RoleUnresolvedList);
	$var($Object, o, o$renamed);
	try {
		$assign(o, $cast($RoleUnresolved, o));
	} catch ($ClassCastException& e) {
		$throwNew($IllegalArgumentException, static_cast<$Throwable*>(e));
	}
}

void RoleUnresolvedList::checkTypeSafe($Collection* c) {
	$init(RoleUnresolvedList);
	$useLocalCurrentObjectStackCache();
	try {
		$var($RoleUnresolved, r, nullptr);
		{
			$var($Iterator, i$, $nc(c)->iterator());
			for (; $nc(i$)->hasNext();) {
				$var($Object, o, i$->next());
				$assign(r, $cast($RoleUnresolved, o));
			}
		}
	} catch ($ClassCastException& e) {
		$throwNew($IllegalArgumentException, static_cast<$Throwable*>(e));
	}
}

bool RoleUnresolvedList::isTainted(Object$* o) {
	$init(RoleUnresolvedList);
	try {
		checkTypeSafe(o);
	} catch ($IllegalArgumentException& e) {
		return true;
	}
	return false;
}

bool RoleUnresolvedList::isTainted($Collection* c) {
	$init(RoleUnresolvedList);
	try {
		checkTypeSafe(c);
	} catch ($IllegalArgumentException& e) {
		return true;
	}
	return false;
}

RoleUnresolvedList::RoleUnresolvedList() {
}

$Class* RoleUnresolvedList::load$($String* name, bool initialize) {
	$loadClass(RoleUnresolvedList, name, initialize, &_RoleUnresolvedList_ClassInfo_, allocate$RoleUnresolvedList);
	return class$;
}

$Class* RoleUnresolvedList::class$ = nullptr;

		} // relation
	} // management
} // javax
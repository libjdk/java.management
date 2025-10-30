#include <javax/management/AttributeList.h>

#include <java/lang/IndexOutOfBoundsException.h>
#include <java/util/AbstractCollection.h>
#include <java/util/AbstractList.h>
#include <java/util/ArrayList.h>
#include <java/util/Collection.h>
#include <java/util/Iterator.h>
#include <java/util/List.h>
#include <javax/management/Attribute.h>
#include <javax/management/RuntimeOperationsException.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $IllegalArgumentException = ::java::lang::IllegalArgumentException;
using $IndexOutOfBoundsException = ::java::lang::IndexOutOfBoundsException;
using $MethodInfo = ::java::lang::MethodInfo;
using $RuntimeException = ::java::lang::RuntimeException;
using $AbstractCollection = ::java::util::AbstractCollection;
using $AbstractList = ::java::util::AbstractList;
using $ArrayList = ::java::util::ArrayList;
using $Collection = ::java::util::Collection;
using $Iterator = ::java::util::Iterator;
using $List = ::java::util::List;
using $Attribute = ::javax::management::Attribute;
using $RuntimeOperationsException = ::javax::management::RuntimeOperationsException;

namespace javax {
	namespace management {

$FieldInfo _AttributeList_FieldInfo_[] = {
	{"typeSafe", "Z", nullptr, $PRIVATE | $VOLATILE | $TRANSIENT, $field(AttributeList, typeSafe)},
	{"tainted", "Z", nullptr, $PRIVATE | $VOLATILE | $TRANSIENT, $field(AttributeList, tainted)},
	{"serialVersionUID", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(AttributeList, serialVersionUID)},
	{}
};

$MethodInfo _AttributeList_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(AttributeList::*)()>(&AttributeList::init$))},
	{"<init>", "(I)V", nullptr, $PUBLIC, $method(static_cast<void(AttributeList::*)(int32_t)>(&AttributeList::init$))},
	{"<init>", "(Ljavax/management/AttributeList;)V", nullptr, $PUBLIC, $method(static_cast<void(AttributeList::*)(AttributeList*)>(&AttributeList::init$))},
	{"<init>", "(Ljava/util/List;)V", "(Ljava/util/List<Ljavax/management/Attribute;>;)V", $PUBLIC, $method(static_cast<void(AttributeList::*)($List*)>(&AttributeList::init$))},
	{"add", "(Ljavax/management/Attribute;)V", nullptr, $PUBLIC},
	{"add", "(ILjavax/management/Attribute;)V", nullptr, $PUBLIC},
	{"add", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"add", "(ILjava/lang/Object;)V", nullptr, $PUBLIC},
	{"addAll", "(Ljavax/management/AttributeList;)Z", nullptr, $PUBLIC},
	{"addAll", "(ILjavax/management/AttributeList;)Z", nullptr, $PUBLIC},
	{"addAll", "(Ljava/util/Collection;)Z", "(Ljava/util/Collection<*>;)Z", $PUBLIC},
	{"addAll", "(ILjava/util/Collection;)Z", "(ILjava/util/Collection<*>;)Z", $PUBLIC},
	{"adding", "(Ljava/lang/Object;)V", nullptr, $PRIVATE, $method(static_cast<void(AttributeList::*)(Object$*)>(&AttributeList::adding))},
	{"adding", "(Ljava/util/Collection;)V", "(Ljava/util/Collection<*>;)V", $PRIVATE, $method(static_cast<void(AttributeList::*)($Collection*)>(&AttributeList::adding))},
	{"asList", "()Ljava/util/List;", "()Ljava/util/List<Ljavax/management/Attribute;>;", $PUBLIC},
	{"set", "(ILjavax/management/Attribute;)V", nullptr, $PUBLIC},
	{"set", "(ILjava/lang/Object;)Ljava/lang/Object;", nullptr, $PUBLIC},
	{}
};

$ClassInfo _AttributeList_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"javax.management.AttributeList",
	"java.util.ArrayList",
	nullptr,
	_AttributeList_FieldInfo_,
	_AttributeList_MethodInfo_,
	"Ljava/util/ArrayList<Ljava/lang/Object;>;"
};

$Object* allocate$AttributeList($Class* clazz) {
	return $of($alloc(AttributeList));
}

void AttributeList::init$() {
	$ArrayList::init$();
}

void AttributeList::init$(int32_t initialCapacity) {
	$ArrayList::init$(initialCapacity);
}

void AttributeList::init$(AttributeList* list) {
	$ArrayList::init$(static_cast<$Collection*>(static_cast<$AbstractCollection*>(static_cast<$AbstractList*>(static_cast<$ArrayList*>(list)))));
}

void AttributeList::init$($List* list) {
	$ArrayList::init$();
	if (list == nullptr) {
		$throwNew($IllegalArgumentException, "Null parameter"_s);
	}
	adding(static_cast<$Collection*>(list));
	$ArrayList::addAll(list);
}

$List* AttributeList::asList() {
	this->typeSafe = true;
	if (this->tainted) {
		adding(static_cast<$Collection*>(static_cast<$AbstractCollection*>(static_cast<$AbstractList*>(static_cast<$ArrayList*>(this)))));
	}
	return static_cast<$List*>(this);
}

void AttributeList::add($Attribute* object) {
	$ArrayList::add(object);
}

void AttributeList::add(int32_t index, $Attribute* object) {
	try {
		$ArrayList::add(index, object);
	} catch ($IndexOutOfBoundsException& e) {
		$throwNew($RuntimeOperationsException, e, "The specified index is out of range"_s);
	}
}

void AttributeList::set(int32_t index, $Attribute* object) {
	try {
		$ArrayList::set(index, object);
	} catch ($IndexOutOfBoundsException& e) {
		$throwNew($RuntimeOperationsException, e, "The specified index is out of range"_s);
	}
}

bool AttributeList::addAll(AttributeList* list) {
	return ($ArrayList::addAll(static_cast<$Collection*>(static_cast<$AbstractCollection*>(static_cast<$AbstractList*>(static_cast<$ArrayList*>(list))))));
}

bool AttributeList::addAll(int32_t index, AttributeList* list) {
	try {
		return $ArrayList::addAll(index, static_cast<$Collection*>(static_cast<$AbstractCollection*>(static_cast<$AbstractList*>(static_cast<$ArrayList*>(list)))));
	} catch ($IndexOutOfBoundsException& e) {
		$throwNew($RuntimeOperationsException, e, "The specified index is out of range"_s);
	}
	$shouldNotReachHere();
}

bool AttributeList::add(Object$* element) {
	adding(element);
	return $ArrayList::add(element);
}

void AttributeList::add(int32_t index, Object$* element) {
	adding(element);
	$ArrayList::add(index, element);
}

bool AttributeList::addAll($Collection* c) {
	adding(c);
	return $ArrayList::addAll(c);
}

bool AttributeList::addAll(int32_t index, $Collection* c) {
	adding(c);
	return $ArrayList::addAll(index, c);
}

$Object* AttributeList::set(int32_t index, Object$* element) {
	adding(element);
	return $of($ArrayList::set(index, element));
}

void AttributeList::adding(Object$* x) {
	if (x == nullptr || $instanceOf($Attribute, x)) {
		return;
	}
	if (this->typeSafe) {
		$throwNew($IllegalArgumentException, $$str({"Not an Attribute: "_s, x}));
	} else {
		this->tainted = true;
	}
}

void AttributeList::adding($Collection* c) {
	$useLocalCurrentObjectStackCache();
	{
		$var($Iterator, i$, $nc(c)->iterator());
		for (; $nc(i$)->hasNext();) {
			$var($Object, x, i$->next());
			adding(x);
		}
	}
}

AttributeList::AttributeList() {
}

$Class* AttributeList::load$($String* name, bool initialize) {
	$loadClass(AttributeList, name, initialize, &_AttributeList_ClassInfo_, allocate$AttributeList);
	return class$;
}

$Class* AttributeList::class$ = nullptr;

	} // management
} // javax
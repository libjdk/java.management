#include <com/sun/jmx/remote/internal/ArrayQueue.h>

#include <java/lang/IndexOutOfBoundsException.h>
#include <java/util/AbstractList.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $IllegalArgumentException = ::java::lang::IllegalArgumentException;
using $IndexOutOfBoundsException = ::java::lang::IndexOutOfBoundsException;
using $MethodInfo = ::java::lang::MethodInfo;
using $AbstractList = ::java::util::AbstractList;

namespace com {
	namespace sun {
		namespace jmx {
			namespace remote {
				namespace internal {

$FieldInfo _ArrayQueue_FieldInfo_[] = {
	{"capacity", "I", nullptr, $PRIVATE, $field(ArrayQueue, capacity)},
	{"queue", "[Ljava/lang/Object;", "[TT;", $PRIVATE, $field(ArrayQueue, queue)},
	{"head", "I", nullptr, $PRIVATE, $field(ArrayQueue, head)},
	{"tail", "I", nullptr, $PRIVATE, $field(ArrayQueue, tail)},
	{}
};

$MethodInfo _ArrayQueue_MethodInfo_[] = {
	{"<init>", "(I)V", nullptr, $PUBLIC, $method(static_cast<void(ArrayQueue::*)(int32_t)>(&ArrayQueue::init$))},
	{"add", "(Ljava/lang/Object;)Z", "(TT;)Z", $PUBLIC},
	{"get", "(I)Ljava/lang/Object;", "(I)TT;", $PUBLIC},
	{"newArray", "(I)[Ljava/lang/Object;", "(I)[TT;", $PRIVATE, $method(static_cast<$ObjectArray*(ArrayQueue::*)(int32_t)>(&ArrayQueue::newArray))},
	{"remove", "(I)Ljava/lang/Object;", "(I)TT;", $PUBLIC},
	{"resize", "(I)V", nullptr, $PUBLIC},
	{"size", "()I", nullptr, $PUBLIC},
	{}
};

$ClassInfo _ArrayQueue_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"com.sun.jmx.remote.internal.ArrayQueue",
	"java.util.AbstractList",
	nullptr,
	_ArrayQueue_FieldInfo_,
	_ArrayQueue_MethodInfo_,
	"<T:Ljava/lang/Object;>Ljava/util/AbstractList<TT;>;"
};

$Object* allocate$ArrayQueue($Class* clazz) {
	return $of($alloc(ArrayQueue));
}

void ArrayQueue::init$(int32_t capacity) {
	$AbstractList::init$();
	this->capacity = capacity + 1;
	$set(this, queue, newArray(capacity + 1));
	this->head = 0;
	this->tail = 0;
}

void ArrayQueue::resize(int32_t newcapacity) {
	$useLocalCurrentObjectStackCache();
	int32_t size = this->size();
	if (newcapacity < size) {
		$throwNew($IndexOutOfBoundsException, "Resizing would lose data"_s);
	}
	++newcapacity;
	if (newcapacity == this->capacity) {
		return;
	}
	$var($ObjectArray, newqueue, newArray(newcapacity));
	for (int32_t i = 0; i < size; ++i) {
		$nc(newqueue)->set(i, $(get(i)));
	}
	this->capacity = newcapacity;
	$set(this, queue, newqueue);
	this->head = 0;
	this->tail = size;
}

$ObjectArray* ArrayQueue::newArray(int32_t size) {
	return $new($ObjectArray, size);
}

bool ArrayQueue::add(Object$* o) {
	$nc(this->queue)->set(this->tail, o);
	int32_t newtail = $mod((this->tail + 1), this->capacity);
	if (newtail == this->head) {
		$throwNew($IndexOutOfBoundsException, "Queue full"_s);
	}
	this->tail = newtail;
	return true;
}

$Object* ArrayQueue::remove(int32_t i) {
	if (i != 0) {
		$throwNew($IllegalArgumentException, "Can only remove head of queue"_s);
	}
	if (this->head == this->tail) {
		$throwNew($IndexOutOfBoundsException, "Queue empty"_s);
	}
	$var($Object0, removed, $nc(this->queue)->get(this->head));
	$nc(this->queue)->set(this->head, nullptr);
	this->head = $mod((this->head + 1), this->capacity);
	return $of(removed);
}

$Object* ArrayQueue::get(int32_t i) {
	$useLocalCurrentObjectStackCache();
	int32_t size = this->size();
	if (i < 0 || i >= size) {
		$var($String, msg, $str({"Index "_s, $$str(i), ", queue size "_s, $$str(size)}));
		$throwNew($IndexOutOfBoundsException, msg);
	}
	int32_t index = $mod((this->head + i), this->capacity);
	return $of($nc(this->queue)->get(index));
}

int32_t ArrayQueue::size() {
	int32_t diff = this->tail - this->head;
	if (diff < 0) {
		diff += this->capacity;
	}
	return diff;
}

ArrayQueue::ArrayQueue() {
}

$Class* ArrayQueue::load$($String* name, bool initialize) {
	$loadClass(ArrayQueue, name, initialize, &_ArrayQueue_ClassInfo_, allocate$ArrayQueue);
	return class$;
}

$Class* ArrayQueue::class$ = nullptr;

				} // internal
			} // remote
		} // jmx
	} // sun
} // com
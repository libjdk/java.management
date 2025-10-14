#ifndef _com_sun_jmx_remote_internal_ArrayQueue_h_
#define _com_sun_jmx_remote_internal_ArrayQueue_h_
//$ class com.sun.jmx.remote.internal.ArrayQueue
//$ extends java.util.AbstractList

#include <java/lang/Array.h>
#include <java/util/AbstractList.h>

namespace com {
	namespace sun {
		namespace jmx {
			namespace remote {
				namespace internal {

class $import ArrayQueue : public ::java::util::AbstractList {
	$class(ArrayQueue, $NO_CLASS_INIT, ::java::util::AbstractList)
public:
	ArrayQueue();
	using ::java::util::AbstractList::add;
	using ::java::util::AbstractList::addAll;
	void init$(int32_t capacity);
	virtual bool add(Object$* o) override;
	virtual $Object* get(int32_t i) override;
	$ObjectArray* newArray(int32_t size);
	using ::java::util::AbstractList::remove;
	virtual $Object* remove(int32_t i) override;
	virtual void resize(int32_t newcapacity);
	virtual int32_t size() override;
	using ::java::util::AbstractList::toArray;
	int32_t capacity = 0;
	$ObjectArray* queue = nullptr;
	int32_t head = 0;
	int32_t tail = 0;
};

				} // internal
			} // remote
		} // jmx
	} // sun
} // com

#endif // _com_sun_jmx_remote_internal_ArrayQueue_h_
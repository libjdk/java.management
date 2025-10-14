#ifndef _com_sun_jmx_mbeanserver_WeakIdentityHashMap_h_
#define _com_sun_jmx_mbeanserver_WeakIdentityHashMap_h_
//$ class com.sun.jmx.mbeanserver.WeakIdentityHashMap
//$ extends java.lang.Object

#include <java/lang/Object.h>

namespace java {
	namespace lang {
		namespace ref {
			class ReferenceQueue;
			class WeakReference;
		}
	}
}
namespace java {
	namespace util {
		class Map;
	}
}

namespace com {
	namespace sun {
		namespace jmx {
			namespace mbeanserver {

class WeakIdentityHashMap : public ::java::lang::Object {
	$class(WeakIdentityHashMap, $NO_CLASS_INIT, ::java::lang::Object)
public:
	WeakIdentityHashMap();
	void init$();
	void expunge();
	virtual $Object* get(Object$* key);
	static ::com::sun::jmx::mbeanserver::WeakIdentityHashMap* make();
	::java::lang::ref::WeakReference* makeReference(Object$* referent);
	::java::lang::ref::WeakReference* makeReference(Object$* referent, ::java::lang::ref::ReferenceQueue* q);
	virtual $Object* put(Object$* key, Object$* value);
	virtual $Object* remove(Object$* key);
	::java::util::Map* map = nullptr;
	::java::lang::ref::ReferenceQueue* refQueue = nullptr;
};

			} // mbeanserver
		} // jmx
	} // sun
} // com

#endif // _com_sun_jmx_mbeanserver_WeakIdentityHashMap_h_
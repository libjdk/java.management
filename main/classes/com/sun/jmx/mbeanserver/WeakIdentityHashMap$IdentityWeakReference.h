#ifndef _com_sun_jmx_mbeanserver_WeakIdentityHashMap$IdentityWeakReference_h_
#define _com_sun_jmx_mbeanserver_WeakIdentityHashMap$IdentityWeakReference_h_
//$ class com.sun.jmx.mbeanserver.WeakIdentityHashMap$IdentityWeakReference
//$ extends java.lang.ref.WeakReference

#include <java/lang/ref/WeakReference.h>

namespace java {
	namespace lang {
		namespace ref {
			class ReferenceQueue;
		}
	}
}

namespace com {
	namespace sun {
		namespace jmx {
			namespace mbeanserver {

class WeakIdentityHashMap$IdentityWeakReference : public ::java::lang::ref::WeakReference {
	$class(WeakIdentityHashMap$IdentityWeakReference, $NO_CLASS_INIT, ::java::lang::ref::WeakReference)
public:
	WeakIdentityHashMap$IdentityWeakReference();
	void init$(Object$* o);
	void init$(Object$* o, ::java::lang::ref::ReferenceQueue* q);
	virtual bool equals(Object$* o) override;
	virtual int32_t hashCode() override;
	int32_t hashCode$ = 0;
};

			} // mbeanserver
		} // jmx
	} // sun
} // com

#endif // _com_sun_jmx_mbeanserver_WeakIdentityHashMap$IdentityWeakReference_h_
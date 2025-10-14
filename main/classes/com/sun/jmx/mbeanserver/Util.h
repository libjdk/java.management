#ifndef _com_sun_jmx_mbeanserver_Util_h_
#define _com_sun_jmx_mbeanserver_Util_h_
//$ class com.sun.jmx.mbeanserver.Util
//$ extends java.lang.Object

#include <java/lang/Array.h>

namespace java {
	namespace util {
		class Collection;
		class Comparator;
		class IdentityHashMap;
		class List;
		class Map;
		class Set;
		class SortedMap;
	}
}
namespace javax {
	namespace management {
		class ObjectName;
	}
}

namespace com {
	namespace sun {
		namespace jmx {
			namespace mbeanserver {

class Util : public ::java::lang::Object {
	$class(Util, $NO_CLASS_INIT, ::java::lang::Object)
public:
	Util();
	using ::java::lang::Object::hashCode;
	void init$();
	static $Object* cast(Object$* x);
	static int32_t hashCode($StringArray* names, $ObjectArray* values);
	static ::java::util::IdentityHashMap* newIdentityHashMap();
	static ::java::util::Map* newInsertionOrderMap();
	static ::java::util::List* newList();
	static ::java::util::List* newList(::java::util::Collection* c);
	static ::java::util::Map* newMap();
	static ::javax::management::ObjectName* newObjectName($String* string);
	static ::java::util::Set* newSet();
	static ::java::util::Set* newSet(::java::util::Collection* c);
	static ::java::util::SortedMap* newSortedMap();
	static ::java::util::SortedMap* newSortedMap(::java::util::Comparator* comp);
	static ::java::util::Map* newSynchronizedIdentityHashMap();
	static ::java::util::Map* newSynchronizedMap();
	static bool wildmatch($String* str, $String* pat, int32_t stri, int32_t strend, int32_t pati, int32_t patend);
	static bool wildmatch($String* str, $String* pat);
};

			} // mbeanserver
		} // jmx
	} // sun
} // com

#endif // _com_sun_jmx_mbeanserver_Util_h_
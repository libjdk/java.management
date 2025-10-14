#ifndef _javax_management_openmbean_CompositeDataView_h_
#define _javax_management_openmbean_CompositeDataView_h_
//$ interface javax.management.openmbean.CompositeDataView
//$ extends java.lang.Object

#include <java/lang/Object.h>

namespace javax {
	namespace management {
		namespace openmbean {
			class CompositeData;
			class CompositeType;
		}
	}
}

namespace javax {
	namespace management {
		namespace openmbean {

class $export CompositeDataView : public ::java::lang::Object {
	$interface(CompositeDataView, $NO_CLASS_INIT, ::java::lang::Object)
public:
	virtual ::javax::management::openmbean::CompositeData* toCompositeData(::javax::management::openmbean::CompositeType* ct) {return nullptr;}
};

		} // openmbean
	} // management
} // javax

#endif // _javax_management_openmbean_CompositeDataView_h_
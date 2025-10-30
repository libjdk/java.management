#include <javax/management/openmbean/CompositeDataView.h>

#include <javax/management/openmbean/CompositeData.h>
#include <javax/management/openmbean/CompositeType.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $CompositeData = ::javax::management::openmbean::CompositeData;
using $CompositeType = ::javax::management::openmbean::CompositeType;

namespace javax {
	namespace management {
		namespace openmbean {

$MethodInfo _CompositeDataView_MethodInfo_[] = {
	{"toCompositeData", "(Ljavax/management/openmbean/CompositeType;)Ljavax/management/openmbean/CompositeData;", nullptr, $PUBLIC | $ABSTRACT},
	{}
};

$ClassInfo _CompositeDataView_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT,
	"javax.management.openmbean.CompositeDataView",
	nullptr,
	nullptr,
	nullptr,
	_CompositeDataView_MethodInfo_
};

$Object* allocate$CompositeDataView($Class* clazz) {
	return $of($alloc(CompositeDataView));
}

$Class* CompositeDataView::load$($String* name, bool initialize) {
	$loadClass(CompositeDataView, name, initialize, &_CompositeDataView_ClassInfo_, allocate$CompositeDataView);
	return class$;
}

$Class* CompositeDataView::class$ = nullptr;

		} // openmbean
	} // management
} // javax
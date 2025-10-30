#include <javax/management/openmbean/TabularData.h>

#include <java/util/Set.h>
#include <javax/management/openmbean/CompositeData.h>
#include <javax/management/openmbean/TabularType.h>
#include <jcpp.h>

using $CompositeDataArray = $Array<::javax::management::openmbean::CompositeData>;
using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Collection = ::java::util::Collection;
using $Set = ::java::util::Set;
using $CompositeData = ::javax::management::openmbean::CompositeData;
using $TabularType = ::javax::management::openmbean::TabularType;

namespace javax {
	namespace management {
		namespace openmbean {

$MethodInfo _TabularData_MethodInfo_[] = {
	{"calculateIndex", "(Ljavax/management/openmbean/CompositeData;)[Ljava/lang/Object;", nullptr, $PUBLIC | $ABSTRACT},
	{"clear", "()V", nullptr, $PUBLIC | $ABSTRACT},
	{"containsKey", "([Ljava/lang/Object;)Z", nullptr, $PUBLIC | $ABSTRACT},
	{"containsValue", "(Ljavax/management/openmbean/CompositeData;)Z", nullptr, $PUBLIC | $ABSTRACT},
	{"equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC | $ABSTRACT},
	{"get", "([Ljava/lang/Object;)Ljavax/management/openmbean/CompositeData;", nullptr, $PUBLIC | $ABSTRACT},
	{"getTabularType", "()Ljavax/management/openmbean/TabularType;", nullptr, $PUBLIC | $ABSTRACT},
	{"hashCode", "()I", nullptr, $PUBLIC | $ABSTRACT},
	{"isEmpty", "()Z", nullptr, $PUBLIC | $ABSTRACT},
	{"keySet", "()Ljava/util/Set;", "()Ljava/util/Set<*>;", $PUBLIC | $ABSTRACT},
	{"put", "(Ljavax/management/openmbean/CompositeData;)V", nullptr, $PUBLIC | $ABSTRACT},
	{"putAll", "([Ljavax/management/openmbean/CompositeData;)V", nullptr, $PUBLIC | $ABSTRACT},
	{"remove", "([Ljava/lang/Object;)Ljavax/management/openmbean/CompositeData;", nullptr, $PUBLIC | $ABSTRACT},
	{"size", "()I", nullptr, $PUBLIC | $ABSTRACT},
	{"toString", "()Ljava/lang/String;", nullptr, $PUBLIC | $ABSTRACT},
	{"values", "()Ljava/util/Collection;", "()Ljava/util/Collection<*>;", $PUBLIC | $ABSTRACT},
	{}
};

$ClassInfo _TabularData_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT,
	"javax.management.openmbean.TabularData",
	nullptr,
	nullptr,
	nullptr,
	_TabularData_MethodInfo_
};

$Object* allocate$TabularData($Class* clazz) {
	return $of($alloc(TabularData));
}

bool TabularData::equals(Object$* obj) {
	 return this->$Object::equals(obj);
}

int32_t TabularData::hashCode() {
	 return this->$Object::hashCode();
}

$String* TabularData::toString() {
	 return this->$Object::toString();
}

$Class* TabularData::load$($String* name, bool initialize) {
	$loadClass(TabularData, name, initialize, &_TabularData_ClassInfo_, allocate$TabularData);
	return class$;
}

$Class* TabularData::class$ = nullptr;

		} // openmbean
	} // management
} // javax
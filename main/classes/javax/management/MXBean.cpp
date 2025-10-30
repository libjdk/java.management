#include <javax/management/MXBean.h>

#include <jcpp.h>

using $Attribute = ::java::lang::Attribute;
using $ClassInfo = ::java::lang::ClassInfo;
using $CompoundAttribute = ::java::lang::CompoundAttribute;
using $MethodInfo = ::java::lang::MethodInfo;
using $NamedAttribute = ::java::lang::NamedAttribute;
using $Annotation = ::java::lang::annotation::Annotation;

namespace javax {
	namespace management {

$NamedAttribute MXBean_Attribute_var$0[] = {
	{"value", 'e', "Ljava/lang/annotation/RetentionPolicy; RUNTIME"},
	{}
};

$Attribute MXBean_Attribute_var$2[] = {
	{'e', "Ljava/lang/annotation/ElementType; TYPE"},
	{'-'}
};

$NamedAttribute MXBean_Attribute_var$1[] = {
	{"value", '[', MXBean_Attribute_var$2},
	{}
};

$CompoundAttribute _MXBean_Annotations_[] = {
	{"Ljava/lang/annotation/Documented;", nullptr},
	{"Ljava/lang/annotation/Retention;", MXBean_Attribute_var$0},
	{"Ljava/lang/annotation/Target;", MXBean_Attribute_var$1},
	{}
};

$Attribute _MXBean_DefaultValue_value0 = {
	'Z', "true"
};

$MethodInfo _MXBean_MethodInfo_[] = {
	{"value", "()Z", nullptr, $PUBLIC | $ABSTRACT, nullptr, nullptr, &_MXBean_DefaultValue_value0},
	{}
};

$ClassInfo _MXBean_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT | $ANNOTATION,
	"javax.management.MXBean",
	nullptr,
	"java.lang.annotation.Annotation",
	nullptr,
	_MXBean_MethodInfo_,
	nullptr,
	nullptr,
	nullptr,
	_MXBean_Annotations_
};

$Object* allocate$MXBean($Class* clazz) {
	return $of($alloc(MXBean));
}

$Class* MXBean::load$($String* name, bool initialize) {
	$loadClass(MXBean, name, initialize, &_MXBean_ClassInfo_, allocate$MXBean);
	return class$;
}

$Class* MXBean::class$ = nullptr;

	} // management
} // javax
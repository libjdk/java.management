#include <javax/management/ConstructorParameters.h>

#include <jcpp.h>

using $Attribute = ::java::lang::Attribute;
using $ClassInfo = ::java::lang::ClassInfo;
using $CompoundAttribute = ::java::lang::CompoundAttribute;
using $MethodInfo = ::java::lang::MethodInfo;
using $NamedAttribute = ::java::lang::NamedAttribute;
using $Annotation = ::java::lang::annotation::Annotation;

namespace javax {
	namespace management {

$Attribute ConstructorParameters_Attribute_var$1[] = {
	{'e', "Ljava/lang/annotation/ElementType; CONSTRUCTOR"},
	{'-'}
};

$NamedAttribute ConstructorParameters_Attribute_var$0[] = {
	{"value", '[', ConstructorParameters_Attribute_var$1},
	{}
};

$NamedAttribute ConstructorParameters_Attribute_var$2[] = {
	{"value", 'e', "Ljava/lang/annotation/RetentionPolicy; RUNTIME"},
	{}
};

$CompoundAttribute _ConstructorParameters_Annotations_[] = {
	{"Ljava/lang/annotation/Documented;", nullptr},
	{"Ljava/lang/annotation/Target;", ConstructorParameters_Attribute_var$0},
	{"Ljava/lang/annotation/Retention;", ConstructorParameters_Attribute_var$2},
	{}
};

$MethodInfo _ConstructorParameters_MethodInfo_[] = {
	{"value", "()[Ljava/lang/String;", nullptr, $PUBLIC | $ABSTRACT},
	{}
};

$ClassInfo _ConstructorParameters_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT | $ANNOTATION,
	"javax.management.ConstructorParameters",
	nullptr,
	"java.lang.annotation.Annotation",
	nullptr,
	_ConstructorParameters_MethodInfo_,
	nullptr,
	nullptr,
	nullptr,
	_ConstructorParameters_Annotations_
};

$Object* allocate$ConstructorParameters($Class* clazz) {
	return $of($alloc(ConstructorParameters));
}

$Class* ConstructorParameters::load$($String* name, bool initialize) {
	$loadClass(ConstructorParameters, name, initialize, &_ConstructorParameters_ClassInfo_, allocate$ConstructorParameters);
	return class$;
}

$Class* ConstructorParameters::class$ = nullptr;

	} // management
} // javax
#include <javax/management/DescriptorKey.h>

#include <jcpp.h>

using $Attribute = ::java::lang::Attribute;
using $ClassInfo = ::java::lang::ClassInfo;
using $CompoundAttribute = ::java::lang::CompoundAttribute;
using $MethodInfo = ::java::lang::MethodInfo;
using $NamedAttribute = ::java::lang::NamedAttribute;
using $Annotation = ::java::lang::annotation::Annotation;

namespace javax {
	namespace management {

$NamedAttribute DescriptorKey_Attribute_var$0[] = {
	{"value", 'e', "Ljava/lang/annotation/RetentionPolicy; RUNTIME"},
	{}
};

$Attribute DescriptorKey_Attribute_var$2[] = {
	{'e', "Ljava/lang/annotation/ElementType; METHOD"},
	{'-'}
};

$NamedAttribute DescriptorKey_Attribute_var$1[] = {
	{"value", '[', DescriptorKey_Attribute_var$2},
	{}
};

$CompoundAttribute _DescriptorKey_Annotations_[] = {
	{"Ljava/lang/annotation/Documented;", nullptr},
	{"Ljava/lang/annotation/Retention;", DescriptorKey_Attribute_var$0},
	{"Ljava/lang/annotation/Target;", DescriptorKey_Attribute_var$1},
	{}
};

$MethodInfo _DescriptorKey_MethodInfo_[] = {
	{"value", "()Ljava/lang/String;", nullptr, $PUBLIC | $ABSTRACT},
	{}
};

$ClassInfo _DescriptorKey_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT | $ANNOTATION,
	"javax.management.DescriptorKey",
	nullptr,
	"java.lang.annotation.Annotation",
	nullptr,
	_DescriptorKey_MethodInfo_,
	nullptr,
	nullptr,
	nullptr,
	_DescriptorKey_Annotations_
};

$Object* allocate$DescriptorKey($Class* clazz) {
	return $of($alloc(DescriptorKey));
}

$Class* DescriptorKey::load$($String* name, bool initialize) {
	$loadClass(DescriptorKey, name, initialize, &_DescriptorKey_ClassInfo_, allocate$DescriptorKey);
	return class$;
}

$Class* DescriptorKey::class$ = nullptr;

	} // management
} // javax
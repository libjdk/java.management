#include <sun/management/MappedMXBeanType$ListMXBeanType.h>

#include <java/lang/AssertionError.h>
#include <java/lang/ClassNotFoundException.h>
#include <java/lang/ReflectiveOperationException.h>
#include <java/lang/reflect/Array.h>
#include <java/lang/reflect/ParameterizedType.h>
#include <java/lang/reflect/Type.h>
#include <java/util/AbstractList.h>
#include <java/util/ArrayList.h>
#include <java/util/Iterator.h>
#include <java/util/List.h>
#include <javax/management/openmbean/ArrayType.h>
#include <javax/management/openmbean/OpenDataException.h>
#include <javax/management/openmbean/OpenType.h>
#include <sun/management/MappedMXBeanType.h>
#include <jcpp.h>

using $TypeArray = $Array<::java::lang::reflect::Type>;
using $AssertionError = ::java::lang::AssertionError;
using $ClassInfo = ::java::lang::ClassInfo;
using $ClassNotFoundException = ::java::lang::ClassNotFoundException;
using $Exception = ::java::lang::Exception;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $NullPointerException = ::java::lang::NullPointerException;
using $ReflectiveOperationException = ::java::lang::ReflectiveOperationException;
using $1Array = ::java::lang::reflect::Array;
using $ParameterizedType = ::java::lang::reflect::ParameterizedType;
using $Type = ::java::lang::reflect::Type;
using $AbstractList = ::java::util::AbstractList;
using $ArrayList = ::java::util::ArrayList;
using $Iterator = ::java::util::Iterator;
using $List = ::java::util::List;
using $ArrayType = ::javax::management::openmbean::ArrayType;
using $OpenDataException = ::javax::management::openmbean::OpenDataException;
using $OpenType = ::javax::management::openmbean::OpenType;
using $MappedMXBeanType = ::sun::management::MappedMXBeanType;

namespace sun {
	namespace management {

$FieldInfo _MappedMXBeanType$ListMXBeanType_FieldInfo_[] = {
	{"$assertionsDisabled", "Z", nullptr, $STATIC | $FINAL | $SYNTHETIC, $staticField(MappedMXBeanType$ListMXBeanType, $assertionsDisabled)},
	{"javaType", "Ljava/lang/reflect/ParameterizedType;", nullptr, $FINAL, $field(MappedMXBeanType$ListMXBeanType, javaType)},
	{"paramType", "Lsun/management/MappedMXBeanType;", nullptr, $FINAL, $field(MappedMXBeanType$ListMXBeanType, paramType)},
	{"typeName", "Ljava/lang/String;", nullptr, $FINAL, $field(MappedMXBeanType$ListMXBeanType, typeName)},
	{}
};

$MethodInfo _MappedMXBeanType$ListMXBeanType_MethodInfo_[] = {
	{"<init>", "(Ljava/lang/reflect/ParameterizedType;)V", nullptr, 0, $method(static_cast<void(MappedMXBeanType$ListMXBeanType::*)($ParameterizedType*)>(&MappedMXBeanType$ListMXBeanType::init$)), "javax.management.openmbean.OpenDataException"},
	{"getJavaType", "()Ljava/lang/reflect/Type;", nullptr, 0},
	{"getName", "()Ljava/lang/String;", nullptr, 0},
	{"toJavaTypeData", "(Ljava/lang/Object;)Ljava/lang/Object;", nullptr, $PUBLIC, nullptr, "javax.management.openmbean.OpenDataException,java.io.InvalidObjectException"},
	{"toOpenTypeData", "(Ljava/lang/Object;)Ljava/lang/Object;", nullptr, $PUBLIC, nullptr, "javax.management.openmbean.OpenDataException"},
	{}
};

$InnerClassInfo _MappedMXBeanType$ListMXBeanType_InnerClassesInfo_[] = {
	{"sun.management.MappedMXBeanType$ListMXBeanType", "sun.management.MappedMXBeanType", "ListMXBeanType", $STATIC},
	{}
};

$ClassInfo _MappedMXBeanType$ListMXBeanType_ClassInfo_ = {
	$ACC_SUPER,
	"sun.management.MappedMXBeanType$ListMXBeanType",
	"sun.management.MappedMXBeanType",
	nullptr,
	_MappedMXBeanType$ListMXBeanType_FieldInfo_,
	_MappedMXBeanType$ListMXBeanType_MethodInfo_,
	nullptr,
	nullptr,
	_MappedMXBeanType$ListMXBeanType_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.management.MappedMXBeanType"
};

$Object* allocate$MappedMXBeanType$ListMXBeanType($Class* clazz) {
	return $of($alloc(MappedMXBeanType$ListMXBeanType));
}

bool MappedMXBeanType$ListMXBeanType::$assertionsDisabled = false;

void MappedMXBeanType$ListMXBeanType::init$($ParameterizedType* pt) {
	$useLocalCurrentObjectStackCache();
	$beforeCallerSensitive();
	$MappedMXBeanType::init$();
	$set(this, javaType, pt);
	$var($TypeArray, argTypes, $nc(pt)->getActualTypeArguments());
	if (!MappedMXBeanType$ListMXBeanType::$assertionsDisabled && !($nc(argTypes)->length == 1)) {
		$throwNew($AssertionError);
	}
	if (!($instanceOf($Class, $nc(argTypes)->get(0)))) {
		$throwNew($OpenDataException, $$str({"Element Type for "_s, pt, " not supported"_s}));
	}
	$Class* et = $cast($Class, $nc(argTypes)->get(0));
	if ($nc(et)->isArray()) {
		$throwNew($OpenDataException, $$str({"Element Type for "_s, pt, " not supported"_s}));
	}
	$set(this, paramType, getMappedType(et));
	$set(this, typeName, $str({"List<"_s, $($nc(this->paramType)->getName()), ">"_s}));
	try {
		$set(this, mappedTypeClass, $Class::forName($$str({"[L"_s, $($nc(this->paramType)->getTypeName()), ";"_s})));
	} catch ($ClassNotFoundException& e) {
		$var($OpenDataException, ode, $new($OpenDataException, "Array class not found"_s));
		ode->initCause(e);
		$throw(ode);
	}
	$set(this, openType, $new($ArrayType, 1, $($nc(this->paramType)->getOpenType())));
}

$Type* MappedMXBeanType$ListMXBeanType::getJavaType() {
	return this->javaType;
}

$String* MappedMXBeanType$ListMXBeanType::getName() {
	return this->typeName;
}

$Object* MappedMXBeanType$ListMXBeanType::toOpenTypeData(Object$* data) {
	$useLocalCurrentObjectStackCache();
	$var($List, list, $cast($List, data));
	$Class* var$0 = $nc(this->paramType)->getMappedTypeClass();
	$var($ObjectArray, openArray, $cast($ObjectArray, $1Array::newInstance(var$0, $nc(list)->size())));
	int32_t i = 0;
	{
		$var($Iterator, i$, $nc(list)->iterator());
		for (; $nc(i$)->hasNext();) {
			$var($Object, o, i$->next());
			{
				openArray->set(i++, $($nc(this->paramType)->toOpenTypeData(o)));
			}
		}
	}
	return $of(openArray);
}

$Object* MappedMXBeanType$ListMXBeanType::toJavaTypeData(Object$* data) {
	$useLocalCurrentObjectStackCache();
	$var($ObjectArray, openArray, $cast($ObjectArray, data));
	$var($List, result, $new($ArrayList, $nc(openArray)->length));
	{
		$var($ObjectArray, arr$, openArray);
		int32_t len$ = $nc(arr$)->length;
		int32_t i$ = 0;
		for (; i$ < len$; ++i$) {
			$var($Object0, o, arr$->get(i$));
			{
				result->add($($nc(this->paramType)->toJavaTypeData(o)));
			}
		}
	}
	return $of(result);
}

void clinit$MappedMXBeanType$ListMXBeanType($Class* class$) {
	$load($MappedMXBeanType);
	MappedMXBeanType$ListMXBeanType::$assertionsDisabled = !$MappedMXBeanType::class$->desiredAssertionStatus();
}

MappedMXBeanType$ListMXBeanType::MappedMXBeanType$ListMXBeanType() {
}

$Class* MappedMXBeanType$ListMXBeanType::load$($String* name, bool initialize) {
	$loadClass(MappedMXBeanType$ListMXBeanType, name, initialize, &_MappedMXBeanType$ListMXBeanType_ClassInfo_, clinit$MappedMXBeanType$ListMXBeanType, allocate$MappedMXBeanType$ListMXBeanType);
	return class$;
}

$Class* MappedMXBeanType$ListMXBeanType::class$ = nullptr;

	} // management
} // sun
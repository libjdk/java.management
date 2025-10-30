#include <com/sun/jmx/mbeanserver/DefaultMXBeanMappingFactory$CompositeBuilderViaConstructor$Constr.h>

#include <com/sun/jmx/mbeanserver/DefaultMXBeanMappingFactory$CompositeBuilderViaConstructor.h>
#include <java/lang/reflect/Constructor.h>
#include <java/util/BitSet.h>
#include <jcpp.h>

using $DefaultMXBeanMappingFactory$CompositeBuilderViaConstructor = ::com::sun::jmx::mbeanserver::DefaultMXBeanMappingFactory$CompositeBuilderViaConstructor;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Constructor = ::java::lang::reflect::Constructor;
using $BitSet = ::java::util::BitSet;

namespace com {
	namespace sun {
		namespace jmx {
			namespace mbeanserver {

$FieldInfo _DefaultMXBeanMappingFactory$CompositeBuilderViaConstructor$Constr_FieldInfo_[] = {
	{"constructor", "Ljava/lang/reflect/Constructor;", "Ljava/lang/reflect/Constructor<*>;", $FINAL, $field(DefaultMXBeanMappingFactory$CompositeBuilderViaConstructor$Constr, constructor)},
	{"paramIndexes", "[I", nullptr, $FINAL, $field(DefaultMXBeanMappingFactory$CompositeBuilderViaConstructor$Constr, paramIndexes)},
	{"presentParams", "Ljava/util/BitSet;", nullptr, $FINAL, $field(DefaultMXBeanMappingFactory$CompositeBuilderViaConstructor$Constr, presentParams)},
	{}
};

$MethodInfo _DefaultMXBeanMappingFactory$CompositeBuilderViaConstructor$Constr_MethodInfo_[] = {
	{"<init>", "(Ljava/lang/reflect/Constructor;[ILjava/util/BitSet;)V", "(Ljava/lang/reflect/Constructor<*>;[ILjava/util/BitSet;)V", 0, $method(static_cast<void(DefaultMXBeanMappingFactory$CompositeBuilderViaConstructor$Constr::*)($Constructor*,$ints*,$BitSet*)>(&DefaultMXBeanMappingFactory$CompositeBuilderViaConstructor$Constr::init$))},
	{}
};

$InnerClassInfo _DefaultMXBeanMappingFactory$CompositeBuilderViaConstructor$Constr_InnerClassesInfo_[] = {
	{"com.sun.jmx.mbeanserver.DefaultMXBeanMappingFactory$CompositeBuilderViaConstructor", "com.sun.jmx.mbeanserver.DefaultMXBeanMappingFactory", "CompositeBuilderViaConstructor", $PRIVATE | $STATIC},
	{"com.sun.jmx.mbeanserver.DefaultMXBeanMappingFactory$CompositeBuilderViaConstructor$Constr", "com.sun.jmx.mbeanserver.DefaultMXBeanMappingFactory$CompositeBuilderViaConstructor", "Constr", $PRIVATE | $STATIC},
	{}
};

$ClassInfo _DefaultMXBeanMappingFactory$CompositeBuilderViaConstructor$Constr_ClassInfo_ = {
	$ACC_SUPER,
	"com.sun.jmx.mbeanserver.DefaultMXBeanMappingFactory$CompositeBuilderViaConstructor$Constr",
	"java.lang.Object",
	nullptr,
	_DefaultMXBeanMappingFactory$CompositeBuilderViaConstructor$Constr_FieldInfo_,
	_DefaultMXBeanMappingFactory$CompositeBuilderViaConstructor$Constr_MethodInfo_,
	nullptr,
	nullptr,
	_DefaultMXBeanMappingFactory$CompositeBuilderViaConstructor$Constr_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.jmx.mbeanserver.DefaultMXBeanMappingFactory"
};

$Object* allocate$DefaultMXBeanMappingFactory$CompositeBuilderViaConstructor$Constr($Class* clazz) {
	return $of($alloc(DefaultMXBeanMappingFactory$CompositeBuilderViaConstructor$Constr));
}

void DefaultMXBeanMappingFactory$CompositeBuilderViaConstructor$Constr::init$($Constructor* constructor, $ints* paramIndexes, $BitSet* presentParams) {
	$set(this, constructor, constructor);
	$set(this, paramIndexes, paramIndexes);
	$set(this, presentParams, presentParams);
}

DefaultMXBeanMappingFactory$CompositeBuilderViaConstructor$Constr::DefaultMXBeanMappingFactory$CompositeBuilderViaConstructor$Constr() {
}

$Class* DefaultMXBeanMappingFactory$CompositeBuilderViaConstructor$Constr::load$($String* name, bool initialize) {
	$loadClass(DefaultMXBeanMappingFactory$CompositeBuilderViaConstructor$Constr, name, initialize, &_DefaultMXBeanMappingFactory$CompositeBuilderViaConstructor$Constr_ClassInfo_, allocate$DefaultMXBeanMappingFactory$CompositeBuilderViaConstructor$Constr);
	return class$;
}

$Class* DefaultMXBeanMappingFactory$CompositeBuilderViaConstructor$Constr::class$ = nullptr;

			} // mbeanserver
		} // jmx
	} // sun
} // com
#include <com/sun/jmx/mbeanserver/DefaultMXBeanMappingFactory$CompositeBuilderViaConstructor.h>

#include <com/sun/jmx/mbeanserver/DefaultMXBeanMappingFactory$CompositeBuilder.h>
#include <com/sun/jmx/mbeanserver/DefaultMXBeanMappingFactory$CompositeBuilderViaConstructor$Constr.h>
#include <com/sun/jmx/mbeanserver/DefaultMXBeanMappingFactory.h>
#include <com/sun/jmx/mbeanserver/JavaBeansAccessor.h>
#include <com/sun/jmx/mbeanserver/MXBeanMapping.h>
#include <com/sun/jmx/mbeanserver/Util.h>
#include <java/io/InvalidObjectException.h>
#include <java/lang/annotation/Annotation.h>
#include <java/lang/reflect/AccessibleObject.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/lang/reflect/Modifier.h>
#include <java/lang/reflect/Type.h>
#include <java/util/AbstractSet.h>
#include <java/util/Arrays.h>
#include <java/util/BitSet.h>
#include <java/util/Iterator.h>
#include <java/util/List.h>
#include <java/util/Map.h>
#include <java/util/Set.h>
#include <java/util/TreeSet.h>
#include <javax/management/ConstructorParameters.h>
#include <javax/management/openmbean/CompositeData.h>
#include <javax/management/openmbean/CompositeType.h>
#include <javax/management/openmbean/OpenType.h>
#include <sun/reflect/misc/ReflectUtil.h>
#include <jcpp.h>

using $MXBeanMappingArray = $Array<::com::sun::jmx::mbeanserver::MXBeanMapping>;
using $ConstructorArray = $Array<::java::lang::reflect::Constructor>;
using $MethodArray = $Array<::java::lang::reflect::Method>;
using $TypeArray = $Array<::java::lang::reflect::Type>;
using $DefaultMXBeanMappingFactory = ::com::sun::jmx::mbeanserver::DefaultMXBeanMappingFactory;
using $DefaultMXBeanMappingFactory$CompositeBuilder = ::com::sun::jmx::mbeanserver::DefaultMXBeanMappingFactory$CompositeBuilder;
using $DefaultMXBeanMappingFactory$CompositeBuilderViaConstructor$Constr = ::com::sun::jmx::mbeanserver::DefaultMXBeanMappingFactory$CompositeBuilderViaConstructor$Constr;
using $JavaBeansAccessor = ::com::sun::jmx::mbeanserver::JavaBeansAccessor;
using $MXBeanMapping = ::com::sun::jmx::mbeanserver::MXBeanMapping;
using $Util = ::com::sun::jmx::mbeanserver::Util;
using $InvalidObjectException = ::java::io::InvalidObjectException;
using $ClassInfo = ::java::lang::ClassInfo;
using $Exception = ::java::lang::Exception;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $Integer = ::java::lang::Integer;
using $MethodInfo = ::java::lang::MethodInfo;
using $NullPointerException = ::java::lang::NullPointerException;
using $Annotation = ::java::lang::annotation::Annotation;
using $AccessibleObject = ::java::lang::reflect::AccessibleObject;
using $Constructor = ::java::lang::reflect::Constructor;
using $Method = ::java::lang::reflect::Method;
using $Modifier = ::java::lang::reflect::Modifier;
using $Type = ::java::lang::reflect::Type;
using $AbstractSet = ::java::util::AbstractSet;
using $Arrays = ::java::util::Arrays;
using $BitSet = ::java::util::BitSet;
using $Iterator = ::java::util::Iterator;
using $List = ::java::util::List;
using $Map = ::java::util::Map;
using $Set = ::java::util::Set;
using $TreeSet = ::java::util::TreeSet;
using $ConstructorParameters = ::javax::management::ConstructorParameters;
using $CompositeData = ::javax::management::openmbean::CompositeData;
using $CompositeType = ::javax::management::openmbean::CompositeType;
using $OpenType = ::javax::management::openmbean::OpenType;
using $ReflectUtil = ::sun::reflect::misc::ReflectUtil;

namespace com {
	namespace sun {
		namespace jmx {
			namespace mbeanserver {

$FieldInfo _DefaultMXBeanMappingFactory$CompositeBuilderViaConstructor_FieldInfo_[] = {
	{"annotatedConstructors", "Ljava/util/List;", "Ljava/util/List<Lcom/sun/jmx/mbeanserver/DefaultMXBeanMappingFactory$CompositeBuilderViaConstructor$Constr;>;", $PRIVATE, $field(DefaultMXBeanMappingFactory$CompositeBuilderViaConstructor, annotatedConstructors)},
	{}
};

$MethodInfo _DefaultMXBeanMappingFactory$CompositeBuilderViaConstructor_MethodInfo_[] = {
	{"<init>", "(Ljava/lang/Class;[Ljava/lang/String;)V", "(Ljava/lang/Class<*>;[Ljava/lang/String;)V", 0, $method(static_cast<void(DefaultMXBeanMappingFactory$CompositeBuilderViaConstructor::*)($Class*,$StringArray*)>(&DefaultMXBeanMappingFactory$CompositeBuilderViaConstructor::init$))},
	{"applicable", "([Ljava/lang/reflect/Method;)Ljava/lang/String;", nullptr, 0, nullptr, "java.io.InvalidObjectException"},
	{"fromCompositeData", "(Ljavax/management/openmbean/CompositeData;[Ljava/lang/String;[Lcom/sun/jmx/mbeanserver/MXBeanMapping;)Ljava/lang/Object;", nullptr, 0, nullptr, "java.io.InvalidObjectException"},
	{"getConstPropValues", "(Ljava/lang/reflect/Constructor;)[Ljava/lang/String;", "(Ljava/lang/reflect/Constructor<*>;)[Ljava/lang/String;", 0},
	{"matchingMechanism", "(Ljava/lang/reflect/Constructor;)Ljava/lang/String;", "(Ljava/lang/reflect/Constructor<*>;)Ljava/lang/String;", 0},
	{"referenceMechannism", "(Ljava/lang/String;)Ljava/lang/String;", nullptr, 0},
	{"reportConstructorsAmbiguousFor", "(Ljava/util/Set;)Ljava/lang/String;", "(Ljava/util/Set<Ljava/lang/String;>;)Ljava/lang/String;", 0},
	{"reportMultipleConstructorsFoundFor", "([Ljava/lang/String;)Ljava/lang/String;", nullptr, $TRANSIENT},
	{"reportNoConstructor", "()Ljava/lang/String;", nullptr, 0},
	{"reportNoConstructorFoundFor", "(Ljava/util/Set;)Ljava/lang/String;", "(Ljava/util/Set<Ljava/lang/String;>;)Ljava/lang/String;", 0},
	{"subset", "(Ljava/util/BitSet;Ljava/util/BitSet;)Z", nullptr, $PRIVATE | $STATIC, $method(static_cast<bool(*)($BitSet*,$BitSet*)>(&DefaultMXBeanMappingFactory$CompositeBuilderViaConstructor::subset))},
	{}
};

$InnerClassInfo _DefaultMXBeanMappingFactory$CompositeBuilderViaConstructor_InnerClassesInfo_[] = {
	{"com.sun.jmx.mbeanserver.DefaultMXBeanMappingFactory$CompositeBuilderViaConstructor", "com.sun.jmx.mbeanserver.DefaultMXBeanMappingFactory", "CompositeBuilderViaConstructor", $PRIVATE | $STATIC},
	{"com.sun.jmx.mbeanserver.DefaultMXBeanMappingFactory$CompositeBuilder", "com.sun.jmx.mbeanserver.DefaultMXBeanMappingFactory", "CompositeBuilder", $PRIVATE | $STATIC | $ABSTRACT},
	{"com.sun.jmx.mbeanserver.DefaultMXBeanMappingFactory$CompositeBuilderViaConstructor$Constr", "com.sun.jmx.mbeanserver.DefaultMXBeanMappingFactory$CompositeBuilderViaConstructor", "Constr", $PRIVATE | $STATIC},
	{}
};

$ClassInfo _DefaultMXBeanMappingFactory$CompositeBuilderViaConstructor_ClassInfo_ = {
	$ACC_SUPER,
	"com.sun.jmx.mbeanserver.DefaultMXBeanMappingFactory$CompositeBuilderViaConstructor",
	"com.sun.jmx.mbeanserver.DefaultMXBeanMappingFactory$CompositeBuilder",
	nullptr,
	_DefaultMXBeanMappingFactory$CompositeBuilderViaConstructor_FieldInfo_,
	_DefaultMXBeanMappingFactory$CompositeBuilderViaConstructor_MethodInfo_,
	nullptr,
	nullptr,
	_DefaultMXBeanMappingFactory$CompositeBuilderViaConstructor_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.jmx.mbeanserver.DefaultMXBeanMappingFactory"
};

$Object* allocate$DefaultMXBeanMappingFactory$CompositeBuilderViaConstructor($Class* clazz) {
	return $of($alloc(DefaultMXBeanMappingFactory$CompositeBuilderViaConstructor));
}

void DefaultMXBeanMappingFactory$CompositeBuilderViaConstructor::init$($Class* targetClass, $StringArray* itemNames) {
	$DefaultMXBeanMappingFactory$CompositeBuilder::init$(targetClass, itemNames);
}

$StringArray* DefaultMXBeanMappingFactory$CompositeBuilderViaConstructor::getConstPropValues($Constructor* ctr) {
	$useLocalCurrentObjectStackCache();
	$load($ConstructorParameters);
	$var($ConstructorParameters, ctrProps, $cast($ConstructorParameters, $nc(ctr)->getAnnotation($ConstructorParameters::class$)));
	if (ctrProps != nullptr) {
		return ctrProps->value();
	} else {
		$var($StringArray, vals, $JavaBeansAccessor::getConstructorPropertiesValue(ctr));
		return vals;
	}
}

$String* DefaultMXBeanMappingFactory$CompositeBuilderViaConstructor::applicable($MethodArray* getters) {
	$useLocalCurrentObjectStackCache();
	$beforeCallerSensitive();
	$Class* targetClass = getTargetClass();
	$var($ConstructorArray, constrs, $nc(targetClass)->getConstructors());
	$var($List, annotatedConstrList, $Util::newList());
	{
		$var($ConstructorArray, arr$, constrs);
		int32_t len$ = $nc(arr$)->length;
		int32_t i$ = 0;
		for (; i$ < len$; ++i$) {
			$var($Constructor, constr, arr$->get(i$));
			{
				bool var$0 = $Modifier::isPublic($nc(constr)->getModifiers());
				if (var$0 && getConstPropValues(constr) != nullptr) {
					$nc(annotatedConstrList)->add(constr);
				}
			}
		}
	}
	if ($nc(annotatedConstrList)->isEmpty()) {
		return reportNoConstructor();
	}
	$set(this, annotatedConstructors, $Util::newList());
	$var($Map, getterMap, $Util::newMap());
	$var($StringArray, itemNames, getItemNames());
	for (int32_t i = 0; i < $nc(itemNames)->length; ++i) {
		$nc(getterMap)->put(itemNames->get(i), $($Integer::valueOf(i)));
	}
	$var($Set, getterIndexSets, $Util::newSet());
	{
		$var($Iterator, i$, $nc(annotatedConstrList)->iterator());
		for (; $nc(i$)->hasNext();) {
			$var($Constructor, constr, $cast($Constructor, i$->next()));
			{
				$var($String, matchingMechanism, this->matchingMechanism(constr));
				$var($StringArray, propertyNames, getConstPropValues(constr));
				$var($TypeArray, paramTypes, $nc(constr)->getGenericParameterTypes());
				if ($nc(paramTypes)->length != $nc(propertyNames)->length) {
					$var($String, msg, $str({"Number of constructor params does not match "_s, $(referenceMechannism(matchingMechanism)), ": "_s, constr}));
					$throwNew($InvalidObjectException, msg);
				}
				$var($ints, paramIndexes, $new($ints, $nc(getters)->length));
				for (int32_t i = 0; i < getters->length; ++i) {
					paramIndexes->set(i, -1);
				}
				$var($BitSet, present, $new($BitSet));
				for (int32_t i = 0; i < $nc(propertyNames)->length; ++i) {
					$var($String, propertyName, propertyNames->get(i));
					if (!$nc(getterMap)->containsKey(propertyName)) {
						$var($String, msg, $str({matchingMechanism, " includes name "_s, propertyName, " which does not correspond to a property"_s}));
						{
							$var($Iterator, i$, $nc($(getterMap->keySet()))->iterator());
							for (; $nc(i$)->hasNext();) {
								$var($String, getterName, $cast($String, i$->next()));
								{
									if ($nc(getterName)->equalsIgnoreCase(propertyName)) {
										$plusAssign(msg, $$str({" (differs only in case from property "_s, getterName, ")"_s}));
									}
								}
							}
						}
						$plusAssign(msg, $$str({": "_s, constr}));
						$throwNew($InvalidObjectException, msg);
					}
					int32_t getterIndex = $nc(($cast($Integer, $($nc(getterMap)->get(propertyName)))))->intValue();
					paramIndexes->set(getterIndex, i);
					if (present->get(getterIndex)) {
						$var($String, msg, $str({matchingMechanism, " contains property "_s, propertyName, " more than once: "_s, constr}));
						$throwNew($InvalidObjectException, msg);
					}
					present->set(getterIndex);
					$var($Method, getter, getters->get(getterIndex));
					$var($Type, propertyType, $nc(getter)->getGenericReturnType());
					if (!$nc($of(propertyType))->equals($nc(paramTypes)->get(i))) {
						$var($String, msg, $str({matchingMechanism, " gives property "_s, propertyName, " of type "_s, propertyType, " for parameter  of type "_s, $nc(paramTypes)->get(i), ": "_s, constr}));
						$throwNew($InvalidObjectException, msg);
					}
				}
				if (!$nc(getterIndexSets)->add(present)) {
					$var($String, msg, reportMultipleConstructorsFoundFor(propertyNames));
					$throwNew($InvalidObjectException, msg);
				}
				$var($DefaultMXBeanMappingFactory$CompositeBuilderViaConstructor$Constr, c, $new($DefaultMXBeanMappingFactory$CompositeBuilderViaConstructor$Constr, constr, paramIndexes, present));
				$nc(this->annotatedConstructors)->add(c);
			}
		}
	}
	{
		$var($Iterator, i$, $nc(getterIndexSets)->iterator());
		for (; $nc(i$)->hasNext();) {
			$var($BitSet, a, $cast($BitSet, i$->next()));
			{
				bool seen = false;
				{
					$var($Iterator, i$, getterIndexSets->iterator());
					for (; $nc(i$)->hasNext();) {
						$var($BitSet, b, $cast($BitSet, i$->next()));
						{
							if (a == b) {
								seen = true;
							} else if (seen) {
								$var($BitSet, u, $new($BitSet));
								u->or$(a);
								u->or$(b);
								if (!getterIndexSets->contains(u)) {
									$var($Set, names, static_cast<$Set*>(static_cast<$AbstractSet*>($new($TreeSet))));
									for (int32_t i = u->nextSetBit(0); i >= 0; i = u->nextSetBit(i + 1)) {
										names->add($nc(itemNames)->get(i));
									}
									$var($String, msg, reportConstructorsAmbiguousFor(names));
									$throwNew($InvalidObjectException, msg);
								}
							}
						}
					}
				}
			}
		}
	}
	return nullptr;
}

$String* DefaultMXBeanMappingFactory$CompositeBuilderViaConstructor::reportNoConstructor() {
	return "no constructor has either @ConstructorParameters or @ConstructorProperties annotation"_s;
}

$String* DefaultMXBeanMappingFactory$CompositeBuilderViaConstructor::matchingMechanism($Constructor* constr) {
	$load($ConstructorParameters);
	return $nc(constr)->isAnnotationPresent($ConstructorParameters::class$) ? "@ConstructorParameters"_s : "@ConstructorProperties"_s;
}

$String* DefaultMXBeanMappingFactory$CompositeBuilderViaConstructor::referenceMechannism($String* matchingMechanism) {
	return $str({matchingMechanism, " annotation"_s});
}

$String* DefaultMXBeanMappingFactory$CompositeBuilderViaConstructor::reportMultipleConstructorsFoundFor($StringArray* propertyNames) {
	return $str({"More than one constructor has @ConstructorParameters or @ConstructorProperties annotation with this set of names: "_s, $($Arrays::toString(propertyNames))});
}

$String* DefaultMXBeanMappingFactory$CompositeBuilderViaConstructor::reportConstructorsAmbiguousFor($Set* names) {
	return $str({"Constructors with @ConstructorParameters or @ConstructorProperties annotation would be ambiguous for these items: "_s, names});
}

$String* DefaultMXBeanMappingFactory$CompositeBuilderViaConstructor::reportNoConstructorFoundFor($Set* names) {
	return $str({"No constructor has either @ConstructorParameters or @ConstructorProperties annotation for this set of items: "_s, names});
}

$Object* DefaultMXBeanMappingFactory$CompositeBuilderViaConstructor::fromCompositeData($CompositeData* cd, $StringArray* itemNames, $MXBeanMappingArray* mappings) {
	$useLocalCurrentObjectStackCache();
	$beforeCallerSensitive();
	$var($CompositeType, ct, $nc(cd)->getCompositeType());
	$var($BitSet, present, $new($BitSet));
	for (int32_t i = 0; i < $nc(itemNames)->length; ++i) {
		if ($nc(ct)->getType(itemNames->get(i)) != nullptr) {
			present->set(i);
		}
	}
	$var($DefaultMXBeanMappingFactory$CompositeBuilderViaConstructor$Constr, max, nullptr);
	{
		$var($Iterator, i$, $nc(this->annotatedConstructors)->iterator());
		for (; $nc(i$)->hasNext();) {
			$var($DefaultMXBeanMappingFactory$CompositeBuilderViaConstructor$Constr, constr, $cast($DefaultMXBeanMappingFactory$CompositeBuilderViaConstructor$Constr, i$->next()));
			{
				bool var$0 = subset($nc(constr)->presentParams, present);
				if (var$0 && (max == nullptr || subset($nc(max)->presentParams, $nc(constr)->presentParams))) {
					$assign(max, constr);
				}
			}
		}
	}
	if (max == nullptr) {
		$var($String, msg, reportNoConstructorFoundFor($($nc(ct)->keySet())));
		$throwNew($InvalidObjectException, msg);
	}
	$var($ObjectArray, params, $new($ObjectArray, $nc($nc(max)->presentParams)->cardinality()));
	for (int32_t i = 0; i < $nc(itemNames)->length; ++i) {
		if (!$nc(max->presentParams)->get(i)) {
			continue;
		}
		$var($Object, openItem, cd->get(itemNames->get(i)));
		$var($Object, javaItem, $nc($nc(mappings)->get(i))->fromOpenValue(openItem));
		int32_t index = $nc(max->paramIndexes)->get(i);
		if (index >= 0) {
			params->set(index, javaItem);
		}
	}
	try {
		$ReflectUtil::checkPackageAccess($nc(max->constructor)->getDeclaringClass());
		return $of($nc(max->constructor)->newInstance(params));
	} catch ($Exception& e) {
		$var($String, msg, $str({"Exception constructing "_s, $($nc(getTargetClass())->getName())}));
		$throw($($DefaultMXBeanMappingFactory::invalidObjectException(msg, e)));
	}
	$shouldNotReachHere();
}

bool DefaultMXBeanMappingFactory$CompositeBuilderViaConstructor::subset($BitSet* sub, $BitSet* sup) {
	$init(DefaultMXBeanMappingFactory$CompositeBuilderViaConstructor);
	$var($BitSet, subcopy, $cast($BitSet, $nc(sub)->clone()));
	$nc(subcopy)->andNot(sup);
	return subcopy->isEmpty();
}

DefaultMXBeanMappingFactory$CompositeBuilderViaConstructor::DefaultMXBeanMappingFactory$CompositeBuilderViaConstructor() {
}

$Class* DefaultMXBeanMappingFactory$CompositeBuilderViaConstructor::load$($String* name, bool initialize) {
	$loadClass(DefaultMXBeanMappingFactory$CompositeBuilderViaConstructor, name, initialize, &_DefaultMXBeanMappingFactory$CompositeBuilderViaConstructor_ClassInfo_, allocate$DefaultMXBeanMappingFactory$CompositeBuilderViaConstructor);
	return class$;
}

$Class* DefaultMXBeanMappingFactory$CompositeBuilderViaConstructor::class$ = nullptr;

			} // mbeanserver
		} // jmx
	} // sun
} // com
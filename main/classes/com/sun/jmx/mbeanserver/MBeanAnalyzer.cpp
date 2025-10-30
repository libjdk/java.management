#include <com/sun/jmx/mbeanserver/MBeanAnalyzer.h>

#include <com/sun/jmx/mbeanserver/Introspector.h>
#include <com/sun/jmx/mbeanserver/MBeanAnalyzer$AttrMethods.h>
#include <com/sun/jmx/mbeanserver/MBeanAnalyzer$MBeanVisitor.h>
#include <com/sun/jmx/mbeanserver/MBeanAnalyzer$MethodOrder.h>
#include <com/sun/jmx/mbeanserver/MBeanIntrospector.h>
#include <com/sun/jmx/mbeanserver/Util.h>
#include <java/lang/reflect/Method.h>
#include <java/lang/reflect/Modifier.h>
#include <java/util/Arrays.h>
#include <java/util/Collection.h>
#include <java/util/Comparator.h>
#include <java/util/Iterator.h>
#include <java/util/List.h>
#include <java/util/Map$Entry.h>
#include <java/util/Map.h>
#include <java/util/Set.h>
#include <javax/management/NotCompliantMBeanException.h>
#include <jcpp.h>

#undef ALLOW_NONPUBLIC_MBEAN
#undef TYPE

using $MethodArray = $Array<::java::lang::reflect::Method>;
using $Introspector = ::com::sun::jmx::mbeanserver::Introspector;
using $MBeanAnalyzer$AttrMethods = ::com::sun::jmx::mbeanserver::MBeanAnalyzer$AttrMethods;
using $MBeanAnalyzer$MBeanVisitor = ::com::sun::jmx::mbeanserver::MBeanAnalyzer$MBeanVisitor;
using $MBeanAnalyzer$MethodOrder = ::com::sun::jmx::mbeanserver::MBeanAnalyzer$MethodOrder;
using $MBeanIntrospector = ::com::sun::jmx::mbeanserver::MBeanIntrospector;
using $Util = ::com::sun::jmx::mbeanserver::Util;
using $Boolean = ::java::lang::Boolean;
using $ClassInfo = ::java::lang::ClassInfo;
using $Exception = ::java::lang::Exception;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $NullPointerException = ::java::lang::NullPointerException;
using $RuntimeException = ::java::lang::RuntimeException;
using $Void = ::java::lang::Void;
using $Method = ::java::lang::reflect::Method;
using $Modifier = ::java::lang::reflect::Modifier;
using $Arrays = ::java::util::Arrays;
using $Collection = ::java::util::Collection;
using $Comparator = ::java::util::Comparator;
using $Iterator = ::java::util::Iterator;
using $List = ::java::util::List;
using $Map = ::java::util::Map;
using $Map$Entry = ::java::util::Map$Entry;
using $Set = ::java::util::Set;
using $NotCompliantMBeanException = ::javax::management::NotCompliantMBeanException;

namespace com {
	namespace sun {
		namespace jmx {
			namespace mbeanserver {

$FieldInfo _MBeanAnalyzer_FieldInfo_[] = {
	{"opMap", "Ljava/util/Map;", "Ljava/util/Map<Ljava/lang/String;Ljava/util/List<TM;>;>;", $PRIVATE, $field(MBeanAnalyzer, opMap)},
	{"attrMap", "Ljava/util/Map;", "Ljava/util/Map<Ljava/lang/String;Lcom/sun/jmx/mbeanserver/MBeanAnalyzer$AttrMethods<TM;>;>;", $PRIVATE, $field(MBeanAnalyzer, attrMap)},
	{}
};

$MethodInfo _MBeanAnalyzer_MethodInfo_[] = {
	{"<init>", "(Ljava/lang/Class;Lcom/sun/jmx/mbeanserver/MBeanIntrospector;)V", "(Ljava/lang/Class<*>;Lcom/sun/jmx/mbeanserver/MBeanIntrospector<TM;>;)V", $PRIVATE, $method(static_cast<void(MBeanAnalyzer::*)($Class*,$MBeanIntrospector*)>(&MBeanAnalyzer::init$)), "javax.management.NotCompliantMBeanException"},
	{"analyzer", "(Ljava/lang/Class;Lcom/sun/jmx/mbeanserver/MBeanIntrospector;)Lcom/sun/jmx/mbeanserver/MBeanAnalyzer;", "<M:Ljava/lang/Object;>(Ljava/lang/Class<*>;Lcom/sun/jmx/mbeanserver/MBeanIntrospector<TM;>;)Lcom/sun/jmx/mbeanserver/MBeanAnalyzer<TM;>;", $STATIC, $method(static_cast<MBeanAnalyzer*(*)($Class*,$MBeanIntrospector*)>(&MBeanAnalyzer::analyzer)), "javax.management.NotCompliantMBeanException"},
	{"eliminateCovariantMethods", "(Ljava/util/List;)Ljava/util/List;", "(Ljava/util/List<Ljava/lang/reflect/Method;>;)Ljava/util/List<Ljava/lang/reflect/Method;>;", $STATIC, $method(static_cast<$List*(*)($List*)>(&MBeanAnalyzer::eliminateCovariantMethods))},
	{"initMaps", "(Ljava/lang/Class;Lcom/sun/jmx/mbeanserver/MBeanIntrospector;)V", "(Ljava/lang/Class<*>;Lcom/sun/jmx/mbeanserver/MBeanIntrospector<TM;>;)V", $PRIVATE, $method(static_cast<void(MBeanAnalyzer::*)($Class*,$MBeanIntrospector*)>(&MBeanAnalyzer::initMaps)), "java.lang.Exception"},
	{"visit", "(Lcom/sun/jmx/mbeanserver/MBeanAnalyzer$MBeanVisitor;)V", "(Lcom/sun/jmx/mbeanserver/MBeanAnalyzer$MBeanVisitor<TM;>;)V", 0},
	{}
};

$InnerClassInfo _MBeanAnalyzer_InnerClassesInfo_[] = {
	{"com.sun.jmx.mbeanserver.MBeanAnalyzer$MethodOrder", "com.sun.jmx.mbeanserver.MBeanAnalyzer", "MethodOrder", $PRIVATE | $STATIC},
	{"com.sun.jmx.mbeanserver.MBeanAnalyzer$AttrMethods", "com.sun.jmx.mbeanserver.MBeanAnalyzer", "AttrMethods", $PRIVATE | $STATIC},
	{"com.sun.jmx.mbeanserver.MBeanAnalyzer$MBeanVisitor", "com.sun.jmx.mbeanserver.MBeanAnalyzer", "MBeanVisitor", $STATIC | $INTERFACE | $ABSTRACT},
	{}
};

$ClassInfo _MBeanAnalyzer_ClassInfo_ = {
	$ACC_SUPER,
	"com.sun.jmx.mbeanserver.MBeanAnalyzer",
	"java.lang.Object",
	nullptr,
	_MBeanAnalyzer_FieldInfo_,
	_MBeanAnalyzer_MethodInfo_,
	"<M:Ljava/lang/Object;>Ljava/lang/Object;",
	nullptr,
	_MBeanAnalyzer_InnerClassesInfo_,
	nullptr,
	nullptr,
	"com.sun.jmx.mbeanserver.MBeanAnalyzer$MethodOrder,com.sun.jmx.mbeanserver.MBeanAnalyzer$AttrMethods,com.sun.jmx.mbeanserver.MBeanAnalyzer$MBeanVisitor"
};

$Object* allocate$MBeanAnalyzer($Class* clazz) {
	return $of($alloc(MBeanAnalyzer));
}

void MBeanAnalyzer::visit($MBeanAnalyzer$MBeanVisitor* visitor) {
	$useLocalCurrentObjectStackCache();
	{
		$var($Iterator, i$, $nc($($nc(this->attrMap)->entrySet()))->iterator());
		for (; $nc(i$)->hasNext();) {
			$var($Map$Entry, entry, $cast($Map$Entry, i$->next()));
			{
				$var($String, name, $cast($String, $nc(entry)->getKey()));
				$var($MBeanAnalyzer$AttrMethods, am, $cast($MBeanAnalyzer$AttrMethods, entry->getValue()));
				$nc(visitor)->visitAttribute(name, $nc(am)->getter, am->setter);
			}
		}
	}
	{
		$var($Iterator, i$, $nc($($nc(this->opMap)->entrySet()))->iterator());
		for (; $nc(i$)->hasNext();) {
			$var($Map$Entry, entry, $cast($Map$Entry, i$->next()));
			{
				{
					$var($Iterator, i$, $nc(($cast($List, $($nc(entry)->getValue()))))->iterator());
					for (; $nc(i$)->hasNext();) {
						$var($Object, m, i$->next());
						$nc(visitor)->visitOperation($cast($String, $(entry->getKey())), m);
					}
				}
			}
		}
	}
}

MBeanAnalyzer* MBeanAnalyzer::analyzer($Class* mbeanType, $MBeanIntrospector* introspector) {
	return $new(MBeanAnalyzer, mbeanType, introspector);
}

void MBeanAnalyzer::init$($Class* mbeanType, $MBeanIntrospector* introspector) {
	$useLocalCurrentObjectStackCache();
	$set(this, opMap, $Util::newInsertionOrderMap());
	$set(this, attrMap, $Util::newInsertionOrderMap());
	if (!$nc(mbeanType)->isInterface()) {
		$throwNew($NotCompliantMBeanException, $$str({"Not an interface: "_s, $(mbeanType->getName())}));
	} else {
		$init($Introspector);
		if (!$Modifier::isPublic(mbeanType->getModifiers()) && !$Introspector::ALLOW_NONPUBLIC_MBEAN) {
			$throwNew($NotCompliantMBeanException, $$str({"Interface is not public: "_s, $(mbeanType->getName())}));
		}
	}
	try {
		initMaps(mbeanType, introspector);
	} catch ($Exception& x) {
		$throw($($Introspector::throwException(mbeanType, x)));
	}
}

void MBeanAnalyzer::initMaps($Class* mbeanType, $MBeanIntrospector* introspector) {
	$useLocalCurrentObjectStackCache();
	$var($List, methods1, $nc(introspector)->getMethods(mbeanType));
	$var($List, methods, eliminateCovariantMethods(methods1));
	{
		$var($Iterator, i$, $nc(methods)->iterator());
		for (; $nc(i$)->hasNext();) {
			$var($Method, m, $cast($Method, i$->next()));
			{
				$var($String, name, $nc(m)->getName());
				int32_t nParams = $nc($(m->getParameterTypes()))->length;
				$var($Object, cm, introspector->mFrom(m));
				$var($String, attrName, ""_s);
				if ($nc(name)->startsWith("get"_s)) {
					$assign(attrName, name->substring(3));
				} else {
					bool var$1 = name->startsWith("is"_s);
					$init($Boolean);
					if (var$1 && m->getReturnType() == $Boolean::TYPE) {
						$assign(attrName, name->substring(2));
					}
				}
				bool var$2 = attrName->length() != 0 && nParams == 0;
				$init($Void);
				if (var$2 && m->getReturnType() != $Void::TYPE) {
					$var($MBeanAnalyzer$AttrMethods, am, $cast($MBeanAnalyzer$AttrMethods, $nc(this->attrMap)->get(attrName)));
					if (am == nullptr) {
						$assign(am, $new($MBeanAnalyzer$AttrMethods));
					} else if ($nc(am)->getter != nullptr) {
						$var($String, msg, $str({"Attribute "_s, attrName, " has more than one getter"_s}));
						$throwNew($NotCompliantMBeanException, msg);
					}
					$set($nc(am), getter, cm);
					$nc(this->attrMap)->put(attrName, am);
				} else {
					bool var$6 = $nc(name)->startsWith("set"_s);
					bool var$5 = var$6 && name->length() > 3 && nParams == 1;
					if (var$5 && m->getReturnType() == $Void::TYPE) {
						$assign(attrName, name->substring(3));
						$var($MBeanAnalyzer$AttrMethods, am, $cast($MBeanAnalyzer$AttrMethods, $nc(this->attrMap)->get(attrName)));
						if (am == nullptr) {
							$assign(am, $new($MBeanAnalyzer$AttrMethods));
						} else if ($nc(am)->setter != nullptr) {
							$var($String, msg, $str({"Attribute "_s, attrName, " has more than one setter"_s}));
							$throwNew($NotCompliantMBeanException, msg);
						}
						$set($nc(am), setter, cm);
						$nc(this->attrMap)->put(attrName, am);
					} else {
						$var($List, cms, $cast($List, $nc(this->opMap)->get(name)));
						if (cms == nullptr) {
							$assign(cms, $Util::newList());
						}
						$nc(cms)->add(cm);
						$nc(this->opMap)->put(name, cms);
					}
				}
			}
		}
	}
	{
		$var($Iterator, i$, $nc($($nc(this->attrMap)->entrySet()))->iterator());
		for (; $nc(i$)->hasNext();) {
			$var($Map$Entry, entry, $cast($Map$Entry, i$->next()));
			{
				$var($MBeanAnalyzer$AttrMethods, am, $cast($MBeanAnalyzer$AttrMethods, $nc(entry)->getValue()));
				if (!introspector->consistent($nc(am)->getter, am->setter)) {
					$var($String, msg, $str({"Getter and setter for "_s, $cast($String, $(entry->getKey())), " have inconsistent types"_s}));
					$throwNew($NotCompliantMBeanException, msg);
				}
			}
		}
	}
}

$List* MBeanAnalyzer::eliminateCovariantMethods($List* startMethods) {
	$useLocalCurrentObjectStackCache();
	int32_t len = $nc(startMethods)->size();
	$var($MethodArray, sorted, $fcast($MethodArray, startMethods->toArray($$new($MethodArray, len))));
	$init($MBeanAnalyzer$MethodOrder);
	$Arrays::sort(sorted, $MBeanAnalyzer$MethodOrder::instance);
	$var($Set, overridden, $Util::newSet());
	for (int32_t i = 1; i < len; ++i) {
		$var($Method, m0, $nc(sorted)->get(i - 1));
		$var($Method, m1, sorted->get(i));
		if (!$nc($($nc(m0)->getName()))->equals($($nc(m1)->getName()))) {
			continue;
		}
		$var($ObjectArray, var$0, $nc(m0)->getParameterTypes());
		if ($Arrays::equals(var$0, $($nc(m1)->getParameterTypes()))) {
			if (!$nc(overridden)->add(m0)) {
				$throwNew($RuntimeException, "Internal error: duplicate Method"_s);
			}
		}
	}
	$var($List, methods, $Util::newList(startMethods));
	$nc(methods)->removeAll(overridden);
	return methods;
}

MBeanAnalyzer::MBeanAnalyzer() {
}

$Class* MBeanAnalyzer::load$($String* name, bool initialize) {
	$loadClass(MBeanAnalyzer, name, initialize, &_MBeanAnalyzer_ClassInfo_, allocate$MBeanAnalyzer);
	return class$;
}

$Class* MBeanAnalyzer::class$ = nullptr;

			} // mbeanserver
		} // jmx
	} // sun
} // com
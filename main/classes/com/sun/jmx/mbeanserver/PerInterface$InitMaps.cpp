#include <com/sun/jmx/mbeanserver/PerInterface$InitMaps.h>

#include <com/sun/jmx/mbeanserver/MBeanIntrospector.h>
#include <com/sun/jmx/mbeanserver/PerInterface$MethodAndSig.h>
#include <com/sun/jmx/mbeanserver/PerInterface.h>
#include <com/sun/jmx/mbeanserver/Util.h>
#include <java/lang/AssertionError.h>
#include <java/util/Collection.h>
#include <java/util/Collections.h>
#include <java/util/List.h>
#include <java/util/Map.h>
#include <jcpp.h>

using $MBeanAnalyzer$MBeanVisitor = ::com::sun::jmx::mbeanserver::MBeanAnalyzer$MBeanVisitor;
using $MBeanIntrospector = ::com::sun::jmx::mbeanserver::MBeanIntrospector;
using $PerInterface = ::com::sun::jmx::mbeanserver::PerInterface;
using $PerInterface$MethodAndSig = ::com::sun::jmx::mbeanserver::PerInterface$MethodAndSig;
using $Util = ::com::sun::jmx::mbeanserver::Util;
using $AssertionError = ::java::lang::AssertionError;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Collection = ::java::util::Collection;
using $Collections = ::java::util::Collections;
using $List = ::java::util::List;
using $Map = ::java::util::Map;

namespace com {
	namespace sun {
		namespace jmx {
			namespace mbeanserver {

$FieldInfo _PerInterface$InitMaps_FieldInfo_[] = {
	{"this$0", "Lcom/sun/jmx/mbeanserver/PerInterface;", nullptr, $FINAL | $SYNTHETIC, $field(PerInterface$InitMaps, this$0)},
	{"$assertionsDisabled", "Z", nullptr, $STATIC | $FINAL | $SYNTHETIC, $staticField(PerInterface$InitMaps, $assertionsDisabled)},
	{}
};

$MethodInfo _PerInterface$InitMaps_MethodInfo_[] = {
	{"<init>", "(Lcom/sun/jmx/mbeanserver/PerInterface;)V", nullptr, $PRIVATE, $method(static_cast<void(PerInterface$InitMaps::*)($PerInterface*)>(&PerInterface$InitMaps::init$))},
	{"visitAttribute", "(Ljava/lang/String;Ljava/lang/Object;Ljava/lang/Object;)V", "(Ljava/lang/String;TM;TM;)V", $PUBLIC},
	{"visitOperation", "(Ljava/lang/String;Ljava/lang/Object;)V", "(Ljava/lang/String;TM;)V", $PUBLIC},
	{}
};

$InnerClassInfo _PerInterface$InitMaps_InnerClassesInfo_[] = {
	{"com.sun.jmx.mbeanserver.PerInterface$InitMaps", "com.sun.jmx.mbeanserver.PerInterface", "InitMaps", $PRIVATE},
	{"com.sun.jmx.mbeanserver.MBeanAnalyzer$MBeanVisitor", "com.sun.jmx.mbeanserver.MBeanAnalyzer", "MBeanVisitor", $STATIC | $INTERFACE | $ABSTRACT},
	{}
};

$ClassInfo _PerInterface$InitMaps_ClassInfo_ = {
	$ACC_SUPER,
	"com.sun.jmx.mbeanserver.PerInterface$InitMaps",
	"java.lang.Object",
	"com.sun.jmx.mbeanserver.MBeanAnalyzer$MBeanVisitor",
	_PerInterface$InitMaps_FieldInfo_,
	_PerInterface$InitMaps_MethodInfo_,
	"Ljava/lang/Object;Lcom/sun/jmx/mbeanserver/MBeanAnalyzer$MBeanVisitor<TM;>;",
	nullptr,
	_PerInterface$InitMaps_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.jmx.mbeanserver.PerInterface"
};

$Object* allocate$PerInterface$InitMaps($Class* clazz) {
	return $of($alloc(PerInterface$InitMaps));
}

bool PerInterface$InitMaps::$assertionsDisabled = false;

void PerInterface$InitMaps::init$($PerInterface* this$0) {
	$set(this, this$0, this$0);
}

void PerInterface$InitMaps::visitAttribute($String* attributeName, Object$* getter, Object$* setter) {
	$useLocalCurrentObjectStackCache();
	if (getter != nullptr) {
		$nc(this->this$0->introspector)->checkMethod(getter);
		$var($Object, old, $nc(this->this$0->getters)->put(attributeName, getter));
		if (!PerInterface$InitMaps::$assertionsDisabled && !(old == nullptr)) {
			$throwNew($AssertionError);
		}
	}
	if (setter != nullptr) {
		$nc(this->this$0->introspector)->checkMethod(setter);
		$var($Object, old, $nc(this->this$0->setters)->put(attributeName, setter));
		if (!PerInterface$InitMaps::$assertionsDisabled && !(old == nullptr)) {
			$throwNew($AssertionError);
		}
	}
}

void PerInterface$InitMaps::visitOperation($String* operationName, Object$* operation) {
	$useLocalCurrentObjectStackCache();
	$nc(this->this$0->introspector)->checkMethod(operation);
	$var($StringArray, sig, $nc(this->this$0->introspector)->getSignature(operation));
	$var($PerInterface$MethodAndSig, mas, $new($PerInterface$MethodAndSig, this->this$0));
	$set(mas, method, operation);
	$set(mas, signature, sig);
	$var($List, list, $cast($List, $nc(this->this$0->ops)->get(operationName)));
	if (list == nullptr) {
		$assign(list, $Collections::singletonList(mas));
	} else {
		if ($nc(list)->size() == 1) {
			$assign(list, $Util::newList(list));
		}
		$nc(list)->add(mas);
	}
	$nc(this->this$0->ops)->put(operationName, list);
}

void clinit$PerInterface$InitMaps($Class* class$) {
	$load($PerInterface);
	PerInterface$InitMaps::$assertionsDisabled = !$PerInterface::class$->desiredAssertionStatus();
}

PerInterface$InitMaps::PerInterface$InitMaps() {
}

$Class* PerInterface$InitMaps::load$($String* name, bool initialize) {
	$loadClass(PerInterface$InitMaps, name, initialize, &_PerInterface$InitMaps_ClassInfo_, clinit$PerInterface$InitMaps, allocate$PerInterface$InitMaps);
	return class$;
}

$Class* PerInterface$InitMaps::class$ = nullptr;

			} // mbeanserver
		} // jmx
	} // sun
} // com
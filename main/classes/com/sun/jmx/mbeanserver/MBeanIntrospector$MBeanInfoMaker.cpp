#include <com/sun/jmx/mbeanserver/MBeanIntrospector$MBeanInfoMaker.h>

#include <com/sun/jmx/mbeanserver/DescriptorCache.h>
#include <com/sun/jmx/mbeanserver/Introspector.h>
#include <com/sun/jmx/mbeanserver/MBeanIntrospector.h>
#include <com/sun/jmx/mbeanserver/Util.h>
#include <java/lang/reflect/AnnotatedElement.h>
#include <java/lang/reflect/GenericDeclaration.h>
#include <java/util/List.h>
#include <javax/management/Descriptor.h>
#include <javax/management/ImmutableDescriptor.h>
#include <javax/management/MBeanAttributeInfo.h>
#include <javax/management/MBeanConstructorInfo.h>
#include <javax/management/MBeanInfo.h>
#include <javax/management/MBeanNotificationInfo.h>
#include <javax/management/MBeanOperationInfo.h>
#include <jcpp.h>

using $DescriptorArray = $Array<::javax::management::Descriptor>;
using $MBeanAttributeInfoArray = $Array<::javax::management::MBeanAttributeInfo>;
using $MBeanConstructorInfoArray = $Array<::javax::management::MBeanConstructorInfo>;
using $MBeanNotificationInfoArray = $Array<::javax::management::MBeanNotificationInfo>;
using $MBeanOperationInfoArray = $Array<::javax::management::MBeanOperationInfo>;
using $DescriptorCache = ::com::sun::jmx::mbeanserver::DescriptorCache;
using $Introspector = ::com::sun::jmx::mbeanserver::Introspector;
using $MBeanAnalyzer$MBeanVisitor = ::com::sun::jmx::mbeanserver::MBeanAnalyzer$MBeanVisitor;
using $MBeanIntrospector = ::com::sun::jmx::mbeanserver::MBeanIntrospector;
using $Util = ::com::sun::jmx::mbeanserver::Util;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $AnnotatedElement = ::java::lang::reflect::AnnotatedElement;
using $GenericDeclaration = ::java::lang::reflect::GenericDeclaration;
using $List = ::java::util::List;
using $Descriptor = ::javax::management::Descriptor;
using $ImmutableDescriptor = ::javax::management::ImmutableDescriptor;
using $MBeanAttributeInfo = ::javax::management::MBeanAttributeInfo;
using $MBeanInfo = ::javax::management::MBeanInfo;
using $MBeanOperationInfo = ::javax::management::MBeanOperationInfo;

namespace com {
	namespace sun {
		namespace jmx {
			namespace mbeanserver {

$FieldInfo _MBeanIntrospector$MBeanInfoMaker_FieldInfo_[] = {
	{"this$0", "Lcom/sun/jmx/mbeanserver/MBeanIntrospector;", nullptr, $FINAL | $SYNTHETIC, $field(MBeanIntrospector$MBeanInfoMaker, this$0)},
	{"attrs", "Ljava/util/List;", "Ljava/util/List<Ljavax/management/MBeanAttributeInfo;>;", $PRIVATE | $FINAL, $field(MBeanIntrospector$MBeanInfoMaker, attrs)},
	{"ops", "Ljava/util/List;", "Ljava/util/List<Ljavax/management/MBeanOperationInfo;>;", $PRIVATE | $FINAL, $field(MBeanIntrospector$MBeanInfoMaker, ops)},
	{}
};

$MethodInfo _MBeanIntrospector$MBeanInfoMaker_MethodInfo_[] = {
	{"<init>", "(Lcom/sun/jmx/mbeanserver/MBeanIntrospector;)V", nullptr, $PRIVATE, $method(static_cast<void(MBeanIntrospector$MBeanInfoMaker::*)($MBeanIntrospector*)>(&MBeanIntrospector$MBeanInfoMaker::init$))},
	{"makeMBeanInfo", "(Ljava/lang/Class;Ljava/lang/String;)Ljavax/management/MBeanInfo;", "(Ljava/lang/Class<*>;Ljava/lang/String;)Ljavax/management/MBeanInfo;", 0},
	{"visitAttribute", "(Ljava/lang/String;Ljava/lang/Object;Ljava/lang/Object;)V", "(Ljava/lang/String;TM;TM;)V", $PUBLIC},
	{"visitOperation", "(Ljava/lang/String;Ljava/lang/Object;)V", "(Ljava/lang/String;TM;)V", $PUBLIC},
	{}
};

$InnerClassInfo _MBeanIntrospector$MBeanInfoMaker_InnerClassesInfo_[] = {
	{"com.sun.jmx.mbeanserver.MBeanIntrospector$MBeanInfoMaker", "com.sun.jmx.mbeanserver.MBeanIntrospector", "MBeanInfoMaker", $PRIVATE},
	{"com.sun.jmx.mbeanserver.MBeanAnalyzer$MBeanVisitor", "com.sun.jmx.mbeanserver.MBeanAnalyzer", "MBeanVisitor", $STATIC | $INTERFACE | $ABSTRACT},
	{}
};

$ClassInfo _MBeanIntrospector$MBeanInfoMaker_ClassInfo_ = {
	$ACC_SUPER,
	"com.sun.jmx.mbeanserver.MBeanIntrospector$MBeanInfoMaker",
	"java.lang.Object",
	"com.sun.jmx.mbeanserver.MBeanAnalyzer$MBeanVisitor",
	_MBeanIntrospector$MBeanInfoMaker_FieldInfo_,
	_MBeanIntrospector$MBeanInfoMaker_MethodInfo_,
	"Ljava/lang/Object;Lcom/sun/jmx/mbeanserver/MBeanAnalyzer$MBeanVisitor<TM;>;",
	nullptr,
	_MBeanIntrospector$MBeanInfoMaker_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.jmx.mbeanserver.MBeanIntrospector"
};

$Object* allocate$MBeanIntrospector$MBeanInfoMaker($Class* clazz) {
	return $of($alloc(MBeanIntrospector$MBeanInfoMaker));
}

void MBeanIntrospector$MBeanInfoMaker::init$($MBeanIntrospector* this$0) {
	$set(this, this$0, this$0);
	$set(this, attrs, $Util::newList());
	$set(this, ops, $Util::newList());
}

void MBeanIntrospector$MBeanInfoMaker::visitAttribute($String* attributeName, Object$* getter, Object$* setter) {
	$var($MBeanAttributeInfo, mbai, this->this$0->getMBeanAttributeInfo(attributeName, getter, setter));
	$nc(this->attrs)->add(mbai);
}

void MBeanIntrospector$MBeanInfoMaker::visitOperation($String* operationName, Object$* operation) {
	$var($MBeanOperationInfo, mboi, this->this$0->getMBeanOperationInfo(operationName, operation));
	$nc(this->ops)->add(mboi);
}

$MBeanInfo* MBeanIntrospector$MBeanInfoMaker::makeMBeanInfo($Class* mbeanInterface, $String* description) {
	$useLocalCurrentObjectStackCache();
	$var($MBeanAttributeInfoArray, attrArray, $fcast($MBeanAttributeInfoArray, $nc(this->attrs)->toArray($$new($MBeanAttributeInfoArray, 0))));
	$var($MBeanOperationInfoArray, opArray, $fcast($MBeanOperationInfoArray, $nc(this->ops)->toArray($$new($MBeanOperationInfoArray, 0))));
	$var($String, interfaceClassName, $str({"interfaceClassName="_s, $($nc(mbeanInterface)->getName())}));
	$var($Descriptor, classNameDescriptor, $new($ImmutableDescriptor, $$new($StringArray, {interfaceClassName})));
	$var($Descriptor, mbeanDescriptor, this->this$0->getBasicMBeanDescriptor());
	$var($Descriptor, annotatedDescriptor, $Introspector::descriptorForElement(mbeanInterface));
	$var($Descriptor, descriptor, $nc($($DescriptorCache::getInstance()))->union$($$new($DescriptorArray, {
		classNameDescriptor,
		mbeanDescriptor,
		annotatedDescriptor
	})));
	return $new($MBeanInfo, $(mbeanInterface->getName()), description, attrArray, nullptr, opArray, nullptr, descriptor);
}

MBeanIntrospector$MBeanInfoMaker::MBeanIntrospector$MBeanInfoMaker() {
}

$Class* MBeanIntrospector$MBeanInfoMaker::load$($String* name, bool initialize) {
	$loadClass(MBeanIntrospector$MBeanInfoMaker, name, initialize, &_MBeanIntrospector$MBeanInfoMaker_ClassInfo_, allocate$MBeanIntrospector$MBeanInfoMaker);
	return class$;
}

$Class* MBeanIntrospector$MBeanInfoMaker::class$ = nullptr;

			} // mbeanserver
		} // jmx
	} // sun
} // com
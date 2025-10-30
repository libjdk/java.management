#include <com/sun/jmx/mbeanserver/Introspector.h>

#include <com/sun/jmx/mbeanserver/DynamicMBean2.h>
#include <com/sun/jmx/mbeanserver/GetPropertyAction.h>
#include <com/sun/jmx/mbeanserver/Introspector$SimpleIntrospector.h>
#include <com/sun/jmx/mbeanserver/JavaBeansAccessor.h>
#include <com/sun/jmx/mbeanserver/MBeanAnalyzer.h>
#include <com/sun/jmx/mbeanserver/MBeanIntrospector.h>
#include <com/sun/jmx/mbeanserver/MBeanSupport.h>
#include <com/sun/jmx/mbeanserver/MXBeanIntrospector.h>
#include <com/sun/jmx/mbeanserver/MXBeanSupport.h>
#include <com/sun/jmx/mbeanserver/PerInterface.h>
#include <com/sun/jmx/mbeanserver/StandardMBeanIntrospector.h>
#include <com/sun/jmx/mbeanserver/StandardMBeanSupport.h>
#include <com/sun/jmx/mbeanserver/Util.h>
#include <com/sun/jmx/remote/util/EnvHelp.h>
#include <java/lang/Enum.h>
#include <java/lang/Number.h>
#include <java/lang/ReflectiveOperationException.h>
#include <java/lang/SecurityException.h>
#include <java/lang/annotation/Annotation.h>
#include <java/lang/reflect/AnnotatedElement.h>
#include <java/lang/reflect/Array.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/InvocationTargetException.h>
#include <java/lang/reflect/Method.h>
#include <java/lang/reflect/Modifier.h>
#include <java/lang/reflect/Proxy.h>
#include <java/lang/reflect/UndeclaredThrowableException.h>
#include <java/security/AccessController.h>
#include <java/security/PrivilegedAction.h>
#include <java/util/AbstractMap.h>
#include <java/util/Arrays.h>
#include <java/util/HashMap.h>
#include <java/util/Map.h>
#include <javax/management/AttributeNotFoundException.h>
#include <javax/management/Descriptor.h>
#include <javax/management/DescriptorKey.h>
#include <javax/management/DynamicMBean.h>
#include <javax/management/ImmutableDescriptor.h>
#include <javax/management/JMException.h>
#include <javax/management/MBeanInfo.h>
#include <javax/management/NotCompliantMBeanException.h>
#include <javax/management/OperationsException.h>
#include <javax/management/openmbean/CompositeData.h>
#include <sun/reflect/misc/MethodUtil.h>
#include <sun/reflect/misc/ReflectUtil.h>
#include <jcpp.h>

#undef ALLOW_NONPUBLIC_MBEAN
#undef EMPTY_DESCRIPTOR

using $AnnotationArray = $Array<::java::lang::annotation::Annotation>;
using $ConstructorArray = $Array<::java::lang::reflect::Constructor>;
using $MethodArray = $Array<::java::lang::reflect::Method>;
using $DynamicMBean2 = ::com::sun::jmx::mbeanserver::DynamicMBean2;
using $GetPropertyAction = ::com::sun::jmx::mbeanserver::GetPropertyAction;
using $Introspector$SimpleIntrospector = ::com::sun::jmx::mbeanserver::Introspector$SimpleIntrospector;
using $JavaBeansAccessor = ::com::sun::jmx::mbeanserver::JavaBeansAccessor;
using $MBeanAnalyzer = ::com::sun::jmx::mbeanserver::MBeanAnalyzer;
using $MBeanIntrospector = ::com::sun::jmx::mbeanserver::MBeanIntrospector;
using $MBeanSupport = ::com::sun::jmx::mbeanserver::MBeanSupport;
using $MXBeanIntrospector = ::com::sun::jmx::mbeanserver::MXBeanIntrospector;
using $MXBeanSupport = ::com::sun::jmx::mbeanserver::MXBeanSupport;
using $PerInterface = ::com::sun::jmx::mbeanserver::PerInterface;
using $StandardMBeanIntrospector = ::com::sun::jmx::mbeanserver::StandardMBeanIntrospector;
using $StandardMBeanSupport = ::com::sun::jmx::mbeanserver::StandardMBeanSupport;
using $Util = ::com::sun::jmx::mbeanserver::Util;
using $EnvHelp = ::com::sun::jmx::remote::util::EnvHelp;
using $Boolean = ::java::lang::Boolean;
using $Character = ::java::lang::Character;
using $ClassInfo = ::java::lang::ClassInfo;
using $Enum = ::java::lang::Enum;
using $Exception = ::java::lang::Exception;
using $FieldInfo = ::java::lang::FieldInfo;
using $IllegalArgumentException = ::java::lang::IllegalArgumentException;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $Integer = ::java::lang::Integer;
using $MethodInfo = ::java::lang::MethodInfo;
using $NullPointerException = ::java::lang::NullPointerException;
using $Number = ::java::lang::Number;
using $ReflectiveOperationException = ::java::lang::ReflectiveOperationException;
using $RuntimeException = ::java::lang::RuntimeException;
using $SecurityException = ::java::lang::SecurityException;
using $Annotation = ::java::lang::annotation::Annotation;
using $AnnotatedElement = ::java::lang::reflect::AnnotatedElement;
using $1Array = ::java::lang::reflect::Array;
using $Constructor = ::java::lang::reflect::Constructor;
using $InvocationTargetException = ::java::lang::reflect::InvocationTargetException;
using $Method = ::java::lang::reflect::Method;
using $Modifier = ::java::lang::reflect::Modifier;
using $Proxy = ::java::lang::reflect::Proxy;
using $UndeclaredThrowableException = ::java::lang::reflect::UndeclaredThrowableException;
using $AccessController = ::java::security::AccessController;
using $PrivilegedAction = ::java::security::PrivilegedAction;
using $AbstractMap = ::java::util::AbstractMap;
using $Arrays = ::java::util::Arrays;
using $HashMap = ::java::util::HashMap;
using $Map = ::java::util::Map;
using $AttributeNotFoundException = ::javax::management::AttributeNotFoundException;
using $Descriptor = ::javax::management::Descriptor;
using $DescriptorKey = ::javax::management::DescriptorKey;
using $DynamicMBean = ::javax::management::DynamicMBean;
using $ImmutableDescriptor = ::javax::management::ImmutableDescriptor;
using $JMException = ::javax::management::JMException;
using $MBeanInfo = ::javax::management::MBeanInfo;
using $NotCompliantMBeanException = ::javax::management::NotCompliantMBeanException;
using $OperationsException = ::javax::management::OperationsException;
using $CompositeData = ::javax::management::openmbean::CompositeData;
using $MethodUtil = ::sun::reflect::misc::MethodUtil;
using $ReflectUtil = ::sun::reflect::misc::ReflectUtil;

namespace com {
	namespace sun {
		namespace jmx {
			namespace mbeanserver {

$FieldInfo _Introspector_FieldInfo_[] = {
	{"ALLOW_NONPUBLIC_MBEAN", "Z", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(Introspector, ALLOW_NONPUBLIC_MBEAN)},
	{}
};

$MethodInfo _Introspector_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PRIVATE, $method(static_cast<void(Introspector::*)()>(&Introspector::init$))},
	{"annotationToField", "(Ljava/lang/Object;)Ljava/lang/Object;", nullptr, $PRIVATE | $STATIC, $method(static_cast<$Object*(*)(Object$*)>(&Introspector::annotationToField))},
	{"checkCompliance", "(Ljava/lang/Class;)V", "(Ljava/lang/Class<*>;)V", $PUBLIC | $STATIC, $method(static_cast<void(*)($Class*)>(&Introspector::checkCompliance)), "javax.management.NotCompliantMBeanException"},
	{"descriptorForAnnotations", "([Ljava/lang/annotation/Annotation;)Ljavax/management/Descriptor;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$Descriptor*(*)($AnnotationArray*)>(&Introspector::descriptorForAnnotations))},
	{"descriptorForElement", "(Ljava/lang/reflect/AnnotatedElement;)Ljavax/management/Descriptor;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$Descriptor*(*)($AnnotatedElement*)>(&Introspector::descriptorForElement))},
	{"elementFromComplex", "(Ljava/lang/Object;Ljava/lang/String;)Ljava/lang/Object;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$Object*(*)(Object$*,$String*)>(&Introspector::elementFromComplex)), "javax.management.AttributeNotFoundException"},
	{"equals", "(Ljava/lang/Object;Ljava/lang/Object;)Z", nullptr, $PRIVATE | $STATIC, $method(static_cast<bool(*)(Object$*,Object$*)>(&Introspector::equals))},
	{"findMBeanInterface", "(Ljava/lang/Class;Ljava/lang/String;)Ljava/lang/Class;", "<T:Ljava/lang/Object;>(Ljava/lang/Class<TT;>;Ljava/lang/String;)Ljava/lang/Class<-TT;>;", $PRIVATE | $STATIC, $method(static_cast<$Class*(*)($Class*,$String*)>(&Introspector::findMBeanInterface))},
	{"getClassMBeanInfo", "(Lcom/sun/jmx/mbeanserver/MBeanIntrospector;Ljava/lang/Class;Ljava/lang/Class;)Ljavax/management/MBeanInfo;", "<M:Ljava/lang/Object;>(Lcom/sun/jmx/mbeanserver/MBeanIntrospector<TM;>;Ljava/lang/Class<*>;Ljava/lang/Class<*>;)Ljavax/management/MBeanInfo;", $PRIVATE | $STATIC, $method(static_cast<$MBeanInfo*(*)($MBeanIntrospector*,$Class*,$Class*)>(&Introspector::getClassMBeanInfo)), "javax.management.NotCompliantMBeanException"},
	{"getMBeanInterface", "(Ljava/lang/Class;)Ljava/lang/Class;", "(Ljava/lang/Class<*>;)Ljava/lang/Class<*>;", $PUBLIC | $STATIC, $method(static_cast<$Class*(*)($Class*)>(&Introspector::getMBeanInterface))},
	{"getMXBeanInterface", "(Ljava/lang/Class;)Ljava/lang/Class;", "<T:Ljava/lang/Object;>(Ljava/lang/Class<TT;>;)Ljava/lang/Class<-TT;>;", $PUBLIC | $STATIC, $method(static_cast<$Class*(*)($Class*)>(&Introspector::getMXBeanInterface)), "javax.management.NotCompliantMBeanException"},
	{"getStandardMBeanInterface", "(Ljava/lang/Class;)Ljava/lang/Class;", "<T:Ljava/lang/Object;>(Ljava/lang/Class<TT;>;)Ljava/lang/Class<-TT;>;", $PUBLIC | $STATIC, $method(static_cast<$Class*(*)($Class*)>(&Introspector::getStandardMBeanInterface)), "javax.management.NotCompliantMBeanException"},
	{"implementsMBean", "(Ljava/lang/Class;Ljava/lang/String;)Ljava/lang/Class;", "<T:Ljava/lang/Object;>(Ljava/lang/Class<TT;>;Ljava/lang/String;)Ljava/lang/Class<-TT;>;", $PRIVATE | $STATIC, $method(static_cast<$Class*(*)($Class*,$String*)>(&Introspector::implementsMBean))},
	{"isDynamic", "(Ljava/lang/Class;)Z", "(Ljava/lang/Class<*>;)Z", $PUBLIC | $STATIC | $FINAL, $method(static_cast<bool(*)($Class*)>(&Introspector::isDynamic))},
	{"makeDynamicMBean", "(Ljava/lang/Object;)Ljavax/management/DynamicMBean;", "<T:Ljava/lang/Object;>(TT;)Ljavax/management/DynamicMBean;", $PUBLIC | $STATIC, $method(static_cast<$DynamicMBean*(*)(Object$*)>(&Introspector::makeDynamicMBean)), "javax.management.NotCompliantMBeanException"},
	{"testCompliance", "(Ljava/lang/Class;)Ljavax/management/MBeanInfo;", "(Ljava/lang/Class<*>;)Ljavax/management/MBeanInfo;", $PUBLIC | $STATIC, $method(static_cast<$MBeanInfo*(*)($Class*)>(&Introspector::testCompliance)), "javax.management.NotCompliantMBeanException"},
	{"testCompliance", "(Ljava/lang/Class;Ljava/lang/Class;)Ljavax/management/MBeanInfo;", "(Ljava/lang/Class<*>;Ljava/lang/Class<*>;)Ljavax/management/MBeanInfo;", $PUBLIC | $STATIC | $SYNCHRONIZED, $method(static_cast<$MBeanInfo*(*)($Class*,$Class*)>(&Introspector::testCompliance)), "javax.management.NotCompliantMBeanException"},
	{"testComplianceMBeanInterface", "(Ljava/lang/Class;)V", "(Ljava/lang/Class<*>;)V", $PUBLIC | $STATIC, $method(static_cast<void(*)($Class*)>(&Introspector::testComplianceMBeanInterface)), "javax.management.NotCompliantMBeanException"},
	{"testComplianceMXBeanInterface", "(Ljava/lang/Class;)V", "(Ljava/lang/Class<*>;)V", $PUBLIC | $STATIC, $method(static_cast<void(*)($Class*)>(&Introspector::testComplianceMXBeanInterface)), "javax.management.NotCompliantMBeanException"},
	{"testCreation", "(Ljava/lang/Class;)V", "(Ljava/lang/Class<*>;)V", $PUBLIC | $STATIC, $method(static_cast<void(*)($Class*)>(&Introspector::testCreation)), "javax.management.NotCompliantMBeanException"},
	{"throwException", "(Ljava/lang/Class;Ljava/lang/Throwable;)Ljavax/management/NotCompliantMBeanException;", "(Ljava/lang/Class<*>;Ljava/lang/Throwable;)Ljavax/management/NotCompliantMBeanException;", $STATIC, $method(static_cast<$NotCompliantMBeanException*(*)($Class*,$Throwable*)>(&Introspector::throwException)), "javax.management.NotCompliantMBeanException,java.lang.SecurityException"},
	{}
};

$InnerClassInfo _Introspector_InnerClassesInfo_[] = {
	{"com.sun.jmx.mbeanserver.Introspector$SimpleIntrospector", "com.sun.jmx.mbeanserver.Introspector", "SimpleIntrospector", $PRIVATE | $STATIC},
	{}
};

$ClassInfo _Introspector_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"com.sun.jmx.mbeanserver.Introspector",
	"java.lang.Object",
	nullptr,
	_Introspector_FieldInfo_,
	_Introspector_MethodInfo_,
	nullptr,
	nullptr,
	_Introspector_InnerClassesInfo_,
	nullptr,
	nullptr,
	"com.sun.jmx.mbeanserver.Introspector$SimpleIntrospector"
};

$Object* allocate$Introspector($Class* clazz) {
	return $of($alloc(Introspector));
}

bool Introspector::ALLOW_NONPUBLIC_MBEAN = false;

void Introspector::init$() {
}

bool Introspector::isDynamic($Class* c) {
	$init(Introspector);
	$load($DynamicMBean);
	return $DynamicMBean::class$->isAssignableFrom(c);
}

void Introspector::testCreation($Class* c) {
	$init(Introspector);
	$beforeCallerSensitive();
	int32_t mods = $nc(c)->getModifiers();
	bool var$0 = $Modifier::isAbstract(mods);
	if (var$0 || $Modifier::isInterface(mods)) {
		$throwNew($NotCompliantMBeanException, "MBean class must be concrete"_s);
	}
	$var($ConstructorArray, consList, c->getConstructors());
	if ($nc(consList)->length == 0) {
		$throwNew($NotCompliantMBeanException, "MBean class must have public constructor"_s);
	}
}

void Introspector::checkCompliance($Class* mbeanClass) {
	$init(Introspector);
	$useLocalCurrentObjectStackCache();
	$load($DynamicMBean);
	if ($DynamicMBean::class$->isAssignableFrom(mbeanClass)) {
		return;
	}
	$var($Exception, mbeanException, nullptr);
	try {
		getStandardMBeanInterface(mbeanClass);
		return;
	} catch ($NotCompliantMBeanException& e) {
		$assign(mbeanException, e);
	}
	$var($Exception, mxbeanException, nullptr);
	try {
		getMXBeanInterface(mbeanClass);
		return;
	} catch ($NotCompliantMBeanException& e) {
		$assign(mxbeanException, e);
	}
	$var($String, var$3, $$str({"MBean class "_s, $($nc(mbeanClass)->getName()), " does not implement DynamicMBean, and neither follows the Standard MBean conventions ("_s}));
	$var($String, var$2, $$concat(var$3, $($nc(mbeanException)->toString())));
	$var($String, var$1, $$concat(var$2, ") nor the MXBean conventions ("));
	$var($String, var$0, $$concat(var$1, $($nc(mxbeanException)->toString())));
	$var($String, msg, $concat(var$0, ")"));
	$throwNew($NotCompliantMBeanException, msg);
}

$DynamicMBean* Introspector::makeDynamicMBean(Object$* mbean) {
	$init(Introspector);
	if ($instanceOf($DynamicMBean, mbean)) {
		return $cast($DynamicMBean, mbean);
	}
	$Class* mbeanClass = $nc($of(mbean))->getClass();
	$Class* c = nullptr;
	try {
		c = $cast($Class, $Util::cast(getStandardMBeanInterface(mbeanClass)));
	} catch ($NotCompliantMBeanException& e) {
	}
	if (c != nullptr) {
		return $new($StandardMBeanSupport, mbean, c);
	}
	try {
		c = $cast($Class, $Util::cast(getMXBeanInterface(mbeanClass)));
	} catch ($NotCompliantMBeanException& e) {
	}
	if (c != nullptr) {
		return $new($MXBeanSupport, mbean, c);
	}
	checkCompliance(mbeanClass);
	$throwNew($NotCompliantMBeanException, "Not compliant"_s);
}

$MBeanInfo* Introspector::testCompliance($Class* baseClass) {
	$init(Introspector);
	if (isDynamic(baseClass)) {
		return nullptr;
	}
	return testCompliance(baseClass, nullptr);
}

void Introspector::testComplianceMXBeanInterface($Class* interfaceClass) {
	$init(Introspector);
	$nc($($MXBeanIntrospector::getInstance()))->getAnalyzer(interfaceClass);
}

void Introspector::testComplianceMBeanInterface($Class* interfaceClass) {
	$init(Introspector);
	$nc($($StandardMBeanIntrospector::getInstance()))->getAnalyzer(interfaceClass);
}

$MBeanInfo* Introspector::testCompliance($Class* baseClass, $Class* mbeanInterface) {
	$load(Introspector);
	$synchronized(class$) {
		$init(Introspector);
		if (mbeanInterface == nullptr) {
			mbeanInterface = getStandardMBeanInterface(baseClass);
		}
		$ReflectUtil::checkPackageAccess(mbeanInterface);
		$var($MBeanIntrospector, introspector, $StandardMBeanIntrospector::getInstance());
		return getClassMBeanInfo(introspector, baseClass, mbeanInterface);
	}
}

$MBeanInfo* Introspector::getClassMBeanInfo($MBeanIntrospector* introspector, $Class* baseClass, $Class* mbeanInterface) {
	$init(Introspector);
	$var($PerInterface, perInterface, $nc(introspector)->getPerInterface(mbeanInterface));
	return introspector->getClassMBeanInfo(baseClass, perInterface);
}

$Class* Introspector::getMBeanInterface($Class* baseClass) {
	$init(Introspector);
	if (isDynamic(baseClass)) {
		return nullptr;
	}
	try {
		return getStandardMBeanInterface(baseClass);
	} catch ($NotCompliantMBeanException& e) {
		return nullptr;
	}
	$shouldNotReachHere();
}

$Class* Introspector::getStandardMBeanInterface($Class* baseClass) {
	$init(Introspector);
	$useLocalCurrentObjectStackCache();
	$Class* current = baseClass;
	$Class* mbeanInterface = nullptr;
	while (current != nullptr) {
		mbeanInterface = findMBeanInterface(current, $(current->getName()));
		if (mbeanInterface != nullptr) {
			break;
		}
		current = current->getSuperclass();
	}
	if (mbeanInterface != nullptr) {
		return mbeanInterface;
	} else {
		$var($String, msg, $str({"Class "_s, $($nc(baseClass)->getName()), " is not a JMX compliant Standard MBean"_s}));
		$throwNew($NotCompliantMBeanException, msg);
	}
}

$Class* Introspector::getMXBeanInterface($Class* baseClass) {
	$init(Introspector);
	try {
		return $MXBeanSupport::findMXBeanInterface(baseClass);
	} catch ($Exception& e) {
		$throw($(throwException(baseClass, e)));
	}
	$shouldNotReachHere();
}

$Class* Introspector::findMBeanInterface($Class* aClass, $String* aName) {
	$init(Introspector);
	$useLocalCurrentObjectStackCache();
	$Class* current = aClass;
	while (current != nullptr) {
		$var($ClassArray, interfaces, current->getInterfaces());
		int32_t len = interfaces->length;
		for (int32_t i = 0; i < len; ++i) {
			$Class* inter = $cast($Class, $Util::cast(interfaces->get(i)));
			inter = implementsMBean(inter, aName);
			if (inter != nullptr) {
				return inter;
			}
		}
		current = current->getSuperclass();
	}
	return nullptr;
}

$Descriptor* Introspector::descriptorForElement($AnnotatedElement* elmt) {
	$init(Introspector);
	if (elmt == nullptr) {
		$init($ImmutableDescriptor);
		return $ImmutableDescriptor::EMPTY_DESCRIPTOR;
	}
	$var($AnnotationArray, annots, $nc(elmt)->getAnnotations());
	return descriptorForAnnotations(annots);
}

$Descriptor* Introspector::descriptorForAnnotations($AnnotationArray* annots) {
	$init(Introspector);
	$useLocalCurrentObjectStackCache();
	$beforeCallerSensitive();
	if ($nc(annots)->length == 0) {
		$init($ImmutableDescriptor);
		return $ImmutableDescriptor::EMPTY_DESCRIPTOR;
	}
	$var($Map, descriptorMap, $new($HashMap));
	{
		$var($AnnotationArray, arr$, annots);
		int32_t len$ = $nc(arr$)->length;
		int32_t i$ = 0;
		for (; i$ < len$; ++i$) {
			$var($Annotation, a, arr$->get(i$));
			{
				$Class* c = $nc(a)->annotationType();
				$var($MethodArray, elements, $nc(c)->getMethods());
				bool packageAccess = false;
				{
					$var($MethodArray, arr$, elements);
					int32_t len$ = arr$->length;
					int32_t i$ = 0;
					for (; i$ < len$; ++i$) {
						$var($Method, element, arr$->get(i$));
						{
							$load($DescriptorKey);
							$var($DescriptorKey, key, $cast($DescriptorKey, $nc(element)->getAnnotation($DescriptorKey::class$)));
							if (key != nullptr) {
								$var($String, name, key->value());
								$var($Object, value, nullptr);
								try {
									if (!packageAccess) {
										$ReflectUtil::checkPackageAccess(c);
										packageAccess = true;
									}
									$assign(value, $MethodUtil::invoke(element, a, nullptr));
								} catch ($RuntimeException& e) {
									$throw(e);
								} catch ($Exception& e) {
									$throwNew($UndeclaredThrowableException, e);
								}
								$assign(value, annotationToField(value));
								$var($Object, oldValue, descriptorMap->put(name, value));
								if (oldValue != nullptr && !equals(oldValue, value)) {
									$var($String, msg, $str({"Inconsistent values for descriptor field "_s, name, " from annotations: "_s, value, " :: "_s, oldValue}));
									$throwNew($IllegalArgumentException, msg);
								}
							}
						}
					}
				}
			}
		}
	}
	if (descriptorMap->isEmpty()) {
		$init($ImmutableDescriptor);
		return $ImmutableDescriptor::EMPTY_DESCRIPTOR;
	} else {
		return $new($ImmutableDescriptor, descriptorMap);
	}
}

$NotCompliantMBeanException* Introspector::throwException($Class* notCompliant, $Throwable* cause) {
	$init(Introspector);
	$useLocalCurrentObjectStackCache();
	if ($instanceOf($SecurityException, cause)) {
		$throw($cast($SecurityException, cause));
	}
	if ($instanceOf($NotCompliantMBeanException, cause)) {
		$throw($cast($NotCompliantMBeanException, cause));
	}
	$var($String, classname, (notCompliant == nullptr) ? "null class"_s : $nc(notCompliant)->getName());
	$var($String, reason, (cause == nullptr) ? "Not compliant"_s : $nc(cause)->getMessage());
	$var($NotCompliantMBeanException, res, $new($NotCompliantMBeanException, $$str({classname, ": "_s, reason})));
	res->initCause(cause);
	$throw(res);
	$shouldNotReachHere();
}

$Object* Introspector::annotationToField(Object$* x) {
	$init(Introspector);
	$useLocalCurrentObjectStackCache();
	if (x == nullptr) {
		return $of(nullptr);
	}
	if ($instanceOf($Number, x) || $instanceOf($String, x) || $instanceOf($Character, x) || $instanceOf($Boolean, x) || $instanceOf($StringArray, x)) {
		return $of(x);
	}
	$Class* c = $nc($of(x))->getClass();
	if ($nc(c)->isArray()) {
		if ($nc(c->getComponentType())->isPrimitive()) {
			return $of(x);
		}
		$var($ObjectArray, xx, $cast($ObjectArray, x));
		$var($StringArray, ss, $new($StringArray, xx->length));
		for (int32_t i = 0; i < xx->length; ++i) {
			ss->set(i, $cast($String, $(annotationToField(xx->get(i)))));
		}
		return $of(ss);
	}
	if ($instanceOf($Class, x)) {
		return $of($nc(($cast($Class, x)))->getName());
	}
	if ($instanceOf($Enum, x)) {
		return $of($nc(($cast($Enum, x)))->name());
	}
	if ($Proxy::isProxyClass(c)) {
		c = $($nc(c)->getInterfaces())->get(0);
	}
	$throwNew($IllegalArgumentException, $$str({"Illegal type for annotation element using @DescriptorKey: "_s, $($nc(c)->getName())}));
}

bool Introspector::equals(Object$* x, Object$* y) {
	$init(Introspector);
	$useLocalCurrentObjectStackCache();
	return $Arrays::deepEquals($$new($ObjectArray, {x}), $$new($ObjectArray, {y}));
}

$Class* Introspector::implementsMBean($Class* c, $String* clName) {
	$init(Introspector);
	$useLocalCurrentObjectStackCache();
	$var($String, clMBeanName, $str({clName, "MBean"_s}));
	if ($nc($($nc(c)->getName()))->equals(clMBeanName)) {
		return c;
	}
	$var($ClassArray, interfaces, $nc(c)->getInterfaces());
	for (int32_t i = 0; i < interfaces->length; ++i) {
		bool var$0 = $nc($($nc(interfaces->get(i))->getName()))->equals(clMBeanName);
		if (var$0 && ($Modifier::isPublic($nc(interfaces->get(i))->getModifiers()) || Introspector::ALLOW_NONPUBLIC_MBEAN)) {
			return $cast($Class, $Util::cast(interfaces->get(i)));
		}
	}
	return nullptr;
}

$Object* Introspector::elementFromComplex(Object$* complex, $String* element) {
	$init(Introspector);
	$useLocalCurrentObjectStackCache();
	try {
		bool var$0 = $nc($of(complex))->getClass()->isArray();
		if (var$0 && $nc(element)->equals("length"_s)) {
			return $of($Integer::valueOf($1Array::getLength(complex)));
		} else if ($instanceOf($CompositeData, complex)) {
			return $of($nc(($cast($CompositeData, complex)))->get(element));
		} else {
			$Class* clazz = $of(complex)->getClass();
			$var($Method, readMethod, nullptr);
			if ($JavaBeansAccessor::isAvailable()) {
				$assign(readMethod, $JavaBeansAccessor::getReadMethod(clazz, element));
			} else {
				$assign(readMethod, $Introspector$SimpleIntrospector::getReadMethod(clazz, element));
			}
			if (readMethod != nullptr) {
				$ReflectUtil::checkPackageAccess(readMethod->getDeclaringClass());
				return $of($MethodUtil::invoke(readMethod, complex, $$new($ClassArray, 0)));
			}
			$throwNew($AttributeNotFoundException, $$str({"Could not find the getter method for the property "_s, element, " using the Java Beans introspector"_s}));
		}
	} catch ($InvocationTargetException& e) {
		$throwNew($IllegalArgumentException, static_cast<$Throwable*>(e));
	} catch ($AttributeNotFoundException& e) {
		$throw(e);
	} catch ($Exception& e) {
		$throw($cast($AttributeNotFoundException, $($EnvHelp::initCause($$new($AttributeNotFoundException, $(e->getMessage())), e))));
	}
	$shouldNotReachHere();
}

void clinit$Introspector($Class* class$) {
	$useLocalCurrentObjectStackCache();
	$beforeCallerSensitive();
	{
		$var($String, val, $cast($String, $AccessController::doPrivileged(static_cast<$PrivilegedAction*>($$new($GetPropertyAction, "jdk.jmx.mbeans.allowNonPublic"_s)))));
		Introspector::ALLOW_NONPUBLIC_MBEAN = $Boolean::parseBoolean(val);
	}
}

Introspector::Introspector() {
}

$Class* Introspector::load$($String* name, bool initialize) {
	$loadClass(Introspector, name, initialize, &_Introspector_ClassInfo_, clinit$Introspector, allocate$Introspector);
	return class$;
}

$Class* Introspector::class$ = nullptr;

			} // mbeanserver
		} // jmx
	} // sun
} // com
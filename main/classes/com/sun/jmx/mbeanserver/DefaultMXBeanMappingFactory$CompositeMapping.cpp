#include <com/sun/jmx/mbeanserver/DefaultMXBeanMappingFactory$CompositeMapping.h>

#include <com/sun/jmx/mbeanserver/DefaultMXBeanMappingFactory$CompositeBuilder.h>
#include <com/sun/jmx/mbeanserver/DefaultMXBeanMappingFactory$CompositeBuilderCheckGetters.h>
#include <com/sun/jmx/mbeanserver/DefaultMXBeanMappingFactory$CompositeBuilderViaConstructor.h>
#include <com/sun/jmx/mbeanserver/DefaultMXBeanMappingFactory$CompositeBuilderViaFrom.h>
#include <com/sun/jmx/mbeanserver/DefaultMXBeanMappingFactory$CompositeBuilderViaProxy.h>
#include <com/sun/jmx/mbeanserver/DefaultMXBeanMappingFactory$CompositeBuilderViaSetters.h>
#include <com/sun/jmx/mbeanserver/DefaultMXBeanMappingFactory$NonNullMXBeanMapping.h>
#include <com/sun/jmx/mbeanserver/DefaultMXBeanMappingFactory$RecordCompositeBuilder.h>
#include <com/sun/jmx/mbeanserver/DefaultMXBeanMappingFactory.h>
#include <com/sun/jmx/mbeanserver/MXBeanMapping.h>
#include <com/sun/jmx/mbeanserver/MXBeanMappingFactory.h>
#include <java/io/InvalidObjectException.h>
#include <java/lang/AssertionError.h>
#include <java/lang/reflect/Method.h>
#include <java/lang/reflect/Type.h>
#include <javax/management/openmbean/CompositeData.h>
#include <javax/management/openmbean/CompositeDataSupport.h>
#include <javax/management/openmbean/CompositeDataView.h>
#include <javax/management/openmbean/CompositeType.h>
#include <javax/management/openmbean/OpenDataException.h>
#include <javax/management/openmbean/OpenType.h>
#include <sun/reflect/misc/MethodUtil.h>
#include <jcpp.h>

using $DefaultMXBeanMappingFactory$CompositeBuilderArray = $Array<::com::sun::jmx::mbeanserver::DefaultMXBeanMappingFactory$CompositeBuilder>;
using $MXBeanMappingArray = $Array<::com::sun::jmx::mbeanserver::MXBeanMapping>;
using $MethodArray = $Array<::java::lang::reflect::Method>;
using $DefaultMXBeanMappingFactory$CompositeBuilderArray2 = $Array<::com::sun::jmx::mbeanserver::DefaultMXBeanMappingFactory$CompositeBuilder, 2>;
using $DefaultMXBeanMappingFactory = ::com::sun::jmx::mbeanserver::DefaultMXBeanMappingFactory;
using $DefaultMXBeanMappingFactory$CompositeBuilder = ::com::sun::jmx::mbeanserver::DefaultMXBeanMappingFactory$CompositeBuilder;
using $DefaultMXBeanMappingFactory$CompositeBuilderCheckGetters = ::com::sun::jmx::mbeanserver::DefaultMXBeanMappingFactory$CompositeBuilderCheckGetters;
using $DefaultMXBeanMappingFactory$CompositeBuilderViaConstructor = ::com::sun::jmx::mbeanserver::DefaultMXBeanMappingFactory$CompositeBuilderViaConstructor;
using $DefaultMXBeanMappingFactory$CompositeBuilderViaFrom = ::com::sun::jmx::mbeanserver::DefaultMXBeanMappingFactory$CompositeBuilderViaFrom;
using $DefaultMXBeanMappingFactory$CompositeBuilderViaProxy = ::com::sun::jmx::mbeanserver::DefaultMXBeanMappingFactory$CompositeBuilderViaProxy;
using $DefaultMXBeanMappingFactory$CompositeBuilderViaSetters = ::com::sun::jmx::mbeanserver::DefaultMXBeanMappingFactory$CompositeBuilderViaSetters;
using $DefaultMXBeanMappingFactory$NonNullMXBeanMapping = ::com::sun::jmx::mbeanserver::DefaultMXBeanMappingFactory$NonNullMXBeanMapping;
using $DefaultMXBeanMappingFactory$RecordCompositeBuilder = ::com::sun::jmx::mbeanserver::DefaultMXBeanMappingFactory$RecordCompositeBuilder;
using $MXBeanMapping = ::com::sun::jmx::mbeanserver::MXBeanMapping;
using $MXBeanMappingFactory = ::com::sun::jmx::mbeanserver::MXBeanMappingFactory;
using $InvalidObjectException = ::java::io::InvalidObjectException;
using $AbstractStringBuilder = ::java::lang::AbstractStringBuilder;
using $AssertionError = ::java::lang::AssertionError;
using $ClassInfo = ::java::lang::ClassInfo;
using $Exception = ::java::lang::Exception;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $NullPointerException = ::java::lang::NullPointerException;
using $Method = ::java::lang::reflect::Method;
using $Type = ::java::lang::reflect::Type;
using $CompositeData = ::javax::management::openmbean::CompositeData;
using $CompositeDataSupport = ::javax::management::openmbean::CompositeDataSupport;
using $CompositeDataView = ::javax::management::openmbean::CompositeDataView;
using $CompositeType = ::javax::management::openmbean::CompositeType;
using $OpenDataException = ::javax::management::openmbean::OpenDataException;
using $OpenType = ::javax::management::openmbean::OpenType;
using $MethodUtil = ::sun::reflect::misc::MethodUtil;

namespace com {
	namespace sun {
		namespace jmx {
			namespace mbeanserver {

$FieldInfo _DefaultMXBeanMappingFactory$CompositeMapping_FieldInfo_[] = {
	{"this$0", "Lcom/sun/jmx/mbeanserver/DefaultMXBeanMappingFactory;", nullptr, $FINAL | $SYNTHETIC, $field(DefaultMXBeanMappingFactory$CompositeMapping, this$0)},
	{"$assertionsDisabled", "Z", nullptr, $STATIC | $FINAL | $SYNTHETIC, $staticField(DefaultMXBeanMappingFactory$CompositeMapping, $assertionsDisabled)},
	{"itemNames", "[Ljava/lang/String;", nullptr, $PRIVATE | $FINAL, $field(DefaultMXBeanMappingFactory$CompositeMapping, itemNames)},
	{"getters", "[Ljava/lang/reflect/Method;", nullptr, $PRIVATE | $FINAL, $field(DefaultMXBeanMappingFactory$CompositeMapping, getters)},
	{"getterMappings", "[Lcom/sun/jmx/mbeanserver/MXBeanMapping;", nullptr, $PRIVATE | $FINAL, $field(DefaultMXBeanMappingFactory$CompositeMapping, getterMappings)},
	{"compositeBuilder", "Lcom/sun/jmx/mbeanserver/DefaultMXBeanMappingFactory$CompositeBuilder;", nullptr, $PRIVATE, $field(DefaultMXBeanMappingFactory$CompositeMapping, compositeBuilder)},
	{}
};

$MethodInfo _DefaultMXBeanMappingFactory$CompositeMapping_MethodInfo_[] = {
	{"<init>", "(Lcom/sun/jmx/mbeanserver/DefaultMXBeanMappingFactory;Ljava/lang/Class;Ljavax/management/openmbean/CompositeType;[Ljava/lang/String;[Ljava/lang/reflect/Method;Lcom/sun/jmx/mbeanserver/MXBeanMappingFactory;)V", "(Ljava/lang/Class<*>;Ljavax/management/openmbean/CompositeType;[Ljava/lang/String;[Ljava/lang/reflect/Method;Lcom/sun/jmx/mbeanserver/MXBeanMappingFactory;)V", 0, $method(static_cast<void(DefaultMXBeanMappingFactory$CompositeMapping::*)($DefaultMXBeanMappingFactory*,$Class*,$CompositeType*,$StringArray*,$MethodArray*,$MXBeanMappingFactory*)>(&DefaultMXBeanMappingFactory$CompositeMapping::init$)), "javax.management.openmbean.OpenDataException"},
	{"checkReconstructible", "()V", nullptr, $PUBLIC, nullptr, "java.io.InvalidObjectException"},
	{"fromNonNullOpenValue", "(Ljava/lang/Object;)Ljava/lang/Object;", nullptr, $FINAL, nullptr, "java.io.InvalidObjectException"},
	{"makeCompositeBuilder", "()V", nullptr, $PRIVATE | $SYNCHRONIZED, $method(static_cast<void(DefaultMXBeanMappingFactory$CompositeMapping::*)()>(&DefaultMXBeanMappingFactory$CompositeMapping::makeCompositeBuilder)), "java.io.InvalidObjectException"},
	{"toNonNullOpenValue", "(Ljava/lang/Object;)Ljava/lang/Object;", nullptr, $FINAL, nullptr, "javax.management.openmbean.OpenDataException"},
	{}
};

$InnerClassInfo _DefaultMXBeanMappingFactory$CompositeMapping_InnerClassesInfo_[] = {
	{"com.sun.jmx.mbeanserver.DefaultMXBeanMappingFactory$CompositeMapping", "com.sun.jmx.mbeanserver.DefaultMXBeanMappingFactory", "CompositeMapping", $PRIVATE | $FINAL},
	{"com.sun.jmx.mbeanserver.DefaultMXBeanMappingFactory$NonNullMXBeanMapping", "com.sun.jmx.mbeanserver.DefaultMXBeanMappingFactory", "NonNullMXBeanMapping", $STATIC | $ABSTRACT},
	{}
};

$ClassInfo _DefaultMXBeanMappingFactory$CompositeMapping_ClassInfo_ = {
	$FINAL | $ACC_SUPER,
	"com.sun.jmx.mbeanserver.DefaultMXBeanMappingFactory$CompositeMapping",
	"com.sun.jmx.mbeanserver.DefaultMXBeanMappingFactory$NonNullMXBeanMapping",
	nullptr,
	_DefaultMXBeanMappingFactory$CompositeMapping_FieldInfo_,
	_DefaultMXBeanMappingFactory$CompositeMapping_MethodInfo_,
	nullptr,
	nullptr,
	_DefaultMXBeanMappingFactory$CompositeMapping_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.jmx.mbeanserver.DefaultMXBeanMappingFactory"
};

$Object* allocate$DefaultMXBeanMappingFactory$CompositeMapping($Class* clazz) {
	return $of($alloc(DefaultMXBeanMappingFactory$CompositeMapping));
}

bool DefaultMXBeanMappingFactory$CompositeMapping::$assertionsDisabled = false;

void DefaultMXBeanMappingFactory$CompositeMapping::init$($DefaultMXBeanMappingFactory* this$0, $Class* targetClass, $CompositeType* compositeType, $StringArray* itemNames, $MethodArray* getters, $MXBeanMappingFactory* factory) {
	$useLocalCurrentObjectStackCache();
	$set(this, this$0, this$0);
	$DefaultMXBeanMappingFactory$NonNullMXBeanMapping::init$(targetClass, compositeType);
	if (!DefaultMXBeanMappingFactory$CompositeMapping::$assertionsDisabled && !($nc(itemNames)->length == $nc(getters)->length)) {
		$throwNew($AssertionError);
	}
	$set(this, itemNames, itemNames);
	$set(this, getters, getters);
	$set(this, getterMappings, $new($MXBeanMappingArray, $nc(getters)->length));
	for (int32_t i = 0; i < getters->length; ++i) {
		$var($Type, retType, $nc(getters->get(i))->getGenericReturnType());
		$nc(this->getterMappings)->set(i, $($nc(factory)->mappingForType(retType, factory)));
	}
}

$Object* DefaultMXBeanMappingFactory$CompositeMapping::toNonNullOpenValue(Object$* value) {
	$useLocalCurrentObjectStackCache();
	$var($CompositeType, ct, $cast($CompositeType, getOpenType()));
	if ($instanceOf($CompositeDataView, value)) {
		return $of($nc(($cast($CompositeDataView, value)))->toCompositeData(ct));
	}
	if (value == nullptr) {
		return $of(nullptr);
	}
	$var($ObjectArray, values, $new($ObjectArray, $nc(this->getters)->length));
	for (int32_t i = 0; i < $nc(this->getters)->length; ++i) {
		try {
			$var($Object, got, $MethodUtil::invoke($nc(this->getters)->get(i), value, ($ObjectArray*)nullptr));
			values->set(i, $($nc($nc(this->getterMappings)->get(i))->toOpenValue(got)));
		} catch ($Exception& e) {
			$throw($($DefaultMXBeanMappingFactory::openDataException($$str({"Error calling getter for "_s, $nc(this->itemNames)->get(i), ": "_s, e}), e)));
		}
	}
	return $of($new($CompositeDataSupport, ct, this->itemNames, values));
}

void DefaultMXBeanMappingFactory$CompositeMapping::makeCompositeBuilder() {
	$synchronized(this) {
		$useLocalCurrentObjectStackCache();
		if (this->compositeBuilder != nullptr) {
			return;
		}
		$Class* targetClass = $cast($Class, getJavaType());
		$var($DefaultMXBeanMappingFactory$CompositeBuilderArray2, builders, $new($DefaultMXBeanMappingFactory$CompositeBuilderArray2, {
			$$new($DefaultMXBeanMappingFactory$CompositeBuilderArray, {static_cast<$DefaultMXBeanMappingFactory$CompositeBuilder*>($$new($DefaultMXBeanMappingFactory$CompositeBuilderViaFrom, targetClass, this->itemNames))}),
			$$new($DefaultMXBeanMappingFactory$CompositeBuilderArray, {static_cast<$DefaultMXBeanMappingFactory$CompositeBuilder*>($$new($DefaultMXBeanMappingFactory$RecordCompositeBuilder, targetClass, this->itemNames))}),
			$$new($DefaultMXBeanMappingFactory$CompositeBuilderArray, {static_cast<$DefaultMXBeanMappingFactory$CompositeBuilder*>($$new($DefaultMXBeanMappingFactory$CompositeBuilderViaConstructor, targetClass, this->itemNames))}),
			$$new($DefaultMXBeanMappingFactory$CompositeBuilderArray, {
				static_cast<$DefaultMXBeanMappingFactory$CompositeBuilder*>($$new($DefaultMXBeanMappingFactory$CompositeBuilderCheckGetters, targetClass, this->itemNames, this->getterMappings)),
				static_cast<$DefaultMXBeanMappingFactory$CompositeBuilder*>($$new($DefaultMXBeanMappingFactory$CompositeBuilderViaSetters, targetClass, this->itemNames)),
				static_cast<$DefaultMXBeanMappingFactory$CompositeBuilder*>($$new($DefaultMXBeanMappingFactory$CompositeBuilderViaProxy, targetClass, this->itemNames))
			})
		}));
		$var($DefaultMXBeanMappingFactory$CompositeBuilder, foundBuilder, nullptr);
		$var($StringBuilder, whyNots, $new($StringBuilder));
		$var($Throwable, possibleCause, nullptr);
		bool find$break = false;
		{
			$var($DefaultMXBeanMappingFactory$CompositeBuilderArray2, arr$, builders);
			int32_t len$ = arr$->length;
			int32_t i$ = 0;
			for (; i$ < len$; ++i$) {
				$var($DefaultMXBeanMappingFactory$CompositeBuilderArray, relatedBuilders, arr$->get(i$));
				{
					for (int32_t i = 0; i < $nc(relatedBuilders)->length; ++i) {
						$var($DefaultMXBeanMappingFactory$CompositeBuilder, builder, relatedBuilders->get(i));
						$var($String, whyNot, $nc(builder)->applicable(this->getters));
						if (whyNot == nullptr) {
							$assign(foundBuilder, builder);
							find$break = true;
							break;
						}
						$var($Throwable, cause, builder->possibleCause());
						if (cause != nullptr) {
							$assign(possibleCause, cause);
						}
						if ($nc(whyNot)->length() > 0) {
							if (whyNots->length() > 0) {
								whyNots->append("; "_s);
							}
							whyNots->append(whyNot);
							if (i == 0) {
								break;
							}
						}
					}
					if (find$break) {
						break;
					}
				}
			}
		}
		if (foundBuilder == nullptr) {
			$var($String, msg, $str({"Do not know how to make a "_s, $($nc(targetClass)->getName()), " from a CompositeData: "_s, whyNots}));
			if (possibleCause != nullptr) {
				$plusAssign(msg, ". Remaining exceptions show a POSSIBLE cause."_s);
			}
			$throw($($DefaultMXBeanMappingFactory::invalidObjectException(msg, possibleCause)));
		}
		$set(this, compositeBuilder, foundBuilder);
	}
}

void DefaultMXBeanMappingFactory$CompositeMapping::checkReconstructible() {
	makeCompositeBuilder();
}

$Object* DefaultMXBeanMappingFactory$CompositeMapping::fromNonNullOpenValue(Object$* value) {
	makeCompositeBuilder();
	return $of($nc(this->compositeBuilder)->fromCompositeData($cast($CompositeData, value), this->itemNames, this->getterMappings));
}

void clinit$DefaultMXBeanMappingFactory$CompositeMapping($Class* class$) {
	$load($DefaultMXBeanMappingFactory);
	DefaultMXBeanMappingFactory$CompositeMapping::$assertionsDisabled = !$DefaultMXBeanMappingFactory::class$->desiredAssertionStatus();
}

DefaultMXBeanMappingFactory$CompositeMapping::DefaultMXBeanMappingFactory$CompositeMapping() {
}

$Class* DefaultMXBeanMappingFactory$CompositeMapping::load$($String* name, bool initialize) {
	$loadClass(DefaultMXBeanMappingFactory$CompositeMapping, name, initialize, &_DefaultMXBeanMappingFactory$CompositeMapping_ClassInfo_, clinit$DefaultMXBeanMappingFactory$CompositeMapping, allocate$DefaultMXBeanMappingFactory$CompositeMapping);
	return class$;
}

$Class* DefaultMXBeanMappingFactory$CompositeMapping::class$ = nullptr;

			} // mbeanserver
		} // jmx
	} // sun
} // com
#include <com/sun/jmx/mbeanserver/DefaultMXBeanMappingFactory.h>

#include <com/sun/jmx/mbeanserver/DefaultMXBeanMappingFactory$ArrayMapping.h>
#include <com/sun/jmx/mbeanserver/DefaultMXBeanMappingFactory$CollectionMapping.h>
#include <com/sun/jmx/mbeanserver/DefaultMXBeanMappingFactory$CompositeMapping.h>
#include <com/sun/jmx/mbeanserver/DefaultMXBeanMappingFactory$EnumMapping.h>
#include <com/sun/jmx/mbeanserver/DefaultMXBeanMappingFactory$IdentityMapping.h>
#include <com/sun/jmx/mbeanserver/DefaultMXBeanMappingFactory$MXBeanRefMapping.h>
#include <com/sun/jmx/mbeanserver/DefaultMXBeanMappingFactory$Mappings.h>
#include <com/sun/jmx/mbeanserver/DefaultMXBeanMappingFactory$NonNullMXBeanMapping.h>
#include <com/sun/jmx/mbeanserver/DefaultMXBeanMappingFactory$TabularMapping.h>
#include <com/sun/jmx/mbeanserver/MBeanAnalyzer.h>
#include <com/sun/jmx/mbeanserver/MXBeanIntrospector.h>
#include <com/sun/jmx/mbeanserver/MXBeanMapping.h>
#include <com/sun/jmx/mbeanserver/MXBeanMappingFactory.h>
#include <com/sun/jmx/mbeanserver/Util.h>
#include <com/sun/jmx/remote/util/EnvHelp.h>
#include <java/io/IOException.h>
#include <java/io/InvalidObjectException.h>
#include <java/io/ObjectStreamException.h>
#include <java/lang/AssertionError.h>
#include <java/lang/CharSequence.h>
#include <java/lang/ClassLoader.h>
#include <java/lang/ClassNotFoundException.h>
#include <java/lang/Comparable.h>
#include <java/lang/Error.h>
#include <java/lang/IllegalAccessException.h>
#include <java/lang/NoSuchFieldException.h>
#include <java/lang/ReflectiveOperationException.h>
#include <java/lang/annotation/ElementType.h>
#include <java/lang/ref/WeakReference.h>
#include <java/lang/reflect/Array.h>
#include <java/lang/reflect/Field.h>
#include <java/lang/reflect/GenericArrayType.h>
#include <java/lang/reflect/Method.h>
#include <java/lang/reflect/ParameterizedType.h>
#include <java/lang/reflect/RecordComponent.h>
#include <java/lang/reflect/Type.h>
#include <java/util/AbstractMap.h>
#include <java/util/Arrays.h>
#include <java/util/IdentityHashMap.h>
#include <java/util/Iterator.h>
#include <java/util/List.h>
#include <java/util/Map$Entry.h>
#include <java/util/Map.h>
#include <java/util/Set.h>
#include <java/util/SortedMap.h>
#include <java/util/SortedSet.h>
#include <javax/management/JMException.h>
#include <javax/management/JMX.h>
#include <javax/management/ObjectName.h>
#include <javax/management/openmbean/ArrayType.h>
#include <javax/management/openmbean/CompositeType.h>
#include <javax/management/openmbean/OpenDataException.h>
#include <javax/management/openmbean/OpenType.h>
#include <javax/management/openmbean/SimpleType.h>
#include <javax/management/openmbean/TabularType.h>
#include <sun/reflect/misc/ReflectUtil.h>
#include <jcpp.h>

#undef BIGDECIMAL
#undef BIGINTEGER
#undef BOOLEAN
#undef BYTE
#undef CHARACTER
#undef DATE
#undef DOUBLE
#undef FLOAT
#undef INTEGER
#undef LONG
#undef OBJECTNAME
#undef SHORT
#undef STRING
#undef TYPE
#undef VOID

using $MethodArray = $Array<::java::lang::reflect::Method>;
using $RecordComponentArray = $Array<::java::lang::reflect::RecordComponent>;
using $TypeArray = $Array<::java::lang::reflect::Type>;
using $OpenTypeArray = $Array<::javax::management::openmbean::OpenType>;
using $DefaultMXBeanMappingFactory$ArrayMapping = ::com::sun::jmx::mbeanserver::DefaultMXBeanMappingFactory$ArrayMapping;
using $DefaultMXBeanMappingFactory$CollectionMapping = ::com::sun::jmx::mbeanserver::DefaultMXBeanMappingFactory$CollectionMapping;
using $DefaultMXBeanMappingFactory$CompositeMapping = ::com::sun::jmx::mbeanserver::DefaultMXBeanMappingFactory$CompositeMapping;
using $DefaultMXBeanMappingFactory$EnumMapping = ::com::sun::jmx::mbeanserver::DefaultMXBeanMappingFactory$EnumMapping;
using $DefaultMXBeanMappingFactory$IdentityMapping = ::com::sun::jmx::mbeanserver::DefaultMXBeanMappingFactory$IdentityMapping;
using $DefaultMXBeanMappingFactory$MXBeanRefMapping = ::com::sun::jmx::mbeanserver::DefaultMXBeanMappingFactory$MXBeanRefMapping;
using $DefaultMXBeanMappingFactory$Mappings = ::com::sun::jmx::mbeanserver::DefaultMXBeanMappingFactory$Mappings;
using $DefaultMXBeanMappingFactory$NonNullMXBeanMapping = ::com::sun::jmx::mbeanserver::DefaultMXBeanMappingFactory$NonNullMXBeanMapping;
using $DefaultMXBeanMappingFactory$TabularMapping = ::com::sun::jmx::mbeanserver::DefaultMXBeanMappingFactory$TabularMapping;
using $MBeanAnalyzer = ::com::sun::jmx::mbeanserver::MBeanAnalyzer;
using $MXBeanIntrospector = ::com::sun::jmx::mbeanserver::MXBeanIntrospector;
using $MXBeanMapping = ::com::sun::jmx::mbeanserver::MXBeanMapping;
using $MXBeanMappingFactory = ::com::sun::jmx::mbeanserver::MXBeanMappingFactory;
using $Util = ::com::sun::jmx::mbeanserver::Util;
using $EnvHelp = ::com::sun::jmx::remote::util::EnvHelp;
using $IOException = ::java::io::IOException;
using $InvalidObjectException = ::java::io::InvalidObjectException;
using $ObjectStreamException = ::java::io::ObjectStreamException;
using $AssertionError = ::java::lang::AssertionError;
using $Boolean = ::java::lang::Boolean;
using $CharSequence = ::java::lang::CharSequence;
using $Character = ::java::lang::Character;
using $ClassInfo = ::java::lang::ClassInfo;
using $ClassLoader = ::java::lang::ClassLoader;
using $ClassNotFoundException = ::java::lang::ClassNotFoundException;
using $Comparable = ::java::lang::Comparable;
using $Enum = ::java::lang::Enum;
using $Error = ::java::lang::Error;
using $Exception = ::java::lang::Exception;
using $FieldInfo = ::java::lang::FieldInfo;
using $IllegalAccessException = ::java::lang::IllegalAccessException;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $NoSuchFieldException = ::java::lang::NoSuchFieldException;
using $NullPointerException = ::java::lang::NullPointerException;
using $ReflectiveOperationException = ::java::lang::ReflectiveOperationException;
using $Void = ::java::lang::Void;
using $ElementType = ::java::lang::annotation::ElementType;
using $Reference = ::java::lang::ref::Reference;
using $WeakReference = ::java::lang::ref::WeakReference;
using $1Array = ::java::lang::reflect::Array;
using $Field = ::java::lang::reflect::Field;
using $GenericArrayType = ::java::lang::reflect::GenericArrayType;
using $Method = ::java::lang::reflect::Method;
using $ParameterizedType = ::java::lang::reflect::ParameterizedType;
using $RecordComponent = ::java::lang::reflect::RecordComponent;
using $Type = ::java::lang::reflect::Type;
using $AbstractMap = ::java::util::AbstractMap;
using $Arrays = ::java::util::Arrays;
using $IdentityHashMap = ::java::util::IdentityHashMap;
using $Iterator = ::java::util::Iterator;
using $List = ::java::util::List;
using $Map = ::java::util::Map;
using $Map$Entry = ::java::util::Map$Entry;
using $Set = ::java::util::Set;
using $SortedMap = ::java::util::SortedMap;
using $SortedSet = ::java::util::SortedSet;
using $WeakHashMap = ::java::util::WeakHashMap;
using $JMException = ::javax::management::JMException;
using $JMX = ::javax::management::JMX;
using $ObjectName = ::javax::management::ObjectName;
using $ArrayType = ::javax::management::openmbean::ArrayType;
using $CompositeType = ::javax::management::openmbean::CompositeType;
using $OpenDataException = ::javax::management::openmbean::OpenDataException;
using $OpenType = ::javax::management::openmbean::OpenType;
using $SimpleType = ::javax::management::openmbean::SimpleType;
using $TabularType = ::javax::management::openmbean::TabularType;
using $ReflectUtil = ::sun::reflect::misc::ReflectUtil;

namespace com {
	namespace sun {
		namespace jmx {
			namespace mbeanserver {

$FieldInfo _DefaultMXBeanMappingFactory_FieldInfo_[] = {
	{"$assertionsDisabled", "Z", nullptr, $STATIC | $FINAL | $SYNTHETIC, $staticField(DefaultMXBeanMappingFactory, $assertionsDisabled)},
	{"mappings", "Lcom/sun/jmx/mbeanserver/DefaultMXBeanMappingFactory$Mappings;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(DefaultMXBeanMappingFactory, mappings)},
	{"permanentMappings", "Ljava/util/List;", "Ljava/util/List<Lcom/sun/jmx/mbeanserver/MXBeanMapping;>;", $PRIVATE | $STATIC | $FINAL, $staticField(DefaultMXBeanMappingFactory, permanentMappings)},
	{"keyArray", "[Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(DefaultMXBeanMappingFactory, keyArray)},
	{"keyValueArray", "[Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(DefaultMXBeanMappingFactory, keyValueArray)},
	{"inProgress", "Ljava/util/Map;", "Ljava/util/Map<Ljava/lang/reflect/Type;Ljava/lang/reflect/Type;>;", $PRIVATE | $STATIC | $FINAL, $staticField(DefaultMXBeanMappingFactory, inProgress)},
	{}
};

$MethodInfo _DefaultMXBeanMappingFactory_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(DefaultMXBeanMappingFactory::*)()>(&DefaultMXBeanMappingFactory::init$))},
	{"capitalize", "(Ljava/lang/String;)Ljava/lang/String;", nullptr, $STATIC, $method(static_cast<$String*(*)($String*)>(&DefaultMXBeanMappingFactory::capitalize))},
	{"decapitalize", "(Ljava/lang/String;)Ljava/lang/String;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$String*(*)($String*)>(&DefaultMXBeanMappingFactory::decapitalize))},
	{"getMapping", "(Ljava/lang/reflect/Type;)Lcom/sun/jmx/mbeanserver/MXBeanMapping;", nullptr, $PRIVATE | $STATIC | $SYNCHRONIZED, $method(static_cast<$MXBeanMapping*(*)($Type*)>(&DefaultMXBeanMappingFactory::getMapping))},
	{"invalidObjectException", "(Ljava/lang/String;Ljava/lang/Throwable;)Ljava/io/InvalidObjectException;", nullptr, $STATIC, $method(static_cast<$InvalidObjectException*(*)($String*,$Throwable*)>(&DefaultMXBeanMappingFactory::invalidObjectException))},
	{"invalidObjectException", "(Ljava/lang/Throwable;)Ljava/io/InvalidObjectException;", nullptr, $STATIC, $method(static_cast<$InvalidObjectException*(*)($Throwable*)>(&DefaultMXBeanMappingFactory::invalidObjectException))},
	{"isIdentity", "(Lcom/sun/jmx/mbeanserver/MXBeanMapping;)Z", nullptr, $STATIC, $method(static_cast<bool(*)($MXBeanMapping*)>(&DefaultMXBeanMappingFactory::isIdentity))},
	{"makeArrayOrCollectionMapping", "(Ljava/lang/reflect/Type;Ljava/lang/reflect/Type;Lcom/sun/jmx/mbeanserver/MXBeanMappingFactory;)Lcom/sun/jmx/mbeanserver/MXBeanMapping;", nullptr, $PRIVATE, $method(static_cast<$MXBeanMapping*(DefaultMXBeanMappingFactory::*)($Type*,$Type*,$MXBeanMappingFactory*)>(&DefaultMXBeanMappingFactory::makeArrayOrCollectionMapping)), "javax.management.openmbean.OpenDataException"},
	{"makeCompositeMapping", "(Ljava/lang/Class;Lcom/sun/jmx/mbeanserver/MXBeanMappingFactory;)Lcom/sun/jmx/mbeanserver/MXBeanMapping;", "(Ljava/lang/Class<*>;Lcom/sun/jmx/mbeanserver/MXBeanMappingFactory;)Lcom/sun/jmx/mbeanserver/MXBeanMapping;", $PRIVATE, $method(static_cast<$MXBeanMapping*(DefaultMXBeanMappingFactory::*)($Class*,$MXBeanMappingFactory*)>(&DefaultMXBeanMappingFactory::makeCompositeMapping)), "javax.management.openmbean.OpenDataException"},
	{"makeEnumMapping", "(Ljava/lang/Class;Ljava/lang/Class;)Lcom/sun/jmx/mbeanserver/MXBeanMapping;", "<T:Ljava/lang/Enum<TT;>;>(Ljava/lang/Class<*>;Ljava/lang/Class<TT;>;)Lcom/sun/jmx/mbeanserver/MXBeanMapping;", $PRIVATE | $STATIC, $method(static_cast<$MXBeanMapping*(*)($Class*,$Class*)>(&DefaultMXBeanMappingFactory::makeEnumMapping))},
	{"makeMXBeanRefMapping", "(Ljava/lang/reflect/Type;)Lcom/sun/jmx/mbeanserver/MXBeanMapping;", nullptr, $PRIVATE | $STATIC, $method(static_cast<$MXBeanMapping*(*)($Type*)>(&DefaultMXBeanMappingFactory::makeMXBeanRefMapping)), "javax.management.openmbean.OpenDataException"},
	{"makeMapping", "(Ljava/lang/reflect/Type;Lcom/sun/jmx/mbeanserver/MXBeanMappingFactory;)Lcom/sun/jmx/mbeanserver/MXBeanMapping;", nullptr, $PRIVATE, $method(static_cast<$MXBeanMapping*(DefaultMXBeanMappingFactory::*)($Type*,$MXBeanMappingFactory*)>(&DefaultMXBeanMappingFactory::makeMapping)), "javax.management.openmbean.OpenDataException"},
	{"makeParameterizedTypeMapping", "(Ljava/lang/reflect/ParameterizedType;Lcom/sun/jmx/mbeanserver/MXBeanMappingFactory;)Lcom/sun/jmx/mbeanserver/MXBeanMapping;", nullptr, $PRIVATE, $method(static_cast<$MXBeanMapping*(DefaultMXBeanMappingFactory::*)($ParameterizedType*,$MXBeanMappingFactory*)>(&DefaultMXBeanMappingFactory::makeParameterizedTypeMapping)), "javax.management.openmbean.OpenDataException"},
	{"makeTabularMapping", "(Ljava/lang/reflect/Type;ZLjava/lang/reflect/Type;Ljava/lang/reflect/Type;Lcom/sun/jmx/mbeanserver/MXBeanMappingFactory;)Lcom/sun/jmx/mbeanserver/MXBeanMapping;", nullptr, $PRIVATE, $method(static_cast<$MXBeanMapping*(DefaultMXBeanMappingFactory::*)($Type*,bool,$Type*,$Type*,$MXBeanMappingFactory*)>(&DefaultMXBeanMappingFactory::makeTabularMapping)), "javax.management.openmbean.OpenDataException"},
	{"mappingForType", "(Ljava/lang/reflect/Type;Lcom/sun/jmx/mbeanserver/MXBeanMappingFactory;)Lcom/sun/jmx/mbeanserver/MXBeanMapping;", nullptr, $PUBLIC | $SYNCHRONIZED, nullptr, "javax.management.openmbean.OpenDataException"},
	{"mustBeComparable", "(Ljava/lang/Class;Ljava/lang/reflect/Type;)V", "(Ljava/lang/Class<*>;Ljava/lang/reflect/Type;)V", $STATIC, $method(static_cast<void(*)($Class*,$Type*)>(&DefaultMXBeanMappingFactory::mustBeComparable)), "javax.management.openmbean.OpenDataException"},
	{"openDataException", "(Ljava/lang/String;Ljava/lang/Throwable;)Ljavax/management/openmbean/OpenDataException;", nullptr, $STATIC, $method(static_cast<$OpenDataException*(*)($String*,$Throwable*)>(&DefaultMXBeanMappingFactory::openDataException))},
	{"openDataException", "(Ljava/lang/Throwable;)Ljavax/management/openmbean/OpenDataException;", nullptr, $STATIC, $method(static_cast<$OpenDataException*(*)($Throwable*)>(&DefaultMXBeanMappingFactory::openDataException))},
	{"propertyName", "(Ljava/lang/reflect/Method;)Ljava/lang/String;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$String*(*)($Method*)>(&DefaultMXBeanMappingFactory::propertyName))},
	{"putMapping", "(Ljava/lang/reflect/Type;Lcom/sun/jmx/mbeanserver/MXBeanMapping;)V", nullptr, $PRIVATE | $STATIC | $SYNCHRONIZED, $method(static_cast<void(*)($Type*,$MXBeanMapping*)>(&DefaultMXBeanMappingFactory::putMapping))},
	{"putPermanentMapping", "(Ljava/lang/reflect/Type;Lcom/sun/jmx/mbeanserver/MXBeanMapping;)V", nullptr, $PRIVATE | $STATIC | $SYNCHRONIZED, $method(static_cast<void(*)($Type*,$MXBeanMapping*)>(&DefaultMXBeanMappingFactory::putPermanentMapping))},
	{}
};

$InnerClassInfo _DefaultMXBeanMappingFactory_InnerClassesInfo_[] = {
	{"com.sun.jmx.mbeanserver.DefaultMXBeanMappingFactory$CompositeBuilderViaProxy", "com.sun.jmx.mbeanserver.DefaultMXBeanMappingFactory", "CompositeBuilderViaProxy", $PRIVATE | $STATIC | $FINAL},
	{"com.sun.jmx.mbeanserver.DefaultMXBeanMappingFactory$RecordCompositeBuilder", "com.sun.jmx.mbeanserver.DefaultMXBeanMappingFactory", "RecordCompositeBuilder", $PRIVATE | $STATIC | $FINAL},
	{"com.sun.jmx.mbeanserver.DefaultMXBeanMappingFactory$CompositeBuilderViaConstructor", "com.sun.jmx.mbeanserver.DefaultMXBeanMappingFactory", "CompositeBuilderViaConstructor", $PRIVATE | $STATIC},
	{"com.sun.jmx.mbeanserver.DefaultMXBeanMappingFactory$CompositeBuilderViaSetters", "com.sun.jmx.mbeanserver.DefaultMXBeanMappingFactory", "CompositeBuilderViaSetters", $PRIVATE | $STATIC},
	{"com.sun.jmx.mbeanserver.DefaultMXBeanMappingFactory$CompositeBuilderCheckGetters", "com.sun.jmx.mbeanserver.DefaultMXBeanMappingFactory", "CompositeBuilderCheckGetters", $PRIVATE | $STATIC},
	{"com.sun.jmx.mbeanserver.DefaultMXBeanMappingFactory$CompositeBuilderViaFrom", "com.sun.jmx.mbeanserver.DefaultMXBeanMappingFactory", "CompositeBuilderViaFrom", $PRIVATE | $STATIC | $FINAL},
	{"com.sun.jmx.mbeanserver.DefaultMXBeanMappingFactory$CompositeBuilder", "com.sun.jmx.mbeanserver.DefaultMXBeanMappingFactory", "CompositeBuilder", $PRIVATE | $STATIC | $ABSTRACT},
	{"com.sun.jmx.mbeanserver.DefaultMXBeanMappingFactory$CompositeMapping", "com.sun.jmx.mbeanserver.DefaultMXBeanMappingFactory", "CompositeMapping", $PRIVATE | $FINAL},
	{"com.sun.jmx.mbeanserver.DefaultMXBeanMappingFactory$TabularMapping", "com.sun.jmx.mbeanserver.DefaultMXBeanMappingFactory", "TabularMapping", $PRIVATE | $STATIC | $FINAL},
	{"com.sun.jmx.mbeanserver.DefaultMXBeanMappingFactory$MXBeanRefMapping", "com.sun.jmx.mbeanserver.DefaultMXBeanMappingFactory", "MXBeanRefMapping", $PRIVATE | $STATIC | $FINAL},
	{"com.sun.jmx.mbeanserver.DefaultMXBeanMappingFactory$CollectionMapping", "com.sun.jmx.mbeanserver.DefaultMXBeanMappingFactory", "CollectionMapping", $PRIVATE | $STATIC | $FINAL},
	{"com.sun.jmx.mbeanserver.DefaultMXBeanMappingFactory$ArrayMapping", "com.sun.jmx.mbeanserver.DefaultMXBeanMappingFactory", "ArrayMapping", $PRIVATE | $STATIC | $FINAL},
	{"com.sun.jmx.mbeanserver.DefaultMXBeanMappingFactory$EnumMapping", "com.sun.jmx.mbeanserver.DefaultMXBeanMappingFactory", "EnumMapping", $PRIVATE | $STATIC | $FINAL},
	{"com.sun.jmx.mbeanserver.DefaultMXBeanMappingFactory$IdentityMapping", "com.sun.jmx.mbeanserver.DefaultMXBeanMappingFactory", "IdentityMapping", $PRIVATE | $STATIC | $FINAL},
	{"com.sun.jmx.mbeanserver.DefaultMXBeanMappingFactory$Mappings", "com.sun.jmx.mbeanserver.DefaultMXBeanMappingFactory", "Mappings", $PRIVATE | $STATIC | $FINAL},
	{"com.sun.jmx.mbeanserver.DefaultMXBeanMappingFactory$NonNullMXBeanMapping", "com.sun.jmx.mbeanserver.DefaultMXBeanMappingFactory", "NonNullMXBeanMapping", $STATIC | $ABSTRACT},
	{}
};

$ClassInfo _DefaultMXBeanMappingFactory_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"com.sun.jmx.mbeanserver.DefaultMXBeanMappingFactory",
	"com.sun.jmx.mbeanserver.MXBeanMappingFactory",
	nullptr,
	_DefaultMXBeanMappingFactory_FieldInfo_,
	_DefaultMXBeanMappingFactory_MethodInfo_,
	nullptr,
	nullptr,
	_DefaultMXBeanMappingFactory_InnerClassesInfo_,
	nullptr,
	nullptr,
	"com.sun.jmx.mbeanserver.DefaultMXBeanMappingFactory$CompositeBuilderViaProxy,com.sun.jmx.mbeanserver.DefaultMXBeanMappingFactory$RecordCompositeBuilder,com.sun.jmx.mbeanserver.DefaultMXBeanMappingFactory$CompositeBuilderViaConstructor,com.sun.jmx.mbeanserver.DefaultMXBeanMappingFactory$CompositeBuilderViaConstructor$Constr,com.sun.jmx.mbeanserver.DefaultMXBeanMappingFactory$CompositeBuilderViaSetters,com.sun.jmx.mbeanserver.DefaultMXBeanMappingFactory$CompositeBuilderCheckGetters,com.sun.jmx.mbeanserver.DefaultMXBeanMappingFactory$CompositeBuilderViaFrom,com.sun.jmx.mbeanserver.DefaultMXBeanMappingFactory$CompositeBuilder,com.sun.jmx.mbeanserver.DefaultMXBeanMappingFactory$CompositeMapping,com.sun.jmx.mbeanserver.DefaultMXBeanMappingFactory$TabularMapping,com.sun.jmx.mbeanserver.DefaultMXBeanMappingFactory$MXBeanRefMapping,com.sun.jmx.mbeanserver.DefaultMXBeanMappingFactory$CollectionMapping,com.sun.jmx.mbeanserver.DefaultMXBeanMappingFactory$ArrayMapping,com.sun.jmx.mbeanserver.DefaultMXBeanMappingFactory$EnumMapping,com.sun.jmx.mbeanserver.DefaultMXBeanMappingFactory$IdentityMapping,com.sun.jmx.mbeanserver.DefaultMXBeanMappingFactory$Mappings,com.sun.jmx.mbeanserver.DefaultMXBeanMappingFactory$NonNullMXBeanMapping"
};

$Object* allocate$DefaultMXBeanMappingFactory($Class* clazz) {
	return $of($alloc(DefaultMXBeanMappingFactory));
}

bool DefaultMXBeanMappingFactory::$assertionsDisabled = false;
$DefaultMXBeanMappingFactory$Mappings* DefaultMXBeanMappingFactory::mappings = nullptr;
$List* DefaultMXBeanMappingFactory::permanentMappings = nullptr;
$StringArray* DefaultMXBeanMappingFactory::keyArray = nullptr;
$StringArray* DefaultMXBeanMappingFactory::keyValueArray = nullptr;
$Map* DefaultMXBeanMappingFactory::inProgress = nullptr;

void DefaultMXBeanMappingFactory::init$() {
	$MXBeanMappingFactory::init$();
}

bool DefaultMXBeanMappingFactory::isIdentity($MXBeanMapping* mapping) {
	$init(DefaultMXBeanMappingFactory);
	return ($instanceOf($DefaultMXBeanMappingFactory$NonNullMXBeanMapping, mapping) && $nc(($cast($DefaultMXBeanMappingFactory$NonNullMXBeanMapping, mapping)))->isIdentity());
}

$MXBeanMapping* DefaultMXBeanMappingFactory::getMapping($Type* type) {
	$load(DefaultMXBeanMappingFactory);
	$synchronized(class$) {
		$init(DefaultMXBeanMappingFactory);
		$var($WeakReference, wr, $cast($WeakReference, $nc(DefaultMXBeanMappingFactory::mappings)->get(type)));
		return (wr == nullptr) ? ($MXBeanMapping*)nullptr : $cast($MXBeanMapping, $nc(wr)->get());
	}
}

void DefaultMXBeanMappingFactory::putMapping($Type* type, $MXBeanMapping* mapping) {
	$load(DefaultMXBeanMappingFactory);
	$synchronized(class$) {
		$init(DefaultMXBeanMappingFactory);
		$var($WeakReference, wr, $new($WeakReference, mapping));
		$nc(DefaultMXBeanMappingFactory::mappings)->put(type, wr);
	}
}

void DefaultMXBeanMappingFactory::putPermanentMapping($Type* type, $MXBeanMapping* mapping) {
	$load(DefaultMXBeanMappingFactory);
	$synchronized(class$) {
		$init(DefaultMXBeanMappingFactory);
		putMapping(type, mapping);
		$nc(DefaultMXBeanMappingFactory::permanentMappings)->add(mapping);
	}
}

$MXBeanMapping* DefaultMXBeanMappingFactory::mappingForType($Type* objType, $MXBeanMappingFactory* factory) {
	$synchronized(this) {
		$useLocalCurrentObjectStackCache();
		if ($nc(DefaultMXBeanMappingFactory::inProgress)->containsKey(objType)) {
			$throwNew($OpenDataException, $$str({"Recursive data structure, including "_s, $($MXBeanIntrospector::typeName(objType))}));
		}
		$var($MXBeanMapping, mapping, nullptr);
		$assign(mapping, getMapping(objType));
		if (mapping != nullptr) {
			return mapping;
		}
		$nc(DefaultMXBeanMappingFactory::inProgress)->put(objType, objType);
		{
			$var($Throwable, var$0, nullptr);
			try {
				try {
					$assign(mapping, makeMapping(objType, factory));
				} catch ($OpenDataException& e) {
					$throw($(openDataException($$str({"Cannot convert type: "_s, $($MXBeanIntrospector::typeName(objType))}), e)));
				}
			} catch ($Throwable& var$1) {
				$assign(var$0, var$1);
			} /*finally*/ {
				$nc(DefaultMXBeanMappingFactory::inProgress)->remove(objType);
			}
			if (var$0 != nullptr) {
				$throw(var$0);
			}
		}
		putMapping(objType, mapping);
		return mapping;
	}
}

$MXBeanMapping* DefaultMXBeanMappingFactory::makeMapping($Type* objType, $MXBeanMappingFactory* factory) {
	$useLocalCurrentObjectStackCache();
	if ($instanceOf($GenericArrayType, objType)) {
		$var($Type, componentType, $nc(($cast($GenericArrayType, objType)))->getGenericComponentType());
		return makeArrayOrCollectionMapping(objType, componentType, factory);
	} else if ($instanceOf($Class, objType)) {
		$Class* objClass = $cast($Class, objType);
		if ($nc(objClass)->isEnum()) {
			$load($ElementType);
			return makeEnumMapping(objClass, $ElementType::class$);
		} else if (objClass->isArray()) {
			$var($Type, componentType, objClass->getComponentType());
			return makeArrayOrCollectionMapping(objClass, componentType, factory);
		} else if ($JMX::isMXBeanInterface(objClass)) {
			return makeMXBeanRefMapping(objClass);
		} else {
			return makeCompositeMapping(objClass, factory);
		}
	} else if ($instanceOf($ParameterizedType, objType)) {
		return makeParameterizedTypeMapping($cast($ParameterizedType, objType), factory);
	} else {
		$throwNew($OpenDataException, $$str({"Cannot map type: "_s, objType}));
	}
}

$MXBeanMapping* DefaultMXBeanMappingFactory::makeEnumMapping($Class* enumClass, $Class* fake) {
	$init(DefaultMXBeanMappingFactory);
	$ReflectUtil::checkPackageAccess(enumClass);
	return $new($DefaultMXBeanMappingFactory$EnumMapping, $cast($Class, $($Util::cast(enumClass))));
}

$MXBeanMapping* DefaultMXBeanMappingFactory::makeArrayOrCollectionMapping($Type* collectionType, $Type* elementType, $MXBeanMappingFactory* factory) {
	$useLocalCurrentObjectStackCache();
	$beforeCallerSensitive();
	$var($MXBeanMapping, elementMapping, $nc(factory)->mappingForType(elementType, factory));
	$var($OpenType, elementOpenType, $nc(elementMapping)->getOpenType());
	$var($ArrayType, openType, $ArrayType::getArrayType(elementOpenType));
	$Class* elementOpenClass = elementMapping->getOpenClass();
	$Class* openArrayClass = nullptr;
	$var($String, openArrayClassName, nullptr);
	if ($nc(elementOpenClass)->isArray()) {
		$assign(openArrayClassName, $str({"["_s, $(elementOpenClass->getName())}));
	} else {
		$assign(openArrayClassName, $str({"[L"_s, $(elementOpenClass->getName()), ";"_s}));
	}
	try {
		openArrayClass = $Class::forName(openArrayClassName);
	} catch ($ClassNotFoundException& e) {
		$throw($(openDataException("Cannot obtain array class"_s, e)));
	}
	if ($instanceOf($ParameterizedType, collectionType)) {
		return $new($DefaultMXBeanMappingFactory$CollectionMapping, collectionType, openType, openArrayClass, elementMapping);
	} else if (isIdentity(elementMapping)) {
		return $new($DefaultMXBeanMappingFactory$IdentityMapping, collectionType, openType);
	} else {
		return $new($DefaultMXBeanMappingFactory$ArrayMapping, collectionType, openType, openArrayClass, elementMapping);
	}
}

$MXBeanMapping* DefaultMXBeanMappingFactory::makeTabularMapping($Type* objType, bool sortedMap, $Type* keyType, $Type* valueType, $MXBeanMappingFactory* factory) {
	$useLocalCurrentObjectStackCache();
	$var($String, objTypeName, $MXBeanIntrospector::typeName(objType));
	$var($MXBeanMapping, keyMapping, $nc(factory)->mappingForType(keyType, factory));
	$var($MXBeanMapping, valueMapping, factory->mappingForType(valueType, factory));
	$var($OpenType, keyOpenType, $nc(keyMapping)->getOpenType());
	$var($OpenType, valueOpenType, $nc(valueMapping)->getOpenType());
	$var($CompositeType, rowType, $new($CompositeType, objTypeName, objTypeName, DefaultMXBeanMappingFactory::keyValueArray, DefaultMXBeanMappingFactory::keyValueArray, $$new($OpenTypeArray, {
		keyOpenType,
		valueOpenType
	})));
	$var($TabularType, tabularType, $new($TabularType, objTypeName, objTypeName, rowType, DefaultMXBeanMappingFactory::keyArray));
	return $new($DefaultMXBeanMappingFactory$TabularMapping, objType, sortedMap, tabularType, keyMapping, valueMapping);
}

$MXBeanMapping* DefaultMXBeanMappingFactory::makeParameterizedTypeMapping($ParameterizedType* objType, $MXBeanMappingFactory* factory) {
	$useLocalCurrentObjectStackCache();
	$var($Type, rawType, $nc(objType)->getRawType());
	if ($instanceOf($Class, rawType)) {
		$Class* c = $cast($Class, rawType);
		$load($List);
		$load($Set);
		$load($SortedSet);
		if (c == $List::class$ || c == $Set::class$ || c == $SortedSet::class$) {
			$var($TypeArray, actuals, objType->getActualTypeArguments());
			if (!DefaultMXBeanMappingFactory::$assertionsDisabled && !($nc(actuals)->length == 1)) {
				$throwNew($AssertionError);
			}
			if (c == $SortedSet::class$) {
				mustBeComparable(c, $nc(actuals)->get(0));
			}
			return makeArrayOrCollectionMapping(objType, $nc(actuals)->get(0), factory);
		} else {
			$load($SortedMap);
			bool sortedMap = (c == $SortedMap::class$);
			$load($Map);
			if (c == $Map::class$ || sortedMap) {
				$var($TypeArray, actuals, objType->getActualTypeArguments());
				if (!DefaultMXBeanMappingFactory::$assertionsDisabled && !($nc(actuals)->length == 2)) {
					$throwNew($AssertionError);
				}
				if (sortedMap) {
					mustBeComparable(c, $nc(actuals)->get(0));
				}
				return makeTabularMapping(objType, sortedMap, $nc(actuals)->get(0), actuals->get(1), factory);
			}
		}
	}
	$throwNew($OpenDataException, $$str({"Cannot convert type: "_s, objType}));
}

$MXBeanMapping* DefaultMXBeanMappingFactory::makeMXBeanRefMapping($Type* t) {
	$init(DefaultMXBeanMappingFactory);
	return $new($DefaultMXBeanMappingFactory$MXBeanRefMapping, t);
}

$MXBeanMapping* DefaultMXBeanMappingFactory::makeCompositeMapping($Class* c, $MXBeanMappingFactory* factory) {
	$useLocalCurrentObjectStackCache();
	$beforeCallerSensitive();
	bool var$0 = $nc($($nc(c)->getName()))->equals("com.sun.management.GcInfo"_s);
	bool gcInfoHack = (var$0 && c->getClassLoader() == nullptr);
	$ReflectUtil::checkPackageAccess(c);
	$var($List, methods, $MBeanAnalyzer::eliminateCovariantMethods($($Arrays::asList($(c->getMethods())))));
	$var($SortedMap, getterMap, $Util::newSortedMap());
	{
		$var($Iterator, i$, $nc(methods)->iterator());
		for (; $nc(i$)->hasNext();) {
			$var($Method, method, $cast($Method, i$->next()));
			{
				$var($String, propertyName, DefaultMXBeanMappingFactory::propertyName(method));
				if (propertyName == nullptr) {
					continue;
				}
				if (gcInfoHack && $nc(propertyName)->equals("CompositeType"_s)) {
					continue;
				}
				bool var$1 = c->isRecord();
				$var($String, name, var$1 && $nc($($nc(method)->getName()))->equals(propertyName) ? propertyName : decapitalize(propertyName));
				$var($Method, old, $cast($Method, $nc(getterMap)->put(name, method)));
				if (old != nullptr) {
					$var($String, var$4, $$str({"Class "_s, $(c->getName()), " has method name clash: "_s}));
					$var($String, var$3, $$concat(var$4, $(old->getName())));
					$var($String, var$2, $$concat(var$3, ", "));
					$var($String, msg, $concat(var$2, $($nc(method)->getName())));
					$throwNew($OpenDataException, msg);
				}
			}
		}
	}
	int32_t nitems = $nc(getterMap)->size();
	if (nitems == 0) {
		$throwNew($OpenDataException, $$str({"Can\'t map "_s, $(c->getName()), " to an open data type"_s}));
	}
	$var($MethodArray, getters, $new($MethodArray, nitems));
	$var($StringArray, itemNames, $new($StringArray, nitems));
	$var($OpenTypeArray, openTypes, $new($OpenTypeArray, nitems));
	int32_t i = 0;
	{
		$var($Iterator, i$, $nc($(getterMap->entrySet()))->iterator());
		for (; $nc(i$)->hasNext();) {
			$var($Map$Entry, entry, $cast($Map$Entry, i$->next()));
			{
				itemNames->set(i, $cast($String, $($nc(entry)->getKey())));
				$var($Method, getter, $cast($Method, entry->getValue()));
				getters->set(i, getter);
				$var($Type, retType, $nc(getter)->getGenericReturnType());
				openTypes->set(i, $($nc($($nc(factory)->mappingForType(retType, factory)))->getOpenType()));
				++i;
			}
		}
	}
	$var($String, var$5, c->getName());
	$var($CompositeType, compositeType, $new($CompositeType, var$5, $(c->getName()), itemNames, itemNames, openTypes));
	return $new($DefaultMXBeanMappingFactory$CompositeMapping, this, c, compositeType, itemNames, getters, factory);
}

$InvalidObjectException* DefaultMXBeanMappingFactory::invalidObjectException($String* msg, $Throwable* cause) {
	$init(DefaultMXBeanMappingFactory);
	return $cast($InvalidObjectException, $EnvHelp::initCause($$new($InvalidObjectException, msg), cause));
}

$InvalidObjectException* DefaultMXBeanMappingFactory::invalidObjectException($Throwable* cause) {
	$init(DefaultMXBeanMappingFactory);
	return invalidObjectException($($nc(cause)->getMessage()), cause);
}

$OpenDataException* DefaultMXBeanMappingFactory::openDataException($String* msg, $Throwable* cause) {
	$init(DefaultMXBeanMappingFactory);
	return $cast($OpenDataException, $EnvHelp::initCause($$new($OpenDataException, msg), cause));
}

$OpenDataException* DefaultMXBeanMappingFactory::openDataException($Throwable* cause) {
	$init(DefaultMXBeanMappingFactory);
	return openDataException($($nc(cause)->getMessage()), cause);
}

void DefaultMXBeanMappingFactory::mustBeComparable($Class* collection, $Type* element) {
	$init(DefaultMXBeanMappingFactory);
	$useLocalCurrentObjectStackCache();
	$load($Comparable);
	if (!($instanceOf($Class, element)) || !$Comparable::class$->isAssignableFrom($cast($Class, element))) {
		$var($String, var$2, $$str({"Parameter class "_s, element, " of "_s}));
		$var($String, var$1, $$concat(var$2, $($nc(collection)->getName())));
		$var($String, var$0, $$concat(var$1, " does not implement "));
		$var($String, msg, $concat(var$0, $($Comparable::class$->getName())));
		$throwNew($OpenDataException, msg);
	}
}

$String* DefaultMXBeanMappingFactory::decapitalize($String* name) {
	$init(DefaultMXBeanMappingFactory);
	$useLocalCurrentObjectStackCache();
	if (name == nullptr || $nc(name)->length() == 0) {
		return name;
	}
	int32_t offset1 = $Character::offsetByCodePoints(name, 0, 1);
	bool var$0 = offset1 < $nc(name)->length();
	if (var$0 && $Character::isUpperCase(name->codePointAt(offset1))) {
		return name;
	}
	$var($String, var$1, $($($nc(name)->substring(0, offset1))->toLowerCase()));
	return $concat(var$1, $(name->substring(offset1)));
}

$String* DefaultMXBeanMappingFactory::capitalize($String* name) {
	$init(DefaultMXBeanMappingFactory);
	$useLocalCurrentObjectStackCache();
	if (name == nullptr || $nc(name)->length() == 0) {
		return name;
	}
	int32_t offset1 = $nc(name)->offsetByCodePoints(0, 1);
	$var($String, var$0, $($(name->substring(0, offset1))->toUpperCase()));
	return $concat(var$0, $(name->substring(offset1)));
}

$String* DefaultMXBeanMappingFactory::propertyName($Method* m) {
	$init(DefaultMXBeanMappingFactory);
	$useLocalCurrentObjectStackCache();
	$beforeCallerSensitive();
	$var($String, rest, nullptr);
	$var($String, name, $nc(m)->getName());
	$Class* c = m->getDeclaringClass();
	if ($nc(c)->isRecord()) {
		{
			$var($RecordComponentArray, arr$, c->getRecordComponents());
			int32_t len$ = $nc(arr$)->length;
			int32_t i$ = 0;
			for (; i$ < len$; ++i$) {
				$var($RecordComponent, rc, arr$->get(i$));
				{
					bool var$0 = $nc(name)->equals($($nc(rc)->getName()));
					if (var$0) {
						var$0 = m->getReturnType() == $nc(rc)->getType();
					}
					if (var$0) {
						$assign(rest, name);
						break;
					}
				}
			}
		}
	} else if ($nc(name)->startsWith("get"_s)) {
		$assign(rest, name->substring(3));
	} else {
		bool var$2 = name->startsWith("is"_s);
		$init($Boolean);
		if (var$2 && m->getReturnType() == $Boolean::TYPE) {
			$assign(rest, name->substring(2));
		}
	}
	bool var$5 = rest == nullptr || $nc(rest)->length() == 0;
	bool var$4 = var$5 || $nc($(m->getParameterTypes()))->length > 0;
	$init($Void);
	bool var$3 = var$4 || m->getReturnType() == $Void::TYPE;
	if (var$3 || $nc(name)->equals("getClass"_s)) {
		return nullptr;
	}
	return rest;
}

void clinit$DefaultMXBeanMappingFactory($Class* class$) {
	$useLocalCurrentObjectStackCache();
	$beforeCallerSensitive();
	DefaultMXBeanMappingFactory::$assertionsDisabled = !DefaultMXBeanMappingFactory::class$->desiredAssertionStatus();
	$assignStatic(DefaultMXBeanMappingFactory::mappings, $new($DefaultMXBeanMappingFactory$Mappings));
	$assignStatic(DefaultMXBeanMappingFactory::permanentMappings, $Util::newList());
	{
		$init($SimpleType);
		$var($OpenTypeArray, simpleTypes, $new($OpenTypeArray, {
			static_cast<$OpenType*>($SimpleType::BIGDECIMAL),
			static_cast<$OpenType*>($SimpleType::BIGINTEGER),
			static_cast<$OpenType*>($SimpleType::BOOLEAN),
			static_cast<$OpenType*>($SimpleType::BYTE),
			static_cast<$OpenType*>($SimpleType::CHARACTER),
			static_cast<$OpenType*>($SimpleType::DATE),
			static_cast<$OpenType*>($SimpleType::DOUBLE),
			static_cast<$OpenType*>($SimpleType::FLOAT),
			static_cast<$OpenType*>($SimpleType::INTEGER),
			static_cast<$OpenType*>($SimpleType::LONG),
			static_cast<$OpenType*>($SimpleType::OBJECTNAME),
			static_cast<$OpenType*>($SimpleType::SHORT),
			static_cast<$OpenType*>($SimpleType::STRING),
			static_cast<$OpenType*>($SimpleType::VOID)
		}));
		for (int32_t i = 0; i < simpleTypes->length; ++i) {
			$var($OpenType, t, simpleTypes->get(i));
			$Class* c = nullptr;
			try {
				$var($String, var$0, $nc(t)->getClassName());
				$load($ObjectName);
				c = $Class::forName(var$0, false, $($ObjectName::class$->getClassLoader()));
			} catch ($ClassNotFoundException& e) {
				$throwNew($Error, static_cast<$Throwable*>(e));
			}
			$var($MXBeanMapping, mapping, $new($DefaultMXBeanMappingFactory$IdentityMapping, c, t));
			DefaultMXBeanMappingFactory::putPermanentMapping(c, mapping);
			if ($nc($($nc(c)->getName()))->startsWith("java.lang."_s)) {
				try {
					$var($Field, typeField, c->getField("TYPE"_s));
					$Class* primitiveType = $cast($Class, $nc(typeField)->get(nullptr));
					$var($MXBeanMapping, primitiveMapping, $new($DefaultMXBeanMappingFactory$IdentityMapping, primitiveType, t));
					DefaultMXBeanMappingFactory::putPermanentMapping(primitiveType, primitiveMapping);
					$init($Void);
					if (primitiveType != $Void::TYPE) {
						$Class* primitiveArrayType = $of($($1Array::newInstance(primitiveType, 0)))->getClass();
						$var($OpenType, primitiveArrayOpenType, $ArrayType::getPrimitiveArrayType(primitiveArrayType));
						$var($MXBeanMapping, primitiveArrayMapping, $new($DefaultMXBeanMappingFactory$IdentityMapping, primitiveArrayType, primitiveArrayOpenType));
						DefaultMXBeanMappingFactory::putPermanentMapping(primitiveArrayType, primitiveArrayMapping);
					}
				} catch ($NoSuchFieldException& e) {
				} catch ($IllegalAccessException& e) {
					if (!DefaultMXBeanMappingFactory::$assertionsDisabled) {
						$throwNew($AssertionError);
					}
				}
			}
		}
	}
	$assignStatic(DefaultMXBeanMappingFactory::keyArray, $new($StringArray, {"key"_s}));
	$assignStatic(DefaultMXBeanMappingFactory::keyValueArray, $new($StringArray, {
		"key"_s,
		"value"_s
	}));
	$assignStatic(DefaultMXBeanMappingFactory::inProgress, $Util::newIdentityHashMap());
}

DefaultMXBeanMappingFactory::DefaultMXBeanMappingFactory() {
}

$Class* DefaultMXBeanMappingFactory::load$($String* name, bool initialize) {
	$loadClass(DefaultMXBeanMappingFactory, name, initialize, &_DefaultMXBeanMappingFactory_ClassInfo_, clinit$DefaultMXBeanMappingFactory, allocate$DefaultMXBeanMappingFactory);
	return class$;
}

$Class* DefaultMXBeanMappingFactory::class$ = nullptr;

			} // mbeanserver
		} // jmx
	} // sun
} // com
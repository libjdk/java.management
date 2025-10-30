#include <javax/management/modelmbean/DescriptorSupport.h>

#include <com/sun/jmx/defaults/JmxProperties.h>
#include <com/sun/jmx/mbeanserver/GetPropertyAction.h>
#include <com/sun/jmx/mbeanserver/Util.h>
#include <java/io/ObjectInputStream$GetField.h>
#include <java/io/ObjectInputStream.h>
#include <java/io/ObjectOutputStream$PutField.h>
#include <java/io/ObjectOutputStream.h>
#include <java/io/ObjectStreamField.h>
#include <java/lang/ClassLoader.h>
#include <java/lang/NoSuchMethodException.h>
#include <java/lang/Number.h>
#include <java/lang/SecurityException.h>
#include <java/lang/System$Logger$Level.h>
#include <java/lang/System$Logger.h>
#include <java/lang/reflect/Constructor.h>
#include <java/security/AccessController.h>
#include <java/security/PrivilegedAction.h>
#include <java/util/AbstractMap.h>
#include <java/util/Collection.h>
#include <java/util/Comparator.h>
#include <java/util/HashMap.h>
#include <java/util/Iterator.h>
#include <java/util/Locale.h>
#include <java/util/Map$Entry.h>
#include <java/util/Map.h>
#include <java/util/NavigableMap.h>
#include <java/util/Set.h>
#include <java/util/SortedMap.h>
#include <java/util/StringTokenizer.h>
#include <java/util/TreeMap.h>
#include <javax/management/Descriptor.h>
#include <javax/management/ImmutableDescriptor.h>
#include <javax/management/RuntimeOperationsException.h>
#include <javax/management/modelmbean/XMLParseException.h>
#include <sun/reflect/misc/ReflectUtil.h>
#include <jcpp.h>

#undef CASE_INSENSITIVE_ORDER
#undef ENGLISH
#undef MODELMBEAN_LOGGER
#undef TRACE

using $ObjectStreamFieldArray = $Array<::java::io::ObjectStreamField>;
using $JmxProperties = ::com::sun::jmx::defaults::JmxProperties;
using $GetPropertyAction = ::com::sun::jmx::mbeanserver::GetPropertyAction;
using $Util = ::com::sun::jmx::mbeanserver::Util;
using $ObjectInputStream = ::java::io::ObjectInputStream;
using $ObjectInputStream$GetField = ::java::io::ObjectInputStream$GetField;
using $ObjectOutputStream = ::java::io::ObjectOutputStream;
using $ObjectOutputStream$PutField = ::java::io::ObjectOutputStream$PutField;
using $ObjectStreamField = ::java::io::ObjectStreamField;
using $Boolean = ::java::lang::Boolean;
using $Character = ::java::lang::Character;
using $ClassInfo = ::java::lang::ClassInfo;
using $ClassLoader = ::java::lang::ClassLoader;
using $Exception = ::java::lang::Exception;
using $FieldInfo = ::java::lang::FieldInfo;
using $IllegalArgumentException = ::java::lang::IllegalArgumentException;
using $Integer = ::java::lang::Integer;
using $Long = ::java::lang::Long;
using $MethodInfo = ::java::lang::MethodInfo;
using $NoSuchMethodException = ::java::lang::NoSuchMethodException;
using $Number = ::java::lang::Number;
using $RuntimeException = ::java::lang::RuntimeException;
using $SecurityException = ::java::lang::SecurityException;
using $System$Logger = ::java::lang::System$Logger;
using $System$Logger$Level = ::java::lang::System$Logger$Level;
using $Constructor = ::java::lang::reflect::Constructor;
using $AccessController = ::java::security::AccessController;
using $PrivilegedAction = ::java::security::PrivilegedAction;
using $AbstractMap = ::java::util::AbstractMap;
using $Collection = ::java::util::Collection;
using $Comparator = ::java::util::Comparator;
using $HashMap = ::java::util::HashMap;
using $Iterator = ::java::util::Iterator;
using $Locale = ::java::util::Locale;
using $Map = ::java::util::Map;
using $Map$Entry = ::java::util::Map$Entry;
using $NavigableMap = ::java::util::NavigableMap;
using $Set = ::java::util::Set;
using $SortedMap = ::java::util::SortedMap;
using $StringTokenizer = ::java::util::StringTokenizer;
using $TreeMap = ::java::util::TreeMap;
using $Descriptor = ::javax::management::Descriptor;
using $ImmutableDescriptor = ::javax::management::ImmutableDescriptor;
using $RuntimeOperationsException = ::javax::management::RuntimeOperationsException;
using $XMLParseException = ::javax::management::modelmbean::XMLParseException;
using $ReflectUtil = ::sun::reflect::misc::ReflectUtil;

namespace javax {
	namespace management {
		namespace modelmbean {

$FieldInfo _DescriptorSupport_FieldInfo_[] = {
	{"oldSerialVersionUID", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(DescriptorSupport, oldSerialVersionUID)},
	{"newSerialVersionUID", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(DescriptorSupport, newSerialVersionUID)},
	{"oldSerialPersistentFields", "[Ljava/io/ObjectStreamField;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(DescriptorSupport, oldSerialPersistentFields)},
	{"newSerialPersistentFields", "[Ljava/io/ObjectStreamField;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(DescriptorSupport, newSerialPersistentFields)},
	{"serialVersionUID", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(DescriptorSupport, serialVersionUID)},
	{"serialPersistentFields", "[Ljava/io/ObjectStreamField;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(DescriptorSupport, serialPersistentFields)},
	{"serialForm", "Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(DescriptorSupport, serialForm)},
	{"descriptorMap", "Ljava/util/SortedMap;", "Ljava/util/SortedMap<Ljava/lang/String;Ljava/lang/Object;>;", $PRIVATE | $TRANSIENT, $field(DescriptorSupport, descriptorMap)},
	{"currClass", "Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(DescriptorSupport, currClass)},
	{"entities", "[Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(DescriptorSupport, entities)},
	{"entityToCharMap", "Ljava/util/Map;", "Ljava/util/Map<Ljava/lang/String;Ljava/lang/Character;>;", $PRIVATE | $STATIC | $FINAL, $staticField(DescriptorSupport, entityToCharMap)},
	{"charToEntityMap", "[Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(DescriptorSupport, charToEntityMap)},
	{}
};

$MethodInfo _DescriptorSupport_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(DescriptorSupport::*)()>(&DescriptorSupport::init$))},
	{"<init>", "(I)V", nullptr, $PUBLIC, $method(static_cast<void(DescriptorSupport::*)(int32_t)>(&DescriptorSupport::init$)), "javax.management.MBeanException,javax.management.RuntimeOperationsException"},
	{"<init>", "(Ljavax/management/modelmbean/DescriptorSupport;)V", nullptr, $PUBLIC, $method(static_cast<void(DescriptorSupport::*)(DescriptorSupport*)>(&DescriptorSupport::init$))},
	{"<init>", "(Ljava/lang/String;)V", nullptr, $PUBLIC, $method(static_cast<void(DescriptorSupport::*)($String*)>(&DescriptorSupport::init$)), "javax.management.MBeanException,javax.management.RuntimeOperationsException,javax.management.modelmbean.XMLParseException"},
	{"<init>", "([Ljava/lang/String;[Ljava/lang/Object;)V", nullptr, $PUBLIC, $method(static_cast<void(DescriptorSupport::*)($StringArray*,$ObjectArray*)>(&DescriptorSupport::init$)), "javax.management.RuntimeOperationsException"},
	{"<init>", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $TRANSIENT, $method(static_cast<void(DescriptorSupport::*)($StringArray*)>(&DescriptorSupport::init$))},
	{"clone", "()Ljava/lang/Object;", nullptr, $PUBLIC | $SYNCHRONIZED, nullptr, "javax.management.RuntimeOperationsException"},
	{"equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC | $SYNCHRONIZED},
	{"getFieldNames", "()[Ljava/lang/String;", nullptr, $PUBLIC | $SYNCHRONIZED},
	{"getFieldValue", "(Ljava/lang/String;)Ljava/lang/Object;", nullptr, $PUBLIC | $SYNCHRONIZED, nullptr, "javax.management.RuntimeOperationsException"},
	{"getFieldValues", "([Ljava/lang/String;)[Ljava/lang/Object;", nullptr, $PUBLIC | $SYNCHRONIZED | $TRANSIENT},
	{"getFields", "()[Ljava/lang/String;", nullptr, $PUBLIC | $SYNCHRONIZED},
	{"hashCode", "()I", nullptr, $PUBLIC | $SYNCHRONIZED},
	{"init", "(Ljava/util/Map;)V", "(Ljava/util/Map<Ljava/lang/String;*>;)V", $PRIVATE, $method(static_cast<void(DescriptorSupport::*)($Map*)>(&DescriptorSupport::init))},
	{"isMagic", "(C)Z", nullptr, $PRIVATE | $STATIC, $method(static_cast<bool(*)(char16_t)>(&DescriptorSupport::isMagic))},
	{"isValid", "()Z", nullptr, $PUBLIC | $SYNCHRONIZED, nullptr, "javax.management.RuntimeOperationsException"},
	{"makeFieldValue", "(Ljava/lang/Object;)Ljava/lang/String;", nullptr, $PRIVATE | $STATIC, $method(static_cast<$String*(*)(Object$*)>(&DescriptorSupport::makeFieldValue))},
	{"parseQuotedFieldValue", "(Ljava/lang/String;)Ljava/lang/Object;", nullptr, $PRIVATE | $STATIC, $method(static_cast<$Object*(*)($String*)>(&DescriptorSupport::parseQuotedFieldValue)), "javax.management.modelmbean.XMLParseException"},
	{"quote", "(Ljava/lang/String;)Ljava/lang/String;", nullptr, $PRIVATE | $STATIC, $method(static_cast<$String*(*)($String*)>(&DescriptorSupport::quote))},
	{"readObject", "(Ljava/io/ObjectInputStream;)V", nullptr, $PRIVATE, $method(static_cast<void(DescriptorSupport::*)($ObjectInputStream*)>(&DescriptorSupport::readObject)), "java.io.IOException,java.lang.ClassNotFoundException"},
	{"removeField", "(Ljava/lang/String;)V", nullptr, $PUBLIC | $SYNCHRONIZED},
	{"setField", "(Ljava/lang/String;Ljava/lang/Object;)V", nullptr, $PUBLIC | $SYNCHRONIZED, nullptr, "javax.management.RuntimeOperationsException"},
	{"setFields", "([Ljava/lang/String;[Ljava/lang/Object;)V", nullptr, $PUBLIC | $SYNCHRONIZED, nullptr, "javax.management.RuntimeOperationsException"},
	{"toNumeric", "(Ljava/lang/String;)J", nullptr, $PRIVATE, $method(static_cast<int64_t(DescriptorSupport::*)($String*)>(&DescriptorSupport::toNumeric))},
	{"toString", "()Ljava/lang/String;", nullptr, $PUBLIC | $SYNCHRONIZED},
	{"toXMLString", "()Ljava/lang/String;", nullptr, $PUBLIC | $SYNCHRONIZED},
	{"unquote", "(Ljava/lang/String;)Ljava/lang/String;", nullptr, $PRIVATE | $STATIC, $method(static_cast<$String*(*)($String*)>(&DescriptorSupport::unquote)), "javax.management.modelmbean.XMLParseException"},
	{"validateField", "(Ljava/lang/String;Ljava/lang/Object;)Z", nullptr, $PRIVATE, $method(static_cast<bool(DescriptorSupport::*)($String*,Object$*)>(&DescriptorSupport::validateField))},
	{"writeObject", "(Ljava/io/ObjectOutputStream;)V", nullptr, $PRIVATE, $method(static_cast<void(DescriptorSupport::*)($ObjectOutputStream*)>(&DescriptorSupport::writeObject)), "java.io.IOException"},
	{}
};

$ClassInfo _DescriptorSupport_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"javax.management.modelmbean.DescriptorSupport",
	"java.lang.Object",
	"javax.management.Descriptor",
	_DescriptorSupport_FieldInfo_,
	_DescriptorSupport_MethodInfo_
};

$Object* allocate$DescriptorSupport($Class* clazz) {
	return $of($alloc(DescriptorSupport));
}

$ObjectStreamFieldArray* DescriptorSupport::oldSerialPersistentFields = nullptr;
$ObjectStreamFieldArray* DescriptorSupport::newSerialPersistentFields = nullptr;
int64_t DescriptorSupport::serialVersionUID = 0;
$ObjectStreamFieldArray* DescriptorSupport::serialPersistentFields = nullptr;
$String* DescriptorSupport::serialForm = nullptr;
$String* DescriptorSupport::currClass = nullptr;
$StringArray* DescriptorSupport::entities = nullptr;
$Map* DescriptorSupport::entityToCharMap = nullptr;
$StringArray* DescriptorSupport::charToEntityMap = nullptr;

void DescriptorSupport::init$() {
	$init($JmxProperties);
	$init($System$Logger$Level);
	if ($nc($JmxProperties::MODELMBEAN_LOGGER)->isLoggable($System$Logger$Level::TRACE)) {
		$nc($JmxProperties::MODELMBEAN_LOGGER)->log($System$Logger$Level::TRACE, "Constructor"_s);
	}
	init(nullptr);
}

void DescriptorSupport::init$(int32_t initNumFields) {
	$useLocalCurrentObjectStackCache();
	$init($JmxProperties);
	$init($System$Logger$Level);
	if ($nc($JmxProperties::MODELMBEAN_LOGGER)->isLoggable($System$Logger$Level::TRACE)) {
		$nc($JmxProperties::MODELMBEAN_LOGGER)->log($System$Logger$Level::TRACE, $$str({"Descriptor(initNumFields = "_s, $$str(initNumFields), ") Constructor"_s}));
	}
	if (initNumFields <= 0) {
		if ($nc($JmxProperties::MODELMBEAN_LOGGER)->isLoggable($System$Logger$Level::TRACE)) {
			$nc($JmxProperties::MODELMBEAN_LOGGER)->log($System$Logger$Level::TRACE, "Illegal arguments: initNumFields <= 0"_s);
		}
		$var($String, msg, $str({"Descriptor field limit invalid: "_s, $$str(initNumFields)}));
		$var($RuntimeException, iae, $new($IllegalArgumentException, msg));
		$throwNew($RuntimeOperationsException, iae, msg);
	}
	init(nullptr);
}

void DescriptorSupport::init$(DescriptorSupport* inDescr) {
	$init($JmxProperties);
	$init($System$Logger$Level);
	if ($nc($JmxProperties::MODELMBEAN_LOGGER)->isLoggable($System$Logger$Level::TRACE)) {
		$nc($JmxProperties::MODELMBEAN_LOGGER)->log($System$Logger$Level::TRACE, "Descriptor(Descriptor) Constructor"_s);
	}
	if (inDescr == nullptr) {
		init(nullptr);
	} else {
		init($nc(inDescr)->descriptorMap);
	}
}

void DescriptorSupport::init$($String* inStr) {
	$useLocalCurrentObjectStackCache();
	$init($JmxProperties);
	$init($System$Logger$Level);
	if ($nc($JmxProperties::MODELMBEAN_LOGGER)->isLoggable($System$Logger$Level::TRACE)) {
		$nc($JmxProperties::MODELMBEAN_LOGGER)->log($System$Logger$Level::TRACE, $$str({"Descriptor(String = \'"_s, inStr, "\') Constructor"_s}));
	}
	if (inStr == nullptr) {
		if ($nc($JmxProperties::MODELMBEAN_LOGGER)->isLoggable($System$Logger$Level::TRACE)) {
			$nc($JmxProperties::MODELMBEAN_LOGGER)->log($System$Logger$Level::TRACE, "Descriptor(String = null) Illegal arguments"_s);
		}
		$var($String, msg, "String in parameter is null"_s);
		$var($RuntimeException, iae, $new($IllegalArgumentException, msg));
		$throwNew($RuntimeOperationsException, iae, msg);
	}
	$init($Locale);
	$var($String, lowerInStr, $nc(inStr)->toLowerCase($Locale::ENGLISH));
	bool var$0 = !lowerInStr->startsWith("<descriptor>"_s);
	if (var$0 || !lowerInStr->endsWith("</descriptor>"_s)) {
		$throwNew($XMLParseException, "No <descriptor>, </descriptor> pair"_s);
	}
	init(nullptr);
	$var($StringTokenizer, st, $new($StringTokenizer, inStr, "<> \t\n\r\f"_s));
	bool inFld = false;
	bool inDesc = false;
	$var($String, fieldName, nullptr);
	$var($String, fieldValue, nullptr);
	while (st->hasMoreTokens()) {
		$var($String, tok, st->nextToken());
		if ($nc(tok)->equalsIgnoreCase("FIELD"_s)) {
			inFld = true;
		} else if (tok->equalsIgnoreCase("/FIELD"_s)) {
			if ((fieldName != nullptr) && (fieldValue != nullptr)) {
				int32_t var$1 = fieldName->indexOf((int32_t)u'\"') + 1;
				$assign(fieldName, fieldName->substring(var$1, fieldName->lastIndexOf((int32_t)u'\"')));
				$var($Object, fieldValueObject, parseQuotedFieldValue(fieldValue));
				setField(fieldName, fieldValueObject);
			}
			$assign(fieldName, nullptr);
			$assign(fieldValue, nullptr);
			inFld = false;
		} else if (tok->equalsIgnoreCase("DESCRIPTOR"_s)) {
			inDesc = true;
		} else if (tok->equalsIgnoreCase("/DESCRIPTOR"_s)) {
			inDesc = false;
			$assign(fieldName, nullptr);
			$assign(fieldValue, nullptr);
			inFld = false;
		} else if (inFld && inDesc) {
			int32_t eq_separator = tok->indexOf((int32_t)u'=');
			if (eq_separator > 0) {
				$var($String, kwPart, tok->substring(0, eq_separator));
				$var($String, valPart, tok->substring(eq_separator + 1));
				if (kwPart->equalsIgnoreCase("NAME"_s)) {
					$assign(fieldName, valPart);
				} else if (kwPart->equalsIgnoreCase("VALUE"_s)) {
					$assign(fieldValue, valPart);
				} else {
					$var($String, msg, $str({"Expected `name\' or `value\', got `"_s, tok, "\'"_s}));
					$throwNew($XMLParseException, msg);
				}
			} else {
				$var($String, msg, $str({"Expected `keyword=value\', got `"_s, tok, "\'"_s}));
				$throwNew($XMLParseException, msg);
			}
		}
	}
	if ($nc($JmxProperties::MODELMBEAN_LOGGER)->isLoggable($System$Logger$Level::TRACE)) {
		$nc($JmxProperties::MODELMBEAN_LOGGER)->log($System$Logger$Level::TRACE, "Descriptor(XMLString) Exit"_s);
	}
}

void DescriptorSupport::init$($StringArray* fieldNames, $ObjectArray* fieldValues) {
	$useLocalCurrentObjectStackCache();
	$init($JmxProperties);
	$init($System$Logger$Level);
	if ($nc($JmxProperties::MODELMBEAN_LOGGER)->isLoggable($System$Logger$Level::TRACE)) {
		$nc($JmxProperties::MODELMBEAN_LOGGER)->log($System$Logger$Level::TRACE, "Descriptor(fieldNames,fieldObjects) Constructor"_s);
	}
	if ((fieldNames == nullptr) || (fieldValues == nullptr) || ($nc(fieldNames)->length != $nc(fieldValues)->length)) {
		if ($nc($JmxProperties::MODELMBEAN_LOGGER)->isLoggable($System$Logger$Level::TRACE)) {
			$nc($JmxProperties::MODELMBEAN_LOGGER)->log($System$Logger$Level::TRACE, "Descriptor(fieldNames,fieldObjects) Illegal arguments"_s);
		}
		$var($String, msg, "Null or invalid fieldNames or fieldValues"_s);
		$var($RuntimeException, iae, $new($IllegalArgumentException, msg));
		$throwNew($RuntimeOperationsException, iae, msg);
	}
	init(nullptr);
	for (int32_t i = 0; i < $nc(fieldNames)->length; ++i) {
		setField(fieldNames->get(i), $nc(fieldValues)->get(i));
	}
	if ($nc($JmxProperties::MODELMBEAN_LOGGER)->isLoggable($System$Logger$Level::TRACE)) {
		$nc($JmxProperties::MODELMBEAN_LOGGER)->log($System$Logger$Level::TRACE, "Descriptor(fieldNames,fieldObjects) Exit"_s);
	}
}

void DescriptorSupport::init$($StringArray* fields) {
	$useLocalCurrentObjectStackCache();
	$init($JmxProperties);
	$init($System$Logger$Level);
	if ($nc($JmxProperties::MODELMBEAN_LOGGER)->isLoggable($System$Logger$Level::TRACE)) {
		$nc($JmxProperties::MODELMBEAN_LOGGER)->log($System$Logger$Level::TRACE, "Descriptor(String... fields) Constructor"_s);
	}
	init(nullptr);
	if ((fields == nullptr) || ($nc(fields)->length == 0)) {
		return;
	}
	init(nullptr);
	for (int32_t i = 0; i < $nc(fields)->length; ++i) {
		if ((fields->get(i) == nullptr) || ($nc(fields->get(i))->isEmpty())) {
			continue;
		}
		int32_t eq_separator = $nc(fields->get(i))->indexOf((int32_t)u'=');
		if (eq_separator < 0) {
			if ($nc($JmxProperties::MODELMBEAN_LOGGER)->isLoggable($System$Logger$Level::TRACE)) {
				$nc($JmxProperties::MODELMBEAN_LOGGER)->log($System$Logger$Level::TRACE, "Descriptor(String... fields) Illegal arguments: field does not have \'=\' as a name and value separator"_s);
			}
			$var($String, msg, "Field in invalid format: no equals sign"_s);
			$var($RuntimeException, iae, $new($IllegalArgumentException, msg));
			$throwNew($RuntimeOperationsException, iae, msg);
		}
		$var($String, fieldName, $nc(fields->get(i))->substring(0, eq_separator));
		$var($String, fieldValue, nullptr);
		if (eq_separator < $nc(fields->get(i))->length()) {
			$assign(fieldValue, $nc(fields->get(i))->substring(eq_separator + 1));
		}
		if (fieldName->isEmpty()) {
			if ($nc($JmxProperties::MODELMBEAN_LOGGER)->isLoggable($System$Logger$Level::TRACE)) {
				$nc($JmxProperties::MODELMBEAN_LOGGER)->log($System$Logger$Level::TRACE, "Descriptor(String... fields) Illegal arguments: fieldName is empty"_s);
			}
			$var($String, msg, "Field in invalid format: no fieldName"_s);
			$var($RuntimeException, iae, $new($IllegalArgumentException, msg));
			$throwNew($RuntimeOperationsException, iae, msg);
		}
		setField(fieldName, fieldValue);
	}
	if ($nc($JmxProperties::MODELMBEAN_LOGGER)->isLoggable($System$Logger$Level::TRACE)) {
		$nc($JmxProperties::MODELMBEAN_LOGGER)->log($System$Logger$Level::TRACE, "Descriptor(String... fields) Exit"_s);
	}
}

void DescriptorSupport::init($Map* initMap) {
	$set(this, descriptorMap, $new($TreeMap, $String::CASE_INSENSITIVE_ORDER));
	if (initMap != nullptr) {
		$nc(this->descriptorMap)->putAll(initMap);
	}
}

$Object* DescriptorSupport::getFieldValue($String* fieldName) {
	$synchronized(this) {
		$useLocalCurrentObjectStackCache();
		if ((fieldName == nullptr) || ($nc(fieldName)->isEmpty())) {
			$init($JmxProperties);
			$init($System$Logger$Level);
			if ($nc($JmxProperties::MODELMBEAN_LOGGER)->isLoggable($System$Logger$Level::TRACE)) {
				$nc($JmxProperties::MODELMBEAN_LOGGER)->log($System$Logger$Level::TRACE, "Illegal arguments: null field name"_s);
			}
			$var($String, msg, "Fieldname requested is null"_s);
			$var($RuntimeException, iae, $new($IllegalArgumentException, msg));
			$throwNew($RuntimeOperationsException, iae, msg);
		}
		$var($Object, retValue, $nc(this->descriptorMap)->get(fieldName));
		$init($JmxProperties);
		$init($System$Logger$Level);
		if ($nc($JmxProperties::MODELMBEAN_LOGGER)->isLoggable($System$Logger$Level::TRACE)) {
			$nc($JmxProperties::MODELMBEAN_LOGGER)->log($System$Logger$Level::TRACE, $$str({"getFieldValue(String fieldName = "_s, fieldName, ") Returns \'"_s, retValue, "\'"_s}));
		}
		return $of((retValue));
	}
}

void DescriptorSupport::setField($String* fieldName, Object$* fieldValue) {
	$synchronized(this) {
		$useLocalCurrentObjectStackCache();
		if ((fieldName == nullptr) || ($nc(fieldName)->isEmpty())) {
			$init($JmxProperties);
			$init($System$Logger$Level);
			if ($nc($JmxProperties::MODELMBEAN_LOGGER)->isLoggable($System$Logger$Level::TRACE)) {
				$nc($JmxProperties::MODELMBEAN_LOGGER)->log($System$Logger$Level::TRACE, "Illegal arguments: null or empty field name"_s);
			}
			$var($String, msg, "Field name to be set is null or empty"_s);
			$var($RuntimeException, iae, $new($IllegalArgumentException, msg));
			$throwNew($RuntimeOperationsException, iae, msg);
		}
		if (!validateField(fieldName, fieldValue)) {
			$init($JmxProperties);
			$init($System$Logger$Level);
			if ($nc($JmxProperties::MODELMBEAN_LOGGER)->isLoggable($System$Logger$Level::TRACE)) {
				$nc($JmxProperties::MODELMBEAN_LOGGER)->log($System$Logger$Level::TRACE, "Illegal arguments"_s);
			}
			$var($String, msg, $str({"Field value invalid: "_s, fieldName, "="_s, fieldValue}));
			$var($RuntimeException, iae, $new($IllegalArgumentException, msg));
			$throwNew($RuntimeOperationsException, iae, msg);
		}
		$init($JmxProperties);
		$init($System$Logger$Level);
		if ($nc($JmxProperties::MODELMBEAN_LOGGER)->isLoggable($System$Logger$Level::TRACE)) {
			$nc($JmxProperties::MODELMBEAN_LOGGER)->log($System$Logger$Level::TRACE, $$str({"Entry: setting \'"_s, fieldName, "\' to \'"_s, fieldValue, "\'"_s}));
		}
		$nc(this->descriptorMap)->put(fieldName, fieldValue);
	}
}

$StringArray* DescriptorSupport::getFields() {
	$synchronized(this) {
		$useLocalCurrentObjectStackCache();
		$init($JmxProperties);
		$init($System$Logger$Level);
		if ($nc($JmxProperties::MODELMBEAN_LOGGER)->isLoggable($System$Logger$Level::TRACE)) {
			$nc($JmxProperties::MODELMBEAN_LOGGER)->log($System$Logger$Level::TRACE, "Entry"_s);
		}
		int32_t numberOfEntries = $nc(this->descriptorMap)->size();
		$var($StringArray, responseFields, $new($StringArray, numberOfEntries));
		$var($Set, returnedSet, $nc(this->descriptorMap)->entrySet());
		int32_t i = 0;
		if ($nc($JmxProperties::MODELMBEAN_LOGGER)->isLoggable($System$Logger$Level::TRACE)) {
			$nc($JmxProperties::MODELMBEAN_LOGGER)->log($System$Logger$Level::TRACE, $$str({"Returning "_s, $$str(numberOfEntries), " fields"_s}));
		}
		{
			$var($Iterator, iter, $nc(returnedSet)->iterator());
			for (; $nc(iter)->hasNext(); ++i) {
				$var($Map$Entry, currElement, $cast($Map$Entry, iter->next()));
				if (currElement == nullptr) {
					if ($nc($JmxProperties::MODELMBEAN_LOGGER)->isLoggable($System$Logger$Level::TRACE)) {
						$nc($JmxProperties::MODELMBEAN_LOGGER)->log($System$Logger$Level::TRACE, "Element is null"_s);
					}
				} else {
					$var($Object, currValue, $nc(currElement)->getValue());
					if (currValue == nullptr) {
						responseFields->set(i, $$str({$cast($String, $(currElement->getKey())), "="_s}));
					} else if ($instanceOf($String, currValue)) {
						$var($String, var$0, $$str({$cast($String, $(currElement->getKey())), "="_s}));
						responseFields->set(i, $$concat(var$0, $($nc($of(currValue))->toString())));
					} else {
						$var($String, var$2, $$str({$cast($String, $(currElement->getKey())), "=("_s}));
						$var($String, var$1, $$concat(var$2, $($nc($of(currValue))->toString())));
						responseFields->set(i, $$concat(var$1, ")"));
					}
				}
			}
		}
		if ($nc($JmxProperties::MODELMBEAN_LOGGER)->isLoggable($System$Logger$Level::TRACE)) {
			$nc($JmxProperties::MODELMBEAN_LOGGER)->log($System$Logger$Level::TRACE, "Exit"_s);
		}
		return responseFields;
	}
}

$StringArray* DescriptorSupport::getFieldNames() {
	$synchronized(this) {
		$useLocalCurrentObjectStackCache();
		$init($JmxProperties);
		$init($System$Logger$Level);
		if ($nc($JmxProperties::MODELMBEAN_LOGGER)->isLoggable($System$Logger$Level::TRACE)) {
			$nc($JmxProperties::MODELMBEAN_LOGGER)->log($System$Logger$Level::TRACE, "Entry"_s);
		}
		int32_t numberOfEntries = $nc(this->descriptorMap)->size();
		$var($StringArray, responseFields, $new($StringArray, numberOfEntries));
		$var($Set, returnedSet, $nc(this->descriptorMap)->entrySet());
		int32_t i = 0;
		if ($nc($JmxProperties::MODELMBEAN_LOGGER)->isLoggable($System$Logger$Level::TRACE)) {
			$nc($JmxProperties::MODELMBEAN_LOGGER)->log($System$Logger$Level::TRACE, $$str({"Returning "_s, $$str(numberOfEntries), " fields"_s}));
		}
		{
			$var($Iterator, iter, $nc(returnedSet)->iterator());
			for (; $nc(iter)->hasNext(); ++i) {
				$var($Map$Entry, currElement, $cast($Map$Entry, iter->next()));
				if ((currElement == nullptr) || ($nc(currElement)->getKey() == nullptr)) {
					if ($nc($JmxProperties::MODELMBEAN_LOGGER)->isLoggable($System$Logger$Level::TRACE)) {
						$nc($JmxProperties::MODELMBEAN_LOGGER)->log($System$Logger$Level::TRACE, "Field is null"_s);
					}
				} else {
					responseFields->set(i, $($nc(($cast($String, $(currElement->getKey()))))->toString()));
				}
			}
		}
		if ($nc($JmxProperties::MODELMBEAN_LOGGER)->isLoggable($System$Logger$Level::TRACE)) {
			$nc($JmxProperties::MODELMBEAN_LOGGER)->log($System$Logger$Level::TRACE, "Exit"_s);
		}
		return responseFields;
	}
}

$ObjectArray* DescriptorSupport::getFieldValues($StringArray* fieldNames) {
	$synchronized(this) {
		$useLocalCurrentObjectStackCache();
		$init($JmxProperties);
		$init($System$Logger$Level);
		if ($nc($JmxProperties::MODELMBEAN_LOGGER)->isLoggable($System$Logger$Level::TRACE)) {
			$nc($JmxProperties::MODELMBEAN_LOGGER)->log($System$Logger$Level::TRACE, "Entry"_s);
		}
		int32_t numberOfEntries = (fieldNames == nullptr) ? $nc(this->descriptorMap)->size() : $nc(fieldNames)->length;
		$var($ObjectArray, responseFields, $new($ObjectArray, numberOfEntries));
		int32_t i = 0;
		if ($nc($JmxProperties::MODELMBEAN_LOGGER)->isLoggable($System$Logger$Level::TRACE)) {
			$nc($JmxProperties::MODELMBEAN_LOGGER)->log($System$Logger$Level::TRACE, $$str({"Returning "_s, $$str(numberOfEntries), " fields"_s}));
		}
		if (fieldNames == nullptr) {
			{
				$var($Iterator, i$, $nc($($nc(this->descriptorMap)->values()))->iterator());
				for (; $nc(i$)->hasNext();) {
					$var($Object, value, i$->next());
					responseFields->set(i++, value);
				}
			}
		} else {
			for (i = 0; i < fieldNames->length; ++i) {
				if ((fieldNames->get(i) == nullptr) || ($nc(fieldNames->get(i))->isEmpty())) {
					responseFields->set(i, nullptr);
				} else {
					responseFields->set(i, $(getFieldValue(fieldNames->get(i))));
				}
			}
		}
		if ($nc($JmxProperties::MODELMBEAN_LOGGER)->isLoggable($System$Logger$Level::TRACE)) {
			$nc($JmxProperties::MODELMBEAN_LOGGER)->log($System$Logger$Level::TRACE, "Exit"_s);
		}
		return responseFields;
	}
}

void DescriptorSupport::setFields($StringArray* fieldNames, $ObjectArray* fieldValues) {
	$synchronized(this) {
		$useLocalCurrentObjectStackCache();
		$init($JmxProperties);
		$init($System$Logger$Level);
		if ($nc($JmxProperties::MODELMBEAN_LOGGER)->isLoggable($System$Logger$Level::TRACE)) {
			$nc($JmxProperties::MODELMBEAN_LOGGER)->log($System$Logger$Level::TRACE, "Entry"_s);
		}
		if ((fieldNames == nullptr) || (fieldValues == nullptr) || ($nc(fieldNames)->length != $nc(fieldValues)->length)) {
			if ($nc($JmxProperties::MODELMBEAN_LOGGER)->isLoggable($System$Logger$Level::TRACE)) {
				$nc($JmxProperties::MODELMBEAN_LOGGER)->log($System$Logger$Level::TRACE, "Illegal arguments"_s);
			}
			$var($String, msg, "fieldNames and fieldValues are null or invalid"_s);
			$var($RuntimeException, iae, $new($IllegalArgumentException, msg));
			$throwNew($RuntimeOperationsException, iae, msg);
		}
		for (int32_t i = 0; i < $nc(fieldNames)->length; ++i) {
			if ((fieldNames->get(i) == nullptr) || ($nc(fieldNames->get(i))->isEmpty())) {
				if ($nc($JmxProperties::MODELMBEAN_LOGGER)->isLoggable($System$Logger$Level::TRACE)) {
					$nc($JmxProperties::MODELMBEAN_LOGGER)->log($System$Logger$Level::TRACE, $$str({"Null field name encountered at element "_s, $$str(i)}));
				}
				$var($String, msg, "fieldNames is null or invalid"_s);
				$var($RuntimeException, iae, $new($IllegalArgumentException, msg));
				$throwNew($RuntimeOperationsException, iae, msg);
			}
			setField(fieldNames->get(i), $nc(fieldValues)->get(i));
		}
		if ($nc($JmxProperties::MODELMBEAN_LOGGER)->isLoggable($System$Logger$Level::TRACE)) {
			$nc($JmxProperties::MODELMBEAN_LOGGER)->log($System$Logger$Level::TRACE, "Exit"_s);
		}
	}
}

$Object* DescriptorSupport::clone() {
	$synchronized(this) {
		$init($JmxProperties);
		$init($System$Logger$Level);
		if ($nc($JmxProperties::MODELMBEAN_LOGGER)->isLoggable($System$Logger$Level::TRACE)) {
			$nc($JmxProperties::MODELMBEAN_LOGGER)->log($System$Logger$Level::TRACE, "Entry"_s);
		}
		return $of(($new(DescriptorSupport, this)));
	}
}

void DescriptorSupport::removeField($String* fieldName) {
	$synchronized(this) {
		if ((fieldName == nullptr) || ($nc(fieldName)->isEmpty())) {
			return;
		}
		$nc(this->descriptorMap)->remove(fieldName);
	}
}

bool DescriptorSupport::equals(Object$* o) {
	$synchronized(this) {
		if ($equals(o, this)) {
			return true;
		}
		if (!($instanceOf($Descriptor, o))) {
			return false;
		}
		if ($instanceOf($ImmutableDescriptor, o)) {
			return $nc($of(o))->equals(this);
		}
		return $$new($ImmutableDescriptor, static_cast<$Map*>(this->descriptorMap))->equals(o);
	}
}

int32_t DescriptorSupport::hashCode() {
	$synchronized(this) {
		$useLocalCurrentObjectStackCache();
		int32_t size = $nc(this->descriptorMap)->size();
		$var($StringArray, var$0, $fcast($StringArray, $nc($($nc(this->descriptorMap)->keySet()))->toArray($$new($StringArray, size))));
		return $Util::hashCode(var$0, $($nc($($nc(this->descriptorMap)->values()))->toArray($$new($ObjectArray, size))));
	}
}

bool DescriptorSupport::isValid() {
	$synchronized(this) {
		$useLocalCurrentObjectStackCache();
		$init($JmxProperties);
		$init($System$Logger$Level);
		if ($nc($JmxProperties::MODELMBEAN_LOGGER)->isLoggable($System$Logger$Level::TRACE)) {
			$nc($JmxProperties::MODELMBEAN_LOGGER)->log($System$Logger$Level::TRACE, "Entry"_s);
		}
		$var($Set, returnedSet, $nc(this->descriptorMap)->entrySet());
		if (returnedSet == nullptr) {
			if ($nc($JmxProperties::MODELMBEAN_LOGGER)->isLoggable($System$Logger$Level::TRACE)) {
				$nc($JmxProperties::MODELMBEAN_LOGGER)->log($System$Logger$Level::TRACE, "isValid() Returns false (null set)"_s);
			}
			return false;
		}
		$var($String, thisName, ($cast($String, this->getFieldValue("name"_s))));
		$var($String, thisDescType, ($cast($String, getFieldValue("descriptorType"_s))));
		bool var$0 = (thisName == nullptr) || (thisDescType == nullptr) || ($nc(thisName)->isEmpty());
		if (var$0 || ($nc(thisDescType)->isEmpty())) {
			return false;
		}
		{
			$var($Iterator, i$, $nc(returnedSet)->iterator());
			for (; $nc(i$)->hasNext();) {
				$var($Map$Entry, currElement, $cast($Map$Entry, i$->next()));
				{
					if (currElement != nullptr) {
						if (currElement->getValue() != nullptr) {
							$var($String, var$1, $nc(($cast($String, $(currElement->getKey()))))->toString());
							if (validateField(var$1, $($nc($of(($(currElement->getValue()))))->toString()))) {
								continue;
							} else {
								if ($nc($JmxProperties::MODELMBEAN_LOGGER)->isLoggable($System$Logger$Level::TRACE)) {
									$var($String, var$3, $$str({"Field "_s, $cast($String, $(currElement->getKey())), "="_s}));
									$var($String, var$2, $$concat(var$3, $(currElement->getValue())));
									$nc($JmxProperties::MODELMBEAN_LOGGER)->log($System$Logger$Level::TRACE, $$concat(var$2, " is not valid"));
								}
								return false;
							}
						}
					}
				}
			}
		}
		if ($nc($JmxProperties::MODELMBEAN_LOGGER)->isLoggable($System$Logger$Level::TRACE)) {
			$nc($JmxProperties::MODELMBEAN_LOGGER)->log($System$Logger$Level::TRACE, "isValid() Returns true"_s);
		}
		return true;
	}
}

bool DescriptorSupport::validateField($String* fldName, Object$* fldValue) {
	if ((fldName == nullptr) || ($nc(fldName)->isEmpty())) {
		return false;
	}
	$var($String, SfldValue, ""_s);
	bool isAString = false;
	if ((fldValue != nullptr) && ($instanceOf($String, fldValue))) {
		$assign(SfldValue, $cast($String, fldValue));
		isAString = true;
	}
	bool var$0 = $nc(fldName)->equalsIgnoreCase("Name"_s);
	bool nameOrDescriptorType = (var$0 || $nc(fldName)->equalsIgnoreCase("DescriptorType"_s));
	bool var$3 = nameOrDescriptorType || fldName->equalsIgnoreCase("SetMethod"_s);
	bool var$2 = var$3 || fldName->equalsIgnoreCase("GetMethod"_s);
	bool var$1 = var$2 || fldName->equalsIgnoreCase("Role"_s);
	if (var$1 || fldName->equalsIgnoreCase("Class"_s)) {
		if (fldValue == nullptr || !isAString) {
			return false;
		}
		if (nameOrDescriptorType && SfldValue->isEmpty()) {
			return false;
		}
		return true;
	} else if (fldName->equalsIgnoreCase("visibility"_s)) {
		int64_t v = 0;
		if ((fldValue != nullptr) && (isAString)) {
			v = toNumeric(SfldValue);
		} else if ($instanceOf($Integer, fldValue)) {
			v = $nc(($cast($Integer, fldValue)))->intValue();
		} else {
			return false;
		}
		if (v >= 1 && v <= 4) {
			return true;
		} else {
			return false;
		}
	} else if (fldName->equalsIgnoreCase("severity"_s)) {
		int64_t v = 0;
		if ((fldValue != nullptr) && (isAString)) {
			v = toNumeric(SfldValue);
		} else if ($instanceOf($Integer, fldValue)) {
			v = $nc(($cast($Integer, fldValue)))->intValue();
		} else {
			return false;
		}
		return (v >= 0 && v <= 6);
	} else if (fldName->equalsIgnoreCase("PersistPolicy"_s)) {
		bool var$4 = ((fldValue != nullptr) && (isAString));
		if (var$4) {
			bool var$9 = SfldValue->equalsIgnoreCase("OnUpdate"_s);
			bool var$8 = var$9 || SfldValue->equalsIgnoreCase("OnTimer"_s);
			bool var$7 = var$8 || SfldValue->equalsIgnoreCase("NoMoreOftenThan"_s);
			bool var$6 = var$7 || SfldValue->equalsIgnoreCase("Always"_s);
			bool var$5 = var$6 || SfldValue->equalsIgnoreCase("Never"_s);
			var$4 = (var$5 || SfldValue->equalsIgnoreCase("OnUnregister"_s));
		}
		return (var$4);
	} else {
		bool var$15 = fldName->equalsIgnoreCase("PersistPeriod"_s);
		bool var$14 = var$15 || fldName->equalsIgnoreCase("CurrencyTimeLimit"_s);
		bool var$13 = var$14 || fldName->equalsIgnoreCase("LastUpdatedTimeStamp"_s);
		if (var$13 || fldName->equalsIgnoreCase("LastReturnedTimeStamp"_s)) {
			int64_t v = 0;
			if ((fldValue != nullptr) && (isAString)) {
				v = toNumeric(SfldValue);
			} else if ($instanceOf($Number, fldValue)) {
				v = $nc(($cast($Number, fldValue)))->longValue();
			} else {
				return false;
			}
			return (v >= -1);
		} else if (fldName->equalsIgnoreCase("log"_s)) {
			bool var$16 = ($instanceOf($Boolean, fldValue));
			if (!var$16) {
				bool var$17 = isAString;
				if (var$17) {
					bool var$20 = SfldValue->equalsIgnoreCase("T"_s);
					bool var$19 = var$20 || SfldValue->equalsIgnoreCase("true"_s);
					bool var$18 = var$19 || SfldValue->equalsIgnoreCase("F"_s);
					var$17 = (var$18 || SfldValue->equalsIgnoreCase("false"_s));
				}
				var$16 = (var$17);
			}
			return (var$16);
		}
	}
	return true;
}

$String* DescriptorSupport::toXMLString() {
	$synchronized(this) {
		$useLocalCurrentObjectStackCache();
		$var($StringBuilder, buf, $new($StringBuilder, "<Descriptor>"_s));
		$var($Set, returnedSet, $nc(this->descriptorMap)->entrySet());
		{
			$var($Iterator, i$, $nc(returnedSet)->iterator());
			for (; $nc(i$)->hasNext();) {
				$var($Map$Entry, currElement, $cast($Map$Entry, i$->next()));
				{
					$var($String, name, $cast($String, $nc(currElement)->getKey()));
					$var($Object, value, currElement->getValue());
					$var($String, valueString, nullptr);
					if ($instanceOf($String, value)) {
						$var($String, svalue, $cast($String, value));
						bool var$0 = !$nc(svalue)->startsWith("("_s);
						if (var$0 || !$nc(svalue)->endsWith(")"_s)) {
							$assign(valueString, quote(svalue));
						}
					}
					if (valueString == nullptr) {
						$assign(valueString, makeFieldValue(value));
					}
					buf->append("<field name=\""_s)->append(name)->append("\" value=\""_s)->append(valueString)->append("\"></field>"_s);
				}
			}
		}
		buf->append("</Descriptor>"_s);
		return buf->toString();
	}
}

bool DescriptorSupport::isMagic(char16_t c) {
	$init(DescriptorSupport);
	return (c < $nc(DescriptorSupport::charToEntityMap)->length && $nc(DescriptorSupport::charToEntityMap)->get(c) != nullptr);
}

$String* DescriptorSupport::quote($String* s) {
	$init(DescriptorSupport);
	bool found = false;
	for (int32_t i = 0; i < $nc(s)->length(); ++i) {
		if (isMagic(s->charAt(i))) {
			found = true;
			break;
		}
	}
	if (!found) {
		return s;
	}
	$var($StringBuilder, buf, $new($StringBuilder));
	for (int32_t i = 0; i < $nc(s)->length(); ++i) {
		char16_t c = s->charAt(i);
		if (isMagic(c)) {
			buf->append($nc(DescriptorSupport::charToEntityMap)->get(c));
		} else {
			buf->append(c);
		}
	}
	return buf->toString();
}

$String* DescriptorSupport::unquote($String* s) {
	$init(DescriptorSupport);
	$useLocalCurrentObjectStackCache();
	bool var$0 = !$nc(s)->startsWith("\""_s);
	if (var$0 || !$nc(s)->endsWith("\""_s)) {
		$throwNew($XMLParseException, $$str({"Value must be quoted: <"_s, s, ">"_s}));
	}
	$var($StringBuilder, buf, $new($StringBuilder));
	int32_t len = $nc(s)->length() - 1;
	for (int32_t i = 1; i < len; ++i) {
		char16_t c = s->charAt(i);
		int32_t semi = 0;
		$var($Character, quoted, nullptr);
		bool var$1 = c == u'&' && (semi = s->indexOf((int32_t)u';', i + 1)) >= 0;
		if (var$1 && (($assign(quoted, $cast($Character, $nc(DescriptorSupport::entityToCharMap)->get($(s->substring(i, semi + 1)))))) != nullptr)) {
			buf->append($of(quoted));
			i = semi;
		} else {
			buf->append(c);
		}
	}
	return buf->toString();
}

$String* DescriptorSupport::makeFieldValue(Object$* value) {
	$init(DescriptorSupport);
	$useLocalCurrentObjectStackCache();
	$beforeCallerSensitive();
	if (value == nullptr) {
		return "(null)"_s;
	}
	$Class* valueClass = $nc($of(value))->getClass();
	try {
		$nc(valueClass)->getConstructor($$new($ClassArray, {$String::class$}));
	} catch ($NoSuchMethodException& e) {
		$var($String, msg, $str({"Class "_s, valueClass, " does not have a public constructor with a single string arg"_s}));
		$var($RuntimeException, iae, $new($IllegalArgumentException, msg));
		$throwNew($RuntimeOperationsException, iae, "Cannot make XML descriptor"_s);
	} catch ($SecurityException& e) {
	}
	$var($String, quotedValueString, quote($($of(value)->toString())));
	return $str({"("_s, $($nc(valueClass)->getName()), "/"_s, quotedValueString, ")"_s});
}

$Object* DescriptorSupport::parseQuotedFieldValue($String* s$renamed) {
	$init(DescriptorSupport);
	$useLocalCurrentObjectStackCache();
	$var($String, s, s$renamed);
	$beforeCallerSensitive();
	$assign(s, unquote(s));
	if ($nc(s)->equalsIgnoreCase("(null)"_s)) {
		return $of(nullptr);
	}
	bool var$0 = !$nc(s)->startsWith("("_s);
	if (var$0 || !$nc(s)->endsWith(")"_s)) {
		return $of(s);
	}
	int32_t slash = $nc(s)->indexOf((int32_t)u'/');
	if (slash < 0) {
		return $of(s->substring(1, s->length() - 1));
	}
	$var($String, className, s->substring(1, slash));
	$var($Constructor, constr, nullptr);
	try {
		$ReflectUtil::checkPackageAccess(className);
		$var($ClassLoader, contextClassLoader, $($Thread::currentThread())->getContextClassLoader());
		$Class* c = $Class::forName(className, false, contextClassLoader);
		$assign(constr, $nc(c)->getConstructor($$new($ClassArray, {$String::class$})));
	} catch ($Exception& e) {
		$throwNew($XMLParseException, e, $$str({"Cannot parse value: <"_s, s, ">"_s}));
	}
	$var($String, arg, s->substring(slash + 1, s->length() - 1));
	try {
		return $of($nc(constr)->newInstance($$new($ObjectArray, {$of(arg)})));
	} catch ($Exception& e) {
		$var($String, msg, $str({"Cannot construct instance of "_s, className, " with arg: <"_s, s, ">"_s}));
		$throwNew($XMLParseException, e, msg);
	}
	$shouldNotReachHere();
}

$String* DescriptorSupport::toString() {
	$synchronized(this) {
		$useLocalCurrentObjectStackCache();
		$init($JmxProperties);
		$init($System$Logger$Level);
		if ($nc($JmxProperties::MODELMBEAN_LOGGER)->isLoggable($System$Logger$Level::TRACE)) {
			$nc($JmxProperties::MODELMBEAN_LOGGER)->log($System$Logger$Level::TRACE, "Entry"_s);
		}
		$var($String, respStr, ""_s);
		$var($StringArray, fields, getFields());
		if ((fields == nullptr) || ($nc(fields)->length == 0)) {
			if ($nc($JmxProperties::MODELMBEAN_LOGGER)->isLoggable($System$Logger$Level::TRACE)) {
				$nc($JmxProperties::MODELMBEAN_LOGGER)->log($System$Logger$Level::TRACE, "Empty Descriptor"_s);
			}
			return respStr;
		}
		if ($nc($JmxProperties::MODELMBEAN_LOGGER)->isLoggable($System$Logger$Level::TRACE)) {
			$nc($JmxProperties::MODELMBEAN_LOGGER)->log($System$Logger$Level::TRACE, $$str({"Printing "_s, $$str($nc(fields)->length), " fields"_s}));
		}
		for (int32_t i = 0; i < $nc(fields)->length; ++i) {
			if (i == (fields->length - 1)) {
				$assign(respStr, respStr->concat(fields->get(i)));
			} else {
				$assign(respStr, respStr->concat($$str({fields->get(i), ", "_s})));
			}
		}
		if ($nc($JmxProperties::MODELMBEAN_LOGGER)->isLoggable($System$Logger$Level::TRACE)) {
			$nc($JmxProperties::MODELMBEAN_LOGGER)->log($System$Logger$Level::TRACE, $$str({"Exit returning "_s, respStr}));
		}
		return respStr;
	}
}

int64_t DescriptorSupport::toNumeric($String* inStr) {
	try {
		return $Long::parseLong(inStr);
	} catch ($Exception& e) {
		return -2;
	}
	$shouldNotReachHere();
}

void DescriptorSupport::readObject($ObjectInputStream* in) {
	$useLocalCurrentObjectStackCache();
	$var($ObjectInputStream$GetField, fields, $nc(in)->readFields());
	$var($Map, descriptor, $cast($Map, $Util::cast($($nc(fields)->get("descriptor"_s, ($Object*)nullptr)))));
	init(nullptr);
	if (descriptor != nullptr) {
		$nc(this->descriptorMap)->putAll(descriptor);
	}
}

void DescriptorSupport::writeObject($ObjectOutputStream* out) {
	$useLocalCurrentObjectStackCache();
	$var($ObjectOutputStream$PutField, fields, $nc(out)->putFields());
	bool compat = "1.0"_s->equals(DescriptorSupport::serialForm);
	if (compat) {
		$nc(fields)->put("currClass"_s, $of(DescriptorSupport::currClass));
	}
	$var($SortedMap, startMap, this->descriptorMap);
	if ($nc(startMap)->containsKey("targetObject"_s)) {
		$assign(startMap, $new($TreeMap, this->descriptorMap));
		startMap->remove("targetObject"_s);
	}
	$var($HashMap, descriptor, nullptr);
	bool var$0 = compat || "1.2.0"_s->equals(DescriptorSupport::serialForm);
	if (var$0 || "1.2.1"_s->equals(DescriptorSupport::serialForm)) {
		$assign(descriptor, $new($HashMap));
		{
			$var($Iterator, i$, $nc($($nc(startMap)->entrySet()))->iterator());
			for (; $nc(i$)->hasNext();) {
				$var($Map$Entry, entry, $cast($Map$Entry, i$->next()));
				$var($Object, var$1, $of($nc(($cast($String, $($nc(entry)->getKey()))))->toLowerCase()));
				descriptor->put(var$1, $(entry->getValue()));
			}
		}
	} else {
		$assign(descriptor, $new($HashMap, static_cast<$Map*>(startMap)));
	}
	$nc(fields)->put("descriptor"_s, $of(descriptor));
	out->writeFields();
}

void clinit$DescriptorSupport($Class* class$) {
	$useLocalCurrentObjectStackCache();
	$assignStatic(DescriptorSupport::currClass, "DescriptorSupport"_s);
	$beforeCallerSensitive();
	$load($HashMap);
	$assignStatic(DescriptorSupport::oldSerialPersistentFields, $new($ObjectStreamFieldArray, {
		$$new($ObjectStreamField, "descriptor"_s, $HashMap::class$),
		$$new($ObjectStreamField, "currClass"_s, $String::class$)
	}));
	$assignStatic(DescriptorSupport::newSerialPersistentFields, $new($ObjectStreamFieldArray, {$$new($ObjectStreamField, "descriptor"_s, $HashMap::class$)}));
	{
		$var($String, form, nullptr);
		bool compat = false;
		try {
			$var($GetPropertyAction, act, $new($GetPropertyAction, "jmx.serial.form"_s));
			$assign(form, $cast($String, $AccessController::doPrivileged(static_cast<$PrivilegedAction*>(act))));
			compat = "1.0"_s->equals(form);
		} catch ($Exception& e) {
		}
		$assignStatic(DescriptorSupport::serialForm, form);
		if (compat) {
			$assignStatic(DescriptorSupport::serialPersistentFields, DescriptorSupport::oldSerialPersistentFields);
			DescriptorSupport::serialVersionUID = DescriptorSupport::oldSerialVersionUID;
		} else {
			$assignStatic(DescriptorSupport::serialPersistentFields, DescriptorSupport::newSerialPersistentFields);
			DescriptorSupport::serialVersionUID = DescriptorSupport::newSerialVersionUID;
		}
	}
	$assignStatic(DescriptorSupport::entities, $new($StringArray, {
		" &#32;"_s,
		"\"&quot;"_s,
		"<&lt;"_s,
		">&gt;"_s,
		"&&amp;"_s,
		"\r&#13;"_s,
		"\t&#9;"_s,
		"\n&#10;"_s,
		"\f&#12;"_s
	}));
	$assignStatic(DescriptorSupport::entityToCharMap, $new($HashMap));
	{
		char16_t maxChar = (char16_t)0;
		for (int32_t i = 0; i < $nc(DescriptorSupport::entities)->length; ++i) {
			char16_t c = $nc($nc(DescriptorSupport::entities)->get(i))->charAt(0);
			if (c > maxChar) {
				maxChar = c;
			}
		}
		$assignStatic(DescriptorSupport::charToEntityMap, $new($StringArray, maxChar + 1));
		for (int32_t i = 0; i < $nc(DescriptorSupport::entities)->length; ++i) {
			char16_t c = $nc($nc(DescriptorSupport::entities)->get(i))->charAt(0);
			$var($String, entity, $nc($nc(DescriptorSupport::entities)->get(i))->substring(1));
			$nc(DescriptorSupport::charToEntityMap)->set(c, entity);
			$nc(DescriptorSupport::entityToCharMap)->put(entity, $($Character::valueOf(c)));
		}
	}
}

DescriptorSupport::DescriptorSupport() {
}

$Class* DescriptorSupport::load$($String* name, bool initialize) {
	$loadClass(DescriptorSupport, name, initialize, &_DescriptorSupport_ClassInfo_, clinit$DescriptorSupport, allocate$DescriptorSupport);
	return class$;
}

$Class* DescriptorSupport::class$ = nullptr;

		} // modelmbean
	} // management
} // javax
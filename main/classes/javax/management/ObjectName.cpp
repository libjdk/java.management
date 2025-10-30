#include <javax/management/ObjectName.h>

#include <com/sun/jmx/mbeanserver/GetPropertyAction.h>
#include <com/sun/jmx/mbeanserver/Util.h>
#include <java/io/InvalidObjectException.h>
#include <java/io/ObjectInputStream$GetField.h>
#include <java/io/ObjectInputStream.h>
#include <java/io/ObjectOutputStream$PutField.h>
#include <java/io/ObjectOutputStream.h>
#include <java/io/ObjectStreamField.h>
#include <java/lang/ClassCastException.h>
#include <java/lang/Comparable.h>
#include <java/security/AccessController.h>
#include <java/security/PrivilegedAction.h>
#include <java/util/AbstractMap.h>
#include <java/util/Arrays.h>
#include <java/util/Collections.h>
#include <java/util/HashMap.h>
#include <java/util/Hashtable.h>
#include <java/util/Iterator.h>
#include <java/util/Map$Entry.h>
#include <java/util/Map.h>
#include <java/util/Set.h>
#include <javax/management/MBeanServer.h>
#include <javax/management/MalformedObjectNameException.h>
#include <javax/management/ObjectName$PatternProperty.h>
#include <javax/management/ObjectName$Property.h>
#include <jcpp.h>

#undef DOMAIN_LENGTH_MASK
#undef DOMAIN_PATTERN
#undef FLAG_MASK
#undef PROPLIST_PATTERN
#undef PROPVAL_PATTERN
#undef TYPE
#undef WILDCARD

using $ObjectStreamFieldArray = $Array<::java::io::ObjectStreamField>;
using $ObjectName$PropertyArray = $Array<::javax::management::ObjectName$Property>;
using $GetPropertyAction = ::com::sun::jmx::mbeanserver::GetPropertyAction;
using $Util = ::com::sun::jmx::mbeanserver::Util;
using $InvalidObjectException = ::java::io::InvalidObjectException;
using $ObjectInputStream = ::java::io::ObjectInputStream;
using $ObjectInputStream$GetField = ::java::io::ObjectInputStream$GetField;
using $ObjectOutputStream = ::java::io::ObjectOutputStream;
using $ObjectOutputStream$PutField = ::java::io::ObjectOutputStream$PutField;
using $ObjectStreamField = ::java::io::ObjectStreamField;
using $AbstractStringBuilder = ::java::lang::AbstractStringBuilder;
using $Boolean = ::java::lang::Boolean;
using $ClassCastException = ::java::lang::ClassCastException;
using $ClassInfo = ::java::lang::ClassInfo;
using $Comparable = ::java::lang::Comparable;
using $Exception = ::java::lang::Exception;
using $FieldInfo = ::java::lang::FieldInfo;
using $IllegalArgumentException = ::java::lang::IllegalArgumentException;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $NullPointerException = ::java::lang::NullPointerException;
using $AccessController = ::java::security::AccessController;
using $PrivilegedAction = ::java::security::PrivilegedAction;
using $AbstractMap = ::java::util::AbstractMap;
using $Arrays = ::java::util::Arrays;
using $Collections = ::java::util::Collections;
using $HashMap = ::java::util::HashMap;
using $Hashtable = ::java::util::Hashtable;
using $Iterator = ::java::util::Iterator;
using $Map = ::java::util::Map;
using $Map$Entry = ::java::util::Map$Entry;
using $Set = ::java::util::Set;
using $MBeanServer = ::javax::management::MBeanServer;
using $MalformedObjectNameException = ::javax::management::MalformedObjectNameException;
using $ObjectName$PatternProperty = ::javax::management::ObjectName$PatternProperty;
using $ObjectName$Property = ::javax::management::ObjectName$Property;
using $QueryExp = ::javax::management::QueryExp;

namespace javax {
	namespace management {

$FieldInfo _ObjectName_FieldInfo_[] = {
	{"DOMAIN_PATTERN", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(ObjectName, DOMAIN_PATTERN)},
	{"PROPLIST_PATTERN", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(ObjectName, PROPLIST_PATTERN)},
	{"PROPVAL_PATTERN", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(ObjectName, PROPVAL_PATTERN)},
	{"FLAG_MASK", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(ObjectName, FLAG_MASK)},
	{"DOMAIN_LENGTH_MASK", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(ObjectName, DOMAIN_LENGTH_MASK)},
	{"oldSerialVersionUID", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(ObjectName, oldSerialVersionUID)},
	{"newSerialVersionUID", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(ObjectName, newSerialVersionUID)},
	{"oldSerialPersistentFields", "[Ljava/io/ObjectStreamField;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(ObjectName, oldSerialPersistentFields)},
	{"newSerialPersistentFields", "[Ljava/io/ObjectStreamField;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(ObjectName, newSerialPersistentFields)},
	{"serialVersionUID", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(ObjectName, serialVersionUID)},
	{"serialPersistentFields", "[Ljava/io/ObjectStreamField;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(ObjectName, serialPersistentFields)},
	{"compat", "Z", nullptr, $PRIVATE | $STATIC, $staticField(ObjectName, compat)},
	{"_Empty_property_array", "[Ljavax/management/ObjectName$Property;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(ObjectName, _Empty_property_array)},
	{"_canonicalName", "Ljava/lang/String;", nullptr, $PRIVATE | $TRANSIENT, $field(ObjectName, _canonicalName)},
	{"_kp_array", "[Ljavax/management/ObjectName$Property;", nullptr, $PRIVATE | $TRANSIENT, $field(ObjectName, _kp_array)},
	{"_ca_array", "[Ljavax/management/ObjectName$Property;", nullptr, $PRIVATE | $TRANSIENT, $field(ObjectName, _ca_array)},
	{"_propertyList", "Ljava/util/Map;", "Ljava/util/Map<Ljava/lang/String;Ljava/lang/String;>;", $PRIVATE | $TRANSIENT, $field(ObjectName, _propertyList)},
	{"_compressed_storage", "I", nullptr, $PRIVATE | $TRANSIENT, $field(ObjectName, _compressed_storage)},
	{"WILDCARD", "Ljavax/management/ObjectName;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(ObjectName, WILDCARD)},
	{}
};

$MethodInfo _ObjectName_MethodInfo_[] = {
	{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"<init>", "(Ljava/lang/String;)V", nullptr, $PUBLIC, $method(static_cast<void(ObjectName::*)($String*)>(&ObjectName::init$)), "javax.management.MalformedObjectNameException"},
	{"<init>", "(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)V", nullptr, $PUBLIC, $method(static_cast<void(ObjectName::*)($String*,$String*,$String*)>(&ObjectName::init$)), "javax.management.MalformedObjectNameException"},
	{"<init>", "(Ljava/lang/String;Ljava/util/Hashtable;)V", "(Ljava/lang/String;Ljava/util/Hashtable<Ljava/lang/String;Ljava/lang/String;>;)V", $PUBLIC, $method(static_cast<void(ObjectName::*)($String*,$Hashtable*)>(&ObjectName::init$)), "javax.management.MalformedObjectNameException"},
	{"_getKeyPropertyList", "()Ljava/util/Map;", "()Ljava/util/Map<Ljava/lang/String;Ljava/lang/String;>;", $PRIVATE, $method(static_cast<$Map*(ObjectName::*)()>(&ObjectName::_getKeyPropertyList))},
	{"addProperty", "(Ljavax/management/ObjectName$Property;ILjava/util/Map;Ljava/lang/String;)V", "(Ljavax/management/ObjectName$Property;ILjava/util/Map<Ljava/lang/String;Ljavax/management/ObjectName$Property;>;Ljava/lang/String;)V", $PRIVATE, $method(static_cast<void(ObjectName::*)($ObjectName$Property*,int32_t,$Map*,$String*)>(&ObjectName::addProperty)), "javax.management.MalformedObjectNameException"},
	{"apply", "(Ljavax/management/ObjectName;)Z", nullptr, $PUBLIC},
	{"checkKey", "(Ljava/lang/String;)V", nullptr, $PRIVATE | $STATIC, $method(static_cast<void(*)($String*)>(&ObjectName::checkKey)), "javax.management.MalformedObjectNameException"},
	{"checkValue", "(Ljava/lang/String;)Z", nullptr, $PRIVATE | $STATIC, $method(static_cast<bool(*)($String*)>(&ObjectName::checkValue)), "javax.management.MalformedObjectNameException"},
	{"compareTo", "(Ljavax/management/ObjectName;)I", nullptr, $PUBLIC},
	{"compareTo", "(Ljava/lang/Object;)I", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC},
	{"construct", "(Ljava/lang/String;)V", nullptr, $PRIVATE, $method(static_cast<void(ObjectName::*)($String*)>(&ObjectName::construct)), "javax.management.MalformedObjectNameException"},
	{"construct", "(Ljava/lang/String;Ljava/util/Map;)V", "(Ljava/lang/String;Ljava/util/Map<Ljava/lang/String;Ljava/lang/String;>;)V", $PRIVATE, $method(static_cast<void(ObjectName::*)($String*,$Map*)>(&ObjectName::construct)), "javax.management.MalformedObjectNameException"},
	{"equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"getCanonicalKeyPropertyListString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"getCanonicalName", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"getDomain", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"getDomainLength", "()I", nullptr, $PRIVATE, $method(static_cast<int32_t(ObjectName::*)()>(&ObjectName::getDomainLength))},
	{"getInstance", "(Ljava/lang/String;)Ljavax/management/ObjectName;", nullptr, $PUBLIC | $STATIC, $method(static_cast<ObjectName*(*)($String*)>(&ObjectName::getInstance)), "javax.management.MalformedObjectNameException,java.lang.NullPointerException"},
	{"getInstance", "(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)Ljavax/management/ObjectName;", nullptr, $PUBLIC | $STATIC, $method(static_cast<ObjectName*(*)($String*,$String*,$String*)>(&ObjectName::getInstance)), "javax.management.MalformedObjectNameException"},
	{"getInstance", "(Ljava/lang/String;Ljava/util/Hashtable;)Ljavax/management/ObjectName;", "(Ljava/lang/String;Ljava/util/Hashtable<Ljava/lang/String;Ljava/lang/String;>;)Ljavax/management/ObjectName;", $PUBLIC | $STATIC, $method(static_cast<ObjectName*(*)($String*,$Hashtable*)>(&ObjectName::getInstance)), "javax.management.MalformedObjectNameException"},
	{"getInstance", "(Ljavax/management/ObjectName;)Ljavax/management/ObjectName;", nullptr, $PUBLIC | $STATIC, $method(static_cast<ObjectName*(*)(ObjectName*)>(&ObjectName::getInstance))},
	{"getKeyProperty", "(Ljava/lang/String;)Ljava/lang/String;", nullptr, $PUBLIC},
	{"getKeyPropertyList", "()Ljava/util/Hashtable;", "()Ljava/util/Hashtable<Ljava/lang/String;Ljava/lang/String;>;", $PUBLIC},
	{"getKeyPropertyListString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"getSerializedNameString", "()Ljava/lang/String;", nullptr, $PRIVATE, $method(static_cast<$String*(ObjectName::*)()>(&ObjectName::getSerializedNameString))},
	{"hashCode", "()I", nullptr, $PUBLIC},
	{"isDomain", "(Ljava/lang/String;)Z", nullptr, $PRIVATE, $method(static_cast<bool(ObjectName::*)($String*)>(&ObjectName::isDomain))},
	{"isDomainPattern", "()Z", nullptr, $PUBLIC},
	{"isPattern", "()Z", nullptr, $PUBLIC},
	{"isPropertyListPattern", "()Z", nullptr, $PUBLIC},
	{"isPropertyPattern", "()Z", nullptr, $PUBLIC},
	{"isPropertyValuePattern", "()Z", nullptr, $PUBLIC},
	{"isPropertyValuePattern", "(Ljava/lang/String;)Z", nullptr, $PUBLIC},
	{"matchDomains", "(Ljavax/management/ObjectName;)Z", nullptr, $PRIVATE | $FINAL, $method(static_cast<bool(ObjectName::*)(ObjectName*)>(&ObjectName::matchDomains))},
	{"matchKeys", "(Ljavax/management/ObjectName;)Z", nullptr, $PRIVATE | $FINAL, $method(static_cast<bool(ObjectName::*)(ObjectName*)>(&ObjectName::matchKeys))},
	{"parseKey", "([CI)I", nullptr, $PRIVATE | $STATIC, $method(static_cast<int32_t(*)($chars*,int32_t)>(&ObjectName::parseKey)), "javax.management.MalformedObjectNameException"},
	{"parseValue", "([CI)[I", nullptr, $PRIVATE | $STATIC, $method(static_cast<$ints*(*)($chars*,int32_t)>(&ObjectName::parseValue)), "javax.management.MalformedObjectNameException"},
	{"quote", "(Ljava/lang/String;)Ljava/lang/String;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$String*(*)($String*)>(&ObjectName::quote))},
	{"readObject", "(Ljava/io/ObjectInputStream;)V", nullptr, $PRIVATE, $method(static_cast<void(ObjectName::*)($ObjectInputStream*)>(&ObjectName::readObject)), "java.io.IOException,java.lang.ClassNotFoundException"},
	{"setCanonicalName", "([C[C[Ljava/lang/String;Ljava/util/Map;II)V", "([C[C[Ljava/lang/String;Ljava/util/Map<Ljava/lang/String;Ljavax/management/ObjectName$Property;>;II)V", $PRIVATE, $method(static_cast<void(ObjectName::*)($chars*,$chars*,$StringArray*,$Map*,int32_t,int32_t)>(&ObjectName::setCanonicalName))},
	{"setDomainLength", "(I)V", nullptr, $PRIVATE, $method(static_cast<void(ObjectName::*)(int32_t)>(&ObjectName::setDomainLength)), "javax.management.MalformedObjectNameException"},
	{"setDomainPattern", "(Z)V", nullptr, $PRIVATE, $method(static_cast<void(ObjectName::*)(bool)>(&ObjectName::setDomainPattern))},
	{"setMBeanServer", "(Ljavax/management/MBeanServer;)V", nullptr, $PUBLIC},
	{"setPropertyListPattern", "(Z)V", nullptr, $PRIVATE, $method(static_cast<void(ObjectName::*)(bool)>(&ObjectName::setPropertyListPattern))},
	{"setPropertyValuePattern", "(Z)V", nullptr, $PRIVATE, $method(static_cast<void(ObjectName::*)(bool)>(&ObjectName::setPropertyValuePattern))},
	{"toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"unquote", "(Ljava/lang/String;)Ljava/lang/String;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$String*(*)($String*)>(&ObjectName::unquote))},
	{"writeKeyPropertyListString", "([C[CI)I", nullptr, $PRIVATE, $method(static_cast<int32_t(ObjectName::*)($chars*,$chars*,int32_t)>(&ObjectName::writeKeyPropertyListString))},
	{"writeObject", "(Ljava/io/ObjectOutputStream;)V", nullptr, $PRIVATE, $method(static_cast<void(ObjectName::*)($ObjectOutputStream*)>(&ObjectName::writeObject)), "java.io.IOException"},
	{}
};

$InnerClassInfo _ObjectName_InnerClassesInfo_[] = {
	{"javax.management.ObjectName$PatternProperty", "javax.management.ObjectName", "PatternProperty", $PRIVATE | $STATIC},
	{"javax.management.ObjectName$Property", "javax.management.ObjectName", "Property", $PRIVATE | $STATIC},
	{}
};

$ClassInfo _ObjectName_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"javax.management.ObjectName",
	"java.lang.Object",
	"java.lang.Comparable,javax.management.QueryExp",
	_ObjectName_FieldInfo_,
	_ObjectName_MethodInfo_,
	"Ljava/lang/Object;Ljava/lang/Comparable<Ljavax/management/ObjectName;>;Ljavax/management/QueryExp;",
	nullptr,
	_ObjectName_InnerClassesInfo_,
	nullptr,
	nullptr,
	"javax.management.ObjectName$PatternProperty,javax.management.ObjectName$Property"
};

$Object* allocate$ObjectName($Class* clazz) {
	return $of($alloc(ObjectName));
}

$Object* ObjectName::clone() {
	 return this->$Comparable::clone();
}

void ObjectName::finalize() {
	this->$Comparable::finalize();
}

$ObjectStreamFieldArray* ObjectName::oldSerialPersistentFields = nullptr;
$ObjectStreamFieldArray* ObjectName::newSerialPersistentFields = nullptr;
int64_t ObjectName::serialVersionUID = 0;
$ObjectStreamFieldArray* ObjectName::serialPersistentFields = nullptr;
bool ObjectName::compat = false;
$ObjectName$PropertyArray* ObjectName::_Empty_property_array = nullptr;
ObjectName* ObjectName::WILDCARD = nullptr;

void ObjectName::construct($String* name) {
	$useLocalCurrentObjectStackCache();
	if (name == nullptr) {
		$throwNew($NullPointerException, "name cannot be null"_s);
	}
	if ($nc(name)->length() == 0) {
		$set(this, _canonicalName, "*:*"_s);
		$set(this, _kp_array, ObjectName::_Empty_property_array);
		$set(this, _ca_array, ObjectName::_Empty_property_array);
		setDomainLength(1);
		$set(this, _propertyList, nullptr);
		setDomainPattern(true);
		setPropertyListPattern(true);
		setPropertyValuePattern(false);
		return;
	}
	$var($chars, name_chars, $nc(name)->toCharArray());
	int32_t len = name_chars->length;
	$var($chars, canonical_chars, $new($chars, len));
	int32_t cname_index = 0;
	int32_t index = 0;
	char16_t c = 0;
	char16_t c1 = 0;
	bool domain_parsing$break = false;
	while (index < len) {
		{
			int32_t i = 0;
			switch (name_chars->get(index)) {
			case u':':
				{
					setDomainLength(index++);
					domain_parsing$break = true;
					break;
				}
			case u'=':
				{
					i = ++index;
					while (true) {
						bool var$0 = (i < len);
						if (!(var$0 && (name_chars->get(i++) != u':'))) {
							break;
						}
						{
							if (i == len) {
								$throwNew($MalformedObjectNameException, "Domain part must be specified"_s);
							}
						}
					}
					break;
				}
			case u'\n':
				{
					$throwNew($MalformedObjectNameException, "Invalid character \'\\n\' in domain name"_s);
				}
			case u'*':
				{}
			case u'?':
				{
					setDomainPattern(true);
					++index;
					break;
				}
			default:
				{
					++index;
					break;
				}
			}

			if (domain_parsing$break) {
				break;
			}
		}
	}
	if (index == len) {
		$throwNew($MalformedObjectNameException, "Key properties cannot be empty"_s);
	}
	int32_t _domain_length = getDomainLength();
	$System::arraycopy(name_chars, 0, canonical_chars, 0, _domain_length);
	canonical_chars->set(_domain_length, u':');
	cname_index = _domain_length + 1;
	$var($ObjectName$Property, prop, nullptr);
	$var($Map, keys_map, $new($HashMap));
	$var($StringArray, keys, nullptr);
	$var($String, key_name, nullptr);
	bool quoted_value = false;
	int32_t property_index = 0;
	int32_t in_index = 0;
	int32_t key_index = 0;
	int32_t key_length = 0;
	int32_t value_index = 0;
	int32_t value_length = 0;
	$assign(keys, $new($StringArray, 10));
	$set(this, _kp_array, $new($ObjectName$PropertyArray, 10));
	setPropertyListPattern(false);
	setPropertyValuePattern(false);
	while (index < len) {
		c = name_chars->get(index);
		if (c == u'*') {
			if (isPropertyListPattern()) {
				$throwNew($MalformedObjectNameException, "Cannot have several \'*\' characters in pattern property list"_s);
			} else {
				setPropertyListPattern(true);
				bool var$1 = (++index < len);
				if (var$1 && (name_chars->get(index) != u',')) {
					$throwNew($MalformedObjectNameException, "Invalid character found after \'*\': end of name or \',\' expected"_s);
				} else if (index == len) {
					if (property_index == 0) {
						$set(this, _kp_array, ObjectName::_Empty_property_array);
						$set(this, _ca_array, ObjectName::_Empty_property_array);
						$set(this, _propertyList, $Collections::emptyMap());
					}
					break;
				} else {
					++index;
					continue;
				}
			}
		}
		in_index = index;
		key_index = in_index;
		if (name_chars->get(in_index) == u'=') {
			$throwNew($MalformedObjectNameException, "Invalid key (empty)"_s);
		}
		while (true) {
			bool var$2 = (in_index < len);
			if (!(var$2 && ((c1 = name_chars->get(in_index++)) != u'='))) {
				break;
			}
			{
				{
					$var($String, ichar, nullptr)
					switch (c1) {
					case u'*':
						{}
					case u'?':
						{}
					case u',':
						{}
					case u':':
						{}
					case u'\n':
						{
							$assign(ichar, (c1 == u'\n') ? "\\n"_s : $str({""_s, $$str(c1)}));
							$throwNew($MalformedObjectNameException, $$str({"Invalid character \'"_s, ichar, "\' in key part of property"_s}));
						}
					}
				}
			}
		}
		if (name_chars->get(in_index - 1) != u'=') {
			$throwNew($MalformedObjectNameException, "Unterminated key property part"_s);
		}
		value_index = in_index;
		key_length = value_index - key_index - 1;
		bool value_pattern = false;
		if (in_index < len && name_chars->get(in_index) == u'\"') {
			quoted_value = true;
			while (true) {
				bool var$3 = (++in_index < len);
				if (!(var$3 && ((c1 = name_chars->get(in_index)) != u'\"'))) {
					break;
				}
				{
					if (c1 == u'\\') {
						if (++in_index == len) {
							$throwNew($MalformedObjectNameException, "Unterminated quoted value"_s);
						}
						switch (c1 = name_chars->get(in_index)) {
						case u'\\':
							{}
						case u'\"':
							{}
						case u'?':
							{}
						case u'*':
							{}
						case u'n':
							{
								break;
							}
						default:
							{
								$throwNew($MalformedObjectNameException, $$str({"Invalid escape sequence \'\\"_s, $$str(c1), "\' in quoted value"_s}));
							}
						}
					} else if (c1 == u'\n') {
						$throwNew($MalformedObjectNameException, "Newline in quoted value"_s);
					} else {
						switch (c1) {
						case u'?':
							{}
						case u'*':
							{
								value_pattern = true;
								break;
							}
						}
					}
				}
			}
			if (in_index == len) {
				$throwNew($MalformedObjectNameException, "Unterminated quoted value"_s);
			} else {
				value_length = ++in_index - value_index;
			}
		} else {
			quoted_value = false;
			while ((in_index < len) && ((c1 = name_chars->get(in_index)) != u',')) {
				{
					$var($String, ichar, nullptr)
					switch (c1) {
					case u'*':
						{}
					case u'?':
						{
							value_pattern = true;
							++in_index;
							break;
						}
					case u'=':
						{}
					case u':':
						{}
					case u'\"':
						{}
					case u'\n':
						{
							$assign(ichar, (c1 == u'\n') ? "\\n"_s : $str({""_s, $$str(c1)}));
							$throwNew($MalformedObjectNameException, $$str({"Invalid character \'"_s, ichar, "\' in value part of property"_s}));
						}
					default:
						{
							++in_index;
							break;
						}
					}
				}
			}
			value_length = in_index - value_index;
		}
		if (in_index == len - 1) {
			if (quoted_value) {
				$throwNew($MalformedObjectNameException, $$str({"Invalid ending character `"_s, $$str(name_chars->get(in_index)), "\'"_s}));
			} else {
				$throwNew($MalformedObjectNameException, "Invalid ending comma"_s);
			}
		} else {
			++in_index;
		}
		if (!value_pattern) {
			$assign(prop, $new($ObjectName$Property, key_index, key_length, value_length));
		} else {
			setPropertyValuePattern(true);
			$assign(prop, $new($ObjectName$PatternProperty, key_index, key_length, value_length));
		}
		$assign(key_name, name->substring(key_index, key_index + key_length));
		if (property_index == $nc(keys)->length) {
			$var($StringArray, tmp_string_array, $new($StringArray, property_index + 10));
			$System::arraycopy(keys, 0, tmp_string_array, 0, property_index);
			$assign(keys, tmp_string_array);
		}
		$nc(keys)->set(property_index, key_name);
		addProperty(prop, property_index, keys_map, key_name);
		++property_index;
		index = in_index;
	}
	setCanonicalName(name_chars, canonical_chars, keys, keys_map, cname_index, property_index);
}

void ObjectName::construct($String* domain, $Map* props) {
	$useLocalCurrentObjectStackCache();
	if (domain == nullptr) {
		$throwNew($NullPointerException, "domain cannot be null"_s);
	}
	if (props == nullptr) {
		$throwNew($NullPointerException, "key property list cannot be null"_s);
	}
	if ($nc(props)->isEmpty()) {
		$throwNew($MalformedObjectNameException, "key property list cannot be empty"_s);
	}
	if (!isDomain(domain)) {
		$throwNew($MalformedObjectNameException, $$str({"Invalid domain: "_s, domain}));
	}
	$var($StringBuilder, sb, $new($StringBuilder));
	sb->append(domain)->append(u':');
	setDomainLength($nc(domain)->length());
	int32_t nb_props = $nc(props)->size();
	$set(this, _kp_array, $new($ObjectName$PropertyArray, nb_props));
	$var($StringArray, keys, $new($StringArray, nb_props));
	$var($Map, keys_map, $new($HashMap));
	$var($ObjectName$Property, prop, nullptr);
	int32_t key_index = 0;
	int32_t i = 0;
	{
		$var($Iterator, i$, $nc($(props->entrySet()))->iterator());
		for (; $nc(i$)->hasNext();) {
			$var($Map$Entry, entry, $cast($Map$Entry, i$->next()));
			{
				if (sb->length() > 0) {
					sb->append(","_s);
				}
				$var($String, key, $cast($String, $nc(entry)->getKey()));
				$var($String, value, nullptr);
				try {
					$assign(value, $cast($String, entry->getValue()));
				} catch ($ClassCastException& e) {
					$throwNew($MalformedObjectNameException, $(e->getMessage()));
				}
				key_index = sb->length();
				checkKey(key);
				sb->append(key);
				keys->set(i, key);
				sb->append("="_s);
				bool value_pattern = checkValue(value);
				sb->append(value);
				if (!value_pattern) {
					int32_t var$0 = key_index;
					int32_t var$1 = $nc(key)->length();
					$assign(prop, $new($ObjectName$Property, var$0, var$1, $nc(value)->length()));
				} else {
					setPropertyValuePattern(true);
					int32_t var$2 = key_index;
					int32_t var$3 = $nc(key)->length();
					$assign(prop, $new($ObjectName$PatternProperty, var$2, var$3, $nc(value)->length()));
				}
				addProperty(prop, i, keys_map, key);
				++i;
			}
		}
	}
	int32_t len = sb->length();
	$var($chars, initial_chars, $new($chars, len));
	sb->getChars(0, len, initial_chars, 0);
	$var($chars, canonical_chars, $new($chars, len));
	int32_t copyLen = getDomainLength() + 1;
	$System::arraycopy(initial_chars, 0, canonical_chars, 0, copyLen);
	setCanonicalName(initial_chars, canonical_chars, keys, keys_map, copyLen, $nc(this->_kp_array)->length);
}

void ObjectName::addProperty($ObjectName$Property* prop, int32_t index, $Map* keys_map, $String* key_name) {
	$useLocalCurrentObjectStackCache();
	if ($nc(keys_map)->containsKey(key_name)) {
		$throwNew($MalformedObjectNameException, $$str({"key `"_s, key_name, "\' already defined"_s}));
	}
	if (index == $nc(this->_kp_array)->length) {
		$var($ObjectName$PropertyArray, tmp_prop_array, $new($ObjectName$PropertyArray, index + 10));
		$System::arraycopy(this->_kp_array, 0, tmp_prop_array, 0, index);
		$set(this, _kp_array, tmp_prop_array);
	}
	$nc(this->_kp_array)->set(index, prop);
	$nc(keys_map)->put(key_name, prop);
}

void ObjectName::setCanonicalName($chars* specified_chars, $chars* canonical_chars, $StringArray* keys$renamed, $Map* keys_map, int32_t prop_index, int32_t nb_props) {
	$useLocalCurrentObjectStackCache();
	$var($StringArray, keys, keys$renamed);
	if (this->_kp_array != ObjectName::_Empty_property_array) {
		$var($StringArray, tmp_keys, $new($StringArray, nb_props));
		$var($ObjectName$PropertyArray, tmp_props, $new($ObjectName$PropertyArray, nb_props));
		$System::arraycopy(keys, 0, tmp_keys, 0, nb_props);
		$Arrays::sort(tmp_keys);
		$assign(keys, tmp_keys);
		$System::arraycopy(this->_kp_array, 0, tmp_props, 0, nb_props);
		$set(this, _kp_array, tmp_props);
		$set(this, _ca_array, $new($ObjectName$PropertyArray, nb_props));
		for (int32_t i = 0; i < nb_props; ++i) {
			$nc(this->_ca_array)->set(i, $cast($ObjectName$Property, $($nc(keys_map)->get(keys->get(i)))));
		}
		int32_t last_index = nb_props - 1;
		int32_t prop_len = 0;
		$var($ObjectName$Property, prop, nullptr);
		for (int32_t i = 0; i <= last_index; ++i) {
			$assign(prop, $nc(this->_ca_array)->get(i));
			prop_len = $nc(prop)->_key_length + prop->_value_length + 1;
			$System::arraycopy(specified_chars, prop->_key_index, canonical_chars, prop_index, prop_len);
			prop->setKeyIndex(prop_index);
			prop_index += prop_len;
			if (i != last_index) {
				$nc(canonical_chars)->set(prop_index, u',');
				++prop_index;
			}
		}
	}
	if (isPropertyListPattern()) {
		if (this->_kp_array != ObjectName::_Empty_property_array) {
			$nc(canonical_chars)->set(prop_index++, u',');
		}
		$nc(canonical_chars)->set(prop_index++, u'*');
	}
	$set(this, _canonicalName, ($$new($String, canonical_chars, 0, prop_index))->intern());
}

int32_t ObjectName::parseKey($chars* s, int32_t startKey) {
	$init(ObjectName);
	$useLocalCurrentObjectStackCache();
	int32_t next = startKey;
	int32_t endKey = startKey;
	int32_t len = $nc(s)->length;
	while (next < len) {
		char16_t k = s->get(next++);
		{
			$var($String, ichar, nullptr)
			switch (k) {
			case u'*':
				{}
			case u'?':
				{}
			case u',':
				{}
			case u':':
				{}
			case u'\n':
				{
					$assign(ichar, (k == u'\n') ? "\\n"_s : $str({""_s, $$str(k)}));
					$throwNew($MalformedObjectNameException, $$str({"Invalid character in key: `"_s, ichar, "\'"_s}));
				}
			case u'=':
				{
					endKey = next - 1;
					break;
				}
			default:
				{
					if (next < len) {
						continue;
					} else {
						endKey = next;
					}
				}
			}
		}
		break;
	}
	return endKey;
}

$ints* ObjectName::parseValue($chars* s, int32_t startValue) {
	$init(ObjectName);
	$useLocalCurrentObjectStackCache();
	bool value_pattern = false;
	int32_t next = startValue;
	int32_t endValue = startValue;
	int32_t len = $nc(s)->length;
	char16_t q = s->get(startValue);
	if (q == u'\"') {
		if (++next == len) {
			$throwNew($MalformedObjectNameException, "Invalid quote"_s);
		}
		while (next < len) {
			char16_t last = s->get(next);
			if (last == u'\\') {
				if (++next == len) {
					$throwNew($MalformedObjectNameException, "Invalid unterminated quoted character sequence"_s);
				}
				last = s->get(next);
				switch (last) {
				case u'\\':
					{}
				case u'?':
					{}
				case u'*':
					{}
				case u'n':
					{
						break;
					}
				case u'\"':
					{
						if (next + 1 == len) {
							$throwNew($MalformedObjectNameException, "Missing termination quote"_s);
						}
						break;
					}
				default:
					{
						$throwNew($MalformedObjectNameException, $$str({"Invalid quoted character sequence \'\\"_s, $$str(last), "\'"_s}));
					}
				}
			} else if (last == u'\n') {
				$throwNew($MalformedObjectNameException, "Newline in quoted value"_s);
			} else if (last == u'\"') {
				++next;
				break;
			} else {
				switch (last) {
				case u'?':
					{}
				case u'*':
					{
						value_pattern = true;
						break;
					}
				}
			}
			++next;
			if ((next >= len) && (last != u'\"')) {
				$throwNew($MalformedObjectNameException, "Missing termination quote"_s);
			}
		}
		endValue = next;
		if (next < len) {
			if (s->get(next++) != u',') {
				$throwNew($MalformedObjectNameException, "Invalid quote"_s);
			}
		}
	} else {
		while (next < len) {
			char16_t v = s->get(next++);
			{
				$var($String, ichar, nullptr)
				switch (v) {
				case u'*':
					{}
				case u'?':
					{
						value_pattern = true;
						if (next < len) {
							continue;
						} else {
							endValue = next;
						}
						break;
					}
				case u'=':
					{}
				case u':':
					{}
				case u'\n':
					{
						$assign(ichar, (v == u'\n') ? "\\n"_s : $str({""_s, $$str(v)}));
						$throwNew($MalformedObjectNameException, $$str({"Invalid character `"_s, ichar, "\' in value"_s}));
					}
				case u',':
					{
						endValue = next - 1;
						break;
					}
				default:
					{
						if (next < len) {
							continue;
						} else {
							endValue = next;
						}
					}
				}
			}
			break;
		}
	}
	return $new($ints, {
		endValue,
		value_pattern ? 1 : 0
	});
}

bool ObjectName::checkValue($String* val) {
	$init(ObjectName);
	$useLocalCurrentObjectStackCache();
	if (val == nullptr) {
		$throwNew($NullPointerException, "Invalid value (null)"_s);
	}
	int32_t len = $nc(val)->length();
	if (len == 0) {
		return false;
	}
	$var($chars, s, val->toCharArray());
	$var($ints, result, parseValue(s, 0));
	int32_t endValue = $nc(result)->get(0);
	bool value_pattern = result->get(1) == 1;
	if (endValue < len) {
		$throwNew($MalformedObjectNameException, $$str({"Invalid character in value: `"_s, $$str(s->get(endValue)), "\'"_s}));
	}
	return value_pattern;
}

void ObjectName::checkKey($String* key) {
	$init(ObjectName);
	$useLocalCurrentObjectStackCache();
	if (key == nullptr) {
		$throwNew($NullPointerException, "Invalid key (null)"_s);
	}
	int32_t len = $nc(key)->length();
	if (len == 0) {
		$throwNew($MalformedObjectNameException, "Invalid key (empty)"_s);
	}
	$var($chars, k, key->toCharArray());
	int32_t endKey = parseKey(k, 0);
	if (endKey < len) {
		$throwNew($MalformedObjectNameException, $$str({"Invalid character in value: `"_s, $$str(k->get(endKey)), "\'"_s}));
	}
}

bool ObjectName::isDomain($String* domain) {
	if (domain == nullptr) {
		return true;
	}
	int32_t len = $nc(domain)->length();
	int32_t next = 0;
	while (next < len) {
		char16_t c = domain->charAt(next++);
		switch (c) {
		case u':':
			{}
		case u'\n':
			{
				return false;
			}
		case u'*':
			{}
		case u'?':
			{
				setDomainPattern(true);
				break;
			}
		}
	}
	return true;
}

int32_t ObjectName::getDomainLength() {
	return (int32_t)(this->_compressed_storage & (uint32_t)ObjectName::DOMAIN_LENGTH_MASK);
}

void ObjectName::setDomainLength(int32_t length) {
	$useLocalCurrentObjectStackCache();
	if (((int32_t)(length & (uint32_t)ObjectName::FLAG_MASK)) != 0) {
		$throwNew($MalformedObjectNameException, $$str({"Domain name too long. Maximum allowed domain name length is:"_s, $$str(ObjectName::DOMAIN_LENGTH_MASK)}));
	}
	this->_compressed_storage = ((int32_t)(this->_compressed_storage & (uint32_t)ObjectName::FLAG_MASK)) | length;
}

void ObjectName::readObject($ObjectInputStream* in) {
	$useLocalCurrentObjectStackCache();
	$var($String, cn, nullptr);
	if (ObjectName::compat) {
		$var($ObjectInputStream$GetField, fields, $nc(in)->readFields());
		$var($String, propListString, $cast($String, $nc(fields)->get("propertyListString"_s, $of(""_s))));
		bool propPattern = fields->get("propertyPattern"_s, false);
		if (propPattern) {
			$assign(propListString, $nc(propListString)->length() == 0 ? "*"_s : ($str({propListString, ",*"_s})));
		}
		$assign(cn, $str({$cast($String, $(fields->get("domain"_s, $of("default"_s)))), ":"_s, propListString}));
	} else {
		$nc(in)->defaultReadObject();
		$assign(cn, $cast($String, in->readObject()));
	}
	try {
		construct(cn);
	} catch ($NullPointerException& e) {
		$throwNew($InvalidObjectException, $(e->toString()));
	} catch ($MalformedObjectNameException& e) {
		$throwNew($InvalidObjectException, $(e->toString()));
	}
}

void ObjectName::writeObject($ObjectOutputStream* out) {
	$useLocalCurrentObjectStackCache();
	if (ObjectName::compat) {
		$var($ObjectOutputStream$PutField, fields, $nc(out)->putFields());
		$nc(fields)->put("domain"_s, $($of($nc(this->_canonicalName)->substring(0, getDomainLength()))));
		fields->put("propertyList"_s, $($of(getKeyPropertyList())));
		fields->put("propertyListString"_s, $($of(getKeyPropertyListString())));
		fields->put("canonicalName"_s, $of(this->_canonicalName));
		fields->put("pattern"_s, ((int32_t)(this->_compressed_storage & (uint32_t)(ObjectName::DOMAIN_PATTERN | ObjectName::PROPLIST_PATTERN))) != 0);
		fields->put("propertyPattern"_s, isPropertyListPattern());
		out->writeFields();
	} else {
		$nc(out)->defaultWriteObject();
		out->writeObject($(getSerializedNameString()));
	}
}

ObjectName* ObjectName::getInstance($String* name) {
	$init(ObjectName);
	return $new(ObjectName, name);
}

ObjectName* ObjectName::getInstance($String* domain, $String* key, $String* value) {
	$init(ObjectName);
	return $new(ObjectName, domain, key, value);
}

ObjectName* ObjectName::getInstance($String* domain, $Hashtable* table) {
	$init(ObjectName);
	return $new(ObjectName, domain, table);
}

ObjectName* ObjectName::getInstance(ObjectName* name) {
	$init(ObjectName);
	if ($of($nc($of(name))->getClass())->equals(ObjectName::class$)) {
		return name;
	}
	return $Util::newObjectName($($nc(name)->getSerializedNameString()));
}

void ObjectName::init$($String* name) {
	this->_compressed_storage = 0;
	construct(name);
}

void ObjectName::init$($String* domain, $String* key, $String* value) {
	this->_compressed_storage = 0;
	$var($Map, table, $Collections::singletonMap(key, value));
	construct(domain, table);
}

void ObjectName::init$($String* domain, $Hashtable* table) {
	this->_compressed_storage = 0;
	construct(domain, table);
}

bool ObjectName::isPattern() {
	return ((int32_t)(this->_compressed_storage & (uint32_t)ObjectName::FLAG_MASK)) != 0;
}

bool ObjectName::isDomainPattern() {
	return ((int32_t)(this->_compressed_storage & (uint32_t)ObjectName::DOMAIN_PATTERN)) != 0;
}

void ObjectName::setDomainPattern(bool value) {
	if (value) {
		this->_compressed_storage |= ObjectName::DOMAIN_PATTERN;
	} else {
		this->_compressed_storage &= (uint32_t)~ObjectName::DOMAIN_PATTERN;
	}
}

bool ObjectName::isPropertyPattern() {
	return ((int32_t)(this->_compressed_storage & (uint32_t)(ObjectName::PROPVAL_PATTERN | ObjectName::PROPLIST_PATTERN))) != 0;
}

bool ObjectName::isPropertyListPattern() {
	return ((int32_t)(this->_compressed_storage & (uint32_t)ObjectName::PROPLIST_PATTERN)) != 0;
}

void ObjectName::setPropertyListPattern(bool value) {
	if (value) {
		this->_compressed_storage |= ObjectName::PROPLIST_PATTERN;
	} else {
		this->_compressed_storage &= (uint32_t)~ObjectName::PROPLIST_PATTERN;
	}
}

bool ObjectName::isPropertyValuePattern() {
	return ((int32_t)(this->_compressed_storage & (uint32_t)ObjectName::PROPVAL_PATTERN)) != 0;
}

void ObjectName::setPropertyValuePattern(bool value) {
	if (value) {
		this->_compressed_storage |= ObjectName::PROPVAL_PATTERN;
	} else {
		this->_compressed_storage &= (uint32_t)~ObjectName::PROPVAL_PATTERN;
	}
}

bool ObjectName::isPropertyValuePattern($String* property) {
	$useLocalCurrentObjectStackCache();
	if (property == nullptr) {
		$throwNew($NullPointerException, "key property can\'t be null"_s);
	}
	for (int32_t i = 0; i < $nc(this->_ca_array)->length; ++i) {
		$var($ObjectName$Property, prop, $nc(this->_ca_array)->get(i));
		$var($String, key, $nc(prop)->getKeyString(this->_canonicalName));
		if ($nc(key)->equals(property)) {
			return ($instanceOf($ObjectName$PatternProperty, prop));
		}
	}
	$throwNew($IllegalArgumentException, "key property not found"_s);
}

$String* ObjectName::getCanonicalName() {
	return this->_canonicalName;
}

$String* ObjectName::getDomain() {
	return $nc(this->_canonicalName)->substring(0, getDomainLength());
}

$String* ObjectName::getKeyProperty($String* property) {
	return $cast($String, $nc($(_getKeyPropertyList()))->get(property));
}

$Map* ObjectName::_getKeyPropertyList() {
	$useLocalCurrentObjectStackCache();
	$synchronized(this) {
		if (this->_propertyList == nullptr) {
			$set(this, _propertyList, $new($HashMap));
			int32_t len = $nc(this->_ca_array)->length;
			$var($ObjectName$Property, prop, nullptr);
			for (int32_t i = len - 1; i >= 0; --i) {
				$assign(prop, $nc(this->_ca_array)->get(i));
				$var($Object, var$0, $of($nc(prop)->getKeyString(this->_canonicalName)));
				$nc(this->_propertyList)->put(var$0, $(prop->getValueString(this->_canonicalName)));
			}
		}
	}
	return this->_propertyList;
}

$Hashtable* ObjectName::getKeyPropertyList() {
	return $new($Hashtable, $(_getKeyPropertyList()));
}

$String* ObjectName::getKeyPropertyListString() {
	$useLocalCurrentObjectStackCache();
	if ($nc(this->_kp_array)->length == 0) {
		return ""_s;
	}
	int32_t var$1 = $nc(this->_canonicalName)->length();
	int32_t var$0 = var$1 - getDomainLength() - 1;
	int32_t total_size = var$0 - (isPropertyListPattern() ? 2 : 0);
	$var($chars, dest_chars, $new($chars, total_size));
	$var($chars, value, $nc(this->_canonicalName)->toCharArray());
	writeKeyPropertyListString(value, dest_chars, 0);
	return $new($String, dest_chars);
}

$String* ObjectName::getSerializedNameString() {
	$useLocalCurrentObjectStackCache();
	int32_t total_size = $nc(this->_canonicalName)->length();
	$var($chars, dest_chars, $new($chars, total_size));
	$var($chars, value, $nc(this->_canonicalName)->toCharArray());
	int32_t offset = getDomainLength() + 1;
	$System::arraycopy(value, 0, dest_chars, 0, offset);
	int32_t end = writeKeyPropertyListString(value, dest_chars, offset);
	if (isPropertyListPattern()) {
		if (end == offset) {
			dest_chars->set(end, u'*');
		} else {
			dest_chars->set(end, u',');
			dest_chars->set(end + 1, u'*');
		}
	}
	return $new($String, dest_chars);
}

int32_t ObjectName::writeKeyPropertyListString($chars* canonicalChars, $chars* data, int32_t offset) {
	$useLocalCurrentObjectStackCache();
	if ($nc(this->_kp_array)->length == 0) {
		return offset;
	}
	$var($chars, dest_chars, data);
	$var($chars, value, canonicalChars);
	int32_t index = offset;
	int32_t len = $nc(this->_kp_array)->length;
	int32_t last = len - 1;
	for (int32_t i = 0; i < len; ++i) {
		$var($ObjectName$Property, prop, $nc(this->_kp_array)->get(i));
		int32_t prop_len = $nc(prop)->_key_length + prop->_value_length + 1;
		$System::arraycopy(value, prop->_key_index, dest_chars, index, prop_len);
		index += prop_len;
		if (i < last) {
			$nc(dest_chars)->set(index++, u',');
		}
	}
	return index;
}

$String* ObjectName::getCanonicalKeyPropertyListString() {
	if ($nc(this->_ca_array)->length == 0) {
		return ""_s;
	}
	int32_t len = $nc(this->_canonicalName)->length();
	if (isPropertyListPattern()) {
		len -= 2;
	}
	return $nc(this->_canonicalName)->substring(getDomainLength() + 1, len);
}

$String* ObjectName::toString() {
	return getSerializedNameString();
}

bool ObjectName::equals(Object$* object) {
	$useLocalCurrentObjectStackCache();
	if ($equals(this, object)) {
		return true;
	}
	if (!($instanceOf(ObjectName, object))) {
		return false;
	}
	$var(ObjectName, on, $cast(ObjectName, object));
	$var($String, on_string, $nc(on)->_canonicalName);
	if (this->_canonicalName == on_string) {
		return true;
	}
	return false;
}

int32_t ObjectName::hashCode() {
	return $nc(this->_canonicalName)->hashCode();
}

$String* ObjectName::quote($String* s) {
	$init(ObjectName);
	$var($StringBuilder, buf, $new($StringBuilder, "\""_s));
	int32_t len = $nc(s)->length();
	for (int32_t i = 0; i < len; ++i) {
		char16_t c = s->charAt(i);
		switch (c) {
		case u'\n':
			{
				c = u'n';
				buf->append(u'\\');
				break;
			}
		case u'\\':
			{}
		case u'\"':
			{}
		case u'*':
			{}
		case u'?':
			{
				buf->append(u'\\');
				break;
			}
		}
		buf->append(c);
	}
	buf->append(u'\"');
	return buf->toString();
}

$String* ObjectName::unquote($String* q) {
	$init(ObjectName);
	$useLocalCurrentObjectStackCache();
	$var($StringBuilder, buf, $new($StringBuilder));
	int32_t len = $nc(q)->length();
	bool var$0 = len < 2 || q->charAt(0) != u'\"';
	if (var$0 || q->charAt(len - 1) != u'\"') {
		$throwNew($IllegalArgumentException, "Argument not quoted"_s);
	}
	for (int32_t i = 1; i < len - 1; ++i) {
		char16_t c = q->charAt(i);
		if (c == u'\\') {
			if (i == len - 2) {
				$throwNew($IllegalArgumentException, "Trailing backslash"_s);
			}
			c = q->charAt(++i);
			switch (c) {
			case u'n':
				{
					c = u'\n';
					break;
				}
			case u'\\':
				{}
			case u'\"':
				{}
			case u'*':
				{}
			case u'?':
				{
					break;
				}
			default:
				{
					$throwNew($IllegalArgumentException, $$str({"Bad character \'"_s, $$str(c), "\' after backslash"_s}));
				}
			}
		} else {
			switch (c) {
			case u'*':
				{}
			case u'?':
				{}
			case u'\"':
				{}
			case u'\n':
				{
					$throwNew($IllegalArgumentException, $$str({"Invalid unescaped character \'"_s, $$str(c), "\' in the string to unquote"_s}));
				}
			}
		}
		buf->append(c);
	}
	return buf->toString();
}

bool ObjectName::apply(ObjectName* name) {
	if (name == nullptr) {
		$throwNew($NullPointerException);
	}
	if ($nc(name)->isPattern()) {
		return false;
	}
	if (!isPattern()) {
		return $nc(this->_canonicalName)->equals($nc(name)->_canonicalName);
	}
	bool var$0 = matchDomains(name);
	return var$0 && matchKeys(name);
}

bool ObjectName::matchDomains(ObjectName* name) {
	$useLocalCurrentObjectStackCache();
	if (isDomainPattern()) {
		$var($String, var$0, $nc(name)->getDomain());
		return $Util::wildmatch(var$0, $(getDomain()));
	}
	return $nc($(getDomain()))->equals($($nc(name)->getDomain()));
}

bool ObjectName::matchKeys(ObjectName* name) {
	$useLocalCurrentObjectStackCache();
	bool var$0 = isPropertyValuePattern();
	if (var$0 && !isPropertyListPattern() && ($nc($nc(name)->_ca_array)->length != $nc(this->_ca_array)->length)) {
		return false;
	}
	if (isPropertyPattern()) {
		$var($Map, nameProps, $nc(name)->_getKeyPropertyList());
		$var($ObjectName$PropertyArray, props, this->_ca_array);
		$var($String, cn, this->_canonicalName);
		for (int32_t i = $nc(props)->length - 1; i >= 0; --i) {
			$var($ObjectName$Property, p, props->get(i));
			$var($String, k, $nc(p)->getKeyString(cn));
			$var($String, v, $cast($String, $nc(nameProps)->get(k)));
			if (v == nullptr) {
				return false;
			}
			if (isPropertyValuePattern() && ($instanceOf($ObjectName$PatternProperty, p))) {
				if ($Util::wildmatch(v, $(p->getValueString(cn)))) {
					continue;
				} else {
					return false;
				}
			}
			if ($nc(v)->equals($(p->getValueString(cn)))) {
				continue;
			}
			return false;
		}
		return true;
	}
	$var($String, p1, $nc(name)->getCanonicalKeyPropertyListString());
	$var($String, p2, getCanonicalKeyPropertyListString());
	return ($nc(p1)->equals(p2));
}

void ObjectName::setMBeanServer($MBeanServer* mbs) {
}

int32_t ObjectName::compareTo(ObjectName* name) {
	$useLocalCurrentObjectStackCache();
	if (name == this) {
		return 0;
	}
	int32_t domainValue = $nc($(this->getDomain()))->compareTo($($nc(name)->getDomain()));
	if (domainValue != 0) {
		return domainValue;
	}
	$var($String, thisTypeKey, this->getKeyProperty("type"_s));
	$var($String, anotherTypeKey, $nc(name)->getKeyProperty("type"_s));
	if (thisTypeKey == nullptr) {
		$assign(thisTypeKey, ""_s);
	}
	if (anotherTypeKey == nullptr) {
		$assign(anotherTypeKey, ""_s);
	}
	int32_t typeKeyValue = $nc(thisTypeKey)->compareTo(anotherTypeKey);
	if (typeKeyValue != 0) {
		return typeKeyValue;
	}
	return $nc($(this->getCanonicalName()))->compareTo($(name->getCanonicalName()));
}

int32_t ObjectName::compareTo(Object$* name) {
	return this->compareTo($cast(ObjectName, name));
}

void clinit$ObjectName($Class* class$) {
	$useLocalCurrentObjectStackCache();
	$beforeCallerSensitive();
	$load($Hashtable);
	$init($Boolean);
	$assignStatic(ObjectName::oldSerialPersistentFields, $new($ObjectStreamFieldArray, {
		$$new($ObjectStreamField, "domain"_s, $String::class$),
		$$new($ObjectStreamField, "propertyList"_s, $Hashtable::class$),
		$$new($ObjectStreamField, "propertyListString"_s, $String::class$),
		$$new($ObjectStreamField, "canonicalName"_s, $String::class$),
		$$new($ObjectStreamField, "pattern"_s, $Boolean::TYPE),
		$$new($ObjectStreamField, "propertyPattern"_s, $Boolean::TYPE)
	}));
	$assignStatic(ObjectName::newSerialPersistentFields, $new($ObjectStreamFieldArray, 0));
	ObjectName::compat = false;
	{
		try {
			$var($GetPropertyAction, act, $new($GetPropertyAction, "jmx.serial.form"_s));
			$var($String, form, $cast($String, $AccessController::doPrivileged(static_cast<$PrivilegedAction*>(act))));
			ObjectName::compat = (form != nullptr && form->equals("1.0"_s));
		} catch ($Exception& e) {
		}
		if (ObjectName::compat) {
			$assignStatic(ObjectName::serialPersistentFields, ObjectName::oldSerialPersistentFields);
			ObjectName::serialVersionUID = ObjectName::oldSerialVersionUID;
		} else {
			$assignStatic(ObjectName::serialPersistentFields, ObjectName::newSerialPersistentFields);
			ObjectName::serialVersionUID = ObjectName::newSerialVersionUID;
		}
	}
	$assignStatic(ObjectName::_Empty_property_array, $new($ObjectName$PropertyArray, 0));
	$assignStatic(ObjectName::WILDCARD, $Util::newObjectName("*:*"_s));
}

ObjectName::ObjectName() {
}

$Class* ObjectName::load$($String* name, bool initialize) {
	$loadClass(ObjectName, name, initialize, &_ObjectName_ClassInfo_, clinit$ObjectName, allocate$ObjectName);
	return class$;
}

$Class* ObjectName::class$ = nullptr;

	} // management
} // javax
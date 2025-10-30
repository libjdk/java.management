#include <javax/management/MBeanPermission.h>

#include <java/io/ObjectInputStream.h>
#include <java/security/Permission.h>
#include <javax/management/JMException.h>
#include <javax/management/MalformedObjectNameException.h>
#include <javax/management/ObjectName.h>
#include <javax/management/OperationsException.h>
#include <jcpp.h>

#undef ALL
#undef NONE
#undef WILDCARD

using $ObjectInputStream = ::java::io::ObjectInputStream;
using $AbstractStringBuilder = ::java::lang::AbstractStringBuilder;
using $ClassInfo = ::java::lang::ClassInfo;
using $Exception = ::java::lang::Exception;
using $FieldInfo = ::java::lang::FieldInfo;
using $IllegalArgumentException = ::java::lang::IllegalArgumentException;
using $MethodInfo = ::java::lang::MethodInfo;
using $Permission = ::java::security::Permission;
using $JMException = ::javax::management::JMException;
using $MalformedObjectNameException = ::javax::management::MalformedObjectNameException;
using $ObjectName = ::javax::management::ObjectName;
using $OperationsException = ::javax::management::OperationsException;

namespace javax {
	namespace management {

$FieldInfo _MBeanPermission_FieldInfo_[] = {
	{"serialVersionUID", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(MBeanPermission, serialVersionUID)},
	{"AddNotificationListener", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(MBeanPermission, AddNotificationListener)},
	{"GetAttribute", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(MBeanPermission, GetAttribute)},
	{"GetClassLoader", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(MBeanPermission, GetClassLoader)},
	{"GetClassLoaderFor", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(MBeanPermission, GetClassLoaderFor)},
	{"GetClassLoaderRepository", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(MBeanPermission, GetClassLoaderRepository)},
	{"GetDomains", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(MBeanPermission, GetDomains)},
	{"GetMBeanInfo", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(MBeanPermission, GetMBeanInfo)},
	{"GetObjectInstance", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(MBeanPermission, GetObjectInstance)},
	{"Instantiate", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(MBeanPermission, Instantiate)},
	{"Invoke", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(MBeanPermission, Invoke)},
	{"IsInstanceOf", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(MBeanPermission, IsInstanceOf)},
	{"QueryMBeans", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(MBeanPermission, QueryMBeans)},
	{"QueryNames", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(MBeanPermission, QueryNames)},
	{"RegisterMBean", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(MBeanPermission, RegisterMBean)},
	{"RemoveNotificationListener", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(MBeanPermission, RemoveNotificationListener)},
	{"SetAttribute", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(MBeanPermission, SetAttribute)},
	{"UnregisterMBean", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(MBeanPermission, UnregisterMBean)},
	{"NONE", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(MBeanPermission, NONE)},
	{"ALL", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(MBeanPermission, ALL)},
	{"actions", "Ljava/lang/String;", nullptr, $PRIVATE, $field(MBeanPermission, actions)},
	{"mask", "I", nullptr, $PRIVATE | $TRANSIENT, $field(MBeanPermission, mask)},
	{"classNamePrefix", "Ljava/lang/String;", nullptr, $PRIVATE | $TRANSIENT, $field(MBeanPermission, classNamePrefix)},
	{"classNameExactMatch", "Z", nullptr, $PRIVATE | $TRANSIENT, $field(MBeanPermission, classNameExactMatch)},
	{"member", "Ljava/lang/String;", nullptr, $PRIVATE | $TRANSIENT, $field(MBeanPermission, member)},
	{"objectName", "Ljavax/management/ObjectName;", nullptr, $PRIVATE | $TRANSIENT, $field(MBeanPermission, objectName)},
	{}
};

$MethodInfo _MBeanPermission_MethodInfo_[] = {
	{"<init>", "(Ljava/lang/String;Ljava/lang/String;)V", nullptr, $PUBLIC, $method(static_cast<void(MBeanPermission::*)($String*,$String*)>(&MBeanPermission::init$))},
	{"<init>", "(Ljava/lang/String;Ljava/lang/String;Ljavax/management/ObjectName;Ljava/lang/String;)V", nullptr, $PUBLIC, $method(static_cast<void(MBeanPermission::*)($String*,$String*,$ObjectName*,$String*)>(&MBeanPermission::init$))},
	{"equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"getActions", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"getActions", "(I)Ljava/lang/String;", nullptr, $PRIVATE | $STATIC, $method(static_cast<$String*(*)(int32_t)>(&MBeanPermission::getActions))},
	{"getMask", "(Ljava/lang/String;)I", nullptr, $PRIVATE | $STATIC, $method(static_cast<int32_t(*)($String*)>(&MBeanPermission::getMask))},
	{"hashCode", "()I", nullptr, $PUBLIC},
	{"implies", "(Ljava/security/Permission;)Z", nullptr, $PUBLIC},
	{"initName", "(Ljava/lang/String;Ljava/lang/String;Ljavax/management/ObjectName;)V", nullptr, $PRIVATE, $method(static_cast<void(MBeanPermission::*)($String*,$String*,$ObjectName*)>(&MBeanPermission::initName))},
	{"makeName", "(Ljava/lang/String;Ljava/lang/String;Ljavax/management/ObjectName;)Ljava/lang/String;", nullptr, $PRIVATE | $STATIC, $method(static_cast<$String*(*)($String*,$String*,$ObjectName*)>(&MBeanPermission::makeName))},
	{"parseActions", "()V", nullptr, $PRIVATE, $method(static_cast<void(MBeanPermission::*)()>(&MBeanPermission::parseActions))},
	{"parseName", "()V", nullptr, $PRIVATE, $method(static_cast<void(MBeanPermission::*)()>(&MBeanPermission::parseName))},
	{"readObject", "(Ljava/io/ObjectInputStream;)V", nullptr, $PRIVATE, $method(static_cast<void(MBeanPermission::*)($ObjectInputStream*)>(&MBeanPermission::readObject)), "java.io.IOException,java.lang.ClassNotFoundException"},
	{"setClassName", "(Ljava/lang/String;)V", nullptr, $PRIVATE, $method(static_cast<void(MBeanPermission::*)($String*)>(&MBeanPermission::setClassName))},
	{"setMember", "(Ljava/lang/String;)V", nullptr, $PRIVATE, $method(static_cast<void(MBeanPermission::*)($String*)>(&MBeanPermission::setMember))},
	{}
};

$ClassInfo _MBeanPermission_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"javax.management.MBeanPermission",
	"java.security.Permission",
	nullptr,
	_MBeanPermission_FieldInfo_,
	_MBeanPermission_MethodInfo_
};

$Object* allocate$MBeanPermission($Class* clazz) {
	return $of($alloc(MBeanPermission));
}

void MBeanPermission::parseActions() {
	int32_t mask = 0;
	if (this->actions == nullptr) {
		$throwNew($IllegalArgumentException, "MBeanPermission: actions can\'t be null"_s);
	}
	if ($nc(this->actions)->isEmpty()) {
		$throwNew($IllegalArgumentException, "MBeanPermission: actions can\'t be empty"_s);
	}
	mask = getMask(this->actions);
	if (((int32_t)(mask & (uint32_t)MBeanPermission::ALL)) != mask) {
		$throwNew($IllegalArgumentException, "Invalid actions mask"_s);
	}
	if (mask == MBeanPermission::NONE) {
		$throwNew($IllegalArgumentException, "Invalid actions mask"_s);
	}
	this->mask = mask;
}

void MBeanPermission::parseName() {
	$useLocalCurrentObjectStackCache();
	$var($String, name, getName());
	if (name == nullptr) {
		$throwNew($IllegalArgumentException, "MBeanPermission name cannot be null"_s);
	}
	if ($nc(name)->isEmpty()) {
		$throwNew($IllegalArgumentException, "MBeanPermission name cannot be empty"_s);
	}
	int32_t openingBracket = $nc(name)->indexOf((int32_t)u'[');
	if (openingBracket == -1) {
		$init($ObjectName);
		$set(this, objectName, $ObjectName::WILDCARD);
	} else {
		if (!name->endsWith("]"_s)) {
			$throwNew($IllegalArgumentException, "MBeanPermission: The ObjectName in the target name must be included in square brackets"_s);
		} else {
			try {
				$var($String, on, name->substring(openingBracket + 1, name->length() - 1));
				if (on->isEmpty()) {
					$init($ObjectName);
					$set(this, objectName, $ObjectName::WILDCARD);
				} else if (on->equals("-"_s)) {
					$set(this, objectName, nullptr);
				} else {
					$set(this, objectName, $new($ObjectName, on));
				}
			} catch ($MalformedObjectNameException& e) {
				$throwNew($IllegalArgumentException, "MBeanPermission: The target name does not specify a valid ObjectName"_s, e);
			}
		}
		$assign(name, name->substring(0, openingBracket));
	}
	int32_t poundSign = name->indexOf((int32_t)u'#');
	if (poundSign == -1) {
		setMember("*"_s);
	} else {
		$var($String, memberName, name->substring(poundSign + 1));
		setMember(memberName);
		$assign(name, name->substring(0, poundSign));
	}
	setClassName(name);
}

void MBeanPermission::initName($String* className, $String* member, $ObjectName* objectName) {
	setClassName(className);
	setMember(member);
	$set(this, objectName, objectName);
}

void MBeanPermission::setClassName($String* className) {
	if (className == nullptr || $nc(className)->equals("-"_s)) {
		$set(this, classNamePrefix, nullptr);
		this->classNameExactMatch = false;
	} else {
		bool var$1 = className->isEmpty();
		if (var$1 || className->equals("*"_s)) {
			$set(this, classNamePrefix, ""_s);
			this->classNameExactMatch = false;
		} else if (className->endsWith(".*"_s)) {
			$set(this, classNamePrefix, className->substring(0, className->length() - 1));
			this->classNameExactMatch = false;
		} else {
			$set(this, classNamePrefix, className);
			this->classNameExactMatch = true;
		}
	}
}

void MBeanPermission::setMember($String* member) {
	if (member == nullptr || $nc(member)->equals("-"_s)) {
		$set(this, member, nullptr);
	} else if (member->isEmpty()) {
		$set(this, member, "*"_s);
	} else {
		$set(this, member, member);
	}
}

void MBeanPermission::init$($String* name, $String* actions) {
	$Permission::init$(name);
	parseName();
	$set(this, actions, actions);
	parseActions();
}

void MBeanPermission::init$($String* className, $String* member, $ObjectName* objectName, $String* actions) {
	$Permission::init$($(makeName(className, member, objectName)));
	initName(className, member, objectName);
	$set(this, actions, actions);
	parseActions();
}

$String* MBeanPermission::makeName($String* className$renamed, $String* member$renamed, $ObjectName* objectName) {
	$init(MBeanPermission);
	$useLocalCurrentObjectStackCache();
	$var($String, member, member$renamed);
	$var($String, className, className$renamed);
	$var($StringBuilder, name, $new($StringBuilder));
	if (className == nullptr) {
		$assign(className, "-"_s);
	}
	name->append(className);
	if (member == nullptr) {
		$assign(member, "-"_s);
	}
	name->append(u'#')->append(member);
	if (objectName == nullptr) {
		name->append("[-]"_s);
	} else {
		name->append(u'[')->append($($nc(objectName)->getCanonicalName()))->append(u']');
	}
	if (name->length() == 0) {
		return "*"_s;
	} else {
		return name->toString();
	}
}

$String* MBeanPermission::getActions() {
	if (this->actions == nullptr) {
		$set(this, actions, getActions(this->mask));
	}
	return this->actions;
}

$String* MBeanPermission::getActions(int32_t mask) {
	$init(MBeanPermission);
	$var($StringBuilder, sb, $new($StringBuilder));
	bool comma = false;
	if (((int32_t)(mask & (uint32_t)MBeanPermission::AddNotificationListener)) == MBeanPermission::AddNotificationListener) {
		comma = true;
		sb->append("addNotificationListener"_s);
	}
	if (((int32_t)(mask & (uint32_t)MBeanPermission::GetAttribute)) == MBeanPermission::GetAttribute) {
		if (comma) {
			sb->append(u',');
		} else {
			comma = true;
		}
		sb->append("getAttribute"_s);
	}
	if (((int32_t)(mask & (uint32_t)MBeanPermission::GetClassLoader)) == MBeanPermission::GetClassLoader) {
		if (comma) {
			sb->append(u',');
		} else {
			comma = true;
		}
		sb->append("getClassLoader"_s);
	}
	if (((int32_t)(mask & (uint32_t)MBeanPermission::GetClassLoaderFor)) == MBeanPermission::GetClassLoaderFor) {
		if (comma) {
			sb->append(u',');
		} else {
			comma = true;
		}
		sb->append("getClassLoaderFor"_s);
	}
	if (((int32_t)(mask & (uint32_t)MBeanPermission::GetClassLoaderRepository)) == MBeanPermission::GetClassLoaderRepository) {
		if (comma) {
			sb->append(u',');
		} else {
			comma = true;
		}
		sb->append("getClassLoaderRepository"_s);
	}
	if (((int32_t)(mask & (uint32_t)MBeanPermission::GetDomains)) == MBeanPermission::GetDomains) {
		if (comma) {
			sb->append(u',');
		} else {
			comma = true;
		}
		sb->append("getDomains"_s);
	}
	if (((int32_t)(mask & (uint32_t)MBeanPermission::GetMBeanInfo)) == MBeanPermission::GetMBeanInfo) {
		if (comma) {
			sb->append(u',');
		} else {
			comma = true;
		}
		sb->append("getMBeanInfo"_s);
	}
	if (((int32_t)(mask & (uint32_t)MBeanPermission::GetObjectInstance)) == MBeanPermission::GetObjectInstance) {
		if (comma) {
			sb->append(u',');
		} else {
			comma = true;
		}
		sb->append("getObjectInstance"_s);
	}
	if (((int32_t)(mask & (uint32_t)MBeanPermission::Instantiate)) == MBeanPermission::Instantiate) {
		if (comma) {
			sb->append(u',');
		} else {
			comma = true;
		}
		sb->append("instantiate"_s);
	}
	if (((int32_t)(mask & (uint32_t)MBeanPermission::Invoke)) == MBeanPermission::Invoke) {
		if (comma) {
			sb->append(u',');
		} else {
			comma = true;
		}
		sb->append("invoke"_s);
	}
	if (((int32_t)(mask & (uint32_t)MBeanPermission::IsInstanceOf)) == MBeanPermission::IsInstanceOf) {
		if (comma) {
			sb->append(u',');
		} else {
			comma = true;
		}
		sb->append("isInstanceOf"_s);
	}
	if (((int32_t)(mask & (uint32_t)MBeanPermission::QueryMBeans)) == MBeanPermission::QueryMBeans) {
		if (comma) {
			sb->append(u',');
		} else {
			comma = true;
		}
		sb->append("queryMBeans"_s);
	}
	if (((int32_t)(mask & (uint32_t)MBeanPermission::QueryNames)) == MBeanPermission::QueryNames) {
		if (comma) {
			sb->append(u',');
		} else {
			comma = true;
		}
		sb->append("queryNames"_s);
	}
	if (((int32_t)(mask & (uint32_t)MBeanPermission::RegisterMBean)) == MBeanPermission::RegisterMBean) {
		if (comma) {
			sb->append(u',');
		} else {
			comma = true;
		}
		sb->append("registerMBean"_s);
	}
	if (((int32_t)(mask & (uint32_t)MBeanPermission::RemoveNotificationListener)) == MBeanPermission::RemoveNotificationListener) {
		if (comma) {
			sb->append(u',');
		} else {
			comma = true;
		}
		sb->append("removeNotificationListener"_s);
	}
	if (((int32_t)(mask & (uint32_t)MBeanPermission::SetAttribute)) == MBeanPermission::SetAttribute) {
		if (comma) {
			sb->append(u',');
		} else {
			comma = true;
		}
		sb->append("setAttribute"_s);
	}
	if (((int32_t)(mask & (uint32_t)MBeanPermission::UnregisterMBean)) == MBeanPermission::UnregisterMBean) {
		if (comma) {
			sb->append(u',');
		} else {
			comma = true;
		}
		sb->append("unregisterMBean"_s);
	}
	return sb->toString();
}

int32_t MBeanPermission::hashCode() {
	$useLocalCurrentObjectStackCache();
	int32_t var$0 = $nc($(this->getName()))->hashCode();
	return var$0 + $nc($(this->getActions()))->hashCode();
}

int32_t MBeanPermission::getMask($String* action) {
	$init(MBeanPermission);
	$useLocalCurrentObjectStackCache();
	int32_t mask = MBeanPermission::NONE;
	if (action == nullptr) {
		return mask;
	}
	if ($nc(action)->equals("*"_s)) {
		return MBeanPermission::ALL;
	}
	$var($chars, a, $nc(action)->toCharArray());
	int32_t i = a->length - 1;
	if (i < 0) {
		return mask;
	}
	while (i != -1) {
		char16_t c = 0;
		while (true) {
			bool var$0 = (i != -1);
			if (var$0) {
				bool var$4 = (c = a->get(i)) == u' ';
				bool var$3 = var$4 || c == u'\r';
				bool var$2 = var$3 || c == u'\n';
				bool var$1 = var$2 || c == u'\f';
				var$0 = (var$1 || c == u'\t');
			}
			if (!(var$0)) {
				break;
			}
			{
				--i;
			}
		}
		int32_t matchlen = 0;
		if (i >= 25 && (a->get(i - 25) == u'r') && (a->get(i - 24) == u'e') && (a->get(i - 23) == u'm') && (a->get(i - 22) == u'o') && (a->get(i - 21) == u'v') && (a->get(i - 20) == u'e') && (a->get(i - 19) == u'N') && (a->get(i - 18) == u'o') && (a->get(i - 17) == u't') && (a->get(i - 16) == u'i') && (a->get(i - 15) == u'f') && (a->get(i - 14) == u'i') && (a->get(i - 13) == u'c') && (a->get(i - 12) == u'a') && (a->get(i - 11) == u't') && (a->get(i - 10) == u'i') && (a->get(i - 9) == u'o') && (a->get(i - 8) == u'n') && (a->get(i - 7) == u'L') && (a->get(i - 6) == u'i') && (a->get(i - 5) == u's') && (a->get(i - 4) == u't') && (a->get(i - 3) == u'e') && (a->get(i - 2) == u'n') && (a->get(i - 1) == u'e') && (a->get(i) == u'r')) {
			matchlen = 26;
			mask |= MBeanPermission::RemoveNotificationListener;
		} else if (i >= 23 && (a->get(i - 23) == u'g') && (a->get(i - 22) == u'e') && (a->get(i - 21) == u't') && (a->get(i - 20) == u'C') && (a->get(i - 19) == u'l') && (a->get(i - 18) == u'a') && (a->get(i - 17) == u's') && (a->get(i - 16) == u's') && (a->get(i - 15) == u'L') && (a->get(i - 14) == u'o') && (a->get(i - 13) == u'a') && (a->get(i - 12) == u'd') && (a->get(i - 11) == u'e') && (a->get(i - 10) == u'r') && (a->get(i - 9) == u'R') && (a->get(i - 8) == u'e') && (a->get(i - 7) == u'p') && (a->get(i - 6) == u'o') && (a->get(i - 5) == u's') && (a->get(i - 4) == u'i') && (a->get(i - 3) == u't') && (a->get(i - 2) == u'o') && (a->get(i - 1) == u'r') && (a->get(i) == u'y')) {
			matchlen = 24;
			mask |= MBeanPermission::GetClassLoaderRepository;
		} else if (i >= 22 && (a->get(i - 22) == u'a') && (a->get(i - 21) == u'd') && (a->get(i - 20) == u'd') && (a->get(i - 19) == u'N') && (a->get(i - 18) == u'o') && (a->get(i - 17) == u't') && (a->get(i - 16) == u'i') && (a->get(i - 15) == u'f') && (a->get(i - 14) == u'i') && (a->get(i - 13) == u'c') && (a->get(i - 12) == u'a') && (a->get(i - 11) == u't') && (a->get(i - 10) == u'i') && (a->get(i - 9) == u'o') && (a->get(i - 8) == u'n') && (a->get(i - 7) == u'L') && (a->get(i - 6) == u'i') && (a->get(i - 5) == u's') && (a->get(i - 4) == u't') && (a->get(i - 3) == u'e') && (a->get(i - 2) == u'n') && (a->get(i - 1) == u'e') && (a->get(i) == u'r')) {
			matchlen = 23;
			mask |= MBeanPermission::AddNotificationListener;
		} else if (i >= 16 && (a->get(i - 16) == u'g') && (a->get(i - 15) == u'e') && (a->get(i - 14) == u't') && (a->get(i - 13) == u'C') && (a->get(i - 12) == u'l') && (a->get(i - 11) == u'a') && (a->get(i - 10) == u's') && (a->get(i - 9) == u's') && (a->get(i - 8) == u'L') && (a->get(i - 7) == u'o') && (a->get(i - 6) == u'a') && (a->get(i - 5) == u'd') && (a->get(i - 4) == u'e') && (a->get(i - 3) == u'r') && (a->get(i - 2) == u'F') && (a->get(i - 1) == u'o') && (a->get(i) == u'r')) {
			matchlen = 17;
			mask |= MBeanPermission::GetClassLoaderFor;
		} else if (i >= 16 && (a->get(i - 16) == u'g') && (a->get(i - 15) == u'e') && (a->get(i - 14) == u't') && (a->get(i - 13) == u'O') && (a->get(i - 12) == u'b') && (a->get(i - 11) == u'j') && (a->get(i - 10) == u'e') && (a->get(i - 9) == u'c') && (a->get(i - 8) == u't') && (a->get(i - 7) == u'I') && (a->get(i - 6) == u'n') && (a->get(i - 5) == u's') && (a->get(i - 4) == u't') && (a->get(i - 3) == u'a') && (a->get(i - 2) == u'n') && (a->get(i - 1) == u'c') && (a->get(i) == u'e')) {
			matchlen = 17;
			mask |= MBeanPermission::GetObjectInstance;
		} else if (i >= 14 && (a->get(i - 14) == u'u') && (a->get(i - 13) == u'n') && (a->get(i - 12) == u'r') && (a->get(i - 11) == u'e') && (a->get(i - 10) == u'g') && (a->get(i - 9) == u'i') && (a->get(i - 8) == u's') && (a->get(i - 7) == u't') && (a->get(i - 6) == u'e') && (a->get(i - 5) == u'r') && (a->get(i - 4) == u'M') && (a->get(i - 3) == u'B') && (a->get(i - 2) == u'e') && (a->get(i - 1) == u'a') && (a->get(i) == u'n')) {
			matchlen = 15;
			mask |= MBeanPermission::UnregisterMBean;
		} else if (i >= 13 && (a->get(i - 13) == u'g') && (a->get(i - 12) == u'e') && (a->get(i - 11) == u't') && (a->get(i - 10) == u'C') && (a->get(i - 9) == u'l') && (a->get(i - 8) == u'a') && (a->get(i - 7) == u's') && (a->get(i - 6) == u's') && (a->get(i - 5) == u'L') && (a->get(i - 4) == u'o') && (a->get(i - 3) == u'a') && (a->get(i - 2) == u'd') && (a->get(i - 1) == u'e') && (a->get(i) == u'r')) {
			matchlen = 14;
			mask |= MBeanPermission::GetClassLoader;
		} else if (i >= 12 && (a->get(i - 12) == u'r') && (a->get(i - 11) == u'e') && (a->get(i - 10) == u'g') && (a->get(i - 9) == u'i') && (a->get(i - 8) == u's') && (a->get(i - 7) == u't') && (a->get(i - 6) == u'e') && (a->get(i - 5) == u'r') && (a->get(i - 4) == u'M') && (a->get(i - 3) == u'B') && (a->get(i - 2) == u'e') && (a->get(i - 1) == u'a') && (a->get(i) == u'n')) {
			matchlen = 13;
			mask |= MBeanPermission::RegisterMBean;
		} else if (i >= 11 && (a->get(i - 11) == u'g') && (a->get(i - 10) == u'e') && (a->get(i - 9) == u't') && (a->get(i - 8) == u'A') && (a->get(i - 7) == u't') && (a->get(i - 6) == u't') && (a->get(i - 5) == u'r') && (a->get(i - 4) == u'i') && (a->get(i - 3) == u'b') && (a->get(i - 2) == u'u') && (a->get(i - 1) == u't') && (a->get(i) == u'e')) {
			matchlen = 12;
			mask |= MBeanPermission::GetAttribute;
		} else if (i >= 11 && (a->get(i - 11) == u'g') && (a->get(i - 10) == u'e') && (a->get(i - 9) == u't') && (a->get(i - 8) == u'M') && (a->get(i - 7) == u'B') && (a->get(i - 6) == u'e') && (a->get(i - 5) == u'a') && (a->get(i - 4) == u'n') && (a->get(i - 3) == u'I') && (a->get(i - 2) == u'n') && (a->get(i - 1) == u'f') && (a->get(i) == u'o')) {
			matchlen = 12;
			mask |= MBeanPermission::GetMBeanInfo;
		} else if (i >= 11 && (a->get(i - 11) == u'i') && (a->get(i - 10) == u's') && (a->get(i - 9) == u'I') && (a->get(i - 8) == u'n') && (a->get(i - 7) == u's') && (a->get(i - 6) == u't') && (a->get(i - 5) == u'a') && (a->get(i - 4) == u'n') && (a->get(i - 3) == u'c') && (a->get(i - 2) == u'e') && (a->get(i - 1) == u'O') && (a->get(i) == u'f')) {
			matchlen = 12;
			mask |= MBeanPermission::IsInstanceOf;
		} else if (i >= 11 && (a->get(i - 11) == u's') && (a->get(i - 10) == u'e') && (a->get(i - 9) == u't') && (a->get(i - 8) == u'A') && (a->get(i - 7) == u't') && (a->get(i - 6) == u't') && (a->get(i - 5) == u'r') && (a->get(i - 4) == u'i') && (a->get(i - 3) == u'b') && (a->get(i - 2) == u'u') && (a->get(i - 1) == u't') && (a->get(i) == u'e')) {
			matchlen = 12;
			mask |= MBeanPermission::SetAttribute;
		} else if (i >= 10 && (a->get(i - 10) == u'i') && (a->get(i - 9) == u'n') && (a->get(i - 8) == u's') && (a->get(i - 7) == u't') && (a->get(i - 6) == u'a') && (a->get(i - 5) == u'n') && (a->get(i - 4) == u't') && (a->get(i - 3) == u'i') && (a->get(i - 2) == u'a') && (a->get(i - 1) == u't') && (a->get(i) == u'e')) {
			matchlen = 11;
			mask |= MBeanPermission::Instantiate;
		} else if (i >= 10 && (a->get(i - 10) == u'q') && (a->get(i - 9) == u'u') && (a->get(i - 8) == u'e') && (a->get(i - 7) == u'r') && (a->get(i - 6) == u'y') && (a->get(i - 5) == u'M') && (a->get(i - 4) == u'B') && (a->get(i - 3) == u'e') && (a->get(i - 2) == u'a') && (a->get(i - 1) == u'n') && (a->get(i) == u's')) {
			matchlen = 11;
			mask |= MBeanPermission::QueryMBeans;
		} else if (i >= 9 && (a->get(i - 9) == u'g') && (a->get(i - 8) == u'e') && (a->get(i - 7) == u't') && (a->get(i - 6) == u'D') && (a->get(i - 5) == u'o') && (a->get(i - 4) == u'm') && (a->get(i - 3) == u'a') && (a->get(i - 2) == u'i') && (a->get(i - 1) == u'n') && (a->get(i) == u's')) {
			matchlen = 10;
			mask |= MBeanPermission::GetDomains;
		} else if (i >= 9 && (a->get(i - 9) == u'q') && (a->get(i - 8) == u'u') && (a->get(i - 7) == u'e') && (a->get(i - 6) == u'r') && (a->get(i - 5) == u'y') && (a->get(i - 4) == u'N') && (a->get(i - 3) == u'a') && (a->get(i - 2) == u'm') && (a->get(i - 1) == u'e') && (a->get(i) == u's')) {
			matchlen = 10;
			mask |= MBeanPermission::QueryNames;
		} else if (i >= 5 && (a->get(i - 5) == u'i') && (a->get(i - 4) == u'n') && (a->get(i - 3) == u'v') && (a->get(i - 2) == u'o') && (a->get(i - 1) == u'k') && (a->get(i) == u'e')) {
			matchlen = 6;
			mask |= MBeanPermission::Invoke;
		} else {
			$throwNew($IllegalArgumentException, $$str({"Invalid permission: "_s, action}));
		}
		bool seencomma = false;
		while (i >= matchlen && !seencomma) {
			switch (a->get(i - matchlen)) {
			case u',':
				{
					seencomma = true;
					break;
				}
			case u' ':
				{}
			case u'\r':
				{}
			case u'\n':
				{}
			case u'\f':
				{}
			case u'\t':
				{
					break;
				}
			default:
				{
					$throwNew($IllegalArgumentException, $$str({"Invalid permission: "_s, action}));
				}
			}
			--i;
		}
		i -= matchlen;
	}
	return mask;
}

bool MBeanPermission::implies($Permission* p) {
	if (!($instanceOf(MBeanPermission, p))) {
		return false;
	}
	$var(MBeanPermission, that, $cast(MBeanPermission, p));
	if (((int32_t)(this->mask & (uint32_t)MBeanPermission::QueryMBeans)) == MBeanPermission::QueryMBeans) {
		if (((int32_t)((this->mask | MBeanPermission::QueryNames) & (uint32_t)$nc(that)->mask)) != that->mask) {
			return false;
		}
	} else if (((int32_t)(this->mask & (uint32_t)$nc(that)->mask)) != that->mask) {
		return false;
	}
	if ($nc(that)->classNamePrefix == nullptr) {
	} else if (this->classNamePrefix == nullptr) {
		return false;
	} else if (this->classNameExactMatch) {
		if (!that->classNameExactMatch) {
			return false;
		}
		if (!$nc(that->classNamePrefix)->equals(this->classNamePrefix)) {
			return false;
		}
	} else if (!$nc(that->classNamePrefix)->startsWith(this->classNamePrefix)) {
		return false;
	}
	if ($nc(that)->member == nullptr) {
	} else if (this->member == nullptr) {
		return false;
	} else if ($nc(this->member)->equals("*"_s)) {
	} else if (!$nc(this->member)->equals(that->member)) {
		return false;
	}
	if ($nc(that)->objectName == nullptr) {
	} else if (this->objectName == nullptr) {
		return false;
	} else if (!$nc(this->objectName)->apply(that->objectName)) {
		if (!$nc(this->objectName)->equals(that->objectName)) {
			return false;
		}
	}
	return true;
}

bool MBeanPermission::equals(Object$* obj) {
	$useLocalCurrentObjectStackCache();
	if ($equals(obj, this)) {
		return true;
	}
	if (!($instanceOf(MBeanPermission, obj))) {
		return false;
	}
	$var(MBeanPermission, that, $cast(MBeanPermission, obj));
	return (this->mask == $nc(that)->mask) && ($nc($(this->getName()))->equals($(that->getName())));
}

void MBeanPermission::readObject($ObjectInputStream* in) {
	$nc(in)->defaultReadObject();
	parseName();
	parseActions();
}

MBeanPermission::MBeanPermission() {
}

$Class* MBeanPermission::load$($String* name, bool initialize) {
	$loadClass(MBeanPermission, name, initialize, &_MBeanPermission_ClassInfo_, allocate$MBeanPermission);
	return class$;
}

$Class* MBeanPermission::class$ = nullptr;

	} // management
} // javax
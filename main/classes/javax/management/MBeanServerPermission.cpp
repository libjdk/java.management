#include <javax/management/MBeanServerPermission.h>

#include <java/io/ObjectInputStream.h>
#include <java/security/BasicPermission.h>
#include <java/security/Permission.h>
#include <java/security/PermissionCollection.h>
#include <java/util/StringTokenizer.h>
#include <javax/management/MBeanServerPermissionCollection.h>
#include <jcpp.h>

#undef ALL_MASK
#undef CREATE
#undef CREATE_MASK
#undef FIND
#undef FIND_MASK
#undef NEW
#undef NEW_MASK
#undef N_NAMES
#undef RELEASE
#undef RELEASE_MASK

using $ObjectInputStream = ::java::io::ObjectInputStream;
using $AbstractStringBuilder = ::java::lang::AbstractStringBuilder;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $IllegalArgumentException = ::java::lang::IllegalArgumentException;
using $MethodInfo = ::java::lang::MethodInfo;
using $NullPointerException = ::java::lang::NullPointerException;
using $BasicPermission = ::java::security::BasicPermission;
using $Permission = ::java::security::Permission;
using $PermissionCollection = ::java::security::PermissionCollection;
using $StringTokenizer = ::java::util::StringTokenizer;
using $MBeanServerPermissionCollection = ::javax::management::MBeanServerPermissionCollection;

namespace javax {
	namespace management {

$FieldInfo _MBeanServerPermission_FieldInfo_[] = {
	{"serialVersionUID", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(MBeanServerPermission, serialVersionUID)},
	{"CREATE", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(MBeanServerPermission, CREATE)},
	{"FIND", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(MBeanServerPermission, FIND)},
	{"NEW", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(MBeanServerPermission, NEW)},
	{"RELEASE", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(MBeanServerPermission, RELEASE)},
	{"N_NAMES", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(MBeanServerPermission, N_NAMES)},
	{"names", "[Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(MBeanServerPermission, names)},
	{"CREATE_MASK", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(MBeanServerPermission, CREATE_MASK)},
	{"FIND_MASK", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(MBeanServerPermission, FIND_MASK)},
	{"NEW_MASK", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(MBeanServerPermission, NEW_MASK)},
	{"RELEASE_MASK", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(MBeanServerPermission, RELEASE_MASK)},
	{"ALL_MASK", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(MBeanServerPermission, ALL_MASK)},
	{"canonicalNames", "[Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(MBeanServerPermission, canonicalNames)},
	{"mask", "I", nullptr, $TRANSIENT, $field(MBeanServerPermission, mask)},
	{}
};

$MethodInfo _MBeanServerPermission_MethodInfo_[] = {
	{"<init>", "(Ljava/lang/String;)V", nullptr, $PUBLIC, $method(static_cast<void(MBeanServerPermission::*)($String*)>(&MBeanServerPermission::init$))},
	{"<init>", "(Ljava/lang/String;Ljava/lang/String;)V", nullptr, $PUBLIC, $method(static_cast<void(MBeanServerPermission::*)($String*,$String*)>(&MBeanServerPermission::init$))},
	{"<init>", "(I)V", nullptr, 0, $method(static_cast<void(MBeanServerPermission::*)(int32_t)>(&MBeanServerPermission::init$))},
	{"equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"getCanonicalName", "(I)Ljava/lang/String;", nullptr, $STATIC, $method(static_cast<$String*(*)(int32_t)>(&MBeanServerPermission::getCanonicalName))},
	{"hashCode", "()I", nullptr, $PUBLIC},
	{"impliedMask", "(I)I", nullptr, $STATIC, $method(static_cast<int32_t(*)(int32_t)>(&MBeanServerPermission::impliedMask))},
	{"implies", "(Ljava/security/Permission;)Z", nullptr, $PUBLIC},
	{"makeCanonicalName", "(I)Ljava/lang/String;", nullptr, $PRIVATE | $STATIC, $method(static_cast<$String*(*)(int32_t)>(&MBeanServerPermission::makeCanonicalName))},
	{"nameIndex", "(Ljava/lang/String;)I", nullptr, $PRIVATE | $STATIC, $method(static_cast<int32_t(*)($String*)>(&MBeanServerPermission::nameIndex)), "java.lang.IllegalArgumentException"},
	{"newPermissionCollection", "()Ljava/security/PermissionCollection;", nullptr, $PUBLIC},
	{"parseMask", "(Ljava/lang/String;)I", nullptr, $PRIVATE | $STATIC, $method(static_cast<int32_t(*)($String*)>(&MBeanServerPermission::parseMask))},
	{"readObject", "(Ljava/io/ObjectInputStream;)V", nullptr, $PRIVATE, $method(static_cast<void(MBeanServerPermission::*)($ObjectInputStream*)>(&MBeanServerPermission::readObject)), "java.io.IOException,java.lang.ClassNotFoundException"},
	{"simplifyMask", "(I)I", nullptr, $STATIC, $method(static_cast<int32_t(*)(int32_t)>(&MBeanServerPermission::simplifyMask))},
	{}
};

$ClassInfo _MBeanServerPermission_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"javax.management.MBeanServerPermission",
	"java.security.BasicPermission",
	nullptr,
	_MBeanServerPermission_FieldInfo_,
	_MBeanServerPermission_MethodInfo_
};

$Object* allocate$MBeanServerPermission($Class* clazz) {
	return $of($alloc(MBeanServerPermission));
}

$StringArray* MBeanServerPermission::names = nullptr;
$StringArray* MBeanServerPermission::canonicalNames = nullptr;

void MBeanServerPermission::init$($String* name) {
	MBeanServerPermission::init$(name, nullptr);
}

void MBeanServerPermission::init$($String* name, $String* actions) {
	$useLocalCurrentObjectStackCache();
	$BasicPermission::init$($(getCanonicalName(parseMask(name))), actions);
	this->mask = parseMask(name);
	if (actions != nullptr && actions->length() > 0) {
		$throwNew($IllegalArgumentException, $$str({"MBeanServerPermission actions must be null: "_s, actions}));
	}
}

void MBeanServerPermission::init$(int32_t mask) {
	$BasicPermission::init$($(getCanonicalName(mask)));
	this->mask = impliedMask(mask);
}

void MBeanServerPermission::readObject($ObjectInputStream* in) {
	$nc(in)->defaultReadObject();
	this->mask = parseMask($(getName()));
}

int32_t MBeanServerPermission::simplifyMask(int32_t mask) {
	$init(MBeanServerPermission);
	if (((int32_t)(mask & (uint32_t)MBeanServerPermission::CREATE_MASK)) != 0) {
		mask &= (uint32_t)~MBeanServerPermission::NEW_MASK;
	}
	return mask;
}

int32_t MBeanServerPermission::impliedMask(int32_t mask) {
	$init(MBeanServerPermission);
	if (((int32_t)(mask & (uint32_t)MBeanServerPermission::CREATE_MASK)) != 0) {
		mask |= MBeanServerPermission::NEW_MASK;
	}
	return mask;
}

$String* MBeanServerPermission::getCanonicalName(int32_t mask) {
	$init(MBeanServerPermission);
	if (mask == MBeanServerPermission::ALL_MASK) {
		return "*"_s;
	}
	mask = simplifyMask(mask);
	$synchronized(MBeanServerPermission::canonicalNames) {
		if ($nc(MBeanServerPermission::canonicalNames)->get(mask) == nullptr) {
			$nc(MBeanServerPermission::canonicalNames)->set(mask, $(makeCanonicalName(mask)));
		}
	}
	return $nc(MBeanServerPermission::canonicalNames)->get(mask);
}

$String* MBeanServerPermission::makeCanonicalName(int32_t mask) {
	$init(MBeanServerPermission);
	$useLocalCurrentObjectStackCache();
	$var($StringBuilder, buf, $new($StringBuilder));
	for (int32_t i = 0; i < MBeanServerPermission::N_NAMES; ++i) {
		if (((int32_t)(mask & (uint32_t)($sl(1, i)))) != 0) {
			if (buf->length() > 0) {
				buf->append(u',');
			}
			buf->append($nc(MBeanServerPermission::names)->get(i));
		}
	}
	return $nc($(buf->toString()))->intern();
}

int32_t MBeanServerPermission::parseMask($String* name$renamed) {
	$init(MBeanServerPermission);
	$useLocalCurrentObjectStackCache();
	$var($String, name, name$renamed);
	if (name == nullptr) {
		$throwNew($NullPointerException, "MBeanServerPermission: target name can\'t be null"_s);
	}
	$assign(name, $nc(name)->trim());
	if (name->equals("*"_s)) {
		return MBeanServerPermission::ALL_MASK;
	}
	if (name->indexOf((int32_t)u',') < 0) {
		return impliedMask($sl(1, nameIndex($(name->trim()))));
	}
	int32_t mask = 0;
	$var($StringTokenizer, tok, $new($StringTokenizer, name, ","_s));
	while (tok->hasMoreTokens()) {
		$var($String, action, tok->nextToken());
		int32_t i = nameIndex($($nc(action)->trim()));
		mask |= ($sl(1, i));
	}
	return impliedMask(mask);
}

int32_t MBeanServerPermission::nameIndex($String* name) {
	$init(MBeanServerPermission);
	for (int32_t i = 0; i < MBeanServerPermission::N_NAMES; ++i) {
		if ($nc($nc(MBeanServerPermission::names)->get(i))->equals(name)) {
			return i;
		}
	}
	$var($String, msg, $str({"Invalid MBeanServerPermission name: \""_s, name, "\""_s}));
	$throwNew($IllegalArgumentException, msg);
}

int32_t MBeanServerPermission::hashCode() {
	return this->mask;
}

bool MBeanServerPermission::implies($Permission* p) {
	if (!($instanceOf(MBeanServerPermission, p))) {
		return false;
	}
	$var(MBeanServerPermission, that, $cast(MBeanServerPermission, p));
	return (((int32_t)(this->mask & (uint32_t)$nc(that)->mask)) == that->mask);
}

bool MBeanServerPermission::equals(Object$* obj) {
	if ($equals(obj, this)) {
		return true;
	}
	if (!($instanceOf(MBeanServerPermission, obj))) {
		return false;
	}
	$var(MBeanServerPermission, that, $cast(MBeanServerPermission, obj));
	return (this->mask == $nc(that)->mask);
}

$PermissionCollection* MBeanServerPermission::newPermissionCollection() {
	return $new($MBeanServerPermissionCollection);
}

void clinit$MBeanServerPermission($Class* class$) {
	$assignStatic(MBeanServerPermission::names, $new($StringArray, {
		"createMBeanServer"_s,
		"findMBeanServer"_s,
		"newMBeanServer"_s,
		"releaseMBeanServer"_s
	}));
	$assignStatic(MBeanServerPermission::canonicalNames, $new($StringArray, $sl(1, MBeanServerPermission::N_NAMES)));
}

MBeanServerPermission::MBeanServerPermission() {
}

$Class* MBeanServerPermission::load$($String* name, bool initialize) {
	$loadClass(MBeanServerPermission, name, initialize, &_MBeanServerPermission_ClassInfo_, clinit$MBeanServerPermission, allocate$MBeanServerPermission);
	return class$;
}

$Class* MBeanServerPermission::class$ = nullptr;

	} // management
} // javax
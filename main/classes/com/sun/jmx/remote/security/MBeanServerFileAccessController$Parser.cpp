#include <com/sun/jmx/remote/security/MBeanServerFileAccessController$Parser.h>

#include <com/sun/jmx/remote/security/MBeanServerFileAccessController$Access.h>
#include <com/sun/jmx/remote/security/MBeanServerFileAccessController.h>
#include <java/lang/AssertionError.h>
#include <java/util/AbstractList.h>
#include <java/util/ArrayList.h>
#include <java/util/List.h>
#include <jcpp.h>

#undef EOS

using $MBeanServerFileAccessController = ::com::sun::jmx::remote::security::MBeanServerFileAccessController;
using $MBeanServerFileAccessController$Access = ::com::sun::jmx::remote::security::MBeanServerFileAccessController$Access;
using $AssertionError = ::java::lang::AssertionError;
using $Character = ::java::lang::Character;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $IllegalArgumentException = ::java::lang::IllegalArgumentException;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $NullPointerException = ::java::lang::NullPointerException;
using $AbstractList = ::java::util::AbstractList;
using $ArrayList = ::java::util::ArrayList;
using $List = ::java::util::List;

namespace com {
	namespace sun {
		namespace jmx {
			namespace remote {
				namespace security {

$FieldInfo _MBeanServerFileAccessController$Parser_FieldInfo_[] = {
	{"$assertionsDisabled", "Z", nullptr, $STATIC | $FINAL | $SYNTHETIC, $staticField(MBeanServerFileAccessController$Parser, $assertionsDisabled)},
	{"EOS", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(MBeanServerFileAccessController$Parser, EOS)},
	{"identity", "Ljava/lang/String;", nullptr, $PRIVATE | $FINAL, $field(MBeanServerFileAccessController$Parser, identity)},
	{"s", "Ljava/lang/String;", nullptr, $PRIVATE | $FINAL, $field(MBeanServerFileAccessController$Parser, s)},
	{"len", "I", nullptr, $PRIVATE | $FINAL, $field(MBeanServerFileAccessController$Parser, len)},
	{"i", "I", nullptr, $PRIVATE, $field(MBeanServerFileAccessController$Parser, i)},
	{"c", "I", nullptr, $PRIVATE, $field(MBeanServerFileAccessController$Parser, c)},
	{}
};

$MethodInfo _MBeanServerFileAccessController$Parser_MethodInfo_[] = {
	{"<init>", "(Ljava/lang/String;Ljava/lang/String;)V", nullptr, $PRIVATE, $method(static_cast<void(MBeanServerFileAccessController$Parser::*)($String*,$String*)>(&MBeanServerFileAccessController$Parser::init$))},
	{"next", "()V", nullptr, $PRIVATE, $method(static_cast<void(MBeanServerFileAccessController$Parser::*)()>(&MBeanServerFileAccessController$Parser::next))},
	{"parseAccess", "(Ljava/lang/String;Ljava/lang/String;)Lcom/sun/jmx/remote/security/MBeanServerFileAccessController$Access;", nullptr, $STATIC, $method(static_cast<$MBeanServerFileAccessController$Access*(*)($String*,$String*)>(&MBeanServerFileAccessController$Parser::parseAccess))},
	{"parseAccess", "()Lcom/sun/jmx/remote/security/MBeanServerFileAccessController$Access;", nullptr, $PRIVATE, $method(static_cast<$MBeanServerFileAccessController$Access*(MBeanServerFileAccessController$Parser::*)()>(&MBeanServerFileAccessController$Parser::parseAccess))},
	{"parseClassName", "()Ljava/lang/String;", nullptr, $PRIVATE, $method(static_cast<$String*(MBeanServerFileAccessController$Parser::*)()>(&MBeanServerFileAccessController$Parser::parseClassName))},
	{"parseCreate", "(Ljava/util/List;)V", "(Ljava/util/List<Ljava/lang/String;>;)V", $PRIVATE, $method(static_cast<void(MBeanServerFileAccessController$Parser::*)($List*)>(&MBeanServerFileAccessController$Parser::parseCreate))},
	{"parseReadWrite", "()Lcom/sun/jmx/remote/security/MBeanServerFileAccessController$Access;", nullptr, $PRIVATE, $method(static_cast<$MBeanServerFileAccessController$Access*(MBeanServerFileAccessController$Parser::*)()>(&MBeanServerFileAccessController$Parser::parseReadWrite))},
	{"parseWord", "()Ljava/lang/String;", nullptr, $PRIVATE, $method(static_cast<$String*(MBeanServerFileAccessController$Parser::*)()>(&MBeanServerFileAccessController$Parser::parseWord))},
	{"skipSpace", "()V", nullptr, $PRIVATE, $method(static_cast<void(MBeanServerFileAccessController$Parser::*)()>(&MBeanServerFileAccessController$Parser::skipSpace))},
	{"syntax", "(Ljava/lang/String;)Ljava/lang/IllegalArgumentException;", nullptr, $PRIVATE, $method(static_cast<$IllegalArgumentException*(MBeanServerFileAccessController$Parser::*)($String*)>(&MBeanServerFileAccessController$Parser::syntax))},
	{}
};

$InnerClassInfo _MBeanServerFileAccessController$Parser_InnerClassesInfo_[] = {
	{"com.sun.jmx.remote.security.MBeanServerFileAccessController$Parser", "com.sun.jmx.remote.security.MBeanServerFileAccessController", "Parser", $PRIVATE | $STATIC},
	{}
};

$ClassInfo _MBeanServerFileAccessController$Parser_ClassInfo_ = {
	$ACC_SUPER,
	"com.sun.jmx.remote.security.MBeanServerFileAccessController$Parser",
	"java.lang.Object",
	nullptr,
	_MBeanServerFileAccessController$Parser_FieldInfo_,
	_MBeanServerFileAccessController$Parser_MethodInfo_,
	nullptr,
	nullptr,
	_MBeanServerFileAccessController$Parser_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.jmx.remote.security.MBeanServerFileAccessController"
};

$Object* allocate$MBeanServerFileAccessController$Parser($Class* clazz) {
	return $of($alloc(MBeanServerFileAccessController$Parser));
}

bool MBeanServerFileAccessController$Parser::$assertionsDisabled = false;

void MBeanServerFileAccessController$Parser::init$($String* identity, $String* s) {
	$set(this, identity, identity);
	$set(this, s, s);
	this->len = $nc(s)->length();
	this->i = 0;
	if (this->i < this->len) {
		this->c = s->codePointAt(this->i);
	} else {
		this->c = MBeanServerFileAccessController$Parser::EOS;
	}
}

$MBeanServerFileAccessController$Access* MBeanServerFileAccessController$Parser::parseAccess($String* identity, $String* s) {
	$init(MBeanServerFileAccessController$Parser);
	return $$new(MBeanServerFileAccessController$Parser, identity, s)->parseAccess();
}

$MBeanServerFileAccessController$Access* MBeanServerFileAccessController$Parser::parseAccess() {
	$useLocalCurrentObjectStackCache();
	skipSpace();
	$var($String, type, parseWord());
	$var($MBeanServerFileAccessController$Access, access, nullptr);
	if ($nc(type)->equals("readonly"_s)) {
		$assign(access, $new($MBeanServerFileAccessController$Access, false, false, nullptr));
	} else if (type->equals("readwrite"_s)) {
		$assign(access, parseReadWrite());
	} else {
		$throw($(syntax($$str({"Expected "_s, "readonly"_s, " or "_s, "readwrite"_s, ": "_s, type}))));
	}
	if (this->c != MBeanServerFileAccessController$Parser::EOS) {
		$throw($(syntax("Extra text at end of line"_s)));
	}
	return access;
}

$MBeanServerFileAccessController$Access* MBeanServerFileAccessController$Parser::parseReadWrite() {
	$useLocalCurrentObjectStackCache();
	$var($List, createClasses, $new($ArrayList));
	bool unregister = false;
	while (true) {
		skipSpace();
		if (this->c == MBeanServerFileAccessController$Parser::EOS) {
			break;
		}
		$var($String, type, parseWord());
		if ($nc(type)->equals("unregister"_s)) {
			unregister = true;
		} else if (type->equals("create"_s)) {
			parseCreate(createClasses);
		} else {
			$throw($(syntax($$str({"Unrecognized keyword "_s, type}))));
		}
	}
	return $new($MBeanServerFileAccessController$Access, true, unregister, createClasses);
}

void MBeanServerFileAccessController$Parser::parseCreate($List* createClasses) {
	$useLocalCurrentObjectStackCache();
	while (true) {
		skipSpace();
		$nc(createClasses)->add($(parseClassName()));
		skipSpace();
		if (this->c == u',') {
			next();
		} else {
			break;
		}
	}
}

$String* MBeanServerFileAccessController$Parser::parseClassName() {
	$useLocalCurrentObjectStackCache();
	int32_t start = this->i;
	bool dotOK = false;
	while (true) {
		if (this->c == u'.') {
			if (!dotOK) {
				$throw($(syntax("Bad . in class name"_s)));
			}
			dotOK = false;
		} else if (this->c == u'*' || $Character::isJavaIdentifierPart(this->c)) {
			dotOK = true;
		} else {
			break;
		}
		next();
	}
	$var($String, className, $nc(this->s)->substring(start, this->i));
	if (!dotOK) {
		$throw($(syntax($$str({"Bad class name "_s, className}))));
	}
	return className;
}

void MBeanServerFileAccessController$Parser::next() {
	if (this->c != MBeanServerFileAccessController$Parser::EOS) {
		this->i += $Character::charCount(this->c);
		if (this->i < this->len) {
			this->c = $nc(this->s)->codePointAt(this->i);
		} else {
			this->c = MBeanServerFileAccessController$Parser::EOS;
		}
	}
}

void MBeanServerFileAccessController$Parser::skipSpace() {
	while ($Character::isWhitespace(this->c)) {
		next();
	}
}

$String* MBeanServerFileAccessController$Parser::parseWord() {
	$useLocalCurrentObjectStackCache();
	skipSpace();
	if (this->c == MBeanServerFileAccessController$Parser::EOS) {
		$throw($(syntax("Expected word at end of line"_s)));
	}
	int32_t start = this->i;
	while (this->c != MBeanServerFileAccessController$Parser::EOS && !$Character::isWhitespace(this->c)) {
		next();
	}
	$var($String, word, $nc(this->s)->substring(start, this->i));
	skipSpace();
	return word;
}

$IllegalArgumentException* MBeanServerFileAccessController$Parser::syntax($String* msg) {
	return $new($IllegalArgumentException, $$str({msg, " ["_s, this->identity, " "_s, this->s, "]"_s}));
}

void clinit$MBeanServerFileAccessController$Parser($Class* class$) {
	$load($MBeanServerFileAccessController);
	MBeanServerFileAccessController$Parser::$assertionsDisabled = !$MBeanServerFileAccessController::class$->desiredAssertionStatus();
	{
		if (!MBeanServerFileAccessController$Parser::$assertionsDisabled && ! !$Character::isWhitespace(MBeanServerFileAccessController$Parser::EOS)) {
			$throwNew($AssertionError);
		}
	}
}

MBeanServerFileAccessController$Parser::MBeanServerFileAccessController$Parser() {
}

$Class* MBeanServerFileAccessController$Parser::load$($String* name, bool initialize) {
	$loadClass(MBeanServerFileAccessController$Parser, name, initialize, &_MBeanServerFileAccessController$Parser_ClassInfo_, clinit$MBeanServerFileAccessController$Parser, allocate$MBeanServerFileAccessController$Parser);
	return class$;
}

$Class* MBeanServerFileAccessController$Parser::class$ = nullptr;

				} // security
			} // remote
		} // jmx
	} // sun
} // com
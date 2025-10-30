#include <javax/management/MatchQueryExp.h>

#include <javax/management/AttributeValueExp.h>
#include <javax/management/MBeanServer.h>
#include <javax/management/ObjectName.h>
#include <javax/management/QueryEval.h>
#include <javax/management/StringValueExp.h>
#include <javax/management/ValueExp.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $AttributeValueExp = ::javax::management::AttributeValueExp;
using $MBeanServer = ::javax::management::MBeanServer;
using $ObjectName = ::javax::management::ObjectName;
using $QueryEval = ::javax::management::QueryEval;
using $QueryExp = ::javax::management::QueryExp;
using $StringValueExp = ::javax::management::StringValueExp;
using $ValueExp = ::javax::management::ValueExp;

namespace javax {
	namespace management {

$FieldInfo _MatchQueryExp_FieldInfo_[] = {
	{"serialVersionUID", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(MatchQueryExp, serialVersionUID)},
	{"exp", "Ljavax/management/AttributeValueExp;", nullptr, $PRIVATE, $field(MatchQueryExp, exp)},
	{"pattern", "Ljava/lang/String;", nullptr, $PRIVATE, $field(MatchQueryExp, pattern)},
	{}
};

$MethodInfo _MatchQueryExp_MethodInfo_[] = {
	{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
	{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"*hashCode", "()I", nullptr, $PUBLIC | $NATIVE},
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(MatchQueryExp::*)()>(&MatchQueryExp::init$))},
	{"<init>", "(Ljavax/management/AttributeValueExp;Ljavax/management/StringValueExp;)V", nullptr, $PUBLIC, $method(static_cast<void(MatchQueryExp::*)($AttributeValueExp*,$StringValueExp*)>(&MatchQueryExp::init$))},
	{"apply", "(Ljavax/management/ObjectName;)Z", nullptr, $PUBLIC, nullptr, "javax.management.BadStringOperationException,javax.management.BadBinaryOpValueExpException,javax.management.BadAttributeValueExpException,javax.management.InvalidApplicationException"},
	{"getAttribute", "()Ljavax/management/AttributeValueExp;", nullptr, $PUBLIC},
	{"getPattern", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"*setMBeanServer", "(Ljavax/management/MBeanServer;)V", nullptr, $PUBLIC},
	{"toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"wildmatch", "(Ljava/lang/String;Ljava/lang/String;)Z", nullptr, $PRIVATE | $STATIC, $method(static_cast<bool(*)($String*,$String*)>(&MatchQueryExp::wildmatch))},
	{}
};

$ClassInfo _MatchQueryExp_ClassInfo_ = {
	$ACC_SUPER,
	"javax.management.MatchQueryExp",
	"javax.management.QueryEval",
	"javax.management.QueryExp",
	_MatchQueryExp_FieldInfo_,
	_MatchQueryExp_MethodInfo_
};

$Object* allocate$MatchQueryExp($Class* clazz) {
	return $of($alloc(MatchQueryExp));
}

void MatchQueryExp::setMBeanServer($MBeanServer* s) {
	this->$QueryEval::setMBeanServer(s);
}

int32_t MatchQueryExp::hashCode() {
	 return this->$QueryEval::hashCode();
}

bool MatchQueryExp::equals(Object$* arg0) {
	 return this->$QueryEval::equals(arg0);
}

$Object* MatchQueryExp::clone() {
	 return this->$QueryEval::clone();
}

void MatchQueryExp::finalize() {
	this->$QueryEval::finalize();
}

void MatchQueryExp::init$() {
	$QueryEval::init$();
}

void MatchQueryExp::init$($AttributeValueExp* a, $StringValueExp* s) {
	$QueryEval::init$();
	$set(this, exp, a);
	$set(this, pattern, $nc(s)->getValue());
}

$AttributeValueExp* MatchQueryExp::getAttribute() {
	return this->exp;
}

$String* MatchQueryExp::getPattern() {
	return this->pattern;
}

bool MatchQueryExp::apply($ObjectName* name) {
	$useLocalCurrentObjectStackCache();
	$var($ValueExp, val, $nc(this->exp)->apply(name));
	if (!($instanceOf($StringValueExp, val))) {
		return false;
	}
	return wildmatch($($nc(($cast($StringValueExp, val)))->getValue()), this->pattern);
}

$String* MatchQueryExp::toString() {
	$useLocalCurrentObjectStackCache();
	$var($String, var$0, $$str({this->exp, " like "_s}));
	return $concat(var$0, $($new($StringValueExp, this->pattern)));
}

bool MatchQueryExp::wildmatch($String* s, $String* p) {
	$init(MatchQueryExp);
	$useLocalCurrentObjectStackCache();
	char16_t c = 0;
	int32_t si = 0;
	int32_t pi = 0;
	int32_t slen = $nc(s)->length();
	int32_t plen = $nc(p)->length();
	while (pi < plen) {
		c = p->charAt(pi++);
		if (c == u'?') {
			if (++si > slen) {
				return false;
			}
		} else if (c == u'[') {
			if (si >= slen) {
				return false;
			}
			bool wantit = true;
			bool seenit = false;
			if (p->charAt(pi) == u'!') {
				wantit = false;
				++pi;
			}
			while (true) {
				bool var$0 = (c = p->charAt(pi)) != u']';
				if (!(var$0 && ++pi < plen)) {
					break;
				}
				{
					bool var$1 = p->charAt(pi) == u'-' && pi + 1 < plen;
					if (var$1 && p->charAt(pi + 1) != u']') {
						char16_t var$3 = s->charAt(si);
						bool var$2 = var$3 >= p->charAt(pi - 1);
						if (var$2) {
							char16_t var$4 = s->charAt(si);
							var$2 = var$4 <= p->charAt(pi + 1);
						}
						if (var$2) {
							seenit = true;
						}
						++pi;
					} else if (c == s->charAt(si)) {
						seenit = true;
					}
				}
			}
			if ((pi >= plen) || (wantit != seenit)) {
				return false;
			}
			++pi;
			++si;
		} else if (c == u'*') {
			if (pi >= plen) {
				return true;
			}
			do {
				$var($String, var$5, s->substring(si));
				if (wildmatch(var$5, $(p->substring(pi)))) {
					return true;
				}
			} while (++si < slen);
			return false;
		} else if (c == u'\\') {
			bool var$6 = pi >= plen || si >= slen;
			if (!var$6) {
				char16_t var$7 = p->charAt(pi++);
				var$6 = var$7 != s->charAt(si++);
			}
			if (var$6) {
				return false;
			}
		} else if (si >= slen || c != s->charAt(si++)) {
			return false;
		}
	}
	return (si == slen);
}

MatchQueryExp::MatchQueryExp() {
}

$Class* MatchQueryExp::load$($String* name, bool initialize) {
	$loadClass(MatchQueryExp, name, initialize, &_MatchQueryExp_ClassInfo_, allocate$MatchQueryExp);
	return class$;
}

$Class* MatchQueryExp::class$ = nullptr;

	} // management
} // javax
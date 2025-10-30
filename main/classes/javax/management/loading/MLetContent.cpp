#include <javax/management/loading/MLetContent.h>

#include <java/net/MalformedURLException.h>
#include <java/net/URL.h>
#include <java/util/Collections.h>
#include <java/util/List.h>
#include <java/util/Map.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $MalformedURLException = ::java::net::MalformedURLException;
using $URL = ::java::net::URL;
using $Collections = ::java::util::Collections;
using $List = ::java::util::List;
using $Map = ::java::util::Map;

namespace javax {
	namespace management {
		namespace loading {

$FieldInfo _MLetContent_FieldInfo_[] = {
	{"attributes", "Ljava/util/Map;", "Ljava/util/Map<Ljava/lang/String;Ljava/lang/String;>;", $PRIVATE, $field(MLetContent, attributes)},
	{"types", "Ljava/util/List;", "Ljava/util/List<Ljava/lang/String;>;", $PRIVATE, $field(MLetContent, types)},
	{"values", "Ljava/util/List;", "Ljava/util/List<Ljava/lang/String;>;", $PRIVATE, $field(MLetContent, values)},
	{"documentURL", "Ljava/net/URL;", nullptr, $PRIVATE, $field(MLetContent, documentURL)},
	{"baseURL", "Ljava/net/URL;", nullptr, $PRIVATE, $field(MLetContent, baseURL)},
	{}
};

$MethodInfo _MLetContent_MethodInfo_[] = {
	{"<init>", "(Ljava/net/URL;Ljava/util/Map;Ljava/util/List;Ljava/util/List;)V", "(Ljava/net/URL;Ljava/util/Map<Ljava/lang/String;Ljava/lang/String;>;Ljava/util/List<Ljava/lang/String;>;Ljava/util/List<Ljava/lang/String;>;)V", $PUBLIC, $method(static_cast<void(MLetContent::*)($URL*,$Map*,$List*,$List*)>(&MLetContent::init$))},
	{"getAttributes", "()Ljava/util/Map;", "()Ljava/util/Map<Ljava/lang/String;Ljava/lang/String;>;", $PUBLIC},
	{"getCode", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"getCodeBase", "()Ljava/net/URL;", nullptr, $PUBLIC},
	{"getDocumentBase", "()Ljava/net/URL;", nullptr, $PUBLIC},
	{"getJarFiles", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"getName", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"getParameter", "(Ljava/lang/String;)Ljava/lang/String;", nullptr, $PRIVATE, $method(static_cast<$String*(MLetContent::*)($String*)>(&MLetContent::getParameter))},
	{"getParameterTypes", "()Ljava/util/List;", "()Ljava/util/List<Ljava/lang/String;>;", $PUBLIC},
	{"getParameterValues", "()Ljava/util/List;", "()Ljava/util/List<Ljava/lang/String;>;", $PUBLIC},
	{"getSerializedObject", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"getVersion", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

$ClassInfo _MLetContent_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"javax.management.loading.MLetContent",
	"java.lang.Object",
	nullptr,
	_MLetContent_FieldInfo_,
	_MLetContent_MethodInfo_
};

$Object* allocate$MLetContent($Class* clazz) {
	return $of($alloc(MLetContent));
}

void MLetContent::init$($URL* url, $Map* attributes, $List* types, $List* values) {
	$useLocalCurrentObjectStackCache();
	$set(this, documentURL, url);
	$set(this, attributes, $Collections::unmodifiableMap(attributes));
	$set(this, types, $Collections::unmodifiableList(types));
	$set(this, values, $Collections::unmodifiableList(values));
	$var($String, att, getParameter("codebase"_s));
	if (att != nullptr) {
		if (!att->endsWith("/"_s)) {
			$plusAssign(att, "/"_s);
		}
		try {
			$set(this, baseURL, $new($URL, this->documentURL, att));
		} catch ($MalformedURLException& e) {
		}
	}
	if (this->baseURL == nullptr) {
		$var($String, file, $nc(this->documentURL)->getFile());
		int32_t i = $nc(file)->lastIndexOf((int32_t)u'/');
		if (i >= 0 && i < file->length() - 1) {
			try {
				$set(this, baseURL, $new($URL, this->documentURL, $(file->substring(0, i + 1))));
			} catch ($MalformedURLException& e) {
			}
		}
	}
	if (this->baseURL == nullptr) {
		$set(this, baseURL, this->documentURL);
	}
}

$Map* MLetContent::getAttributes() {
	return this->attributes;
}

$URL* MLetContent::getDocumentBase() {
	return this->documentURL;
}

$URL* MLetContent::getCodeBase() {
	return this->baseURL;
}

$String* MLetContent::getJarFiles() {
	return getParameter("archive"_s);
}

$String* MLetContent::getCode() {
	return getParameter("code"_s);
}

$String* MLetContent::getSerializedObject() {
	return getParameter("object"_s);
}

$String* MLetContent::getName() {
	return getParameter("name"_s);
}

$String* MLetContent::getVersion() {
	return getParameter("version"_s);
}

$List* MLetContent::getParameterTypes() {
	return this->types;
}

$List* MLetContent::getParameterValues() {
	return this->values;
}

$String* MLetContent::getParameter($String* name) {
	return $cast($String, $nc(this->attributes)->get($($nc(name)->toLowerCase())));
}

MLetContent::MLetContent() {
}

$Class* MLetContent::load$($String* name, bool initialize) {
	$loadClass(MLetContent, name, initialize, &_MLetContent_ClassInfo_, allocate$MLetContent);
	return class$;
}

$Class* MLetContent::class$ = nullptr;

		} // loading
	} // management
} // javax
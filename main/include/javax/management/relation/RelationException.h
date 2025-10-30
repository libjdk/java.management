#ifndef _javax_management_relation_RelationException_h_
#define _javax_management_relation_RelationException_h_
//$ class javax.management.relation.RelationException
//$ extends javax.management.JMException

#include <javax/management/JMException.h>

namespace javax {
	namespace management {
		namespace relation {

class $import RelationException : public ::javax::management::JMException {
	$class(RelationException, $NO_CLASS_INIT, ::javax::management::JMException)
public:
	RelationException();
	void init$();
	void init$($String* message);
	static const int64_t serialVersionUID = (int64_t)0x4B6980C43A4B193D;
	RelationException(const RelationException& e);
	virtual void throw$() override;
	inline RelationException* operator ->() {
		return (RelationException*)throwing$;
	}
};

		} // relation
	} // management
} // javax

#endif // _javax_management_relation_RelationException_h_
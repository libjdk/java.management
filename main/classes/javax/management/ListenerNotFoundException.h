#ifndef _javax_management_ListenerNotFoundException_h_
#define _javax_management_ListenerNotFoundException_h_
//$ class javax.management.ListenerNotFoundException
//$ extends javax.management.OperationsException

#include <javax/management/OperationsException.h>

namespace javax {
	namespace management {

class $export ListenerNotFoundException : public ::javax::management::OperationsException {
	$class(ListenerNotFoundException, $NO_CLASS_INIT, ::javax::management::OperationsException)
public:
	ListenerNotFoundException();
	void init$();
	void init$($String* message);
	static const int64_t serialVersionUID = (int64_t)0x9B7D1860A0C7B86B;
	ListenerNotFoundException(const ListenerNotFoundException& e);
	virtual void throw$() override;
	inline ListenerNotFoundException* operator ->() {
		return (ListenerNotFoundException*)throwing$;
	}
};

	} // management
} // javax

#endif // _javax_management_ListenerNotFoundException_h_
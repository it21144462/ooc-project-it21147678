#include "customer.h"
class Administrator
{
private:

	char name[20];
	char adminId[10];	

public:

	Administrator();
	Administrator(const char id[], const char adminName[]);
	void removeCustomer(customer *cus);
	void replyToRegUser(customer * cus);
	~Administrator();
};

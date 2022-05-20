#include<iostream>
#include<cstring>
#include "Administrator.h"
using namespace std;
Administrator::Administrator()
{
	strcpy(adminId, "");
	strcpy(name, "");
}
Administrator::Administrator(const char id[], const char adminName[])
{
	strcpy(adminId, id);
	strcpy(name, adminName);
}
void Administrator::removeCustomer(customer *cus)
{

}
void Administrator::replyToRegUser(customer* cus)
{

}
Administrator :: ~Administrator()
{
};


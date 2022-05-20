// student id : IT21144462
// Name : Ranasinghe T.R
// MLB_01.01_06
// Malabe_weekdays

#include<iostream>
#include "order.h"
#include "card.h"
#include "paypal.h"


using namespace std;

// #define SIZE 2

class payment
{
protected:

	int paymentID;

	finacialreport* finrep;

public:

	payment();
	payment(int ppaymentid);
	void getorder_details(int oorder_id, const char type[20], int oqty, double ot_amount, int paymentID); // : order(int oorder_id, const char type[20], int oqty, double ot_amount);
	void addcard();
	void addpaypal();
	virtual void validatePayment();
	virtual void display();
	~payment();
};

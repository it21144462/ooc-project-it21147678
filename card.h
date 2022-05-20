// student id : IT21144462
// Name : Ranasinghe T.R
// MLB_01.01_06
// Malabe_weekdays
#include "payment.h"
#include "order.h"
#include<iostream>
using namespace std;

class card :public payment
{
private:
	int cardNo;
	int cvv_Code;
	char expire_Date[8];

public:
	card();
	card(int pcardNo, int pcvv_Code, char pexpire_Date[8]);
	void validatePayment();
	void updatecardDetails(int new_cardNo, int new_cvv_Code, char new_expire_Date[8]);
	void display(int c_cardNo, double ot_amount); // : order(double ot_amount);
	~card();
};



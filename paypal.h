// student id : IT21144462
// Name : Ranasinghe T.R
// MLB_01.01_06
// Malabe_weekdays
#pragma once
#include "payment.h"
#include "order.h"

class paypal : public payment
{
private:

	char email[50];

public:
	paypal();
	paypal(char pemail[50]);
	void validatePayment();
	void updatepaypalDetails(char new_email[50]);
	void display(double ot_amount, char p_email[50]) : order( double ot_amount);
	~paypal();
};


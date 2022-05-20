// student id : IT21144462
// Name : Ranasinghe T.R
// MLB_01.01_06
// Malabe_weekdays
#include "paypal.h"

paypal::paypal()
{
	strcpy(email, "");
}

paypal::paypal(char pemail[50])
{
	email[50] = pemail[50];
}

void paypal::validatePayment()
{

}

void paypal::updatepaypalDetails(char new_email[50])
{
	email[50] = new_email[50];
}

void paypal::display(double ot_amount, char p_email[50])
{
	cout << "Rs : " << ot_amount << " debitted from Your ***** paypal account : " << p_email[50];
}


paypal::~paypal()
{
	//distroyed................
}

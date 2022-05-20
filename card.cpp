// student id : IT21144462
// Name : Ranasinghe T.R
// MLB_01.01_06
// Malabe_weekdays
#include "card.h"
#include<iostream>
#include<cstring>
card::card()
{

}

card::card(int pcardNo, int pcvv_Code, char pexpire_Date[8])
{
	cardNo = pcardNo;
	cvv_Code = pcvv_Code;
	strcpy_s(expire_Date, pexpire_Date);
}

void card::validatePayment()
{

}

void card::updatecardDetails(int new_cardNo, int new_cvv_Code, char new_expire_Date[8])
{
	cardNo = new_cardNo;
	cvv_Code = new_cvv_Code;
	expire_Date[8] = new_expire_Date[8];
}

void card::display(int c_cardNo, double ot_amount)
{
	cout << "Rs : " << ot_amount << " debitted from Your ***** card : " << c_cardNo;
}

card::~card()
{
	//destroyed...................
}

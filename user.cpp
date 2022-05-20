#include "user.h"
#include<iostream>
#include<cstring>
using namespace std;
user::user()
{
	strcpy_s(Name, "");
	Dob = "";
	strcpy_s(Gender, "");
}
user::user(const char uName[], string uDob, char const uGender[])
{
	strcpy_s(Name, uName);
	Dob = uDob;
	strcpy_s(Gender, uGender);
}
void user::askQuestion()
{
}
void user::giveFeedback()
{
}


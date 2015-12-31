//Implementation files

#include "PhoneNumber.h"

using namespace std;

PhoneNumber::PhoneNumber()
{
	countryCode = 0;
	areaCode = 0;
	number = 0;
	type = HOME;
}

PhoneNumber::PhoneNumber(int initcountryCode, int initareaCode, int initnumber, int inittype)
{
	countryCode = initcountryCode;
	areaCode = initareaCode;
	number = initnumber;
	type = inittype;
}

PhoneNumber::PhoneNumber(int initnumber, int inittype)
{
	countryCode = 1;
	areaCode = 817;
	number = initnumber;
	type = inittype;
}

int PhoneNumber::GetCountryCode()
{
	return countryCode;
}

int PhoneNumber::GetAreaCode()
{
	return areaCode;
}

int PhoneNumber::GetNumber()
{
	return number;
}

int PhoneNumber::GetType()
{
	return type;
}

bool PhoneNumber::Equal(PhoneNumber otherNumber)
{
	if (countryCode == otherNumber.countryCode && areaCode == otherNumber.areaCode
		&& number == otherNumber.number && type == otherNumber.type)
		return true;
	else
		return false;
}

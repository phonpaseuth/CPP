#include "PhoneType.h"

class PhoneNumber
{
public:
	PhoneNumber();
	PhoneNumber(int initcountryCode, int initareaCode, int initnumber, int inittype);
	PhoneNumber(int initnumber, int inittype);

	int GetCountryCode();
	int GetAreaCode();
	int GetNumber();
	int GetType();

	bool Equal(PhoneNumber otherNumber);

private:
	int countryCode;
	int areaCode;
	int number;
	int type;
};

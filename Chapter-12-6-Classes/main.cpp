#include <iostream>
#include "PhoneNumber.h"

using namespace std;

int main()
{
	PhoneNumber num1(1, 817, 1234567, CELL);
	PhoneNumber num2;

	cout << "num1: " << num1.GetCountryCode() << "-"
		<< num1.GetAreaCode() << "-" << num1.GetNumber()
		<< "-" << num1.GetType() << endl;

	cout << "num2: " << num2.GetCountryCode() << "-"
		<< num2.GetAreaCode() << "-" << num2.GetNumber()
		<< "-" << num2.GetType() << endl;

	PhoneNumber num3(1234567, CELL);

	cout << "num3: " << num3.GetCountryCode() << "-"
		<< num3.GetAreaCode() << "-" << num3.GetNumber()
		<< "-" << num3.GetType() << endl;


	if (num1.Equal(num3))
		cout << "num1 & num3 are the same num!" << endl;
	else
		cout << "num1 & num3 are not the same num!" << endl;

	return 0;
}

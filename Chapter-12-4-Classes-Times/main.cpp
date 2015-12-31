#include "Time.h"
#include <iostream>
#include <string>

using namespace std;

string ChangeType(int);

int main()
{
	Time time1(12, 20);
	Time time2(11, 59);

	cout << "time1: " << time1.GetMinute() << ":"
		<< time1.GetSecond() << endl;
	cout << "time2: " << time2.GetMinute() << ":"
		<< time2.GetSecond() << endl;

	cout << "time1 in seconds: " << time1.GetAllSecond() << endl;
	cout << "time2 in seconds: " << time2.GetAllSecond() << endl;

	int type;
	string statement;
	type = time1.CompareTime(time2);
	statement = ChangeType(type);
	cout << "time1 " << statement << " time 2" << endl;
	
	Time addedTime;
	addedTime = time1.AddTime(time1, time2);
	cout << "time1 + time2: " << addedTime.GetMinute() << ":"
		<< addedTime.GetSecond() << endl;

	Time subTime;
	if (time1.GetAllSecond() < time2.GetAllSecond())
	{
		Time subTime(0, 0);
		cout << "time1 - time2: " << subTime.GetMinute() << "0:0"
			<< subTime.GetSecond() << endl;
		cout << "Time cannot be negative!" << endl;
		
	}
	else if (time1.GetMinute() == time2.GetMinute() && time1.ChangeSecondBack() == time2.ChangeSecondBack())
	{
		Time subTime(0, 0);
		cout << "time1 - time2: " << subTime.GetMinute() << "0:0"
			<< subTime.GetSecond() << endl;
		cout << "Time are the same!" << endl;

	}
	else
	{
		subTime = time1.SubtractTime(time1, time2);
		cout << "time1 - time2: " << subTime.GetMinute() << ":"
			<< subTime.GetSecond() << endl;
	}
	
	return 0;
}

string ChangeType(int type)
{
	switch (type)
	{
	case LESS: return "is less than";
	case EQUAL: return "is equal to";
	case MORE: return "is more than";
	}
	return "i put something here so it does not show error";
}

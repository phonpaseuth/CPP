#include "CompareType.h"

class Time
{
public:
	Time();
	Time(int initminute, int initsecond);

	int GetMinute();
	int GetSecond();
	int GetAllSecond();
	int ChangeSecondBack();
	
	CompareType CompareTime(Time otherTime);
	Time AddTime(Time firstTime, Time secondTime);
	Time SubtractTime(Time firstTime, Time secondTime);

private:
	int minute;
	int second;
};

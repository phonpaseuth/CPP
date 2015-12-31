#include "Time.h"	
#include <iostream>

using namespace std;

Time::Time()
{
	minute = 0;
	second = 0;
}

Time::Time(int initminute, int initsecond)
{
	minute = initminute;
	second = initsecond;
}

int Time::GetMinute()
{
	return minute;
}

int Time::GetSecond()
{
	return second;
}
int Time::GetAllSecond()
{
	second = minute * 60 + second;
	return second;
}

CompareType Time::CompareTime(Time otherTime)
{
	if (second < otherTime.second)
		return LESS;
	else if (second == otherTime.second)
		return EQUAL;
	else
		return MORE;
}

int Time::ChangeSecondBack()
{
	second = second % 60;
	return second;
}

Time Time::AddTime(Time firstTime, Time secondTime)
{
	Time adjustedTime;

	adjustedTime.minute = firstTime.GetMinute() + secondTime.GetMinute();
	adjustedTime.second = firstTime.ChangeSecondBack() + secondTime.ChangeSecondBack();
	if (adjustedTime.second >= 60)
	{
		adjustedTime.second = adjustedTime.second - 60;
		adjustedTime.minute++;
	}

	return adjustedTime;
}

Time Time::SubtractTime(Time firstTime, Time secondTime)
{
	Time adjustedTime;

	if (firstTime.ChangeSecondBack() < secondTime.ChangeSecondBack())
	{
		adjustedTime.second = firstTime.ChangeSecondBack() + 60 - secondTime.ChangeSecondBack();
		firstTime.minute--;
		adjustedTime.minute = firstTime.minute - secondTime.minute;
	}
	else
	{
		adjustedTime.minute = firstTime.minute - secondTime.minute;
		adjustedTime.second = firstTime.ChangeSecondBack() - secondTime.ChangeSecondBack();
	}

	return adjustedTime;
}

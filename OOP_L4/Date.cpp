#include "Date.h"

const int calendar[13] = { 0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };

void Date::yearNormalize()
{
	while (month > 12)
	{
		year++;
		month -= 12;
	}
}

void Date::normalize() // 64 12 3002
{
	yearNormalize();
	while (day > calendar[month])
	{
		day -= calendar[month];
		month++;
		yearNormalize();
	}
}

Date::Date():Triad(1, 1, 2001)
{}
Date::Date(int day, int month, int year):Triad(day, month, year)
{
	normalize();
}

void Date::addCurDays(int n)
{
	day += n;
	normalize();
}
void Date::addCurMonth(int n)
{
	month += n;
	normalize();
}
void Date::addCurYear(int n)
{
	year += n;
	normalize();
}

std::ostream& operator<< (std::ostream& out, Date& obj)
{
	std::cout << obj.day << "." << obj.month << "." << obj.year<<'\n';
	return out;
}
std::istream& operator>> (std::istream& in, Date& obj)
{
	in >> obj.day >> obj.month >> obj.year;
	obj.normalize();
	return in;
}
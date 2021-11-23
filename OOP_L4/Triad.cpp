#include "Triad.h"


Triad::Triad()
{
	day = 1;
	month = 1;
	year = 2000;
}
Triad::Triad(int n_day, int n_month, int n_year)
{
	day = n_day;
	month = n_month;
	year = n_year;
}

int Triad::getDay()
{
	return day;
}
int Triad::getMonth()
{
	return month;
}
int Triad::getYear()
{
	return year;
}

void Triad::setDay(int n_day) { day = n_day; }
void Triad::setMonth(int n_month) { month = n_month; }
void Triad::setYear(int n_year) { year = n_year; }

void Triad::increaseDay()
{
	day++;
}
void Triad::increaseMonth()
{
	month++;
}
void Triad::increaseYear()
{
	year++;
}
void Triad::increaseAll()
{
	increaseDay();
	increaseMonth();
	increaseYear();
}

std::ostream& operator<< (std::ostream& out, Triad& obj)
{
	out << obj.day << " " << obj.month << " " << obj.year << "\n";
	return out;
}
std::istream& operator>> (std::istream& in, Triad& obj)
{
	in >> obj.day >> obj.month >> obj.year; 
	return in;
}
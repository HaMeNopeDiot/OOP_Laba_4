#pragma once
#include <iostream>

class Triad
{
protected:
	int day;
	int month;
	int year;
public:
	Triad();
	Triad(int n_day, int n_month, int n_year);

	int getDay();
	int getMonth();
	int getYear();

	void setDay(int n_day);
	void setMonth(int n_month);
	void setYear(int n_year);

	void increaseDay();
	void increaseMonth();
	void increaseYear();
	void increaseAll();

	friend std::ostream& operator<< (std::ostream& out, Triad& obj);
	friend std::istream& operator>> (std::istream& in, Triad& obj);
};
#pragma once
#include "Triad.h"

class Date : public Triad
{
public:

	void yearNormalize();
	void normalize();

	Date();
	Date(int day, int month, int year);

	void addCurDays(int n);
	void addCurMonth(int n);
	void addCurYear(int n);

	friend std::ostream& operator<< (std::ostream& out, Date& obj);
	friend std::istream& operator>> (std::istream& in, Date& obj);
	
};
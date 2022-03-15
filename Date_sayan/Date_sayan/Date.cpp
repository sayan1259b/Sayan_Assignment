#include <iostream>
#include "Date.h"

using namespace std;

Date::Date() :dd(01), mm(11), yy(2000)
{
	//constructor declaration//initializer list
}



Date::Date(int dd, int mm, int yy)
{
	this->dd = dd;
	this->mm = mm;
	this->yy = yy;
}

void Date::input_date()
{
	cout << "Enter the date month year\n";
	cin >> dd >> mm >> yy;

}

void Date::display_date()
{
	cout << dd << ":" << mm << ":" << yy << endl;
}


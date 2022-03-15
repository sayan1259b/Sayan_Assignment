#include <iostream>
using namespace std;
#include "time.h"
int Time::get_hour()
{
	return hh;
}
int Time::get_min()
{
	return mm;
}
int Time::get_sec()
{
	return ss;
}
void Time::convert_time()
{
	if (hh > 12)
	{
		hh -= 12;
	}
	else
	{
		hh += 12;
	}
}
void Time::accept_time()
{
	cout << "Enter the timings" << endl;
	cin >> hh >> mm >> ss;
}
void Time::get_time()
{

	cout << hh << ":" << mm << ":" << ss << endl;
}
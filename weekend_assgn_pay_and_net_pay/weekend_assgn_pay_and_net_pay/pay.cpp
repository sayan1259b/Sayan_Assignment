#include "pay.h"

netpay::netpay() :hour(40), rate_per_hour(5), tax(0)
{
	cout << "Enter the working hour" << endl;
	cin >> this->hour;
	cout << "Enter the Rate per hour" << endl;
	cin >> this->rate_per_hour;
	cout << "Enter the tax rate" << endl;
	cin >> this->tax;
}

void netpay::cal_netpay()
{
	cout << "The net pay is " << (rate_per_hour * hour) - (((rate_per_hour * hour) * tax));
}

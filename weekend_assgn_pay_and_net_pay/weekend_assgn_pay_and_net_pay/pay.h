#pragma once
#include <iostream>
using namespace std;
class netpay
{
	int hour;
	float rate_per_hour;
	float tax;

public:

	netpay();
	void cal_netpay();

};

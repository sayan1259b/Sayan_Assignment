#pragma once
using namespace std;
class Time
{
	int hh, mm, ss;
public:
	Time() :hh(0), mm(0), ss(0) {}
	int get_hour();
	int get_min();
	int get_sec();
	void convert_time();
	void accept_time();
	void get_time();
};

#pragma once
#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<cstring>
#include "copy_const.h"

using namespace std;



int main()
{
	String strclass1("hello world");
	String strclass2 = strclass1;

	strclass1.print(); 
	strclass2.print();

	strclass2.change("hello copy constructor");

	strclass1.print(); 
	strclass2.print();
	return 0;
	system("pause");
}
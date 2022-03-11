#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<cstring>



#include "copy_const.h"
using namespace std;

String::String(const char *str)
{
	size = strlen(str);
	s = new char[size + 1];
	strcpy(s, str);
}

void String::change(const char *str)
{
	delete[] s;
	size = strlen(str);
	s = new char[size + 1];
	strcpy(s, str);
}

String::String(const String& old_str)
{
	size = old_str.size;
	s = new char[size + 1];
	strcpy(s, old_str.s);
}

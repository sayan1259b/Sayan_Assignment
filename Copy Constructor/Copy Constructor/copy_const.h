#pragma once
#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
using namespace std;


class String
{
private:
	char *s;
	int size;
public:
	String(const char *str = NULL);
	// constructor for allocating

	~String() { delete[] s; }
	// destructor for deallocating

	String(const String&); 
	// copy constructor

	void print() { cout << s << endl; } // Function to print string
	void change(const char *);  // Function to change
};


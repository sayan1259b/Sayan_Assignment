#pragma once
class Complex;//forward declaration
class SmartPointer
{
	Complex* ptr;

public:
	SmartPointer();
	SmartPointer(int, int);
	Complex* operator->();
	Complex& operator*();
	~SmartPointer();
};
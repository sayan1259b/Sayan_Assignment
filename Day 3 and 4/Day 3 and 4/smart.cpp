#include "Smart.h"
#include "complexsayan.h"
#include <crtdbg.h>
SmartPointer::SmartPointer()
{
	ptr = new Complex;
}

SmartPointer::SmartPointer(int real, int imag)
{
	ptr = new Complex(real, imag);
}

Complex* SmartPointer::operator->()
{

	return ptr;
}

Complex& SmartPointer::operator*()
{
	return (*ptr);
}

SmartPointer::~SmartPointer()
{
	if (ptr)
		delete ptr;
	ptr = nullptr;
}

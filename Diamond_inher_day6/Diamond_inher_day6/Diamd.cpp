#include <iostream>

using namespace std;

class Base
{

protected:
	int x;
public:
	Base() :x(100) {}
	void show() { cout << x << endl; }

};

class Derived1 : public Base
{

};

class Derived2 : public Base
{

};

class Derived : public Derived1, public Derived2
{
public:
	void show() { Derived1::show(); Derived2::show(); cout << Derived1::x << endl; }
};

//int main()
//{
//	Derived d1;
//	d1.show();
//	return 0;
//}
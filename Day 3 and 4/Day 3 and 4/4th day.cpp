#include <iostream>
#include "complexsayan.h"
#include "smart.h"
#define MYMACRO(X,Y)  X+Y
using namespace std;

int count = 0;
class Demo
{

	int ref;
public:
	Demo()
	{

	}
	Demo(int xx)
	{

	}
	void operator()(int x, int y) { cout << "Operator () is overloaded" << endl; }
	void show()
	{
		cout << "Function called show" << endl;

	}
};
int add(int x, int y)
{
	return x + y;
}
void function(int(*ptr)(int, int))
{
	Demo dd(10);
	cout << "function called " << ptr(10, 20) << " " << add(1, 4) << " " << MYMACRO(3, 5) << endl;
	dd(99, 88);
}
int main()
{
	{
		SmartPointer sptr(10, 2);
		sptr->accpept(); //overloading ->
		(*sptr).accpept(); //overloading *
	}
	//Complex c1(10,20);
	//Complex c2(10, 20);
	//Complex c4(10, 20);
	//Complex c3(4, 6);

	//Complex cc = c1.add(c2.add(c3));
	//Complex cc1 = c1 + c2 + c3;
	//Complex cc3 = ++c1;
	//Complex cc4 = c1++;
	//cc.display();
	//cc1.display();
	//cc3.display();
	//cout << (c2 == c4) << endl ;
	//
	//cc4.display();
	//c1.display();

	/*Complex* c1 = new Complex[3];
	for(int i=0;i<3;i++)
	c1[i].accpept();
	for (int i = 0;i < 3;i++)
	c1[i].display();
	int x = 10;
	int& ref = x;
	Demo d2(ref);
	d2.show();

	delete[] c1;
	c1 = nullptr;*/
	/*cout << function << endl;
	void (*arr)();
	arr = function;
	arr();
	(*arr)();*/
	//function(add);

	//Demo dd;
	//void (Demo:: * ptr)();
	//ptr = &(Demo::show);
	//(dd.*ptr)();

	cout << "Leak " << _CrtDumpMemoryLeaks();
}
extern int count;
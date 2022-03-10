#include <iostream>

using namespace std;

class Print_area
{
public:
	//'static' is used to make access to any data variable or function without making an object of that class. 
	//It means that 'static' is used so that we can access any data variable or function without making an object of that class.
	static void printArea(int l, int b)
	{
		cout << l*b << endl;
	}
};
int main()
{
	Print_area::printArea(4, 7);
	return 0;
}
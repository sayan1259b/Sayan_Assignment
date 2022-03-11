
#include "par_cons.h" 
#include <iostream>
using namespace std;

int main() {
	// create object and initialize data members
	Size  scale(11.8, 9.9);
	

	cout << "Area  1 " << scale.calculateArea() << endl;
	cout << "Area  2 " << scale.calculateArea();

	return 0;
system("pause");
}
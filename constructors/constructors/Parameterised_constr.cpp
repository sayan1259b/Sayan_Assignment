
#include "par_cons.h" 
#include <iostream>
using namespace std;


	// parameterized constructor to initialize variables
	 Size::Size(double leng, double higt) {
		 cout << " constructor called " << endl;
		length = leng;
		height = higt;
	}

	double Size::calculateArea() {

		return length * height;
	}


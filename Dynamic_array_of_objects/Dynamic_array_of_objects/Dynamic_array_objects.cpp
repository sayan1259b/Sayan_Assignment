#include <iostream>

using namespace std;

class One
{
public:
	One() {
		cout << "Constructor" << endl; //for initialising array of objects
	}
	~One() {
		cout << "Destructor" << endl; //calling destructor to deallocate memeory for all the array of objects at once
	}
};

int main()
{
	One* a = new One[20]; //creating 20 array objects
	delete[] a; // Delete array
	return 0;
}
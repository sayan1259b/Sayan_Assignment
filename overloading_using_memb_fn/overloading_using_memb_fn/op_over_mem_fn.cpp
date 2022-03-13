#include <iostream>
using namespace std;

class item {
public:
	double getVolume(void) {
		return length * breadth * height;
	}

	void setLength(double len) {
		length = len;
	}

	void setBreadth(double bre) {
		breadth = bre;
	}

	void setHeight(double hei) {
		height = hei;
	}

	// Overload + operator to add two objects.
	item operator+(const item& b) {
		item item;
		item.length = this->length + b.length;
		item.breadth = this->breadth + b.breadth;
		item.height = this->height + b.height;
		return item;
	}

private:
	double length;      // Length of a item
	double breadth;     // Breadth of a item
	double height;      // Height of a item
};

// Main function for the program
int main() {
	item item1;                // Declare item1 of type item
	item item2;                // Declare item2 of type item
	item item3;                // Declare item3 of type item
	double volume = 0.0;   

							 //item1 specification
	item1.setLength(9.0);
	item1.setBreadth(2.8);
	item1.setHeight(7.8);

	// item 2 specification
	item2.setLength(9.0);
	item2.setBreadth(3.4);
	item2.setHeight(10.0);

	// volume of item 1
	volume = item1.getVolume();
	cout << "Volume of item1 : " << volume << endl;

	// volume of item 2
	volume = item2.getVolume();
	cout << "Volume of item2 : " << volume << endl;

	// Add two object as follows:
	item3 = item1 + item2;

	// volume of item 3
	volume = item3.getVolume();
	cout << "Volume of item3 : " << volume << endl;

	return 0;
}

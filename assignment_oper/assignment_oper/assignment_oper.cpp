#include <iostream>
using namespace std;

class Watch {
private:
	int hours;             
	int minutes;           

public:
	// required constructors
	Watch() {
		hours = 0;
		minutes = 0;
	}
	Watch(int h, int m) {
		hours = h;
		minutes = m;
	}

	// method to display time
	void displayTime() {
		cout << "H: " << hours << " M:" << minutes << endl;
	}

	// overloaded prefix ++ operator
	Watch operator++ () {
		++minutes;          // increment this object
		if (minutes >= 60) {
			++hours;
			minutes -= 60;
		}
		return Watch(hours, minutes);
	}

	// overloaded postfix ++ operator
	Watch operator++(int) {

		// save the orignal value
		Watch T(hours, minutes);

		// increment this object
		++minutes;

		if (minutes >= 60) {
			++hours;
			minutes -= 60;
		}

		// return old original value
		return T;
	}
};

int main() {
	Watch T1(10, 29), T2(11, 40);

	++T1;                    
	T1.displayTime();        
	++T1;                   
	T1.displayTime();        

	T2++;                    
	T2.displayTime();        
	T2++;                    
	T2.displayTime();        
	return 0;
}
#include <iostream> 
using namespace std;
class operation
{
	int n1, n2, add;
	float div;
public:
	void TakeValues();
	void sum();
};
inline void operation::TakeValues()
{
	cout << "Enter first value:";
	cin >> n1;
	cout << "Enter second value:";
	cin >> n2;
}

inline void operation::sum()
{
	add = n1 + n2;
	cout << "Addition of two numbers: " << n1 + n2 << "\n";
}
int main()
{
	cout << "Program using inline function\n";
	operation s;
	s.TakeValues();
	s.sum();
	return 0;
}
#include <iostream>

using namespace std;


int main()
{
	int length, sum = 0;
	cout << "Enter the number of candidates in the hall" << endl;
	cin >> length;
	int *marks = new int[length]; // using the new operator to dynamically allocate the memory at runtime.


	cout << "Enter the result of the candidates" << endl;



	for (int i = 0; i < length; i++)            // entering marks of students
	{
		cin >> *(marks + i);
	}


	for (int i = 0; i < length; i++)            // calculating sum of all the marks
	{
		sum += *(marks + i);
	}
	cout << "sum is " << sum << endl;
	return 0;
}
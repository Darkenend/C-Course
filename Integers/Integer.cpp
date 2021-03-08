// Integer.cpp
#include <iostream>
#include <limits>
using namespace std;

int main() {
	int value = 54656;
	long long lValue = 2300000000;
	short sValue = 23434;
	unsigned short usValue = -1;
	cout << value << endl;
	cout << lValue << endl;
	cout << sValue << endl;
	cout << usValue << endl;

	cout << "Max int value: " << INT_MAX << endl;
	cout << "Min int value: " << INT_MIN << endl;

	cout << "Size of int: " << sizeof(value) << endl;
	cout << "Size of long int: " << sizeof(lValue) << endl;
	cout << "Size of short int: " << sizeof(sValue) << endl;
	cout << "Size of unsigned short int: " << sizeof(usValue) << endl;

	return 0;
}
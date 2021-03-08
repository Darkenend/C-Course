// Floating.cpp

#include <iostream>
#include <iomanip>

using namespace std;

int main() {
	float fValue = 27.3;
	double dValue = 69.696969;

	cout << sizeof(fValue) << endl;
	cout << fixed << fValue << endl;
	cout << sizeof(dValue) << endl;
	cout << setprecision(20) << fixed << dValue << endl;

	return 0;
}
// Input.cpp

#include <iostream>
using namespace std;

int main() {
	// Variables
	string text = "Hello ";
	string name;
	int age;

	// Name
	cout << "Enter your name: " << flush;
	cin >> name;
	cout << text + name << endl;

	// Age
	cout << "Enter your age: " << flush;
	cin >> age;
	cout << "You're " << age << endl;

	return 0;
}
// Variables.cpp
// Let's test some variables

#include <iostream>
using namespace std;


int main() {
	int numberCats = 5;
	int numberDogs = 0;
	int numberAnimals = numberCats + numberDogs;

	cout << "Number of cats: " << numberCats << endl;
	cout << "Number of dogs: " << numberDogs << endl;

	cout << "Number of animals: " << numberAnimals << endl;
	cout << "New dog acquired!" << endl;

	numberDogs++;
	numberAnimals = numberCats + numberDogs;

	cout << "Number of dogs: " << numberDogs << endl;

	cout << "Number of animals: " << numberAnimals << endl;

	return 0;
}
#include <iostream>
#include <string>
using namespace std;

int main()
{
	cout << "Program 1: Accessing addresses" << endl << endl;

	int thronesOfCairParavel = 4;
	float yearOfEndOfNarnia = 2.555;
	string kingdomName = "Narnia";

	cout << &thronesOfCairParavel << endl;
	cout << &yearOfEndOfNarnia << endl;
	cout << &kingdomName << endl << endl;

	cout << "Address " << &thronesOfCairParavel << " = " << thronesOfCairParavel << endl;
	cout << "Address " << &yearOfEndOfNarnia << " = " << yearOfEndOfNarnia << endl;
	cout << "Address " << &kingdomName << " = " << kingdomName << endl;

	while ( true ) ;
	return 0;
}
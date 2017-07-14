#include <iostream>
#include <string>
using namespace std;

int main()
{
	cout << "Program 1: Accessing addresses" << endl << endl;
	
	int thronesOfCairParavel = 4;
	float yearsOfEnchantedWinter = 100.00;
	string kingdomName = "Narnia";

	cout << &thronesOfCairParavel << endl;
	cout << &yearsOfEnchantedWinter << endl;
	cout << &kingdomName << endl << endl;

	cout << "Address " << &thronesOfCairParavel << " = " << thronesOfCairParavel << endl;
	cout << "Address " << &yearsOfEnchantedWinter << " = " << yearsOfEnchantedWinter << endl;
	cout << "Address " << &kingdomName << " = " << kingdomName << endl << endl;

	while ( true ) ;
	return 0;
}
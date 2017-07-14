#include <iostream>
#include <string>
using namespace std;

int main()
{
	cout << "Program 3: Using pointers" << endl << endl;

	int thronesOfCairParavel = 4;
	float yearOfEndOfNarnia = 2.555;
	string kingdomName = "Narnia";

	cout << &thronesOfCairParavel << endl;
	cout << &yearOfEndOfNarnia << endl;
	cout << &kingdomName << endl << endl;

	int* ptrThrones;
	float* ptrYear;
	string* ptrName;

	ptrThrones = &thronesOfCairParavel;
	ptrYear = &yearOfEndOfNarnia;
	ptrName = &kingdomName;

	cout << ptrThrones << " = " << thronesOfCairParavel << endl;
	cout << ptrYear << " = " << yearOfEndOfNarnia << endl;
	cout << ptrName << " = " << kingdomName << endl;

	while ( true ) ;
	return 0;
}
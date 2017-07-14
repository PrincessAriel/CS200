#include <iostream>
#include <string>
using namespace std;

int main()
{
	cout << "Program 1: Dynamic variables and arrays" << endl << endl;
	cout << "Part 1: Variables" << endl << endl;

	int* myInt = new int;
	string* myStr = new string;
	float* myFloat = new float;

	*myInt = 20;
	*myStr = "Erica";
	*myFloat = 199.99;

	cout << *myInt << "          " << *myStr << "          " << *myFloat << "          " << endl;
	
	delete myInt;
	delete myStr;
	delete myFloat;

	cout << endl << endl << endl << endl;




	cout << "Part 2: Arrays" << endl << endl;

	int* myIntArr;
	string* myStrArr;
	float* myFloatArr;

	int size;

	cout << "Enter array size:          ";
	cin >> size;
	cout << endl;

	myIntArr = new int[size];
	myStrArr = new string[size];
	myFloatArr = new float[size];


	for (int i = 0; i < size; i++)
	{
		cout << "i = " << i << endl;

		cout << "        Enter int value:          ";
		cin >> myIntArr[i];

		cout << "        Enter string value:       ";
		cin >> myStrArr[i];

		cout << "        Enter float value:        ";
		cin >> myFloatArr[i];

		cout << endl;
	}

	cout << "Here is your data:" << endl << endl;

	for (int i = 0; i < size; i++)
	{
		cout << myIntArr[i] << "          " << myStrArr[i] << "           " << myFloatArr[i] << "          " << endl;
	}

	delete myIntArr;
	delete myStrArr;
	delete myFloatArr;
	






	


	



	



	while ( true ) ;
	return 0;
}
#include <iostream>
using namespace std;

int main()
{
	float a, b;
	cout << "Enter a:  ";
	cin >> a;
	cout << "Enter b:  ";
	cin >> b;
	cout << endl;
	cout << "What kind of operation?  (1) Add, (2) Subtract, (3) Multiply, (4) Divide" << endl;
	cout << "Choice:  ";
	int choice;
	cin >> choice;
	switch (choice)
	{
	case '1':
		cout << a + b << endl;
	break;

	case '2':
		cout << a - b << endl;
	break;

	case '3':
		cout << a * b << endl;
	break;

	case '4':
		cout << a / b << endl;
	break;


	default:
		cout << "Invalid choice." << endl;

	}

	while ( true ) ;
	return 0;
}
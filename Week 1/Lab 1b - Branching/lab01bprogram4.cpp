#include <iostream>
using namespace std;

int main()
{
	cout << "What is your favorite fruit?" << endl;
	cout << "1.  Apple" << endl;
	cout << "2.  Banana" << endl;
	cout << "3.  Pear" << endl;
	cout << "4.  Strawberry" << endl;
	cout << endl;
	int choice;
	cout << "Your selection:  ";
	cin >> choice;
	if (choice < 1 || choice > 4)
	{
		cout << "Invalid choice!" << endl;
	}
	else
	{
		cout << "Good choice!" << endl;
	}

	while ( true ) ;
	return 0;
}
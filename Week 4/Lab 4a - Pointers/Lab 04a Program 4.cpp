#include <iostream>
#include <string>
using namespace std;

int main()
{
	cout << "Program 4: Sizes of data types" << endl << endl << endl << endl;

	char dataType;
	
	cout << "How many bytes is it?" << endl << endl;
	cout << "Choose one of the following data types:" << endl << endl;
	cout << "[i]nt, [f]loat, [b]oolean, or [d]ouble?" << endl << endl;
	cout << ">> ";

	cin >> dataType;

	cout << endl;

	switch (dataType)
	{
		case 'i':
			cout << "An integer size is: " << sizeof(int) << " bytes" << endl;
			break;
		case 'f':
			cout << "A float size is: " << sizeof(float) << " bytes" << endl;
		break;
		case 'b':
			cout << "A boolean size is: " << sizeof(bool) << " byte" << endl;
			break;
		case 'd':
			cout << "A double size is: " << sizeof(double) << " bytes" << endl;
			break;
		default:
			cout << "Invalid selection.  Please select again" << endl;
	}

	while ( true ) ;
	return 0;
}
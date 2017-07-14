#include <iostream>
#include <string>
using namespace std;

int main()
{
	cout << "Program 6: Students" << endl << endl;
	
	string students[3];
	students[0] = "Ciaran";
	students[1] = "Saoirse";
	students[2] = "Padraig";

	string* ptrStudent;
	ptrStudent = nullptr;

	cout << "Enter 0, 1, or 2:  ";
	int id;
	cin >> id;

	if (id == 0)
	{
		ptrStudent = &students[0];
	}
	else if (id == 1)
	{
		ptrStudent = &students[1];
	}
	else if (id == 2)
	{
		ptrStudent = &students[2];
	}

	cout << "New name:  ";
	cin >> *ptrStudent;

	cout << endl;

	for (int id = 0; id < 3; id++)
	{
		cout << "Student " << id << " = " << students[id] << endl;
	}


	while ( true ) ;
	return 0;
}
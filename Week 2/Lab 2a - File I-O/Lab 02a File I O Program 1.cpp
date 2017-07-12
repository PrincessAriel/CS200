#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main()
{
	string toDoItem;
	int toDoCounter = 1;
	
	ofstream file;
	file.open( "todo.txt" );

	file << "To do list" << endl;
	cout << "To do list" << endl;

	while ( true )
	{
		cout << endl;
		cout << "Next item to do, or QUIT to stop." << endl;
		cout << ">> ";
		getline( cin, toDoItem );
		
		if ( toDoItem == "QUIT" ) { break; }

		file << "To do list" << endl;

		toDoCounter++;
	}

	file.close();

	while ( true ) ;
	return 0;
}
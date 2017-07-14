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

	file << "to do list" << endl;
	cout << "To do list" << endl;
	
	while ( true )
	{
		ifstream inputFile;
		inputFile.open("todo.txt");

		inputFile >> toDoItem;

		inputFile.close(); 

		cout << endl;
		cout << "Next item to do, or QUIT to stop." << endl;
		cout << ">> ";
		getline(cin, toDoItem);

		if ( toDoItem == "QUIT" ) { break; }

		ofstream outputFile;
		outputFile.open( "todo.txt" );

		outputFile << "toDoItem" << endl;

		outputFile.close();

		toDoCounter++;
	}

	file.close();

	return 0;
}
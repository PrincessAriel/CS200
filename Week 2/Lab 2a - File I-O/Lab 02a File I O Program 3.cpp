#include <iostream>
#include <string>
#include <fstream>
using namespace std;

int main()
{
	ifstream input;

	input.open( "story.txt" );

	string line;

	while ( getline ( input, line ) )
	{
		cout << line << endl;
	}

	
	input.close();

	while ( true ) ;
	return 0;
}
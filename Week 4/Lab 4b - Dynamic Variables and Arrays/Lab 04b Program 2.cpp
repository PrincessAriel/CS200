#include <iostream>
#include <cstdlib> 
#include <ctime>
using namespace std;

int main()
{
	cout << "Program 2: Lotto numbers" << endl << endl;
	
	srand( time( NULL ) );
	
	cout << "How many lotto balls will there be?" << endl;
	cout << ">>  ";
	int size;
	cin >> size;

	
	int* lottoNumbers;
	lottoNumbers = new int[size];

	for (int i = 0; i < size; i++)
	{
		cout << lottoNumbers[i] << "\t";
		int lottoNumbers = ( rand() % 101 );
		/*Display the value of each lotto ball while generating.*/
	}

	delete [] lottoNumbers;


	while ( true ) ;
	return 0;
}
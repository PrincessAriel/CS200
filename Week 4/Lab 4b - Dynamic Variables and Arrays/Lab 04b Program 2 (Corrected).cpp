#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>
using namespace std;

int main()
{
	srand( time( NULL ) );

	cout << "How many lotto balls will there be?" << endl;
	int size;
	cin >> size;

	int* lottoBalls;
	lottoBalls = new int[ size ];

	for (int i = 0; i < size; i++)
	{
		int randomNumber = rand() % 100;
		lottoBalls[i] = randomNumber;
		cout << lottoBalls[i] << "\t";
	}

	delete[] lottoBalls;

	while ( true ) ;
	return 0;
}

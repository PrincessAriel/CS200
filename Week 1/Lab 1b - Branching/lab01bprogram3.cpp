#include <iostream>
using namespace std;

int main()
{
	float battery;
	cout << "What is your current battery charge?  %";
	cin >> battery;
	if (battery >= 75)
	{
		cout << "[****]" << endl;
	}
	else if (battery >= 50)
	{
		cout << "[*** ]" << endl;
	}
	else if (battery >= 25)
	{
		cout << "[**  ]" << endl;
	}
	else
	{
		cout << "[*   ]" << endl;
	}

	while ( true ) ;
	return 0;
}
#include <iostream>
#include <string>
using namespace std;

int main()
{
	string hometown, name;
	cout << "What is your home town?" << endl;
	cin >> hometown;
	cout << endl;
	int letters_in_home_town_name = hometown.size();
	if (hometown.size() > 6)
	{
		cout << "That's a long name!" << endl;
	}
	cout << endl;
	cout << "What is your name?" << endl;
	cin >> name;
	cout << endl;
	cout << "Hello, " << name << " from " << hometown << "!" << endl;

	while ( true ) ;
	return 0;
}
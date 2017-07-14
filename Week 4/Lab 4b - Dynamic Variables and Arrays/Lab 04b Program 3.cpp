#include <iostream>
#include <string>
using namespace std;

int main()
{
	cout << "Program 3: Build a buddy" << endl << endl;
	
	string ears[3]      = { "   ^ ^   ",   "  n   n  ",   "  *   *  " };
	string heads[3]     = { " ( o_o ) ",   " ( x_x ) ",   " ( >_< ) " };
	string bodies[3]    = { "/(     )\\",  "\\(     )/",  "o(     )o" };
	string feet[3]      = { "  d   b  ",   "  @   @  ",   "  () ()  " };

	string* ptrEars;
	string* ptrHead;
	string* ptrBody;
	string* ptrFeet;

	int index;
	cout << "Enter ears (0 - 2):  ";
	cin >> index;
	ptrEars = &ears[ index ];

	cout << "Enter head (0 - 2):  ";
	cin >> index;
	ptrHead = &heads[ index ];

	cout << "Enter body (0 - 2):  ";
	cin >> index;
	ptrBody = &bodies[ index ];

	cout << "Enter feet (0 - 2):  ";
	cin >> index;
	ptrFeet = &feet[ index ];
	

	cout << endl << *ptrEars << endl << *ptrHead << endl << *ptrBody << endl << *ptrFeet << endl;


	while (true);
	return 0;
}
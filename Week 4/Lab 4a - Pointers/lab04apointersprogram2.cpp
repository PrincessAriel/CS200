#include <iostream>
#include <string>
using namespace std;

int main()
{
	cout << "Program 2: Display addresses of array elements" << endl << endl;

	string narnianPlaces[10];
	narnianPlaces[0] = "Spare_Oom_War_Drobe";
	narnianPlaces[1] = "Lamppost";
	narnianPlaces[2] = "Aslan's_How";
	narnianPlaces[3] = "Stone_Table";
	narnianPlaces[4] = "Cair_Paravel";
	narnianPlaces[5] = "The_Lone_Islands";
	narnianPlaces[6] = "Island_of_Ramandu";
	narnianPlaces[7] = "Aslan's_Table";
	narnianPlaces[8] = "The_Utter_East";
	narnianPlaces[9] = "Aslan's_Country";

	cout << "Array address: " << &narnianPlaces << endl;
	cout << "Item 0 address: " << &narnianPlaces[0] << "          value:  " << narnianPlaces[0] << endl;
	cout << "Item 1 address: " << &narnianPlaces[1] << "          value:  " << narnianPlaces[1] << endl;
	cout << "Item 2 address: " << &narnianPlaces[2] << "          value:  " << narnianPlaces[2] << endl;
	cout << "Item 3 address: " << &narnianPlaces[3] << "          value:  " << narnianPlaces[3] << endl;
	cout << "Item 4 address: " << &narnianPlaces[4] << "          value:  " << narnianPlaces[4] << endl;
	cout << "Item 5 address: " << &narnianPlaces[5] << "          value:  " << narnianPlaces[5] << endl;
	cout << "Item 6 address: " << &narnianPlaces[6] << "          value:  " << narnianPlaces[6] << endl;
	cout << "Item 7 address: " << &narnianPlaces[7] << "          value:  " << narnianPlaces[7] << endl;
	cout << "Item 8 address: " << &narnianPlaces[8] << "          value:  " << narnianPlaces[8] << endl;
	cout << "Item 9 address: " << &narnianPlaces[9] << "          value:  " << narnianPlaces[9] << endl;

	while ( true ) ;
	return 0;
}
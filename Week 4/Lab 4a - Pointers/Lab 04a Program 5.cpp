#include <iostream>
#include <string>
using namespace std;

int main()
{
	cout << "Program 5: Food" << endl << endl;

	float priceHamburger = 4.35, priceFries = 1.95, priceSalad = 6.35;

	float* ptrPrice;
	ptrPrice = nullptr;
	
	string choice;
	cout << "Would you like a [h]amburger, [f]ries, or a [s]alad?  ";
	cin >> choice;

	if (choice == "h")
	{
		ptrPrice = &priceHamburger;
	}
	else if (choice == "f")
	{
		ptrPrice = &priceFries;
	}
	else if (choice == "s")
	{
		ptrPrice = &priceSalad;
	}
	else
	{
		cout << "Invalid selection.  Please select again." << endl;
	}

	cout << "Original price:  $" << *ptrPrice << endl;

	float taxAmt = (*ptrPrice * 0.065) + *ptrPrice;
	cout << "With tax price:  $" << taxAmt << endl;

	while ( true ) ;
	return 0;
}
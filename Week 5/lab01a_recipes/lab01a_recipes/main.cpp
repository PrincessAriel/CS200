#include <iostream>
using namespace std;

int main()
{
	cout << "How many batches do you want to make?" << endl;
	float ratio;
	cin >> ratio;
	float teaspoons_of_baking_soda, teaspoons_of_baking_powder, cups_of_butter, cups_of_white_sugar, amount_of_eggs;
		teaspoons_of_baking_soda = 1 * ratio;
		teaspoons_of_baking_powder = 0.5 * ratio;
		cups_of_butter = 1 * ratio;
		cups_of_white_sugar = 1.5 * ratio;
		amount_of_eggs = 1 * ratio;
	cout << "Sugar Cookie Recipe:" << endl << endl; 
	cout << teaspoons_of_baking_soda << " tsp      baking soda" << endl;
	cout << teaspoons_of_baking_powder << " tsp    baking powder" << endl;
	cout << cups_of_butter << " c        butter" << endl;
	cout << cups_of_white_sugar << " c      white sugar" << endl;
	cout << amount_of_eggs << "          egg" << endl;
	
	while (true);
	return 0;
}
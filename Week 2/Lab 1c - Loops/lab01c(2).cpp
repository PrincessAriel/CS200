#include <iostream>
#include <string>
using namespace std;

void F1_CountingUp()
{
	cout << "F1_CountingUp" << endl;
	cout << "WHILE LOOP" << endl;
	int counter = 0;
	while (counter <= 9)
	{
		cout << counter++ << "       ";
	}
	cout << endl;
	cout << "FOR LOOP" << endl;
	for (int i = 0; i <= 9; i++)
	{
		cout << i << "       ";
	}
	cout << endl;
}

void F2_MultiplyUp()
{
	cout << "F2_MultiplyUp" << endl;
	cout << "WHILE LOOP" << endl;
	int counter = 1;
	while (counter < 200)
	{
		cout << counter << "       ";
		counter = counter * 2;
	}
	cout << endl;
	cout << "FOR LOOP" << endl;
	for (int counter = 1; counter < 200; counter *= 2)
	{
		cout << counter << "       ";
	}
	cout << endl;
}

void F3_NumberGuesser()
{
	cout << "F3_NumberGuesser" << endl;
	cout << "DO-WHILE LOOP" << endl;
	int secret_number = 7;
	int player_guess;
	do
	{
		cout << "Enter your guess:  ";
		cin >> player_guess;
		if (player_guess < secret_number)
		{
			cout << "Too low!" << endl;
		}
		else if (player_guess > secret_number)
		{
			cout << "Too high!" << endl;
		}
	} while (player_guess != secret_number);
	cout << "You win!" << endl;
}

void F4_InputValidator()
{
	cout << "F4_InputValidator" << endl;
	cout << "Please enter a number between 0 and 5:  ";
	int choice;
	cin >> choice;
	while (choice < 0 || choice > 5)
	{
		cout << "Invalid entry.  Try again:  ";
		cin >> choice;
	}
	cout << "Thank you." << endl;
}

void F5_GettingARaise()
{
	cout << "F5_GettingARaise" << endl;
	float starting_wage;
	float percent_raise_per_year;
	float adjusted_wage;
	int years_worked;
	cout << "What is your starting wage?  >>  ";
	cin >> starting_wage;
	cout << "What % of a raise do you get per year?  >>  %";
	cin >> percent_raise_per_year;
	cout << "How many years have you worked?  >>  ";
	cin >> years_worked;
	adjusted_wage = starting_wage;
	for ( int years = 1; years <= years_worked; years++ )
	{
		adjusted_wage = (adjusted_wage * percent_raise_per_year * 0.01) + adjusted_wage;
	}
	cout << "Your new wage is $ " << adjusted_wage << endl;
}

void F6_Summation()
{
	cout << "F6_Summation" << endl;
	float sum = 0;
	cout << "Calculate a sum ...  ";
	for ( int counter = 1; counter <= 10; counter++ )
	{
		cout << counter << " + ";
		sum = sum + counter;
	}
	cout << endl;
	cout << "Sum:  " << sum << endl;
}


int main()
{
	F1_CountingUp();
	cout << endl << endl;

	F2_MultiplyUp();
	cout << endl << endl;

	F3_NumberGuesser();
	cout << endl << endl;

	F4_InputValidator();
	cout << endl << endl;

	F5_GettingARaise();
	cout << endl << endl;

	F6_Summation();
	cout << endl << endl;


	cout << endl << endl;
	while (true);
	return 0;
}
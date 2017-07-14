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
	for (int i = 0; i <= 9; i++ )
	{
		cout << i << "       ";
	}
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
	for ( int counter = 1; counter < 200; counter *= 2 )
	{
		cout << counter << "       ";
	}
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
		else
		{
			cout << "Too high!" << endl;
		}
	} while (player_guess != secret_number);
	cout << "You win!" << endl;
	cout << "FOR LOOP" << endl;
}

void F4_InputValidator()
{
	cout << "F4_InputValidator" << endl;
}

void F5_GettingARaise()
{
	cout << "F5_GettingARaise" << endl;
}

void F6_Summation()
{
	cout << "F6_Summation" << endl;
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
	while ( true );
	return 0;
}
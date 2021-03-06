#include <iostream>
#include <string>
using namespace std;

#include "Student.hpp"
#include "Fraction.hpp"
#include "Scholarship.hpp"

void Program1()
{
	Student newStudent;
	newStudent.name = "Atara";
	newStudent.degree = "Astronomy";
	newStudent.gpa = 3.7;

	cout << "Student name:    " << newStudent.name << endl;
	cout << "Degree:          " << newStudent.degree << endl;
	cout << "GPA:             " << newStudent.gpa << endl;
}

void Program2()
{
	Fraction frac1;
	frac1.Setup( 2, 3 );

	Fraction frac2;
	frac2.Setup( 3, 4 );

	Fraction sum, difference, product, quotient;
	sum        = frac1.Add( frac2 );
	difference = frac1.Subtract( frac2 );
	product    = frac1.Multiply( frac2 );
	quotient   = frac1.Divide( frac2 );
	
	frac1.Display();
	cout << " plus ";
	frac2.Display();
	cout << " = ";
	sum.Display();

	cout << endl;

	frac1.Display();
	cout << " minus ";
	frac2.Display();
	cout << " = ";
	difference.Display();

	cout << endl;

	frac1.Display();
	cout << " multiplied by ";
	frac2.Display();
	cout << " = ";
	product.Display();

	cout << endl;

	frac1.Display();
	cout << " divided by ";
	frac2.Display();
	cout << " = ";
	quotient.Display();

	cout << endl;
}

void Program3()
{
	Student students[9];
	students[0].name = "Asriel";
	students[0].gpa = 3.7;
	students[1].name = "Fhionnabhair";
	students[1].gpa = 3.9;
	students[2].name = "Rajkumari";
	students[2].gpa = 4.0;
	students[3].name = "Adalbjorg";
	students[3].gpa = 3.4;
	students[4].name = "Akbar";
	students[4].gpa = 3.5;
	students[5].name = "Rhuairidh";
	students[5].gpa = 3.3;
	students[6].name = "Gudbrandr";
	students[6].gpa = 3.1;
	students[7].name = "Keturah";
	students[7].gpa = 3.2;
	students[8].name = "Svanhildr";
	students[8].gpa = 3.0;

	Scholarship scholarships[3];
	scholarships[0].Setup( "small", 100, &students[0], &students[1], &students[2] );
	scholarships[1].Setup( "medium", 1000, &students[3], &students[4], &students[5] );
	scholarships[2].Setup( "large", 10000, &students[6], &students[7], &students[8] );

	for (int i = 0; i < 2; i++)
	{
		scholarships[i].Display();
	}

}

int main()
{
	while ( true )
	{
		cout << "1. Program 1" << endl;
		cout << "2. Program 2" << endl;
		cout << "3. Program 3" << endl;
		cout << "Run which lab?  ";
		int choice;
		cin >> choice;

		cout << endl << endl;

		switch( choice )
		{
			case 1:     Program1();     break;
			case 2:     Program2();     break;
			case 3:     Program3();     break;
		}

		cout << endl << endl;
	}

	return 0;
}
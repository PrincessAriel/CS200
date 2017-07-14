#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>
using namespace std;

const int MANAGER_COUNT = 2;
const int EMPLOYEE_COUNT = 5;

void AssignManagers( string managerNames[ MANAGER_COUNT ], string* employeeManagers[ EMPLOYEE_COUNT ] )
{
	for (int i = 0; i < EMPLOYEE_COUNT; i++)
	{
		int index = rand() % MANAGER_COUNT;
		employeeManagers[i] = &managerNames[ index ];
	}
}

void DisplayEmployees( string employeeNames[ EMPLOYEE_COUNT ], string* employeeManagers[ EMPLOYEE_COUNT ] )
{
	for (int i = 0; i < EMPLOYEE_COUNT; i++)
	{
		cout << "Employee " << i << "\t" << employeeNames[i] << "\t Manager: " << *employeeManagers[i] << endl;
	}
}

int main()
{
	srand( time( NULL ) );

	string managerNames[ MANAGER_COUNT ] = { "Cinaed", "Diarmaid" };
	string employeeNames[ EMPLOYEE_COUNT ] = { "Ciaran", "Fiona", "Saoirse", "Padraig", "Siobhan" };

	string* employeeManagers[ EMPLOYEE_COUNT ];

	AssignManagers( managerNames, employeeManagers );
	DisplayEmployees( employeeNames, employeeManagers );


	while ( true ) ;
	return 0;

}
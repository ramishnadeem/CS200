#include <iostream>
#include <string>
#include <cstdlib>      // for srand and rand
#include <ctime>        // for time
using namespace std;

const int MANAGER_COUNT = 2;
const int EMPLOYEE_COUNT = 5;

void AssignManagers( string managerNames[ MANAGER_COUNT ], string * employeeManagers[ EMPLOYEE_COUNT ] )
{
    int employeeIndex;
    for ( int employeeIndex = 0; employeeIndex < EMPLOYEE_COUNT; employeeIndex++ )
    {
        int managerIndex = rand() % MANAGER_COUNT;
        employeeManagers[employeeIndex] = managerNames[ managerIndex ];
    }
}

void DisplayEmployees( string employeeNames[ EMPLOYEE_COUNT ], string * employeeManagers[ EMPLOYEE_COUNT ] )
{
    int employeeIndex;
    for ( employeeIndex = 0; employeeIndex < EMPLOYEE_COUNT; employeeIndex++ )
    {
        cout << "Employee " << employeeIndex << ": \t";
        cout << employeeNames[ employeeIndex ] << "\t\t";
        cout << "Manager: \t";
        cout << *employeeManagers[ employeeIndex ] << endl;
    }
}

int main()
{
    srand( time( NULL ) );
    string managerNames [MANAGER_COUNT] = {"Artemis", "Luna"};
    string employeeNames [EMPLOYEE_COUNT] = {"Bob", "Alex", "Mike", "Lily", "Mina"};
    string employeeManagers [EMPLOYEE_COUNT] = {"Ramish","Pat","Carlos","Stephen","Mark"};

    AssignManagers(managerNames, employeeManagers);
    DisplayEmployees(employeeNames, employeeManagers);




    while ( true );
    return 0;
}
/**
 * Ramish Nadeem
 * To Do List
 */

#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    string toDoItem;
    int toDoCounter = 1;

    ofstream file;
    file.open( "/Users/ramishnadeem/Desktop/c++ school/Lab 2A/To Do List/todo.txt" );

    file << "to do list" << endl;   // write to text file
    cout << "to do list" << endl;   // write to screen

    while ( true )
    {
        // Get item in to do list
        cout << endl;
        cout << "Next item to do, or QUIT to stop." << endl;
        cout << ">> ";
        getline( cin, toDoItem );

        if ( toDoItem == "QUIT" ) { break; }

        // TODO: Output the "toDoItem" variable to the text file
        file << toDoItem << endl;

        toDoCounter++;
    }

    file.close();

    return 0;
}
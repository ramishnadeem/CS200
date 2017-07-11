/*
 * Ramish Nadeem
 * Hometown
 */
#include <string>   // use strings
#include <iostream>
using namespace std;

int main() {
    //Delcaring variables
    string homeTown, name;

    //Input for hometown
    cout << "What is your hometown?: ";
    cin >> homeTown;

    //Checks size of hometown
    if (homeTown.size() > 6)
    {
        cout << "That's a long name!" << endl;

    }

    //Input for name
    cout << "What is your name?: ";
    cin >> name;

    //Display final results
    cout << "Hello, " << name << " from " << homeTown;


}
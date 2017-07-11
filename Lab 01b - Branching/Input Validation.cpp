/*
 * Ramish Nadeem
 * Input Validation
 */
#include <iostream>
using namespace std;

int main() {

    //Declaring variable
    int choice;

    //Displaying fruits
    cout << "What is your favorite fruit? " << endl;
    cout << "1. Apple " << endl
         << "2. Banana " << endl
         << "3. Pear " << endl
         << "4. Strawberry " << endl;

    //Inputs a choice
    cout << "Your selection: ";
    cin >> choice;

    //Checks to see if choice is valid
    if (choice < 1 || choice > 4)
    {
        cout << "Invalid choice!" << endl;
    }
    else
    {
        cout << "Good choice" << endl;
    }
}
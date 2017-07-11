/*
 * Ramish Nadeem
 * Battery Charge
 */
#include <iostream>
using namespace std;

int main() {
    //Declaring variables
    float charge;
    //Inputs the current charge
    cout << "What is your current battery charge?: ";
    cin >> charge;

    //Displays the picture
    if (charge >= 75)
    {
        cout << "[****]";
    }
    else if (charge >= 50)
    {
        cout << "[*** ]";
    }
    else if (charge >= 25)
    {
        cout << "[** ]";
    } else {
        cout << "[* ]";
    }
}
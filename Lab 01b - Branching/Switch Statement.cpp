/*
 * Ramish Nadeem
 * switch statement
 */
#include <iostream>

using namespace std;

int main() {
    //Declaring variables
    float a, b;
    int choice;
    //Inputs a and b
    cout << "Enter a: ";
    cin >> a;

    cout << "Enter b: ";
    cin >> b;

    //Asks user which operation to use
    cout << "What king of operation?: (1) Add, (2) Subtraction, (3) Multiply, (4) Divide " << endl;
    cout << "choice: ";
    cin >> choice;

    //Performs the selected operation and outputs the results
    switch (choice) {
        case 1: {
            cout << a + b;
            break;
        }
        case 2: {
            cout << a - b;
            break;
        }
        case 3: {
            cout << a * b;
            break;
        }
        case 4:{
            cout << a/b;
            break;
        }
        default:{
            cout << "Invalid choice";
        }
    }


}
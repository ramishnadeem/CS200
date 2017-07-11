/*
 * Ramish Nadeem
 * Functions
 */

#include <iostream>

using namespace std;

// Function 1
void F1_CountingUp() {
    int counter = 0;
    cout << "F1_CountingUp" << endl;
    cout << "WHILE LOOP" << endl;
    while (counter < 10) {
        cout << counter << "\t";
        counter++;
    }
    cout << endl;
    cout << "FOR LOOP" << endl;
    for (counter = 0; counter < 10; counter++) {
        cout << counter << "\t";
    }


}

// Function 2
void F2_MultiplyUp() {
    int counter = 1;
    cout << "F2_MultiplyUp" << endl;
    cout << "WHILE LOOP" << endl;
    while (counter < 200) {
        cout << counter << "\t";
        counter *= 2;

    }
    cout << endl;
    cout << "FOR LOOP" << endl;
    for (counter = 1; counter < 200; counter *= 2) {
        cout << counter << "\t";
    }
}

// Function 3
void F3_NumberGuesser() {
    cout << "F3_NumberGuesser" << endl;
    int secretNumber = 18;
    int playerGuesses;
    do {


        cout << "Enter your guess?: ";
        cin >> playerGuesses;


        if (playerGuesses < secretNumber) {
            cout << "Too Low" << endl;
        } else {
            cout << "Too High" << endl;
        }

    } while (playerGuesses != secretNumber);

    cout << "You Win" << endl;
}

// Function 4
void F4_InputValidator() {
    cout << "F4_InputValidator" << endl;
    int choice;
    cout << "Please enter a number between 0 and 5: ";
    cin >> choice;
    while (choice < 0 || choice > 5) {
        cout << "Invalid Entry. Try Again: ";
        cin >> choice;
    }
    cout << "Thank You! ";
}

// Function 5
void F5_GettingARaise() {
    cout << "F5_GettingARaise" << endl;
    float startingWage, percentRaisePerYear, adjustedWage;
    int yearsWorked;
    cout << "Enter your starting wage?: ";
    cin >> startingWage;
    cout << "Enter the percent raise you get per year?: ";
    cin >> percentRaisePerYear;
    percentRaisePerYear = percentRaisePerYear/100;

    cout << "How many years have you worked here?: ";
    cin >> yearsWorked;

    adjustedWage = startingWage;

    for (int years = 1; years < yearsWorked ; years++) {

        adjustedWage = ( adjustedWage * percentRaisePerYear ) + adjustedWage;

        cout << "Salary at year " << years << ": " << adjustedWage << endl;
    }
    cout << endl;
    cout << "Your new wage is: " << adjustedWage;

}

// Function 6
void F6_Summation() {
    cout << "F6_Summation" << endl;
    float sum;
    cout << "Enter a number 10 times?: " << endl;
    for (int i = 0; i < 10; i++) {
        int number = 0;
        cin >> number;
        sum += number;

    }
    cout << "The sum is " << sum;
}

/* Don't modify the code below! ****************************************/

int main() {
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

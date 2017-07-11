/*
 * Ramish Nadeem
 * Pass/Fail
 */
#include <iostream>
using namespace std;
int main() {

    //declaring variables
    float studentPoints, totalPoints, percent;
    //Input for score
    cout << "What was your score?: " << endl;
    cin >> studentPoints;
    //Input for total points
    cout << "What was the total points?: " << endl;
    cin >> totalPoints;
    //Calculating percentage
    percent = ( studentPoints/totalPoints ) * 100;
    cout << percent << "% " << "       ";
    //Checking if student passes
    if (percent >= 70)
    {
        cout << "Pass";
    } else {
        cout << "Fail";
    }
}
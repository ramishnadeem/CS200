/*
 * @author Ramish Nadeem
 * @filename Lab 1A- Output the recipe
 */

#include <iostream>     // Input/output library
using namespace std;    // Standard C++ library namespace

int main()
{
    // Program begins

    //Declaring variables
    float teaspoons_of_baking_soda = 1;
    float teaspoons_of_baking_powder = .5;
    float cups_of_butter = 1;
    float cups_of_white_sugar = 1.5;
    float amount_of_eggs =  1;
    float batch;

    //Displaying normal measurements
    cout << teaspoons_of_baking_soda << " tsp baking soda " << endl;
    cout << teaspoons_of_baking_powder << " tsp baking powder" << endl;
    cout << cups_of_butter << " cups butter" << endl;
    cout << cups_of_white_sugar << " cups white sugar" << endl;
    cout << amount_of_eggs << " egg" << endl;

    //Asking for input for how many batches the user would like to make
    cout << "How many batches would you like to make?: ";
    cin >> batch;

    //displaying the ingredients altered to the ratio
    cout << (teaspoons_of_baking_soda * batch) << " tsp baking soda " << endl;
    cout << (teaspoons_of_baking_powder * batch) << " tsp baking powder" << endl;
    cout << (cups_of_butter * batch) << " c butter" << endl;
    cout << (cups_of_white_sugar * batch) << " c white sugar" << endl;
    cout << (amount_of_eggs * batch) << " egg" << endl;

    while ( true ) ;    // Program stops here
    return 0;
}
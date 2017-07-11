#include <iostream>
#include <string>
using namespace std;

// Declare function here
float CountChange (float quarterCount, float dimeCount, float nickelCount, float pennyCount)
{

    float money;
    quarterCount *=  .25;

    dimeCount *= .10;

    nickelCount *= .05;

    pennyCount *= .01;

    money = quarterCount + dimeCount + nickelCount + pennyCount;

    return money;





}


int main()
{
    while ( true )
    {
        int quarters, dimes, nickels, pennies;

        cout << "How many quarters? ";
        cin >> quarters;

        cout << "How many dimes? ";
        cin >> dimes;

        cout << "How many nickels? ";
        cin >> nickels;

        cout << "How many pennies? ";
        cin >> pennies;

        float money = CountChange( quarters, dimes, nickels, pennies );
        cout << "Money: $" << money << endl;

        cout << endl << endl;
    }

    return 0;
}
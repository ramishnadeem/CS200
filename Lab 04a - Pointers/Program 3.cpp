#include <iostream>
#include <string>
using namespace std;

int main()
{
    int earIndex, headIndex, bodyIndex, feetIndex;
    string ears[3]      = { "   ^ ^   ",   "  n   n ",     "  *   *  " };
    string heads[3]     = { " ( o_o ) ",   " ( x_x )" ,    " ( >_< ) " };
    string bodies[3]    = { "/(     )\\",  "\\(     )/",   "o(     )o" };
    string feet[3]      = { "  d   b   ",  "  @   @ ",     "  () () "  };

    string * ptrEars;
    string * ptrHead;
    string * ptrBody;
    string * ptrFeet;

    // Add code here
    cout << "Enter ears (0 - 2): ";
    cin >> earIndex;
    cout << "Enter head (0 - 2): " ;
    cin >> headIndex;
    cout << "Enter body (0 - 2): " ;
    cin >> bodyIndex;
    cout << "Enter feet (0 - 2): ";
    cin >> feetIndex;

    ptrEars = &ears[ earIndex ];
    ptrHead = &heads[ headIndex ];
    ptrBody = &bodies[ bodyIndex ];
    ptrFeet = &feet[ feetIndex ];

    cout << *ptrEars << endl;
    cout << *ptrHead << endl;
    cout << *ptrBody << endl;
    cout << *ptrFeet << endl;


    return 0;
}
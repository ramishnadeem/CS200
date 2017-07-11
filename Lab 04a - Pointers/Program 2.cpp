#include <iostream>
#include <cstdlib>      // to use rand()
#include <ctime>        // to use time()
using namespace std;

int main()
{
    srand( time( NULL ) ); // (At the beginning of main())
    int size;
    int* lottoBalls;
    lottoBalls = new int[size];
    int i;
    cout << "Enter the number of lotto balls?: ";
    cin >> size;

    for (i=0; i<size; i++)
    {
        lottoBalls[i] = rand() % 100;
        cout << lottoBalls[i] << "\t";
    }

    delete [] lottoBalls;
    return 0;
}
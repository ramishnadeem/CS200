#include <iostream>

using namespace std;


int main() {
    int *myInt;
    string *myStr;
    float *myFloat;

    myInt = new int;
    myStr = new string;
    myFloat = new float;

    *myInt = 20;
    *myStr = ("Ramish");
    *myFloat = 199.99;

    cout << *myInt << "  " << *myStr << "  " << *myFloat;

    delete myInt;
    delete myStr;
    delete myFloat;

    int *myIntArr;
    string *myStrArr;
    float *myFloatArr;
    int size;

    cout << endl;
    int i;
    cout << "Array Size: ";
    cin >> size;
    cout << endl;
    myIntArr = new int[size];
    myStrArr = new string[size];
    myFloatArr = new float[size];

    for (i = 0; i < size; i++) {
        cout << "i" << " = " << i << endl;
        cout << "Enter int value: ";
        cin >> myIntArr[i];
        cout << "Enter string value: ";
        cin >> myStrArr[i];
        cout << "Enter float value: ";
        cin >> myFloatArr[i];
        cout << endl;
    }

    for (i = 0; i < size; i++) {
        cout << myIntArr[i] << "\t" << myStrArr[i] << "\t" << myFloatArr[i] << endl;
    }


    delete[] myIntArr;
    delete[] myStrArr;
    delete[] myFloatArr;
}
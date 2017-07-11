#include <iostream>
#include <string>
using namespace std;

void Program1()
{
    int myNumber = 100;
    float myBigNumber = 10.99;
    string myName = "Ramish";

    cout << "Address " << &myNumber << " = " << myNumber << endl;
    cout << "Address " << &myBigNumber << " = " << myBigNumber << endl;
    cout << "Address " << &myName << " = " << myName << endl;

}

void Program2()
{
    string schools[4] = {"JCCC", "KU", "UMKC", "K-STATE"};
    cout << "Array Address = " << schools << endl;

    cout << "Item 0 Address = " << &schools[0] << "\a Value: " << schools[0] << endl;
    cout << "Item 1 Address = " << &schools[1] << "\a Value: " << schools[1] << endl;
    cout << "Item 2 Address = " << &schools[2] << "\a Value: " << schools[2] << endl;
    cout << "Item 3 Address = " << &schools[3] << "\a Value: " << schools[3] << endl;
}

void Program3()
{
    int myNumber = 100;
    float myBigNumber = 10.99;
    string myName = "Ramish";

    int* ptrNumber = &myNumber;
    float* ptrBigNumber = &myBigNumber;
    string* ptrName = & myName;

    cout << "Address " << ptrNumber << " = " << *ptrNumber << endl;
    cout << "Address " << ptrBigNumber << " = " << *ptrBigNumber << endl;
    cout << "Address " << ptrName << " = " << *ptrName << endl;
}

void Program4()
{
    string choice;
    cout << "How many bytes is it?\n"
            "\n"
            "Choose one of the following data types:\n"
            " \n"
            "[i]nt, [f]loat, [b]oolean, or [d]ouble?";
    cin >> choice;
    if (choice == "i")
    {
        cout << sizeof( int ) << " bytes" << endl;

    }
    else if (choice == "f")
    {
        cout << sizeof(float ) << " bytes" << endl;
    }
    else if (choice == "b")
    {
        cout << sizeof(bool ) << " bytes" << endl;
    }
    else if (choice == "d")
    {
        cout << sizeof(double ) << " bytes" << endl;
    }
}

void Program5()
{
    float priceHamburger = 10;
    float priceFries = 20;
    float priceSalad = 30;
    float priceDefault = 0;
    float*  ptrPrice = nullptr;
    string choice;
    cout << "Do you want [h]amburger, [f]ries, or [s]alad? ";
    cin >> choice;
    if (choice == "h")
    {
        ptrPrice = &priceHamburger;
    }
    if (choice == "f")
    {
        ptrPrice = &priceFries;
    }
    if (choice == "s")
    {
        ptrPrice = &priceSalad;
    }
    float taxRate = 0.065;
    float taxAmount, pricePlusTax;
    taxAmount = taxRate * *ptrPrice;
    pricePlusTax = taxAmount + *ptrPrice;
    cout << "Original Price: " << *ptrPrice << endl;
    cout << "Tax amount: " << taxAmount << endl;
    cout << "With tax price: " << pricePlusTax << endl;
}

void Program6()
{
    string students [3];
    int itemCount = 3;
    for (int i = 0; i < itemCount; i++)
    {
        string* ptrStudent;
        int id;
        cout << "Enter 0,1,2: " << endl;
        cin >> id;
        ptrStudent = &students[id];
        cout << "Enter new name: " << endl;
        cin >> *ptrStudent;
    }
    cout << students[0] << endl;
    cout << students[1] << endl;
    cout << students[2] << endl;
}

int main()
{
    bool done = false;
    while ( !done )
    {
        cout << "1. Run Program1" << endl;
        cout << "2. Run Program2" << endl;
        cout << "3. Run Program3" << endl;
        cout << "4. Run Program4" << endl;
        cout << "5. Run Program5" << endl;
        cout << "6. Run Program6" << endl;
        cout << "7. Exit" << endl;

        int choice;
        cin >> choice;

        switch( choice )
        {
            case 1:     Program1();     break;
            case 2:     Program2();     break;
            case 3:     Program3();     break;
            case 4:     Program4();     break;
            case 5:     Program5();     break;
            case 6:     Program6();     break;
            case 7:     done = true;     break;
        }
    }

    return 0;
}


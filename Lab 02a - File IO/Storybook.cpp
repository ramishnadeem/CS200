#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    // TODO: Create an ifstream variable named "input"
    ifstream input;


    // TODO: Open the story.txt file
    input.open("/Users/ramishnadeem/Desktop/c++ school/Lab 2A/storybook/story.txt");

    string line;

    while ( getline( input, line ) )    // Keep reading in lines of text
    {
        cout << line << endl;   // Display text to the screen
    }

    // TODO: Close the input file
    input.close();

    return 0;
}
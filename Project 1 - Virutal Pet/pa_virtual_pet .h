#ifndef _PA // don't modify
#define _PA // don't modify

#include <string>       // don't modify
#include <iostream>     // don't modify

using namespace std;    // don't modify

void DisplayPetStats(string petName, int hungerPercent, int happinessPercent, int healthPercent) {
    cout << "Name: " << petName << endl;
    cout << "Hunger: " << hungerPercent << endl;
    cout << "Happiness: " << happinessPercent << endl;
    cout << "Health: " << healthPercent << endl;
}

void DisplayMainMenu() {
    cout << "1. Feed pet" << endl
         << "2. Play with pet" << endl
         << "3. Heal pet" << endl
         << "4. Quit" << endl;
}

void DrawPet(int healthPercent) {
    if (healthPercent > 75) {
        cout << "( ^_^ )";
    } else if (healthPercent > 50) {
        cout << "( o_o )";
    } else if (healthPercent > 25) {
        cout << "( ._. )";
    } else {
        cout << "( x_x )";
    }
}

int GetChoice(int min, int max) {



}

void UpdatePet(int &hungerPercent, int &happinessPercent, int &healthPercent) {
    hungerPercent += 5;

    if (healthPercent >= 75) {
        healthPercent -= 10;
        happinessPercent -= 10;
    } else if (healthPercent >= 50 || healthPercent < 75) {
        healthPercent -= 5;
        happinessPercent -= 5;
    } else if (healthPercent >= 25 || healthPercent < 50) {
        happinessPercent -= 2;
        hungerPercent -= 2;
    }

    if (hungerPercent > 100) {
        hungerPercent = 100;
    }
    if (happinessPercent < 0) {
        happinessPercent = 0;
    }
    if (healthPercent < 0) {
        healthPercent = 0;
    }
}

void Feed(int &hungerPercent) {
    hungerPercent -= 8;
    if (hungerPercent < 0) {
        hungerPercent = 0;
    }
}

void Play(int &happinessPercent) {
    happinessPercent += 5;
    if (happinessPercent > 100) {
        happinessPercent = 100;
    }
}

void Heal(int &healthPercent) {
    healthPercent += 5;
    if (healthPercent > 100) {
        healthPercent = 100;
    }
}

#endif // don't modify

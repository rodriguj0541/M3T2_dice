// CSC 134
// M3 Random Numbers Example
// Josue Rodriguez
// 10/16/2025
// Start with dice rolls

#include <iostream>
#include <cmath>     // for math functions (not needed here but often included)
#include <ctime>     // for time() to seed RNG
using namespace std;

int main() {
    cout << "Let's roll some dice!" << endl;

    // Seed the random number generator using the current time
    int seed = time(0);
    srand(seed);

    const int MAX = 6;  // numbers from 1–6
    int roll1, roll2, total;

    // Roll two dice
    roll1 = (rand() % MAX) + 1;
    cout << "Your first roll was: " << roll1 << endl;

    roll2 = (rand() % MAX) + 1;
    cout << "Your second roll was: " << roll2 << endl;

    // Add them together
    total = roll1 + roll2;
    cout << "Your total roll is: " << total << endl;

    // Basic Craps rules
    // 7 or 11 → win
    // 2, 3, or 12 → lose
    // anything else → point (handled later)
    if (total == 7) {
        cout << "Lucky seven! You win!" << endl;
    }
    else if (total == 11) {
        cout << "Eleven is a winner!" << endl;
    }
    else if (total == 2) {
        cout << "Snake eyes! Too bad, you lose." << endl;
    }
    else if (total == 3) {
        cout << "Sorry, three is unlucky — you lose." << endl;
    }
    else if (total == 12) {
        cout << "Boxcars! Sorry, you lost." << endl;
    }
    else {
        cout << "Your point is " << total << " — but we'll do that part later." << endl;
    }

    return 0;
}
// end program

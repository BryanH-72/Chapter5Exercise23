/*File Name : Chapter5Exercise23.cpp
 Developer/Programmer: Bryan Hurley
 Date: April 2025
 Requirements:
 This program displays a pattern of asterisks (*) using loops.
First, it prints an increasing triangle of stars from 1 to 10.
Then, it prints a decreasing triangle of stars from 10 to 1.
The program repeats as long as the user wants. All input is validated.*/ 
#include <iostream>

using namespace std;

// Function to display ascending triangle pattern
void displayAscending() {
    for (int i = 1; i <= 10; i++) {
        for (int j = 0; j < i; j++)
            cout << "*";
        cout << endl;
    }
}

// Function to display descending triangle pattern
void displayDescending() {
    for (int i = 9; i >= 1; i--) {
        for (int j = 0; j < i; j++)
            cout << "*";
        cout << endl;
    }
}

// Function to get user's decision to repeat program
bool askRepeat() {
    string input;
    cout << "Would you like to run the program again? (y/n): ";
    cin >> input;

    while (input != "y" && input != "Y" && input != "n" && input != "N") {
        cout << "Invalid input. Please enter 'y' or 'n': ";
        cin >> input;
    }

    return (input == "y" || input == "Y");
}

// Main module: controls program flow
int main() {
    do {
        displayAscending();
        displayDescending();
    } while (askRepeat());

    cout << "Program ended. Goodbye!\n";
    return 0;
}
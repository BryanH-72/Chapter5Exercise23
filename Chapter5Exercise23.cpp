/*File Name : Chap5Exercise23.cpp
 Developer/Programmer: Bryan Hurley
 Date: April 2025
 Requirements:
 This program displays a pattern of asterisks (*) using loops.
First, it prints an increasing triangle of stars from 1 to 10.
Then, it prints a decreasing triangle of stars from 10 to 1.
The program repeats as long as the user wants. All input is validated.*/ 
#include <iostream>
#include <random>

#include <iostream>

int main()
{
    std::cout << "Hello World!\n";
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
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

    cout << "Program ended\n";
    return 0;
}
#include <iostream>
using namespace std;

int main() {
    int numbers[30];
    numbers[0] = 0;
    numbers[1] = 1;

    
    for (int n = 2; n < 30; n++) { // Uses a for-loop to fill in the array
        numbers[n] = n * n - numbers[n - 1]; // Array is filled with the sequence of numbers based on this formula
    }

    char anotherValue;
    do {
        int index;
        cout << "Enter an index number between 0 and 29 to find the value at that place in the sequence: "; // Prompts the user to input a number
        cin >> index;

        if (index < 0 || index >= 30) { // Checks if user input is within the index bounds
            break; 
        } else { 
            cout << "The value is: " << numbers[index] << endl; // Displays the value at the specified index based on the formula  
        }

        cout << "Would you like to find another value? (y/n): "; // Asks the user if they want to find another value
        cin >> anotherValue;
    } while (anotherValue == 'y' || anotherValue == 'Y');

    return 0;
}

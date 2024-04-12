// Author: Timothy Jelinek
// Date: 4/11/2024
// Description: This program adds 2 to i as long as i is not bigger than 30.

#include <iostream>
#include <conio.h> 
using namespace std;

// This is a function to add two numbers
in add(int a, int b) {
    return (a + b);
}

// Thi sis a function to subtract two numbers 
int subtract(int a, int b) {
    return (a - b); 
}

int main( {
    // variables
    int num1 = 289;
    int num2 = 55; 

    // This calls the add function
    int sum = add(num1, num2);
    cout << "289 + 55 = " << sum << endl;

    // This calls the subtract function
    int difference = subtract(num1, num2);
    cout << "289 - 55 = " << difference << endl; 

    cout << "\nPress any key to exit the program.";
    _getch(); // pause the program so the user can see the output

    return 0;
}
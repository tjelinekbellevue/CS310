/*
Timothy Jelinek
CS 310
04/28/2024

Fixed two intentional errors in program


*/

// Define an enumeration for days of the week
#include <iostream>
using namespace std;

int main() {

    int n, reversed_number = 0, remainder;

    cout << "Enter an integer: ";
    cin >> n;

    while (n != 0) {
        remainder = n % 10;
        reversed_number = reversed_number * 10 + remainder;
        n /= 10;
    }

    cout << "Reversed Number is = " << reversed_number;

    return 0;
}
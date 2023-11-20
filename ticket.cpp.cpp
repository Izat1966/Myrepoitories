/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>

using namespace std;

int main() {
    // Declare variable is easy
    int N;

    // Input the six-digit number
    cout << "Enter a six-digit number for the ticket: ";
    cin >> N;

    // Check if the number is six digits
    if (N < 100000 || N > 999999) {
        cout << "Invalid input. Please enter a six-digit number." << endl;
        return 1;  // Exit with an error code
    }

    // Extract digits
    int digit1 = N / 100000;
    int digit2 = (N / 10000) % 10;
    int digit3 = (N / 1000) % 10;
    int digit4 = (N / 100) % 10;
    int digit5 = (N / 10) % 10;
    int digit6 = N % 10;

    // Check if it's a lucky ticket
    if (digit1 + digit2 + digit3 == digit4 + digit5 + digit6) {
        cout << "YES, it's a lucky ticket!" << endl;
    } else {
        cout << "NO, it's not a lucky ticket." << endl;
    }

    return 0;
}

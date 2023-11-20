/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>

using namespace std;

int main() {
    // Declare variables
    int N, number, evenCount = 0, oddCount = 0;

    // Input the total number of elements
    cout << "Enter the total number of elements (N): ";
    cin >> N;

    // Input the numbers and count even and odd numbers
    for (int i = 0; i < N; ++i) {
        cout << "Enter number #" << i + 1 << ": ";
        cin >> number;

        if (number % 2 == 0) {
            evenCount++;
        } else {
            oddCount++;
        }
    }

    // Output the result
    cout << "Among the given " << N << " numbers:" << endl;
    cout << "Even numbers: " << evenCount << endl;
    cout << "Odd numbers: " << oddCount << endl;

    return 0;
}

/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>

using namespace std;

int main() {
    // Declare variables
    int A, B, N;

    // Input values for A, B, and N
    cout << "Enter the cost of a single pie in som (A): ";
    cin >> A;

    cout << "Enter the cost of a single pie in tyiyn (B): ";
    cin >> B;

    cout << "Enter the number of pies to purchase (N): ";
    cin >> N;

    // Calculate total cost
    int totalSom = A * N;
    int totalTyiyn = B * N;

    // Adjust totalTyiyn if it exceeds 100 to convert excess tyiyn to som
    if (totalTyiyn >= 100) {
        totalSom += totalTyiyn / 100;
        totalTyiyn %= 100;
    }

    // Output the result
    cout << "Total cost: " << totalSom << " som and " << totalTyiyn << " tyiyn" << endl;

    return 0;
}

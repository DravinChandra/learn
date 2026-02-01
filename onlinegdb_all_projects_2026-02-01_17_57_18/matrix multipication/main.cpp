#include <iostream>
using namespace std;
int main() {
    // Write C++ code here
    int a[10][10], b[10][10], c[10][10];

    // Input elements of first matrix (3x3)
    cout << "Enter elements of first matrix (3x3):\n";
    for (int i = 0; i < 3; i++)
        for (int j = 0; j < 3; j++)
            cin >> a[i][j];

    
    cout << "Enter elements of second matrix (3x2):\n";
    for (int i = 0; i < 3; i++)
        for (int j = 0; j < 2; j++)
            cin >> b[i][j];

    // Multiply matrices (A[3x3] * B[3x2] = C[3x2])
    for (int i = 0; i < 3; i++) { // Outer loop for rows of resultant matrix C
        for (int j = 0; j < 2; j++) { // Middle loop for columns of resultant matrix C
            // **FIXED: sum must be initialized to 0 inside the j loop**
            int sum = 0; 
            for (int k = 0; k < 3; k++) { // Inner loop for the multiplication and summation
                sum = sum + a[i][k] * b[k][j];
            }
            // **FIXED: Assign the final sum to the result matrix C[i][j]**
            c[i][j] = sum;
        }
    } // 

    // Display the result
    cout << "Resultant Matrix (3x2):\n";
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 2; j++)
            cout << c[i][j] << " ";
        cout << endl;
    }
    return 0;
}
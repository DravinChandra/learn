#include <iostream>
using namespace std;
int main() {
    int a[3][2];
    // Input elements of matrix
    cout << "Enter elements of first matrix:\n";
    for (int i = 0; i < 3; i++){
        for (int j = 0; j < 2; j++){
            cin >> a[i][j];
        }
    }    
    // Display elements of matrix
    cout << "Elements of matrix:\n";
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            cout << a[i][j] << "\t";
            
        }
        cout << endl;
    }
            
    // Transpose of matrix        
    cout << "The transpose of matrix is:\n";
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout << a[j][i] << "\t";
            
        }
        
        cout << endl;
    
        
    }
   
    return 0;
}
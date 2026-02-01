/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>
using namespace std ;

int main()
{
    int arr[5];
    cout<< "enter 5 array element "<< endl;
    for ( int i = 0 ; i < 5 ; i++){
        cin>> arr[i];
        
    }
    for (int i = 0 ; i <5 ; i++)
    {
        cout << "element "<< arr[i]  << " is at "<< &arr[i]<< endl ;
    }
    

    return 0;
}
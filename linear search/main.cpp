/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>
using namespace std ;

int main()
{
    int n , a[100] ,key;
    cout<< " enter the element of array : ";
    cin>> n;
    for (int i =0 ; i <n ; i++){
        cin>>a[i];
        
    }
    cout<<" search element in array :";
    cin>>key;
     bool found = false ;
    
    for (int i =0 ; i <n; i++){
        if (a[i] == key){
            cout<<"found";
            found = true;
        }
    }
    if(!found) {
        cout<<"not found";
    }
    return 0;
}
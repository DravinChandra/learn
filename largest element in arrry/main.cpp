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
    int max, a[100],n  ;
    cout<<" enter the element :";
    cin>>n;
    cout <<"enter arry elelment :";
    for (int i=0 ; i<n; i++){
        cin>>a[i];
    }
    max = a[0];
    for (int i =1 ; i<n; i++){
        if (a[i] >max){
            max =a[i];
             
        }
    }
    cout << max ; 
    

    return 0;
}
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
    int n , rev=0 ,remd ,temp;
    cout<<" enter the number :";
    cin >> n;
    temp = n ;
    int i ;
    while(n !=0){
        remd = n %10;
        rev = rev *10 + (n%10) ;
        n = n/10;
        
    }
    if ( temp ==rev){
        cout<<"palindrome";
    }
    else{
        cout<<"not";
    }
    return 0;
}
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
    int n ; 
    cout<<" enter number :";
    cin >>n ;
    for (int i =1; i<=10; i++){
        int k = n*i;
        cout<< n <<"x"<<i <<"=" <<k<<endl;
    }
    return 0;
}
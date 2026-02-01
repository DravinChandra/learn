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
    int n  ;
    cout<<"Enter number for atm pin";
    cin >>n;
    if (n%5==0 || n%11==0){
        cout<<"divisible";
    }
    else {
        cout << " not divisible";
    }

    return 0;
}
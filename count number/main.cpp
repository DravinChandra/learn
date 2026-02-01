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
    int n ,count =0;
    cout<<"enter the digit :";
    cin>>n;
    while(n != 0){
        count = count + 1 ;
        n = n /10;
        
    }
    cout<<"count of number :"<<count;

    return 0;
}
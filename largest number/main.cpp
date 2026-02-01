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
    //largest number 
    int a,b,c;
    cout<<"enter the number :";
    cin>>a>>b>>c;
    if (a>b && a>c){
        cout <<"the largest number is :"<<a ;
    }
    else if (b>c){
        cout<<"the largest value is :"<<b;
    }
    else{
        cout<<"the largest number is :"<<c;
    }
    return 0;
}
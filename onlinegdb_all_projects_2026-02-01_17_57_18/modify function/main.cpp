/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>
using namespace std ;
void modify(int a){
    a=50 ;
    cout<<"the value of a :"<<a <<endl;
}
int main()
{
    int a =5 ;
    cout<<"the value odf a "<<endl;
    modify(a);
    cout<< "the value of a "<<a;

    return 0;
}

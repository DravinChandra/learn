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
     int n , a, b, temp;
    cout<<"enter number for swapping:";
    cin>>a>>b;
    //First logic without using third variable
     /*a= a+b;
    b =a -b;
    a= a-b;
    cout<<"value is a :"<<a<<endl;
    cout<<"value is b :"<<b <<endl;*/
    //second logic with using third variable
    temp = a;
    a = b;
    b = temp ;
    cout << "value is a :"<<a<<endl;
    cout<<"value is  b "<<b <<endl;
    
    return 0;
}
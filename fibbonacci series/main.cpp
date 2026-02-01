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
    cout<<"enter number :";
    cin>>n;
    int a =0 ,b=1;
    cout<<a <<"\t"<<b<<"\t";
    for(int i =0 ; i<=n ; i++){
        int c = a+b ;
        cout <<c<<"\t";
        a= b ;
        b=c;
    }

    return 0;
}
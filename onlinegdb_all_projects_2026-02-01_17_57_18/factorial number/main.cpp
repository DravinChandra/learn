/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>
using namespace std;
void fact(int n){
    int fsa=1;
    for (int i=1 ;i<=n ;i++){
         fsa *=i;
       
    }
    cout<< fsa ; 
}  

int main()
{
    int num ;
    cout <<"enter your number :";
    cin>> num;
    fact(num);

    return 0;
}
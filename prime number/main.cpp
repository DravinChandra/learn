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
    int n ,flag=1;
    cout<<"enter the number:";
    cin>>n;
    for(int i=2; i<=n/2; i++){
        if (n%i ==0 ){
            flag=0;
            break;
        }
    }
    if(flag==1 && n>1){
        cout<<"prime";
    }
    else{
        cout<<"not prime";
    }
    return 0;
}
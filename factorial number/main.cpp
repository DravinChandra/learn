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
    int n ,fact=1 ; 
    cout <<"enter the number:";
    cin>>n ;

        for(int i=1; i<=n; i++){
             fact = fact*i;
            
        }
        cout<<fact;
    
        
    

    return 0;
}
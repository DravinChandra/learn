/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>
using namespace std ;

int main()
{  int arr[5] , largest =0 ;
    for ( int i = 0 ; i < 5 ; i++){
    cin>>arr[i];
        
    }
    for ( int i = 0; i < 5 ; i++){
       if ( largest < arr[i] )
       largest= arr[i] ;
       cout<< largest ;
    }
    

    return 0;
}
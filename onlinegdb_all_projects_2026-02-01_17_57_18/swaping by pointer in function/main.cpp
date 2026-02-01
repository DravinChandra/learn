/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>
using namespace std ;
void swap(int *x ,int *y);
int main()
{
    int a,b ;
    a= 5;
    b=10;
    swap( a ,b);

    return 0;
}
void swap(int *x ,int *y){
    int temp = x ;
    x=y;
    y = temp;
    cout <"value of a :"<<x<<endl<<"value od b :"<<b ;
    
}
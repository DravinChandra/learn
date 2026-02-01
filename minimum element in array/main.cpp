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
    int n , small, a[100];
    cout<< " enter the number element:";
    cin>> n;
    cout << "enter array element :";
    for(int i =0 ; i <n ; i++){
        cin>>a[i];
    }
    small = a[0];
     for (int i =1; i <n ; i++){
         if(a[i]<small){
             small = a[i];
         }
     }
    cout<<"the mininum value in array :"<<small;
    return 0;
}
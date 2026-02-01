/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>
using namespace std ;
int compare(int a, int b){
    if (a>b ){
        cout<<" Greater number :"<<a<<endl;
    }
    else{
        cout<< "Greater number is :"<<b<< endl;
    }
}

int main()
{ 
    int num1 ,num2 ;
    cout << "enter your number :"<<endl;
    cin>>num1>> num2;
    compare(num1,num2);

    return 0;
}
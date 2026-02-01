/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>
using namespace std;
void swap (int &x ,int &y);


int main()
{
    int a ,b;
    cout <<"Enter the value of a :";
    cin>>a;
    cout <<"Enter the value of b :";
    cin>>b;
    swap(a,b);

    return 0;
}
void swap(int &x, int &y){
     int  temp; 
    temp = x ;
    x= y ;
     y= temp;
    cout<<" the  number of a:"<<x<<endl<<"the number of b:"<<y;
}   fgdfjdgdg00
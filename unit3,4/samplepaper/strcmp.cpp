/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>
#include <string>
#include <cstring>
using namespace std ;

int main()
{
    string txt1;
    string txt2;
    cout<<"enter first txt :";
    cin>>txt1;
    cout<<"enter second txt :";
    cin>>txt2;
    if (strcmp(txt1.c_str(),txt2.c_str())==0){
        cout<<"equal "
    }
    else {
        cout<<"not equal";
    }

    return 0;
}
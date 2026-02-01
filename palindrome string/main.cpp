/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>
using namespace std;

int main()
{
    string text;
    cout<<"enter string :";
    cin>>text;
    string rev = "";
    int txt = text.length();
    
    for(int i = txt-1 ; i >=0 ; i--){
            rev = rev + text[i];
            
        }
    if (text ==rev){
        cout<<"palindrome";
    }
    else {
        cout<<"not";
    }
    

    return 0;
}
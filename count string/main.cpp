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
    string text ;
    cout<<"enter your text:";
    cin>>text;
    int count=0 ;
    for(int i =0 ; i < text.length();i++){
        if (text[i] == 'a' || text[i] =='e' || text[i] =='i' || text[i] =='o' || text[i] == 'u'){
            count = count + 1;
        }
        
    }
    cout<<count;
    return 0;
}
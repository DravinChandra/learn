/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>
using namespace std ;
int fibbo(int );

int  fibbo(int n ){
    if (n==0||n==1){
        return n;
        
    }
    else{
        return fibbo(n-1)+fibbo(n-2);
    }
}

int main()
{
    int n , sum=0, f;
    cout<<"enter the terms :";
    cin>>n;
    for(int i =0; i<=n ; i++){
        f = fibbo(i);
        cout<<f<<"\t";
        sum +=fibbo(i);
        
        
    
    }
    cout<<endl;
    cout<<sum;

    return 0;
}
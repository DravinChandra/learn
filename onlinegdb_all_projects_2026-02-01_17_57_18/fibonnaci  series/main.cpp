/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>
using namespace std ;
void func(int n){
    if(n<1){
        cout<<"invailed terms.";
    }
    
   int f = 0 ,f1 =1 ;
   cout << f<<" ";
   
     if ( n==1){
       cout<<f1<<" ";
       
   }
   else if (n>1){
       while(n>1){
       int f2 ;
       f2 = f1 +f ;
       f =f1;
       f1=f2;
       cout<< f2 <<" ";
       n--;
   }
   }
   
}                          
int main()
{
    int num ;
    cin>> num;
    func(num);

    return 0;
}
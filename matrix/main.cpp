/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>
using namespace std ;

int main(){
    int r ,c ;
    cout<< " enter number of row :";
    cin>>r;
    cout<< " enter number of col :";
    cin>> c;
    int matrix[200][200];
     for(int i = 0; i<r; i++){
         for(int j=0 ; j<c; j++){
             cin>>matrix[i][j];
         }
     }
    //  cout<<matrix<<"\n";
     for(int i=0 ; i<r; i++){
         for(int j= 0; j<c ; j++){
             cout<<matrix[i][j]<<"  ";
         }
         cout<<endl;
     }

    return 0;
}
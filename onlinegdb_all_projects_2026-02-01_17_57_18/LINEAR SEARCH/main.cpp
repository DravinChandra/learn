/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>
using  namespace std ;

int main()
{
    int ar[10]= {2,5,8,12,16,23,38,56,72,91}    ;
    int beg,end,mid , key;
    cout << " Enter number to search :";
    cin>> key;
    beg =0;
    end =9;
    
    while ( beg<= end){
        mid = (beg+end)/2;
        if (ar[mid] ==key){
            cout<< "number found at index :"<<mid<< endl;
            return 0;
        }
        else if (key< ar[mid]){
            end = mid -1 ;
        }
        else{
            beg = mid+1 ;
        }
    }
    cout<< " number not in arry.";
    

    return 0;
}
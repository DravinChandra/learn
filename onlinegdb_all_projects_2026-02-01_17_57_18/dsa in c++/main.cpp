/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>
using namespace std ;

int main()
{
    int marks[5] ,sum =0;
    cout << "enter your marks :";
    for(int i = 0 ; i<5 ; i++){
        cin >> marks[i] ;
    }
    cout << "the subject marks :"<<endl ;
    for( int  i =0 ; i< 5 ;i++){
        sum = sum +marks[i];
       
    }
     cout << "sum of marks : "<<sum << endl ;
     int avg ;
     avg = sum /5 ;
     cout<<"the avg of marks :"<<avg ;
    

    return 0;
}
#include <iostream>
using namespace std ; 
 
int main (){
    int n ,temp,rev=0;
    cout<<"enter number:";
    cin>>n ;
    temp =n;
    
    
    while(n != 0){
        rev  = rev *10 + (n%10);
        n =n/10;
        
    }
    
    if (rev = temp){
        cout<<"palindrome ";
    }
    else{
        cout<<"not ";
    }
}
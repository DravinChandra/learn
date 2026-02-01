#include <iostream>
using namespace std;

int main() {
    int n, temp ,   sum =0 ;
    cout << "enter the the number :";
    cin >>n;
    temp = n;
    
    while(temp!=0){
        int digit = temp%10 ;
        sum += digit*digit*digit;
        temp = temp/10;
    }
    if (n ==sum){
        cout << "armstrong number";
        
    }
    else{
        cout << "not";
    }
    return 0;
}

#include <iostream> 
#include <algorithm>
#include <vector>
using namespace std ;
int main(){
    int  n;
    int arr[10] = {1,3,4,6,5,78,12} ;
    cout<<"enter your pass key:";
    cin>>n;
    int temp =0;
    for(int i =0 ; i<=arr[7] ; i++){
        if (arr[i]==n){
            cout<<"FOUND";
            temp =1;
            break;
            
        }
    }
    if (temp==0){
        cout<<"not found";
    }
}
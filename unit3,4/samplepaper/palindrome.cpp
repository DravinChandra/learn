#include <iostream>
#include <string>
using namespace std ;
int main(){
    string txt , rev =" ";
    cin>>txt;
    for (int i = 0 ; i<= txt.length(); i++){
        rev +=txt[i];
    }
    if (rev ==txt){
        cout<<"palindrome";
    }
    else
{
    cout<<"not";
}
return 0;
}
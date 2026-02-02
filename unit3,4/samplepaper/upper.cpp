#include <iostream>
#include <string>
#include <cctype>
using namespace std ;
int main(){
    string txt;
    getline(cin,txt);
    for (int i =0 ; i <=txt.length(); i++){
        txt[i]= toupper(txt[i]);
    }
    cout<<"uppercase"<<txt<<endl;
 return 0;
}
#include <iostream>
#include <string>
#include <cstring>
using namespace std ;

int main()
{
    string txt ;
    cout<<"enter the txt:";
    cin>>txt;
     size_t re = strlen(txt.c_str());
    cout<<re<<endl;

    return 0;
}
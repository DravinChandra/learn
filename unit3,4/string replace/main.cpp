
#include <iostream>
#include <string>
using namespace std ;

int main()
{
    string txt ="Hello World";
    string  txt2 = " hey ";
    txt.replace(0,5 ,txt2);
    cout <<txt;
    cout<<endl;

    string txt1 ="Hello World";
    //string  txt = " hey ";
    txt1.replace(0,5 ,"hey ");
    cout <<txt1;

    return 0;
}
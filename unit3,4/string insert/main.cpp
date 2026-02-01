
#include <iostream>
#include <string>
using namespace std ;

int main()
{
    string txt = "Hello World";
    string txt1 = "  i am live ";
    txt.insert(5,txt1);
    cout<<txt ;
    cout <<endl;
    
    
    string txt2 = "hello ! welcome";
    txt2.insert(7, " Harshit Sharma ");
    txt2.insert(0 ,txt1);
    cout << txt2;
    cout << endl;
    
    cout<<txt.insert(5,"who are you ?",7,8);
    

    return 0;
}
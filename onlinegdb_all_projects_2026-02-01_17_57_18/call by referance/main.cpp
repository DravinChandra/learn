
#include <iostream>
using namespace std ;
void modify(int &b);
int main()
{
    int a =5 ;
    cout<<"the value of a :"<<a <<endl;
     modify(a);
    cout<<"the value of a :"<<a ;
    return 0;
}
void modify(int &b){
    b=50 ;
    cout<< "the value of b :"<<b <<endl;
}
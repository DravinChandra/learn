
#include <iostream>
using namespace std ;


int main()
{
    int a ;
    a=5;
    int &b =a ;
    cout <<"address of  a &b "<<&a <<endl<<&b;
    cout<<endl;
    cout<<"the value od a& b :"<<a << endl<< b;

    return 0;
}
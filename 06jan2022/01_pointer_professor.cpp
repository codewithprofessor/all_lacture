#include<iostream>
using namespace std;

int main()
{
    int a=5;
    int *p=&a;
    cout<<"The pointer adress is "<<p<<endl;
    cout<<"The pointer adress is "<<&a<<endl;

    cout<<"The Value of the a is  "<<a<<endl;
    cout<<"The Value of the a is  "<<*p<<endl;
    return 0;
}
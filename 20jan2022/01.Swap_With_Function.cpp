#include<iostream>
using namespace std;
void swap(int x,int y)      //In This method different memory is create
{
    int temp = x;
    x=y;
    y=temp;
    cout<<"The value of X is  : "<<x<<endl;
    cout<<"The value of Y is  : "<<y<<endl;
}

int main()
{
    // code by ali
    int a=5;
    int b=10;
    swap(a,b);
    cout<<"The Value of a is : "<<a<<endl;
    cout<<"The Value of b is : "<<b<<endl;
    return 0;
}
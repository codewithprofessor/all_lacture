#include<iostream>
using namespace std;

void point(int *x,int *y)
{
    *x+=2;
    *y+=2;
    cout<<"The value of X is  : "<<*x<<endl;
    cout<<"The value of Y is  : "<<*y<<endl;
}

void swap(int *x,int *y)
{
    // same memory
    int temp=*x;
    *x=*y;
    *y=temp;
    cout<<"The value of X after swap is  : "<<*x<<endl;
    cout<<"The value of Y after swap is  : "<<*y<<endl;
}
// same memory
int main()
{
    // code by ali
    int a=5;
    int b=10;
    point(&a,&b);
    swap(&a,&b);
    cout<<"The Value of a is : "<<a<<endl;
    cout<<"The Value of b is : "<<b<<endl;
    return 0;
}
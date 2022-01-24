#include<iostream>
using namespace std;
void swap(int &x,int &y)
//iss method main 1 he memory create hoo gi 'x' or 'a' k lia 
{
    int temp=x;
    x=y;
    y=temp;
    cout<<"The Value of X is "<<x<<endl;    
    cout<<"The Value of Y is "<<y<<endl;
}
int main()
{
    // code by ali
    int a=5;
    int b=10;
    swap(a,b);
    cout<<"The Value of a is : "<<a<<endl;
    cout<<"The Value of b is : "<<b<<endl;
    // iss main swap hoo jay gi a or b  main q k he memory create hoo rai hy
    return 0;
}
#include<iostream>
using namespace std;

int f1(int n)
{
    int a=n-1;
    return a;
}
int f2(int n)
{
    int a=n+1;
    return a;
}

int main()
{
    int n,x=0,y=0;
    cout<<"Enter the Number\n";
    cin>>n;
    x=f1(n);
    y=f2(n);
    cout<<"Precessor  :"<<x<<endl;
    cout<<"Sucessor  :"<<y <<endl;
    return 0;
}
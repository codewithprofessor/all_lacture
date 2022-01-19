#include<iostream>
using namespace std;
void fun1(int a);
void fun2(int a);
void fun3(int a);
void fun4(int a);
void fun5(int a);
void fun6(int a);
int main()
{
    // code by ali
    int a;
    cout<<"Etner the Number for Ptrn "<<endl;
    cin>>a;
    fun1(a);
    cout<<endl<<endl;
    fun2(a);
    cout<<endl<<endl;
    fun3(a);
    cout<<endl<<endl;
    fun4(a);
    cout<<endl<<endl;
    fun5(a);
    cout<<endl<<endl;
    fun6(a);
    cout<<endl<<endl;
    fun1(a);
    fun2(a);
    cout<<endl<<endl;
    fun5(a);
    fun6(a);



    return 0;
}
void fun1(int a)
{
    for(int i=1;i<=a;i++)
    {
        for(int j=1;j<=i;j++)
        cout<<"* ";
        cout<<endl;
    }
}
void fun2(int a)
{
    for(int i=1;i<=a;i++)
    {
        for(int j=a;j>=i;j--)
        cout<<"* ";
        cout<<endl;
    }
}
void fun3(int a)
{
     for(int r=1;r<=a;r++)
    {
        for(int s=a-r;s>=0;s--)
        {
            cout<<" ";
        }
        for(int c=1;c<=r;c++)
        cout<<"*";
        cout<<endl;
    }

}
void fun4(int a)
{
     for(int r=a;r>=1;r--)
    {
        for(int s=0;s<=a-r;s++)
        {
            cout<<" ";
        }
        for(int c=1;c<=r;c++)
        cout<<"*";
        cout<<endl;
    }
    
}
void fun5(int a)
{
     for(int r=a;r>=1;r--)
    {
        for(int s=0;s<=a-r;s++)
        {
            cout<<" ";
        }
        for(int c=1;c<=r;c++)
        cout<<"* ";
        cout<<endl;
    }
    
}
void fun6(int a)
{
     for(int r=1;r<=a;r++)
    {
        for(int s=a-r;s>=0;s--)
        {
            cout<<" ";
        }
        for(int c=1;c<=r;c++)
        cout<<"* ";
        cout<<endl;
    }

}
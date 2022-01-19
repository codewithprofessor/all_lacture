#include<iostream>
using namespace std;
void fun(int a)
{
    if(a%2==0)
    {
        cout<<"Even Number"<<endl;
    }
    if(a%2!=0)
    {
        cout<<"Odd Number"<<endl;
    }
}
int main()
{
    // code by ali
    int i;
    cout<<"Etner the Number\n";
    cin>>i;
    fun(i);
    
    return 0;
}
#include<iostream>
using namespace std;
void f();
int main()
{
    f();
    // code by ali
    return 0;
}
void f()
{
    int a;
    cout<<"Enter the Number \n";
    cin>>a;
    for(int i=1;i<=10;i++)
    {
        cout<<a<<"  x  "<<i<<"  =  "<<i*a<<endl;
    }

}
#include<iostream>
using namespace std;
void fun(int a)
{
    int count=0;
    for(int i=1;i<=a;i++)
    {
        if(a%i==0)
        {
            count++;
        }

    }
    if(count==2)
    {
        cout<<"Prime Number"<<endl;
    }
    else 
    cout<<"Not Prime Number"<<endl;

}
int main()
{
    // code by ali
    int a;
    cout<<"Enter the Number"<<endl;
    cin>>a;
    fun(a);
    
    return 0;
}
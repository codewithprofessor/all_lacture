#include<iostream>
using namespace std;

void input(int a[],int b)
{
    cout<<"Enter the Value\n";
    for(int i=0;i<b;i++)
    {
        cin>>a[i];
    }

}
// same memory
void display(int *a,int b)
{
    cout<<"OUTPUT\n";
    for(int i=0;i<b;i++)
    {
        cout<<a[i]<<"    ";
    }
}
int main()
{
    // code by ali
    int a[4];
    input(a,4);
    display(a,4);

    return 0;
}
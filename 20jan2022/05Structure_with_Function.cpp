#include<iostream>
using namespace std;

struct student
{
    int rl;
    int id;
};

void function(student *a,int x)
{
    for(int i=0;i<x;i++)
    {
        cout<<"Enter the Roll no.  ";
        cin>>a[i].rl;
        cout<<"Enter The Id   ";
        cin>>a[i].id;
    }
}
void display(student a[],int x)
{
    for(int i=0;i<x;i++)
    {
        cout<<"Roll No   :"<<a[i].rl<<endl;
        cout<<"ID No   :"<<a[i].id<<endl;
    }
}
// same memory
int main()
{
    // code by ali
    student b[2];
    function(b,2);
    cout<<endl;
    display(b,2);    
    return 0;
}
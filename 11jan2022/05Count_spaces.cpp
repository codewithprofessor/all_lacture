#include<iostream>
using namespace std;

int main()
{
    // code by ali
    char a[100];
    int i=0,count=0;
    cout<<"Enter the words\n";
    cin.getline(a,100);
    while(a[i]!=0)
    {
        if(a[i]==32)
        {
            count++;
        }
        i++;
    }
    cout<<"TOTAL SPACES :"<<count;
    return 0;
}
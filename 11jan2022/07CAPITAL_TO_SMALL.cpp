#include<iostream>
using namespace std;

int main()
{
    // code by ali
    char a[100];
    int i=0;
    cout<<"Enter the words\n";
    cin.getline(a,100);
    while(a[i]!=0)
    {
        if(a[i]>=65 && a[i]<=91)
        {
            a[i]=a[i]+32;
        }
        i++;
    }
    cout<<"\n\nRESULTS\n\n"<<a;
    return 0;
}
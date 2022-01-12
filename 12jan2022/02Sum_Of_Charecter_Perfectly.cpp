#include<iostream>
using namespace std;

int main()
{
    // code by ali
    char a[200],b[200];       //charecters
    int i=0,j=0;                //for loops and c;
    cout<<"Enter the String\n";
    cin.getline(a,200);
    cout<<"Enter the String\n";
    cin.getline(b,200);
    // count the charecters
    while(a[i]!=0)
    {
        i++;
    }
    while(a[j]!=0)
    {
        j++;
    }
    int sum=i+j+1;
    // pointer
    char*c=new char [sum];
    i=0;
    while(a[i]!=0)
    {
        c[i]=a[i];
        i++;
    }
    c[i]=32;
    i++;
    j=0;
    while(b[j]!=0)
    {
        c[i]=b[j];
        i++;
        j++;

    }
    c[i]=0;
    cout<<"\nRESULTS\n\n"<<c;


    return 0;
}
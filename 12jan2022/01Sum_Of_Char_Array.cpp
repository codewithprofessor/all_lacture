// sum of 2 string in the first string 
#include<iostream>
using namespace std;

int main()
{
    // code by ali
    char a[200],b[200];
    cout<<"Enter the String\n";
    cin.getline(a,200);
    cout<<"Enter the String\n";
    cin.getline(b,200);
    int i=0,j=0;
    while(a[i]!=0)
    {
        i++;
    }
    a[i]=32;
    i++;
    while(b[j]!=0)
    {
        a[i++]=b[j++];
    }
    cout<<"\nRESULT\n\n"<<a;



    return 0;
}
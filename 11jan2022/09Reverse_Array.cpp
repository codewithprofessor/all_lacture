#include<iostream>
using namespace std;

int main()
{
    // code by ali
    char a[200];
    cout<<"Etner the charecters\n";
    cin.getline(a,200);
    int i=0;
    while(a[i]!=0)
    {
        i++;
    }
    for(int j=i;j>=0;j--)
    {
        cout<<a[j]<<" ";
    }
    return 0;
}
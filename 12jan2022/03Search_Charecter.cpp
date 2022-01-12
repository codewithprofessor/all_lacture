#include<iostream>
using namespace std;

int main()
{
    char a[200],b;
    int i=0,l=0;
    cout<<"Etner the String"<<endl;
    cin.getline(a,200);
    cout<<"Enter the charecter which you want to search  :";
    cin>>b;
    while(a[i]!=0)
    {
        if(a[i]==b)
        {
            l++;
        }
        i++;
    }
    cout<<"The Charecter '"<<b<<"' is Excist";

    
    return 0;
}
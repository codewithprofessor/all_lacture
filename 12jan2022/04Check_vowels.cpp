#include<iostream>
using namespace std;

int main()
{
    char c[200];
    int i=0,j=0,z=0,e=0,o=0,u=0;
    cout<<"Etner the String \n";
    cin.getline(c,200);
    while(c[i]!=0)
    {
        if(c[i]==65 || c[i]==65+32)
        {
            z++;
        }
        if(c[i]==69 || c[i]==69+32)
        {
            e++;
        }
        if(c[i]==73 || c[i]==73+32)
        {
            j++;
        }
        if(c[i]==79 || c[i]==79+32)
        {
            o++;
        }
        if(c[i]==85 || c[i]==85+32)
        {
            u++;
        }
        i++;
    }
    cout<<"The 'a' is "<<z<<" Times"<<endl;
    cout<<"The 'e' is "<<e<<" Times"<<endl;
    cout<<"The 'i' is "<<j<<" Times"<<endl;
    cout<<"The 'o' is "<<o<<" Times"<<endl;
    cout<<"The 'u' is "<<u<<" Times"<<endl;
    return 0;
}
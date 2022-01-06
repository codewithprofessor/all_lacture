#include<iostream>
using namespace std;

int main()
{
    // code by ali
    int a[2][2],b[2][2],c[2][2];

    cout<<"Enter the value of A\n";
    for(int i=0;i<2;i++)
    for(int j=0;j<2;j++)
    cin>>a[i][j];
    cout<<"Enter the value of B\n";
    for(int i=0;i<2;i++)
    for(int j=0;j<2;j++)
    cin>>b[i][j];

    cout<<"The value of A\n";
    for(int i=0;i<2;i++)
    {
        for(int j=0;j<2;j++)
        cout<<a[i][j]<<"   ";
        cout<<endl;
    }

    cout<<"The value of A\n";
    for(int i=0;i<2;i++)
    {
        for(int j=0;j<2;j++)
        cout<<b[i][j]<<"   ";
        cout<<endl;
    }

    // MULTIPLICATION

    for(int i=0;i<2;i++)
        for(int j=0;j<2;j++)
        {
            c[i][j]=0;
            for(int k=0;k<2;k++)
                c[i][j] = c[i][j] + a[i][k] * b[k][j];
        }
    cout<<"The value of C (result)\n";
    for(int i=0;i<2;i++)
    {
        for(int j=0;j<2;j++)
        cout<<c[i][j]<<"   ";
        cout<<endl;
    }

    return 0;
}
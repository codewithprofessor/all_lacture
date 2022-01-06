#include<iostream>
using namespace std;

int main()
{
    // code by ali
    int a[3][3],b[3][3],c[3][3];

    cout<<"Etner the value of A\n";
    for(int i=0;i<3;i++)
        for(int j=0;j<3;j++)
            cin>>a[i][j];
    cout<<"Etner the value of B\n";
    for(int i=0;i<3;i++)
        for(int j=0;j<3;j++)
            cin>>b[i][j];
    
    cout<<"The value of A\n";
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
            cout<<a[i][j]<<"  ";
            cout<<endl;
    }

    cout<<"The value of A\n";
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
            cout<<b[i][j]<<"  ";
            cout<<endl;
    }

    // multiply

    for(int i=0;i<3;i++)
        for(int j=0;j<3;j++)
        {
            c[i][j]=0;
            for(int k=0;k<3;k++)
                c[i][j] = c[i][j] + a[i][k]*b[k][j];
        }
    cout<<"The Value of c (C=AxB) IS \n";
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
            cout<<c[i][j]<<"  ";
            cout<<endl;
    }

    return 0;
}
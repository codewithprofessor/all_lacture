#include<iostream>
using namespace std;

int main()
{
    // code by ali
    int a[3][3],b[3][3],c[3][3];
    cout<<("Enter the value of A \n");
    for(int i=0;i<3;i++)
        {
            for(int j=0;j<3;j++)
                {
                    cin>>a[i][j];
                }
        }
    cout<<("Enter the value of B \n");
    for(int i=0;i<3;i++)
        {
            for(int j=0;j<3;j++)
                {
                    cin>>b[i][j];
                }
        }
    for(int i=0;i<3;i++)
        {
            for(int j=0;j<3;j++)
                {
                    c[i][j]=a[i][j]+b[i][j];
                }
        }
    cout<<(" value of A \n");
    for(int i=0;i<3;i++)
        {
            for(int j=0;j<3;j++)
                {
                    cout<<a[i][j]<<"  ";
                }
            cout<<endl;    
        }
    cout<<(" value of B \n");    
    for(int i=0;i<3;i++)
        {
            for(int j=0;j<3;j++)
                {
                    cout<<b[i][j]<<"  ";
                }
            cout<<endl;    
        } 
    cout<<(" The value of C \n");
    for(int i=0;i<3;i++)
        {
            for(int j=0;j<3;j++)
                {
                    cout<<c[i][j]<<"  ";
                }
            cout<<endl;    
        }  

    return 0;
}
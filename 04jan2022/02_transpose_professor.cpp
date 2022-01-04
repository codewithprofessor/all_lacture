#include<iostream>
using namespace std;

int main()
{
    // code by ali

    int a[3][3];
    cout<<("Enter the value of A\n");

    for(int i=0;i<3;i++)
    {
            for(int j=0;j<3;j++)
            {
                cin>>a[i][j];

            }
    }
    cout<<("The value of A\n");

     for(int i=0;i<3;i++)
    {
            for(int j=0;j<3;j++)
            {
                cout<<a[i][j]<<"  ";

            }
        cout<<endl;
    }
   /*
//    first method
    cout<<("The Transpose  of A\n");
    for(int i=0;i<3;i++)
    {
            for(int j=0;j<3;j++)
            {
                cout<<a[j][i]<<"  ";

            }
        cout<<endl;
    }
    */
//  the another method for tranpose
 cout<<("The Transpose  of A\n");

    for(int j=0;j<3;j++)    
    {
             for(int i=0;i<3;i++)
            {
                cout<<a[i][j]<<"  ";

            }
        cout<<endl;
    }  


    return 0;
}

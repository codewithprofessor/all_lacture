#include<iostream>
using namespace std;

int main()
{
    int a[2][2];
    cout<<"Enter the value of A\n";
    for(int i=0;i<2;i++)
        for(int j=0;j<2;j++)
            cin>>a[i][j];
    
    cout<<"The Value of A \n";
    for(int i=0;i<2;i++)
    {
        for(int j=0;j<2;j++)
            cout<<a[i][j]<<"  ";
            cout<<endl;
    }
    // determinant of 
    int det=0;
    det=(a[0][0] * a[1][1])-(a[0][1] * a[1][0]);
    cout<<"The determinant of A is = "<<a[0][0] * a[1][1]<<" - "<<a[0][1] * a[1][0]<<" = "<<det;
    return 0;
}
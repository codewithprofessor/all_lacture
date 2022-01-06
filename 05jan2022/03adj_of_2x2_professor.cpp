#include<iostream>
using namespace std;

int main()
{
//     code by ali
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
    // adj of 
    int adj=0;
    adj=(a[0][0] * a[1][1])-(a[0][1] * a[1][0]);
    cout<<"the adj of A is = "<<a[0][0] * a[1][1]<<" - "<<a[0][1] * a[1][0]<<" = "<<adj;
    return 0;
}

#include<iostream>
using namespace std;

int main()
{
    // code by ali
    int r;
    cout<<"Enter the limt of the array \n";
    cin>>r;
    int * a=new int(r);
    cout<<"Enter the "<<r<<"numbers\n";
    for(int i=0;i<r;i++)
        cin>>a[i];

    cout<<"The values of the Array\n";
    for(int i=0;i<r;i++)
        cout<<a[i]<<endl;

    return 0;
}
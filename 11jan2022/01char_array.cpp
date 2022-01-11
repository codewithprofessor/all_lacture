#include<iostream>
using namespace std;

int main()
{
    // code by ali
    char a[100];
    cout<<"Please enter the sentence\n";
    // cin>>a;
    cin.getline(a,100);
    cout<<a;
    return 0;
}
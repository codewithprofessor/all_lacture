#include<iostream>
using namespace std;

void function(char *a)
{
    int i=0;
    while(a[i]!=0)
    {
        i++;
    }
    cout<<"The Total charecters are   :  "<<i<<endl;
}

int main()
{
    // code by ali
    char a[200];
    cout<<"Enter The String \n";
    cin.getline(a,200);
    function(a);
    return 0;
}
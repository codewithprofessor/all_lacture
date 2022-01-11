#include<iostream>
using namespace std;

int main()
{
    // code by ali
    char a[100];
    int i=0,count=0;
    cout<<"Enter the charecters\n";
    cin.getline(a,100);
    while(a[i]!='\0')
    {
        if(a[i]==32 )
        {
            count++;
        }
        
        i++;
    }
    cout<<"The total charecter : "<<i-count;
    
    return 0;
}

/*
#include<iostream>
using namespace std;

int main()
{
    // code by ali
    char a[100];
    int i=0;
    cout<<"Enter the charecters\n";
    cin.getline(a,100);
    while(a[i]!='\0')
    {
        i++;
    }
    cout<<"The total charecter : "<<i;
    
    return 0;
}

*/
#include<iostream>
using namespace std;
void fun()
{  
    int pro=1,n;  
    cout<<"[NOTE]<<IF YOU ENTER THE NEGITIVE NUMBER THE PROGRAM CAN EXIT AND SHOW PRODUCT\n\n"<<endl;
    cout<<"Enter The Postive Number  \n";
    while(1)
    {
        cin>>n;
        if(n<=0)
        {
            break;
        }
        else
        pro*=n; 
    }
    cout<<"PRODUCT = "<<pro;
}

int main()
{   
    // code by ali
    fun();
    return 0;
}
#include<iostream>
#include<string>
using namespace std;

struct student 

{
    int rol;
    string nm;
    float cgp;
};

int main()
{
    student s1,s2;
    cout<<"Enter the Roll No.  :";
    cin>>s1.rol;
    cout<<"Enter the Name  :";
    cin>>s1.nm;
    cout<<"Enter the CGP  :";
    cin>>s1.cgp;
    cout<<"Enter the Roll No.  :";
    cin>>s2.rol;
    cout<<"Enter the Name  :";
    cin>>s2.nm;
    cout<<"Enter the CGP  :";
    cin>>s2.cgp;
    cout<<"\n\nROL NO"<<"\t\t"<<"NAME"<<"\t\t"<<"CGP"<<endl;
    cout<<s1.rol<<"\t\t"<<s1.nm<<"\t\t"<<s1.cgp<<endl;
    cout<<s2.rol<<"\t\t"<<s2.nm<<"\t\t"<<s2.cgp<<endl;

    
    

    
    return 0;
}
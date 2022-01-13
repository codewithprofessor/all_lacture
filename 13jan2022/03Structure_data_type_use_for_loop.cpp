#include<iostream>
#include<string>
#include<iomanip>
using namespace std;
struct student
{
    int rol;
    string nm;
    float cgp;
};
int main()
{
    student a[5];
    for(int i=0;i<5;i++)
    {
        cout<<"Enter the Roll No. :";
        cin>>a[i].rol;
        cout<<"Enter the Name :";
        cin.ignore();
        getline(cin,a[i].nm);
        cout<<"Enter the CGPA. :";
        cin>>a[i].cgp;
        
    }
    cout<<setw(8)<<"ROLL NO"<<setw(25)<<"NAME"<<setw(8)<<"CGPA"<<endl;
    for(int i=0;i<5;i++)
    {
        cout<<setw(8)<<a[i].rol
            <<setw(25)<<a[i].nm
            <<setw(8)<<a[i].cgp<<endl;
    }
    
    return 0;
}
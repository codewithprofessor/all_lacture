#include<iostream>
#include<string>
#include<iomanip>
using namespace std;
struct student
{
    int rol;
    int i;
    string nm;
    float cgp;
};
int main()
{
    cout<<"How much Student you want to Enter : ";
    student b;
    cin>>b.i;
    student * a=new student[b.i];
    for(int r=0;r<b.i;r++)
    {
        cout<<"Enter the Roll No. :";
        cin>>a[r].rol;
        cin.ignore();
        cout<<"Enter the Name :";
        getline(cin,a[r].nm);
        cout<<"Enter the CGPA :";
        cin>>a[r].cgp;
    }
    cout<<setw(7)<<"ROLL NO"<<setw(25)<<"NAME "<<setw(8)<<"CGPA "<<endl;
    for(int r=0;r<b.i;r++)
    {
        cout<<setw(8)<<a[r].rol
        <<setw(25)<<a[r].nm
        <<setw(8)<<a[r].cgp<<endl;

    }

    
    return 0;
}
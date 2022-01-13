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
    student s1,s2;
    cout<<"Enter the Roll No.  :";
    cin>>s1.rol;
    cout<<"Enter the Name  :";
    cin.ignore();
    getline(cin,s1.nm);
    cout<<"Enter the CGP  :";
    cin>>s1.cgp;
    cout<<"Enter the Roll No.  :";
    cin>>s2.rol;
    cout<<"Enter the Name  :";
    cin.ignore();
    getline(cin,s2.nm);
    cout<<"Enter the CGP  :";
    cin>>s2.cgp;

    cout<<setw(8)<<"ROLL NO"<<setw(25)<<"NAME"<<setw(10)<<"CGPA"<<endl;
    cout<<setw(8)<<s1.rol<<setw(25)<<s1.nm<<setw(10)<<s1.cgp<<endl;
    cout<<setw(8)<<s2.rol<<setw(25)<<s2.nm<<setw(10)<<s2.cgp<<endl;
    
    return 0;
}
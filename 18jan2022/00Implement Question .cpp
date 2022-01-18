#include<iostream>
#include<string>
#include<iomanip>
using namespace std;
struct mobile
{
    int id;
    // int r;
    string nm;
    int mdl;
    long prc;
};
int main()
{
    int r;
    cout<<"How Much data you want to enter :";
    // mobile k;
    cin>>r;
    mobile *a=new  mobile [r];
    for(int i=0;i<r;i++)
    {

        cout<<"Enter the ID   :";
        cin>>a[i].id;
        cout<<"Enter the name of MOBILE  :";
           cin.ignore();
        getline(cin,a[i].nm);
        cout<<"Enter the MODEL   :";
        cin>>a[i].mdl;
        cout<<"Enter the Price of MOBILE  :";
        cin>>a[i].prc;
    }
    cout<<"\t\t\tMOBILE DATA"<<endl;
    cout<<setw(10)<<"ID "<<setw(25)<<"Name"<<setw(10)<<"Model"<<setw(10)<<"Price"<<endl;
    for(int i=0;i<r;i++)
    {
        cout<<setw(10)<<a[i].id<<setw(25)<<a[i].nm<<setw(10)<<a[i].mdl<<setw(10)<<a[i].prc<<endl;
        
    }

    
    return 0;
}
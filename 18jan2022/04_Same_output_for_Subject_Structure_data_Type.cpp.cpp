#include<iostream>
#include<iomanip>
using namespace std;
// code by ali
    struct mark
    {
        long id;
        int mrk[3];
    };
    struct student
    {
        char nm[15];     //Name of the student
        int rl;            //roll number
        mark tm;           //this is nested struct
    };
    int main()
{   
    int r,sum[3];
    cout<<"How Much Student you want to Enter   :";
    cin>>r;
    student *a=new student[r];
    for(int i=0;i<r;i++)
    {
        cout<<"Roll No. Of Student    : ";
        cin>>a[i].rl;
        cout<<"Name Of Student   :";
        cin.ignore();
        cin.getline(a[i].nm,15);
        cout<<"Student Id No.   : ";
        cin>>a[i].tm.id;
        for(int j=1;j<=3;j++)
        {
            cout<<"Enter the Mark Of Subject "<<j<<" : ";
            cin>>a[i].tm.mrk[j];
        }
    }
    cout<<setw(3)<<"R.N"<<setw(15)<<"Name  "<<setw(8)<<"Id  "<<setw(5)<<"Sub1"<<setw(5)<<"Sub2"<<setw(5)<<"Sub3"<<endl;
    for(int i=0;i<r;i++)
    {
        cout<<setw(3)<<a[i].rl<<setw(15)<<a[i].nm<<setw(8)<<a[i].tm.id;
        for(int j=1;j<=3;j++)
        {
            cout<<setw(5)<<a[i].tm.mrk[j];
        }
        cout<<endl;
    }

    
    
    return 0;
}
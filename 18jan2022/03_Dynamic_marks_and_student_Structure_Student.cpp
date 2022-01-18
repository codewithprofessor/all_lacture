#include<iostream>
#include<string>
#include<iomanip>
using namespace std;
struct adres
{
    string hm;           //home name
    int stn;            //street number
    string cty;         //city name
};
struct student
{
    int rl;                 //roll number
    char nm[30];            //Name
    adres adr;              //variable for 1st structure
};



int main()
{
    // code by ali
    int r,sub;          //sub are the subjects for every student and r for the students
    cout<<"How Much Student You Want to Enter :";
    cin>>r;
    student *s=new student [r];
    cout<<"How Much Subjects : ";
    cin>>sub;
    int  *mrk =new int [sub];
    int  *sum =new int [r];   //make array for the sum because we sum the marks of all student

    for(int i=0;i<r;i++)
    {
        sum[i]=0;
        cout<<"Enter the Roll Number  :";
        cin>>s[i].rl;
        cout<<"Enter the Name  :";
        cin.ignore();
        cin.getline(s[i].nm,30);
        for(int j=0;j<sub;j++)         //for 5 subjects
        {
            cout<<"Enter the Number of Subject  :";
            cin>>mrk[j];
            sum[i]+=mrk[j];
        }
    cout<<"Enter the Adress :";
    cin.ignore();
    getline(cin,s[i].adr.hm);
    cout<<"Enter the Street No :";
    cin>>s[i].adr.stn;
    cout<<"Enter the City :";
    cin.ignore();
    getline(cin,s[i].adr.cty);
    }
    cout<<setw(4)<<"ID"<<setw(20)<<"Name"<<setw(5)<<"No"<<setw(30)<<"Adress"<<endl;
    for(int i=0;i<r;i++)
    {
        cout<<setw(4)<<s[i].rl<<setw(20)<<s[i].nm<<setw(5)<<sum[i]<<setw(30)<<s[i].adr.hm<<" Street "<<s[i].adr.stn<<" "<<s[i].adr.cty<<endl;        
    }

    
    return 0;
}
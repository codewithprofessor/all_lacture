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
    int mrk[5];             //Marks
    adres adr;              //variable for 1st structure
};



int main()
{
    // code by ali
    int sum=0,r;
    cout<<"How Much Student You Want to Enter :";
    cin>>r;
    student *s=new student [r];
    for(int i=0;i<r;i++)
    {
        cout<<"Enter the Roll Number  :";
        cin>>s[i].rl;
        cout<<"Enter the Name  :";
        cin.ignore();
        cin.getline(s[i].nm,30);
        for(int j=0;j<5;j++)         //for 5 subjects
        {
            cout<<"Enter the Number of Subject  :";
            cin>>s[i].mrk[j];
            sum+=s[i].mrk[j];
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
        cout<<setw(4)<<s[i].rl<<setw(20)<<s[i].nm<<setw(5)<<sum<<setw(30)<<s[i].adr.hm<<" Street "<<s[i].adr.stn<<" "<<s[i].adr.cty<<endl;        
    }

    
    return 0;
}
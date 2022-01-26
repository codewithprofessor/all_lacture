#include<iostream>
#include<string>
#include<iomanip>
using namespace std;
struct match
{
    string nm;
    int sr,s1,s2,s3;
    int avg;
};

void input(match *a,int b)
{
    for(int i=0;i<b;i++)
    {
        
        a[i].sr=i;
        cout<<"Enter the Name  : ";
        cin.ignore();
        getline(cin,a[i].nm);
        cout<<"Etner the Score1 : ";
        cin>>a[i].s1;
        cout<<"Etner the Score2 : ";
        cin>>a[i].s2;
        cout<<"Etner the Score3 : ";
        cin>>a[i].s3;

    }
}
void display(match *a,int b)
{
    cout<<"\tCRICKTERS TABLE"<<endl;
    cout<<setw(29)<<"_______________________________"<<endl;
    cout<<setw(2)<<"NO"<<setw(15)<<"PLAYER NAME"<<setw(4)<<"S1"<<setw(4)<<"S2"<<setw(4)<<"S3"<<setw(4)<<"Avg"<<endl;
    cout<<setw(29)<<"_______________________________"<<endl;
    
    for(int i=0;i<b;i++)
    {
        a[i].avg=(a[i].s1+a[i].s3+a[i].s2)/3;
        cout<<setw(2)<<a[i].sr<<setw(15)<<a[i].nm<<setw(3)<<a[i].s1<<setw(3)<<a[i].s2<<setw(3)<<a[i].s3<<setw(4)<<a[i].avg<<endl;
    }

}
int main()
{
    // code by ali
    match a[3];
    input(a,3);
    display(a,3);
    return 0;
}
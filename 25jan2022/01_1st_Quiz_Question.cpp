#include<iostream>
#include<string>
#include<iomanip>
using namespace std;

struct date
{
    int day,month,year;
};
struct phonebook
{
    string name;
    string city;
    string telephoon;
    date dt;
};

int main()
{
    // code by ali
    phonebook a;
    cout<<"Enter your Name  :";
    getline(cin,a.name);
    cout<<"Enter your city  :";
    getline(cin,a.city);
    cout<<"Enter your TelePhone no.  :";
    getline(cin,a.telephoon);
    cout<<"Enter the day  :";
    cin>>a.dt.day;
    cout<<"Enter the  month  :";
    cin>>a.dt.month;
    cout<<"Enter the  year  :";
    cin>>a.dt.year;

    cout<<setw(3)<<"DD/"<<setw(3)<<"MM/"<<setw(4)<<"YYYY"<<setw(10)<<"NAME  "<<setw(8)<<"CITY "<<setw(15)<<"PHONE NO "<<endl;
    cout<<setw(2)<<a.dt.day<<"/"<<setw(2)<<a.dt.month<<"/"<<setw(4)<<a.dt.year<<setw(10)<<a.name<<setw(8)<<a.city<<setw(15)<<a.telephoon<<endl;

    
    return 0;
}
#include<iostream>
#include<iomanip>
using namespace std;

struct diminction
{
    int lenth;
    int width;
};
struct  Result
{
    int area;
    int perimeter;
};
struct Rectangle
{
    diminction dm;
    Result rl;
};

int main()
{
    // code by ali
    Rectangle a;

    cout<<"Enter The Lenth Of Rectangle   :";
    cin>>a.dm.lenth;
    cout<<"Enter The Width Of Rectangle   :";
    cin>>a.dm.width;

    a.rl.area=a.dm.width*a.dm.lenth;
    a.rl.perimeter=(a.dm.width+a.dm.lenth)*2;

    cout<<"The Area of Rectangular is :  "<<a.rl.area<<" unit sqr"<<endl;
    cout<<"The Perimeter of Rectangular is :  "<<a.rl.perimeter<<" sqr unit"<<endl;

    return 0;
}
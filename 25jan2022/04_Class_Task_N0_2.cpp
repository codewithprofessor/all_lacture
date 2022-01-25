#include<iostream>
using namespace std;

int fun(int &lenth,int &width)
{
    int area;
    cout<<"Enter the lenth  ";
    cin>>lenth;
    cout<<"Etner the width  ";
    cin>>width;
    area=width*lenth;
    return area;
}
int per(int lenth,int width)
{
    int peri=(lenth+width)*2;
    return peri;
}

int main()
{
    // code by ali
    int lenth,width;
    int b=fun(lenth,width);
    cout<<"The Arae is =  "<<b<<"unit sqr"<<endl;
    cout<<"The Perimeter is  =  "<<per(lenth,width)<<"Sqr Unit"<<endl;
    return 0;
}
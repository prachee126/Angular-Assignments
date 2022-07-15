#include<iostream>
using namespace std;

template<class T>
T Addition(T no1,T no2)
{
    T sum;
    sum=no1+no2;

    return sum;
}

int main()
{
    int a=0,b=0,ret=0;
    cout<<"Enter 2 numbers"<<endl;
    cin>>a>>b;
    ret=Addition(a,b);
    cout<<ret<<endl;


    float a1=0.0,b1=0.0,ret1=0.0;
    cout<<"Enter 2 numbers"<<endl;
    cin>>a1>>b1;
    ret1=Addition(a1,b1);
    cout<<ret1<<endl;
}
#include<iostream>
using namespace std;

template <class T>
void Display(T *Arr,int size)
{
    int i=0;
    for(i=0;i<size;i++)
    {
        cout<<Arr[i]<<endl;
    }
}
template <class T>
T Max(T *Arr,int size)
{
    int i=0;
    T maxi=Arr[0];
    for(i=1;i<size;i++)
    {
        if(Arr[i]>maxi)
        {
            maxi=Arr[i];
        }
    }
    return maxi;
}

int main()
{
    cout<<"int array"<<endl;
    int Arr[]={10,20,-4,7,6,-32};
    int r=Max(Arr,6);
    cout<<r<<endl;
    
    cout<<"float array"<<endl;
    float brr[]={1.0,2.0,4.6,7.8,6.5,3.9};
    Display(brr,6);
    float f=Max(brr,6);
    cout<<"max from F array:\t"<<f<<endl;

    cout<<"char array"<<endl;
    char crr[]={'a','b','g','d','r','u'};
     Display(crr,6);
    cout<<"max from char array"<<endl;
    char ret=Max(crr,6);
    cout<<ret;

    return 0;
}
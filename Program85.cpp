#include<iostream>
using namespace std;

template <class T>
class ArrayX
{
    public:
     T *Arr;
     int size;

     ArrayX(int value);
     void Accept();
     void Display();
    T Max();
};

template <class T>
ArrayX<T>::ArrayX(int value)
{
     size=value;
    Arr=new T[size];
}

template <class T>
void ArrayX<T>::Accept()
{
    cout<<"Enter Elements"<<endl;
    for(int i=0;i<size;i++)
    {
         cin>>Arr[i];
    }
}

template <class T>     
void ArrayX<T>::Display()
{
    cout<<" Elements:"<<endl;
    for(int i=0;i<size;i++)
    {
        cout<<Arr[i]<<endl;
    }
}
template <class T>
T ArrayX<T>::Max()
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
    int size=0,r=0;
    cout<<"enter size"<<endl;
    cin>>size;

    ArrayX <int>Aobj(size);
    Aobj.Accept();
    Aobj.Display();

     r=Aobj.Max();
    cout<<"max: "<<r<<endl;
    
    
    ArrayX <char>Aobj1(size);
    Aobj1.Accept();
    Aobj1.Display();

     r=Aobj1.Max();
    cout<<"max: "<<r<<endl;
    
    return 0;
}
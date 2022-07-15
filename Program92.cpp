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
        T Min();
    int Freq(T);
    int FirstOcc(T Value);
    int LastOcc(T Value);
    T Multiplay(T Value1,T Value2);
    T Largest(T Value1,T Value2,T Value3);
    T Addition();
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

template <class T>
T ArrayX<T>::Min()
{
    int i=0;
    T m=Arr[0];
    for(i=1;i<size;i++)
    {
        if(Arr[i]<m)
        {
            m=Arr[i];
        }
    }
    return m;
}
template <class T>
int ArrayX<T>::Freq(T Value)
{
    int i=0, cnt=0;

    for(i=0;i<size;i++)
    {
        if(Arr[i]==Value)
        {
            cnt++;
        }
    }
    return cnt;
}
template<class T>
int ArrayX<T>::FirstOcc(T Value)
{
    int i=0, cnt=0;

    for(i=0;i<size;i++)
    {
        if(Arr[i]==Value)
        {
            cnt=i;
            break;
        }
    }
    return cnt;
}
template<class T>
int ArrayX<T>::LastOcc(T Value)
{
    int i=0, cnt=0;

    for(i=size;i>0;i++)
    {
        if(Arr[i]==Value)
        {
            cnt=i;
            break;
        }
    }
    return cnt;
}
template <class T>
T ArrayX<T>::Multiplay(T Value1,T Value2)
{
    T mult=1;
    mult=Value1*Value2;
    return mult;
}
template <class T>
T ArrayX<T>::Largest(T Value1,T Value2,T Value3)
{
    if(Value1>Value2 && Value1>Value3)
    {
        return Value1;
    }
    else
    if(Value2>Value1 && Value2>Value3)
    {
        return Value2;
    }
    else
    {
        return Value3;
    }
}

template <class T>
T ArrayX<T>::Addition()
{
    int i=0;
    T sum=0;
    for(i=0;i<size;i++)
    {
        sum=sum+Arr[i];
    }
    return sum;
}

int main()
{
    int size=0,r=0,x=0,ret=0;
    char ch;
    cout<<"enter size"<<endl;
    cin>>size;

    ArrayX <int>Aobj(size);
    Aobj.Accept();
    Aobj.Display();
    ret=Aobj.Addition();
    cout<<"Addition"<<ret<<endl;
    ret=Aobj.Min();
    cout<<"minimum"<<ret<<endl;
    cout<<"Enter int to check freq";
    cin>>x;
    ret=Aobj.Freq(x);
    cout<<"Freq"<<ret<<endl;
    r=Aobj.Max();
    cout<<"max: "<<r<<endl;
    ret=Aobj.FirstOcc(x);
    cout<<"First occurance at:\t"<<ret<<endl;
    ret=Aobj.LastOcc(x);
    cout<<"Last occurance at:\t"<<ret<<endl;
    
 ArrayX <float>Aobj3(size);
    Aobj3.Accept();
    Aobj3.Display();
    ret=Aobj3.Addition();
    cout<<"Addition"<<ret<<endl;
    ret=Aobj3.Min();
    cout<<"minimum"<<ret<<endl;
    cout<<"Enter int to check freq";
    cin>>x;
    ret=Aobj3.Freq(x);
    cout<<"Freq"<<ret<<endl;
    r=Aobj3.Max();
    cout<<"max: "<<r<<endl;
    ret=Aobj3.FirstOcc(x);
    cout<<"First occurance at:\t"<<ret<<endl;
    ret=Aobj3.LastOcc(x);
    cout<<"Last occurance at:\t"<<ret<<endl;


     ArrayX <char>Aobj1(size);
    Aobj1.Accept();
    Aobj1.Display();
    cout<<"Enter char to check";
    cin>>ch;
    ret=Aobj1.Freq(ch);
    cout<<"Freq"<<ret<<endl;
    r=Aobj1.Max();
    cout<<"max: "<<r<<endl;
    ret=Aobj1.FirstOcc(ch);
    cout<<"First occurance at:\t"<<ret<<endl;
    ret=Aobj1.LastOcc(ch);
    cout<<"Last occurance at:\t"<<ret<<endl;
    
    
    return 0;
}
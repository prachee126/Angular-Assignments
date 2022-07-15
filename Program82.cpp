#include<iostream>
using namespace std;
    template <class T>
    void Swapping(T *iNo1,T *iNo2)
    {
        T Temp;
        Temp=*iNo1;
        *iNo1=*iNo2;
        *iNo2=Temp;
     
    }
template <class T>
    void SwappingRef(T &p,T &q)
    {
        T temp;
        temp=p;
        p=q;
        q=temp;
          
    }



int main()
{
    int iValue1=0,iValue2=0;
    cout<<"Enter 2 numbers:"<<endl;
    cin>>iValue1>>iValue2;
     cout<<"You Entered:\t"<<iValue1<<"\t"<<iValue2<<endl;
       
    SwappingRef(iValue1,iValue2);
    cout<<"After swapping by Reference:\t"<<iValue1<<"\t"<<iValue2<<endl;
    
    float fValue1=0.0,fValue2=0.0;
    cout<<"Enter 2 numbers:"<<endl;
    cin>>fValue1>>fValue2;
    SwappingRef(fValue1,fValue2);
    cout<<"After swapping by Reference:\t"<<fValue1<<"\t"<<fValue2<<endl;
    
    char cValue1=0,cValue2=0;
    cout<<"Enter 2 characters:"<<endl;
    cin>>cValue1>>cValue2;
     cout<<"You Entered:\t"<<cValue1<<"\t"<<cValue2<<endl;
       
    SwappingRef(cValue1,cValue2);
    cout<<"After swapping by Reference:\t"<<cValue1<<"\t"<<cValue2<<endl;
    
    
    return 0;
}

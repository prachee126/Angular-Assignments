#include<iostream>
using namespace std;


void Display(char *Arr)
{
    int i=0;
    while (*Arr!='\0')
    {
        cout<<*Arr<<endl;
        Arr++;
    }
}
int strlrnX(char *Arr)
{
    int cnt=0;
    while(*Arr!='\0')
    {
        cnt++;
        Arr++;
    }
    return cnt;
}
int countocc(char *Arr)
{
    int cnt=0;
    while(*Arr!='\0')
    {
        if(*Arr=='l' || *Arr=='L')
        {
            cnt++;
        }
        Arr++;
    }
    return cnt;
}
int main()
{
    char Arr[20];
    int ret=0;
    cout<<"Enter string"<<endl;
   //scanf("%[^'\n']s",Arr);
    cin.getline(Arr,20);
    Display(Arr);
    ret=strlrnX(Arr);
    cout<<"length of string:\t"<<ret<<endl;
    ret=countocc(Arr); 
    cout<<"occurance\t"<<ret<<endl;  
    return 0;
}
#include<iostream>
using namespace std;

CheckDivision(char c)
{
    
    if(c>='a' && c<='z')
    {
        c=c-32;
    }
    switch(c)
    {
        case 'A':cout<<"Exam time:\t7am";
                break;
        case 'B':cout<<"Exam time:\t8:30am";
                break;
        case 'C':cout<<"Exam time:\t10:30am";
                break;
        case 'D':cout<<"Exam time:\t11am";
                break;
        default:cout<<"Enter proper division"<<endl;
                break;
        case 0:break;                                        
    }
    
}
void strcpyX(char *src, char *dest)
{
    while (*src!='\0')
    {
        *dest=*src;
        dest++;
        src++;
        
    }
    *dest='\0';
   
}
void strncpyX(char *src,char *dest,int cnt)
{
    while(*src!='\0' && cnt!=0)
    {
        *dest=*src;
        dest++;
        src++;
        cnt--;
    }
    *dest='\0';
}
void CpyCapitals(char *src,char *dest)
{
    while (*src!='\0')
    {
        if (*src>='A' && *src<='Z')
        {
            *dest=*src;
             dest++;
        }
       
        src++;      
    }
    *dest='\0';
}
void CpySmall(char *src,char *dest)
{
    while(*src!='\0')
    {
        if(*src>='a' && *src<='z')
        {
            *dest=*src;
            dest++;
        }
        
        src++;
    }
    *dest='\0';
}
void strcatX(char *src,char *dest)
{
    while (*src!='\0')
    {
        src++;
    }
    while (*dest!='\0')
    {
        *src=*dest;
        src++;
        dest++;
    }
    *src='\0';
    
}
void strcpyreverse(char *src,char *dest)
{
    
    char *end=src;

    while (*end!='\0')
    {
        end++;
    }
    end--;
    
    while (*end!=*src)
    {
        *dest=*end;
        end--;
        dest++;
    }
    if(*end==*src)
    {
        *dest=*end;
    }
    *dest='\0';
    
}
void strcpyRmvSpaces(char *src,char *dest)
{
    while (*src!='\0')
    {
        if(*src!=' ')
        {
            *dest=*src;
            dest++;
        }   
        src++;
    }
    *dest='\0';
    
}

void strcpyChangingCase(char *src,char *dest)
{
    while (*src!='\0')
    {
        if(*src>='a' && *src<='z')
        {
            *src=*src-32;
        }  
        else 
         if(*src>='A' && *src<='Z')
        {
            *src=*src+32;
        }   
        *dest=*src;
        dest++;
        src++;
    }
    *dest='\0';
    
}
void strstrX(char *str1,char *str2)
{
    int cnt=0;
    while (*str1!='\0' && *str2!='\0' )
    {
        if(*str1==*str2)
        {
            cnt=1;
        }
        else
        {
            cnt=0;
        }
        if(cnt==0)
        {
            break;
        }
    }
    cout<<"not present";
    if(cnt==1)
    {
        cout<<"present";
    }
}
int main()
{
    char c, str1[20],str2[20];
    int ch=1;
    
   
    while(ch>0)
    {
        cout<<"enter choice:\t"<<endl;
       
        cout<<"1:\tstrcpy"<<endl;
        cout<<"2:\tstrncpy"<<endl;
        cout<<"3:\tget exam time"<<endl;
        cout<<"4:\tCopy only capitals"<<endl;
        cout<<"5:\tCopy only small"<<endl;
        cout<<"6:\tConcatenate strings"<<endl;
        cout<<"7:\tCopy revesrse string"<<endl;
        cout<<"8:\tCopy string removing white spaces:"<<endl;
        cout<<"9:\tCopy string toggeling case:"<<endl;//ass28 q3,4,5
        cout<<"0:\t Enter 0 to exit"<<endl;
        cin>>ch;
        switch (ch)
        {
        case 1:
                cout<<"Enter  string\n";
                cin.getline(str1,20);
                cin.getline(str1,20);
                strcpyX(str1,str2);
                cout<<"source string:"<<str1<<"\n"<<"copied string\t"<<str2<<endl;
                break;
        case 2:
                cout<<"Enter  string\n";
                cin.getline(str1,20);
                cin.getline(str1,20);
                strncpyX(str1,str2,4);
                cout<<"source string:"<<str1<<"\n"<<"copied string\t"<<str2<<endl;
                break;
        case 3: cout<<"enter Division to get exam time:"<<endl;
                cin>>c;
                CheckDivision(c);
                break;  
        case 4:
                cout<<"Enter  string\n";
                cin.getline(str1,20);
                cin.getline(str1,20);
                CpyCapitals(str1,str2);
                cout<<"source string:"<<str1<<"\n"<<"copied string\t"<<str2<<endl;
                break;   
        case 5:
                cout<<"Enter  string\n";
                cin.getline(str1,20);
                cin.getline(str1,20);
                CpySmall(str1,str2);
                cout<<"source string:"<<str1<<"\n"<<"copied string\t"<<str2<<endl;
                break;           
         case 6:
                cout<<"Enter  string\n";
                cin.getline(str1,20);
                cin.getline(str1,20);
                cout<<"Enter  string\n";
                cin.getline(str2,20);
                cout<<"source string:"<<str1<<endl;
                strcatX(str1,str2);
                cout<<"concatenated string:\t"<<str1<<endl;
                break;    
        case 7:
                cout<<"Enter  string\n";
                cin.getline(str1,20);
                cin.getline(str1,20);
                cout<<"source string:"<<str1<<endl;
                strcpyreverse(str1,str2);
                cout<<"copy reverse string:\t"<<str2<<endl;
                break;
         case 8:
                cout<<"Enter  string\n";
                cin.getline(str1,20);
                cin.getline(str1,20);
                cout<<"source string:"<<str1<<endl;
                strcpyRmvSpaces(str1,str2);
                cout<<"copy string removing spaces:\t"<<str2<<endl;
                break;        
        case 9:
                cout<<"Enter  string\n";
                cin.getline(str1,20);
                cin.getline(str1,20);
                cout<<"source string:"<<str1<<endl;
                strcpyChangingCase(str1,str2);
                cout<<"copy string changing case:\t"<<str2<<endl;
                break;     
        case 10:
                cout<<"Enter  string\n";
                cin.getline(str1,20);
                cin.getline(str1,20);
                cout<<"Enter  string\n";
                cin.getline(str2,20);
               
                strstrX(str1,str2);
                break;                                                       
        default:cout<<"EXIT"<<endl;    
                break;
        }
    }
    return 0;
}
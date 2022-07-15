#include<iostream>
using namespace std;

int CountCapital(char *str)
{
    int cnt=0;
    while(*str!='\0')
    {
        if(*str>='A' && *str<='Z')
        {
            cnt++;
        }
        str++;
    }
    return cnt;
}

int CountSmall(char *str)
{
    int cnt=0;
    while(*str!='\0')
    {
        if(*str>='a' && *str<='z')
        {
            cnt++;
        }
        str++;
    }
    return cnt;
}

int CountSpaces(char *str)
{
    int cnt=0;
    while(*str!='\0')
    {
        if(*str==' ')
        {
            cnt++;
        }
        str++;
    }
    return cnt;
}

int CountVowels(char *str)
{
    int cnt=0;
    while(*str!='\0')
    {
        if(*str=='a' || *str=='e' || *str=='i' || *str=='o' || *str=='u' ||*str=='A' || *str=='E' || *str=='I' || *str=='O' || *str=='U')
        {
            cnt++;
        }
        str++;
    }
    return cnt;
}

void strlwrX(char *str)
{
    while(*str!='\0')
    {
        if((*str>='A') && (*str<='Z'))
        {
            *str=*str+32;
        }
        str++;
    }
}

void struperX(char *str)
{
    while(*str!='\0')
    {
        if((*str>='a') && (*str<='z'))
        {
            *str=*str-32;
        }
        str++;
    }
}


void ToggleCase(char *str)
{
    while(*str!='\0')
    {
         if((*str>='a') && (*str<='z'))
        {
            *str=*str-32;
        }
       else if((*str>='A') && (*str<='Z'))
        {
            *str=*str+32;
        }
        str++;
    }
}
 
void ReverseString(char *str)
{
    char *end=str;
    char *start=str;
    char s='\0';
    while (*end!='\0')
    {
        end++;
        
    }
    //end is at \0 
    end--;
    
    while(start<end)
    {
        //swap
        s=*end;
        *end=*start;
        *start=s;
      
      //pointer increment decre
        start++;
        end--;
    }
    
}


void strcpyX(char *str,char *dest)
{
   while(*str!='\0')
    {
        *dest=*str;

        dest++;
        str++;
    }
    *dest='\0';
}

void strcatX(char *str,char *src)
{
   while(*str!='\0')
    {
        str++;        
    }
    while (*src!='\0')
    {
        *str=*src;
        src++;
        str++;
    }
    *str='\0';
    
}
int strlenx(char *str)
{
    int cnt=0;
    while(*str!='\0')
    {
        cnt++;
        str++;
    }
    return cnt++;
}
bool strcmpX(char *str1,char *str2)
{
    while (*str1!='\0' && *str2!='\0')
    {
            
        if(*str1!=*str2)
        {
            if(*str1>='A' && *str1<='Z')
            {
                *str1=*str1-32;
            }
            else if(*str1>='a' && *str2<='z')
            {
                *str1=*str1+32;
            }
            if(*str1!=*str2)
            {
                break;
            }
            break;
        }
        str1++;
        str2++;
    }

    if(*str1=='\0' && *str2=='\0')
    {
        return true;
    }

    else
    {
        return false;
    }
}
void DisplayAsciiTable()
{
    int i=0;
    for(i=0;i<255;i++)
	{
		printf("%d\t%c\t\n",i,i);
	}
}
void DisplayDigits(char *str)
{
    while(*str!='\0')
    {
        if(*str>=48 && *str<=57)
        {
            cout<<*str<<'\t';
        }
        str++;
    }
}
void ToggleCharacter(char c)
{
    if(c>=65 && c<=90)
    {
        c=c+32;
    }
    else
    if(c>=97 && c<=127)
    {
        c=c-32;
    }
    cout<<"changed case character\t"<<c<<endl;
}

void Displaycharacters(char c)
{
    int i=0;
    
    if(c>=65 && c<=90)
    {
        for(i=c;i<='Z';i++)
        {
            printf("%c\t",i);
        }
    }
    else
    if(c>=97 && c<=122)
    {
        for(i='z';i>='a';i--)
        {
            printf("%c\t",i);
        }
    }
    cout<<'\n';
}
void CheckSpecialSymbol(char c)
{
     if(c>='a' && c<='z' || c>='A' && c<='Z')
     {
         cout<<"Alphabate"<<endl;
     }
     else
     {
         cout<<"Special Symbol"<<endl;
     }
   
}
void CheckCapital(char c)
{
    if(c>='A' && c<='Z')
    {
        cout<<"Capital"<<endl;
    }
}
void CheckSmall(char c)
{
  if(c>='a' && c<='a')
    {
        cout<<"Small"<<endl;
    }   
}
bool CheckPresence(char *str,char c)
{
    bool flag=false;
    while(*str!='\0')
    {
        if(*str==c)
        {
            flag=true;
        }
        str++;
    }
    return flag;
}
int CountFreq(char *str,char c)
{
    
    int cnt=0;
    while(*str!='\0')
    {
        if(*str==c)
        {
            cnt++;
        }
        str++;
    }
    return cnt;
}
int CheckFirstOccurence(char *str,char c)
{
    
    int cnt=0;
    while(*str!='\0')
    {
        if(*str==c)
        {
            break;
        }
        str++;
        cnt++;
    }
    return cnt;
}

int CheckLastOccurence(char *str,char c)
{
    
    int cnt=0,i=0;
    while(*str!='\0')
    {
        if(*str==c)
        {
            cnt=i;
        }
        i++;
        str++;
    }
    return cnt;
}

int main()
{
    char str[20];
     char dest[20];
    // char c;
    //int ret=0,ch=1;
    bool bret=false;
   

   
    while(ch>0)
    {
        cout<<"Enter choice"<<endl;
        cout<<"1\t Count Captial"<<endl;
        cout<<"2\t Count Small"<<endl;
        cout<<"3\t Count spaces"<<endl;
        cout<<"4\t Count Vowels"<<endl; 
        cout<<"5\t Convert into Small"<<endl;
        cout<<"6\t Convert into Uppercase"<<endl;
        cout<<"7\t Toggle Case"<<endl;
        cout<<"8\t Reverse string"<<endl;
        cout<<"9\t Copy string"<<endl;
        cout<<"10\t Concatinate string"<<endl;
        cout<<"11\t Compare strings"<<endl;
        cout<<"12\t Display Ascii Table"<<endl;
        cout<<"13\t Display Digits from string"<<endl;
        cout<<"14\t Toggle character"<<endl;
        cout<<"15\t Display All alphabetes from given character"<<endl;
        cout<<"16\tCheck special symbol or not"<<endl;
        cout<<"17\tCheck Presence of character"<<endl;
        cout<<"18\tCheck Frequency of character"<<endl;
        cout<<"19\tCheck 1st Occurence"<<endl;
        cout<<"20\tCheck Last Occurence"<<endl;
        cout<<"0\tEnter 0 to exit"<<endl;
        
        cin>>ch;


        switch(ch)
        {
            case 1: cout<<"Enter string"<<endl;
                    cin.getline(str,20);
                    cin.getline(str,20);
                    ret=CountCapital(str);
                    cout<<"Capital Letters:\t"<<ret<<endl;
                    break;

            case 2: cout<<"Enter string"<<endl;
                    cin.getline(str,20);
                    ret=CountSmall(str);
                    cout<<"small letteres:\t"<<ret<<endl;
                    break;

            case 3: cout<<"Enter string"<<endl;
                    cin.getline(str,20);
                    ret=CountSpaces(str);
                    cout<<"Spaces:\t"<<ret<<endl;
                    break;
            case 4: cout<<"Enter string"<<endl;
                    cin.getline(str,20);
                    ret=CountVowels(str);
                    cout<<"Vowel count:\t"<<ret<<endl;
                    break;
            case 5: cout<<"Enter string"<<endl;
                    cin.getline(str,20);
                    strlwrX(str);
                    cout<<"Lower case string:\t"<<str<<endl;
                    break;
            case 6: cout<<"Enter string"<<endl;
                    cin.getline(str,20);
                    struperX(str);
                    cout<<"Upper case string:\t"<<str<<endl;
                    break;                
                                    
            case 7: cout<<"Enter string"<<endl;
                    cin.getline(str,20);
                    ToggleCase(str);
                    cout<<"Toggle case string:\t"<<str<<endl;
                    break;                
            case 8:
                    cout<<"Enter string"<<endl;
                    cin.getline(str,20);
                    ReverseString(str);
                    cout<<"Reversed string:\t"<<str<<endl;
                    break;
            case 9: cout<<"Enter string"<<endl;
                    cin.getline(str,20);
                    cout<<"Enter string"<<endl;
                    cin.getline(dest,20);
                    strcpyX(str,dest);
                    cout<<"source string:"<<str<<"\n"<<"copied string\t"<<dest<<endl;
                    break;
            case 10:cout<<"Enter string"<<endl;
                    cin.getline(str,20);
                    cout<<"Enter string"<<endl;
                    cin.getline(dest,20);
                      cout<<"original string\t"<<str<<endl;  
                     strcatX(str,dest);
                    cout<<" concatenated string:"<<str<<endl;
                    break;
            case 11:cout<<"Enter string"<<endl;
                    cin.getline(str,20);
                    cout<<"Enter string"<<endl;
                    cin.getline(dest,20);
                    bret=strcmpX(str,dest);
                    if(bret==true)
                    {
                        cout<<"equal strings"<<endl;
                    }                              
                    else
                    {
                        cout<<"Not equals"<<endl;
                    }
                    break;
            case 12: DisplayAsciiTable();
                    break;
            case 13:DisplayDigits(str);
                    break;
            case 14: cout<<"Enter character"<<endl;
                    cin>>c; 
                    ToggleCharacter(c);     
                    break; 
            case 15:cout<<"Enter character"<<endl;
                    cin>>c; 
                    Displaycharacters(c);     
                    break;     
            case 16:cout<<"Enter character"<<endl;
                    cin>>c; 
                    CheckSpecialSymbol(c);     
                    break; 
            case 17:cout<<"Enter string"<<endl;
                    cin.getline(str,20);
                    cin.getline(str,20);
                    cout<<"Enter character"<<endl;
                    cin>>c; 
                    bret=CheckPresence(str,c);
                    if(bret==true)
                    {
                        cout<<"present"<<endl;
                    }
                    else
                    {
                        cout<<"not present"<<endl;
                    }
                    break;             
             case 18:cout<<"Enter string"<<endl;
                    cin.getline(str,20);
                     cin.getline(str,20);
                    cout<<"Enter character"<<endl;
                    cin>>c; 
                    ret=CountFreq(str,c);
                    cout<<"Frequency of charater:\t"<<ret<<endl;     
                    break;   
            case 19:cout<<"Enter string"<<endl;
                    cin.getline(str,20);
                    cin.getline(str,20);
                    cout<<"Enter character"<<endl;
                    cin>>c; 
                    ret=CheckFirstOccurence(str,c);
                    cout<<"1st occurence of charater:\t"<<ret<<endl;     
                    break;   
            case 20:cout<<"Enter string"<<endl;
                    cin.getline(str,20);
                    cin.getline(str,20);
                    cout<<"Enter character"<<endl;
                    cin>>c; 
                    ret=CheckLastOccurence(str,c);
                    cout<<"Last Occurence of charater:\t"<<ret<<endl;     
                    break;                               

            case 0: break;

            default:cout<<"Enter proper";
                    break;        
        }
    }
    return 0;
}
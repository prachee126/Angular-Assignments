#include<stdio.h>

void Display(int no)
{
    int i=1;
    while (i<=no)
    {
        printf("*");
        i++;
    }
    
    
}

void DisplayR(int no)
{
    static int n=0;
    if(n<no)
    {
        printf("*\t");
        n++;
        DisplayR(no);     //Recursive call
    }
}

void DisplayR1(int no)
{
    static int n=1;
    if(n<=no)
    {
        printf("%d\t",n);
        n++;
        DisplayR1(no);     //Recursive call
    }
}

void DisplayR2(int no)
{
    
    static int n=1;
   
    if(n<=no)
    {
 int cnt=no;     
        printf("%d\t",cnt);
        n++;
     
        DisplayR2(no);     //Recursive call
           cnt--;
    }
}
void DisplayR3(int no)
{
     static int n=1;
     static char ch='A';
    if(n<=no)
    {
        printf("%c\t",ch);
        n++;
        ch++;
        DisplayR3(no);     //Recursive call
    }
}

void DisplayR4(int no)
{
     static int n=1;
     static char ch='a';
    if(n<=no)
    {
        printf("%c\t",ch);
        n++;
        ch++;
        DisplayR4(no);     //Recursive call
    }
}
void DisplayR5(int no)
{
     static int n=1;
     
    if(n<=no)
    {
        if(n%2==0)
        {
            printf("*\t");
        }
        else
        {
            printf("%d",n);
        }
        n++;
        DisplayR4(no);     //Recursive call
    }
}
int SumOfDigit(int no)
{
     int iDigit=0;
    static int sum=0;
    if(no!=0)
    {
        iDigit=no%10;
        sum=sum+iDigit;
        no=no/10;
        SumOfDigit(no);

    }
    return sum;
}
void ProdOfDigit(int no)
{
     int iDigit=0;
  
    static int prod=1;
    if(no!=0)
    {
        iDigit=no%10;
        prod=prod*iDigit;
        no=no/10;
        ProdOfDigit(no);

    }
    printf("%d",prod);
}

int strlenX(char *str)
{
    static int cnt=0;
    if(*str!='\0')
    {
        cnt++;
        str++;
        strlenX(str);
    }    
    return cnt;
}
 int Fact(int n)
{
    static int iFact=1;
    if(n>0)
    {
        iFact=iFact*n;
        n--;
        Fact(n);
    }
    return iFact;
}

int main()
{
    int ret=0;
    char arr[20];
    printf("Enter string\n");
    scanf("%[^'\n']s",arr);
    ret=strlenX(arr);

    printf("%d",ret);
    ret=Fact(4);
    printf("%d",ret);
   //Display(4);
 //   DisplayR4(4);
    SumOfDigit(123);
    return 0;
}
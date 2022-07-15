#include<stdio.h>

int CountSmall(char *str)
{
    static int cnt=0;
    if (*str!='\0')
    {
        if((*str>='a') && (*str<='z'))
        {
            cnt++;
        }
        str++;
     CountSmall(str);  
    }
     
    return cnt;
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
void Display(int no)
{
    static char ch='a';
    if(no>0)
    {
        printf("%c\t",ch);
        no--;
        ch++;
        Display(no);
    }
}
//272prog
void Displaychar(char *str)
{
    if (*str!='\0')
    {
        Displaychar(str+1);
        printf("\n%s\n",str);
        //str++;
       
    }
    
}

int main()
{
    char str[20];
    int iRet=0;
    printf("Enter string\n");
    scanf("%s",str);

    iRet=CountSmall(str);
    printf("Small characters\t%d",iRet);
    iRet=SumOfDigit(132);
    printf("\nsum:\t%d\n",iRet);
    Display(4);
    Displaychar(str);
    return 0;

}
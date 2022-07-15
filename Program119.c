#include<stdio.h>

int CountSpaces(char *str)
{
    static int cnt=0;

    if(*str!='\0')
    {
        if(*str==' ')
        cnt++;
        str++;
        CountSpaces(str);
    }
    return cnt;
}
int CheckLargestDigit(int iNo)
{
    int digit=0;
    static int large=0;
    if(iNo!=0)
    {
        digit=iNo%10;
        if(digit>large)
        {
            large=digit;
        }
        iNo=iNo/10;
        CheckLargestDigit(iNo);
    }
    return large;
}
int CountSmall(char *str)
{
    static int cnt=0;

    if(*str!='\0')
    {
        if(*str>='a' && *str<='z')
        {
            cnt++;
        }
        str++;
        CountSmall(str);
    }
    return cnt;
}
int CheckSmallestDigit(int iNo)
{
    int digit=0;
    static int large=0;
    if(iNo!=0)
    {
        digit=iNo%10;
        if(digit<large)
        {
            large=digit;
        }
        iNo=iNo/10;
        CheckLargestDigit(iNo);
    }
    return large;
}
int Reverse(int iNo)
{
    int digit=0;
    static int iRet=0;
    if(iNo!=0)
    {
        digit=iNo%10;
        iRet=iRet*10+digit;
        iNo=iNo/10;
        Reverse(iNo);
    }
    return iRet;
}
int main()
{
    char str[10];
    int ret=0;
    int iValue=0;
    printf("Enter string\n");
    scanf("%[^'\n']s",str);

    ret=CountSpaces(str);
    printf("spaces\t%d\n",ret);
    ret=CountSmall(str);
    printf("smalls\t%d\n",ret);
   
    printf("Enter number\n");
    scanf("%d",&iValue);

   ret=CheckLargestDigit(iValue);
    printf("largest\t%d\n",ret);
    ret=CheckSmallestDigit(iValue);
    printf("Smallest\t%d\n",ret);
    ret=Reverse(iValue);
    printf("Reverse\t%d\n",ret);
    
    return 0;
}
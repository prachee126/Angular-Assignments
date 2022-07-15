#include<stdio.h>

int DigitsBetween(int iNo)
{
    auto int Cnt=0,iDigit=0;
    if(iNo<0)
    {
        iNo=-iNo;
    }
    while (iNo>0)
    {
        iDigit=iNo%10;
        if(iDigit>3 && iDigit<7)
        {
            Cnt++;
        }
        iNo=iNo/10;
    }
    return Cnt;
    
}

int main()
{
    auto int iValue=0,iRet=0;
    printf("Enter number\n");
    scanf("%d",&iValue);

    iRet=DigitsBetween(iValue);
    printf("DigitsBetween3&7:\t%d",iRet);

    return 0;
}
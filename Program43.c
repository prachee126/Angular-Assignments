#include<stdio.h>

int DigitMultip(int iNo)
{
    auto int Mult=1,iDigit=0;
    if(iNo<0)
    {
        iNo=-iNo;
    }
    while (iNo>0)
    {
        iDigit=iNo%10;
        Mult=Mult*iDigit;
        iNo=iNo/10;
    }
    return Mult;
    
}

int main()
{
    auto int iValue=0,iRet=0;
    printf("Enter number\n");
    scanf("%d",&iValue);

    iRet=DigitMultip(iValue);
    printf("multiplication of digits:\t%d",iRet);

    return 0;
}
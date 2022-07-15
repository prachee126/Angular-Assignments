#include<stdio.h>

int DifferenceBetnSumOfOddEven(int iNo)
{
    auto int iDigit=0, iSumOdd=0,iSumEven=0;
    if(iNo<0)
    {
        iNo=-iNo;
    }
    while (iNo>0)
    {
        iDigit=iNo%10;
        if(iDigit%2==0)
        {
            iSumEven=iSumEven+iDigit;
        }
        else if(iDigit%2!=0)
        {
            iSumOdd=iSumOdd+iDigit;
        }
        iNo=iNo/10;
    }
    return (iSumOdd-iSumEven);
    
}

int main()
{
    auto int iValue=0,iRet=0;
    printf("Enter number\n");
    scanf("%d",&iValue);

    iRet=DifferenceBetnSumOfOddEven(iValue);
    printf("Difference Betn Sum Of Odd Even digits:\t%d",iRet);

    return 0;
}
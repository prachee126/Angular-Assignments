//Count Odd digits of the number

#include<stdio.h>

int CountOddDigits(int iNo)
{
    int iDigit=0,iCnt=0;

    while (iNo!=0)
    {
        iDigit=iNo%10;
        if(iDigit%2!=0)
        {
            iCnt++;
        }
        iNo=iNo/10;
    }
    return iCnt;
    
}


int main()
{
    int iValue=0,iRet=0;

    printf("Enter number\n");
    scanf("%d",&iValue);

    iRet=CountOddDigits(iValue);
    printf("Odd digits count:\t%d",iRet);
    return 0;
}
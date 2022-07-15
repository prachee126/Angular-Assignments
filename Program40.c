#include<stdio.h>

int OddCount(int iNo)
{
    auto int OddCnt=0,iDigit=0;
    if(iNo<0)
    {
        iNo=-iNo;
    }
    while (iNo>0)
    {
        iDigit=iNo%10;
        if(iDigit%2!=0)
        {
            OddCnt++;
        }
        iNo=iNo/10;
    }
    return OddCnt;
    
}

int main()
{
    auto int iValue=0,iRet=0;
    printf("Enter number\n");
    scanf("%d",&iValue);

    iRet=OddCount(iValue);
    printf("Odd digit count:\t%d",iRet);

    return 0;
}
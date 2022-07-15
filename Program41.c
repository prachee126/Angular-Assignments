#include<stdio.h>

int EvenCount(int iNo)
{
    auto int EvenCnt=0,iDigit=0;
    if(iNo<0)
    {
        iNo=-iNo;
    }
    while (iNo>0)
    {
        iDigit=iNo%10;
        if(iDigit%2==0)
        {
            EvenCnt++;
        }
        iNo=iNo/10;
    }
    return EvenCnt;
    
}

int main()
{
    auto int iValue=0,iRet=0;
    printf("Enter number\n");
    scanf("%d",&iValue);

    iRet=EvenCount(iValue);
    printf("Even digit count:\t%d",iRet);

    return 0;
}
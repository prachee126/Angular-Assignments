#include<stdio.h>

int ReverseNum(int iNo)
{
    auto int iDigit=0,iRev=0;
    if(iNo<0)
    {
        iNo=-iNo;
    }
    while (iNo>0)
    {
        iDigit=iNo%10;
       iRev=iRev*10+iDigit;
        iNo=iNo/10;
    }
    return iRev;
    
}

int main()
{
    auto int iValue=0,iRet=0;
    printf("Enter number\n");
    scanf("%d",&iValue);

    iRet=ReverseNum(iValue);
    printf("Rev:\t%d",iRet);

    return 0;
}
#include<stdio.h>

int SumDigits(int iNo)
{
    int iSum=0,iDigit=0;
    
    if(iNo<0)
    {
        iNo=-iNo;
    }
    while (iNo>0)
    {
        iDigit=iNo%10;
        iSum=iSum+iDigit;
        iNo=iNo/10;
     }
     return iSum;
}
int main()
{
    int iValue=0,iRet=0;
    printf("Enter number\n");
    scanf("%d",&iValue);
    iRet=SumDigits(iValue);
    printf("Sum:\t%d",iRet);
    return 0;
}

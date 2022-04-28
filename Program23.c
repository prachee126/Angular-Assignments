//SumNonFactors
#include<stdio.h>

int SumNonFactors(int iNo)
{
    int i=0,iSum=0;
    if(iNo<0)
    {
        iNo=-iNo;
    }
    for (i=iNo;i>1;i--)
    {
        if(iNo%i!=0)
        {
           iSum=iSum+i;
        }
    }
    return iSum;
}

int main()
{
    int iValue=0;
    int iRet=0;

    printf("Enter number\n");
    scanf("%d",&iValue);

   iRet= SumNonFactors(iValue);
    printf("%d",iRet);
    return 0;
}
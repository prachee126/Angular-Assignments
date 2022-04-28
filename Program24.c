//SumNonFactors-SumFactors
//10 2,5=7
//10 3,4,6,7,8,9
#include<stdio.h>

int SumNonFactors(int iNo)
{
    int i=0,iSumn=0,iSumf=0;
    if(iNo<0)
    {
        iNo=-iNo;
    }
    for (i=iNo;i>1;i--)
    {
        if(iNo%i!=0)
        {
           iSumn=iSumn+i;
        }
    
        else if(iNo%i==0)
        {
            iSumf=iSumf+i;
        }
    }
    printf("%d\t",iSumf);
    printf("%d\t",iSumn);
    return iSumf-iSumn;
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
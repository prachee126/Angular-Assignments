//FactorInDescending order
#include<stdio.h>

void FactorInDescending(int iNo)
{
    int i=0;
    if(iNo<0)
    {
        iNo=-iNo;
    }
    for (i=iNo/2;i>1;i--)
    {
        if(iNo%i==0)
        {
            printf("%d\t",i);
        }
    }
}

int main()
{
    int iValue=0;
    int iRet=0;

    printf("Enter number\n");
    scanf("%d",&iValue);

    FactorInDescending(iValue);
    
    return 0;
}
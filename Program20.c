//Multiplication of Factors

#include<stdio.h>

int FactorMultiplication(int iNo)
{
    int Mult=1;
    int i=0;
    for (i=2;i<=iNo/2;i++)
    {
        if(iNo%i==0)
        {
            Mult=Mult*i;
        }
    }
    return Mult;
    
}

int main()
{
    int iValue=0;
    int iRet=0;

    printf("Enter number\n");
    scanf("%d",&iValue);

    iRet=FactorMultiplication(iValue);
    printf("FactorMultiplication\t%d",iRet);
    return 0;
}
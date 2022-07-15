#include<stdio.h>

int FactorialR(int iNo)
{
    static int iFact=1;
    
    if(iNo>0)
    {
        iFact=iNo*iFact;
        iNo--;
        FactorialR(iNo);
    }
    return iFact;
}

int main()
{
    int iRet=0, iNo=0;
    printf("Enter number\n");
    scanf("%d",&iNo);
    iRet=FactorialR(iNo);
    printf("%d",iRet);

    return 0;
}
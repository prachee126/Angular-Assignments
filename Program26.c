#include<stdio.h>

void DisplayEvenFactors(int iNo)
{
    int i=0;

    for(i=2;i<=iNo/2;i++)
    {
        if(iNo%i==0 && i%2==0)
        {
            printf("%d\t",i);
        }
    }
}


int main()
{
    int iValue=0;
    printf("Enter numnber\n");
    scanf("%d",&iValue);

    DisplayEvenFactors(iValue);
    return 0;
}
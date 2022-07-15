#include<stdio.h>
//i/p: 5
//o/p: * * * * *

void Display(int iRow)
{
    register int i=0;
    for(i=1;i<=iRow;i++)
    {
        printf("*\t");
    }
}

int main()
{
    auto int iRow=0;
    printf("Enter rows\n");
    scanf("%d",&iRow);
    Display(iRow);

    return 0;
}
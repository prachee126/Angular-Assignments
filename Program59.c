#include<stdio.h>
//i/p: 5
//o/p:5 4 3 2 1

void Display(int iRow)
{
    register int i=0;
    for(i=iRow;i>=1;i--)
    {
        printf("%d\t",i);
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
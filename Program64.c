#include<stdio.h>
//i/p: 5
//o/p:5 * 4 * 3 * 2 * 1

void Display(int iRow,int iCols)
{
    register int i=0,j=0;
    for(i=1;i<=iRow;i++)        //outer
    {
        for(j=1;j<=iCols;j++)
        {
            printf("*\t");
        }
        printf("\n");
    }
}

int main()
{
    auto int iRow=0,iCols=0;
    printf("Enter rows & cols\n");
    scanf("%d%d",&iRow,&iCols);
    Display(iRow,iCols);

    return 0;
}
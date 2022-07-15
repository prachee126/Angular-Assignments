#include<stdio.h>

void Display(int iRows,int iCols)
{
    register int i=0,j=0;
    for ( i = 1; i <= iRows; i++)
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
    auto int iRows=0,iCols=0;

    printf("Enter rows and columns\n");
    scanf("%d%d",&iRows,&iCols);

    Display(iRows,iCols);

    return 0;
}
#include<stdio.h>
//i/p: 4
//o/p:1 2 3 4 4 3 2  1

void Display(int iRow)
{
    register int i=0,j=0;

    if(iRow<0)
    {
        iRow=-iRow;
    }
    for(i=-iRow;i<=iRow;i++)
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
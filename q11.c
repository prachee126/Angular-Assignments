#include<stdio.h>
void Display(int iRow,int iCols)
{
	register int i=0,j=0;
	for(i=1;i<=iRow;i++)
	{
		for(j=1;j<=i;j++)
		{
			printf("*\t");
		}
		printf("\n");
	}
}
int main()
{
	int iRow=0,iCols=0;
	printf("Enter row & cols:\t");
	scanf("%d%d",&iRow,&iCols);
	Display(iRow,iCols);
	return 0;
}
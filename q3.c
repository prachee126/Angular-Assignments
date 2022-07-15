#include<stdio.h>
void Display(int,int);
int main()
{
	int iRow=0,iCols=0;
	printf("Enter Row & Cols:\t");
	scanf("%d%d",&iRow,&iCols);
	Display(iRow,iCols);
	return 0;
}
void Display(int iRow,int iCols)
{
	int i=0,j=0;
	for(i=1;i<=iRow;i++)
	{
		for(j=1;j<=iCols;j++)
		{
			if(i==j)
			printf("$\t");
		else
			printf("*\t");
		}
		printf("\n");
		
	}
	
	
}
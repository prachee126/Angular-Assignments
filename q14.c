#include<stdio.h>
void Display(int iRow,int iCols)
{
	int i=0,j=0;
	for(i=1;i<=iRow;i++)
	{
			for(j=1;j<=iCols;j++)
		{
			
			 if(i==1 || j==1 || i==j || i==iRow || j==iCols)
			 {
				 printf("*\t");
			 }
			else 
				printf("\t");
			 
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
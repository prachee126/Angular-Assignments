#include<stdio.h>
void Display(int iRow,int iCols)
{
	register int i=0,j=0,t=0;
	for(i=1;i<=iRow;i++)
	{
			for(j=1,t=1;j<=iCols;j++,t++)
		{
			if(i==j || j>i)
				printf("%d\t",t);
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
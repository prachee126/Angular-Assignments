#include<stdio.h>
void Display(int,int);

int main()
{
	int iRow=0,iCols=0;
	printf("Enter rows & cols:\t");
	scanf("%d%d",&iRow,&iCols);
	Display(iRow,iCols);
	return 0;
}
void Display(int iRow,int iCols)
{
	register int i=0,j=0;
	for(i=iRow;i>=1;i--)
	{
		for(j=iCols;j>=1;j--)
		{
			if(i+j==(iRow+1))
				printf("#\t");
			else
				if((j+i)>iRow)
					printf("*\t");
				else
					printf("@\t");
			
		}
		printf("\n");
	}
}
#include<stdio.h>
void Display(int,int);
int main()
{
	int iRows=0;
	int iCols=0;
	printf("Enter number of Rows & Columns:\n");
	scanf("%d%d",&iRows,&iCols);
	Display(iRows,iCols);
}

	void Display(int iRows, int iCols)
	{
		int i=0,j=0;
		char ch='a';
		
		if(iRows==0 || iCols==0)
		{
			printf("Hopeless input...Run Again\n");
		}
			else
		{ 			
			if(iRows<0 || iCols<0)
			{
			iRows=-iRows;
			iCols=-iCols;
			}
			
		}
	for(i=1;i<=iRows;i++)
	{
		for(j=1,ch='a';j<=iCols;j++,ch++)
		{	
			printf("%c\t",ch);
		}
		printf("\n");
	}
	}
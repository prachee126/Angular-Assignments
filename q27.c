#include<stdio.h>
void Display(int);
int main()
{
	int iValue=0;
	printf("Enter Number:\t");
	scanf("%d",&iValue);
	Display(iValue);
	return 0;
}
void Display(int iNo)
{
	
	int iCnt=0;
	for(iCnt=iNo;iCnt>=1;iCnt--)
	{
		printf("%d\t#\t",iCnt);
	}
}

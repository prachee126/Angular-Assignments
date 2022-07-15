#include<stdio.h>
void Display(int);
int main()
{
	int iValue=0;
	printf("Enter numb\t");
	scanf("%d",&iValue);
	Display(iValue);
	return 0;
}
	void Display(int iNo)
	{
		
		int iCnt=0;
		char chCnt='\0';
		for(chCnt='A',iCnt=1;iCnt<=iNo;chCnt++,iCnt++)
		{
		
			printf("%c\t",chCnt);
		}
	}
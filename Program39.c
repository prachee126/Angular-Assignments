#include<stdio.h>
#include<stdlib.h>

int CheckOccurace(int *Arr,int iSize,int iValue)
{
    int i=0;
    int iCnt=0;
    for(i=0;i<iSize;i++)
    {
        if(Arr[i]==iValue)
        {
            iCnt++;
        }
    }
    return iCnt;
}


int main()
{
    int iValue=0,*Arr=NULL,i=0,iSize=0;
    int bRet=0;
    printf("Enter size\n");
    scanf("%d",&iSize);
     printf("Enter number\n");
    scanf("%d",&iValue);
    Arr=(int *)malloc(sizeof(int)*iSize);//Allocation
  
    printf("Enter Array numbers\n");
    for(i=0;i<iSize;i++)
    {
       scanf("%d",&Arr[i]);
    }
    bRet=CheckOccurace(Arr,iSize,iValue);
    printf("\nOccurance:\t%d",bRet);
   
   free(Arr);       //Deallocation
   
    return 0;

}
#include<stdio.h>
#include<stdlib.h>


int Check3DigitsNumbCount(int *Arr,int iSize)
{
    
    register int i=0;
    auto int iNo=0 ,iDigit=0,iCnt=0,ThreedigitCnt=0;
    for (i=0;i<iSize;i++)
    {
       if(Arr[i]>99 && Arr[i]<1000)
        {
            ThreedigitCnt++;
        }
    }
        return ThreedigitCnt;
}

int main()
{
    auto int iRet=0,*Arr=NULL,iNo1=0,end=0,iSize=0;
    register int i=0; 
    

    printf("Enter size of array\n");
    scanf("%d",&iSize);

    Arr=(int *)malloc(sizeof(int)*iSize);

    printf("Enter Elements\n");
    for(i=0;i<iSize;i++)
    {
        scanf("%d",&Arr[i]);
    }


  iRet=Check3DigitsNumbCount(Arr,iSize);
       printf("3 digit number count:\t%d",iRet); 


    free(Arr);
    return 0;
}
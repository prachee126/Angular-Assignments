#include<stdio.h>
#include<stdlib.h>

int DeffbetnSumofOddEven(int *Arr,int iSize)
{
    register int i=0,EvenCnt=0,OddCnt=0;

    for(i=0;i<iSize;i++)
    {
        if(Arr[i]%2==0)
        {
            EvenCnt=EvenCnt+Arr[i];
        }
        else
            if(Arr[i]%2!=0)
            {
                OddCnt=OddCnt+Arr[i];
            }
    }
    return (EvenCnt-OddCnt);
}

int main()
{
    auto int *Arr=NULL,iSize=0,iRet=0;
    register int i=0;
     printf("Enter size\n");
    scanf("%d",&iSize);


    Arr=(int *)malloc(sizeof(int)*iSize);
 printf("Enter elements\n");
    for(i=0;i<iSize;i++)
    {
        scanf("%d",&Arr[i]);
    }

    iRet=DeffbetnSumofOddEven(Arr,iSize);
    printf("difference between sum of odd even:\t%d",iRet);
    return 0;
}
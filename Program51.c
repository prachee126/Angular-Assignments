#include<stdio.h>
#include<stdlib.h>

int EvenDivisibleby5(int *Arr,int iSize)
{
    register int i=0;
    auto int iCnt=0;

    for(i=0;i<iSize;i++)
    {
        if(Arr[i]%5==0 && Arr[i]%2==0)
        {
            iCnt++;
        }
        
    }
    return iCnt;
}

int main()
{
    auto int *Arr=NULL,iSize=0,iRet=0;
    register int i=0;
    
    printf("Enter size\n");
    scanf("%d",&iSize);

    Arr=(int *)malloc(sizeof(int)*iSize);
    if(Arr==NULL)
    {
        printf("Unable to Allocate the memory\n");
        return -1;
    }

     printf("Enter elements\n");
    for(i=0;i<iSize;i++)
    {
        scanf("%d",&Arr[i]);
    }

    iRet=EvenDivisibleby5(Arr,iSize);
    printf("even divisible by 5 :\t%d",iRet);
 
    free(Arr);
    return 0;
}
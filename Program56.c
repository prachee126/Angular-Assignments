#include<stdio.h>
#include<stdlib.h>

int FreqofiValue(int *Arr,int iSize,int iValue)
{
    register int i=0;
    auto int iCnt=0;

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
    auto int *Arr=NULL,iSize=0,iRet=0,iValue=0;
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

    printf("Enter number to find in array\n");
    scanf("%d",&iValue);


    iRet=FreqofiValue(Arr,iSize,iValue);
    printf("Frequency of %d\t :\t%d",iValue,iRet);
 
    free(Arr);
    return 0;
}
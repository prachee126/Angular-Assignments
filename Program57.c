#include<stdio.h>
#include<stdlib.h>

int DiffbetnFreqofEvenodd(int *Arr,int iSize)
{
    register int i=0;
    auto int iSumEven=0,iSumOdd=0;

    for(i=0;i<iSize;i++)
    {
        if(Arr[i]%2==0)
        {
            iSumEven=iSumEven+Arr[i];
        }
        else
        {
            iSumOdd=iSumOdd+Arr[i];
        }
        
    }
    return (iSumOdd-iSumEven);
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

    iRet=DiffbetnFreqofEvenodd(Arr,iSize);
    
    printf("DiffbetnFreqofEvenodd\t%d",iRet);
    
    free(Arr);
    return 0;
}
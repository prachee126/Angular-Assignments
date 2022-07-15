#include<stdio.h>
#include<stdlib.h>

#define TRUE 1
#define FALSE 0

int FreqofEven(int *Arr,int iSize)
{
    register int i=0;
    auto int flag=0;

    for(i=0;i<iSize;i++)
    {
        if(Arr[i]==11)
        {
            flag=1;
           // printf("%d",i);
            break;
        }
        
    }
    return flag;
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

    iRet=FreqofEven(Arr,iSize);
    if(iRet==1)
    printf("11 is there\n");
    else
    {
        printf("11 is not present\n");
    }
 
    free(Arr);
    return 0;
}
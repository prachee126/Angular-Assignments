#include<stdio.h>
#include<stdlib.h>
#define TRUE 1
#define FALSE 0

typedef int BOOL;

BOOL CheckNum(int *Arr,int iSize,int iNO)
{
    BOOL flag=0;
    register int i=0;
    for ( i = 0; i < iSize; i++)
    {
        if(Arr[i]==iNO)
        {
            flag=1;
            break;
        }
    }
    return flag;
}

int main()
{
    auto int *Arr=NULL,iNo=0,iSize=0;
    register int i=0; 
    auto BOOL bRet=0;

    printf("Enter size of array\n");
    scanf("%d",&iSize);

    Arr=(int *)malloc(sizeof(int)*iSize);

    printf("Enter Elements\n");
    for(i=0;i<iSize;i++)
    {
        scanf("%d",&Arr[i]);
    }

    printf("Enter number to find it in array\n");
    scanf("%d",&iNo);

    bRet=CheckNum(Arr,iSize,iNo);
    if(bRet==1)
    {
        printf("number is present\n");
    }
    else
    {
        printf("not\n");
    }

    free(Arr);
    return 0;
}
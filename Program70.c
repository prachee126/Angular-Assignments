#include<stdio.h>
#include<stdlib.h>


int CheckNum(int *Arr,int iSize,int iNO)
{
    
    register int i=0;
    auto int iOcc=0;
    for ( i = iSize; i>=1; i--)
    {
        if(Arr[i]==iNO)
        {
            iOcc=i;
            break;
        }
    }
    return iOcc;
}

int main()
{
    auto int *Arr=NULL,iNo=0,iSize=0;
    register int i=0; 
    auto int iRet=0;

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

    iRet=CheckNum(Arr,iSize,iNo);
        printf("last occurance:\t%d",iRet);
 
    free(Arr);
    return 0;  
}
#include<stdio.h>
#include<stdlib.h>


int ProductOfOdd(int *Arr,int iSize)
{
    
    register int i=0;
    auto int iProd=1;
    for ( i=0;i<iSize;i++)
    {
        if((Arr[i]%2)!=0)
        {
            iProd=iProd*Arr[i];
        }
    }
    return iProd;
    
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


  iRet=ProductOfOdd(Arr,iSize);
       printf("Product of odd:\t%d",iRet); 


    free(Arr);
    return 0;
}
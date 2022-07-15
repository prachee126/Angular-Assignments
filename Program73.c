#include<stdio.h>
#include<stdlib.h>


int Largest(int *Arr,int iSize)
{
    
    register int i=0;
    auto int iLarge=Arr[0];
    for ( i=1;i<iSize;i++)
    {
        if(iLarge<Arr[i])
        {
            iLarge=Arr[i];
        }
    }
    return iLarge;
    
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


  iRet=Largest(Arr,iSize);
       printf("Largest number:\t%d",iRet); 


    free(Arr);
    return 0;
}
#include<stdio.h>
#include<stdlib.h>


void Display(int *Arr,int iSize,int iNO1,int end)
{
    
    register int i=0;

    for ( i=0;i<iSize;i++)
    {
        if(Arr[i]>iNO1 && Arr[i]<end)
        {
            printf("%d\t",Arr[i]);
        }
    }
    
}

int main()
{
    auto int *Arr=NULL,iNo1=0,end=0,iSize=0;
    register int i=0; 
    

    printf("Enter size of array\n");
    scanf("%d",&iSize);

    Arr=(int *)malloc(sizeof(int)*iSize);

    printf("Enter Elements\n");
    for(i=0;i<iSize;i++)
    {
        scanf("%d",&Arr[i]);
    }

    printf("Enter start\n");
    scanf("%d",&iNo1);

    printf("Enter end\n");
    scanf("%d",&end);

  Display(Arr,iSize,iNo1,end);
    
    free(Arr);
    return 0;    
}
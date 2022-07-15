#include<stdio.h>
#include<stdlib.h>

void Display(int *Arr,int iSize)
{
    register int i=0;
    auto int iNo=0,iDigit=0,iSum=0;
    for ( i = 0; i < iSize; i++)
    {
        iNo=Arr[i];
        while (iNo!=0)
        {
            iDigit=iNo%10;
            iSum=iSum+iDigit;
            iNo=iNo/10;
        }
        printf("sum of\t%dis\t%d\n",Arr[i],iSum);
        iSum=0;
    }
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


  Display(Arr,iSize);
  

    free(Arr);
    return 0;
}
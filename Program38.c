#include<stdio.h>
#include<stdlib.h>

int Max(int *Arr,int iSize)
{
    auto int iMax=0;
    register int i=0;
    iMax=Arr[0];        //set to least value
   for(i=1;i<iSize;i++)
    {
        if(Arr[i]>iMax)
        {
            iMax=Arr[i];
        }
    }
    return iMax;
}
int Min(int *Arr,int iSize)
{
  auto  int iMin=0;
    register int i=0;
    iMin=Arr[0];
   for(i=0;i<iSize;i++)
    {
        if(Arr[i]<iMin)
        {
            iMin=Arr[i];
        }
    }
    return iMin;
}
int main()
{
    int ch=0,*Arr=NULL,i=0,iSize=0;
    printf("Enter size\n");
    scanf("%d",&iSize);
    Arr=(int *)malloc(sizeof(int)*iSize);

     for(i=0;i<iSize;i++)
    {
       scanf("%d",&Arr[i]);
    }
  
    printf("Enter choice \n1.Max\n2.Min\n");
    scanf("%d",&ch);
   
    switch(ch)
    {
         int iRet=0;
    case 1: iRet=Max(Arr,iSize);
                 printf("\nMaximum:\t%d",iRet);
                break;
    case 2:     iRet=Min(Arr,iSize);
                 printf("\nMinimum:\t%d",iRet);
                 break;
     default:   printf("Enter proper choice");
                break;
          
    }
    
    

    free(Arr);
    return 0;
}
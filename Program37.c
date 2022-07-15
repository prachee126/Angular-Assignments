#include<stdio.h>
#include<stdlib.h>

/*int Addition(int *Arr,int iSize)
{
    int iSum=0,i=0;
    for(i=0;i<iSize;i++)
    {
        iSum=iSum+Arr[i];
    }
    return iSum;
}*/
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
    int iRet=0,*Arr=NULL,i=0,iSize=0;
    printf("Enter size\n");
    scanf("%d",&iSize);
    
    Arr=(int *)malloc(sizeof(int)*iSize);//Allocation
   
    for(i=0;i<iSize;i++)
    {
       scanf("%d",&Arr[i]);
    }
    iRet=Min(Arr,iSize);
    printf("\nAddition:\t%d",iRet);
   
   free(Arr);       //Deallocation
   
    return 0;

}
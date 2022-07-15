#include<stdio.h>

int Sum(int *Arr,int size)
{
   static int s=0;
    if(size>0)
    {
          size--;
        s=s+Arr[size];
       Sum(Arr,size);
      
    }
    return s;
}
/*int Sum(int *Arr,int size)
{
   static int s=0;
    if(size>=0)
    {
        s=s+Arr[size];
        size--;
        
        Sum(Arr,size);
    }
    return s;
}*/


int main()
{
    int Arr[]={1,2,3,4,5};
    int size=5,iRet=0;

    iRet=Sum(Arr,size);;
    printf("%d",iRet);

    return 0;
}
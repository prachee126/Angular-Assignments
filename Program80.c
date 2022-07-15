#include<stdio.h>
#include<stdlib.h>

int main()
{
    int *Arr=NULL;
    int i=0,size=6,index=0,cnt=0,temp=0,flag=0;
  
    Arr=(int *)malloc(sizeof(int)*size);
    printf("Enter elements\n");
    for(i=0;i<size;i++)
    {
        scanf("%d",&Arr[i]);
    }
    for(i=size;i>0;i--)
    {
         
        if(Arr[i]==0)
        {
            index=i;
            cnt++;
         
        }
    }
    
    if(cnt==size-1)
    {
        printf("inside if\n");
        for(i=0;i<size;i++)
        {
            printf("%d\t",Arr[i]);
        }    
    }
    
    else
    {
        printf("inside else\n");
        while(cnt!=0)
        {

             for(i=0;i<size;i++)
            {
                  if(Arr[i]==0 && i!=size-1)
                {
                    temp=Arr[i];
                    Arr[i]=Arr[i+1];
                    Arr[i+1]=temp;
                 
                }
                temp=0;
            }
            cnt--;
        }
        for(i=0;i<size;i++)
        {
            printf("%d\t",Arr[i]);
            
        }
    }
}
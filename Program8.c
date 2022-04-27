//check Perfect
//input-> -20
//output-> 1,2,4,5,10 factors are +ve
#include<stdio.h>
#include<stdbool.h>
bool CheckPerfect(int iNo)
{
    bool flag=false;
  auto int iCnt=0,iSum=0;
    
    if(iNo<0)
    {
        iNo=-iNo;
    }
    for(iCnt=1;iCnt<=(iNo/2);iCnt++)
    {
        if((iNo%iCnt)==0)
        {
            iSum=iSum+iCnt;
        }
    
        if(iSum>iNo)
        {
            break;
        }
    }
   if(iSum==iNo)
   {
       flag=true;
   }
   return flag;
   
}


int main()
{
    int iValue=0;
    bool iRet=false;
    printf("Enter number\n");
    scanf("%d",&iValue);
    iRet=CheckPerfect(iValue);
    if(iRet==true)
    {
        printf("YESS");
    }
    else
    {
        printf("NOO!");
    }
    return 0;
}